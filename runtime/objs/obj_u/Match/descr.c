/*===========================================================================*/
/*   (Match/descr.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Match/descr.scm -indent -o objs/obj_u/Match/descr.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isConszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl__isTimeszf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isNotzf3zf3zz__match_descriptionsz00(obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl__isAConszf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__morezd2precisezf3z21zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isXConszf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_descriptionsz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isCheckzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl__isOrzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isQuotezf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t BGl__vectorzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_descriptionsz00();
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl__isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__isAndzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_normz00zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__isVarzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32264ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTreezf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl__isBottomzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__isHolezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_comparez00zz__match_descriptionsz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTopzf3zf3zz__match_descriptionsz00(obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_zc3anonymousza32271ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_descriptionsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t BGl_unionz00zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__isXConszf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__isAnyzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00();
	static obj_t BGl__patternzd2carzd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_rewritezd2andzd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2734z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_list2739z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__isCheckzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__patternzd2cdrzd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2762z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__isQuotezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2767z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__isVectorzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2782z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_list2783z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_rewritezd2notzd2zz__match_descriptionsz00(obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2720z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2721z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2722z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2723z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2724z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2725z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32152ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2726z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t
		BGl_zc3anonymousza31963ze3_2727z83zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__containsHolezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32153ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32154ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl__patternzd2variableszd2zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_alphazd2convertzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32303ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl__isConszf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTzd2Orzf3z21zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32159ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static bool_t BGl_isNegationzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_zc3anonymousza32297ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32309ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza32166ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl__isSuccesszf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAndzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_containsHolezf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t,
		obj_t);
	static bool_t BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl__vectorzd2minuszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_matchz00zz__match_descriptionsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isVarzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl__patternzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__isNotzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2minuszd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__isTreezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isBottomzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_loopz00zz__match_descriptionsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isTimeszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_g1835z00zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_g1836z00zz__match_descriptionsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAnyzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isHolezf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isAConszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32342ze3z83zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopz72z72zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32345ze3z83zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31963ze3z83zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2728z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2730z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2732z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2735z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2737z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2740z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2742z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2744z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t,
		obj_t);
	static obj_t BGl_symbol2746z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2748z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2750z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2752z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2754z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2756z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2758z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2760z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2763z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2765z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2768z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2770z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__extendzd2vectorzd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2775z00zz__match_descriptionsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isSuccesszf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl_symbol2777z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2780z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2787z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl_symbol2789z00zz__match_descriptionsz00 = BUNSPEC;
	static obj_t BGl__isTopzf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl__compatiblezf3zf3zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isVectorzf3zf3zz__match_descriptionsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isOrzf3zf3zz__match_descriptionsz00(obj_t);
	static obj_t BGl__patternzd2minuszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__isTzd2Orzf3z21zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_descriptionsz00();
	BGL_EXPORTED_DECL obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzd2beginzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl__isvectorza7d2begi2792za7,
		BGl__isVectorzd2beginzf3z21zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2minuszd2envz00zz__match_descriptionsz00,
		BgL_bgl__patternza7d2minus2793za7,
		BGl__patternzd2minuszd2zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2pluszd2envz00zz__match_descriptionsz00,
		BgL_bgl__vectorza7d2plusza7d2794z00,
		BGl__vectorzd2pluszd2zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isconsza7f3za7f3za7za7_2795z00,
		BGl__isConszf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isBottomzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isbottomza7f3za7f3za72796za7,
		BGl__isBottomzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isVarzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isvarza7f3za7f3za7za7__2797z00,
		BGl__isVarzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2772z00zz__match_descriptionsz00,
		BgL_bgl_za7c3anonymousza7a322798z00,
		BGl_zc3anonymousza32152ze3z83zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2773z00zz__match_descriptionsz00,
		BgL_bgl_za7c3anonymousza7a322799z00,
		BGl_zc3anonymousza32153ze3z83zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2774z00zz__match_descriptionsz00,
		BgL_bgl_za7c3anonymousza7a322800z00,
		BGl_zc3anonymousza32154ze3z83zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2784z00zz__match_descriptionsz00,
		BgL_bgl_g1835za700za7za7__matc2801za7,
		BGl_g1835z00zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2785z00zz__match_descriptionsz00,
		BgL_bgl_g1836za700za7za7__matc2802za7,
		BGl_g1836z00zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isvectorza7f3za7f3za72803za7,
		BGl__isVectorzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2variableszd2envz00zz__match_descriptionsz00,
		BgL_bgl__patternza7d2varia2804za7,
		BGl__patternzd2variableszd2zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isNotzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isnotza7f3za7f3za7za7__2805z00,
		BGl__isNotzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2729z00zz__match_descriptionsz00,
		BgL_bgl_string2729za700za7za7_2806za7, "or", 2);
	      DEFINE_STRING(BGl_string2731z00zz__match_descriptionsz00,
		BgL_bgl_string2731za700za7za7_2807za7, "t-or", 4);
	      DEFINE_STRING(BGl_string2733z00zz__match_descriptionsz00,
		BgL_bgl_string2733za700za7za7_2808za7, "and", 3);
	      DEFINE_STRING(BGl_string2736z00zz__match_descriptionsz00,
		BgL_bgl_string2736za700za7za7_2809za7, "cons", 4);
	      DEFINE_STRING(BGl_string2738z00zz__match_descriptionsz00,
		BgL_bgl_string2738za700za7za7_2810za7, "vector-cons", 11);
	      DEFINE_STRING(BGl_string2741z00zz__match_descriptionsz00,
		BgL_bgl_string2741za700za7za7_2811za7, "tree", 4);
	      DEFINE_STRING(BGl_string2743z00zz__match_descriptionsz00,
		BgL_bgl_string2743za700za7za7_2812za7, "times", 5);
	      DEFINE_STRING(BGl_string2745z00zz__match_descriptionsz00,
		BgL_bgl_string2745za700za7za7_2813za7, "var", 3);
	      DEFINE_STRING(BGl_string2747z00zz__match_descriptionsz00,
		BgL_bgl_string2747za700za7za7_2814za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2749z00zz__match_descriptionsz00,
		BgL_bgl_string2749za700za7za7_2815za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2751z00zz__match_descriptionsz00,
		BgL_bgl_string2751za700za7za7_2816za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2753z00zz__match_descriptionsz00,
		BgL_bgl_string2753za700za7za7_2817za7, "any", 3);
	      DEFINE_STRING(BGl_string2755z00zz__match_descriptionsz00,
		BgL_bgl_string2755za700za7za7_2818za7, "check", 5);
	      DEFINE_STRING(BGl_string2757z00zz__match_descriptionsz00,
		BgL_bgl_string2757za700za7za7_2819za7, "foo", 3);
	      DEFINE_STRING(BGl_string2759z00zz__match_descriptionsz00,
		BgL_bgl_string2759za700za7za7_2820za7, "bottom", 6);
	      DEFINE_STRING(BGl_string2761z00zz__match_descriptionsz00,
		BgL_bgl_string2761za700za7za7_2821za7, "not", 3);
	      DEFINE_STRING(BGl_string2764z00zz__match_descriptionsz00,
		BgL_bgl_string2764za700za7za7_2822za7, "success", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2cdrzd2envz00zz__match_descriptionsz00,
		BgL_bgl__patternza7d2cdrza7d2823z00,
		BGl__patternzd2cdrzd2zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2766z00zz__match_descriptionsz00,
		BgL_bgl_string2766za700za7za7_2824za7, "quote", 5);
	      DEFINE_STRING(BGl_string2769z00zz__match_descriptionsz00,
		BgL_bgl_string2769za700za7za7_2825za7, "acons", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2carzd2envz00zz__match_descriptionsz00,
		BgL_bgl__patternza7d2carza7d2826z00,
		BGl__patternzd2carzd2zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2771z00zz__match_descriptionsz00,
		BgL_bgl_string2771za700za7za7_2827za7, "xcons", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isTreezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__istreeza7f3za7f3za7za7_2828z00,
		BGl__isTreezf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2776z00zz__match_descriptionsz00,
		BgL_bgl_string2776za700za7za7_2829za7, "unbound", 7);
	      DEFINE_STRING(BGl_string2778z00zz__match_descriptionsz00,
		BgL_bgl_string2778za700za7za7_2830za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2779z00zz__match_descriptionsz00,
		BgL_bgl_string2779za700za7za7_2831za7, "VAR-", 4);
	      DEFINE_STRING(BGl_string2781z00zz__match_descriptionsz00,
		BgL_bgl_string2781za700za7za7_2832za7, "vector", 6);
	      DEFINE_STRING(BGl_string2786z00zz__match_descriptionsz00,
		BgL_bgl_string2786za700za7za7_2833za7, "ALPHA-", 6);
	      DEFINE_STRING(BGl_string2788z00zz__match_descriptionsz00,
		BgL_bgl_string2788za700za7za7_2834za7, "top", 3);
	      DEFINE_STRING(BGl_string2790z00zz__match_descriptionsz00,
		BgL_bgl_string2790za700za7za7_2835za7, "hole", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isAnyzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isanyza7f3za7f3za7za7__2836z00,
		BGl__isAnyzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2791z00zz__match_descriptionsz00,
		BgL_bgl_string2791za700za7za7_2837za7, "__match_descriptions", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_containsHolezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__containsholeza7f32838za7,
		BGl__containsHolezf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isAndzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isandza7f3za7f3za7za7__2839z00,
		BGl__isAndzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isCheckzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__ischeckza7f3za7f3za7za72840z00,
		BGl__isCheckzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTzd2Orzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl__istza7d2orza7f3za721za72841z00,
		BGl__isTzd2Orzf3z21zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isAConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isaconsza7f3za7f3za7za72842z00,
		BGl__isAConszf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_extendzd2vectorzd2envz00zz__match_descriptionsz00,
		BgL_bgl__extendza7d2vector2843za7,
		BGl__extendzd2vectorzd2zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_morezd2precisezf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl__moreza7d2preciseza72844z00,
		BGl__morezd2precisezf3z21zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isOrzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isorza7f3za7f3za7za7__m2845z00,
		BGl__isOrzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compatiblezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__compatibleza7f3za7f2846z00,
		BGl__compatiblezf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTaggedzd2Orzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl__istaggedza7d2orza7f2847z00,
		BGl__isTaggedzd2Orzf3z21zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isTopzf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__istopza7f3za7f3za7za7__2848z00,
		BGl__isTopzf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isSuccesszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__issuccessza7f3za7f32849z00,
		BGl__isSuccesszf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isHolezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isholeza7f3za7f3za7za7_2850z00,
		BGl__isHolezf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isXConszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isxconsza7f3za7f3za7za72851z00,
		BGl__isXConszf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isTimeszf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__istimesza7f3za7f3za7za72852z00,
		BGl__isTimeszf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isQuotezf3zd2envz21zz__match_descriptionsz00,
		BgL_bgl__isquoteza7f3za7f3za7za72853z00,
		BGl__isQuotezf3zf3zz__match_descriptionsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectorzd2minuszd2envz00zz__match_descriptionsz00,
		BgL_bgl__vectorza7d2minusza72854z00,
		BGl__vectorzd2minuszd2zz__match_descriptionsz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_patternzd2pluszd2envz00zz__match_descriptionsz00,
		BgL_bgl__patternza7d2plusza72855z00,
		BGl__patternzd2pluszd2zz__match_descriptionsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isVectorzd2endzf3zd2envzf3zz__match_descriptionsz00,
		BgL_bgl__isvectorza7d2endza72856z00,
		BGl__isVectorzd2endzf3z21zz__match_descriptionsz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long
		BgL_checksumz00_3365, char *BgL_fromz00_3366)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_descriptionsz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_descriptionsz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__match_descriptionsz00();
					BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_descriptionsz00()
	{
		AN_OBJECT;
		{	/* Match/descr.scm 12 */
			BGl_symbol2728z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2729z00zz__match_descriptionsz00);
			BGl_symbol2730z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2731z00zz__match_descriptionsz00);
			BGl_symbol2732z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2733z00zz__match_descriptionsz00);
			BGl_symbol2735z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2736z00zz__match_descriptionsz00);
			BGl_symbol2737z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2738z00zz__match_descriptionsz00);
			BGl_list2734z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2735z00zz__match_descriptionsz00,
				MAKE_PAIR(BGl_symbol2737z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2740z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2741z00zz__match_descriptionsz00);
			BGl_symbol2742z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2743z00zz__match_descriptionsz00);
			BGl_list2739z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2740z00zz__match_descriptionsz00,
				MAKE_PAIR(BGl_symbol2742z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2744z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2745z00zz__match_descriptionsz00);
			BGl_symbol2746z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2747z00zz__match_descriptionsz00);
			BGl_symbol2748z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2749z00zz__match_descriptionsz00);
			BGl_symbol2750z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2751z00zz__match_descriptionsz00);
			BGl_symbol2752z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2753z00zz__match_descriptionsz00);
			BGl_symbol2754z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2755z00zz__match_descriptionsz00);
			BGl_symbol2756z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2757z00zz__match_descriptionsz00);
			BGl_symbol2758z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2759z00zz__match_descriptionsz00);
			BGl_symbol2760z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2761z00zz__match_descriptionsz00);
			BGl_list2762z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2752z00zz__match_descriptionsz00, BNIL);
			BGl_symbol2763z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2764z00zz__match_descriptionsz00);
			BGl_symbol2765z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2766z00zz__match_descriptionsz00);
			BGl_symbol2768z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2769z00zz__match_descriptionsz00);
			BGl_symbol2770z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2771z00zz__match_descriptionsz00);
			BGl_list2767z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2735z00zz__match_descriptionsz00,
				MAKE_PAIR(BGl_symbol2768z00zz__match_descriptionsz00,
					MAKE_PAIR(BGl_symbol2770z00zz__match_descriptionsz00, BNIL)));
			BGl_symbol2775z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2776z00zz__match_descriptionsz00);
			BGl_symbol2777z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2778z00zz__match_descriptionsz00);
			BGl_symbol2780z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2781z00zz__match_descriptionsz00);
			BGl_list2783z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2735z00zz__match_descriptionsz00,
				MAKE_PAIR(BGl_list2762z00zz__match_descriptionsz00,
					MAKE_PAIR(BGl_list2762z00zz__match_descriptionsz00, BNIL)));
			BGl_list2782z00zz__match_descriptionsz00 =
				MAKE_PAIR(BGl_symbol2760z00zz__match_descriptionsz00,
				MAKE_PAIR(BGl_list2783z00zz__match_descriptionsz00, BNIL));
			BGl_symbol2787z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2788z00zz__match_descriptionsz00);
			return (BGl_symbol2789z00zz__match_descriptionsz00 =
				bstring_to_symbol(BGl_string2790z00zz__match_descriptionsz00), BUNSPEC);
		}
	}



/* pattern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t BgL_fz00_1)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 80 */
		BGl_patternzd2variableszd2zz__match_descriptionsz00:
			if ((CAR(BgL_fz00_1) == BGl_symbol2728z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 83 */
					obj_t BgL_arg1903z00_840;

					{	/* Match/descr.scm 83 */
						obj_t BgL_pairz00_1850;

						BgL_pairz00_1850 = BgL_fz00_1;
						BgL_arg1903z00_840 = CAR(CDR(BgL_pairz00_1850));
					}
					{
						obj_t BgL_fz00_3415;

						BgL_fz00_3415 = BgL_arg1903z00_840;
						BgL_fz00_1 = BgL_fz00_3415;
						goto BGl_patternzd2variableszd2zz__match_descriptionsz00;
					}
				}
			else
				{	/* Match/descr.scm 82 */
					if ((CAR(BgL_fz00_1) == BGl_symbol2730z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 85 */
							obj_t BgL_arg1905z00_842;

							{	/* Match/descr.scm 85 */
								obj_t BgL_pairz00_1855;

								BgL_pairz00_1855 = BgL_fz00_1;
								BgL_arg1905z00_842 = CAR(CDR(BgL_pairz00_1855));
							}
							{
								obj_t BgL_fz00_3421;

								BgL_fz00_3421 = BgL_arg1905z00_842;
								BgL_fz00_1 = BgL_fz00_3421;
								goto BGl_patternzd2variableszd2zz__match_descriptionsz00;
							}
						}
					else
						{	/* Match/descr.scm 84 */
							if (
								(CAR(BgL_fz00_1) == BGl_symbol2732z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 87 */
									obj_t BgL_arg1907z00_844;

									obj_t BgL_arg1908z00_845;

									{	/* Match/descr.scm 87 */
										obj_t BgL_arg1909z00_846;

										{	/* Match/descr.scm 87 */
											obj_t BgL_pairz00_1860;

											BgL_pairz00_1860 = BgL_fz00_1;
											BgL_arg1909z00_846 = CAR(CDR(BgL_pairz00_1860));
										}
										BgL_arg1907z00_844 =
											BGl_patternzd2variableszd2zz__match_descriptionsz00
											(BgL_arg1909z00_846);
									}
									{	/* Match/descr.scm 87 */
										obj_t BgL_arg1910z00_847;

										{	/* Match/descr.scm 87 */
											obj_t BgL_pairz00_1864;

											BgL_pairz00_1864 = BgL_fz00_1;
											BgL_arg1910z00_847 = CAR(CDR(CDR(BgL_pairz00_1864)));
										}
										BgL_arg1908z00_845 =
											BGl_patternzd2variableszd2zz__match_descriptionsz00
											(BgL_arg1910z00_847);
									}
									return
										BGl_unionz00zz__match_descriptionsz00(BgL_arg1907z00_844,
										BgL_arg1908z00_845);
								}
							else
								{	/* Match/descr.scm 86 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_fz00_1),
												BGl_list2734z00zz__match_descriptionsz00)))
										{	/* Match/descr.scm 89 */
											obj_t BgL_arg1912z00_849;

											obj_t BgL_arg1914z00_850;

											{	/* Match/descr.scm 89 */
												obj_t BgL_arg1915z00_851;

												{	/* Match/descr.scm 89 */
													obj_t BgL_pairz00_1871;

													BgL_pairz00_1871 = BgL_fz00_1;
													BgL_arg1915z00_851 = CAR(CDR(BgL_pairz00_1871));
												}
												BgL_arg1912z00_849 =
													BGl_patternzd2variableszd2zz__match_descriptionsz00
													(BgL_arg1915z00_851);
											}
											{	/* Match/descr.scm 89 */
												obj_t BgL_arg1916z00_852;

												{	/* Match/descr.scm 89 */
													obj_t BgL_pairz00_1875;

													BgL_pairz00_1875 = BgL_fz00_1;
													BgL_arg1916z00_852 = CAR(CDR(CDR(BgL_pairz00_1875)));
												}
												BgL_arg1914z00_850 =
													BGl_patternzd2variableszd2zz__match_descriptionsz00
													(BgL_arg1916z00_852);
											}
											return
												BGl_unionz00zz__match_descriptionsz00
												(BgL_arg1912z00_849, BgL_arg1914z00_850);
										}
									else
										{	/* Match/descr.scm 88 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
														(BgL_fz00_1),
														BGl_list2739z00zz__match_descriptionsz00)))
												{	/* Match/descr.scm 91 */
													obj_t BgL_arg1918z00_854;

													obj_t BgL_arg1919z00_855;

													{	/* Match/descr.scm 91 */
														obj_t BgL_arg1920z00_856;

														{	/* Match/descr.scm 91 */
															obj_t BgL_pairz00_1882;

															BgL_pairz00_1882 = BgL_fz00_1;
															BgL_arg1920z00_856 =
																CAR(CDR(CDR(BgL_pairz00_1882)));
														}
														BgL_arg1918z00_854 =
															BGl_patternzd2variableszd2zz__match_descriptionsz00
															(BgL_arg1920z00_856);
													}
													{	/* Match/descr.scm 91 */
														obj_t BgL_arg1921z00_857;

														{	/* Match/descr.scm 91 */
															obj_t BgL_pairz00_1888;

															BgL_pairz00_1888 = BgL_fz00_1;
															BgL_arg1921z00_857 =
																CAR(CDR(CDR(CDR(BgL_pairz00_1888))));
														}
														BgL_arg1919z00_855 =
															BGl_patternzd2variableszd2zz__match_descriptionsz00
															(BgL_arg1921z00_857);
													}
													return
														BGl_unionz00zz__match_descriptionsz00
														(BgL_arg1918z00_854, BgL_arg1919z00_855);
												}
											else
												{	/* Match/descr.scm 90 */
													if (
														(CAR(BgL_fz00_1) ==
															BGl_symbol2744z00zz__match_descriptionsz00))
														{	/* Match/descr.scm 92 */
															return CDR(BgL_fz00_1);
														}
													else
														{	/* Match/descr.scm 92 */
															if (
																(CAR(BgL_fz00_1) ==
																	BGl_symbol2746z00zz__match_descriptionsz00))
																{	/* Match/descr.scm 95 */
																	obj_t BgL_arg1924z00_860;

																	{	/* Match/descr.scm 95 */
																		obj_t BgL_pairz00_1899;

																		BgL_pairz00_1899 = BgL_fz00_1;
																		BgL_arg1924z00_860 =
																			CAR(CDR(CDR(BgL_pairz00_1899)));
																	}
																	{
																		obj_t BgL_fz00_3469;

																		BgL_fz00_3469 = BgL_arg1924z00_860;
																		BgL_fz00_1 = BgL_fz00_3469;
																		goto
																			BGl_patternzd2variableszd2zz__match_descriptionsz00;
																	}
																}
															else
																{	/* Match/descr.scm 94 */
																	if (
																		(CAR(BgL_fz00_1) ==
																			BGl_symbol2748z00zz__match_descriptionsz00))
																		{	/* Match/descr.scm 96 */
																			return BNIL;
																		}
																	else
																		{	/* Match/descr.scm 96 */
																			if (
																				(CAR(BgL_fz00_1) ==
																					BGl_symbol2750z00zz__match_descriptionsz00))
																				{	/* Match/descr.scm 106 */
																					obj_t BgL_g1824z00_863;

																					{	/* Match/descr.scm 106 */
																						obj_t BgL_pairz00_1907;

																						BgL_pairz00_1907 = BgL_fz00_1;
																						BgL_g1824z00_863 =
																							CDR(CDR(CDR(BgL_pairz00_1907)));
																					}
																					return
																						BGl_loopz72z72zz__match_descriptionsz00
																						(BgL_g1824z00_863);
																				}
																			else
																				{	/* Match/descr.scm 98 */
																					return BNIL;
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



/* loop' */
	obj_t BGl_loopz72z72zz__match_descriptionsz00(obj_t BgL_pza2za2_865)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 106 */
			if (NULLP(BgL_pza2za2_865))
				{	/* Match/descr.scm 107 */
					return BNIL;
				}
			else
				{	/* Match/descr.scm 107 */
					return
						BGl_unionz00zz__match_descriptionsz00
						(BGl_patternzd2variableszd2zz__match_descriptionsz00(CAR
							(BgL_pza2za2_865)),
						BGl_loopz72z72zz__match_descriptionsz00(CDR(BgL_pza2za2_865)));
				}
		}
	}



/* _pattern-variables */
	obj_t BGl__patternzd2variableszd2zz__match_descriptionsz00(obj_t
		BgL_envz00_3131, obj_t BgL_fz00_3132)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 80 */
			return BGl_patternzd2variableszd2zz__match_descriptionsz00(BgL_fz00_3132);
		}
	}



/* union */
	obj_t BGl_unionz00zz__match_descriptionsz00(obj_t BgL_l1z00_2,
		obj_t BgL_l2z00_3)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 114 */
		BGl_unionz00zz__match_descriptionsz00:
			if (NULLP(BgL_l1z00_2))
				{	/* Match/descr.scm 115 */
					return BgL_l2z00_3;
				}
			else
				{	/* Match/descr.scm 115 */
					if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00(CAR(BgL_l1z00_2),
								BgL_l2z00_3)))
						{
							obj_t BgL_l1z00_3494;

							BgL_l1z00_3494 = CDR(BgL_l1z00_2);
							BgL_l1z00_2 = BgL_l1z00_3494;
							goto BGl_unionz00zz__match_descriptionsz00;
						}
					else
						{	/* Match/descr.scm 116 */
							return
								MAKE_PAIR(CAR(BgL_l1z00_2),
								BGl_unionz00zz__match_descriptionsz00(CDR(BgL_l1z00_2),
									BgL_l2z00_3));
						}
				}
		}
	}



/* pattern-plus */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t
		BgL_oldz00_7, obj_t BgL_newz00_8)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 140 */
			{	/* Match/descr.scm 141 */
				bool_t BgL_testz00_3500;

				if ((CAR(BgL_newz00_8) == BGl_symbol2740z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 141 */
						BgL_testz00_3500 = ((bool_t) 1);
					}
				else
					{	/* Match/descr.scm 141 */
						BgL_testz00_3500 =
							(CAR(BgL_newz00_8) == BGl_symbol2742z00zz__match_descriptionsz00);
					}
				if (BgL_testz00_3500)
					{	/* Match/descr.scm 141 */
						return BgL_oldz00_7;
					}
				else
					{	/* Match/descr.scm 144 */
						bool_t BgL_testz00_3506;

						if (
							(CAR(BgL_oldz00_7) == BGl_symbol2752z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 144 */
								BgL_testz00_3506 = ((bool_t) 1);
							}
						else
							{	/* Match/descr.scm 144 */
								BgL_testz00_3506 =
									(CAR(BgL_oldz00_7) ==
									BGl_symbol2754z00zz__match_descriptionsz00);
							}
						if (BgL_testz00_3506)
							{	/* Match/descr.scm 144 */
								return BgL_newz00_8;
							}
						else
							{	/* Match/descr.scm 146 */
								bool_t BgL_testz00_3512;

								if (
									(CAR(BgL_newz00_8) ==
										BGl_symbol2752z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 146 */
										BgL_testz00_3512 = ((bool_t) 1);
									}
								else
									{	/* Match/descr.scm 146 */
										BgL_testz00_3512 =
											(CAR(BgL_newz00_8) ==
											BGl_symbol2754z00zz__match_descriptionsz00);
									}
								if (BgL_testz00_3512)
									{	/* Match/descr.scm 146 */
										return BgL_oldz00_7;
									}
								else
									{	/* Match/descr.scm 146 */
										if (BGl_isNegationzf3zf3zz__match_descriptionsz00
											(BgL_oldz00_7))
											{	/* Match/descr.scm 148 */
												return
													BGl_normz00zz__match_descriptionsz00(BgL_newz00_8,
													BGl_symbol2756z00zz__match_descriptionsz00);
											}
										else
											{	/* Match/descr.scm 150 */
												obj_t BgL_arg1969z00_905;

												if (
													(CAR(BgL_newz00_8) ==
														BGl_symbol2744z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 151 */
														obj_t BgL_list1971z00_907;

														{	/* Match/descr.scm 151 */
															obj_t BgL_arg1972z00_908;

															obj_t BgL_arg1973z00_909;

															BgL_arg1972z00_908 =
																BGl_symbol2732z00zz__match_descriptionsz00;
															{	/* Match/descr.scm 151 */
																obj_t BgL_arg1974z00_910;

																BgL_arg1974z00_910 =
																	MAKE_PAIR(BgL_oldz00_7, BNIL);
																BgL_arg1973z00_909 =
																	MAKE_PAIR(BgL_newz00_8, BgL_arg1974z00_910);
															}
															BgL_list1971z00_907 =
																MAKE_PAIR(BgL_arg1972z00_908,
																BgL_arg1973z00_909);
														}
														BgL_arg1969z00_905 = BgL_list1971z00_907;
													}
												else
													{	/* Match/descr.scm 152 */
														obj_t BgL_list1975z00_911;

														{	/* Match/descr.scm 152 */
															obj_t BgL_arg1976z00_912;

															obj_t BgL_arg1977z00_913;

															BgL_arg1976z00_912 =
																BGl_symbol2732z00zz__match_descriptionsz00;
															{	/* Match/descr.scm 152 */
																obj_t BgL_arg1979z00_914;

																BgL_arg1979z00_914 =
																	MAKE_PAIR(BgL_newz00_8, BNIL);
																BgL_arg1977z00_913 =
																	MAKE_PAIR(BgL_oldz00_7, BgL_arg1979z00_914);
															}
															BgL_list1975z00_911 =
																MAKE_PAIR(BgL_arg1976z00_912,
																BgL_arg1977z00_913);
														}
														BgL_arg1969z00_905 = BgL_list1975z00_911;
													}
												return
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg1969z00_905,
													BGl_symbol2756z00zz__match_descriptionsz00);
											}
									}
							}
					}
			}
		}
	}



/* _pattern-plus */
	obj_t BGl__patternzd2pluszd2zz__match_descriptionsz00(obj_t BgL_envz00_3133,
		obj_t BgL_oldz00_3134, obj_t BgL_newz00_3135)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 140 */
			return
				BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_oldz00_3134,
				BgL_newz00_3135);
		}
	}



