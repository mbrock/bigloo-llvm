/*===========================================================================*/
/*   (Llib/hash.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/hash.scm -indent -o objs/obj_u/Llib/hash.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */

	static obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
	static obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32094ze3z83zz__hashz00(obj_t, obj_t);
	extern bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t,
		obj_t);
	extern long bgl_symbol_hash_number(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__hashz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__hashz00();
	extern obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__makezd2hashtablezd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	extern obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t,
		obj_t);
	static obj_t BGl__hashtablezf3zf3zz__hashz00(obj_t, obj_t);
	static obj_t BGl__hashtablezd2keyzd2listz00zz__hashz00(obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__hashz00();
	static obj_t BGl__hashtablezd2getzd2zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl__hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t, obj_t);
	extern long bgl_string_hash_number(char *);
	static obj_t BGl__hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2pointerzd2hashnumberz00zz__hashz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__hashz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t,
		long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl__getzd2hashnumberzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t,
		obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	extern obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern long bgl_pointer_hashnumber(obj_t, long);
	static obj_t BGl_toplevelzd2initzd2zz__hashz00();
	static obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t);
	static bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t, obj_t);
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern long bgl_string_hash(char *, int, int);
	BGL_EXPORTED_DECL obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
	static obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t);
	extern obj_t make_vector(int, obj_t);
	static long BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00;
	extern obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	static obj_t BGl_symbol2601z00zz__hashz00 = BUNSPEC;
	static long BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00;
	static obj_t BGl_symbol2604z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2606z00zz__hashz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2618z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_symbol2620z00zz__hashz00 = BUNSPEC;
	static bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t, obj_t);
	extern long bgl_foreign_hash_number(obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2hashzd2zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl__hashtablezd2mapzd2zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t);
	static obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t);
	static obj_t BGl__hashtablezd2siza7ez75zz__hashz00(obj_t, obj_t);
	static obj_t BGl_keyword2608z00zz__hashz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword2610z00zz__hashz00 = BUNSPEC;
	static obj_t BGl_keyword2612z00zz__hashz00 = BUNSPEC;
	static obj_t BGl__hashtablezd2ze3vectorz31zz__hashz00(obj_t, obj_t);
	static obj_t BGl_keyword2614z00zz__hashz00 = BUNSPEC;
	static obj_t BGl__hashtablezd2ze3listz31zz__hashz00(obj_t, obj_t);
	static obj_t BGl_keyword2616z00zz__hashz00 = BUNSPEC;
	static bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t, obj_t);
	extern long bgl_keyword_hash_number(obj_t);
	extern obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
	static bool_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t);
	extern long bgl_obj_hash_number(obj_t);
	extern obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__hashz00();
	extern int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t,
		obj_t);
	static obj_t BGl__hashtablezd2containszf3z21zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2ze3listzd2envze3zz__hashz00,
		BgL_bgl__hashtableza7d2za7e32647z00, BGl__hashtablezd2ze3listz31zz__hashz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2putz12zd2envz12zz__hashz00,
		BgL_bgl__hashtableza7d2put2648za7, BGl__hashtablezd2putz12zc0zz__hashz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2ze3vectorzd2envze3zz__hashz00,
		BgL_bgl__hashtableza7d2za7e32649z00,
		BGl__hashtablezd2ze3vectorz31zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2hashtablezd2envz00zz__hashz00,
		BgL_bgl__makeza7d2hashtabl2650za7, va_generic_entry,
		BGl__makezd2hashtablezd2zz__hashz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezf3zd2envz21zz__hashz00,
		BgL_bgl__hashtableza7f3za7f32651z00, BGl__hashtablezf3zf3zz__hashz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2600z00zz__hashz00,
		BgL_bgl_string2600za700za7za7_2652za7, "Illegal max bucket length", 25);
	      DEFINE_STRING(BGl_string2602z00zz__hashz00,
		BgL_bgl_string2602za700za7za7_2653za7, "Illegal equality test", 21);
	      DEFINE_STRING(BGl_string2603z00zz__hashz00,
		BgL_bgl_string2603za700za7za7_2654za7, "Illegal hashnumber function", 27);
	      DEFINE_STRING(BGl_string2605z00zz__hashz00,
		BgL_bgl_string2605za700za7za7_2655za7, "%hashtable", 10);
	      DEFINE_STRING(BGl_string2607z00zz__hashz00,
		BgL_bgl_string2607za700za7za7_2656za7, "none", 4);
	      DEFINE_STRING(BGl_string2598z00zz__hashz00,
		BgL_bgl_string2598za700za7za7_2657za7, "make-hashtable", 14);
	      DEFINE_STRING(BGl_string2609z00zz__hashz00,
		BgL_bgl_string2609za700za7za7_2658za7, "eqtest", 6);
	      DEFINE_STRING(BGl_string2599z00zz__hashz00,
		BgL_bgl_string2599za700za7za7_2659za7, "Illegal default bucket length", 29);
	      DEFINE_STRING(BGl_string2611z00zz__hashz00,
		BgL_bgl_string2611za700za7za7_2660za7, "hash", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2keyzd2listzd2envzd2zz__hashz00,
		BgL_bgl__hashtableza7d2key2661za7,
		BGl__hashtablezd2keyzd2listz00zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2613z00zz__hashz00,
		BgL_bgl_string2613za700za7za7_2662za7, "max-bucket-length", 17);
	      DEFINE_STRING(BGl_string2615z00zz__hashz00,
		BgL_bgl_string2615za700za7za7_2663za7, "size", 4);
	      DEFINE_STRING(BGl_string2617z00zz__hashz00,
		BgL_bgl_string2617za700za7za7_2664za7, "weak", 4);
	      DEFINE_STRING(BGl_string2619z00zz__hashz00,
		BgL_bgl_string2619za700za7za7_2665za7, "keys", 4);
	      DEFINE_STRING(BGl_string2621z00zz__hashz00,
		BgL_bgl_string2621za700za7za7_2666za7, "data", 4);
	      DEFINE_STRING(BGl_string2622z00zz__hashz00,
		BgL_bgl_string2622za700za7za7_2667za7, "/tmp/bigloo/runtime/Llib/hash.scm",
		33);
	      DEFINE_STRING(BGl_string2623z00zz__hashz00,
		BgL_bgl_string2623za700za7za7_2668za7, "_create-hashtable", 17);
	      DEFINE_STRING(BGl_string2624z00zz__hashz00,
		BgL_bgl_string2624za700za7za7_2669za7, "int", 3);
	      DEFINE_STRING(BGl_string2625z00zz__hashz00,
		BgL_bgl_string2625za700za7za7_2670za7, "_hashtable-weak-keys?", 21);
	      DEFINE_STRING(BGl_string2626z00zz__hashz00,
		BgL_bgl_string2626za700za7za7_2671za7, "struct", 6);
	      DEFINE_STRING(BGl_string2627z00zz__hashz00,
		BgL_bgl_string2627za700za7za7_2672za7, "_hashtable-weak-data?", 21);
	      DEFINE_STRING(BGl_string2628z00zz__hashz00,
		BgL_bgl_string2628za700za7za7_2673za7, "_hashtable-size", 15);
	      DEFINE_STRING(BGl_string2630z00zz__hashz00,
		BgL_bgl_string2630za700za7za7_2674za7, "_hashtable->list", 16);
	      DEFINE_STRING(BGl_string2629z00zz__hashz00,
		BgL_bgl_string2629za700za7za7_2675za7, "_hashtable->vector", 18);
	      DEFINE_STRING(BGl_string2631z00zz__hashz00,
		BgL_bgl_string2631za700za7za7_2676za7, "_hashtable-key-list", 19);
	      DEFINE_STRING(BGl_string2632z00zz__hashz00,
		BgL_bgl_string2632za700za7za7_2677za7, "_hashtable-map", 14);
	      DEFINE_STRING(BGl_string2633z00zz__hashz00,
		BgL_bgl_string2633za700za7za7_2678za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2634z00zz__hashz00,
		BgL_bgl_string2634za700za7za7_2679za7, "_hashtable-for-each", 19);
	      DEFINE_STRING(BGl_string2635z00zz__hashz00,
		BgL_bgl_string2635za700za7za7_2680za7, "_hashtable-filter!", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2getzd2envz00zz__hashz00,
		BgL_bgl__hashtableza7d2get2681za7, BGl__hashtablezd2getzd2zz__hashz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2636z00zz__hashz00,
		BgL_bgl_string2636za700za7za7_2682za7, "_hashtable-contains?", 20);
	      DEFINE_STRING(BGl_string2637z00zz__hashz00,
		BgL_bgl_string2637za700za7za7_2683za7, "_hashtable-get", 14);
	      DEFINE_STRING(BGl_string2638z00zz__hashz00,
		BgL_bgl_string2638za700za7za7_2684za7, "_hashtable-put!", 15);
	      DEFINE_STRING(BGl_string2640z00zz__hashz00,
		BgL_bgl_string2640za700za7za7_2685za7, "_hashtable-add!", 15);
	      DEFINE_STRING(BGl_string2639z00zz__hashz00,
		BgL_bgl_string2639za700za7za7_2686za7, "_hashtable-update!", 18);
	      DEFINE_STRING(BGl_string2641z00zz__hashz00,
		BgL_bgl_string2641za700za7za7_2687za7, "_hashtable-remove!", 18);
	      DEFINE_STRING(BGl_string2642z00zz__hashz00,
		BgL_bgl_string2642za700za7za7_2688za7, "_get-pointer-hashnumber", 23);
	      DEFINE_STRING(BGl_string2643z00zz__hashz00,
		BgL_bgl_string2643za700za7za7_2689za7, "long", 4);
	      DEFINE_STRING(BGl_string2644z00zz__hashz00,
		BgL_bgl_string2644za700za7za7_2690za7, "_string-hash", 12);
	      DEFINE_STRING(BGl_string2645z00zz__hashz00,
		BgL_bgl_string2645za700za7za7_2691za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2646z00zz__hashz00,
		BgL_bgl_string2646za700za7za7_2692za7, "__hash", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2removez12zd2envz12zz__hashz00,
		BgL_bgl__hashtableza7d2rem2693za7, BGl__hashtablezd2removez12zc0zz__hashz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2filterz12zd2envz12zz__hashz00,
		BgL_bgl__hashtableza7d2fil2694za7, BGl__hashtablezd2filterz12zc0zz__hashz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2forzd2eachzd2envzd2zz__hashz00,
		BgL_bgl__hashtableza7d2for2695za7,
		BGl__hashtablezd2forzd2eachz00zz__hashz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_createzd2hashtablezd2envz00zz__hashz00,
		BgL_bgl__createza7d2hashta2696za7, opt_generic_entry,
		BGl__createzd2hashtablezd2zz__hashz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2hashnumberzd2envz00zz__hashz00,
		BgL_bgl__getza7d2hashnumbe2697za7, BGl__getzd2hashnumberzd2zz__hashz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hashtablezd2weakzd2datazf3zd2envz21zz__hashz00,
		BgL_bgl__hashtableza7d2wea2698za7,
		BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2hashzd2envz00zz__hashz00,
		BgL_bgl__stringza7d2hashza7d2699z00, opt_generic_entry,
		BGl__stringzd2hashzd2zz__hashz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hashtablezd2weakzd2keyszf3zd2envz21zz__hashz00,
		BgL_bgl__hashtableza7d2wea2700za7,
		BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2containszf3zd2envzf3zz__hashz00,
		BgL_bgl__hashtableza7d2con2701za7,
		BGl__hashtablezd2containszf3z21zz__hashz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2pointerzd2hashnumberzd2envzd2zz__hashz00,
		BgL_bgl__getza7d2pointerza7d2702z00,
		BGl__getzd2pointerzd2hashnumberz00zz__hashz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2siza7ezd2envza7zz__hashz00,
		BgL_bgl__hashtableza7d2siza72703z00, BGl__hashtablezd2siza7ez75zz__hashz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2addz12zd2envz12zz__hashz00,
		BgL_bgl__hashtableza7d2add2704za7, BGl__hashtablezd2addz12zc0zz__hashz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2mapzd2envz00zz__hashz00,
		BgL_bgl__hashtableza7d2map2705za7, BGl__hashtablezd2mapzd2zz__hashz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hashtablezd2updatez12zd2envz12zz__hashz00,
		BgL_bgl__hashtableza7d2upd2706za7, BGl__hashtablezd2updatez12zc0zz__hashz00,
		0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long
		BgL_checksumz00_3510, char *BgL_fromz00_3511)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__hashz00))
				{
					BGl_requirezd2initializa7ationz75zz__hashz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__hashz00();
					BGl_importedzd2moduleszd2initz00zz__hashz00();
					BGl_toplevelzd2initzd2zz__hashz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__hashz00()
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 18 */
			BGl_symbol2601z00zz__hashz00 =
				bstring_to_symbol(BGl_string2598z00zz__hashz00);
			BGl_symbol2604z00zz__hashz00 =
				bstring_to_symbol(BGl_string2605z00zz__hashz00);
			BGl_symbol2606z00zz__hashz00 =
				bstring_to_symbol(BGl_string2607z00zz__hashz00);
			BGl_keyword2608z00zz__hashz00 =
				bstring_to_keyword(BGl_string2609z00zz__hashz00);
			BGl_keyword2610z00zz__hashz00 =
				bstring_to_keyword(BGl_string2611z00zz__hashz00);
			BGl_keyword2612z00zz__hashz00 =
				bstring_to_keyword(BGl_string2613z00zz__hashz00);
			BGl_keyword2614z00zz__hashz00 =
				bstring_to_keyword(BGl_string2615z00zz__hashz00);
			BGl_keyword2616z00zz__hashz00 =
				bstring_to_keyword(BGl_string2617z00zz__hashz00);
			BGl_symbol2618z00zz__hashz00 =
				bstring_to_symbol(BGl_string2619z00zz__hashz00);
			return (BGl_symbol2620z00zz__hashz00 =
				bstring_to_symbol(BGl_string2621z00zz__hashz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__hashz00()
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 18 */
			BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00 = ((long) 128);
			return (BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00 =
				((long) 10), BUNSPEC);
		}
	}



/* make-hashtable */
	BGL_EXPORTED_DEF obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t
		BgL_argsz00_32)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 123 */
			{	/* Llib/hash.scm 124 */
				obj_t BgL_siza7eza7_917;

				obj_t BgL_mblenz00_918;

				obj_t BgL_eqtestz00_919;

				obj_t BgL_hashnz00_920;

				long BgL_wkz00_921;

				if (PAIRP(BgL_argsz00_32))
					{	/* Llib/hash.scm 126 */
						bool_t BgL_testz00_3530;

						if (INTEGERP(CAR(BgL_argsz00_32)))
							{	/* Llib/hash.scm 126 */
								BgL_testz00_3530 =
									((long) CINT(CAR(BgL_argsz00_32)) >= ((long) 1));
							}
						else
							{	/* Llib/hash.scm 126 */
								BgL_testz00_3530 = ((bool_t) 0);
							}
						if (BgL_testz00_3530)
							{	/* Llib/hash.scm 126 */
								BgL_siza7eza7_917 = CAR(BgL_argsz00_32);
							}
						else
							{	/* Llib/hash.scm 126 */
								if ((CAR(BgL_argsz00_32) == BUNSPEC))
									{	/* Llib/hash.scm 128 */
										BgL_siza7eza7_917 =
											BINT
											(BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00);
									}
								else
									{	/* Llib/hash.scm 128 */
										BgL_siza7eza7_917 =
											BGl_errorz00zz__errorz00(BGl_string2598z00zz__hashz00,
											BGl_string2599z00zz__hashz00, BgL_argsz00_32);
									}
							}
					}
				else
					{	/* Llib/hash.scm 124 */
						BgL_siza7eza7_917 =
							BINT(BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00);
					}
				{	/* Llib/hash.scm 135 */
					bool_t BgL_testz00_3544;

					if (PAIRP(BgL_argsz00_32))
						{	/* Llib/hash.scm 135 */
							obj_t BgL_auxz00_3547;

							BgL_auxz00_3547 = CDR(BgL_argsz00_32);
							BgL_testz00_3544 = PAIRP(BgL_auxz00_3547);
						}
					else
						{	/* Llib/hash.scm 135 */
							BgL_testz00_3544 = ((bool_t) 0);
						}
					if (BgL_testz00_3544)
						{	/* Llib/hash.scm 137 */
							bool_t BgL_testz00_3550;

							if (INTEGERP(CAR(CDR(BgL_argsz00_32))))
								{	/* Llib/hash.scm 137 */
									long BgL_auxz00_3555;

									{	/* Llib/hash.scm 137 */
										obj_t BgL_pairz00_1942;

										BgL_pairz00_1942 = CDR(BgL_argsz00_32);
										BgL_auxz00_3555 = (long) CINT(CAR(BgL_pairz00_1942));
									}
									BgL_testz00_3550 = (BgL_auxz00_3555 >= ((long) 1));
								}
							else
								{	/* Llib/hash.scm 137 */
									BgL_testz00_3550 = ((bool_t) 0);
								}
							if (BgL_testz00_3550)
								{	/* Llib/hash.scm 137 */
									BgL_mblenz00_918 = CAR(CDR(BgL_argsz00_32));
								}
							else
								{	/* Llib/hash.scm 137 */
									if ((CAR(CDR(BgL_argsz00_32)) == BUNSPEC))
										{	/* Llib/hash.scm 139 */
											BgL_mblenz00_918 =
												BINT(BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00);
										}
									else
										{	/* Llib/hash.scm 139 */
											BgL_mblenz00_918 =
												BGl_errorz00zz__errorz00(BGl_string2598z00zz__hashz00,
												BGl_string2600z00zz__hashz00, BgL_argsz00_32);
										}
								}
						}
					else
						{	/* Llib/hash.scm 135 */
							BgL_mblenz00_918 =
								BINT(BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00);
						}
				}
				{
					obj_t BgL_eqz00_942;

					if (PAIRP(BgL_argsz00_32))
						{	/* Llib/hash.scm 146 */
							obj_t BgL_cdrzd21463zd2_947;

							BgL_cdrzd21463zd2_947 = CDR(BgL_argsz00_32);
							if (PAIRP(BgL_cdrzd21463zd2_947))
								{	/* Llib/hash.scm 146 */
									obj_t BgL_cdrzd21466zd2_949;

									BgL_cdrzd21466zd2_949 = CDR(BgL_cdrzd21463zd2_947);
									if (PAIRP(BgL_cdrzd21466zd2_949))
										{	/* Llib/hash.scm 146 */
											BgL_eqz00_942 = CAR(BgL_cdrzd21466zd2_949);
											{	/* Llib/hash.scm 149 */
												bool_t BgL_testz00_3577;

												if (PROCEDUREP(BgL_eqz00_942))
													{	/* Llib/hash.scm 149 */
														BgL_testz00_3577 =
															PROCEDURE_CORRECT_ARITYP(BgL_eqz00_942,
															(int) (((long) 2)));
													}
												else
													{	/* Llib/hash.scm 149 */
														BgL_testz00_3577 = ((bool_t) 0);
													}
												if (BgL_testz00_3577)
													{	/* Llib/hash.scm 149 */
														BgL_eqtestz00_919 = BgL_eqz00_942;
													}
												else
													{	/* Llib/hash.scm 149 */
														if ((BgL_eqz00_942 == BUNSPEC))
															{	/* Llib/hash.scm 151 */
																BgL_eqtestz00_919 = BFALSE;
															}
														else
															{	/* Llib/hash.scm 151 */
																BgL_eqtestz00_919 =
																	BGl_errorz00zz__errorz00
																	(BGl_symbol2601z00zz__hashz00,
																	BGl_string2602z00zz__hashz00, BgL_eqz00_942);
															}
													}
											}
										}
									else
										{	/* Llib/hash.scm 146 */
											BgL_eqtestz00_919 = BFALSE;
										}
								}
							else
								{	/* Llib/hash.scm 146 */
									BgL_eqtestz00_919 = BFALSE;
								}
						}
					else
						{	/* Llib/hash.scm 146 */
							BgL_eqtestz00_919 = BFALSE;
						}
				}
				{
					obj_t BgL_hnz00_955;

					if (PAIRP(BgL_argsz00_32))
						{	/* Llib/hash.scm 159 */
							obj_t BgL_cdrzd21477zd2_960;

							BgL_cdrzd21477zd2_960 = CDR(BgL_argsz00_32);
							if (PAIRP(BgL_cdrzd21477zd2_960))
								{	/* Llib/hash.scm 159 */
									obj_t BgL_cdrzd21480zd2_962;

									BgL_cdrzd21480zd2_962 = CDR(BgL_cdrzd21477zd2_960);
									if (PAIRP(BgL_cdrzd21480zd2_962))
										{	/* Llib/hash.scm 159 */
											obj_t BgL_cdrzd21483zd2_964;

											BgL_cdrzd21483zd2_964 = CDR(BgL_cdrzd21480zd2_962);
											if (PAIRP(BgL_cdrzd21483zd2_964))
												{	/* Llib/hash.scm 159 */
													BgL_hnz00_955 = CAR(BgL_cdrzd21483zd2_964);
													{	/* Llib/hash.scm 162 */
														bool_t BgL_testz00_3597;

														if (PROCEDUREP(BgL_hnz00_955))
															{	/* Llib/hash.scm 162 */
																BgL_testz00_3597 =
																	PROCEDURE_CORRECT_ARITYP(BgL_hnz00_955,
																	(int) (((long) 1)));
															}
														else
															{	/* Llib/hash.scm 162 */
																BgL_testz00_3597 = ((bool_t) 0);
															}
														if (BgL_testz00_3597)
															{	/* Llib/hash.scm 162 */
																BgL_hashnz00_920 = BgL_hnz00_955;
															}
														else
															{	/* Llib/hash.scm 162 */
																if ((BgL_hnz00_955 == BUNSPEC))
																	{	/* Llib/hash.scm 164 */
																		BgL_hashnz00_920 = BFALSE;
																	}
																else
																	{	/* Llib/hash.scm 164 */
																		BgL_hashnz00_920 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2601z00zz__hashz00,
																			BGl_string2603z00zz__hashz00,
																			BgL_hnz00_955);
																	}
															}
													}
												}
											else
												{	/* Llib/hash.scm 159 */
													BgL_hashnz00_920 = BFALSE;
												}
										}
									else
										{	/* Llib/hash.scm 159 */
											BgL_hashnz00_920 = BFALSE;
										}
								}
							else
								{	/* Llib/hash.scm 159 */
									BgL_hashnz00_920 = BFALSE;
								}
						}
					else
						{	/* Llib/hash.scm 159 */
							BgL_hashnz00_920 = BFALSE;
						}
				}
				{	/* Llib/hash.scm 172 */
					long BgL_auxz00_3626;

					long BgL_auxz00_3606;

					if (PAIRP(BgL_argsz00_32))
						{	/* Llib/hash.scm 172 */
							obj_t BgL_cdrzd21514zd2_993;

							BgL_cdrzd21514zd2_993 = CDR(BgL_argsz00_32);
							if (PAIRP(BgL_cdrzd21514zd2_993))
								{	/* Llib/hash.scm 172 */
									obj_t BgL_cdrzd21517zd2_995;

									BgL_cdrzd21517zd2_995 = CDR(BgL_cdrzd21514zd2_993);
									if (PAIRP(BgL_cdrzd21517zd2_995))
										{	/* Llib/hash.scm 172 */
											obj_t BgL_cdrzd21520zd2_997;

											BgL_cdrzd21520zd2_997 = CDR(BgL_cdrzd21517zd2_995);
											if (PAIRP(BgL_cdrzd21520zd2_997))
												{	/* Llib/hash.scm 172 */
													obj_t BgL_cdrzd21523zd2_999;

													BgL_cdrzd21523zd2_999 = CDR(BgL_cdrzd21520zd2_997);
													if (PAIRP(BgL_cdrzd21523zd2_999))
														{	/* Llib/hash.scm 172 */
															obj_t BgL_cdrzd21526zd2_1001;

															BgL_cdrzd21526zd2_1001 =
																CDR(BgL_cdrzd21523zd2_999);
															if (PAIRP(BgL_cdrzd21526zd2_1001))
																{	/* Llib/hash.scm 172 */
																	if (NULLP(CDR(BgL_cdrzd21526zd2_1001)))
																		{	/* Llib/hash.scm 172 */
																			obj_t BgL_wkdz00_1998;

																			BgL_wkdz00_1998 =
																				CAR(BgL_cdrzd21526zd2_1001);
																			{	/* Llib/hash.scm 172 */
																				bool_t BgL_testz00_3648;

																				if ((BgL_wkdz00_1998 == BUNSPEC))
																					{	/* Llib/hash.scm 172 */
																						BgL_testz00_3648 = ((bool_t) 0);
																					}
																				else
																					{	/* Llib/hash.scm 172 */
																						BgL_testz00_3648 =
																							CBOOL(BgL_wkdz00_1998);
																					}
																				if (BgL_testz00_3648)
																					{	/* Llib/hash.scm 172 */
																						BgL_auxz00_3626 = ((long) 2);
																					}
																				else
																					{	/* Llib/hash.scm 172 */
																						BgL_auxz00_3626 = ((long) 0);
																		}}}
																	else
																		{	/* Llib/hash.scm 172 */
																			BgL_auxz00_3626 = ((long) 0);
																}}
															else
																{	/* Llib/hash.scm 172 */
																	BgL_auxz00_3626 = ((long) 0);
														}}
													else
														{	/* Llib/hash.scm 172 */
															BgL_auxz00_3626 = ((long) 0);
												}}
											else
												{	/* Llib/hash.scm 172 */
													BgL_auxz00_3626 = ((long) 0);
										}}
									else
										{	/* Llib/hash.scm 172 */
											BgL_auxz00_3626 = ((long) 0);
								}}
							else
								{	/* Llib/hash.scm 172 */
									BgL_auxz00_3626 = ((long) 0);
						}}
					else
						{	/* Llib/hash.scm 172 */
							BgL_auxz00_3626 = ((long) 0);
						}
					if (PAIRP(BgL_argsz00_32))
						{	/* Llib/hash.scm 172 */
							obj_t BgL_cdrzd21494zd2_977;

							BgL_cdrzd21494zd2_977 = CDR(BgL_argsz00_32);
							if (PAIRP(BgL_cdrzd21494zd2_977))
								{	/* Llib/hash.scm 172 */
									obj_t BgL_cdrzd21497zd2_979;

									BgL_cdrzd21497zd2_979 = CDR(BgL_cdrzd21494zd2_977);
									if (PAIRP(BgL_cdrzd21497zd2_979))
										{	/* Llib/hash.scm 172 */
											obj_t BgL_cdrzd21500zd2_981;

											BgL_cdrzd21500zd2_981 = CDR(BgL_cdrzd21497zd2_979);
											if (PAIRP(BgL_cdrzd21500zd2_981))
												{	/* Llib/hash.scm 172 */
													obj_t BgL_cdrzd21503zd2_983;

													BgL_cdrzd21503zd2_983 = CDR(BgL_cdrzd21500zd2_981);
													if (PAIRP(BgL_cdrzd21503zd2_983))
														{	/* Llib/hash.scm 172 */
															obj_t BgL_wkkz00_1979;

															BgL_wkkz00_1979 = CAR(BgL_cdrzd21503zd2_983);
															{	/* Llib/hash.scm 172 */
																bool_t BgL_testz00_3622;

																if ((BgL_wkkz00_1979 == BUNSPEC))
																	{	/* Llib/hash.scm 172 */
																		BgL_testz00_3622 = ((bool_t) 0);
																	}
																else
																	{	/* Llib/hash.scm 172 */
																		BgL_testz00_3622 = CBOOL(BgL_wkkz00_1979);
																	}
																if (BgL_testz00_3622)
																	{	/* Llib/hash.scm 172 */
																		BgL_auxz00_3606 = ((long) 1);
																	}
																else
																	{	/* Llib/hash.scm 172 */
																		BgL_auxz00_3606 = ((long) 0);
														}}}
													else
														{	/* Llib/hash.scm 172 */
															BgL_auxz00_3606 = ((long) 0);
												}}
											else
												{	/* Llib/hash.scm 172 */
													BgL_auxz00_3606 = ((long) 0);
										}}
									else
										{	/* Llib/hash.scm 172 */
											BgL_auxz00_3606 = ((long) 0);
								}}
							else
								{	/* Llib/hash.scm 172 */
									BgL_auxz00_3606 = ((long) 0);
						}}
					else
						{	/* Llib/hash.scm 172 */
							BgL_auxz00_3606 = ((long) 0);
						}
					BgL_wkz00_921 = (BgL_auxz00_3606 | BgL_auxz00_3626);
				}
				{	/* Llib/hash.scm 188 */
					obj_t BgL_arg1941z00_923;

					BgL_arg1941z00_923 = make_vector(CINT(BgL_siza7eza7_917), BNIL);
					{	/* Llib/hash.scm 188 */
						obj_t BgL_newz00_2011;

						BgL_newz00_2011 =
							create_struct(BGl_symbol2604z00zz__hashz00, (int) (((long) 6)));
						{	/* Llib/hash.scm 188 */
							obj_t BgL_auxz00_3659;

							int BgL_auxz00_3657;

							BgL_auxz00_3659 = BINT(BgL_wkz00_921);
							BgL_auxz00_3657 = (int) (((long) 5));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3657, BgL_auxz00_3659);
						}
						{	/* Llib/hash.scm 188 */
							int BgL_auxz00_3662;

							BgL_auxz00_3662 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3662, BgL_hashnz00_920);
						}
						{	/* Llib/hash.scm 188 */
							int BgL_auxz00_3665;

							BgL_auxz00_3665 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3665, BgL_eqtestz00_919);
						}
						{	/* Llib/hash.scm 188 */
							int BgL_auxz00_3668;

							BgL_auxz00_3668 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3668, BgL_arg1941z00_923);
						}
						{	/* Llib/hash.scm 188 */
							int BgL_auxz00_3671;

							BgL_auxz00_3671 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3671, BgL_mblenz00_918);
						}
						{	/* Llib/hash.scm 188 */
							obj_t BgL_auxz00_3676;

							int BgL_auxz00_3674;

							BgL_auxz00_3676 = BINT(((long) 0));
							BgL_auxz00_3674 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_2011, BgL_auxz00_3674, BgL_auxz00_3676);
						}
						return BgL_newz00_2011;
					}
				}
			}
		}
	}



