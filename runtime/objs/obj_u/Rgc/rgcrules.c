/*===========================================================================*/
/*   (Rgc/rgcrules.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcrules.scm -indent -o objs/obj_u/Rgc/rgcrules.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_expandzd2stringzd2zz__rgc_rulesz00(obj_t, obj_t);
	extern obj_t BGl_rgczd2maxzd2charz00zz__rgc_configz00();
	extern obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	BGL_EXPORTED_DECL int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int);
	static obj_t BGl_charzd2rangezd2zz__rgc_rulesz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_rulesz00 = BUNSPEC;
	static bool_t BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
	static obj_t BGl_genericzd2initzd2zz__rgc_rulesz00();
	static obj_t BGl_expandzd2za2za2zd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t, obj_t);
	static long BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
	extern obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t);
	extern obj_t BGl_rgczd2envzd2zz__rgc_configz00();
	static obj_t BGl__treezd2maxzd2charz00zz__rgc_rulesz00(obj_t);
	static obj_t BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00(long, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_rulesz00();
	static obj_t BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00();
	static obj_t BGl_stringzd2rangezd2zz__rgc_rulesz00(obj_t, obj_t);
	extern obj_t BGl_rgczd2upcasezd2zz__rgc_configz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2sequencezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t BGl_rgczd2downcasezd2zz__rgc_configz00(obj_t);
	extern obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	static obj_t BGl_expandzd2atomzd2zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_list2858z00zz__rgc_rulesz00 = BUNSPEC;
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_posixz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	static obj_t BGl_makezd2sequencezd2zz__rgc_rulesz00(obj_t);
	static obj_t BGl_list2884z00zz__rgc_rulesz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int);
	static obj_t BGl_list2901z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_list2891z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_rulesz00();
	static obj_t BGl_list2896z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2andzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_expandzd2submatchzd2zz__rgc_rulesz00(long, obj_t, obj_t,
		obj_t);
	static obj_t BGl_expandzd2zb2z60zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_expandzd2zd3z01zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00;
	static obj_t BGl_expandzd2zf3z21zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t
		BGl__specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(obj_t,
		obj_t);
	static obj_t BGl_expandzd2rulezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl_expandzd2uncasezd2zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl__predicatezd2matchzd2zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl_expandzd2butzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00(obj_t);
	static obj_t BGl_expandzd2outzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t);
	static bool_t BGl_rgczd2charzf3z21zz__rgc_rulesz00(obj_t);
	static obj_t BGl_loopz00zz__rgc_rulesz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl__specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(obj_t, obj_t);
	extern bool_t BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(obj_t);
	static obj_t BGl_expandzd2inzd2zz__rgc_rulesz00(long, obj_t, obj_t, obj_t);
	static obj_t BGl__specialzd2charzf3z21zz__rgc_rulesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
	static bool_t BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00;
	static obj_t BGl_loopz72z72zz__rgc_rulesz00(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t, obj_t);
	static obj_t BGl__ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_expandzd2orzd2zz__rgc_rulesz00(long, obj_t, obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_explodezd2sequencezd2zz__rgc_rulesz00(obj_t, obj_t);
	extern obj_t BGl_posixzd2ze3rgcz31zz__rgc_posixz00(obj_t);
	static obj_t BGl_expandzd2ze2ze2ze2z30zz__rgc_rulesz00(long, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2specialzd2startzd2matchzd2charza2zd2zz__rgc_rulesz00 =
		BUNSPEC;
	static obj_t BGl_symbol2850z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2852z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_za2predicatesza2z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2854z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2856z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2859z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2862z00zz__rgc_rulesz00 = BUNSPEC;
	static long BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00;
	BGL_EXPORTED_DECL bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int);
	static obj_t BGl_symbol2872z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2874z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2876z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2878z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2880z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2882z00zz__rgc_rulesz00 = BUNSPEC;
	static long BGl_getzd2newzd2submatchz00zz__rgc_rulesz00();
	static obj_t BGl_symbol2885z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_za2specialzd2stopzd2matchzd2charza2zd2zz__rgc_rulesz00 =
		BUNSPEC;
	static obj_t BGl_symbol2887z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2889z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2902z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2892z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2904z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2894z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00(long, obj_t, obj_t);
	static obj_t BGl_symbol2907z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2909z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2899z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2911z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2913z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2915z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2917z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2919z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2921z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2923z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2925z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2927z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2929z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2931z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2933z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__rgc_rulesz00();
	static obj_t BGl_symbol2939z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_symbol2942z00zz__rgc_rulesz00 = BUNSPEC;
	static obj_t BGl_makezd2variablezd2envz00zz__rgc_rulesz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_predicatezd2matchzd2envz00zz__rgc_rulesz00,
		BgL_bgl__predicateza7d2mat2948za7,
		BGl__predicatezd2matchzd2zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_treezd2maxzd2charzd2envzd2zz__rgc_rulesz00,
		BgL_bgl__treeza7d2maxza7d2ch2949z00,
		BGl__treezd2maxzd2charz00zz__rgc_rulesz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2849z00zz__rgc_rulesz00,
		BgL_bgl_string2849za700za7za7_2950za7, "RGC:Illegal clauses", 19);
	      DEFINE_STRING(BGl_string2851z00zz__rgc_rulesz00,
		BgL_bgl_string2851za700za7za7_2951za7, "in", 2);
	      DEFINE_STRING(BGl_string2853z00zz__rgc_rulesz00,
		BgL_bgl_string2853za700za7za7_2952za7, "begin", 5);
	      DEFINE_STRING(BGl_string2855z00zz__rgc_rulesz00,
		BgL_bgl_string2855za700za7za7_2953za7, "else", 4);
	      DEFINE_STRING(BGl_string2857z00zz__rgc_rulesz00,
		BgL_bgl_string2857za700za7za7_2954za7, "or", 2);
	      DEFINE_STRING(BGl_string2860z00zz__rgc_rulesz00,
		BgL_bgl_string2860za700za7za7_2955za7, "the-failure", 11);
	      DEFINE_STRING(BGl_string2861z00zz__rgc_rulesz00,
		BgL_bgl_string2861za700za7za7_2956za7, "RGC:Illegal else clause", 23);
	      DEFINE_STRING(BGl_string2863z00zz__rgc_rulesz00,
		BgL_bgl_string2863za700za7za7_2957za7, "define", 6);
	      DEFINE_STRING(BGl_string2864z00zz__rgc_rulesz00,
		BgL_bgl_string2864za700za7za7_2958za7, "RGC:Illegal clause", 18);
	      DEFINE_STRING(BGl_string2865z00zz__rgc_rulesz00,
		BgL_bgl_string2865za700za7za7_2959za7,
		"RGC:Illegal regular variable definition", 39);
	      DEFINE_STRING(BGl_string2866z00zz__rgc_rulesz00,
		BgL_bgl_string2866za700za7za7_2960za7,
		"/tmp/bigloo/runtime/Rgc/rgcrules.scm", 36);
	      DEFINE_STRING(BGl_string2867z00zz__rgc_rulesz00,
		BgL_bgl_string2867za700za7za7_2961za7, "_special-char?", 14);
	      DEFINE_STRING(BGl_string2868z00zz__rgc_rulesz00,
		BgL_bgl_string2868za700za7za7_2962za7, "int", 3);
	      DEFINE_STRING(BGl_string2870z00zz__rgc_rulesz00,
		BgL_bgl_string2870za700za7za7_2963za7, "_special-match-char->rule-number",
		32);
	      DEFINE_STRING(BGl_string2869z00zz__rgc_rulesz00,
		BgL_bgl_string2869za700za7za7_2964za7, "_special-char-match?", 20);
	      DEFINE_STRING(BGl_string2871z00zz__rgc_rulesz00,
		BgL_bgl_string2871za700za7za7_2965za7, "_predicate-match", 16);
	      DEFINE_STRING(BGl_string2873z00zz__rgc_rulesz00,
		BgL_bgl_string2873za700za7za7_2966za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2875z00zz__rgc_rulesz00,
		BgL_bgl_string2875za700za7za7_2967za7, "the-rgc-context", 15);
	      DEFINE_STRING(BGl_string2877z00zz__rgc_rulesz00,
		BgL_bgl_string2877za700za7za7_2968za7, "quote", 5);
	      DEFINE_STRING(BGl_string2879z00zz__rgc_rulesz00,
		BgL_bgl_string2879za700za7za7_2969za7, "when", 4);
	      DEFINE_STRING(BGl_string2881z00zz__rgc_rulesz00,
		BgL_bgl_string2881za700za7za7_2970za7, "context", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specialzd2charzd2matchzf3zd2envz21zz__rgc_rulesz00,
		BgL_bgl__specialza7d2charza72971z00,
		BGl__specialzd2charzd2matchzf3zf3zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2883z00zz__rgc_rulesz00,
		BgL_bgl_string2883za700za7za7_2972za7, "bol", 3);
	      DEFINE_STRING(BGl_string2886z00zz__rgc_rulesz00,
		BgL_bgl_string2886za700za7za7_2973za7, "rgc-buffer-bol?", 15);
	      DEFINE_STRING(BGl_string2888z00zz__rgc_rulesz00,
		BgL_bgl_string2888za700za7za7_2974za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2900z00zz__rgc_rulesz00,
		BgL_bgl_string2900za700za7za7_2975za7, "eof", 3);
	      DEFINE_STRING(BGl_string2890z00zz__rgc_rulesz00,
		BgL_bgl_string2890za700za7za7_2976za7, "eol", 3);
	      DEFINE_STRING(BGl_string2903z00zz__rgc_rulesz00,
		BgL_bgl_string2903za700za7za7_2977za7, "rgc-buffer-eof?", 15);
	      DEFINE_STRING(BGl_string2893z00zz__rgc_rulesz00,
		BgL_bgl_string2893za700za7za7_2978za7, "rgc-buffer-eol?", 15);
	      DEFINE_STRING(BGl_string2905z00zz__rgc_rulesz00,
		BgL_bgl_string2905za700za7za7_2979za7, "...", 3);
	      DEFINE_STRING(BGl_string2895z00zz__rgc_rulesz00,
		BgL_bgl_string2895za700za7za7_2980za7, "bof", 3);
	      DEFINE_STRING(BGl_string2906z00zz__rgc_rulesz00,
		BgL_bgl_string2906za700za7za7_2981za7, "RGC:Illegal construction", 24);
	      DEFINE_STRING(BGl_string2908z00zz__rgc_rulesz00,
		BgL_bgl_string2908za700za7za7_2982za7, "uncase", 6);
	      DEFINE_STRING(BGl_string2898z00zz__rgc_rulesz00,
		BgL_bgl_string2898za700za7za7_2983za7, "rgc-buffer-bof?", 15);
	      DEFINE_STRING(BGl_string2910z00zz__rgc_rulesz00,
		BgL_bgl_string2910za700za7za7_2984za7, "*", 1);
	      DEFINE_STRING(BGl_string2912z00zz__rgc_rulesz00,
		BgL_bgl_string2912za700za7za7_2985za7, "+", 1);
	      DEFINE_STRING(BGl_string2914z00zz__rgc_rulesz00,
		BgL_bgl_string2914za700za7za7_2986za7, "?", 1);
	      DEFINE_STRING(BGl_string2916z00zz__rgc_rulesz00,
		BgL_bgl_string2916za700za7za7_2987za7, "=", 1);
	      DEFINE_STRING(BGl_string2918z00zz__rgc_rulesz00,
		BgL_bgl_string2918za700za7za7_2988za7, ">=", 2);
	      DEFINE_STRING(BGl_string2920z00zz__rgc_rulesz00,
		BgL_bgl_string2920za700za7za7_2989za7, "**", 2);
	      DEFINE_STRING(BGl_string2922z00zz__rgc_rulesz00,
		BgL_bgl_string2922za700za7za7_2990za7, "out", 3);
	      DEFINE_STRING(BGl_string2924z00zz__rgc_rulesz00,
		BgL_bgl_string2924za700za7za7_2991za7, "and", 3);
	      DEFINE_STRING(BGl_string2926z00zz__rgc_rulesz00,
		BgL_bgl_string2926za700za7za7_2992za7, "but", 3);
	      DEFINE_STRING(BGl_string2928z00zz__rgc_rulesz00,
		BgL_bgl_string2928za700za7za7_2993za7, "submatch", 8);
	      DEFINE_STRING(BGl_string2930z00zz__rgc_rulesz00,
		BgL_bgl_string2930za700za7za7_2994za7, ":", 1);
	      DEFINE_STRING(BGl_string2932z00zz__rgc_rulesz00,
		BgL_bgl_string2932za700za7za7_2995za7, "seq", 3);
	      DEFINE_STRING(BGl_string2934z00zz__rgc_rulesz00,
		BgL_bgl_string2934za700za7za7_2996za7, "posix", 5);
	      DEFINE_STRING(BGl_string2935z00zz__rgc_rulesz00,
		BgL_bgl_string2935za700za7za7_2997za7, "RGC:illegal atom", 16);
	      DEFINE_STRING(BGl_string2936z00zz__rgc_rulesz00,
		BgL_bgl_string2936za700za7za7_2998za7, "RGC:regular variable unbound", 28);
	      DEFINE_STRING(BGl_string2937z00zz__rgc_rulesz00,
		BgL_bgl_string2937za700za7za7_2999za7, "RGC:Illegal regular expression",
		30);
	      DEFINE_STRING(BGl_string2938z00zz__rgc_rulesz00,
		BgL_bgl_string2938za700za7za7_3000za7, "RGC:Illegal empty string", 24);
	      DEFINE_STRING(BGl_string2940z00zz__rgc_rulesz00,
		BgL_bgl_string2940za700za7za7_3001za7, "sequence", 8);
	      DEFINE_STRING(BGl_string2941z00zz__rgc_rulesz00,
		BgL_bgl_string2941za700za7za7_3002za7, "RGC:Illegal regular range", 25);
	      DEFINE_STRING(BGl_string2943z00zz__rgc_rulesz00,
		BgL_bgl_string2943za700za7za7_3003za7, "epsilon", 7);
	      DEFINE_STRING(BGl_string2944z00zz__rgc_rulesz00,
		BgL_bgl_string2944za700za7za7_3004za7, "RGC:Illegal range string", 24);
	      DEFINE_STRING(BGl_string2945z00zz__rgc_rulesz00,
		BgL_bgl_string2945za700za7za7_3005za7, "RGC:Illegal range", 17);
	      DEFINE_STRING(BGl_string2946z00zz__rgc_rulesz00,
		BgL_bgl_string2946za700za7za7_3006za7, "RGC:Illegal nested submatches", 29);
	      DEFINE_STRING(BGl_string2947z00zz__rgc_rulesz00,
		BgL_bgl_string2947za700za7za7_3007za7, "__rgc_rules", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ruleszd2ze3regularzd2treezd2envz31zz__rgc_rulesz00,
		BgL_bgl__rulesza7d2za7e3regu3008z00,
		BGl__ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_specialzd2charzf3zd2envzf3zz__rgc_rulesz00,
		BgL_bgl__specialza7d2charza73009z00,
		BGl__specialzd2charzf3z21zz__rgc_rulesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specialzd2matchzd2charzd2ze3rulezd2numberzd2envz31zz__rgc_rulesz00,
		BgL_bgl__specialza7d2match3010za7,
		BGl__specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2specialzd2matchzd2charz12zd2envz12zz__rgc_rulesz00,
		BgL_bgl__resetza7d2special3011za7,
		BGl__resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long
		BgL_checksumz00_3360, char *BgL_fromz00_3361)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_rulesz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_rulesz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_rulesz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00();
					BGl_toplevelzd2initzd2zz__rgc_rulesz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 24 */
			BGl_symbol2850z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2851z00zz__rgc_rulesz00);
			BGl_symbol2852z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2853z00zz__rgc_rulesz00);
			BGl_symbol2854z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2855z00zz__rgc_rulesz00);
			BGl_symbol2856z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2857z00zz__rgc_rulesz00);
			BGl_symbol2859z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2860z00zz__rgc_rulesz00);
			BGl_list2858z00zz__rgc_rulesz00 =
				MAKE_PAIR(BGl_symbol2859z00zz__rgc_rulesz00, BNIL);
			BGl_symbol2862z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2863z00zz__rgc_rulesz00);
			BGl_symbol2872z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2873z00zz__rgc_rulesz00);
			BGl_symbol2874z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2875z00zz__rgc_rulesz00);
			BGl_symbol2876z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2877z00zz__rgc_rulesz00);
			BGl_symbol2878z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2879z00zz__rgc_rulesz00);
			BGl_symbol2880z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2881z00zz__rgc_rulesz00);
			BGl_symbol2882z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2883z00zz__rgc_rulesz00);
			BGl_symbol2885z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2886z00zz__rgc_rulesz00);
			BGl_symbol2887z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2888z00zz__rgc_rulesz00);
			BGl_list2884z00zz__rgc_rulesz00 =
				MAKE_PAIR(BGl_symbol2885z00zz__rgc_rulesz00,
				MAKE_PAIR(BGl_symbol2887z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2889z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2890z00zz__rgc_rulesz00);
			BGl_symbol2892z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2893z00zz__rgc_rulesz00);
			BGl_list2891z00zz__rgc_rulesz00 =
				MAKE_PAIR(BGl_symbol2892z00zz__rgc_rulesz00,
				MAKE_PAIR(BGl_symbol2887z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2894z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2895z00zz__rgc_rulesz00);
			BGl_symbol2897z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2898z00zz__rgc_rulesz00);
			BGl_list2896z00zz__rgc_rulesz00 =
				MAKE_PAIR(BGl_symbol2897z00zz__rgc_rulesz00,
				MAKE_PAIR(BGl_symbol2887z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2899z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2900z00zz__rgc_rulesz00);
			BGl_symbol2902z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2903z00zz__rgc_rulesz00);
			BGl_list2901z00zz__rgc_rulesz00 =
				MAKE_PAIR(BGl_symbol2902z00zz__rgc_rulesz00,
				MAKE_PAIR(BGl_symbol2887z00zz__rgc_rulesz00, BNIL));
			BGl_symbol2904z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2905z00zz__rgc_rulesz00);
			BGl_symbol2907z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2908z00zz__rgc_rulesz00);
			BGl_symbol2909z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2910z00zz__rgc_rulesz00);
			BGl_symbol2911z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2912z00zz__rgc_rulesz00);
			BGl_symbol2913z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2914z00zz__rgc_rulesz00);
			BGl_symbol2915z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2916z00zz__rgc_rulesz00);
			BGl_symbol2917z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2918z00zz__rgc_rulesz00);
			BGl_symbol2919z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2920z00zz__rgc_rulesz00);
			BGl_symbol2921z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2922z00zz__rgc_rulesz00);
			BGl_symbol2923z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2924z00zz__rgc_rulesz00);
			BGl_symbol2925z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2926z00zz__rgc_rulesz00);
			BGl_symbol2927z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2928z00zz__rgc_rulesz00);
			BGl_symbol2929z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2930z00zz__rgc_rulesz00);
			BGl_symbol2931z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2932z00zz__rgc_rulesz00);
			BGl_symbol2933z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2934z00zz__rgc_rulesz00);
			BGl_symbol2939z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2940z00zz__rgc_rulesz00);
			return (BGl_symbol2942z00zz__rgc_rulesz00 =
				bstring_to_symbol(BGl_string2943z00zz__rgc_rulesz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 24 */
			BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00 = ((long) 81);
			{	/* Rgc/rgcrules.scm 164 */
				obj_t BgL_arg1942z00_858;

				BgL_arg1942z00_858 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				BGl_specialzd2charzd2numz00zz__rgc_rulesz00 =
					((long) CINT(BgL_arg1942z00_858) - ((long) 1));
			}
			BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 = BNIL;
			BGl_za2specialzd2startzd2matchzd2charza2zd2zz__rgc_rulesz00 = BNIL;
			BGl_za2specialzd2stopzd2matchzd2charza2zd2zz__rgc_rulesz00 = BNIL;
			BGl_za2predicatesza2z00zz__rgc_rulesz00 = BNIL;
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 0);
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 = ((long) 0);
			return (BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 =
				((bool_t) 0), BUNSPEC);
		}
	}