/* pattern-minus */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t
		BgL_p1z00_9, obj_t BgL_p2z00_10)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 154 */
			{	/* Match/descr.scm 155 */
				bool_t BgL_testz00_3532;

				{	/* Match/descr.scm 155 */
					bool_t BgL_testz00_3533;

					if (BGl_isNegationzf3zf3zz__match_descriptionsz00(BgL_p1z00_9))
						{	/* Match/descr.scm 155 */
							BgL_testz00_3533 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 156 */
							bool_t BgL_testz00_3536;

							if (
								(CAR(BgL_p1z00_9) ==
									BGl_symbol2752z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 156 */
									BgL_testz00_3536 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 156 */
									BgL_testz00_3536 =
										(CAR(BgL_p1z00_9) ==
										BGl_symbol2754z00zz__match_descriptionsz00);
								}
							if (BgL_testz00_3536)
								{	/* Match/descr.scm 156 */
									BgL_testz00_3533 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 156 */
									BgL_testz00_3533 =
										(CAR(BgL_p1z00_9) ==
										BGl_symbol2758z00zz__match_descriptionsz00);
								}
						}
					if (BgL_testz00_3533)
						{	/* Match/descr.scm 155 */
							if (
								(CAR(BgL_p2z00_10) ==
									BGl_symbol2742z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 158 */
									BgL_testz00_3532 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 158 */
									BgL_testz00_3532 =
										(CAR(BgL_p2z00_10) ==
										BGl_symbol2740z00zz__match_descriptionsz00);
								}
						}
					else
						{	/* Match/descr.scm 155 */
							BgL_testz00_3532 = ((bool_t) 1);
						}
				}
				if (BgL_testz00_3532)
					{	/* Match/descr.scm 155 */
						return BgL_p1z00_9;
					}
				else
					{	/* Match/descr.scm 161 */
						bool_t BgL_testz00_3549;

						if (
							(CAR(BgL_p1z00_9) == BGl_symbol2752z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 161 */
								BgL_testz00_3549 = ((bool_t) 1);
							}
						else
							{	/* Match/descr.scm 161 */
								BgL_testz00_3549 =
									(CAR(BgL_p1z00_9) ==
									BGl_symbol2754z00zz__match_descriptionsz00);
							}
						if (BgL_testz00_3549)
							{	/* Match/descr.scm 162 */
								obj_t BgL_list1983z00_918;

								{	/* Match/descr.scm 162 */
									obj_t BgL_arg1984z00_919;

									obj_t BgL_arg1985z00_920;

									BgL_arg1984z00_919 =
										BGl_symbol2760z00zz__match_descriptionsz00;
									BgL_arg1985z00_920 = MAKE_PAIR(BgL_p2z00_10, BNIL);
									BgL_list1983z00_918 =
										MAKE_PAIR(BgL_arg1984z00_919, BgL_arg1985z00_920);
								}
								return BgL_list1983z00_918;
							}
						else
							{	/* Match/descr.scm 163 */
								obj_t BgL_arg1986z00_921;

								{	/* Match/descr.scm 163 */
									obj_t BgL_arg1987z00_922;

									obj_t BgL_arg1988z00_923;

									BgL_arg1987z00_922 =
										BGl_symbol2732z00zz__match_descriptionsz00;
									{	/* Match/descr.scm 163 */
										obj_t BgL_list1992z00_927;

										{	/* Match/descr.scm 163 */
											obj_t BgL_arg1993z00_928;

											obj_t BgL_arg1994z00_929;

											BgL_arg1993z00_928 =
												BGl_symbol2760z00zz__match_descriptionsz00;
											BgL_arg1994z00_929 = MAKE_PAIR(BgL_p2z00_10, BNIL);
											BgL_list1992z00_927 =
												MAKE_PAIR(BgL_arg1993z00_928, BgL_arg1994z00_929);
										}
										BgL_arg1988z00_923 = BgL_list1992z00_927;
									}
									{	/* Match/descr.scm 163 */
										obj_t BgL_list1989z00_924;

										{	/* Match/descr.scm 163 */
											obj_t BgL_arg1990z00_925;

											{	/* Match/descr.scm 163 */
												obj_t BgL_arg1991z00_926;

												BgL_arg1991z00_926 =
													MAKE_PAIR(BgL_arg1988z00_923, BNIL);
												BgL_arg1990z00_925 =
													MAKE_PAIR(BgL_p1z00_9, BgL_arg1991z00_926);
											}
											BgL_list1989z00_924 =
												MAKE_PAIR(BgL_arg1987z00_922, BgL_arg1990z00_925);
										}
										BgL_arg1986z00_921 = BgL_list1989z00_924;
									}
								}
								return
									BGl_normz00zz__match_descriptionsz00(BgL_arg1986z00_921,
									BGl_symbol2756z00zz__match_descriptionsz00);
							}
					}
			}
		}
	}



/* _pattern-minus */
	obj_t BGl__patternzd2minuszd2zz__match_descriptionsz00(obj_t BgL_envz00_3136,
		obj_t BgL_p1z00_3137, obj_t BgL_p2z00_3138)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 154 */
			return
				BGl_patternzd2minuszd2zz__match_descriptionsz00(BgL_p1z00_3137,
				BgL_p2z00_3138);
		}
	}



/* isNegation? */
	bool_t BGl_isNegationzf3zf3zz__match_descriptionsz00(obj_t BgL_cz00_11)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 169 */
			{	/* Match/descr.scm 170 */
				bool_t BgL__ortest_1825z00_934;

				if ((CAR(BgL_cz00_11) == BGl_symbol2732z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 171 */
						obj_t BgL_arg2001z00_938;

						{	/* Match/descr.scm 171 */
							obj_t BgL_pairz00_1995;

							BgL_pairz00_1995 = BgL_cz00_11;
							BgL_arg2001z00_938 = CAR(CDR(BgL_pairz00_1995));
						}
						BgL__ortest_1825z00_934 =
							BGl_isNegationzf3zf3zz__match_descriptionsz00(BgL_arg2001z00_938);
					}
				else
					{	/* Match/descr.scm 170 */
						BgL__ortest_1825z00_934 = ((bool_t) 0);
					}
				if (BgL__ortest_1825z00_934)
					{	/* Match/descr.scm 170 */
						return BgL__ortest_1825z00_934;
					}
				else
					{	/* Match/descr.scm 170 */
						return
							(CAR(BgL_cz00_11) == BGl_symbol2760z00zz__match_descriptionsz00);
					}
			}
		}
	}



/* pattern-car */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t
		BgL_cz00_12)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 174 */
			if ((CAR(BgL_cz00_12) == BGl_symbol2735z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 175 */
					obj_t BgL_pairz00_2004;

					BgL_pairz00_2004 = BgL_cz00_12;
					return CAR(CDR(BgL_pairz00_2004));
				}
			else
				{	/* Match/descr.scm 175 */
					return BGl_list2762z00zz__match_descriptionsz00;
				}
		}
	}



/* _pattern-car */
	obj_t BGl__patternzd2carzd2zz__match_descriptionsz00(obj_t BgL_envz00_3139,
		obj_t BgL_cz00_3140)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 174 */
			return BGl_patternzd2carzd2zz__match_descriptionsz00(BgL_cz00_3140);
		}
	}



/* pattern-cdr */
	BGL_EXPORTED_DEF obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t
		BgL_cz00_13)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 179 */
			if ((CAR(BgL_cz00_13) == BGl_symbol2735z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 180 */
					obj_t BgL_pairz00_2012;

					BgL_pairz00_2012 = BgL_cz00_13;
					return CAR(CDR(CDR(BgL_pairz00_2012)));
				}
			else
				{	/* Match/descr.scm 180 */
					return BGl_list2762z00zz__match_descriptionsz00;
				}
		}
	}



/* _pattern-cdr */
	obj_t BGl__patternzd2cdrzd2zz__match_descriptionsz00(obj_t BgL_envz00_3141,
		obj_t BgL_cz00_3142)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 179 */
			return BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3142);
		}
	}



/* norm */
	obj_t BGl_normz00zz__match_descriptionsz00(obj_t BgL_cz00_15,
		obj_t BgL_ancz00_16)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 209 */
		BGl_normz00zz__match_descriptionsz00:
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_ancz00_16, BgL_cz00_15))
				{	/* Match/descr.scm 212 */
					return BgL_ancz00_16;
				}
			else
				{	/* Match/descr.scm 212 */
					if ((CAR(BgL_cz00_15) == BGl_symbol2760z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 213 */
							obj_t BgL_arg2012z00_949;

							{	/* Match/descr.scm 213 */
								obj_t BgL_pairz00_2019;

								BgL_pairz00_2019 = BgL_cz00_15;
								BgL_arg2012z00_949 = CAR(CDR(BgL_pairz00_2019));
							}
							{	/* Match/descr.scm 213 */
								obj_t BgL_arg2028z00_2024;

								obj_t BgL_arg2029z00_2025;

								BgL_arg2028z00_2024 =
									BGl_rewritezd2notzd2zz__match_descriptionsz00
									(BgL_arg2012z00_949);
								{	/* Match/descr.scm 213 */
									obj_t BgL_list2030z00_2026;

									{	/* Match/descr.scm 213 */
										obj_t BgL_arg2031z00_2027;

										obj_t BgL_arg2033z00_2028;

										BgL_arg2031z00_2027 =
											BGl_symbol2760z00zz__match_descriptionsz00;
										BgL_arg2033z00_2028 = MAKE_PAIR(BgL_arg2012z00_949, BNIL);
										BgL_list2030z00_2026 =
											MAKE_PAIR(BgL_arg2031z00_2027, BgL_arg2033z00_2028);
									}
									BgL_arg2029z00_2025 = BgL_list2030z00_2026;
								}
								{
									obj_t BgL_ancz00_3597;

									obj_t BgL_cz00_3596;

									BgL_cz00_3596 = BgL_arg2028z00_2024;
									BgL_ancz00_3597 = BgL_arg2029z00_2025;
									BgL_ancz00_16 = BgL_ancz00_3597;
									BgL_cz00_15 = BgL_cz00_3596;
									goto BGl_normz00zz__match_descriptionsz00;
								}
							}
						}
					else
						{	/* Match/descr.scm 213 */
							if (
								(CAR(BgL_cz00_15) ==
									BGl_symbol2732z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 214 */
									obj_t BgL_arg2015z00_951;

									obj_t BgL_arg2016z00_952;

									{	/* Match/descr.scm 214 */
										obj_t BgL_pairz00_2032;

										BgL_pairz00_2032 = BgL_cz00_15;
										BgL_arg2015z00_951 = CAR(CDR(BgL_pairz00_2032));
									}
									{	/* Match/descr.scm 214 */
										obj_t BgL_pairz00_2036;

										BgL_pairz00_2036 = BgL_cz00_15;
										BgL_arg2016z00_952 = CAR(CDR(CDR(BgL_pairz00_2036)));
									}
									{	/* Match/descr.scm 214 */
										obj_t BgL_arg2042z00_2044;

										obj_t BgL_arg2043z00_2045;

										BgL_arg2042z00_2044 =
											BGl_rewritezd2andzd2zz__match_descriptionsz00
											(BgL_arg2015z00_951, BgL_arg2016z00_952);
										{	/* Match/descr.scm 214 */
											obj_t BgL_list2044z00_2046;

											{	/* Match/descr.scm 214 */
												obj_t BgL_arg2045z00_2047;

												obj_t BgL_arg2046z00_2048;

												BgL_arg2045z00_2047 =
													BGl_symbol2732z00zz__match_descriptionsz00;
												{	/* Match/descr.scm 214 */
													obj_t BgL_arg2047z00_2049;

													BgL_arg2047z00_2049 =
														MAKE_PAIR(BgL_arg2016z00_952, BNIL);
													BgL_arg2046z00_2048 =
														MAKE_PAIR(BgL_arg2015z00_951, BgL_arg2047z00_2049);
												}
												BgL_list2044z00_2046 =
													MAKE_PAIR(BgL_arg2045z00_2047, BgL_arg2046z00_2048);
											}
											BgL_arg2043z00_2045 = BgL_list2044z00_2046;
										}
										{
											obj_t BgL_ancz00_3611;

											obj_t BgL_cz00_3610;

											BgL_cz00_3610 = BgL_arg2042z00_2044;
											BgL_ancz00_3611 = BgL_arg2043z00_2045;
											BgL_ancz00_16 = BgL_ancz00_3611;
											BgL_cz00_15 = BgL_cz00_3610;
											goto BGl_normz00zz__match_descriptionsz00;
										}
									}
								}
							else
								{	/* Match/descr.scm 214 */
									if (
										(CAR(BgL_cz00_15) ==
											BGl_symbol2735z00zz__match_descriptionsz00))
										{	/* Match/descr.scm 215 */
											obj_t BgL_arg2018z00_954;

											obj_t BgL_arg2019z00_955;

											{	/* Match/descr.scm 215 */
												obj_t BgL_pairz00_2053;

												BgL_pairz00_2053 = BgL_cz00_15;
												BgL_arg2018z00_954 = CAR(CDR(BgL_pairz00_2053));
											}
											{	/* Match/descr.scm 215 */
												obj_t BgL_pairz00_2057;

												BgL_pairz00_2057 = BgL_cz00_15;
												BgL_arg2019z00_955 = CAR(CDR(CDR(BgL_pairz00_2057)));
											}
											{	/* Match/descr.scm 215 */
												obj_t BgL_arg2097z00_2065;

												obj_t BgL_arg2098z00_2066;

												obj_t BgL_arg2099z00_2067;

												BgL_arg2097z00_2065 =
													BGl_symbol2735z00zz__match_descriptionsz00;
												BgL_arg2098z00_2066 =
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg2018z00_954,
													BGl_symbol2756z00zz__match_descriptionsz00);
												BgL_arg2099z00_2067 =
													BGl_normz00zz__match_descriptionsz00
													(BgL_arg2019z00_955,
													BGl_symbol2756z00zz__match_descriptionsz00);
												{	/* Match/descr.scm 215 */
													obj_t BgL_list2100z00_2068;

													{	/* Match/descr.scm 215 */
														obj_t BgL_arg2101z00_2069;

														{	/* Match/descr.scm 215 */
															obj_t BgL_arg2102z00_2070;

															BgL_arg2102z00_2070 =
																MAKE_PAIR(BgL_arg2099z00_2067, BNIL);
															BgL_arg2101z00_2069 =
																MAKE_PAIR(BgL_arg2098z00_2066,
																BgL_arg2102z00_2070);
														}
														BgL_list2100z00_2068 =
															MAKE_PAIR(BgL_arg2097z00_2065,
															BgL_arg2101z00_2069);
													}
													return BgL_list2100z00_2068;
												}
											}
										}
									else
										{	/* Match/descr.scm 215 */
											return BgL_cz00_15;
										}
								}
						}
				}
		}
	}



/* rewrite-not */
	obj_t BGl_rewritezd2notzd2zz__match_descriptionsz00(obj_t BgL_cz00_18)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 221 */
			if ((CAR(BgL_cz00_18) == BGl_symbol2760z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 224 */
					obj_t BgL_pairz00_2083;

					BgL_pairz00_2083 = BgL_cz00_18;
					return CAR(CDR(BgL_pairz00_2083));
				}
			else
				{	/* Match/descr.scm 225 */
					obj_t BgL_arg2036z00_968;

					obj_t BgL_arg2037z00_969;

					BgL_arg2036z00_968 = BGl_symbol2760z00zz__match_descriptionsz00;
					BgL_arg2037z00_969 =
						BGl_normz00zz__match_descriptionsz00(BgL_cz00_18,
						BGl_symbol2756z00zz__match_descriptionsz00);
					{	/* Match/descr.scm 225 */
						obj_t BgL_list2038z00_970;

						{	/* Match/descr.scm 225 */
							obj_t BgL_arg2039z00_971;

							BgL_arg2039z00_971 = MAKE_PAIR(BgL_arg2037z00_969, BNIL);
							BgL_list2038z00_970 =
								MAKE_PAIR(BgL_arg2036z00_968, BgL_arg2039z00_971);
						}
						return BgL_list2038z00_970;
					}
				}
		}
	}



