/*===========================================================================*/
/*   (Match/compiler.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Match/compiler.scm -indent -o objs/obj_u/Match/compiler.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2961z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2963z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2967z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2971z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2973z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2975z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2979z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2981z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2984z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2986z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32091ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_rze2initze2zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32092ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_unfoldz00zz__match_compilerz00(obj_t, obj_t, obj_t);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_patternzd2carzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32094ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32377ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32105ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_zc3anonymousza32243ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pcompilez00zz__match_compilerz00(obj_t);
	extern obj_t BGl_patternzd2cdrzd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_zc3anonymousza32107ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32244ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32381ze3z83zz__match_compilerz00(obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_patternzd2minuszd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32110ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_instanciatezd2tryzd2zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32384ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_compilerz00();
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_compilezd2vectorzd2beginz00zz__match_compilerz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_morezd2precisezf3z21zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32407ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32397ze3z83zz__match_compilerz00(obj_t, obj_t);
	static bool_t BGl_isDirectCallzf3zf3zz__match_compilerz00(obj_t);
	extern obj_t BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_succeszd2conszd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_integersz72z72zz__match_compilerz00(long, long);
	static obj_t BGl_cnstzd2initzd2zz__match_compilerz00();
	static obj_t BGl__mze2initze2zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32275ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl__pcompilez00zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32425ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_compilerz00();
	static obj_t BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_compilezd2orzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_extendza2z72z72za2zz__match_compilerz00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32443ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_compilerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_list2885z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_compileza2_2884za2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__match_compilerz00();
	extern long bgl_list_length(obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32451ze3z83zz__match_compilerz00(obj_t, obj_t);
	extern obj_t BGl_compatiblezf3zf3zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_list2977z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_list2978z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_compilezd2varzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	static obj_t BGl_mze2initze2zz__match_compilerz00(obj_t);
	static obj_t BGl_zc3anonymousza32187ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_dze2initze2zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32191ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_compilezd2structzd2patz00zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_patternzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32205ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_countzd2occurrenceszd2zz__match_compilerz00(obj_t, obj_t,
		long);
	static obj_t BGl_zc3anonymousza32197ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_extendza2z72zd0zz__match_compilerz00(obj_t, obj_t);
	extern obj_t BGl_vectorzd2pluszd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32066ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_compilez00zz__match_compilerz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32067ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_compilezd2timeszd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32071ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32072ze3z83zz__match_compilerz00(obj_t, obj_t);
	extern obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	static obj_t BGl_buildzd2letzd2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32074ze3z83zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_compilezd2vectorzd2consz00zz__match_compilerz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32360ze3z83zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_symbol2886z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2889z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2901z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2891z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2903z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2893z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_buildzd2ifzd2zz__match_compilerz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2905z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2895z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2907z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2909z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2899z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2911z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2913z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2918z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2920z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl__za7ze2initz45zz__match_compilerz00(obj_t, obj_t);
	static obj_t BGl_symbol2922z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2924z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2926z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2928z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2931z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2934z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2936z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__match_compilerz00();
	static obj_t BGl_symbol2938z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2940z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2942z00zz__match_compilerz00 = BUNSPEC;
	extern obj_t BGl_extendzd2vectorzd2zz__match_descriptionsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2944z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2946z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl__kze2initze2zz__match_compilerz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2948z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2950z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2952z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2955z00zz__match_compilerz00 = BUNSPEC;
	static obj_t BGl_symbol2957z00zz__match_compilerz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pcompilezd2envzd2zz__match_compilerz00,
		BgL_bgl__pcompileza700za7za7__2989za7,
		BGl__pcompilez00zz__match_compilerz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_mze2initzd2envz30zz__match_compilerz00,
		BgL_bgl__mza7e2initza7e2za7za7__2990z00,
		BGl__mze2initze2zz__match_compilerz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_za7ze2initzd2envz97zz__match_compilerz00,
		BgL_bgl__za7a7za7e2initza745za7za72991za7,
		BGl__za7ze2initz45zz__match_compilerz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2887z00zz__match_compilerz00,
		BgL_bgl_string2887za700za7za7_2992za7, "any", 3);
	      DEFINE_STRING(BGl_string2888z00zz__match_compilerz00,
		BgL_bgl_string2888za700za7za7_2993za7, "E-", 2);
	      DEFINE_STRING(BGl_string2900z00zz__match_compilerz00,
		BgL_bgl_string2900za700za7za7_2994za7, "not", 3);
	      DEFINE_STRING(BGl_string2890z00zz__match_compilerz00,
		BgL_bgl_string2890za700za7za7_2995za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2902z00zz__match_compilerz00,
		BgL_bgl_string2902za700za7za7_2996za7, "or", 2);
	      DEFINE_STRING(BGl_string2892z00zz__match_compilerz00,
		BgL_bgl_string2892za700za7za7_2997za7, "check", 5);
	      DEFINE_STRING(BGl_string2904z00zz__match_compilerz00,
		BgL_bgl_string2904za700za7za7_2998za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2894z00zz__match_compilerz00,
		BgL_bgl_string2894za700za7za7_2999za7, "if", 2);
	      DEFINE_STRING(BGl_string2906z00zz__match_compilerz00,
		BgL_bgl_string2906za700za7za7_3000za7, "and", 3);
	      DEFINE_STRING(BGl_string2896z00zz__match_compilerz00,
		BgL_bgl_string2896za700za7za7_3001za7, "quote", 5);
	      DEFINE_STRING(BGl_string2908z00zz__match_compilerz00,
		BgL_bgl_string2908za700za7za7_3002za7, "cons", 4);
	      DEFINE_STRING(BGl_string2898z00zz__match_compilerz00,
		BgL_bgl_string2898za700za7za7_3003za7, "var", 3);
	      DEFINE_STRING(BGl_string2910z00zz__match_compilerz00,
		BgL_bgl_string2910za700za7za7_3004za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2912z00zz__match_compilerz00,
		BgL_bgl_string2912za700za7za7_3005za7, "times", 5);
	      DEFINE_STRING(BGl_string2914z00zz__match_compilerz00,
		BgL_bgl_string2914za700za7za7_3006za7, "tree", 4);
	      DEFINE_STRING(BGl_string2915z00zz__match_compilerz00,
		BgL_bgl_string2915za700za7za7_3007za7, "Tree not yet allowed", 20);
	      DEFINE_STRING(BGl_string2916z00zz__match_compilerz00,
		BgL_bgl_string2916za700za7za7_3008za7, "Incorrect pattern: ", 19);
	      DEFINE_STRING(BGl_string2917z00zz__match_compilerz00,
		BgL_bgl_string2917za700za7za7_3009za7, " *** ", 5);
	      DEFINE_STRING(BGl_string2919z00zz__match_compilerz00,
		BgL_bgl_string2919za700za7za7_3010za7, "hole", 4);
	      DEFINE_STRING(BGl_string2921z00zz__match_compilerz00,
		BgL_bgl_string2921za700za7za7_3011za7, "vector-begin", 12);
	      DEFINE_STRING(BGl_string2923z00zz__match_compilerz00,
		BgL_bgl_string2923za700za7za7_3012za7, "vector-end", 10);
	      DEFINE_STRING(BGl_string2925z00zz__match_compilerz00,
		BgL_bgl_string2925za700za7za7_3013za7, "vector-any", 10);
	      DEFINE_STRING(BGl_string2927z00zz__match_compilerz00,
		BgL_bgl_string2927za700za7za7_3014za7, "vector-cons", 11);
	      DEFINE_STRING(BGl_string2930z00zz__match_compilerz00,
		BgL_bgl_string2930za700za7za7_3015za7, "Not yet allowed", 15);
	      DEFINE_STRING(BGl_string2929z00zz__match_compilerz00,
		BgL_bgl_string2929za700za7za7_3016za7, "vector-times", 12);
	      DEFINE_STRING(BGl_string2932z00zz__match_compilerz00,
		BgL_bgl_string2932za700za7za7_3017za7, "struct-pat", 10);
	      DEFINE_STRING(BGl_string2933z00zz__match_compilerz00,
		BgL_bgl_string2933za700za7za7_3018za7, "Unrecognized pattern", 20);
	      DEFINE_STRING(BGl_string2935z00zz__match_compilerz00,
		BgL_bgl_string2935za700za7za7_3019za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2937z00zz__match_compilerz00,
		BgL_bgl_string2937za700za7za7_3020za7, "vector-length", 13);
	      DEFINE_STRING(BGl_string2939z00zz__match_compilerz00,
		BgL_bgl_string2939za700za7za7_3021za7, "null?", 5);
	      DEFINE_STRING(BGl_string2941z00zz__match_compilerz00,
		BgL_bgl_string2941za700za7za7_3022za7, "flonum?", 7);
	      DEFINE_STRING(BGl_string2943z00zz__match_compilerz00,
		BgL_bgl_string2943za700za7za7_3023za7, "=fl", 3);
	      DEFINE_STRING(BGl_string2945z00zz__match_compilerz00,
		BgL_bgl_string2945za700za7za7_3024za7, "number?", 7);
	      DEFINE_STRING(BGl_string2947z00zz__match_compilerz00,
		BgL_bgl_string2947za700za7za7_3025za7, "=", 1);
	      DEFINE_STRING(BGl_string2949z00zz__match_compilerz00,
		BgL_bgl_string2949za700za7za7_3026za7, "string?", 7);
	      DEFINE_STRING(BGl_string2951z00zz__match_compilerz00,
		BgL_bgl_string2951za700za7za7_3027za7, "string=?", 8);
	      DEFINE_STRING(BGl_string2953z00zz__match_compilerz00,
		BgL_bgl_string2953za700za7za7_3028za7, "equal?", 6);
	      DEFINE_STRING(BGl_string2954z00zz__match_compilerz00,
		BgL_bgl_string2954za700za7za7_3029za7, "KAP-", 4);
	      DEFINE_STRING(BGl_string2956z00zz__match_compilerz00,
		BgL_bgl_string2956za700za7za7_3030za7, "labels", 6);
	      DEFINE_STRING(BGl_string2958z00zz__match_compilerz00,
		BgL_bgl_string2958za700za7za7_3031za7, "dummy", 5);
	      DEFINE_STRING(BGl_string2960z00zz__match_compilerz00,
		BgL_bgl_string2960za700za7za7_3032za7, "TAG", 3);
	      DEFINE_STRING(BGl_string2959z00zz__match_compilerz00,
		BgL_bgl_string2959za700za7za7_3033za7, "KAP", 3);
	      DEFINE_STRING(BGl_string2962z00zz__match_compilerz00,
		BgL_bgl_string2962za700za7za7_3034za7, "unbound", 7);
	      DEFINE_STRING(BGl_string2964z00zz__match_compilerz00,
		BgL_bgl_string2964za700za7za7_3035za7, "let", 3);
	      DEFINE_STRING(BGl_string2965z00zz__match_compilerz00,
		BgL_bgl_string2965za700za7za7_3036za7, "CAR-", 4);
	      DEFINE_STRING(BGl_string2966z00zz__match_compilerz00,
		BgL_bgl_string2966za700za7za7_3037za7, "CDR-", 4);
	      DEFINE_STRING(BGl_string2968z00zz__match_compilerz00,
		BgL_bgl_string2968za700za7za7_3038za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2970z00zz__match_compilerz00,
		BgL_bgl_string2970za700za7za7_3039za7, "TRY-", 4);
	      DEFINE_STRING(BGl_string2969z00zz__match_compilerz00,
		BgL_bgl_string2969za700za7za7_3040za7, "G-", 2);
	      DEFINE_STRING(BGl_string2972z00zz__match_compilerz00,
		BgL_bgl_string2972za700za7za7_3041za7, "vector", 6);
	      DEFINE_STRING(BGl_string2974z00zz__match_compilerz00,
		BgL_bgl_string2974za700za7za7_3042za7, ">=", 2);
	      DEFINE_STRING(BGl_string2976z00zz__match_compilerz00,
		BgL_bgl_string2976za700za7za7_3043za7, "vector?", 7);
	      DEFINE_STRING(BGl_string2980z00zz__match_compilerz00,
		BgL_bgl_string2980za700za7za7_3044za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string2982z00zz__match_compilerz00,
		BgL_bgl_string2982za700za7za7_3045za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string2983z00zz__match_compilerz00,
		BgL_bgl_string2983za700za7za7_3046za7, "No current repetition named", 27);
	      DEFINE_STRING(BGl_string2985z00zz__match_compilerz00,
		BgL_bgl_string2985za700za7za7_3047za7, "car", 3);
	      DEFINE_STRING(BGl_string2987z00zz__match_compilerz00,
		BgL_bgl_string2987za700za7za7_3048za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2988z00zz__match_compilerz00,
		BgL_bgl_string2988za700za7za7_3049za7, "__match_compiler", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_kze2initzd2envz30zz__match_compilerz00,
		BgL_bgl__kza7e2initza7e2za7za7__3050z00,
		BGl__kze2initze2zz__match_compilerz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_compilerz00(long
		BgL_checksumz00_3679, char *BgL_fromz00_3680)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_compilerz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_compilerz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__match_compilerz00();
					BGl_importedzd2moduleszd2initz00zz__match_compilerz00();
					BGl_toplevelzd2initzd2zz__match_compilerz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_compilerz00()
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 26 */
			BGl_symbol2886z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2887z00zz__match_compilerz00);
			BGl_list2885z00zz__match_compilerz00 =
				MAKE_PAIR(BGl_symbol2886z00zz__match_compilerz00, BNIL);
			BGl_symbol2889z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2890z00zz__match_compilerz00);
			BGl_symbol2891z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2892z00zz__match_compilerz00);
			BGl_symbol2893z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2894z00zz__match_compilerz00);
			BGl_symbol2895z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2896z00zz__match_compilerz00);
			BGl_symbol2897z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2898z00zz__match_compilerz00);
			BGl_symbol2899z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2900z00zz__match_compilerz00);
			BGl_symbol2901z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2902z00zz__match_compilerz00);
			BGl_symbol2903z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2904z00zz__match_compilerz00);
			BGl_symbol2905z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2906z00zz__match_compilerz00);
			BGl_symbol2907z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2908z00zz__match_compilerz00);
			BGl_symbol2909z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2910z00zz__match_compilerz00);
			BGl_symbol2911z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2912z00zz__match_compilerz00);
			BGl_symbol2913z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2914z00zz__match_compilerz00);
			BGl_symbol2918z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2919z00zz__match_compilerz00);
			BGl_symbol2920z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2921z00zz__match_compilerz00);
			BGl_symbol2922z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2923z00zz__match_compilerz00);
			BGl_symbol2924z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2925z00zz__match_compilerz00);
			BGl_symbol2926z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2927z00zz__match_compilerz00);
			BGl_symbol2928z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2929z00zz__match_compilerz00);
			BGl_symbol2931z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2932z00zz__match_compilerz00);
			BGl_symbol2934z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2935z00zz__match_compilerz00);
			BGl_symbol2936z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2937z00zz__match_compilerz00);
			BGl_symbol2938z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2939z00zz__match_compilerz00);
			BGl_symbol2940z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2941z00zz__match_compilerz00);
			BGl_symbol2942z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2943z00zz__match_compilerz00);
			BGl_symbol2944z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2945z00zz__match_compilerz00);
			BGl_symbol2946z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2947z00zz__match_compilerz00);
			BGl_symbol2948z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2949z00zz__match_compilerz00);
			BGl_symbol2950z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2951z00zz__match_compilerz00);
			BGl_symbol2952z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2953z00zz__match_compilerz00);
			BGl_symbol2955z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2956z00zz__match_compilerz00);
			BGl_symbol2957z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2958z00zz__match_compilerz00);
			BGl_symbol2961z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2962z00zz__match_compilerz00);
			BGl_symbol2963z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2964z00zz__match_compilerz00);
			BGl_symbol2967z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2968z00zz__match_compilerz00);
			BGl_symbol2971z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2972z00zz__match_compilerz00);
			BGl_symbol2973z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2974z00zz__match_compilerz00);
			BGl_symbol2975z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2976z00zz__match_compilerz00);
			BGl_list2978z00zz__match_compilerz00 =
				MAKE_PAIR(BGl_symbol2971z00zz__match_compilerz00, BNIL);
			BGl_list2977z00zz__match_compilerz00 =
				MAKE_PAIR(BGl_symbol2899z00zz__match_compilerz00,
				MAKE_PAIR(BGl_list2978z00zz__match_compilerz00, BNIL));
			BGl_symbol2979z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2980z00zz__match_compilerz00);
			BGl_symbol2981z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2982z00zz__match_compilerz00);
			BGl_symbol2984z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2985z00zz__match_compilerz00);
			return (BGl_symbol2986z00zz__match_compilerz00 =
				bstring_to_symbol(BGl_string2987z00zz__match_compilerz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_compilerz00()
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 26 */
			BGl_dze2initze2zz__match_compilerz00 =
				BGl_list2885z00zz__match_compilerz00;
			return (BGl_rze2initze2zz__match_compilerz00 = BNIL, BUNSPEC);
		}
	}



/* pcompile */
	BGL_EXPORTED_DEF obj_t BGl_pcompilez00zz__match_compilerz00(obj_t BgL_fz00_1)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 61 */
			{	/* Match/compiler.scm 62 */
				obj_t BgL_sz00_990;

				BgL_sz00_990 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2888z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 63 */
					obj_t BgL_arg1899z00_991;

					obj_t BgL_arg1900z00_992;

					BgL_arg1899z00_991 = BGl_symbol2889z00zz__match_compilerz00;
					{	/* Match/compiler.scm 63 */
						obj_t BgL_arg1901z00_993;

						obj_t BgL_arg1902z00_994;

						BgL_arg1901z00_993 = MAKE_PAIR(BgL_sz00_990, BNIL);
						BgL_arg1902z00_994 =
							BGl_compilez00zz__match_compilerz00(BgL_fz00_1, BgL_sz00_990,
							BGl_rze2initze2zz__match_compilerz00,
							BGl_mze2initzd2envz30zz__match_compilerz00,
							BGl_kze2initzd2envz30zz__match_compilerz00,
							BGl_za7ze2initzd2envz97zz__match_compilerz00,
							BGl_dze2initze2zz__match_compilerz00);
						{	/* Match/compiler.scm 63 */
							obj_t BgL_list1904z00_996;

							{	/* Match/compiler.scm 63 */
								obj_t BgL_arg1905z00_997;

								BgL_arg1905z00_997 = MAKE_PAIR(BNIL, BNIL);
								BgL_list1904z00_996 =
									MAKE_PAIR(BgL_arg1902z00_994, BgL_arg1905z00_997);
							}
							BgL_arg1900z00_992 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1901z00_993,
								BgL_list1904z00_996);
						}
					}
					return MAKE_PAIR(BgL_arg1899z00_991, BgL_arg1900z00_992);
				}
			}
		}
	}



/* _pcompile */
	obj_t BGl__pcompilez00zz__match_compilerz00(obj_t BgL_envz00_3414,
		obj_t BgL_fz00_3415)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 61 */
			return BGl_pcompilez00zz__match_compilerz00(BgL_fz00_3415);
		}
	}



