/*===========================================================================*/
/*   (Eval/library.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/library.scm -indent -o objs/obj_u/Eval/library.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	static obj_t BGl_zc3exitza32080ze3z83zz__libraryz00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	static obj_t BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl__libraryzd2existszf3z21zz__libraryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	extern obj_t bigloo_mangle(obj_t);
	extern obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	static obj_t BGl__libraryzd2infozd2zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__libraryz00();
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	extern bool_t fexists(char *);
	extern obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_list2503z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_list2504z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_list2510z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_list2509z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl__libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2libraryz12zc0zz__libraryz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	extern obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2libraryzd2mutexza2zd2zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_getenvz00zz__osz00(char *);
	static obj_t
		BGl__libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__libraryz00();
	static obj_t BGl__libraryzd2loadzd2zz__libraryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_untranslatezd2libraryzd2namez00zz__libraryz00(obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__libraryz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2loadedzd2librariesza2zd2zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2loadzd2zz__libraryz00(obj_t, obj_t);
	extern obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t);
	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__libraryz00();
	extern obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
	static obj_t BGl_symbol2419z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2421z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2423z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_symbol2426z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2429z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2435z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_libraryzd2loadedzf3z21zz__libraryz00(obj_t);
	static obj_t BGl_symbol2460z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2463z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_oszd2classzd2zz__osz00();
	static obj_t BGl_symbol2474z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2479z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2484z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2486z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2488z00zz__libraryz00 = BUNSPEC;
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2505z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2507z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2499z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_symbol2511z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32031ze3z83zz__libraryz00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl__libraryzd2initzd2filez00zz__libraryz00(obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	static obj_t BGl__declarezd2libraryz12zc0zz__libraryz00(obj_t, obj_t);
	static obj_t BGl__libraryzd2load_ezd2zz__libraryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2librariesza2z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2437z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2439z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2441z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2443z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2445z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2447z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2449z00zz__libraryz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword2451z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2453z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl_keyword2455z00zz__libraryz00 = BUNSPEC;
	static obj_t BGl__libraryzd2loadedzf3z21zz__libraryz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
	static obj_t BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2load_ezd2zz__libraryz00(obj_t, obj_t);
	extern bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	extern obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t, obj_t);
	static obj_t BGl__libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__libraryz00();
	extern obj_t bgl_register_eval_srfi(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2translationzd2tablezd2addz12zd2envz12zz__libraryz00,
		BgL_bgl__libraryza7d2trans2518za7, va_generic_entry,
		BGl__libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string2420z00zz__libraryz00,
		BgL_bgl_string2420za700za7za7_2519za7, "library", 7);
	      DEFINE_STRING(BGl_string2422z00zz__libraryz00,
		BgL_bgl_string2422za700za7za7_2520za7, "library-safety", 14);
	      DEFINE_STRING(BGl_string2424z00zz__libraryz00,
		BgL_bgl_string2424za700za7za7_2521za7, "unsafe", 6);
	      DEFINE_STRING(BGl_string2425z00zz__libraryz00,
		BgL_bgl_string2425za700za7za7_2522za7, "u", 1);
	      DEFINE_STRING(BGl_string2427z00zz__libraryz00,
		BgL_bgl_string2427za700za7za7_2523za7, "safe", 4);
	      DEFINE_STRING(BGl_string2428z00zz__libraryz00,
		BgL_bgl_string2428za700za7za7_2524za7, "s", 1);
	      DEFINE_STRING(BGl_string2430z00zz__libraryz00,
		BgL_bgl_string2430za700za7za7_2525za7, "profile", 7);
	      DEFINE_STRING(BGl_string2431z00zz__libraryz00,
		BgL_bgl_string2431za700za7za7_2526za7, "p", 1);
	      DEFINE_STRING(BGl_string2432z00zz__libraryz00,
		BgL_bgl_string2432za700za7za7_2527za7,
		"/tmp/bigloo/runtime/Eval/library.scm", 36);
	      DEFINE_STRING(BGl_string2433z00zz__libraryz00,
		BgL_bgl_string2433za700za7za7_2528za7, "_declare-library!", 17);
	      DEFINE_STRING(BGl_string2434z00zz__libraryz00,
		BgL_bgl_string2434za700za7za7_2529za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2436z00zz__libraryz00,
		BgL_bgl_string2436za700za7za7_2530za7, "release-number", 14);
	      DEFINE_STRING(BGl_string2438z00zz__libraryz00,
		BgL_bgl_string2438za700za7za7_2531za7, "basename", 8);
	      DEFINE_STRING(BGl_string2440z00zz__libraryz00,
		BgL_bgl_string2440za700za7za7_2532za7, "class-eval", 10);
	      DEFINE_STRING(BGl_string2442z00zz__libraryz00,
		BgL_bgl_string2442za700za7za7_2533za7, "class-init", 10);
	      DEFINE_STRING(BGl_string2444z00zz__libraryz00,
		BgL_bgl_string2444za700za7za7_2534za7, "dlopen-init", 11);
	      DEFINE_STRING(BGl_string2446z00zz__libraryz00,
		BgL_bgl_string2446za700za7za7_2535za7, "eval", 4);
	      DEFINE_STRING(BGl_string2448z00zz__libraryz00,
		BgL_bgl_string2448za700za7za7_2536za7, "init", 4);
	      DEFINE_STRING(BGl_string2450z00zz__libraryz00,
		BgL_bgl_string2450za700za7za7_2537za7, "module-eval", 11);
	      DEFINE_STRING(BGl_string2452z00zz__libraryz00,
		BgL_bgl_string2452za700za7za7_2538za7, "module-init", 11);
	      DEFINE_STRING(BGl_string2454z00zz__libraryz00,
		BgL_bgl_string2454za700za7za7_2539za7, "srfi", 4);
	      DEFINE_STRING(BGl_string2456z00zz__libraryz00,
		BgL_bgl_string2456za700za7za7_2540za7, "version", 7);
	      DEFINE_STRING(BGl_string2457z00zz__libraryz00,
		BgL_bgl_string2457za700za7za7_2541za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2458z00zz__libraryz00,
		BgL_bgl_string2458za700za7za7_2542za7, "~a_~a", 5);
	      DEFINE_STRING(BGl_string2459z00zz__libraryz00,
		BgL_bgl_string2459za700za7za7_2543za7, "~a_e~a", 6);
	      DEFINE_STRING(BGl_string2461z00zz__libraryz00,
		BgL_bgl_string2461za700za7za7_2544za7, "libinfo", 7);
	      DEFINE_STRING(BGl_string2462z00zz__libraryz00,
		BgL_bgl_string2462za700za7za7_2545za7, "_library-info", 13);
	      DEFINE_STRING(BGl_string2464z00zz__libraryz00,
		BgL_bgl_string2464za700za7za7_2546za7, "library-translation-table-add!",
		30);
	      DEFINE_STRING(BGl_string2465z00zz__libraryz00,
		BgL_bgl_string2465za700za7za7_2547za7, "Illegal :dlopen-init argument", 29);
	      DEFINE_STRING(BGl_string2466z00zz__libraryz00,
		BgL_bgl_string2466za700za7za7_2548za7, "Illegal :dlopen-init value", 26);
	      DEFINE_STRING(BGl_string2467z00zz__libraryz00,
		BgL_bgl_string2467za700za7za7_2549za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2468z00zz__libraryz00,
		BgL_bgl_string2468za700za7za7_2550za7, "_", 1);
	      DEFINE_STRING(BGl_string2470z00zz__libraryz00,
		BgL_bgl_string2470za700za7za7_2551za7, "_library-translation-table-add!",
		31);
	      DEFINE_STRING(BGl_string2469z00zz__libraryz00,
		BgL_bgl_string2469za700za7za7_2552za7, "_e", 2);
	      DEFINE_STRING(BGl_string2471z00zz__libraryz00,
		BgL_bgl_string2471za700za7za7_2553za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2472z00zz__libraryz00,
		BgL_bgl_string2472za700za7za7_2554za7, ".init", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2filezd2namezd2envzd2zz__libraryz00,
		BgL_bgl__libraryza7d2fileza72555z00,
		BGl__libraryzd2filezd2namez00zz__libraryz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2473z00zz__libraryz00,
		BgL_bgl_string2473za700za7za7_2556za7, "_library-init-file", 18);
	      DEFINE_STRING(BGl_string2475z00zz__libraryz00,
		BgL_bgl_string2475za700za7za7_2557za7, "bigloo-c", 8);
	      DEFINE_STRING(BGl_string2476z00zz__libraryz00,
		BgL_bgl_string2476za700za7za7_2558za7, "unix", 4);
	      DEFINE_STRING(BGl_string2477z00zz__libraryz00,
		BgL_bgl_string2477za700za7za7_2559za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2478z00zz__libraryz00,
		BgL_bgl_string2478za700za7za7_2560za7, "-", 1);
	      DEFINE_STRING(BGl_string2480z00zz__libraryz00,
		BgL_bgl_string2480za700za7za7_2561za7, "library-file-name", 17);
	      DEFINE_STRING(BGl_string2481z00zz__libraryz00,
		BgL_bgl_string2481za700za7za7_2562za7, "Illegal version", 15);
	      DEFINE_STRING(BGl_string2482z00zz__libraryz00,
		BgL_bgl_string2482za700za7za7_2563za7, "win32", 5);
	      DEFINE_STRING(BGl_string2483z00zz__libraryz00,
		BgL_bgl_string2483za700za7za7_2564za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string2485z00zz__libraryz00,
		BgL_bgl_string2485za700za7za7_2565za7, "bigloo-jvm", 10);
	      DEFINE_STRING(BGl_string2487z00zz__libraryz00,
		BgL_bgl_string2487za700za7za7_2566za7, "bigloo-.net", 11);
	      DEFINE_STRING(BGl_string2500z00zz__libraryz00,
		BgL_bgl_string2500za700za7za7_2567za7, "library-load", 12);
	      DEFINE_STRING(BGl_string2490z00zz__libraryz00,
		BgL_bgl_string2490za700za7za7_2568za7, "Illegal backend", 15);
	      DEFINE_STRING(BGl_string2489z00zz__libraryz00,
		BgL_bgl_string2489za700za7za7_2569za7, "bigloo.net", 10);
	      DEFINE_STRING(BGl_string2501z00zz__libraryz00,
		BgL_bgl_string2501za700za7za7_2570za7, "Can't find library `~a' (`~a')",
		30);
	      DEFINE_STRING(BGl_string2491z00zz__libraryz00,
		BgL_bgl_string2491za700za7za7_2571za7, "_library-file-name", 18);
	      DEFINE_STRING(BGl_string2502z00zz__libraryz00,
		BgL_bgl_string2502za700za7za7_2572za7,
		"Can't find _e library `~a' (`~a') in path ", 42);
	      DEFINE_STRING(BGl_string2492z00zz__libraryz00,
		BgL_bgl_string2492za700za7za7_2573za7, "_library-loaded?", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2loadzd2envz00zz__libraryz00,
		BgL_bgl__libraryza7d2loadza72574z00, va_generic_entry,
		BGl__libraryzd2loadzd2zz__libraryz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2493z00zz__libraryz00,
		BgL_bgl_string2493za700za7za7_2575za7, "_library-mark-loaded!", 21);
	      DEFINE_STRING(BGl_string2494z00zz__libraryz00,
		BgL_bgl_string2494za700za7za7_2576za7, "BIGLOOLIB", 9);
	      DEFINE_STRING(BGl_string2495z00zz__libraryz00,
		BgL_bgl_string2495za700za7za7_2577za7, ".", 1);
	      DEFINE_STRING(BGl_string2506z00zz__libraryz00,
		BgL_bgl_string2506za700za7za7_2578za7, "libinfo-init", 12);
	      DEFINE_STRING(BGl_string2496z00zz__libraryz00,
		BgL_bgl_string2496za700za7za7_2579za7, "", 0);
	      DEFINE_STRING(BGl_string2497z00zz__libraryz00,
		BgL_bgl_string2497za700za7za7_2580za7, "/resource/bigloo/", 17);
	      DEFINE_STRING(BGl_string2508z00zz__libraryz00,
		BgL_bgl_string2508za700za7za7_2581za7, "info", 4);
	      DEFINE_STRING(BGl_string2498z00zz__libraryz00,
		BgL_bgl_string2498za700za7za7_2582za7, "/make_lib.class", 15);
	      DEFINE_STRING(BGl_string2512z00zz__libraryz00,
		BgL_bgl_string2512za700za7za7_2583za7, "libinfo-eval", 12);
	      DEFINE_STRING(BGl_string2513z00zz__libraryz00,
		BgL_bgl_string2513za700za7za7_2584za7, "string or symbol", 16);
	      DEFINE_STRING(BGl_string2514z00zz__libraryz00,
		BgL_bgl_string2514za700za7za7_2585za7, ".heap", 5);
	      DEFINE_STRING(BGl_string2515z00zz__libraryz00,
		BgL_bgl_string2515za700za7za7_2586za7, "_library-exists?", 16);
	      DEFINE_STRING(BGl_string2516z00zz__libraryz00,
		BgL_bgl_string2516za700za7za7_2587za7, "__library", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2initzd2filezd2envzd2zz__libraryz00,
		BgL_bgl__libraryza7d2initza72588z00,
		BGl__libraryzd2initzd2filez00zz__libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2libraryz12zd2envz12zz__libraryz00,
		BgL_bgl__declareza7d2libra2589za7, opt_generic_entry,
		BGl__declarezd2libraryz12zc0zz__libraryz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2infozd2envz00zz__libraryz00,
		BgL_bgl__libraryza7d2infoza72590z00, BGl__libraryzd2infozd2zz__libraryz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2existszf3zd2envzf3zz__libraryz00,
		BgL_bgl__libraryza7d2exist2591za7, va_generic_entry,
		BGl__libraryzd2existszf3z21zz__libraryz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2loadedzf3zd2envzf3zz__libraryz00,
		BgL_bgl__libraryza7d2loade2592za7,
		BGl__libraryzd2loadedzf3z21zz__libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2markzd2loadedz12zd2envzc0zz__libraryz00,
		BgL_bgl__libraryza7d2markza72593z00,
		BGl__libraryzd2markzd2loadedz12z12zz__libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2load_ezd2envz00zz__libraryz00,
		BgL_bgl__libraryza7d2load_2594za7, va_generic_entry,
		BGl__libraryzd2load_ezd2zz__libraryz00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long
		BgL_checksumz00_2675, char *BgL_fromz00_2676)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__libraryz00))
				{
					BGl_requirezd2initializa7ationz75zz__libraryz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__libraryz00();
					BGl_importedzd2moduleszd2initz00zz__libraryz00();
					BGl_toplevelzd2initzd2zz__libraryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 15 */
			BGl_symbol2419z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2420z00zz__libraryz00);
			BGl_symbol2421z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2422z00zz__libraryz00);
			BGl_symbol2423z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2424z00zz__libraryz00);
			BGl_symbol2426z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2427z00zz__libraryz00);
			BGl_symbol2429z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2430z00zz__libraryz00);
			BGl_symbol2435z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2436z00zz__libraryz00);
			BGl_keyword2437z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2438z00zz__libraryz00);
			BGl_keyword2439z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2440z00zz__libraryz00);
			BGl_keyword2441z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2442z00zz__libraryz00);
			BGl_keyword2443z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2444z00zz__libraryz00);
			BGl_keyword2445z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2446z00zz__libraryz00);
			BGl_keyword2447z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2448z00zz__libraryz00);
			BGl_keyword2449z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2450z00zz__libraryz00);
			BGl_keyword2451z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2452z00zz__libraryz00);
			BGl_keyword2453z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2454z00zz__libraryz00);
			BGl_keyword2455z00zz__libraryz00 =
				bstring_to_keyword(BGl_string2456z00zz__libraryz00);
			BGl_symbol2460z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2461z00zz__libraryz00);
			BGl_symbol2463z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2464z00zz__libraryz00);
			BGl_symbol2474z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2475z00zz__libraryz00);
			BGl_symbol2479z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2480z00zz__libraryz00);
			BGl_symbol2484z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2485z00zz__libraryz00);
			BGl_symbol2486z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2487z00zz__libraryz00);
			BGl_symbol2488z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2489z00zz__libraryz00);
			BGl_symbol2499z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2500z00zz__libraryz00);
			BGl_symbol2505z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2506z00zz__libraryz00);
			BGl_symbol2507z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2508z00zz__libraryz00);
			BGl_list2504z00zz__libraryz00 =
				MAKE_PAIR(BGl_symbol2505z00zz__libraryz00,
				MAKE_PAIR(BGl_symbol2507z00zz__libraryz00, BNIL));
			BGl_list2503z00zz__libraryz00 =
				MAKE_PAIR(BGl_list2504z00zz__libraryz00, BNIL);
			BGl_symbol2511z00zz__libraryz00 =
				bstring_to_symbol(BGl_string2512z00zz__libraryz00);
			BGl_list2510z00zz__libraryz00 =
				MAKE_PAIR(BGl_symbol2511z00zz__libraryz00,
				MAKE_PAIR(BGl_symbol2507z00zz__libraryz00, BNIL));
			return (BGl_list2509z00zz__libraryz00 =
				MAKE_PAIR(BGl_list2510z00zz__libraryz00, BNIL), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 15 */
			BGl_za2libraryzd2mutexza2zd2zz__libraryz00 =
				bgl_make_mutex(BGl_symbol2419z00zz__libraryz00);
			BGl_za2librariesza2z00zz__libraryz00 = BNIL;
			BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 = BFALSE;
			return (BGl_za2loadedzd2librariesza2zd2zz__libraryz00 = BNIL, BUNSPEC);
		}
	}