/* rewrite-and */
	obj_t BGl_rewritezd2andzd2zz__match_descriptionsz00(obj_t BgL_c1z00_21,
		obj_t BgL_c2z00_22)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 231 */
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_c1z00_21, BgL_c2z00_22))
				{	/* Match/descr.scm 233 */
					return BgL_c1z00_21;
				}
			else
				{	/* Match/descr.scm 233 */
					if ((CAR(BgL_c1z00_21) == BGl_symbol2732z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 235 */
							obj_t BgL_arg2051z00_982;

							obj_t BgL_arg2052z00_983;

							obj_t BgL_arg2053z00_984;

							BgL_arg2051z00_982 = BGl_symbol2732z00zz__match_descriptionsz00;
							{	/* Match/descr.scm 236 */
								obj_t BgL_pairz00_2099;

								BgL_pairz00_2099 = BgL_c1z00_21;
								BgL_arg2052z00_983 = CAR(CDR(BgL_pairz00_2099));
							}
							{	/* Match/descr.scm 237 */
								obj_t BgL_arg2057z00_988;

								obj_t BgL_arg2058z00_989;

								BgL_arg2057z00_988 = BGl_symbol2732z00zz__match_descriptionsz00;
								{	/* Match/descr.scm 238 */
									obj_t BgL_pairz00_2103;

									BgL_pairz00_2103 = BgL_c1z00_21;
									BgL_arg2058z00_989 = CAR(CDR(CDR(BgL_pairz00_2103)));
								}
								{	/* Match/descr.scm 237 */
									obj_t BgL_list2059z00_990;

									{	/* Match/descr.scm 237 */
										obj_t BgL_arg2060z00_991;

										{	/* Match/descr.scm 237 */
											obj_t BgL_arg2061z00_992;

											BgL_arg2061z00_992 = MAKE_PAIR(BgL_c2z00_22, BNIL);
											BgL_arg2060z00_991 =
												MAKE_PAIR(BgL_arg2058z00_989, BgL_arg2061z00_992);
										}
										BgL_list2059z00_990 =
											MAKE_PAIR(BgL_arg2057z00_988, BgL_arg2060z00_991);
									}
									BgL_arg2053z00_984 = BgL_list2059z00_990;
								}
							}
							{	/* Match/descr.scm 235 */
								obj_t BgL_list2054z00_985;

								{	/* Match/descr.scm 235 */
									obj_t BgL_arg2055z00_986;

									{	/* Match/descr.scm 235 */
										obj_t BgL_arg2056z00_987;

										BgL_arg2056z00_987 = MAKE_PAIR(BgL_arg2053z00_984, BNIL);
										BgL_arg2055z00_986 =
											MAKE_PAIR(BgL_arg2052z00_983, BgL_arg2056z00_987);
									}
									BgL_list2054z00_985 =
										MAKE_PAIR(BgL_arg2051z00_982, BgL_arg2055z00_986);
								}
								return BgL_list2054z00_985;
							}
						}
					else
						{	/* Match/descr.scm 240 */
							bool_t BgL_testz00_3649;

							if (
								(CAR(BgL_c1z00_21) ==
									BGl_symbol2735z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 240 */
									BgL_testz00_3649 =
										(CAR(BgL_c2z00_22) ==
										BGl_symbol2735z00zz__match_descriptionsz00);
								}
							else
								{	/* Match/descr.scm 240 */
									BgL_testz00_3649 = ((bool_t) 0);
								}
							if (BgL_testz00_3649)
								{	/* Match/descr.scm 242 */
									obj_t BgL_arg2063z00_994;

									obj_t BgL_arg2064z00_995;

									obj_t BgL_arg2065z00_996;

									BgL_arg2063z00_994 =
										BGl_symbol2735z00zz__match_descriptionsz00;
									{	/* Match/descr.scm 243 */
										obj_t BgL_arg2069z00_1000;

										obj_t BgL_arg2070z00_1001;

										obj_t BgL_arg2072z00_1002;

										BgL_arg2069z00_1000 =
											BGl_symbol2732z00zz__match_descriptionsz00;
										{	/* Match/descr.scm 243 */
											obj_t BgL_pairz00_2115;

											BgL_pairz00_2115 = BgL_c1z00_21;
											BgL_arg2070z00_1001 = CAR(CDR(BgL_pairz00_2115));
										}
										{	/* Match/descr.scm 243 */
											obj_t BgL_pairz00_2119;

											BgL_pairz00_2119 = BgL_c2z00_22;
											BgL_arg2072z00_1002 = CAR(CDR(BgL_pairz00_2119));
										}
										{	/* Match/descr.scm 243 */
											obj_t BgL_list2073z00_1003;

											{	/* Match/descr.scm 243 */
												obj_t BgL_arg2076z00_1004;

												{	/* Match/descr.scm 243 */
													obj_t BgL_arg2077z00_1005;

													BgL_arg2077z00_1005 =
														MAKE_PAIR(BgL_arg2072z00_1002, BNIL);
													BgL_arg2076z00_1004 =
														MAKE_PAIR(BgL_arg2070z00_1001, BgL_arg2077z00_1005);
												}
												BgL_list2073z00_1003 =
													MAKE_PAIR(BgL_arg2069z00_1000, BgL_arg2076z00_1004);
											}
											BgL_arg2064z00_995 = BgL_list2073z00_1003;
										}
									}
									{	/* Match/descr.scm 244 */
										obj_t BgL_arg2078z00_1006;

										obj_t BgL_arg2079z00_1007;

										obj_t BgL_arg2080z00_1008;

										BgL_arg2078z00_1006 =
											BGl_symbol2732z00zz__match_descriptionsz00;
										{	/* Match/descr.scm 244 */
											obj_t BgL_pairz00_2125;

											BgL_pairz00_2125 = BgL_c1z00_21;
											BgL_arg2079z00_1007 = CAR(CDR(CDR(BgL_pairz00_2125)));
										}
										{	/* Match/descr.scm 244 */
											obj_t BgL_pairz00_2131;

											BgL_pairz00_2131 = BgL_c2z00_22;
											BgL_arg2080z00_1008 = CAR(CDR(CDR(BgL_pairz00_2131)));
										}
										{	/* Match/descr.scm 244 */
											obj_t BgL_list2081z00_1009;

											{	/* Match/descr.scm 244 */
												obj_t BgL_arg2082z00_1010;

												{	/* Match/descr.scm 244 */
													obj_t BgL_arg2083z00_1011;

													BgL_arg2083z00_1011 =
														MAKE_PAIR(BgL_arg2080z00_1008, BNIL);
													BgL_arg2082z00_1010 =
														MAKE_PAIR(BgL_arg2079z00_1007, BgL_arg2083z00_1011);
												}
												BgL_list2081z00_1009 =
													MAKE_PAIR(BgL_arg2078z00_1006, BgL_arg2082z00_1010);
											}
											BgL_arg2065z00_996 = BgL_list2081z00_1009;
										}
									}
									{	/* Match/descr.scm 242 */
										obj_t BgL_list2066z00_997;

										{	/* Match/descr.scm 242 */
											obj_t BgL_arg2067z00_998;

											{	/* Match/descr.scm 242 */
												obj_t BgL_arg2068z00_999;

												BgL_arg2068z00_999 =
													MAKE_PAIR(BgL_arg2065z00_996, BNIL);
												BgL_arg2067z00_998 =
													MAKE_PAIR(BgL_arg2064z00_995, BgL_arg2068z00_999);
											}
											BgL_list2066z00_997 =
												MAKE_PAIR(BgL_arg2063z00_994, BgL_arg2067z00_998);
										}
										return BgL_list2066z00_997;
									}
								}
							else
								{	/* Match/descr.scm 245 */
									obj_t BgL_list2084z00_1012;

									{	/* Match/descr.scm 245 */
										obj_t BgL_arg2085z00_1013;

										obj_t BgL_arg2086z00_1014;

										BgL_arg2085z00_1013 =
											BGl_symbol2732z00zz__match_descriptionsz00;
										{	/* Match/descr.scm 245 */
											obj_t BgL_arg2089z00_1015;

											BgL_arg2089z00_1015 = MAKE_PAIR(BgL_c2z00_22, BNIL);
											BgL_arg2086z00_1014 =
												MAKE_PAIR(BgL_c1z00_21, BgL_arg2089z00_1015);
										}
										BgL_list2084z00_1012 =
											MAKE_PAIR(BgL_arg2085z00_1013, BgL_arg2086z00_1014);
									}
									return BgL_list2084z00_1012;
								}
						}
				}
		}
	}