/* compile */
	obj_t BGl_compilez00zz__match_compilerz00(obj_t BgL_fz00_2, obj_t BgL_ez00_3,
		obj_t BgL_rz00_4, obj_t BgL_mz00_5, obj_t BgL_kz00_6, obj_t BgL_za7za7_7,
		obj_t BgL_dz00_8)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 67 */
		BGl_compilez00zz__match_compilerz00:
			if (CBOOL(BGl_morezd2precisezf3z21zz__match_descriptionsz00(BgL_dz00_8,
						BgL_fz00_2)))
				{	/* Match/compiler.scm 69 */
					return
						PROCEDURE_ENTRY(BgL_kz00_6) (BgL_kz00_6, BgL_rz00_4, BgL_za7za7_7,
						BgL_dz00_8, BEOA);
				}
			else
				{	/* Match/compiler.scm 69 */
					if (CBOOL(BGl_compatiblezf3zf3zz__match_descriptionsz00(BgL_dz00_8,
								BgL_fz00_2)))
						{	/* Match/compiler.scm 71 */
							obj_t BgL_casezd2valuezd2_1000;

							BgL_casezd2valuezd2_1000 = CAR(BgL_fz00_2);
							if (
								(BgL_casezd2valuezd2_1000 ==
									BGl_symbol2886z00zz__match_compilerz00))
								{	/* Match/compiler.scm 71 */
									return
										PROCEDURE_ENTRY(BgL_kz00_6) (BgL_kz00_6, BgL_rz00_4,
										BgL_za7za7_7, BgL_dz00_8, BEOA);
								}
							else
								{	/* Match/compiler.scm 71 */
									if (
										(BgL_casezd2valuezd2_1000 ==
											BGl_symbol2891z00zz__match_compilerz00))
										{	/* Match/compiler.scm 73 */
											obj_t BgL_arg1910z00_1003;

											{	/* Match/compiler.scm 73 */
												obj_t BgL_pairz00_2247;

												BgL_pairz00_2247 = BgL_fz00_2;
												BgL_arg1910z00_1003 = CAR(CDR(BgL_pairz00_2247));
											}
											{	/* Match/compiler.scm 73 */
												obj_t BgL_arg1962z00_2258;

												obj_t BgL_arg1963z00_2259;

												BgL_arg1962z00_2258 =
													BGl_symbol2893z00zz__match_compilerz00;
												{	/* Match/compiler.scm 73 */
													obj_t BgL_arg1965z00_2260;

													obj_t BgL_arg1966z00_2261;

													obj_t BgL_arg1967z00_2262;

													{	/* Match/compiler.scm 73 */
														obj_t BgL_arg1972z00_2264;

														{	/* Match/compiler.scm 73 */
															obj_t BgL_list1973z00_2265;

															BgL_list1973z00_2265 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg1972z00_2264 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_ez00_3, BgL_list1973z00_2265);
														}
														BgL_arg1965z00_2260 =
															MAKE_PAIR(BgL_arg1910z00_1003,
															BgL_arg1972z00_2264);
													}
													BgL_arg1966z00_2261 =
														PROCEDURE_ENTRY(BgL_kz00_6) (BgL_kz00_6, BgL_rz00_4,
														BgL_za7za7_7, BgL_dz00_8, BEOA);
													BgL_arg1967z00_2262 =
														PROCEDURE_ENTRY(BgL_za7za7_7) (BgL_za7za7_7,
														BgL_dz00_8, BEOA);
													{	/* Match/compiler.scm 73 */
														obj_t BgL_list1969z00_2266;

														{	/* Match/compiler.scm 73 */
															obj_t BgL_arg1970z00_2267;

															{	/* Match/compiler.scm 73 */
																obj_t BgL_arg1971z00_2268;

																BgL_arg1971z00_2268 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1970z00_2267 =
																	MAKE_PAIR(BgL_arg1967z00_2262,
																	BgL_arg1971z00_2268);
															}
															BgL_list1969z00_2266 =
																MAKE_PAIR(BgL_arg1966z00_2261,
																BgL_arg1970z00_2267);
														}
														BgL_arg1963z00_2259 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1965z00_2260, BgL_list1969z00_2266);
													}
												}
												return
													MAKE_PAIR(BgL_arg1962z00_2258, BgL_arg1963z00_2259);
											}
										}
									else
										{	/* Match/compiler.scm 71 */
											if (
												(BgL_casezd2valuezd2_1000 ==
													BGl_symbol2895z00zz__match_compilerz00))
												{	/* Match/compiler.scm 74 */
													obj_t BgL_arg2053z00_2278;

													obj_t BgL_arg2054z00_2279;

													obj_t BgL_arg2055z00_2280;

													{	/* Match/compiler.scm 74 */
														obj_t BgL_arg2056z00_2281;

														{	/* Match/compiler.scm 74 */
															obj_t BgL_pairz00_2289;

															BgL_pairz00_2289 = BgL_fz00_2;
															BgL_arg2056z00_2281 = CAR(CDR(BgL_pairz00_2289));
														}
														BgL_arg2053z00_2278 =
															BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00
															(BgL_ez00_3, BgL_arg2056z00_2281);
													}
													{	/* Match/compiler.scm 74 */
														obj_t BgL_arg2057z00_2282;

														{	/* Match/compiler.scm 74 */
															obj_t BgL_arg2058z00_2283;

															obj_t BgL_arg2059z00_2284;

															BgL_arg2058z00_2283 =
																BGl_symbol2895z00zz__match_compilerz00;
															{	/* Match/compiler.scm 74 */
																obj_t BgL_arg2060z00_2285;

																{	/* Match/compiler.scm 74 */
																	obj_t BgL_pairz00_2293;

																	BgL_pairz00_2293 = BgL_fz00_2;
																	BgL_arg2060z00_2285 =
																		CAR(CDR(BgL_pairz00_2293));
																}
																{	/* Match/compiler.scm 74 */
																	obj_t BgL_list2062z00_2287;

																	BgL_list2062z00_2287 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2059z00_2284 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2060z00_2285, BgL_list2062z00_2287);
																}
															}
															BgL_arg2057z00_2282 =
																MAKE_PAIR(BgL_arg2058z00_2283,
																BgL_arg2059z00_2284);
														}
														BgL_arg2054z00_2279 =
															PROCEDURE_ENTRY(BgL_kz00_6) (BgL_kz00_6,
															BgL_rz00_4, BgL_za7za7_7, BgL_arg2057z00_2282,
															BEOA);
													}
													{	/* Match/compiler.scm 74 */
														obj_t BgL_arg2063z00_2288;

														BgL_arg2063z00_2288 =
															BGl_patternzd2minuszd2zz__match_descriptionsz00
															(BgL_dz00_8, BgL_fz00_2);
														BgL_arg2055z00_2280 =
															PROCEDURE_ENTRY(BgL_za7za7_7) (BgL_za7za7_7,
															BgL_arg2063z00_2288, BEOA);
													}
													return
														BGl_buildzd2ifzd2zz__match_compilerz00
														(BgL_arg2053z00_2278, BgL_arg2054z00_2279,
														BgL_arg2055z00_2280);
												}
											else
												{	/* Match/compiler.scm 71 */
													if (
														(BgL_casezd2valuezd2_1000 ==
															BGl_symbol2897z00zz__match_compilerz00))
														{	/* Match/compiler.scm 75 */
															obj_t BgL_arg1914z00_1006;

															{	/* Match/compiler.scm 75 */
																obj_t BgL_pairz00_2299;

																BgL_pairz00_2299 = BgL_fz00_2;
																BgL_arg1914z00_1006 =
																	CAR(CDR(BgL_pairz00_2299));
															}
															return
																BGl_compilezd2varzd2zz__match_compilerz00
																(BgL_arg1914z00_1006, BgL_ez00_3, BgL_rz00_4,
																BgL_mz00_5, BgL_kz00_6, BgL_za7za7_7,
																BgL_dz00_8);
														}
													else
														{	/* Match/compiler.scm 71 */
															if (
																(BgL_casezd2valuezd2_1000 ==
																	BGl_symbol2899z00zz__match_compilerz00))
																{	/* Match/compiler.scm 76 */
																	obj_t BgL_arg1916z00_1008;

																	{	/* Match/compiler.scm 76 */
																		obj_t BgL_pairz00_2305;

																		BgL_pairz00_2305 = BgL_fz00_2;
																		BgL_arg1916z00_1008 =
																			CAR(CDR(BgL_pairz00_2305));
																	}
																	{	/* Match/compiler.scm 76 */
																		obj_t BgL_zc3anonymousza32067ze3z83_3424;

																		obj_t BgL_zc3anonymousza32066ze3z83_3425;

																		BgL_zc3anonymousza32067ze3z83_3424 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32067ze3z83zz__match_compilerz00,
																			(int) (((long) 1)), (int) (((long) 3)));
																		BgL_zc3anonymousza32066ze3z83_3425 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32066ze3z83zz__match_compilerz00,
																			(int) (((long) 3)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32067ze3z83_3424,
																			(int) (((long) 0)), BgL_kz00_6);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32067ze3z83_3424,
																			(int) (((long) 1)), BgL_rz00_4);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32067ze3z83_3424,
																			(int) (((long) 2)), BgL_za7za7_7);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32066ze3z83_3425,
																			(int) (((long) 0)), BgL_za7za7_7);
																		{
																			obj_t BgL_za7za7_3813;

																			obj_t BgL_kz00_3812;

																			obj_t BgL_fz00_3811;

																			BgL_fz00_3811 = BgL_arg1916z00_1008;
																			BgL_kz00_3812 =
																				BgL_zc3anonymousza32066ze3z83_3425;
																			BgL_za7za7_3813 =
																				BgL_zc3anonymousza32067ze3z83_3424;
																			BgL_za7za7_7 = BgL_za7za7_3813;
																			BgL_kz00_6 = BgL_kz00_3812;
																			BgL_fz00_2 = BgL_fz00_3811;
																			goto BGl_compilez00zz__match_compilerz00;
																		}
																	}
																}
															else
																{	/* Match/compiler.scm 71 */
																	if (
																		(BgL_casezd2valuezd2_1000 ==
																			BGl_symbol2901z00zz__match_compilerz00))
																		{	/* Match/compiler.scm 77 */
																			obj_t BgL_arg1918z00_1010;

																			obj_t BgL_arg1919z00_1011;

																			{	/* Match/compiler.scm 77 */
																				obj_t BgL_pairz00_2324;

																				BgL_pairz00_2324 = BgL_fz00_2;
																				BgL_arg1918z00_1010 =
																					CAR(CDR(BgL_pairz00_2324));
																			}
																			{	/* Match/compiler.scm 77 */
																				obj_t BgL_pairz00_2328;

																				BgL_pairz00_2328 = BgL_fz00_2;
																				BgL_arg1919z00_1011 =
																					CAR(CDR(CDR(BgL_pairz00_2328)));
																			}
																			return
																				BGl_compilezd2orzd2zz__match_compilerz00
																				(BgL_arg1918z00_1010,
																				BgL_arg1919z00_1011, BgL_ez00_3,
																				BgL_rz00_4, BgL_mz00_5, BgL_kz00_6,
																				BgL_za7za7_7, BgL_dz00_8);
																		}
																	else
																		{	/* Match/compiler.scm 71 */
																			if (
																				(BgL_casezd2valuezd2_1000 ==
																					BGl_symbol2903z00zz__match_compilerz00))
																				{	/* Match/compiler.scm 78 */
																					obj_t BgL_arg1921z00_1013;

																					obj_t BgL_arg1922z00_1014;

																					obj_t BgL_arg1923z00_1015;

																					{	/* Match/compiler.scm 78 */
																						obj_t BgL_pairz00_2336;

																						BgL_pairz00_2336 = BgL_fz00_2;
																						BgL_arg1921z00_1013 =
																							CAR(CDR(BgL_pairz00_2336));
																					}
																					{	/* Match/compiler.scm 78 */
																						obj_t BgL_pairz00_2340;

																						BgL_pairz00_2340 = BgL_fz00_2;
																						BgL_arg1922z00_1014 =
																							CAR(CDR(CDR(BgL_pairz00_2340)));
																					}
																					{	/* Match/compiler.scm 78 */
																						obj_t BgL_pairz00_2346;

																						BgL_pairz00_2346 = BgL_fz00_2;
																						BgL_arg1923z00_1015 =
																							CAR(CDR(CDR(CDR
																									(BgL_pairz00_2346))));
																					}
																					{	/* Match/compiler.scm 78 */
																						obj_t BgL_za2varsza2z00_2363;

																						BgL_za2varsza2z00_2363 =
																							BGl_patternzd2variableszd2zz__match_descriptionsz00
																							(BgL_arg1921z00_1013);
																						{	/* Match/compiler.scm 78 */
																							obj_t
																								BgL_zc3anonymousza32107ze3z83_3426;
																							obj_t
																								BgL_zc3anonymousza32105ze3z83_3427;
																							BgL_zc3anonymousza32107ze3z83_3426
																								=
																								make_fx_procedure
																								(BGl_zc3anonymousza32107ze3z83zz__match_compilerz00,
																								(int) (((long) 1)),
																								(int) (((long) 6)));
																							BgL_zc3anonymousza32105ze3z83_3427
																								=
																								make_fx_procedure
																								(BGl_zc3anonymousza32105ze3z83zz__match_compilerz00,
																								(int) (((long) 3)),
																								(int) (((long) 2)));
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 0)),
																								BgL_arg1923z00_1015);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 1)), BgL_ez00_3);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 2)), BgL_rz00_4);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 3)), BgL_mz00_5);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 4)), BgL_kz00_6);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32107ze3z83_3426,
																								(int) (((long) 5)),
																								BgL_za7za7_7);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32105ze3z83_3427,
																								(int) (((long) 0)),
																								BgL_za2varsza2z00_2363);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32105ze3z83_3427,
																								(int) (((long) 1)),
																								BgL_arg1922z00_1014);
																							{
																								obj_t BgL_za7za7_3858;

																								obj_t BgL_kz00_3857;

																								obj_t BgL_fz00_3856;

																								BgL_fz00_3856 =
																									BgL_arg1921z00_1013;
																								BgL_kz00_3857 =
																									BgL_zc3anonymousza32105ze3z83_3427;
																								BgL_za7za7_3858 =
																									BgL_zc3anonymousza32107ze3z83_3426;
																								BgL_za7za7_7 = BgL_za7za7_3858;
																								BgL_kz00_6 = BgL_kz00_3857;
																								BgL_fz00_2 = BgL_fz00_3856;
																								goto
																									BGl_compilez00zz__match_compilerz00;
																							}
																						}
																					}
																				}
																			else
																				{	/* Match/compiler.scm 71 */
																					if (
																						(BgL_casezd2valuezd2_1000 ==
																							BGl_symbol2905z00zz__match_compilerz00))
																						{	/* Match/compiler.scm 80 */
																							obj_t BgL_arg1925z00_1017;

																							obj_t BgL_arg1926z00_1018;

																							{	/* Match/compiler.scm 80 */
																								obj_t BgL_pairz00_2374;

																								BgL_pairz00_2374 = BgL_fz00_2;
																								BgL_arg1925z00_1017 =
																									CAR(CDR(BgL_pairz00_2374));
																							}
																							{	/* Match/compiler.scm 80 */
																								obj_t BgL_pairz00_2378;

																								BgL_pairz00_2378 = BgL_fz00_2;
																								BgL_arg1926z00_1018 =
																									CAR(CDR(CDR
																										(BgL_pairz00_2378)));
																							}
																							if (CBOOL
																								(BGl_compatiblezf3zf3zz__match_descriptionsz00
																									(BgL_arg1925z00_1017,
																										BgL_arg1926z00_1018)))
																								{	/* Match/compiler.scm 80 */
																									obj_t
																										BgL_zc3anonymousza32110ze3z83_3428;
																									BgL_zc3anonymousza32110ze3z83_3428
																										=
																										make_fx_procedure
																										(BGl_zc3anonymousza32110ze3z83zz__match_compilerz00,
																										(int) (((long) 3)),
																										(int) (((long) 4)));
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32110ze3z83_3428,
																										(int) (((long) 0)),
																										BgL_arg1926z00_1018);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32110ze3z83_3428,
																										(int) (((long) 1)),
																										BgL_ez00_3);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32110ze3z83_3428,
																										(int) (((long) 2)),
																										BgL_mz00_5);
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32110ze3z83_3428,
																										(int) (((long) 3)),
																										BgL_kz00_6);
																									{
																										obj_t BgL_kz00_3881;

																										obj_t BgL_fz00_3880;

																										BgL_fz00_3880 =
																											BgL_arg1925z00_1017;
																										BgL_kz00_3881 =
																											BgL_zc3anonymousza32110ze3z83_3428;
																										BgL_kz00_6 = BgL_kz00_3881;
																										BgL_fz00_2 = BgL_fz00_3880;
																										goto
																											BGl_compilez00zz__match_compilerz00;
																									}
																								}
																							else
																								{	/* Match/compiler.scm 80 */
																									return
																										PROCEDURE_ENTRY
																										(BgL_za7za7_7)
																										(BgL_za7za7_7, BgL_dz00_8,
																										BEOA);
																								}
																						}
																					else
																						{	/* Match/compiler.scm 71 */
																							if (
																								(BgL_casezd2valuezd2_1000 ==
																									BGl_symbol2907z00zz__match_compilerz00))
																								{	/* Match/compiler.scm 81 */
																									obj_t BgL_arg1929z00_1020;

																									obj_t BgL_arg1930z00_1021;

																									{	/* Match/compiler.scm 81 */
																										obj_t BgL_pairz00_2399;

																										BgL_pairz00_2399 =
																											BgL_fz00_2;
																										BgL_arg1929z00_1020 =
																											CAR(CDR
																											(BgL_pairz00_2399));
																									}
																									{	/* Match/compiler.scm 81 */
																										obj_t BgL_pairz00_2403;

																										BgL_pairz00_2403 =
																											BgL_fz00_2;
																										BgL_arg1930z00_1021 =
																											CAR(CDR(CDR
																												(BgL_pairz00_2403)));
																									}
																									if (
																										(CAR(BgL_dz00_8) ==
																											BGl_symbol2907z00zz__match_compilerz00))
																										{	/* Match/compiler.scm 81 */
																											return
																												BGl_succeszd2conszd2zz__match_compilerz00
																												(BgL_arg1929z00_1020,
																												BgL_arg1930z00_1021,
																												BgL_ez00_3, BgL_rz00_4,
																												BgL_mz00_5, BgL_kz00_6,
																												BgL_za7za7_7,
																												BgL_dz00_8);
																										}
																									else
																										{	/* Match/compiler.scm 81 */
																											obj_t BgL_arg2165z00_2418;

																											obj_t BgL_arg2166z00_2419;

																											BgL_arg2165z00_2418 =
																												BGl_symbol2893z00zz__match_compilerz00;
																											{	/* Match/compiler.scm 81 */
																												obj_t
																													BgL_arg2167z00_2420;
																												obj_t
																													BgL_arg2168z00_2421;
																												obj_t
																													BgL_arg2169z00_2422;
																												{	/* Match/compiler.scm 81 */
																													obj_t
																														BgL_arg2174z00_2424;
																													obj_t
																														BgL_arg2175z00_2425;
																													BgL_arg2174z00_2424 =
																														BGl_symbol2909z00zz__match_compilerz00;
																													{	/* Match/compiler.scm 81 */
																														obj_t
																															BgL_list2176z00_2426;
																														BgL_list2176z00_2426
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2175z00_2425
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_ez00_3,
																															BgL_list2176z00_2426);
																													}
																													BgL_arg2167z00_2420 =
																														MAKE_PAIR
																														(BgL_arg2174z00_2424,
																														BgL_arg2175z00_2425);
																												}
																												BgL_arg2168z00_2421 =
																													BGl_succeszd2conszd2zz__match_compilerz00
																													(BgL_arg1929z00_1020,
																													BgL_arg1930z00_1021,
																													BgL_ez00_3,
																													BgL_rz00_4,
																													BgL_mz00_5,
																													BgL_kz00_6,
																													BgL_za7za7_7,
																													BgL_dz00_8);
																												{	/* Match/compiler.scm 81 */
																													obj_t
																														BgL_arg2177z00_2427;
																													{	/* Match/compiler.scm 81 */
																														obj_t
																															BgL_arg2178z00_2428;
																														{	/* Match/compiler.scm 81 */
																															obj_t
																																BgL_list2179z00_2429;
																															{	/* Match/compiler.scm 81 */
																																obj_t
																																	BgL_arg2180z00_2430;
																																obj_t
																																	BgL_arg2181z00_2431;
																																BgL_arg2180z00_2430
																																	=
																																	BGl_symbol2907z00zz__match_compilerz00;
																																{	/* Match/compiler.scm 81 */
																																	obj_t
																																		BgL_arg2182z00_2432;
																																	obj_t
																																		BgL_arg2183z00_2433;
																																	BgL_arg2182z00_2432
																																		=
																																		BGl_list2885z00zz__match_compilerz00;
																																	BgL_arg2183z00_2433
																																		=
																																		MAKE_PAIR
																																		(BGl_list2885z00zz__match_compilerz00,
																																		BNIL);
																																	BgL_arg2181z00_2431
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2182z00_2432,
																																		BgL_arg2183z00_2433);
																																}
																																BgL_list2179z00_2429
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2180z00_2430,
																																	BgL_arg2181z00_2431);
																															}
																															BgL_arg2178z00_2428
																																=
																																BgL_list2179z00_2429;
																														}
																														BgL_arg2177z00_2427
																															=
																															BGl_patternzd2minuszd2zz__match_descriptionsz00
																															(BgL_dz00_8,
																															BgL_arg2178z00_2428);
																													}
																													BgL_arg2169z00_2422 =
																														PROCEDURE_ENTRY
																														(BgL_za7za7_7)
																														(BgL_za7za7_7,
																														BgL_arg2177z00_2427,
																														BEOA);
																												}
																												{	/* Match/compiler.scm 81 */
																													obj_t
																														BgL_list2171z00_2434;
																													{	/* Match/compiler.scm 81 */
																														obj_t
																															BgL_arg2172z00_2435;
																														{	/* Match/compiler.scm 81 */
																															obj_t
																																BgL_arg2173z00_2436;
																															BgL_arg2173z00_2436
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2172z00_2435
																																=
																																MAKE_PAIR
																																(BgL_arg2169z00_2422,
																																BgL_arg2173z00_2436);
																														}
																														BgL_list2171z00_2434
																															=
																															MAKE_PAIR
																															(BgL_arg2168z00_2421,
																															BgL_arg2172z00_2435);
																													}
																													BgL_arg2166z00_2419 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2167z00_2420,
																														BgL_list2171z00_2434);
																												}
																											}
																											return
																												MAKE_PAIR
																												(BgL_arg2165z00_2418,
																												BgL_arg2166z00_2419);
																										}
																								}
																							else
																								{	/* Match/compiler.scm 71 */
																									if (
																										(BgL_casezd2valuezd2_1000 ==
																											BGl_symbol2911z00zz__match_compilerz00))
																										{	/* Match/compiler.scm 83 */
																											obj_t BgL_arg1932z00_1023;

																											obj_t BgL_arg1935z00_1024;

																											obj_t BgL_arg1937z00_1025;

																											{	/* Match/compiler.scm 83 */
																												obj_t BgL_pairz00_2445;

																												BgL_pairz00_2445 =
																													BgL_fz00_2;
																												BgL_arg1932z00_1023 =
																													CAR(CDR
																													(BgL_pairz00_2445));
																											}
																											{	/* Match/compiler.scm 83 */
																												obj_t BgL_pairz00_2449;

																												BgL_pairz00_2449 =
																													BgL_fz00_2;
																												BgL_arg1935z00_1024 =
																													CAR(CDR(CDR
																														(BgL_pairz00_2449)));
																											}
																											{	/* Match/compiler.scm 83 */
																												obj_t BgL_pairz00_2455;

																												BgL_pairz00_2455 =
																													BgL_fz00_2;
																												BgL_arg1937z00_1025 =
																													CAR(CDR(CDR(CDR
																															(BgL_pairz00_2455))));
																											}
																											return
																												BGl_compilezd2timeszd2zz__match_compilerz00
																												(BgL_arg1932z00_1023,
																												BgL_arg1935z00_1024,
																												BgL_arg1937z00_1025,
																												BgL_ez00_3, BgL_rz00_4,
																												BgL_mz00_5, BgL_kz00_6,
																												BgL_za7za7_7,
																												BgL_dz00_8);
																										}
																									else
																										{	/* Match/compiler.scm 71 */
																											if (
																												(BgL_casezd2valuezd2_1000
																													==
																													BGl_symbol2913z00zz__match_compilerz00))
																												{	/* Match/compiler.scm 84 */
																													obj_t
																														BgL_list2282z00_2492;
																													BgL_list2282z00_2492 =
																														MAKE_PAIR
																														(BGl_string2915z00zz__match_compilerz00,
																														BNIL);
																													return
																														BGl_errorz00zz__errorz00
																														(BGl_string2916z00zz__match_compilerz00,
																														BgL_list2282z00_2492,
																														BGl_string2917z00zz__match_compilerz00);
																												}
																											else
																												{	/* Match/compiler.scm 71 */
																													if (
																														(BgL_casezd2valuezd2_1000
																															==
																															BGl_symbol2918z00zz__match_compilerz00))
																														{	/* Match/compiler.scm 86 */
																															obj_t
																																BgL_arg1944z00_1031;
																															{	/* Match/compiler.scm 86 */
																																obj_t
																																	BgL_pairz00_2496;
																																BgL_pairz00_2496
																																	= BgL_fz00_2;
																																BgL_arg1944z00_1031
																																	=
																																	CAR(CDR
																																	(BgL_pairz00_2496));
																															}
																															{	/* Match/compiler.scm 86 */
																																obj_t
																																	BgL_arg2278z00_2507;
																																obj_t
																																	BgL_arg2279z00_2508;
																																{	/* Match/compiler.scm 86 */
																																	obj_t
																																		BgL_fun2280z00_2509;
																																	BgL_fun2280z00_2509
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_mz00_5)
																																		(BgL_mz00_5,
																																		BgL_arg1944z00_1031,
																																		BEOA);
																																	BgL_arg2278z00_2507
																																		=
																																		PROCEDURE_ENTRY
																																		(BgL_fun2280z00_2509)
																																		(BgL_fun2280z00_2509,
																																		BgL_rz00_4,
																																		BgL_mz00_5,
																																		BgL_kz00_6,
																																		BgL_za7za7_7,
																																		BgL_dz00_8,
																																		BEOA);
																																}
																																{	/* Match/compiler.scm 86 */
																																	obj_t
																																		BgL_list2281z00_2510;
																																	BgL_list2281z00_2510
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2279z00_2508
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_ez00_3,
																																		BgL_list2281z00_2510);
																																}
																																return
																																	MAKE_PAIR
																																	(BgL_arg2278z00_2507,
																																	BgL_arg2279z00_2508);
																															}
																														}
																													else
																														{	/* Match/compiler.scm 71 */
																															if (
																																(BgL_casezd2valuezd2_1000
																																	==
																																	BGl_symbol2920z00zz__match_compilerz00))
																																{	/* Match/compiler.scm 88 */
																																	obj_t
																																		BgL_arg1946z00_1033;
																																	obj_t
																																		BgL_arg1948z00_1034;
																																	{	/* Match/compiler.scm 88 */
																																		obj_t
																																			BgL_pairz00_2513;
																																		BgL_pairz00_2513
																																			=
																																			BgL_fz00_2;
																																		BgL_arg1946z00_1033
																																			=
																																			CAR(CDR
																																			(BgL_pairz00_2513));
																																	}
																																	{	/* Match/compiler.scm 88 */
																																		obj_t
																																			BgL_pairz00_2517;
																																		BgL_pairz00_2517
																																			=
																																			BgL_fz00_2;
																																		BgL_arg1948z00_1034
																																			=
																																			CAR(CDR
																																			(CDR
																																				(BgL_pairz00_2517)));
																																	}
																																	return
																																		BGl_compilezd2vectorzd2beginz00zz__match_compilerz00
																																		(BgL_arg1946z00_1033,
																																		BgL_arg1948z00_1034,
																																		BgL_ez00_3,
																																		BgL_rz00_4,
																																		BgL_mz00_5,
																																		BgL_kz00_6,
																																		BgL_za7za7_7,
																																		BgL_dz00_8);
																																}
																															else
																																{	/* Match/compiler.scm 71 */
																																	if (
																																		(BgL_casezd2valuezd2_1000
																																			==
																																			BGl_symbol2922z00zz__match_compilerz00))
																																		{	/* Match/compiler.scm 90 */
																																			obj_t
																																				BgL_zc3anonymousza32384ze3z83_3429;
																																			BgL_zc3anonymousza32384ze3z83_3429
																																				=
																																				make_fx_procedure
																																				(BGl_zc3anonymousza32384ze3z83zz__match_compilerz00,
																																				(int) ((
																																						(long)
																																						1)),
																																				(int) ((
																																						(long)
																																						5)));
																																			PROCEDURE_SET
																																				(BgL_zc3anonymousza32384ze3z83_3429,
																																				(int) ((
																																						(long)
																																						0)),
																																				BgL_ez00_3);
																																			PROCEDURE_SET
																																				(BgL_zc3anonymousza32384ze3z83_3429,
																																				(int) ((
																																						(long)
																																						1)),
																																				BgL_kz00_6);
																																			PROCEDURE_SET
																																				(BgL_zc3anonymousza32384ze3z83_3429,
																																				(int) ((
																																						(long)
																																						2)),
																																				BgL_rz00_4);
																																			PROCEDURE_SET
																																				(BgL_zc3anonymousza32384ze3z83_3429,
																																				(int) ((
																																						(long)
																																						3)),
																																				BgL_za7za7_7);
																																			PROCEDURE_SET
																																				(BgL_zc3anonymousza32384ze3z83_3429,
																																				(int) ((
																																						(long)
																																						4)),
																																				BgL_dz00_8);
																																			return
																																				BgL_zc3anonymousza32384ze3z83_3429;
																																		}
																																	else
																																		{	/* Match/compiler.scm 71 */
																																			if (
																																				(BgL_casezd2valuezd2_1000
																																					==
																																					BGl_symbol2924z00zz__match_compilerz00))
																																				{	/* Match/compiler.scm 91 */
																																					obj_t
																																						BgL_zc3anonymousza32397ze3z83_3430;
																																					BgL_zc3anonymousza32397ze3z83_3430
																																						=
																																						make_fx_procedure
																																						(BGl_zc3anonymousza32397ze3z83zz__match_compilerz00,
																																						(int)
																																						(((long) 1)), (int) (((long) 4)));
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza32397ze3z83_3430,
																																						(int)
																																						(((long) 0)), BgL_kz00_6);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza32397ze3z83_3430,
																																						(int)
																																						(((long) 1)), BgL_rz00_4);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza32397ze3z83_3430,
																																						(int)
																																						(((long) 2)), BgL_za7za7_7);
																																					PROCEDURE_SET
																																						(BgL_zc3anonymousza32397ze3z83_3430,
																																						(int)
																																						(((long) 3)), BgL_dz00_8);
																																					return
																																						BgL_zc3anonymousza32397ze3z83_3430;
																																				}
																																			else
																																				{	/* Match/compiler.scm 71 */
																																					if (
																																						(BgL_casezd2valuezd2_1000
																																							==
																																							BGl_symbol2926z00zz__match_compilerz00))
																																						{	/* Match/compiler.scm 92 */
																																							obj_t
																																								BgL_auxz00_3978;
																																							obj_t
																																								BgL_auxz00_3975;
																																							{	/* Match/compiler.scm 92 */
																																								obj_t
																																									BgL_pairz00_2561;
																																								BgL_pairz00_2561
																																									=
																																									BgL_fz00_2;
																																								BgL_auxz00_3978
																																									=
																																									CAR
																																									(CDR
																																									(CDR
																																										(BgL_pairz00_2561)));
																																							}
																																							{	/* Match/compiler.scm 92 */
																																								obj_t
																																									BgL_pairz00_2557;
																																								BgL_pairz00_2557
																																									=
																																									BgL_fz00_2;
																																								BgL_auxz00_3975
																																									=
																																									CAR
																																									(CDR
																																									(BgL_pairz00_2557));
																																							}
																																							return
																																								BGl_compilezd2vectorzd2consz00zz__match_compilerz00
																																								(BgL_auxz00_3975,
																																								BgL_auxz00_3978,
																																								BgL_ez00_3,
																																								BgL_rz00_4,
																																								BgL_mz00_5,
																																								BgL_kz00_6,
																																								BgL_za7za7_7,
																																								BgL_dz00_8);
																																						}
																																					else
																																						{	/* Match/compiler.scm 71 */
																																							if ((BgL_casezd2valuezd2_1000 == BGl_symbol2928z00zz__match_compilerz00))
																																								{	/* Match/compiler.scm 94 */
																																									obj_t
																																										BgL_list2398z00_2596;
																																									BgL_list2398z00_2596
																																										=
																																										MAKE_PAIR
																																										(BGl_string2930z00zz__match_compilerz00,
																																										BNIL);
																																									return
																																										BGl_errorz00zz__errorz00
																																										(BGl_string2916z00zz__match_compilerz00,
																																										BgL_list2398z00_2596,
																																										BGl_string2917z00zz__match_compilerz00);
																																								}
																																							else
																																								{	/* Match/compiler.scm 71 */
																																									if ((BgL_casezd2valuezd2_1000 == BGl_symbol2931z00zz__match_compilerz00))
																																										{	/* Match/compiler.scm 71 */
																																											return
																																												BGl_compilezd2structzd2patz00zz__match_compilerz00
																																												(BgL_fz00_2,
																																												BgL_ez00_3,
																																												BgL_rz00_4,
																																												BgL_mz00_5,
																																												BgL_kz00_6,
																																												BgL_za7za7_7,
																																												BgL_dz00_8);
																																										}
																																									else
																																										{	/* Match/compiler.scm 97 */
																																											obj_t
																																												BgL_list1959z00_1045;
																																											{	/* Match/compiler.scm 97 */
																																												obj_t
																																													BgL_arg1961z00_1047;
																																												BgL_arg1961z00_1047
																																													=
																																													MAKE_PAIR
																																													(BgL_fz00_2,
																																													BNIL);
																																												BgL_list1959z00_1045
																																													=
																																													MAKE_PAIR
																																													(BGl_string2933z00zz__match_compilerz00,
																																													BgL_arg1961z00_1047);
																																											}
																																											return
																																												BGl_errorz00zz__errorz00
																																												(BGl_string2916z00zz__match_compilerz00,
																																												BgL_list1959z00_1045,
																																												BGl_string2917z00zz__match_compilerz00);
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
						{	/* Match/compiler.scm 70 */
							return
								PROCEDURE_ENTRY(BgL_za7za7_7) (BgL_za7za7_7, BgL_dz00_8, BEOA);
						}
				}
		}
	}



/* <anonymous:2067> */
	obj_t BGl_zc3anonymousza32067ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3431, obj_t BgL_d2z00_3435)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 141 */
			{	/* Match/compiler.scm 76 */
				obj_t BgL_kz00_3432;

				obj_t BgL_rz00_3433;

				obj_t BgL_za7za7_3434;

				BgL_kz00_3432 = PROCEDURE_REF(BgL_envz00_3431, (int) (((long) 0)));
				BgL_rz00_3433 = PROCEDURE_REF(BgL_envz00_3431, (int) (((long) 1)));
				BgL_za7za7_3434 = PROCEDURE_REF(BgL_envz00_3431, (int) (((long) 2)));
				{
					obj_t BgL_d2z00_2321;

					BgL_d2z00_2321 = BgL_d2z00_3435;
					return
						PROCEDURE_ENTRY(BgL_kz00_3432) (BgL_kz00_3432, BgL_rz00_3433,
						BgL_za7za7_3434, BgL_d2z00_2321, BEOA);
				}
			}
		}
	}