/* rules->regular-tree */
	BGL_EXPORTED_DEF obj_t BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t
		BgL_userzd2envzd2_1, obj_t BgL_clausesz00_2)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 77 */
			BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
			if (NULLP(BgL_clausesz00_2))
				{	/* Rgc/rgcrules.scm 79 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2849z00zz__rgc_rulesz00,
						BgL_clausesz00_2);
				}
			else
				{	/* Rgc/rgcrules.scm 81 */
					obj_t BgL_envz00_861;

					obj_t BgL_dfltz00_862;

					BgL_envz00_861 =
						BGl_makezd2variablezd2envz00zz__rgc_rulesz00(bgl_append2
						(BgL_userzd2envzd2_1, BGl_rgczd2envzd2zz__rgc_configz00()));
					{	/* Rgc/rgcrules.scm 82 */
						obj_t BgL_arg1987z00_932;

						obj_t BgL_arg1988z00_933;

						BgL_arg1987z00_932 = BGl_symbol2850z00zz__rgc_rulesz00;
						{	/* Rgc/rgcrules.scm 82 */
							obj_t BgL_arg1989z00_934;

							{	/* Rgc/rgcrules.scm 82 */
								obj_t BgL_arg1993z00_938;

								{	/* Rgc/rgcrules.scm 82 */
									obj_t BgL_arg1994z00_939;

									BgL_arg1994z00_939 =
										BGl_2zd2zd2zz__r4_numbers_6_5z00
										(BGl_rgczd2maxzd2charz00zz__rgc_configz00(),
										BINT(((long) 1)));
									{	/* Rgc/rgcrules.scm 82 */
										obj_t BgL_list1996z00_941;

										BgL_list1996z00_941 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1993z00_938 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1994z00_939, BgL_list1996z00_941);
								}}
								BgL_arg1989z00_934 =
									MAKE_PAIR(BINT(((long) 0)), BgL_arg1993z00_938);
							}
							{	/* Rgc/rgcrules.scm 82 */
								obj_t BgL_list1991z00_936;

								BgL_list1991z00_936 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg1988z00_933 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1989z00_934, BgL_list1991z00_936);
						}}
						BgL_dfltz00_862 = MAKE_PAIR(BgL_arg1987z00_932, BgL_arg1988z00_933);
					}
					{
						obj_t BgL_clausesz00_867;

						long BgL_matchz00_868;

						obj_t BgL_branchesz00_869;

						obj_t BgL_actionsz00_870;

						obj_t BgL_defsz00_871;

						BgL_clausesz00_867 = BgL_clausesz00_2;
						BgL_matchz00_868 = ((long) 0);
						BgL_branchesz00_869 = BNIL;
						BgL_actionsz00_870 = BNIL;
						BgL_defsz00_871 = BNIL;
					BgL_zc3anonymousza31945ze3z83_872:
						{
							obj_t BgL_rulez00_874;

							obj_t BgL_actsz00_875;

							{	/* Rgc/rgcrules.scm 92 */
								obj_t BgL_ezd21392zd2_878;

								BgL_ezd21392zd2_878 = CAR(BgL_clausesz00_867);
								if (PAIRP(BgL_ezd21392zd2_878))
									{	/* Rgc/rgcrules.scm 84 */
										if (
											(CAR(BgL_ezd21392zd2_878) ==
												BGl_symbol2862z00zz__rgc_rulesz00))
											{	/* Rgc/rgcrules.scm 84 */
												{	/* Rgc/rgcrules.scm 94 */
													obj_t BgL_arg1952z00_886;

													obj_t BgL_arg1953z00_887;

													BgL_arg1952z00_886 = CDR(BgL_clausesz00_867);
													BgL_arg1953z00_887 =
														MAKE_PAIR(CAR(BgL_clausesz00_867), BgL_defsz00_871);
													{
														obj_t BgL_defsz00_3444;

														obj_t BgL_clausesz00_3443;

														BgL_clausesz00_3443 = BgL_arg1952z00_886;
														BgL_defsz00_3444 = BgL_arg1953z00_887;
														BgL_defsz00_871 = BgL_defsz00_3444;
														BgL_clausesz00_867 = BgL_clausesz00_3443;
														goto BgL_zc3anonymousza31945ze3z83_872;
													}
												}
											}
										else
											{	/* Rgc/rgcrules.scm 84 */
												obj_t BgL_cdrzd21402zd2_881;

												BgL_cdrzd21402zd2_881 = CDR(BgL_ezd21392zd2_878);
												if (PAIRP(BgL_cdrzd21402zd2_881))
													{	/* Rgc/rgcrules.scm 84 */
														BgL_rulez00_874 = CAR(BgL_ezd21392zd2_878);
														BgL_actsz00_875 = BgL_cdrzd21402zd2_881;
														{	/* Rgc/rgcrules.scm 100 */
															obj_t BgL_actz00_889;

															BgL_actz00_889 =
																MAKE_PAIR(BGl_symbol2852z00zz__rgc_rulesz00,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_actsz00_875, BNIL));
															if (NULLP(CDR(BgL_clausesz00_867)))
																{	/* Rgc/rgcrules.scm 101 */
																	if (
																		(BgL_rulez00_874 ==
																			BGl_symbol2854z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 104 */
																			obj_t BgL_val0_1863z00_892;

																			obj_t BgL_val1_1864z00_893;

																			bool_t BgL_val3_1866z00_895;

																			{	/* Rgc/rgcrules.scm 104 */
																				obj_t BgL_arg1957z00_897;

																				obj_t BgL_arg1958z00_898;

																				BgL_arg1957z00_897 =
																					BGl_symbol2856z00zz__rgc_rulesz00;
																				{	/* Rgc/rgcrules.scm 104 */
																					obj_t BgL_arg1959z00_899;

																					obj_t BgL_arg1960z00_900;

																					BgL_arg1959z00_899 =
																						BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																						(BgL_matchz00_868, BgL_envz00_861,
																						BgL_dfltz00_862);
																					BgL_arg1960z00_900 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_branchesz00_869, BNIL);
																					{	/* Rgc/rgcrules.scm 104 */
																						obj_t BgL_list1961z00_901;

																						BgL_list1961z00_901 =
																							MAKE_PAIR(BgL_arg1960z00_900,
																							BNIL);
																						BgL_arg1958z00_898 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1959z00_899,
																							BgL_list1961z00_901);
																					}
																				}
																				BgL_val0_1863z00_892 =
																					MAKE_PAIR(BgL_arg1957z00_897,
																					BgL_arg1958z00_898);
																			}
																			{	/* Rgc/rgcrules.scm 106 */
																				obj_t BgL_arg1962z00_902;

																				BgL_arg1962z00_902 =
																					MAKE_PAIR(BgL_actz00_889,
																					BgL_actionsz00_870);
																				BgL_val1_1864z00_893 =
																					bgl_reverse_bang(BgL_arg1962z00_902);
																			}
																			BgL_val3_1866z00_895 =
																				BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
																			{	/* Rgc/rgcrules.scm 104 */
																				int BgL_auxz00_3462;

																				BgL_auxz00_3462 = (int) (((long) 5));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_3462);
																			}
																			{	/* Rgc/rgcrules.scm 104 */
																				int BgL_auxz00_3465;

																				BgL_auxz00_3465 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3465,
																					BgL_val1_1864z00_893);
																			}
																			{	/* Rgc/rgcrules.scm 104 */
																				obj_t BgL_auxz00_3470;

																				int BgL_auxz00_3468;

																				BgL_auxz00_3470 =
																					BINT(BgL_matchz00_868);
																				BgL_auxz00_3468 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3468,
																					BgL_auxz00_3470);
																			}
																			{	/* Rgc/rgcrules.scm 104 */
																				obj_t BgL_auxz00_3475;

																				int BgL_auxz00_3473;

																				BgL_auxz00_3475 =
																					BBOOL(BgL_val3_1866z00_895);
																				BgL_auxz00_3473 = (int) (((long) 3));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3473,
																					BgL_auxz00_3475);
																			}
																			{	/* Rgc/rgcrules.scm 104 */
																				int BgL_auxz00_3478;

																				BgL_auxz00_3478 = (int) (((long) 4));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3478,
																					BgL_defsz00_871);
																			}
																			return BgL_val0_1863z00_892;
																		}
																	else
																		{	/* Rgc/rgcrules.scm 110 */
																			obj_t BgL_val0_1868z00_903;

																			obj_t BgL_val1_1869z00_904;

																			long BgL_val2_1870z00_905;

																			bool_t BgL_val3_1871z00_906;

																			{	/* Rgc/rgcrules.scm 110 */
																				obj_t BgL_arg1963z00_908;

																				obj_t BgL_arg1965z00_909;

																				BgL_arg1963z00_908 =
																					BGl_symbol2856z00zz__rgc_rulesz00;
																				{	/* Rgc/rgcrules.scm 110 */
																					obj_t BgL_arg1966z00_910;

																					obj_t BgL_arg1967z00_911;

																					obj_t BgL_arg1968z00_912;

																					BgL_arg1966z00_910 =
																						BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																						((BgL_matchz00_868 + ((long) 1)),
																						BgL_envz00_861, BgL_dfltz00_862);
																					BgL_arg1967z00_911 =
																						BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																						(BgL_matchz00_868, BgL_envz00_861,
																						BgL_rulez00_874);
																					BgL_arg1968z00_912 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_branchesz00_869, BNIL);
																					{	/* Rgc/rgcrules.scm 110 */
																						obj_t BgL_list1969z00_913;

																						{	/* Rgc/rgcrules.scm 110 */
																							obj_t BgL_arg1970z00_914;

																							BgL_arg1970z00_914 =
																								MAKE_PAIR(BgL_arg1968z00_912,
																								BNIL);
																							BgL_list1969z00_913 =
																								MAKE_PAIR(BgL_arg1967z00_911,
																								BgL_arg1970z00_914);
																						}
																						BgL_arg1965z00_909 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1966z00_910,
																							BgL_list1969z00_913);
																				}}
																				BgL_val0_1868z00_903 =
																					MAKE_PAIR(BgL_arg1963z00_908,
																					BgL_arg1965z00_909);
																			}
																			{	/* Rgc/rgcrules.scm 115 */
																				obj_t BgL_arg1972z00_916;

																				{	/* Rgc/rgcrules.scm 115 */
																					obj_t BgL_arg1973z00_917;

																					obj_t BgL_arg1974z00_918;

																					BgL_arg1973z00_917 =
																						BGl_list2858z00zz__rgc_rulesz00;
																					{	/* Rgc/rgcrules.scm 115 */
																						obj_t BgL_list1975z00_919;

																						BgL_list1975z00_919 =
																							MAKE_PAIR(BgL_actionsz00_870,
																							BNIL);
																						BgL_arg1974z00_918 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_actz00_889,
																							BgL_list1975z00_919);
																					}
																					BgL_arg1972z00_916 =
																						MAKE_PAIR(BgL_arg1973z00_917,
																						BgL_arg1974z00_918);
																				}
																				BgL_val1_1869z00_904 =
																					bgl_reverse_bang(BgL_arg1972z00_916);
																			}
																			BgL_val2_1870z00_905 =
																				(((long) 1) + BgL_matchz00_868);
																			BgL_val3_1871z00_906 =
																				BGl_za2submatchzf3za2zf3zz__rgc_rulesz00;
																			{	/* Rgc/rgcrules.scm 110 */
																				int BgL_auxz00_3494;

																				BgL_auxz00_3494 = (int) (((long) 5));
																				BGL_MVALUES_NUMBER_SET(BgL_auxz00_3494);
																			}
																			{	/* Rgc/rgcrules.scm 110 */
																				int BgL_auxz00_3497;

																				BgL_auxz00_3497 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3497,
																					BgL_val1_1869z00_904);
																			}
																			{	/* Rgc/rgcrules.scm 110 */
																				obj_t BgL_auxz00_3502;

																				int BgL_auxz00_3500;

																				BgL_auxz00_3502 =
																					BINT(BgL_val2_1870z00_905);
																				BgL_auxz00_3500 = (int) (((long) 2));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3500,
																					BgL_auxz00_3502);
																			}
																			{	/* Rgc/rgcrules.scm 110 */
																				obj_t BgL_auxz00_3507;

																				int BgL_auxz00_3505;

																				BgL_auxz00_3507 =
																					BBOOL(BgL_val3_1871z00_906);
																				BgL_auxz00_3505 = (int) (((long) 3));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3505,
																					BgL_auxz00_3507);
																			}
																			{	/* Rgc/rgcrules.scm 110 */
																				int BgL_auxz00_3510;

																				BgL_auxz00_3510 = (int) (((long) 4));
																				BGL_MVALUES_VAL_SET(BgL_auxz00_3510,
																					BgL_defsz00_871);
																			}
																			return BgL_val0_1868z00_903;
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 101 */
																	if (
																		(BgL_rulez00_874 ==
																			BGl_symbol2854z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 122 */
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string2861z00zz__rgc_rulesz00,
																				BgL_clausesz00_867);
																		}
																	else
																		{	/* Rgc/rgcrules.scm 124 */
																			obj_t BgL_erulez00_921;

																			BgL_erulez00_921 =
																				BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00
																				(BgL_matchz00_868, BgL_envz00_861,
																				BgL_rulez00_874);
																			{	/* Rgc/rgcrules.scm 125 */
																				obj_t BgL_arg1977z00_922;

																				long BgL_arg1979z00_923;

																				obj_t BgL_arg1980z00_924;

																				obj_t BgL_arg1981z00_925;

																				BgL_arg1977z00_922 =
																					CDR(BgL_clausesz00_867);
																				BgL_arg1979z00_923 =
																					(BgL_matchz00_868 + ((long) 1));
																				BgL_arg1980z00_924 =
																					MAKE_PAIR(BgL_erulez00_921,
																					BgL_branchesz00_869);
																				BgL_arg1981z00_925 =
																					MAKE_PAIR(BgL_actz00_889,
																					BgL_actionsz00_870);
																				{
																					obj_t BgL_actionsz00_3524;

																					obj_t BgL_branchesz00_3523;

																					long BgL_matchz00_3522;

																					obj_t BgL_clausesz00_3521;

																					BgL_clausesz00_3521 =
																						BgL_arg1977z00_922;
																					BgL_matchz00_3522 =
																						BgL_arg1979z00_923;
																					BgL_branchesz00_3523 =
																						BgL_arg1980z00_924;
																					BgL_actionsz00_3524 =
																						BgL_arg1981z00_925;
																					BgL_actionsz00_870 =
																						BgL_actionsz00_3524;
																					BgL_branchesz00_869 =
																						BgL_branchesz00_3523;
																					BgL_matchz00_868 = BgL_matchz00_3522;
																					BgL_clausesz00_867 =
																						BgL_clausesz00_3521;
																					goto
																						BgL_zc3anonymousza31945ze3z83_872;
																				}
																			}
																		}
																}
														}
													}
												else
													{	/* Rgc/rgcrules.scm 84 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2864z00zz__rgc_rulesz00,
															BgL_clausesz00_867);
													}
											}
									}
								else
									{	/* Rgc/rgcrules.scm 84 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2864z00zz__rgc_rulesz00, BgL_clausesz00_867);
									}
							}
						}
					}
				}
		}
	}



/* _rules->regular-tree */
	obj_t BGl__ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t BgL_envz00_3335,
		obj_t BgL_userzd2envzd2_3336, obj_t BgL_clausesz00_3337)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 77 */
			return
				BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(BgL_userzd2envzd2_3336,
				BgL_clausesz00_3337);
		}
	}



/* make-variable-env */
	obj_t BGl_makezd2variablezd2envz00zz__rgc_rulesz00(obj_t BgL_bindingsz00_3)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 139 */
			if (NULLP(BgL_bindingsz00_3))
				{	/* Rgc/rgcrules.scm 140 */
					return BNIL;
				}
			else
				{	/* Rgc/rgcrules.scm 142 */
					obj_t BgL_ezd21413zd2_949;

					BgL_ezd21413zd2_949 = CAR(BgL_bindingsz00_3);
					if (PAIRP(BgL_ezd21413zd2_949))
						{	/* Rgc/rgcrules.scm 142 */
							obj_t BgL_carzd21418zd2_951;

							obj_t BgL_cdrzd21419zd2_952;

							BgL_carzd21418zd2_951 = CAR(BgL_ezd21413zd2_949);
							BgL_cdrzd21419zd2_952 = CDR(BgL_ezd21413zd2_949);
							if (SYMBOLP(BgL_carzd21418zd2_951))
								{	/* Rgc/rgcrules.scm 142 */
									if (PAIRP(BgL_cdrzd21419zd2_952))
										{	/* Rgc/rgcrules.scm 142 */
											if (NULLP(CDR(BgL_cdrzd21419zd2_952)))
												{	/* Rgc/rgcrules.scm 142 */
													obj_t BgL_arg2005z00_956;

													BgL_arg2005z00_956 = CAR(BgL_cdrzd21419zd2_952);
													{	/* Rgc/rgcrules.scm 142 */
														obj_t BgL_varz00_2240;

														BgL_varz00_2240 = BgL_carzd21418zd2_951;
														{	/* Rgc/rgcrules.scm 142 */
															obj_t BgL_envz00_2242;

															BgL_envz00_2242 =
																BGl_makezd2variablezd2envz00zz__rgc_rulesz00(CDR
																(BgL_bindingsz00_3));
															{	/* Rgc/rgcrules.scm 142 */
																obj_t BgL_arg2007z00_2244;

																BgL_arg2007z00_2244 =
																	MAKE_PAIR(BgL_varz00_2240,
																	BgL_arg2005z00_956);
																return MAKE_PAIR(BgL_arg2007z00_2244,
																	BgL_envz00_2242);
															}
														}
													}
												}
											else
												{	/* Rgc/rgcrules.scm 142 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2865z00zz__rgc_rulesz00,
														BgL_ezd21413zd2_949);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 142 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2865z00zz__rgc_rulesz00, BgL_ezd21413zd2_949);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 142 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2865z00zz__rgc_rulesz00, BgL_ezd21413zd2_949);
								}
						}
					else
						{	/* Rgc/rgcrules.scm 142 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2865z00zz__rgc_rulesz00, BgL_ezd21413zd2_949);
						}
				}
		}
	}



/* special-char? */
	BGL_EXPORTED_DEF bool_t BGl_specialzd2charzf3z21zz__rgc_rulesz00(int
		BgL_charz00_4)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 172 */
			{	/* Rgc/rgcrules.scm 173 */
				obj_t BgL_arg2011z00_2267;

				BgL_arg2011z00_2267 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
				return ((long) (BgL_charz00_4) >= (long) CINT(BgL_arg2011z00_2267));
		}}
	}



/* _special-char? */
	obj_t BGl__specialzd2charzf3z21zz__rgc_rulesz00(obj_t BgL_envz00_3338,
		obj_t BgL_charz00_3339)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 172 */
			{	/* Rgc/rgcrules.scm 173 */
				bool_t BgL_auxz00_3556;

				{	/* Rgc/rgcrules.scm 173 */
					int BgL_auxz00_3557;

					{	/* Rgc/rgcrules.scm 173 */
						obj_t BgL_auxz00_3558;

						if (INTEGERP(BgL_charz00_3339))
							{	/* Rgc/rgcrules.scm 173 */
								BgL_auxz00_3558 = BgL_charz00_3339;
							}
						else
							{
								obj_t BgL_auxz00_3561;

								BgL_auxz00_3561 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2866z00zz__rgc_rulesz00, BINT(((long) 7125)),
									BGl_string2867z00zz__rgc_rulesz00,
									BGl_string2868z00zz__rgc_rulesz00, BgL_charz00_3339);
								FAILURE(BgL_auxz00_3561, BFALSE, BFALSE);
							}
						BgL_auxz00_3557 = CINT(BgL_auxz00_3558);
					}
					BgL_auxz00_3556 =
						BGl_specialzd2charzf3z21zz__rgc_rulesz00(BgL_auxz00_3557);
				}
				return BBOOL(BgL_auxz00_3556);
			}
		}
	}



/* tree-max-char */
	BGL_EXPORTED_DEF obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 182 */
			{	/* Rgc/rgcrules.scm 183 */
				long BgL_za72za7_2271;

				BgL_za72za7_2271 = BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
				return BINT((((long) 1) + BgL_za72za7_2271));
		}}
	}



/* _tree-max-char */
	obj_t BGl__treezd2maxzd2charz00zz__rgc_rulesz00(obj_t BgL_envz00_3340)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 182 */
			return BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
		}
	}



/* reset-special-match-char! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 197 */
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 0);
			BGl_za2predicatesza2z00zz__rgc_rulesz00 = BNIL;
			return (BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 =
				BNIL, BUNSPEC);
		}
	}



/* _reset-special-match-char! */
	obj_t BGl__resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00(obj_t
		BgL_envz00_3341)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 197 */
			return BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
		}
	}



/* special-char-match? */
	BGL_EXPORTED_DEF bool_t BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(int
		BgL_charz00_7)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 211 */
			{	/* Rgc/rgcrules.scm 212 */
				obj_t BgL_auxz00_3572;

				BgL_auxz00_3572 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_charz00_7),
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				return PAIRP(BgL_auxz00_3572);
			}
		}
	}



/* _special-char-match? */
	obj_t BGl__specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(obj_t BgL_envz00_3342,
		obj_t BgL_charz00_3343)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 211 */
			{	/* Rgc/rgcrules.scm 212 */
				bool_t BgL_auxz00_3576;

				{	/* Rgc/rgcrules.scm 212 */
					int BgL_auxz00_3577;

					{	/* Rgc/rgcrules.scm 212 */
						obj_t BgL_auxz00_3578;

						if (INTEGERP(BgL_charz00_3343))
							{	/* Rgc/rgcrules.scm 212 */
								BgL_auxz00_3578 = BgL_charz00_3343;
							}
						else
							{
								obj_t BgL_auxz00_3581;

								BgL_auxz00_3581 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2866z00zz__rgc_rulesz00, BINT(((long) 9059)),
									BGl_string2869z00zz__rgc_rulesz00,
									BGl_string2868z00zz__rgc_rulesz00, BgL_charz00_3343);
								FAILURE(BgL_auxz00_3581, BFALSE, BFALSE);
							}
						BgL_auxz00_3577 = CINT(BgL_auxz00_3578);
					}
					BgL_auxz00_3576 =
						BGl_specialzd2charzd2matchzf3zf3zz__rgc_rulesz00(BgL_auxz00_3577);
				}
				return BBOOL(BgL_auxz00_3576);
			}
		}
	}