/* more-precise? */
	BGL_EXPORTED_DEF obj_t BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t
		BgL_descrz00_25, obj_t BgL_fz00_26)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 260 */
		BGl_morezd2precisezf3z21zz__match_descriptionsz00:
			{	/* Match/descr.scm 262 */
				bool_t BgL_testz00_3677;

				if (
					(CAR(BgL_descrz00_25) == BGl_symbol2752z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 262 */
						BgL_testz00_3677 = ((bool_t) 1);
					}
				else
					{	/* Match/descr.scm 262 */
						BgL_testz00_3677 =
							(CAR(BgL_descrz00_25) ==
							BGl_symbol2754z00zz__match_descriptionsz00);
					}
				if (BgL_testz00_3677)
					{	/* Match/descr.scm 262 */
						return BFALSE;
					}
				else
					{	/* Match/descr.scm 262 */
						if (
							(CAR(BgL_fz00_26) == BGl_symbol2752z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 264 */
								return BTRUE;
							}
						else
							{	/* Match/descr.scm 264 */
								if (
									(CAR(BgL_fz00_26) ==
										BGl_symbol2763z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 267 */
										return BFALSE;
									}
								else
									{	/* Match/descr.scm 267 */
										if (
											(CAR(BgL_fz00_26) ==
												BGl_symbol2765z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 270 */
												if (
													(CAR(BgL_descrz00_25) ==
														BGl_symbol2765z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 272 */
														bool_t BgL_auxz00_3695;

														{	/* Match/descr.scm 272 */
															obj_t BgL_auxz00_3699;

															obj_t BgL_auxz00_3696;

															{	/* Match/descr.scm 272 */
																obj_t BgL_pairz00_2178;

																BgL_pairz00_2178 = BgL_fz00_26;
																BgL_auxz00_3699 = CAR(CDR(BgL_pairz00_2178));
															}
															{	/* Match/descr.scm 272 */
																obj_t BgL_pairz00_2174;

																BgL_pairz00_2174 = BgL_descrz00_25;
																BgL_auxz00_3696 = CAR(CDR(BgL_pairz00_2174));
															}
															BgL_auxz00_3695 =
																BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																(BgL_auxz00_3696, BgL_auxz00_3699);
														}
														return BBOOL(BgL_auxz00_3695);
													}
												else
													{	/* Match/descr.scm 271 */
														return BFALSE;
													}
											}
										else
											{	/* Match/descr.scm 270 */
												if (
													(CAR(BgL_fz00_26) ==
														BGl_symbol2732z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 275 */
														obj_t BgL__andtest_1828z00_1037;

														{	/* Match/descr.scm 275 */
															obj_t BgL_arg2111z00_1039;

															{	/* Match/descr.scm 275 */
																obj_t BgL_pairz00_2185;

																BgL_pairz00_2185 = BgL_fz00_26;
																BgL_arg2111z00_1039 =
																	CAR(CDR(BgL_pairz00_2185));
															}
															BgL__andtest_1828z00_1037 =
																BGl_morezd2precisezf3z21zz__match_descriptionsz00
																(BgL_descrz00_25, BgL_arg2111z00_1039);
														}
														if (CBOOL(BgL__andtest_1828z00_1037))
															{	/* Match/descr.scm 276 */
																obj_t BgL_arg2110z00_1038;

																{	/* Match/descr.scm 276 */
																	obj_t BgL_pairz00_2189;

																	BgL_pairz00_2189 = BgL_fz00_26;
																	BgL_arg2110z00_1038 =
																		CAR(CDR(CDR(BgL_pairz00_2189)));
																}
																{
																	obj_t BgL_fz00_3715;

																	BgL_fz00_3715 = BgL_arg2110z00_1038;
																	BgL_fz00_26 = BgL_fz00_3715;
																	goto
																		BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																}
															}
														else
															{	/* Match/descr.scm 275 */
																return BFALSE;
															}
													}
												else
													{	/* Match/descr.scm 274 */
														if (
															(CAR(BgL_fz00_26) ==
																BGl_symbol2728z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 279 */
																obj_t BgL__ortest_1829z00_1041;

																{	/* Match/descr.scm 279 */
																	obj_t BgL_arg2114z00_1043;

																	{	/* Match/descr.scm 279 */
																		obj_t BgL_pairz00_2198;

																		BgL_pairz00_2198 = BgL_fz00_26;
																		BgL_arg2114z00_1043 =
																			CAR(CDR(BgL_pairz00_2198));
																	}
																	BgL__ortest_1829z00_1041 =
																		BGl_morezd2precisezf3z21zz__match_descriptionsz00
																		(BgL_descrz00_25, BgL_arg2114z00_1043);
																}
																if (CBOOL(BgL__ortest_1829z00_1041))
																	{	/* Match/descr.scm 279 */
																		return BgL__ortest_1829z00_1041;
																	}
																else
																	{	/* Match/descr.scm 280 */
																		obj_t BgL_arg2113z00_1042;

																		{	/* Match/descr.scm 280 */
																			obj_t BgL_pairz00_2202;

																			BgL_pairz00_2202 = BgL_fz00_26;
																			BgL_arg2113z00_1042 =
																				CAR(CDR(CDR(BgL_pairz00_2202)));
																		}
																		{
																			obj_t BgL_fz00_3727;

																			BgL_fz00_3727 = BgL_arg2113z00_1042;
																			BgL_fz00_26 = BgL_fz00_3727;
																			goto
																				BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																		}
																	}
															}
														else
															{	/* Match/descr.scm 278 */
																if (
																	(CAR(BgL_fz00_26) ==
																		BGl_symbol2730z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 282 */
																		return BFALSE;
																	}
																else
																	{	/* Match/descr.scm 282 */
																		if (CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(BgL_fz00_26),
																					BGl_list2767z00zz__match_descriptionsz00)))
																			{	/* Match/descr.scm 285 */
																				if (
																					(CAR(BgL_descrz00_25) ==
																						BGl_symbol2735z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 287 */
																						obj_t BgL__andtest_1831z00_1047;

																						{	/* Match/descr.scm 287 */
																							obj_t BgL_arg2121z00_1050;

																							obj_t BgL_arg2123z00_1051;

																							{	/* Match/descr.scm 287 */
																								obj_t BgL_pairz00_2216;

																								BgL_pairz00_2216 =
																									BgL_descrz00_25;
																								BgL_arg2121z00_1050 =
																									CAR(CDR(BgL_pairz00_2216));
																							}
																							{	/* Match/descr.scm 287 */
																								obj_t BgL_pairz00_2220;

																								BgL_pairz00_2220 = BgL_fz00_26;
																								BgL_arg2123z00_1051 =
																									CAR(CDR(BgL_pairz00_2220));
																							}
																							BgL__andtest_1831z00_1047 =
																								BGl_morezd2precisezf3z21zz__match_descriptionsz00
																								(BgL_arg2121z00_1050,
																								BgL_arg2123z00_1051);
																						}
																						if (CBOOL
																							(BgL__andtest_1831z00_1047))
																							{	/* Match/descr.scm 288 */
																								obj_t BgL_arg2118z00_1048;

																								obj_t BgL_arg2119z00_1049;

																								{	/* Match/descr.scm 288 */
																									obj_t BgL_pairz00_2224;

																									BgL_pairz00_2224 =
																										BgL_descrz00_25;
																									BgL_arg2118z00_1048 =
																										CAR(CDR(CDR
																											(BgL_pairz00_2224)));
																								}
																								{	/* Match/descr.scm 288 */
																									obj_t BgL_pairz00_2230;

																									BgL_pairz00_2230 =
																										BgL_fz00_26;
																									BgL_arg2119z00_1049 =
																										CAR(CDR(CDR
																											(BgL_pairz00_2230)));
																								}
																								{
																									obj_t BgL_fz00_3752;

																									obj_t BgL_descrz00_3751;

																									BgL_descrz00_3751 =
																										BgL_arg2118z00_1048;
																									BgL_fz00_3752 =
																										BgL_arg2119z00_1049;
																									BgL_fz00_26 = BgL_fz00_3752;
																									BgL_descrz00_25 =
																										BgL_descrz00_3751;
																									goto
																										BGl_morezd2precisezf3z21zz__match_descriptionsz00;
																								}
																							}
																						else
																							{	/* Match/descr.scm 287 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Match/descr.scm 286 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Match/descr.scm 285 */
																				if (
																					(CAR(BgL_fz00_26) ==
																						BGl_symbol2746z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 290 */
																						return BFALSE;
																					}
																				else
																					{	/* Match/descr.scm 290 */
																						return BFALSE;
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



/* _more-precise? */
	obj_t BGl__morezd2precisezf3z21zz__match_descriptionsz00(obj_t
		BgL_envz00_3143, obj_t BgL_descrz00_3144, obj_t BgL_fz00_3145)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 260 */
			return
				BGl_morezd2precisezf3z21zz__match_descriptionsz00(BgL_descrz00_3144,
				BgL_fz00_3145);
		}
	}



/* compatible? */
	BGL_EXPORTED_DEF obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t
		BgL_descrz00_27, obj_t BgL_patternz00_28)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 312 */
			{	/* Match/descr.scm 313 */
				obj_t BgL_resz00_1069;

				if (
					(CAR(BgL_patternz00_28) ==
						BGl_symbol2732z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 316 */
						obj_t BgL__andtest_1832z00_1071;

						{	/* Match/descr.scm 316 */
							obj_t BgL_arg2147z00_1073;

							{	/* Match/descr.scm 316 */
								obj_t BgL_pairz00_2243;

								BgL_pairz00_2243 = BgL_patternz00_28;
								BgL_arg2147z00_1073 = CAR(CDR(BgL_pairz00_2243));
							}
							BgL__andtest_1832z00_1071 =
								BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_27,
								BgL_arg2147z00_1073);
						}
						if (CBOOL(BgL__andtest_1832z00_1071))
							{	/* Match/descr.scm 317 */
								obj_t BgL_arg2146z00_1072;

								{	/* Match/descr.scm 317 */
									obj_t BgL_pairz00_2247;

									BgL_pairz00_2247 = BgL_patternz00_28;
									BgL_arg2146z00_1072 = CAR(CDR(CDR(BgL_pairz00_2247)));
								}
								BgL_resz00_1069 =
									BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_27,
									BgL_arg2146z00_1072);
							}
						else
							{	/* Match/descr.scm 316 */
								BgL_resz00_1069 = BFALSE;
							}
					}
				else
					{	/* Match/descr.scm 315 */
						BgL_resz00_1069 =
							BGl_comparez00zz__match_descriptionsz00(BgL_descrz00_27,
							BGl_alphazd2convertzd2zz__match_descriptionsz00
							(BgL_patternz00_28), BGl_proc2772z00zz__match_descriptionsz00,
							BGl_proc2773z00zz__match_descriptionsz00,
							BGl_proc2774z00zz__match_descriptionsz00);
					}
				return BgL_resz00_1069;
			}
		}
	}



/* _compatible? */
	obj_t BGl__compatiblezf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3149,
		obj_t BgL_descrz00_3150, obj_t BgL_patternz00_3151)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 312 */
			return
				BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_descrz00_3150,
				BgL_patternz00_3151);
		}
	}



/* <anonymous:2154> */
	obj_t BGl_zc3anonymousza32154ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3152, obj_t BgL_xz00_3153)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 323 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2153> */
	obj_t BGl_zc3anonymousza32153ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3154, obj_t BgL_xz00_3155)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 322 */
			return BBOOL(((bool_t) 1));
		}
	}



/* <anonymous:2152> */
	obj_t BGl_zc3anonymousza32152ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3156, obj_t BgL_xz00_3157)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 321 */
			return BGl_symbol2775z00zz__match_descriptionsz00;
		}
	}



/* compare */
	obj_t BGl_comparez00zz__match_descriptionsz00(obj_t BgL_descrz00_29,
		obj_t BgL_patz00_30, obj_t BgL_envz00_31, obj_t BgL_kz00_32,
		obj_t BgL_za7za7_33)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 340 */
		BGl_comparez00zz__match_descriptionsz00:
			{	/* Match/descr.scm 343 */
				bool_t BgL_testz00_3774;

				{	/* Match/descr.scm 343 */
					bool_t BgL_testz00_3775;

					if (
						(CAR(BgL_descrz00_29) ==
							BGl_symbol2752z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 343 */
							BgL_testz00_3775 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 343 */
							BgL_testz00_3775 =
								(CAR(BgL_descrz00_29) ==
								BGl_symbol2754z00zz__match_descriptionsz00);
						}
					if (BgL_testz00_3775)
						{	/* Match/descr.scm 343 */
							BgL_testz00_3774 = ((bool_t) 1);
						}
					else
						{	/* Match/descr.scm 344 */
							bool_t BgL_testz00_3781;

							if (
								(CAR(BgL_patz00_30) ==
									BGl_symbol2752z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 344 */
									BgL_testz00_3781 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 344 */
									BgL_testz00_3781 =
										(CAR(BgL_patz00_30) ==
										BGl_symbol2754z00zz__match_descriptionsz00);
								}
							if (BgL_testz00_3781)
								{	/* Match/descr.scm 344 */
									BgL_testz00_3774 = ((bool_t) 1);
								}
							else
								{	/* Match/descr.scm 344 */
									if (
										(CAR(BgL_patz00_30) ==
											BGl_symbol2728z00zz__match_descriptionsz00))
										{	/* Match/descr.scm 345 */
											BgL_testz00_3774 = ((bool_t) 1);
										}
									else
										{	/* Match/descr.scm 345 */
											if (
												(CAR(BgL_patz00_30) ==
													BGl_symbol2730z00zz__match_descriptionsz00))
												{	/* Match/descr.scm 345 */
													BgL_testz00_3774 = ((bool_t) 1);
												}
											else
												{	/* Match/descr.scm 345 */
													if (
														(CAR(BgL_patz00_30) ==
															BGl_symbol2777z00zz__match_descriptionsz00))
														{	/* Match/descr.scm 345 */
															BgL_testz00_3774 = ((bool_t) 1);
														}
													else
														{	/* Match/descr.scm 345 */
															if (
																(CAR(BgL_patz00_30) ==
																	BGl_symbol2763z00zz__match_descriptionsz00))
																{	/* Match/descr.scm 346 */
																	BgL_testz00_3774 = ((bool_t) 1);
																}
															else
																{	/* Match/descr.scm 346 */
																	if (
																		(CAR(BgL_patz00_30) ==
																			BGl_symbol2754z00zz__match_descriptionsz00))
																		{	/* Match/descr.scm 347 */
																			BgL_testz00_3774 = ((bool_t) 1);
																		}
																	else
																		{	/* Match/descr.scm 347 */
																			if (
																				(CAR(BgL_patz00_30) ==
																					BGl_symbol2742z00zz__match_descriptionsz00))
																				{	/* Match/descr.scm 348 */
																					BgL_testz00_3774 = ((bool_t) 1);
																				}
																			else
																				{	/* Match/descr.scm 348 */
																					BgL_testz00_3774 =
																						(CAR(BgL_patz00_30) ==
																						BGl_symbol2740z00zz__match_descriptionsz00);
																				}
																		}
																}
														}
												}
										}
								}
						}
				}
				if (BgL_testz00_3774)
					{	/* Match/descr.scm 343 */
						return
							PROCEDURE_ENTRY(BgL_kz00_32) (BgL_kz00_32, BgL_envz00_31, BEOA);
					}
				else
					{	/* Match/descr.scm 343 */
						if (
							(CAR(BgL_patz00_30) ==
								BGl_symbol2732z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 353 */
								obj_t BgL_arg2157z00_1089;

								{	/* Match/descr.scm 353 */
									obj_t BgL_pairz00_2301;

									BgL_pairz00_2301 = BgL_patz00_30;
									BgL_arg2157z00_1089 = CAR(CDR(BgL_pairz00_2301));
								}
								{	/* Match/descr.scm 354 */
									obj_t BgL_zc3anonymousza32159ze3z83_3158;

									BgL_zc3anonymousza32159ze3z83_3158 =
										make_fx_procedure
										(BGl_zc3anonymousza32159ze3z83zz__match_descriptionsz00,
										(int) (((long) 1)), (int) (((long) 4)));
									PROCEDURE_SET(BgL_zc3anonymousza32159ze3z83_3158,
										(int) (((long) 0)), BgL_patz00_30);
									PROCEDURE_SET(BgL_zc3anonymousza32159ze3z83_3158,
										(int) (((long) 1)), BgL_descrz00_29);
									PROCEDURE_SET(BgL_zc3anonymousza32159ze3z83_3158,
										(int) (((long) 2)), BgL_kz00_32);
									PROCEDURE_SET(BgL_zc3anonymousza32159ze3z83_3158,
										(int) (((long) 3)), BgL_za7za7_33);
									{
										obj_t BgL_kz00_3826;

										obj_t BgL_patz00_3825;

										BgL_patz00_3825 = BgL_arg2157z00_1089;
										BgL_kz00_3826 = BgL_zc3anonymousza32159ze3z83_3158;
										BgL_kz00_32 = BgL_kz00_3826;
										BgL_patz00_30 = BgL_patz00_3825;
										goto BGl_comparez00zz__match_descriptionsz00;
									}
								}
							}
						else
							{	/* Match/descr.scm 352 */
								if (
									(CAR(BgL_patz00_30) ==
										BGl_symbol2735z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 357 */
										if (BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00
											(BgL_descrz00_29))
											{	/* Match/descr.scm 359 */
												obj_t BgL_arg2163z00_1097;

												obj_t BgL_arg2164z00_1098;

												if (
													(CAR(BgL_descrz00_29) ==
														BGl_symbol2735z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 359 */
														obj_t BgL_pairz00_2321;

														BgL_pairz00_2321 = BgL_descrz00_29;
														BgL_arg2163z00_1097 = CAR(CDR(BgL_pairz00_2321));
													}
												else
													{	/* Match/descr.scm 359 */
														BgL_arg2163z00_1097 =
															BGl_list2762z00zz__match_descriptionsz00;
													}
												{	/* Match/descr.scm 359 */
													obj_t BgL_pairz00_2325;

													BgL_pairz00_2325 = BgL_patz00_30;
													BgL_arg2164z00_1098 = CAR(CDR(BgL_pairz00_2325));
												}
												{	/* Match/descr.scm 361 */
													obj_t BgL_zc3anonymousza32166ze3z83_3159;

													BgL_zc3anonymousza32166ze3z83_3159 =
														make_fx_procedure
														(BGl_zc3anonymousza32166ze3z83zz__match_descriptionsz00,
														(int) (((long) 1)), (int) (((long) 4)));
													PROCEDURE_SET(BgL_zc3anonymousza32166ze3z83_3159,
														(int) (((long) 0)), BgL_descrz00_29);
													PROCEDURE_SET(BgL_zc3anonymousza32166ze3z83_3159,
														(int) (((long) 1)), BgL_patz00_30);
													PROCEDURE_SET(BgL_zc3anonymousza32166ze3z83_3159,
														(int) (((long) 2)), BgL_kz00_32);
													PROCEDURE_SET(BgL_zc3anonymousza32166ze3z83_3159,
														(int) (((long) 3)), BgL_za7za7_33);
													{
														obj_t BgL_kz00_3852;

														obj_t BgL_patz00_3851;

														obj_t BgL_descrz00_3850;

														BgL_descrz00_3850 = BgL_arg2163z00_1097;
														BgL_patz00_3851 = BgL_arg2164z00_1098;
														BgL_kz00_3852 = BgL_zc3anonymousza32166ze3z83_3159;
														BgL_kz00_32 = BgL_kz00_3852;
														BgL_patz00_30 = BgL_patz00_3851;
														BgL_descrz00_29 = BgL_descrz00_3850;
														goto BGl_comparez00zz__match_descriptionsz00;
													}
												}
											}
										else
											{	/* Match/descr.scm 358 */
												return
													PROCEDURE_ENTRY(BgL_za7za7_33) (BgL_za7za7_33,
													BgL_envz00_31, BEOA);
											}
									}
								else
									{	/* Match/descr.scm 357 */
										if (
											(CAR(BgL_patz00_30) ==
												BGl_symbol2765z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 369 */
												obj_t BgL_arg2170z00_1106;

												{	/* Match/descr.scm 369 */
													obj_t BgL_pairz00_2352;

													BgL_pairz00_2352 = BgL_patz00_30;
													BgL_arg2170z00_1106 = CAR(CDR(BgL_pairz00_2352));
												}
												return
													BGl_matchz00zz__match_descriptionsz00(BgL_descrz00_29,
													BgL_arg2170z00_1106, BgL_envz00_31, BgL_kz00_32,
													BgL_za7za7_33);
											}
										else
											{	/* Match/descr.scm 371 */
												bool_t BgL_testz00_3861;

												if (
													(CAR(BgL_descrz00_29) ==
														BGl_symbol2744z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 371 */
														BgL_testz00_3861 =
															(CAR(BgL_patz00_30) ==
															BGl_symbol2744z00zz__match_descriptionsz00);
													}
												else
													{	/* Match/descr.scm 371 */
														BgL_testz00_3861 = ((bool_t) 0);
													}
												if (BgL_testz00_3861)
													{	/* Match/descr.scm 372 */
														bool_t BgL_testz00_3867;

														{	/* Match/descr.scm 372 */
															obj_t BgL_arg2203z00_1138;

															obj_t BgL_arg2204z00_1139;

															{	/* Match/descr.scm 372 */
																obj_t BgL_arg2205z00_1140;

																{	/* Match/descr.scm 372 */
																	obj_t BgL_pairz00_2364;

																	BgL_pairz00_2364 = BgL_descrz00_29;
																	BgL_arg2205z00_1140 =
																		CAR(CDR(BgL_pairz00_2364));
																}
																BgL_arg2203z00_1138 =
																	PROCEDURE_ENTRY(BgL_envz00_31) (BgL_envz00_31,
																	BgL_arg2205z00_1140, BEOA);
															}
															BgL_arg2204z00_1139 =
																BGl_symbol2775z00zz__match_descriptionsz00;
															BgL_testz00_3867 =
																(BgL_arg2203z00_1138 == BgL_arg2204z00_1139);
														}
														if (BgL_testz00_3867)
															{	/* Match/descr.scm 373 */
																bool_t BgL_testz00_3873;

																{	/* Match/descr.scm 373 */
																	obj_t BgL_arg2186z00_1123;

																	obj_t BgL_arg2187z00_1124;

																	{	/* Match/descr.scm 373 */
																		obj_t BgL_arg2188z00_1125;

																		{	/* Match/descr.scm 373 */
																			obj_t BgL_pairz00_2368;

																			BgL_pairz00_2368 = BgL_patz00_30;
																			BgL_arg2188z00_1125 =
																				CAR(CDR(BgL_pairz00_2368));
																		}
																		BgL_arg2186z00_1123 =
																			PROCEDURE_ENTRY(BgL_envz00_31)
																			(BgL_envz00_31, BgL_arg2188z00_1125,
																			BEOA);
																	}
																	BgL_arg2187z00_1124 =
																		BGl_symbol2775z00zz__match_descriptionsz00;
																	BgL_testz00_3873 =
																		(BgL_arg2186z00_1123 ==
																		BgL_arg2187z00_1124);
																}
																if (BgL_testz00_3873)
																	{	/* Match/descr.scm 374 */
																		obj_t BgL_sz00_1110;

																		{	/* Match/descr.scm 374 */
																			obj_t BgL_arg2178z00_1115;

																			obj_t BgL_arg2179z00_1116;

																			BgL_arg2178z00_1115 =
																				BGl_symbol2744z00zz__match_descriptionsz00;
																			BgL_arg2179z00_1116 =
																				PROCEDURE_ENTRY
																				(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																				(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																				BGl_string2779z00zz__match_descriptionsz00,
																				BEOA);
																			{	/* Match/descr.scm 374 */
																				obj_t BgL_list2180z00_1117;

																				{	/* Match/descr.scm 374 */
																					obj_t BgL_arg2181z00_1118;

																					BgL_arg2181z00_1118 =
																						MAKE_PAIR(BgL_arg2179z00_1116,
																						BNIL);
																					BgL_list2180z00_1117 =
																						MAKE_PAIR(BgL_arg2178z00_1115,
																						BgL_arg2181z00_1118);
																				}
																				BgL_sz00_1110 = BgL_list2180z00_1117;
																			}
																		}
																		{	/* Match/descr.scm 375 */
																			obj_t BgL_arg2174z00_1111;

																			{	/* Match/descr.scm 375 */
																				obj_t BgL_arg2175z00_1112;

																				obj_t BgL_arg2176z00_1113;

																				{	/* Match/descr.scm 375 */
																					obj_t BgL_ptz00_2379;

																					{	/* Match/descr.scm 375 */
																						obj_t BgL_pairz00_2374;

																						BgL_pairz00_2374 = BgL_descrz00_29;
																						BgL_ptz00_2379 =
																							CAR(CDR(BgL_pairz00_2374));
																					}
																					{	/* Match/descr.scm 375 */
																						obj_t
																							BgL_zc3anonymousza31963ze3z83_3161;
																						BgL_zc3anonymousza31963ze3z83_3161 =
																							make_fx_procedure
																							(BGl_zc3anonymousza31963ze3_2720z83zz__match_descriptionsz00,
																							(int) (((long) 1)),
																							(int) (((long) 3)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3161,
																							(int) (((long) 0)),
																							BgL_envz00_31);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3161,
																							(int) (((long) 1)),
																							BgL_sz00_1110);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3161,
																							(int) (((long) 2)),
																							BgL_ptz00_2379);
																						BgL_arg2175z00_1112 =
																							BgL_zc3anonymousza31963ze3z83_3161;
																				}}
																				{	/* Match/descr.scm 376 */
																					obj_t BgL_pairz00_2385;

																					BgL_pairz00_2385 = BgL_patz00_30;
																					BgL_arg2176z00_1113 =
																						CAR(CDR(BgL_pairz00_2385));
																				}
																				{	/* Match/descr.scm 375 */
																					obj_t
																						BgL_zc3anonymousza31963ze3z83_3160;
																					BgL_zc3anonymousza31963ze3z83_3160 =
																						make_fx_procedure
																						(BGl_zc3anonymousza31963ze3z83zz__match_descriptionsz00,
																						(int) (((long) 1)),
																						(int) (((long) 3)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31963ze3z83_3160,
																						(int) (((long) 0)),
																						BgL_arg2175z00_1112);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31963ze3z83_3160,
																						(int) (((long) 1)), BgL_sz00_1110);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza31963ze3z83_3160,
																						(int) (((long) 2)),
																						BgL_arg2176z00_1113);
																					BgL_arg2174z00_1111 =
																						BgL_zc3anonymousza31963ze3z83_3160;
																			}}
																			return
																				PROCEDURE_ENTRY(BgL_kz00_32)
																				(BgL_kz00_32, BgL_arg2174z00_1111,
																				BEOA);
																		}
																	}
																else
																	{	/* Match/descr.scm 378 */
																		obj_t BgL_arg2182z00_1119;

																		{	/* Match/descr.scm 378 */
																			obj_t BgL_arg2183z00_1120;

																			obj_t BgL_arg2184z00_1121;

																			{	/* Match/descr.scm 378 */
																				obj_t BgL_pairz00_2396;

																				BgL_pairz00_2396 = BgL_descrz00_29;
																				BgL_arg2183z00_1120 =
																					CAR(CDR(BgL_pairz00_2396));
																			}
																			{	/* Match/descr.scm 378 */
																				obj_t BgL_arg2185z00_1122;

																				{	/* Match/descr.scm 378 */
																					obj_t BgL_pairz00_2400;

																					BgL_pairz00_2400 = BgL_patz00_30;
																					BgL_arg2185z00_1122 =
																						CAR(CDR(BgL_pairz00_2400));
																				}
																				BgL_arg2184z00_1121 =
																					PROCEDURE_ENTRY(BgL_envz00_31)
																					(BgL_envz00_31, BgL_arg2185z00_1122,
																					BEOA);
																			}
																			{	/* Match/descr.scm 378 */
																				obj_t
																					BgL_zc3anonymousza31963ze3z83_3162;
																				BgL_zc3anonymousza31963ze3z83_3162 =
																					make_fx_procedure
																					(BGl_zc3anonymousza31963ze3_2721z83zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3162,
																					(int) (((long) 0)), BgL_envz00_31);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3162,
																					(int) (((long) 1)),
																					BgL_arg2184z00_1121);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3162,
																					(int) (((long) 2)),
																					BgL_arg2183z00_1120);
																				BgL_arg2182z00_1119 =
																					BgL_zc3anonymousza31963ze3z83_3162;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_32) (BgL_kz00_32,
																			BgL_arg2182z00_1119, BEOA);
																	}
															}
														else
															{	/* Match/descr.scm 379 */
																bool_t BgL_testz00_3924;

																{	/* Match/descr.scm 379 */
																	obj_t BgL_arg2198z00_1135;

																	obj_t BgL_arg2199z00_1136;

																	{	/* Match/descr.scm 379 */
																		obj_t BgL_arg2200z00_1137;

																		{	/* Match/descr.scm 379 */
																			obj_t BgL_pairz00_2411;

																			BgL_pairz00_2411 = BgL_patz00_30;
																			BgL_arg2200z00_1137 =
																				CAR(CDR(BgL_pairz00_2411));
																		}
																		BgL_arg2198z00_1135 =
																			PROCEDURE_ENTRY(BgL_envz00_31)
																			(BgL_envz00_31, BgL_arg2200z00_1137,
																			BEOA);
																	}
																	BgL_arg2199z00_1136 =
																		BGl_symbol2775z00zz__match_descriptionsz00;
																	BgL_testz00_3924 =
																		(BgL_arg2198z00_1135 ==
																		BgL_arg2199z00_1136);
																}
																if (BgL_testz00_3924)
																	{	/* Match/descr.scm 380 */
																		obj_t BgL_arg2190z00_1127;

																		{	/* Match/descr.scm 380 */
																			obj_t BgL_arg2191z00_1128;

																			obj_t BgL_arg2192z00_1129;

																			{	/* Match/descr.scm 380 */
																				obj_t BgL_pairz00_2415;

																				BgL_pairz00_2415 = BgL_patz00_30;
																				BgL_arg2191z00_1128 =
																					CAR(CDR(BgL_pairz00_2415));
																			}
																			{	/* Match/descr.scm 380 */
																				obj_t BgL_arg2193z00_1130;

																				{	/* Match/descr.scm 380 */
																					obj_t BgL_pairz00_2419;

																					BgL_pairz00_2419 = BgL_descrz00_29;
																					BgL_arg2193z00_1130 =
																						CAR(CDR(BgL_pairz00_2419));
																				}
																				BgL_arg2192z00_1129 =
																					PROCEDURE_ENTRY(BgL_envz00_31)
																					(BgL_envz00_31, BgL_arg2193z00_1130,
																					BEOA);
																			}
																			{	/* Match/descr.scm 380 */
																				obj_t
																					BgL_zc3anonymousza31963ze3z83_3163;
																				BgL_zc3anonymousza31963ze3z83_3163 =
																					make_fx_procedure
																					(BGl_zc3anonymousza31963ze3_2722z83zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3163,
																					(int) (((long) 0)), BgL_envz00_31);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3163,
																					(int) (((long) 1)),
																					BgL_arg2192z00_1129);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3163,
																					(int) (((long) 2)),
																					BgL_arg2191z00_1128);
																				BgL_arg2190z00_1127 =
																					BgL_zc3anonymousza31963ze3z83_3163;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_32) (BgL_kz00_32,
																			BgL_arg2190z00_1127, BEOA);
																	}
																else
																	{	/* Match/descr.scm 381 */
																		obj_t BgL_arg2194z00_1131;

																		obj_t BgL_arg2195z00_1132;

																		{	/* Match/descr.scm 381 */
																			obj_t BgL_arg2196z00_1133;

																			{	/* Match/descr.scm 381 */
																				obj_t BgL_pairz00_2430;

																				BgL_pairz00_2430 = BgL_descrz00_29;
																				BgL_arg2196z00_1133 =
																					CAR(CDR(BgL_pairz00_2430));
																			}
																			BgL_arg2194z00_1131 =
																				PROCEDURE_ENTRY(BgL_envz00_31)
																				(BgL_envz00_31, BgL_arg2196z00_1133,
																				BEOA);
																		}
																		{	/* Match/descr.scm 381 */
																			obj_t BgL_arg2197z00_1134;

																			{	/* Match/descr.scm 381 */
																				obj_t BgL_pairz00_2434;

																				BgL_pairz00_2434 = BgL_patz00_30;
																				BgL_arg2197z00_1134 =
																					CAR(CDR(BgL_pairz00_2434));
																			}
																			BgL_arg2195z00_1132 =
																				PROCEDURE_ENTRY(BgL_envz00_31)
																				(BgL_envz00_31, BgL_arg2197z00_1134,
																				BEOA);
																		}
																		{
																			obj_t BgL_patz00_3956;

																			obj_t BgL_descrz00_3955;

																			BgL_descrz00_3955 = BgL_arg2194z00_1131;
																			BgL_patz00_3956 = BgL_arg2195z00_1132;
																			BgL_patz00_30 = BgL_patz00_3956;
																			BgL_descrz00_29 = BgL_descrz00_3955;
																			goto
																				BGl_comparez00zz__match_descriptionsz00;
																		}
																	}
															}
													}
												else
													{	/* Match/descr.scm 371 */
														if (
															(CAR(BgL_patz00_30) ==
																BGl_symbol2744z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 384 */
																bool_t BgL_testz00_3960;

																{	/* Match/descr.scm 384 */
																	obj_t BgL_arg2212z00_1147;

																	obj_t BgL_arg2213z00_1148;

																	{	/* Match/descr.scm 384 */
																		obj_t BgL_arg2214z00_1149;

																		{	/* Match/descr.scm 384 */
																			obj_t BgL_pairz00_2442;

																			BgL_pairz00_2442 = BgL_patz00_30;
																			BgL_arg2214z00_1149 =
																				CAR(CDR(BgL_pairz00_2442));
																		}
																		BgL_arg2212z00_1147 =
																			PROCEDURE_ENTRY(BgL_envz00_31)
																			(BgL_envz00_31, BgL_arg2214z00_1149,
																			BEOA);
																	}
																	BgL_arg2213z00_1148 =
																		BGl_symbol2775z00zz__match_descriptionsz00;
																	BgL_testz00_3960 =
																		(BgL_arg2212z00_1147 ==
																		BgL_arg2213z00_1148);
																}
																if (BgL_testz00_3960)
																	{	/* Match/descr.scm 385 */
																		obj_t BgL_arg2208z00_1143;

																		{	/* Match/descr.scm 385 */
																			obj_t BgL_ptz00_2451;

																			{	/* Match/descr.scm 385 */
																				obj_t BgL_pairz00_2446;

																				BgL_pairz00_2446 = BgL_patz00_30;
																				BgL_ptz00_2451 =
																					CAR(CDR(BgL_pairz00_2446));
																			}
																			{	/* Match/descr.scm 385 */
																				obj_t
																					BgL_zc3anonymousza31963ze3z83_3164;
																				BgL_zc3anonymousza31963ze3z83_3164 =
																					make_fx_procedure
																					(BGl_zc3anonymousza31963ze3_2723z83zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3164,
																					(int) (((long) 0)), BgL_envz00_31);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3164,
																					(int) (((long) 1)), BgL_descrz00_29);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza31963ze3z83_3164,
																					(int) (((long) 2)), BgL_ptz00_2451);
																				BgL_arg2208z00_1143 =
																					BgL_zc3anonymousza31963ze3z83_3164;
																		}}
																		return
																			PROCEDURE_ENTRY(BgL_kz00_32) (BgL_kz00_32,
																			BgL_arg2208z00_1143, BEOA);
																	}
																else
																	{	/* Match/descr.scm 386 */
																		obj_t BgL_arg2210z00_1145;

																		{	/* Match/descr.scm 386 */
																			obj_t BgL_arg2211z00_1146;

																			{	/* Match/descr.scm 386 */
																				obj_t BgL_pairz00_2457;

																				BgL_pairz00_2457 = BgL_patz00_30;
																				BgL_arg2211z00_1146 =
																					CAR(CDR(BgL_pairz00_2457));
																			}
																			BgL_arg2210z00_1145 =
																				PROCEDURE_ENTRY(BgL_envz00_31)
																				(BgL_envz00_31, BgL_arg2211z00_1146,
																				BEOA);
																		}
																		{
																			obj_t BgL_patz00_3983;

																			BgL_patz00_3983 = BgL_arg2210z00_1145;
																			BgL_patz00_30 = BgL_patz00_3983;
																			goto
																				BGl_comparez00zz__match_descriptionsz00;
																		}
																	}
															}
														else
															{	/* Match/descr.scm 383 */
																if (
																	(CAR(BgL_descrz00_29) ==
																		BGl_symbol2744z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 389 */
																		bool_t BgL_testz00_3987;

																		{	/* Match/descr.scm 389 */
																			obj_t BgL_arg2226z00_1156;

																			obj_t BgL_arg2227z00_1157;

																			{	/* Match/descr.scm 389 */
																				obj_t BgL_arg2233z00_1158;

																				{	/* Match/descr.scm 389 */
																					obj_t BgL_pairz00_2465;

																					BgL_pairz00_2465 = BgL_descrz00_29;
																					BgL_arg2233z00_1158 =
																						CAR(CDR(BgL_pairz00_2465));
																				}
																				BgL_arg2226z00_1156 =
																					PROCEDURE_ENTRY(BgL_envz00_31)
																					(BgL_envz00_31, BgL_arg2233z00_1158,
																					BEOA);
																			}
																			BgL_arg2227z00_1157 =
																				BGl_symbol2775z00zz__match_descriptionsz00;
																			BgL_testz00_3987 =
																				(BgL_arg2226z00_1156 ==
																				BgL_arg2227z00_1157);
																		}
																		if (BgL_testz00_3987)
																			{	/* Match/descr.scm 390 */
																				obj_t BgL_arg2217z00_1152;

																				{	/* Match/descr.scm 390 */
																					obj_t BgL_ptz00_2474;

																					{	/* Match/descr.scm 390 */
																						obj_t BgL_pairz00_2469;

																						BgL_pairz00_2469 = BgL_descrz00_29;
																						BgL_ptz00_2474 =
																							CAR(CDR(BgL_pairz00_2469));
																					}
																					{	/* Match/descr.scm 390 */
																						obj_t
																							BgL_zc3anonymousza31963ze3z83_3165;
																						BgL_zc3anonymousza31963ze3z83_3165 =
																							make_fx_procedure
																							(BGl_zc3anonymousza31963ze3_2724z83zz__match_descriptionsz00,
																							(int) (((long) 1)),
																							(int) (((long) 3)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3165,
																							(int) (((long) 0)),
																							BgL_envz00_31);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3165,
																							(int) (((long) 1)),
																							BgL_patz00_30);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza31963ze3z83_3165,
																							(int) (((long) 2)),
																							BgL_ptz00_2474);
																						BgL_arg2217z00_1152 =
																							BgL_zc3anonymousza31963ze3z83_3165;
																				}}
																				return
																					PROCEDURE_ENTRY(BgL_kz00_32)
																					(BgL_kz00_32, BgL_arg2217z00_1152,
																					BEOA);
																			}
																		else
																			{	/* Match/descr.scm 391 */
																				obj_t BgL_arg2223z00_1154;

																				{	/* Match/descr.scm 391 */
																					obj_t BgL_arg2224z00_1155;

																					{	/* Match/descr.scm 391 */
																						obj_t BgL_pairz00_2480;

																						BgL_pairz00_2480 = BgL_descrz00_29;
																						BgL_arg2224z00_1155 =
																							CAR(CDR(BgL_pairz00_2480));
																					}
																					BgL_arg2223z00_1154 =
																						PROCEDURE_ENTRY(BgL_envz00_31)
																						(BgL_envz00_31, BgL_arg2224z00_1155,
																						BEOA);
																				}
																				{
																					obj_t BgL_patz00_4010;

																					BgL_patz00_4010 = BgL_arg2223z00_1154;
																					BgL_patz00_30 = BgL_patz00_4010;
																					goto
																						BGl_comparez00zz__match_descriptionsz00;
																				}
																			}
																	}
																else
																	{	/* Match/descr.scm 388 */
																		if (
																			(CAR(BgL_patz00_30) ==
																				BGl_symbol2760z00zz__match_descriptionsz00))
																			{	/* Match/descr.scm 393 */
																				bool_t BgL_testz00_4014;

																				{	/* Match/descr.scm 393 */
																					obj_t BgL_arg2236z00_1161;

																					{	/* Match/descr.scm 393 */
																						obj_t BgL_pairz00_2488;

																						BgL_pairz00_2488 = BgL_patz00_30;
																						BgL_arg2236z00_1161 =
																							CAR(CDR(BgL_pairz00_2488));
																					}
																					BgL_testz00_4014 =
																						CBOOL
																						(BGl_morezd2precisezf3z21zz__match_descriptionsz00
																						(BgL_arg2236z00_1161,
																							BgL_descrz00_29));
																				}
																				if (BgL_testz00_4014)
																					{	/* Match/descr.scm 393 */
																						return
																							PROCEDURE_ENTRY(BgL_za7za7_33)
																							(BgL_za7za7_33, BgL_envz00_31,
																							BEOA);
																					}
																				else
																					{	/* Match/descr.scm 393 */
																						return
																							PROCEDURE_ENTRY(BgL_kz00_32)
																							(BgL_kz00_32, BgL_envz00_31,
																							BEOA);
																					}
																			}
																		else
																			{	/* Match/descr.scm 393 */
																				if (
																					(CAR(BgL_patz00_30) ==
																						BGl_symbol2746z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 398 */
																						bool_t BgL_testz00_4026;

																						if (
																							(CAR(BgL_descrz00_29) ==
																								BGl_symbol2752z00zz__match_descriptionsz00))
																							{	/* Match/descr.scm 398 */
																								BgL_testz00_4026 = ((bool_t) 1);
																							}
																						else
																							{	/* Match/descr.scm 398 */
																								BgL_testz00_4026 =
																									(CAR(BgL_descrz00_29) ==
																									BGl_symbol2754z00zz__match_descriptionsz00);
																							}
																						if (BgL_testz00_4026)
																							{	/* Match/descr.scm 398 */
																								return BTRUE;
																							}
																						else
																							{	/* Match/descr.scm 398 */
																								if (
																									(CAR(BgL_descrz00_29) ==
																										BGl_symbol2780z00zz__match_descriptionsz00))
																									{	/* Match/descr.scm 400 */
																										return
																											BGl_matchz00zz__match_descriptionsz00
																											(BgL_patz00_30,
																											BgL_descrz00_29,
																											BgL_envz00_31,
																											BgL_kz00_32,
																											BgL_za7za7_33);
																									}
																								else
																									{	/* Match/descr.scm 400 */
																										return BFALSE;
																									}
																							}
																					}
																				else
																					{	/* Match/descr.scm 397 */
																						return
																							PROCEDURE_ENTRY(BgL_kz00_32)
																							(BgL_kz00_32, BgL_envz00_31,
																							BEOA);
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



/* <anonymous:2159> */
	obj_t BGl_zc3anonymousza32159ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3166, obj_t BgL_envz00_3171)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 354 */
			{	/* Match/descr.scm 354 */
				obj_t BgL_patz00_3167;

				obj_t BgL_descrz00_3168;

				obj_t BgL_kz00_3169;

				obj_t BgL_za7za7_3170;

				BgL_patz00_3167 = PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 0)));
				BgL_descrz00_3168 = PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 1)));
				BgL_kz00_3169 = PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 2)));
				BgL_za7za7_3170 = PROCEDURE_REF(BgL_envz00_3166, (int) (((long) 3)));
				{
					obj_t BgL_envz00_1091;

					BgL_envz00_1091 = BgL_envz00_3171;
					{	/* Match/descr.scm 354 */
						obj_t BgL_arg2160z00_2305;

						{	/* Match/descr.scm 354 */
							obj_t BgL_pairz00_2306;

							BgL_pairz00_2306 = BgL_patz00_3167;
							BgL_arg2160z00_2305 = CAR(CDR(CDR(BgL_pairz00_2306)));
						}
						return
							BGl_comparez00zz__match_descriptionsz00(BgL_descrz00_3168,
							BgL_arg2160z00_2305, BgL_envz00_1091, BgL_kz00_3169,
							BgL_za7za7_3170);
					}
				}
			}
		}
	}



/* <anonymous:2166> */
	obj_t BGl_zc3anonymousza32166ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3172, obj_t BgL_envz00_3177)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 360 */
			{	/* Match/descr.scm 361 */
				obj_t BgL_descrz00_3173;

				obj_t BgL_patz00_3174;

				obj_t BgL_kz00_3175;

				obj_t BgL_za7za7_3176;

				BgL_descrz00_3173 = PROCEDURE_REF(BgL_envz00_3172, (int) (((long) 0)));
				BgL_patz00_3174 = PROCEDURE_REF(BgL_envz00_3172, (int) (((long) 1)));
				BgL_kz00_3175 = PROCEDURE_REF(BgL_envz00_3172, (int) (((long) 2)));
				BgL_za7za7_3176 = PROCEDURE_REF(BgL_envz00_3172, (int) (((long) 3)));
				{
					obj_t BgL_envz00_1100;

					BgL_envz00_1100 = BgL_envz00_3177;
					{	/* Match/descr.scm 361 */
						obj_t BgL_arg2167z00_2329;

						obj_t BgL_arg2168z00_2330;

						if (
							(CAR(BgL_descrz00_3173) ==
								BGl_symbol2735z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 361 */
								obj_t BgL_pairz00_2336;

								BgL_pairz00_2336 = BgL_descrz00_3173;
								BgL_arg2167z00_2329 = CAR(CDR(CDR(BgL_pairz00_2336)));
							}
						else
							{	/* Match/descr.scm 361 */
								BgL_arg2167z00_2329 = BGl_list2762z00zz__match_descriptionsz00;
							}
						{	/* Match/descr.scm 362 */
							obj_t BgL_pairz00_2342;

							BgL_pairz00_2342 = BgL_patz00_3174;
							BgL_arg2168z00_2330 = CAR(CDR(CDR(BgL_pairz00_2342)));
						}
						return
							BGl_comparez00zz__match_descriptionsz00(BgL_arg2167z00_2329,
							BgL_arg2168z00_2330, BgL_envz00_1100, BgL_kz00_3175,
							BgL_za7za7_3176);
					}
				}
			}
		}
	}



/* <anonymous:1963> */
	obj_t BGl_zc3anonymousza31963ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3178, obj_t BgL_xz00_3182)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 375 */
				obj_t BgL_fnz00_3179;

				obj_t BgL_imz00_3180;

				obj_t BgL_ptz00_3181;

				BgL_fnz00_3179 = PROCEDURE_REF(BgL_envz00_3178, (int) (((long) 0)));
				BgL_imz00_3180 = PROCEDURE_REF(BgL_envz00_3178, (int) (((long) 1)));
				BgL_ptz00_3181 = PROCEDURE_REF(BgL_envz00_3178, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2393;

					BgL_xz00_2393 = BgL_xz00_3182;
					if ((BgL_xz00_2393 == BgL_ptz00_3181))
						{	/* Match/descr.scm 375 */
							return BgL_imz00_3180;
						}
					else
						{	/* Match/descr.scm 375 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3179) (BgL_fnz00_3179, BgL_xz00_2393,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1963>_2720 */
	obj_t BGl_zc3anonymousza31963ze3_2720z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3183, obj_t BgL_xz00_3187)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 375 */
				obj_t BgL_fnz00_3184;

				obj_t BgL_imz00_3185;

				obj_t BgL_ptz00_3186;

				BgL_fnz00_3184 = PROCEDURE_REF(BgL_envz00_3183, (int) (((long) 0)));
				BgL_imz00_3185 = PROCEDURE_REF(BgL_envz00_3183, (int) (((long) 1)));
				BgL_ptz00_3186 = PROCEDURE_REF(BgL_envz00_3183, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2382;

					BgL_xz00_2382 = BgL_xz00_3187;
					if ((BgL_xz00_2382 == BgL_ptz00_3186))
						{	/* Match/descr.scm 375 */
							return BgL_imz00_3185;
						}
					else
						{	/* Match/descr.scm 375 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3184) (BgL_fnz00_3184, BgL_xz00_2382,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1963>_2721 */
	obj_t BGl_zc3anonymousza31963ze3_2721z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3188, obj_t BgL_xz00_3192)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 378 */
				obj_t BgL_fnz00_3189;

				obj_t BgL_imz00_3190;

				obj_t BgL_ptz00_3191;

				BgL_fnz00_3189 = PROCEDURE_REF(BgL_envz00_3188, (int) (((long) 0)));
				BgL_imz00_3190 = PROCEDURE_REF(BgL_envz00_3188, (int) (((long) 1)));
				BgL_ptz00_3191 = PROCEDURE_REF(BgL_envz00_3188, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2408;

					BgL_xz00_2408 = BgL_xz00_3192;
					if ((BgL_xz00_2408 == BgL_ptz00_3191))
						{	/* Match/descr.scm 378 */
							return BgL_imz00_3190;
						}
					else
						{	/* Match/descr.scm 378 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3189) (BgL_fnz00_3189, BgL_xz00_2408,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1963>_2722 */
	obj_t BGl_zc3anonymousza31963ze3_2722z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3193, obj_t BgL_xz00_3197)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 380 */
				obj_t BgL_fnz00_3194;

				obj_t BgL_imz00_3195;

				obj_t BgL_ptz00_3196;

				BgL_fnz00_3194 = PROCEDURE_REF(BgL_envz00_3193, (int) (((long) 0)));
				BgL_imz00_3195 = PROCEDURE_REF(BgL_envz00_3193, (int) (((long) 1)));
				BgL_ptz00_3196 = PROCEDURE_REF(BgL_envz00_3193, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2427;

					BgL_xz00_2427 = BgL_xz00_3197;
					if ((BgL_xz00_2427 == BgL_ptz00_3196))
						{	/* Match/descr.scm 380 */
							return BgL_imz00_3195;
						}
					else
						{	/* Match/descr.scm 380 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3194) (BgL_fnz00_3194, BgL_xz00_2427,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1963>_2723 */
	obj_t BGl_zc3anonymousza31963ze3_2723z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3198, obj_t BgL_xz00_3202)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 385 */
				obj_t BgL_fnz00_3199;

				obj_t BgL_imz00_3200;

				obj_t BgL_ptz00_3201;

				BgL_fnz00_3199 = PROCEDURE_REF(BgL_envz00_3198, (int) (((long) 0)));
				BgL_imz00_3200 = PROCEDURE_REF(BgL_envz00_3198, (int) (((long) 1)));
				BgL_ptz00_3201 = PROCEDURE_REF(BgL_envz00_3198, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2454;

					BgL_xz00_2454 = BgL_xz00_3202;
					if ((BgL_xz00_2454 == BgL_ptz00_3201))
						{	/* Match/descr.scm 385 */
							return BgL_imz00_3200;
						}
					else
						{	/* Match/descr.scm 385 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3199) (BgL_fnz00_3199, BgL_xz00_2454,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:1963>_2724 */
	obj_t BGl_zc3anonymousza31963ze3_2724z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3203, obj_t BgL_xz00_3207)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 390 */
				obj_t BgL_fnz00_3204;

				obj_t BgL_imz00_3205;

				obj_t BgL_ptz00_3206;

				BgL_fnz00_3204 = PROCEDURE_REF(BgL_envz00_3203, (int) (((long) 0)));
				BgL_imz00_3205 = PROCEDURE_REF(BgL_envz00_3203, (int) (((long) 1)));
				BgL_ptz00_3206 = PROCEDURE_REF(BgL_envz00_3203, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2477;

					BgL_xz00_2477 = BgL_xz00_3207;
					if ((BgL_xz00_2477 == BgL_ptz00_3206))
						{	/* Match/descr.scm 390 */
							return BgL_imz00_3205;
						}
					else
						{	/* Match/descr.scm 390 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3204) (BgL_fnz00_3204, BgL_xz00_2477,
								BEOA);
						}
				}
			}
		}
	}



/* may-be-a-cons */
	bool_t BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00(obj_t
		BgL_descrz00_34)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 408 */
		BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00:
			if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_descrz00_34,
					BGl_list2782z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 409 */
					return ((bool_t) 0);
				}
			else
				{	/* Match/descr.scm 409 */
					if (
						(CAR(BgL_descrz00_34) ==
							BGl_symbol2732z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 412 */
							bool_t BgL_testz00_4133;

							{	/* Match/descr.scm 412 */
								obj_t BgL_arg2252z00_1178;

								{	/* Match/descr.scm 412 */
									obj_t BgL_pairz00_2512;

									BgL_pairz00_2512 = BgL_descrz00_34;
									BgL_arg2252z00_1178 = CAR(CDR(BgL_pairz00_2512));
								}
								BgL_testz00_4133 =
									BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00
									(BgL_arg2252z00_1178);
							}
							if (BgL_testz00_4133)
								{	/* Match/descr.scm 413 */
									obj_t BgL_arg2251z00_1177;

									{	/* Match/descr.scm 413 */
										obj_t BgL_pairz00_2516;

										BgL_pairz00_2516 = BgL_descrz00_34;
										BgL_arg2251z00_1177 = CAR(CDR(CDR(BgL_pairz00_2516)));
									}
									{
										obj_t BgL_descrz00_4140;

										BgL_descrz00_4140 = BgL_arg2251z00_1177;
										BgL_descrz00_34 = BgL_descrz00_4140;
										goto BGl_mayzd2bezd2azd2conszd2zz__match_descriptionsz00;
									}
								}
							else
								{	/* Match/descr.scm 412 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/descr.scm 411 */
							return ((bool_t) 1);
						}
				}
		}
	}



/* match */
	obj_t BGl_matchz00zz__match_descriptionsz00(obj_t BgL_dz00_35,
		obj_t BgL_ez00_36, obj_t BgL_envz00_37, obj_t BgL_kz00_38,
		obj_t BgL_za7za7_39)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 420 */
		BGl_matchz00zz__match_descriptionsz00:
			{	/* Match/descr.scm 421 */
				obj_t BgL_casezd2valuezd2_1179;

				BgL_casezd2valuezd2_1179 = CAR(BgL_dz00_35);
				if (
					(BgL_casezd2valuezd2_1179 ==
						BGl_symbol2752z00zz__match_descriptionsz00))
					{	/* Match/descr.scm 421 */
						return
							PROCEDURE_ENTRY(BgL_kz00_38) (BgL_kz00_38, BgL_envz00_37, BEOA);
					}
				else
					{	/* Match/descr.scm 421 */
						if (
							(BgL_casezd2valuezd2_1179 ==
								BGl_symbol2765z00zz__match_descriptionsz00))
							{	/* Match/descr.scm 424 */
								bool_t BgL_testz00_4148;

								{	/* Match/descr.scm 424 */
									bool_t BgL_testz00_4149;

									{	/* Match/descr.scm 424 */
										obj_t BgL_auxz00_4150;

										{	/* Match/descr.scm 424 */
											obj_t BgL_pairz00_2527;

											BgL_pairz00_2527 = BgL_dz00_35;
											BgL_auxz00_4150 = CAR(CDR(BgL_pairz00_2527));
										}
										BgL_testz00_4149 = (BgL_ez00_36 == BgL_auxz00_4150);
									}
									if (BgL_testz00_4149)
										{	/* Match/descr.scm 424 */
											BgL_testz00_4148 = ((bool_t) 1);
										}
									else
										{	/* Match/descr.scm 424 */
											if (STRINGP(BgL_ez00_36))
												{	/* Match/descr.scm 424 */
													obj_t BgL_arg2257z00_1185;

													{	/* Match/descr.scm 424 */
														obj_t BgL_pairz00_2532;

														BgL_pairz00_2532 = BgL_dz00_35;
														BgL_arg2257z00_1185 = CAR(CDR(BgL_pairz00_2532));
													}
													BgL_testz00_4148 =
														bigloo_strcmp(BgL_ez00_36, BgL_arg2257z00_1185);
												}
											else
												{	/* Match/descr.scm 424 */
													BgL_testz00_4148 = ((bool_t) 0);
												}
										}
								}
								if (BgL_testz00_4148)
									{	/* Match/descr.scm 424 */
										return
											PROCEDURE_ENTRY(BgL_kz00_38) (BgL_kz00_38, BgL_envz00_37,
											BEOA);
									}
								else
									{	/* Match/descr.scm 424 */
										return
											PROCEDURE_ENTRY(BgL_za7za7_39) (BgL_za7za7_39,
											BgL_envz00_37, BEOA);
									}
							}
						else
							{	/* Match/descr.scm 421 */
								if (
									(BgL_casezd2valuezd2_1179 ==
										BGl_symbol2732z00zz__match_descriptionsz00))
									{	/* Match/descr.scm 427 */
										obj_t BgL_arg2262z00_1188;

										{	/* Match/descr.scm 427 */
											obj_t BgL_pairz00_2540;

											BgL_pairz00_2540 = BgL_dz00_35;
											BgL_arg2262z00_1188 = CAR(CDR(BgL_pairz00_2540));
										}
										{	/* Match/descr.scm 429 */
											obj_t BgL_zc3anonymousza32264ze3z83_3208;

											BgL_zc3anonymousza32264ze3z83_3208 =
												make_fx_procedure
												(BGl_zc3anonymousza32264ze3z83zz__match_descriptionsz00,
												(int) (((long) 1)), (int) (((long) 4)));
											PROCEDURE_SET(BgL_zc3anonymousza32264ze3z83_3208,
												(int) (((long) 0)), BgL_dz00_35);
											PROCEDURE_SET(BgL_zc3anonymousza32264ze3z83_3208,
												(int) (((long) 1)), BgL_ez00_36);
											PROCEDURE_SET(BgL_zc3anonymousza32264ze3z83_3208,
												(int) (((long) 2)), BgL_kz00_38);
											PROCEDURE_SET(BgL_zc3anonymousza32264ze3z83_3208,
												(int) (((long) 3)), BgL_za7za7_39);
											{
												obj_t BgL_kz00_4179;

												obj_t BgL_dz00_4178;

												BgL_dz00_4178 = BgL_arg2262z00_1188;
												BgL_kz00_4179 = BgL_zc3anonymousza32264ze3z83_3208;
												BgL_kz00_38 = BgL_kz00_4179;
												BgL_dz00_35 = BgL_dz00_4178;
												goto BGl_matchz00zz__match_descriptionsz00;
											}
										}
									}
								else
									{	/* Match/descr.scm 421 */
										if (
											(BgL_casezd2valuezd2_1179 ==
												BGl_symbol2735z00zz__match_descriptionsz00))
											{	/* Match/descr.scm 421 */
												if (PAIRP(BgL_ez00_36))
													{	/* Match/descr.scm 433 */
														obj_t BgL_arg2268z00_1196;

														obj_t BgL_arg2269z00_1197;

														{	/* Match/descr.scm 433 */
															obj_t BgL_pairz00_2554;

															BgL_pairz00_2554 = BgL_dz00_35;
															BgL_arg2268z00_1196 = CAR(CDR(BgL_pairz00_2554));
														}
														BgL_arg2269z00_1197 = CAR(BgL_ez00_36);
														{	/* Match/descr.scm 435 */
															obj_t BgL_zc3anonymousza32271ze3z83_3209;

															BgL_zc3anonymousza32271ze3z83_3209 =
																make_fx_procedure
																(BGl_zc3anonymousza32271ze3z83zz__match_descriptionsz00,
																(int) (((long) 1)), (int) (((long) 4)));
															PROCEDURE_SET(BgL_zc3anonymousza32271ze3z83_3209,
																(int) (((long) 0)), BgL_dz00_35);
															PROCEDURE_SET(BgL_zc3anonymousza32271ze3z83_3209,
																(int) (((long) 1)), BgL_ez00_36);
															PROCEDURE_SET(BgL_zc3anonymousza32271ze3z83_3209,
																(int) (((long) 2)), BgL_kz00_38);
															PROCEDURE_SET(BgL_zc3anonymousza32271ze3z83_3209,
																(int) (((long) 3)), BgL_za7za7_39);
															{
																obj_t BgL_kz00_4200;

																obj_t BgL_ez00_4199;

																obj_t BgL_dz00_4198;

																BgL_dz00_4198 = BgL_arg2268z00_1196;
																BgL_ez00_4199 = BgL_arg2269z00_1197;
																BgL_kz00_4200 =
																	BgL_zc3anonymousza32271ze3z83_3209;
																BgL_kz00_38 = BgL_kz00_4200;
																BgL_ez00_36 = BgL_ez00_4199;
																BgL_dz00_35 = BgL_dz00_4198;
																goto BGl_matchz00zz__match_descriptionsz00;
															}
														}
													}
												else
													{	/* Match/descr.scm 432 */
														return
															PROCEDURE_ENTRY(BgL_za7za7_39) (BgL_za7za7_39,
															BgL_envz00_37, BEOA);
													}
											}
										else
											{	/* Match/descr.scm 421 */
												if (
													(BgL_casezd2valuezd2_1179 ==
														BGl_symbol2760z00zz__match_descriptionsz00))
													{	/* Match/descr.scm 442 */
														bool_t BgL_testz00_4205;

														{	/* Match/descr.scm 442 */
															obj_t BgL_auxz00_4206;

															{	/* Match/descr.scm 442 */
																obj_t BgL_pairz00_2577;

																{	/* Match/descr.scm 442 */
																	obj_t BgL_pairz00_2570;

																	BgL_pairz00_2570 = BgL_dz00_35;
																	BgL_pairz00_2577 = CAR(CDR(BgL_pairz00_2570));
																}
																BgL_auxz00_4206 = CAR(BgL_pairz00_2577);
															}
															BgL_testz00_4205 =
																(BgL_auxz00_4206 ==
																BGl_symbol2744z00zz__match_descriptionsz00);
														}
														if (BgL_testz00_4205)
															{	/* Match/descr.scm 443 */
																obj_t BgL_sz00_1206;

																BgL_sz00_1206 =
																	PROCEDURE_ENTRY
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
																	(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
																	BGl_string2779z00zz__match_descriptionsz00,
																	BEOA);
																{	/* Match/descr.scm 444 */
																	obj_t BgL_arg2277z00_1207;

																	{	/* Match/descr.scm 444 */
																		obj_t BgL_arg2278z00_1208;

																		obj_t BgL_arg2279z00_1209;

																		{	/* Match/descr.scm 444 */
																			obj_t BgL_pairz00_2578;

																			BgL_pairz00_2578 = BgL_dz00_35;
																			BgL_arg2278z00_1208 =
																				CAR(CDR(CAR(CDR(BgL_pairz00_2578))));
																		}
																		{	/* Match/descr.scm 444 */
																			obj_t BgL_arg2280z00_1210;

																			obj_t BgL_arg2281z00_1211;

																			BgL_arg2280z00_1210 =
																				BGl_symbol2760z00zz__match_descriptionsz00;
																			{	/* Match/descr.scm 444 */
																				obj_t BgL_arg2282z00_1212;

																				{	/* Match/descr.scm 444 */
																					obj_t BgL_arg2285z00_1215;

																					obj_t BgL_arg2286z00_1216;

																					BgL_arg2285z00_1215 =
																						BGl_symbol2765z00zz__match_descriptionsz00;
																					{	/* Match/descr.scm 444 */
																						obj_t BgL_list2287z00_1217;

																						BgL_list2287z00_1217 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2286z00_1216 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_sz00_1206,
																							BgL_list2287z00_1217);
																					}
																					BgL_arg2282z00_1212 =
																						MAKE_PAIR(BgL_arg2285z00_1215,
																						BgL_arg2286z00_1216);
																				}
																				{	/* Match/descr.scm 444 */
																					obj_t BgL_list2284z00_1214;

																					BgL_list2284z00_1214 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2281z00_1211 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2282z00_1212,
																						BgL_list2284z00_1214);
																				}
																			}
																			BgL_arg2279z00_1209 =
																				MAKE_PAIR(BgL_arg2280z00_1210,
																				BgL_arg2281z00_1211);
																		}
																		{	/* Match/descr.scm 444 */
																			obj_t BgL_zc3anonymousza31963ze3z83_3210;

																			BgL_zc3anonymousza31963ze3z83_3210 =
																				make_fx_procedure
																				(BGl_zc3anonymousza31963ze3_2725z83zz__match_descriptionsz00,
																				(int) (((long) 1)), (int) (((long) 3)));
																			PROCEDURE_SET
																				(BgL_zc3anonymousza31963ze3z83_3210,
																				(int) (((long) 0)), BgL_envz00_37);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza31963ze3z83_3210,
																				(int) (((long) 1)),
																				BgL_arg2279z00_1209);
																			PROCEDURE_SET
																				(BgL_zc3anonymousza31963ze3z83_3210,
																				(int) (((long) 2)),
																				BgL_arg2278z00_1208);
																			BgL_arg2277z00_1207 =
																				BgL_zc3anonymousza31963ze3z83_3210;
																	}}
																	return
																		PROCEDURE_ENTRY(BgL_kz00_38) (BgL_kz00_38,
																		BgL_arg2277z00_1207, BEOA);
																}
															}
														else
															{	/* Match/descr.scm 445 */
																obj_t BgL_arg2289z00_1218;

																{	/* Match/descr.scm 445 */
																	obj_t BgL_pairz00_2593;

																	BgL_pairz00_2593 = BgL_dz00_35;
																	BgL_arg2289z00_1218 =
																		CAR(CDR(BgL_pairz00_2593));
																}
																{
																	obj_t BgL_za7za7_4238;

																	obj_t BgL_kz00_4237;

																	obj_t BgL_dz00_4236;

																	BgL_dz00_4236 = BgL_arg2289z00_1218;
																	BgL_kz00_4237 = BgL_za7za7_39;
																	BgL_za7za7_4238 = BgL_kz00_38;
																	BgL_za7za7_39 = BgL_za7za7_4238;
																	BgL_kz00_38 = BgL_kz00_4237;
																	BgL_dz00_35 = BgL_dz00_4236;
																	goto BGl_matchz00zz__match_descriptionsz00;
																}
															}
													}
												else
													{	/* Match/descr.scm 421 */
														if (
															(BgL_casezd2valuezd2_1179 ==
																BGl_symbol2746z00zz__match_descriptionsz00))
															{	/* Match/descr.scm 450 */
																obj_t BgL_fun2295z00_1223;

																{	/* Match/descr.scm 450 */
																	obj_t BgL_arg2292z00_1221;

																	obj_t BgL_arg2293z00_1222;

																	{	/* Match/descr.scm 450 */
																		obj_t BgL_pairz00_2599;

																		BgL_pairz00_2599 = BgL_dz00_35;
																		BgL_arg2292z00_1221 =
																			CAR(CDR(CDR(BgL_pairz00_2599)));
																	}
																	{	/* Match/descr.scm 450 */
																		obj_t BgL_pairz00_2605;

																		BgL_pairz00_2605 = BgL_ez00_36;
																		BgL_arg2293z00_1222 =
																			CAR(CDR(CDR(BgL_pairz00_2605)));
																	}
																	BgL_fun2295z00_1223 =
																		BGl_matchz00zz__match_descriptionsz00
																		(BgL_arg2292z00_1221, BgL_arg2293z00_1222,
																		BgL_envz00_37, BgL_kz00_38, BgL_za7za7_39);
																}
																return
																	PROCEDURE_ENTRY(BgL_fun2295z00_1223)
																	(BgL_fun2295z00_1223, BINT(((long) 0)), BEOA);
															}
														else
															{	/* Match/descr.scm 421 */
																if (
																	(BgL_casezd2valuezd2_1179 ==
																		BGl_symbol2737z00zz__match_descriptionsz00))
																	{	/* Match/descr.scm 453 */
																		obj_t BgL_zc3anonymousza32297ze3z83_3212;

																		BgL_zc3anonymousza32297ze3z83_3212 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32297ze3z83zz__match_descriptionsz00,
																			(int) (((long) 1)), (int) (((long) 5)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32297ze3z83_3212,
																			(int) (((long) 0)), BgL_dz00_35);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32297ze3z83_3212,
																			(int) (((long) 1)), BgL_ez00_36);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32297ze3z83_3212,
																			(int) (((long) 2)), BgL_kz00_38);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32297ze3z83_3212,
																			(int) (((long) 3)), BgL_za7za7_39);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32297ze3z83_3212,
																			(int) (((long) 4)), BgL_envz00_37);
																		return BgL_zc3anonymousza32297ze3z83_3212;
																	}
																else
																	{	/* Match/descr.scm 421 */
																		if (
																			(BgL_casezd2valuezd2_1179 ==
																				BGl_symbol2748z00zz__match_descriptionsz00))
																			{	/* Match/descr.scm 464 */
																				obj_t
																					BgL_zc3anonymousza32309ze3z83_3213;
																				BgL_zc3anonymousza32309ze3z83_3213 =
																					make_fx_procedure
																					(BGl_zc3anonymousza32309ze3z83zz__match_descriptionsz00,
																					(int) (((long) 1)),
																					(int) (((long) 2)));
																				PROCEDURE_SET
																					(BgL_zc3anonymousza32309ze3z83_3213,
																					(int) (((long) 0)), BgL_kz00_38);
																				PROCEDURE_SET
																					(BgL_zc3anonymousza32309ze3z83_3213,
																					(int) (((long) 1)), BgL_envz00_37);
																				return
																					BgL_zc3anonymousza32309ze3z83_3213;
																			}
																		else
																			{	/* Match/descr.scm 421 */
																				if (
																					(BgL_casezd2valuezd2_1179 ==
																						BGl_symbol2744z00zz__match_descriptionsz00))
																					{	/* Match/descr.scm 466 */
																						bool_t BgL_testz00_4277;

																						{	/* Match/descr.scm 466 */
																							obj_t BgL_arg2317z00_1249;

																							obj_t BgL_arg2318z00_1250;

																							{	/* Match/descr.scm 466 */
																								obj_t BgL_arg2319z00_1251;

																								{	/* Match/descr.scm 466 */
																									obj_t BgL_pairz00_2637;

																									BgL_pairz00_2637 =
																										BgL_dz00_35;
																									BgL_arg2319z00_1251 =
																										CAR(CDR(BgL_pairz00_2637));
																								}
																								BgL_arg2317z00_1249 =
																									PROCEDURE_ENTRY(BgL_envz00_37)
																									(BgL_envz00_37,
																									BgL_arg2319z00_1251, BEOA);
																							}
																							BgL_arg2318z00_1250 =
																								BGl_symbol2775z00zz__match_descriptionsz00;
																							BgL_testz00_4277 =
																								(BgL_arg2317z00_1249 ==
																								BgL_arg2318z00_1250);
																						}
																						if (BgL_testz00_4277)
																							{	/* Match/descr.scm 467 */
																								obj_t BgL_arg2312z00_1244;

																								{	/* Match/descr.scm 467 */
																									obj_t BgL_ptz00_2646;

																									{	/* Match/descr.scm 467 */
																										obj_t BgL_pairz00_2641;

																										BgL_pairz00_2641 =
																											BgL_dz00_35;
																										BgL_ptz00_2646 =
																											CAR(CDR
																											(BgL_pairz00_2641));
																									}
																									{	/* Match/descr.scm 467 */
																										obj_t
																											BgL_zc3anonymousza31963ze3z83_3214;
																										BgL_zc3anonymousza31963ze3z83_3214
																											=
																											make_fx_procedure
																											(BGl_zc3anonymousza31963ze3_2726z83zz__match_descriptionsz00,
																											(int) (((long) 1)),
																											(int) (((long) 3)));
																										PROCEDURE_SET
																											(BgL_zc3anonymousza31963ze3z83_3214,
																											(int) (((long) 0)),
																											BgL_envz00_37);
																										PROCEDURE_SET
																											(BgL_zc3anonymousza31963ze3z83_3214,
																											(int) (((long) 1)),
																											BgL_ez00_36);
																										PROCEDURE_SET
																											(BgL_zc3anonymousza31963ze3z83_3214,
																											(int) (((long) 2)),
																											BgL_ptz00_2646);
																										BgL_arg2312z00_1244 =
																											BgL_zc3anonymousza31963ze3z83_3214;
																								}}
																								return
																									PROCEDURE_ENTRY(BgL_kz00_38)
																									(BgL_kz00_38,
																									BgL_arg2312z00_1244, BEOA);
																							}
																						else
																							{	/* Match/descr.scm 468 */
																								bool_t BgL_testz00_4296;

																								{	/* Match/descr.scm 468 */
																									obj_t BgL_arg2315z00_1247;

																									{	/* Match/descr.scm 468 */
																										obj_t BgL_arg2316z00_1248;

																										{	/* Match/descr.scm 468 */
																											obj_t BgL_pairz00_2652;

																											BgL_pairz00_2652 =
																												BgL_dz00_35;
																											BgL_arg2316z00_1248 =
																												CAR(CDR
																												(BgL_pairz00_2652));
																										}
																										BgL_arg2315z00_1247 =
																											PROCEDURE_ENTRY
																											(BgL_envz00_37)
																											(BgL_envz00_37,
																											BgL_arg2316z00_1248,
																											BEOA);
																									}
																									BgL_testz00_4296 =
																										(BgL_arg2315z00_1247 ==
																										BgL_ez00_36);
																								}
																								if (BgL_testz00_4296)
																									{	/* Match/descr.scm 468 */
																										return
																											PROCEDURE_ENTRY
																											(BgL_kz00_38)
																											(BgL_kz00_38,
																											BgL_envz00_37, BEOA);
																									}
																								else
																									{	/* Match/descr.scm 468 */
																										return
																											PROCEDURE_ENTRY
																											(BgL_za7za7_39)
																											(BgL_za7za7_39,
																											BgL_envz00_37, BEOA);
																									}
																							}
																					}
																				else
																					{	/* Match/descr.scm 421 */
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
			}
		}
	}



/* <anonymous:2264> */
	obj_t BGl_zc3anonymousza32264ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3215, obj_t BgL_envz00_3220)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 428 */
			{	/* Match/descr.scm 429 */
				obj_t BgL_dz00_3216;

				obj_t BgL_ez00_3217;

				obj_t BgL_kz00_3218;

				obj_t BgL_za7za7_3219;

				BgL_dz00_3216 = PROCEDURE_REF(BgL_envz00_3215, (int) (((long) 0)));
				BgL_ez00_3217 = PROCEDURE_REF(BgL_envz00_3215, (int) (((long) 1)));
				BgL_kz00_3218 = PROCEDURE_REF(BgL_envz00_3215, (int) (((long) 2)));
				BgL_za7za7_3219 = PROCEDURE_REF(BgL_envz00_3215, (int) (((long) 3)));
				{
					obj_t BgL_envz00_1190;

					BgL_envz00_1190 = BgL_envz00_3220;
					{	/* Match/descr.scm 429 */
						obj_t BgL_arg2265z00_2544;

						{	/* Match/descr.scm 429 */
							obj_t BgL_pairz00_2545;

							BgL_pairz00_2545 = BgL_dz00_3216;
							BgL_arg2265z00_2544 = CAR(CDR(CDR(BgL_pairz00_2545)));
						}
						return
							BGl_matchz00zz__match_descriptionsz00(BgL_arg2265z00_2544,
							BgL_ez00_3217, BgL_envz00_1190, BgL_kz00_3218, BgL_za7za7_3219);
					}
				}
			}
		}
	}



/* <anonymous:2271> */
	obj_t BGl_zc3anonymousza32271ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3221, obj_t BgL_envz00_3226)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 434 */
			{	/* Match/descr.scm 435 */
				obj_t BgL_dz00_3222;

				obj_t BgL_ez00_3223;

				obj_t BgL_kz00_3224;

				obj_t BgL_za7za7_3225;

				BgL_dz00_3222 = PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 0)));
				BgL_ez00_3223 = PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 1)));
				BgL_kz00_3224 = PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 2)));
				BgL_za7za7_3225 = PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 3)));
				{
					obj_t BgL_envz00_1199;

					BgL_envz00_1199 = BgL_envz00_3226;
					{	/* Match/descr.scm 435 */
						obj_t BgL_arg2272z00_2559;

						obj_t BgL_arg2274z00_2560;

						{	/* Match/descr.scm 435 */
							obj_t BgL_pairz00_2561;

							BgL_pairz00_2561 = BgL_dz00_3222;
							BgL_arg2272z00_2559 = CAR(CDR(CDR(BgL_pairz00_2561)));
						}
						BgL_arg2274z00_2560 = CDR(BgL_ez00_3223);
						return
							BGl_matchz00zz__match_descriptionsz00(BgL_arg2272z00_2559,
							BgL_arg2274z00_2560, BgL_envz00_1199, BgL_kz00_3224,
							BgL_za7za7_3225);
					}
				}
			}
		}
	}