/* _make-hashtable */
	obj_t BGl__makezd2hashtablezd2zz__hashz00(obj_t BgL_envz00_3383,
		obj_t BgL_argsz00_3384)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 123 */
			return BGl_makezd2hashtablezd2zz__hashz00(BgL_argsz00_3384);
		}
	}



/* _create-hashtable */
	obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t BgL_envz00_39,
		obj_t BgL_opt1883z00_38)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 193 */
			{	/* Llib/hash.scm 193 */
				int BgL_l1884z00_1008;

				BgL_l1884z00_1008 = VECTOR_LENGTH(BgL_opt1883z00_38);
				{	/* Llib/hash.scm 193 */

					{	/* Llib/hash.scm 193 */
						obj_t BgL_eqtestz00_1012;

						BgL_eqtestz00_1012 = BFALSE;
						{	/* Llib/hash.scm 193 */
							obj_t BgL_hashz00_1013;

							BgL_hashz00_1013 = BFALSE;
							{	/* Llib/hash.scm 193 */
								obj_t BgL_maxzd2bucketzd2lengthz00_1014;

								BgL_maxzd2bucketzd2lengthz00_1014 = BINT(((long) 10));
								{	/* Llib/hash.scm 193 */
									obj_t BgL_siza7eza7_1015;

									BgL_siza7eza7_1015 = BINT(((long) 128));
									{	/* Llib/hash.scm 198 */
										obj_t BgL_weakz00_1016;

										BgL_weakz00_1016 = BGl_symbol2606z00zz__hashz00;
										{	/* Llib/hash.scm 193 */

											{	/* Llib/hash.scm 193 */
												long BgL_index1888z00_1017;

												{
													long BgL_iz00_2044;

													BgL_iz00_2044 = ((long) 0);
												BgL_search1885z00_2043:
													if ((BgL_iz00_2044 == (long) (BgL_l1884z00_1008)))
														{	/* Llib/hash.scm 193 */
															BgL_index1888z00_1017 = ((long) -1);
														}
													else
														{	/* Llib/hash.scm 193 */
															obj_t BgL_vz00_2046;

															BgL_vz00_2046 =
																VECTOR_REF(BgL_opt1883z00_38,
																(int) (BgL_iz00_2044));
															if (
																(BgL_vz00_2046 ==
																	BGl_keyword2608z00zz__hashz00))
																{	/* Llib/hash.scm 193 */
																	BgL_index1888z00_1017 =
																		(BgL_iz00_2044 + ((long) 1));
																}
															else
																{
																	long BgL_iz00_3691;

																	BgL_iz00_3691 = (BgL_iz00_2044 + ((long) 2));
																	BgL_iz00_2044 = BgL_iz00_3691;
																	goto BgL_search1885z00_2043;
																}
														}
												}
												if ((BgL_index1888z00_1017 >= ((long) 0)))
													{	/* Llib/hash.scm 193 */
														BgL_eqtestz00_1012 =
															VECTOR_REF(BgL_opt1883z00_38,
															(int) (BgL_index1888z00_1017));
													}
												else
													{	/* Llib/hash.scm 193 */
														BFALSE;
													}
											}
											{	/* Llib/hash.scm 193 */
												long BgL_index1889z00_1019;

												{
													long BgL_iz00_2058;

													BgL_iz00_2058 = ((long) 0);
												BgL_search1885z00_2057:
													if ((BgL_iz00_2058 == (long) (BgL_l1884z00_1008)))
														{	/* Llib/hash.scm 193 */
															BgL_index1889z00_1019 = ((long) -1);
														}
													else
														{	/* Llib/hash.scm 193 */
															obj_t BgL_vz00_2060;

															BgL_vz00_2060 =
																VECTOR_REF(BgL_opt1883z00_38,
																(int) (BgL_iz00_2058));
															if (
																(BgL_vz00_2060 ==
																	BGl_keyword2610z00zz__hashz00))
																{	/* Llib/hash.scm 193 */
																	BgL_index1889z00_1019 =
																		(BgL_iz00_2058 + ((long) 1));
																}
															else
																{
																	long BgL_iz00_3705;

																	BgL_iz00_3705 = (BgL_iz00_2058 + ((long) 2));
																	BgL_iz00_2058 = BgL_iz00_3705;
																	goto BgL_search1885z00_2057;
																}
														}
												}
												if ((BgL_index1889z00_1019 >= ((long) 0)))
													{	/* Llib/hash.scm 193 */
														BgL_hashz00_1013 =
															VECTOR_REF(BgL_opt1883z00_38,
															(int) (BgL_index1889z00_1019));
													}
												else
													{	/* Llib/hash.scm 193 */
														BFALSE;
													}
											}
											{	/* Llib/hash.scm 193 */
												long BgL_index1890z00_1021;

												{
													long BgL_iz00_2072;

													BgL_iz00_2072 = ((long) 0);
												BgL_search1885z00_2071:
													if ((BgL_iz00_2072 == (long) (BgL_l1884z00_1008)))
														{	/* Llib/hash.scm 193 */
															BgL_index1890z00_1021 = ((long) -1);
														}
													else
														{	/* Llib/hash.scm 193 */
															obj_t BgL_vz00_2074;

															BgL_vz00_2074 =
																VECTOR_REF(BgL_opt1883z00_38,
																(int) (BgL_iz00_2072));
															if (
																(BgL_vz00_2074 ==
																	BGl_keyword2612z00zz__hashz00))
																{	/* Llib/hash.scm 193 */
																	BgL_index1890z00_1021 =
																		(BgL_iz00_2072 + ((long) 1));
																}
															else
																{
																	long BgL_iz00_3719;

																	BgL_iz00_3719 = (BgL_iz00_2072 + ((long) 2));
																	BgL_iz00_2072 = BgL_iz00_3719;
																	goto BgL_search1885z00_2071;
																}
														}
												}
												if ((BgL_index1890z00_1021 >= ((long) 0)))
													{	/* Llib/hash.scm 193 */
														BgL_maxzd2bucketzd2lengthz00_1014 =
															VECTOR_REF(BgL_opt1883z00_38,
															(int) (BgL_index1890z00_1021));
													}
												else
													{	/* Llib/hash.scm 193 */
														BFALSE;
													}
											}
											{	/* Llib/hash.scm 193 */
												long BgL_index1891z00_1023;

												{
													long BgL_iz00_2086;

													BgL_iz00_2086 = ((long) 0);
												BgL_search1885z00_2085:
													if ((BgL_iz00_2086 == (long) (BgL_l1884z00_1008)))
														{	/* Llib/hash.scm 193 */
															BgL_index1891z00_1023 = ((long) -1);
														}
													else
														{	/* Llib/hash.scm 193 */
															obj_t BgL_vz00_2088;

															BgL_vz00_2088 =
																VECTOR_REF(BgL_opt1883z00_38,
																(int) (BgL_iz00_2086));
															if (
																(BgL_vz00_2088 ==
																	BGl_keyword2614z00zz__hashz00))
																{	/* Llib/hash.scm 193 */
																	BgL_index1891z00_1023 =
																		(BgL_iz00_2086 + ((long) 1));
																}
															else
																{
																	long BgL_iz00_3733;

																	BgL_iz00_3733 = (BgL_iz00_2086 + ((long) 2));
																	BgL_iz00_2086 = BgL_iz00_3733;
																	goto BgL_search1885z00_2085;
																}
														}
												}
												if ((BgL_index1891z00_1023 >= ((long) 0)))
													{	/* Llib/hash.scm 193 */
														BgL_siza7eza7_1015 =
															VECTOR_REF(BgL_opt1883z00_38,
															(int) (BgL_index1891z00_1023));
													}
												else
													{	/* Llib/hash.scm 193 */
														BFALSE;
													}
											}
											{	/* Llib/hash.scm 193 */
												long BgL_index1892z00_1025;

												{
													long BgL_iz00_2100;

													BgL_iz00_2100 = ((long) 0);
												BgL_search1885z00_2099:
													if ((BgL_iz00_2100 == (long) (BgL_l1884z00_1008)))
														{	/* Llib/hash.scm 193 */
															BgL_index1892z00_1025 = ((long) -1);
														}
													else
														{	/* Llib/hash.scm 193 */
															obj_t BgL_vz00_2102;

															BgL_vz00_2102 =
																VECTOR_REF(BgL_opt1883z00_38,
																(int) (BgL_iz00_2100));
															if (
																(BgL_vz00_2102 ==
																	BGl_keyword2616z00zz__hashz00))
																{	/* Llib/hash.scm 193 */
																	BgL_index1892z00_1025 =
																		(BgL_iz00_2100 + ((long) 1));
																}
															else
																{
																	long BgL_iz00_3747;

																	BgL_iz00_3747 = (BgL_iz00_2100 + ((long) 2));
																	BgL_iz00_2100 = BgL_iz00_3747;
																	goto BgL_search1885z00_2099;
																}
														}
												}
												if ((BgL_index1892z00_1025 >= ((long) 0)))
													{	/* Llib/hash.scm 193 */
														BgL_weakz00_1016 =
															VECTOR_REF(BgL_opt1883z00_38,
															(int) (BgL_index1892z00_1025));
													}
												else
													{	/* Llib/hash.scm 193 */
														BFALSE;
													}
											}
											{	/* Llib/hash.scm 193 */
												obj_t BgL_eqtestz00_1027;

												BgL_eqtestz00_1027 = BgL_eqtestz00_1012;
												{	/* Llib/hash.scm 193 */
													obj_t BgL_hashz00_1028;

													BgL_hashz00_1028 = BgL_hashz00_1013;
													{	/* Llib/hash.scm 193 */
														obj_t BgL_maxzd2bucketzd2lengthz00_1029;

														BgL_maxzd2bucketzd2lengthz00_1029 =
															BgL_maxzd2bucketzd2lengthz00_1014;
														{	/* Llib/hash.scm 193 */
															obj_t BgL_siza7eza7_1030;

															BgL_siza7eza7_1030 = BgL_siza7eza7_1015;
															{	/* Llib/hash.scm 193 */
																obj_t BgL_weakz00_1031;

																BgL_weakz00_1031 = BgL_weakz00_1016;
																{	/* Llib/hash.scm 193 */
																	long BgL_weakz00_2118;

																	if (
																		(BgL_weakz00_1031 ==
																			BGl_symbol2618z00zz__hashz00))
																		{	/* Llib/hash.scm 193 */
																			BgL_weakz00_2118 = ((long) 1);
																		}
																	else
																		{	/* Llib/hash.scm 193 */
																			if (
																				(BgL_weakz00_1031 ==
																					BGl_symbol2620z00zz__hashz00))
																				{	/* Llib/hash.scm 193 */
																					BgL_weakz00_2118 = ((long) 2);
																				}
																			else
																				{	/* Llib/hash.scm 193 */
																					if (
																						(BgL_weakz00_1031 ==
																							BGl_symbol2606z00zz__hashz00))
																						{	/* Llib/hash.scm 193 */
																							BgL_weakz00_2118 = ((long) 0);
																						}
																					else
																						{	/* Llib/hash.scm 193 */
																							if (CBOOL(BgL_weakz00_1031))
																								{	/* Llib/hash.scm 193 */
																									BgL_weakz00_2118 = ((long) 2);
																								}
																							else
																								{	/* Llib/hash.scm 193 */
																									BgL_weakz00_2118 = ((long) 0);
																		}}}}
																	{	/* Llib/hash.scm 193 */
																		obj_t BgL_arg2008z00_2124;

																		{	/* Llib/hash.scm 193 */
																			int BgL_auxz00_3761;

																			{	/* Llib/hash.scm 193 */
																				obj_t BgL_auxz00_3762;

																				if (INTEGERP(BgL_siza7eza7_1030))
																					{	/* Llib/hash.scm 193 */
																						BgL_auxz00_3762 =
																							BgL_siza7eza7_1030;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3765;

																						BgL_auxz00_3765 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string2622z00zz__hashz00,
																							BINT(((long) 6845)),
																							BGl_string2623z00zz__hashz00,
																							BGl_string2624z00zz__hashz00,
																							BgL_siza7eza7_1030);
																						FAILURE(BgL_auxz00_3765, BFALSE,
																							BFALSE);
																					}
																				BgL_auxz00_3761 = CINT(BgL_auxz00_3762);
																			}
																			BgL_arg2008z00_2124 =
																				make_vector(BgL_auxz00_3761, BNIL);
																		}
																		{	/* Llib/hash.scm 193 */
																			obj_t BgL_newz00_2137;

																			BgL_newz00_2137 =
																				create_struct
																				(BGl_symbol2604z00zz__hashz00,
																				(int) (((long) 6)));
																			{	/* Llib/hash.scm 193 */
																				obj_t BgL_auxz00_3775;

																				int BgL_auxz00_3773;

																				BgL_auxz00_3775 =
																					BINT(BgL_weakz00_2118);
																				BgL_auxz00_3773 = (int) (((long) 5));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3773, BgL_auxz00_3775);
																			}
																			{	/* Llib/hash.scm 193 */
																				int BgL_auxz00_3778;

																				BgL_auxz00_3778 = (int) (((long) 4));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3778, BgL_hashz00_1028);
																			}
																			{	/* Llib/hash.scm 193 */
																				int BgL_auxz00_3781;

																				BgL_auxz00_3781 = (int) (((long) 3));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3781, BgL_eqtestz00_1027);
																			}
																			{	/* Llib/hash.scm 193 */
																				int BgL_auxz00_3784;

																				BgL_auxz00_3784 = (int) (((long) 2));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3784, BgL_arg2008z00_2124);
																			}
																			{	/* Llib/hash.scm 193 */
																				int BgL_auxz00_3787;

																				BgL_auxz00_3787 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3787,
																					BgL_maxzd2bucketzd2lengthz00_1029);
																			}
																			{	/* Llib/hash.scm 193 */
																				obj_t BgL_auxz00_3792;

																				int BgL_auxz00_3790;

																				BgL_auxz00_3792 = BINT(((long) 0));
																				BgL_auxz00_3790 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_2137,
																					BgL_auxz00_3790, BgL_auxz00_3792);
																			}
																			return BgL_newz00_2137;
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



/* create-hashtable */
	BGL_EXPORTED_DEF obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t
		BgL_eqtestz00_33, obj_t BgL_hashz00_34,
		obj_t BgL_maxzd2bucketzd2lengthz00_35, obj_t BgL_siza7eza7_36,
		obj_t BgL_weakz00_37)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 193 */
			{	/* Llib/hash.scm 199 */
				long BgL_weakz00_2190;

				if ((BgL_weakz00_37 == BGl_symbol2618z00zz__hashz00))
					{	/* Llib/hash.scm 199 */
						BgL_weakz00_2190 = ((long) 1);
					}
				else
					{	/* Llib/hash.scm 199 */
						if ((BgL_weakz00_37 == BGl_symbol2620z00zz__hashz00))
							{	/* Llib/hash.scm 199 */
								BgL_weakz00_2190 = ((long) 2);
							}
						else
							{	/* Llib/hash.scm 199 */
								if ((BgL_weakz00_37 == BGl_symbol2606z00zz__hashz00))
									{	/* Llib/hash.scm 199 */
										BgL_weakz00_2190 = ((long) 0);
									}
								else
									{	/* Llib/hash.scm 199 */
										if (CBOOL(BgL_weakz00_37))
											{	/* Llib/hash.scm 199 */
												BgL_weakz00_2190 = ((long) 2);
											}
										else
											{	/* Llib/hash.scm 199 */
												BgL_weakz00_2190 = ((long) 0);
					}}}}
				{	/* Llib/hash.scm 199 */
					obj_t BgL_arg2008z00_2196;

					BgL_arg2008z00_2196 = make_vector(CINT(BgL_siza7eza7_36), BNIL);
					{	/* Llib/hash.scm 199 */
						obj_t BgL_newz00_2209;

						BgL_newz00_2209 =
							create_struct(BGl_symbol2604z00zz__hashz00, (int) (((long) 6)));
						{	/* Llib/hash.scm 199 */
							obj_t BgL_auxz00_3809;

							int BgL_auxz00_3807;

							BgL_auxz00_3809 = BINT(BgL_weakz00_2190);
							BgL_auxz00_3807 = (int) (((long) 5));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3807, BgL_auxz00_3809);
						}
						{	/* Llib/hash.scm 199 */
							int BgL_auxz00_3812;

							BgL_auxz00_3812 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3812, BgL_hashz00_34);
						}
						{	/* Llib/hash.scm 199 */
							int BgL_auxz00_3815;

							BgL_auxz00_3815 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3815, BgL_eqtestz00_33);
						}
						{	/* Llib/hash.scm 199 */
							int BgL_auxz00_3818;

							BgL_auxz00_3818 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3818, BgL_arg2008z00_2196);
						}
						{	/* Llib/hash.scm 199 */
							int BgL_auxz00_3821;

							BgL_auxz00_3821 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3821,
								BgL_maxzd2bucketzd2lengthz00_35);
						}
						{	/* Llib/hash.scm 199 */
							obj_t BgL_auxz00_3826;

							int BgL_auxz00_3824;

							BgL_auxz00_3826 = BINT(((long) 0));
							BgL_auxz00_3824 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_2209, BgL_auxz00_3824, BgL_auxz00_3826);
						}
						return BgL_newz00_2209;
					}
				}
			}
		}
	}