/* <anonymous:2066> */
	obj_t BGl_zc3anonymousza32066ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3436, obj_t BgL_r2z00_3438, obj_t BgL_za72za7_3439,
		obj_t BgL_d2z00_3440)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 140 */
			{	/* Match/compiler.scm 76 */
				obj_t BgL_za7za7_3437;

				BgL_za7za7_3437 = PROCEDURE_REF(BgL_envz00_3436, (int) (((long) 0)));
				return
					PROCEDURE_ENTRY(BgL_za7za7_3437) (BgL_za7za7_3437, BgL_d2z00_3440,
					BEOA);
			}
		}
	}



/* <anonymous:2107> */
	obj_t BGl_zc3anonymousza32107ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3441, obj_t BgL_dz00_3448)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 197 */
			{	/* Match/compiler.scm 78 */
				obj_t BgL_f2z00_3442;

				obj_t BgL_ez00_3443;

				obj_t BgL_rz00_3444;

				obj_t BgL_mz00_3445;

				obj_t BgL_kz00_3446;

				obj_t BgL_za7za7_3447;

				BgL_f2z00_3442 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 0)));
				BgL_ez00_3443 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 1)));
				BgL_rz00_3444 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 2)));
				BgL_mz00_3445 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 3)));
				BgL_kz00_3446 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 4)));
				BgL_za7za7_3447 = PROCEDURE_REF(BgL_envz00_3441, (int) (((long) 5)));
				{
					obj_t BgL_dz00_2370;

					BgL_dz00_2370 = BgL_dz00_3448;
					return
						BGl_compilez00zz__match_compilerz00(BgL_f2z00_3442, BgL_ez00_3443,
						BgL_rz00_3444, BgL_mz00_3445, BgL_kz00_3446, BgL_za7za7_3447,
						BgL_dz00_2370);
				}
			}
		}
	}



/* <anonymous:2105> */
	obj_t BGl_zc3anonymousza32105ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3449, obj_t BgL_rz00_3452, obj_t BgL_za7za7_3453,
		obj_t BgL_cz00_3454)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 195 */
			{	/* Match/compiler.scm 78 */
				obj_t BgL_za2varsza2z00_3450;

				obj_t BgL_t1z00_3451;

				BgL_za2varsza2z00_3450 =
					PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 0)));
				BgL_t1z00_3451 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 1)));
				{
					obj_t BgL_rz00_2366;

					obj_t BgL_za7za7_2367;

					obj_t BgL_cz00_2368;

					BgL_rz00_2366 = BgL_rz00_3452;
					BgL_za7za7_2367 = BgL_za7za7_3453;
					BgL_cz00_2368 = BgL_cz00_3454;
					return
						MAKE_PAIR(BgL_t1z00_3451,
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
						(BgL_za2varsza2z00_3450, BNIL));
				}
			}
		}
	}



/* <anonymous:2110> */
	obj_t BGl_zc3anonymousza32110ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3455, obj_t BgL_r2z00_3460, obj_t BgL_za72za7_3461,
		obj_t BgL_c2z00_3462)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 204 */
			{	/* Match/compiler.scm 80 */
				obj_t BgL_f2z00_3456;

				obj_t BgL_ez00_3457;

				obj_t BgL_mz00_3458;

				obj_t BgL_kz00_3459;

				BgL_f2z00_3456 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 0)));
				BgL_ez00_3457 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 1)));
				BgL_mz00_3458 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 2)));
				BgL_kz00_3459 = PROCEDURE_REF(BgL_envz00_3455, (int) (((long) 3)));
				{
					obj_t BgL_r2z00_2394;

					obj_t BgL_za72za7_2395;

					obj_t BgL_c2z00_2396;

					BgL_r2z00_2394 = BgL_r2z00_3460;
					BgL_za72za7_2395 = BgL_za72za7_3461;
					BgL_c2z00_2396 = BgL_c2z00_3462;
					return
						BGl_compilez00zz__match_compilerz00(BgL_f2z00_3456, BgL_ez00_3457,
						BgL_r2z00_2394, BgL_mz00_3458, BgL_kz00_3459, BgL_za72za7_2395,
						BgL_c2z00_2396);
				}
			}
		}
	}



/* <anonymous:2384> */
	obj_t BGl_zc3anonymousza32384ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3463, obj_t BgL_iz00_3469)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 369 */
			{	/* Match/compiler.scm 90 */
				obj_t BgL_ez00_3464;

				obj_t BgL_kz00_3465;

				obj_t BgL_rz00_3466;

				obj_t BgL_za7za7_3467;

				obj_t BgL_dz00_3468;

				BgL_ez00_3464 = PROCEDURE_REF(BgL_envz00_3463, (int) (((long) 0)));
				BgL_kz00_3465 = PROCEDURE_REF(BgL_envz00_3463, (int) (((long) 1)));
				BgL_rz00_3466 = PROCEDURE_REF(BgL_envz00_3463, (int) (((long) 2)));
				BgL_za7za7_3467 = PROCEDURE_REF(BgL_envz00_3463, (int) (((long) 3)));
				BgL_dz00_3468 = PROCEDURE_REF(BgL_envz00_3463, (int) (((long) 4)));
				{
					obj_t BgL_iz00_2532;

					BgL_iz00_2532 = BgL_iz00_3469;
					{	/* Match/compiler.scm 90 */
						obj_t BgL_arg2385z00_2533;

						obj_t BgL_arg2386z00_2534;

						obj_t BgL_arg2387z00_2535;

						{	/* Match/compiler.scm 90 */
							obj_t BgL_arg2388z00_2536;

							obj_t BgL_arg2389z00_2537;

							BgL_arg2388z00_2536 = BGl_symbol2934z00zz__match_compilerz00;
							{	/* Match/compiler.scm 90 */
								obj_t BgL_arg2390z00_2538;

								{	/* Match/compiler.scm 90 */
									obj_t BgL_arg2394z00_2540;

									obj_t BgL_arg2395z00_2541;

									BgL_arg2394z00_2540 = BGl_symbol2936z00zz__match_compilerz00;
									{	/* Match/compiler.scm 90 */
										obj_t BgL_list2396z00_2542;

										BgL_list2396z00_2542 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2395z00_2541 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_3464,
											BgL_list2396z00_2542);
									}
									BgL_arg2390z00_2538 =
										MAKE_PAIR(BgL_arg2394z00_2540, BgL_arg2395z00_2541);
								}
								{	/* Match/compiler.scm 90 */
									obj_t BgL_list2392z00_2543;

									{	/* Match/compiler.scm 90 */
										obj_t BgL_arg2393z00_2544;

										BgL_arg2393z00_2544 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2392z00_2543 =
											MAKE_PAIR(BgL_arg2390z00_2538, BgL_arg2393z00_2544);
									}
									BgL_arg2389z00_2537 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_iz00_2532,
										BgL_list2392z00_2543);
							}}
							BgL_arg2385z00_2533 =
								MAKE_PAIR(BgL_arg2388z00_2536, BgL_arg2389z00_2537);
						}
						BgL_arg2386z00_2534 =
							PROCEDURE_ENTRY(BgL_kz00_3465) (BgL_kz00_3465, BgL_rz00_3466,
							BgL_za7za7_3467, BgL_dz00_3468, BEOA);
						BgL_arg2387z00_2535 =
							PROCEDURE_ENTRY(BgL_za7za7_3467) (BgL_za7za7_3467, BgL_dz00_3468,
							BEOA);
						return BGl_buildzd2ifzd2zz__match_compilerz00(BgL_arg2385z00_2533,
							BgL_arg2386z00_2534, BgL_arg2387z00_2535);
					}
				}
			}
		}
	}



/* <anonymous:2397> */
	obj_t BGl_zc3anonymousza32397ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3470, obj_t BgL_iz00_3475)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 375 */
			{	/* Match/compiler.scm 91 */
				obj_t BgL_kz00_3471;

				obj_t BgL_rz00_3472;

				obj_t BgL_za7za7_3473;

				obj_t BgL_dz00_3474;

				BgL_kz00_3471 = PROCEDURE_REF(BgL_envz00_3470, (int) (((long) 0)));
				BgL_rz00_3472 = PROCEDURE_REF(BgL_envz00_3470, (int) (((long) 1)));
				BgL_za7za7_3473 = PROCEDURE_REF(BgL_envz00_3470, (int) (((long) 2)));
				BgL_dz00_3474 = PROCEDURE_REF(BgL_envz00_3470, (int) (((long) 3)));
				{
					obj_t BgL_iz00_2554;

					BgL_iz00_2554 = BgL_iz00_3475;
					return
						PROCEDURE_ENTRY(BgL_kz00_3471) (BgL_kz00_3471, BgL_rz00_3472,
						BgL_za7za7_3473, BgL_dz00_3474, BEOA);
				}
			}
		}
	}



/* build-atom-equality-test */
	obj_t BGl_buildzd2atomzd2equalityzd2testzd2zz__match_compilerz00(obj_t
		BgL_ez00_22, obj_t BgL_constz00_23)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 113 */
			if (NULLP(BgL_constz00_23))
				{	/* Match/compiler.scm 117 */
					obj_t BgL_arg1975z00_1060;

					obj_t BgL_arg1976z00_1061;

					BgL_arg1975z00_1060 = BGl_symbol2938z00zz__match_compilerz00;
					{	/* Match/compiler.scm 117 */
						obj_t BgL_list1977z00_1062;

						BgL_list1977z00_1062 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg1976z00_1061 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_22,
							BgL_list1977z00_1062);
					}
					return MAKE_PAIR(BgL_arg1975z00_1060, BgL_arg1976z00_1061);
				}
			else
				{	/* Match/compiler.scm 118 */
					bool_t BgL_testz00_4072;

					if (INTEGERP(BgL_constz00_23))
						{	/* Match/compiler.scm 118 */
							BgL_testz00_4072 = ((bool_t) 1);
						}
					else
						{	/* Match/compiler.scm 118 */
							if (CHARP(BgL_constz00_23))
								{	/* Match/compiler.scm 119 */
									BgL_testz00_4072 = ((bool_t) 1);
								}
							else
								{	/* Match/compiler.scm 119 */
									if (BOOLEANP(BgL_constz00_23))
										{	/* Match/compiler.scm 120 */
											BgL_testz00_4072 = ((bool_t) 1);
										}
									else
										{	/* Match/compiler.scm 120 */
											BgL_testz00_4072 = SYMBOLP(BgL_constz00_23);
										}
								}
						}
					if (BgL_testz00_4072)
						{	/* Match/compiler.scm 122 */
							obj_t BgL_arg1979z00_1064;

							obj_t BgL_arg1980z00_1065;

							BgL_arg1979z00_1064 = BGl_symbol2934z00zz__match_compilerz00;
							{	/* Match/compiler.scm 122 */
								obj_t BgL_arg1981z00_1066;

								{	/* Match/compiler.scm 122 */
									obj_t BgL_arg1985z00_1070;

									obj_t BgL_arg1986z00_1071;

									BgL_arg1985z00_1070 = BGl_symbol2895z00zz__match_compilerz00;
									{	/* Match/compiler.scm 122 */
										obj_t BgL_list1987z00_1072;

										BgL_list1987z00_1072 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1986z00_1071 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_constz00_23, BgL_list1987z00_1072);
									}
									BgL_arg1981z00_1066 =
										MAKE_PAIR(BgL_arg1985z00_1070, BgL_arg1986z00_1071);
								}
								{	/* Match/compiler.scm 122 */
									obj_t BgL_list1983z00_1068;

									{	/* Match/compiler.scm 122 */
										obj_t BgL_arg1984z00_1069;

										BgL_arg1984z00_1069 = MAKE_PAIR(BNIL, BNIL);
										BgL_list1983z00_1068 =
											MAKE_PAIR(BgL_arg1981z00_1066, BgL_arg1984z00_1069);
									}
									BgL_arg1980z00_1065 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_22,
										BgL_list1983z00_1068);
								}
							}
							return MAKE_PAIR(BgL_arg1979z00_1064, BgL_arg1980z00_1065);
						}
					else
						{	/* Match/compiler.scm 118 */
							if (REALP(BgL_constz00_23))
								{	/* Match/compiler.scm 124 */
									obj_t BgL_arg1989z00_1074;

									obj_t BgL_arg1990z00_1075;

									BgL_arg1989z00_1074 = BGl_symbol2905z00zz__match_compilerz00;
									{	/* Match/compiler.scm 124 */
										obj_t BgL_arg1991z00_1076;

										obj_t BgL_arg1992z00_1077;

										{	/* Match/compiler.scm 124 */
											obj_t BgL_arg1996z00_1081;

											obj_t BgL_arg1998z00_1082;

											BgL_arg1996z00_1081 =
												BGl_symbol2940z00zz__match_compilerz00;
											{	/* Match/compiler.scm 124 */
												obj_t BgL_list1999z00_1083;

												BgL_list1999z00_1083 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1998z00_1082 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_ez00_22, BgL_list1999z00_1083);
											}
											BgL_arg1991z00_1076 =
												MAKE_PAIR(BgL_arg1996z00_1081, BgL_arg1998z00_1082);
										}
										{	/* Match/compiler.scm 124 */
											obj_t BgL_arg2000z00_1084;

											obj_t BgL_arg2001z00_1085;

											BgL_arg2000z00_1084 =
												BGl_symbol2942z00zz__match_compilerz00;
											{	/* Match/compiler.scm 124 */
												obj_t BgL_list2002z00_1086;

												{	/* Match/compiler.scm 124 */
													obj_t BgL_arg2003z00_1087;

													BgL_arg2003z00_1087 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2002z00_1086 =
														MAKE_PAIR(BgL_constz00_23, BgL_arg2003z00_1087);
												}
												BgL_arg2001z00_1085 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_ez00_22, BgL_list2002z00_1086);
											}
											BgL_arg1992z00_1077 =
												MAKE_PAIR(BgL_arg2000z00_1084, BgL_arg2001z00_1085);
										}
										{	/* Match/compiler.scm 124 */
											obj_t BgL_list1994z00_1079;

											{	/* Match/compiler.scm 124 */
												obj_t BgL_arg1995z00_1080;

												BgL_arg1995z00_1080 = MAKE_PAIR(BNIL, BNIL);
												BgL_list1994z00_1079 =
													MAKE_PAIR(BgL_arg1992z00_1077, BgL_arg1995z00_1080);
											}
											BgL_arg1990z00_1075 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1991z00_1076, BgL_list1994z00_1079);
										}
									}
									return MAKE_PAIR(BgL_arg1989z00_1074, BgL_arg1990z00_1075);
								}
							else
								{	/* Match/compiler.scm 123 */
									if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_constz00_23))
										{	/* Match/compiler.scm 126 */
											obj_t BgL_arg2005z00_1089;

											obj_t BgL_arg2006z00_1090;

											BgL_arg2005z00_1089 =
												BGl_symbol2905z00zz__match_compilerz00;
											{	/* Match/compiler.scm 126 */
												obj_t BgL_arg2007z00_1091;

												obj_t BgL_arg2008z00_1092;

												{	/* Match/compiler.scm 126 */
													obj_t BgL_arg2012z00_1096;

													obj_t BgL_arg2013z00_1097;

													BgL_arg2012z00_1096 =
														BGl_symbol2944z00zz__match_compilerz00;
													{	/* Match/compiler.scm 126 */
														obj_t BgL_list2014z00_1098;

														BgL_list2014z00_1098 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2013z00_1097 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_ez00_22, BgL_list2014z00_1098);
													}
													BgL_arg2007z00_1091 =
														MAKE_PAIR(BgL_arg2012z00_1096, BgL_arg2013z00_1097);
												}
												{	/* Match/compiler.scm 126 */
													obj_t BgL_arg2015z00_1099;

													obj_t BgL_arg2016z00_1100;

													BgL_arg2015z00_1099 =
														BGl_symbol2946z00zz__match_compilerz00;
													{	/* Match/compiler.scm 126 */
														obj_t BgL_list2017z00_1101;

														{	/* Match/compiler.scm 126 */
															obj_t BgL_arg2018z00_1102;

															BgL_arg2018z00_1102 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2017z00_1101 =
																MAKE_PAIR(BgL_constz00_23, BgL_arg2018z00_1102);
														}
														BgL_arg2016z00_1100 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_ez00_22, BgL_list2017z00_1101);
													}
													BgL_arg2008z00_1092 =
														MAKE_PAIR(BgL_arg2015z00_1099, BgL_arg2016z00_1100);
												}
												{	/* Match/compiler.scm 126 */
													obj_t BgL_list2010z00_1094;

													{	/* Match/compiler.scm 126 */
														obj_t BgL_arg2011z00_1095;

														BgL_arg2011z00_1095 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2010z00_1094 =
															MAKE_PAIR(BgL_arg2008z00_1092,
															BgL_arg2011z00_1095);
													}
													BgL_arg2006z00_1090 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2007z00_1091, BgL_list2010z00_1094);
												}
											}
											return
												MAKE_PAIR(BgL_arg2005z00_1089, BgL_arg2006z00_1090);
										}
									else
										{	/* Match/compiler.scm 125 */
											if (STRINGP(BgL_constz00_23))
												{	/* Match/compiler.scm 128 */
													obj_t BgL_arg2021z00_1104;

													obj_t BgL_arg2022z00_1105;

													BgL_arg2021z00_1104 =
														BGl_symbol2905z00zz__match_compilerz00;
													{	/* Match/compiler.scm 128 */
														obj_t BgL_arg2023z00_1106;

														obj_t BgL_arg2024z00_1107;

														{	/* Match/compiler.scm 128 */
															obj_t BgL_arg2028z00_1111;

															obj_t BgL_arg2029z00_1112;

															BgL_arg2028z00_1111 =
																BGl_symbol2948z00zz__match_compilerz00;
															{	/* Match/compiler.scm 128 */
																obj_t BgL_list2030z00_1113;

																BgL_list2030z00_1113 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2029z00_1112 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_ez00_22, BgL_list2030z00_1113);
															}
															BgL_arg2023z00_1106 =
																MAKE_PAIR(BgL_arg2028z00_1111,
																BgL_arg2029z00_1112);
														}
														{	/* Match/compiler.scm 128 */
															obj_t BgL_arg2031z00_1114;

															obj_t BgL_arg2033z00_1115;

															BgL_arg2031z00_1114 =
																BGl_symbol2950z00zz__match_compilerz00;
															{	/* Match/compiler.scm 128 */
																obj_t BgL_list2034z00_1116;

																{	/* Match/compiler.scm 128 */
																	obj_t BgL_arg2036z00_1117;

																	BgL_arg2036z00_1117 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2034z00_1116 =
																		MAKE_PAIR(BgL_constz00_23,
																		BgL_arg2036z00_1117);
																}
																BgL_arg2033z00_1115 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_ez00_22, BgL_list2034z00_1116);
															}
															BgL_arg2024z00_1107 =
																MAKE_PAIR(BgL_arg2031z00_1114,
																BgL_arg2033z00_1115);
														}
														{	/* Match/compiler.scm 128 */
															obj_t BgL_list2026z00_1109;

															{	/* Match/compiler.scm 128 */
																obj_t BgL_arg2027z00_1110;

																BgL_arg2027z00_1110 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2026z00_1109 =
																	MAKE_PAIR(BgL_arg2024z00_1107,
																	BgL_arg2027z00_1110);
															}
															BgL_arg2022z00_1105 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2023z00_1106, BgL_list2026z00_1109);
														}
													}
													return
														MAKE_PAIR(BgL_arg2021z00_1104, BgL_arg2022z00_1105);
												}
											else
												{	/* Match/compiler.scm 127 */
													if (NULLP(BgL_constz00_23))
														{	/* Match/compiler.scm 130 */
															obj_t BgL_arg2038z00_1119;

															obj_t BgL_arg2039z00_1120;

															BgL_arg2038z00_1119 =
																BGl_symbol2938z00zz__match_compilerz00;
															{	/* Match/compiler.scm 130 */
																obj_t BgL_list2040z00_1121;

																BgL_list2040z00_1121 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2039z00_1120 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_ez00_22, BgL_list2040z00_1121);
															}
															return
																MAKE_PAIR(BgL_arg2038z00_1119,
																BgL_arg2039z00_1120);
														}
													else
														{	/* Match/compiler.scm 132 */
															obj_t BgL_arg2041z00_1122;

															obj_t BgL_arg2042z00_1123;

															BgL_arg2041z00_1122 =
																BGl_symbol2952z00zz__match_compilerz00;
															{	/* Match/compiler.scm 132 */
																obj_t BgL_arg2043z00_1124;

																{	/* Match/compiler.scm 132 */
																	obj_t BgL_arg2047z00_1128;

																	obj_t BgL_arg2048z00_1129;

																	BgL_arg2047z00_1128 =
																		BGl_symbol2895z00zz__match_compilerz00;
																	{	/* Match/compiler.scm 132 */
																		obj_t BgL_list2049z00_1130;

																		BgL_list2049z00_1130 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2048z00_1129 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_constz00_23, BgL_list2049z00_1130);
																	}
																	BgL_arg2043z00_1124 =
																		MAKE_PAIR(BgL_arg2047z00_1128,
																		BgL_arg2048z00_1129);
																}
																{	/* Match/compiler.scm 132 */
																	obj_t BgL_list2045z00_1126;

																	{	/* Match/compiler.scm 132 */
																		obj_t BgL_arg2046z00_1127;

																		BgL_arg2046z00_1127 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2045z00_1126 =
																			MAKE_PAIR(BgL_arg2043z00_1124,
																			BgL_arg2046z00_1127);
																	}
																	BgL_arg2042z00_1123 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_ez00_22, BgL_list2045z00_1126);
																}
															}
															return
																MAKE_PAIR(BgL_arg2041z00_1122,
																BgL_arg2042z00_1123);
														}
												}
										}
								}
						}
				}
		}
	}