/* <anonymous:1963>_2725 */
	obj_t BGl_zc3anonymousza31963ze3_2725z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3227, obj_t BgL_xz00_3231)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 444 */
				obj_t BgL_fnz00_3228;

				obj_t BgL_imz00_3229;

				obj_t BgL_ptz00_3230;

				BgL_fnz00_3228 = PROCEDURE_REF(BgL_envz00_3227, (int) (((long) 0)));
				BgL_imz00_3229 = PROCEDURE_REF(BgL_envz00_3227, (int) (((long) 1)));
				BgL_ptz00_3230 = PROCEDURE_REF(BgL_envz00_3227, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2590;

					BgL_xz00_2590 = BgL_xz00_3231;
					if ((BgL_xz00_2590 == BgL_ptz00_3230))
						{	/* Match/descr.scm 444 */
							return BgL_imz00_3229;
						}
					else
						{	/* Match/descr.scm 444 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3228) (BgL_fnz00_3228, BgL_xz00_2590,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:2297> */
	obj_t BGl_zc3anonymousza32297ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3232, obj_t BgL_iz00_3238)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 453 */
			{	/* Match/descr.scm 454 */
				obj_t BgL_dz00_3233;

				obj_t BgL_ez00_3234;

				obj_t BgL_kz00_3235;

				obj_t BgL_za7za7_3236;

				obj_t BgL_envz00_3237;

				BgL_dz00_3233 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 0)));
				BgL_ez00_3234 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 1)));
				BgL_kz00_3235 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 2)));
				BgL_za7za7_3236 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 3)));
				BgL_envz00_3237 = PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 4)));
				{
					obj_t BgL_iz00_1226;

					BgL_iz00_1226 = BgL_iz00_3238;
					{	/* Match/descr.scm 454 */
						bool_t BgL_testz00_4351;

						{	/* Match/descr.scm 454 */
							int BgL_arg2307z00_1238;

							BgL_arg2307z00_1238 = VECTOR_LENGTH(BgL_ez00_3234);
							BgL_testz00_4351 =
								((long) CINT(BgL_iz00_1226) >= (long) (BgL_arg2307z00_1238));
						}
						if (BgL_testz00_4351)
							{	/* Match/descr.scm 454 */
								return
									PROCEDURE_ENTRY(BgL_kz00_3235) (BgL_kz00_3235,
									BgL_envz00_3237, BEOA);
							}
						else
							{	/* Match/descr.scm 456 */
								obj_t BgL_arg2300z00_1229;

								obj_t BgL_arg2301z00_1230;

								{	/* Match/descr.scm 456 */
									obj_t BgL_pairz00_2616;

									BgL_pairz00_2616 = BgL_dz00_3233;
									BgL_arg2300z00_1229 = CAR(CDR(BgL_pairz00_2616));
								}
								BgL_arg2301z00_1230 =
									VECTOR_REF(BgL_ez00_3234, CINT(BgL_iz00_1226));
								{	/* Match/descr.scm 459 */
									obj_t BgL_zc3anonymousza32303ze3z83_3211;

									BgL_zc3anonymousza32303ze3z83_3211 =
										make_fx_procedure
										(BGl_zc3anonymousza32303ze3z83zz__match_descriptionsz00,
										(int) (((long) 1)), (int) (((long) 5)));
									PROCEDURE_SET(BgL_zc3anonymousza32303ze3z83_3211,
										(int) (((long) 0)), BgL_dz00_3233);
									PROCEDURE_SET(BgL_zc3anonymousza32303ze3z83_3211,
										(int) (((long) 1)), BgL_ez00_3234);
									PROCEDURE_SET(BgL_zc3anonymousza32303ze3z83_3211,
										(int) (((long) 2)), BgL_kz00_3235);
									PROCEDURE_SET(BgL_zc3anonymousza32303ze3z83_3211,
										(int) (((long) 3)), BgL_za7za7_3236);
									PROCEDURE_SET(BgL_zc3anonymousza32303ze3z83_3211,
										(int) (((long) 4)), BgL_iz00_1226);
									return
										BGl_comparez00zz__match_descriptionsz00(BgL_arg2300z00_1229,
										BgL_arg2301z00_1230, BgL_envz00_3237,
										BgL_zc3anonymousza32303ze3z83_3211, BgL_za7za7_3236);
								}
							}
					}
				}
			}
		}
	}