/* eval-library-suffix */
	obj_t BGl_evalzd2libraryzd2suffixz00zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 104 */
			if (CBOOL(BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00))
				{	/* Eval/library.scm 105 */
					BFALSE;
				}
			else
				{	/* Eval/library.scm 107 */
					obj_t BgL_casezd2valuezd2_852;

					BgL_casezd2valuezd2_852 =
						BGl_bigloozd2configzd2zz__configurez00
						(BGl_symbol2421z00zz__libraryz00);
					if ((BgL_casezd2valuezd2_852 == BGl_symbol2423z00zz__libraryz00))
						{	/* Eval/library.scm 107 */
							BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
								BGl_string2425z00zz__libraryz00;
						}
					else
						{	/* Eval/library.scm 107 */
							if ((BgL_casezd2valuezd2_852 == BGl_symbol2426z00zz__libraryz00))
								{	/* Eval/library.scm 107 */
									BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
										BGl_string2428z00zz__libraryz00;
								}
							else
								{	/* Eval/library.scm 107 */
									if (
										(BgL_casezd2valuezd2_852 ==
											BGl_symbol2429z00zz__libraryz00))
										{	/* Eval/library.scm 107 */
											BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
												BGl_string2431z00zz__libraryz00;
										}
									else
										{	/* Eval/library.scm 107 */
											BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00 =
												BUNSPEC;
										}
								}
						}
				}
			return BGl_za2evalzd2libraryzd2suffixza2z00zz__libraryz00;
		}
	}