/* compile-or */
	obj_t BGl_compilezd2orzd2zz__match_compilerz00(obj_t BgL_f1z00_38,
		obj_t BgL_f2z00_39, obj_t BgL_ez00_40, obj_t BgL_rz00_41, obj_t BgL_mz00_42,
		obj_t BgL_kz00_43, obj_t BgL_za7za7_44, obj_t BgL_dz00_45)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 148 */
			{	/* Match/compiler.scm 149 */
				obj_t BgL_za2kza2z00_1155;

				BgL_za2kza2z00_1155 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2954z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 149 */
					obj_t BgL_za2varsza2z00_1156;

					BgL_za2varsza2z00_1156 =
						BGl_patternzd2variableszd2zz__match_descriptionsz00(BgL_f1z00_38);
					{	/* Match/compiler.scm 150 */
						obj_t BgL_za2callza2z00_1157;

						BgL_za2callza2z00_1157 =
							MAKE_PAIR(BgL_za2kza2z00_1155,
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_za2varsza2z00_1156, BNIL));
						{	/* Match/compiler.scm 151 */
							obj_t BgL_successzd2formzd2_1158;

							{	/* Match/compiler.scm 152 */
								obj_t BgL_arg2099z00_1208;

								BgL_arg2099z00_1208 =
									BGl_extendza2z72z72za2zz__match_compilerz00(BgL_rz00_41,
									BgL_za2varsza2z00_1156);
								BgL_successzd2formzd2_1158 =
									PROCEDURE_ENTRY(BgL_kz00_43) (BgL_kz00_43,
									BgL_arg2099z00_1208, BgL_za7za7_44, BgL_dz00_45, BEOA);
							}
							{	/* Match/compiler.scm 152 */

								{	/* Match/compiler.scm 154 */
									bool_t BgL_testz00_4146;

									if ((BgL_successzd2formzd2_1158 == BFALSE))
										{	/* Match/compiler.scm 154 */
											BgL_testz00_4146 = ((bool_t) 1);
										}
									else
										{	/* Match/compiler.scm 154 */
											if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CDR
													(BgL_za2callza2z00_1157),
													CDR(BgL_successzd2formzd2_1158)))
												{	/* Match/compiler.scm 155 */
													BgL_testz00_4146 = ((bool_t) 1);
												}
											else
												{	/* Match/compiler.scm 155 */
													BgL_testz00_4146 =
														BGl_isDirectCallzf3zf3zz__match_compilerz00
														(BgL_successzd2formzd2_1158);
												}
										}
									if (BgL_testz00_4146)
										{	/* Match/compiler.scm 158 */
											obj_t BgL_zc3anonymousza32072ze3z83_3477;

											obj_t BgL_zc3anonymousza32071ze3z83_3478;

											BgL_zc3anonymousza32072ze3z83_3477 =
												make_fx_procedure
												(BGl_zc3anonymousza32072ze3z83zz__match_compilerz00,
												(int) (((long) 1)), (int) (((long) 6)));
											BgL_zc3anonymousza32071ze3z83_3478 =
												make_fx_procedure
												(BGl_zc3anonymousza32071ze3z83zz__match_compilerz00,
												(int) (((long) 3)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 0)), BgL_successzd2formzd2_1158);
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 1)), BgL_f2z00_39);
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 2)), BgL_ez00_40);
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 3)), BgL_rz00_41);
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 4)), BgL_mz00_42);
											PROCEDURE_SET(BgL_zc3anonymousza32072ze3z83_3477,
												(int) (((long) 5)), BgL_za7za7_44);
											PROCEDURE_SET(BgL_zc3anonymousza32071ze3z83_3478,
												(int) (((long) 0)), BgL_successzd2formzd2_1158);
											return BGl_compilez00zz__match_compilerz00(BgL_f1z00_38,
												BgL_ez00_40, BgL_rz00_41, BgL_mz00_42,
												BgL_zc3anonymousza32071ze3z83_3478,
												BgL_zc3anonymousza32072ze3z83_3477, BgL_dz00_45);
										}
									else
										{	/* Match/compiler.scm 164 */
											obj_t BgL_resz00_1176;

											{	/* Match/compiler.scm 165 */
												obj_t BgL_zc3anonymousza32092ze3z83_3480;

												obj_t BgL_zc3anonymousza32091ze3z83_3481;

												BgL_zc3anonymousza32092ze3z83_3480 =
													make_fx_procedure
													(BGl_zc3anonymousza32092ze3z83zz__match_compilerz00,
													(int) (((long) 1)), (int) (((long) 6)));
												BgL_zc3anonymousza32091ze3z83_3481 =
													make_fx_procedure
													(BGl_zc3anonymousza32091ze3z83zz__match_compilerz00,
													(int) (((long) 3)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 0)), BgL_za2callza2z00_1157);
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 1)), BgL_f2z00_39);
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 2)), BgL_ez00_40);
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 3)), BgL_rz00_41);
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 4)), BgL_mz00_42);
												PROCEDURE_SET(BgL_zc3anonymousza32092ze3z83_3480,
													(int) (((long) 5)), BgL_za7za7_44);
												PROCEDURE_SET(BgL_zc3anonymousza32091ze3z83_3481,
													(int) (((long) 0)), BgL_za2callza2z00_1157);
												BgL_resz00_1176 =
													BGl_compilez00zz__match_compilerz00(BgL_f1z00_38,
													BgL_ez00_40, BgL_rz00_41, BgL_mz00_42,
													BgL_zc3anonymousza32091ze3z83_3481,
													BgL_zc3anonymousza32092ze3z83_3480, BgL_dz00_45);
											}
											if (CBOOL(BgL_resz00_1176))
												{	/* Match/compiler.scm 172 */
													obj_t BgL_arg2076z00_1177;

													obj_t BgL_arg2077z00_1178;

													BgL_arg2076z00_1177 =
														BGl_symbol2955z00zz__match_compilerz00;
													{	/* Match/compiler.scm 172 */
														obj_t BgL_arg2078z00_1179;

														{	/* Match/compiler.scm 172 */
															obj_t BgL_arg2082z00_1183;

															{	/* Match/compiler.scm 172 */
																obj_t BgL_arg2084z00_1185;

																{	/* Match/compiler.scm 172 */
																	obj_t BgL_list2085z00_1186;

																	{	/* Match/compiler.scm 172 */
																		obj_t BgL_arg2086z00_1187;

																		BgL_arg2086z00_1187 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2085z00_1186 =
																			MAKE_PAIR(BgL_successzd2formzd2_1158,
																			BgL_arg2086z00_1187);
																	}
																	BgL_arg2084z00_1185 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_za2varsza2z00_1156,
																		BgL_list2085z00_1186);
																}
																BgL_arg2082z00_1183 =
																	MAKE_PAIR(BgL_za2kza2z00_1155,
																	BgL_arg2084z00_1185);
															}
															BgL_arg2078z00_1179 =
																MAKE_PAIR(BgL_arg2082z00_1183, BNIL);
														}
														{	/* Match/compiler.scm 172 */
															obj_t BgL_list2080z00_1181;

															{	/* Match/compiler.scm 172 */
																obj_t BgL_arg2081z00_1182;

																BgL_arg2081z00_1182 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2080z00_1181 =
																	MAKE_PAIR(BgL_resz00_1176,
																	BgL_arg2081z00_1182);
															}
															BgL_arg2077z00_1178 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2078z00_1179, BgL_list2080z00_1181);
														}
													}
													return
														MAKE_PAIR(BgL_arg2076z00_1177, BgL_arg2077z00_1178);
												}
											else
												{	/* Match/compiler.scm 171 */
													return BgL_resz00_1176;
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



/* extend*'' */
	obj_t BGl_extendza2z72z72za2zz__match_compilerz00(obj_t BgL_rz00_3658,
		obj_t BgL_vza2za2_2646)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 439 */
			if (NULLP(BgL_vza2za2_2646))
				{	/* Match/compiler.scm 152 */
					return BgL_rz00_3658;
				}
			else
				{	/* Match/compiler.scm 152 */
					obj_t BgL_arg2439z00_2648;

					obj_t BgL_arg2440z00_2649;

					obj_t BgL_arg2441z00_2650;

					BgL_arg2439z00_2648 =
						BGl_extendza2z72z72za2zz__match_compilerz00(BgL_rz00_3658,
						CDR(BgL_vza2za2_2646));
					BgL_arg2440z00_2649 = CAR(BgL_vza2za2_2646);
					BgL_arg2441z00_2650 = BGl_symbol2957z00zz__match_compilerz00;
					{	/* Match/compiler.scm 152 */
						obj_t BgL_arg2434z00_2658;

						obj_t BgL_arg2435z00_2659;

						BgL_arg2434z00_2658 =
							MAKE_PAIR(BgL_arg2440z00_2649, BgL_arg2441z00_2650);
						BgL_arg2435z00_2659 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg2439z00_2648, BNIL);
						return MAKE_PAIR(BgL_arg2434z00_2658, BgL_arg2435z00_2659);
					}
				}
		}
	}



/* <anonymous:2072> */
	obj_t BGl_zc3anonymousza32072ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3482, obj_t BgL_dz00_3489)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 159 */
			{	/* Match/compiler.scm 161 */
				obj_t BgL_successzd2formzd2_3483;

				obj_t BgL_f2z00_3484;

				obj_t BgL_ez00_3485;

				obj_t BgL_rz00_3486;

				obj_t BgL_mz00_3487;

				obj_t BgL_za7za7_3488;

				BgL_successzd2formzd2_3483 =
					PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 0)));
				BgL_f2z00_3484 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 1)));
				BgL_ez00_3485 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 2)));
				BgL_rz00_3486 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 3)));
				BgL_mz00_3487 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 4)));
				BgL_za7za7_3488 = PROCEDURE_REF(BgL_envz00_3482, (int) (((long) 5)));
				{
					obj_t BgL_dz00_1166;

					BgL_dz00_1166 = BgL_dz00_3489;
					{	/* Match/compiler.scm 161 */
						obj_t BgL_zc3anonymousza32074ze3z83_3476;

						BgL_zc3anonymousza32074ze3z83_3476 =
							make_fx_procedure
							(BGl_zc3anonymousza32074ze3z83zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32074ze3z83_3476,
							(int) (((long) 0)), BgL_successzd2formzd2_3483);
						return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3484,
							BgL_ez00_3485, BgL_rz00_3486, BgL_mz00_3487,
							BgL_zc3anonymousza32074ze3z83_3476, BgL_za7za7_3488,
							BgL_dz00_1166);
					}
				}
			}
		}
	}



/* <anonymous:2071> */
	obj_t BGl_zc3anonymousza32071ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3490, obj_t BgL_rz00_3492, obj_t BgL_za7za7_3493,
		obj_t BgL_dz00_3494)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 158 */
			return PROCEDURE_REF(BgL_envz00_3490, (int) (((long) 0)));
		}
	}



/* <anonymous:2074> */
	obj_t BGl_zc3anonymousza32074ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3495, obj_t BgL_rz00_3497, obj_t BgL_za7za7_3498,
		obj_t BgL_dz00_3499)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 161 */
			return PROCEDURE_REF(BgL_envz00_3495, (int) (((long) 0)));
		}
	}



/* <anonymous:2092> */
	obj_t BGl_zc3anonymousza32092ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3500, obj_t BgL_dz00_3507)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 166 */
			{	/* Match/compiler.scm 168 */
				obj_t BgL_za2callza2z00_3501;

				obj_t BgL_f2z00_3502;

				obj_t BgL_ez00_3503;

				obj_t BgL_rz00_3504;

				obj_t BgL_mz00_3505;

				obj_t BgL_za7za7_3506;

				BgL_za2callza2z00_3501 =
					PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 0)));
				BgL_f2z00_3502 = PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 1)));
				BgL_ez00_3503 = PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 2)));
				BgL_rz00_3504 = PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 3)));
				BgL_mz00_3505 = PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 4)));
				BgL_za7za7_3506 = PROCEDURE_REF(BgL_envz00_3500, (int) (((long) 5)));
				{
					obj_t BgL_dz00_1194;

					BgL_dz00_1194 = BgL_dz00_3507;
					{	/* Match/compiler.scm 168 */
						obj_t BgL_zc3anonymousza32094ze3z83_3479;

						BgL_zc3anonymousza32094ze3z83_3479 =
							make_fx_procedure
							(BGl_zc3anonymousza32094ze3z83zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32094ze3z83_3479,
							(int) (((long) 0)), BgL_za2callza2z00_3501);
						return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3502,
							BgL_ez00_3503, BgL_rz00_3504, BgL_mz00_3505,
							BgL_zc3anonymousza32094ze3z83_3479, BgL_za7za7_3506,
							BgL_dz00_1194);
					}
				}
			}
		}
	}



/* <anonymous:2091> */
	obj_t BGl_zc3anonymousza32091ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3508, obj_t BgL_rz00_3510, obj_t BgL_za7za7_3511,
		obj_t BgL_dz00_3512)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 165 */
			return PROCEDURE_REF(BgL_envz00_3508, (int) (((long) 0)));
		}
	}



/* <anonymous:2094> */
	obj_t BGl_zc3anonymousza32094ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3513, obj_t BgL_rz00_3515, obj_t BgL_za7za7_3516,
		obj_t BgL_dz00_3517)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 168 */
			return PROCEDURE_REF(BgL_envz00_3513, (int) (((long) 0)));
		}
	}



/* isDirectCall? */
	bool_t BGl_isDirectCallzf3zf3zz__match_compilerz00(obj_t BgL_ez00_46)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 179 */
			if (PAIRP(BgL_ez00_46))
				{	/* Match/compiler.scm 181 */
					obj_t BgL_prz00_1211;

					BgL_prz00_1211 = CAR(BgL_ez00_46);
					if (SYMBOLP(BgL_prz00_1211))
						{	/* Match/compiler.scm 183 */
							obj_t BgL_sz00_1213;

							{	/* Match/compiler.scm 183 */
								obj_t BgL_res2865z00_2675;

								{	/* Match/compiler.scm 183 */
									obj_t BgL_symbolz00_2673;

									BgL_symbolz00_2673 = BgL_prz00_1211;
									{	/* Match/compiler.scm 183 */
										obj_t BgL_arg2734z00_2674;

										BgL_arg2734z00_2674 = SYMBOL_TO_STRING(BgL_symbolz00_2673);
										BgL_res2865z00_2675 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2734z00_2674);
									}
								}
								BgL_sz00_1213 = BgL_res2865z00_2675;
							}
							if ((STRING_LENGTH(BgL_sz00_1213) > ((long) 3)))
								{	/* Match/compiler.scm 185 */
									obj_t BgL_sz00_1215;

									BgL_sz00_1215 =
										c_substring(BgL_sz00_1213, ((long) 0), ((long) 3));
									{	/* Match/compiler.scm 186 */
										bool_t BgL__ortest_1827z00_1216;

										BgL__ortest_1827z00_1216 =
											bigloo_strcmp(BgL_sz00_1215,
											BGl_string2959z00zz__match_compilerz00);
										if (BgL__ortest_1827z00_1216)
											{	/* Match/compiler.scm 186 */
												return BgL__ortest_1827z00_1216;
											}
										else
											{	/* Match/compiler.scm 186 */
												return
													bigloo_strcmp(BgL_sz00_1215,
													BGl_string2960z00zz__match_compilerz00);
											}
									}
								}
							else
								{	/* Match/compiler.scm 184 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Match/compiler.scm 182 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Match/compiler.scm 180 */
					return ((bool_t) 0);
				}
		}
	}



/* compile-var */
	obj_t BGl_compilezd2varzd2zz__match_compilerz00(obj_t BgL_nz00_64,
		obj_t BgL_ez00_65, obj_t BgL_rz00_66, obj_t BgL_mz00_67, obj_t BgL_kz00_68,
		obj_t BgL_za7za7_69, obj_t BgL_cz00_70)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 212 */
			{	/* Match/compiler.scm 213 */
				bool_t BgL_testz00_4273;

				{	/* Match/compiler.scm 213 */
					bool_t BgL_testz00_4274;

					{	/* Match/compiler.scm 213 */
						obj_t BgL_auxz00_4275;

						if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_64,
									BgL_rz00_66)))
							{	/* Match/compiler.scm 213 */
								BgL_auxz00_4275 =
									CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_64,
										BgL_rz00_66));
							}
						else
							{	/* Match/compiler.scm 213 */
								BgL_auxz00_4275 = BGl_symbol2961z00zz__match_compilerz00;
							}
						BgL_testz00_4274 =
							(BgL_auxz00_4275 == BGl_symbol2961z00zz__match_compilerz00);
					}
					if (BgL_testz00_4274)
						{	/* Match/compiler.scm 213 */
							BgL_testz00_4273 = ((bool_t) 0);
						}
					else
						{	/* Match/compiler.scm 213 */
							BgL_testz00_4273 = ((bool_t) 1);
						}
				}
				if (BgL_testz00_4273)
					{	/* Match/compiler.scm 214 */
						obj_t BgL_arg2112z00_1239;

						obj_t BgL_arg2113z00_1240;

						obj_t BgL_arg2114z00_1241;

						{	/* Match/compiler.scm 214 */
							obj_t BgL_arg2115z00_1242;

							obj_t BgL_arg2116z00_1243;

							BgL_arg2115z00_1242 = BGl_symbol2934z00zz__match_compilerz00;
							{	/* Match/compiler.scm 214 */
								obj_t BgL_list2117z00_1244;

								{	/* Match/compiler.scm 214 */
									obj_t BgL_arg2118z00_1245;

									BgL_arg2118z00_1245 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2117z00_1244 =
										MAKE_PAIR(BgL_ez00_65, BgL_arg2118z00_1245);
								}
								BgL_arg2116z00_1243 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_nz00_64,
									BgL_list2117z00_1244);
							}
							BgL_arg2112z00_1239 =
								MAKE_PAIR(BgL_arg2115z00_1242, BgL_arg2116z00_1243);
						}
						{	/* Match/compiler.scm 215 */
							obj_t BgL_arg2119z00_1246;

							{	/* Match/compiler.scm 215 */
								obj_t BgL_arg2121z00_1247;

								{	/* Match/compiler.scm 215 */
									obj_t BgL_list2122z00_1248;

									{	/* Match/compiler.scm 215 */
										obj_t BgL_arg2123z00_1249;

										obj_t BgL_arg2124z00_1250;

										BgL_arg2123z00_1249 =
											BGl_symbol2897z00zz__match_compilerz00;
										BgL_arg2124z00_1250 = MAKE_PAIR(BgL_nz00_64, BNIL);
										BgL_list2122z00_1248 =
											MAKE_PAIR(BgL_arg2123z00_1249, BgL_arg2124z00_1250);
									}
									BgL_arg2121z00_1247 = BgL_list2122z00_1248;
								}
								BgL_arg2119z00_1246 =
									BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_cz00_70,
									BgL_arg2121z00_1247);
							}
							BgL_arg2113z00_1240 =
								PROCEDURE_ENTRY(BgL_kz00_68) (BgL_kz00_68, BgL_rz00_66,
								BgL_za7za7_69, BgL_arg2119z00_1246, BEOA);
						}
						{	/* Match/compiler.scm 216 */
							obj_t BgL_arg2125z00_1251;

							{	/* Match/compiler.scm 216 */
								obj_t BgL_arg2126z00_1252;

								{	/* Match/compiler.scm 216 */
									obj_t BgL_list2127z00_1253;

									{	/* Match/compiler.scm 216 */
										obj_t BgL_arg2130z00_1254;

										obj_t BgL_arg2131z00_1255;

										BgL_arg2130z00_1254 =
											BGl_symbol2897z00zz__match_compilerz00;
										BgL_arg2131z00_1255 = MAKE_PAIR(BgL_nz00_64, BNIL);
										BgL_list2127z00_1253 =
											MAKE_PAIR(BgL_arg2130z00_1254, BgL_arg2131z00_1255);
									}
									BgL_arg2126z00_1252 = BgL_list2127z00_1253;
								}
								BgL_arg2125z00_1251 =
									BGl_patternzd2minuszd2zz__match_descriptionsz00(BgL_cz00_70,
									BgL_arg2126z00_1252);
							}
							BgL_arg2114z00_1241 =
								PROCEDURE_ENTRY(BgL_za7za7_69) (BgL_za7za7_69,
								BgL_arg2125z00_1251, BEOA);
						}
						return
							BGl_buildzd2ifzd2zz__match_compilerz00(BgL_arg2112z00_1239,
							BgL_arg2113z00_1240, BgL_arg2114z00_1241);
					}
				else
					{	/* Match/compiler.scm 217 */
						obj_t BgL_bodyz00_1256;

						{	/* Match/compiler.scm 217 */
							obj_t BgL_arg2146z00_1270;

							obj_t BgL_arg2147z00_1271;

							{	/* Match/compiler.scm 217 */
								obj_t BgL_arg2434z00_2719;

								obj_t BgL_arg2435z00_2720;

								BgL_arg2434z00_2719 = MAKE_PAIR(BgL_nz00_64, BgL_ez00_65);
								BgL_arg2435z00_2720 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_rz00_66,
									BNIL);
								BgL_arg2146z00_1270 =
									MAKE_PAIR(BgL_arg2434z00_2719, BgL_arg2435z00_2720);
							}
							{	/* Match/compiler.scm 218 */
								obj_t BgL_arg2148z00_1272;

								{	/* Match/compiler.scm 218 */
									obj_t BgL_list2149z00_1273;

									{	/* Match/compiler.scm 218 */
										obj_t BgL_arg2150z00_1274;

										obj_t BgL_arg2151z00_1275;

										BgL_arg2150z00_1274 =
											BGl_symbol2897z00zz__match_compilerz00;
										BgL_arg2151z00_1275 = MAKE_PAIR(BgL_nz00_64, BNIL);
										BgL_list2149z00_1273 =
											MAKE_PAIR(BgL_arg2150z00_1274, BgL_arg2151z00_1275);
									}
									BgL_arg2148z00_1272 = BgL_list2149z00_1273;
								}
								BgL_arg2147z00_1271 =
									BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_cz00_70,
									BgL_arg2148z00_1272);
							}
							BgL_bodyz00_1256 =
								PROCEDURE_ENTRY(BgL_kz00_68) (BgL_kz00_68, BgL_arg2146z00_1270,
								BgL_za7za7_69, BgL_arg2147z00_1271, BEOA);
						}
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00
							(BGl_countzd2occurrenceszd2zz__match_compilerz00(BgL_nz00_64,
									BgL_bodyz00_1256, ((long) 0)), BINT(((long) 1))))
							{	/* Match/compiler.scm 220 */
								obj_t BgL_arg2133z00_1258;

								obj_t BgL_arg2134z00_1259;

								BgL_arg2133z00_1258 = BGl_symbol2963z00zz__match_compilerz00;
								{	/* Match/compiler.scm 220 */
									obj_t BgL_arg2135z00_1260;

									{	/* Match/compiler.scm 220 */
										obj_t BgL_arg2139z00_1264;

										{	/* Match/compiler.scm 220 */
											obj_t BgL_arg2141z00_1266;

											{	/* Match/compiler.scm 220 */
												obj_t BgL_list2142z00_1267;

												BgL_list2142z00_1267 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2141z00_1266 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_ez00_65, BgL_list2142z00_1267);
											}
											BgL_arg2139z00_1264 =
												MAKE_PAIR(BgL_nz00_64, BgL_arg2141z00_1266);
										}
										BgL_arg2135z00_1260 = MAKE_PAIR(BgL_arg2139z00_1264, BNIL);
									}
									{	/* Match/compiler.scm 220 */
										obj_t BgL_list2137z00_1262;

										{	/* Match/compiler.scm 220 */
											obj_t BgL_arg2138z00_1263;

											BgL_arg2138z00_1263 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2137z00_1262 =
												MAKE_PAIR(BgL_bodyz00_1256, BgL_arg2138z00_1263);
										}
										BgL_arg2134z00_1259 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2135z00_1260, BgL_list2137z00_1262);
								}}
								return MAKE_PAIR(BgL_arg2133z00_1258, BgL_arg2134z00_1259);
							}
						else
							{	/* Match/compiler.scm 219 */
								return
									BGl_unfoldz00zz__match_compilerz00(BgL_nz00_64, BgL_ez00_65,
									BgL_bodyz00_1256);
							}
					}
			}
		}
	}