/* <anonymous:2303> */
	obj_t BGl_zc3anonymousza32303ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3239, obj_t BgL_envz00_3245)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 458 */
			{	/* Match/descr.scm 459 */
				obj_t BgL_dz00_3240;

				obj_t BgL_ez00_3241;

				obj_t BgL_kz00_3242;

				obj_t BgL_za7za7_3243;

				obj_t BgL_iz00_3244;

				BgL_dz00_3240 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 0)));
				BgL_ez00_3241 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 1)));
				BgL_kz00_3242 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 2)));
				BgL_za7za7_3243 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 3)));
				BgL_iz00_3244 = PROCEDURE_REF(BgL_envz00_3239, (int) (((long) 4)));
				{
					obj_t BgL_envz00_1232;

					BgL_envz00_1232 = BgL_envz00_3245;
					{	/* Match/descr.scm 459 */
						obj_t BgL_fun2306z00_2622;

						{	/* Match/descr.scm 459 */
							obj_t BgL_arg2304z00_2623;

							{	/* Match/descr.scm 459 */
								obj_t BgL_pairz00_2625;

								BgL_pairz00_2625 = BgL_dz00_3240;
								BgL_arg2304z00_2623 = CAR(CDR(CDR(BgL_pairz00_2625)));
							}
							BgL_fun2306z00_2622 =
								BGl_matchz00zz__match_descriptionsz00(BgL_arg2304z00_2623,
								BgL_ez00_3241, BgL_envz00_1232, BgL_kz00_3242, BgL_za7za7_3243);
						}
						{	/* Match/descr.scm 459 */
							long BgL_arg2305z00_2624;

							BgL_arg2305z00_2624 = ((long) CINT(BgL_iz00_3244) + ((long) 1));
							return
								PROCEDURE_ENTRY(BgL_fun2306z00_2622) (BgL_fun2306z00_2622,
								BINT(BgL_arg2305z00_2624), BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2309> */
	obj_t BGl_zc3anonymousza32309ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3246, obj_t BgL_iz00_3249)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 464 */
			{	/* Match/descr.scm 464 */
				obj_t BgL_kz00_3247;

				obj_t BgL_envz00_3248;

				BgL_kz00_3247 = PROCEDURE_REF(BgL_envz00_3246, (int) (((long) 0)));
				BgL_envz00_3248 = PROCEDURE_REF(BgL_envz00_3246, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1240;

					BgL_iz00_1240 = BgL_iz00_3249;
					return
						PROCEDURE_ENTRY(BgL_kz00_3247) (BgL_kz00_3247, BgL_envz00_3248,
						BEOA);
				}
			}
		}
	}



/* <anonymous:1963>_2726 */
	obj_t BGl_zc3anonymousza31963ze3_2726z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3250, obj_t BgL_xz00_3254)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 467 */
				obj_t BgL_fnz00_3251;

				obj_t BgL_imz00_3252;

				obj_t BgL_ptz00_3253;

				BgL_fnz00_3251 = PROCEDURE_REF(BgL_envz00_3250, (int) (((long) 0)));
				BgL_imz00_3252 = PROCEDURE_REF(BgL_envz00_3250, (int) (((long) 1)));
				BgL_ptz00_3253 = PROCEDURE_REF(BgL_envz00_3250, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2649;

					BgL_xz00_2649 = BgL_xz00_3254;
					if ((BgL_xz00_2649 == BgL_ptz00_3253))
						{	/* Match/descr.scm 467 */
							return BgL_imz00_3252;
						}
					else
						{	/* Match/descr.scm 467 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3251) (BgL_fnz00_3251, BgL_xz00_2649,
								BEOA);
						}
				}
			}
		}
	}



/* alpha-convert */
	obj_t BGl_alphazd2convertzd2zz__match_descriptionsz00(obj_t BgL_fz00_40)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 476 */
			return
				BGl_loopz00zz__match_descriptionsz00(BgL_fz00_40,
				BGl_proc2784z00zz__match_descriptionsz00,
				BGl_proc2785z00zz__match_descriptionsz00);
		}
	}