/* _declare-library! */
	obj_t BGl__declarezd2libraryz12zc0zz__libraryz00(obj_t BgL_envz00_63,
		obj_t BgL_opt1884z00_62)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 116 */
			{	/* Eval/library.scm 116 */
				int BgL_l1885z00_856;

				BgL_l1885z00_856 = VECTOR_LENGTH(BgL_opt1884z00_62);
				{	/* Eval/library.scm 116 */
					obj_t BgL_idz00_860;

					BgL_idz00_860 = VECTOR_REF(BgL_opt1884z00_62, (int) (((long) 0)));
					{	/* Eval/library.scm 119 */
						obj_t BgL_basenamez00_861;

						{	/* Eval/library.scm 119 */
							obj_t BgL_res2371z00_1725;

							{	/* Eval/library.scm 119 */
								obj_t BgL_symbolz00_1723;

								if (SYMBOLP(BgL_idz00_860))
									{	/* Eval/library.scm 119 */
										BgL_symbolz00_1723 = BgL_idz00_860;
									}
								else
									{
										obj_t BgL_auxz00_2731;

										BgL_auxz00_2731 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2432z00zz__libraryz00, BINT(((long) 4444)),
											BGl_string2433z00zz__libraryz00,
											BGl_string2434z00zz__libraryz00, BgL_idz00_860);
										FAILURE(BgL_auxz00_2731, BFALSE, BFALSE);
									}
								{	/* Eval/library.scm 119 */
									obj_t BgL_arg2312z00_1724;

									BgL_arg2312z00_1724 = SYMBOL_TO_STRING(BgL_symbolz00_1723);
									BgL_res2371z00_1725 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2312z00_1724);
							}}
							BgL_basenamez00_861 = BgL_res2371z00_1725;
						}
						{	/* Eval/library.scm 116 */
							obj_t BgL_classzd2evalzd2_862;

							BgL_classzd2evalzd2_862 = BFALSE;
							{	/* Eval/library.scm 116 */
								obj_t BgL_classzd2initzd2_863;

								BgL_classzd2initzd2_863 = BFALSE;
								{	/* Eval/library.scm 116 */
									obj_t BgL_dlopenzd2initzd2_864;

									BgL_dlopenzd2initzd2_864 = BFALSE;
									{	/* Eval/library.scm 116 */
										obj_t BgL_evalz00_865;

										BgL_evalz00_865 = BFALSE;
										{	/* Eval/library.scm 116 */
											obj_t BgL_initz00_866;

											BgL_initz00_866 = BFALSE;
											{	/* Eval/library.scm 116 */
												obj_t BgL_modulezd2evalzd2_867;

												BgL_modulezd2evalzd2_867 = BFALSE;
												{	/* Eval/library.scm 116 */
													obj_t BgL_modulezd2initzd2_868;

													BgL_modulezd2initzd2_868 = BFALSE;
													{	/* Eval/library.scm 125 */
														obj_t BgL_srfiz00_869;

														BgL_srfiz00_869 = BNIL;
														{	/* Eval/library.scm 118 */
															obj_t BgL_versionz00_870;

															BgL_versionz00_870 =
																BGl_bigloozd2configzd2zz__configurez00
																(BGl_symbol2435z00zz__libraryz00);
															{	/* Eval/library.scm 116 */

																{	/* Eval/library.scm 116 */
																	long BgL_index1889z00_871;

																	{
																		long BgL_iz00_1727;

																		BgL_iz00_1727 = ((long) 1);
																	BgL_search1886z00_1726:
																		if (
																			(BgL_iz00_1727 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1889z00_871 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1729;

																				BgL_vz00_1729 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1727));
																				if (
																					(BgL_vz00_1729 ==
																						BGl_keyword2437z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1889z00_871 =
																							(BgL_iz00_1727 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2746;

																						BgL_iz00_2746 =
																							(BgL_iz00_1727 + ((long) 2));
																						BgL_iz00_1727 = BgL_iz00_2746;
																						goto BgL_search1886z00_1726;
																					}
																			}
																	}
																	if ((BgL_index1889z00_871 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_basenamez00_861 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1889z00_871));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1890z00_873;

																	{
																		long BgL_iz00_1741;

																		BgL_iz00_1741 = ((long) 1);
																	BgL_search1886z00_1740:
																		if (
																			(BgL_iz00_1741 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1890z00_873 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1743;

																				BgL_vz00_1743 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1741));
																				if (
																					(BgL_vz00_1743 ==
																						BGl_keyword2439z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1890z00_873 =
																							(BgL_iz00_1741 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2760;

																						BgL_iz00_2760 =
																							(BgL_iz00_1741 + ((long) 2));
																						BgL_iz00_1741 = BgL_iz00_2760;
																						goto BgL_search1886z00_1740;
																					}
																			}
																	}
																	if ((BgL_index1890z00_873 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_classzd2evalzd2_862 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1890z00_873));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1891z00_875;

																	{
																		long BgL_iz00_1755;

																		BgL_iz00_1755 = ((long) 1);
																	BgL_search1886z00_1754:
																		if (
																			(BgL_iz00_1755 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1891z00_875 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1757;

																				BgL_vz00_1757 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1755));
																				if (
																					(BgL_vz00_1757 ==
																						BGl_keyword2441z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1891z00_875 =
																							(BgL_iz00_1755 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2774;

																						BgL_iz00_2774 =
																							(BgL_iz00_1755 + ((long) 2));
																						BgL_iz00_1755 = BgL_iz00_2774;
																						goto BgL_search1886z00_1754;
																					}
																			}
																	}
																	if ((BgL_index1891z00_875 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_classzd2initzd2_863 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1891z00_875));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1892z00_877;

																	{
																		long BgL_iz00_1769;

																		BgL_iz00_1769 = ((long) 1);
																	BgL_search1886z00_1768:
																		if (
																			(BgL_iz00_1769 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1892z00_877 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1771;

																				BgL_vz00_1771 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1769));
																				if (
																					(BgL_vz00_1771 ==
																						BGl_keyword2443z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1892z00_877 =
																							(BgL_iz00_1769 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2788;

																						BgL_iz00_2788 =
																							(BgL_iz00_1769 + ((long) 2));
																						BgL_iz00_1769 = BgL_iz00_2788;
																						goto BgL_search1886z00_1768;
																					}
																			}
																	}
																	if ((BgL_index1892z00_877 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_dlopenzd2initzd2_864 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1892z00_877));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1893z00_879;

																	{
																		long BgL_iz00_1783;

																		BgL_iz00_1783 = ((long) 1);
																	BgL_search1886z00_1782:
																		if (
																			(BgL_iz00_1783 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1893z00_879 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1785;

																				BgL_vz00_1785 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1783));
																				if (
																					(BgL_vz00_1785 ==
																						BGl_keyword2445z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1893z00_879 =
																							(BgL_iz00_1783 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2802;

																						BgL_iz00_2802 =
																							(BgL_iz00_1783 + ((long) 2));
																						BgL_iz00_1783 = BgL_iz00_2802;
																						goto BgL_search1886z00_1782;
																					}
																			}
																	}
																	if ((BgL_index1893z00_879 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_evalz00_865 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1893z00_879));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1894z00_881;

																	{
																		long BgL_iz00_1797;

																		BgL_iz00_1797 = ((long) 1);
																	BgL_search1886z00_1796:
																		if (
																			(BgL_iz00_1797 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1894z00_881 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1799;

																				BgL_vz00_1799 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1797));
																				if (
																					(BgL_vz00_1799 ==
																						BGl_keyword2447z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1894z00_881 =
																							(BgL_iz00_1797 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2816;

																						BgL_iz00_2816 =
																							(BgL_iz00_1797 + ((long) 2));
																						BgL_iz00_1797 = BgL_iz00_2816;
																						goto BgL_search1886z00_1796;
																					}
																			}
																	}
																	if ((BgL_index1894z00_881 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_initz00_866 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1894z00_881));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1895z00_883;

																	{
																		long BgL_iz00_1811;

																		BgL_iz00_1811 = ((long) 1);
																	BgL_search1886z00_1810:
																		if (
																			(BgL_iz00_1811 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1895z00_883 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1813;

																				BgL_vz00_1813 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1811));
																				if (
																					(BgL_vz00_1813 ==
																						BGl_keyword2449z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1895z00_883 =
																							(BgL_iz00_1811 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2830;

																						BgL_iz00_2830 =
																							(BgL_iz00_1811 + ((long) 2));
																						BgL_iz00_1811 = BgL_iz00_2830;
																						goto BgL_search1886z00_1810;
																					}
																			}
																	}
																	if ((BgL_index1895z00_883 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_modulezd2evalzd2_867 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1895z00_883));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1896z00_885;

																	{
																		long BgL_iz00_1825;

																		BgL_iz00_1825 = ((long) 1);
																	BgL_search1886z00_1824:
																		if (
																			(BgL_iz00_1825 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1896z00_885 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1827;

																				BgL_vz00_1827 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1825));
																				if (
																					(BgL_vz00_1827 ==
																						BGl_keyword2451z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1896z00_885 =
																							(BgL_iz00_1825 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2844;

																						BgL_iz00_2844 =
																							(BgL_iz00_1825 + ((long) 2));
																						BgL_iz00_1825 = BgL_iz00_2844;
																						goto BgL_search1886z00_1824;
																					}
																			}
																	}
																	if ((BgL_index1896z00_885 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_modulezd2initzd2_868 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1896z00_885));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1897z00_887;

																	{
																		long BgL_iz00_1839;

																		BgL_iz00_1839 = ((long) 1);
																	BgL_search1886z00_1838:
																		if (
																			(BgL_iz00_1839 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1897z00_887 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1841;

																				BgL_vz00_1841 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1839));
																				if (
																					(BgL_vz00_1841 ==
																						BGl_keyword2453z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1897z00_887 =
																							(BgL_iz00_1839 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2858;

																						BgL_iz00_2858 =
																							(BgL_iz00_1839 + ((long) 2));
																						BgL_iz00_1839 = BgL_iz00_2858;
																						goto BgL_search1886z00_1838;
																					}
																			}
																	}
																	if ((BgL_index1897z00_887 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_srfiz00_869 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1897z00_887));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	long BgL_index1898z00_889;

																	{
																		long BgL_iz00_1853;

																		BgL_iz00_1853 = ((long) 1);
																	BgL_search1886z00_1852:
																		if (
																			(BgL_iz00_1853 ==
																				(long) (BgL_l1885z00_856)))
																			{	/* Eval/library.scm 116 */
																				BgL_index1898z00_889 = ((long) -1);
																			}
																		else
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_vz00_1855;

																				BgL_vz00_1855 =
																					VECTOR_REF(BgL_opt1884z00_62,
																					(int) (BgL_iz00_1853));
																				if (
																					(BgL_vz00_1855 ==
																						BGl_keyword2455z00zz__libraryz00))
																					{	/* Eval/library.scm 116 */
																						BgL_index1898z00_889 =
																							(BgL_iz00_1853 + ((long) 1));
																					}
																				else
																					{
																						long BgL_iz00_2872;

																						BgL_iz00_2872 =
																							(BgL_iz00_1853 + ((long) 2));
																						BgL_iz00_1853 = BgL_iz00_2872;
																						goto BgL_search1886z00_1852;
																					}
																			}
																	}
																	if ((BgL_index1898z00_889 >= ((long) 0)))
																		{	/* Eval/library.scm 116 */
																			BgL_versionz00_870 =
																				VECTOR_REF(BgL_opt1884z00_62,
																				(int) (BgL_index1898z00_889));
																		}
																	else
																		{	/* Eval/library.scm 116 */
																			BFALSE;
																		}
																}
																{	/* Eval/library.scm 116 */
																	obj_t BgL_arg1955z00_891;

																	BgL_arg1955z00_891 =
																		VECTOR_REF(BgL_opt1884z00_62,
																		(int) (((long) 0)));
																	{	/* Eval/library.scm 116 */
																		obj_t BgL_basenamez00_892;

																		BgL_basenamez00_892 = BgL_basenamez00_861;
																		{	/* Eval/library.scm 116 */
																			obj_t BgL_classzd2evalzd2_893;

																			BgL_classzd2evalzd2_893 =
																				BgL_classzd2evalzd2_862;
																			{	/* Eval/library.scm 116 */
																				obj_t BgL_classzd2initzd2_894;

																				BgL_classzd2initzd2_894 =
																					BgL_classzd2initzd2_863;
																				{	/* Eval/library.scm 116 */
																					obj_t BgL_dlopenzd2initzd2_895;

																					BgL_dlopenzd2initzd2_895 =
																						BgL_dlopenzd2initzd2_864;
																					{	/* Eval/library.scm 116 */
																						obj_t BgL_evalz00_896;

																						BgL_evalz00_896 = BgL_evalz00_865;
																						{	/* Eval/library.scm 116 */
																							obj_t BgL_initz00_897;

																							BgL_initz00_897 = BgL_initz00_866;
																							{	/* Eval/library.scm 116 */
																								obj_t BgL_modulezd2evalzd2_898;

																								BgL_modulezd2evalzd2_898 =
																									BgL_modulezd2evalzd2_867;
																								{	/* Eval/library.scm 116 */
																									obj_t
																										BgL_modulezd2initzd2_899;
																									BgL_modulezd2initzd2_899 =
																										BgL_modulezd2initzd2_868;
																									{	/* Eval/library.scm 116 */
																										obj_t BgL_srfiz00_900;

																										BgL_srfiz00_900 =
																											BgL_srfiz00_869;
																										{	/* Eval/library.scm 116 */
																											obj_t BgL_versionz00_901;

																											BgL_versionz00_901 =
																												BgL_versionz00_870;
																											{	/* Eval/library.scm 116 */
																												obj_t BgL_g1922z00_1877;

																												BgL_g1922z00_1877 =
																													BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
																												{	/* Eval/library.scm 116 */

																													if (
																														(((long) 0) ==
																															((long) 0)))
																														{	/* Eval/library.scm 116 */
																															bgl_mutex_lock
																																(BgL_g1922z00_1877);
																														}
																													else
																														{	/* Eval/library.scm 116 */
																															bgl_mutex_timed_lock
																																(BgL_g1922z00_1877,
																																((long) 0));
																											}}}
																											{	/* Eval/library.scm 116 */
																												bool_t BgL_testz00_2884;

																												{	/* Eval/library.scm 116 */
																													obj_t BgL_auxz00_2885;

																													{	/* Eval/library.scm 116 */
																														obj_t
																															BgL_auxz00_2886;
																														{	/* Eval/library.scm 116 */
																															obj_t
																																BgL_aux2397z00_2648;
																															BgL_aux2397z00_2648
																																=
																																BGl_za2librariesza2z00zz__libraryz00;
																															{	/* Eval/library.scm 116 */
																																bool_t
																																	BgL_testz00_2887;
																																if (PAIRP
																																	(BgL_aux2397z00_2648))
																																	{	/* Eval/library.scm 116 */
																																		BgL_testz00_2887
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Eval/library.scm 116 */
																																		BgL_testz00_2887
																																			=
																																			NULLP
																																			(BgL_aux2397z00_2648);
																																	}
																																if (BgL_testz00_2887)
																																	{	/* Eval/library.scm 116 */
																																		BgL_auxz00_2886
																																			=
																																			BgL_aux2397z00_2648;
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_auxz00_2891;
																																		BgL_auxz00_2891
																																			=
																																			BGl_typezd2errorzd2zz__errorz00
																																			(BGl_string2432z00zz__libraryz00,
																																			BINT((
																																					(long)
																																					4326)),
																																			BGl_string2433z00zz__libraryz00,
																																			BGl_string2457z00zz__libraryz00,
																																			BgL_aux2397z00_2648);
																																		FAILURE
																																			(BgL_auxz00_2891,
																																			BFALSE,
																																			BFALSE);
																														}}}
																														BgL_auxz00_2885 =
																															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg1955z00_891,
																															BgL_auxz00_2886);
																													}
																													BgL_testz00_2884 =
																														CBOOL
																														(BgL_auxz00_2885);
																												}
																												if (BgL_testz00_2884)
																													{	/* Eval/library.scm 116 */
																														((bool_t) 0);
																													}
																												else
																													{	/* Eval/library.scm 116 */
																														{	/* Eval/library.scm 116 */
																															obj_t
																																BgL_arg1960z00_1880;
																															{	/* Eval/library.scm 116 */
																																obj_t
																																	BgL_arg1961z00_1881;
																																{	/* Eval/library.scm 116 */
																																	obj_t
																																		BgL_arg1962z00_1882;
																																	obj_t
																																		BgL_arg1963z00_1883;
																																	if (CBOOL
																																		(BgL_dlopenzd2initzd2_895))
																																		{	/* Eval/library.scm 116 */
																																			obj_t
																																				BgL_arg1966z00_1885;
																																			BgL_arg1966z00_1885
																																				=
																																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																																				();
																																			{	/* Eval/library.scm 116 */
																																				obj_t
																																					BgL_list1967z00_1886;
																																				{	/* Eval/library.scm 116 */
																																					obj_t
																																						BgL_arg1968z00_1887;
																																					BgL_arg1968z00_1887
																																						=
																																						MAKE_PAIR
																																						(BgL_arg1966z00_1885,
																																						BNIL);
																																					BgL_list1967z00_1886
																																						=
																																						MAKE_PAIR
																																						(BgL_dlopenzd2initzd2_895,
																																						BgL_arg1968z00_1887);
																																				}
																																				BgL_arg1962z00_1882
																																					=
																																					BGl_formatz00zz__r4_output_6_10_3z00
																																					(BGl_string2458z00zz__libraryz00,
																																					BgL_list1967z00_1886);
																																			}
																																		}
																																	else
																																		{	/* Eval/library.scm 116 */
																																			BgL_arg1962z00_1882
																																				=
																																				BFALSE;
																																		}
																																	if (CBOOL
																																		(BgL_dlopenzd2initzd2_895))
																																		{	/* Eval/library.scm 116 */
																																			obj_t
																																				BgL_arg1970z00_1889;
																																			BgL_arg1970z00_1889
																																				=
																																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																																				();
																																			{	/* Eval/library.scm 116 */
																																				obj_t
																																					BgL_list1971z00_1890;
																																				{	/* Eval/library.scm 116 */
																																					obj_t
																																						BgL_arg1972z00_1891;
																																					BgL_arg1972z00_1891
																																						=
																																						MAKE_PAIR
																																						(BgL_arg1970z00_1889,
																																						BNIL);
																																					BgL_list1971z00_1890
																																						=
																																						MAKE_PAIR
																																						(BgL_dlopenzd2initzd2_895,
																																						BgL_arg1972z00_1891);
																																				}
																																				BgL_arg1963z00_1883
																																					=
																																					BGl_formatz00zz__r4_output_6_10_3z00
																																					(BGl_string2459z00zz__libraryz00,
																																					BgL_list1971z00_1890);
																																			}
																																		}
																																	else
																																		{	/* Eval/library.scm 116 */
																																			BgL_arg1963z00_1883
																																				=
																																				BFALSE;
																																		}
																																	{	/* Eval/library.scm 116 */
																																		obj_t
																																			BgL_newz00_1914;
																																		BgL_newz00_1914
																																			=
																																			create_struct
																																			(BGl_symbol2460z00zz__libraryz00,
																																			(int) ((
																																					(long)
																																					12)));
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2911;
																																			BgL_auxz00_2911
																																				=
																																				(int) ((
																																					(long)
																																					11));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2911,
																																				BgL_srfiz00_900);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2914;
																																			BgL_auxz00_2914
																																				=
																																				(int) ((
																																					(long)
																																					10));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2914,
																																				BgL_evalz00_896);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2917;
																																			BgL_auxz00_2917
																																				=
																																				(int) ((
																																					(long)
																																					9));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2917,
																																				BgL_initz00_897);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2920;
																																			BgL_auxz00_2920
																																				=
																																				(int) ((
																																					(long)
																																					8));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2920,
																																				BgL_classzd2evalzd2_893);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2923;
																																			BgL_auxz00_2923
																																				=
																																				(int) ((
																																					(long)
																																					7));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2923,
																																				BgL_classzd2initzd2_894);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2926;
																																			BgL_auxz00_2926
																																				=
																																				(int) ((
																																					(long)
																																					6));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2926,
																																				BgL_modulezd2evalzd2_898);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2929;
																																			BgL_auxz00_2929
																																				=
																																				(int) ((
																																					(long)
																																					5));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2929,
																																				BgL_modulezd2initzd2_899);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2932;
																																			BgL_auxz00_2932
																																				=
																																				(int) ((
																																					(long)
																																					4));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2932,
																																				BgL_arg1963z00_1883);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2935;
																																			BgL_auxz00_2935
																																				=
																																				(int) ((
																																					(long)
																																					3));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2935,
																																				BgL_arg1962z00_1882);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2938;
																																			BgL_auxz00_2938
																																				=
																																				(int) ((
																																					(long)
																																					2));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2938,
																																				BgL_versionz00_901);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2941;
																																			BgL_auxz00_2941
																																				=
																																				(int) ((
																																					(long)
																																					1));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2941,
																																				BgL_basenamez00_892);
																																		}
																																		{	/* Eval/library.scm 116 */
																																			int
																																				BgL_auxz00_2944;
																																			BgL_auxz00_2944
																																				=
																																				(int) ((
																																					(long)
																																					0));
																																			STRUCT_SET
																																				(BgL_newz00_1914,
																																				BgL_auxz00_2944,
																																				BgL_arg1955z00_891);
																																		}
																																		BgL_arg1961z00_1881
																																			=
																																			BgL_newz00_1914;
																																}}
																																BgL_arg1960z00_1880
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1955z00_891,
																																	BgL_arg1961z00_1881);
																															}
																															BGl_za2librariesza2z00zz__libraryz00
																																=
																																MAKE_PAIR
																																(BgL_arg1960z00_1880,
																																BGl_za2librariesza2z00zz__libraryz00);
																														}
																														{
																															obj_t
																																BgL_l1868z00_1893;
																															BgL_l1868z00_1893
																																=
																																BgL_srfiz00_900;
																														BgL_zc3anonymousza31973ze3z83_1892:
																															if (PAIRP
																																(BgL_l1868z00_1893))
																																{	/* Eval/library.scm 116 */
																																	{	/* Eval/library.scm 116 */
																																		obj_t
																																			BgL_sz00_1976;
																																		BgL_sz00_1976
																																			=
																																			CAR
																																			(BgL_l1868z00_1893);
																																		BGl_registerzd2srfiz12zc0zz__expander_srfi0z00
																																			(BgL_sz00_1976);
																																		bgl_register_eval_srfi
																																			(BgL_sz00_1976);
																																	}
																																	{
																																		obj_t
																																			BgL_l1868z00_2954;
																																		BgL_l1868z00_2954
																																			=
																																			CDR
																																			(BgL_l1868z00_1893);
																																		BgL_l1868z00_1893
																																			=
																																			BgL_l1868z00_2954;
																																		goto
																																			BgL_zc3anonymousza31973ze3z83_1892;
																																	}
																																}
																															else
																																{	/* Eval/library.scm 116 */
																																	((bool_t) 1);
																																}
																														}
																													}
																											}
																											{	/* Eval/library.scm 116 */
																												obj_t BgL_mz00_1981;

																												BgL_mz00_1981 =
																													BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
																												return
																													BBOOL(bgl_mutex_unlock
																													(BgL_mz00_1981));
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
							}
						}
					}
				}
			}
		}
	}



/* declare-library! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2libraryz12zc0zz__libraryz00(obj_t
		BgL_idz00_51, obj_t BgL_basenamez00_52, obj_t BgL_classzd2evalzd2_53,
		obj_t BgL_classzd2initzd2_54, obj_t BgL_dlopenzd2initzd2_55,
		obj_t BgL_evalz00_56, obj_t BgL_initz00_57, obj_t BgL_modulezd2evalzd2_58,
		obj_t BgL_modulezd2initzd2_59, obj_t BgL_srfiz00_60,
		obj_t BgL_versionz00_61)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 116 */
			{	/* Eval/library.scm 126 */
				obj_t BgL_g1922z00_2004;

				BgL_g1922z00_2004 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
				{	/* Eval/library.scm 126 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/library.scm 126 */
							bgl_mutex_lock(BgL_g1922z00_2004);
						}
					else
						{	/* Eval/library.scm 126 */
							bgl_mutex_timed_lock(BgL_g1922z00_2004, ((long) 0));
			}}}
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_51,
						BGl_za2librariesza2z00zz__libraryz00)))
				{	/* Eval/library.scm 126 */
					((bool_t) 0);
				}
			else
				{	/* Eval/library.scm 126 */
					{	/* Eval/library.scm 126 */
						obj_t BgL_arg1960z00_2007;

						{	/* Eval/library.scm 126 */
							obj_t BgL_arg1961z00_2008;

							{	/* Eval/library.scm 126 */
								obj_t BgL_arg1962z00_2009;

								obj_t BgL_arg1963z00_2010;

								if (CBOOL(BgL_dlopenzd2initzd2_55))
									{	/* Eval/library.scm 126 */
										obj_t BgL_arg1966z00_2012;

										BgL_arg1966z00_2012 =
											BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
										{	/* Eval/library.scm 126 */
											obj_t BgL_list1967z00_2013;

											{	/* Eval/library.scm 126 */
												obj_t BgL_arg1968z00_2014;

												BgL_arg1968z00_2014 =
													MAKE_PAIR(BgL_arg1966z00_2012, BNIL);
												BgL_list1967z00_2013 =
													MAKE_PAIR(BgL_dlopenzd2initzd2_55,
													BgL_arg1968z00_2014);
											}
											BgL_arg1962z00_2009 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string2458z00zz__libraryz00, BgL_list1967z00_2013);
										}
									}
								else
									{	/* Eval/library.scm 126 */
										BgL_arg1962z00_2009 = BFALSE;
									}
								if (CBOOL(BgL_dlopenzd2initzd2_55))
									{	/* Eval/library.scm 126 */
										obj_t BgL_arg1970z00_2016;

										BgL_arg1970z00_2016 =
											BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
										{	/* Eval/library.scm 126 */
											obj_t BgL_list1971z00_2017;

											{	/* Eval/library.scm 126 */
												obj_t BgL_arg1972z00_2018;

												BgL_arg1972z00_2018 =
													MAKE_PAIR(BgL_arg1970z00_2016, BNIL);
												BgL_list1971z00_2017 =
													MAKE_PAIR(BgL_dlopenzd2initzd2_55,
													BgL_arg1972z00_2018);
											}
											BgL_arg1963z00_2010 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string2459z00zz__libraryz00, BgL_list1971z00_2017);
										}
									}
								else
									{	/* Eval/library.scm 126 */
										BgL_arg1963z00_2010 = BFALSE;
									}
								{	/* Eval/library.scm 126 */
									obj_t BgL_newz00_2041;

									BgL_newz00_2041 =
										create_struct(BGl_symbol2460z00zz__libraryz00,
										(int) (((long) 12)));
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2979;

										BgL_auxz00_2979 = (int) (((long) 11));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2979,
											BgL_srfiz00_60);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2982;

										BgL_auxz00_2982 = (int) (((long) 10));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2982,
											BgL_evalz00_56);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2985;

										BgL_auxz00_2985 = (int) (((long) 9));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2985,
											BgL_initz00_57);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2988;

										BgL_auxz00_2988 = (int) (((long) 8));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2988,
											BgL_classzd2evalzd2_53);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2991;

										BgL_auxz00_2991 = (int) (((long) 7));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2991,
											BgL_classzd2initzd2_54);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2994;

										BgL_auxz00_2994 = (int) (((long) 6));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2994,
											BgL_modulezd2evalzd2_58);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_2997;

										BgL_auxz00_2997 = (int) (((long) 5));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_2997,
											BgL_modulezd2initzd2_59);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_3000;

										BgL_auxz00_3000 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_3000,
											BgL_arg1963z00_2010);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_3003;

										BgL_auxz00_3003 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_3003,
											BgL_arg1962z00_2009);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_3006;

										BgL_auxz00_3006 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_3006,
											BgL_versionz00_61);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_3009;

										BgL_auxz00_3009 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_3009,
											BgL_basenamez00_52);
									}
									{	/* Eval/library.scm 126 */
										int BgL_auxz00_3012;

										BgL_auxz00_3012 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_2041, BgL_auxz00_3012, BgL_idz00_51);
									}
									BgL_arg1961z00_2008 = BgL_newz00_2041;
							}}
							BgL_arg1960z00_2007 =
								MAKE_PAIR(BgL_idz00_51, BgL_arg1961z00_2008);
						}
						BGl_za2librariesza2z00zz__libraryz00 =
							MAKE_PAIR(BgL_arg1960z00_2007,
							BGl_za2librariesza2z00zz__libraryz00);
					}
					{
						obj_t BgL_l1868z00_2103;

						BgL_l1868z00_2103 = BgL_srfiz00_60;
					BgL_zc3anonymousza31973ze3z83_2102:
						if (PAIRP(BgL_l1868z00_2103))
							{	/* Eval/library.scm 126 */
								{	/* Eval/library.scm 126 */
									obj_t BgL_sz00_2108;

									BgL_sz00_2108 = CAR(BgL_l1868z00_2103);
									BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(BgL_sz00_2108);
									bgl_register_eval_srfi(BgL_sz00_2108);
								}
								{
									obj_t BgL_l1868z00_3022;

									BgL_l1868z00_3022 = CDR(BgL_l1868z00_2103);
									BgL_l1868z00_2103 = BgL_l1868z00_3022;
									goto BgL_zc3anonymousza31973ze3z83_2102;
								}
							}
						else
							{	/* Eval/library.scm 126 */
								((bool_t) 1);
							}
					}
				}
			{	/* Eval/library.scm 126 */
				obj_t BgL_mz00_2126;

				BgL_mz00_2126 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_2126));
			}
		}
	}