/* special-match-char->rule-number */
	BGL_EXPORTED_DEF int
		BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(int
		BgL_charz00_8)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 217 */
			{	/* Rgc/rgcrules.scm 218 */
				obj_t BgL_arg2015z00_2275;

				BgL_arg2015z00_2275 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_charz00_8),
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				{	/* Rgc/rgcrules.scm 218 */
					obj_t BgL_pairz00_2276;

					BgL_pairz00_2276 = BgL_arg2015z00_2275;
					return CINT(CDR(BgL_pairz00_2276));
				}
			}
		}
	}



/* _special-match-char->rule-number */
	obj_t BGl__specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00(obj_t
		BgL_envz00_3344, obj_t BgL_charz00_3345)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 217 */
			{	/* Rgc/rgcrules.scm 218 */
				int BgL_auxz00_3592;

				{	/* Rgc/rgcrules.scm 218 */
					int BgL_auxz00_3593;

					{	/* Rgc/rgcrules.scm 218 */
						obj_t BgL_auxz00_3594;

						if (INTEGERP(BgL_charz00_3345))
							{	/* Rgc/rgcrules.scm 218 */
								BgL_auxz00_3594 = BgL_charz00_3345;
							}
						else
							{
								obj_t BgL_auxz00_3597;

								BgL_auxz00_3597 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2866z00zz__rgc_rulesz00, BINT(((long) 9372)),
									BGl_string2870z00zz__rgc_rulesz00,
									BGl_string2868z00zz__rgc_rulesz00, BgL_charz00_3345);
								FAILURE(BgL_auxz00_3597, BFALSE, BFALSE);
							}
						BgL_auxz00_3593 = CINT(BgL_auxz00_3594);
					}
					BgL_auxz00_3592 =
						BGl_specialzd2matchzd2charzd2ze3rulezd2numberze3zz__rgc_rulesz00
						(BgL_auxz00_3593);
				}
				return BINT(BgL_auxz00_3592);
			}
		}
	}



/* get-new-submatch */
	long BGl_getzd2newzd2submatchz00zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 234 */
			BGl_za2submatchzf3za2zf3zz__rgc_rulesz00 = ((bool_t) 1);
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 =
				(((long) 1) + BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00);
			return BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00;
		}
	}



/* add-predicate-match! */
	obj_t BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00(long BgL_matchz00_9,
		obj_t BgL_predicatez00_10)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 242 */
			{	/* Rgc/rgcrules.scm 243 */
				obj_t BgL_cellz00_967;

				BgL_cellz00_967 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_matchz00_9),
					BGl_za2predicatesza2z00zz__rgc_rulesz00);
				if (PAIRP(BgL_cellz00_967))
					{	/* Rgc/rgcrules.scm 245 */
						obj_t BgL_arg2017z00_969;

						BgL_arg2017z00_969 =
							MAKE_PAIR(BgL_predicatez00_10, CDR(BgL_cellz00_967));
						return SET_CDR(BgL_cellz00_967, BgL_arg2017z00_969);
					}
				else
					{	/* Rgc/rgcrules.scm 246 */
						obj_t BgL_arg2019z00_971;

						{	/* Rgc/rgcrules.scm 246 */
							obj_t BgL_arg2021z00_972;

							{	/* Rgc/rgcrules.scm 246 */
								obj_t BgL_list2022z00_973;

								BgL_list2022z00_973 = MAKE_PAIR(BgL_predicatez00_10, BNIL);
								BgL_arg2021z00_972 = BgL_list2022z00_973;
							}
							BgL_arg2019z00_971 =
								MAKE_PAIR(BINT(BgL_matchz00_9), BgL_arg2021z00_972);
						}
						return (BGl_za2predicatesza2z00zz__rgc_rulesz00 =
							MAKE_PAIR(BgL_arg2019z00_971,
								BGl_za2predicatesza2z00zz__rgc_rulesz00), BUNSPEC);
					}
			}
		}
	}



/* predicate-match */
	BGL_EXPORTED_DEF obj_t BGl_predicatezd2matchzd2zz__rgc_rulesz00(int
		BgL_matchz00_11)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 252 */
			{	/* Rgc/rgcrules.scm 253 */
				obj_t BgL_cellz00_2285;

				BgL_cellz00_2285 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_matchz00_11),
					BGl_za2predicatesza2z00zz__rgc_rulesz00);
				if (PAIRP(BgL_cellz00_2285))
					{	/* Rgc/rgcrules.scm 253 */
						return CDR(BgL_cellz00_2285);
					}
				else
					{	/* Rgc/rgcrules.scm 253 */
						return BFALSE;
					}
			}
		}
	}



/* _predicate-match */
	obj_t BGl__predicatezd2matchzd2zz__rgc_rulesz00(obj_t BgL_envz00_3346,
		obj_t BgL_matchz00_3347)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 252 */
			{	/* Rgc/rgcrules.scm 253 */
				int BgL_auxz00_3621;

				{	/* Rgc/rgcrules.scm 253 */
					obj_t BgL_auxz00_3622;

					if (INTEGERP(BgL_matchz00_3347))
						{	/* Rgc/rgcrules.scm 253 */
							BgL_auxz00_3622 = BgL_matchz00_3347;
						}
					else
						{
							obj_t BgL_auxz00_3625;

							BgL_auxz00_3625 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2866z00zz__rgc_rulesz00, BINT(((long) 11014)),
								BGl_string2871z00zz__rgc_rulesz00,
								BGl_string2868z00zz__rgc_rulesz00, BgL_matchz00_3347);
							FAILURE(BgL_auxz00_3625, BFALSE, BFALSE);
						}
					BgL_auxz00_3621 = CINT(BgL_auxz00_3622);
				}
				return BGl_predicatezd2matchzd2zz__rgc_rulesz00(BgL_auxz00_3621);
			}
		}
	}