/* count-occurrences */
	obj_t BGl_countzd2occurrenceszd2zz__match_compilerz00(obj_t BgL_sz00_71,
		obj_t BgL_ez00_72, long BgL_accz00_73)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 224 */
			if (NULLP(BgL_ez00_72))
				{	/* Match/compiler.scm 225 */
					return BINT(BgL_accz00_73);
				}
			else
				{	/* Match/compiler.scm 225 */
					if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_72)))
						{	/* Match/compiler.scm 227 */
							if ((BgL_sz00_71 == BgL_ez00_72))
								{	/* Match/compiler.scm 228 */
									return
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_accz00_73),
										BINT(((long) 1)));
								}
							else
								{	/* Match/compiler.scm 228 */
									return BINT(BgL_accz00_73);
								}
						}
					else
						{	/* Match/compiler.scm 227 */
							if (PAIRP(BgL_ez00_72))
								{	/* Match/compiler.scm 231 */
									if (
										(CAR(BgL_ez00_72) ==
											BGl_symbol2895z00zz__match_compilerz00))
										{	/* Match/compiler.scm 232 */
											return BINT(BgL_accz00_73);
										}
									else
										{	/* Match/compiler.scm 232 */
											return
												BGl_2zb2zb2zz__r4_numbers_6_5z00
												(BGl_countzd2occurrenceszd2zz__match_compilerz00
												(BgL_sz00_71, CAR(BgL_ez00_72), BgL_accz00_73),
												BGl_countzd2occurrenceszd2zz__match_compilerz00
												(BgL_sz00_71, CDR(BgL_ez00_72), BgL_accz00_73));
										}
								}
							else
								{	/* Match/compiler.scm 231 */
									return BFALSE;
								}
						}
				}
		}
	}



/* succes-cons */
	obj_t BGl_succeszd2conszd2zz__match_compilerz00(obj_t BgL_f1z00_83,
		obj_t BgL_f2z00_84, obj_t BgL_ez00_85, obj_t BgL_rz00_86, obj_t BgL_mz00_87,
		obj_t BgL_kz00_88, obj_t BgL_za7za7_89, obj_t BgL_cz00_90)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 253 */
			{	/* Match/compiler.scm 254 */
				obj_t BgL_za2carza2z00_1308;

				BgL_za2carza2z00_1308 =
					PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
					(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
					BGl_string2965z00zz__match_compilerz00, BEOA);
				{	/* Match/compiler.scm 254 */
					obj_t BgL_za2cdrza2z00_1309;

					BgL_za2cdrza2z00_1309 =
						PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
						(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
						BGl_string2966z00zz__match_compilerz00, BEOA);
					{	/* Match/compiler.scm 255 */
						obj_t BgL_bodyz00_1310;

						{	/* Match/compiler.scm 258 */
							obj_t BgL_arg2186z00_1313;

							BgL_arg2186z00_1313 =
								BGl_patternzd2carzd2zz__match_descriptionsz00(BgL_cz00_90);
							{	/* Match/compiler.scm 260 */
								obj_t BgL_zc3anonymousza32205ze3z83_3518;

								obj_t BgL_zc3anonymousza32187ze3z83_3521;

								BgL_zc3anonymousza32205ze3z83_3518 =
									make_fx_procedure
									(BGl_zc3anonymousza32205ze3z83zz__match_compilerz00,
									(int) (((long) 1)), (int) (((long) 2)));
								BgL_zc3anonymousza32187ze3z83_3521 =
									make_fx_procedure
									(BGl_zc3anonymousza32187ze3z83zz__match_compilerz00,
									(int) (((long) 3)), (int) (((long) 6)));
								PROCEDURE_SET(BgL_zc3anonymousza32205ze3z83_3518,
									(int) (((long) 0)), BgL_cz00_90);
								PROCEDURE_SET(BgL_zc3anonymousza32205ze3z83_3518,
									(int) (((long) 1)), BgL_za7za7_89);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 0)), BgL_cz00_90);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 1)), BgL_kz00_88);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 2)), BgL_za7za7_89);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 3)), BgL_f2z00_84);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 4)), BgL_za2cdrza2z00_1309);
								PROCEDURE_SET(BgL_zc3anonymousza32187ze3z83_3521,
									(int) (((long) 5)), BgL_mz00_87);
								BgL_bodyz00_1310 =
									BGl_compilez00zz__match_compilerz00(BgL_f1z00_83,
									BgL_za2carza2z00_1308, BgL_rz00_86, BgL_mz00_87,
									BgL_zc3anonymousza32187ze3z83_3521,
									BgL_zc3anonymousza32205ze3z83_3518, BgL_arg2186z00_1313);
						}}
						{	/* Match/compiler.scm 256 */

							return
								BGl_buildzd2letzd2zz__match_compilerz00(BgL_za2carza2z00_1308,
								BgL_za2cdrza2z00_1309, BgL_ez00_85, BgL_bodyz00_1310);
						}
					}
				}
			}
		}
	}



/* <anonymous:2205> */
	obj_t BGl_zc3anonymousza32205ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3522, obj_t BgL_c2z00_3525)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 264 */
			{	/* Match/compiler.scm 264 */
				obj_t BgL_cz00_3523;

				obj_t BgL_za7za7_3524;

				BgL_cz00_3523 = PROCEDURE_REF(BgL_envz00_3522, (int) (((long) 0)));
				BgL_za7za7_3524 = PROCEDURE_REF(BgL_envz00_3522, (int) (((long) 1)));
				{
					obj_t BgL_c2z00_1339;

					BgL_c2z00_1339 = BgL_c2z00_3525;
					{	/* Match/compiler.scm 264 */
						obj_t BgL_arg2206z00_1341;

						{	/* Match/compiler.scm 264 */
							obj_t BgL_arg2207z00_1342;

							obj_t BgL_arg2208z00_1343;

							BgL_arg2207z00_1342 = BGl_symbol2907z00zz__match_compilerz00;
							BgL_arg2208z00_1343 =
								BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3523);
							{	/* Match/compiler.scm 264 */
								obj_t BgL_list2209z00_1344;

								{	/* Match/compiler.scm 264 */
									obj_t BgL_arg2210z00_1345;

									{	/* Match/compiler.scm 264 */
										obj_t BgL_arg2211z00_1346;

										BgL_arg2211z00_1346 = MAKE_PAIR(BgL_arg2208z00_1343, BNIL);
										BgL_arg2210z00_1345 =
											MAKE_PAIR(BgL_c2z00_1339, BgL_arg2211z00_1346);
									}
									BgL_list2209z00_1344 =
										MAKE_PAIR(BgL_arg2207z00_1342, BgL_arg2210z00_1345);
								}
								BgL_arg2206z00_1341 = BgL_list2209z00_1344;
						}}
						return
							PROCEDURE_ENTRY(BgL_za7za7_3524) (BgL_za7za7_3524,
							BgL_arg2206z00_1341, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2187> */
	obj_t BGl_zc3anonymousza32187ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3526, obj_t BgL_r2z00_3533, obj_t BgL_za72za7_3534,
		obj_t BgL_c2z00_3535)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 258 */
			{	/* Match/compiler.scm 260 */
				obj_t BgL_cz00_3527;

				obj_t BgL_kz00_3528;

				obj_t BgL_za7za7_3529;

				obj_t BgL_f2z00_3530;

				obj_t BgL_za2cdrza2z00_3531;

				obj_t BgL_mz00_3532;

				BgL_cz00_3527 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 0)));
				BgL_kz00_3528 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 1)));
				BgL_za7za7_3529 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 2)));
				BgL_f2z00_3530 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 3)));
				BgL_za2cdrza2z00_3531 =
					PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 4)));
				BgL_mz00_3532 = PROCEDURE_REF(BgL_envz00_3526, (int) (((long) 5)));
				{
					obj_t BgL_r2z00_1314;

					obj_t BgL_za72za7_1315;

					obj_t BgL_c2z00_1316;

					BgL_r2z00_1314 = BgL_r2z00_3533;
					BgL_za72za7_1315 = BgL_za72za7_3534;
					BgL_c2z00_1316 = BgL_c2z00_3535;
					{	/* Match/compiler.scm 260 */
						obj_t BgL_arg2190z00_1320;

						BgL_arg2190z00_1320 =
							BGl_patternzd2cdrzd2zz__match_descriptionsz00(BgL_cz00_3527);
						{	/* Match/compiler.scm 261 */
							obj_t BgL_zc3anonymousza32191ze3z83_3520;

							obj_t BgL_zc3anonymousza32197ze3z83_3519;

							BgL_zc3anonymousza32191ze3z83_3520 =
								make_fx_procedure
								(BGl_zc3anonymousza32191ze3z83zz__match_compilerz00,
								(int) (((long) 3)), (int) (((long) 2)));
							BgL_zc3anonymousza32197ze3z83_3519 =
								make_fx_procedure
								(BGl_zc3anonymousza32197ze3z83zz__match_compilerz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32191ze3z83_3520,
								(int) (((long) 0)), BgL_c2z00_1316);
							PROCEDURE_SET(BgL_zc3anonymousza32191ze3z83_3520,
								(int) (((long) 1)), BgL_kz00_3528);
							PROCEDURE_SET(BgL_zc3anonymousza32197ze3z83_3519,
								(int) (((long) 0)), BgL_c2z00_1316);
							PROCEDURE_SET(BgL_zc3anonymousza32197ze3z83_3519,
								(int) (((long) 1)), BgL_za7za7_3529);
							return BGl_compilez00zz__match_compilerz00(BgL_f2z00_3530,
								BgL_za2cdrza2z00_3531, BgL_r2z00_1314, BgL_mz00_3532,
								BgL_zc3anonymousza32191ze3z83_3520,
								BgL_zc3anonymousza32197ze3z83_3519, BgL_arg2190z00_1320);
						}
					}
				}
			}
		}
	}



/* <anonymous:2197> */
	obj_t BGl_zc3anonymousza32197ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3536, obj_t BgL_c3z00_3539)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 262 */
			{	/* Match/compiler.scm 262 */
				obj_t BgL_c2z00_3537;

				obj_t BgL_za7za7_3538;

				BgL_c2z00_3537 = PROCEDURE_REF(BgL_envz00_3536, (int) (((long) 0)));
				BgL_za7za7_3538 = PROCEDURE_REF(BgL_envz00_3536, (int) (((long) 1)));
				{
					obj_t BgL_c3z00_1330;

					BgL_c3z00_1330 = BgL_c3z00_3539;
					{	/* Match/compiler.scm 262 */
						obj_t BgL_arg2198z00_2761;

						{	/* Match/compiler.scm 262 */
							obj_t BgL_list2199z00_2762;

							{	/* Match/compiler.scm 262 */
								obj_t BgL_arg2200z00_2763;

								obj_t BgL_arg2203z00_2764;

								BgL_arg2200z00_2763 = BGl_symbol2907z00zz__match_compilerz00;
								{	/* Match/compiler.scm 262 */
									obj_t BgL_arg2204z00_2765;

									BgL_arg2204z00_2765 = MAKE_PAIR(BgL_c3z00_1330, BNIL);
									BgL_arg2203z00_2764 =
										MAKE_PAIR(BgL_c2z00_3537, BgL_arg2204z00_2765);
								}
								BgL_list2199z00_2762 =
									MAKE_PAIR(BgL_arg2200z00_2763, BgL_arg2203z00_2764);
							}
							BgL_arg2198z00_2761 = BgL_list2199z00_2762;
						}
						return
							PROCEDURE_ENTRY(BgL_za7za7_3538) (BgL_za7za7_3538,
							BgL_arg2198z00_2761, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2191> */
	obj_t BGl_zc3anonymousza32191ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3540, obj_t BgL_r3z00_3543, obj_t BgL_za73za7_3544,
		obj_t BgL_c3z00_3545)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 260 */
			{	/* Match/compiler.scm 261 */
				obj_t BgL_c2z00_3541;

				obj_t BgL_kz00_3542;

				BgL_c2z00_3541 = PROCEDURE_REF(BgL_envz00_3540, (int) (((long) 0)));
				BgL_kz00_3542 = PROCEDURE_REF(BgL_envz00_3540, (int) (((long) 1)));
				{
					obj_t BgL_r3z00_1321;

					obj_t BgL_za73za7_1322;

					obj_t BgL_c3z00_1323;

					BgL_r3z00_1321 = BgL_r3z00_3543;
					BgL_za73za7_1322 = BgL_za73za7_3544;
					BgL_c3z00_1323 = BgL_c3z00_3545;
					{	/* Match/compiler.scm 261 */
						obj_t BgL_arg2192z00_2754;

						{	/* Match/compiler.scm 261 */
							obj_t BgL_list2193z00_2755;

							{	/* Match/compiler.scm 261 */
								obj_t BgL_arg2194z00_2756;

								obj_t BgL_arg2195z00_2757;

								BgL_arg2194z00_2756 = BGl_symbol2907z00zz__match_compilerz00;
								{	/* Match/compiler.scm 261 */
									obj_t BgL_arg2196z00_2758;

									BgL_arg2196z00_2758 = MAKE_PAIR(BgL_c3z00_1323, BNIL);
									BgL_arg2195z00_2757 =
										MAKE_PAIR(BgL_c2z00_3541, BgL_arg2196z00_2758);
								}
								BgL_list2193z00_2755 =
									MAKE_PAIR(BgL_arg2194z00_2756, BgL_arg2195z00_2757);
							}
							BgL_arg2192z00_2754 = BgL_list2193z00_2755;
						}
						return
							PROCEDURE_ENTRY(BgL_kz00_3542) (BgL_kz00_3542, BgL_r3z00_1321,
							BgL_za73za7_1322, BgL_arg2192z00_2754, BEOA);
					}
				}
			}
		}
	}



/* compile-times */
	obj_t BGl_compilezd2timeszd2zz__match_compilerz00(obj_t BgL_nz00_91,
		obj_t BgL_f1z00_92, obj_t BgL_f2z00_93, obj_t BgL_ez00_94,
		obj_t BgL_rz00_95, obj_t BgL_mz00_96, obj_t BgL_k0z00_97,
		obj_t BgL_za70za7_98, obj_t BgL_d0z00_99)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 281 */
			{	/* Match/compiler.scm 283 */
				obj_t BgL_fzd2envzd2_1349;

				obj_t BgL_dzd2envzd2_1350;

				BgL_fzd2envzd2_1349 = MAKE_CELL(BNIL);
				BgL_dzd2envzd2_1350 = MAKE_CELL(BNIL);
				{	/* Match/compiler.scm 287 */
					obj_t BgL_instanciatezd2tryzd2_3548;

					BgL_instanciatezd2tryzd2_3548 =
						make_fx_procedure(BGl_instanciatezd2tryzd2zz__match_compilerz00,
						(int) (((long) 5)), (int) (((long) 5)));
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3548,
						(int) (((long) 0)), BgL_dzd2envzd2_1350);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3548,
						(int) (((long) 1)), BgL_nz00_91);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3548,
						(int) (((long) 2)), BgL_f1z00_92);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3548,
						(int) (((long) 3)), BgL_f2z00_93);
					PROCEDURE_SET(BgL_instanciatezd2tryzd2_3548,
						(int) (((long) 4)), BgL_fzd2envzd2_1349);
					{	/* Match/compiler.scm 310 */
						obj_t BgL_reszd2bodyzd2_1352;

						{	/* Match/compiler.scm 312 */
							obj_t BgL_zc3anonymousza32244ze3z83_3546;

							obj_t BgL_zc3anonymousza32243ze3z83_3547;

							BgL_zc3anonymousza32244ze3z83_3546 =
								make_fx_procedure
								(BGl_zc3anonymousza32244ze3z83zz__match_compilerz00,
								(int) (((long) 1)), (int) (((long) 2)));
							BgL_zc3anonymousza32243ze3z83_3547 =
								make_fx_procedure
								(BGl_zc3anonymousza32243ze3z83zz__match_compilerz00,
								(int) (((long) 3)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza32244ze3z83_3546,
								(int) (((long) 0)), BgL_za70za7_98);
							PROCEDURE_SET(BgL_zc3anonymousza32244ze3z83_3546,
								(int) (((long) 1)), BgL_d0z00_99);
							PROCEDURE_SET(BgL_zc3anonymousza32243ze3z83_3547,
								(int) (((long) 0)), BgL_k0z00_97);
							PROCEDURE_SET(BgL_zc3anonymousza32243ze3z83_3547,
								(int) (((long) 1)), BgL_d0z00_99);
							BgL_reszd2bodyzd2_1352 =
								BGl_instanciatezd2tryzd2zz__match_compilerz00
								(BgL_instanciatezd2tryzd2_3548, BgL_rz00_95, BgL_mz00_96,
								BgL_zc3anonymousza32243ze3z83_3547,
								BgL_zc3anonymousza32244ze3z83_3546, BgL_d0z00_99);
						}
						{	/* Match/compiler.scm 315 */
							obj_t BgL_arg2212z00_1353;

							obj_t BgL_arg2213z00_1354;

							BgL_arg2212z00_1353 = BGl_symbol2967z00zz__match_compilerz00;
							{	/* Match/compiler.scm 315 */
								obj_t BgL_arg2214z00_1355;

								obj_t BgL_arg2216z00_1356;

								{	/* Match/compiler.scm 315 */
									obj_t BgL_l1852z00_1360;

									BgL_l1852z00_1360 = CELL_REF(BgL_fzd2envzd2_1349);
									if (NULLP(BgL_l1852z00_1360))
										{	/* Match/compiler.scm 315 */
											BgL_arg2214z00_1355 = BNIL;
										}
									else
										{	/* Match/compiler.scm 315 */
											obj_t BgL_head1854z00_1362;

											{	/* Match/compiler.scm 315 */
												obj_t BgL_arg2235z00_1375;

												{	/* Match/compiler.scm 315 */
													obj_t BgL_pairz00_2782;

													{	/* Match/compiler.scm 315 */
														obj_t BgL_pairz00_2774;

														BgL_pairz00_2774 = CAR(BgL_l1852z00_1360);
														BgL_pairz00_2782 =
															CAR(CDR(CAR(CDR(BgL_pairz00_2774))));
													}
													BgL_arg2235z00_1375 = CAR(BgL_pairz00_2782);
												}
												BgL_head1854z00_1362 =
													MAKE_PAIR(BgL_arg2235z00_1375, BNIL);
											}
											{	/* Match/compiler.scm 315 */
												obj_t BgL_g1857z00_1363;

												BgL_g1857z00_1363 = CDR(BgL_l1852z00_1360);
												{
													obj_t BgL_l1852z00_2787;

													obj_t BgL_tail1855z00_2788;

													BgL_l1852z00_2787 = BgL_g1857z00_1363;
													BgL_tail1855z00_2788 = BgL_head1854z00_1362;
												BgL_zc3anonymousza32224ze3z83_2786:
													if (NULLP(BgL_l1852z00_2787))
														{	/* Match/compiler.scm 315 */
															BgL_arg2214z00_1355 = BgL_head1854z00_1362;
														}
													else
														{	/* Match/compiler.scm 315 */
															obj_t BgL_newtail1856z00_2796;

															{	/* Match/compiler.scm 315 */
																obj_t BgL_arg2227z00_2797;

																{	/* Match/compiler.scm 315 */
																	obj_t BgL_pairz00_2813;

																	{	/* Match/compiler.scm 315 */
																		obj_t BgL_pairz00_2805;

																		BgL_pairz00_2805 = CAR(BgL_l1852z00_2787);
																		BgL_pairz00_2813 =
																			CAR(CDR(CAR(CDR(BgL_pairz00_2805))));
																	}
																	BgL_arg2227z00_2797 = CAR(BgL_pairz00_2813);
																}
																BgL_newtail1856z00_2796 =
																	MAKE_PAIR(BgL_arg2227z00_2797, BNIL);
															}
															SET_CDR(BgL_tail1855z00_2788,
																BgL_newtail1856z00_2796);
															{
																obj_t BgL_tail1855z00_4476;

																obj_t BgL_l1852z00_4474;

																BgL_l1852z00_4474 = CDR(BgL_l1852z00_2787);
																BgL_tail1855z00_4476 = BgL_newtail1856z00_2796;
																BgL_tail1855z00_2788 = BgL_tail1855z00_4476;
																BgL_l1852z00_2787 = BgL_l1852z00_4474;
																goto BgL_zc3anonymousza32224ze3z83_2786;
															}
														}
												}
											}
										}
								}
								{	/* Match/compiler.scm 315 */
									obj_t BgL_arg2238z00_1378;

									{	/* Match/compiler.scm 315 */
										obj_t BgL_list2239z00_1379;

										BgL_list2239z00_1379 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2238z00_1378 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_94,
											BgL_list2239z00_1379);
									}
									BgL_arg2216z00_1356 =
										MAKE_PAIR(BgL_reszd2bodyzd2_1352, BgL_arg2238z00_1378);
								}
								{	/* Match/compiler.scm 315 */
									obj_t BgL_list2218z00_1358;

									{	/* Match/compiler.scm 315 */
										obj_t BgL_arg2222z00_1359;

										BgL_arg2222z00_1359 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2218z00_1358 =
											MAKE_PAIR(BgL_arg2216z00_1356, BgL_arg2222z00_1359);
									}
									BgL_arg2213z00_1354 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2214z00_1355, BgL_list2218z00_1358);
								}
							}
							return MAKE_PAIR(BgL_arg2212z00_1353, BgL_arg2213z00_1354);
						}
					}
				}
			}
		}
	}



/* <anonymous:2244> */
	obj_t BGl_zc3anonymousza32244ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3551, obj_t BgL_dz00_3554)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 313 */
			{	/* Match/compiler.scm 313 */
				obj_t BgL_za70za7_3552;

				obj_t BgL_d0z00_3553;

				BgL_za70za7_3552 = PROCEDURE_REF(BgL_envz00_3551, (int) (((long) 0)));
				BgL_d0z00_3553 = PROCEDURE_REF(BgL_envz00_3551, (int) (((long) 1)));
				{
					obj_t BgL_dz00_1386;

					BgL_dz00_1386 = BgL_dz00_3554;
					return
						PROCEDURE_ENTRY(BgL_za70za7_3552) (BgL_za70za7_3552, BgL_d0z00_3553,
						BEOA);
				}
			}
		}
	}