/* library-info */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t BgL_idz00_64)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 152 */
			{	/* Eval/library.scm 153 */
				obj_t BgL_g1825z00_2127;

				BgL_g1825z00_2127 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_64,
					BGl_za2librariesza2z00zz__libraryz00);
				if (CBOOL(BgL_g1825z00_2127))
					{	/* Eval/library.scm 153 */
						return CDR(BgL_g1825z00_2127);
					}
				else
					{	/* Eval/library.scm 153 */
						return BFALSE;
					}
			}
		}
	}



/* _library-info */
	obj_t BGl__libraryzd2infozd2zz__libraryz00(obj_t BgL_envz00_2616,
		obj_t BgL_idz00_2617)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 152 */
			{	/* Eval/library.scm 153 */
				obj_t BgL_auxz00_3030;

				if (SYMBOLP(BgL_idz00_2617))
					{	/* Eval/library.scm 153 */
						BgL_auxz00_3030 = BgL_idz00_2617;
					}
				else
					{
						obj_t BgL_auxz00_3033;

						BgL_auxz00_3033 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 5386)), BGl_string2462z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_idz00_2617);
						FAILURE(BgL_auxz00_3033, BFALSE, BFALSE);
					}
				return BGl_libraryzd2infozd2zz__libraryz00(BgL_auxz00_3030);
			}
		}
	}



/* library-translation-table-add! */
	BGL_EXPORTED_DEF obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t
		BgL_namez00_65, obj_t BgL_translationz00_66, obj_t BgL_optz00_67)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 158 */
			{	/* Eval/library.scm 159 */
				obj_t BgL_versionz00_930;

				obj_t BgL_dlopenzd2initzd2_931;

				BgL_versionz00_930 =
					BGl_bigloozd2configzd2zz__configurez00
					(BGl_symbol2435z00zz__libraryz00);
				{	/* Eval/library.scm 160 */
					obj_t BgL_res2372z00_2132;

					{	/* Eval/library.scm 160 */
						obj_t BgL_arg2312z00_2131;

						BgL_arg2312z00_2131 = SYMBOL_TO_STRING(BgL_namez00_65);
						BgL_res2372z00_2132 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2312z00_2131);
					}
					BgL_dlopenzd2initzd2_931 = BgL_res2372z00_2132;
				}
				{
					obj_t BgL_optz00_933;

					BgL_optz00_933 = BgL_optz00_67;
				BgL_zc3anonymousza31976ze3z83_934:
					if (PAIRP(BgL_optz00_933))
						{	/* Eval/library.scm 164 */
							bool_t BgL_testz00_3043;

							{	/* Eval/library.scm 164 */
								obj_t BgL_auxz00_3044;

								BgL_auxz00_3044 = CAR(BgL_optz00_933);
								BgL_testz00_3043 = STRINGP(BgL_auxz00_3044);
							}
							if (BgL_testz00_3043)
								{	/* Eval/library.scm 164 */
									BgL_versionz00_930 = CAR(BgL_optz00_933);
									{
										obj_t BgL_optz00_3048;

										BgL_optz00_3048 = CDR(BgL_optz00_933);
										BgL_optz00_933 = BgL_optz00_3048;
										goto BgL_zc3anonymousza31976ze3z83_934;
									}
								}
							else
								{	/* Eval/library.scm 164 */
									if (CBOOL(CAR(BgL_optz00_933)))
										{	/* Eval/library.scm 167 */
											if (
												(CAR(BgL_optz00_933) ==
													BGl_keyword2443z00zz__libraryz00))
												{	/* Eval/library.scm 170 */
													if (NULLP(CDR(BgL_optz00_933)))
														{	/* Eval/library.scm 172 */
															BGl_errorz00zz__errorz00
																(BGl_symbol2463z00zz__libraryz00,
																BGl_string2465z00zz__libraryz00,
																BgL_optz00_933);
														}
													else
														{	/* Eval/library.scm 176 */
															bool_t BgL_testz00_3060;

															{	/* Eval/library.scm 176 */
																obj_t BgL_auxz00_3061;

																BgL_auxz00_3061 = CAR(CDR(BgL_optz00_933));
																BgL_testz00_3060 = STRINGP(BgL_auxz00_3061);
															}
															if (BgL_testz00_3060)
																{	/* Eval/library.scm 176 */
																	BgL_dlopenzd2initzd2_931 =
																		CAR(CDR(BgL_optz00_933));
																	{
																		obj_t BgL_optz00_3067;

																		BgL_optz00_3067 = CDR(CDR(BgL_optz00_933));
																		BgL_optz00_933 = BgL_optz00_3067;
																		goto BgL_zc3anonymousza31976ze3z83_934;
																	}
																}
															else
																{	/* Eval/library.scm 176 */
																	BGl_errorz00zz__errorz00
																		(BGl_symbol2463z00zz__libraryz00,
																		BGl_string2466z00zz__libraryz00,
																		BgL_optz00_933);
																}
														}
												}
											else
												{	/* Eval/library.scm 170 */
													BGl_errorz00zz__errorz00
														(BGl_symbol2463z00zz__libraryz00,
														BGl_string2467z00zz__libraryz00, BgL_optz00_933);
												}
										}
									else
										{	/* Eval/library.scm 167 */
											BgL_versionz00_930 = BFALSE;
											{
												obj_t BgL_optz00_3072;

												BgL_optz00_3072 = CDR(BgL_optz00_933);
												BgL_optz00_933 = BgL_optz00_3072;
												goto BgL_zc3anonymousza31976ze3z83_934;
											}
										}
								}
						}
					else
						{	/* Eval/library.scm 162 */
							BFALSE;
						}
				}
				{	/* Eval/library.scm 187 */
					obj_t BgL_g1922z00_949;

					BgL_g1922z00_949 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
					{	/* Llib/thread.scm 201 */

						if ((((long) 0) == ((long) 0)))
							{	/* Llib/thread.scm 201 */
								bgl_mutex_lock(BgL_g1922z00_949);
							}
						else
							{	/* Llib/thread.scm 201 */
								bgl_mutex_timed_lock(BgL_g1922z00_949, ((long) 0));
				}}}
				{	/* Eval/library.scm 191 */
					obj_t BgL_arg1990z00_951;

					{	/* Eval/library.scm 191 */
						obj_t BgL_arg1991z00_952;

						{	/* Eval/library.scm 191 */
							obj_t BgL_arg1992z00_953;

							obj_t BgL_arg1993z00_954;

							if (CBOOL(BgL_dlopenzd2initzd2_931))
								{	/* Eval/library.scm 192 */
									obj_t BgL_arg1994z00_955;

									obj_t BgL_arg1996z00_957;

									{	/* Eval/library.scm 192 */
										obj_t BgL_namez00_2161;

										BgL_namez00_2161 = BgL_dlopenzd2initzd2_931;
										if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
											(BgL_namez00_2161))
											{	/* Eval/library.scm 192 */
												BgL_arg1994z00_955 = bigloo_mangle(BgL_namez00_2161);
											}
										else
											{	/* Eval/library.scm 192 */
												BgL_arg1994z00_955 = BgL_namez00_2161;
											}
									}
									BgL_arg1996z00_957 =
										BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
									BgL_arg1992z00_953 =
										string_append_3(BgL_arg1994z00_955,
										BGl_string2468z00zz__libraryz00, BgL_arg1996z00_957);
								}
							else
								{	/* Eval/library.scm 191 */
									BgL_arg1992z00_953 = BFALSE;
								}
							if (CBOOL(BgL_dlopenzd2initzd2_931))
								{	/* Eval/library.scm 196 */
									obj_t BgL_arg1998z00_958;

									obj_t BgL_arg2000z00_960;

									{	/* Eval/library.scm 196 */
										obj_t BgL_namez00_2163;

										BgL_namez00_2163 = BgL_dlopenzd2initzd2_931;
										if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00
											(BgL_namez00_2163))
											{	/* Eval/library.scm 196 */
												BgL_arg1998z00_958 = bigloo_mangle(BgL_namez00_2163);
											}
										else
											{	/* Eval/library.scm 196 */
												BgL_arg1998z00_958 = BgL_namez00_2163;
											}
									}
									BgL_arg2000z00_960 =
										BGl_evalzd2libraryzd2suffixz00zz__libraryz00();
									BgL_arg1993z00_954 =
										string_append_3(BgL_arg1998z00_958,
										BGl_string2469z00zz__libraryz00, BgL_arg2000z00_960);
								}
							else
								{	/* Eval/library.scm 195 */
									BgL_arg1993z00_954 = BFALSE;
								}
							{	/* Eval/library.scm 190 */
								obj_t BgL_versionz00_2167;

								BgL_versionz00_2167 = BgL_versionz00_930;
								{	/* Eval/library.scm 190 */
									obj_t BgL_newz00_2177;

									BgL_newz00_2177 =
										create_struct(BGl_symbol2460z00zz__libraryz00,
										(int) (((long) 12)));
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3094;

										BgL_auxz00_3094 = (int) (((long) 11));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3094, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3097;

										BgL_auxz00_3097 = (int) (((long) 10));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3097, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3100;

										BgL_auxz00_3100 = (int) (((long) 9));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3100, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3103;

										BgL_auxz00_3103 = (int) (((long) 8));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3103, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3106;

										BgL_auxz00_3106 = (int) (((long) 7));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3106, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3109;

										BgL_auxz00_3109 = (int) (((long) 6));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3109, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3112;

										BgL_auxz00_3112 = (int) (((long) 5));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3112, BFALSE);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3115;

										BgL_auxz00_3115 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3115,
											BgL_arg1993z00_954);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3118;

										BgL_auxz00_3118 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3118,
											BgL_arg1992z00_953);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3121;

										BgL_auxz00_3121 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3121,
											BgL_versionz00_2167);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3124;

										BgL_auxz00_3124 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3124,
											BgL_translationz00_66);
									}
									{	/* Eval/library.scm 190 */
										int BgL_auxz00_3127;

										BgL_auxz00_3127 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_2177, BgL_auxz00_3127,
											BgL_namez00_65);
									}
									BgL_arg1991z00_952 = BgL_newz00_2177;
						}}}
						BgL_arg1990z00_951 = MAKE_PAIR(BgL_namez00_65, BgL_arg1991z00_952);
					}
					BGl_za2librariesza2z00zz__libraryz00 =
						MAKE_PAIR(BgL_arg1990z00_951, BGl_za2librariesza2z00zz__libraryz00);
				}
				{	/* Eval/library.scm 203 */
					obj_t BgL_mz00_2238;

					BgL_mz00_2238 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
					return BBOOL(bgl_mutex_unlock(BgL_mz00_2238));
				}
			}
		}
	}



/* _library-translation-table-add! */
	obj_t BGl__libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t
		BgL_envz00_2618, obj_t BgL_namez00_2619, obj_t BgL_translationz00_2620,
		obj_t BgL_optz00_2621)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 158 */
			{	/* Eval/library.scm 159 */
				obj_t BgL_auxz00_3141;

				obj_t BgL_auxz00_3134;

				if (STRINGP(BgL_translationz00_2620))
					{	/* Eval/library.scm 159 */
						BgL_auxz00_3141 = BgL_translationz00_2620;
					}
				else
					{
						obj_t BgL_auxz00_3144;

						BgL_auxz00_3144 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 5708)), BGl_string2470z00zz__libraryz00,
							BGl_string2471z00zz__libraryz00, BgL_translationz00_2620);
						FAILURE(BgL_auxz00_3144, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_namez00_2619))
					{	/* Eval/library.scm 159 */
						BgL_auxz00_3134 = BgL_namez00_2619;
					}
				else
					{
						obj_t BgL_auxz00_3137;

						BgL_auxz00_3137 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 5708)), BGl_string2470z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_namez00_2619);
						FAILURE(BgL_auxz00_3137, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
					(BgL_auxz00_3134, BgL_auxz00_3141, BgL_optz00_2621);
			}
		}
	}



/* library-init-file */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t
		BgL_libz00_68)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 208 */
			{	/* Eval/library.scm 209 */
				obj_t BgL_arg2001z00_2239;

				{	/* Eval/library.scm 209 */
					obj_t BgL_res2373z00_2243;

					{	/* Eval/library.scm 209 */
						obj_t BgL_arg2312z00_2242;

						BgL_arg2312z00_2242 = SYMBOL_TO_STRING(BgL_libz00_68);
						BgL_res2373z00_2243 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2312z00_2242);
					}
					BgL_arg2001z00_2239 = BgL_res2373z00_2243;
				}
				return
					string_append(BgL_arg2001z00_2239, BGl_string2472z00zz__libraryz00);
			}
		}
	}