/* expand-match-rule */
	obj_t BGl_expandzd2matchzd2rulez00zz__rgc_rulesz00(long BgL_matchz00_12,
		obj_t BgL_envz00_13, obj_t BgL_rulez00_14)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 265 */
			BGl_za2submatchzd2countza2zd2zz__rgc_rulesz00 = ((long) 0);
			{	/* Rgc/rgcrules.scm 267 */
				long BgL_specialzd2charzd2_976;

				BGl_specialzd2charzd2numz00zz__rgc_rulesz00 =
					(((long) 1) + BGl_specialzd2charzd2numz00zz__rgc_rulesz00);
				BgL_specialzd2charzd2_976 = BGl_specialzd2charzd2numz00zz__rgc_rulesz00;
				{	/* Rgc/rgcrules.scm 270 */
					obj_t BgL_arg2012z00_2293;

					BgL_arg2012z00_2293 =
						MAKE_PAIR(BINT(BgL_specialzd2charzd2_976), BINT(BgL_matchz00_12));
					BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00 =
						MAKE_PAIR(BgL_arg2012z00_2293,
						BGl_za2specialzd2matchzd2charza2z00zz__rgc_rulesz00);
				}
				{
					obj_t BgL_rulez00_978;

					BgL_rulez00_978 = BgL_rulez00_14;
					{	/* Rgc/rgcrules.scm 273 */
						obj_t BgL_arg2025z00_980;

						{	/* Rgc/rgcrules.scm 273 */
							obj_t BgL_arg2027z00_981;

							{
								obj_t BgL_rulez00_985;

								BgL_rulez00_985 = BgL_rulez00_978;
							BgL_zc3anonymousza32030ze3z83_986:
								{
									obj_t BgL_contextz00_990;

									obj_t BgL_rulez00_991;

									if (PAIRP(BgL_rulez00_985))
										{	/* Rgc/rgcrules.scm 273 */
											obj_t BgL_cdrzd21441zd2_1004;

											BgL_cdrzd21441zd2_1004 = CDR(BgL_rulez00_985);
											if (
												(CAR(BgL_rulez00_985) ==
													BGl_symbol2878z00zz__rgc_rulesz00))
												{	/* Rgc/rgcrules.scm 273 */
													if (PAIRP(BgL_cdrzd21441zd2_1004))
														{	/* Rgc/rgcrules.scm 273 */
															obj_t BgL_cdrzd21445zd2_1007;

															BgL_cdrzd21445zd2_1007 =
																CDR(BgL_cdrzd21441zd2_1004);
															if (PAIRP(BgL_cdrzd21445zd2_1007))
																{	/* Rgc/rgcrules.scm 273 */
																	if (NULLP(CDR(BgL_cdrzd21445zd2_1007)))
																		{	/* Rgc/rgcrules.scm 273 */
																			obj_t BgL_arg2036z00_1010;

																			obj_t BgL_arg2037z00_1011;

																			BgL_arg2036z00_1010 =
																				CAR(BgL_cdrzd21441zd2_1004);
																			BgL_arg2037z00_1011 =
																				CAR(BgL_cdrzd21445zd2_1007);
																			BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																				(BgL_matchz00_12, BgL_arg2036z00_1010);
																			{
																				obj_t BgL_rulez00_3653;

																				BgL_rulez00_3653 = BgL_arg2037z00_1011;
																				BgL_rulez00_985 = BgL_rulez00_3653;
																				goto BgL_zc3anonymousza32030ze3z83_986;
																			}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 273 */
																			BgL_arg2027z00_981 =
																				BGl_expandzd2rulezd2zz__rgc_rulesz00
																				(BgL_matchz00_12, BgL_envz00_13,
																				BgL_rulez00_985);
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 273 */
																	BgL_arg2027z00_981 =
																		BGl_expandzd2rulezd2zz__rgc_rulesz00
																		(BgL_matchz00_12, BgL_envz00_13,
																		BgL_rulez00_985);
																}
														}
													else
														{	/* Rgc/rgcrules.scm 273 */
															BgL_arg2027z00_981 =
																BGl_expandzd2rulezd2zz__rgc_rulesz00
																(BgL_matchz00_12, BgL_envz00_13,
																BgL_rulez00_985);
														}
												}
											else
												{	/* Rgc/rgcrules.scm 273 */
													if (
														(CAR(BgL_rulez00_985) ==
															BGl_symbol2880z00zz__rgc_rulesz00))
														{	/* Rgc/rgcrules.scm 273 */
															if (PAIRP(BgL_cdrzd21441zd2_1004))
																{	/* Rgc/rgcrules.scm 273 */
																	obj_t BgL_cdrzd21496zd2_1016;

																	BgL_cdrzd21496zd2_1016 =
																		CDR(BgL_cdrzd21441zd2_1004);
																	if (PAIRP(BgL_cdrzd21496zd2_1016))
																		{	/* Rgc/rgcrules.scm 273 */
																			if (NULLP(CDR(BgL_cdrzd21496zd2_1016)))
																				{	/* Rgc/rgcrules.scm 273 */
																					BgL_contextz00_990 =
																						CAR(BgL_cdrzd21441zd2_1004);
																					BgL_rulez00_991 =
																						CAR(BgL_cdrzd21496zd2_1016);
																					{	/* Rgc/rgcrules.scm 279 */
																						obj_t BgL_arg2083z00_1058;

																						{	/* Rgc/rgcrules.scm 279 */
																							obj_t BgL_arg2084z00_1059;

																							obj_t BgL_arg2085z00_1060;

																							BgL_arg2084z00_1059 =
																								BGl_symbol2872z00zz__rgc_rulesz00;
																							{	/* Rgc/rgcrules.scm 279 */
																								obj_t BgL_arg2086z00_1061;

																								obj_t BgL_arg2089z00_1062;

																								BgL_arg2086z00_1061 =
																									BGl_symbol2874z00zz__rgc_rulesz00;
																								{	/* Rgc/rgcrules.scm 279 */
																									obj_t BgL_arg2093z00_1066;

																									obj_t BgL_arg2094z00_1067;

																									BgL_arg2093z00_1066 =
																										BGl_symbol2876z00zz__rgc_rulesz00;
																									{	/* Rgc/rgcrules.scm 279 */
																										obj_t BgL_list2095z00_1068;

																										BgL_list2095z00_1068 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2094z00_1067 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_contextz00_990,
																											BgL_list2095z00_1068);
																									}
																									BgL_arg2089z00_1062 =
																										MAKE_PAIR
																										(BgL_arg2093z00_1066,
																										BgL_arg2094z00_1067);
																								}
																								{	/* Rgc/rgcrules.scm 279 */
																									obj_t BgL_list2091z00_1064;

																									{	/* Rgc/rgcrules.scm 279 */
																										obj_t BgL_arg2092z00_1065;

																										BgL_arg2092z00_1065 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2091z00_1064 =
																											MAKE_PAIR
																											(BgL_arg2089z00_1062,
																											BgL_arg2092z00_1065);
																									}
																									BgL_arg2085z00_1060 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2086z00_1061,
																										BgL_list2091z00_1064);
																								}
																							}
																							BgL_arg2083z00_1058 =
																								MAKE_PAIR(BgL_arg2084z00_1059,
																								BgL_arg2085z00_1060);
																						}
																						BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																							(BgL_matchz00_12,
																							BgL_arg2083z00_1058);
																					}
																					{
																						obj_t BgL_rulez00_3676;

																						BgL_rulez00_3676 = BgL_rulez00_991;
																						BgL_rulez00_985 = BgL_rulez00_3676;
																						goto
																							BgL_zc3anonymousza32030ze3z83_986;
																					}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 273 */
																					BgL_arg2027z00_981 =
																						BGl_expandzd2rulezd2zz__rgc_rulesz00
																						(BgL_matchz00_12, BgL_envz00_13,
																						BgL_rulez00_985);
																				}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 273 */
																			BgL_arg2027z00_981 =
																				BGl_expandzd2rulezd2zz__rgc_rulesz00
																				(BgL_matchz00_12, BgL_envz00_13,
																				BgL_rulez00_985);
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 273 */
																	BgL_arg2027z00_981 =
																		BGl_expandzd2rulezd2zz__rgc_rulesz00
																		(BgL_matchz00_12, BgL_envz00_13,
																		BgL_rulez00_985);
																}
														}
													else
														{	/* Rgc/rgcrules.scm 273 */
															obj_t BgL_cdrzd21529zd2_1022;

															BgL_cdrzd21529zd2_1022 = CDR(BgL_rulez00_985);
															if (
																(CAR(BgL_rulez00_985) ==
																	BGl_symbol2882z00zz__rgc_rulesz00))
																{	/* Rgc/rgcrules.scm 273 */
																	if (PAIRP(BgL_cdrzd21529zd2_1022))
																		{	/* Rgc/rgcrules.scm 273 */
																			if (NULLP(CDR(BgL_cdrzd21529zd2_1022)))
																				{	/* Rgc/rgcrules.scm 273 */
																					obj_t BgL_arg2051z00_1026;

																					BgL_arg2051z00_1026 =
																						CAR(BgL_cdrzd21529zd2_1022);
																					BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																						(BgL_matchz00_12,
																						BGl_list2884z00zz__rgc_rulesz00);
																					{
																						obj_t BgL_rulez00_3693;

																						BgL_rulez00_3693 =
																							BgL_arg2051z00_1026;
																						BgL_rulez00_985 = BgL_rulez00_3693;
																						goto
																							BgL_zc3anonymousza32030ze3z83_986;
																					}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 273 */
																					BgL_arg2027z00_981 =
																						BGl_expandzd2rulezd2zz__rgc_rulesz00
																						(BgL_matchz00_12, BgL_envz00_13,
																						BgL_rulez00_985);
																				}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 273 */
																			BgL_arg2027z00_981 =
																				BGl_expandzd2rulezd2zz__rgc_rulesz00
																				(BgL_matchz00_12, BgL_envz00_13,
																				BgL_rulez00_985);
																		}
																}
															else
																{	/* Rgc/rgcrules.scm 273 */
																	if (
																		(CAR(BgL_rulez00_985) ==
																			BGl_symbol2889z00zz__rgc_rulesz00))
																		{	/* Rgc/rgcrules.scm 273 */
																			if (PAIRP(BgL_cdrzd21529zd2_1022))
																				{	/* Rgc/rgcrules.scm 273 */
																					if (NULLP(CDR
																							(BgL_cdrzd21529zd2_1022)))
																						{	/* Rgc/rgcrules.scm 273 */
																							obj_t BgL_arg2056z00_1032;

																							BgL_arg2056z00_1032 =
																								CAR(BgL_cdrzd21529zd2_1022);
																							BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																								(BgL_matchz00_12,
																								BGl_list2891z00zz__rgc_rulesz00);
																							{
																								obj_t BgL_rulez00_3706;

																								BgL_rulez00_3706 =
																									BgL_arg2056z00_1032;
																								BgL_rulez00_985 =
																									BgL_rulez00_3706;
																								goto
																									BgL_zc3anonymousza32030ze3z83_986;
																							}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 273 */
																							BgL_arg2027z00_981 =
																								BGl_expandzd2rulezd2zz__rgc_rulesz00
																								(BgL_matchz00_12, BgL_envz00_13,
																								BgL_rulez00_985);
																						}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 273 */
																					BgL_arg2027z00_981 =
																						BGl_expandzd2rulezd2zz__rgc_rulesz00
																						(BgL_matchz00_12, BgL_envz00_13,
																						BgL_rulez00_985);
																				}
																		}
																	else
																		{	/* Rgc/rgcrules.scm 273 */
																			obj_t BgL_cdrzd21565zd2_1034;

																			BgL_cdrzd21565zd2_1034 =
																				CDR(BgL_rulez00_985);
																			if (
																				(CAR(BgL_rulez00_985) ==
																					BGl_symbol2894z00zz__rgc_rulesz00))
																				{	/* Rgc/rgcrules.scm 273 */
																					if (PAIRP(BgL_cdrzd21565zd2_1034))
																						{	/* Rgc/rgcrules.scm 273 */
																							if (NULLP(CDR
																									(BgL_cdrzd21565zd2_1034)))
																								{	/* Rgc/rgcrules.scm 273 */
																									obj_t BgL_arg2061z00_1038;

																									BgL_arg2061z00_1038 =
																										CAR(BgL_cdrzd21565zd2_1034);
																									BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																										(BgL_matchz00_12,
																										BGl_list2896z00zz__rgc_rulesz00);
																									{
																										obj_t BgL_rulez00_3720;

																										BgL_rulez00_3720 =
																											BgL_arg2061z00_1038;
																										BgL_rulez00_985 =
																											BgL_rulez00_3720;
																										goto
																											BgL_zc3anonymousza32030ze3z83_986;
																									}
																								}
																							else
																								{	/* Rgc/rgcrules.scm 273 */
																									BgL_arg2027z00_981 =
																										BGl_expandzd2rulezd2zz__rgc_rulesz00
																										(BgL_matchz00_12,
																										BgL_envz00_13,
																										BgL_rulez00_985);
																								}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 273 */
																							BgL_arg2027z00_981 =
																								BGl_expandzd2rulezd2zz__rgc_rulesz00
																								(BgL_matchz00_12, BgL_envz00_13,
																								BgL_rulez00_985);
																						}
																				}
																			else
																				{	/* Rgc/rgcrules.scm 273 */
																					if (
																						(CAR(BgL_rulez00_985) ==
																							BGl_symbol2899z00zz__rgc_rulesz00))
																						{	/* Rgc/rgcrules.scm 273 */
																							if (PAIRP(BgL_cdrzd21565zd2_1034))
																								{	/* Rgc/rgcrules.scm 273 */
																									if (NULLP(CDR
																											(BgL_cdrzd21565zd2_1034)))
																										{	/* Rgc/rgcrules.scm 273 */
																											obj_t BgL_arg2066z00_1044;

																											BgL_arg2066z00_1044 =
																												CAR
																												(BgL_cdrzd21565zd2_1034);
																											BGl_addzd2predicatezd2matchz12z12zz__rgc_rulesz00
																												(BgL_matchz00_12,
																												BGl_list2901z00zz__rgc_rulesz00);
																											{
																												obj_t BgL_rulez00_3733;

																												BgL_rulez00_3733 =
																													BgL_arg2066z00_1044;
																												BgL_rulez00_985 =
																													BgL_rulez00_3733;
																												goto
																													BgL_zc3anonymousza32030ze3z83_986;
																											}
																										}
																									else
																										{	/* Rgc/rgcrules.scm 273 */
																											BgL_arg2027z00_981 =
																												BGl_expandzd2rulezd2zz__rgc_rulesz00
																												(BgL_matchz00_12,
																												BgL_envz00_13,
																												BgL_rulez00_985);
																										}
																								}
																							else
																								{	/* Rgc/rgcrules.scm 273 */
																									BgL_arg2027z00_981 =
																										BGl_expandzd2rulezd2zz__rgc_rulesz00
																										(BgL_matchz00_12,
																										BgL_envz00_13,
																										BgL_rulez00_985);
																								}
																						}
																					else
																						{	/* Rgc/rgcrules.scm 273 */
																							BgL_arg2027z00_981 =
																								BGl_expandzd2rulezd2zz__rgc_rulesz00
																								(BgL_matchz00_12, BgL_envz00_13,
																								BgL_rulez00_985);
																						}
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Rgc/rgcrules.scm 273 */
											BgL_arg2027z00_981 =
												BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_12,
												BgL_envz00_13, BgL_rulez00_985);
										}
								}
							}
							{	/* Rgc/rgcrules.scm 273 */
								obj_t BgL_list2028z00_982;

								{	/* Rgc/rgcrules.scm 273 */
									obj_t BgL_arg2029z00_983;

									BgL_arg2029z00_983 =
										MAKE_PAIR(BINT(BgL_specialzd2charzd2_976), BNIL);
									BgL_list2028z00_982 =
										MAKE_PAIR(BgL_arg2027z00_981, BgL_arg2029z00_983);
								}
								BgL_arg2025z00_980 = BgL_list2028z00_982;
							}
						}
						return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg2025z00_980);
					}
				}
			}
		}
	}



/* expand-rule */
	obj_t BGl_expandzd2rulezd2zz__rgc_rulesz00(long BgL_matchz00_15,
		obj_t BgL_envz00_16, obj_t BgL_rulez00_17)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 367 */
		BGl_expandzd2rulezd2zz__rgc_rulesz00:
			if (PAIRP(BgL_rulez00_17))
				{	/* Rgc/rgcrules.scm 370 */
					obj_t BgL_ezd21611zd2_1112;

					BgL_ezd21611zd2_1112 = BgL_rulez00_17;
					{	/* Rgc/rgcrules.scm 370 */
						obj_t BgL_cdrzd21625zd2_1114;

						BgL_cdrzd21625zd2_1114 = CDR(BgL_ezd21611zd2_1112);
						if (
							(CAR(BgL_ezd21611zd2_1112) == BGl_symbol2904z00zz__rgc_rulesz00))
							{	/* Rgc/rgcrules.scm 370 */
								if (PAIRP(BgL_cdrzd21625zd2_1114))
									{	/* Rgc/rgcrules.scm 370 */
										obj_t BgL_cdrzd21629zd2_1117;

										BgL_cdrzd21629zd2_1117 = CDR(BgL_cdrzd21625zd2_1114);
										if (PAIRP(BgL_cdrzd21629zd2_1117))
											{	/* Rgc/rgcrules.scm 370 */
												if (NULLP(CDR(BgL_cdrzd21629zd2_1117)))
													{	/* Rgc/rgcrules.scm 370 */
														return
															BGl_expandzd2ze2ze2ze2z30zz__rgc_rulesz00
															(BgL_matchz00_15, BgL_envz00_16,
															CAR(BgL_cdrzd21625zd2_1114),
															CAR(BgL_cdrzd21629zd2_1117), BgL_rulez00_17);
													}
												else
													{	/* Rgc/rgcrules.scm 370 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2906z00zz__rgc_rulesz00,
															BgL_rulez00_17);
													}
											}
										else
											{	/* Rgc/rgcrules.scm 370 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2906z00zz__rgc_rulesz00, BgL_rulez00_17);
											}
									}
								else
									{	/* Rgc/rgcrules.scm 370 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string2906z00zz__rgc_rulesz00, BgL_rulez00_17);
									}
							}
						else
							{	/* Rgc/rgcrules.scm 370 */
								if (
									(CAR(BgL_ezd21611zd2_1112) ==
										BGl_symbol2907z00zz__rgc_rulesz00))
									{	/* Rgc/rgcrules.scm 370 */
										if (PAIRP(BgL_cdrzd21625zd2_1114))
											{	/* Rgc/rgcrules.scm 370 */
												if (NULLP(CDR(BgL_cdrzd21625zd2_1114)))
													{	/* Rgc/rgcrules.scm 370 */
														return
															BGl_expandzd2uncasezd2zz__rgc_rulesz00
															(BgL_matchz00_15, BgL_envz00_16,
															CAR(BgL_cdrzd21625zd2_1114));
													}
												else
													{	/* Rgc/rgcrules.scm 370 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2906z00zz__rgc_rulesz00,
															BgL_rulez00_17);
													}
											}
										else
											{	/* Rgc/rgcrules.scm 370 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2906z00zz__rgc_rulesz00, BgL_rulez00_17);
											}
									}
								else
									{	/* Rgc/rgcrules.scm 370 */
										obj_t BgL_cdrzd22282zd2_1129;

										BgL_cdrzd22282zd2_1129 = CDR(BgL_ezd21611zd2_1112);
										if (
											(CAR(BgL_ezd21611zd2_1112) ==
												BGl_symbol2909z00zz__rgc_rulesz00))
											{	/* Rgc/rgcrules.scm 370 */
												if (PAIRP(BgL_cdrzd22282zd2_1129))
													{	/* Rgc/rgcrules.scm 370 */
														if (NULLP(CDR(BgL_cdrzd22282zd2_1129)))
															{	/* Rgc/rgcrules.scm 370 */
																obj_t BgL_arg2113z00_1133;

																BgL_arg2113z00_1133 =
																	CAR(BgL_cdrzd22282zd2_1129);
																{	/* Rgc/rgcrules.scm 370 */
																	obj_t BgL_arg2328z00_2375;

																	obj_t BgL_arg2329z00_2376;

																	BgL_arg2328z00_2375 =
																		BGl_symbol2909z00zz__rgc_rulesz00;
																	{	/* Rgc/rgcrules.scm 370 */
																		obj_t BgL_arg2330z00_2377;

																		BgL_arg2330z00_2377 =
																			BGl_expandzd2rulezd2zz__rgc_rulesz00
																			(BgL_matchz00_15, BgL_envz00_16,
																			BgL_arg2113z00_1133);
																		{	/* Rgc/rgcrules.scm 370 */
																			obj_t BgL_list2332z00_2379;

																			BgL_list2332z00_2379 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2329z00_2376 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2330z00_2377,
																				BgL_list2332z00_2379);
																		}
																	}
																	return
																		MAKE_PAIR(BgL_arg2328z00_2375,
																		BgL_arg2329z00_2376);
																}
															}
														else
															{	/* Rgc/rgcrules.scm 370 */
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2906z00zz__rgc_rulesz00,
																	BgL_rulez00_17);
															}
													}
												else
													{	/* Rgc/rgcrules.scm 370 */
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string2906z00zz__rgc_rulesz00,
															BgL_rulez00_17);
													}
											}
										else
											{	/* Rgc/rgcrules.scm 370 */
												if (
													(CAR(BgL_ezd21611zd2_1112) ==
														BGl_symbol2911z00zz__rgc_rulesz00))
													{	/* Rgc/rgcrules.scm 370 */
														if (PAIRP(BgL_cdrzd22282zd2_1129))
															{	/* Rgc/rgcrules.scm 370 */
																if (NULLP(CDR(BgL_cdrzd22282zd2_1129)))
																	{	/* Rgc/rgcrules.scm 370 */
																		return
																			BGl_expandzd2zb2z60zz__rgc_rulesz00
																			(BgL_matchz00_15, BgL_envz00_16,
																			CAR(BgL_cdrzd22282zd2_1129));
																	}
																else
																	{	/* Rgc/rgcrules.scm 370 */
																		return
																			BGl_errorz00zz__errorz00(BFALSE,
																			BGl_string2906z00zz__rgc_rulesz00,
																			BgL_rulez00_17);
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 370 */
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2906z00zz__rgc_rulesz00,
																	BgL_rulez00_17);
															}
													}
												else
													{	/* Rgc/rgcrules.scm 370 */
														obj_t BgL_cdrzd22718zd2_1141;

														BgL_cdrzd22718zd2_1141 = CDR(BgL_ezd21611zd2_1112);
														if (
															(CAR(BgL_ezd21611zd2_1112) ==
																BGl_symbol2913z00zz__rgc_rulesz00))
															{	/* Rgc/rgcrules.scm 370 */
																if (PAIRP(BgL_cdrzd22718zd2_1141))
																	{	/* Rgc/rgcrules.scm 370 */
																		if (NULLP(CDR(BgL_cdrzd22718zd2_1141)))
																			{	/* Rgc/rgcrules.scm 370 */
																				return
																					BGl_expandzd2zf3z21zz__rgc_rulesz00
																					(BgL_matchz00_15, BgL_envz00_16,
																					CAR(BgL_cdrzd22718zd2_1141));
																			}
																		else
																			{	/* Rgc/rgcrules.scm 370 */
																				return
																					BGl_errorz00zz__errorz00(BFALSE,
																					BGl_string2906z00zz__rgc_rulesz00,
																					BgL_rulez00_17);
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 370 */
																		return
																			BGl_errorz00zz__errorz00(BFALSE,
																			BGl_string2906z00zz__rgc_rulesz00,
																			BgL_rulez00_17);
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 370 */
																if (
																	(CAR(BgL_ezd21611zd2_1112) ==
																		BGl_symbol2856z00zz__rgc_rulesz00))
																	{	/* Rgc/rgcrules.scm 370 */
																		return
																			BGl_expandzd2orzd2zz__rgc_rulesz00
																			(BgL_matchz00_15, BgL_envz00_16,
																			BgL_cdrzd22718zd2_1141);
																	}
																else
																	{	/* Rgc/rgcrules.scm 370 */
																		if (
																			(CAR(BgL_ezd21611zd2_1112) ==
																				BGl_symbol2915z00zz__rgc_rulesz00))
																			{	/* Rgc/rgcrules.scm 370 */
																				if (PAIRP(BgL_cdrzd22718zd2_1141))
																					{	/* Rgc/rgcrules.scm 370 */
																						obj_t BgL_cdrzd22920zd2_1152;

																						BgL_cdrzd22920zd2_1152 =
																							CDR(BgL_cdrzd22718zd2_1141);
																						if (PAIRP(BgL_cdrzd22920zd2_1152))
																							{	/* Rgc/rgcrules.scm 370 */
																								if (NULLP(CDR
																										(BgL_cdrzd22920zd2_1152)))
																									{	/* Rgc/rgcrules.scm 370 */
																										return
																											BGl_expandzd2zd3z01zz__rgc_rulesz00
																											(BgL_matchz00_15,
																											BgL_envz00_16,
																											CAR
																											(BgL_cdrzd22718zd2_1141),
																											CAR
																											(BgL_cdrzd22920zd2_1152),
																											BgL_rulez00_17);
																									}
																								else
																									{	/* Rgc/rgcrules.scm 370 */
																										return
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string2906z00zz__rgc_rulesz00,
																											BgL_rulez00_17);
																									}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 370 */
																								return
																									BGl_errorz00zz__errorz00
																									(BFALSE,
																									BGl_string2906z00zz__rgc_rulesz00,
																									BgL_rulez00_17);
																							}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 370 */
																						return
																							BGl_errorz00zz__errorz00(BFALSE,
																							BGl_string2906z00zz__rgc_rulesz00,
																							BgL_rulez00_17);
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 370 */
																				obj_t BgL_cdrzd23127zd2_1158;

																				BgL_cdrzd23127zd2_1158 =
																					CDR(BgL_ezd21611zd2_1112);
																				if (
																					(CAR(BgL_ezd21611zd2_1112) ==
																						BGl_symbol2917z00zz__rgc_rulesz00))
																					{	/* Rgc/rgcrules.scm 370 */
																						if (PAIRP(BgL_cdrzd23127zd2_1158))
																							{	/* Rgc/rgcrules.scm 370 */
																								obj_t BgL_cdrzd23131zd2_1161;

																								BgL_cdrzd23131zd2_1161 =
																									CDR(BgL_cdrzd23127zd2_1158);
																								if (PAIRP
																									(BgL_cdrzd23131zd2_1161))
																									{	/* Rgc/rgcrules.scm 370 */
																										if (NULLP(CDR
																												(BgL_cdrzd23131zd2_1161)))
																											{	/* Rgc/rgcrules.scm 370 */
																												return
																													BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00
																													(BgL_matchz00_15,
																													BgL_envz00_16,
																													CAR
																													(BgL_cdrzd23127zd2_1158),
																													CAR
																													(BgL_cdrzd23131zd2_1161),
																													BgL_rulez00_17);
																											}
																										else
																											{	/* Rgc/rgcrules.scm 370 */
																												return
																													BGl_errorz00zz__errorz00
																													(BFALSE,
																													BGl_string2906z00zz__rgc_rulesz00,
																													BgL_rulez00_17);
																											}
																									}
																								else
																									{	/* Rgc/rgcrules.scm 370 */
																										return
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string2906z00zz__rgc_rulesz00,
																											BgL_rulez00_17);
																									}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 370 */
																								return
																									BGl_errorz00zz__errorz00
																									(BFALSE,
																									BGl_string2906z00zz__rgc_rulesz00,
																									BgL_rulez00_17);
																							}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 370 */
																						if (
																							(CAR(BgL_ezd21611zd2_1112) ==
																								BGl_symbol2919z00zz__rgc_rulesz00))
																							{	/* Rgc/rgcrules.scm 370 */
																								if (PAIRP
																									(BgL_cdrzd23127zd2_1158))
																									{	/* Rgc/rgcrules.scm 370 */
																										obj_t
																											BgL_cdrzd23310zd2_1170;
																										BgL_cdrzd23310zd2_1170 =
																											CDR
																											(BgL_cdrzd23127zd2_1158);
																										if (PAIRP
																											(BgL_cdrzd23310zd2_1170))
																											{	/* Rgc/rgcrules.scm 370 */
																												obj_t
																													BgL_cdrzd23315zd2_1172;
																												BgL_cdrzd23315zd2_1172 =
																													CDR
																													(BgL_cdrzd23310zd2_1170);
																												if (PAIRP
																													(BgL_cdrzd23315zd2_1172))
																													{	/* Rgc/rgcrules.scm 370 */
																														if (NULLP(CDR
																																(BgL_cdrzd23315zd2_1172)))
																															{	/* Rgc/rgcrules.scm 370 */
																																return
																																	BGl_expandzd2za2za2zd2zz__rgc_rulesz00
																																	(BgL_matchz00_15,
																																	BgL_envz00_16,
																																	CAR
																																	(BgL_cdrzd23127zd2_1158),
																																	CAR
																																	(BgL_cdrzd23310zd2_1170),
																																	CAR
																																	(BgL_cdrzd23315zd2_1172),
																																	BgL_rulez00_17);
																															}
																														else
																															{	/* Rgc/rgcrules.scm 370 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BFALSE,
																																	BGl_string2906z00zz__rgc_rulesz00,
																																	BgL_rulez00_17);
																															}
																													}
																												else
																													{	/* Rgc/rgcrules.scm 370 */
																														return
																															BGl_errorz00zz__errorz00
																															(BFALSE,
																															BGl_string2906z00zz__rgc_rulesz00,
																															BgL_rulez00_17);
																													}
																											}
																										else
																											{	/* Rgc/rgcrules.scm 370 */
																												return
																													BGl_errorz00zz__errorz00
																													(BFALSE,
																													BGl_string2906z00zz__rgc_rulesz00,
																													BgL_rulez00_17);
																											}
																									}
																								else
																									{	/* Rgc/rgcrules.scm 370 */
																										return
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string2906z00zz__rgc_rulesz00,
																											BgL_rulez00_17);
																									}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 370 */
																								if (
																									(CAR(BgL_ezd21611zd2_1112) ==
																										BGl_symbol2850z00zz__rgc_rulesz00))
																									{	/* Rgc/rgcrules.scm 370 */
																										return
																											BGl_expandzd2inzd2zz__rgc_rulesz00
																											(BgL_matchz00_15,
																											BgL_envz00_16,
																											CDR(BgL_ezd21611zd2_1112),
																											BgL_rulez00_17);
																									}
																								else
																									{	/* Rgc/rgcrules.scm 370 */
																										if (
																											(CAR(BgL_ezd21611zd2_1112)
																												==
																												BGl_symbol2921z00zz__rgc_rulesz00))
																											{	/* Rgc/rgcrules.scm 370 */
																												return
																													BGl_expandzd2outzd2zz__rgc_rulesz00
																													(BgL_matchz00_15,
																													BgL_envz00_16,
																													CDR
																													(BgL_ezd21611zd2_1112),
																													BgL_rulez00_17);
																											}
																										else
																											{	/* Rgc/rgcrules.scm 370 */
																												obj_t
																													BgL_cdrzd23513zd2_1183;
																												BgL_cdrzd23513zd2_1183 =
																													CDR
																													(BgL_ezd21611zd2_1112);
																												if ((CAR
																														(BgL_ezd21611zd2_1112)
																														==
																														BGl_symbol2923z00zz__rgc_rulesz00))
																													{	/* Rgc/rgcrules.scm 370 */
																														if (PAIRP
																															(BgL_cdrzd23513zd2_1183))
																															{	/* Rgc/rgcrules.scm 370 */
																																obj_t
																																	BgL_cdrzd23517zd2_1186;
																																BgL_cdrzd23517zd2_1186
																																	=
																																	CDR
																																	(BgL_cdrzd23513zd2_1183);
																																if (PAIRP
																																	(BgL_cdrzd23517zd2_1186))
																																	{	/* Rgc/rgcrules.scm 370 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd23517zd2_1186)))
																																			{	/* Rgc/rgcrules.scm 370 */
																																				return
																																					BGl_expandzd2andzd2zz__rgc_rulesz00
																																					(BgL_matchz00_15,
																																					BgL_envz00_16,
																																					CAR
																																					(BgL_cdrzd23513zd2_1183),
																																					CAR
																																					(BgL_cdrzd23517zd2_1186),
																																					BgL_rulez00_17);
																																			}
																																		else
																																			{	/* Rgc/rgcrules.scm 370 */
																																				return
																																					BGl_errorz00zz__errorz00
																																					(BFALSE,
																																					BGl_string2906z00zz__rgc_rulesz00,
																																					BgL_rulez00_17);
																																			}
																																	}
																																else
																																	{	/* Rgc/rgcrules.scm 370 */
																																		return
																																			BGl_errorz00zz__errorz00
																																			(BFALSE,
																																			BGl_string2906z00zz__rgc_rulesz00,
																																			BgL_rulez00_17);
																																	}
																															}
																														else
																															{	/* Rgc/rgcrules.scm 370 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BFALSE,
																																	BGl_string2906z00zz__rgc_rulesz00,
																																	BgL_rulez00_17);
																															}
																													}
																												else
																													{	/* Rgc/rgcrules.scm 370 */
																														if (
																															(CAR
																																(BgL_ezd21611zd2_1112)
																																==
																																BGl_symbol2925z00zz__rgc_rulesz00))
																															{	/* Rgc/rgcrules.scm 370 */
																																if (PAIRP
																																	(BgL_cdrzd23513zd2_1183))
																																	{	/* Rgc/rgcrules.scm 370 */
																																		obj_t
																																			BgL_cdrzd23595zd2_1195;
																																		BgL_cdrzd23595zd2_1195
																																			=
																																			CDR
																																			(BgL_cdrzd23513zd2_1183);
																																		if (PAIRP
																																			(BgL_cdrzd23595zd2_1195))
																																			{	/* Rgc/rgcrules.scm 370 */
																																				if (NULLP(CDR(BgL_cdrzd23595zd2_1195)))
																																					{	/* Rgc/rgcrules.scm 370 */
																																						return
																																							BGl_expandzd2butzd2zz__rgc_rulesz00
																																							(BgL_matchz00_15,
																																							BgL_envz00_16,
																																							CAR
																																							(BgL_cdrzd23513zd2_1183),
																																							CAR
																																							(BgL_cdrzd23595zd2_1195),
																																							BgL_rulez00_17);
																																					}
																																				else
																																					{	/* Rgc/rgcrules.scm 370 */
																																						return
																																							BGl_errorz00zz__errorz00
																																							(BFALSE,
																																							BGl_string2906z00zz__rgc_rulesz00,
																																							BgL_rulez00_17);
																																					}
																																			}
																																		else
																																			{	/* Rgc/rgcrules.scm 370 */
																																				return
																																					BGl_errorz00zz__errorz00
																																					(BFALSE,
																																					BGl_string2906z00zz__rgc_rulesz00,
																																					BgL_rulez00_17);
																																			}
																																	}
																																else
																																	{	/* Rgc/rgcrules.scm 370 */
																																		return
																																			BGl_errorz00zz__errorz00
																																			(BFALSE,
																																			BGl_string2906z00zz__rgc_rulesz00,
																																			BgL_rulez00_17);
																																	}
																															}
																														else
																															{	/* Rgc/rgcrules.scm 370 */
																																obj_t
																																	BgL_cdrzd23645zd2_1201;
																																BgL_cdrzd23645zd2_1201
																																	=
																																	CDR
																																	(BgL_ezd21611zd2_1112);
																																if ((CAR
																																		(BgL_ezd21611zd2_1112)
																																		==
																																		BGl_symbol2927z00zz__rgc_rulesz00))
																																	{	/* Rgc/rgcrules.scm 370 */
																																		if (PAIRP
																																			(BgL_cdrzd23645zd2_1201))
																																			{	/* Rgc/rgcrules.scm 370 */
																																				if (NULLP(CDR(BgL_cdrzd23645zd2_1201)))
																																					{	/* Rgc/rgcrules.scm 370 */
																																						return
																																							BGl_expandzd2submatchzd2zz__rgc_rulesz00
																																							(BgL_matchz00_15,
																																							BgL_envz00_16,
																																							CAR
																																							(BgL_cdrzd23645zd2_1201),
																																							BgL_rulez00_17);
																																					}
																																				else
																																					{	/* Rgc/rgcrules.scm 370 */
																																						return
																																							BGl_errorz00zz__errorz00
																																							(BFALSE,
																																							BGl_string2906z00zz__rgc_rulesz00,
																																							BgL_rulez00_17);
																																					}
																																			}
																																		else
																																			{	/* Rgc/rgcrules.scm 370 */
																																				return
																																					BGl_errorz00zz__errorz00
																																					(BFALSE,
																																					BGl_string2906z00zz__rgc_rulesz00,
																																					BgL_rulez00_17);
																																			}
																																	}
																																else
																																	{	/* Rgc/rgcrules.scm 370 */
																																		obj_t
																																			BgL_carzd23671zd2_1207;
																																		BgL_carzd23671zd2_1207
																																			=
																																			CAR
																																			(BgL_ezd21611zd2_1112);
																																		if (
																																			(BgL_carzd23671zd2_1207
																																				==
																																				BGl_symbol2929z00zz__rgc_rulesz00))
																																			{	/* Rgc/rgcrules.scm 370 */
																																				return
																																					BGl_expandzd2sequencezd2zz__rgc_rulesz00
																																					(BgL_matchz00_15,
																																					BgL_envz00_16,
																																					BgL_cdrzd23645zd2_1201);
																																			}
																																		else
																																			{	/* Rgc/rgcrules.scm 370 */
																																				if (
																																					(BgL_carzd23671zd2_1207
																																						==
																																						BGl_symbol2931z00zz__rgc_rulesz00))
																																					{	/* Rgc/rgcrules.scm 370 */
																																						return
																																							BGl_expandzd2sequencezd2zz__rgc_rulesz00
																																							(BgL_matchz00_15,
																																							BgL_envz00_16,
																																							BgL_cdrzd23645zd2_1201);
																																					}
																																				else
																																					{	/* Rgc/rgcrules.scm 370 */
																																						obj_t
																																							BgL_cdrzd23678zd2_1211;
																																						BgL_cdrzd23678zd2_1211
																																							=
																																							CDR
																																							(BgL_ezd21611zd2_1112);
																																						if (
																																							(CAR
																																								(BgL_ezd21611zd2_1112)
																																								==
																																								BGl_symbol2933z00zz__rgc_rulesz00))
																																							{	/* Rgc/rgcrules.scm 370 */
																																								if (PAIRP(BgL_cdrzd23678zd2_1211))
																																									{	/* Rgc/rgcrules.scm 370 */
																																										if (NULLP(CDR(BgL_cdrzd23678zd2_1211)))
																																											{	/* Rgc/rgcrules.scm 370 */
																																												obj_t
																																													BgL_arg2178z00_1215;
																																												BgL_arg2178z00_1215
																																													=
																																													CAR
																																													(BgL_cdrzd23678zd2_1211);
																																												{	/* Rgc/rgcrules.scm 370 */
																																													obj_t
																																														BgL_errz00_2483;
																																													BgL_errz00_2483
																																														=
																																														BgL_rulez00_17;
																																													if (STRINGP(BgL_arg2178z00_1215))
																																														{
																																															obj_t
																																																BgL_rulez00_3953;
																																															BgL_rulez00_3953
																																																=
																																																BGl_posixzd2ze3rgcz31zz__rgc_posixz00
																																																(BgL_arg2178z00_1215);
																																															BgL_rulez00_17
																																																=
																																																BgL_rulez00_3953;
																																															goto
																																																BGl_expandzd2rulezd2zz__rgc_rulesz00;
																																														}
																																													else
																																														{	/* Rgc/rgcrules.scm 370 */
																																															return
																																																BGl_errorz00zz__errorz00
																																																(BFALSE,
																																																BGl_string2906z00zz__rgc_rulesz00,
																																																BgL_errz00_2483);
																																														}
																																												}
																																											}
																																										else
																																											{	/* Rgc/rgcrules.scm 370 */
																																												return
																																													BGl_errorz00zz__errorz00
																																													(BFALSE,
																																													BGl_string2906z00zz__rgc_rulesz00,
																																													BgL_rulez00_17);
																																											}
																																									}
																																								else
																																									{	/* Rgc/rgcrules.scm 370 */
																																										return
																																											BGl_errorz00zz__errorz00
																																											(BFALSE,
																																											BGl_string2906z00zz__rgc_rulesz00,
																																											BgL_rulez00_17);
																																									}
																																							}
																																						else
																																							{	/* Rgc/rgcrules.scm 370 */
																																								return
																																									BGl_errorz00zz__errorz00
																																									(BFALSE,
																																									BGl_string2906z00zz__rgc_rulesz00,
																																									BgL_rulez00_17);
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
				{	/* Rgc/rgcrules.scm 368 */
					return
						BGl_expandzd2atomzd2zz__rgc_rulesz00(BgL_matchz00_15, BgL_envz00_16,
						BgL_rulez00_17);
				}
		}
	}



/* expand-atom */
	obj_t BGl_expandzd2atomzd2zz__rgc_rulesz00(long BgL_matchz00_18,
		obj_t BgL_envz00_19, obj_t BgL_rulez00_20)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 395 */
			if (CHARP(BgL_rulez00_20))
				{	/* Rgc/rgcrules.scm 397 */
					return BINT((CCHAR(BgL_rulez00_20)));
				}
			else
				{	/* Rgc/rgcrules.scm 399 */
					bool_t BgL_testz00_3965;

					if (INTEGERP(BgL_rulez00_20))
						{	/* Rgc/rgcrules.scm 399 */
							if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_rulez00_20,
									BINT(((long) 0))))
								{	/* Rgc/rgcrules.scm 400 */
									BgL_testz00_3965 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_rulez00_20,
										BGl_rgczd2maxzd2charz00zz__rgc_configz00());
								}
							else
								{	/* Rgc/rgcrules.scm 400 */
									BgL_testz00_3965 = ((bool_t) 0);
								}
						}
					else
						{	/* Rgc/rgcrules.scm 399 */
							BgL_testz00_3965 = ((bool_t) 0);
						}
					if (BgL_testz00_3965)
						{	/* Rgc/rgcrules.scm 399 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2935z00zz__rgc_rulesz00, BgL_rulez00_20);
						}
					else
						{	/* Rgc/rgcrules.scm 399 */
							if (STRINGP(BgL_rulez00_20))
								{	/* Rgc/rgcrules.scm 403 */
									return
										BGl_expandzd2stringzd2zz__rgc_rulesz00(BgL_envz00_19,
										BgL_rulez00_20);
								}
							else
								{	/* Rgc/rgcrules.scm 403 */
									if (SYMBOLP(BgL_rulez00_20))
										{	/* Rgc/rgcrules.scm 406 */
											obj_t BgL_cellz00_1251;

											BgL_cellz00_1251 =
												BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_rulez00_20,
												BgL_envz00_19);
											if (PAIRP(BgL_cellz00_1251))
												{	/* Rgc/rgcrules.scm 407 */
													return
														BGl_expandzd2rulezd2zz__rgc_rulesz00
														(BgL_matchz00_18, BgL_envz00_19,
														CDR(BgL_cellz00_1251));
												}
											else
												{	/* Rgc/rgcrules.scm 407 */
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2936z00zz__rgc_rulesz00, BgL_rulez00_20);
												}
										}
									else
										{	/* Rgc/rgcrules.scm 405 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2937z00zz__rgc_rulesz00, BgL_rulez00_20);
										}
								}
						}
				}
		}
	}



/* expand-string */
	obj_t BGl_expandzd2stringzd2zz__rgc_rulesz00(obj_t BgL_envz00_21,
		obj_t BgL_rulez00_22)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 422 */
			if ((STRING_LENGTH(BgL_rulez00_22) == ((long) 0)))
				{	/* Rgc/rgcrules.scm 423 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2938z00zz__rgc_rulesz00,
						BgL_rulez00_22);
				}
			else
				{	/* Rgc/rgcrules.scm 425 */
					obj_t BgL_arg2224z00_1258;

					{	/* Rgc/rgcrules.scm 425 */
						obj_t BgL_l1873z00_1259;

						BgL_l1873z00_1259 =
							BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_rulez00_22);
						if (NULLP(BgL_l1873z00_1259))
							{	/* Rgc/rgcrules.scm 425 */
								BgL_arg2224z00_1258 = BNIL;
							}
						else
							{	/* Rgc/rgcrules.scm 425 */
								obj_t BgL_head1875z00_1261;

								{	/* Rgc/rgcrules.scm 425 */
									long BgL_arg2237z00_1274;

									{	/* Rgc/rgcrules.scm 425 */
										unsigned char BgL_auxz00_3993;

										{	/* Rgc/rgcrules.scm 425 */
											obj_t BgL_pairz00_2628;

											BgL_pairz00_2628 = BgL_l1873z00_1259;
											BgL_auxz00_3993 = CCHAR(CAR(BgL_pairz00_2628));
										}
										BgL_arg2237z00_1274 = (BgL_auxz00_3993);
									}
									BgL_head1875z00_1261 =
										MAKE_PAIR(BINT(BgL_arg2237z00_1274), BNIL);
								}
								{	/* Rgc/rgcrules.scm 425 */
									obj_t BgL_g1878z00_1262;

									BgL_g1878z00_1262 = CDR(BgL_l1873z00_1259);
									{
										obj_t BgL_l1873z00_2634;

										obj_t BgL_tail1876z00_2635;

										BgL_l1873z00_2634 = BgL_g1878z00_1262;
										BgL_tail1876z00_2635 = BgL_head1875z00_1261;
									BgL_zc3anonymousza32226ze3z83_2633:
										if (NULLP(BgL_l1873z00_2634))
											{	/* Rgc/rgcrules.scm 425 */
												BgL_arg2224z00_1258 = BgL_head1875z00_1261;
											}
										else
											{	/* Rgc/rgcrules.scm 425 */
												obj_t BgL_newtail1877z00_2643;

												{	/* Rgc/rgcrules.scm 425 */
													long BgL_arg2234z00_2644;

													{	/* Rgc/rgcrules.scm 425 */
														unsigned char BgL_auxz00_4002;

														{	/* Rgc/rgcrules.scm 425 */
															obj_t BgL_pairz00_2649;

															BgL_pairz00_2649 = BgL_l1873z00_2634;
															BgL_auxz00_4002 = CCHAR(CAR(BgL_pairz00_2649));
														}
														BgL_arg2234z00_2644 = (BgL_auxz00_4002);
													}
													BgL_newtail1877z00_2643 =
														MAKE_PAIR(BINT(BgL_arg2234z00_2644), BNIL);
												}
												SET_CDR(BgL_tail1876z00_2635, BgL_newtail1877z00_2643);
												{
													obj_t BgL_tail1876z00_4011;

													obj_t BgL_l1873z00_4009;

													BgL_l1873z00_4009 = CDR(BgL_l1873z00_2634);
													BgL_tail1876z00_4011 = BgL_newtail1877z00_2643;
													BgL_tail1876z00_2635 = BgL_tail1876z00_4011;
													BgL_l1873z00_2634 = BgL_l1873z00_4009;
													goto BgL_zc3anonymousza32226ze3z83_2633;
												}
											}
									}
								}
							}
					}
					return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg2224z00_1258);
				}
		}
	}



/* expand-... */
	obj_t BGl_expandzd2ze2ze2ze2z30zz__rgc_rulesz00(long BgL_matchz00_23,
		obj_t BgL_envz00_24, obj_t BgL_numz00_25, obj_t BgL_rulez00_26,
		obj_t BgL_errz00_27)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 440 */
			{	/* Rgc/rgcrules.scm 450 */
				bool_t BgL_testz00_4013;

				if (INTEGERP(BgL_numz00_25))
					{	/* Rgc/rgcrules.scm 450 */
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_numz00_25,
								BINT(((long) 0))))
							{	/* Rgc/rgcrules.scm 450 */
								BgL_testz00_4013 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_25,
									BINT(BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00));
							}
						else
							{	/* Rgc/rgcrules.scm 450 */
								BgL_testz00_4013 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 450 */
						BgL_testz00_4013 = ((bool_t) 0);
					}
				if (BgL_testz00_4013)
					{
						obj_t BgL_rulesz00_1281;

						{	/* Rgc/rgcrules.scm 452 */
							obj_t BgL_ezd23809zd2_1284;

							BgL_ezd23809zd2_1284 =
								BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_23,
								BgL_envz00_24, BgL_rulez00_26);
							if (PAIRP(BgL_ezd23809zd2_1284))
								{	/* Rgc/rgcrules.scm 452 */
									if (
										(CAR(BgL_ezd23809zd2_1284) ==
											BGl_symbol2939z00zz__rgc_rulesz00))
										{	/* Rgc/rgcrules.scm 452 */
											BgL_rulesz00_1281 = CDR(BgL_ezd23809zd2_1284);
											{	/* Rgc/rgcrules.scm 454 */
												obj_t BgL_arg2249z00_1290;

												obj_t BgL_arg2250z00_1291;

												BgL_arg2249z00_1290 = BGl_symbol2856z00zz__rgc_rulesz00;
												{	/* Rgc/rgcrules.scm 454 */
													obj_t BgL_arg2251z00_1292;

													{	/* Rgc/rgcrules.scm 454 */
														obj_t BgL_l1884z00_1294;

														BgL_l1884z00_1294 =
															BGl_explodezd2sequencezd2zz__rgc_rulesz00
															(BgL_numz00_25, BgL_rulesz00_1281);
														if (NULLP(BgL_l1884z00_1294))
															{	/* Rgc/rgcrules.scm 454 */
																BgL_arg2251z00_1292 = BNIL;
															}
														else
															{	/* Rgc/rgcrules.scm 454 */
																obj_t BgL_head1886z00_1296;

																BgL_head1886z00_1296 =
																	MAKE_PAIR
																	(BGl_makezd2sequencezd2zz__rgc_rulesz00(CAR
																		(BgL_l1884z00_1294)), BNIL);
																{	/* Rgc/rgcrules.scm 454 */
																	obj_t BgL_g1889z00_1297;

																	BgL_g1889z00_1297 = CDR(BgL_l1884z00_1294);
																	{
																		obj_t BgL_l1884z00_2696;

																		obj_t BgL_tail1887z00_2697;

																		BgL_l1884z00_2696 = BgL_g1889z00_1297;
																		BgL_tail1887z00_2697 = BgL_head1886z00_1296;
																	BgL_zc3anonymousza32254ze3z83_2695:
																		if (NULLP(BgL_l1884z00_2696))
																			{	/* Rgc/rgcrules.scm 454 */
																				BgL_arg2251z00_1292 =
																					BgL_head1886z00_1296;
																			}
																		else
																			{	/* Rgc/rgcrules.scm 454 */
																				obj_t BgL_newtail1888z00_2705;

																				BgL_newtail1888z00_2705 =
																					MAKE_PAIR
																					(BGl_makezd2sequencezd2zz__rgc_rulesz00
																					(CAR(BgL_l1884z00_2696)), BNIL);
																				SET_CDR(BgL_tail1887z00_2697,
																					BgL_newtail1888z00_2705);
																				{
																					obj_t BgL_tail1887z00_4042;

																					obj_t BgL_l1884z00_4040;

																					BgL_l1884z00_4040 =
																						CDR(BgL_l1884z00_2696);
																					BgL_tail1887z00_4042 =
																						BgL_newtail1888z00_2705;
																					BgL_tail1887z00_2697 =
																						BgL_tail1887z00_4042;
																					BgL_l1884z00_2696 = BgL_l1884z00_4040;
																					goto
																						BgL_zc3anonymousza32254ze3z83_2695;
																				}
																			}
																	}
																}
															}
													}
													BgL_arg2250z00_1291 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2251z00_1292, BNIL);
												}
												return
													MAKE_PAIR(BgL_arg2249z00_1290, BgL_arg2250z00_1291);
											}
										}
									else
										{	/* Rgc/rgcrules.scm 452 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2937z00zz__rgc_rulesz00, BgL_errz00_27);
										}
								}
							else
								{	/* Rgc/rgcrules.scm 452 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2937z00zz__rgc_rulesz00, BgL_errz00_27);
								}
						}
					}
				else
					{	/* Rgc/rgcrules.scm 450 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2941z00zz__rgc_rulesz00, BgL_errz00_27);
					}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__rgc_rulesz00(obj_t BgL_numz00_3350,
		obj_t BgL_rulesz00_1317, long BgL_iz00_1318)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 442 */
			{	/* Rgc/rgcrules.scm 444 */
				bool_t BgL_testz00_4049;

				if (NULLP(BgL_rulesz00_1317))
					{	/* Rgc/rgcrules.scm 444 */
						BgL_testz00_4049 = ((bool_t) 1);
					}
				else
					{	/* Rgc/rgcrules.scm 444 */
						BgL_testz00_4049 = (BgL_iz00_1318 == (long) CINT(BgL_numz00_3350));
					}
				if (BgL_testz00_4049)
					{	/* Rgc/rgcrules.scm 444 */
						return BNIL;
					}
				else
					{	/* Rgc/rgcrules.scm 446 */
						obj_t BgL_firstz00_1321;

						BgL_firstz00_1321 = CAR(BgL_rulesz00_1317);
						{	/* Rgc/rgcrules.scm 447 */
							obj_t BgL_arg2270z00_1322;

							obj_t BgL_arg2271z00_1323;

							{	/* Rgc/rgcrules.scm 447 */
								obj_t BgL_list2272z00_1324;

								BgL_list2272z00_1324 = MAKE_PAIR(BgL_firstz00_1321, BNIL);
								BgL_arg2270z00_1322 = BgL_list2272z00_1324;
							}
							{	/* Rgc/rgcrules.scm 448 */
								obj_t BgL_l1879z00_1325;

								BgL_l1879z00_1325 =
									BGl_loopz72z72zz__rgc_rulesz00(BgL_numz00_3350,
									CDR(BgL_rulesz00_1317), (BgL_iz00_1318 + ((long) 1)));
								if (NULLP(BgL_l1879z00_1325))
									{	/* Rgc/rgcrules.scm 448 */
										BgL_arg2271z00_1323 = BNIL;
									}
								else
									{	/* Rgc/rgcrules.scm 448 */
										obj_t BgL_head1881z00_1327;

										BgL_head1881z00_1327 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1879z00_2758;

											obj_t BgL_tail1882z00_2759;

											BgL_l1879z00_2758 = BgL_l1879z00_1325;
											BgL_tail1882z00_2759 = BgL_head1881z00_1327;
										BgL_zc3anonymousza32274ze3z83_2757:
											if (NULLP(BgL_l1879z00_2758))
												{	/* Rgc/rgcrules.scm 448 */
													BgL_arg2271z00_1323 = CDR(BgL_head1881z00_1327);
												}
											else
												{	/* Rgc/rgcrules.scm 448 */
													obj_t BgL_newtail1883z00_2767;

													{	/* Rgc/rgcrules.scm 448 */
														obj_t BgL_arg2278z00_2768;

														BgL_arg2278z00_2768 =
															MAKE_PAIR(BgL_firstz00_1321,
															CAR(BgL_l1879z00_2758));
														BgL_newtail1883z00_2767 =
															MAKE_PAIR(BgL_arg2278z00_2768, BNIL);
													}
													SET_CDR(BgL_tail1882z00_2759,
														BgL_newtail1883z00_2767);
													{
														obj_t BgL_tail1882z00_4071;

														obj_t BgL_l1879z00_4069;

														BgL_l1879z00_4069 = CDR(BgL_l1879z00_2758);
														BgL_tail1882z00_4071 = BgL_newtail1883z00_2767;
														BgL_tail1882z00_2759 = BgL_tail1882z00_4071;
														BgL_l1879z00_2758 = BgL_l1879z00_4069;
														goto BgL_zc3anonymousza32274ze3z83_2757;
													}
												}
										}
									}
							}
							return MAKE_PAIR(BgL_arg2270z00_1322, BgL_arg2271z00_1323);
						}
					}
			}
		}
	}



/* explode-sequence */
	obj_t BGl_explodezd2sequencezd2zz__rgc_rulesz00(obj_t BgL_numz00_3351,
		obj_t BgL_rulesz00_1314)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 449 */
			return
				BGl_loopz72z72zz__rgc_rulesz00(BgL_numz00_3351, BgL_rulesz00_1314,
				((long) 0));
		}
	}



/* expand-uncase */
	obj_t BGl_expandzd2uncasezd2zz__rgc_rulesz00(long BgL_matchz00_28,
		obj_t BgL_envz00_29, obj_t BgL_rulez00_30)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 477 */
			return
				BGl_loopz00zz__rgc_rulesz00(BGl_expandzd2rulezd2zz__rgc_rulesz00
				(BgL_matchz00_28, BgL_envz00_29, BgL_rulez00_30), BNIL);
		}
	}



/* loop */
	obj_t BGl_loopz00zz__rgc_rulesz00(obj_t BgL_rulez00_1347,
		obj_t BgL_resz00_1348)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 479 */
		BGl_loopz00zz__rgc_rulesz00:
			if (NULLP(BgL_rulez00_1347))
				{	/* Rgc/rgcrules.scm 484 */
					return bgl_reverse_bang(BgL_resz00_1348);
				}
			else
				{	/* Rgc/rgcrules.scm 484 */
					if (PAIRP(BgL_rulez00_1347))
						{	/* Rgc/rgcrules.scm 495 */
							bool_t BgL_testz00_4081;

							{	/* Rgc/rgcrules.scm 495 */
								obj_t BgL_auxz00_4082;

								BgL_auxz00_4082 = CAR(BgL_rulez00_1347);
								BgL_testz00_4081 = PAIRP(BgL_auxz00_4082);
							}
							if (BgL_testz00_4081)
								{	/* Rgc/rgcrules.scm 496 */
									obj_t BgL_arg2289z00_1353;

									obj_t BgL_arg2290z00_1354;

									BgL_arg2289z00_1353 = CDR(BgL_rulez00_1347);
									BgL_arg2290z00_1354 =
										MAKE_PAIR(BGl_loopz00zz__rgc_rulesz00(CAR(BgL_rulez00_1347),
											BNIL), BgL_resz00_1348);
									{
										obj_t BgL_resz00_4090;

										obj_t BgL_rulez00_4089;

										BgL_rulez00_4089 = BgL_arg2289z00_1353;
										BgL_resz00_4090 = BgL_arg2290z00_1354;
										BgL_resz00_1348 = BgL_resz00_4090;
										BgL_rulez00_1347 = BgL_rulez00_4089;
										goto BGl_loopz00zz__rgc_rulesz00;
									}
								}
							else
								{	/* Rgc/rgcrules.scm 495 */
									if (INTEGERP(CAR(BgL_rulez00_1347)))
										{	/* Rgc/rgcrules.scm 498 */
											if (BGl_rgczd2alphabeticzf3z21zz__rgc_configz00(CAR
													(BgL_rulez00_1347)))
												{	/* Rgc/rgcrules.scm 503 */
													obj_t BgL_arg2296z00_1360;

													obj_t BgL_arg2297z00_1361;

													BgL_arg2296z00_1360 = CDR(BgL_rulez00_1347);
													{	/* Rgc/rgcrules.scm 504 */
														obj_t BgL_arg2300z00_1362;

														{	/* Rgc/rgcrules.scm 504 */
															obj_t BgL_arg2301z00_1363;

															obj_t BgL_arg2302z00_1364;

															BgL_arg2301z00_1363 =
																BGl_symbol2856z00zz__rgc_rulesz00;
															{	/* Rgc/rgcrules.scm 504 */
																obj_t BgL_arg2303z00_1365;

																obj_t BgL_arg2304z00_1366;

																BgL_arg2303z00_1365 =
																	BGl_rgczd2upcasezd2zz__rgc_configz00(CAR
																	(BgL_rulez00_1347));
																BgL_arg2304z00_1366 =
																	BGl_rgczd2downcasezd2zz__rgc_configz00(CAR
																	(BgL_rulez00_1347));
																{	/* Rgc/rgcrules.scm 504 */
																	obj_t BgL_list2306z00_1368;

																	{	/* Rgc/rgcrules.scm 504 */
																		obj_t BgL_arg2307z00_1369;

																		BgL_arg2307z00_1369 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2306z00_1368 =
																			MAKE_PAIR(BgL_arg2304z00_1366,
																			BgL_arg2307z00_1369);
																	}
																	BgL_arg2302z00_1364 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2303z00_1365, BgL_list2306z00_1368);
																}
															}
															BgL_arg2300z00_1362 =
																MAKE_PAIR(BgL_arg2301z00_1363,
																BgL_arg2302z00_1364);
														}
														BgL_arg2297z00_1361 =
															MAKE_PAIR(BgL_arg2300z00_1362, BgL_resz00_1348);
													}
													{
														obj_t BgL_resz00_4108;

														obj_t BgL_rulez00_4107;

														BgL_rulez00_4107 = BgL_arg2296z00_1360;
														BgL_resz00_4108 = BgL_arg2297z00_1361;
														BgL_resz00_1348 = BgL_resz00_4108;
														BgL_rulez00_1347 = BgL_rulez00_4107;
														goto BGl_loopz00zz__rgc_rulesz00;
													}
												}
											else
												{	/* Rgc/rgcrules.scm 507 */
													obj_t BgL_arg2310z00_1372;

													obj_t BgL_arg2311z00_1373;

													BgL_arg2310z00_1372 = CDR(BgL_rulez00_1347);
													BgL_arg2311z00_1373 =
														MAKE_PAIR(CAR(BgL_rulez00_1347), BgL_resz00_1348);
													{
														obj_t BgL_resz00_4113;

														obj_t BgL_rulez00_4112;

														BgL_rulez00_4112 = BgL_arg2310z00_1372;
														BgL_resz00_4113 = BgL_arg2311z00_1373;
														BgL_resz00_1348 = BgL_resz00_4113;
														BgL_rulez00_1347 = BgL_rulez00_4112;
														goto BGl_loopz00zz__rgc_rulesz00;
													}
												}
										}
									else
										{	/* Rgc/rgcrules.scm 510 */
											obj_t BgL_arg2314z00_1376;

											obj_t BgL_arg2315z00_1377;

											BgL_arg2314z00_1376 = CDR(BgL_rulez00_1347);
											BgL_arg2315z00_1377 =
												MAKE_PAIR(CAR(BgL_rulez00_1347), BgL_resz00_1348);
											{
												obj_t BgL_resz00_4118;

												obj_t BgL_rulez00_4117;

												BgL_rulez00_4117 = BgL_arg2314z00_1376;
												BgL_resz00_4118 = BgL_arg2315z00_1377;
												BgL_resz00_1348 = BgL_resz00_4118;
												BgL_rulez00_1347 = BgL_rulez00_4117;
												goto BGl_loopz00zz__rgc_rulesz00;
											}
										}
								}
						}
					else
						{	/* Rgc/rgcrules.scm 486 */
							if (INTEGERP(BgL_rulez00_1347))
								{	/* Rgc/rgcrules.scm 487 */
									if (BGl_rgczd2alphabeticzf3z21zz__rgc_configz00
										(BgL_rulez00_1347))
										{	/* Rgc/rgcrules.scm 492 */
											obj_t BgL_arg2321z00_1383;

											obj_t BgL_arg2322z00_1384;

											BgL_arg2321z00_1383 = BGl_symbol2856z00zz__rgc_rulesz00;
											{	/* Rgc/rgcrules.scm 492 */
												obj_t BgL_arg2323z00_1385;

												obj_t BgL_arg2324z00_1386;

												obj_t BgL_arg2325z00_1387;

												BgL_arg2323z00_1385 =
													BGl_rgczd2upcasezd2zz__rgc_configz00
													(BgL_rulez00_1347);
												BgL_arg2324z00_1386 =
													BGl_rgczd2downcasezd2zz__rgc_configz00
													(BgL_rulez00_1347);
												BgL_arg2325z00_1387 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_resz00_1348, BNIL);
												{	/* Rgc/rgcrules.scm 492 */
													obj_t BgL_list2326z00_1388;

													{	/* Rgc/rgcrules.scm 492 */
														obj_t BgL_arg2327z00_1389;

														BgL_arg2327z00_1389 =
															MAKE_PAIR(BgL_arg2325z00_1387, BNIL);
														BgL_list2326z00_1388 =
															MAKE_PAIR(BgL_arg2324z00_1386,
															BgL_arg2327z00_1389);
													}
													BgL_arg2322z00_1384 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2323z00_1385, BgL_list2326z00_1388);
												}
											}
											return
												MAKE_PAIR(BgL_arg2321z00_1383, BgL_arg2322z00_1384);
										}
									else
										{	/* Rgc/rgcrules.scm 488 */
											return BgL_rulez00_1347;
										}
								}
							else
								{	/* Rgc/rgcrules.scm 487 */
									return BgL_rulez00_1347;
								}
						}
				}
		}
	}



/* expand-+ */
	obj_t BGl_expandzd2zb2z60zz__rgc_rulesz00(long BgL_matchz00_34,
		obj_t BgL_envz00_35, obj_t BgL_rulez00_36)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 522 */
			{	/* Rgc/rgcrules.scm 523 */
				obj_t BgL_erulez00_2832;

				BgL_erulez00_2832 =
					BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_34, BgL_envz00_35,
					BgL_rulez00_36);
				{	/* Rgc/rgcrules.scm 523 */
					obj_t BgL_arg2333z00_2833;

					obj_t BgL_arg2334z00_2834;

					BgL_arg2333z00_2833 = BGl_symbol2939z00zz__rgc_rulesz00;
					{	/* Rgc/rgcrules.scm 523 */
						obj_t BgL_arg2335z00_2835;

						{	/* Rgc/rgcrules.scm 523 */
							obj_t BgL_arg2339z00_2837;

							obj_t BgL_arg2340z00_2838;

							BgL_arg2339z00_2837 = BGl_symbol2909z00zz__rgc_rulesz00;
							{	/* Rgc/rgcrules.scm 523 */
								obj_t BgL_list2341z00_2839;

								BgL_list2341z00_2839 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2340z00_2838 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_erulez00_2832,
									BgL_list2341z00_2839);
							}
							BgL_arg2335z00_2835 =
								MAKE_PAIR(BgL_arg2339z00_2837, BgL_arg2340z00_2838);
						}
						{	/* Rgc/rgcrules.scm 523 */
							obj_t BgL_list2337z00_2840;

							{	/* Rgc/rgcrules.scm 523 */
								obj_t BgL_arg2338z00_2841;

								BgL_arg2338z00_2841 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2337z00_2840 =
									MAKE_PAIR(BgL_arg2335z00_2835, BgL_arg2338z00_2841);
							}
							BgL_arg2334z00_2834 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_erulez00_2832,
								BgL_list2337z00_2840);
					}}
					return MAKE_PAIR(BgL_arg2333z00_2833, BgL_arg2334z00_2834);
				}
			}
		}
	}