/* hashtable? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t BgL_objz00_40)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 209 */
			if (STRUCTP(BgL_objz00_40))
				{	/* Llib/hash.scm 210 */
					return (STRUCT_KEY(BgL_objz00_40) == BGl_symbol2604z00zz__hashz00);
				}
			else
				{	/* Llib/hash.scm 210 */
					return ((bool_t) 0);
				}
		}
	}



/* _hashtable? */
	obj_t BGl__hashtablezf3zf3zz__hashz00(obj_t BgL_envz00_3385,
		obj_t BgL_objz00_3386)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 209 */
			return BBOOL(BGl_hashtablezf3zf3zz__hashz00(BgL_objz00_3386));
		}
	}



/* hashtable-weak-keys? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t
		BgL_tablez00_42)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 221 */
			if (
				(((long) 0) ==
					(((long) 1) &
						(long) CINT(STRUCT_REF(BgL_tablez00_42, (int) (((long) 5)))))))
				{	/* Llib/hash.scm 222 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/hash.scm 222 */
					return ((bool_t) 1);
				}
		}
	}



/* _hashtable-weak-keys? */
	obj_t BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t BgL_envz00_3387,
		obj_t BgL_tablez00_3388)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 221 */
			{	/* Llib/hash.scm 222 */
				bool_t BgL_auxz00_3841;

				{	/* Llib/hash.scm 222 */
					obj_t BgL_auxz00_3842;

					if (STRUCTP(BgL_tablez00_3388))
						{	/* Llib/hash.scm 222 */
							BgL_auxz00_3842 = BgL_tablez00_3388;
						}
					else
						{
							obj_t BgL_auxz00_3845;

							BgL_auxz00_3845 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
								BINT(((long) 8083)), BGl_string2625z00zz__hashz00,
								BGl_string2626z00zz__hashz00, BgL_tablez00_3388);
							FAILURE(BgL_auxz00_3845, BFALSE, BFALSE);
						}
					BgL_auxz00_3841 =
						BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_auxz00_3842);
				}
				return BBOOL(BgL_auxz00_3841);
			}
		}
	}



/* hashtable-weak-data? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t
		BgL_tablez00_43)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 227 */
			if (
				(((long) 0) ==
					(((long) 2) &
						(long) CINT(STRUCT_REF(BgL_tablez00_43, (int) (((long) 5)))))))
				{	/* Llib/hash.scm 228 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/hash.scm 228 */
					return ((bool_t) 1);
				}
		}
	}



/* _hashtable-weak-data? */
	obj_t BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t BgL_envz00_3389,
		obj_t BgL_tablez00_3390)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 227 */
			{	/* Llib/hash.scm 228 */
				bool_t BgL_auxz00_3857;

				{	/* Llib/hash.scm 228 */
					obj_t BgL_auxz00_3858;

					if (STRUCTP(BgL_tablez00_3390))
						{	/* Llib/hash.scm 228 */
							BgL_auxz00_3858 = BgL_tablez00_3390;
						}
					else
						{
							obj_t BgL_auxz00_3861;

							BgL_auxz00_3861 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
								BINT(((long) 8421)), BGl_string2627z00zz__hashz00,
								BGl_string2626z00zz__hashz00, BgL_tablez00_3390);
							FAILURE(BgL_auxz00_3861, BFALSE, BFALSE);
						}
					BgL_auxz00_3857 =
						BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_3858);
				}
				return BBOOL(BgL_auxz00_3857);
			}
		}
	}



/* hashtable-size */
	BGL_EXPORTED_DEF long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t
		BgL_tablez00_44)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 233 */
			return (long) CINT(STRUCT_REF(BgL_tablez00_44, (int) (((long) 0))));
		}
	}



/* _hashtable-size */
	obj_t BGl__hashtablezd2siza7ez75zz__hashz00(obj_t BgL_envz00_3391,
		obj_t BgL_tablez00_3392)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 233 */
			{	/* Llib/hash.scm 234 */
				long BgL_auxz00_3870;

				{	/* Llib/hash.scm 234 */
					obj_t BgL_auxz00_3871;

					if (STRUCTP(BgL_tablez00_3392))
						{	/* Llib/hash.scm 234 */
							BgL_auxz00_3871 = BgL_tablez00_3392;
						}
					else
						{
							obj_t BgL_auxz00_3874;

							BgL_auxz00_3874 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
								BINT(((long) 8741)), BGl_string2628z00zz__hashz00,
								BGl_string2626z00zz__hashz00, BgL_tablez00_3392);
							FAILURE(BgL_auxz00_3874, BFALSE, BFALSE);
						}
					BgL_auxz00_3870 =
						BGl_hashtablezd2siza7ez75zz__hashz00(BgL_auxz00_3871);
				}
				return BINT(BgL_auxz00_3870);
			}
		}
	}



/* hashtable->vector */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t
		BgL_tablez00_45)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 239 */
			{	/* Llib/hash.scm 240 */
				bool_t BgL_testz00_3880;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_45, (int) (((long) 5))))))
					{	/* Llib/hash.scm 240 */
						BgL_testz00_3880 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 240 */
						BgL_testz00_3880 = ((bool_t) 1);
					}
				if (BgL_testz00_3880)
					{	/* Llib/hash.scm 240 */
						return
							BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00
							(BgL_tablez00_45);
					}
				else
					{	/* Llib/hash.scm 240 */
						return
							BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(BgL_tablez00_45);
					}
			}
		}
	}



/* _hashtable->vector */
	obj_t BGl__hashtablezd2ze3vectorz31zz__hashz00(obj_t BgL_envz00_3393,
		obj_t BgL_tablez00_3394)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 239 */
			{	/* Llib/hash.scm 240 */
				obj_t BgL_auxz00_3888;

				if (STRUCTP(BgL_tablez00_3394))
					{	/* Llib/hash.scm 240 */
						BgL_auxz00_3888 = BgL_tablez00_3394;
					}
				else
					{
						obj_t BgL_auxz00_3891;

						BgL_auxz00_3891 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 9034)), BGl_string2629z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3394);
						FAILURE(BgL_auxz00_3891, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2ze3vectorz31zz__hashz00(BgL_auxz00_3888);
			}
		}
	}



/* plain-hashtable->vector */
	obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t BgL_tablez00_46)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 247 */
			{	/* Llib/hash.scm 248 */
				obj_t BgL_vecz00_1057;

				{	/* Llib/hash.scm 248 */
					long BgL_arg2038z00_1077;

					BgL_arg2038z00_1077 =
						(long) CINT(STRUCT_REF(BgL_tablez00_46, (int) (((long) 0))));
					BgL_vecz00_1057 = make_vector((int) (BgL_arg2038z00_1077), BUNSPEC);
				}
				{	/* Llib/hash.scm 248 */
					obj_t BgL_bucketsz00_1058;

					BgL_bucketsz00_1058 = STRUCT_REF(BgL_tablez00_46, (int) (((long) 2)));
					{	/* Llib/hash.scm 249 */
						int BgL_bucketszd2lenzd2_1059;

						BgL_bucketszd2lenzd2_1059 = VECTOR_LENGTH(BgL_bucketsz00_1058);
						{	/* Llib/hash.scm 250 */

							{
								long BgL_iz00_1061;

								long BgL_wz00_1062;

								BgL_iz00_1061 = ((long) 0);
								BgL_wz00_1062 = ((long) 0);
							BgL_zc3anonymousza32029ze3z83_1063:
								if ((BgL_iz00_1061 == (long) (BgL_bucketszd2lenzd2_1059)))
									{	/* Llib/hash.scm 253 */
										return BgL_vecz00_1057;
									}
								else
									{	/* Llib/hash.scm 255 */
										obj_t BgL_g1837z00_1065;

										BgL_g1837z00_1065 =
											VECTOR_REF(BgL_bucketsz00_1058, (int) (BgL_iz00_1061));
										{
											obj_t BgL_bucketz00_1067;

											long BgL_wz00_1068;

											BgL_bucketz00_1067 = BgL_g1837z00_1065;
											BgL_wz00_1068 = BgL_wz00_1062;
										BgL_zc3anonymousza32031ze3z83_1069:
											if (NULLP(BgL_bucketz00_1067))
												{
													long BgL_wz00_3913;

													long BgL_iz00_3911;

													BgL_iz00_3911 = (BgL_iz00_1061 + ((long) 1));
													BgL_wz00_3913 = BgL_wz00_1068;
													BgL_wz00_1062 = BgL_wz00_3913;
													BgL_iz00_1061 = BgL_iz00_3911;
													goto BgL_zc3anonymousza32029ze3z83_1063;
												}
											else
												{	/* Llib/hash.scm 257 */
													{	/* Llib/hash.scm 260 */
														obj_t BgL_arg2034z00_1072;

														{	/* Llib/hash.scm 260 */
															obj_t BgL_pairz00_2310;

															BgL_pairz00_2310 = BgL_bucketz00_1067;
															BgL_arg2034z00_1072 = CDR(CAR(BgL_pairz00_2310));
														}
														VECTOR_SET(BgL_vecz00_1057,
															(int) (BgL_wz00_1068), BgL_arg2034z00_1072);
													}
													{
														long BgL_wz00_3920;

														obj_t BgL_bucketz00_3918;

														BgL_bucketz00_3918 = CDR(BgL_bucketz00_1067);
														BgL_wz00_3920 = (BgL_wz00_1068 + ((long) 1));
														BgL_wz00_1068 = BgL_wz00_3920;
														BgL_bucketz00_1067 = BgL_bucketz00_3918;
														goto BgL_zc3anonymousza32031ze3z83_1069;
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



/* hashtable->list */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t
		BgL_tablez00_47)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 266 */
			{	/* Llib/hash.scm 267 */
				bool_t BgL_testz00_3922;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_47, (int) (((long) 5))))))
					{	/* Llib/hash.scm 267 */
						BgL_testz00_3922 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 267 */
						BgL_testz00_3922 = ((bool_t) 1);
					}
				if (BgL_testz00_3922)
					{	/* Llib/hash.scm 267 */
						return
							BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_tablez00_47);
					}
				else
					{	/* Llib/hash.scm 267 */
						return
							BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(BgL_tablez00_47);
					}
			}
		}
	}



/* _hashtable->list */
	obj_t BGl__hashtablezd2ze3listz31zz__hashz00(obj_t BgL_envz00_3395,
		obj_t BgL_tablez00_3396)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 266 */
			{	/* Llib/hash.scm 267 */
				obj_t BgL_auxz00_3930;

				if (STRUCTP(BgL_tablez00_3396))
					{	/* Llib/hash.scm 267 */
						BgL_auxz00_3930 = BgL_tablez00_3396;
					}
				else
					{
						obj_t BgL_auxz00_3933;

						BgL_auxz00_3933 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 10089)), BGl_string2630z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3396);
						FAILURE(BgL_auxz00_3933, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2ze3listz31zz__hashz00(BgL_auxz00_3930);
			}
		}
	}



/* plain-hashtable->list */
	obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t BgL_tablez00_48)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 274 */
			{	/* Llib/hash.scm 275 */
				obj_t BgL_vecz00_1080;

				{	/* Llib/hash.scm 275 */
					long BgL_arg2051z00_1101;

					BgL_arg2051z00_1101 =
						(long) CINT(STRUCT_REF(BgL_tablez00_48, (int) (((long) 0))));
					BgL_vecz00_1080 = make_vector((int) (BgL_arg2051z00_1101), BUNSPEC);
				}
				{	/* Llib/hash.scm 275 */
					obj_t BgL_bucketsz00_1081;

					BgL_bucketsz00_1081 = STRUCT_REF(BgL_tablez00_48, (int) (((long) 2)));
					{	/* Llib/hash.scm 276 */
						int BgL_bucketszd2lenzd2_1082;

						BgL_bucketszd2lenzd2_1082 = VECTOR_LENGTH(BgL_bucketsz00_1081);
						{	/* Llib/hash.scm 277 */

							{
								long BgL_iz00_1085;

								obj_t BgL_resz00_1086;

								BgL_iz00_1085 = ((long) 0);
								BgL_resz00_1086 = BNIL;
							BgL_zc3anonymousza32041ze3z83_1087:
								if ((BgL_iz00_1085 == (long) (BgL_bucketszd2lenzd2_1082)))
									{	/* Llib/hash.scm 280 */
										return BgL_resz00_1086;
									}
								else
									{	/* Llib/hash.scm 282 */
										obj_t BgL_g1839z00_1089;

										BgL_g1839z00_1089 =
											VECTOR_REF(BgL_bucketsz00_1081, (int) (BgL_iz00_1085));
										{
											obj_t BgL_bucketz00_2346;

											obj_t BgL_resz00_2347;

											BgL_bucketz00_2346 = BgL_g1839z00_1089;
											BgL_resz00_2347 = BgL_resz00_1086;
										BgL_liipz00_2345:
											if (NULLP(BgL_bucketz00_2346))
												{
													obj_t BgL_resz00_3955;

													long BgL_iz00_3953;

													BgL_iz00_3953 = (BgL_iz00_1085 + ((long) 1));
													BgL_resz00_3955 = BgL_resz00_2347;
													BgL_resz00_1086 = BgL_resz00_3955;
													BgL_iz00_1085 = BgL_iz00_3953;
													goto BgL_zc3anonymousza32041ze3z83_1087;
												}
											else
												{	/* Llib/hash.scm 282 */
													obj_t BgL_arg2046z00_2355;

													obj_t BgL_arg2047z00_2356;

													BgL_arg2046z00_2355 = CDR(BgL_bucketz00_2346);
													{	/* Llib/hash.scm 282 */
														obj_t BgL_arg2048z00_2357;

														{	/* Llib/hash.scm 282 */
															obj_t BgL_pairz00_2362;

															BgL_pairz00_2362 = BgL_bucketz00_2346;
															BgL_arg2048z00_2357 = CDR(CAR(BgL_pairz00_2362));
														}
														BgL_arg2047z00_2356 =
															MAKE_PAIR(BgL_arg2048z00_2357, BgL_resz00_2347);
													}
													{
														obj_t BgL_resz00_3961;

														obj_t BgL_bucketz00_3960;

														BgL_bucketz00_3960 = BgL_arg2046z00_2355;
														BgL_resz00_3961 = BgL_arg2047z00_2356;
														BgL_resz00_2347 = BgL_resz00_3961;
														BgL_bucketz00_2346 = BgL_bucketz00_3960;
														goto BgL_liipz00_2345;
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



/* hashtable-key-list */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t
		BgL_tablez00_49)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 291 */
			{	/* Llib/hash.scm 292 */
				bool_t BgL_testz00_3962;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_49, (int) (((long) 5))))))
					{	/* Llib/hash.scm 292 */
						BgL_testz00_3962 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 292 */
						BgL_testz00_3962 = ((bool_t) 1);
					}
				if (BgL_testz00_3962)
					{	/* Llib/hash.scm 292 */
						return
							BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00
							(BgL_tablez00_49);
					}
				else
					{	/* Llib/hash.scm 292 */
						return
							BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(BgL_tablez00_49);
					}
			}
		}
	}



/* _hashtable-key-list */
	obj_t BGl__hashtablezd2keyzd2listz00zz__hashz00(obj_t BgL_envz00_3397,
		obj_t BgL_tablez00_3398)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 291 */
			{	/* Llib/hash.scm 292 */
				obj_t BgL_auxz00_3970;

				if (STRUCTP(BgL_tablez00_3398))
					{	/* Llib/hash.scm 292 */
						BgL_auxz00_3970 = BgL_tablez00_3398;
					}
				else
					{
						obj_t BgL_auxz00_3973;

						BgL_auxz00_3973 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 11106)), BGl_string2631z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3398);
						FAILURE(BgL_auxz00_3973, BFALSE, BFALSE);
					}
				return BGl_hashtablezd2keyzd2listz00zz__hashz00(BgL_auxz00_3970);
			}
		}
	}