/* _library-init-file */
	obj_t BGl__libraryzd2initzd2filez00zz__libraryz00(obj_t BgL_envz00_2622,
		obj_t BgL_libz00_2623)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 208 */
			{	/* Eval/library.scm 209 */
				obj_t BgL_auxz00_3152;

				if (SYMBOLP(BgL_libz00_2623))
					{	/* Eval/library.scm 209 */
						BgL_auxz00_3152 = BgL_libz00_2623;
					}
				else
					{
						obj_t BgL_auxz00_3155;

						BgL_auxz00_3155 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 7175)), BGl_string2473z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_libz00_2623);
						FAILURE(BgL_auxz00_3155, BFALSE, BFALSE);
					}
				return BGl_libraryzd2initzd2filez00zz__libraryz00(BgL_auxz00_3152);
			}
		}
	}



/* untranslate-library-name */
	obj_t BGl_untranslatezd2libraryzd2namez00zz__libraryz00(obj_t
		BgL_libraryz00_69)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 214 */
			{	/* Eval/library.scm 215 */
				obj_t BgL_infoz00_963;

				{	/* Eval/library.scm 215 */
					obj_t BgL_g1825z00_2245;

					BgL_g1825z00_2245 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_libraryz00_69,
						BGl_za2librariesza2z00zz__libraryz00);
					if (CBOOL(BgL_g1825z00_2245))
						{	/* Eval/library.scm 215 */
							BgL_infoz00_963 = CDR(BgL_g1825z00_2245);
						}
					else
						{	/* Eval/library.scm 215 */
							BgL_infoz00_963 = BFALSE;
						}
				}
				if (CBOOL(BgL_infoz00_963))
					{	/* Eval/library.scm 217 */
						obj_t BgL_val0_1870z00_964;

						obj_t BgL_val1_1871z00_965;

						BgL_val0_1870z00_964 =
							STRUCT_REF(BgL_infoz00_963, (int) (((long) 1)));
						BgL_val1_1871z00_965 =
							STRUCT_REF(BgL_infoz00_963, (int) (((long) 2)));
						{	/* Eval/library.scm 217 */
							int BgL_auxz00_3170;

							BgL_auxz00_3170 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3170);
						}
						{	/* Eval/library.scm 217 */
							int BgL_auxz00_3173;

							BgL_auxz00_3173 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3173, BgL_val1_1871z00_965);
						}
						return BgL_val0_1870z00_964;
					}
				else
					{	/* Eval/library.scm 218 */
						obj_t BgL_val0_1872z00_966;

						obj_t BgL_val1_1873z00_967;

						{	/* Eval/library.scm 218 */
							obj_t BgL_res2374z00_2259;

							{	/* Eval/library.scm 218 */
								obj_t BgL_arg2312z00_2258;

								BgL_arg2312z00_2258 = SYMBOL_TO_STRING(BgL_libraryz00_69);
								BgL_res2374z00_2259 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2312z00_2258);
							}
							BgL_val0_1872z00_966 = BgL_res2374z00_2259;
						}
						BgL_val1_1873z00_967 =
							BGl_bigloozd2configzd2zz__configurez00
							(BGl_symbol2435z00zz__libraryz00);
						{	/* Eval/library.scm 218 */
							int BgL_auxz00_3179;

							BgL_auxz00_3179 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3179);
						}
						{	/* Eval/library.scm 218 */
							int BgL_auxz00_3182;

							BgL_auxz00_3182 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3182, BgL_val1_1873z00_967);
						}
						return BgL_val0_1872z00_966;
					}
			}
		}
	}



/* library-file-name */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t
		BgL_libraryz00_70, obj_t BgL_suffixz00_71, obj_t BgL_backendz00_72)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 223 */
			{	/* Eval/library.scm 232 */
				obj_t BgL_basez00_969;

				BgL_basez00_969 =
					BGl_untranslatezd2libraryzd2namez00zz__libraryz00(BgL_libraryz00_70);
				{	/* Eval/library.scm 234 */
					obj_t BgL_versionz00_970;

					{	/* Eval/library.scm 234 */
						int BgL_auxz00_3186;

						BgL_auxz00_3186 = (int) (((long) 1));
						BgL_versionz00_970 = BGL_MVALUES_VAL(BgL_auxz00_3186);
					}
					if ((BgL_backendz00_72 == BGl_symbol2474z00zz__libraryz00))
						{	/* Eval/library.scm 237 */
							bool_t BgL_testz00_3191;

							if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
									BGl_string2476z00zz__libraryz00))
								{	/* Eval/library.scm 237 */
									BgL_testz00_3191 = ((bool_t) 1);
								}
							else
								{	/* Eval/library.scm 237 */
									BgL_testz00_3191 =
										bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
										BGl_string2477z00zz__libraryz00);
								}
							if (BgL_testz00_3191)
								{	/* Eval/library.scm 237 */
									if (CBOOL(BgL_versionz00_970))
										{	/* Eval/library.scm 239 */
											if (STRINGP(BgL_versionz00_970))
												{	/* Eval/library.scm 239 */
													obj_t BgL_list2021z00_2274;

													{	/* Eval/library.scm 239 */
														obj_t BgL_arg2022z00_2275;

														{	/* Eval/library.scm 239 */
															obj_t BgL_arg2023z00_2276;

															{	/* Eval/library.scm 239 */
																obj_t BgL_arg2025z00_2278;

																BgL_arg2025z00_2278 =
																	MAKE_PAIR(BgL_versionz00_970, BNIL);
																BgL_arg2023z00_2276 =
																	MAKE_PAIR(BGl_string2478z00zz__libraryz00,
																	BgL_arg2025z00_2278);
															}
															BgL_arg2022z00_2275 =
																MAKE_PAIR(BgL_suffixz00_71,
																BgL_arg2023z00_2276);
														}
														BgL_list2021z00_2274 =
															MAKE_PAIR(BgL_basez00_969, BgL_arg2022z00_2275);
													}
													return
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2021z00_2274);
												}
											else
												{	/* Eval/library.scm 239 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2479z00zz__libraryz00,
														BGl_string2481z00zz__libraryz00,
														BgL_versionz00_970);
												}
										}
									else
										{	/* Eval/library.scm 239 */
											return string_append(BgL_basez00_969, BgL_suffixz00_71);
										}
								}
							else
								{	/* Eval/library.scm 237 */
									if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
											BGl_string2482z00zz__libraryz00))
										{	/* Eval/library.scm 240 */
											return string_append(BgL_basez00_969, BgL_suffixz00_71);
										}
									else
										{	/* Eval/library.scm 240 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2479z00zz__libraryz00,
												BGl_string2483z00zz__libraryz00,
												BGl_oszd2classzd2zz__osz00());
										}
								}
						}
					else
						{	/* Eval/library.scm 234 */
							if ((BgL_backendz00_72 == BGl_symbol2484z00zz__libraryz00))
								{	/* Eval/library.scm 234 */
									if (CBOOL(BgL_versionz00_970))
										{	/* Eval/library.scm 245 */
											if (STRINGP(BgL_versionz00_970))
												{	/* Eval/library.scm 245 */
													obj_t BgL_list2021z00_2288;

													{	/* Eval/library.scm 245 */
														obj_t BgL_arg2022z00_2289;

														{	/* Eval/library.scm 245 */
															obj_t BgL_arg2023z00_2290;

															{	/* Eval/library.scm 245 */
																obj_t BgL_arg2025z00_2292;

																BgL_arg2025z00_2292 =
																	MAKE_PAIR(BgL_versionz00_970, BNIL);
																BgL_arg2023z00_2290 =
																	MAKE_PAIR(BGl_string2478z00zz__libraryz00,
																	BgL_arg2025z00_2292);
															}
															BgL_arg2022z00_2289 =
																MAKE_PAIR(BgL_suffixz00_71,
																BgL_arg2023z00_2290);
														}
														BgL_list2021z00_2288 =
															MAKE_PAIR(BgL_basez00_969, BgL_arg2022z00_2289);
													}
													return
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list2021z00_2288);
												}
											else
												{	/* Eval/library.scm 245 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2479z00zz__libraryz00,
														BGl_string2481z00zz__libraryz00,
														BgL_versionz00_970);
												}
										}
									else
										{	/* Eval/library.scm 245 */
											return string_append(BgL_basez00_969, BgL_suffixz00_71);
										}
								}
							else
								{	/* Eval/library.scm 234 */
									bool_t BgL_testz00_3227;

									{	/* Eval/library.scm 234 */
										bool_t BgL__ortest_1827z00_987;

										BgL__ortest_1827z00_987 =
											(BgL_backendz00_72 == BGl_symbol2486z00zz__libraryz00);
										if (BgL__ortest_1827z00_987)
											{	/* Eval/library.scm 234 */
												BgL_testz00_3227 = BgL__ortest_1827z00_987;
											}
										else
											{	/* Eval/library.scm 234 */
												BgL_testz00_3227 =
													(BgL_backendz00_72 ==
													BGl_symbol2488z00zz__libraryz00);
											}
									}
									if (BgL_testz00_3227)
										{	/* Eval/library.scm 234 */
											if (CBOOL(BgL_versionz00_970))
												{	/* Eval/library.scm 247 */
													if (STRINGP(BgL_versionz00_970))
														{	/* Eval/library.scm 247 */
															obj_t BgL_list2021z00_2298;

															{	/* Eval/library.scm 247 */
																obj_t BgL_arg2022z00_2299;

																{	/* Eval/library.scm 247 */
																	obj_t BgL_arg2023z00_2300;

																	{	/* Eval/library.scm 247 */
																		obj_t BgL_arg2025z00_2302;

																		BgL_arg2025z00_2302 =
																			MAKE_PAIR(BgL_versionz00_970, BNIL);
																		BgL_arg2023z00_2300 =
																			MAKE_PAIR(BGl_string2478z00zz__libraryz00,
																			BgL_arg2025z00_2302);
																	}
																	BgL_arg2022z00_2299 =
																		MAKE_PAIR(BgL_suffixz00_71,
																		BgL_arg2023z00_2300);
																}
																BgL_list2021z00_2298 =
																	MAKE_PAIR(BgL_basez00_969,
																	BgL_arg2022z00_2299);
															}
															return
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2021z00_2298);
														}
													else
														{	/* Eval/library.scm 247 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2479z00zz__libraryz00,
																BGl_string2481z00zz__libraryz00,
																BgL_versionz00_970);
														}
												}
											else
												{	/* Eval/library.scm 247 */
													return
														string_append(BgL_basez00_969, BgL_suffixz00_71);
												}
										}
									else
										{	/* Eval/library.scm 234 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2479z00zz__libraryz00,
												BGl_string2490z00zz__libraryz00, BgL_backendz00_72);
										}
								}
						}
				}
			}
		}
	}



/* _library-file-name */
	obj_t BGl__libraryzd2filezd2namez00zz__libraryz00(obj_t BgL_envz00_2624,
		obj_t BgL_libraryz00_2625, obj_t BgL_suffixz00_2626,
		obj_t BgL_backendz00_2627)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 223 */
			{	/* Eval/library.scm 232 */
				obj_t BgL_auxz00_3257;

				obj_t BgL_auxz00_3250;

				obj_t BgL_auxz00_3243;

				if (SYMBOLP(BgL_backendz00_2627))
					{	/* Eval/library.scm 232 */
						BgL_auxz00_3257 = BgL_backendz00_2627;
					}
				else
					{
						obj_t BgL_auxz00_3260;

						BgL_auxz00_3260 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 8183)), BGl_string2491z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_backendz00_2627);
						FAILURE(BgL_auxz00_3260, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_suffixz00_2626))
					{	/* Eval/library.scm 232 */
						BgL_auxz00_3250 = BgL_suffixz00_2626;
					}
				else
					{
						obj_t BgL_auxz00_3253;

						BgL_auxz00_3253 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 8183)), BGl_string2491z00zz__libraryz00,
							BGl_string2471z00zz__libraryz00, BgL_suffixz00_2626);
						FAILURE(BgL_auxz00_3253, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_libraryz00_2625))
					{	/* Eval/library.scm 232 */
						BgL_auxz00_3243 = BgL_libraryz00_2625;
					}
				else
					{
						obj_t BgL_auxz00_3246;

						BgL_auxz00_3246 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 8183)), BGl_string2491z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_libraryz00_2625);
						FAILURE(BgL_auxz00_3246, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2filezd2namez00zz__libraryz00(BgL_auxz00_3243,
					BgL_auxz00_3250, BgL_auxz00_3257);
			}
		}
	}



/* library-loaded? */
	BGL_EXPORTED_DEF bool_t BGl_libraryzd2loadedzf3z21zz__libraryz00(obj_t
		BgL_libz00_74)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 267 */
			{	/* Eval/library.scm 268 */
				obj_t BgL_g1922z00_2312;

				BgL_g1922z00_2312 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
				{	/* Eval/library.scm 268 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/library.scm 268 */
							bgl_mutex_lock(BgL_g1922z00_2312);
						}
					else
						{	/* Eval/library.scm 268 */
							bgl_mutex_timed_lock(BgL_g1922z00_2312, ((long) 0));
			}}}
			{	/* Eval/library.scm 268 */
				obj_t BgL_rz00_2314;

				BgL_rz00_2314 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_libz00_74,
					BGl_za2loadedzd2librariesza2zd2zz__libraryz00);
				bgl_mutex_unlock(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
				return CBOOL(BgL_rz00_2314);
			}
		}
	}



/* _library-loaded? */
	obj_t BGl__libraryzd2loadedzf3z21zz__libraryz00(obj_t BgL_envz00_2628,
		obj_t BgL_libz00_2629)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 267 */
			{	/* Eval/library.scm 271 */
				bool_t BgL_auxz00_3272;

				{	/* Eval/library.scm 271 */
					obj_t BgL_auxz00_3273;

					if (SYMBOLP(BgL_libz00_2629))
						{	/* Eval/library.scm 271 */
							BgL_auxz00_3273 = BgL_libz00_2629;
						}
					else
						{
							obj_t BgL_auxz00_3276;

							BgL_auxz00_3276 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
								BINT(((long) 9707)), BGl_string2492z00zz__libraryz00,
								BGl_string2434z00zz__libraryz00, BgL_libz00_2629);
							FAILURE(BgL_auxz00_3276, BFALSE, BFALSE);
						}
					BgL_auxz00_3272 =
						BGl_libraryzd2loadedzf3z21zz__libraryz00(BgL_auxz00_3273);
				}
				return BBOOL(BgL_auxz00_3272);
			}
		}
	}



/* library-mark-loaded! */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t
		BgL_libz00_75)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 276 */
			{	/* Eval/library.scm 277 */
				obj_t BgL_g1922z00_2321;

				BgL_g1922z00_2321 = BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
				{	/* Eval/library.scm 277 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/library.scm 277 */
							bgl_mutex_lock(BgL_g1922z00_2321);
						}
					else
						{	/* Eval/library.scm 277 */
							bgl_mutex_timed_lock(BgL_g1922z00_2321, ((long) 0));
			}}}
			BGl_za2loadedzd2librariesza2zd2zz__libraryz00 =
				MAKE_PAIR(BgL_libz00_75, BGl_za2loadedzd2librariesza2zd2zz__libraryz00);
			bgl_mutex_unlock(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
			return BUNSPEC;
		}
	}