/* loop */
	obj_t BGl_loopz00zz__match_descriptionsz00(obj_t BgL_fz00_1255,
		obj_t BgL_envz00_1256, obj_t BgL_kz00_1257)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 477 */
		BGl_loopz00zz__match_descriptionsz00:
			if (PAIRP(BgL_fz00_1255))
				{	/* Match/descr.scm 481 */
					if (
						(CAR(BgL_fz00_1255) == BGl_symbol2765z00zz__match_descriptionsz00))
						{	/* Match/descr.scm 483 */
							return
								PROCEDURE_ENTRY(BgL_kz00_1257) (BgL_kz00_1257, BgL_fz00_1255,
								BgL_envz00_1256, BEOA);
						}
					else
						{	/* Match/descr.scm 483 */
							if (
								(CAR(BgL_fz00_1255) ==
									BGl_symbol2744z00zz__match_descriptionsz00))
								{	/* Match/descr.scm 486 */
									bool_t BgL_testz00_4422;

									{	/* Match/descr.scm 486 */
										obj_t BgL_arg2337z00_1276;

										obj_t BgL_arg2338z00_1277;

										{	/* Match/descr.scm 486 */
											obj_t BgL_arg2339z00_1278;

											BgL_arg2339z00_1278 = CAR(CDR(BgL_fz00_1255));
											BgL_arg2337z00_1276 =
												PROCEDURE_ENTRY(BgL_envz00_1256) (BgL_envz00_1256,
												BgL_arg2339z00_1278, BEOA);
										}
										BgL_arg2338z00_1277 =
											BGl_symbol2775z00zz__match_descriptionsz00;
										BgL_testz00_4422 =
											(BgL_arg2337z00_1276 == BgL_arg2338z00_1277);
									}
									if (BgL_testz00_4422)
										{	/* Match/descr.scm 487 */
											obj_t BgL_sz00_1263;

											BgL_sz00_1263 =
												PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
												(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
												BGl_string2786z00zz__match_descriptionsz00, BEOA);
											{	/* Match/descr.scm 488 */
												obj_t BgL_arg2325z00_1264;

												obj_t BgL_arg2326z00_1265;

												{	/* Match/descr.scm 488 */
													obj_t BgL_list2327z00_1266;

													{	/* Match/descr.scm 488 */
														obj_t BgL_arg2328z00_1267;

														obj_t BgL_arg2329z00_1268;

														BgL_arg2328z00_1267 =
															BGl_symbol2744z00zz__match_descriptionsz00;
														BgL_arg2329z00_1268 =
															MAKE_PAIR(BgL_sz00_1263, BNIL);
														BgL_list2327z00_1266 =
															MAKE_PAIR(BgL_arg2328z00_1267,
															BgL_arg2329z00_1268);
													}
													BgL_arg2325z00_1264 = BgL_list2327z00_1266;
												}
												{	/* Match/descr.scm 488 */
													obj_t BgL_ptz00_2672;

													BgL_ptz00_2672 = CAR(CDR(BgL_fz00_1255));
													{	/* Match/descr.scm 488 */
														obj_t BgL_zc3anonymousza31963ze3z83_3255;

														BgL_zc3anonymousza31963ze3z83_3255 =
															make_fx_procedure
															(BGl_zc3anonymousza31963ze3_2727z83zz__match_descriptionsz00,
															(int) (((long) 1)), (int) (((long) 3)));
														PROCEDURE_SET(BgL_zc3anonymousza31963ze3z83_3255,
															(int) (((long) 0)), BgL_envz00_1256);
														PROCEDURE_SET(BgL_zc3anonymousza31963ze3z83_3255,
															(int) (((long) 1)), BgL_sz00_1263);
														PROCEDURE_SET(BgL_zc3anonymousza31963ze3z83_3255,
															(int) (((long) 2)), BgL_ptz00_2672);
														BgL_arg2326z00_1265 =
															BgL_zc3anonymousza31963ze3z83_3255;
												}}
												return
													PROCEDURE_ENTRY(BgL_kz00_1257) (BgL_kz00_1257,
													BgL_arg2325z00_1264, BgL_arg2326z00_1265, BEOA);
											}
										}
									else
										{	/* Match/descr.scm 489 */
											obj_t BgL_arg2331z00_1270;

											{	/* Match/descr.scm 489 */
												obj_t BgL_arg2332z00_1271;

												obj_t BgL_arg2333z00_1272;

												BgL_arg2332z00_1271 =
													BGl_symbol2744z00zz__match_descriptionsz00;
												{	/* Match/descr.scm 489 */
													obj_t BgL_arg2336z00_1275;

													BgL_arg2336z00_1275 = CAR(CDR(BgL_fz00_1255));
													BgL_arg2333z00_1272 =
														PROCEDURE_ENTRY(BgL_envz00_1256) (BgL_envz00_1256,
														BgL_arg2336z00_1275, BEOA);
												}
												{	/* Match/descr.scm 489 */
													obj_t BgL_list2334z00_1273;

													{	/* Match/descr.scm 489 */
														obj_t BgL_arg2335z00_1274;

														BgL_arg2335z00_1274 =
															MAKE_PAIR(BgL_arg2333z00_1272, BNIL);
														BgL_list2334z00_1273 =
															MAKE_PAIR(BgL_arg2332z00_1271,
															BgL_arg2335z00_1274);
													}
													BgL_arg2331z00_1270 = BgL_list2334z00_1273;
												}
											}
											return
												PROCEDURE_ENTRY(BgL_kz00_1257) (BgL_kz00_1257,
												BgL_arg2331z00_1270, BgL_envz00_1256, BEOA);
										}
								}
							else
								{	/* Match/descr.scm 490 */
									obj_t BgL_arg2340z00_1279;

									BgL_arg2340z00_1279 = CAR(BgL_fz00_1255);
									{	/* Match/descr.scm 492 */
										obj_t BgL_zc3anonymousza32342ze3z83_3257;

										BgL_zc3anonymousza32342ze3z83_3257 =
											make_fx_procedure
											(BGl_zc3anonymousza32342ze3z83zz__match_descriptionsz00,
											(int) (((long) 2)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3anonymousza32342ze3z83_3257,
											(int) (((long) 0)), BgL_fz00_1255);
										PROCEDURE_SET(BgL_zc3anonymousza32342ze3z83_3257,
											(int) (((long) 1)), BgL_kz00_1257);
										{
											obj_t BgL_kz00_4462;

											obj_t BgL_fz00_4461;

											BgL_fz00_4461 = BgL_arg2340z00_1279;
											BgL_kz00_4462 = BgL_zc3anonymousza32342ze3z83_3257;
											BgL_kz00_1257 = BgL_kz00_4462;
											BgL_fz00_1255 = BgL_fz00_4461;
											goto BGl_loopz00zz__match_descriptionsz00;
										}
									}
								}
						}
				}
			else
				{	/* Match/descr.scm 481 */
					return
						PROCEDURE_ENTRY(BgL_kz00_1257) (BgL_kz00_1257, BgL_fz00_1255,
						BgL_envz00_1256, BEOA);
				}
		}
	}



/* g1836 */
	obj_t BGl_g1836z00zz__match_descriptionsz00(obj_t BgL_envz00_3261,
		obj_t BgL_fz00_3262, obj_t BgL_ez00_3263)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 479 */
			return BgL_fz00_3262;
		}
	}



/* g1835 */
	obj_t BGl_g1835z00zz__match_descriptionsz00(obj_t BgL_envz00_3264,
		obj_t BgL_xz00_3265)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 478 */
			return BGl_symbol2775z00zz__match_descriptionsz00;
		}
	}



/* <anonymous:1963>_2727 */
	obj_t BGl_zc3anonymousza31963ze3_2727z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3266, obj_t BgL_xz00_3270)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 121 */
			{	/* Match/descr.scm 488 */
				obj_t BgL_fnz00_3267;

				obj_t BgL_imz00_3268;

				obj_t BgL_ptz00_3269;

				BgL_fnz00_3267 = PROCEDURE_REF(BgL_envz00_3266, (int) (((long) 0)));
				BgL_imz00_3268 = PROCEDURE_REF(BgL_envz00_3266, (int) (((long) 1)));
				BgL_ptz00_3269 = PROCEDURE_REF(BgL_envz00_3266, (int) (((long) 2)));
				{
					obj_t BgL_xz00_2675;

					BgL_xz00_2675 = BgL_xz00_3270;
					if ((BgL_xz00_2675 == BgL_ptz00_3269))
						{	/* Match/descr.scm 488 */
							return BgL_imz00_3268;
						}
					else
						{	/* Match/descr.scm 488 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3267) (BgL_fnz00_3267, BgL_xz00_2675,
								BEOA);
						}
				}
			}
		}
	}



/* <anonymous:2342> */
	obj_t BGl_zc3anonymousza32342ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3271, obj_t BgL_fcarz00_3274, obj_t BgL_ez00_3275)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 491 */
			{	/* Match/descr.scm 492 */
				obj_t BgL_fz00_3272;

				obj_t BgL_kz00_3273;

				BgL_fz00_3272 = PROCEDURE_REF(BgL_envz00_3271, (int) (((long) 0)));
				BgL_kz00_3273 = PROCEDURE_REF(BgL_envz00_3271, (int) (((long) 1)));
				{
					obj_t BgL_fcarz00_1281;

					obj_t BgL_ez00_1282;

					BgL_fcarz00_1281 = BgL_fcarz00_3274;
					BgL_ez00_1282 = BgL_ez00_3275;
					{	/* Match/descr.scm 492 */
						obj_t BgL_arg2343z00_2685;

						BgL_arg2343z00_2685 = CDR(BgL_fz00_3272);
						{	/* Match/descr.scm 492 */
							obj_t BgL_zc3anonymousza32345ze3z83_3256;

							BgL_zc3anonymousza32345ze3z83_3256 =
								make_fx_procedure
								(BGl_zc3anonymousza32345ze3z83zz__match_descriptionsz00,
								(int) (((long) 2)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_3256,
								(int) (((long) 0)), BgL_fcarz00_1281);
							PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_3256,
								(int) (((long) 1)), BgL_kz00_3273);
							return BGl_loopz00zz__match_descriptionsz00(BgL_arg2343z00_2685,
								BgL_ez00_1282, BgL_zc3anonymousza32345ze3z83_3256);
						}
					}
				}
			}
		}
	}



/* <anonymous:2345> */
	obj_t BGl_zc3anonymousza32345ze3z83zz__match_descriptionsz00(obj_t
		BgL_envz00_3276, obj_t BgL_fcdrz00_3279, obj_t BgL_ez00_3280)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 493 */
			{	/* Match/descr.scm 492 */
				obj_t BgL_fcarz00_3277;

				obj_t BgL_kz00_3278;

				BgL_fcarz00_3277 = PROCEDURE_REF(BgL_envz00_3276, (int) (((long) 0)));
				BgL_kz00_3278 = PROCEDURE_REF(BgL_envz00_3276, (int) (((long) 1)));
				{
					obj_t BgL_fcdrz00_2687;

					obj_t BgL_ez00_2688;

					BgL_fcdrz00_2687 = BgL_fcdrz00_3279;
					BgL_ez00_2688 = BgL_ez00_3280;
					{	/* Match/descr.scm 492 */
						obj_t BgL_arg2346z00_2691;

						BgL_arg2346z00_2691 = MAKE_PAIR(BgL_fcarz00_3277, BgL_fcdrz00_2687);
						return
							PROCEDURE_ENTRY(BgL_kz00_3278) (BgL_kz00_3278,
							BgL_arg2346z00_2691, BgL_ez00_2688, BEOA);
					}
				}
			}
		}
	}



/* isAny? */
	BGL_EXPORTED_DEF obj_t BGl_isAnyzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_41)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 499 */
			if ((CAR(BgL_cz00_41) == BGl_symbol2752z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 499 */
					return BTRUE;
				}
			else
				{	/* Match/descr.scm 499 */
					return
						BBOOL(
						(CAR(BgL_cz00_41) == BGl_symbol2754z00zz__match_descriptionsz00));
				}
		}
	}



/* _isAny? */
	obj_t BGl__isAnyzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3281,
		obj_t BgL_cz00_3282)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 499 */
			if ((CAR(BgL_cz00_3282) == BGl_symbol2752z00zz__match_descriptionsz00))
				{	/* Match/descr.scm 499 */
					return BTRUE;
				}
			else
				{	/* Match/descr.scm 499 */
					return
						BBOOL(
						(CAR(BgL_cz00_3282) == BGl_symbol2754z00zz__match_descriptionsz00));
				}
		}
	}



/* isCheck? */
	BGL_EXPORTED_DEF obj_t BGl_isCheckzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_42)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 503 */
			return
				BBOOL((CAR(BgL_cz00_42) == BGl_symbol2754z00zz__match_descriptionsz00));
		}
	}



/* _isCheck? */
	obj_t BGl__isCheckzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3283,
		obj_t BgL_cz00_3284)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 503 */
			return
				BBOOL(
				(CAR(BgL_cz00_3284) == BGl_symbol2754z00zz__match_descriptionsz00));
		}
	}



/* isSuccess? */
	BGL_EXPORTED_DEF obj_t BGl_isSuccesszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_43)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 505 */
			return
				BBOOL((CAR(BgL_cz00_43) == BGl_symbol2763z00zz__match_descriptionsz00));
		}
	}



/* _isSuccess? */
	obj_t BGl__isSuccesszf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3285,
		obj_t BgL_cz00_3286)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 505 */
			return
				BBOOL(
				(CAR(BgL_cz00_3286) == BGl_symbol2763z00zz__match_descriptionsz00));
		}
	}



/* isTop? */
	BGL_EXPORTED_DEF obj_t BGl_isTopzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_44)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 507 */
			return
				BBOOL((CAR(BgL_cz00_44) == BGl_symbol2787z00zz__match_descriptionsz00));
		}
	}



/* _isTop? */
	obj_t BGl__isTopzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3287,
		obj_t BgL_cz00_3288)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 507 */
			return
				BBOOL(
				(CAR(BgL_cz00_3288) == BGl_symbol2787z00zz__match_descriptionsz00));
		}
	}



/* isBottom? */
	BGL_EXPORTED_DEF obj_t BGl_isBottomzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_45)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 509 */
			return
				BBOOL((CAR(BgL_cz00_45) == BGl_symbol2758z00zz__match_descriptionsz00));
		}
	}



/* _isBottom? */
	obj_t BGl__isBottomzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3289,
		obj_t BgL_cz00_3290)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 509 */
			return
				BBOOL(
				(CAR(BgL_cz00_3290) == BGl_symbol2758z00zz__match_descriptionsz00));
		}
	}



/* isQuote? */
	BGL_EXPORTED_DEF obj_t BGl_isQuotezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_46)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 511 */
			return
				BBOOL((CAR(BgL_cz00_46) == BGl_symbol2765z00zz__match_descriptionsz00));
		}
	}



/* _isQuote? */
	obj_t BGl__isQuotezf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3291,
		obj_t BgL_cz00_3292)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 511 */
			return
				BBOOL(
				(CAR(BgL_cz00_3292) == BGl_symbol2765z00zz__match_descriptionsz00));
		}
	}



/* isVar? */
	BGL_EXPORTED_DEF obj_t BGl_isVarzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_47)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 513 */
			return
				BBOOL((CAR(BgL_cz00_47) == BGl_symbol2744z00zz__match_descriptionsz00));
		}
	}



/* _isVar? */
	obj_t BGl__isVarzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3293,
		obj_t BgL_cz00_3294)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 513 */
			return
				BBOOL(
				(CAR(BgL_cz00_3294) == BGl_symbol2744z00zz__match_descriptionsz00));
		}
	}



/* isNot? */
	BGL_EXPORTED_DEF obj_t BGl_isNotzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_48)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 515 */
			return
				BBOOL((CAR(BgL_cz00_48) == BGl_symbol2760z00zz__match_descriptionsz00));
		}
	}



/* _isNot? */
	obj_t BGl__isNotzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3295,
		obj_t BgL_cz00_3296)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 515 */
			return
				BBOOL(
				(CAR(BgL_cz00_3296) == BGl_symbol2760z00zz__match_descriptionsz00));
		}
	}



/* isAnd? */
	BGL_EXPORTED_DEF obj_t BGl_isAndzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_49)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 517 */
			return
				BBOOL((CAR(BgL_cz00_49) == BGl_symbol2732z00zz__match_descriptionsz00));
		}
	}



/* _isAnd? */
	obj_t BGl__isAndzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3297,
		obj_t BgL_cz00_3298)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 517 */
			return
				BBOOL(
				(CAR(BgL_cz00_3298) == BGl_symbol2732z00zz__match_descriptionsz00));
		}
	}



/* isOr? */
	BGL_EXPORTED_DEF obj_t BGl_isOrzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_50)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 519 */
			return
				BBOOL((CAR(BgL_cz00_50) == BGl_symbol2728z00zz__match_descriptionsz00));
		}
	}



/* _isOr? */
	obj_t BGl__isOrzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3299,
		obj_t BgL_cz00_3300)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 519 */
			return
				BBOOL(
				(CAR(BgL_cz00_3300) == BGl_symbol2728z00zz__match_descriptionsz00));
		}
	}



/* isT-Or? */
	BGL_EXPORTED_DEF obj_t BGl_isTzd2Orzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_51)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 521 */
			return
				BBOOL((CAR(BgL_cz00_51) == BGl_symbol2730z00zz__match_descriptionsz00));
		}
	}



/* _isT-Or? */
	obj_t BGl__isTzd2Orzf3z21zz__match_descriptionsz00(obj_t BgL_envz00_3301,
		obj_t BgL_cz00_3302)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 521 */
			return
				BBOOL(
				(CAR(BgL_cz00_3302) == BGl_symbol2730z00zz__match_descriptionsz00));
		}
	}



/* isTagged-Or? */
	BGL_EXPORTED_DEF obj_t BGl_isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_52)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 523 */
			return
				BBOOL((CAR(BgL_cz00_52) == BGl_symbol2777z00zz__match_descriptionsz00));
		}
	}



/* _isTagged-Or? */
	obj_t BGl__isTaggedzd2Orzf3z21zz__match_descriptionsz00(obj_t BgL_envz00_3303,
		obj_t BgL_cz00_3304)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 523 */
			return
				BBOOL(
				(CAR(BgL_cz00_3304) == BGl_symbol2777z00zz__match_descriptionsz00));
		}
	}



/* isCons? */
	BGL_EXPORTED_DEF obj_t BGl_isConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_53)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 525 */
			return
				BBOOL((CAR(BgL_cz00_53) == BGl_symbol2735z00zz__match_descriptionsz00));
		}
	}



/* _isCons? */
	obj_t BGl__isConszf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3305,
		obj_t BgL_cz00_3306)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 525 */
			return
				BBOOL(
				(CAR(BgL_cz00_3306) == BGl_symbol2735z00zz__match_descriptionsz00));
		}
	}