/* plain-hashtable-key-list */
	obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t BgL_tablez00_50)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 299 */
			{	/* Llib/hash.scm 300 */
				obj_t BgL_vecz00_1104;

				{	/* Llib/hash.scm 300 */
					long BgL_arg2062z00_1125;

					BgL_arg2062z00_1125 =
						(long) CINT(STRUCT_REF(BgL_tablez00_50, (int) (((long) 0))));
					BgL_vecz00_1104 = make_vector((int) (BgL_arg2062z00_1125), BUNSPEC);
				}
				{	/* Llib/hash.scm 300 */
					obj_t BgL_bucketsz00_1105;

					BgL_bucketsz00_1105 = STRUCT_REF(BgL_tablez00_50, (int) (((long) 2)));
					{	/* Llib/hash.scm 301 */
						int BgL_bucketszd2lenzd2_1106;

						BgL_bucketszd2lenzd2_1106 = VECTOR_LENGTH(BgL_bucketsz00_1105);
						{	/* Llib/hash.scm 302 */

							{
								long BgL_iz00_1109;

								obj_t BgL_resz00_1110;

								BgL_iz00_1109 = ((long) 0);
								BgL_resz00_1110 = BNIL;
							BgL_zc3anonymousza32054ze3z83_1111:
								if ((BgL_iz00_1109 == (long) (BgL_bucketszd2lenzd2_1106)))
									{	/* Llib/hash.scm 305 */
										return BgL_resz00_1110;
									}
								else
									{	/* Llib/hash.scm 307 */
										obj_t BgL_g1841z00_1113;

										BgL_g1841z00_1113 =
											VECTOR_REF(BgL_bucketsz00_1105, (int) (BgL_iz00_1109));
										{
											obj_t BgL_bucketz00_2420;

											obj_t BgL_resz00_2421;

											BgL_bucketz00_2420 = BgL_g1841z00_1113;
											BgL_resz00_2421 = BgL_resz00_1110;
										BgL_liipz00_2419:
											if (NULLP(BgL_bucketz00_2420))
												{
													obj_t BgL_resz00_3995;

													long BgL_iz00_3993;

													BgL_iz00_3993 = (BgL_iz00_1109 + ((long) 1));
													BgL_resz00_3995 = BgL_resz00_2421;
													BgL_resz00_1110 = BgL_resz00_3995;
													BgL_iz00_1109 = BgL_iz00_3993;
													goto BgL_zc3anonymousza32054ze3z83_1111;
												}
											else
												{	/* Llib/hash.scm 307 */
													obj_t BgL_arg2059z00_2429;

													obj_t BgL_arg2060z00_2430;

													BgL_arg2059z00_2429 = CDR(BgL_bucketz00_2420);
													{	/* Llib/hash.scm 307 */
														obj_t BgL_arg2061z00_2431;

														{	/* Llib/hash.scm 307 */
															obj_t BgL_pairz00_2436;

															BgL_pairz00_2436 = BgL_bucketz00_2420;
															BgL_arg2061z00_2431 = CAR(CAR(BgL_pairz00_2436));
														}
														BgL_arg2060z00_2430 =
															MAKE_PAIR(BgL_arg2061z00_2431, BgL_resz00_2421);
													}
													{
														obj_t BgL_resz00_4001;

														obj_t BgL_bucketz00_4000;

														BgL_bucketz00_4000 = BgL_arg2059z00_2429;
														BgL_resz00_4001 = BgL_arg2060z00_2430;
														BgL_resz00_2421 = BgL_resz00_4001;
														BgL_bucketz00_2420 = BgL_bucketz00_4000;
														goto BgL_liipz00_2419;
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



/* hashtable-map */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t
		BgL_tablez00_51, obj_t BgL_funz00_52)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 316 */
			{	/* Llib/hash.scm 317 */
				bool_t BgL_testz00_4002;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_51, (int) (((long) 5))))))
					{	/* Llib/hash.scm 317 */
						BgL_testz00_4002 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 317 */
						BgL_testz00_4002 = ((bool_t) 1);
					}
				if (BgL_testz00_4002)
					{	/* Llib/hash.scm 317 */
						return
							BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_tablez00_51,
							BgL_funz00_52);
					}
				else
					{	/* Llib/hash.scm 317 */
						return
							BGl_plainzd2hashtablezd2mapz00zz__hashz00(BgL_tablez00_51,
							BgL_funz00_52);
					}
			}
		}
	}



/* _hashtable-map */
	obj_t BGl__hashtablezd2mapzd2zz__hashz00(obj_t BgL_envz00_3399,
		obj_t BgL_tablez00_3400, obj_t BgL_funz00_3401)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 316 */
			{	/* Llib/hash.scm 317 */
				obj_t BgL_auxz00_4017;

				obj_t BgL_auxz00_4010;

				if (PROCEDUREP(BgL_funz00_3401))
					{	/* Llib/hash.scm 317 */
						BgL_auxz00_4017 = BgL_funz00_3401;
					}
				else
					{
						obj_t BgL_auxz00_4020;

						BgL_auxz00_4020 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 12142)), BGl_string2632z00zz__hashz00,
							BGl_string2633z00zz__hashz00, BgL_funz00_3401);
						FAILURE(BgL_auxz00_4020, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3400))
					{	/* Llib/hash.scm 317 */
						BgL_auxz00_4010 = BgL_tablez00_3400;
					}
				else
					{
						obj_t BgL_auxz00_4013;

						BgL_auxz00_4013 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 12142)), BGl_string2632z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3400);
						FAILURE(BgL_auxz00_4013, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2mapzd2zz__hashz00(BgL_auxz00_4010, BgL_auxz00_4017);
			}
		}
	}



/* plain-hashtable-map */
	obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t BgL_tablez00_53,
		obj_t BgL_funz00_54)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 324 */
			{	/* Llib/hash.scm 325 */
				obj_t BgL_bucketsz00_1128;

				BgL_bucketsz00_1128 = STRUCT_REF(BgL_tablez00_53, (int) (((long) 2)));
				{	/* Llib/hash.scm 325 */
					int BgL_bucketszd2lenzd2_1129;

					BgL_bucketszd2lenzd2_1129 = VECTOR_LENGTH(BgL_bucketsz00_1128);
					{	/* Llib/hash.scm 326 */

						{
							long BgL_iz00_1132;

							obj_t BgL_resz00_1133;

							BgL_iz00_1132 = ((long) 0);
							BgL_resz00_1133 = BNIL;
						BgL_zc3anonymousza32065ze3z83_1134:
							if ((BgL_iz00_1132 < (long) (BgL_bucketszd2lenzd2_1129)))
								{	/* Llib/hash.scm 330 */
									obj_t BgL_g1843z00_1136;

									BgL_g1843z00_1136 =
										VECTOR_REF(BgL_bucketsz00_1128, (int) (BgL_iz00_1132));
									{
										obj_t BgL_lstz00_1138;

										obj_t BgL_resz00_1139;

										BgL_lstz00_1138 = BgL_g1843z00_1136;
										BgL_resz00_1139 = BgL_resz00_1133;
									BgL_zc3anonymousza32067ze3z83_1140:
										if (NULLP(BgL_lstz00_1138))
											{
												obj_t BgL_resz00_4037;

												long BgL_iz00_4035;

												BgL_iz00_4035 = (BgL_iz00_1132 + ((long) 1));
												BgL_resz00_4037 = BgL_resz00_1139;
												BgL_resz00_1133 = BgL_resz00_4037;
												BgL_iz00_1132 = BgL_iz00_4035;
												goto BgL_zc3anonymousza32065ze3z83_1134;
											}
										else
											{	/* Llib/hash.scm 334 */
												obj_t BgL_cellz00_1143;

												BgL_cellz00_1143 = CAR(BgL_lstz00_1138);
												{	/* Llib/hash.scm 335 */
													obj_t BgL_arg2070z00_1144;

													obj_t BgL_arg2072z00_1145;

													BgL_arg2070z00_1144 = CDR(BgL_lstz00_1138);
													{	/* Llib/hash.scm 336 */
														obj_t BgL_arg2073z00_1146;

														{	/* Llib/hash.scm 336 */
															obj_t BgL_arg2076z00_1147;

															obj_t BgL_arg2077z00_1148;

															BgL_arg2076z00_1147 = CAR(BgL_cellz00_1143);
															BgL_arg2077z00_1148 = CDR(BgL_cellz00_1143);
															BgL_arg2073z00_1146 =
																PROCEDURE_ENTRY(BgL_funz00_54) (BgL_funz00_54,
																BgL_arg2076z00_1147, BgL_arg2077z00_1148, BEOA);
														}
														BgL_arg2072z00_1145 =
															MAKE_PAIR(BgL_arg2073z00_1146, BgL_resz00_1139);
													}
													{
														obj_t BgL_resz00_4046;

														obj_t BgL_lstz00_4045;

														BgL_lstz00_4045 = BgL_arg2070z00_1144;
														BgL_resz00_4046 = BgL_arg2072z00_1145;
														BgL_resz00_1139 = BgL_resz00_4046;
														BgL_lstz00_1138 = BgL_lstz00_4045;
														goto BgL_zc3anonymousza32067ze3z83_1140;
													}
												}
											}
									}
								}
							else
								{	/* Llib/hash.scm 329 */
									return BgL_resz00_1133;
								}
						}
					}
				}
			}
		}
	}



/* hashtable-for-each */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t
		BgL_tablez00_55, obj_t BgL_funz00_56)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 342 */
			{	/* Llib/hash.scm 343 */
				bool_t BgL_testz00_4047;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_55, (int) (((long) 5))))))
					{	/* Llib/hash.scm 343 */
						BgL_testz00_4047 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 343 */
						BgL_testz00_4047 = ((bool_t) 1);
					}
				if (BgL_testz00_4047)
					{	/* Llib/hash.scm 343 */
						return
							BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00
							(BgL_tablez00_55, BgL_funz00_56);
					}
				else
					{	/* Llib/hash.scm 343 */
						return
							BBOOL(BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00
							(BgL_tablez00_55, BgL_funz00_56));
					}
			}
		}
	}



/* _hashtable-for-each */
	obj_t BGl__hashtablezd2forzd2eachz00zz__hashz00(obj_t BgL_envz00_3402,
		obj_t BgL_tablez00_3403, obj_t BgL_funz00_3404)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 342 */
			{	/* Llib/hash.scm 343 */
				obj_t BgL_auxz00_4063;

				obj_t BgL_auxz00_4056;

				if (PROCEDUREP(BgL_funz00_3404))
					{	/* Llib/hash.scm 343 */
						BgL_auxz00_4063 = BgL_funz00_3404;
					}
				else
					{
						obj_t BgL_auxz00_4066;

						BgL_auxz00_4066 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 13192)), BGl_string2634z00zz__hashz00,
							BGl_string2633z00zz__hashz00, BgL_funz00_3404);
						FAILURE(BgL_auxz00_4066, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3403))
					{	/* Llib/hash.scm 343 */
						BgL_auxz00_4056 = BgL_tablez00_3403;
					}
				else
					{
						obj_t BgL_auxz00_4059;

						BgL_auxz00_4059 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 13192)), BGl_string2634z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3403);
						FAILURE(BgL_auxz00_4059, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_4056,
					BgL_auxz00_4063);
			}
		}
	}



/* plain-hashtable-for-each */
	bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t BgL_tablez00_57,
		obj_t BgL_funz00_58)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 350 */
			{	/* Llib/hash.scm 351 */
				obj_t BgL_bucketsz00_1152;

				BgL_bucketsz00_1152 = STRUCT_REF(BgL_tablez00_57, (int) (((long) 2)));
				{	/* Llib/hash.scm 351 */
					int BgL_bucketszd2lenzd2_1153;

					BgL_bucketszd2lenzd2_1153 = VECTOR_LENGTH(BgL_bucketsz00_1152);
					{	/* Llib/hash.scm 352 */

						{
							long BgL_iz00_1155;

							BgL_iz00_1155 = ((long) 0);
						BgL_zc3anonymousza32079ze3z83_1156:
							if ((BgL_iz00_1155 < (long) (BgL_bucketszd2lenzd2_1153)))
								{	/* Llib/hash.scm 354 */
									{	/* Llib/hash.scm 356 */
										obj_t BgL_g1870z00_1158;

										BgL_g1870z00_1158 =
											VECTOR_REF(BgL_bucketsz00_1152, (int) (BgL_iz00_1155));
										{
											obj_t BgL_l1868z00_1160;

											BgL_l1868z00_1160 = BgL_g1870z00_1158;
										BgL_zc3anonymousza32081ze3z83_1161:
											if (PAIRP(BgL_l1868z00_1160))
												{	/* Llib/hash.scm 358 */
													{	/* Llib/hash.scm 357 */
														obj_t BgL_cellz00_1163;

														BgL_cellz00_1163 = CAR(BgL_l1868z00_1160);
														{	/* Llib/hash.scm 357 */
															obj_t BgL_arg2083z00_1164;

															obj_t BgL_arg2084z00_1165;

															BgL_arg2083z00_1164 = CAR(BgL_cellz00_1163);
															BgL_arg2084z00_1165 = CDR(BgL_cellz00_1163);
															PROCEDURE_ENTRY(BgL_funz00_58) (BgL_funz00_58,
																BgL_arg2083z00_1164, BgL_arg2084z00_1165, BEOA);
														}
													}
													{
														obj_t BgL_l1868z00_4086;

														BgL_l1868z00_4086 = CDR(BgL_l1868z00_1160);
														BgL_l1868z00_1160 = BgL_l1868z00_4086;
														goto BgL_zc3anonymousza32081ze3z83_1161;
													}
												}
											else
												{	/* Llib/hash.scm 358 */
													((bool_t) 1);
												}
										}
									}
									{
										long BgL_iz00_4088;

										BgL_iz00_4088 = (BgL_iz00_1155 + ((long) 1));
										BgL_iz00_1155 = BgL_iz00_4088;
										goto BgL_zc3anonymousza32079ze3z83_1156;
									}
								}
							else
								{	/* Llib/hash.scm 354 */
									return ((bool_t) 0);
								}
						}
					}
				}
			}
		}
	}



/* hashtable-filter! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t
		BgL_tablez00_59, obj_t BgL_funz00_60)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 364 */
			{	/* Llib/hash.scm 365 */
				bool_t BgL_testz00_4090;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_59, (int) (((long) 5))))))
					{	/* Llib/hash.scm 365 */
						BgL_testz00_4090 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 365 */
						BgL_testz00_4090 = ((bool_t) 1);
					}
				if (BgL_testz00_4090)
					{	/* Llib/hash.scm 365 */
						return
							BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00
							(BgL_tablez00_59, BgL_funz00_60);
					}
				else
					{	/* Llib/hash.scm 365 */
						return
							BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(BgL_tablez00_59,
							BgL_funz00_60);
					}
			}
		}
	}



/* _hashtable-filter! */
	obj_t BGl__hashtablezd2filterz12zc0zz__hashz00(obj_t BgL_envz00_3405,
		obj_t BgL_tablez00_3406, obj_t BgL_funz00_3407)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 364 */
			{	/* Llib/hash.scm 365 */
				obj_t BgL_auxz00_4105;

				obj_t BgL_auxz00_4098;

				if (PROCEDUREP(BgL_funz00_3407))
					{	/* Llib/hash.scm 365 */
						BgL_auxz00_4105 = BgL_funz00_3407;
					}
				else
					{
						obj_t BgL_auxz00_4108;

						BgL_auxz00_4108 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 14148)), BGl_string2635z00zz__hashz00,
							BGl_string2633z00zz__hashz00, BgL_funz00_3407);
						FAILURE(BgL_auxz00_4108, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3406))
					{	/* Llib/hash.scm 365 */
						BgL_auxz00_4098 = BgL_tablez00_3406;
					}
				else
					{
						obj_t BgL_auxz00_4101;

						BgL_auxz00_4101 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 14148)), BGl_string2635z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3406);
						FAILURE(BgL_auxz00_4101, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2filterz12zc0zz__hashz00(BgL_auxz00_4098,
					BgL_auxz00_4105);
			}
		}
	}



/* plain-hashtable-filter! */
	obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t BgL_tablez00_61,
		obj_t BgL_funz00_62)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 372 */
			{	/* Llib/hash.scm 373 */
				obj_t BgL_bucketsz00_1171;

				BgL_bucketsz00_1171 = STRUCT_REF(BgL_tablez00_61, (int) (((long) 2)));
				{	/* Llib/hash.scm 373 */
					int BgL_bucketszd2lenzd2_1172;

					BgL_bucketszd2lenzd2_1172 = VECTOR_LENGTH(BgL_bucketsz00_1171);
					{	/* Llib/hash.scm 374 */

						{
							long BgL_iz00_1174;

							long BgL_deltaz00_1175;

							BgL_iz00_1174 = ((long) 0);
							BgL_deltaz00_1175 = ((long) 0);
						BgL_zc3anonymousza32088ze3z83_1176:
							if ((BgL_iz00_1174 < (long) (BgL_bucketszd2lenzd2_1172)))
								{	/* Llib/hash.scm 377 */
									obj_t BgL_lz00_1178;

									BgL_lz00_1178 =
										VECTOR_REF(BgL_bucketsz00_1171, (int) (BgL_iz00_1174));
									{	/* Llib/hash.scm 377 */
										long BgL_oldzd2lenzd2_1179;

										BgL_oldzd2lenzd2_1179 = bgl_list_length(BgL_lz00_1178);
										{	/* Llib/hash.scm 378 */
											obj_t BgL_newlz00_1180;

											{	/* Llib/hash.scm 380 */
												obj_t BgL_zc3anonymousza32094ze3z83_3408;

												BgL_zc3anonymousza32094ze3z83_3408 =
													make_fx_procedure
													(BGl_zc3anonymousza32094ze3z83zz__hashz00,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza32094ze3z83_3408,
													(int) (((long) 0)), BgL_funz00_62);
												BgL_newlz00_1180 =
													BGl_filterz12z12zz__r4_control_features_6_9z00
													(BgL_zc3anonymousza32094ze3z83_3408, BgL_lz00_1178);
											}
											{	/* Llib/hash.scm 379 */
												long BgL_newzd2lenzd2_1181;

												BgL_newzd2lenzd2_1181 =
													bgl_list_length(BgL_newlz00_1180);
												{	/* Llib/hash.scm 382 */

													VECTOR_SET(BgL_bucketsz00_1171,
														(int) (BgL_iz00_1174), BgL_newlz00_1180);
													{
														long BgL_deltaz00_4133;

														long BgL_iz00_4131;

														BgL_iz00_4131 = (BgL_iz00_1174 + ((long) 1));
														BgL_deltaz00_4133 =
															(BgL_deltaz00_1175 +
															(BgL_newzd2lenzd2_1181 - BgL_oldzd2lenzd2_1179));
														BgL_deltaz00_1175 = BgL_deltaz00_4133;
														BgL_iz00_1174 = BgL_iz00_4131;
														goto BgL_zc3anonymousza32088ze3z83_1176;
													}
												}
											}
										}
									}
								}
							else
								{	/* Llib/hash.scm 386 */
									long BgL_arg2097z00_1191;

									BgL_arg2097z00_1191 =
										(BgL_deltaz00_1175 +
										(long) CINT(STRUCT_REF(BgL_tablez00_61,
												(int) (((long) 0)))));
									{	/* Llib/hash.scm 385 */
										obj_t BgL_oz00_2561;

										BgL_oz00_2561 = BINT(BgL_arg2097z00_1191);
										{	/* Llib/hash.scm 385 */
											obj_t BgL_xz00_3471;

											{	/* Llib/hash.scm 385 */
												int BgL_auxz00_4141;

												BgL_auxz00_4141 = (int) (((long) 0));
												BgL_xz00_3471 =
													STRUCT_SET(BgL_tablez00_61, BgL_auxz00_4141,
													BgL_oz00_2561);
											}
											return BUNSPEC;
										}
									}
								}
						}
					}
				}
			}
		}
	}



/* <anonymous:2094> */
	obj_t BGl_zc3anonymousza32094ze3z83zz__hashz00(obj_t BgL_envz00_3409,
		obj_t BgL_cellz00_3411)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 379 */
			{	/* Llib/hash.scm 380 */
				obj_t BgL_funz00_3410;

				BgL_funz00_3410 = PROCEDURE_REF(BgL_envz00_3409, (int) (((long) 0)));
				{
					obj_t BgL_cellz00_1186;

					BgL_cellz00_1186 = BgL_cellz00_3411;
					{	/* Llib/hash.scm 380 */
						obj_t BgL_arg2095z00_2539;

						obj_t BgL_arg2096z00_2540;

						BgL_arg2095z00_2539 = CAR(BgL_cellz00_1186);
						BgL_arg2096z00_2540 = CDR(BgL_cellz00_1186);
						return
							PROCEDURE_ENTRY(BgL_funz00_3410) (BgL_funz00_3410,
							BgL_arg2095z00_2539, BgL_arg2096z00_2540, BEOA);
					}
				}
			}
		}
	}



/* hashtable-contains? */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t
		BgL_tablez00_63, obj_t BgL_keyz00_64)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 391 */
			{	/* Llib/hash.scm 392 */
				bool_t BgL_testz00_4150;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_63, (int) (((long) 5))))))
					{	/* Llib/hash.scm 392 */
						BgL_testz00_4150 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 392 */
						BgL_testz00_4150 = ((bool_t) 1);
					}
				if (BgL_testz00_4150)
					{	/* Llib/hash.scm 392 */
						return
							BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00
							(BgL_tablez00_63, BgL_keyz00_64);
					}
				else
					{	/* Llib/hash.scm 392 */
						return
							BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(BgL_tablez00_63,
							BgL_keyz00_64);
					}
			}
		}
	}