/* _library-mark-loaded! */
	obj_t BGl__libraryzd2markzd2loadedz12z12zz__libraryz00(obj_t BgL_envz00_2630,
		obj_t BgL_libz00_2631)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 276 */
			{	/* Eval/library.scm 280 */
				obj_t BgL_auxz00_3288;

				if (SYMBOLP(BgL_libz00_2631))
					{	/* Eval/library.scm 280 */
						BgL_auxz00_3288 = BgL_libz00_2631;
					}
				else
					{
						obj_t BgL_auxz00_3291;

						BgL_auxz00_3291 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 10099)), BGl_string2493z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_libz00_2631);
						FAILURE(BgL_auxz00_3291, BFALSE, BFALSE);
					}
				return BGl_libraryzd2markzd2loadedz12z12zz__libraryz00(BgL_auxz00_3288);
			}
		}
	}



/* library-load */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2loadzd2zz__libraryz00(obj_t
		BgL_libz00_76, obj_t BgL_pathz00_77)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 285 */
			{	/* Eval/library.scm 286 */
				obj_t BgL_modz00_1005;

				BgL_modz00_1005 = BGl_evalzd2modulezd2zz__evmodulez00();
				{	/* Eval/library.scm 287 */
					obj_t BgL_auxz00_3297;

					BgL_auxz00_3297 = BGl_interactionzd2environmentzd2zz__evalz00();
					BGL_MODULE_SET(BgL_auxz00_3297);
				}
				{	/* Eval/library.scm 288 */
					obj_t BgL_val1828z00_1007;

					BgL_val1828z00_1007 =
						BGl_zc3exitza32031ze3z83zz__libraryz00(BgL_pathz00_77,
						BgL_libz00_76);
					BGL_MODULE_SET(BgL_modz00_1005);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1828z00_1007)))
						{	/* Eval/library.scm 369 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1828z00_1007),
								CDR(BgL_val1828z00_1007));
						}
					else
						{	/* Eval/library.scm 369 */
							return BgL_val1828z00_1007;
						}
				}
			}
		}
	}