/* isACons? */
	BGL_EXPORTED_DEF obj_t BGl_isAConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_54)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 527 */
			return
				BBOOL((CAR(BgL_cz00_54) == BGl_symbol2768z00zz__match_descriptionsz00));
		}
	}



/* _isACons? */
	obj_t BGl__isAConszf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3307,
		obj_t BgL_cz00_3308)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 527 */
			return
				BBOOL(
				(CAR(BgL_cz00_3308) == BGl_symbol2768z00zz__match_descriptionsz00));
		}
	}



/* isXCons? */
	BGL_EXPORTED_DEF obj_t BGl_isXConszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_55)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 529 */
			return
				BBOOL((CAR(BgL_cz00_55) == BGl_symbol2770z00zz__match_descriptionsz00));
		}
	}



/* _isXCons? */
	obj_t BGl__isXConszf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3309,
		obj_t BgL_cz00_3310)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 529 */
			return
				BBOOL(
				(CAR(BgL_cz00_3310) == BGl_symbol2770z00zz__match_descriptionsz00));
		}
	}



/* isTimes? */
	BGL_EXPORTED_DEF obj_t BGl_isTimeszf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_56)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 531 */
			return
				BBOOL((CAR(BgL_cz00_56) == BGl_symbol2742z00zz__match_descriptionsz00));
		}
	}



/* _isTimes? */
	obj_t BGl__isTimeszf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3311,
		obj_t BgL_cz00_3312)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 531 */
			return
				BBOOL(
				(CAR(BgL_cz00_3312) == BGl_symbol2742z00zz__match_descriptionsz00));
		}
	}



/* containsHole? */
	BGL_EXPORTED_DEF obj_t BGl_containsHolezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_57)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 533 */
			return
				BBOOL((CAR(BgL_cz00_57) == BGl_symbol2789z00zz__match_descriptionsz00));
		}
	}



/* _containsHole? */
	obj_t BGl__containsHolezf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3313,
		obj_t BgL_cz00_3314)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 533 */
			return
				BBOOL(
				(CAR(BgL_cz00_3314) == BGl_symbol2789z00zz__match_descriptionsz00));
		}
	}



/* isHole? */
	BGL_EXPORTED_DEF obj_t BGl_isHolezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_58)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 535 */
			return
				BBOOL((CAR(BgL_cz00_58) == BGl_symbol2789z00zz__match_descriptionsz00));
		}
	}



/* _isHole? */
	obj_t BGl__isHolezf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3315,
		obj_t BgL_cz00_3316)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 535 */
			return
				BBOOL(
				(CAR(BgL_cz00_3316) == BGl_symbol2789z00zz__match_descriptionsz00));
		}
	}



/* isTree? */
	BGL_EXPORTED_DEF obj_t BGl_isTreezf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_59)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 537 */
			return
				BBOOL((CAR(BgL_cz00_59) == BGl_symbol2740z00zz__match_descriptionsz00));
		}
	}



/* _isTree? */
	obj_t BGl__isTreezf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3317,
		obj_t BgL_cz00_3318)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 537 */
			return
				BBOOL(
				(CAR(BgL_cz00_3318) == BGl_symbol2740z00zz__match_descriptionsz00));
		}
	}



/* isVector? */
	BGL_EXPORTED_DEF obj_t BGl_isVectorzf3zf3zz__match_descriptionsz00(obj_t
		BgL_cz00_60)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 539 */
			return
				BBOOL((CAR(BgL_cz00_60) == BGl_symbol2780z00zz__match_descriptionsz00));
		}
	}



/* _isVector? */
	obj_t BGl__isVectorzf3zf3zz__match_descriptionsz00(obj_t BgL_envz00_3319,
		obj_t BgL_cz00_3320)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 539 */
			return
				BBOOL(
				(CAR(BgL_cz00_3320) == BGl_symbol2780z00zz__match_descriptionsz00));
		}
	}



/* isVector-begin? */
	BGL_EXPORTED_DEF obj_t
		BGl_isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t BgL_cz00_61)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 541 */
			return
				BBOOL((CAR(BgL_cz00_61) == BGl_symbol2746z00zz__match_descriptionsz00));
		}
	}



/* _isVector-begin? */
	obj_t BGl__isVectorzd2beginzf3z21zz__match_descriptionsz00(obj_t
		BgL_envz00_3321, obj_t BgL_cz00_3322)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 541 */
			return
				BBOOL(
				(CAR(BgL_cz00_3322) == BGl_symbol2746z00zz__match_descriptionsz00));
		}
	}



/* isVector-end? */
	BGL_EXPORTED_DEF obj_t BGl_isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t
		BgL_cz00_62)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 543 */
			return
				BBOOL((CAR(BgL_cz00_62) == BGl_symbol2748z00zz__match_descriptionsz00));
		}
	}



/* _isVector-end? */
	obj_t BGl__isVectorzd2endzf3z21zz__match_descriptionsz00(obj_t
		BgL_envz00_3323, obj_t BgL_cz00_3324)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 543 */
			return
				BBOOL(
				(CAR(BgL_cz00_3324) == BGl_symbol2748z00zz__match_descriptionsz00));
		}
	}



/* vector-plus */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t
		BgL_vz00_63, obj_t BgL_iz00_64, obj_t BgL_dz00_65)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 552 */
			{	/* Match/descr.scm 553 */
				bool_t BgL_testz00_4633;

				{	/* Match/descr.scm 553 */
					int BgL_arg2405z00_1356;

					{	/* Match/descr.scm 553 */
						obj_t BgL_arg2406z00_1357;

						{	/* Match/descr.scm 553 */
							obj_t BgL_pairz00_2762;

							BgL_pairz00_2762 = BgL_vz00_63;
							BgL_arg2406z00_1357 = CAR(CDR(CDR(BgL_pairz00_2762)));
						}
						BgL_arg2405z00_1356 = VECTOR_LENGTH(BgL_arg2406z00_1357);
					}
					BgL_testz00_4633 =
						((long) CINT(BgL_iz00_64) >= (long) (BgL_arg2405z00_1356));
				}
				if (BgL_testz00_4633)
					{	/* Match/descr.scm 554 */
						obj_t BgL_arg2401z00_1352;

						obj_t BgL_arg2402z00_1353;

						{	/* Match/descr.scm 554 */
							obj_t BgL_pairz00_2771;

							BgL_pairz00_2771 = BgL_vz00_63;
							BgL_arg2401z00_1352 = CDR(CDR(BgL_pairz00_2771));
						}
						{	/* Match/descr.scm 555 */
							obj_t BgL_arg2403z00_1354;

							obj_t BgL_arg2404z00_1355;

							{	/* Match/descr.scm 555 */
								obj_t BgL_pairz00_2775;

								BgL_pairz00_2775 = BgL_vz00_63;
								BgL_arg2403z00_1354 = CAR(CDR(CDR(BgL_pairz00_2775)));
							}
							BgL_arg2404z00_1355 = BGl_list2762z00zz__match_descriptionsz00;
							{	/* Match/descr.scm 555 */
								obj_t BgL_resz00_2784;

								{	/* Match/descr.scm 555 */
									obj_t BgL_newzd2vectorzd2_2785;

									BgL_newzd2vectorzd2_2785 =
										make_vector(CINT(BgL_iz00_64), BgL_arg2404z00_1355);
									{
										long BgL_iz00_2787;

										BgL_iz00_2787 = ((long) 0);
									BgL_loopz00_2786:
										{	/* Match/descr.scm 555 */
											bool_t BgL_testz00_4648;

											{	/* Match/descr.scm 555 */
												int BgL_arg2447z00_2789;

												BgL_arg2447z00_2789 =
													VECTOR_LENGTH(BgL_arg2403z00_1354);
												BgL_testz00_4648 =
													(BgL_iz00_2787 == (long) (BgL_arg2447z00_2789));
											}
											if (BgL_testz00_4648)
												{	/* Match/descr.scm 555 */
													BgL_resz00_2784 = BgL_newzd2vectorzd2_2785;
												}
											else
												{	/* Match/descr.scm 555 */
													VECTOR_SET(BgL_newzd2vectorzd2_2785,
														(int) (BgL_iz00_2787),
														VECTOR_REF(BgL_arg2403z00_1354,
															(int) (BgL_iz00_2787)));
													{
														long BgL_iz00_4656;

														BgL_iz00_4656 = (BgL_iz00_2787 + ((long) 1));
														BgL_iz00_2787 = BgL_iz00_4656;
														goto BgL_loopz00_2786;
													}
												}
										}
									}
								}
								BgL_arg2402z00_1353 = BgL_resz00_2784;
							}
						}
						SET_CAR(BgL_arg2401z00_1352, BgL_arg2402z00_1353);
					}
				else
					{	/* Match/descr.scm 553 */
						BTRUE;
					}
			}
			{	/* Match/descr.scm 557 */
				obj_t BgL_resz00_1358;

				{	/* Match/descr.scm 557 */
					obj_t BgL_arg2411z00_1363;

					obj_t BgL_arg2412z00_1364;

					BgL_arg2411z00_1363 = BGl_symbol2780z00zz__match_descriptionsz00;
					{	/* Match/descr.scm 557 */
						int BgL_arg2413z00_1365;

						obj_t BgL_arg2414z00_1366;

						{	/* Match/descr.scm 557 */
							obj_t BgL_arg2418z00_1370;

							{	/* Match/descr.scm 557 */
								obj_t BgL_pairz00_2804;

								BgL_pairz00_2804 = BgL_vz00_63;
								BgL_arg2418z00_1370 = CAR(CDR(CDR(BgL_pairz00_2804)));
							}
							BgL_arg2413z00_1365 = VECTOR_LENGTH(BgL_arg2418z00_1370);
						}
						{	/* Match/descr.scm 558 */
							obj_t BgL_arg2419z00_1371;

							{	/* Match/descr.scm 558 */
								obj_t BgL_arg2420z00_1372;

								{	/* Match/descr.scm 558 */
									obj_t BgL_pairz00_2811;

									BgL_pairz00_2811 = BgL_vz00_63;
									BgL_arg2420z00_1372 = CAR(CDR(CDR(BgL_pairz00_2811)));
								}
								BgL_arg2419z00_1371 =
									BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
									(BgL_arg2420z00_1372);
							}
							BgL_arg2414z00_1366 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BgL_arg2419z00_1371);
						}
						{	/* Match/descr.scm 557 */
							obj_t BgL_list2416z00_1368;

							{	/* Match/descr.scm 557 */
								obj_t BgL_arg2417z00_1369;

								BgL_arg2417z00_1369 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2416z00_1368 =
									MAKE_PAIR(BgL_arg2414z00_1366, BgL_arg2417z00_1369);
							}
							BgL_arg2412z00_1364 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
								(BgL_arg2413z00_1365), BgL_list2416z00_1368);
					}}
					BgL_resz00_1358 = MAKE_PAIR(BgL_arg2411z00_1363, BgL_arg2412z00_1364);
				}
				{	/* Match/descr.scm 559 */
					obj_t BgL_arg2407z00_1359;

					obj_t BgL_arg2408z00_1360;

					BgL_arg2407z00_1359 = CAR(CDR(CDR(BgL_resz00_1358)));
					{	/* Match/descr.scm 560 */
						obj_t BgL_arg2409z00_1361;

						{	/* Match/descr.scm 560 */
							obj_t BgL_arg2410z00_1362;

							{	/* Match/descr.scm 560 */
								obj_t BgL_pairz00_2823;

								BgL_pairz00_2823 = BgL_vz00_63;
								BgL_arg2410z00_1362 = CAR(CDR(CDR(BgL_pairz00_2823)));
							}
							BgL_arg2409z00_1361 =
								VECTOR_REF(BgL_arg2410z00_1362, CINT(BgL_iz00_64));
						}
						BgL_arg2408z00_1360 =
							BGl_patternzd2pluszd2zz__match_descriptionsz00
							(BgL_arg2409z00_1361, BgL_dz00_65);
					}
					VECTOR_SET(BgL_arg2407z00_1359,
						CINT(BgL_iz00_64), BgL_arg2408z00_1360);
				}
				return BgL_resz00_1358;
			}
		}
	}



/* _vector-plus */
	obj_t BGl__vectorzd2pluszd2zz__match_descriptionsz00(obj_t BgL_envz00_3325,
		obj_t BgL_vz00_3326, obj_t BgL_iz00_3327, obj_t BgL_dz00_3328)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 552 */
			return
				BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_vz00_3326,
				BgL_iz00_3327, BgL_dz00_3328);
		}
	}



/* vector-minus */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2minuszd2zz__match_descriptionsz00(obj_t
		BgL_vz00_66, obj_t BgL_iz00_67, obj_t BgL_dz00_68)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 563 */
			{	/* Match/descr.scm 564 */
				bool_t BgL_testz00_4685;

				{	/* Match/descr.scm 564 */
					int BgL_arg2426z00_1378;

					{	/* Match/descr.scm 564 */
						obj_t BgL_arg2427z00_1379;

						{	/* Match/descr.scm 564 */
							obj_t BgL_pairz00_2834;

							BgL_pairz00_2834 = BgL_vz00_66;
							BgL_arg2427z00_1379 = CAR(CDR(CDR(BgL_pairz00_2834)));
						}
						BgL_arg2426z00_1378 = VECTOR_LENGTH(BgL_arg2427z00_1379);
					}
					BgL_testz00_4685 =
						((long) CINT(BgL_iz00_67) >= (long) (BgL_arg2426z00_1378));
				}
				if (BgL_testz00_4685)
					{	/* Match/descr.scm 565 */
						obj_t BgL_arg2422z00_1374;

						obj_t BgL_arg2423z00_1375;

						{	/* Match/descr.scm 565 */
							obj_t BgL_pairz00_2843;

							BgL_pairz00_2843 = BgL_vz00_66;
							BgL_arg2422z00_1374 = CDR(CDR(BgL_pairz00_2843));
						}
						{	/* Match/descr.scm 566 */
							obj_t BgL_arg2424z00_1376;

							obj_t BgL_arg2425z00_1377;

							{	/* Match/descr.scm 566 */
								obj_t BgL_pairz00_2847;

								BgL_pairz00_2847 = BgL_vz00_66;
								BgL_arg2424z00_1376 = CAR(CDR(CDR(BgL_pairz00_2847)));
							}
							BgL_arg2425z00_1377 = BGl_list2762z00zz__match_descriptionsz00;
							{	/* Match/descr.scm 566 */
								obj_t BgL_resz00_2856;

								{	/* Match/descr.scm 566 */
									obj_t BgL_newzd2vectorzd2_2857;

									BgL_newzd2vectorzd2_2857 =
										make_vector(CINT(BgL_iz00_67), BgL_arg2425z00_1377);
									{
										long BgL_iz00_2859;

										BgL_iz00_2859 = ((long) 0);
									BgL_loopz00_2858:
										{	/* Match/descr.scm 566 */
											bool_t BgL_testz00_4700;

											{	/* Match/descr.scm 566 */
												int BgL_arg2447z00_2861;

												BgL_arg2447z00_2861 =
													VECTOR_LENGTH(BgL_arg2424z00_1376);
												BgL_testz00_4700 =
													(BgL_iz00_2859 == (long) (BgL_arg2447z00_2861));
											}
											if (BgL_testz00_4700)
												{	/* Match/descr.scm 566 */
													BgL_resz00_2856 = BgL_newzd2vectorzd2_2857;
												}
											else
												{	/* Match/descr.scm 566 */
													VECTOR_SET(BgL_newzd2vectorzd2_2857,
														(int) (BgL_iz00_2859),
														VECTOR_REF(BgL_arg2424z00_1376,
															(int) (BgL_iz00_2859)));
													{
														long BgL_iz00_4708;

														BgL_iz00_4708 = (BgL_iz00_2859 + ((long) 1));
														BgL_iz00_2859 = BgL_iz00_4708;
														goto BgL_loopz00_2858;
													}
												}
										}
									}
								}
								BgL_arg2423z00_1375 = BgL_resz00_2856;
							}
						}
						SET_CAR(BgL_arg2422z00_1374, BgL_arg2423z00_1375);
					}
				else
					{	/* Match/descr.scm 564 */
						BTRUE;
					}
			}
			{	/* Match/descr.scm 568 */
				obj_t BgL_resz00_1380;

				{	/* Match/descr.scm 568 */
					obj_t BgL_arg2432z00_1385;

					obj_t BgL_arg2434z00_1386;

					BgL_arg2432z00_1385 = BGl_symbol2780z00zz__match_descriptionsz00;
					{	/* Match/descr.scm 568 */
						long BgL_arg2435z00_1387;

						obj_t BgL_arg2436z00_1388;

						{	/* Match/descr.scm 568 */
							obj_t BgL_auxz00_4711;

							{	/* Match/descr.scm 568 */
								obj_t BgL_pairz00_2876;

								BgL_pairz00_2876 = BgL_vz00_66;
								BgL_auxz00_4711 = CAR(CDR(CDR(BgL_pairz00_2876)));
							}
							BgL_arg2435z00_1387 = bgl_list_length(BgL_auxz00_4711);
						}
						{	/* Match/descr.scm 569 */
							obj_t BgL_arg2441z00_1393;

							{	/* Match/descr.scm 569 */
								obj_t BgL_arg2442z00_1394;

								{	/* Match/descr.scm 569 */
									obj_t BgL_pairz00_2882;

									BgL_pairz00_2882 = BgL_vz00_66;
									BgL_arg2442z00_1394 = CAR(CDR(CDR(BgL_pairz00_2882)));
								}
								BgL_arg2441z00_1393 =
									BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
									(BgL_arg2442z00_1394);
							}
							BgL_arg2436z00_1388 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BgL_arg2441z00_1393);
						}
						{	/* Match/descr.scm 568 */
							obj_t BgL_list2438z00_1390;

							{	/* Match/descr.scm 568 */
								obj_t BgL_arg2439z00_1391;

								BgL_arg2439z00_1391 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2438z00_1390 =
									MAKE_PAIR(BgL_arg2436z00_1388, BgL_arg2439z00_1391);
							}
							BgL_arg2434z00_1386 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
								(BgL_arg2435z00_1387), BgL_list2438z00_1390);
					}}
					BgL_resz00_1380 = MAKE_PAIR(BgL_arg2432z00_1385, BgL_arg2434z00_1386);
				}
				{	/* Match/descr.scm 570 */
					obj_t BgL_arg2428z00_1381;

					obj_t BgL_arg2429z00_1382;

					BgL_arg2428z00_1381 = CAR(CDR(CDR(BgL_resz00_1380)));
					{	/* Match/descr.scm 571 */
						obj_t BgL_arg2430z00_1383;

						{	/* Match/descr.scm 571 */
							obj_t BgL_arg2431z00_1384;

							{	/* Match/descr.scm 571 */
								obj_t BgL_pairz00_2894;

								BgL_pairz00_2894 = BgL_vz00_66;
								BgL_arg2431z00_1384 = CAR(CDR(CDR(BgL_pairz00_2894)));
							}
							BgL_arg2430z00_1383 =
								VECTOR_REF(BgL_arg2431z00_1384, CINT(BgL_iz00_67));
						}
						BgL_arg2429z00_1382 =
							BGl_patternzd2minuszd2zz__match_descriptionsz00
							(BgL_arg2430z00_1383, BgL_dz00_68);
					}
					VECTOR_SET(BgL_arg2428z00_1381,
						CINT(BgL_iz00_67), BgL_arg2429z00_1382);
				}
				return BgL_resz00_1380;
			}
		}
	}



/* _vector-minus */
	obj_t BGl__vectorzd2minuszd2zz__match_descriptionsz00(obj_t BgL_envz00_3329,
		obj_t BgL_vz00_3330, obj_t BgL_iz00_3331, obj_t BgL_dz00_3332)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 563 */
			return
				BGl_vectorzd2minuszd2zz__match_descriptionsz00(BgL_vz00_3330,
				BgL_iz00_3331, BgL_dz00_3332);
		}
	}



/* extend-vector */
	BGL_EXPORTED_DEF obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t
		BgL_vz00_69, obj_t BgL_lgz00_70, obj_t BgL_fillz00_71)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 578 */
			{	/* Match/descr.scm 580 */
				obj_t BgL_resz00_2905;

				{	/* Match/descr.scm 580 */
					obj_t BgL_newzd2vectorzd2_2906;

					BgL_newzd2vectorzd2_2906 =
						make_vector(CINT(BgL_lgz00_70), BgL_fillz00_71);
					{
						long BgL_iz00_2908;

						BgL_iz00_2908 = ((long) 0);
					BgL_loopz00_2907:
						{	/* Match/descr.scm 580 */
							bool_t BgL_testz00_4740;

							{	/* Match/descr.scm 580 */
								int BgL_arg2447z00_2910;

								BgL_arg2447z00_2910 = VECTOR_LENGTH(BgL_vz00_69);
								BgL_testz00_4740 =
									(BgL_iz00_2908 == (long) (BgL_arg2447z00_2910));
							}
							if (BgL_testz00_4740)
								{	/* Match/descr.scm 580 */
									BgL_resz00_2905 = BgL_newzd2vectorzd2_2906;
								}
							else
								{	/* Match/descr.scm 580 */
									VECTOR_SET(BgL_newzd2vectorzd2_2906,
										(int) (BgL_iz00_2908),
										VECTOR_REF(BgL_vz00_69, (int) (BgL_iz00_2908)));
									{
										long BgL_iz00_4748;

										BgL_iz00_4748 = (BgL_iz00_2908 + ((long) 1));
										BgL_iz00_2908 = BgL_iz00_4748;
										goto BgL_loopz00_2907;
									}
								}
						}
					}
				}
				return BgL_resz00_2905;
			}
		}
	}



/* _extend-vector */
	obj_t BGl__extendzd2vectorzd2zz__match_descriptionsz00(obj_t BgL_envz00_3333,
		obj_t BgL_vz00_3334, obj_t BgL_lgz00_3335, obj_t BgL_fillz00_3336)
	{
		AN_OBJECT;
		{	/* Match/descr.scm 578 */
			return
				BGl_extendzd2vectorzd2zz__match_descriptionsz00(BgL_vz00_3334,
				BgL_lgz00_3335, BgL_fillz00_3336);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_descriptionsz00()
	{
		AN_OBJECT;
		{	/* Match/descr.scm 12 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_descriptionsz00()
	{
		AN_OBJECT;
		{	/* Match/descr.scm 12 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_descriptionsz00()
	{
		AN_OBJECT;
		{	/* Match/descr.scm 12 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 228296415),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2791z00zz__match_descriptionsz00));
		}
	}

#ifdef __cplusplus
}
#endif