/* expand-? */
	obj_t BGl_expandzd2zf3z21zz__rgc_rulesz00(long BgL_matchz00_37,
		obj_t BgL_envz00_38, obj_t BgL_rulez00_39)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 529 */
			{	/* Rgc/rgcrules.scm 530 */
				obj_t BgL_arg2342z00_2842;

				obj_t BgL_arg2343z00_2843;

				BgL_arg2342z00_2842 = BGl_symbol2856z00zz__rgc_rulesz00;
				{	/* Rgc/rgcrules.scm 530 */
					obj_t BgL_arg2344z00_2844;

					obj_t BgL_arg2345z00_2845;

					BgL_arg2344z00_2844 = BGl_symbol2942z00zz__rgc_rulesz00;
					BgL_arg2345z00_2845 =
						BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_37, BgL_envz00_38,
						BgL_rulez00_39);
					{	/* Rgc/rgcrules.scm 530 */
						obj_t BgL_list2347z00_2847;

						{	/* Rgc/rgcrules.scm 530 */
							obj_t BgL_arg2348z00_2848;

							BgL_arg2348z00_2848 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2347z00_2847 =
								MAKE_PAIR(BgL_arg2345z00_2845, BgL_arg2348z00_2848);
						}
						BgL_arg2343z00_2843 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2344z00_2844,
							BgL_list2347z00_2847);
				}}
				return MAKE_PAIR(BgL_arg2342z00_2842, BgL_arg2343z00_2843);
			}
		}
	}