/* <exit:2031> */
	obj_t BGl_zc3exitza32031ze3z83zz__libraryz00(obj_t BgL_pathz00_2644,
		obj_t BgL_libz00_2643)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 369 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1829z00_1012;

			if (SET_EXIT(BgL_an_exit1829z00_1012))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1829z00_1012 = (void *) jmpbuf;
					{	/* Eval/library.scm 369 */

						PUSH_EXIT(BgL_an_exit1829z00_1012, ((long) 0));
						{	/* Eval/library.scm 290 */
							obj_t BgL_val1830z00_1013;

							if (STRINGP(BgL_libz00_2643))
								{	/* Eval/library.scm 291 */
									obj_t BgL_g2033z00_1015;

									BgL_g2033z00_1015 = BgL_libz00_2643;
									{	/* Llib/os.scm 197 */

										BgL_val1830z00_1013 =
											BGl_dynamiczd2loadzd2zz__osz00(BgL_g2033z00_1015,
											string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
									}
								}
							else
								{	/* Eval/library.scm 290 */
									if (SYMBOLP(BgL_libz00_2643))
										{	/* Eval/library.scm 294 */
											bool_t BgL_testz00_3317;

											{	/* Eval/library.scm 294 */
												bool_t BgL_res2375z00_2341;

												{	/* Eval/library.scm 294 */
													obj_t BgL_libz00_2331;

													BgL_libz00_2331 = BgL_libz00_2643;
													{	/* Eval/library.scm 294 */
														obj_t BgL_g1922z00_2332;

														BgL_g1922z00_2332 =
															BGl_za2libraryzd2mutexza2zd2zz__libraryz00;
														{	/* Eval/library.scm 294 */

															if ((((long) 0) == ((long) 0)))
																{	/* Eval/library.scm 294 */
																	bgl_mutex_lock(BgL_g1922z00_2332);
																}
															else
																{	/* Eval/library.scm 294 */
																	bgl_mutex_timed_lock(BgL_g1922z00_2332,
																		((long) 0));
													}}}
													{	/* Eval/library.scm 294 */
														obj_t BgL_rz00_2334;

														BgL_rz00_2334 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_libz00_2331,
															BGl_za2loadedzd2librariesza2zd2zz__libraryz00);
														bgl_mutex_unlock
															(BGl_za2libraryzd2mutexza2zd2zz__libraryz00);
														BgL_res2375z00_2341 = CBOOL(BgL_rz00_2334);
												}}
												BgL_testz00_3317 = BgL_res2375z00_2341;
											}
											if (BgL_testz00_3317)
												{	/* Eval/library.scm 294 */
													BgL_val1830z00_1013 = BUNSPEC;
												}
											else
												{	/* Eval/library.scm 297 */
													obj_t BgL_pathz00_1020;

													if (PAIRP(BgL_pathz00_2644))
														{	/* Eval/library.scm 297 */
															BgL_pathz00_1020 = BgL_pathz00_2644;
														}
													else
														{	/* Eval/library.scm 299 */
															obj_t BgL_venvz00_1080;

															BgL_venvz00_1080 =
																BGl_getenvz00zz__osz00(BSTRING_TO_STRING
																(BGl_string2494z00zz__libraryz00));
															if (CBOOL(BgL_venvz00_1080))
																{	/* Eval/library.scm 300 */
																	BgL_pathz00_1020 =
																		MAKE_PAIR(BGl_string2495z00zz__libraryz00,
																		BGl_unixzd2pathzd2ze3listze3zz__osz00
																		(BgL_venvz00_1080));
																}
															else
																{	/* Eval/library.scm 300 */
																	BgL_pathz00_1020 =
																		BGl_bigloozd2libraryzd2pathz00zz__paramz00
																		();
																}
														}
													{	/* Eval/library.scm 297 */
														obj_t BgL_initz00_1021;

														{	/* Eval/library.scm 303 */
															obj_t BgL_arg2070z00_1078;

															{	/* Eval/library.scm 303 */
																obj_t BgL_res2377z00_2349;

																{	/* Eval/library.scm 303 */
																	obj_t BgL_libz00_2343;

																	BgL_libz00_2343 = BgL_libz00_2643;
																	{	/* Eval/library.scm 303 */
																		obj_t BgL_arg2001z00_2344;

																		{	/* Eval/library.scm 303 */
																			obj_t BgL_res2376z00_2348;

																			{	/* Eval/library.scm 303 */
																				obj_t BgL_arg2312z00_2347;

																				BgL_arg2312z00_2347 =
																					SYMBOL_TO_STRING(BgL_libz00_2343);
																				BgL_res2376z00_2348 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2312z00_2347);
																			}
																			BgL_arg2001z00_2344 = BgL_res2376z00_2348;
																		}
																		BgL_res2377z00_2349 =
																			string_append(BgL_arg2001z00_2344,
																			BGl_string2472z00zz__libraryz00);
																	}
																}
																BgL_arg2070z00_1078 = BgL_res2377z00_2349;
															}
															BgL_initz00_1021 =
																BGl_findzd2filezf2pathz20zz__osz00
																(BgL_arg2070z00_1078, BgL_pathz00_1020);
														}
														{	/* Eval/library.scm 303 */
															obj_t BgL_bez00_1022;

															BgL_bez00_1022 = BGl_symbol2474z00zz__libraryz00;
															{	/* Eval/library.scm 304 */

																if (CBOOL(BgL_initz00_1021))
																	{	/* Eval/eval.scm 91 */
																		obj_t BgL_envz00_1024;

																		BgL_envz00_1024 =
																			BGl_defaultzd2environmentzd2zz__evalz00();
																		{	/* Eval/eval.scm 91 */

																			BGl_loadqz00zz__evalz00(BgL_initz00_1021,
																				BgL_envz00_1024);
																		}
																	}
																else
																	{	/* Eval/library.scm 308 */
																		BFALSE;
																	}
																{	/* Eval/library.scm 309 */
																	obj_t BgL_infoz00_1025;

																	{	/* Eval/library.scm 309 */
																		obj_t BgL_idz00_2350;

																		BgL_idz00_2350 = BgL_libz00_2643;
																		{	/* Eval/library.scm 309 */
																			obj_t BgL_g1825z00_2351;

																			BgL_g1825z00_2351 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_idz00_2350,
																				BGl_za2librariesza2z00zz__libraryz00);
																			if (CBOOL(BgL_g1825z00_2351))
																				{	/* Eval/library.scm 309 */
																					BgL_infoz00_1025 =
																						CDR(BgL_g1825z00_2351);
																				}
																			else
																				{	/* Eval/library.scm 309 */
																					BgL_infoz00_1025 = BFALSE;
																				}
																		}
																	}
																	{	/* Eval/library.scm 309 */
																		obj_t BgL_nz00_1026;

																		BgL_nz00_1026 =
																			BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																			(BGl_libraryzd2filezd2namez00zz__libraryz00
																			(BgL_libz00_2643,
																				BGl_string2496z00zz__libraryz00,
																				BgL_bez00_1022), BgL_bez00_1022);
																		{	/* Eval/library.scm 310 */
																			obj_t BgL_nsz00_1027;

																			BgL_nsz00_1027 =
																				BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																				(BGl_libraryzd2filezd2namez00zz__libraryz00
																				(BgL_libz00_2643,
																					string_append
																					(BGl_string2468z00zz__libraryz00,
																						BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																						()), BgL_bez00_1022),
																				BgL_bez00_1022);
																			{	/* Eval/library.scm 312 */
																				obj_t BgL_nez00_1028;

																				BgL_nez00_1028 =
																					BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																					(BGl_libraryzd2filezd2namez00zz__libraryz00
																					(BgL_libz00_2643,
																						string_append
																						(BGl_string2469z00zz__libraryz00,
																							BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																							()), BgL_bez00_1022),
																					BgL_bez00_1022);
																				{	/* Eval/library.scm 316 */
																					obj_t BgL_rscz00_1029;

																					{	/* Eval/library.scm 320 */
																						obj_t BgL_pz00_1064;

																						{	/* Eval/library.scm 320 */
																							obj_t BgL_arg2059z00_1067;

																							{	/* Eval/library.scm 321 */
																								obj_t BgL_res2378z00_2356;

																								{	/* Eval/library.scm 321 */
																									obj_t BgL_symbolz00_2354;

																									BgL_symbolz00_2354 =
																										BgL_libz00_2643;
																									{	/* Eval/library.scm 321 */
																										obj_t BgL_arg2312z00_2355;

																										BgL_arg2312z00_2355 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_2354);
																										BgL_res2378z00_2356 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2312z00_2355);
																									}
																								}
																								BgL_arg2059z00_1067 =
																									BgL_res2378z00_2356;
																							}
																							BgL_pz00_1064 =
																								string_append_3
																								(BGl_string2497z00zz__libraryz00,
																								BgL_arg2059z00_1067,
																								BGl_string2498z00zz__libraryz00);
																						}
																						if (fexists(BSTRING_TO_STRING
																								(BgL_pz00_1064)))
																							{	/* Eval/library.scm 329 */
																								BgL_rscz00_1029 = BgL_pz00_1064;
																							}
																						else
																							{	/* Eval/library.scm 329 */
																								BgL_rscz00_1029 = BFALSE;
																							}
																					}
																					{	/* Eval/library.scm 320 */
																						obj_t BgL_libsz00_1030;

																						BgL_libsz00_1030 =
																							BGl_findzd2filezf2pathz20zz__osz00
																							(BgL_nsz00_1027,
																							BgL_pathz00_1020);
																						{	/* Eval/library.scm 330 */
																							obj_t BgL_libez00_1031;

																							BgL_libez00_1031 =
																								BGl_findzd2filezf2pathz20zz__osz00
																								(BgL_nez00_1028,
																								BgL_pathz00_1020);
																							{	/* Eval/library.scm 331 */
																								obj_t BgL_namez00_1032;

																								{	/* Eval/library.scm 332 */
																									obj_t BgL_res2379z00_2360;

																									{	/* Eval/library.scm 332 */
																										obj_t BgL_symbolz00_2358;

																										BgL_symbolz00_2358 =
																											BgL_libz00_2643;
																										{	/* Eval/library.scm 332 */
																											obj_t BgL_arg2312z00_2359;

																											BgL_arg2312z00_2359 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_2358);
																											BgL_res2379z00_2360 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2312z00_2359);
																										}
																									}
																									BgL_namez00_1032 =
																										BgL_res2379z00_2360;
																								}
																								{	/* Eval/library.scm 332 */
																									obj_t BgL_init_sz00_1033;

																									if (CBOOL(BgL_infoz00_1025))
																										{	/* Eval/library.scm 333 */
																											BgL_init_sz00_1033 =
																												STRUCT_REF
																												(BgL_infoz00_1025,
																												(int) (((long) 3)));
																										}
																									else
																										{	/* Eval/library.scm 333 */
																											BgL_init_sz00_1033 =
																												BFALSE;
																										}
																									{	/* Eval/library.scm 333 */
																										obj_t BgL_init_ez00_1034;

																										if (CBOOL(BgL_infoz00_1025))
																											{	/* Eval/library.scm 334 */
																												BgL_init_ez00_1034 =
																													STRUCT_REF
																													(BgL_infoz00_1025,
																													(int) (((long) 4)));
																											}
																										else
																											{	/* Eval/library.scm 334 */
																												BgL_init_ez00_1034 =
																													BFALSE;
																											}
																										{	/* Eval/library.scm 334 */
																											obj_t
																												BgL_module_sz00_1035;
																											if (CBOOL
																												(BgL_infoz00_1025))
																												{	/* Eval/library.scm 335 */
																													BgL_module_sz00_1035 =
																														STRUCT_REF
																														(BgL_infoz00_1025,
																														(int) (((long) 5)));
																												}
																											else
																												{	/* Eval/library.scm 335 */
																													BgL_module_sz00_1035 =
																														BFALSE;
																												}
																											{	/* Eval/library.scm 335 */
																												obj_t
																													BgL_module_ez00_1036;
																												if (CBOOL
																													(BgL_infoz00_1025))
																													{	/* Eval/library.scm 339 */
																														BgL_module_ez00_1036
																															=
																															STRUCT_REF
																															(BgL_infoz00_1025,
																															(int) (((long)
																																	6)));
																													}
																												else
																													{	/* Eval/library.scm 339 */
																														BgL_module_ez00_1036
																															= BFALSE;
																													}
																												{	/* Eval/library.scm 339 */

																													{	/* Eval/library.scm 344 */
																														bool_t
																															BgL_testz00_3382;
																														if (STRINGP
																															(BgL_rscz00_1029))
																															{	/* Eval/library.scm 344 */
																																BgL_testz00_3382
																																	=
																																	((bool_t) 0);
																															}
																														else
																															{	/* Eval/library.scm 344 */
																																if (STRINGP
																																	(BgL_libsz00_1030))
																																	{	/* Eval/library.scm 344 */
																																		BgL_testz00_3382
																																			=
																																			((bool_t)
																																			0);
																																	}
																																else
																																	{	/* Eval/library.scm 344 */
																																		BgL_testz00_3382
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																														if (BgL_testz00_3382)
																															{	/* Eval/library.scm 345 */
																																obj_t
																																	BgL_arg2037z00_1038;
																																obj_t
																																	BgL_arg2038z00_1039;
																																BgL_arg2037z00_1038
																																	=
																																	BGl_symbol2499z00zz__libraryz00;
																																{	/* Eval/library.scm 346 */
																																	obj_t
																																		BgL_list2039z00_1040;
																																	{	/* Eval/library.scm 346 */
																																		obj_t
																																			BgL_arg2040z00_1041;
																																		BgL_arg2040z00_1041
																																			=
																																			MAKE_PAIR
																																			(BgL_nsz00_1027,
																																			BNIL);
																																		BgL_list2039z00_1040
																																			=
																																			MAKE_PAIR
																																			(BgL_libz00_2643,
																																			BgL_arg2040z00_1041);
																																	}
																																	BgL_arg2038z00_1039
																																		=
																																		BGl_formatz00zz__r4_output_6_10_3z00
																																		(BGl_string2501z00zz__libraryz00,
																																		BgL_list2039z00_1040);
																																}
																																BGl_errorz00zz__errorz00
																																	(BgL_arg2037z00_1038,
																																	BgL_arg2038z00_1039,
																																	BgL_pathz00_1020);
																															}
																														else
																															{	/* Eval/library.scm 344 */
																																if (STRINGP
																																	(BgL_libez00_1031))
																																	{	/* Eval/library.scm 348 */
																																		if (STRINGP
																																			(BgL_libsz00_1030))
																																			{	/* Eval/library.scm 361 */
																																				BGl_dynamiczd2loadzd2zz__osz00
																																					(BgL_libsz00_1030,
																																					BgL_init_sz00_1033,
																																					BgL_module_sz00_1035);
																																			}
																																		else
																																			{	/* Eval/library.scm 361 */
																																				BGl_dynamiczd2loadzd2zz__osz00
																																					(BgL_rscz00_1029,
																																					BgL_init_sz00_1033,
																																					BgL_module_sz00_1035);
																																			}
																																		BGl_dynamiczd2loadzd2zz__osz00
																																			(BgL_libez00_1031,
																																			BgL_init_ez00_1034,
																																			BgL_module_ez00_1036);
																																	}
																																else
																																	{	/* Eval/library.scm 348 */
																																		{	/* Eval/library.scm 353 */
																																			obj_t
																																				BgL_arg2043z00_1044;
																																			obj_t
																																				BgL_arg2044z00_1045;
																																			BgL_arg2043z00_1044
																																				=
																																				BGl_symbol2499z00zz__libraryz00;
																																			{	/* Eval/library.scm 354 */
																																				obj_t
																																					BgL_list2048z00_1049;
																																				{	/* Eval/library.scm 354 */
																																					obj_t
																																						BgL_arg2051z00_1050;
																																					BgL_arg2051z00_1050
																																						=
																																						MAKE_PAIR
																																						(BgL_nez00_1028,
																																						BNIL);
																																					BgL_list2048z00_1049
																																						=
																																						MAKE_PAIR
																																						(BgL_libz00_2643,
																																						BgL_arg2051z00_1050);
																																				}
																																				BgL_arg2044z00_1045
																																					=
																																					BGl_formatz00zz__r4_output_6_10_3z00
																																					(BGl_string2502z00zz__libraryz00,
																																					BgL_list2048z00_1049);
																																			}
																																			{	/* Eval/library.scm 351 */
																																				obj_t
																																					BgL_list2045z00_1046;
																																				{	/* Eval/library.scm 351 */
																																					obj_t
																																						BgL_arg2046z00_1047;
																																					{	/* Eval/library.scm 351 */
																																						obj_t
																																							BgL_arg2047z00_1048;
																																						BgL_arg2047z00_1048
																																							=
																																							MAKE_PAIR
																																							(BgL_pathz00_1020,
																																							BNIL);
																																						BgL_arg2046z00_1047
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2044z00_1045,
																																							BgL_arg2047z00_1048);
																																					}
																																					BgL_list2045z00_1046
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2043z00_1044,
																																						BgL_arg2046z00_1047);
																																				}
																																				BGl_evmeaningzd2warningzd2zz__everrorz00
																																					(BFALSE,
																																					BgL_list2045z00_1046);
																																			}
																																		}
																																		if (STRINGP
																																			(BgL_libsz00_1030))
																																			{	/* Eval/library.scm 357 */
																																				BGl_dynamiczd2loadzd2zz__osz00
																																					(BgL_libsz00_1030,
																																					BgL_init_sz00_1033,
																																					BgL_module_sz00_1035);
																																			}
																																		else
																																			{	/* Eval/library.scm 357 */
																																				BGl_dynamiczd2loadzd2zz__osz00
																																					(BgL_rscz00_1029,
																																					BgL_init_sz00_1033,
																																					BgL_module_sz00_1035);
																																			}
																																	}
																															}
																													}
																													{	/* Eval/library.scm 365 */
																														bool_t
																															BgL_testz00_3409;
																														if (CBOOL
																															(BgL_infoz00_1025))
																															{	/* Eval/library.scm 365 */
																																obj_t
																																	BgL_sz00_2379;
																																BgL_sz00_2379 =
																																	BgL_infoz00_1025;
																																BgL_testz00_3409
																																	=
																																	CBOOL
																																	(STRUCT_REF
																																	(BgL_sz00_2379,
																																		(int) ((
																																				(long)
																																				9))));
																															}
																														else
																															{	/* Eval/library.scm 365 */
																																BgL_testz00_3409
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_3409)
																															{	/* Eval/library.scm 366 */
																																obj_t
																																	BgL_g2056z00_1055;
																																BgL_g2056z00_1055
																																	=
																																	BGl_list2503z00zz__libraryz00;
																																{	/* Eval/eval.scm 80 */
																																	obj_t
																																		BgL_envz00_1056;
																																	BgL_envz00_1056
																																		=
																																		BGl_defaultzd2environmentzd2zz__evalz00
																																		();
																																	{	/* Eval/eval.scm 80 */

																																		BGl_evalz00zz__evalz00
																																			(BgL_g2056z00_1055,
																																			BgL_envz00_1056);
																																	}
																																}
																															}
																														else
																															{	/* Eval/library.scm 365 */
																																BFALSE;
																															}
																													}
																													{	/* Eval/library.scm 367 */
																														bool_t
																															BgL_testz00_3417;
																														if (CBOOL
																															(BgL_infoz00_1025))
																															{	/* Eval/library.scm 367 */
																																obj_t
																																	BgL_sz00_2382;
																																BgL_sz00_2382 =
																																	BgL_infoz00_1025;
																																BgL_testz00_3417
																																	=
																																	CBOOL
																																	(STRUCT_REF
																																	(BgL_sz00_2382,
																																		(int) ((
																																				(long)
																																				10))));
																															}
																														else
																															{	/* Eval/library.scm 367 */
																																BgL_testz00_3417
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_testz00_3417)
																															{	/* Eval/library.scm 368 */
																																obj_t
																																	BgL_g2056z00_1058;
																																BgL_g2056z00_1058
																																	=
																																	BGl_list2509z00zz__libraryz00;
																																{	/* Eval/eval.scm 80 */
																																	obj_t
																																		BgL_envz00_1059;
																																	BgL_envz00_1059
																																		=
																																		BGl_defaultzd2environmentzd2zz__evalz00
																																		();
																																	{	/* Eval/eval.scm 80 */

																																		BgL_val1830z00_1013
																																			=
																																			BGl_evalz00zz__evalz00
																																			(BgL_g2056z00_1058,
																																			BgL_envz00_1059);
																																	}
																																}
																															}
																														else
																															{	/* Eval/library.scm 367 */
																																BgL_val1830z00_1013
																																	= BFALSE;
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
									else
										{	/* Eval/library.scm 292 */
											BgL_val1830z00_1013 =
												BGl_bigloozd2typezd2errorz00zz__errorz00
												(BGl_symbol2499z00zz__libraryz00,
												BGl_string2513z00zz__libraryz00, BgL_libz00_2643);
										}
								}
							POP_EXIT();
							return BgL_val1830z00_1013;
						}
					}
				}
		}
	}



/* _library-load */
	obj_t BGl__libraryzd2loadzd2zz__libraryz00(obj_t BgL_envz00_2632,
		obj_t BgL_libz00_2633, obj_t BgL_pathz00_2634)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 285 */
			return
				BGl_libraryzd2loadzd2zz__libraryz00(BgL_libz00_2633, BgL_pathz00_2634);
		}
	}



/* library-load_e */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2load_ezd2zz__libraryz00(obj_t
		BgL_libz00_78, obj_t BgL_pathz00_79)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 374 */
			{	/* Eval/library.scm 375 */
				obj_t BgL_modz00_1083;

				BgL_modz00_1083 = BGl_evalzd2modulezd2zz__evmodulez00();
				{	/* Eval/library.scm 376 */
					obj_t BgL_auxz00_3429;

					BgL_auxz00_3429 = BGl_interactionzd2environmentzd2zz__evalz00();
					BGL_MODULE_SET(BgL_auxz00_3429);
				}
				{	/* Eval/library.scm 377 */
					obj_t BgL_val1836z00_1085;

					BgL_val1836z00_1085 =
						BGl_zc3exitza32080ze3z83zz__libraryz00(BgL_pathz00_79,
						BgL_libz00_78);
					BGL_MODULE_SET(BgL_modz00_1083);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1836z00_1085)))
						{	/* Eval/library.scm 445 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1836z00_1085),
								CDR(BgL_val1836z00_1085));
						}
					else
						{	/* Eval/library.scm 445 */
							return BgL_val1836z00_1085;
						}
				}
			}
		}
	}



/* <exit:2080> */
	obj_t BGl_zc3exitza32080ze3z83zz__libraryz00(obj_t BgL_pathz00_2642,
		obj_t BgL_libz00_2641)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 445 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1837z00_1090;

			if (SET_EXIT(BgL_an_exit1837z00_1090))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1837z00_1090 = (void *) jmpbuf;
					{	/* Eval/library.scm 445 */

						PUSH_EXIT(BgL_an_exit1837z00_1090, ((long) 0));
						{	/* Eval/library.scm 379 */
							obj_t BgL_val1838z00_1091;

							if (STRINGP(BgL_libz00_2641))
								{	/* Eval/library.scm 380 */
									obj_t BgL_g2033z00_1093;

									BgL_g2033z00_1093 = BgL_libz00_2641;
									{	/* Llib/os.scm 197 */

										BgL_val1838z00_1091 =
											BGl_dynamiczd2loadzd2zz__osz00(BgL_g2033z00_1093,
											string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
									}
								}
							else
								{	/* Eval/library.scm 379 */
									if (SYMBOLP(BgL_libz00_2641))
										{	/* Eval/library.scm 384 */
											obj_t BgL_pathz00_1097;

											if (PAIRP(BgL_pathz00_2642))
												{	/* Eval/library.scm 384 */
													BgL_pathz00_1097 = BgL_pathz00_2642;
												}
											else
												{	/* Eval/library.scm 386 */
													obj_t BgL_venvz00_1148;

													BgL_venvz00_1148 =
														BGl_getenvz00zz__osz00(BSTRING_TO_STRING
														(BGl_string2494z00zz__libraryz00));
													if (CBOOL(BgL_venvz00_1148))
														{	/* Eval/library.scm 387 */
															BgL_pathz00_1097 =
																MAKE_PAIR(BGl_string2495z00zz__libraryz00,
																BGl_unixzd2pathzd2ze3listze3zz__osz00
																(BgL_venvz00_1148));
														}
													else
														{	/* Eval/library.scm 387 */
															BgL_pathz00_1097 =
																BGl_bigloozd2libraryzd2pathz00zz__paramz00();
														}
												}
											{	/* Eval/library.scm 384 */
												obj_t BgL_initz00_1098;

												{	/* Eval/library.scm 390 */
													obj_t BgL_arg2111z00_1146;

													{	/* Eval/library.scm 390 */
														obj_t BgL_res2381z00_2395;

														{	/* Eval/library.scm 390 */
															obj_t BgL_libz00_2389;

															BgL_libz00_2389 = BgL_libz00_2641;
															{	/* Eval/library.scm 390 */
																obj_t BgL_arg2001z00_2390;

																{	/* Eval/library.scm 390 */
																	obj_t BgL_res2380z00_2394;

																	{	/* Eval/library.scm 390 */
																		obj_t BgL_arg2312z00_2393;

																		BgL_arg2312z00_2393 =
																			SYMBOL_TO_STRING(BgL_libz00_2389);
																		BgL_res2380z00_2394 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2312z00_2393);
																	}
																	BgL_arg2001z00_2390 = BgL_res2380z00_2394;
																}
																BgL_res2381z00_2395 =
																	string_append(BgL_arg2001z00_2390,
																	BGl_string2472z00zz__libraryz00);
															}
														}
														BgL_arg2111z00_1146 = BgL_res2381z00_2395;
													}
													BgL_initz00_1098 =
														BGl_findzd2filezf2pathz20zz__osz00
														(BgL_arg2111z00_1146, BgL_pathz00_1097);
												}
												{	/* Eval/library.scm 390 */
													obj_t BgL_bez00_1099;

													BgL_bez00_1099 = BGl_symbol2474z00zz__libraryz00;
													{	/* Eval/library.scm 391 */

														if (CBOOL(BgL_initz00_1098))
															{	/* Eval/eval.scm 91 */
																obj_t BgL_envz00_1101;

																BgL_envz00_1101 =
																	BGl_defaultzd2environmentzd2zz__evalz00();
																{	/* Eval/eval.scm 91 */

																	BGl_loadqz00zz__evalz00(BgL_initz00_1098,
																		BgL_envz00_1101);
																}
															}
														else
															{	/* Eval/library.scm 395 */
																BFALSE;
															}
														{	/* Eval/library.scm 396 */
															obj_t BgL_infoz00_1102;

															{	/* Eval/library.scm 396 */
																obj_t BgL_idz00_2396;

																BgL_idz00_2396 = BgL_libz00_2641;
																{	/* Eval/library.scm 396 */
																	obj_t BgL_g1825z00_2397;

																	BgL_g1825z00_2397 =
																		BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_idz00_2396,
																		BGl_za2librariesza2z00zz__libraryz00);
																	if (CBOOL(BgL_g1825z00_2397))
																		{	/* Eval/library.scm 396 */
																			BgL_infoz00_1102 = CDR(BgL_g1825z00_2397);
																		}
																	else
																		{	/* Eval/library.scm 396 */
																			BgL_infoz00_1102 = BFALSE;
																		}
																}
															}
															{	/* Eval/library.scm 396 */
																obj_t BgL_nz00_1103;

																BgL_nz00_1103 =
																	BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																	(BGl_libraryzd2filezd2namez00zz__libraryz00
																	(BgL_libz00_2641,
																		BGl_string2496z00zz__libraryz00,
																		BgL_bez00_1099), BgL_bez00_1099);
																{	/* Eval/library.scm 397 */
																	obj_t BgL_nsz00_1104;

																	BgL_nsz00_1104 =
																		BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																		(BGl_libraryzd2filezd2namez00zz__libraryz00
																		(BgL_libz00_2641,
																			string_append
																			(BGl_string2468z00zz__libraryz00,
																				BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																				()), BgL_bez00_1099), BgL_bez00_1099);
																	{	/* Eval/library.scm 400 */
																		obj_t BgL_nez00_1105;

																		BgL_nez00_1105 =
																			BGl_makezd2sharedzd2libzd2namezd2zz__osz00
																			(BGl_libraryzd2filezd2namez00zz__libraryz00
																			(BgL_libz00_2641,
																				string_append
																				(BGl_string2469z00zz__libraryz00,
																					BGl_evalzd2libraryzd2suffixz00zz__libraryz00
																					()), BgL_bez00_1099), BgL_bez00_1099);
																		{	/* Eval/library.scm 404 */
																			obj_t BgL_rscz00_1106;

																			{	/* Eval/library.scm 408 */
																				obj_t BgL_pz00_1132;

																				{	/* Eval/library.scm 408 */
																					obj_t BgL_arg2100z00_1135;

																					{	/* Eval/library.scm 409 */
																						obj_t BgL_res2382z00_2402;

																						{	/* Eval/library.scm 409 */
																							obj_t BgL_symbolz00_2400;

																							BgL_symbolz00_2400 =
																								BgL_libz00_2641;
																							{	/* Eval/library.scm 409 */
																								obj_t BgL_arg2312z00_2401;

																								BgL_arg2312z00_2401 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_2400);
																								BgL_res2382z00_2402 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2312z00_2401);
																							}
																						}
																						BgL_arg2100z00_1135 =
																							BgL_res2382z00_2402;
																					}
																					BgL_pz00_1132 =
																						string_append_3
																						(BGl_string2497z00zz__libraryz00,
																						BgL_arg2100z00_1135,
																						BGl_string2498z00zz__libraryz00);
																				}
																				if (fexists(BSTRING_TO_STRING
																						(BgL_pz00_1132)))
																					{	/* Eval/library.scm 417 */
																						BgL_rscz00_1106 = BgL_pz00_1132;
																					}
																				else
																					{	/* Eval/library.scm 417 */
																						BgL_rscz00_1106 = BFALSE;
																					}
																			}
																			{	/* Eval/library.scm 408 */
																				obj_t BgL_libez00_1107;

																				BgL_libez00_1107 =
																					BGl_findzd2filezf2pathz20zz__osz00
																					(BgL_nez00_1105, BgL_pathz00_1097);
																				{	/* Eval/library.scm 418 */
																					obj_t BgL_namez00_1108;

																					{	/* Eval/library.scm 419 */
																						obj_t BgL_res2383z00_2406;

																						{	/* Eval/library.scm 419 */
																							obj_t BgL_symbolz00_2404;

																							BgL_symbolz00_2404 =
																								BgL_libz00_2641;
																							{	/* Eval/library.scm 419 */
																								obj_t BgL_arg2312z00_2405;

																								BgL_arg2312z00_2405 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_2404);
																								BgL_res2383z00_2406 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2312z00_2405);
																							}
																						}
																						BgL_namez00_1108 =
																							BgL_res2383z00_2406;
																					}
																					{	/* Eval/library.scm 419 */
																						obj_t BgL_init_ez00_1109;

																						if (CBOOL(BgL_infoz00_1102))
																							{	/* Eval/library.scm 420 */
																								BgL_init_ez00_1109 =
																									STRUCT_REF(BgL_infoz00_1102,
																									(int) (((long) 4)));
																							}
																						else
																							{	/* Eval/library.scm 420 */
																								BgL_init_ez00_1109 = BFALSE;
																							}
																						{	/* Eval/library.scm 420 */
																							obj_t BgL_module_ez00_1110;

																							if (CBOOL(BgL_infoz00_1102))
																								{	/* Eval/library.scm 421 */
																									BgL_module_ez00_1110 =
																										STRUCT_REF(BgL_infoz00_1102,
																										(int) (((long) 6)));
																								}
																							else
																								{	/* Eval/library.scm 421 */
																									BgL_module_ez00_1110 = BFALSE;
																								}
																							{	/* Eval/library.scm 421 */

																								if (STRINGP(BgL_rscz00_1106))
																									{	/* Eval/library.scm 426 */
																										if (STRINGP
																											(BgL_libez00_1107))
																											{	/* Eval/library.scm 430 */
																												BGl_dynamiczd2loadzd2zz__osz00
																													(BgL_libez00_1107,
																													BgL_init_ez00_1109,
																													BgL_module_ez00_1110);
																											}
																										else
																											{	/* Eval/library.scm 435 */
																												obj_t
																													BgL_arg2085z00_1113;
																												obj_t
																													BgL_arg2086z00_1114;
																												BgL_arg2085z00_1113 =
																													BGl_symbol2499z00zz__libraryz00;
																												{	/* Eval/library.scm 436 */
																													obj_t
																														BgL_list2091z00_1118;
																													{	/* Eval/library.scm 436 */
																														obj_t
																															BgL_arg2092z00_1119;
																														BgL_arg2092z00_1119
																															=
																															MAKE_PAIR
																															(BgL_nez00_1105,
																															BNIL);
																														BgL_list2091z00_1118
																															=
																															MAKE_PAIR
																															(BgL_libz00_2641,
																															BgL_arg2092z00_1119);
																													}
																													BgL_arg2086z00_1114 =
																														BGl_formatz00zz__r4_output_6_10_3z00
																														(BGl_string2502z00zz__libraryz00,
																														BgL_list2091z00_1118);
																												}
																												{	/* Eval/library.scm 433 */
																													obj_t
																														BgL_list2087z00_1115;
																													{	/* Eval/library.scm 433 */
																														obj_t
																															BgL_arg2089z00_1116;
																														{	/* Eval/library.scm 433 */
																															obj_t
																																BgL_arg2090z00_1117;
																															BgL_arg2090z00_1117
																																=
																																MAKE_PAIR
																																(BgL_pathz00_1097,
																																BNIL);
																															BgL_arg2089z00_1116
																																=
																																MAKE_PAIR
																																(BgL_arg2086z00_1114,
																																BgL_arg2090z00_1117);
																														}
																														BgL_list2087z00_1115
																															=
																															MAKE_PAIR
																															(BgL_arg2085z00_1113,
																															BgL_arg2089z00_1116);
																													}
																													BGl_evmeaningzd2warningzd2zz__everrorz00
																														(BFALSE,
																														BgL_list2087z00_1115);
																												}
																											}
																									}
																								else
																									{	/* Eval/library.scm 427 */
																										obj_t BgL_arg2093z00_1120;

																										obj_t BgL_arg2094z00_1121;

																										BgL_arg2093z00_1120 =
																											BGl_symbol2499z00zz__libraryz00;
																										{	/* Eval/library.scm 428 */
																											obj_t
																												BgL_list2095z00_1122;
																											{	/* Eval/library.scm 428 */
																												obj_t
																													BgL_arg2096z00_1123;
																												BgL_arg2096z00_1123 =
																													MAKE_PAIR
																													(BgL_nsz00_1104,
																													BNIL);
																												BgL_list2095z00_1122 =
																													MAKE_PAIR
																													(BgL_libz00_2641,
																													BgL_arg2096z00_1123);
																											}
																											BgL_arg2094z00_1121 =
																												BGl_formatz00zz__r4_output_6_10_3z00
																												(BGl_string2501z00zz__libraryz00,
																												BgL_list2095z00_1122);
																										}
																										BGl_errorz00zz__errorz00
																											(BgL_arg2093z00_1120,
																											BgL_arg2094z00_1121,
																											BgL_pathz00_1097);
																									}
																								{	/* Eval/library.scm 441 */
																									bool_t BgL_testz00_3513;

																									if (CBOOL(BgL_infoz00_1102))
																										{	/* Eval/library.scm 441 */
																											obj_t BgL_sz00_2416;

																											BgL_sz00_2416 =
																												BgL_infoz00_1102;
																											BgL_testz00_3513 =
																												CBOOL(STRUCT_REF
																												(BgL_sz00_2416,
																													(int) (((long) 9))));
																										}
																									else
																										{	/* Eval/library.scm 441 */
																											BgL_testz00_3513 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_3513)
																										{	/* Eval/library.scm 442 */
																											obj_t BgL_g2056z00_1125;

																											BgL_g2056z00_1125 =
																												BGl_list2503z00zz__libraryz00;
																											{	/* Eval/eval.scm 80 */
																												obj_t BgL_envz00_1126;

																												BgL_envz00_1126 =
																													BGl_defaultzd2environmentzd2zz__evalz00
																													();
																												{	/* Eval/eval.scm 80 */

																													BGl_evalz00zz__evalz00
																														(BgL_g2056z00_1125,
																														BgL_envz00_1126);
																												}
																											}
																										}
																									else
																										{	/* Eval/library.scm 441 */
																											BFALSE;
																										}
																								}
																								{	/* Eval/library.scm 443 */
																									bool_t BgL_testz00_3521;

																									if (CBOOL(BgL_infoz00_1102))
																										{	/* Eval/library.scm 443 */
																											obj_t BgL_sz00_2419;

																											BgL_sz00_2419 =
																												BgL_infoz00_1102;
																											BgL_testz00_3521 =
																												CBOOL(STRUCT_REF
																												(BgL_sz00_2419,
																													(int) (((long) 10))));
																										}
																									else
																										{	/* Eval/library.scm 443 */
																											BgL_testz00_3521 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_3521)
																										{	/* Eval/library.scm 444 */
																											obj_t BgL_g2056z00_1128;

																											BgL_g2056z00_1128 =
																												BGl_list2509z00zz__libraryz00;
																											{	/* Eval/eval.scm 80 */
																												obj_t BgL_envz00_1129;

																												BgL_envz00_1129 =
																													BGl_defaultzd2environmentzd2zz__evalz00
																													();
																												{	/* Eval/eval.scm 80 */

																													BgL_val1838z00_1091 =
																														BGl_evalz00zz__evalz00
																														(BgL_g2056z00_1128,
																														BgL_envz00_1129);
																												}
																											}
																										}
																									else
																										{	/* Eval/library.scm 443 */
																											BgL_val1838z00_1091 =
																												BFALSE;
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
															}
														}
													}
												}
											}
										}
									else
										{	/* Eval/library.scm 381 */
											BgL_val1838z00_1091 =
												BGl_bigloozd2typezd2errorz00zz__errorz00
												(BGl_symbol2499z00zz__libraryz00,
												BGl_string2513z00zz__libraryz00, BgL_libz00_2641);
										}
								}
							POP_EXIT();
							return BgL_val1838z00_1091;
						}
					}
				}
		}
	}



/* _library-load_e */
	obj_t BGl__libraryzd2load_ezd2zz__libraryz00(obj_t BgL_envz00_2635,
		obj_t BgL_libz00_2636, obj_t BgL_pathz00_2637)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 374 */
			return
				BGl_libraryzd2load_ezd2zz__libraryz00(BgL_libz00_2636,
				BgL_pathz00_2637);
		}
	}



/* library-exists? */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t
		BgL_libz00_80, obj_t BgL_pathz00_81)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 450 */
			{	/* Eval/library.scm 451 */
				obj_t BgL_pathz00_1151;

				if (PAIRP(BgL_pathz00_81))
					{	/* Eval/library.scm 451 */
						BgL_pathz00_1151 = BgL_pathz00_81;
					}
				else
					{	/* Eval/library.scm 453 */
						obj_t BgL_venvz00_1161;

						BgL_venvz00_1161 =
							BGl_getenvz00zz__osz00(BSTRING_TO_STRING
							(BGl_string2494z00zz__libraryz00));
						if (CBOOL(BgL_venvz00_1161))
							{	/* Eval/library.scm 454 */
								BgL_pathz00_1151 =
									MAKE_PAIR(BGl_string2495z00zz__libraryz00,
									BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_venvz00_1161));
							}
						else
							{	/* Eval/library.scm 454 */
								BgL_pathz00_1151 = BGl_bigloozd2libraryzd2pathz00zz__paramz00();
							}
					}
				{	/* Eval/library.scm 457 */
					obj_t BgL_heapz00_1153;

					{	/* Eval/library.scm 461 */
						obj_t BgL_arg2119z00_1159;

						{	/* Eval/library.scm 461 */
							obj_t BgL_res2384z00_2426;

							{	/* Eval/library.scm 461 */
								obj_t BgL_arg2312z00_2425;

								BgL_arg2312z00_2425 = SYMBOL_TO_STRING(BgL_libz00_80);
								BgL_res2384z00_2426 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2312z00_2425);
							}
							BgL_arg2119z00_1159 = BgL_res2384z00_2426;
						}
						BgL_heapz00_1153 =
							string_append(BgL_arg2119z00_1159,
							BGl_string2514z00zz__libraryz00);
					}
					{	/* Eval/library.scm 461 */
						obj_t BgL_initz00_1154;

						{	/* Eval/library.scm 462 */
							obj_t BgL_arg2116z00_1157;

							{	/* Eval/library.scm 462 */
								obj_t BgL_res2385z00_2429;

								{	/* Eval/library.scm 462 */
									obj_t BgL_arg2312z00_2428;

									BgL_arg2312z00_2428 = SYMBOL_TO_STRING(BgL_libz00_80);
									BgL_res2385z00_2429 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2312z00_2428);
								}
								BgL_arg2116z00_1157 = BgL_res2385z00_2429;
							}
							BgL_initz00_1154 =
								string_append(BgL_arg2116z00_1157,
								BGl_string2472z00zz__libraryz00);
						}
						{	/* Eval/library.scm 462 */

							{	/* Eval/library.scm 463 */
								obj_t BgL_arg2115z00_1155;

								{	/* Eval/library.scm 463 */
									obj_t BgL__ortest_1842z00_1156;

									BgL__ortest_1842z00_1156 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_1153,
										BgL_pathz00_1151);
									if (CBOOL(BgL__ortest_1842z00_1156))
										{	/* Eval/library.scm 463 */
											BgL_arg2115z00_1155 = BgL__ortest_1842z00_1156;
										}
									else
										{	/* Eval/library.scm 463 */
											BgL_arg2115z00_1155 =
												BGl_findzd2filezf2pathz20zz__osz00(BgL_initz00_1154,
												BgL_pathz00_1151);
										}
								}
								return BBOOL(STRINGP(BgL_arg2115z00_1155));
							}
						}
					}
				}
			}
		}
	}