/* _hashtable-contains? */
	obj_t BGl__hashtablezd2containszf3z21zz__hashz00(obj_t BgL_envz00_3412,
		obj_t BgL_tablez00_3413, obj_t BgL_keyz00_3414)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 391 */
			{	/* Llib/hash.scm 392 */
				bool_t BgL_auxz00_4158;

				{	/* Llib/hash.scm 392 */
					obj_t BgL_auxz00_4159;

					if (STRUCTP(BgL_tablez00_3413))
						{	/* Llib/hash.scm 392 */
							BgL_auxz00_4159 = BgL_tablez00_3413;
						}
					else
						{
							obj_t BgL_auxz00_4162;

							BgL_auxz00_4162 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
								BINT(((long) 15459)), BGl_string2636z00zz__hashz00,
								BGl_string2626z00zz__hashz00, BgL_tablez00_3413);
							FAILURE(BgL_auxz00_4162, BFALSE, BFALSE);
						}
					BgL_auxz00_4158 =
						BGl_hashtablezd2containszf3z21zz__hashz00(BgL_auxz00_4159,
						BgL_keyz00_3414);
				}
				return BBOOL(BgL_auxz00_4158);
			}
		}
	}



/* plain-hashtable-contains? */
	bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t
		BgL_tablez00_65, obj_t BgL_keyz00_66)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 399 */
			{	/* Llib/hash.scm 400 */
				obj_t BgL_bucketsz00_1195;

				BgL_bucketsz00_1195 = STRUCT_REF(BgL_tablez00_65, (int) (((long) 2)));
				{	/* Llib/hash.scm 400 */
					int BgL_bucketzd2lenzd2_1196;

					BgL_bucketzd2lenzd2_1196 = VECTOR_LENGTH(BgL_bucketsz00_1195);
					{	/* Llib/hash.scm 401 */
						long BgL_bucketzd2numzd2_1197;

						{	/* Llib/hash.scm 402 */
							long BgL_arg2105z00_1207;

							{	/* Llib/hash.scm 402 */
								long BgL_res2495z00_2592;

								{	/* Llib/hash.scm 402 */
									obj_t BgL_hashnz00_2579;

									BgL_hashnz00_2579 =
										STRUCT_REF(BgL_tablez00_65, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2579))
										{	/* Llib/hash.scm 402 */
											obj_t BgL_arg1935z00_2581;

											BgL_arg1935z00_2581 =
												PROCEDURE_ENTRY(BgL_hashnz00_2579) (BgL_hashnz00_2579,
												BgL_keyz00_66, BEOA);
											{	/* Llib/hash.scm 402 */
												long BgL_nz00_2586;

												BgL_nz00_2586 = (long) CINT(BgL_arg1935z00_2581);
												if ((BgL_nz00_2586 < ((long) 0)))
													{	/* Llib/hash.scm 402 */
														BgL_res2495z00_2592 = NEG(BgL_nz00_2586);
													}
												else
													{	/* Llib/hash.scm 402 */
														BgL_res2495z00_2592 = BgL_nz00_2586;
													}
											}
										}
									else
										{	/* Llib/hash.scm 402 */
											BgL_res2495z00_2592 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_66);
										}
								}
								BgL_arg2105z00_1207 = BgL_res2495z00_2592;
							}
							{	/* Llib/hash.scm 402 */
								long BgL_auxz00_4182;

								BgL_auxz00_4182 = (long) (BgL_bucketzd2lenzd2_1196);
								BgL_bucketzd2numzd2_1197 =
									(BgL_arg2105z00_1207 % BgL_auxz00_4182);
						}}
						{	/* Llib/hash.scm 402 */
							obj_t BgL_bucketz00_1198;

							BgL_bucketz00_1198 =
								VECTOR_REF(BgL_bucketsz00_1195,
								(int) (BgL_bucketzd2numzd2_1197));
							{	/* Llib/hash.scm 403 */

								{
									obj_t BgL_bucketz00_1200;

									BgL_bucketz00_1200 = BgL_bucketz00_1198;
								BgL_zc3anonymousza32100ze3z83_1201:
									if (NULLP(BgL_bucketz00_1200))
										{	/* Llib/hash.scm 406 */
											return ((bool_t) 0);
										}
									else
										{	/* Llib/hash.scm 408 */
											bool_t BgL_testz00_4189;

											{	/* Llib/hash.scm 408 */
												obj_t BgL_arg2104z00_1205;

												{	/* Llib/hash.scm 408 */
													obj_t BgL_pairz00_2598;

													BgL_pairz00_2598 = BgL_bucketz00_1200;
													BgL_arg2104z00_1205 = CAR(CAR(BgL_pairz00_2598));
												}
												{	/* Llib/hash.scm 408 */
													obj_t BgL_eqtz00_2605;

													BgL_eqtz00_2605 =
														STRUCT_REF(BgL_tablez00_65, (int) (((long) 3)));
													if (PROCEDUREP(BgL_eqtz00_2605))
														{	/* Llib/hash.scm 408 */
															BgL_testz00_4189 =
																CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2605)
																(BgL_eqtz00_2605, BgL_arg2104z00_1205,
																	BgL_keyz00_66, BEOA));
														}
													else
														{	/* Llib/hash.scm 408 */
															if (STRINGP(BgL_arg2104z00_1205))
																{	/* Llib/hash.scm 408 */
																	if (STRINGP(BgL_keyz00_66))
																		{	/* Llib/hash.scm 408 */
																			BgL_testz00_4189 =
																				bigloo_strcmp(BgL_arg2104z00_1205,
																				BgL_keyz00_66);
																		}
																	else
																		{	/* Llib/hash.scm 408 */
																			BgL_testz00_4189 = ((bool_t) 0);
																		}
																}
															else
																{	/* Llib/hash.scm 408 */
																	BgL_testz00_4189 =
																		BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_arg2104z00_1205, BgL_keyz00_66);
																}
														}
												}
											}
											if (BgL_testz00_4189)
												{	/* Llib/hash.scm 408 */
													return ((bool_t) 1);
												}
											else
												{
													obj_t BgL_bucketz00_4205;

													BgL_bucketz00_4205 = CDR(BgL_bucketz00_1200);
													BgL_bucketz00_1200 = BgL_bucketz00_4205;
													goto BgL_zc3anonymousza32100ze3z83_1201;
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



/* hashtable-get */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t
		BgL_tablez00_67, obj_t BgL_keyz00_68)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 416 */
			{	/* Llib/hash.scm 417 */
				bool_t BgL_testz00_4207;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_67, (int) (((long) 5))))))
					{	/* Llib/hash.scm 417 */
						BgL_testz00_4207 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 417 */
						BgL_testz00_4207 = ((bool_t) 1);
					}
				if (BgL_testz00_4207)
					{	/* Llib/hash.scm 417 */
						return
							BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_tablez00_67,
							BgL_keyz00_68);
					}
				else
					{	/* Llib/hash.scm 417 */
						return
							BGl_plainzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_67,
							BgL_keyz00_68);
					}
			}
		}
	}



/* _hashtable-get */
	obj_t BGl__hashtablezd2getzd2zz__hashz00(obj_t BgL_envz00_3415,
		obj_t BgL_tablez00_3416, obj_t BgL_keyz00_3417)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 416 */
			{	/* Llib/hash.scm 417 */
				obj_t BgL_auxz00_4215;

				if (STRUCTP(BgL_tablez00_3416))
					{	/* Llib/hash.scm 417 */
						BgL_auxz00_4215 = BgL_tablez00_3416;
					}
				else
					{
						obj_t BgL_auxz00_4218;

						BgL_auxz00_4218 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 16513)), BGl_string2637z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3416);
						FAILURE(BgL_auxz00_4218, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4215, BgL_keyz00_3417);
			}
		}
	}



/* plain-hashtable-get */
	obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_69,
		obj_t BgL_keyz00_70)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 424 */
			{	/* Llib/hash.scm 425 */
				obj_t BgL_bucketsz00_1209;

				BgL_bucketsz00_1209 = STRUCT_REF(BgL_tablez00_69, (int) (((long) 2)));
				{	/* Llib/hash.scm 425 */
					int BgL_bucketzd2lenzd2_1210;

					BgL_bucketzd2lenzd2_1210 = VECTOR_LENGTH(BgL_bucketsz00_1209);
					{	/* Llib/hash.scm 426 */
						long BgL_bucketzd2numzd2_1211;

						{	/* Llib/hash.scm 427 */
							long BgL_arg2112z00_1221;

							{	/* Llib/hash.scm 427 */
								long BgL_res2498z00_2648;

								{	/* Llib/hash.scm 427 */
									obj_t BgL_hashnz00_2635;

									BgL_hashnz00_2635 =
										STRUCT_REF(BgL_tablez00_69, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2635))
										{	/* Llib/hash.scm 427 */
											obj_t BgL_arg1935z00_2637;

											BgL_arg1935z00_2637 =
												PROCEDURE_ENTRY(BgL_hashnz00_2635) (BgL_hashnz00_2635,
												BgL_keyz00_70, BEOA);
											{	/* Llib/hash.scm 427 */
												long BgL_nz00_2642;

												BgL_nz00_2642 = (long) CINT(BgL_arg1935z00_2637);
												if ((BgL_nz00_2642 < ((long) 0)))
													{	/* Llib/hash.scm 427 */
														BgL_res2498z00_2648 = NEG(BgL_nz00_2642);
													}
												else
													{	/* Llib/hash.scm 427 */
														BgL_res2498z00_2648 = BgL_nz00_2642;
													}
											}
										}
									else
										{	/* Llib/hash.scm 427 */
											BgL_res2498z00_2648 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_70);
										}
								}
								BgL_arg2112z00_1221 = BgL_res2498z00_2648;
							}
							{	/* Llib/hash.scm 427 */
								long BgL_auxz00_4237;

								BgL_auxz00_4237 = (long) (BgL_bucketzd2lenzd2_1210);
								BgL_bucketzd2numzd2_1211 =
									(BgL_arg2112z00_1221 % BgL_auxz00_4237);
						}}
						{	/* Llib/hash.scm 427 */
							obj_t BgL_bucketz00_1212;

							BgL_bucketz00_1212 =
								VECTOR_REF(BgL_bucketsz00_1209,
								(int) (BgL_bucketzd2numzd2_1211));
							{	/* Llib/hash.scm 428 */

								{
									obj_t BgL_bucketz00_1214;

									BgL_bucketz00_1214 = BgL_bucketz00_1212;
								BgL_zc3anonymousza32107ze3z83_1215:
									if (NULLP(BgL_bucketz00_1214))
										{	/* Llib/hash.scm 431 */
											return BFALSE;
										}
									else
										{	/* Llib/hash.scm 433 */
											bool_t BgL_testz00_4244;

											{	/* Llib/hash.scm 433 */
												obj_t BgL_arg2111z00_1219;

												{	/* Llib/hash.scm 433 */
													obj_t BgL_pairz00_2654;

													BgL_pairz00_2654 = BgL_bucketz00_1214;
													BgL_arg2111z00_1219 = CAR(CAR(BgL_pairz00_2654));
												}
												{	/* Llib/hash.scm 433 */
													obj_t BgL_eqtz00_2661;

													BgL_eqtz00_2661 =
														STRUCT_REF(BgL_tablez00_69, (int) (((long) 3)));
													if (PROCEDUREP(BgL_eqtz00_2661))
														{	/* Llib/hash.scm 433 */
															BgL_testz00_4244 =
																CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2661)
																(BgL_eqtz00_2661, BgL_arg2111z00_1219,
																	BgL_keyz00_70, BEOA));
														}
													else
														{	/* Llib/hash.scm 433 */
															if (STRINGP(BgL_arg2111z00_1219))
																{	/* Llib/hash.scm 433 */
																	if (STRINGP(BgL_keyz00_70))
																		{	/* Llib/hash.scm 433 */
																			BgL_testz00_4244 =
																				bigloo_strcmp(BgL_arg2111z00_1219,
																				BgL_keyz00_70);
																		}
																	else
																		{	/* Llib/hash.scm 433 */
																			BgL_testz00_4244 = ((bool_t) 0);
																		}
																}
															else
																{	/* Llib/hash.scm 433 */
																	BgL_testz00_4244 =
																		BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_arg2111z00_1219, BgL_keyz00_70);
																}
														}
												}
											}
											if (BgL_testz00_4244)
												{	/* Llib/hash.scm 434 */
													obj_t BgL_pairz00_2673;

													BgL_pairz00_2673 = BgL_bucketz00_1214;
													return CDR(CAR(BgL_pairz00_2673));
												}
											else
												{
													obj_t BgL_bucketz00_4262;

													BgL_bucketz00_4262 = CDR(BgL_bucketz00_1214);
													BgL_bucketz00_1214 = BgL_bucketz00_4262;
													goto BgL_zc3anonymousza32107ze3z83_1215;
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



/* hashtable-put! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t
		BgL_tablez00_71, obj_t BgL_keyz00_72, obj_t BgL_objz00_73)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 441 */
			{	/* Llib/hash.scm 442 */
				bool_t BgL_testz00_4264;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_71, (int) (((long) 5))))))
					{	/* Llib/hash.scm 442 */
						BgL_testz00_4264 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 442 */
						BgL_testz00_4264 = ((bool_t) 1);
					}
				if (BgL_testz00_4264)
					{	/* Llib/hash.scm 442 */
						return
							BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_tablez00_71,
							BgL_keyz00_72, BgL_objz00_73);
					}
				else
					{	/* Llib/hash.scm 442 */
						return
							BGl_plainzd2hashtablezd2putz12z12zz__hashz00(BgL_tablez00_71,
							BgL_keyz00_72, BgL_objz00_73);
					}
			}
		}
	}



/* _hashtable-put! */
	obj_t BGl__hashtablezd2putz12zc0zz__hashz00(obj_t BgL_envz00_3418,
		obj_t BgL_tablez00_3419, obj_t BgL_keyz00_3420, obj_t BgL_objz00_3421)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 441 */
			{	/* Llib/hash.scm 442 */
				obj_t BgL_auxz00_4272;

				if (STRUCTP(BgL_tablez00_3419))
					{	/* Llib/hash.scm 442 */
						BgL_auxz00_4272 = BgL_tablez00_3419;
					}
				else
					{
						obj_t BgL_auxz00_4275;

						BgL_auxz00_4275 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 17570)), BGl_string2638z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3419);
						FAILURE(BgL_auxz00_4275, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_4272, BgL_keyz00_3420,
					BgL_objz00_3421);
			}
		}
	}



/* plain-hashtable-put! */
	obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t BgL_tablez00_74,
		obj_t BgL_keyz00_75, obj_t BgL_objz00_76)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 449 */
			{	/* Llib/hash.scm 450 */
				obj_t BgL_bucketsz00_1223;

				BgL_bucketsz00_1223 = STRUCT_REF(BgL_tablez00_74, (int) (((long) 2)));
				{	/* Llib/hash.scm 450 */
					int BgL_bucketzd2lenzd2_1224;

					BgL_bucketzd2lenzd2_1224 = VECTOR_LENGTH(BgL_bucketsz00_1223);
					{	/* Llib/hash.scm 451 */
						long BgL_bucketzd2numzd2_1225;

						{	/* Llib/hash.scm 452 */
							long BgL_arg2138z00_1253;

							{	/* Llib/hash.scm 452 */
								long BgL_res2501z00_2708;

								{	/* Llib/hash.scm 452 */
									obj_t BgL_hashnz00_2695;

									BgL_hashnz00_2695 =
										STRUCT_REF(BgL_tablez00_74, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2695))
										{	/* Llib/hash.scm 452 */
											obj_t BgL_arg1935z00_2697;

											BgL_arg1935z00_2697 =
												PROCEDURE_ENTRY(BgL_hashnz00_2695) (BgL_hashnz00_2695,
												BgL_keyz00_75, BEOA);
											{	/* Llib/hash.scm 452 */
												long BgL_nz00_2702;

												BgL_nz00_2702 = (long) CINT(BgL_arg1935z00_2697);
												if ((BgL_nz00_2702 < ((long) 0)))
													{	/* Llib/hash.scm 452 */
														BgL_res2501z00_2708 = NEG(BgL_nz00_2702);
													}
												else
													{	/* Llib/hash.scm 452 */
														BgL_res2501z00_2708 = BgL_nz00_2702;
													}
											}
										}
									else
										{	/* Llib/hash.scm 452 */
											BgL_res2501z00_2708 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_75);
										}
								}
								BgL_arg2138z00_1253 = BgL_res2501z00_2708;
							}
							{	/* Llib/hash.scm 452 */
								long BgL_auxz00_4294;

								BgL_auxz00_4294 = (long) (BgL_bucketzd2lenzd2_1224);
								BgL_bucketzd2numzd2_1225 =
									(BgL_arg2138z00_1253 % BgL_auxz00_4294);
						}}
						{	/* Llib/hash.scm 452 */
							obj_t BgL_bucketz00_1226;

							BgL_bucketz00_1226 =
								VECTOR_REF(BgL_bucketsz00_1223,
								(int) (BgL_bucketzd2numzd2_1225));
							{	/* Llib/hash.scm 453 */
								obj_t BgL_maxzd2bucketzd2lenz00_1227;

								BgL_maxzd2bucketzd2lenz00_1227 =
									STRUCT_REF(BgL_tablez00_74, (int) (((long) 1)));
								{	/* Llib/hash.scm 454 */

									if (NULLP(BgL_bucketz00_1226))
										{	/* Llib/hash.scm 455 */
											{	/* Llib/hash.scm 457 */
												long BgL_arg2115z00_1229;

												BgL_arg2115z00_1229 =
													(
													(long) CINT(STRUCT_REF(BgL_tablez00_74,
															(int) (((long) 0)))) + ((long) 1));
												{	/* Llib/hash.scm 457 */
													obj_t BgL_auxz00_4309;

													int BgL_auxz00_4307;

													BgL_auxz00_4309 = BINT(BgL_arg2115z00_1229);
													BgL_auxz00_4307 = (int) (((long) 0));
													STRUCT_SET(BgL_tablez00_74, BgL_auxz00_4307,
														BgL_auxz00_4309);
											}}
											{	/* Llib/hash.scm 458 */
												obj_t BgL_arg2119z00_1232;

												{	/* Llib/hash.scm 458 */
													obj_t BgL_arg2121z00_1233;

													BgL_arg2121z00_1233 =
														MAKE_PAIR(BgL_keyz00_75, BgL_objz00_76);
													{	/* Llib/hash.scm 458 */
														obj_t BgL_list2122z00_1234;

														BgL_list2122z00_1234 =
															MAKE_PAIR(BgL_arg2121z00_1233, BNIL);
														BgL_arg2119z00_1232 = BgL_list2122z00_1234;
												}}
												VECTOR_SET(BgL_bucketsz00_1223,
													(int) (BgL_bucketzd2numzd2_1225),
													BgL_arg2119z00_1232);
											}
											return BgL_objz00_76;
										}
									else
										{
											obj_t BgL_buckz00_1236;

											long BgL_countz00_1237;

											BgL_buckz00_1236 = BgL_bucketz00_1226;
											BgL_countz00_1237 = ((long) 0);
										BgL_zc3anonymousza32123ze3z83_1238:
											if (NULLP(BgL_buckz00_1236))
												{	/* Llib/hash.scm 463 */
													{	/* Llib/hash.scm 464 */
														long BgL_arg2125z00_1240;

														BgL_arg2125z00_1240 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_74,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/hash.scm 464 */
															obj_t BgL_auxz00_4324;

															int BgL_auxz00_4322;

															BgL_auxz00_4324 = BINT(BgL_arg2125z00_1240);
															BgL_auxz00_4322 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_74, BgL_auxz00_4322,
																BgL_auxz00_4324);
													}}
													{	/* Llib/hash.scm 465 */
														obj_t BgL_arg2130z00_1243;

														{	/* Llib/hash.scm 465 */
															obj_t BgL_arg2131z00_1244;

															BgL_arg2131z00_1244 =
																MAKE_PAIR(BgL_keyz00_75, BgL_objz00_76);
															BgL_arg2130z00_1243 =
																MAKE_PAIR(BgL_arg2131z00_1244,
																BgL_bucketz00_1226);
														}
														VECTOR_SET(BgL_bucketsz00_1223,
															(int) (BgL_bucketzd2numzd2_1225),
															BgL_arg2130z00_1243);
													}
													if (
														(BgL_countz00_1237 >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1227)))
														{	/* Llib/hash.scm 466 */
															BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
																(BgL_tablez00_74);
														}
													else
														{	/* Llib/hash.scm 466 */
															((bool_t) 0);
														}
													return BgL_objz00_76;
												}
											else
												{	/* Llib/hash.scm 469 */
													bool_t BgL_testz00_4335;

													{	/* Llib/hash.scm 469 */
														obj_t BgL_arg2137z00_1251;

														{	/* Llib/hash.scm 469 */
															obj_t BgL_pairz00_2748;

															BgL_pairz00_2748 = BgL_buckz00_1236;
															BgL_arg2137z00_1251 = CAR(CAR(BgL_pairz00_2748));
														}
														{	/* Llib/hash.scm 469 */
															obj_t BgL_eqtz00_2755;

															BgL_eqtz00_2755 =
																STRUCT_REF(BgL_tablez00_74, (int) (((long) 3)));
															if (PROCEDUREP(BgL_eqtz00_2755))
																{	/* Llib/hash.scm 469 */
																	BgL_testz00_4335 =
																		CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2755)
																		(BgL_eqtz00_2755, BgL_arg2137z00_1251,
																			BgL_keyz00_75, BEOA));
																}
															else
																{	/* Llib/hash.scm 469 */
																	if (STRINGP(BgL_arg2137z00_1251))
																		{	/* Llib/hash.scm 469 */
																			if (STRINGP(BgL_keyz00_75))
																				{	/* Llib/hash.scm 469 */
																					BgL_testz00_4335 =
																						bigloo_strcmp(BgL_arg2137z00_1251,
																						BgL_keyz00_75);
																				}
																			else
																				{	/* Llib/hash.scm 469 */
																					BgL_testz00_4335 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Llib/hash.scm 469 */
																			BgL_testz00_4335 =
																				BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																				(BgL_arg2137z00_1251, BgL_keyz00_75);
																		}
																}
														}
													}
													if (BgL_testz00_4335)
														{	/* Llib/hash.scm 470 */
															obj_t BgL_oldzd2objzd2_1247;

															{	/* Llib/hash.scm 470 */
																obj_t BgL_pairz00_2767;

																BgL_pairz00_2767 = BgL_buckz00_1236;
																BgL_oldzd2objzd2_1247 =
																	CDR(CAR(BgL_pairz00_2767));
															}
															{	/* Llib/hash.scm 471 */
																obj_t BgL_auxz00_4353;

																BgL_auxz00_4353 = CAR(BgL_buckz00_1236);
																SET_CDR(BgL_auxz00_4353, BgL_objz00_76);
															}
															return BgL_oldzd2objzd2_1247;
														}
													else
														{
															long BgL_countz00_4358;

															obj_t BgL_buckz00_4356;

															BgL_buckz00_4356 = CDR(BgL_buckz00_1236);
															BgL_countz00_4358 =
																(BgL_countz00_1237 + ((long) 1));
															BgL_countz00_1237 = BgL_countz00_4358;
															BgL_buckz00_1236 = BgL_buckz00_4356;
															goto BgL_zc3anonymousza32123ze3z83_1238;
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



/* hashtable-update! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t
		BgL_tablez00_77, obj_t BgL_keyz00_78, obj_t BgL_procz00_79,
		obj_t BgL_objz00_80)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 479 */
			{	/* Llib/hash.scm 480 */
				bool_t BgL_testz00_4360;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_77, (int) (((long) 5))))))
					{	/* Llib/hash.scm 480 */
						BgL_testz00_4360 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 480 */
						BgL_testz00_4360 = ((bool_t) 1);
					}
				if (BgL_testz00_4360)
					{	/* Llib/hash.scm 480 */
						return
							BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00
							(BgL_tablez00_77, BgL_keyz00_78, BgL_procz00_79, BgL_objz00_80);
					}
				else
					{	/* Llib/hash.scm 480 */
						return
							BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(BgL_tablez00_77,
							BgL_keyz00_78, BgL_procz00_79, BgL_objz00_80);
					}
			}
		}
	}