/* expand-or */
	obj_t BGl_expandzd2orzd2zz__rgc_rulesz00(long BgL_matchz00_40,
		obj_t BgL_envz00_41, obj_t BgL_rulesz00_42)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 535 */
			if (NULLP(BgL_rulesz00_42))
				{	/* Rgc/rgcrules.scm 536 */
					return BGl_symbol2942z00zz__rgc_rulesz00;
				}
			else
				{
					obj_t BgL_rulesz00_1416;

					obj_t BgL_resz00_1417;

					BgL_rulesz00_1416 = BgL_rulesz00_42;
					BgL_resz00_1417 = BNIL;
				BgL_zc3anonymousza32350ze3z83_1418:
					if (NULLP(BgL_rulesz00_1416))
						{	/* Rgc/rgcrules.scm 540 */
							return
								MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
									(BgL_resz00_1417), BNIL));
						}
					else
						{	/* Rgc/rgcrules.scm 542 */
							obj_t BgL_rulez00_1424;

							BgL_rulez00_1424 =
								BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_40,
								BgL_envz00_41, CAR(BgL_rulesz00_1416));
							{	/* Rgc/rgcrules.scm 543 */
								bool_t BgL_testz00_4152;

								if (PAIRP(BgL_rulez00_1424))
									{	/* Rgc/rgcrules.scm 543 */
										BgL_testz00_4152 =
											(CAR(BgL_rulez00_1424) ==
											BGl_symbol2856z00zz__rgc_rulesz00);
									}
								else
									{	/* Rgc/rgcrules.scm 543 */
										BgL_testz00_4152 = ((bool_t) 0);
									}
								if (BgL_testz00_4152)
									{
										obj_t BgL_resz00_4159;

										obj_t BgL_rulesz00_4157;

										BgL_rulesz00_4157 = CDR(BgL_rulesz00_1416);
										BgL_resz00_4159 =
											bgl_append2(bgl_reverse_bang(CDR(BgL_rulez00_1424)),
											BgL_resz00_1417);
										BgL_resz00_1417 = BgL_resz00_4159;
										BgL_rulesz00_1416 = BgL_rulesz00_4157;
										goto BgL_zc3anonymousza32350ze3z83_1418;
									}
								else
									{	/* Rgc/rgcrules.scm 545 */
										obj_t BgL_arg2361z00_1430;

										obj_t BgL_arg2362z00_1431;

										BgL_arg2361z00_1430 = CDR(BgL_rulesz00_1416);
										BgL_arg2362z00_1431 =
											MAKE_PAIR(BgL_rulez00_1424, BgL_resz00_1417);
										{
											obj_t BgL_resz00_4166;

											obj_t BgL_rulesz00_4165;

											BgL_rulesz00_4165 = BgL_arg2361z00_1430;
											BgL_resz00_4166 = BgL_arg2362z00_1431;
											BgL_resz00_1417 = BgL_resz00_4166;
											BgL_rulesz00_1416 = BgL_rulesz00_4165;
											goto BgL_zc3anonymousza32350ze3z83_1418;
										}
									}
							}
						}
				}
		}
	}