/* <anonymous:2243> */
	obj_t BGl_zc3anonymousza32243ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3555, obj_t BgL_rz00_3558, obj_t BgL_za7za7_3559,
		obj_t BgL_dz00_3560)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 312 */
			{	/* Match/compiler.scm 312 */
				obj_t BgL_k0z00_3556;

				obj_t BgL_d0z00_3557;

				BgL_k0z00_3556 = PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 0)));
				BgL_d0z00_3557 = PROCEDURE_REF(BgL_envz00_3555, (int) (((long) 1)));
				{
					obj_t BgL_rz00_1382;

					obj_t BgL_za7za7_1383;

					obj_t BgL_dz00_1384;

					BgL_rz00_1382 = BgL_rz00_3558;
					BgL_za7za7_1383 = BgL_za7za7_3559;
					BgL_dz00_1384 = BgL_dz00_3560;
					return
						PROCEDURE_ENTRY(BgL_k0z00_3556) (BgL_k0z00_3556, BgL_rz00_1382,
						BgL_za7za7_1383, BgL_d0z00_3557, BEOA);
				}
			}
		}
	}



/* <anonymous:2275> */
	obj_t BGl_zc3anonymousza32275ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3561, obj_t BgL_d2z00_3573)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 299 */
			{	/* Match/compiler.scm 301 */
				obj_t BgL_dzd2envzd2_3562;

				obj_t BgL_f2z00_3563;

				obj_t BgL_fzd2envzd2_3564;

				obj_t BgL_mz00_3565;

				obj_t BgL_nz00_3566;

				obj_t BgL_instanciatezd2tryzd2_3567;

				obj_t BgL_f1z00_3568;

				obj_t BgL_gz00_3569;

				obj_t BgL_rz00_3570;

				obj_t BgL_kz00_3571;

				obj_t BgL_za7za7_3572;

				BgL_dzd2envzd2_3562 =
					PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 0)));
				BgL_f2z00_3563 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 1)));
				BgL_fzd2envzd2_3564 =
					PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 2)));
				BgL_mz00_3565 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 3)));
				BgL_nz00_3566 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 4)));
				BgL_instanciatezd2tryzd2_3567 =
					PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 5)));
				BgL_f1z00_3568 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 6)));
				BgL_gz00_3569 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 7)));
				BgL_rz00_3570 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 8)));
				BgL_kz00_3571 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 9)));
				BgL_za7za7_3572 = PROCEDURE_REF(BgL_envz00_3561, (int) (((long) 10)));
				{
					obj_t BgL_d2z00_1425;

					BgL_d2z00_1425 = BgL_d2z00_3573;
					{	/* Match/compiler.scm 301 */
						obj_t BgL_arg2277z00_2888;

						{	/* Match/compiler.scm 301 */
							obj_t BgL_zc3anonymousza32451ze3z83_3550;

							BgL_zc3anonymousza32451ze3z83_3550 =
								make_fx_procedure
								(BGl_zc3anonymousza32451ze3z83zz__match_compilerz00,
								(int) (((long) 1)), (int) (((long) 8)));
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 0)), BgL_dzd2envzd2_3562);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 1)), BgL_nz00_3566);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 2)), BgL_f1z00_3568);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 3)), BgL_f2z00_3563);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 4)), BgL_fzd2envzd2_3564);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 5)), BgL_mz00_3565);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 6)), BgL_instanciatezd2tryzd2_3567);
							PROCEDURE_SET(BgL_zc3anonymousza32451ze3z83_3550,
								(int) (((long) 7)), BgL_nz00_3566);
							BgL_arg2277z00_2888 = BgL_zc3anonymousza32451ze3z83_3550;
						}
						return
							BGl_compilez00zz__match_compilerz00(BgL_f1z00_3568, BgL_gz00_3569,
							BgL_rz00_3570, BgL_arg2277z00_2888, BgL_kz00_3571,
							BgL_za7za7_3572, BgL_d2z00_1425);
					}
				}
			}
		}
	}



/* <anonymous:2451> */
	obj_t BGl_zc3anonymousza32451ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3574, obj_t BgL_xz00_3583)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 464 */
			{	/* Match/compiler.scm 301 */
				obj_t BgL_fnz00_3580;

				obj_t BgL_instanciatezd2tryzd2_3581;

				obj_t BgL_ptz00_3582;

				BgL_fnz00_3580 = PROCEDURE_REF(BgL_envz00_3574, (int) (((long) 5)));
				BgL_instanciatezd2tryzd2_3581 =
					PROCEDURE_REF(BgL_envz00_3574, (int) (((long) 6)));
				BgL_ptz00_3582 = PROCEDURE_REF(BgL_envz00_3574, (int) (((long) 7)));
				{
					obj_t BgL_xz00_2892;

					BgL_xz00_2892 = BgL_xz00_3583;
					if ((BgL_xz00_2892 == BgL_ptz00_3582))
						{	/* Match/compiler.scm 301 */
							return BgL_instanciatezd2tryzd2_3581;
						}
					else
						{	/* Match/compiler.scm 301 */
							return
								PROCEDURE_ENTRY(BgL_fnz00_3580) (BgL_fnz00_3580, BgL_xz00_2892,
								BEOA);
						}
				}
			}
		}
	}



/* instanciate-try */
	obj_t BGl_instanciatezd2tryzd2zz__match_compilerz00(obj_t BgL_envz00_3584,
		obj_t BgL_rz00_3590, obj_t BgL_mz00_3591, obj_t BgL_kz00_3592,
		obj_t BgL_za7za7_3593, obj_t BgL_dz00_3594)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 286 */
			{	/* Match/compiler.scm 287 */
				obj_t BgL_dzd2envzd2_3585;

				obj_t BgL_nz00_3586;

				obj_t BgL_f1z00_3587;

				obj_t BgL_f2z00_3588;

				obj_t BgL_fzd2envzd2_3589;

				BgL_dzd2envzd2_3585 =
					PROCEDURE_REF(BgL_envz00_3584, (int) (((long) 0)));
				BgL_nz00_3586 = PROCEDURE_REF(BgL_envz00_3584, (int) (((long) 1)));
				BgL_f1z00_3587 = PROCEDURE_REF(BgL_envz00_3584, (int) (((long) 2)));
				BgL_f2z00_3588 = PROCEDURE_REF(BgL_envz00_3584, (int) (((long) 3)));
				BgL_fzd2envzd2_3589 =
					PROCEDURE_REF(BgL_envz00_3584, (int) (((long) 4)));
				{
					obj_t BgL_rz00_1390;

					obj_t BgL_mz00_1391;

					obj_t BgL_kz00_1392;

					obj_t BgL_za7za7_1393;

					obj_t BgL_dz00_1394;

					BgL_rz00_1390 = BgL_rz00_3590;
					BgL_mz00_1391 = BgL_mz00_3591;
					BgL_kz00_1392 = BgL_kz00_3592;
					BgL_za7za7_1393 = BgL_za7za7_3593;
					BgL_dz00_1394 = BgL_dz00_3594;
					{	/* Match/compiler.scm 287 */
						obj_t BgL_tmpz00_1396;

						{
							obj_t BgL_dzd2envzd2_2870;

							BgL_dzd2envzd2_2870 = CELL_REF(BgL_dzd2envzd2_3585);
						BgL_lookzd2forzd2descrz00_2869:
							if (NULLP(BgL_dzd2envzd2_2870))
								{	/* Match/compiler.scm 287 */
									BgL_tmpz00_1396 = BFALSE;
								}
							else
								{	/* Match/compiler.scm 287 */
									bool_t BgL_testz00_4560;

									{	/* Match/compiler.scm 287 */
										obj_t BgL_auxz00_4561;

										{	/* Match/compiler.scm 287 */
											obj_t BgL_pairz00_2876;

											BgL_pairz00_2876 = BgL_dzd2envzd2_2870;
											BgL_auxz00_4561 = CAR(CAR(BgL_pairz00_2876));
										}
										BgL_testz00_4560 =
											BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_4561,
											BgL_dz00_1394);
									}
									if (BgL_testz00_4560)
										{	/* Match/compiler.scm 287 */
											BgL_tmpz00_1396 = CAR(BgL_dzd2envzd2_2870);
										}
									else
										{
											obj_t BgL_dzd2envzd2_4566;

											BgL_dzd2envzd2_4566 = CDR(BgL_dzd2envzd2_2870);
											BgL_dzd2envzd2_2870 = BgL_dzd2envzd2_4566;
											goto BgL_lookzd2forzd2descrz00_2869;
										}
								}
						}
						if (CBOOL(BgL_tmpz00_1396))
							{	/* Match/compiler.scm 289 */
								obj_t BgL_pairz00_2882;

								BgL_pairz00_2882 = BgL_tmpz00_1396;
								return CAR(CDR(BgL_pairz00_2882));
							}
						else
							{	/* Match/compiler.scm 290 */
								obj_t BgL_gz00_1397;

								obj_t BgL_tryz00_1398;

								BgL_gz00_1397 =
									PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
									(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
									BGl_string2969z00zz__match_compilerz00, BEOA);
								BgL_tryz00_1398 =
									PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
									(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
									BGl_string2970z00zz__match_compilerz00, BEOA);
								{	/* Match/compiler.scm 292 */
									obj_t BgL_auxz00_3595;

									{	/* Match/compiler.scm 292 */
										obj_t BgL_arg2246z00_1399;

										{	/* Match/compiler.scm 292 */
											obj_t BgL_list2247z00_1400;

											{	/* Match/compiler.scm 292 */
												obj_t BgL_arg2248z00_1401;

												BgL_arg2248z00_1401 = MAKE_PAIR(BgL_tryz00_1398, BNIL);
												BgL_list2247z00_1400 =
													MAKE_PAIR(BgL_dz00_1394, BgL_arg2248z00_1401);
											}
											BgL_arg2246z00_1399 = BgL_list2247z00_1400;
										}
										BgL_auxz00_3595 =
											MAKE_PAIR(BgL_arg2246z00_1399,
											CELL_REF(BgL_dzd2envzd2_3585));
									}
									CELL_SET(BgL_dzd2envzd2_3585, BgL_auxz00_3595);
								}
								{	/* Match/compiler.scm 293 */
									obj_t BgL_newzd2defzd2_1402;

									{	/* Match/compiler.scm 294 */
										obj_t BgL_arg2249z00_1403;

										{	/* Match/compiler.scm 294 */
											obj_t BgL_arg2252z00_1406;

											obj_t BgL_arg2253z00_1407;

											BgL_arg2252z00_1406 =
												BGl_symbol2967z00zz__match_compilerz00;
											{	/* Match/compiler.scm 296 */
												obj_t BgL_arg2255z00_1408;

												{	/* Match/compiler.scm 296 */
													obj_t BgL_arg2259z00_1411;

													{	/* Match/compiler.scm 296 */
														obj_t BgL_arg2262z00_1413;

														{	/* Match/compiler.scm 296 */
															obj_t BgL_arg2263z00_1414;

															{	/* Match/compiler.scm 296 */
																obj_t BgL_arg2266z00_1417;

																obj_t BgL_arg2267z00_1418;

																BgL_arg2266z00_1417 =
																	BGl_symbol2889z00zz__match_compilerz00;
																{	/* Match/compiler.scm 296 */
																	obj_t BgL_arg2268z00_1419;

																	obj_t BgL_arg2269z00_1420;

																	BgL_arg2268z00_1419 =
																		MAKE_PAIR(BgL_gz00_1397, BNIL);
																	{	/* Match/compiler.scm 301 */
																		obj_t BgL_zc3anonymousza32275ze3z83_3549;

																		BgL_zc3anonymousza32275ze3z83_3549 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32275ze3z83zz__match_compilerz00,
																			(int) (((long) 1)), (int) (((long) 11)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 0)), BgL_dzd2envzd2_3585);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 1)), BgL_f2z00_3588);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 2)), BgL_fzd2envzd2_3589);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 3)), BgL_mz00_1391);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 4)), BgL_nz00_3586);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 5)), BgL_envz00_3584);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 6)), BgL_f1z00_3587);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 7)), BgL_gz00_1397);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 8)), BgL_rz00_1390);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 9)), BgL_kz00_1392);
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32275ze3z83_3549,
																			(int) (((long) 10)), BgL_za7za7_1393);
																		BgL_arg2269z00_1420 =
																			BGl_compilez00zz__match_compilerz00
																			(BgL_f2z00_3588, BgL_gz00_1397,
																			BgL_rz00_1390, BgL_mz00_1391,
																			BgL_kz00_1392,
																			BgL_zc3anonymousza32275ze3z83_3549,
																			BgL_dz00_1394);
																	}
																	{	/* Match/compiler.scm 296 */
																		obj_t BgL_list2271z00_1422;

																		{	/* Match/compiler.scm 296 */
																			obj_t BgL_arg2272z00_1423;

																			BgL_arg2272z00_1423 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2271z00_1422 =
																				MAKE_PAIR(BgL_arg2269z00_1420,
																				BgL_arg2272z00_1423);
																		}
																		BgL_arg2267z00_1418 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2268z00_1419,
																			BgL_list2271z00_1422);
																}}
																BgL_arg2263z00_1414 =
																	MAKE_PAIR(BgL_arg2266z00_1417,
																	BgL_arg2267z00_1418);
															}
															{	/* Match/compiler.scm 295 */
																obj_t BgL_list2265z00_1416;

																BgL_list2265z00_1416 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2262z00_1413 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2263z00_1414, BgL_list2265z00_1416);
														}}
														BgL_arg2259z00_1411 =
															MAKE_PAIR(BgL_tryz00_1398, BgL_arg2262z00_1413);
													}
													BgL_arg2255z00_1408 =
														MAKE_PAIR(BgL_arg2259z00_1411, BNIL);
												}
												{	/* Match/compiler.scm 294 */
													obj_t BgL_list2257z00_1410;

													BgL_list2257z00_1410 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2253z00_1407 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2255z00_1408, BgL_list2257z00_1410);
											}}
											BgL_arg2249z00_1403 =
												MAKE_PAIR(BgL_arg2252z00_1406, BgL_arg2253z00_1407);
										}
										{	/* Match/compiler.scm 293 */
											obj_t BgL_list2250z00_1404;

											{	/* Match/compiler.scm 293 */
												obj_t BgL_arg2251z00_1405;

												BgL_arg2251z00_1405 =
													MAKE_PAIR(BgL_arg2249z00_1403, BNIL);
												BgL_list2250z00_1404 =
													MAKE_PAIR(BgL_tryz00_1398, BgL_arg2251z00_1405);
											}
											BgL_newzd2defzd2_1402 = BgL_list2250z00_1404;
									}}
									{	/* Match/compiler.scm 306 */
										obj_t BgL_auxz00_3596;

										BgL_auxz00_3596 =
											MAKE_PAIR(BgL_newzd2defzd2_1402,
											CELL_REF(BgL_fzd2envzd2_3589));
										CELL_SET(BgL_fzd2envzd2_3589, BgL_auxz00_3596);
									}
									return BgL_tryz00_1398;
								}
							}
					}
				}
			}
		}
	}



/* compile-vector-begin */
	obj_t BGl_compilezd2vectorzd2beginz00zz__match_compilerz00(obj_t
		BgL_lgminz00_116, obj_t BgL_fz00_117, obj_t BgL_ez00_118,
		obj_t BgL_rz00_119, obj_t BgL_mz00_120, obj_t BgL_kz00_121,
		obj_t BgL_za7za7_122, obj_t BgL_dz00_123)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 331 */
			if ((CAR(BgL_dz00_123) == BGl_symbol2971z00zz__match_compilerz00))
				{	/* Match/compiler.scm 333 */
					bool_t BgL_testz00_4623;

					{	/* Match/compiler.scm 333 */
						obj_t BgL_auxz00_4624;

						{	/* Match/compiler.scm 333 */
							obj_t BgL_pairz00_2907;

							BgL_pairz00_2907 = BgL_dz00_123;
							BgL_auxz00_4624 = CAR(CDR(BgL_pairz00_2907));
						}
						BgL_testz00_4623 =
							BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_auxz00_4624,
							BgL_lgminz00_116);
					}
					if (BgL_testz00_4623)
						{	/* Match/compiler.scm 334 */
							obj_t BgL_fun2286z00_1437;

							BgL_fun2286z00_1437 =
								BGl_compilez00zz__match_compilerz00(BgL_fz00_117, BgL_ez00_118,
								BgL_rz00_119, BgL_mz00_120, BgL_kz00_121, BgL_za7za7_122,
								BgL_dz00_123);
							return PROCEDURE_ENTRY(BgL_fun2286z00_1437) (BgL_fun2286z00_1437,
								BINT(((long) 0)), BEOA);
						}
					else
						{	/* Match/compiler.scm 336 */
							obj_t BgL_arg2289z00_1439;

							obj_t BgL_arg2290z00_1440;

							BgL_arg2289z00_1439 = BGl_symbol2893z00zz__match_compilerz00;
							{	/* Match/compiler.scm 336 */
								obj_t BgL_arg2291z00_1441;

								obj_t BgL_arg2292z00_1442;

								obj_t BgL_arg2293z00_1443;

								{	/* Match/compiler.scm 336 */
									obj_t BgL_arg2300z00_1448;

									obj_t BgL_arg2301z00_1449;

									BgL_arg2300z00_1448 = BGl_symbol2973z00zz__match_compilerz00;
									{	/* Match/compiler.scm 336 */
										obj_t BgL_arg2302z00_1450;

										{	/* Match/compiler.scm 336 */
											obj_t BgL_arg2306z00_1454;

											obj_t BgL_arg2307z00_1455;

											BgL_arg2306z00_1454 =
												BGl_symbol2936z00zz__match_compilerz00;
											{	/* Match/compiler.scm 336 */
												obj_t BgL_list2308z00_1456;

												BgL_list2308z00_1456 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2307z00_1455 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_ez00_118, BgL_list2308z00_1456);
											}
											BgL_arg2302z00_1450 =
												MAKE_PAIR(BgL_arg2306z00_1454, BgL_arg2307z00_1455);
										}
										{	/* Match/compiler.scm 336 */
											obj_t BgL_list2304z00_1452;

											{	/* Match/compiler.scm 336 */
												obj_t BgL_arg2305z00_1453;

												BgL_arg2305z00_1453 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2304z00_1452 =
													MAKE_PAIR(BgL_lgminz00_116, BgL_arg2305z00_1453);
											}
											BgL_arg2301z00_1449 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2302z00_1450, BgL_list2304z00_1452);
										}
									}
									BgL_arg2291z00_1441 =
										MAKE_PAIR(BgL_arg2300z00_1448, BgL_arg2301z00_1449);
								}
								{	/* Match/compiler.scm 337 */
									obj_t BgL_fun2310z00_1457;

									BgL_fun2310z00_1457 =
										BGl_compilez00zz__match_compilerz00(BgL_fz00_117,
										BgL_ez00_118, BgL_rz00_119, BgL_mz00_120, BgL_kz00_121,
										BgL_za7za7_122, BgL_dz00_123);
									BgL_arg2292z00_1442 =
										PROCEDURE_ENTRY(BgL_fun2310z00_1457) (BgL_fun2310z00_1457,
										BINT(((long) 0)), BEOA);
								}
								BgL_arg2293z00_1443 =
									PROCEDURE_ENTRY(BgL_za7za7_122) (BgL_za7za7_122, BgL_dz00_123,
									BEOA);
								{	/* Match/compiler.scm 336 */
									obj_t BgL_list2295z00_1445;

									{	/* Match/compiler.scm 336 */
										obj_t BgL_arg2296z00_1446;

										{	/* Match/compiler.scm 336 */
											obj_t BgL_arg2297z00_1447;

											BgL_arg2297z00_1447 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2296z00_1446 =
												MAKE_PAIR(BgL_arg2293z00_1443, BgL_arg2297z00_1447);
										}
										BgL_list2295z00_1445 =
											MAKE_PAIR(BgL_arg2292z00_1442, BgL_arg2296z00_1446);
									}
									BgL_arg2290z00_1440 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2291z00_1441, BgL_list2295z00_1445);
							}}
							return MAKE_PAIR(BgL_arg2289z00_1439, BgL_arg2290z00_1440);
						}
				}
			else
				{	/* Match/compiler.scm 340 */
					obj_t BgL_arg2312z00_1460;

					obj_t BgL_arg2313z00_1461;

					BgL_arg2312z00_1460 = BGl_symbol2893z00zz__match_compilerz00;
					{	/* Match/compiler.scm 340 */
						obj_t BgL_arg2314z00_1462;

						obj_t BgL_arg2315z00_1463;

						obj_t BgL_arg2316z00_1464;

						{	/* Match/compiler.scm 340 */
							obj_t BgL_arg2321z00_1469;

							obj_t BgL_arg2322z00_1470;

							BgL_arg2321z00_1469 = BGl_symbol2975z00zz__match_compilerz00;
							{	/* Match/compiler.scm 340 */
								obj_t BgL_list2323z00_1471;

								BgL_list2323z00_1471 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2322z00_1470 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_118,
									BgL_list2323z00_1471);
							}
							BgL_arg2314z00_1462 =
								MAKE_PAIR(BgL_arg2321z00_1469, BgL_arg2322z00_1470);
						}
						{	/* Match/compiler.scm 341 */
							obj_t BgL_arg2324z00_1472;

							obj_t BgL_arg2325z00_1473;

							BgL_arg2324z00_1472 = BGl_symbol2893z00zz__match_compilerz00;
							{	/* Match/compiler.scm 341 */
								obj_t BgL_arg2326z00_1474;

								obj_t BgL_arg2327z00_1475;

								obj_t BgL_arg2328z00_1476;

								{	/* Match/compiler.scm 341 */
									obj_t BgL_arg2333z00_1481;

									obj_t BgL_arg2334z00_1482;

									BgL_arg2333z00_1481 = BGl_symbol2973z00zz__match_compilerz00;
									{	/* Match/compiler.scm 341 */
										obj_t BgL_arg2335z00_1483;

										{	/* Match/compiler.scm 341 */
											obj_t BgL_arg2339z00_1487;

											obj_t BgL_arg2340z00_1488;

											BgL_arg2339z00_1487 =
												BGl_symbol2936z00zz__match_compilerz00;
											{	/* Match/compiler.scm 341 */
												obj_t BgL_list2341z00_1489;

												BgL_list2341z00_1489 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2340z00_1488 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_ez00_118, BgL_list2341z00_1489);
											}
											BgL_arg2335z00_1483 =
												MAKE_PAIR(BgL_arg2339z00_1487, BgL_arg2340z00_1488);
										}
										{	/* Match/compiler.scm 341 */
											obj_t BgL_list2337z00_1485;

											{	/* Match/compiler.scm 341 */
												obj_t BgL_arg2338z00_1486;

												BgL_arg2338z00_1486 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2337z00_1485 =
													MAKE_PAIR(BgL_lgminz00_116, BgL_arg2338z00_1486);
											}
											BgL_arg2334z00_1482 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2335z00_1483, BgL_list2337z00_1485);
										}
									}
									BgL_arg2326z00_1474 =
										MAKE_PAIR(BgL_arg2333z00_1481, BgL_arg2334z00_1482);
								}
								{	/* Match/compiler.scm 344 */
									obj_t BgL_fun2350z00_1497;

									{	/* Match/compiler.scm 344 */
										obj_t BgL_arg2342z00_1490;

										{	/* Match/compiler.scm 344 */
											obj_t BgL_arg2343z00_1491;

											obj_t BgL_arg2344z00_1492;

											BgL_arg2343z00_1491 =
												BGl_symbol2971z00zz__match_compilerz00;
											{	/* Match/compiler.scm 345 */
												obj_t BgL_arg2345z00_1493;

												BgL_arg2345z00_1493 =
													make_vector(CINT(BgL_lgminz00_116),
													BGl_list2885z00zz__match_compilerz00);
												{	/* Match/compiler.scm 344 */
													obj_t BgL_list2347z00_1495;

													{	/* Match/compiler.scm 344 */
														obj_t BgL_arg2348z00_1496;

														BgL_arg2348z00_1496 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2347z00_1495 =
															MAKE_PAIR(BgL_arg2345z00_1493,
															BgL_arg2348z00_1496);
													}
													BgL_arg2344z00_1492 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_lgminz00_116, BgL_list2347z00_1495);
												}
											}
											BgL_arg2342z00_1490 =
												MAKE_PAIR(BgL_arg2343z00_1491, BgL_arg2344z00_1492);
										}
										BgL_fun2350z00_1497 =
											BGl_compilez00zz__match_compilerz00(BgL_fz00_117,
											BgL_ez00_118, BgL_rz00_119, BgL_mz00_120, BgL_kz00_121,
											BgL_za7za7_122, BgL_arg2342z00_1490);
									}
									BgL_arg2327z00_1475 =
										PROCEDURE_ENTRY(BgL_fun2350z00_1497) (BgL_fun2350z00_1497,
										BINT(((long) 0)), BEOA);
								}
								{	/* Match/compiler.scm 346 */
									obj_t BgL_arg2351z00_1499;

									{	/* Match/compiler.scm 346 */
										obj_t BgL_arg2352z00_1500;

										obj_t BgL_arg2353z00_1501;

										BgL_arg2352z00_1500 =
											BGl_symbol2971z00zz__match_compilerz00;
										{	/* Match/compiler.scm 346 */
											obj_t BgL_arg2355z00_1503;

											BgL_arg2355z00_1503 =
												make_vector(
												(int) (((long) 0)),
												BGl_list2885z00zz__match_compilerz00);
											{	/* Match/compiler.scm 346 */
												obj_t BgL_list2357z00_1505;

												{	/* Match/compiler.scm 346 */
													obj_t BgL_arg2358z00_1506;

													BgL_arg2358z00_1506 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2357z00_1505 =
														MAKE_PAIR(BgL_arg2355z00_1503, BgL_arg2358z00_1506);
												}
												BgL_arg2353z00_1501 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT((
															(long) 0)), BgL_list2357z00_1505);
										}}
										BgL_arg2351z00_1499 =
											MAKE_PAIR(BgL_arg2352z00_1500, BgL_arg2353z00_1501);
									}
									BgL_arg2328z00_1476 =
										PROCEDURE_ENTRY(BgL_za7za7_122) (BgL_za7za7_122,
										BgL_arg2351z00_1499, BEOA);
								}
								{	/* Match/compiler.scm 341 */
									obj_t BgL_list2330z00_1478;

									{	/* Match/compiler.scm 341 */
										obj_t BgL_arg2331z00_1479;

										{	/* Match/compiler.scm 341 */
											obj_t BgL_arg2332z00_1480;

											BgL_arg2332z00_1480 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2331z00_1479 =
												MAKE_PAIR(BgL_arg2328z00_1476, BgL_arg2332z00_1480);
										}
										BgL_list2330z00_1478 =
											MAKE_PAIR(BgL_arg2327z00_1475, BgL_arg2331z00_1479);
									}
									BgL_arg2325z00_1473 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2326z00_1474, BgL_list2330z00_1478);
							}}
							BgL_arg2315z00_1463 =
								MAKE_PAIR(BgL_arg2324z00_1472, BgL_arg2325z00_1473);
						}
						{	/* Match/compiler.scm 348 */
							obj_t BgL_arg2359z00_1507;

							BgL_arg2359z00_1507 =
								BGl_patternzd2pluszd2zz__match_descriptionsz00(BgL_dz00_123,
								BGl_list2977z00zz__match_compilerz00);
							BgL_arg2316z00_1464 =
								PROCEDURE_ENTRY(BgL_za7za7_122) (BgL_za7za7_122,
								BgL_arg2359z00_1507, BEOA);
						}
						{	/* Match/compiler.scm 340 */
							obj_t BgL_list2318z00_1466;

							{	/* Match/compiler.scm 340 */
								obj_t BgL_arg2319z00_1467;

								{	/* Match/compiler.scm 340 */
									obj_t BgL_arg2320z00_1468;

									BgL_arg2320z00_1468 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2319z00_1467 =
										MAKE_PAIR(BgL_arg2316z00_1464, BgL_arg2320z00_1468);
								}
								BgL_list2318z00_1466 =
									MAKE_PAIR(BgL_arg2315z00_1463, BgL_arg2319z00_1467);
							}
							BgL_arg2313z00_1461 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2314z00_1462,
								BgL_list2318z00_1466);
					}}
					return MAKE_PAIR(BgL_arg2312z00_1460, BgL_arg2313z00_1461);
				}
		}
	}