/* _hashtable-update! */
	obj_t BGl__hashtablezd2updatez12zc0zz__hashz00(obj_t BgL_envz00_3422,
		obj_t BgL_tablez00_3423, obj_t BgL_keyz00_3424, obj_t BgL_procz00_3425,
		obj_t BgL_objz00_3426)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 479 */
			{	/* Llib/hash.scm 480 */
				obj_t BgL_auxz00_4375;

				obj_t BgL_auxz00_4368;

				if (PROCEDUREP(BgL_procz00_3425))
					{	/* Llib/hash.scm 480 */
						BgL_auxz00_4375 = BgL_procz00_3425;
					}
				else
					{
						obj_t BgL_auxz00_4378;

						BgL_auxz00_4378 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 19162)), BGl_string2639z00zz__hashz00,
							BGl_string2633z00zz__hashz00, BgL_procz00_3425);
						FAILURE(BgL_auxz00_4378, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3423))
					{	/* Llib/hash.scm 480 */
						BgL_auxz00_4368 = BgL_tablez00_3423;
					}
				else
					{
						obj_t BgL_auxz00_4371;

						BgL_auxz00_4371 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 19162)), BGl_string2639z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3423);
						FAILURE(BgL_auxz00_4371, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_auxz00_4368,
					BgL_keyz00_3424, BgL_auxz00_4375, BgL_objz00_3426);
			}
		}
	}



/* plain-hashtable-update! */
	obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t BgL_tablez00_81,
		obj_t BgL_keyz00_82, obj_t BgL_procz00_83, obj_t BgL_objz00_84)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 487 */
			{	/* Llib/hash.scm 488 */
				obj_t BgL_bucketsz00_1255;

				BgL_bucketsz00_1255 = STRUCT_REF(BgL_tablez00_81, (int) (((long) 2)));
				{	/* Llib/hash.scm 488 */
					int BgL_bucketzd2lenzd2_1256;

					BgL_bucketzd2lenzd2_1256 = VECTOR_LENGTH(BgL_bucketsz00_1255);
					{	/* Llib/hash.scm 489 */
						long BgL_bucketzd2numzd2_1257;

						{	/* Llib/hash.scm 490 */
							long BgL_arg2163z00_1286;

							{	/* Llib/hash.scm 490 */
								long BgL_res2505z00_2807;

								{	/* Llib/hash.scm 490 */
									obj_t BgL_hashnz00_2794;

									BgL_hashnz00_2794 =
										STRUCT_REF(BgL_tablez00_81, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2794))
										{	/* Llib/hash.scm 490 */
											obj_t BgL_arg1935z00_2796;

											BgL_arg1935z00_2796 =
												PROCEDURE_ENTRY(BgL_hashnz00_2794) (BgL_hashnz00_2794,
												BgL_keyz00_82, BEOA);
											{	/* Llib/hash.scm 490 */
												long BgL_nz00_2801;

												BgL_nz00_2801 = (long) CINT(BgL_arg1935z00_2796);
												if ((BgL_nz00_2801 < ((long) 0)))
													{	/* Llib/hash.scm 490 */
														BgL_res2505z00_2807 = NEG(BgL_nz00_2801);
													}
												else
													{	/* Llib/hash.scm 490 */
														BgL_res2505z00_2807 = BgL_nz00_2801;
													}
											}
										}
									else
										{	/* Llib/hash.scm 490 */
											BgL_res2505z00_2807 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_82);
										}
								}
								BgL_arg2163z00_1286 = BgL_res2505z00_2807;
							}
							{	/* Llib/hash.scm 490 */
								long BgL_auxz00_4397;

								BgL_auxz00_4397 = (long) (BgL_bucketzd2lenzd2_1256);
								BgL_bucketzd2numzd2_1257 =
									(BgL_arg2163z00_1286 % BgL_auxz00_4397);
						}}
						{	/* Llib/hash.scm 490 */
							obj_t BgL_bucketz00_1258;

							BgL_bucketz00_1258 =
								VECTOR_REF(BgL_bucketsz00_1255,
								(int) (BgL_bucketzd2numzd2_1257));
							{	/* Llib/hash.scm 491 */
								obj_t BgL_maxzd2bucketzd2lenz00_1259;

								BgL_maxzd2bucketzd2lenz00_1259 =
									STRUCT_REF(BgL_tablez00_81, (int) (((long) 1)));
								{	/* Llib/hash.scm 492 */

									if (NULLP(BgL_bucketz00_1258))
										{	/* Llib/hash.scm 493 */
											{	/* Llib/hash.scm 495 */
												long BgL_arg2141z00_1261;

												BgL_arg2141z00_1261 =
													(
													(long) CINT(STRUCT_REF(BgL_tablez00_81,
															(int) (((long) 0)))) + ((long) 1));
												{	/* Llib/hash.scm 495 */
													obj_t BgL_auxz00_4412;

													int BgL_auxz00_4410;

													BgL_auxz00_4412 = BINT(BgL_arg2141z00_1261);
													BgL_auxz00_4410 = (int) (((long) 0));
													STRUCT_SET(BgL_tablez00_81, BgL_auxz00_4410,
														BgL_auxz00_4412);
											}}
											{	/* Llib/hash.scm 496 */
												obj_t BgL_arg2146z00_1264;

												{	/* Llib/hash.scm 496 */
													obj_t BgL_arg2147z00_1265;

													BgL_arg2147z00_1265 =
														MAKE_PAIR(BgL_keyz00_82, BgL_objz00_84);
													{	/* Llib/hash.scm 496 */
														obj_t BgL_list2148z00_1266;

														BgL_list2148z00_1266 =
															MAKE_PAIR(BgL_arg2147z00_1265, BNIL);
														BgL_arg2146z00_1264 = BgL_list2148z00_1266;
												}}
												VECTOR_SET(BgL_bucketsz00_1255,
													(int) (BgL_bucketzd2numzd2_1257),
													BgL_arg2146z00_1264);
											}
											return BgL_objz00_84;
										}
									else
										{
											obj_t BgL_buckz00_1268;

											long BgL_countz00_1269;

											BgL_buckz00_1268 = BgL_bucketz00_1258;
											BgL_countz00_1269 = ((long) 0);
										BgL_zc3anonymousza32149ze3z83_1270:
											if (NULLP(BgL_buckz00_1268))
												{	/* Llib/hash.scm 501 */
													{	/* Llib/hash.scm 502 */
														long BgL_arg2151z00_1272;

														BgL_arg2151z00_1272 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_81,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/hash.scm 502 */
															obj_t BgL_auxz00_4427;

															int BgL_auxz00_4425;

															BgL_auxz00_4427 = BINT(BgL_arg2151z00_1272);
															BgL_auxz00_4425 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_81, BgL_auxz00_4425,
																BgL_auxz00_4427);
													}}
													{	/* Llib/hash.scm 503 */
														obj_t BgL_arg2154z00_1275;

														{	/* Llib/hash.scm 503 */
															obj_t BgL_arg2155z00_1276;

															BgL_arg2155z00_1276 =
																MAKE_PAIR(BgL_keyz00_82, BgL_objz00_84);
															BgL_arg2154z00_1275 =
																MAKE_PAIR(BgL_arg2155z00_1276,
																BgL_bucketz00_1258);
														}
														VECTOR_SET(BgL_bucketsz00_1255,
															(int) (BgL_bucketzd2numzd2_1257),
															BgL_arg2154z00_1275);
													}
													if (
														(BgL_countz00_1269 >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1259)))
														{	/* Llib/hash.scm 504 */
															BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
																(BgL_tablez00_81);
														}
													else
														{	/* Llib/hash.scm 504 */
															((bool_t) 0);
														}
													return BgL_objz00_84;
												}
											else
												{	/* Llib/hash.scm 507 */
													bool_t BgL_testz00_4438;

													{	/* Llib/hash.scm 507 */
														obj_t BgL_arg2162z00_1284;

														{	/* Llib/hash.scm 507 */
															obj_t BgL_pairz00_2847;

															BgL_pairz00_2847 = BgL_buckz00_1268;
															BgL_arg2162z00_1284 = CAR(CAR(BgL_pairz00_2847));
														}
														{	/* Llib/hash.scm 507 */
															obj_t BgL_eqtz00_2854;

															BgL_eqtz00_2854 =
																STRUCT_REF(BgL_tablez00_81, (int) (((long) 3)));
															if (PROCEDUREP(BgL_eqtz00_2854))
																{	/* Llib/hash.scm 507 */
																	BgL_testz00_4438 =
																		CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2854)
																		(BgL_eqtz00_2854, BgL_arg2162z00_1284,
																			BgL_keyz00_82, BEOA));
																}
															else
																{	/* Llib/hash.scm 507 */
																	if (STRINGP(BgL_arg2162z00_1284))
																		{	/* Llib/hash.scm 507 */
																			if (STRINGP(BgL_keyz00_82))
																				{	/* Llib/hash.scm 507 */
																					BgL_testz00_4438 =
																						bigloo_strcmp(BgL_arg2162z00_1284,
																						BgL_keyz00_82);
																				}
																			else
																				{	/* Llib/hash.scm 507 */
																					BgL_testz00_4438 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Llib/hash.scm 507 */
																			BgL_testz00_4438 =
																				BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																				(BgL_arg2162z00_1284, BgL_keyz00_82);
																		}
																}
														}
													}
													if (BgL_testz00_4438)
														{	/* Llib/hash.scm 508 */
															obj_t BgL_resz00_1279;

															{	/* Llib/hash.scm 508 */
																obj_t BgL_arg2159z00_1281;

																{	/* Llib/hash.scm 508 */
																	obj_t BgL_pairz00_2866;

																	BgL_pairz00_2866 = BgL_buckz00_1268;
																	BgL_arg2159z00_1281 =
																		CDR(CAR(BgL_pairz00_2866));
																}
																BgL_resz00_1279 =
																	PROCEDURE_ENTRY(BgL_procz00_83)
																	(BgL_procz00_83, BgL_arg2159z00_1281, BEOA);
															}
															{	/* Llib/hash.scm 509 */
																obj_t BgL_auxz00_4458;

																BgL_auxz00_4458 = CAR(BgL_buckz00_1268);
																SET_CDR(BgL_auxz00_4458, BgL_resz00_1279);
															}
															return BgL_resz00_1279;
														}
													else
														{
															long BgL_countz00_4463;

															obj_t BgL_buckz00_4461;

															BgL_buckz00_4461 = CDR(BgL_buckz00_1268);
															BgL_countz00_4463 =
																(BgL_countz00_1269 + ((long) 1));
															BgL_countz00_1269 = BgL_countz00_4463;
															BgL_buckz00_1268 = BgL_buckz00_4461;
															goto BgL_zc3anonymousza32149ze3z83_1270;
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



/* hashtable-add! */
	BGL_EXPORTED_DEF obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t
		BgL_tablez00_85, obj_t BgL_keyz00_86, obj_t BgL_p2z00_87,
		obj_t BgL_objz00_88, obj_t BgL_initz00_89)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 517 */
			{	/* Llib/hash.scm 518 */
				bool_t BgL_testz00_4465;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_85, (int) (((long) 5))))))
					{	/* Llib/hash.scm 518 */
						BgL_testz00_4465 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 518 */
						BgL_testz00_4465 = ((bool_t) 1);
					}
				if (BgL_testz00_4465)
					{	/* Llib/hash.scm 518 */
						return
							BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_tablez00_85,
							BgL_keyz00_86, BgL_p2z00_87, BgL_objz00_88, BgL_initz00_89);
					}
				else
					{	/* Llib/hash.scm 518 */
						return
							BGl_plainzd2hashtablezd2addz12z12zz__hashz00(BgL_tablez00_85,
							BgL_keyz00_86, BgL_p2z00_87, BgL_objz00_88, BgL_initz00_89);
					}
			}
		}
	}



/* _hashtable-add! */
	obj_t BGl__hashtablezd2addz12zc0zz__hashz00(obj_t BgL_envz00_3427,
		obj_t BgL_tablez00_3428, obj_t BgL_keyz00_3429, obj_t BgL_p2z00_3430,
		obj_t BgL_objz00_3431, obj_t BgL_initz00_3432)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 517 */
			{	/* Llib/hash.scm 518 */
				obj_t BgL_auxz00_4480;

				obj_t BgL_auxz00_4473;

				if (PROCEDUREP(BgL_p2z00_3430))
					{	/* Llib/hash.scm 518 */
						BgL_auxz00_4480 = BgL_p2z00_3430;
					}
				else
					{
						obj_t BgL_auxz00_4483;

						BgL_auxz00_4483 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 20786)), BGl_string2640z00zz__hashz00,
							BGl_string2633z00zz__hashz00, BgL_p2z00_3430);
						FAILURE(BgL_auxz00_4483, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_tablez00_3428))
					{	/* Llib/hash.scm 518 */
						BgL_auxz00_4473 = BgL_tablez00_3428;
					}
				else
					{
						obj_t BgL_auxz00_4476;

						BgL_auxz00_4476 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
							BINT(((long) 20786)), BGl_string2640z00zz__hashz00,
							BGl_string2626z00zz__hashz00, BgL_tablez00_3428);
						FAILURE(BgL_auxz00_4476, BFALSE, BFALSE);
					}
				return
					BGl_hashtablezd2addz12zc0zz__hashz00(BgL_auxz00_4473, BgL_keyz00_3429,
					BgL_auxz00_4480, BgL_objz00_3431, BgL_initz00_3432);
			}
		}
	}