/* _library-exists? */
	obj_t BGl__libraryzd2existszf3z21zz__libraryz00(obj_t BgL_envz00_2638,
		obj_t BgL_libz00_2639, obj_t BgL_pathz00_2640)
	{
		AN_OBJECT;
		{	/* Eval/library.scm 450 */
			{	/* Eval/library.scm 451 */
				obj_t BgL_auxz00_3553;

				if (SYMBOLP(BgL_libz00_2639))
					{	/* Eval/library.scm 451 */
						BgL_auxz00_3553 = BgL_libz00_2639;
					}
				else
					{
						obj_t BgL_auxz00_3556;

						BgL_auxz00_3556 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2432z00zz__libraryz00,
							BINT(((long) 16166)), BGl_string2515z00zz__libraryz00,
							BGl_string2434z00zz__libraryz00, BgL_libz00_2639);
						FAILURE(BgL_auxz00_3556, BFALSE, BFALSE);
					}
				return
					BGl_libraryzd2existszf3z21zz__libraryz00(BgL_auxz00_3553,
					BgL_pathz00_2640);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__libraryz00()
	{
		AN_OBJECT;
		{	/* Eval/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 306671391),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 41770876),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
			return BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long)
					121715845), BSTRING_TO_STRING(BGl_string2516z00zz__libraryz00));
		}
	}

#ifdef __cplusplus
}
#endif