/* compile-vector-cons */
	obj_t BGl_compilezd2vectorzd2consz00zz__match_compilerz00(obj_t BgL_f1z00_124,
		obj_t BgL_f2z00_125, obj_t BgL_ez00_126, obj_t BgL_rz00_127,
		obj_t BgL_mz00_128, obj_t BgL_kz00_129, obj_t BgL_za7za7_130,
		obj_t BgL_dz00_131)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 354 */
			{	/* Match/compiler.scm 355 */
				obj_t BgL_zc3anonymousza32360ze3z83_3599;

				BgL_zc3anonymousza32360ze3z83_3599 =
					make_fx_procedure(BGl_zc3anonymousza32360ze3z83zz__match_compilerz00,
					(int) (((long) 1)), (int) (((long) 8)));
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 0)), BgL_dz00_131);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 1)), BgL_ez00_126);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 2)), BgL_f2z00_125);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 3)), BgL_mz00_128);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 4)), BgL_kz00_129);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 5)), BgL_za7za7_130);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 6)), BgL_f1z00_124);
				PROCEDURE_SET(BgL_zc3anonymousza32360ze3z83_3599,
					(int) (((long) 7)), BgL_rz00_127);
				return BgL_zc3anonymousza32360ze3z83_3599;
			}
		}
	}



/* <anonymous:2360> */
	obj_t BGl_zc3anonymousza32360ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3600, obj_t BgL_iz00_3609)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 355 */
			{	/* Match/compiler.scm 356 */
				obj_t BgL_dz00_3601;

				obj_t BgL_ez00_3602;

				obj_t BgL_f2z00_3603;

				obj_t BgL_mz00_3604;

				obj_t BgL_kz00_3605;

				obj_t BgL_za7za7_3606;

				obj_t BgL_f1z00_3607;

				obj_t BgL_rz00_3608;

				BgL_dz00_3601 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 0)));
				BgL_ez00_3602 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 1)));
				BgL_f2z00_3603 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 2)));
				BgL_mz00_3604 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 3)));
				BgL_kz00_3605 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 4)));
				BgL_za7za7_3606 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 5)));
				BgL_f1z00_3607 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 6)));
				BgL_rz00_3608 = PROCEDURE_REF(BgL_envz00_3600, (int) (((long) 7)));
				{
					obj_t BgL_iz00_1508;

					BgL_iz00_1508 = BgL_iz00_3609;
					{	/* Match/compiler.scm 356 */
						bool_t BgL_testz00_4727;

						{	/* Match/compiler.scm 356 */
							int BgL_arg2367z00_1516;

							{	/* Match/compiler.scm 356 */
								obj_t BgL_arg2368z00_1517;

								{	/* Match/compiler.scm 356 */
									obj_t BgL_pairz00_2911;

									BgL_pairz00_2911 = BgL_dz00_3601;
									BgL_arg2368z00_1517 = CAR(CDR(CDR(BgL_pairz00_2911)));
								}
								BgL_arg2367z00_1516 = VECTOR_LENGTH(BgL_arg2368z00_1517);
							}
							BgL_testz00_4727 =
								BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1508,
								BINT(BgL_arg2367z00_1516));
						}
						if (BgL_testz00_4727)
							{	/* Match/compiler.scm 357 */
								obj_t BgL_arg2362z00_1511;

								obj_t BgL_arg2363z00_1512;

								{	/* Match/compiler.scm 357 */
									obj_t BgL_pairz00_2918;

									BgL_pairz00_2918 = BgL_dz00_3601;
									BgL_arg2362z00_1511 = CDR(CDR(BgL_pairz00_2918));
								}
								{	/* Match/compiler.scm 358 */
									obj_t BgL_arg2364z00_1513;

									obj_t BgL_arg2365z00_1514;

									obj_t BgL_arg2366z00_1515;

									{	/* Match/compiler.scm 358 */
										obj_t BgL_pairz00_2922;

										BgL_pairz00_2922 = BgL_dz00_3601;
										BgL_arg2364z00_1513 = CAR(CDR(CDR(BgL_pairz00_2922)));
									}
									BgL_arg2365z00_1514 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1508,
										BINT(((long) 1)));
									BgL_arg2366z00_1515 = BGl_list2885z00zz__match_compilerz00;
									BgL_arg2363z00_1512 =
										BGl_extendzd2vectorzd2zz__match_descriptionsz00
										(BgL_arg2364z00_1513, BgL_arg2365z00_1514,
										BgL_arg2366z00_1515);
								}
								SET_CAR(BgL_arg2362z00_1511, BgL_arg2363z00_1512);
							}
						else
							{	/* Match/compiler.scm 356 */
								BTRUE;
							}
					}
					{	/* Match/compiler.scm 360 */
						obj_t BgL_arg2369z00_1518;

						obj_t BgL_arg2372z00_1521;

						{	/* Match/compiler.scm 360 */
							obj_t BgL_arg2373z00_1522;

							obj_t BgL_arg2374z00_1523;

							BgL_arg2373z00_1522 = BGl_symbol2979z00zz__match_compilerz00;
							{	/* Match/compiler.scm 360 */
								obj_t BgL_list2375z00_1524;

								{	/* Match/compiler.scm 360 */
									obj_t BgL_arg2376z00_1525;

									BgL_arg2376z00_1525 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2375z00_1524 =
										MAKE_PAIR(BgL_iz00_1508, BgL_arg2376z00_1525);
								}
								BgL_arg2374z00_1523 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_3602,
									BgL_list2375z00_1524);
							}
							BgL_arg2369z00_1518 =
								MAKE_PAIR(BgL_arg2373z00_1522, BgL_arg2374z00_1523);
						}
						{	/* Match/compiler.scm 366 */
							obj_t BgL_arg2383z00_1536;

							{	/* Match/compiler.scm 366 */
								obj_t BgL_pairz00_2930;

								BgL_pairz00_2930 = BgL_dz00_3601;
								BgL_arg2383z00_1536 = CAR(CDR(CDR(BgL_pairz00_2930)));
							}
							BgL_arg2372z00_1521 =
								VECTOR_REF(BgL_arg2383z00_1536, CINT(BgL_iz00_1508));
						}
						{	/* Match/compiler.scm 362 */
							obj_t BgL_zc3anonymousza32377ze3z83_3598;

							obj_t BgL_zc3anonymousza32381ze3z83_3597;

							BgL_zc3anonymousza32377ze3z83_3598 =
								make_fx_procedure
								(BGl_zc3anonymousza32377ze3z83zz__match_compilerz00,
								(int) (((long) 3)), (int) (((long) 7)));
							BgL_zc3anonymousza32381ze3z83_3597 =
								make_fx_procedure
								(BGl_zc3anonymousza32381ze3z83zz__match_compilerz00,
								(int) (((long) 1)), (int) (((long) 3)));
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 0)), BgL_dz00_3601);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 1)), BgL_iz00_1508);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 2)), BgL_f2z00_3603);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 3)), BgL_ez00_3602);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 4)), BgL_mz00_3604);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 5)), BgL_kz00_3605);
							PROCEDURE_SET(BgL_zc3anonymousza32377ze3z83_3598,
								(int) (((long) 6)), BgL_za7za7_3606);
							PROCEDURE_SET(BgL_zc3anonymousza32381ze3z83_3597,
								(int) (((long) 0)), BgL_dz00_3601);
							PROCEDURE_SET(BgL_zc3anonymousza32381ze3z83_3597,
								(int) (((long) 1)), BgL_iz00_1508);
							PROCEDURE_SET(BgL_zc3anonymousza32381ze3z83_3597,
								(int) (((long) 2)), BgL_za7za7_3606);
							return BGl_compilez00zz__match_compilerz00(BgL_f1z00_3607,
								BgL_arg2369z00_1518, BgL_rz00_3608, BgL_mz00_3604,
								BgL_zc3anonymousza32377ze3z83_3598,
								BgL_zc3anonymousza32381ze3z83_3597, BgL_arg2372z00_1521);
						}
					}
				}
			}
		}
	}



/* <anonymous:2381> */
	obj_t BGl_zc3anonymousza32381ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3610, obj_t BgL_d1z00_3614)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 364 */
			{	/* Match/compiler.scm 365 */
				obj_t BgL_dz00_3611;

				obj_t BgL_iz00_3612;

				obj_t BgL_za7za7_3613;

				BgL_dz00_3611 = PROCEDURE_REF(BgL_envz00_3610, (int) (((long) 0)));
				BgL_iz00_3612 = PROCEDURE_REF(BgL_envz00_3610, (int) (((long) 1)));
				BgL_za7za7_3613 = PROCEDURE_REF(BgL_envz00_3610, (int) (((long) 2)));
				{
					obj_t BgL_d1z00_1533;

					BgL_d1z00_1533 = BgL_d1z00_3614;
					{	/* Match/compiler.scm 365 */
						obj_t BgL_arg2382z00_2941;

						BgL_arg2382z00_2941 =
							BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_dz00_3611,
							BgL_iz00_3612, BgL_d1z00_1533);
						return PROCEDURE_ENTRY(BgL_za7za7_3613) (BgL_za7za7_3613,
							BgL_arg2382z00_2941, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2377> */
	obj_t BGl_zc3anonymousza32377ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3615, obj_t BgL_rz00_3623, obj_t BgL_za71za7_3624,
		obj_t BgL_d1z00_3625)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 361 */
			{	/* Match/compiler.scm 362 */
				obj_t BgL_dz00_3616;

				obj_t BgL_iz00_3617;

				obj_t BgL_f2z00_3618;

				obj_t BgL_ez00_3619;

				obj_t BgL_mz00_3620;

				obj_t BgL_kz00_3621;

				obj_t BgL_za7za7_3622;

				BgL_dz00_3616 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 0)));
				BgL_iz00_3617 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 1)));
				BgL_f2z00_3618 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 2)));
				BgL_ez00_3619 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 3)));
				BgL_mz00_3620 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 4)));
				BgL_kz00_3621 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 5)));
				BgL_za7za7_3622 = PROCEDURE_REF(BgL_envz00_3615, (int) (((long) 6)));
				{
					obj_t BgL_rz00_1526;

					obj_t BgL_za71za7_1527;

					obj_t BgL_d1z00_1528;

					BgL_rz00_1526 = BgL_rz00_3623;
					BgL_za71za7_1527 = BgL_za71za7_3624;
					BgL_d1z00_1528 = BgL_d1z00_3625;
					{	/* Match/compiler.scm 362 */
						obj_t BgL_fun2380z00_2938;

						BgL_fun2380z00_2938 =
							BGl_compilez00zz__match_compilerz00(BgL_f2z00_3618, BgL_ez00_3619,
							BgL_rz00_1526, BgL_mz00_3620, BgL_kz00_3621, BgL_za7za7_3622,
							BGl_vectorzd2pluszd2zz__match_descriptionsz00(BgL_dz00_3616,
								BgL_iz00_3617, BgL_d1z00_1528));
						{	/* Match/compiler.scm 362 */
							obj_t BgL_arg2379z00_2940;

							BgL_arg2379z00_2940 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_3617,
								BINT(((long) 1)));
							return
								PROCEDURE_ENTRY(BgL_fun2380z00_2938) (BgL_fun2380z00_2938,
								BgL_arg2379z00_2940, BEOA);
						}
					}
				}
			}
		}
	}



/* compile-struct-pat */
	obj_t BGl_compilezd2structzd2patz00zz__match_compilerz00(obj_t BgL_fz00_153,
		obj_t BgL_ez00_154, obj_t BgL_rz00_155, obj_t BgL_mz00_156,
		obj_t BgL_kz00_157, obj_t BgL_za7za7_158, obj_t BgL_dz00_159)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 384 */
			{	/* Match/compiler.scm 385 */
				obj_t BgL_predz00_1557;

				{	/* Match/compiler.scm 386 */
					obj_t BgL_pairz00_2964;

					BgL_pairz00_2964 = BgL_fz00_153;
					BgL_predz00_1557 = CAR(CDR(CDR(BgL_pairz00_2964)));
				}
				{	/* Match/compiler.scm 386 */
					obj_t BgL_pza2za2_1558;

					{	/* Match/compiler.scm 387 */
						obj_t BgL_pairz00_2970;

						BgL_pairz00_2970 = BgL_fz00_153;
						BgL_pza2za2_1558 = CDR(CDR(CDR(BgL_pairz00_2970)));
					}
					{	/* Match/compiler.scm 387 */
						obj_t BgL_za2kza2z00_1559;

						BgL_za2kza2z00_1559 =
							PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
							(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
							BGl_string2954z00zz__match_compilerz00, BEOA);
						{	/* Match/compiler.scm 388 */
							obj_t BgL_za2varsza2z00_1560;

							BgL_za2varsza2z00_1560 =
								BGl_patternzd2variableszd2zz__match_descriptionsz00
								(BgL_fz00_153);
							{	/* Match/compiler.scm 389 */
								obj_t BgL_za2callza2z00_1561;

								BgL_za2callza2z00_1561 =
									MAKE_PAIR(BgL_za2kza2z00_1559,
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_za2varsza2z00_1560, BNIL));
								{	/* Match/compiler.scm 390 */
									obj_t BgL_successzd2formzd2_1562;

									{	/* Match/compiler.scm 391 */
										obj_t BgL_arg2412z00_1584;

										BgL_arg2412z00_1584 =
											BGl_extendza2z72zd0zz__match_compilerz00(BgL_rz00_155,
											BgL_za2varsza2z00_1560);
										BgL_successzd2formzd2_1562 =
											PROCEDURE_ENTRY(BgL_kz00_157) (BgL_kz00_157,
											BgL_arg2412z00_1584, BgL_za7za7_158, BgL_dz00_159, BEOA);
									}
									{	/* Match/compiler.scm 391 */
										obj_t BgL_failurezd2formzd2_1563;

										BgL_failurezd2formzd2_1563 =
											PROCEDURE_ENTRY(BgL_za7za7_158) (BgL_za7za7_158,
											BgL_dz00_159, BEOA);
										{	/* Match/compiler.scm 392 */
											obj_t BgL_indexesz00_1564;

											BgL_indexesz00_1564 =
												BGl_integersz72z72zz__match_compilerz00(
												(long)
												CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT
														(bgl_list_length(BgL_pza2za2_1558)),
														BINT(((long) 1)))), ((long) 0));
											{	/* Match/compiler.scm 393 */

												{	/* Match/compiler.scm 394 */
													obj_t BgL_arg2399z00_1565;

													obj_t BgL_arg2400z00_1566;

													{	/* Match/compiler.scm 394 */
														obj_t BgL_arg2401z00_1567;

														{	/* Match/compiler.scm 394 */
															obj_t BgL_list2402z00_1568;

															BgL_list2402z00_1568 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2401z00_1567 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_ez00_154, BgL_list2402z00_1568);
														}
														BgL_arg2399z00_1565 =
															MAKE_PAIR(BgL_predz00_1557, BgL_arg2401z00_1567);
													}
													{	/* Match/compiler.scm 397 */
														obj_t BgL_arg2405z00_1571;

														BgL_arg2405z00_1571 =
															BGl_list2885z00zz__match_compilerz00;
														{	/* Match/compiler.scm 397 */
															obj_t BgL_zc3anonymousza32407ze3z83_3626;

															BgL_zc3anonymousza32407ze3z83_3626 =
																make_fx_procedure
																(BGl_zc3anonymousza32407ze3z83zz__match_compilerz00,
																(int) (((long) 1)), (int) (((long) 1)));
															PROCEDURE_SET(BgL_zc3anonymousza32407ze3z83_3626,
																(int) (((long) 0)), BgL_failurezd2formzd2_1563);
															BgL_arg2400z00_1566 =
																BGl_compileza2_2884za2zz__match_compilerz00
																(BgL_successzd2formzd2_1562,
																BgL_zc3anonymousza32407ze3z83_3626,
																BgL_mz00_156, BgL_ez00_154,
																BgL_failurezd2formzd2_1563, BgL_pza2za2_1558,
																BgL_indexesz00_1564, BgL_rz00_155,
																BgL_arg2405z00_1571);
													}}
													return
														BGl_buildzd2ifzd2zz__match_compilerz00
														(BgL_arg2399z00_1565, BgL_arg2400z00_1566,
														BgL_failurezd2formzd2_1563);
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



/* extend*' */
	obj_t BGl_extendza2z72zd0zz__match_compilerz00(obj_t BgL_rz00_3656,
		obj_t BgL_vza2za2_2977)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 439 */
			if (NULLP(BgL_vza2za2_2977))
				{	/* Match/compiler.scm 391 */
					return BgL_rz00_3656;
				}
			else
				{	/* Match/compiler.scm 391 */
					obj_t BgL_arg2439z00_2979;

					obj_t BgL_arg2440z00_2980;

					obj_t BgL_arg2441z00_2981;

					BgL_arg2439z00_2979 =
						BGl_extendza2z72zd0zz__match_compilerz00(BgL_rz00_3656,
						CDR(BgL_vza2za2_2977));
					BgL_arg2440z00_2980 = CAR(BgL_vza2za2_2977);
					BgL_arg2441z00_2981 = BGl_symbol2957z00zz__match_compilerz00;
					{	/* Match/compiler.scm 391 */
						obj_t BgL_arg2434z00_2989;

						obj_t BgL_arg2435z00_2990;

						BgL_arg2434z00_2989 =
							MAKE_PAIR(BgL_arg2440z00_2980, BgL_arg2441z00_2981);
						BgL_arg2435z00_2990 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg2439z00_2979, BNIL);
						return MAKE_PAIR(BgL_arg2434z00_2989, BgL_arg2435z00_2990);
					}
				}
		}
	}



/* integers' */
	obj_t BGl_integersz72z72zz__match_compilerz00(long BgL_arg2409z00_3657,
		long BgL_fromz00_2992)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 506 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_fromz00_2992),
					BINT(BgL_arg2409z00_3657)))
				{	/* Match/compiler.scm 393 */
					return BNIL;
				}
			else
				{	/* Match/compiler.scm 393 */
					return
						MAKE_PAIR(BINT(BgL_fromz00_2992),
						BGl_integersz72z72zz__match_compilerz00(BgL_arg2409z00_3657,
							(long)
							CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_fromz00_2992),
									BINT(((long) 1))))));
		}}
	}



/* compile*_2884 */
	obj_t BGl_compileza2_2884za2zz__match_compilerz00(obj_t
		BgL_successzd2formzd2_3633, obj_t BgL_zc3anonymousza32407ze3z83_3632,
		obj_t BgL_mz00_3631, obj_t BgL_ez00_3630, obj_t BgL_failurezd2formzd2_3629,
		obj_t BgL_pza2za2_3000, obj_t BgL_iza2za2_3001, obj_t BgL_rz00_3002,
		obj_t BgL_dz00_3003)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 402 */
			if (NULLP(BgL_pza2za2_3000))
				{	/* Match/compiler.scm 396 */
					return BgL_successzd2formzd2_3633;
				}
			else
				{	/* Match/compiler.scm 396 */
					obj_t BgL_arg2415z00_3005;

					obj_t BgL_arg2416z00_3006;

					obj_t BgL_arg2418z00_3007;

					BgL_arg2415z00_3005 = CAR(BgL_pza2za2_3000);
					{	/* Match/compiler.scm 396 */
						obj_t BgL_arg2419z00_3008;

						obj_t BgL_arg2420z00_3009;

						BgL_arg2419z00_3008 = BGl_symbol2981z00zz__match_compilerz00;
						{	/* Match/compiler.scm 396 */
							obj_t BgL_arg2421z00_3010;

							BgL_arg2421z00_3010 = CAR(BgL_iza2za2_3001);
							{	/* Match/compiler.scm 396 */
								obj_t BgL_list2423z00_3012;

								{	/* Match/compiler.scm 396 */
									obj_t BgL_arg2424z00_3013;

									BgL_arg2424z00_3013 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2423z00_3012 =
										MAKE_PAIR(BgL_arg2421z00_3010, BgL_arg2424z00_3013);
								}
								BgL_arg2420z00_3009 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_3630,
									BgL_list2423z00_3012);
							}
						}
						BgL_arg2416z00_3006 =
							MAKE_PAIR(BgL_arg2419z00_3008, BgL_arg2420z00_3009);
					}
					BgL_arg2418z00_3007 = BGl_list2885z00zz__match_compilerz00;
					{	/* Match/compiler.scm 396 */
						obj_t BgL_zc3anonymousza32425ze3z83_3627;

						BgL_zc3anonymousza32425ze3z83_3627 =
							make_fx_procedure
							(BGl_zc3anonymousza32425ze3z83zz__match_compilerz00,
							(int) (((long) 3)), (int) (((long) 7)));
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 0)), BgL_failurezd2formzd2_3629);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 1)), BgL_ez00_3630);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 2)), BgL_mz00_3631);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 3)), BgL_zc3anonymousza32407ze3z83_3632);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 4)), BgL_successzd2formzd2_3633);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 5)), BgL_pza2za2_3000);
						PROCEDURE_SET(BgL_zc3anonymousza32425ze3z83_3627,
							(int) (((long) 6)), BgL_iza2za2_3001);
						return BGl_compilez00zz__match_compilerz00(BgL_arg2415z00_3005,
							BgL_arg2416z00_3006, BgL_rz00_3002, BgL_mz00_3631,
							BgL_zc3anonymousza32425ze3z83_3627,
							BgL_zc3anonymousza32407ze3z83_3632, BgL_arg2418z00_3007);
					}
				}
		}
	}