/* plain-hashtable-add! */
	obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t BgL_tablez00_90,
		obj_t BgL_keyz00_91, obj_t BgL_procz00_92, obj_t BgL_objz00_93,
		obj_t BgL_initz00_94)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 525 */
			{	/* Llib/hash.scm 526 */
				obj_t BgL_bucketsz00_1288;

				BgL_bucketsz00_1288 = STRUCT_REF(BgL_tablez00_90, (int) (((long) 2)));
				{	/* Llib/hash.scm 526 */
					int BgL_bucketzd2lenzd2_1289;

					BgL_bucketzd2lenzd2_1289 = VECTOR_LENGTH(BgL_bucketsz00_1288);
					{	/* Llib/hash.scm 527 */
						long BgL_bucketzd2numzd2_1290;

						{	/* Llib/hash.scm 528 */
							long BgL_arg2186z00_1321;

							{	/* Llib/hash.scm 528 */
								long BgL_res2509z00_2906;

								{	/* Llib/hash.scm 528 */
									obj_t BgL_hashnz00_2893;

									BgL_hashnz00_2893 =
										STRUCT_REF(BgL_tablez00_90, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2893))
										{	/* Llib/hash.scm 528 */
											obj_t BgL_arg1935z00_2895;

											BgL_arg1935z00_2895 =
												PROCEDURE_ENTRY(BgL_hashnz00_2893) (BgL_hashnz00_2893,
												BgL_keyz00_91, BEOA);
											{	/* Llib/hash.scm 528 */
												long BgL_nz00_2900;

												BgL_nz00_2900 = (long) CINT(BgL_arg1935z00_2895);
												if ((BgL_nz00_2900 < ((long) 0)))
													{	/* Llib/hash.scm 528 */
														BgL_res2509z00_2906 = NEG(BgL_nz00_2900);
													}
												else
													{	/* Llib/hash.scm 528 */
														BgL_res2509z00_2906 = BgL_nz00_2900;
													}
											}
										}
									else
										{	/* Llib/hash.scm 528 */
											BgL_res2509z00_2906 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_91);
										}
								}
								BgL_arg2186z00_1321 = BgL_res2509z00_2906;
							}
							{	/* Llib/hash.scm 528 */
								long BgL_auxz00_4502;

								BgL_auxz00_4502 = (long) (BgL_bucketzd2lenzd2_1289);
								BgL_bucketzd2numzd2_1290 =
									(BgL_arg2186z00_1321 % BgL_auxz00_4502);
						}}
						{	/* Llib/hash.scm 528 */
							obj_t BgL_bucketz00_1291;

							BgL_bucketz00_1291 =
								VECTOR_REF(BgL_bucketsz00_1288,
								(int) (BgL_bucketzd2numzd2_1290));
							{	/* Llib/hash.scm 529 */
								obj_t BgL_maxzd2bucketzd2lenz00_1292;

								BgL_maxzd2bucketzd2lenz00_1292 =
									STRUCT_REF(BgL_tablez00_90, (int) (((long) 1)));
								{	/* Llib/hash.scm 530 */

									if (NULLP(BgL_bucketz00_1291))
										{	/* Llib/hash.scm 532 */
											obj_t BgL_vz00_1294;

											BgL_vz00_1294 =
												PROCEDURE_ENTRY(BgL_procz00_92) (BgL_procz00_92,
												BgL_objz00_93, BgL_initz00_94, BEOA);
											{	/* Llib/hash.scm 533 */
												long BgL_arg2166z00_1295;

												BgL_arg2166z00_1295 =
													(
													(long) CINT(STRUCT_REF(BgL_tablez00_90,
															(int) (((long) 0)))) + ((long) 1));
												{	/* Llib/hash.scm 533 */
													obj_t BgL_auxz00_4519;

													int BgL_auxz00_4517;

													BgL_auxz00_4519 = BINT(BgL_arg2166z00_1295);
													BgL_auxz00_4517 = (int) (((long) 0));
													STRUCT_SET(BgL_tablez00_90, BgL_auxz00_4517,
														BgL_auxz00_4519);
											}}
											{	/* Llib/hash.scm 534 */
												obj_t BgL_arg2169z00_1298;

												{	/* Llib/hash.scm 534 */
													obj_t BgL_arg2170z00_1299;

													BgL_arg2170z00_1299 =
														MAKE_PAIR(BgL_keyz00_91, BgL_vz00_1294);
													{	/* Llib/hash.scm 534 */
														obj_t BgL_list2171z00_1300;

														BgL_list2171z00_1300 =
															MAKE_PAIR(BgL_arg2170z00_1299, BNIL);
														BgL_arg2169z00_1298 = BgL_list2171z00_1300;
												}}
												VECTOR_SET(BgL_bucketsz00_1288,
													(int) (BgL_bucketzd2numzd2_1290),
													BgL_arg2169z00_1298);
											}
											return BgL_vz00_1294;
										}
									else
										{
											obj_t BgL_buckz00_1302;

											long BgL_countz00_1303;

											BgL_buckz00_1302 = BgL_bucketz00_1291;
											BgL_countz00_1303 = ((long) 0);
										BgL_zc3anonymousza32172ze3z83_1304:
											if (NULLP(BgL_buckz00_1302))
												{	/* Llib/hash.scm 540 */
													obj_t BgL_vz00_1306;

													BgL_vz00_1306 =
														PROCEDURE_ENTRY(BgL_procz00_92) (BgL_procz00_92,
														BgL_objz00_93, BgL_initz00_94, BEOA);
													{	/* Llib/hash.scm 541 */
														long BgL_arg2174z00_1307;

														BgL_arg2174z00_1307 =
															(
															(long) CINT(STRUCT_REF(BgL_tablez00_90,
																	(int) (((long) 0)))) + ((long) 1));
														{	/* Llib/hash.scm 541 */
															obj_t BgL_auxz00_4536;

															int BgL_auxz00_4534;

															BgL_auxz00_4536 = BINT(BgL_arg2174z00_1307);
															BgL_auxz00_4534 = (int) (((long) 0));
															STRUCT_SET(BgL_tablez00_90, BgL_auxz00_4534,
																BgL_auxz00_4536);
													}}
													{	/* Llib/hash.scm 542 */
														obj_t BgL_arg2177z00_1310;

														{	/* Llib/hash.scm 542 */
															obj_t BgL_arg2178z00_1311;

															BgL_arg2178z00_1311 =
																MAKE_PAIR(BgL_keyz00_91, BgL_vz00_1306);
															BgL_arg2177z00_1310 =
																MAKE_PAIR(BgL_arg2178z00_1311,
																BgL_bucketz00_1291);
														}
														VECTOR_SET(BgL_bucketsz00_1288,
															(int) (BgL_bucketzd2numzd2_1290),
															BgL_arg2177z00_1310);
													}
													if (
														(BgL_countz00_1303 >
															(long) CINT(BgL_maxzd2bucketzd2lenz00_1292)))
														{	/* Llib/hash.scm 543 */
															BGl_plainzd2hashtablezd2expandz12z12zz__hashz00
																(BgL_tablez00_90);
														}
													else
														{	/* Llib/hash.scm 543 */
															((bool_t) 0);
														}
													return BgL_vz00_1306;
												}
											else
												{	/* Llib/hash.scm 546 */
													bool_t BgL_testz00_4547;

													{	/* Llib/hash.scm 546 */
														obj_t BgL_arg2185z00_1319;

														{	/* Llib/hash.scm 546 */
															obj_t BgL_pairz00_2946;

															BgL_pairz00_2946 = BgL_buckz00_1302;
															BgL_arg2185z00_1319 = CAR(CAR(BgL_pairz00_2946));
														}
														{	/* Llib/hash.scm 546 */
															obj_t BgL_eqtz00_2953;

															BgL_eqtz00_2953 =
																STRUCT_REF(BgL_tablez00_90, (int) (((long) 3)));
															if (PROCEDUREP(BgL_eqtz00_2953))
																{	/* Llib/hash.scm 546 */
																	BgL_testz00_4547 =
																		CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_2953)
																		(BgL_eqtz00_2953, BgL_arg2185z00_1319,
																			BgL_keyz00_91, BEOA));
																}
															else
																{	/* Llib/hash.scm 546 */
																	if (STRINGP(BgL_arg2185z00_1319))
																		{	/* Llib/hash.scm 546 */
																			if (STRINGP(BgL_keyz00_91))
																				{	/* Llib/hash.scm 546 */
																					BgL_testz00_4547 =
																						bigloo_strcmp(BgL_arg2185z00_1319,
																						BgL_keyz00_91);
																				}
																			else
																				{	/* Llib/hash.scm 546 */
																					BgL_testz00_4547 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Llib/hash.scm 546 */
																			BgL_testz00_4547 =
																				BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																				(BgL_arg2185z00_1319, BgL_keyz00_91);
																		}
																}
														}
													}
													if (BgL_testz00_4547)
														{	/* Llib/hash.scm 547 */
															obj_t BgL_resz00_1314;

															{	/* Llib/hash.scm 547 */
																obj_t BgL_arg2182z00_1316;

																{	/* Llib/hash.scm 547 */
																	obj_t BgL_pairz00_2965;

																	BgL_pairz00_2965 = BgL_buckz00_1302;
																	BgL_arg2182z00_1316 =
																		CDR(CAR(BgL_pairz00_2965));
																}
																BgL_resz00_1314 =
																	PROCEDURE_ENTRY(BgL_procz00_92)
																	(BgL_procz00_92, BgL_objz00_93,
																	BgL_arg2182z00_1316, BEOA);
															}
															{	/* Llib/hash.scm 548 */
																obj_t BgL_auxz00_4567;

																BgL_auxz00_4567 = CAR(BgL_buckz00_1302);
																SET_CDR(BgL_auxz00_4567, BgL_resz00_1314);
															}
															return BgL_resz00_1314;
														}
													else
														{
															long BgL_countz00_4572;

															obj_t BgL_buckz00_4570;

															BgL_buckz00_4570 = CDR(BgL_buckz00_1302);
															BgL_countz00_4572 =
																(BgL_countz00_1303 + ((long) 1));
															BgL_countz00_1303 = BgL_countz00_4572;
															BgL_buckz00_1302 = BgL_buckz00_4570;
															goto BgL_zc3anonymousza32172ze3z83_1304;
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



/* hashtable-remove! */
	BGL_EXPORTED_DEF bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t
		BgL_tablez00_95, obj_t BgL_keyz00_96)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 556 */
			{	/* Llib/hash.scm 557 */
				bool_t BgL_testz00_4574;

				if (
					(((long) 0) ==
						(long) CINT(STRUCT_REF(BgL_tablez00_95, (int) (((long) 5))))))
					{	/* Llib/hash.scm 557 */
						BgL_testz00_4574 = ((bool_t) 0);
					}
				else
					{	/* Llib/hash.scm 557 */
						BgL_testz00_4574 = ((bool_t) 1);
					}
				if (BgL_testz00_4574)
					{	/* Llib/hash.scm 557 */
						return
							CBOOL(BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00
							(BgL_tablez00_95, BgL_keyz00_96));
					}
				else
					{	/* Llib/hash.scm 557 */
						return
							BGl_plainzd2hashtablezd2removez12z12zz__hashz00(BgL_tablez00_95,
							BgL_keyz00_96);
					}
			}
		}
	}



/* _hashtable-remove! */
	obj_t BGl__hashtablezd2removez12zc0zz__hashz00(obj_t BgL_envz00_3433,
		obj_t BgL_tablez00_3434, obj_t BgL_keyz00_3435)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 556 */
			{	/* Llib/hash.scm 557 */
				bool_t BgL_auxz00_4583;

				{	/* Llib/hash.scm 557 */
					obj_t BgL_auxz00_4584;

					if (STRUCTP(BgL_tablez00_3434))
						{	/* Llib/hash.scm 557 */
							BgL_auxz00_4584 = BgL_tablez00_3434;
						}
					else
						{
							obj_t BgL_auxz00_4587;

							BgL_auxz00_4587 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
								BINT(((long) 22447)), BGl_string2641z00zz__hashz00,
								BGl_string2626z00zz__hashz00, BgL_tablez00_3434);
							FAILURE(BgL_auxz00_4587, BFALSE, BFALSE);
						}
					BgL_auxz00_4583 =
						BGl_hashtablezd2removez12zc0zz__hashz00(BgL_auxz00_4584,
						BgL_keyz00_3435);
				}
				return BBOOL(BgL_auxz00_4583);
			}
		}
	}