/* expand-= */
	obj_t BGl_expandzd2zd3z01zz__rgc_rulesz00(long BgL_matchz00_43,
		obj_t BgL_envz00_44, obj_t BgL_numz00_45, obj_t BgL_rulez00_46,
		obj_t BgL_errz00_47)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 555 */
			{	/* Rgc/rgcrules.scm 556 */
				bool_t BgL_testz00_4167;

				if (INTEGERP(BgL_numz00_45))
					{	/* Rgc/rgcrules.scm 556 */
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_numz00_45,
								BINT(((long) 0))))
							{	/* Rgc/rgcrules.scm 556 */
								BgL_testz00_4167 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_45,
									BINT(BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00));
							}
						else
							{	/* Rgc/rgcrules.scm 556 */
								BgL_testz00_4167 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 556 */
						BgL_testz00_4167 = ((bool_t) 0);
					}
				if (BgL_testz00_4167)
					{	/* Rgc/rgcrules.scm 556 */
						obj_t BgL_erulez00_2860;

						BgL_erulez00_2860 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_43,
							BgL_envz00_44, BgL_rulez00_46);
						return
							BGl_makezd2sequencezd2zz__rgc_rulesz00
							(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector(CINT
									(BgL_numz00_45), BgL_erulez00_2860)));
					}
				else
					{	/* Rgc/rgcrules.scm 556 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2941z00zz__rgc_rulesz00, BgL_errz00_47);
					}
			}
		}
	}



/* expand->= */
	obj_t BGl_expandzd2ze3zd3ze2zz__rgc_rulesz00(long BgL_matchz00_48,
		obj_t BgL_envz00_49, obj_t BgL_numz00_50, obj_t BgL_rulez00_51,
		obj_t BgL_errz00_52)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 569 */
			{	/* Rgc/rgcrules.scm 570 */
				bool_t BgL_testz00_4181;

				if (INTEGERP(BgL_numz00_50))
					{	/* Rgc/rgcrules.scm 570 */
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_numz00_50,
								BINT(((long) 0))))
							{	/* Rgc/rgcrules.scm 570 */
								BgL_testz00_4181 =
									BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_numz00_50,
									BINT(BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00));
							}
						else
							{	/* Rgc/rgcrules.scm 570 */
								BgL_testz00_4181 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 570 */
						BgL_testz00_4181 = ((bool_t) 0);
					}
				if (BgL_testz00_4181)
					{	/* Rgc/rgcrules.scm 572 */
						obj_t BgL_erulez00_1444;

						BgL_erulez00_1444 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_48,
							BgL_envz00_49, BgL_rulez00_51);
						{	/* Rgc/rgcrules.scm 573 */
							obj_t BgL_arg2373z00_1445;

							{	/* Rgc/rgcrules.scm 573 */
								obj_t BgL_arg2374z00_1446;

								obj_t BgL_arg2375z00_1447;

								BgL_arg2374z00_1446 =
									BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector(CINT
										(BgL_numz00_50), BgL_erulez00_1444));
								{	/* Rgc/rgcrules.scm 574 */
									obj_t BgL_arg2377z00_1449;

									{	/* Rgc/rgcrules.scm 574 */
										obj_t BgL_arg2379z00_1451;

										obj_t BgL_arg2380z00_1452;

										BgL_arg2379z00_1451 = BGl_symbol2909z00zz__rgc_rulesz00;
										{	/* Rgc/rgcrules.scm 574 */
											obj_t BgL_list2381z00_1453;

											BgL_list2381z00_1453 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2380z00_1452 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_erulez00_1444, BgL_list2381z00_1453);
										}
										BgL_arg2377z00_1449 =
											MAKE_PAIR(BgL_arg2379z00_1451, BgL_arg2380z00_1452);
									}
									BgL_arg2375z00_1447 = MAKE_PAIR(BgL_arg2377z00_1449, BNIL);
								}
								BgL_arg2373z00_1445 =
									bgl_append2(BgL_arg2374z00_1446, BgL_arg2375z00_1447);
							}
							return
								BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg2373z00_1445);
						}
					}
				else
					{	/* Rgc/rgcrules.scm 570 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2941z00zz__rgc_rulesz00, BgL_errz00_52);
					}
			}
		}
	}



/* expand-** */
	obj_t BGl_expandzd2za2za2zd2zz__rgc_rulesz00(long BgL_matchz00_53,
		obj_t BgL_envz00_54, obj_t BgL_minz00_55, obj_t BgL_maxz00_56,
		obj_t BgL_rulez00_57, obj_t BgL_errz00_58)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 584 */
			{	/* Rgc/rgcrules.scm 585 */
				bool_t BgL_testz00_4200;

				if (INTEGERP(BgL_minz00_55))
					{	/* Rgc/rgcrules.scm 585 */
						if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_minz00_55,
								BINT(((long) 0))))
							{	/* Rgc/rgcrules.scm 586 */
								if (INTEGERP(BgL_maxz00_56))
									{	/* Rgc/rgcrules.scm 587 */
										if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_maxz00_56,
												BgL_minz00_55))
											{	/* Rgc/rgcrules.scm 588 */
												BgL_testz00_4200 =
													BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_maxz00_56,
													BINT
													(BGl_za2maxzd2rgczd2zd3zd2numza2z01zz__rgc_rulesz00));
											}
										else
											{	/* Rgc/rgcrules.scm 588 */
												BgL_testz00_4200 = ((bool_t) 0);
											}
									}
								else
									{	/* Rgc/rgcrules.scm 587 */
										BgL_testz00_4200 = ((bool_t) 0);
									}
							}
						else
							{	/* Rgc/rgcrules.scm 586 */
								BgL_testz00_4200 = ((bool_t) 0);
							}
					}
				else
					{	/* Rgc/rgcrules.scm 585 */
						BgL_testz00_4200 = ((bool_t) 0);
					}
				if (BgL_testz00_4200)
					{	/* Rgc/rgcrules.scm 591 */
						obj_t BgL_erulez00_1457;

						BgL_erulez00_1457 =
							BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_53,
							BgL_envz00_54, BgL_rulez00_57);
						{
							obj_t BgL_minz00_1460;

							obj_t BgL_resz00_1461;

							BgL_minz00_1460 = BgL_minz00_55;
							BgL_resz00_1461 = BNIL;
						BgL_zc3anonymousza32385ze3z83_1462:
							if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_minz00_1460,
									BgL_maxz00_56))
								{	/* Rgc/rgcrules.scm 594 */
									return
										MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(bgl_reverse_bang(BgL_resz00_1461), BNIL));
								}
							else
								{	/* Rgc/rgcrules.scm 596 */
									obj_t BgL_arg2391z00_1468;

									obj_t BgL_arg2392z00_1469;

									BgL_arg2391z00_1468 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_minz00_1460,
										BINT(((long) 1)));
									BgL_arg2392z00_1469 =
										MAKE_PAIR(BGl_makezd2sequencezd2zz__rgc_rulesz00
										(BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(make_vector
												(CINT(BgL_minz00_1460), BgL_erulez00_1457))),
										BgL_resz00_1461);
									{
										obj_t BgL_resz00_4226;

										obj_t BgL_minz00_4225;

										BgL_minz00_4225 = BgL_arg2391z00_1468;
										BgL_resz00_4226 = BgL_arg2392z00_1469;
										BgL_resz00_1461 = BgL_resz00_4226;
										BgL_minz00_1460 = BgL_minz00_4225;
										goto BgL_zc3anonymousza32385ze3z83_1462;
									}
								}
						}
					}
				else
					{	/* Rgc/rgcrules.scm 585 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2941z00zz__rgc_rulesz00, BgL_errz00_58);
					}
			}
		}
	}



/* expand-in */
	obj_t BGl_expandzd2inzd2zz__rgc_rulesz00(long BgL_matchz00_59,
		obj_t BgL_envz00_60, obj_t BgL_valuesz00_61, obj_t BgL_errz00_62)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 612 */
			if (NULLP(BgL_valuesz00_61))
				{	/* Rgc/rgcrules.scm 644 */
					return BGl_symbol2942z00zz__rgc_rulesz00;
				}
			else
				{
					obj_t BgL_valuesz00_1484;

					obj_t BgL_charsz00_1485;

					BgL_valuesz00_1484 = BgL_valuesz00_61;
					BgL_charsz00_1485 = BNIL;
				BgL_zc3anonymousza32401ze3z83_1486:
					if (NULLP(BgL_valuesz00_1484))
						{	/* Rgc/rgcrules.scm 648 */
							return
								MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_charsz00_1485, BNIL));
						}
					else
						{	/* Rgc/rgcrules.scm 650 */
							obj_t BgL_valuez00_1490;

							BgL_valuez00_1490 = CAR(BgL_valuesz00_1484);
							{
								obj_t BgL_orzd2charszd2_1498;

								if (BGl_rgczd2charzf3z21zz__rgc_rulesz00(BgL_valuez00_1490))
									{	/* Rgc/rgcrules.scm 651 */
										{	/* Rgc/rgcrules.scm 653 */
											obj_t BgL_arg2443z00_1545;

											obj_t BgL_arg2444z00_1546;

											BgL_arg2443z00_1545 = CDR(BgL_valuesz00_1484);
											{	/* Rgc/rgcrules.scm 653 */
												obj_t BgL_arg2445z00_1547;

												if (CHARP(BgL_valuez00_1490))
													{	/* Rgc/rgcrules.scm 653 */
														BgL_arg2445z00_1547 =
															BINT((CCHAR(BgL_valuez00_1490)));
													}
												else
													{	/* Rgc/rgcrules.scm 653 */
														BgL_arg2445z00_1547 = BgL_valuez00_1490;
													}
												BgL_arg2444z00_1546 =
													MAKE_PAIR(BgL_arg2445z00_1547, BgL_charsz00_1485);
											}
											{
												obj_t BgL_charsz00_4245;

												obj_t BgL_valuesz00_4244;

												BgL_valuesz00_4244 = BgL_arg2443z00_1545;
												BgL_charsz00_4245 = BgL_arg2444z00_1546;
												BgL_charsz00_1485 = BgL_charsz00_4245;
												BgL_valuesz00_1484 = BgL_valuesz00_4244;
												goto BgL_zc3anonymousza32401ze3z83_1486;
											}
										}
									}
								else
									{	/* Rgc/rgcrules.scm 651 */
										if (STRINGP(BgL_valuez00_1490))
											{	/* Rgc/rgcrules.scm 651 */
												if ((STRING_LENGTH(BgL_valuez00_1490) == ((long) 0)))
													{	/* Rgc/rgcrules.scm 658 */
														return BGl_symbol2942z00zz__rgc_rulesz00;
													}
												else
													{	/* Rgc/rgcrules.scm 660 */
														obj_t BgL_arg2448z00_1550;

														obj_t BgL_arg2449z00_1551;

														BgL_arg2448z00_1550 = CDR(BgL_valuesz00_1484);
														{	/* Rgc/rgcrules.scm 661 */
															obj_t BgL_arg2450z00_1552;

															{	/* Rgc/rgcrules.scm 661 */
																obj_t BgL_l1890z00_1553;

																BgL_l1890z00_1553 =
																	BGl_stringzd2ze3listz31zz__r4_strings_6_7z00
																	(BgL_valuez00_1490);
																if (NULLP(BgL_l1890z00_1553))
																	{	/* Rgc/rgcrules.scm 661 */
																		BgL_arg2450z00_1552 = BNIL;
																	}
																else
																	{	/* Rgc/rgcrules.scm 661 */
																		obj_t BgL_head1892z00_1555;

																		{	/* Rgc/rgcrules.scm 661 */
																			long BgL_arg2458z00_1568;

																			{	/* Rgc/rgcrules.scm 661 */
																				unsigned char BgL_auxz00_4255;

																				{	/* Rgc/rgcrules.scm 661 */
																					obj_t BgL_pairz00_2922;

																					BgL_pairz00_2922 = BgL_l1890z00_1553;
																					BgL_auxz00_4255 =
																						CCHAR(CAR(BgL_pairz00_2922));
																				}
																				BgL_arg2458z00_1568 = (BgL_auxz00_4255);
																			}
																			BgL_head1892z00_1555 =
																				MAKE_PAIR(BINT(BgL_arg2458z00_1568),
																				BNIL);
																		}
																		{	/* Rgc/rgcrules.scm 661 */
																			obj_t BgL_g1895z00_1556;

																			BgL_g1895z00_1556 =
																				CDR(BgL_l1890z00_1553);
																			{
																				obj_t BgL_l1890z00_2928;

																				obj_t BgL_tail1893z00_2929;

																				BgL_l1890z00_2928 = BgL_g1895z00_1556;
																				BgL_tail1893z00_2929 =
																					BgL_head1892z00_1555;
																			BgL_zc3anonymousza32452ze3z83_2927:
																				if (NULLP(BgL_l1890z00_2928))
																					{	/* Rgc/rgcrules.scm 661 */
																						BgL_arg2450z00_1552 =
																							BgL_head1892z00_1555;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 661 */
																						obj_t BgL_newtail1894z00_2937;

																						{	/* Rgc/rgcrules.scm 661 */
																							long BgL_arg2455z00_2938;

																							{	/* Rgc/rgcrules.scm 661 */
																								unsigned char BgL_auxz00_4264;

																								{	/* Rgc/rgcrules.scm 661 */
																									obj_t BgL_pairz00_2943;

																									BgL_pairz00_2943 =
																										BgL_l1890z00_2928;
																									BgL_auxz00_4264 =
																										CCHAR(CAR
																										(BgL_pairz00_2943));
																								}
																								BgL_arg2455z00_2938 =
																									(BgL_auxz00_4264);
																							}
																							BgL_newtail1894z00_2937 =
																								MAKE_PAIR(BINT
																								(BgL_arg2455z00_2938), BNIL);
																						}
																						SET_CDR(BgL_tail1893z00_2929,
																							BgL_newtail1894z00_2937);
																						{
																							obj_t BgL_tail1893z00_4273;

																							obj_t BgL_l1890z00_4271;

																							BgL_l1890z00_4271 =
																								CDR(BgL_l1890z00_2928);
																							BgL_tail1893z00_4273 =
																								BgL_newtail1894z00_2937;
																							BgL_tail1893z00_2929 =
																								BgL_tail1893z00_4273;
																							BgL_l1890z00_2928 =
																								BgL_l1890z00_4271;
																							goto
																								BgL_zc3anonymousza32452ze3z83_2927;
																						}
																					}
																			}
																		}
																	}
															}
															BgL_arg2449z00_1551 =
																bgl_append2(BgL_arg2450z00_1552,
																BgL_charsz00_1485);
														}
														{
															obj_t BgL_charsz00_4276;

															obj_t BgL_valuesz00_4275;

															BgL_valuesz00_4275 = BgL_arg2448z00_1550;
															BgL_charsz00_4276 = BgL_arg2449z00_1551;
															BgL_charsz00_1485 = BgL_charsz00_4276;
															BgL_valuesz00_1484 = BgL_valuesz00_4275;
															goto BgL_zc3anonymousza32401ze3z83_1486;
														}
													}
											}
										else
											{	/* Rgc/rgcrules.scm 651 */
												if (PAIRP(BgL_valuez00_1490))
													{	/* Rgc/rgcrules.scm 651 */
														obj_t BgL_carzd23836zd2_1505;

														obj_t BgL_cdrzd23837zd2_1506;

														BgL_carzd23836zd2_1505 = CAR(BgL_valuez00_1490);
														BgL_cdrzd23837zd2_1506 = CDR(BgL_valuez00_1490);
														if (BGl_rgczd2charzf3z21zz__rgc_rulesz00
															(BgL_carzd23836zd2_1505))
															{	/* Rgc/rgcrules.scm 651 */
																if (PAIRP(BgL_cdrzd23837zd2_1506))
																	{	/* Rgc/rgcrules.scm 651 */
																		obj_t BgL_carzd23842zd2_1509;

																		BgL_carzd23842zd2_1509 =
																			CAR(BgL_cdrzd23837zd2_1506);
																		if (BGl_rgczd2charzf3z21zz__rgc_rulesz00
																			(BgL_carzd23842zd2_1509))
																			{	/* Rgc/rgcrules.scm 651 */
																				if (NULLP(CDR(BgL_cdrzd23837zd2_1506)))
																					{
																						obj_t BgL_charsz00_4293;

																						obj_t BgL_valuesz00_4291;

																						BgL_valuesz00_4291 =
																							CDR(BgL_valuesz00_1484);
																						BgL_charsz00_4293 =
																							bgl_append2
																							(BGl_charzd2rangezd2zz__rgc_rulesz00
																							(BgL_errz00_62,
																								BgL_carzd23836zd2_1505,
																								BgL_carzd23842zd2_1509),
																							BgL_charsz00_1485);
																						BgL_charsz00_1485 =
																							BgL_charsz00_4293;
																						BgL_valuesz00_1484 =
																							BgL_valuesz00_4291;
																						goto
																							BgL_zc3anonymousza32401ze3z83_1486;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 651 */
																						if (
																							(CAR(BgL_valuez00_1490) ==
																								BGl_symbol2856z00zz__rgc_rulesz00))
																							{	/* Rgc/rgcrules.scm 651 */
																								BgL_orzd2charszd2_1498 =
																									CDR(BgL_valuez00_1490);
																							BgL_tagzd23819zd2_1499:
																								{
																									obj_t BgL_csz00_1581;

																									obj_t BgL_resz00_1582;

																									BgL_csz00_1581 =
																										BgL_orzd2charszd2_1498;
																									BgL_resz00_1582 = BNIL;
																								BgL_zc3anonymousza32473ze3z83_1583:
																									if (NULLP
																										(BgL_csz00_1581))
																										{
																											obj_t BgL_charsz00_4303;

																											obj_t BgL_valuesz00_4301;

																											BgL_valuesz00_4301 =
																												CDR(BgL_valuesz00_1484);
																											BgL_charsz00_4303 =
																												bgl_append2
																												(BgL_resz00_1582,
																												BgL_charsz00_1485);
																											BgL_charsz00_1485 =
																												BgL_charsz00_4303;
																											BgL_valuesz00_1484 =
																												BgL_valuesz00_4301;
																											goto
																												BgL_zc3anonymousza32401ze3z83_1486;
																										}
																									else
																										{	/* Rgc/rgcrules.scm 671 */
																											if (BGl_rgczd2charzf3z21zz__rgc_rulesz00(CAR(BgL_csz00_1581)))
																												{	/* Rgc/rgcrules.scm 675 */
																													obj_t
																														BgL_arg2479z00_1588;
																													obj_t
																														BgL_arg2480z00_1589;
																													BgL_arg2479z00_1588 =
																														CDR(BgL_csz00_1581);
																													BgL_arg2480z00_1589 =
																														MAKE_PAIR(CAR
																														(BgL_csz00_1581),
																														BgL_resz00_1582);
																													{
																														obj_t
																															BgL_resz00_4312;
																														obj_t
																															BgL_csz00_4311;
																														BgL_csz00_4311 =
																															BgL_arg2479z00_1588;
																														BgL_resz00_4312 =
																															BgL_arg2480z00_1589;
																														BgL_resz00_1582 =
																															BgL_resz00_4312;
																														BgL_csz00_1581 =
																															BgL_csz00_4311;
																														goto
																															BgL_zc3anonymousza32473ze3z83_1583;
																													}
																												}
																											else
																												{	/* Rgc/rgcrules.scm 676 */
																													bool_t
																														BgL_testz00_4313;
																													{	/* Rgc/rgcrules.scm 676 */
																														bool_t
																															BgL_testz00_4314;
																														{	/* Rgc/rgcrules.scm 676 */
																															obj_t
																																BgL_auxz00_4315;
																															BgL_auxz00_4315 =
																																CAR
																																(BgL_csz00_1581);
																															BgL_testz00_4314 =
																																PAIRP
																																(BgL_auxz00_4315);
																														}
																														if (BgL_testz00_4314)
																															{	/* Rgc/rgcrules.scm 676 */
																																obj_t
																																	BgL_auxz00_4318;
																																{	/* Rgc/rgcrules.scm 676 */
																																	obj_t
																																		BgL_pairz00_2995;
																																	BgL_pairz00_2995
																																		=
																																		BgL_csz00_1581;
																																	BgL_auxz00_4318
																																		=
																																		CAR(CAR
																																		(BgL_pairz00_2995));
																																}
																																BgL_testz00_4313
																																	=
																																	(BgL_auxz00_4318
																																	==
																																	BGl_symbol2856z00zz__rgc_rulesz00);
																															}
																														else
																															{	/* Rgc/rgcrules.scm 676 */
																																BgL_testz00_4313
																																	=
																																	((bool_t) 0);
																															}
																													}
																													if (BgL_testz00_4313)
																														{	/* Rgc/rgcrules.scm 677 */
																															obj_t
																																BgL_arg2483z00_1592;
																															{	/* Rgc/rgcrules.scm 677 */
																																obj_t
																																	BgL_auxz00_4322;
																																{	/* Rgc/rgcrules.scm 677 */
																																	obj_t
																																		BgL_pairz00_2999;
																																	BgL_pairz00_2999
																																		=
																																		BgL_csz00_1581;
																																	BgL_auxz00_4322
																																		=
																																		CDR(CAR
																																		(BgL_pairz00_2999));
																																}
																																BgL_arg2483z00_1592
																																	=
																																	bgl_append2
																																	(BgL_auxz00_4322,
																																	CDR
																																	(BgL_csz00_1581));
																															}
																															{
																																obj_t
																																	BgL_csz00_4327;
																																BgL_csz00_4327 =
																																	BgL_arg2483z00_1592;
																																BgL_csz00_1581 =
																																	BgL_csz00_4327;
																																goto
																																	BgL_zc3anonymousza32473ze3z83_1583;
																															}
																														}
																													else
																														{	/* Rgc/rgcrules.scm 676 */
																															return
																																BGl_errorz00zz__errorz00
																																(BFALSE,
																																BGl_string2906z00zz__rgc_rulesz00,
																																BgL_errz00_62);
																														}
																												}
																										}
																								}
																							}
																						else
																							{	/* Rgc/rgcrules.scm 651 */
																							BgL_tagzd23820zd2_1500:
																								{	/* Rgc/rgcrules.scm 682 */
																									obj_t BgL_arg2492z00_1601;

																									BgL_arg2492z00_1601 =
																										MAKE_PAIR
																										(BGl_expandzd2rulezd2zz__rgc_rulesz00
																										(BgL_matchz00_59,
																											BgL_envz00_60,
																											CAR(BgL_valuesz00_1484)),
																										CDR(BgL_valuesz00_1484));
																									{
																										obj_t BgL_valuesz00_4334;

																										BgL_valuesz00_4334 =
																											BgL_arg2492z00_1601;
																										BgL_valuesz00_1484 =
																											BgL_valuesz00_4334;
																										goto
																											BgL_zc3anonymousza32401ze3z83_1486;
																									}
																								}
																							}
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 651 */
																				if (
																					(CAR(BgL_valuez00_1490) ==
																						BGl_symbol2856z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4338;

																						BgL_orzd2charszd2_4338 =
																							CDR(BgL_valuez00_1490);
																						BgL_orzd2charszd2_1498 =
																							BgL_orzd2charszd2_4338;
																						goto BgL_tagzd23819zd2_1499;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 651 */
																						goto BgL_tagzd23820zd2_1500;
																					}
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 651 */
																		obj_t BgL_carzd23869zd2_1521;

																		BgL_carzd23869zd2_1521 =
																			CAR(BgL_valuez00_1490);
																		if (STRINGP(BgL_carzd23869zd2_1521))
																			{	/* Rgc/rgcrules.scm 651 */
																				if (NULLP(CDR(BgL_valuez00_1490)))
																					{	/* Rgc/rgcrules.scm 651 */
																						obj_t BgL_strz00_2892;

																						BgL_strz00_2892 =
																							BgL_carzd23869zd2_1521;
																						{
																							obj_t BgL_charsz00_4348;

																							obj_t BgL_valuesz00_4346;

																							BgL_valuesz00_4346 =
																								CDR(BgL_valuesz00_1484);
																							BgL_charsz00_4348 =
																								bgl_append2
																								(BGl_stringzd2rangezd2zz__rgc_rulesz00
																								(BgL_errz00_62,
																									BgL_strz00_2892),
																								BgL_charsz00_1485);
																							BgL_charsz00_1485 =
																								BgL_charsz00_4348;
																							BgL_valuesz00_1484 =
																								BgL_valuesz00_4346;
																							goto
																								BgL_zc3anonymousza32401ze3z83_1486;
																						}
																					}
																				else
																					{	/* Rgc/rgcrules.scm 651 */
																						if (
																							(BgL_carzd23869zd2_1521 ==
																								BGl_symbol2856z00zz__rgc_rulesz00))
																							{
																								obj_t BgL_orzd2charszd2_4353;

																								BgL_orzd2charszd2_4353 =
																									CDR(BgL_valuez00_1490);
																								BgL_orzd2charszd2_1498 =
																									BgL_orzd2charszd2_4353;
																								goto BgL_tagzd23819zd2_1499;
																							}
																						else
																							{	/* Rgc/rgcrules.scm 651 */
																								goto BgL_tagzd23820zd2_1500;
																							}
																					}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 651 */
																				if (
																					(BgL_carzd23869zd2_1521 ==
																						BGl_symbol2856z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4357;

																						BgL_orzd2charszd2_4357 =
																							CDR(BgL_valuez00_1490);
																						BgL_orzd2charszd2_1498 =
																							BgL_orzd2charszd2_4357;
																						goto BgL_tagzd23819zd2_1499;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 651 */
																						goto BgL_tagzd23820zd2_1500;
																					}
																			}
																	}
															}
														else
															{	/* Rgc/rgcrules.scm 651 */
																obj_t BgL_carzd23888zd2_1533;

																BgL_carzd23888zd2_1533 = CAR(BgL_valuez00_1490);
																if (STRINGP(BgL_carzd23888zd2_1533))
																	{	/* Rgc/rgcrules.scm 651 */
																		if (NULLP(CDR(BgL_valuez00_1490)))
																			{	/* Rgc/rgcrules.scm 651 */
																				obj_t BgL_strz00_2905;

																				BgL_strz00_2905 =
																					BgL_carzd23888zd2_1533;
																				{
																					obj_t BgL_charsz00_4367;

																					obj_t BgL_valuesz00_4365;

																					BgL_valuesz00_4365 =
																						CDR(BgL_valuesz00_1484);
																					BgL_charsz00_4367 =
																						bgl_append2
																						(BGl_stringzd2rangezd2zz__rgc_rulesz00
																						(BgL_errz00_62, BgL_strz00_2905),
																						BgL_charsz00_1485);
																					BgL_charsz00_1485 = BgL_charsz00_4367;
																					BgL_valuesz00_1484 =
																						BgL_valuesz00_4365;
																					goto
																						BgL_zc3anonymousza32401ze3z83_1486;
																				}
																			}
																		else
																			{	/* Rgc/rgcrules.scm 651 */
																				if (
																					(BgL_carzd23888zd2_1533 ==
																						BGl_symbol2856z00zz__rgc_rulesz00))
																					{
																						obj_t BgL_orzd2charszd2_4372;

																						BgL_orzd2charszd2_4372 =
																							CDR(BgL_valuez00_1490);
																						BgL_orzd2charszd2_1498 =
																							BgL_orzd2charszd2_4372;
																						goto BgL_tagzd23819zd2_1499;
																					}
																				else
																					{	/* Rgc/rgcrules.scm 651 */
																						goto BgL_tagzd23820zd2_1500;
																					}
																			}
																	}
																else
																	{	/* Rgc/rgcrules.scm 651 */
																		if (
																			(BgL_carzd23888zd2_1533 ==
																				BGl_symbol2856z00zz__rgc_rulesz00))
																			{
																				obj_t BgL_orzd2charszd2_4376;

																				BgL_orzd2charszd2_4376 =
																					CDR(BgL_valuez00_1490);
																				BgL_orzd2charszd2_1498 =
																					BgL_orzd2charszd2_4376;
																				goto BgL_tagzd23819zd2_1499;
																			}
																		else
																			{	/* Rgc/rgcrules.scm 651 */
																				goto BgL_tagzd23820zd2_1500;
																			}
																	}
															}
													}
												else
													{	/* Rgc/rgcrules.scm 651 */
														goto BgL_tagzd23820zd2_1500;
													}
											}
									}
							}
						}
				}
		}
	}



/* string-range */
	obj_t BGl_stringzd2rangezd2zz__rgc_rulesz00(obj_t BgL_errz00_3348,
		obj_t BgL_stringz00_1629)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 643 */
			{	/* Rgc/rgcrules.scm 633 */
				long BgL_lenz00_1631;

				BgL_lenz00_1631 = STRING_LENGTH(BgL_stringz00_1629);
				{	/* Rgc/rgcrules.scm 634 */
					bool_t BgL_testz00_4379;

					{	/* Rgc/rgcrules.scm 634 */
						long BgL_arg2516z00_1646;

						BgL_arg2516z00_1646 = (BgL_lenz00_1631 % ((long) 2));
						BgL_testz00_4379 =
							BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2516z00_1646),
							BINT(((long) 0)));
					}
					if (BgL_testz00_4379)
						{	/* Rgc/rgcrules.scm 634 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2944z00zz__rgc_rulesz00, BgL_errz00_3348);
						}
					else
						{
							long BgL_iz00_1635;

							obj_t BgL_resz00_1636;

							BgL_iz00_1635 = ((long) 0);
							BgL_resz00_1636 = BNIL;
						BgL_zc3anonymousza32508ze3z83_1637:
							if ((BgL_iz00_1635 == BgL_lenz00_1631))
								{	/* Rgc/rgcrules.scm 638 */
									return BgL_resz00_1636;
								}
							else
								{	/* Rgc/rgcrules.scm 640 */
									long BgL_arg2510z00_1639;

									obj_t BgL_arg2511z00_1640;

									BgL_arg2510z00_1639 = (BgL_iz00_1635 + ((long) 2));
									{	/* Rgc/rgcrules.scm 641 */
										obj_t BgL_arg2512z00_1641;

										{	/* Rgc/rgcrules.scm 641 */
											unsigned char BgL_arg2513z00_1642;

											unsigned char BgL_arg2514z00_1643;

											BgL_arg2513z00_1642 =
												STRING_REF(BgL_stringz00_1629, BgL_iz00_1635);
											BgL_arg2514z00_1643 =
												STRING_REF(BgL_stringz00_1629,
												(BgL_iz00_1635 + ((long) 1)));
											BgL_arg2512z00_1641 =
												BGl_charzd2rangezd2zz__rgc_rulesz00(BgL_errz00_3348,
												BCHAR(BgL_arg2513z00_1642), BCHAR(BgL_arg2514z00_1643));
										}
										BgL_arg2511z00_1640 =
											bgl_append2(BgL_arg2512z00_1641, BgL_resz00_1636);
									}
									{
										obj_t BgL_resz00_4396;

										long BgL_iz00_4395;

										BgL_iz00_4395 = BgL_arg2510z00_1639;
										BgL_resz00_4396 = BgL_arg2511z00_1640;
										BgL_resz00_1636 = BgL_resz00_4396;
										BgL_iz00_1635 = BgL_iz00_4395;
										goto BgL_zc3anonymousza32508ze3z83_1637;
									}
								}
						}
				}
			}
		}
	}