/* <anonymous:2407> */
	obj_t BGl_zc3anonymousza32407ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3634, obj_t BgL_dz00_3636)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 398 */
			return PROCEDURE_REF(BgL_envz00_3634, (int) (((long) 0)));
		}
	}



/* <anonymous:2425> */
	obj_t BGl_zc3anonymousza32425ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3637, obj_t BgL_rrz00_3645, obj_t BgL_za7za7z00_3646,
		obj_t BgL_ddz00_3647)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 406 */
			{	/* Match/compiler.scm 396 */
				obj_t BgL_failurezd2formzd2_3638;

				obj_t BgL_ez00_3639;

				obj_t BgL_mz00_3640;

				obj_t BgL_zc3anonymousza32407ze3z83_3641;

				obj_t BgL_successzd2formzd2_3642;

				obj_t BgL_pza2za2_3643;

				obj_t BgL_iza2za2_3644;

				BgL_failurezd2formzd2_3638 =
					PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 0)));
				BgL_ez00_3639 = PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 1)));
				BgL_mz00_3640 = PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 2)));
				BgL_zc3anonymousza32407ze3z83_3641 =
					PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 3)));
				BgL_successzd2formzd2_3642 =
					PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 4)));
				BgL_pza2za2_3643 = PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 5)));
				BgL_iza2za2_3644 = PROCEDURE_REF(BgL_envz00_3637, (int) (((long) 6)));
				{
					obj_t BgL_rrz00_3015;

					obj_t BgL_za7za7z00_3016;

					obj_t BgL_ddz00_3017;

					BgL_rrz00_3015 = BgL_rrz00_3645;
					BgL_za7za7z00_3016 = BgL_za7za7z00_3646;
					BgL_ddz00_3017 = BgL_ddz00_3647;
					return
						BGl_compileza2_2884za2zz__match_compilerz00
						(BgL_successzd2formzd2_3642, BgL_zc3anonymousza32407ze3z83_3641,
						BgL_mz00_3640, BgL_ez00_3639, BgL_failurezd2formzd2_3638,
						CDR(BgL_pza2za2_3643), CDR(BgL_iza2za2_3644), BgL_rrz00_3015,
						BGl_list2885z00zz__match_compilerz00);
				}
			}
		}
	}



/* _k.init */
	obj_t BGl__kze2initze2zz__match_compilerz00(obj_t BgL_envz00_3418,
		obj_t BgL_rz00_3419, obj_t BgL_za7za7_3420, obj_t BgL_dz00_3421)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 420 */
			return BBOOL(((bool_t) 1));
		}
	}



/* _z.init */
	obj_t BGl__za7ze2initz45zz__match_compilerz00(obj_t BgL_envz00_3422,
		obj_t BgL_dz00_3423)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 422 */
			return BBOOL(((bool_t) 0));
		}
	}



/* m.init */
	obj_t BGl_mze2initze2zz__match_compilerz00(obj_t BgL_nz00_181)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 447 */
			{	/* Match/compiler.scm 448 */
				obj_t BgL_zc3anonymousza32443ze3z83_3648;

				BgL_zc3anonymousza32443ze3z83_3648 =
					make_fx_procedure(BGl_zc3anonymousza32443ze3z83zz__match_compilerz00,
					(int) (((long) 5)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza32443ze3z83_3648,
					(int) (((long) 0)), BgL_nz00_181);
				return BgL_zc3anonymousza32443ze3z83_3648;
			}
		}
	}



/* _m.init */
	obj_t BGl__mze2initze2zz__match_compilerz00(obj_t BgL_envz00_3416,
		obj_t BgL_nz00_3417)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 447 */
			return BGl_mze2initze2zz__match_compilerz00(BgL_nz00_3417);
		}
	}



/* <anonymous:2443> */
	obj_t BGl_zc3anonymousza32443ze3z83zz__match_compilerz00(obj_t
		BgL_envz00_3649, obj_t BgL_ez00_3651, obj_t BgL_rz00_3652,
		obj_t BgL_kz00_3653, obj_t BgL_za7za7_3654, obj_t BgL_cz00_3655)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 448 */
			{	/* Match/compiler.scm 448 */
				obj_t BgL_nz00_3650;

				BgL_nz00_3650 = PROCEDURE_REF(BgL_envz00_3649, (int) (((long) 0)));
				{
					obj_t BgL_ez00_3147;

					obj_t BgL_rz00_3148;

					obj_t BgL_kz00_3149;

					obj_t BgL_za7za7_3150;

					obj_t BgL_cz00_3151;

					BgL_ez00_3147 = BgL_ez00_3651;
					BgL_rz00_3148 = BgL_rz00_3652;
					BgL_kz00_3149 = BgL_kz00_3653;
					BgL_za7za7_3150 = BgL_za7za7_3654;
					BgL_cz00_3151 = BgL_cz00_3655;
					{	/* Match/compiler.scm 448 */
						obj_t BgL_list2444z00_3155;

						{	/* Match/compiler.scm 448 */
							obj_t BgL_arg2446z00_3157;

							BgL_arg2446z00_3157 = MAKE_PAIR(BgL_nz00_3650, BNIL);
							BgL_list2444z00_3155 =
								MAKE_PAIR(BGl_string2983z00zz__match_compilerz00,
								BgL_arg2446z00_3157);
						}
						return
							BGl_errorz00zz__errorz00(BGl_string2916z00zz__match_compilerz00,
							BgL_list2444z00_3155, BGl_string2917z00zz__match_compilerz00);
					}
				}
			}
		}
	}



/* build-if */
	obj_t BGl_buildzd2ifzd2zz__match_compilerz00(obj_t BgL_tstz00_189,
		obj_t BgL_thenz00_190, obj_t BgL_elsez00_191)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 467 */
			if ((BgL_tstz00_189 == BTRUE))
				{	/* Match/compiler.scm 469 */
					return BgL_thenz00_190;
				}
			else
				{	/* Match/compiler.scm 469 */
					if ((BgL_tstz00_189 == BFALSE))
						{	/* Match/compiler.scm 470 */
							return BgL_elsez00_191;
						}
					else
						{	/* Match/compiler.scm 471 */
							bool_t BgL_testz00_4921;

							if ((BgL_thenz00_190 == BTRUE))
								{	/* Match/compiler.scm 471 */
									BgL_testz00_4921 = (BgL_elsez00_191 == BFALSE);
								}
							else
								{	/* Match/compiler.scm 471 */
									BgL_testz00_4921 = ((bool_t) 0);
								}
							if (BgL_testz00_4921)
								{	/* Match/compiler.scm 471 */
									return BgL_tstz00_189;
								}
							else
								{	/* Match/compiler.scm 474 */
									bool_t BgL_testz00_4925;

									if ((BgL_thenz00_190 == BFALSE))
										{	/* Match/compiler.scm 474 */
											BgL_testz00_4925 = (BgL_elsez00_191 == BTRUE);
										}
									else
										{	/* Match/compiler.scm 474 */
											BgL_testz00_4925 = ((bool_t) 0);
										}
									if (BgL_testz00_4925)
										{	/* Match/compiler.scm 476 */
											obj_t BgL_arg2457z00_1638;

											obj_t BgL_arg2458z00_1639;

											BgL_arg2457z00_1638 =
												BGl_symbol2899z00zz__match_compilerz00;
											{	/* Match/compiler.scm 476 */
												obj_t BgL_list2459z00_1640;

												BgL_list2459z00_1640 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2458z00_1639 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_tstz00_189, BgL_list2459z00_1640);
											}
											return
												MAKE_PAIR(BgL_arg2457z00_1638, BgL_arg2458z00_1639);
										}
									else
										{	/* Match/compiler.scm 477 */
											obj_t BgL_arg2460z00_1641;

											obj_t BgL_arg2461z00_1642;

											BgL_arg2460z00_1641 =
												BGl_symbol2893z00zz__match_compilerz00;
											{	/* Match/compiler.scm 477 */
												obj_t BgL_list2462z00_1643;

												{	/* Match/compiler.scm 477 */
													obj_t BgL_arg2465z00_1644;

													{	/* Match/compiler.scm 477 */
														obj_t BgL_arg2467z00_1645;

														BgL_arg2467z00_1645 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2465z00_1644 =
															MAKE_PAIR(BgL_elsez00_191, BgL_arg2467z00_1645);
													}
													BgL_list2462z00_1643 =
														MAKE_PAIR(BgL_thenz00_190, BgL_arg2465z00_1644);
												}
												BgL_arg2461z00_1642 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_tstz00_189, BgL_list2462z00_1643);
											}
											return
												MAKE_PAIR(BgL_arg2460z00_1641, BgL_arg2461z00_1642);
										}
								}
						}
				}
		}
	}



/* build-let */
	obj_t BGl_buildzd2letzd2zz__match_compilerz00(obj_t BgL_za2carza2z00_192,
		obj_t BgL_za2cdrza2z00_193, obj_t BgL_ez00_194, obj_t BgL_bodyz00_195)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 479 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00
				(BGl_countzd2occurrenceszd2zz__match_compilerz00(BgL_za2carza2z00_192,
						BgL_bodyz00_195, ((long) 0)), BINT(((long) 1))))
				{	/* Match/compiler.scm 480 */
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00
						(BGl_countzd2occurrenceszd2zz__match_compilerz00
							(BgL_za2cdrza2z00_193, BgL_bodyz00_195, ((long) 0)),
							BINT(((long) 1))))
						{	/* Match/compiler.scm 482 */
							obj_t BgL_arg2472z00_1650;

							obj_t BgL_arg2476z00_1651;

							BgL_arg2472z00_1650 = BGl_symbol2963z00zz__match_compilerz00;
							{	/* Match/compiler.scm 482 */
								obj_t BgL_arg2477z00_1652;

								{	/* Match/compiler.scm 482 */
									obj_t BgL_arg2481z00_1656;

									obj_t BgL_arg2482z00_1657;

									{	/* Match/compiler.scm 482 */
										obj_t BgL_arg2483z00_1658;

										{	/* Match/compiler.scm 482 */
											obj_t BgL_arg2484z00_1659;

											{	/* Match/compiler.scm 482 */
												obj_t BgL_arg2487z00_1662;

												obj_t BgL_arg2488z00_1663;

												BgL_arg2487z00_1662 =
													BGl_symbol2984z00zz__match_compilerz00;
												{	/* Match/compiler.scm 482 */
													obj_t BgL_list2489z00_1664;

													BgL_list2489z00_1664 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2488z00_1663 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_ez00_194, BgL_list2489z00_1664);
												}
												BgL_arg2484z00_1659 =
													MAKE_PAIR(BgL_arg2487z00_1662, BgL_arg2488z00_1663);
											}
											{	/* Match/compiler.scm 482 */
												obj_t BgL_list2486z00_1661;

												BgL_list2486z00_1661 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2483z00_1658 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2484z00_1659, BgL_list2486z00_1661);
										}}
										BgL_arg2481z00_1656 =
											MAKE_PAIR(BgL_za2carza2z00_192, BgL_arg2483z00_1658);
									}
									{	/* Match/compiler.scm 482 */
										obj_t BgL_arg2491z00_1665;

										{	/* Match/compiler.scm 482 */
											obj_t BgL_arg2494z00_1668;

											{	/* Match/compiler.scm 482 */
												obj_t BgL_arg2495z00_1669;

												{	/* Match/compiler.scm 482 */
													obj_t BgL_arg2499z00_1672;

													obj_t BgL_arg2500z00_1673;

													BgL_arg2499z00_1672 =
														BGl_symbol2986z00zz__match_compilerz00;
													{	/* Match/compiler.scm 482 */
														obj_t BgL_list2501z00_1674;

														BgL_list2501z00_1674 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2500z00_1673 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_ez00_194, BgL_list2501z00_1674);
													}
													BgL_arg2495z00_1669 =
														MAKE_PAIR(BgL_arg2499z00_1672, BgL_arg2500z00_1673);
												}
												{	/* Match/compiler.scm 482 */
													obj_t BgL_list2498z00_1671;

													BgL_list2498z00_1671 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2494z00_1668 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2495z00_1669, BgL_list2498z00_1671);
											}}
											BgL_arg2491z00_1665 =
												MAKE_PAIR(BgL_za2cdrza2z00_193, BgL_arg2494z00_1668);
										}
										{	/* Match/compiler.scm 482 */
											obj_t BgL_list2493z00_1667;

											BgL_list2493z00_1667 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2482z00_1657 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2491z00_1665, BgL_list2493z00_1667);
									}}
									BgL_arg2477z00_1652 =
										MAKE_PAIR(BgL_arg2481z00_1656, BgL_arg2482z00_1657);
								}
								{	/* Match/compiler.scm 482 */
									obj_t BgL_list2479z00_1654;

									{	/* Match/compiler.scm 482 */
										obj_t BgL_arg2480z00_1655;

										BgL_arg2480z00_1655 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2479z00_1654 =
											MAKE_PAIR(BgL_bodyz00_195, BgL_arg2480z00_1655);
									}
									BgL_arg2476z00_1651 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2477z00_1652, BgL_list2479z00_1654);
							}}
							return MAKE_PAIR(BgL_arg2472z00_1650, BgL_arg2476z00_1651);
						}
					else
						{	/* Match/compiler.scm 484 */
							obj_t BgL_arg2502z00_1675;

							obj_t BgL_arg2503z00_1676;

							BgL_arg2502z00_1675 = BGl_symbol2963z00zz__match_compilerz00;
							{	/* Match/compiler.scm 484 */
								obj_t BgL_arg2504z00_1677;

								obj_t BgL_arg2505z00_1678;

								{	/* Match/compiler.scm 484 */
									obj_t BgL_arg2509z00_1682;

									{	/* Match/compiler.scm 484 */
										obj_t BgL_arg2511z00_1684;

										{	/* Match/compiler.scm 484 */
											obj_t BgL_arg2512z00_1685;

											{	/* Match/compiler.scm 484 */
												obj_t BgL_arg2515z00_1688;

												obj_t BgL_arg2516z00_1689;

												BgL_arg2515z00_1688 =
													BGl_symbol2984z00zz__match_compilerz00;
												{	/* Match/compiler.scm 484 */
													obj_t BgL_list2517z00_1690;

													BgL_list2517z00_1690 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2516z00_1689 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_ez00_194, BgL_list2517z00_1690);
												}
												BgL_arg2512z00_1685 =
													MAKE_PAIR(BgL_arg2515z00_1688, BgL_arg2516z00_1689);
											}
											{	/* Match/compiler.scm 484 */
												obj_t BgL_list2514z00_1687;

												BgL_list2514z00_1687 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2511z00_1684 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2512z00_1685, BgL_list2514z00_1687);
											}
										}
										BgL_arg2509z00_1682 =
											MAKE_PAIR(BgL_za2carza2z00_192, BgL_arg2511z00_1684);
									}
									BgL_arg2504z00_1677 = MAKE_PAIR(BgL_arg2509z00_1682, BNIL);
								}
								{	/* Match/compiler.scm 485 */
									obj_t BgL_arg2518z00_1691;

									{	/* Match/compiler.scm 485 */
										obj_t BgL_arg2519z00_1692;

										obj_t BgL_arg2520z00_1693;

										BgL_arg2519z00_1692 =
											BGl_symbol2986z00zz__match_compilerz00;
										{	/* Match/compiler.scm 485 */
											obj_t BgL_list2521z00_1694;

											BgL_list2521z00_1694 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2520z00_1693 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_ez00_194, BgL_list2521z00_1694);
										}
										BgL_arg2518z00_1691 =
											MAKE_PAIR(BgL_arg2519z00_1692, BgL_arg2520z00_1693);
									}
									BgL_arg2505z00_1678 =
										BGl_unfoldz00zz__match_compilerz00(BgL_za2cdrza2z00_193,
										BgL_arg2518z00_1691, BgL_bodyz00_195);
								}
								{	/* Match/compiler.scm 484 */
									obj_t BgL_list2507z00_1680;

									{	/* Match/compiler.scm 484 */
										obj_t BgL_arg2508z00_1681;

										BgL_arg2508z00_1681 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2507z00_1680 =
											MAKE_PAIR(BgL_arg2505z00_1678, BgL_arg2508z00_1681);
									}
									BgL_arg2503z00_1676 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2504z00_1677, BgL_list2507z00_1680);
								}
							}
							return MAKE_PAIR(BgL_arg2502z00_1675, BgL_arg2503z00_1676);
						}
				}
			else
				{	/* Match/compiler.scm 480 */
					if (BGl_2ze3ze3zz__r4_numbers_6_5z00
						(BGl_countzd2occurrenceszd2zz__match_compilerz00
							(BgL_za2cdrza2z00_193, BgL_bodyz00_195, ((long) 0)),
							BINT(((long) 1))))
						{	/* Match/compiler.scm 487 */
							obj_t BgL_arg2525z00_1698;

							obj_t BgL_arg2526z00_1699;

							BgL_arg2525z00_1698 = BGl_symbol2963z00zz__match_compilerz00;
							{	/* Match/compiler.scm 487 */
								obj_t BgL_arg2527z00_1700;

								obj_t BgL_arg2528z00_1701;

								{	/* Match/compiler.scm 487 */
									obj_t BgL_arg2532z00_1705;

									{	/* Match/compiler.scm 487 */
										obj_t BgL_arg2534z00_1707;

										{	/* Match/compiler.scm 487 */
											obj_t BgL_arg2535z00_1708;

											{	/* Match/compiler.scm 487 */
												obj_t BgL_arg2539z00_1711;

												obj_t BgL_arg2540z00_1712;

												BgL_arg2539z00_1711 =
													BGl_symbol2986z00zz__match_compilerz00;
												{	/* Match/compiler.scm 487 */
													obj_t BgL_list2541z00_1713;

													BgL_list2541z00_1713 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2540z00_1712 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_ez00_194, BgL_list2541z00_1713);
												}
												BgL_arg2535z00_1708 =
													MAKE_PAIR(BgL_arg2539z00_1711, BgL_arg2540z00_1712);
											}
											{	/* Match/compiler.scm 487 */
												obj_t BgL_list2537z00_1710;

												BgL_list2537z00_1710 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2534z00_1707 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2535z00_1708, BgL_list2537z00_1710);
										}}
										BgL_arg2532z00_1705 =
											MAKE_PAIR(BgL_za2cdrza2z00_193, BgL_arg2534z00_1707);
									}
									BgL_arg2527z00_1700 = MAKE_PAIR(BgL_arg2532z00_1705, BNIL);
								}
								{	/* Match/compiler.scm 488 */
									obj_t BgL_arg2542z00_1714;

									{	/* Match/compiler.scm 488 */
										obj_t BgL_arg2543z00_1715;

										obj_t BgL_arg2544z00_1716;

										BgL_arg2543z00_1715 =
											BGl_symbol2984z00zz__match_compilerz00;
										{	/* Match/compiler.scm 488 */
											obj_t BgL_list2545z00_1717;

											BgL_list2545z00_1717 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2544z00_1716 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_ez00_194, BgL_list2545z00_1717);
										}
										BgL_arg2542z00_1714 =
											MAKE_PAIR(BgL_arg2543z00_1715, BgL_arg2544z00_1716);
									}
									BgL_arg2528z00_1701 =
										BGl_unfoldz00zz__match_compilerz00(BgL_za2carza2z00_192,
										BgL_arg2542z00_1714, BgL_bodyz00_195);
								}
								{	/* Match/compiler.scm 487 */
									obj_t BgL_list2530z00_1703;

									{	/* Match/compiler.scm 487 */
										obj_t BgL_arg2531z00_1704;

										BgL_arg2531z00_1704 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2530z00_1703 =
											MAKE_PAIR(BgL_arg2528z00_1701, BgL_arg2531z00_1704);
									}
									BgL_arg2526z00_1699 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2527z00_1700, BgL_list2530z00_1703);
							}}
							return MAKE_PAIR(BgL_arg2525z00_1698, BgL_arg2526z00_1699);
						}
					else
						{	/* Match/compiler.scm 489 */
							obj_t BgL_arg2546z00_1718;

							obj_t BgL_arg2547z00_1719;

							{	/* Match/compiler.scm 489 */
								obj_t BgL_arg2548z00_1720;

								obj_t BgL_arg2549z00_1721;

								BgL_arg2548z00_1720 = BGl_symbol2986z00zz__match_compilerz00;
								{	/* Match/compiler.scm 489 */
									obj_t BgL_list2550z00_1722;

									BgL_list2550z00_1722 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2549z00_1721 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_194,
										BgL_list2550z00_1722);
								}
								BgL_arg2546z00_1718 =
									MAKE_PAIR(BgL_arg2548z00_1720, BgL_arg2549z00_1721);
							}
							{	/* Match/compiler.scm 490 */
								obj_t BgL_arg2551z00_1723;

								{	/* Match/compiler.scm 490 */
									obj_t BgL_arg2552z00_1724;

									obj_t BgL_arg2553z00_1725;

									BgL_arg2552z00_1724 = BGl_symbol2984z00zz__match_compilerz00;
									{	/* Match/compiler.scm 490 */
										obj_t BgL_list2554z00_1726;

										BgL_list2554z00_1726 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2553z00_1725 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ez00_194,
											BgL_list2554z00_1726);
									}
									BgL_arg2551z00_1723 =
										MAKE_PAIR(BgL_arg2552z00_1724, BgL_arg2553z00_1725);
								}
								BgL_arg2547z00_1719 =
									BGl_unfoldz00zz__match_compilerz00(BgL_za2carza2z00_192,
									BgL_arg2551z00_1723, BgL_bodyz00_195);
							}
							return
								BGl_unfoldz00zz__match_compilerz00(BgL_za2cdrza2z00_193,
								BgL_arg2546z00_1718, BgL_arg2547z00_1719);
						}
				}
		}
	}



/* unfold */
	obj_t BGl_unfoldz00zz__match_compilerz00(obj_t BgL_sz00_196,
		obj_t BgL_vz00_197, obj_t BgL_ez00_198)
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 495 */
			if (NULLP(BgL_ez00_198))
				{	/* Match/compiler.scm 496 */
					return BNIL;
				}
			else
				{	/* Match/compiler.scm 496 */
					if (CBOOL(BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_198)))
						{	/* Match/compiler.scm 498 */
							if ((BgL_ez00_198 == BgL_sz00_196))
								{	/* Match/compiler.scm 499 */
									return BgL_vz00_197;
								}
							else
								{	/* Match/compiler.scm 499 */
									return BgL_ez00_198;
								}
						}
					else
						{	/* Match/compiler.scm 498 */
							if (PAIRP(BgL_ez00_198))
								{	/* Match/compiler.scm 500 */
									if (
										(CAR(BgL_ez00_198) ==
											BGl_symbol2895z00zz__match_compilerz00))
										{	/* Match/compiler.scm 501 */
											return BgL_ez00_198;
										}
									else
										{	/* Match/compiler.scm 503 */
											obj_t BgL_fz00_1736;

											obj_t BgL_argsz00_1737;

											BgL_fz00_1736 = CAR(BgL_ez00_198);
											BgL_argsz00_1737 = CDR(BgL_ez00_198);
											return
												MAKE_PAIR(BGl_unfoldz00zz__match_compilerz00
												(BgL_sz00_196, BgL_vz00_197, BgL_fz00_1736),
												BGl_unfoldz00zz__match_compilerz00(BgL_sz00_196,
													BgL_vz00_197, BgL_argsz00_1737));
										}
								}
							else
								{	/* Match/compiler.scm 500 */
									return BFALSE;
								}
						}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_compilerz00()
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 26 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_compilerz00()
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 26 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_compilerz00()
	{
		AN_OBJECT;
		{	/* Match/compiler.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2988z00zz__match_compilerz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 228296415),
				BSTRING_TO_STRING(BGl_string2988z00zz__match_compilerz00));
			BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(((long)
					307502710),
				BSTRING_TO_STRING(BGl_string2988z00zz__match_compilerz00));
			return BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2988z00zz__match_compilerz00));
		}
	}

#ifdef __cplusplus
}
#endif