/* plain-hashtable-remove! */
	bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t BgL_tablez00_97,
		obj_t BgL_keyz00_98)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 564 */
			{	/* Llib/hash.scm 565 */
				obj_t BgL_bucketsz00_1323;

				BgL_bucketsz00_1323 = STRUCT_REF(BgL_tablez00_97, (int) (((long) 2)));
				{	/* Llib/hash.scm 565 */
					int BgL_bucketzd2lenzd2_1324;

					BgL_bucketzd2lenzd2_1324 = VECTOR_LENGTH(BgL_bucketsz00_1323);
					{	/* Llib/hash.scm 566 */
						long BgL_bucketzd2numzd2_1325;

						{	/* Llib/hash.scm 567 */
							long BgL_arg2206z00_1348;

							{	/* Llib/hash.scm 567 */
								long BgL_res2513z00_3005;

								{	/* Llib/hash.scm 567 */
									obj_t BgL_hashnz00_2992;

									BgL_hashnz00_2992 =
										STRUCT_REF(BgL_tablez00_97, (int) (((long) 4)));
									if (PROCEDUREP(BgL_hashnz00_2992))
										{	/* Llib/hash.scm 567 */
											obj_t BgL_arg1935z00_2994;

											BgL_arg1935z00_2994 =
												PROCEDURE_ENTRY(BgL_hashnz00_2992) (BgL_hashnz00_2992,
												BgL_keyz00_98, BEOA);
											{	/* Llib/hash.scm 567 */
												long BgL_nz00_2999;

												BgL_nz00_2999 = (long) CINT(BgL_arg1935z00_2994);
												if ((BgL_nz00_2999 < ((long) 0)))
													{	/* Llib/hash.scm 567 */
														BgL_res2513z00_3005 = NEG(BgL_nz00_2999);
													}
												else
													{	/* Llib/hash.scm 567 */
														BgL_res2513z00_3005 = BgL_nz00_2999;
													}
											}
										}
									else
										{	/* Llib/hash.scm 567 */
											BgL_res2513z00_3005 =
												BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_98);
										}
								}
								BgL_arg2206z00_1348 = BgL_res2513z00_3005;
							}
							{	/* Llib/hash.scm 567 */
								long BgL_auxz00_4607;

								BgL_auxz00_4607 = (long) (BgL_bucketzd2lenzd2_1324);
								BgL_bucketzd2numzd2_1325 =
									(BgL_arg2206z00_1348 % BgL_auxz00_4607);
						}}
						{	/* Llib/hash.scm 567 */
							obj_t BgL_bucketz00_1326;

							BgL_bucketz00_1326 =
								VECTOR_REF(BgL_bucketsz00_1323,
								(int) (BgL_bucketzd2numzd2_1325));
							{	/* Llib/hash.scm 568 */

								if (NULLP(BgL_bucketz00_1326))
									{	/* Llib/hash.scm 570 */
										return ((bool_t) 0);
									}
								else
									{	/* Llib/hash.scm 572 */
										bool_t BgL_testz00_4614;

										{	/* Llib/hash.scm 572 */
											obj_t BgL_arg2205z00_1347;

											{	/* Llib/hash.scm 572 */
												obj_t BgL_pairz00_3011;

												BgL_pairz00_3011 = BgL_bucketz00_1326;
												BgL_arg2205z00_1347 = CAR(CAR(BgL_pairz00_3011));
											}
											{	/* Llib/hash.scm 572 */
												obj_t BgL_eqtz00_3018;

												BgL_eqtz00_3018 =
													STRUCT_REF(BgL_tablez00_97, (int) (((long) 3)));
												if (PROCEDUREP(BgL_eqtz00_3018))
													{	/* Llib/hash.scm 572 */
														BgL_testz00_4614 =
															CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3018)
															(BgL_eqtz00_3018, BgL_arg2205z00_1347,
																BgL_keyz00_98, BEOA));
													}
												else
													{	/* Llib/hash.scm 572 */
														if (STRINGP(BgL_arg2205z00_1347))
															{	/* Llib/hash.scm 572 */
																if (STRINGP(BgL_keyz00_98))
																	{	/* Llib/hash.scm 572 */
																		BgL_testz00_4614 =
																			bigloo_strcmp(BgL_arg2205z00_1347,
																			BgL_keyz00_98);
																	}
																else
																	{	/* Llib/hash.scm 572 */
																		BgL_testz00_4614 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/hash.scm 572 */
																BgL_testz00_4614 =
																	BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																	(BgL_arg2205z00_1347, BgL_keyz00_98);
															}
													}
											}
										}
										if (BgL_testz00_4614)
											{	/* Llib/hash.scm 572 */
												VECTOR_SET(BgL_bucketsz00_1323,
													(int) (BgL_bucketzd2numzd2_1325),
													CDR(BgL_bucketz00_1326));
												{	/* Llib/hash.scm 574 */
													long BgL_arg2191z00_1330;

													BgL_arg2191z00_1330 =
														(
														(long) CINT(STRUCT_REF(BgL_tablez00_97,
																(int) (((long) 0)))) - ((long) 1));
													{	/* Llib/hash.scm 574 */
														obj_t BgL_auxz00_4639;

														int BgL_auxz00_4637;

														BgL_auxz00_4639 = BINT(BgL_arg2191z00_1330);
														BgL_auxz00_4637 = (int) (((long) 0));
														STRUCT_SET(BgL_tablez00_97, BgL_auxz00_4637,
															BgL_auxz00_4639);
												}}
												return ((bool_t) 1);
											}
										else
											{	/* Llib/hash.scm 577 */
												obj_t BgL_g1844z00_1333;

												BgL_g1844z00_1333 = CDR(BgL_bucketz00_1326);
												{
													obj_t BgL_bucketz00_1335;

													obj_t BgL_prevz00_1336;

													BgL_bucketz00_1335 = BgL_g1844z00_1333;
													BgL_prevz00_1336 = BgL_bucketz00_1326;
												BgL_zc3anonymousza32194ze3z83_1337:
													if (PAIRP(BgL_bucketz00_1335))
														{	/* Llib/hash.scm 580 */
															bool_t BgL_testz00_4645;

															{	/* Llib/hash.scm 580 */
																obj_t BgL_arg2204z00_1345;

																BgL_arg2204z00_1345 =
																	CAR(CAR(BgL_bucketz00_1335));
																{	/* Llib/hash.scm 580 */
																	obj_t BgL_eqtz00_3053;

																	BgL_eqtz00_3053 =
																		STRUCT_REF(BgL_tablez00_97,
																		(int) (((long) 3)));
																	if (PROCEDUREP(BgL_eqtz00_3053))
																		{	/* Llib/hash.scm 580 */
																			BgL_testz00_4645 =
																				CBOOL(PROCEDURE_ENTRY(BgL_eqtz00_3053)
																				(BgL_eqtz00_3053, BgL_arg2204z00_1345,
																					BgL_keyz00_98, BEOA));
																		}
																	else
																		{	/* Llib/hash.scm 580 */
																			if (STRINGP(BgL_arg2204z00_1345))
																				{	/* Llib/hash.scm 580 */
																					if (STRINGP(BgL_keyz00_98))
																						{	/* Llib/hash.scm 580 */
																							BgL_testz00_4645 =
																								bigloo_strcmp
																								(BgL_arg2204z00_1345,
																								BgL_keyz00_98);
																						}
																					else
																						{	/* Llib/hash.scm 580 */
																							BgL_testz00_4645 = ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Llib/hash.scm 580 */
																					BgL_testz00_4645 =
																						BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																						(BgL_arg2204z00_1345,
																						BgL_keyz00_98);
																				}
																		}
																}
															}
															if (BgL_testz00_4645)
																{	/* Llib/hash.scm 580 */
																	{	/* Llib/hash.scm 582 */
																		obj_t BgL_auxz00_4661;

																		BgL_auxz00_4661 = CDR(BgL_bucketz00_1335);
																		SET_CDR(BgL_prevz00_1336, BgL_auxz00_4661);
																	}
																	{	/* Llib/hash.scm 584 */
																		long BgL_arg2198z00_1341;

																		BgL_arg2198z00_1341 =
																			(
																			(long) CINT(STRUCT_REF(BgL_tablez00_97,
																					(int) (((long) 0)))) - ((long) 1));
																		{	/* Llib/hash.scm 583 */
																			obj_t BgL_auxz00_4670;

																			int BgL_auxz00_4668;

																			BgL_auxz00_4670 =
																				BINT(BgL_arg2198z00_1341);
																			BgL_auxz00_4668 = (int) (((long) 0));
																			STRUCT_SET(BgL_tablez00_97,
																				BgL_auxz00_4668, BgL_auxz00_4670);
																	}}
																	return ((bool_t) 1);
																}
															else
																{
																	obj_t BgL_prevz00_4675;

																	obj_t BgL_bucketz00_4673;

																	BgL_bucketz00_4673 = CDR(BgL_bucketz00_1335);
																	BgL_prevz00_4675 = BgL_bucketz00_1335;
																	BgL_prevz00_1336 = BgL_prevz00_4675;
																	BgL_bucketz00_1335 = BgL_bucketz00_4673;
																	goto BgL_zc3anonymousza32194ze3z83_1337;
																}
														}
													else
														{	/* Llib/hash.scm 579 */
															return ((bool_t) 0);
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



/* plain-hashtable-expand! */
	bool_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t BgL_tablez00_100)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 601 */
			{	/* Llib/hash.scm 602 */
				obj_t BgL_oldzd2buckszd2_1350;

				BgL_oldzd2buckszd2_1350 =
					STRUCT_REF(BgL_tablez00_100, (int) (((long) 2)));
				{	/* Llib/hash.scm 602 */
					int BgL_oldzd2buckszd2lenz00_1351;

					BgL_oldzd2buckszd2lenz00_1351 =
						VECTOR_LENGTH(BgL_oldzd2buckszd2_1350);
					{	/* Llib/hash.scm 603 */
						long BgL_newzd2buckszd2lenz00_1352;

						BgL_newzd2buckszd2lenz00_1352 =
							(((long) 2) * (long) (BgL_oldzd2buckszd2lenz00_1351));
						{	/* Llib/hash.scm 604 */
							obj_t BgL_newzd2buckszd2_1353;

							BgL_newzd2buckszd2_1353 =
								make_vector((int) (BgL_newzd2buckszd2lenz00_1352), BNIL);
							{	/* Llib/hash.scm 605 */

								{	/* Llib/hash.scm 606 */
									int BgL_auxz00_4683;

									BgL_auxz00_4683 = (int) (((long) 2));
									STRUCT_SET(BgL_tablez00_100, BgL_auxz00_4683,
										BgL_newzd2buckszd2_1353);
								}
								{
									long BgL_iz00_1355;

									BgL_iz00_1355 = ((long) 0);
								BgL_zc3anonymousza32208ze3z83_1356:
									if ((BgL_iz00_1355 < (long) (BgL_oldzd2buckszd2lenz00_1351)))
										{	/* Llib/hash.scm 608 */
											{	/* Llib/hash.scm 609 */
												obj_t BgL_g1873z00_1358;

												BgL_g1873z00_1358 =
													VECTOR_REF(BgL_oldzd2buckszd2_1350,
													(int) (BgL_iz00_1355));
												{
													obj_t BgL_l1871z00_1360;

													BgL_l1871z00_1360 = BgL_g1873z00_1358;
												BgL_zc3anonymousza32210ze3z83_1361:
													if (PAIRP(BgL_l1871z00_1360))
														{	/* Llib/hash.scm 617 */
															{	/* Llib/hash.scm 610 */
																obj_t BgL_cellz00_1363;

																BgL_cellz00_1363 = CAR(BgL_l1871z00_1360);
																{	/* Llib/hash.scm 610 */
																	obj_t BgL_keyz00_1364;

																	BgL_keyz00_1364 = CAR(BgL_cellz00_1363);
																	{	/* Llib/hash.scm 610 */
																		long BgL_hz00_1365;

																		{	/* Llib/hash.scm 611 */
																			long BgL_arg2214z00_1368;

																			{	/* Llib/hash.scm 611 */
																				long BgL_res2515z00_3112;

																				{	/* Llib/hash.scm 611 */
																					obj_t BgL_hashnz00_3099;

																					BgL_hashnz00_3099 =
																						STRUCT_REF(BgL_tablez00_100,
																						(int) (((long) 4)));
																					if (PROCEDUREP(BgL_hashnz00_3099))
																						{	/* Llib/hash.scm 611 */
																							obj_t BgL_arg1935z00_3101;

																							BgL_arg1935z00_3101 =
																								PROCEDURE_ENTRY
																								(BgL_hashnz00_3099)
																								(BgL_hashnz00_3099,
																								BgL_keyz00_1364, BEOA);
																							{	/* Llib/hash.scm 611 */
																								long BgL_nz00_3106;

																								BgL_nz00_3106 =
																									(long)
																									CINT(BgL_arg1935z00_3101);
																								if ((BgL_nz00_3106 <
																										((long) 0)))
																									{	/* Llib/hash.scm 611 */
																										BgL_res2515z00_3112 =
																											NEG(BgL_nz00_3106);
																									}
																								else
																									{	/* Llib/hash.scm 611 */
																										BgL_res2515z00_3112 =
																											BgL_nz00_3106;
																									}
																							}
																						}
																					else
																						{	/* Llib/hash.scm 611 */
																							BgL_res2515z00_3112 =
																								BGl_getzd2hashnumberzd2zz__hashz00
																								(BgL_keyz00_1364);
																						}
																				}
																				BgL_arg2214z00_1368 =
																					BgL_res2515z00_3112;
																			}
																			BgL_hz00_1365 =
																				(BgL_arg2214z00_1368 %
																				BgL_newzd2buckszd2lenz00_1352);
																		}
																		{	/* Llib/hash.scm 611 */

																			{	/* Llib/hash.scm 616 */
																				obj_t BgL_arg2212z00_1366;

																				BgL_arg2212z00_1366 =
																					MAKE_PAIR(BgL_cellz00_1363,
																					VECTOR_REF(BgL_newzd2buckszd2_1353,
																						(int) (BgL_hz00_1365)));
																				VECTOR_SET(BgL_newzd2buckszd2_1353,
																					(int) (BgL_hz00_1365),
																					BgL_arg2212z00_1366);
															}}}}}
															{
																obj_t BgL_l1871z00_4712;

																BgL_l1871z00_4712 = CDR(BgL_l1871z00_1360);
																BgL_l1871z00_1360 = BgL_l1871z00_4712;
																goto BgL_zc3anonymousza32210ze3z83_1361;
															}
														}
													else
														{	/* Llib/hash.scm 617 */
															((bool_t) 1);
														}
												}
											}
											{
												long BgL_iz00_4714;

												BgL_iz00_4714 = (BgL_iz00_1355 + ((long) 1));
												BgL_iz00_1355 = BgL_iz00_4714;
												goto BgL_zc3anonymousza32208ze3z83_1356;
											}
										}
									else
										{	/* Llib/hash.scm 608 */
											return ((bool_t) 0);
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* get-hashnumber */
	BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2zz__hashz00(obj_t BgL_keyz00_101)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 623 */
			if (STRINGP(BgL_keyz00_101))
				{	/* Llib/hash.scm 626 */
					long BgL_arg2222z00_1374;

					BgL_arg2222z00_1374 =
						bgl_string_hash_number(BSTRING_TO_STRING(BgL_keyz00_101));
					if ((BgL_arg2222z00_1374 < ((long) 0)))
						{	/* Llib/hash.scm 626 */
							return NEG(BgL_arg2222z00_1374);
						}
					else
						{	/* Llib/hash.scm 626 */
							return BgL_arg2222z00_1374;
						}
				}
			else
				{	/* Llib/hash.scm 625 */
					if (SYMBOLP(BgL_keyz00_101))
						{	/* Llib/hash.scm 628 */
							long BgL_arg2224z00_1376;

							BgL_arg2224z00_1376 = bgl_symbol_hash_number(BgL_keyz00_101);
							if ((BgL_arg2224z00_1376 < ((long) 0)))
								{	/* Llib/hash.scm 628 */
									return NEG(BgL_arg2224z00_1376);
								}
							else
								{	/* Llib/hash.scm 628 */
									return BgL_arg2224z00_1376;
								}
						}
					else
						{	/* Llib/hash.scm 627 */
							if (KEYWORDP(BgL_keyz00_101))
								{	/* Llib/hash.scm 630 */
									long BgL_arg2226z00_1378;

									BgL_arg2226z00_1378 = bgl_keyword_hash_number(BgL_keyz00_101);
									if ((BgL_arg2226z00_1378 < ((long) 0)))
										{	/* Llib/hash.scm 630 */
											return NEG(BgL_arg2226z00_1378);
										}
									else
										{	/* Llib/hash.scm 630 */
											return BgL_arg2226z00_1378;
										}
								}
							else
								{	/* Llib/hash.scm 629 */
									if (INTEGERP(BgL_keyz00_101))
										{	/* Llib/hash.scm 632 */
											long BgL_nz00_3145;

											BgL_nz00_3145 = (long) CINT(BgL_keyz00_101);
											if ((BgL_nz00_3145 < ((long) 0)))
												{	/* Llib/hash.scm 632 */
													return NEG(BgL_nz00_3145);
												}
											else
												{	/* Llib/hash.scm 632 */
													return BgL_nz00_3145;
												}
										}
									else
										{	/* Llib/hash.scm 631 */
											if (ELONGP(BgL_keyz00_101))
												{	/* Llib/hash.scm 634 */
													long BgL_arg2233z00_1381;

													{	/* Llib/hash.scm 634 */
														long BgL_auxz00_4743;

														BgL_auxz00_4743 = BELONG_TO_LONG(BgL_keyz00_101);
														BgL_arg2233z00_1381 = (long) (BgL_auxz00_4743);
													}
													if ((BgL_arg2233z00_1381 < ((long) 0)))
														{	/* Llib/hash.scm 634 */
															return NEG(BgL_arg2233z00_1381);
														}
													else
														{	/* Llib/hash.scm 634 */
															return BgL_arg2233z00_1381;
														}
												}
											else
												{	/* Llib/hash.scm 633 */
													if (LLONGP(BgL_keyz00_101))
														{	/* Llib/hash.scm 636 */
															long BgL_arg2235z00_1383;

															{	/* Llib/hash.scm 636 */
																BGL_LONGLONG_T BgL_auxz00_4751;

																BgL_auxz00_4751 =
																	BLLONG_TO_LLONG(BgL_keyz00_101);
																BgL_arg2235z00_1383 = (long) (BgL_auxz00_4751);
															}
															if ((BgL_arg2235z00_1383 < ((long) 0)))
																{	/* Llib/hash.scm 636 */
																	return NEG(BgL_arg2235z00_1383);
																}
															else
																{	/* Llib/hash.scm 636 */
																	return BgL_arg2235z00_1383;
																}
														}
													else
														{	/* Llib/hash.scm 635 */
															if (BGL_OBJECTP(BgL_keyz00_101))
																{	/* Llib/hash.scm 638 */
																	int BgL_arg2237z00_1385;

																	BgL_arg2237z00_1385 =
																		BGl_objectzd2hashnumberzd2zz__objectz00(
																		(BgL_objectz00_bglt) (BgL_keyz00_101));
																	{	/* Llib/hash.scm 638 */
																		long BgL_nz00_3166;

																		BgL_nz00_3166 =
																			(long) (BgL_arg2237z00_1385);
																		if ((BgL_nz00_3166 < ((long) 0)))
																			{	/* Llib/hash.scm 638 */
																				return NEG(BgL_nz00_3166);
																			}
																		else
																			{	/* Llib/hash.scm 638 */
																				return BgL_nz00_3166;
																			}
																	}
																}
															else
																{	/* Llib/hash.scm 637 */
																	if (FOREIGNP(BgL_keyz00_101))
																		{	/* Llib/hash.scm 640 */
																			long BgL_arg2239z00_1387;

																			BgL_arg2239z00_1387 =
																				bgl_foreign_hash_number(BgL_keyz00_101);
																			if ((BgL_arg2239z00_1387 < ((long) 0)))
																				{	/* Llib/hash.scm 640 */
																					return NEG(BgL_arg2239z00_1387);
																				}
																			else
																				{	/* Llib/hash.scm 640 */
																					return BgL_arg2239z00_1387;
																				}
																		}
																	else
																		{	/* Llib/hash.scm 642 */
																			long BgL_arg2240z00_1388;

																			BgL_arg2240z00_1388 =
																				bgl_obj_hash_number(BgL_keyz00_101);
																			if ((BgL_arg2240z00_1388 < ((long) 0)))
																				{	/* Llib/hash.scm 642 */
																					return NEG(BgL_arg2240z00_1388);
																				}
																			else
																				{	/* Llib/hash.scm 642 */
																					return BgL_arg2240z00_1388;
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



/* _get-hashnumber */
	obj_t BGl__getzd2hashnumberzd2zz__hashz00(obj_t BgL_envz00_3436,
		obj_t BgL_keyz00_3437)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 623 */
			return BINT(BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_3437));
		}
	}



/* get-pointer-hashnumber */
	BGL_EXPORTED_DEF long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t
		BgL_ptrz00_102, long BgL_powerz00_103)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 647 */
			return bgl_pointer_hashnumber(BgL_ptrz00_102, BgL_powerz00_103);
		}
	}



/* _get-pointer-hashnumber */
	obj_t BGl__getzd2pointerzd2hashnumberz00zz__hashz00(obj_t BgL_envz00_3438,
		obj_t BgL_ptrz00_3439, obj_t BgL_powerz00_3440)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 647 */
			{	/* Llib/hash.scm 648 */
				long BgL_auxz00_4778;

				{	/* Llib/hash.scm 648 */
					long BgL_powerz00_3509;

					{	/* Llib/hash.scm 648 */
						obj_t BgL_auxz00_4779;

						if (INTEGERP(BgL_powerz00_3440))
							{	/* Llib/hash.scm 648 */
								BgL_auxz00_4779 = BgL_powerz00_3440;
							}
						else
							{
								obj_t BgL_auxz00_4782;

								BgL_auxz00_4782 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2622z00zz__hashz00,
									BINT(((long) 25866)), BGl_string2642z00zz__hashz00,
									BGl_string2643z00zz__hashz00, BgL_powerz00_3440);
								FAILURE(BgL_auxz00_4782, BFALSE, BFALSE);
							}
						BgL_powerz00_3509 = (long) CINT(BgL_auxz00_4779);
					}
					BgL_auxz00_4778 =
						bgl_pointer_hashnumber(BgL_ptrz00_3439, BgL_powerz00_3509);
				}
				return BINT(BgL_auxz00_4778);
			}
		}
	}



/* _string-hash */
	obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t BgL_envz00_108,
		obj_t BgL_optz00_107)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 653 */
			{	/* Llib/hash.scm 653 */
				obj_t BgL_g1893z00_1389;

				BgL_g1893z00_1389 = VECTOR_REF(BgL_optz00_107, (int) (((long) 0)));
				{	/* Llib/hash.scm 653 */
					int BgL_aux1895z00_1391;

					BgL_aux1895z00_1391 = VECTOR_LENGTH(BgL_optz00_107);
					switch ((long) (BgL_aux1895z00_1391))
						{
						case ((long) 1):

							{	/* Llib/hash.scm 653 */

								{	/* Llib/hash.scm 653 */
									obj_t BgL_arg2242z00_1395;

									BgL_arg2242z00_1395 =
										VECTOR_REF(BgL_optz00_107, (int) (((long) 0)));
									{	/* Llib/hash.scm 653 */
										long BgL_res2525z00_3191;

										{	/* Llib/hash.scm 653 */
											obj_t BgL_stringz00_3185;

											obj_t BgL_startz00_3186;

											if (STRINGP(BgL_arg2242z00_1395))
												{	/* Llib/hash.scm 653 */
													BgL_stringz00_3185 = BgL_arg2242z00_1395;
												}
											else
												{
													obj_t BgL_auxz00_4796;

													BgL_auxz00_4796 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2622z00zz__hashz00, BINT(((long) 26123)),
														BGl_string2644z00zz__hashz00,
														BGl_string2645z00zz__hashz00, BgL_arg2242z00_1395);
													FAILURE(BgL_auxz00_4796, BFALSE, BFALSE);
												}
											BgL_startz00_3186 = BINT(((long) 0));
											{	/* Llib/hash.scm 653 */
												obj_t BgL_arg2245z00_3188;

												if (CBOOL(BFALSE))
													{	/* Llib/hash.scm 653 */
														BgL_arg2245z00_3188 = BFALSE;
													}
												else
													{	/* Llib/hash.scm 653 */
														BgL_arg2245z00_3188 =
															BINT(STRING_LENGTH(BgL_stringz00_3185));
													}
												{	/* Llib/hash.scm 653 */
													int BgL_auxz00_4815;

													int BgL_auxz00_4805;

													{	/* Llib/hash.scm 653 */
														obj_t BgL_auxz00_4816;

														if (INTEGERP(BgL_arg2245z00_3188))
															{	/* Llib/hash.scm 653 */
																BgL_auxz00_4816 = BgL_arg2245z00_3188;
															}
														else
															{
																obj_t BgL_auxz00_4819;

																BgL_auxz00_4819 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2622z00zz__hashz00,
																	BINT(((long) 26123)),
																	BGl_string2644z00zz__hashz00,
																	BGl_string2624z00zz__hashz00,
																	BgL_arg2245z00_3188);
																FAILURE(BgL_auxz00_4819, BFALSE, BFALSE);
															}
														BgL_auxz00_4815 = CINT(BgL_auxz00_4816);
													}
													{	/* Llib/hash.scm 653 */
														obj_t BgL_auxz00_4807;

														if (INTEGERP(BgL_startz00_3186))
															{	/* Llib/hash.scm 653 */
																BgL_auxz00_4807 = BgL_startz00_3186;
															}
														else
															{
																obj_t BgL_auxz00_4810;

																BgL_auxz00_4810 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2622z00zz__hashz00,
																	BINT(((long) 26123)),
																	BGl_string2644z00zz__hashz00,
																	BGl_string2624z00zz__hashz00,
																	BgL_startz00_3186);
																FAILURE(BgL_auxz00_4810, BFALSE, BFALSE);
															}
														BgL_auxz00_4805 = CINT(BgL_auxz00_4807);
													}
													BgL_res2525z00_3191 =
														bgl_string_hash(BSTRING_TO_STRING
														(BgL_stringz00_3185), BgL_auxz00_4805,
														BgL_auxz00_4815);
										}}}
										return BINT(BgL_res2525z00_3191);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Llib/hash.scm 653 */
								obj_t BgL_startz00_1396;

								BgL_startz00_1396 =
									VECTOR_REF(BgL_optz00_107, (int) (((long) 1)));
								{	/* Llib/hash.scm 653 */

									{	/* Llib/hash.scm 653 */
										obj_t BgL_arg2243z00_1398;

										BgL_arg2243z00_1398 =
											VECTOR_REF(BgL_optz00_107, (int) (((long) 0)));
										{	/* Llib/hash.scm 653 */
											long BgL_res2526z00_3198;

											{	/* Llib/hash.scm 653 */
												obj_t BgL_stringz00_3192;

												if (STRINGP(BgL_arg2243z00_1398))
													{	/* Llib/hash.scm 653 */
														BgL_stringz00_3192 = BgL_arg2243z00_1398;
													}
												else
													{
														obj_t BgL_auxz00_4832;

														BgL_auxz00_4832 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2622z00zz__hashz00,
															BINT(((long) 26123)),
															BGl_string2644z00zz__hashz00,
															BGl_string2645z00zz__hashz00,
															BgL_arg2243z00_1398);
														FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
													}
												{	/* Llib/hash.scm 653 */
													obj_t BgL_arg2245z00_3195;

													if (CBOOL(BFALSE))
														{	/* Llib/hash.scm 653 */
															BgL_arg2245z00_3195 = BFALSE;
														}
													else
														{	/* Llib/hash.scm 653 */
															BgL_arg2245z00_3195 =
																BINT(STRING_LENGTH(BgL_stringz00_3192));
														}
													{	/* Llib/hash.scm 653 */
														int BgL_auxz00_4850;

														int BgL_auxz00_4840;

														{	/* Llib/hash.scm 653 */
															obj_t BgL_auxz00_4851;

															if (INTEGERP(BgL_arg2245z00_3195))
																{	/* Llib/hash.scm 653 */
																	BgL_auxz00_4851 = BgL_arg2245z00_3195;
																}
															else
																{
																	obj_t BgL_auxz00_4854;

																	BgL_auxz00_4854 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2622z00zz__hashz00,
																		BINT(((long) 26123)),
																		BGl_string2644z00zz__hashz00,
																		BGl_string2624z00zz__hashz00,
																		BgL_arg2245z00_3195);
																	FAILURE(BgL_auxz00_4854, BFALSE, BFALSE);
																}
															BgL_auxz00_4850 = CINT(BgL_auxz00_4851);
														}
														{	/* Llib/hash.scm 653 */
															obj_t BgL_auxz00_4842;

															if (INTEGERP(BgL_startz00_1396))
																{	/* Llib/hash.scm 653 */
																	BgL_auxz00_4842 = BgL_startz00_1396;
																}
															else
																{
																	obj_t BgL_auxz00_4845;

																	BgL_auxz00_4845 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2622z00zz__hashz00,
																		BINT(((long) 26123)),
																		BGl_string2644z00zz__hashz00,
																		BGl_string2624z00zz__hashz00,
																		BgL_startz00_1396);
																	FAILURE(BgL_auxz00_4845, BFALSE, BFALSE);
																}
															BgL_auxz00_4840 = CINT(BgL_auxz00_4842);
														}
														BgL_res2526z00_3198 =
															bgl_string_hash(BSTRING_TO_STRING
															(BgL_stringz00_3192), BgL_auxz00_4840,
															BgL_auxz00_4850);
											}}}
											return BINT(BgL_res2526z00_3198);
										}
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Llib/hash.scm 653 */
								obj_t BgL_startz00_1399;

								BgL_startz00_1399 =
									VECTOR_REF(BgL_optz00_107, (int) (((long) 1)));
								{	/* Llib/hash.scm 653 */
									obj_t BgL_lenz00_1400;

									BgL_lenz00_1400 =
										VECTOR_REF(BgL_optz00_107, (int) (((long) 2)));
									{	/* Llib/hash.scm 653 */

										{	/* Llib/hash.scm 653 */
											obj_t BgL_arg2244z00_1401;

											BgL_arg2244z00_1401 =
												VECTOR_REF(BgL_optz00_107, (int) (((long) 0)));
											{	/* Llib/hash.scm 653 */
												long BgL_res2527z00_3205;

												{	/* Llib/hash.scm 653 */
													obj_t BgL_stringz00_3199;

													if (STRINGP(BgL_arg2244z00_1401))
														{	/* Llib/hash.scm 653 */
															BgL_stringz00_3199 = BgL_arg2244z00_1401;
														}
													else
														{
															obj_t BgL_auxz00_4869;

															BgL_auxz00_4869 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2622z00zz__hashz00,
																BINT(((long) 26123)),
																BGl_string2644z00zz__hashz00,
																BGl_string2645z00zz__hashz00,
																BgL_arg2244z00_1401);
															FAILURE(BgL_auxz00_4869, BFALSE, BFALSE);
														}
													{	/* Llib/hash.scm 653 */
														obj_t BgL_arg2245z00_3202;

														if (CBOOL(BgL_lenz00_1400))
															{	/* Llib/hash.scm 653 */
																BgL_arg2245z00_3202 = BgL_lenz00_1400;
															}
														else
															{	/* Llib/hash.scm 653 */
																BgL_arg2245z00_3202 =
																	BINT(STRING_LENGTH(BgL_stringz00_3199));
															}
														{	/* Llib/hash.scm 653 */
															int BgL_auxz00_4887;

															int BgL_auxz00_4877;

															{	/* Llib/hash.scm 653 */
																obj_t BgL_auxz00_4888;

																if (INTEGERP(BgL_arg2245z00_3202))
																	{	/* Llib/hash.scm 653 */
																		BgL_auxz00_4888 = BgL_arg2245z00_3202;
																	}
																else
																	{
																		obj_t BgL_auxz00_4891;

																		BgL_auxz00_4891 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2622z00zz__hashz00,
																			BINT(((long) 26123)),
																			BGl_string2644z00zz__hashz00,
																			BGl_string2624z00zz__hashz00,
																			BgL_arg2245z00_3202);
																		FAILURE(BgL_auxz00_4891, BFALSE, BFALSE);
																	}
																BgL_auxz00_4887 = CINT(BgL_auxz00_4888);
															}
															{	/* Llib/hash.scm 653 */
																obj_t BgL_auxz00_4879;

																if (INTEGERP(BgL_startz00_1399))
																	{	/* Llib/hash.scm 653 */
																		BgL_auxz00_4879 = BgL_startz00_1399;
																	}
																else
																	{
																		obj_t BgL_auxz00_4882;

																		BgL_auxz00_4882 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2622z00zz__hashz00,
																			BINT(((long) 26123)),
																			BGl_string2644z00zz__hashz00,
																			BGl_string2624z00zz__hashz00,
																			BgL_startz00_1399);
																		FAILURE(BgL_auxz00_4882, BFALSE, BFALSE);
																	}
																BgL_auxz00_4877 = CINT(BgL_auxz00_4879);
															}
															BgL_res2527z00_3205 =
																bgl_string_hash(BSTRING_TO_STRING
																(BgL_stringz00_3199), BgL_auxz00_4877,
																BgL_auxz00_4887);
												}}}
												return BINT(BgL_res2527z00_3205);
											}
										}
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* string-hash */
	BGL_EXPORTED_DEF long BGl_stringzd2hashzd2zz__hashz00(obj_t BgL_stringz00_104,
		obj_t BgL_startz00_105, obj_t BgL_lenz00_106)
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 653 */
			{	/* Llib/hash.scm 654 */
				obj_t BgL_arg2245z00_3206;

				if (CBOOL(BgL_lenz00_106))
					{	/* Llib/hash.scm 654 */
						BgL_arg2245z00_3206 = BgL_lenz00_106;
					}
				else
					{	/* Llib/hash.scm 654 */
						BgL_arg2245z00_3206 = BINT(STRING_LENGTH(BgL_stringz00_104));
					}
				return
					bgl_string_hash(BSTRING_TO_STRING(BgL_stringz00_104),
					CINT(BgL_startz00_105), CINT(BgL_arg2245z00_3206));
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__hashz00()
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__hashz00()
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__hashz00()
	{
		AN_OBJECT;
		{	/* Llib/hash.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2646z00zz__hashz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2646z00zz__hashz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2646z00zz__hashz00));
			return
				BGl_modulezd2initializa7ationz75zz__weakhashz00(((long) 416719151),
				BSTRING_TO_STRING(BGl_string2646z00zz__hashz00));
		}
	}

#ifdef __cplusplus
}
#endif