/* rgc-char? */
	bool_t BGl_rgczd2charzf3z21zz__rgc_rulesz00(obj_t BgL_xz00_1606)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 619 */
			{	/* Rgc/rgcrules.scm 616 */
				bool_t BgL__ortest_1831z00_1608;

				BgL__ortest_1831z00_1608 = CHARP(BgL_xz00_1606);
				if (BgL__ortest_1831z00_1608)
					{	/* Rgc/rgcrules.scm 616 */
						return BgL__ortest_1831z00_1608;
					}
				else
					{	/* Rgc/rgcrules.scm 616 */
						if (INTEGERP(BgL_xz00_1606))
							{	/* Rgc/rgcrules.scm 617 */
								if (((long) CINT(BgL_xz00_1606) >= ((long) 0)))
									{	/* Rgc/rgcrules.scm 619 */
										obj_t BgL_arg2497z00_1611;

										BgL_arg2497z00_1611 =
											BGl_rgczd2maxzd2charz00zz__rgc_configz00();
										return
											(
											(long) CINT(BgL_xz00_1606) <
											(long) CINT(BgL_arg2497z00_1611));
									}
								else
									{	/* Rgc/rgcrules.scm 618 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Rgc/rgcrules.scm 617 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* char-range */
	obj_t BGl_charzd2rangezd2zz__rgc_rulesz00(obj_t BgL_errz00_3349,
		obj_t BgL_minz00_1612, obj_t BgL_maxz00_1613)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 631 */
			{	/* Rgc/rgcrules.scm 621 */
				obj_t BgL_minz00_1615;

				obj_t BgL_maxz00_1616;

				if (CHARP(BgL_minz00_1612))
					{	/* Rgc/rgcrules.scm 621 */
						BgL_minz00_1615 = BINT((CCHAR(BgL_minz00_1612)));
					}
				else
					{	/* Rgc/rgcrules.scm 621 */
						BgL_minz00_1615 = BgL_minz00_1612;
					}
				if (CHARP(BgL_maxz00_1613))
					{	/* Rgc/rgcrules.scm 622 */
						BgL_maxz00_1616 = BINT((CCHAR(BgL_maxz00_1613)));
					}
				else
					{	/* Rgc/rgcrules.scm 622 */
						BgL_maxz00_1616 = BgL_maxz00_1613;
					}
				if (((long) CINT(BgL_maxz00_1616) >= (long) CINT(BgL_minz00_1615)))
					{
						obj_t BgL_maxz00_3019;

						obj_t BgL_resz00_3020;

						BgL_maxz00_3019 = BgL_maxz00_1616;
						BgL_resz00_3020 = BNIL;
					BgL_loopz00_3018:
						if (((long) CINT(BgL_maxz00_3019) == (long) CINT(BgL_minz00_1615)))
							{	/* Rgc/rgcrules.scm 625 */
								return MAKE_PAIR(BgL_minz00_1615, BgL_resz00_3020);
							}
						else
							{	/* Rgc/rgcrules.scm 625 */
								long BgL_arg2502z00_3025;

								obj_t BgL_arg2503z00_3026;

								BgL_arg2502z00_3025 =
									((long) CINT(BgL_maxz00_3019) - ((long) 1));
								BgL_arg2503z00_3026 =
									MAKE_PAIR(BgL_maxz00_3019, BgL_resz00_3020);
								{
									obj_t BgL_resz00_4432;

									obj_t BgL_maxz00_4430;

									BgL_maxz00_4430 = BINT(BgL_arg2502z00_3025);
									BgL_resz00_4432 = BgL_arg2503z00_3026;
									BgL_resz00_3020 = BgL_resz00_4432;
									BgL_maxz00_3019 = BgL_maxz00_4430;
									goto BgL_loopz00_3018;
								}
							}
					}
				else
					{	/* Rgc/rgcrules.scm 624 */
						return
							BGl_errorz00zz__errorz00(BFALSE,
							BGl_string2945z00zz__rgc_rulesz00, BgL_errz00_3349);
					}
			}
		}
	}



/* expand-out */
	obj_t BGl_expandzd2outzd2zz__rgc_rulesz00(long BgL_matchz00_63,
		obj_t BgL_envz00_64, obj_t BgL_valuesz00_65, obj_t BgL_errz00_66)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 693 */
			{	/* Rgc/rgcrules.scm 694 */
				obj_t BgL_inz00_3060;

				BgL_inz00_3060 =
					BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_63, BgL_envz00_64,
					BgL_valuesz00_65, BgL_errz00_66);
				{	/* Rgc/rgcrules.scm 694 */
					obj_t BgL_bcz00_3061;

					{	/* Rgc/rgcrules.scm 694 */
						obj_t BgL_arg2522z00_3062;

						obj_t BgL_arg2523z00_3063;

						BgL_arg2522z00_3062 = CDR(BgL_inz00_3060);
						BgL_arg2523z00_3063 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
						BgL_bcz00_3061 =
							BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg2522z00_3062,
							(long) CINT(BgL_arg2523z00_3063));
					}
					{	/* Rgc/rgcrules.scm 694 */

						BGl_rgcsetzd2notz12zc0zz__rgc_setz00(BgL_bcz00_3061);
						return
							MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bcz00_3061), BNIL));
					}
				}
			}
		}
	}



/* expand-and */
	obj_t BGl_expandzd2andzd2zz__rgc_rulesz00(long BgL_matchz00_67,
		obj_t BgL_envz00_68, obj_t BgL_val1z00_69, obj_t BgL_val2z00_70,
		obj_t BgL_errz00_71)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 704 */
			{	/* Rgc/rgcrules.scm 705 */
				obj_t BgL_in1z00_3069;

				{	/* Rgc/rgcrules.scm 705 */
					obj_t BgL_arg2534z00_3070;

					{	/* Rgc/rgcrules.scm 705 */
						obj_t BgL_list2535z00_3071;

						BgL_list2535z00_3071 = MAKE_PAIR(BgL_val1z00_69, BNIL);
						BgL_arg2534z00_3070 = BgL_list2535z00_3071;
					}
					BgL_in1z00_3069 =
						BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_67, BgL_envz00_68,
						BgL_arg2534z00_3070, BgL_errz00_71);
				}
				{	/* Rgc/rgcrules.scm 705 */
					obj_t BgL_in2z00_3072;

					{	/* Rgc/rgcrules.scm 705 */
						obj_t BgL_arg2532z00_3073;

						{	/* Rgc/rgcrules.scm 705 */
							obj_t BgL_list2533z00_3074;

							BgL_list2533z00_3074 = MAKE_PAIR(BgL_val2z00_70, BNIL);
							BgL_arg2532z00_3073 = BgL_list2533z00_3074;
						}
						BgL_in2z00_3072 =
							BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_67, BgL_envz00_68,
							BgL_arg2532z00_3073, BgL_errz00_71);
					}
					{	/* Rgc/rgcrules.scm 705 */
						obj_t BgL_bc1z00_3075;

						{	/* Rgc/rgcrules.scm 705 */
							obj_t BgL_arg2530z00_3076;

							obj_t BgL_arg2531z00_3077;

							BgL_arg2530z00_3076 = CDR(BgL_in1z00_3069);
							BgL_arg2531z00_3077 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
							BgL_bc1z00_3075 =
								BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg2530z00_3076,
								(long) CINT(BgL_arg2531z00_3077));
						}
						{	/* Rgc/rgcrules.scm 705 */
							obj_t BgL_bc2z00_3078;

							{	/* Rgc/rgcrules.scm 705 */
								obj_t BgL_arg2528z00_3079;

								obj_t BgL_arg2529z00_3080;

								BgL_arg2528z00_3079 = CDR(BgL_in2z00_3072);
								BgL_arg2529z00_3080 =
									BGl_rgczd2maxzd2charz00zz__rgc_configz00();
								BgL_bc2z00_3078 =
									BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg2528z00_3079,
									(long) CINT(BgL_arg2529z00_3080));
							}
							{	/* Rgc/rgcrules.scm 705 */

								BGl_rgcsetzd2andz12zc0zz__rgc_setz00(BgL_bc1z00_3075,
									BgL_bc2z00_3078);
								return MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bc1z00_3075),
										BNIL));
							}
						}
					}
				}
			}
		}
	}



/* expand-but */
	obj_t BGl_expandzd2butzd2zz__rgc_rulesz00(long BgL_matchz00_72,
		obj_t BgL_envz00_73, obj_t BgL_val1z00_74, obj_t BgL_val2z00_75,
		obj_t BgL_errz00_76)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 717 */
			{	/* Rgc/rgcrules.scm 718 */
				obj_t BgL_in1z00_3091;

				{	/* Rgc/rgcrules.scm 718 */
					obj_t BgL_arg2547z00_3092;

					{	/* Rgc/rgcrules.scm 718 */
						obj_t BgL_list2548z00_3093;

						BgL_list2548z00_3093 = MAKE_PAIR(BgL_val1z00_74, BNIL);
						BgL_arg2547z00_3092 = BgL_list2548z00_3093;
					}
					BgL_in1z00_3091 =
						BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_72, BgL_envz00_73,
						BgL_arg2547z00_3092, BgL_errz00_76);
				}
				{	/* Rgc/rgcrules.scm 718 */
					obj_t BgL_in2z00_3094;

					{	/* Rgc/rgcrules.scm 718 */
						obj_t BgL_arg2545z00_3095;

						{	/* Rgc/rgcrules.scm 718 */
							obj_t BgL_list2546z00_3096;

							BgL_list2546z00_3096 = MAKE_PAIR(BgL_val2z00_75, BNIL);
							BgL_arg2545z00_3095 = BgL_list2546z00_3096;
						}
						BgL_in2z00_3094 =
							BGl_expandzd2inzd2zz__rgc_rulesz00(BgL_matchz00_72, BgL_envz00_73,
							BgL_arg2545z00_3095, BgL_errz00_76);
					}
					{	/* Rgc/rgcrules.scm 718 */
						obj_t BgL_bc1z00_3097;

						{	/* Rgc/rgcrules.scm 718 */
							obj_t BgL_arg2543z00_3098;

							obj_t BgL_arg2544z00_3099;

							BgL_arg2543z00_3098 = CDR(BgL_in1z00_3091);
							BgL_arg2544z00_3099 = BGl_rgczd2maxzd2charz00zz__rgc_configz00();
							BgL_bc1z00_3097 =
								BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg2543z00_3098,
								(long) CINT(BgL_arg2544z00_3099));
						}
						{	/* Rgc/rgcrules.scm 718 */
							obj_t BgL_bc2z00_3100;

							{	/* Rgc/rgcrules.scm 718 */
								obj_t BgL_arg2541z00_3101;

								obj_t BgL_arg2542z00_3102;

								BgL_arg2541z00_3101 = CDR(BgL_in2z00_3094);
								BgL_arg2542z00_3102 =
									BGl_rgczd2maxzd2charz00zz__rgc_configz00();
								BgL_bc2z00_3100 =
									BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_arg2541z00_3101,
									(long) CINT(BgL_arg2542z00_3102));
							}
							{	/* Rgc/rgcrules.scm 718 */

								BGl_rgcsetzd2butz12zc0zz__rgc_setz00(BgL_bc1z00_3097,
									BgL_bc2z00_3100);
								return MAKE_PAIR(BGl_symbol2856z00zz__rgc_rulesz00,
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_bc1z00_3097),
										BNIL));
							}
						}
					}
				}
			}
		}
	}



/* expand-submatch */
	obj_t BGl_expandzd2submatchzd2zz__rgc_rulesz00(long BgL_matchz00_77,
		obj_t BgL_envz00_78, obj_t BgL_rulez00_79, obj_t BgL_errz00_80)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 733 */
			if (BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00)
				{	/* Rgc/rgcrules.scm 734 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2946z00zz__rgc_rulesz00,
						BgL_errz00_80);
				}
			else
				{	/* Rgc/rgcrules.scm 736 */
					long BgL_submatchz00_3113;

					BgL_submatchz00_3113 = BGl_getzd2newzd2submatchz00zz__rgc_rulesz00();
					BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 = ((bool_t) 1);
					{	/* Rgc/rgcrules.scm 736 */
						obj_t BgL_resz00_3114;

						{	/* Rgc/rgcrules.scm 736 */
							obj_t BgL_arg2549z00_3115;

							obj_t BgL_arg2550z00_3116;

							BgL_arg2549z00_3115 = BGl_symbol2927z00zz__rgc_rulesz00;
							{	/* Rgc/rgcrules.scm 736 */
								obj_t BgL_arg2551z00_3117;

								BgL_arg2551z00_3117 =
									BGl_expandzd2rulezd2zz__rgc_rulesz00(BgL_matchz00_77,
									BgL_envz00_78, BgL_rulez00_79);
								{	/* Rgc/rgcrules.scm 736 */
									obj_t BgL_list2553z00_3119;

									{	/* Rgc/rgcrules.scm 736 */
										obj_t BgL_arg2554z00_3120;

										{	/* Rgc/rgcrules.scm 736 */
											obj_t BgL_arg2555z00_3121;

											BgL_arg2555z00_3121 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2554z00_3120 =
												MAKE_PAIR(BgL_arg2551z00_3117, BgL_arg2555z00_3121);
										}
										BgL_list2553z00_3119 =
											MAKE_PAIR(BINT(BgL_submatchz00_3113),
											BgL_arg2554z00_3120);
									}
									BgL_arg2550z00_3116 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
										(BgL_matchz00_77), BgL_list2553z00_3119);
							}}
							BgL_resz00_3114 =
								MAKE_PAIR(BgL_arg2549z00_3115, BgL_arg2550z00_3116);
						}
						BGl_za2lockzd2submatchza2zd2zz__rgc_rulesz00 = ((bool_t) 0);
						return BgL_resz00_3114;
					}
				}
		}
	}



/* expand-sequence */
	obj_t BGl_expandzd2sequencezd2zz__rgc_rulesz00(long BgL_matchz00_85,
		obj_t BgL_envz00_86, obj_t BgL_rulesz00_87)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 756 */
			{	/* Rgc/rgcrules.scm 757 */
				obj_t BgL_arg2560z00_1704;

				{	/* Rgc/rgcrules.scm 757 */
					obj_t BgL_head1898z00_1707;

					BgL_head1898z00_1707 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l1896z00_1709;

						obj_t BgL_tail1899z00_1710;

						BgL_l1896z00_1709 = BgL_rulesz00_87;
						BgL_tail1899z00_1710 = BgL_head1898z00_1707;
					BgL_zc3anonymousza32562ze3z83_1711:
						if (NULLP(BgL_l1896z00_1709))
							{	/* Rgc/rgcrules.scm 757 */
								BgL_arg2560z00_1704 = CDR(BgL_head1898z00_1707);
							}
						else
							{	/* Rgc/rgcrules.scm 757 */
								obj_t BgL_newtail1900z00_1713;

								BgL_newtail1900z00_1713 =
									MAKE_PAIR(BGl_expandzd2rulezd2zz__rgc_rulesz00
									(BgL_matchz00_85, BgL_envz00_86, CAR(BgL_l1896z00_1709)),
									BNIL);
								SET_CDR(BgL_tail1899z00_1710, BgL_newtail1900z00_1713);
								{
									obj_t BgL_tail1899z00_4496;

									obj_t BgL_l1896z00_4494;

									BgL_l1896z00_4494 = CDR(BgL_l1896z00_1709);
									BgL_tail1899z00_4496 = BgL_newtail1900z00_1713;
									BgL_tail1899z00_1710 = BgL_tail1899z00_4496;
									BgL_l1896z00_1709 = BgL_l1896z00_4494;
									goto BgL_zc3anonymousza32562ze3z83_1711;
								}
							}
					}
				}
				return BGl_makezd2sequencezd2zz__rgc_rulesz00(BgL_arg2560z00_1704);
			}
		}
	}



/* make-sequence */
	obj_t BGl_makezd2sequencezd2zz__rgc_rulesz00(obj_t BgL_rulesz00_88)
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 771 */
			{
				obj_t BgL_rulesz00_1721;

				obj_t BgL_resz00_1722;

				BgL_rulesz00_1721 = BgL_rulesz00_88;
				BgL_resz00_1722 = BNIL;
			BgL_zc3anonymousza32567ze3z83_1723:
				{

					if (NULLP(BgL_rulesz00_1721))
						{	/* Rgc/rgcrules.scm 772 */
							return
								MAKE_PAIR(BGl_symbol2939z00zz__rgc_rulesz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
									(BgL_resz00_1722), BNIL));
						}
					else
						{	/* Rgc/rgcrules.scm 772 */
							if (PAIRP(BgL_rulesz00_1721))
								{	/* Rgc/rgcrules.scm 772 */
									obj_t BgL_carzd23917zd2_1732;

									BgL_carzd23917zd2_1732 = CAR(BgL_rulesz00_1721);
									if (PAIRP(BgL_carzd23917zd2_1732))
										{	/* Rgc/rgcrules.scm 772 */
											if (
												(CAR(BgL_carzd23917zd2_1732) ==
													BGl_symbol2939z00zz__rgc_rulesz00))
												{	/* Rgc/rgcrules.scm 772 */
													obj_t BgL_arg2572z00_1735;

													obj_t BgL_arg2573z00_1736;

													BgL_arg2572z00_1735 = CDR(BgL_carzd23917zd2_1732);
													BgL_arg2573z00_1736 = CDR(BgL_rulesz00_1721);
													{
														obj_t BgL_resz00_4514;

														obj_t BgL_rulesz00_4513;

														BgL_rulesz00_4513 = BgL_arg2573z00_1736;
														BgL_resz00_4514 =
															bgl_append2(bgl_reverse(BgL_arg2572z00_1735),
															BgL_resz00_1722);
														BgL_resz00_1722 = BgL_resz00_4514;
														BgL_rulesz00_1721 = BgL_rulesz00_4513;
														goto BgL_zc3anonymousza32567ze3z83_1723;
													}
												}
											else
												{	/* Rgc/rgcrules.scm 772 */
												BgL_tagzd23909zd2_1728:
													{	/* Rgc/rgcrules.scm 780 */
														obj_t BgL_arg2582z00_1745;

														obj_t BgL_arg2583z00_1746;

														BgL_arg2582z00_1745 = CDR(BgL_rulesz00_1721);
														BgL_arg2583z00_1746 =
															MAKE_PAIR(CAR(BgL_rulesz00_1721),
															BgL_resz00_1722);
														{
															obj_t BgL_resz00_4521;

															obj_t BgL_rulesz00_4520;

															BgL_rulesz00_4520 = BgL_arg2582z00_1745;
															BgL_resz00_4521 = BgL_arg2583z00_1746;
															BgL_resz00_1722 = BgL_resz00_4521;
															BgL_rulesz00_1721 = BgL_rulesz00_4520;
															goto BgL_zc3anonymousza32567ze3z83_1723;
														}
													}
												}
										}
									else
										{	/* Rgc/rgcrules.scm 772 */
											goto BgL_tagzd23909zd2_1728;
										}
								}
							else
								{	/* Rgc/rgcrules.scm 772 */
									goto BgL_tagzd23909zd2_1728;
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 24 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 24 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_rulesz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcrules.scm 24 */
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 36213488),
				BSTRING_TO_STRING(BGl_string2947z00zz__rgc_rulesz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 492883814),
				BSTRING_TO_STRING(BGl_string2947z00zz__rgc_rulesz00));
			BGl_modulezd2initializa7ationz75zz__rgc_posixz00(((long) 250786883),
				BSTRING_TO_STRING(BGl_string2947z00zz__rgc_rulesz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2947z00zz__rgc_rulesz00));
		}
	}

#ifdef __cplusplus
}
#endif
