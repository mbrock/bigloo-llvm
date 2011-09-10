/*===========================================================================*/
/*   (Eval/evmeaning.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/evmeaning.scm -indent -o objs/obj_u/Eval/evmeaning.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol2960z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_symbol2962z00zz__evmeaningz00 = BUNSPEC;
	extern obj_t eval_funcall_0(obj_t);
	static obj_t BGl__loop_z00zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t eval_funcall_1(obj_t, obj_t);
	extern obj_t eval_funcall_2(obj_t, obj_t, obj_t);
	extern obj_t eval_funcall_3(obj_t, obj_t, obj_t, obj_t);
	extern obj_t eval_funcall_4(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evmeaningz00 = BUNSPEC;
	extern obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00(obj_t);
	static obj_t BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t eval_apply(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__evmeaningz00();
	static obj_t BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(obj_t, obj_t, int,
		int);
	static obj_t BGl_evmeaningzd2bouncezd263z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32247ze3z83zz__evmeaningz00(obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	extern obj_t BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_zc3exitza32394ze3z83zz__evmeaningz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32269ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evmeaningz00();
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	extern obj_t BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32278ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evmeaningz00();
	static obj_t BGl__loop_z72z72zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
	static obj_t BGl_zc3anonymousza32285ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32301ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32293ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_evmodulezd2uninitializa7edz75zz__evmodulez00;
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32306ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	static obj_t BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evmeaningz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza32311ze3z83zz__evmeaningz00(obj_t, obj_t);
	extern bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32315ze3z83zz__evmeaningz00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl___dummy__z00zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32319ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32326ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32333ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32620ze3z83zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_evmeaningzd2unboundzd2zz__evmeaningz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32622ze3z83zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32339ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32205ze3z83zz__evmeaningz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t);
	static obj_t BGl_zc3anonymousza32345ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__evmeaningzd2locationzd2zz__evmeaningz00(obj_t);
	static obj_t BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32629ze3z83zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32631ze3z83zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32200ze3z83zz__evmeaningz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32350ze3z83zz__evmeaningz00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_zc3exitza32193ze3z83zz__evmeaningz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__evmeaningz00zz__evmeaningz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32355ze3z83zz__evmeaningz00(obj_t, obj_t);
	extern obj_t BGl_evmeaningzd2errorzd2zz__everrorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_zc3anonymousza32359ze3z83zz__evmeaningz00(obj_t, obj_t);
	extern obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t, obj_t);
	extern obj_t BGl_evmeaningzd2typezd2errorz00zz__everrorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmeaningzd2locationzd2zz__evmeaningz00();
	static obj_t BGl_zc3anonymousza32363ze3z83zz__evmeaningz00(obj_t);
	static obj_t BGl_zc3anonymousza32366ze3z83zz__evmeaningz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evmeaningz00();
	static obj_t BGl_symbol2940z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_symbol2945z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_escape1871z00zz__evmeaningz00(obj_t, obj_t);
	static obj_t BGl_symbol2949z00zz__evmeaningz00 = BUNSPEC;
	static obj_t BGl_symbol2951z00zz__evmeaningz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2941z00zz__evmeaningz00,
		BgL_bgl_string2941za700za7za7_2968za7, "eval", 4);
	      DEFINE_STRING(BGl_string2942z00zz__evmeaningz00,
		BgL_bgl_string2942za700za7za7_2969za7,
		"Unbound variable (from module `~a')", 35);
	      DEFINE_STRING(BGl_string2943z00zz__evmeaningz00,
		BgL_bgl_string2943za700za7za7_2970za7, "Unbound variable (from top-level)",
		33);
	      DEFINE_STRING(BGl_string2944z00zz__evmeaningz00,
		BgL_bgl_string2944za700za7za7_2971za7, "unknown byte-code", 17);
	      DEFINE_STRING(BGl_string2946z00zz__evmeaningz00,
		BgL_bgl_string2946za700za7za7_2972za7, "evprocedure", 11);
	      DEFINE_STRING(BGl_string2947z00zz__evmeaningz00,
		BgL_bgl_string2947za700za7za7_2973za7, "apply", 5);
	      DEFINE_STRING(BGl_string2948z00zz__evmeaningz00,
		BgL_bgl_string2948za700za7za7_2974za7, "Not a procedure", 15);
	      DEFINE_STRING(BGl_string2950z00zz__evmeaningz00,
		BgL_bgl_string2950za700za7za7_2975za7, "number", 6);
	      DEFINE_STRING(BGl_string2952z00zz__evmeaningz00,
		BgL_bgl_string2952za700za7za7_2976za7, "pair", 4);
	      DEFINE_STRING(BGl_string2953z00zz__evmeaningz00,
		BgL_bgl_string2953za700za7za7_2977za7,
		"/tmp/bigloo/runtime/Eval/evmeaning.scm", 38);
	      DEFINE_STRING(BGl_string2954z00zz__evmeaningz00,
		BgL_bgl_string2954za700za7za7_2978za7, "_evmeaning", 10);
	      DEFINE_STRING(BGl_string2955z00zz__evmeaningz00,
		BgL_bgl_string2955za700za7za7_2979za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2956z00zz__evmeaningz00,
		BgL_bgl_string2956za700za7za7_2980za7, "dynamic-env", 11);
	      DEFINE_STRING(BGl_string2957z00zz__evmeaningz00,
		BgL_bgl_string2957za700za7za7_2981za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string2958z00zz__evmeaningz00,
		BgL_bgl_string2958za700za7za7_2982za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2959z00zz__evmeaningz00,
		BgL_bgl_string2959za700za7za7_2983za7, "redefinition of variable -- ", 28);
	      DEFINE_STRING(BGl_string2961z00zz__evmeaningz00,
		BgL_bgl_string2961za700za7za7_2984za7, "at", 2);
	      DEFINE_STRING(BGl_string2963z00zz__evmeaningz00,
		BgL_bgl_string2963za700za7za7_2985za7, "set!", 4);
	      DEFINE_STRING(BGl_string2964z00zz__evmeaningz00,
		BgL_bgl_string2964za700za7za7_2986za7, " can yield to incoherent state",
		30);
	      DEFINE_STRING(BGl_string2965z00zz__evmeaningz00,
		BgL_bgl_string2965za700za7za7_2987za7,
		"Setting compiled read-only variable ", 36);
	      DEFINE_STRING(BGl_string2966z00zz__evmeaningz00,
		BgL_bgl_string2966za700za7za7_2988za7, "__evmeaning", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmeaningzd2envzd2zz__evmeaningz00,
		BgL_bgl__evmeaningza700za7za7_2989za7, BGl__evmeaningz00zz__evmeaningz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmeaningzd2locationzd2envz00zz__evmeaningz00,
		BgL_bgl__evmeaningza7d2loc2990za7,
		BGl__evmeaningzd2locationzd2zz__evmeaningz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long
		BgL_checksumz00_4611, char *BgL_fromz00_4612)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evmeaningz00))
				{
					BGl_requirezd2initializa7ationz75zz__evmeaningz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evmeaningz00();
					BGl_importedzd2moduleszd2initz00zz__evmeaningz00();
					BGl_toplevelzd2initzd2zz__evmeaningz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 14 */
			BGl_symbol2940z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2941z00zz__evmeaningz00);
			BGl_symbol2945z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2946z00zz__evmeaningz00);
			BGl_symbol2949z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2950z00zz__evmeaningz00);
			BGl_symbol2951z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2952z00zz__evmeaningz00);
			BGl_symbol2960z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2961z00zz__evmeaningz00);
			return (BGl_symbol2962z00zz__evmeaningz00 =
				bstring_to_symbol(BGl_string2963z00zz__evmeaningz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 14 */
			return BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
		}
	}



/* evmeaning-unbound */
	obj_t BGl_evmeaningzd2unboundzd2zz__evmeaningz00(obj_t BgL_codez00_1,
		obj_t BgL_namez00_2, obj_t BgL_modz00_3)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 174 */
			{	/* Eval/evmeaning.scm 176 */
				obj_t BgL_arg1975z00_1007;

				obj_t BgL_arg1976z00_1008;

				BgL_arg1975z00_1007 = BGl_symbol2940z00zz__evmeaningz00;
				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_modz00_3))
					{	/* Eval/evmeaning.scm 178 */
						obj_t BgL_arg1980z00_1011;

						BgL_arg1980z00_1011 =
							BGl_evmodulezd2namezd2zz__evmodulez00(BgL_modz00_3);
						{	/* Eval/evmeaning.scm 178 */
							obj_t BgL_list1981z00_1012;

							BgL_list1981z00_1012 = MAKE_PAIR(BgL_arg1980z00_1011, BNIL);
							BgL_arg1976z00_1008 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2942z00zz__evmeaningz00, BgL_list1981z00_1012);
						}
					}
				else
					{	/* Eval/evmeaning.scm 177 */
						BgL_arg1976z00_1008 = BGl_string2943z00zz__evmeaningz00;
					}
				return
					BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_1,
					BgL_arg1975z00_1007, BgL_arg1976z00_1008, BgL_namez00_2);
			}
		}
	}



/* evmeaning */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t BgL_codez00_4,
		obj_t BgL_stackz00_5, obj_t BgL_denvz00_6)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 186 */
		BGl_evmeaningz00zz__evmeaningz00:
			if (VECTORP(BgL_codez00_4))
				{

					{	/* Eval/evmeaning.scm 189 */
						obj_t BgL_aux1863z00_1017;

						BgL_aux1863z00_1017 = VECTOR_REF(BgL_codez00_4, (int) (((long) 0)));
						if (INTEGERP(BgL_aux1863z00_1017))
							{	/* Eval/evmeaning.scm 189 */
								switch ((long) CINT(BgL_aux1863z00_1017))
									{
									case ((long) -2):

										{	/* Eval/evmeaning.scm 192 */
											obj_t BgL_runner1990z00_1025;

											{	/* Eval/evmeaning.scm 192 */
												obj_t BgL_arg1984z00_1019;

												BgL_arg1984z00_1019 =
													VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
												{	/* Eval/evmeaning.scm 192 */
													obj_t BgL_list1985z00_1020;

													BgL_list1985z00_1020 =
														MAKE_PAIR(BgL_arg1984z00_1019, BNIL);
													BgL_runner1990z00_1025 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_codez00_4, BgL_list1985z00_1020);
											}}
											{	/* Eval/evmeaning.scm 192 */
												obj_t BgL_aux1986z00_1021;

												BgL_aux1986z00_1021 = CAR(BgL_runner1990z00_1025);
												BgL_runner1990z00_1025 = CDR(BgL_runner1990z00_1025);
												{	/* Eval/evmeaning.scm 192 */
													obj_t BgL_aux1987z00_1022;

													BgL_aux1987z00_1022 = CAR(BgL_runner1990z00_1025);
													BgL_runner1990z00_1025 = CDR(BgL_runner1990z00_1025);
													{	/* Eval/evmeaning.scm 192 */
														obj_t BgL_aux1988z00_1023;

														BgL_aux1988z00_1023 = CAR(BgL_runner1990z00_1025);
														BgL_runner1990z00_1025 =
															CDR(BgL_runner1990z00_1025);
														return
															BGl_evmeaningzd2errorzd2zz__everrorz00
															(BgL_aux1986z00_1021, BgL_aux1987z00_1022,
															BgL_aux1988z00_1023, CAR(BgL_runner1990z00_1025));
													}
												}
											}
										}
										break;
									case ((long) -1):

										return VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
										break;
									case ((long) 0):

										return CAR(BgL_stackz00_5);
										break;
									case ((long) 1):

										{	/* Eval/evmeaning.scm 201 */
											obj_t BgL_pairz00_2538;

											BgL_pairz00_2538 = BgL_stackz00_5;
											return CAR(CDR(BgL_pairz00_2538));
										}
										break;
									case ((long) 2):

										{	/* Eval/evmeaning.scm 204 */
											obj_t BgL_pairz00_2542;

											BgL_pairz00_2542 = BgL_stackz00_5;
											return CAR(CDR(CDR(BgL_pairz00_2542)));
										}
										break;
									case ((long) 3):

										{	/* Eval/evmeaning.scm 207 */
											obj_t BgL_pairz00_2548;

											BgL_pairz00_2548 = BgL_stackz00_5;
											return CAR(CDR(CDR(CDR(BgL_pairz00_2548))));
										}
										break;
									case ((long) 4):

										{	/* Eval/evmeaning.scm 210 */
											obj_t BgL_offsetz00_1026;

											BgL_offsetz00_1026 =
												VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
											{
												long BgL_iz00_1030;

												obj_t BgL_envz00_1031;

												BgL_iz00_1030 = ((long) 4);
												{	/* Eval/evmeaning.scm 212 */
													obj_t BgL_pairz00_2558;

													BgL_pairz00_2558 = BgL_stackz00_5;
													BgL_envz00_1031 =
														CDR(CDR(CDR(CDR(BgL_pairz00_2558))));
												}
											BgL_zc3anonymousza31993ze3z83_1032:
												if ((BgL_iz00_1030 == (long) CINT(BgL_offsetz00_1026)))
													{	/* Eval/evmeaning.scm 211 */
														return CAR(BgL_envz00_1031);
													}
												else
													{
														obj_t BgL_envz00_4670;

														long BgL_iz00_4668;

														BgL_iz00_4668 = (BgL_iz00_1030 + ((long) 1));
														BgL_envz00_4670 = CDR(BgL_envz00_1031);
														BgL_envz00_1031 = BgL_envz00_4670;
														BgL_iz00_1030 = BgL_iz00_4668;
														goto BgL_zc3anonymousza31993ze3z83_1032;
													}
											}
										}
										break;
									case ((long) 5):

										{	/* Eval/evmeaning.scm 216 */
											obj_t BgL_auxz00_4676;

											BgL_auxz00_4676 =
												VECTOR_REF(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 2))), (int) (((long) 2)));
											return __EVMEANING_ADDRESS_REF(BgL_auxz00_4676);
										}
										break;
									case ((long) 6):

										return
											VECTOR_REF(VECTOR_REF(BgL_codez00_4,
												(int) (((long) 2))), (int) (((long) 2)));
										break;
									case ((long) 7):

										return
											BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 8):

										{	/* Eval/evmeaning.scm 236 */
											obj_t BgL_varz00_1040;

											obj_t BgL_valz00_1041;

											BgL_varz00_1040 =
												VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
											BgL_valz00_1041 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_4, BgL_varz00_1040, BgL_valz00_1041);
											return BUNSPEC;
										}
										break;
									case ((long) 9):

										return
											BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 10):

										{	/* Eval/evmeaning.scm 255 */
											obj_t BgL_auxz00_4694;

											BgL_auxz00_4694 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 2))), BgL_stackz00_5,
												BgL_denvz00_6);
											SET_CAR(BgL_stackz00_5, BgL_auxz00_4694);
										}
										return BUNSPEC;
										break;
									case ((long) 11):

										{	/* Eval/evmeaning.scm 259 */
											obj_t BgL_auxz00_4701;

											obj_t BgL_auxz00_4699;

											BgL_auxz00_4701 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 2))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_auxz00_4699 = CDR(BgL_stackz00_5);
											SET_CAR(BgL_auxz00_4699, BgL_auxz00_4701);
										}
										return BUNSPEC;
										break;
									case ((long) 12):

										{	/* Eval/evmeaning.scm 263 */
											obj_t BgL_arg2007z00_1048;

											obj_t BgL_arg2008z00_1049;

											{	/* Eval/evmeaning.scm 263 */
												obj_t BgL_pairz00_2598;

												BgL_pairz00_2598 = BgL_stackz00_5;
												BgL_arg2007z00_1048 = CDR(CDR(BgL_pairz00_2598));
											}
											BgL_arg2008z00_1049 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 2))), BgL_stackz00_5,
												BgL_denvz00_6);
											SET_CAR(BgL_arg2007z00_1048, BgL_arg2008z00_1049);
										}
										return BUNSPEC;
										break;
									case ((long) 13):

										{	/* Eval/evmeaning.scm 267 */
											obj_t BgL_arg2010z00_1051;

											obj_t BgL_arg2011z00_1052;

											{	/* Eval/evmeaning.scm 267 */
												obj_t BgL_pairz00_2607;

												BgL_pairz00_2607 = BgL_stackz00_5;
												BgL_arg2010z00_1051 = CDR(CDR(CDR(BgL_pairz00_2607)));
											}
											BgL_arg2011z00_1052 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 2))), BgL_stackz00_5,
												BgL_denvz00_6);
											SET_CAR(BgL_arg2010z00_1051, BgL_arg2011z00_1052);
										}
										return BUNSPEC;
										break;
									case ((long) 14):

										return
											BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 15):

										{	/* Eval/evmeaning.scm 279 */
											bool_t BgL_testz00_4720;

											{	/* Eval/evmeaning.scm 279 */
												obj_t BgL_arg2017z00_1057;

												BgL_arg2017z00_1057 =
													VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
												BgL_testz00_4720 =
													CBOOL(BGl_evmeaningz00zz__evmeaningz00
													(BgL_arg2017z00_1057, BgL_stackz00_5, BgL_denvz00_6));
											}
											if (BgL_testz00_4720)
												{
													obj_t BgL_codez00_4725;

													BgL_codez00_4725 =
														VECTOR_REF(BgL_codez00_4, (int) (((long) 3)));
													BgL_codez00_4 = BgL_codez00_4725;
													goto BGl_evmeaningz00zz__evmeaningz00;
												}
											else
												{
													obj_t BgL_codez00_4728;

													BgL_codez00_4728 =
														VECTOR_REF(BgL_codez00_4, (int) (((long) 4)));
													BgL_codez00_4 = BgL_codez00_4728;
													goto BGl_evmeaningz00zz__evmeaningz00;
												}
										}
										break;
									case ((long) 16):

										{	/* Eval/evmeaning.scm 284 */
											long BgL_lenz00_1058;

											{	/* Eval/evmeaning.scm 284 */
												long BgL_arg2027z00_1069;

												{	/* Eval/evmeaning.scm 284 */
													int BgL_arg2029z00_1071;

													BgL_arg2029z00_1071 = VECTOR_LENGTH(BgL_codez00_4);
													BgL_arg2027z00_1069 =
														((long) (BgL_arg2029z00_1071) - ((long) 2));
												}
												BgL_lenz00_1058 = (BgL_arg2027z00_1069 - ((long) 1));
											}
											{
												long BgL_iz00_1060;

												BgL_iz00_1060 = ((long) 0);
											BgL_zc3anonymousza32018ze3z83_1061:
												if ((BgL_iz00_1060 == BgL_lenz00_1058))
													{	/* Eval/evmeaning.scm 287 */
														obj_t BgL_arg2021z00_1063;

														{	/* Eval/evmeaning.scm 287 */
															long BgL_arg2022z00_1064;

															BgL_arg2022z00_1064 =
																(BgL_iz00_1060 + ((long) 2));
															BgL_arg2021z00_1063 =
																VECTOR_REF(BgL_codez00_4,
																(int) (BgL_arg2022z00_1064));
														}
														{
															obj_t BgL_codez00_4740;

															BgL_codez00_4740 = BgL_arg2021z00_1063;
															BgL_codez00_4 = BgL_codez00_4740;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 286 */
														{	/* Eval/evmeaning.scm 289 */
															obj_t BgL_arg2023z00_1065;

															{	/* Eval/evmeaning.scm 289 */
																long BgL_arg2024z00_1066;

																BgL_arg2024z00_1066 =
																	(BgL_iz00_1060 + ((long) 2));
																BgL_arg2023z00_1065 =
																	VECTOR_REF(BgL_codez00_4,
																	(int) (BgL_arg2024z00_1066));
															}
															BGl_evmeaningz00zz__evmeaningz00
																(BgL_arg2023z00_1065, BgL_stackz00_5,
																BgL_denvz00_6);
														}
														{
															long BgL_iz00_4745;

															BgL_iz00_4745 = (BgL_iz00_1060 + ((long) 1));
															BgL_iz00_1060 = BgL_iz00_4745;
															goto BgL_zc3anonymousza32018ze3z83_1061;
														}
													}
											}
										}
										break;
									case ((long) 17):

										return
											BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 18):

										return
											BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 25):

										return
											BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00
											(BgL_codez00_4);
										break;
									case ((long) 26):

										return
											BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 27):

										return
											BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 28):

										return
											BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 29):

										return
											BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 30):

										return
											BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 31):

										return
											BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 3))), BgL_stackz00_5, BgL_denvz00_6));
										break;
									case ((long) 32):

										return
											BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 3))), BgL_stackz00_5, BgL_denvz00_6));
										break;
									case ((long) 33):

										return
											BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 3))), BgL_stackz00_5, BgL_denvz00_6));
										break;
									case ((long) 34):

										return
											BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 3))), BgL_stackz00_5, BgL_denvz00_6));
										break;
									case ((long) 35):

										return
											BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_4,
													(int) (((long) 3))), BgL_stackz00_5, BgL_denvz00_6));
										break;
									case ((long) 36):

										return
											BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 37):

										return
											BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 42):

										return
											BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 38):

										return
											BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 43):

										return
											BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 39):

										return
											BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 44):

										return
											BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 40):

										return
											BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 45):

										return
											BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 41):

										return
											BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 46):

										return
											BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 47):

										return
											BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 51):

										return
											BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 48):

										return
											BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 52):

										return
											BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 49):

										return
											BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 53):

										return
											BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 50):

										return
											BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 54):

										return
											BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 55):

										return
											BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 56):

										return
											BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 63):

										return
											BGl_evmeaningzd2bouncezd263z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 64):

										return
											BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 65):

										{	/* Eval/evmeaning.scm 718 */
											obj_t BgL_g1865z00_1083;

											BgL_g1865z00_1083 =
												VECTOR_REF(BgL_codez00_4, (int) (((long) 3)));
											{
												obj_t BgL_valsz00_1085;

												obj_t BgL_envz00_1086;

												BgL_valsz00_1085 = BgL_g1865z00_1083;
												BgL_envz00_1086 = BgL_stackz00_5;
											BgL_zc3anonymousza32038ze3z83_1087:
												if (NULLP(BgL_valsz00_1085))
													{
														obj_t BgL_stackz00_4805;

														obj_t BgL_codez00_4802;

														BgL_codez00_4802 =
															VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
														BgL_stackz00_4805 = BgL_envz00_1086;
														BgL_stackz00_5 = BgL_stackz00_4805;
														BgL_codez00_4 = BgL_codez00_4802;
														goto BGl_evmeaningz00zz__evmeaningz00;
													}
												else
													{	/* Eval/evmeaning.scm 722 */
														obj_t BgL_vz00_1090;

														BgL_vz00_1090 =
															BGl_evmeaningz00zz__evmeaningz00(CAR
															(BgL_valsz00_1085), BgL_stackz00_5,
															BgL_denvz00_6);
														{	/* Eval/evmeaning.scm 723 */
															obj_t BgL_arg2041z00_1091;

															obj_t BgL_arg2042z00_1092;

															BgL_arg2041z00_1091 = CDR(BgL_valsz00_1085);
															BgL_arg2042z00_1092 =
																MAKE_PAIR(BgL_vz00_1090, BgL_envz00_1086);
															{
																obj_t BgL_envz00_4811;

																obj_t BgL_valsz00_4810;

																BgL_valsz00_4810 = BgL_arg2041z00_1091;
																BgL_envz00_4811 = BgL_arg2042z00_1092;
																BgL_envz00_1086 = BgL_envz00_4811;
																BgL_valsz00_1085 = BgL_valsz00_4810;
																goto BgL_zc3anonymousza32038ze3z83_1087;
															}
														}
													}
											}
										}
										break;
									case ((long) 66):

										{	/* Eval/evmeaning.scm 726 */
											obj_t BgL_g1866z00_1095;

											BgL_g1866z00_1095 =
												VECTOR_REF(BgL_codez00_4, (int) (((long) 3)));
											{
												obj_t BgL_valsz00_1097;

												obj_t BgL_stackz00_1098;

												BgL_valsz00_1097 = BgL_g1866z00_1095;
												BgL_stackz00_1098 = BgL_stackz00_5;
											BgL_zc3anonymousza32044ze3z83_1099:
												if (NULLP(BgL_valsz00_1097))
													{
														obj_t BgL_stackz00_4819;

														obj_t BgL_codez00_4816;

														BgL_codez00_4816 =
															VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
														BgL_stackz00_4819 = BgL_stackz00_1098;
														BgL_stackz00_5 = BgL_stackz00_4819;
														BgL_codez00_4 = BgL_codez00_4816;
														goto BGl_evmeaningz00zz__evmeaningz00;
													}
												else
													{	/* Eval/evmeaning.scm 730 */
														obj_t BgL_arg2047z00_1102;

														obj_t BgL_arg2048z00_1103;

														BgL_arg2047z00_1102 = CDR(BgL_valsz00_1097);
														BgL_arg2048z00_1103 =
															MAKE_PAIR(BGl_evmeaningz00zz__evmeaningz00(CAR
																(BgL_valsz00_1097), BgL_stackz00_1098,
																BgL_denvz00_6), BgL_stackz00_1098);
														{
															obj_t BgL_stackz00_4825;

															obj_t BgL_valsz00_4824;

															BgL_valsz00_4824 = BgL_arg2047z00_1102;
															BgL_stackz00_4825 = BgL_arg2048z00_1103;
															BgL_stackz00_1098 = BgL_stackz00_4825;
															BgL_valsz00_1097 = BgL_valsz00_4824;
															goto BgL_zc3anonymousza32044ze3z83_1099;
														}
													}
											}
										}
										break;
									case ((long) 67):

										return
											BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 68):

										return
											BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 70):

										return
											BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 71):

										return
											BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00
											(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6);
										break;
									case ((long) 131):

										{	/* Eval/evmeaning.scm 774 */
											obj_t BgL_funz00_1107;

											BgL_funz00_1107 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 775 */
												bool_t BgL_testz00_4833;

												if (PROCEDUREP(BgL_funz00_1107))
													{	/* Eval/evmeaning.scm 775 */
														obj_t BgL_arg2431z00_2669;

														BgL_arg2431z00_2669 =
															PROCEDURE_ATTR(BgL_funz00_1107);
														if (STRUCTP(BgL_arg2431z00_2669))
															{	/* Eval/evmeaning.scm 775 */
																BgL_testz00_4833 =
																	(STRUCT_KEY(BgL_arg2431z00_2669) ==
																	BGl_symbol2945z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 775 */
																BgL_testz00_4833 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 775 */
														BgL_testz00_4833 = ((bool_t) 0);
													}
												if (BgL_testz00_4833)
													{	/* Eval/evmeaning.scm 776 */
														obj_t BgL_arg2054z00_1109;

														obj_t BgL_arg2055z00_1110;

														{	/* Eval/evmeaning.scm 776 */
															obj_t BgL_arg2434z00_2680;

															BgL_arg2434z00_2680 =
																PROCEDURE_ATTR(BgL_funz00_1107);
															BgL_arg2054z00_1109 =
																STRUCT_REF(BgL_arg2434z00_2680,
																(int) (((long) 1)));
														}
														BgL_arg2055z00_1110 =
															BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1107);
														{
															obj_t BgL_stackz00_4846;

															obj_t BgL_codez00_4845;

															BgL_codez00_4845 = BgL_arg2054z00_1109;
															BgL_stackz00_4846 = BgL_arg2055z00_1110;
															BgL_stackz00_5 = BgL_stackz00_4846;
															BgL_codez00_4 = BgL_codez00_4845;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 775 */
														return
															BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1107);
													}
											}
										}
										break;
									case ((long) 132):

										{	/* Eval/evmeaning.scm 782 */
											obj_t BgL_funz00_1112;

											BgL_funz00_1112 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 783 */
												bool_t BgL_testz00_4851;

												if (PROCEDUREP(BgL_funz00_1112))
													{	/* Eval/evmeaning.scm 783 */
														obj_t BgL_arg2431z00_2689;

														BgL_arg2431z00_2689 =
															PROCEDURE_ATTR(BgL_funz00_1112);
														if (STRUCTP(BgL_arg2431z00_2689))
															{	/* Eval/evmeaning.scm 783 */
																BgL_testz00_4851 =
																	(STRUCT_KEY(BgL_arg2431z00_2689) ==
																	BGl_symbol2945z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 783 */
																BgL_testz00_4851 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 783 */
														BgL_testz00_4851 = ((bool_t) 0);
													}
												if (BgL_testz00_4851)
													{	/* Eval/evmeaning.scm 784 */
														obj_t BgL_arg2058z00_1114;

														obj_t BgL_arg2059z00_1115;

														{	/* Eval/evmeaning.scm 784 */
															obj_t BgL_arg2434z00_2700;

															BgL_arg2434z00_2700 =
																PROCEDURE_ATTR(BgL_funz00_1112);
															BgL_arg2058z00_1114 =
																STRUCT_REF(BgL_arg2434z00_2700,
																(int) (((long) 1)));
														}
														BgL_arg2059z00_1115 =
															BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1112);
														{
															obj_t BgL_stackz00_4864;

															obj_t BgL_codez00_4863;

															BgL_codez00_4863 = BgL_arg2058z00_1114;
															BgL_stackz00_4864 = BgL_arg2059z00_1115;
															BgL_stackz00_5 = BgL_stackz00_4864;
															BgL_codez00_4 = BgL_codez00_4863;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 783 */
														return
															BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1112);
													}
											}
										}
										break;
									case ((long) 133):

										{	/* Eval/evmeaning.scm 790 */
											obj_t BgL_funz00_1117;

											BgL_funz00_1117 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 791 */
												bool_t BgL_testz00_4869;

												if (PROCEDUREP(BgL_funz00_1117))
													{	/* Eval/evmeaning.scm 791 */
														obj_t BgL_arg2431z00_2709;

														BgL_arg2431z00_2709 =
															PROCEDURE_ATTR(BgL_funz00_1117);
														if (STRUCTP(BgL_arg2431z00_2709))
															{	/* Eval/evmeaning.scm 791 */
																BgL_testz00_4869 =
																	(STRUCT_KEY(BgL_arg2431z00_2709) ==
																	BGl_symbol2945z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 791 */
																BgL_testz00_4869 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 791 */
														BgL_testz00_4869 = ((bool_t) 0);
													}
												if (BgL_testz00_4869)
													{	/* Eval/evmeaning.scm 792 */
														obj_t BgL_arg2062z00_1119;

														obj_t BgL_arg2063z00_1120;

														{	/* Eval/evmeaning.scm 792 */
															obj_t BgL_arg2434z00_2720;

															BgL_arg2434z00_2720 =
																PROCEDURE_ATTR(BgL_funz00_1117);
															BgL_arg2062z00_1119 =
																STRUCT_REF(BgL_arg2434z00_2720,
																(int) (((long) 1)));
														}
														BgL_arg2063z00_1120 =
															BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1117);
														{
															obj_t BgL_stackz00_4882;

															obj_t BgL_codez00_4881;

															BgL_codez00_4881 = BgL_arg2062z00_1119;
															BgL_stackz00_4882 = BgL_arg2063z00_1120;
															BgL_stackz00_5 = BgL_stackz00_4882;
															BgL_codez00_4 = BgL_codez00_4881;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 791 */
														return
															BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1117);
													}
											}
										}
										break;
									case ((long) 134):

										{	/* Eval/evmeaning.scm 798 */
											obj_t BgL_funz00_1122;

											BgL_funz00_1122 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 799 */
												bool_t BgL_testz00_4887;

												if (PROCEDUREP(BgL_funz00_1122))
													{	/* Eval/evmeaning.scm 799 */
														obj_t BgL_arg2431z00_2729;

														BgL_arg2431z00_2729 =
															PROCEDURE_ATTR(BgL_funz00_1122);
														if (STRUCTP(BgL_arg2431z00_2729))
															{	/* Eval/evmeaning.scm 799 */
																BgL_testz00_4887 =
																	(STRUCT_KEY(BgL_arg2431z00_2729) ==
																	BGl_symbol2945z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 799 */
																BgL_testz00_4887 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 799 */
														BgL_testz00_4887 = ((bool_t) 0);
													}
												if (BgL_testz00_4887)
													{	/* Eval/evmeaning.scm 800 */
														obj_t BgL_arg2066z00_1124;

														obj_t BgL_arg2067z00_1125;

														{	/* Eval/evmeaning.scm 800 */
															obj_t BgL_arg2434z00_2740;

															BgL_arg2434z00_2740 =
																PROCEDURE_ATTR(BgL_funz00_1122);
															BgL_arg2066z00_1124 =
																STRUCT_REF(BgL_arg2434z00_2740,
																(int) (((long) 1)));
														}
														BgL_arg2067z00_1125 =
															BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1122);
														{
															obj_t BgL_stackz00_4900;

															obj_t BgL_codez00_4899;

															BgL_codez00_4899 = BgL_arg2066z00_1124;
															BgL_stackz00_4900 = BgL_arg2067z00_1125;
															BgL_stackz00_5 = BgL_stackz00_4900;
															BgL_codez00_4 = BgL_codez00_4899;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 799 */
														return
															BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1122);
													}
											}
										}
										break;
									case ((long) 135):

										{	/* Eval/evmeaning.scm 806 */
											obj_t BgL_funz00_1127;

											BgL_funz00_1127 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 807 */
												bool_t BgL_testz00_4905;

												if (PROCEDUREP(BgL_funz00_1127))
													{	/* Eval/evmeaning.scm 807 */
														obj_t BgL_arg2431z00_2749;

														BgL_arg2431z00_2749 =
															PROCEDURE_ATTR(BgL_funz00_1127);
														if (STRUCTP(BgL_arg2431z00_2749))
															{	/* Eval/evmeaning.scm 807 */
																BgL_testz00_4905 =
																	(STRUCT_KEY(BgL_arg2431z00_2749) ==
																	BGl_symbol2945z00zz__evmeaningz00);
															}
														else
															{	/* Eval/evmeaning.scm 807 */
																BgL_testz00_4905 = ((bool_t) 0);
															}
													}
												else
													{	/* Eval/evmeaning.scm 807 */
														BgL_testz00_4905 = ((bool_t) 0);
													}
												if (BgL_testz00_4905)
													{	/* Eval/evmeaning.scm 808 */
														obj_t BgL_arg2070z00_1129;

														obj_t BgL_arg2072z00_1130;

														{	/* Eval/evmeaning.scm 808 */
															obj_t BgL_arg2434z00_2760;

															BgL_arg2434z00_2760 =
																PROCEDURE_ATTR(BgL_funz00_1127);
															BgL_arg2070z00_1129 =
																STRUCT_REF(BgL_arg2434z00_2760,
																(int) (((long) 1)));
														}
														BgL_arg2072z00_1130 =
															BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1127);
														{
															obj_t BgL_stackz00_4918;

															obj_t BgL_codez00_4917;

															BgL_codez00_4917 = BgL_arg2070z00_1129;
															BgL_stackz00_4918 = BgL_arg2072z00_1130;
															BgL_stackz00_5 = BgL_stackz00_4918;
															BgL_codez00_4 = BgL_codez00_4917;
															goto BGl_evmeaningz00zz__evmeaningz00;
														}
													}
												else
													{	/* Eval/evmeaning.scm 807 */
														return
															BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00
															(BgL_codez00_4, BgL_stackz00_5, BgL_denvz00_6,
															BgL_funz00_1127);
													}
											}
										}
										break;
									case ((long) 136):

										{	/* Eval/evmeaning.scm 814 */
											obj_t BgL_namez00_1132;

											BgL_namez00_1132 =
												VECTOR_REF(BgL_codez00_4, (int) (((long) 2)));
											{	/* Eval/evmeaning.scm 814 */
												obj_t BgL_funz00_1133;

												BgL_funz00_1133 =
													BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
													(BgL_codez00_4, (int) (((long) 3))), BgL_stackz00_5,
													BgL_denvz00_6);
												{	/* Eval/evmeaning.scm 815 */

													{	/* Eval/evmeaning.scm 816 */
														obj_t BgL_g1867z00_1134;

														BgL_g1867z00_1134 =
															VECTOR_REF(BgL_codez00_4, (int) (((long) 4)));
														{
															obj_t BgL_argsz00_1137;

															obj_t BgL_newz00_1138;

															long BgL_lenz00_1139;

															BgL_argsz00_1137 = BgL_g1867z00_1134;
															BgL_newz00_1138 = BNIL;
															BgL_lenz00_1139 = ((long) 0);
														BgL_zc3anonymousza32074ze3z83_1140:
															if (NULLP(BgL_argsz00_1137))
																{	/* Eval/evmeaning.scm 820 */
																	bool_t BgL_testz00_4929;

																	if (PROCEDUREP(BgL_funz00_1133))
																		{	/* Eval/evmeaning.scm 820 */
																			obj_t BgL_arg2431z00_2774;

																			BgL_arg2431z00_2774 =
																				PROCEDURE_ATTR(BgL_funz00_1133);
																			if (STRUCTP(BgL_arg2431z00_2774))
																				{	/* Eval/evmeaning.scm 820 */
																					BgL_testz00_4929 =
																						(STRUCT_KEY(BgL_arg2431z00_2774) ==
																						BGl_symbol2945z00zz__evmeaningz00);
																				}
																			else
																				{	/* Eval/evmeaning.scm 820 */
																					BgL_testz00_4929 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Eval/evmeaning.scm 820 */
																			BgL_testz00_4929 = ((bool_t) 0);
																		}
																	if (BgL_testz00_4929)
																		{	/* Eval/evmeaning.scm 821 */
																			obj_t BgL_fmlsz00_1143;

																			{	/* Eval/evmeaning.scm 821 */
																				obj_t BgL_arg2436z00_2785;

																				BgL_arg2436z00_2785 =
																					PROCEDURE_ATTR(BgL_funz00_1133);
																				BgL_fmlsz00_1143 =
																					STRUCT_REF(BgL_arg2436z00_2785,
																					(int) (((long) 0)));
																			}
																			{	/* Eval/evmeaning.scm 821 */
																				obj_t BgL_stackz00_1144;

																				{	/* Eval/evmeaning.scm 822 */
																					obj_t BgL_arg2435z00_2791;

																					BgL_arg2435z00_2791 =
																						PROCEDURE_ATTR(BgL_funz00_1133);
																					BgL_stackz00_1144 =
																						STRUCT_REF(BgL_arg2435z00_2791,
																						(int) (((long) 2)));
																				}
																				{	/* Eval/evmeaning.scm 822 */
																					obj_t BgL_wenz00_1145;

																					BgL_wenz00_1145 =
																						bgl_reverse_bang(BgL_newz00_1138);
																					{	/* Eval/evmeaning.scm 823 */
																						obj_t BgL_e2z00_1146;

																						if (
																							((long) CINT(BgL_fmlsz00_1143) >=
																								((long) 0)))
																							{	/* Eval/evmeaning.scm 824 */
																								BgL_e2z00_1146 =
																									BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00
																									(BgL_namez00_1132,
																									BgL_codez00_4,
																									BgL_wenz00_1145,
																									BgL_fmlsz00_1143,
																									BgL_stackz00_1144);
																							}
																						else
																							{	/* Eval/evmeaning.scm 824 */
																								BgL_e2z00_1146 =
																									BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00
																									(BgL_namez00_1132,
																									BgL_codez00_4,
																									BgL_wenz00_1145,
																									BgL_fmlsz00_1143,
																									BgL_stackz00_1144);
																							}
																						{	/* Eval/evmeaning.scm 824 */

																							{	/* Eval/evmeaning.scm 835 */
																								obj_t BgL_arg2077z00_1147;

																								{	/* Eval/evmeaning.scm 835 */
																									obj_t BgL_arg2434z00_2799;

																									BgL_arg2434z00_2799 =
																										PROCEDURE_ATTR
																										(BgL_funz00_1133);
																									BgL_arg2077z00_1147 =
																										STRUCT_REF
																										(BgL_arg2434z00_2799,
																										(int) (((long) 1)));
																								}
																								{
																									obj_t BgL_stackz00_4953;

																									obj_t BgL_codez00_4952;

																									BgL_codez00_4952 =
																										BgL_arg2077z00_1147;
																									BgL_stackz00_4953 =
																										BgL_e2z00_1146;
																									BgL_stackz00_5 =
																										BgL_stackz00_4953;
																									BgL_codez00_4 =
																										BgL_codez00_4952;
																									goto
																										BGl_evmeaningz00zz__evmeaningz00;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Eval/evmeaning.scm 820 */
																			BGL_ENV_BYTECODE_SET(BgL_denvz00_6,
																				BgL_codez00_4);
																			{	/* Eval/evmeaning.scm 840 */
																				obj_t BgL_arg2079z00_1149;

																				BgL_arg2079z00_1149 =
																					bgl_reverse_bang(BgL_newz00_1138);
																				{	/* Eval/evmeaning.scm 840 */
																					obj_t BgL_codez00_2804;

																					BgL_codez00_2804 = BgL_codez00_4;
																					if (PROCEDUREP(BgL_funz00_1133))
																						{	/* Eval/evmeaning.scm 840 */
																							if (PROCEDURE_CORRECT_ARITYP
																								(BgL_funz00_1133,
																									(int) (BgL_lenz00_1139)))
																								{	/* Eval/evmeaning.scm 840 */
																									return
																										eval_apply(BgL_funz00_1133,
																										BgL_arg2079z00_1149);
																								}
																							else
																								{	/* Eval/evmeaning.scm 840 */
																									return
																										BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
																										(BgL_codez00_2804,
																										BgL_namez00_1132,
																										(int) (BgL_lenz00_1139),
																										PROCEDURE_ARITY
																										(BgL_funz00_1133));
																						}}
																					else
																						{	/* Eval/evmeaning.scm 840 */
																							return
																								BGl_evmeaningzd2errorzd2zz__everrorz00
																								(BgL_codez00_2804,
																								BGl_string2947z00zz__evmeaningz00,
																								BGl_string2948z00zz__evmeaningz00,
																								BgL_namez00_1132);
																						}
																				}
																			}
																		}
																}
															else
																{	/* Eval/evmeaning.scm 841 */
																	obj_t BgL_arg2080z00_1150;

																	obj_t BgL_arg2081z00_1151;

																	long BgL_arg2082z00_1152;

																	BgL_arg2080z00_1150 = CDR(BgL_argsz00_1137);
																	BgL_arg2081z00_1151 =
																		MAKE_PAIR(BGl_evmeaningz00zz__evmeaningz00
																		(CAR(BgL_argsz00_1137), BgL_stackz00_5,
																			BgL_denvz00_6), BgL_newz00_1138);
																	BgL_arg2082z00_1152 =
																		(((long) 1) + BgL_lenz00_1139);
																	{
																		long BgL_lenz00_4973;

																		obj_t BgL_newz00_4972;

																		obj_t BgL_argsz00_4971;

																		BgL_argsz00_4971 = BgL_arg2080z00_1150;
																		BgL_newz00_4972 = BgL_arg2081z00_1151;
																		BgL_lenz00_4973 = BgL_arg2082z00_1152;
																		BgL_lenz00_1139 = BgL_lenz00_4973;
																		BgL_newz00_1138 = BgL_newz00_4972;
																		BgL_argsz00_1137 = BgL_argsz00_4971;
																		goto BgL_zc3anonymousza32074ze3z83_1140;
																	}
																}
														}
													}
												}
											}
										}
										break;
									case ((long) 145):
									case ((long) 146):

										{	/* Eval/evmeaning.scm 846 */
											long BgL_arg2089z00_1158;

											{	/* Eval/evmeaning.scm 846 */
												obj_t BgL_arg2090z00_1159;

												BgL_arg2090z00_1159 =
													VECTOR_REF(BgL_codez00_4, (int) (((long) 0)));
												BgL_arg2089z00_1158 =
													((long) CINT(BgL_arg2090z00_1159) - ((long) 140));
											}
											VECTOR_SET(BgL_codez00_4,
												(int) (((long) 0)), BINT(BgL_arg2089z00_1158));
										}
										VECTOR_SET(BgL_codez00_4,
											(int) (((long) 2)),
											BGl_evmodulezd2findzd2globalz00zz__evmodulez00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 3))),
												VECTOR_REF(BgL_codez00_4, (int) (((long) 2)))));
										{

											goto BGl_evmeaningz00zz__evmeaningz00;
										}
										break;
									case ((long) 147):

										{	/* Eval/evmeaning.scm 853 */
											obj_t BgL_a0z00_1165;

											obj_t BgL_a1z00_1166;

											BgL_a0z00_1165 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1166 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1165))
												{	/* Eval/evmeaning.scm 853 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1166))
														{	/* Eval/evmeaning.scm 853 */
															return
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_a0z00_1165,
																BgL_a1z00_1166);
														}
													else
														{	/* Eval/evmeaning.scm 853 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1166);
														}
												}
											else
												{	/* Eval/evmeaning.scm 853 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1165);
												}
										}
										break;
									case ((long) 148):

										{	/* Eval/evmeaning.scm 855 */
											obj_t BgL_a0z00_1171;

											obj_t BgL_a1z00_1172;

											BgL_a0z00_1171 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1172 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1171))
												{	/* Eval/evmeaning.scm 855 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1172))
														{	/* Eval/evmeaning.scm 855 */
															return
																BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_a0z00_1171,
																BgL_a1z00_1172);
														}
													else
														{	/* Eval/evmeaning.scm 855 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1172);
														}
												}
											else
												{	/* Eval/evmeaning.scm 855 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1171);
												}
										}
										break;
									case ((long) 149):

										{	/* Eval/evmeaning.scm 857 */
											obj_t BgL_a0z00_1177;

											obj_t BgL_a1z00_1178;

											BgL_a0z00_1177 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1178 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1177))
												{	/* Eval/evmeaning.scm 857 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1178))
														{	/* Eval/evmeaning.scm 857 */
															return
																BGl_2za2za2zz__r4_numbers_6_5z00(BgL_a0z00_1177,
																BgL_a1z00_1178);
														}
													else
														{	/* Eval/evmeaning.scm 857 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1178);
														}
												}
											else
												{	/* Eval/evmeaning.scm 857 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1177);
												}
										}
										break;
									case ((long) 150):

										{	/* Eval/evmeaning.scm 859 */
											obj_t BgL_a0z00_1183;

											obj_t BgL_a1z00_1184;

											BgL_a0z00_1183 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1184 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1183))
												{	/* Eval/evmeaning.scm 859 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1184))
														{	/* Eval/evmeaning.scm 859 */
															return
																BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_a0z00_1183,
																BgL_a1z00_1184);
														}
													else
														{	/* Eval/evmeaning.scm 859 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1184);
														}
												}
											else
												{	/* Eval/evmeaning.scm 859 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1183);
												}
										}
										break;
									case ((long) 151):

										{	/* Eval/evmeaning.scm 861 */
											obj_t BgL_a0z00_1189;

											obj_t BgL_a1z00_1190;

											BgL_a0z00_1189 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1190 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1189))
												{	/* Eval/evmeaning.scm 861 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1190))
														{	/* Eval/evmeaning.scm 861 */
															return
																BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00
																(BgL_a0z00_1189, BgL_a1z00_1190));
														}
													else
														{	/* Eval/evmeaning.scm 861 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1190);
														}
												}
											else
												{	/* Eval/evmeaning.scm 861 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1189);
												}
										}
										break;
									case ((long) 152):

										{	/* Eval/evmeaning.scm 863 */
											obj_t BgL_a0z00_1195;

											obj_t BgL_a1z00_1196;

											BgL_a0z00_1195 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1196 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1195))
												{	/* Eval/evmeaning.scm 863 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1196))
														{	/* Eval/evmeaning.scm 863 */
															return
																BBOOL(BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BgL_a0z00_1195, BgL_a1z00_1196));
														}
													else
														{	/* Eval/evmeaning.scm 863 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1196);
														}
												}
											else
												{	/* Eval/evmeaning.scm 863 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1195);
												}
										}
										break;
									case ((long) 153):

										{	/* Eval/evmeaning.scm 865 */
											obj_t BgL_a0z00_1201;

											obj_t BgL_a1z00_1202;

											BgL_a0z00_1201 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1202 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1201))
												{	/* Eval/evmeaning.scm 865 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1202))
														{	/* Eval/evmeaning.scm 865 */
															return
																BBOOL(BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																(BgL_a0z00_1201, BgL_a1z00_1202));
														}
													else
														{	/* Eval/evmeaning.scm 865 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1202);
														}
												}
											else
												{	/* Eval/evmeaning.scm 865 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1201);
												}
										}
										break;
									case ((long) 154):

										{	/* Eval/evmeaning.scm 867 */
											obj_t BgL_a0z00_1207;

											obj_t BgL_a1z00_1208;

											BgL_a0z00_1207 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1208 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1207))
												{	/* Eval/evmeaning.scm 867 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1208))
														{	/* Eval/evmeaning.scm 867 */
															return
																BBOOL(BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																(BgL_a0z00_1207, BgL_a1z00_1208));
														}
													else
														{	/* Eval/evmeaning.scm 867 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1208);
														}
												}
											else
												{	/* Eval/evmeaning.scm 867 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1207);
												}
										}
										break;
									case ((long) 155):

										{	/* Eval/evmeaning.scm 869 */
											obj_t BgL_a0z00_1213;

											obj_t BgL_a1z00_1214;

											BgL_a0z00_1213 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1214 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1213))
												{	/* Eval/evmeaning.scm 869 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1214))
														{	/* Eval/evmeaning.scm 869 */
															return
																BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00
																(BgL_a0z00_1213, BgL_a1z00_1214));
														}
													else
														{	/* Eval/evmeaning.scm 869 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1214);
														}
												}
											else
												{	/* Eval/evmeaning.scm 869 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1213);
												}
										}
										break;
									case ((long) 166):

										{	/* Eval/evmeaning.scm 871 */
											obj_t BgL_a0z00_1219;

											obj_t BgL_a1z00_1220;

											BgL_a0z00_1219 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1220 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1219))
												{	/* Eval/evmeaning.scm 871 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1220))
														{	/* Eval/evmeaning.scm 871 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1219) +
																	(long) CINT(BgL_a1z00_1220)));
														}
													else
														{	/* Eval/evmeaning.scm 871 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1220);
														}
												}
											else
												{	/* Eval/evmeaning.scm 871 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1219);
												}
										}
										break;
									case ((long) 167):

										{	/* Eval/evmeaning.scm 873 */
											obj_t BgL_a0z00_1225;

											obj_t BgL_a1z00_1226;

											BgL_a0z00_1225 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1226 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1225))
												{	/* Eval/evmeaning.scm 873 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1226))
														{	/* Eval/evmeaning.scm 873 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1225) -
																	(long) CINT(BgL_a1z00_1226)));
														}
													else
														{	/* Eval/evmeaning.scm 873 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1226);
														}
												}
											else
												{	/* Eval/evmeaning.scm 873 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1225);
												}
										}
										break;
									case ((long) 168):

										{	/* Eval/evmeaning.scm 875 */
											obj_t BgL_a0z00_1231;

											obj_t BgL_a1z00_1232;

											BgL_a0z00_1231 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1232 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1231))
												{	/* Eval/evmeaning.scm 875 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1232))
														{	/* Eval/evmeaning.scm 875 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1231) *
																	(long) CINT(BgL_a1z00_1232)));
														}
													else
														{	/* Eval/evmeaning.scm 875 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1232);
														}
												}
											else
												{	/* Eval/evmeaning.scm 875 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1231);
												}
										}
										break;
									case ((long) 169):

										{	/* Eval/evmeaning.scm 877 */
											obj_t BgL_a0z00_1237;

											obj_t BgL_a1z00_1238;

											BgL_a0z00_1237 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1238 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1237))
												{	/* Eval/evmeaning.scm 877 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1238))
														{	/* Eval/evmeaning.scm 877 */
															return
																BINT(
																((long) CINT(BgL_a0z00_1237) /
																	(long) CINT(BgL_a1z00_1238)));
														}
													else
														{	/* Eval/evmeaning.scm 877 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1238);
														}
												}
											else
												{	/* Eval/evmeaning.scm 877 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1237);
												}
										}
										break;
									case ((long) 170):

										{	/* Eval/evmeaning.scm 879 */
											obj_t BgL_a0z00_1243;

											obj_t BgL_a1z00_1244;

											BgL_a0z00_1243 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1244 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1243))
												{	/* Eval/evmeaning.scm 879 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1244))
														{	/* Eval/evmeaning.scm 879 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1243) <
																	(long) CINT(BgL_a1z00_1244)));
														}
													else
														{	/* Eval/evmeaning.scm 879 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1244);
														}
												}
											else
												{	/* Eval/evmeaning.scm 879 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1243);
												}
										}
										break;
									case ((long) 171):

										{	/* Eval/evmeaning.scm 881 */
											obj_t BgL_a0z00_1249;

											obj_t BgL_a1z00_1250;

											BgL_a0z00_1249 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1250 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1249))
												{	/* Eval/evmeaning.scm 881 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1250))
														{	/* Eval/evmeaning.scm 881 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1249) >
																	(long) CINT(BgL_a1z00_1250)));
														}
													else
														{	/* Eval/evmeaning.scm 881 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1250);
														}
												}
											else
												{	/* Eval/evmeaning.scm 881 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1249);
												}
										}
										break;
									case ((long) 172):

										{	/* Eval/evmeaning.scm 883 */
											obj_t BgL_a0z00_1255;

											obj_t BgL_a1z00_1256;

											BgL_a0z00_1255 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1256 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1255))
												{	/* Eval/evmeaning.scm 883 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1256))
														{	/* Eval/evmeaning.scm 883 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1255) <=
																	(long) CINT(BgL_a1z00_1256)));
														}
													else
														{	/* Eval/evmeaning.scm 883 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1256);
														}
												}
											else
												{	/* Eval/evmeaning.scm 883 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1255);
												}
										}
										break;
									case ((long) 173):

										{	/* Eval/evmeaning.scm 885 */
											obj_t BgL_a0z00_1261;

											obj_t BgL_a1z00_1262;

											BgL_a0z00_1261 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1262 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1261))
												{	/* Eval/evmeaning.scm 885 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1262))
														{	/* Eval/evmeaning.scm 885 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1261) >=
																	(long) CINT(BgL_a1z00_1262)));
														}
													else
														{	/* Eval/evmeaning.scm 885 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1262);
														}
												}
											else
												{	/* Eval/evmeaning.scm 885 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1261);
												}
										}
										break;
									case ((long) 174):

										{	/* Eval/evmeaning.scm 887 */
											obj_t BgL_a0z00_1267;

											obj_t BgL_a1z00_1268;

											BgL_a0z00_1267 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1268 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_a0z00_1267))
												{	/* Eval/evmeaning.scm 887 */
													if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
														(BgL_a1z00_1268))
														{	/* Eval/evmeaning.scm 887 */
															return
																BBOOL(
																((long) CINT(BgL_a0z00_1267) ==
																	(long) CINT(BgL_a1z00_1268)));
														}
													else
														{	/* Eval/evmeaning.scm 887 */
															return
																BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																(BgL_codez00_4,
																BGl_string2941z00zz__evmeaningz00,
																BGl_symbol2949z00zz__evmeaningz00,
																BgL_a1z00_1268);
														}
												}
											else
												{	/* Eval/evmeaning.scm 887 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2949z00zz__evmeaningz00, BgL_a0z00_1267);
												}
										}
										break;
									case ((long) 156):

										{	/* Eval/evmeaning.scm 889 */
											obj_t BgL_a0z00_1273;

											obj_t BgL_a1z00_1274;

											BgL_a0z00_1273 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1274 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											return BBOOL((BgL_a0z00_1273 == BgL_a1z00_1274));
										}
										break;
									case ((long) 157):

										{	/* Eval/evmeaning.scm 891 */
											obj_t BgL_a0z00_1277;

											obj_t BgL_a1z00_1278;

											BgL_a0z00_1277 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BgL_a1z00_1278 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 5))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											return MAKE_PAIR(BgL_a0z00_1277, BgL_a1z00_1278);
										}
										break;
									case ((long) 158):

										{	/* Eval/evmeaning.scm 893 */
											obj_t BgL_a0z00_1281;

											BgL_a0z00_1281 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (PAIRP(BgL_a0z00_1281))
												{	/* Eval/evmeaning.scm 893 */
													return CAR(BgL_a0z00_1281);
												}
											else
												{	/* Eval/evmeaning.scm 893 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2951z00zz__evmeaningz00, BgL_a0z00_1281);
												}
										}
										break;
									case ((long) 159):

										{	/* Eval/evmeaning.scm 895 */
											obj_t BgL_a0z00_1284;

											BgL_a0z00_1284 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											BGL_ENV_BYTECODE_SET(BgL_denvz00_6, BgL_codez00_4);
											if (PAIRP(BgL_a0z00_1284))
												{	/* Eval/evmeaning.scm 895 */
													return CDR(BgL_a0z00_1284);
												}
											else
												{	/* Eval/evmeaning.scm 895 */
													return
														BGl_evmeaningzd2typezd2errorz00zz__everrorz00
														(BgL_codez00_4, BGl_string2941z00zz__evmeaningz00,
														BGl_symbol2951z00zz__evmeaningz00, BgL_a0z00_1284);
												}
										}
										break;
									case ((long) 160):

										{	/* Eval/evmeaning.scm 897 */
											obj_t BgL_a0z00_1287;

											BgL_a0z00_1287 =
												BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
												(BgL_codez00_4, (int) (((long) 4))), BgL_stackz00_5,
												BgL_denvz00_6);
											{	/* Eval/evmeaning.scm 899 */
												bool_t BgL_testz00_5308;

												if (PAIRP(BgL_a0z00_1287))
													{	/* Eval/evmeaning.scm 899 */
														obj_t BgL_auxz00_5311;

														BgL_auxz00_5311 = CDR(BgL_a0z00_1287);
														BgL_testz00_5308 = PAIRP(BgL_auxz00_5311);
													}
												else
													{	/* Eval/evmeaning.scm 899 */
														BgL_testz00_5308 = ((bool_t) 0);
													}
												if (BgL_testz00_5308)
													{	/* Eval/evmeaning.scm 899 */
														return CAR(CDR(BgL_a0z00_1287));
													}
												else
													{	/* Eval/evmeaning.scm 899 */
														if (PAIRP(BgL_a0z00_1287))
															{	/* Eval/evmeaning.scm 901 */
																return
																	BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																	(BgL_codez00_4, VECTOR_REF(BgL_codez00_4,
																		(int) (((long) 2))),
																	BGl_string2952z00zz__evmeaningz00,
																	CDR(BgL_a0z00_1287));
															}
														else
															{	/* Eval/evmeaning.scm 901 */
																return
																	BGl_evmeaningzd2typezd2errorz00zz__everrorz00
																	(BgL_codez00_4, VECTOR_REF(BgL_codez00_4,
																		(int) (((long) 2))),
																	BGl_string2952z00zz__evmeaningz00,
																	BgL_a0z00_1287);
										}}}} break;
									default:
									BgL_case_else1862z00_1016:
										return
											BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_4,
											BGl_string2941z00zz__evmeaningz00,
											BGl_string2944z00zz__evmeaningz00, BgL_codez00_4);
									}
							}
						else
							{	/* Eval/evmeaning.scm 189 */
								goto BgL_case_else1862z00_1016;
							}
					}
				}
			else
				{	/* Eval/evmeaning.scm 187 */
					return BgL_codez00_4;
				}
		}
	}



/* _evmeaning */
	obj_t BGl__evmeaningz00zz__evmeaningz00(obj_t BgL_envz00_4377,
		obj_t BgL_codez00_4378, obj_t BgL_stackz00_4379, obj_t BgL_denvz00_4380)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 186 */
			{	/* Eval/evmeaning.scm 187 */
				obj_t BgL_auxz00_5337;

				obj_t BgL_auxz00_5328;

				if (BGL_DYNAMIC_ENVP(BgL_denvz00_4380))
					{	/* Eval/evmeaning.scm 187 */
						BgL_auxz00_5337 = BgL_denvz00_4380;
					}
				else
					{
						obj_t BgL_auxz00_5340;

						BgL_auxz00_5340 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2953z00zz__evmeaningz00,
							BINT(((long) 7136)), BGl_string2954z00zz__evmeaningz00,
							BGl_string2956z00zz__evmeaningz00, BgL_denvz00_4380);
						FAILURE(BgL_auxz00_5340, BFALSE, BFALSE);
					}
				{	/* Eval/evmeaning.scm 187 */
					bool_t BgL_testz00_5329;

					if (PAIRP(BgL_stackz00_4379))
						{	/* Eval/evmeaning.scm 187 */
							BgL_testz00_5329 = ((bool_t) 1);
						}
					else
						{	/* Eval/evmeaning.scm 187 */
							BgL_testz00_5329 = NULLP(BgL_stackz00_4379);
						}
					if (BgL_testz00_5329)
						{	/* Eval/evmeaning.scm 187 */
							BgL_auxz00_5328 = BgL_stackz00_4379;
						}
					else
						{
							obj_t BgL_auxz00_5333;

							BgL_auxz00_5333 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2953z00zz__evmeaningz00, BINT(((long) 7136)),
								BGl_string2954z00zz__evmeaningz00,
								BGl_string2955z00zz__evmeaningz00, BgL_stackz00_4379);
							FAILURE(BgL_auxz00_5333, BFALSE, BFALSE);
				}}
				return
					BGl_evmeaningz00zz__evmeaningz00(BgL_codez00_4378, BgL_auxz00_5328,
					BgL_auxz00_5337);
			}
		}
	}



/* evmeaning-bounce-71 */
	obj_t BGl_evmeaningzd2bouncezd271z00zz__evmeaningz00(obj_t BgL_codez00_7,
		obj_t BgL_stackz00_8, obj_t BgL_denvz00_9)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 762 */
				obj_t BgL_handlerz00_1298;

				BgL_handlerz00_1298 = VECTOR_REF(BgL_codez00_7, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 762 */
					obj_t BgL_bodyz00_1299;

					BgL_bodyz00_1299 = VECTOR_REF(BgL_codez00_7, (int) (((long) 3)));
					{	/* Eval/evmeaning.scm 763 */
						obj_t BgL_ehandlerz00_1300;

						BgL_ehandlerz00_1300 =
							BGl_evmeaningz00zz__evmeaningz00(BgL_handlerz00_1298,
							BgL_stackz00_8, BgL_denvz00_9);
						{	/* Eval/evmeaning.scm 764 */

							if (PROCEDUREP(BgL_ehandlerz00_1300))
								{	/* Eval/evmeaning.scm 766 */
									if (PROCEDURE_CORRECT_ARITYP(BgL_ehandlerz00_1300,
											(int) (((long) 1))))
										{	/* Eval/evmeaning.scm 768 */
											return
												BGl_zc3exitza32193ze3z83zz__evmeaningz00
												(BgL_ehandlerz00_1300, BgL_denvz00_9, BgL_stackz00_8,
												BgL_bodyz00_1299);
										}
									else
										{	/* Eval/evmeaning.scm 768 */
											return
												BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
												(BgL_handlerz00_1298, BGl_string2957z00zz__evmeaningz00,
												(int) (((long) 1)),
												PROCEDURE_ARITY(BgL_ehandlerz00_1300));
								}}
							else
								{	/* Eval/evmeaning.scm 766 */
									return
										BGl_evmeaningzd2typezd2errorz00zz__everrorz00(BgL_codez00_7,
										BGl_string2941z00zz__evmeaningz00,
										BGl_string2958z00zz__evmeaningz00, BgL_ehandlerz00_1300);
								}
						}
					}
				}
			}
		}
	}



/* <exit:2193> */
	obj_t BGl_zc3exitza32193ze3z83zz__evmeaningz00(obj_t BgL_ehandlerz00_4585,
		obj_t BgL_denvz00_4584, obj_t BgL_stackz00_4583, obj_t BgL_bodyz00_4582)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 769 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1872z00_1304;

			if (SET_EXIT(BgL_an_exit1872z00_1304))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1872z00_1304 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 769 */

						PUSH_EXIT(BgL_an_exit1872z00_1304, ((long) 1));
						{	/* Eval/evmeaning.scm 769 */
							obj_t BgL_an_exitd1873z00_1305;

							BgL_an_exitd1873z00_1305 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/evmeaning.scm 769 */
								obj_t BgL_res1875z00_1308;

								{	/* Eval/evmeaning.scm 769 */
									obj_t BgL_err1870z00_1309;

									obj_t BgL_ohs1869z00_1310;

									BgL_err1870z00_1309 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1869z00_1310 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/evmeaning.scm 769 */
										obj_t BgL_val1876z00_1311;

										BgL_val1876z00_1311 =
											BGl_zc3exitza32200ze3z83zz__evmeaningz00(BgL_denvz00_4584,
											BgL_stackz00_4583, BgL_bodyz00_4582, BgL_ohs1869z00_1310,
											BgL_err1870z00_1309, BgL_an_exitd1873z00_1305);
										BGL_ERROR_HANDLER_SET(BgL_ohs1869z00_1310);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1870z00_1309)))
											{	/* Eval/evmeaning.scm 769 */
												obj_t BgL_arg2195z00_1313;

												{	/* Eval/evmeaning.scm 769 */
													obj_t BgL_arg2196z00_1314;

													BgL_arg2196z00_1314 = CDR(BgL_err1870z00_1309);
													BgL_arg2195z00_1313 =
														PROCEDURE_ENTRY(BgL_ehandlerz00_4585)
														(BgL_ehandlerz00_4585, BgL_arg2196z00_1314, BEOA);
												}
												BGl_escape1871z00zz__evmeaningz00
													(BgL_an_exitd1873z00_1305, BgL_arg2195z00_1313);
											}
										else
											{	/* Eval/evmeaning.scm 769 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1876z00_1311)))
											{	/* Eval/evmeaning.scm 769 */
												BgL_res1875z00_1308 =
													BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
													(BgL_val1876z00_1311), CDR(BgL_val1876z00_1311));
											}
										else
											{	/* Eval/evmeaning.scm 769 */
												BgL_res1875z00_1308 = BgL_val1876z00_1311;
											}
									}
								}
								POP_EXIT();
								return BgL_res1875z00_1308;
							}
						}
					}
				}
		}
	}



/* <exit:2200> */
	obj_t BGl_zc3exitza32200ze3z83zz__evmeaningz00(obj_t BgL_denvz00_4591,
		obj_t BgL_stackz00_4590, obj_t BgL_bodyz00_4589, obj_t BgL_ohs1869z00_4588,
		obj_t BgL_err1870z00_4587, obj_t BgL_an_exitd1873z00_4586)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 769 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1877z00_1319;

			if (SET_EXIT(BgL_an_exit1877z00_1319))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1877z00_1319 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 769 */

						PUSH_EXIT(BgL_an_exit1877z00_1319, ((long) 0));
						{	/* Eval/evmeaning.scm 769 */
							obj_t BgL_val1878z00_1320;

							{	/* Eval/evmeaning.scm 769 */
								obj_t BgL_arg2203z00_1321;

								{	/* Eval/evmeaning.scm 769 */
									obj_t BgL_zc3anonymousza32205ze3z83_4382;

									BgL_zc3anonymousza32205ze3z83_4382 =
										make_fx_procedure
										(BGl_zc3anonymousza32205ze3z83zz__evmeaningz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32205ze3z83_4382,
										(int) (((long) 0)), BgL_an_exitd1873z00_4586);
									PROCEDURE_SET(BgL_zc3anonymousza32205ze3z83_4382,
										(int) (((long) 1)), BgL_err1870z00_4587);
									BgL_arg2203z00_1321 =
										MAKE_PAIR(BgL_zc3anonymousza32205ze3z83_4382,
										BgL_ohs1869z00_4588);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2203z00_1321);
								BUNSPEC;
							}
							BgL_val1878z00_1320 =
								BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4589,
								BgL_stackz00_4590, BgL_denvz00_4591);
							POP_EXIT();
							return BgL_val1878z00_1320;
						}
					}
				}
		}
	}



/* escape1871 */
	obj_t BGl_escape1871z00zz__evmeaningz00(obj_t BgL_an_exitd1873z00_4383,
		obj_t BgL_val1874z00_1306)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 769 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1873z00_4383,
				BgL_val1874z00_1306);
		}
	}



/* <anonymous:2205> */
	obj_t BGl_zc3anonymousza32205ze3z83zz__evmeaningz00(obj_t BgL_envz00_4384,
		obj_t BgL_ez00_4387)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 769 */
			{	/* Eval/evmeaning.scm 769 */
				obj_t BgL_an_exitd1873z00_4385;

				obj_t BgL_err1870z00_4386;

				BgL_an_exitd1873z00_4385 =
					PROCEDURE_REF(BgL_envz00_4384, (int) (((long) 0)));
				BgL_err1870z00_4386 =
					PROCEDURE_REF(BgL_envz00_4384, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1323;

					BgL_ez00_1323 = BgL_ez00_4387;
					SET_CAR(BgL_err1870z00_4386, BTRUE);
					SET_CDR(BgL_err1870z00_4386, BgL_ez00_1323);
					return
						BGl_escape1871z00zz__evmeaningz00(BgL_an_exitd1873z00_4385,
						BgL_ez00_1323);
				}
			}
		}
	}



/* evmeaning-bounce-70 */
	obj_t BGl_evmeaningzd2bouncezd270z00zz__evmeaningz00(obj_t BgL_codez00_10,
		obj_t BgL_stackz00_11, obj_t BgL_denvz00_12)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 751 */
				obj_t BgL_valsz00_1329;

				BgL_valsz00_1329 = VECTOR_REF(BgL_codez00_10, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 751 */
					obj_t BgL_stack2z00_1330;

					{	/* Eval/evmeaning.scm 752 */
						obj_t BgL_arg2217z00_1342;

						{	/* Eval/evmeaning.scm 752 */
							long BgL_arg2222z00_1343;

							BgL_arg2222z00_1343 = bgl_list_length(BgL_valsz00_1329);
							BgL_arg2217z00_1342 =
								BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
								(int) (BgL_arg2222z00_1343), BNIL);
						}
						BgL_stack2z00_1330 =
							bgl_append2(BgL_arg2217z00_1342, BgL_stackz00_11);
					}
					{	/* Eval/evmeaning.scm 752 */

						{
							obj_t BgL_valsz00_1332;

							obj_t BgL_stack3z00_1333;

							BgL_valsz00_1332 = BgL_valsz00_1329;
							BgL_stack3z00_1333 = BgL_stack2z00_1330;
						BgL_zc3anonymousza32209ze3z83_1334:
							if (NULLP(BgL_valsz00_1332))
								{	/* Eval/evmeaning.scm 755 */
									return
										BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_10,
											(int) (((long) 2))), BgL_stack2z00_1330, BgL_denvz00_12);
								}
							else
								{	/* Eval/evmeaning.scm 755 */
									{	/* Eval/evmeaning.scm 758 */
										obj_t BgL_auxz00_5415;

										BgL_auxz00_5415 =
											BGl_evmeaningz00zz__evmeaningz00(CAR(BgL_valsz00_1332),
											BgL_stack2z00_1330, BgL_denvz00_12);
										SET_CAR(BgL_stack3z00_1333, BgL_auxz00_5415);
									}
									{
										obj_t BgL_stack3z00_5421;

										obj_t BgL_valsz00_5419;

										BgL_valsz00_5419 = CDR(BgL_valsz00_1332);
										BgL_stack3z00_5421 = CDR(BgL_stack3z00_1333);
										BgL_stack3z00_1333 = BgL_stack3z00_5421;
										BgL_valsz00_1332 = BgL_valsz00_5419;
										goto BgL_zc3anonymousza32209ze3z83_1334;
									}
								}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-68 */
	obj_t BGl_evmeaningzd2bouncezd268z00zz__evmeaningz00(obj_t BgL_codez00_13,
		obj_t BgL_stackz00_14, obj_t BgL_denvz00_15)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 742 */
				long BgL_lenz00_1345;

				{	/* Eval/evmeaning.scm 742 */
					int BgL_arg2234z00_1357;

					BgL_arg2234z00_1357 = VECTOR_LENGTH(BgL_codez00_13);
					BgL_lenz00_1345 = ((long) (BgL_arg2234z00_1357) - ((long) 2));
				}
				{
					long BgL_iz00_1347;

					obj_t BgL_lz00_1348;

					BgL_iz00_1347 = ((long) 0);
					BgL_lz00_1348 = BTRUE;
				BgL_zc3anonymousza32224ze3z83_1349:
					if ((BgL_iz00_1347 < BgL_lenz00_1345))
						{	/* Eval/evmeaning.scm 746 */
							obj_t BgL_lz00_1351;

							{	/* Eval/evmeaning.scm 746 */
								obj_t BgL_arg2227z00_1354;

								{	/* Eval/evmeaning.scm 746 */
									long BgL_arg2233z00_1355;

									BgL_arg2233z00_1355 = (BgL_iz00_1347 + ((long) 2));
									BgL_arg2227z00_1354 =
										VECTOR_REF(BgL_codez00_13, (int) (BgL_arg2233z00_1355));
								}
								BgL_lz00_1351 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_arg2227z00_1354,
									BgL_stackz00_14, BgL_denvz00_15);
							}
							if (CBOOL(BgL_lz00_1351))
								{
									obj_t BgL_lz00_5436;

									long BgL_iz00_5434;

									BgL_iz00_5434 = (BgL_iz00_1347 + ((long) 1));
									BgL_lz00_5436 = BgL_lz00_1351;
									BgL_lz00_1348 = BgL_lz00_5436;
									BgL_iz00_1347 = BgL_iz00_5434;
									goto BgL_zc3anonymousza32224ze3z83_1349;
								}
							else
								{	/* Eval/evmeaning.scm 747 */
									return BFALSE;
								}
						}
					else
						{	/* Eval/evmeaning.scm 745 */
							return BgL_lz00_1348;
						}
				}
			}
		}
	}



/* evmeaning-bounce-67 */
	obj_t BGl_evmeaningzd2bouncezd267z00zz__evmeaningz00(obj_t BgL_codez00_16,
		obj_t BgL_stackz00_17, obj_t BgL_denvz00_18)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 734 */
				long BgL_lenz00_1359;

				{	/* Eval/evmeaning.scm 734 */
					int BgL_arg2242z00_1369;

					BgL_arg2242z00_1369 = VECTOR_LENGTH(BgL_codez00_16);
					BgL_lenz00_1359 = ((long) (BgL_arg2242z00_1369) - ((long) 2));
				}
				{
					long BgL_iz00_1361;

					BgL_iz00_1361 = ((long) 0);
				BgL_zc3anonymousza32236ze3z83_1362:
					if ((BgL_iz00_1361 < BgL_lenz00_1359))
						{	/* Eval/evmeaning.scm 737 */
							obj_t BgL__ortest_1880z00_1364;

							{	/* Eval/evmeaning.scm 737 */
								obj_t BgL_arg2239z00_1366;

								{	/* Eval/evmeaning.scm 737 */
									long BgL_arg2240z00_1367;

									BgL_arg2240z00_1367 = (BgL_iz00_1361 + ((long) 2));
									BgL_arg2239z00_1366 =
										VECTOR_REF(BgL_codez00_16, (int) (BgL_arg2240z00_1367));
								}
								BgL__ortest_1880z00_1364 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_arg2239z00_1366,
									BgL_stackz00_17, BgL_denvz00_18);
							}
							if (CBOOL(BgL__ortest_1880z00_1364))
								{	/* Eval/evmeaning.scm 737 */
									return BgL__ortest_1880z00_1364;
								}
							else
								{
									long BgL_iz00_5448;

									BgL_iz00_5448 = (BgL_iz00_1361 + ((long) 1));
									BgL_iz00_1361 = BgL_iz00_5448;
									goto BgL_zc3anonymousza32236ze3z83_1362;
								}
						}
					else
						{	/* Eval/evmeaning.scm 736 */
							return BFALSE;
						}
				}
			}
		}
	}



/* evmeaning-bounce-64 */
	obj_t BGl_evmeaningzd2bouncezd264z00zz__evmeaningz00(obj_t BgL_codez00_19,
		obj_t BgL_stackz00_20, obj_t BgL_denvz00_21)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 712 */
				obj_t BgL_bodyz00_1371;

				obj_t BgL_protectz00_1372;

				BgL_bodyz00_1371 = VECTOR_REF(BgL_codez00_19, (int) (((long) 2)));
				BgL_protectz00_1372 = VECTOR_REF(BgL_codez00_19, (int) (((long) 3)));
				{	/* Eval/evmeaning.scm 714 */
					obj_t BgL_val1881z00_1373;

					BgL_val1881z00_1373 =
						BGl_zc3exitza32247ze3z83zz__evmeaningz00(BgL_denvz00_21,
						BgL_stackz00_20, BgL_bodyz00_1371);
					BGl_evmeaningz00zz__evmeaningz00(BgL_protectz00_1372, BgL_stackz00_20,
						BgL_denvz00_21);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1881z00_1373)))
						{	/* Eval/evmeaning.scm 715 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1881z00_1373),
								CDR(BgL_val1881z00_1373));
						}
					else
						{	/* Eval/evmeaning.scm 715 */
							return BgL_val1881z00_1373;
						}
				}
			}
		}
	}



/* <exit:2247> */
	obj_t BGl_zc3exitza32247ze3z83zz__evmeaningz00(obj_t BgL_denvz00_4581,
		obj_t BgL_stackz00_4580, obj_t BgL_bodyz00_4579)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 715 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1882z00_1378;

			if (SET_EXIT(BgL_an_exit1882z00_1378))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1882z00_1378 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 715 */

						PUSH_EXIT(BgL_an_exit1882z00_1378, ((long) 0));
						{	/* Eval/evmeaning.scm 714 */
							obj_t BgL_val1883z00_1379;

							BgL_val1883z00_1379 =
								BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4579,
								BgL_stackz00_4580, BgL_denvz00_4581);
							POP_EXIT();
							return BgL_val1883z00_1379;
						}
					}
				}
		}
	}



/* evmeaning-bounce-63 */
	obj_t BGl_evmeaningzd2bouncezd263z00zz__evmeaningz00(obj_t BgL_codez00_22,
		obj_t BgL_stackz00_23, obj_t BgL_denvz00_24)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 688 */
				obj_t BgL_varz00_1380;

				BgL_varz00_1380 = VECTOR_REF(BgL_codez00_22, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 688 */
					obj_t BgL_valz00_1381;

					BgL_valz00_1381 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_22,
							(int) (((long) 3))), BNIL, BgL_denvz00_24);
					{	/* Eval/evmeaning.scm 689 */
						obj_t BgL_modz00_1382;

						BgL_modz00_1382 = VECTOR_REF(BgL_codez00_22, (int) (((long) 4)));
						{	/* Eval/evmeaning.scm 690 */

							{	/* Eval/evmeaning.scm 691 */
								obj_t BgL_cellz00_1383;

								BgL_cellz00_1383 =
									BGl_evmodulezd2findzd2globalz00zz__evmodulez00
									(BgL_modz00_1382, BgL_varz00_1380);
								{	/* Eval/evmeaning.scm 692 */
									bool_t BgL_testz00_5475;

									{	/* Eval/evmeaning.scm 692 */
										bool_t BgL_testz00_5476;

										if (VECTORP(BgL_cellz00_1383))
											{	/* Eval/evmeaning.scm 692 */
												int BgL_arg2682z00_3011;

												BgL_arg2682z00_3011 = VECTOR_LENGTH(BgL_cellz00_1383);
												BgL_testz00_5476 =
													((long) (BgL_arg2682z00_3011) == ((long) 3));
											}
										else
											{	/* Eval/evmeaning.scm 692 */
												BgL_testz00_5476 = ((bool_t) 0);
											}
										if (BgL_testz00_5476)
											{	/* Eval/evmeaning.scm 692 */
												if (
													(VECTOR_REF(BgL_cellz00_1383,
															(int) (((long) 0))) == BINT(((long) 1))))
													{	/* Eval/evmeaning.scm 693 */
														BgL_testz00_5475 = ((bool_t) 0);
													}
												else
													{	/* Eval/evmeaning.scm 693 */
														BgL_testz00_5475 = ((bool_t) 1);
													}
											}
										else
											{	/* Eval/evmeaning.scm 692 */
												BgL_testz00_5475 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_5475)
										{	/* Eval/evmeaning.scm 695 */
											obj_t BgL_oldz00_1385;

											BgL_oldz00_1385 =
												VECTOR_REF(BgL_cellz00_1383, (int) (((long) 2)));
											BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
												(BgL_codez00_22, BgL_cellz00_1383, BgL_valz00_1381);
											{	/* Eval/evmeaning.scm 697 */
												bool_t BgL_testz00_5490;

												if ((BgL_oldz00_1385 == BgL_modz00_1382))
													{	/* Eval/evmeaning.scm 697 */
														if (
															(BgL_oldz00_1385 ==
																BGl_evmodulezd2uninitializa7edz75zz__evmodulez00))
															{	/* Eval/evmeaning.scm 698 */
																BgL_testz00_5490 = ((bool_t) 0);
															}
														else
															{	/* Eval/evmeaning.scm 698 */
																BgL_testz00_5490 = ((bool_t) 1);
															}
													}
												else
													{	/* Eval/evmeaning.scm 697 */
														BgL_testz00_5490 = ((bool_t) 0);
													}
												if (BgL_testz00_5490)
													{	/* Eval/evmeaning.scm 699 */
														obj_t BgL_list2250z00_1387;

														{	/* Eval/evmeaning.scm 699 */
															obj_t BgL_arg2252z00_1389;

															{	/* Eval/evmeaning.scm 699 */
																obj_t BgL_arg2253z00_1390;

																{	/* Eval/evmeaning.scm 699 */
																	obj_t BgL_arg2256z00_1392;

																	BgL_arg2256z00_1392 =
																		MAKE_PAIR(BgL_varz00_1380, BNIL);
																	BgL_arg2253z00_1390 =
																		MAKE_PAIR(BGl_string2959z00zz__evmeaningz00,
																		BgL_arg2256z00_1392);
																}
																BgL_arg2252z00_1389 =
																	MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																	BgL_arg2253z00_1390);
															}
															BgL_list2250z00_1387 =
																MAKE_PAIR(BGl_string2941z00zz__evmeaningz00,
																BgL_arg2252z00_1389);
														}
														BGl_evmeaningzd2warningzd2zz__everrorz00
															(BgL_codez00_22, BgL_list2250z00_1387);
													}
												else
													{	/* Eval/evmeaning.scm 697 */
														BFALSE;
													}
											}
										}
									else
										{	/* Eval/evmeaning.scm 704 */
											obj_t BgL_cellz00_1395;

											{	/* Eval/evmeaning.scm 704 */
												obj_t BgL_v1927z00_1396;

												BgL_v1927z00_1396 = create_vector((int) (((long) 3)));
												VECTOR_SET(BgL_v1927z00_1396,
													(int) (((long) 2)), BUNSPEC);
												VECTOR_SET(BgL_v1927z00_1396,
													(int) (((long) 1)), BgL_varz00_1380);
												VECTOR_SET(BgL_v1927z00_1396,
													(int) (((long) 0)), BINT(((long) 2)));
												BgL_cellz00_1395 = BgL_v1927z00_1396;
											}
											BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
												(BgL_modz00_1382, BgL_varz00_1380, BgL_cellz00_1395);
											VECTOR_SET(BgL_cellz00_1395, (int) (((long) 2)),
												BgL_valz00_1381);
								}}
								return BgL_varz00_1380;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-54 */
	obj_t BGl_evmeaningzd2bouncezd254z00zz__evmeaningz00(obj_t BgL_codez00_25,
		obj_t BgL_stackz00_26, obj_t BgL_denvz00_27)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 669 */
				obj_t BgL_bodyz00_1405;

				BgL_bodyz00_1405 = VECTOR_REF(BgL_codez00_25, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 672 */
					obj_t BgL_zc3anonymousza32269ze3z83_4388;

					BgL_zc3anonymousza32269ze3z83_4388 =
						make_va_procedure(BGl_zc3anonymousza32269ze3z83zz__evmeaningz00,
						(int) (((long) -4)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32269ze3z83_4388,
						(int) (((long) 0)), BgL_bodyz00_1405);
					PROCEDURE_SET(BgL_zc3anonymousza32269ze3z83_4388,
						(int) (((long) 1)), BgL_stackz00_26);
					PROCEDURE_SET(BgL_zc3anonymousza32269ze3z83_4388,
						(int) (((long) 2)), BgL_denvz00_27);
					{	/* Eval/evmeaning.scm 670 */
						obj_t BgL_arg2432z00_3043;

						{	/* Eval/evmeaning.scm 670 */
							obj_t BgL_newz00_3047;

							BgL_newz00_3047 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 670 */
								int BgL_auxz00_5526;

								BgL_auxz00_5526 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3047, BgL_auxz00_5526, BgL_stackz00_26);
							}
							{	/* Eval/evmeaning.scm 670 */
								int BgL_auxz00_5529;

								BgL_auxz00_5529 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3047, BgL_auxz00_5529, BgL_bodyz00_1405);
							}
							{	/* Eval/evmeaning.scm 670 */
								obj_t BgL_auxz00_5534;

								int BgL_auxz00_5532;

								BgL_auxz00_5534 = BINT(((long) -4));
								BgL_auxz00_5532 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3047, BgL_auxz00_5532, BgL_auxz00_5534);
							}
							BgL_arg2432z00_3043 = BgL_newz00_3047;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32269ze3z83_4388,
							BgL_arg2432z00_3043);
						BgL_arg2432z00_3043;
					}
					return BgL_zc3anonymousza32269ze3z83_4388;
				}
			}
		}
	}



/* <anonymous:2269> */
	obj_t BGl_zc3anonymousza32269ze3z83zz__evmeaningz00(obj_t BgL_envz00_4389,
		obj_t BgL_xz00_4393, obj_t BgL_yz00_4394, obj_t BgL_za7za7_4395,
		obj_t BgL_tz00_4396)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 671 */
			{	/* Eval/evmeaning.scm 672 */
				obj_t BgL_bodyz00_4390;

				obj_t BgL_stackz00_4391;

				obj_t BgL_denvz00_4392;

				BgL_bodyz00_4390 = PROCEDURE_REF(BgL_envz00_4389, (int) (((long) 0)));
				BgL_stackz00_4391 = PROCEDURE_REF(BgL_envz00_4389, (int) (((long) 1)));
				BgL_denvz00_4392 = PROCEDURE_REF(BgL_envz00_4389, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1408;

					obj_t BgL_yz00_1409;

					obj_t BgL_za7za7_1410;

					obj_t BgL_tz00_1411;

					BgL_xz00_1408 = BgL_xz00_4393;
					BgL_yz00_1409 = BgL_yz00_4394;
					BgL_za7za7_1410 = BgL_za7za7_4395;
					BgL_tz00_1411 = BgL_tz00_4396;
					{	/* Eval/evmeaning.scm 675 */
						obj_t BgL_arg2270z00_1414;

						{	/* Eval/evmeaning.scm 675 */
							obj_t BgL_arg2271z00_1415;

							{	/* Eval/evmeaning.scm 675 */
								obj_t BgL_arg2272z00_1416;

								{	/* Eval/evmeaning.scm 675 */
									obj_t BgL_arg2274z00_1417;

									BgL_arg2274z00_1417 =
										MAKE_PAIR(BgL_tz00_1411, BgL_stackz00_4391);
									BgL_arg2272z00_1416 =
										MAKE_PAIR(BgL_za7za7_1410, BgL_arg2274z00_1417);
								}
								BgL_arg2271z00_1415 =
									MAKE_PAIR(BgL_yz00_1409, BgL_arg2272z00_1416);
							}
							BgL_arg2270z00_1414 =
								MAKE_PAIR(BgL_xz00_1408, BgL_arg2271z00_1415);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4390,
							BgL_arg2270z00_1414, BgL_denvz00_4392);
					}
				}
			}
		}
	}



/* evmeaning-bounce-50 */
	obj_t BGl_evmeaningzd2bouncezd250z00zz__evmeaningz00(obj_t BgL_codez00_28,
		obj_t BgL_stackz00_29, obj_t BgL_denvz00_30)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 644 */
				obj_t BgL_bodyz00_1419;

				obj_t BgL_wherez00_1420;

				obj_t BgL_locz00_1421;

				BgL_bodyz00_1419 = VECTOR_REF(BgL_codez00_28, (int) (((long) 2)));
				BgL_wherez00_1420 = VECTOR_REF(BgL_codez00_28, (int) (((long) 3)));
				BgL_locz00_1421 = VECTOR_REF(BgL_codez00_28, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 649 */
					obj_t BgL_zc3anonymousza32278ze3z83_4397;

					BgL_zc3anonymousza32278ze3z83_4397 =
						make_va_procedure(BGl_zc3anonymousza32278ze3z83zz__evmeaningz00,
						(int) (((long) -4)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32278ze3z83_4397,
						(int) (((long) 0)), BgL_bodyz00_1419);
					PROCEDURE_SET(BgL_zc3anonymousza32278ze3z83_4397,
						(int) (((long) 1)), BgL_stackz00_29);
					PROCEDURE_SET(BgL_zc3anonymousza32278ze3z83_4397,
						(int) (((long) 2)), BgL_wherez00_1420);
					PROCEDURE_SET(BgL_zc3anonymousza32278ze3z83_4397,
						(int) (((long) 3)), BgL_locz00_1421);
					{	/* Eval/evmeaning.scm 647 */
						obj_t BgL_arg2432z00_3073;

						{	/* Eval/evmeaning.scm 647 */
							obj_t BgL_newz00_3077;

							BgL_newz00_3077 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 647 */
								int BgL_auxz00_5568;

								BgL_auxz00_5568 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3077, BgL_auxz00_5568, BgL_stackz00_29);
							}
							{	/* Eval/evmeaning.scm 647 */
								int BgL_auxz00_5571;

								BgL_auxz00_5571 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3077, BgL_auxz00_5571, BgL_bodyz00_1419);
							}
							{	/* Eval/evmeaning.scm 647 */
								obj_t BgL_auxz00_5576;

								int BgL_auxz00_5574;

								BgL_auxz00_5576 = BINT(((long) -4));
								BgL_auxz00_5574 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3077, BgL_auxz00_5574, BgL_auxz00_5576);
							}
							BgL_arg2432z00_3073 = BgL_newz00_3077;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32278ze3z83_4397,
							BgL_arg2432z00_3073);
						BgL_arg2432z00_3073;
					}
					return BgL_zc3anonymousza32278ze3z83_4397;
				}
			}
		}
	}



/* <anonymous:2278> */
	obj_t BGl_zc3anonymousza32278ze3z83zz__evmeaningz00(obj_t BgL_envz00_4398,
		obj_t BgL_xz00_4403, obj_t BgL_yz00_4404, obj_t BgL_za7za7_4405,
		obj_t BgL_tz00_4406)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 648 */
			{	/* Eval/evmeaning.scm 649 */
				obj_t BgL_bodyz00_4399;

				obj_t BgL_stackz00_4400;

				obj_t BgL_wherez00_4401;

				obj_t BgL_locz00_4402;

				BgL_bodyz00_4399 = PROCEDURE_REF(BgL_envz00_4398, (int) (((long) 0)));
				BgL_stackz00_4400 = PROCEDURE_REF(BgL_envz00_4398, (int) (((long) 1)));
				BgL_wherez00_4401 = PROCEDURE_REF(BgL_envz00_4398, (int) (((long) 2)));
				BgL_locz00_4402 = PROCEDURE_REF(BgL_envz00_4398, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1424;

					obj_t BgL_yz00_1425;

					obj_t BgL_za7za7_1426;

					obj_t BgL_tz00_1427;

					BgL_xz00_1424 = BgL_xz00_4403;
					BgL_yz00_1425 = BgL_yz00_4404;
					BgL_za7za7_1426 = BgL_za7za7_4405;
					BgL_tz00_1427 = BgL_tz00_4406;
					{	/* Eval/evmeaning.scm 649 */
						obj_t BgL_z12denvz12_1431;

						BgL_z12denvz12_1431 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 652 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1431, BgL_wherez00_4401,
								BgL_locz00_4402);
							{	/* Eval/evmeaning.scm 654 */
								obj_t BgL_resz00_1432;

								{	/* Eval/evmeaning.scm 659 */
									obj_t BgL_arg2279z00_1433;

									{	/* Eval/evmeaning.scm 659 */
										obj_t BgL_arg2280z00_1434;

										{	/* Eval/evmeaning.scm 659 */
											obj_t BgL_arg2281z00_1435;

											{	/* Eval/evmeaning.scm 659 */
												obj_t BgL_arg2282z00_1436;

												BgL_arg2282z00_1436 =
													MAKE_PAIR(BgL_tz00_1427, BgL_stackz00_4400);
												BgL_arg2281z00_1435 =
													MAKE_PAIR(BgL_za7za7_1426, BgL_arg2282z00_1436);
											}
											BgL_arg2280z00_1434 =
												MAKE_PAIR(BgL_yz00_1425, BgL_arg2281z00_1435);
										}
										BgL_arg2279z00_1433 =
											MAKE_PAIR(BgL_xz00_1424, BgL_arg2280z00_1434);
									}
									BgL_resz00_1432 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4399,
										BgL_arg2279z00_1433, BgL_z12denvz12_1431);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1431);
								return BgL_resz00_1432;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-53 */
	obj_t BGl_evmeaningzd2bouncezd253z00zz__evmeaningz00(obj_t BgL_codez00_31,
		obj_t BgL_stackz00_32, obj_t BgL_denvz00_33)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 632 */
				obj_t BgL_bodyz00_1438;

				BgL_bodyz00_1438 = VECTOR_REF(BgL_codez00_31, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 635 */
					obj_t BgL_zc3anonymousza32285ze3z83_4407;

					BgL_zc3anonymousza32285ze3z83_4407 =
						make_va_procedure(BGl_zc3anonymousza32285ze3z83zz__evmeaningz00,
						(int) (((long) -3)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32285ze3z83_4407,
						(int) (((long) 0)), BgL_bodyz00_1438);
					PROCEDURE_SET(BgL_zc3anonymousza32285ze3z83_4407,
						(int) (((long) 1)), BgL_stackz00_32);
					PROCEDURE_SET(BgL_zc3anonymousza32285ze3z83_4407,
						(int) (((long) 2)), BgL_denvz00_33);
					{	/* Eval/evmeaning.scm 633 */
						obj_t BgL_arg2432z00_3099;

						{	/* Eval/evmeaning.scm 633 */
							obj_t BgL_newz00_3103;

							BgL_newz00_3103 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 633 */
								int BgL_auxz00_5609;

								BgL_auxz00_5609 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3103, BgL_auxz00_5609, BgL_stackz00_32);
							}
							{	/* Eval/evmeaning.scm 633 */
								int BgL_auxz00_5612;

								BgL_auxz00_5612 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3103, BgL_auxz00_5612, BgL_bodyz00_1438);
							}
							{	/* Eval/evmeaning.scm 633 */
								obj_t BgL_auxz00_5617;

								int BgL_auxz00_5615;

								BgL_auxz00_5617 = BINT(((long) -3));
								BgL_auxz00_5615 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3103, BgL_auxz00_5615, BgL_auxz00_5617);
							}
							BgL_arg2432z00_3099 = BgL_newz00_3103;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32285ze3z83_4407,
							BgL_arg2432z00_3099);
						BgL_arg2432z00_3099;
					}
					return BgL_zc3anonymousza32285ze3z83_4407;
				}
			}
		}
	}



/* <anonymous:2285> */
	obj_t BGl_zc3anonymousza32285ze3z83zz__evmeaningz00(obj_t BgL_envz00_4408,
		obj_t BgL_xz00_4412, obj_t BgL_yz00_4413, obj_t BgL_za7za7_4414)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 634 */
			{	/* Eval/evmeaning.scm 635 */
				obj_t BgL_bodyz00_4409;

				obj_t BgL_stackz00_4410;

				obj_t BgL_denvz00_4411;

				BgL_bodyz00_4409 = PROCEDURE_REF(BgL_envz00_4408, (int) (((long) 0)));
				BgL_stackz00_4410 = PROCEDURE_REF(BgL_envz00_4408, (int) (((long) 1)));
				BgL_denvz00_4411 = PROCEDURE_REF(BgL_envz00_4408, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1441;

					obj_t BgL_yz00_1442;

					obj_t BgL_za7za7_1443;

					BgL_xz00_1441 = BgL_xz00_4412;
					BgL_yz00_1442 = BgL_yz00_4413;
					BgL_za7za7_1443 = BgL_za7za7_4414;
					{	/* Eval/evmeaning.scm 637 */
						obj_t BgL_arg2286z00_1446;

						{	/* Eval/evmeaning.scm 637 */
							obj_t BgL_arg2289z00_1447;

							{	/* Eval/evmeaning.scm 637 */
								obj_t BgL_arg2290z00_1448;

								BgL_arg2290z00_1448 =
									MAKE_PAIR(BgL_za7za7_1443, BgL_stackz00_4410);
								BgL_arg2289z00_1447 =
									MAKE_PAIR(BgL_yz00_1442, BgL_arg2290z00_1448);
							}
							BgL_arg2286z00_1446 =
								MAKE_PAIR(BgL_xz00_1441, BgL_arg2289z00_1447);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4409,
							BgL_arg2286z00_1446, BgL_denvz00_4411);
					}
				}
			}
		}
	}



/* evmeaning-bounce-49 */
	obj_t BGl_evmeaningzd2bouncezd249z00zz__evmeaningz00(obj_t BgL_codez00_34,
		obj_t BgL_stackz00_35, obj_t BgL_denvz00_36)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 610 */
				obj_t BgL_bodyz00_1450;

				obj_t BgL_wherez00_1451;

				obj_t BgL_locz00_1452;

				BgL_bodyz00_1450 = VECTOR_REF(BgL_codez00_34, (int) (((long) 2)));
				BgL_wherez00_1451 = VECTOR_REF(BgL_codez00_34, (int) (((long) 3)));
				BgL_locz00_1452 = VECTOR_REF(BgL_codez00_34, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 615 */
					obj_t BgL_zc3anonymousza32293ze3z83_4415;

					BgL_zc3anonymousza32293ze3z83_4415 =
						make_va_procedure(BGl_zc3anonymousza32293ze3z83zz__evmeaningz00,
						(int) (((long) -3)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_4415,
						(int) (((long) 0)), BgL_bodyz00_1450);
					PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_4415,
						(int) (((long) 1)), BgL_stackz00_35);
					PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_4415,
						(int) (((long) 2)), BgL_wherez00_1451);
					PROCEDURE_SET(BgL_zc3anonymousza32293ze3z83_4415,
						(int) (((long) 3)), BgL_locz00_1452);
					{	/* Eval/evmeaning.scm 613 */
						obj_t BgL_arg2432z00_3129;

						{	/* Eval/evmeaning.scm 613 */
							obj_t BgL_newz00_3133;

							BgL_newz00_3133 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 613 */
								int BgL_auxz00_5650;

								BgL_auxz00_5650 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3133, BgL_auxz00_5650, BgL_stackz00_35);
							}
							{	/* Eval/evmeaning.scm 613 */
								int BgL_auxz00_5653;

								BgL_auxz00_5653 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3133, BgL_auxz00_5653, BgL_bodyz00_1450);
							}
							{	/* Eval/evmeaning.scm 613 */
								obj_t BgL_auxz00_5658;

								int BgL_auxz00_5656;

								BgL_auxz00_5658 = BINT(((long) -3));
								BgL_auxz00_5656 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3133, BgL_auxz00_5656, BgL_auxz00_5658);
							}
							BgL_arg2432z00_3129 = BgL_newz00_3133;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32293ze3z83_4415,
							BgL_arg2432z00_3129);
						BgL_arg2432z00_3129;
					}
					return BgL_zc3anonymousza32293ze3z83_4415;
				}
			}
		}
	}



/* <anonymous:2293> */
	obj_t BGl_zc3anonymousza32293ze3z83zz__evmeaningz00(obj_t BgL_envz00_4416,
		obj_t BgL_xz00_4421, obj_t BgL_yz00_4422, obj_t BgL_za7za7_4423)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 614 */
			{	/* Eval/evmeaning.scm 615 */
				obj_t BgL_bodyz00_4417;

				obj_t BgL_stackz00_4418;

				obj_t BgL_wherez00_4419;

				obj_t BgL_locz00_4420;

				BgL_bodyz00_4417 = PROCEDURE_REF(BgL_envz00_4416, (int) (((long) 0)));
				BgL_stackz00_4418 = PROCEDURE_REF(BgL_envz00_4416, (int) (((long) 1)));
				BgL_wherez00_4419 = PROCEDURE_REF(BgL_envz00_4416, (int) (((long) 2)));
				BgL_locz00_4420 = PROCEDURE_REF(BgL_envz00_4416, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1455;

					obj_t BgL_yz00_1456;

					obj_t BgL_za7za7_1457;

					BgL_xz00_1455 = BgL_xz00_4421;
					BgL_yz00_1456 = BgL_yz00_4422;
					BgL_za7za7_1457 = BgL_za7za7_4423;
					{	/* Eval/evmeaning.scm 615 */
						obj_t BgL_z12denvz12_1461;

						BgL_z12denvz12_1461 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 618 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1461, BgL_wherez00_4419,
								BgL_locz00_4420);
							{	/* Eval/evmeaning.scm 620 */
								obj_t BgL_resz00_1462;

								{	/* Eval/evmeaning.scm 623 */
									obj_t BgL_arg2294z00_1463;

									{	/* Eval/evmeaning.scm 623 */
										obj_t BgL_arg2295z00_1464;

										{	/* Eval/evmeaning.scm 623 */
											obj_t BgL_arg2296z00_1465;

											BgL_arg2296z00_1465 =
												MAKE_PAIR(BgL_za7za7_1457, BgL_stackz00_4418);
											BgL_arg2295z00_1464 =
												MAKE_PAIR(BgL_yz00_1456, BgL_arg2296z00_1465);
										}
										BgL_arg2294z00_1463 =
											MAKE_PAIR(BgL_xz00_1455, BgL_arg2295z00_1464);
									}
									BgL_resz00_1462 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4417,
										BgL_arg2294z00_1463, BgL_z12denvz12_1461);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1461);
								return BgL_resz00_1462;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-52 */
	obj_t BGl_evmeaningzd2bouncezd252z00zz__evmeaningz00(obj_t BgL_codez00_37,
		obj_t BgL_stackz00_38, obj_t BgL_denvz00_39)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 600 */
				obj_t BgL_bodyz00_1467;

				BgL_bodyz00_1467 = VECTOR_REF(BgL_codez00_37, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 603 */
					obj_t BgL_zc3anonymousza32301ze3z83_4424;

					BgL_zc3anonymousza32301ze3z83_4424 =
						make_va_procedure(BGl_zc3anonymousza32301ze3z83zz__evmeaningz00,
						(int) (((long) -2)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32301ze3z83_4424,
						(int) (((long) 0)), BgL_bodyz00_1467);
					PROCEDURE_SET(BgL_zc3anonymousza32301ze3z83_4424,
						(int) (((long) 1)), BgL_stackz00_38);
					PROCEDURE_SET(BgL_zc3anonymousza32301ze3z83_4424,
						(int) (((long) 2)), BgL_denvz00_39);
					{	/* Eval/evmeaning.scm 601 */
						obj_t BgL_arg2432z00_3155;

						{	/* Eval/evmeaning.scm 601 */
							obj_t BgL_newz00_3159;

							BgL_newz00_3159 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 601 */
								int BgL_auxz00_5690;

								BgL_auxz00_5690 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3159, BgL_auxz00_5690, BgL_stackz00_38);
							}
							{	/* Eval/evmeaning.scm 601 */
								int BgL_auxz00_5693;

								BgL_auxz00_5693 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3159, BgL_auxz00_5693, BgL_bodyz00_1467);
							}
							{	/* Eval/evmeaning.scm 601 */
								obj_t BgL_auxz00_5698;

								int BgL_auxz00_5696;

								BgL_auxz00_5698 = BINT(((long) -2));
								BgL_auxz00_5696 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3159, BgL_auxz00_5696, BgL_auxz00_5698);
							}
							BgL_arg2432z00_3155 = BgL_newz00_3159;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32301ze3z83_4424,
							BgL_arg2432z00_3155);
						BgL_arg2432z00_3155;
					}
					return BgL_zc3anonymousza32301ze3z83_4424;
				}
			}
		}
	}



/* <anonymous:2301> */
	obj_t BGl_zc3anonymousza32301ze3z83zz__evmeaningz00(obj_t BgL_envz00_4425,
		obj_t BgL_xz00_4429, obj_t BgL_yz00_4430)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 602 */
			{	/* Eval/evmeaning.scm 603 */
				obj_t BgL_bodyz00_4426;

				obj_t BgL_stackz00_4427;

				obj_t BgL_denvz00_4428;

				BgL_bodyz00_4426 = PROCEDURE_REF(BgL_envz00_4425, (int) (((long) 0)));
				BgL_stackz00_4427 = PROCEDURE_REF(BgL_envz00_4425, (int) (((long) 1)));
				BgL_denvz00_4428 = PROCEDURE_REF(BgL_envz00_4425, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1470;

					obj_t BgL_yz00_1471;

					BgL_xz00_1470 = BgL_xz00_4429;
					BgL_yz00_1471 = BgL_yz00_4430;
					{	/* Eval/evmeaning.scm 604 */
						obj_t BgL_arg2302z00_1474;

						{	/* Eval/evmeaning.scm 604 */
							obj_t BgL_arg2303z00_1475;

							BgL_arg2303z00_1475 = MAKE_PAIR(BgL_yz00_1471, BgL_stackz00_4427);
							BgL_arg2302z00_1474 =
								MAKE_PAIR(BgL_xz00_1470, BgL_arg2303z00_1475);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4426,
							BgL_arg2302z00_1474, BgL_denvz00_4428);
					}
				}
			}
		}
	}



/* evmeaning-bounce-48 */
	obj_t BGl_evmeaningzd2bouncezd248z00zz__evmeaningz00(obj_t BgL_codez00_40,
		obj_t BgL_stackz00_41, obj_t BgL_denvz00_42)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 582 */
				obj_t BgL_bodyz00_1477;

				obj_t BgL_wherez00_1478;

				obj_t BgL_locz00_1479;

				BgL_bodyz00_1477 = VECTOR_REF(BgL_codez00_40, (int) (((long) 2)));
				BgL_wherez00_1478 = VECTOR_REF(BgL_codez00_40, (int) (((long) 3)));
				BgL_locz00_1479 = VECTOR_REF(BgL_codez00_40, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 587 */
					obj_t BgL_zc3anonymousza32306ze3z83_4431;

					BgL_zc3anonymousza32306ze3z83_4431 =
						make_va_procedure(BGl_zc3anonymousza32306ze3z83zz__evmeaningz00,
						(int) (((long) -2)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32306ze3z83_4431,
						(int) (((long) 0)), BgL_bodyz00_1477);
					PROCEDURE_SET(BgL_zc3anonymousza32306ze3z83_4431,
						(int) (((long) 1)), BgL_stackz00_41);
					PROCEDURE_SET(BgL_zc3anonymousza32306ze3z83_4431,
						(int) (((long) 2)), BgL_wherez00_1478);
					PROCEDURE_SET(BgL_zc3anonymousza32306ze3z83_4431,
						(int) (((long) 3)), BgL_locz00_1479);
					{	/* Eval/evmeaning.scm 585 */
						obj_t BgL_arg2432z00_3185;

						{	/* Eval/evmeaning.scm 585 */
							obj_t BgL_newz00_3189;

							BgL_newz00_3189 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 585 */
								int BgL_auxz00_5730;

								BgL_auxz00_5730 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3189, BgL_auxz00_5730, BgL_stackz00_41);
							}
							{	/* Eval/evmeaning.scm 585 */
								int BgL_auxz00_5733;

								BgL_auxz00_5733 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3189, BgL_auxz00_5733, BgL_bodyz00_1477);
							}
							{	/* Eval/evmeaning.scm 585 */
								obj_t BgL_auxz00_5738;

								int BgL_auxz00_5736;

								BgL_auxz00_5738 = BINT(((long) -2));
								BgL_auxz00_5736 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3189, BgL_auxz00_5736, BgL_auxz00_5738);
							}
							BgL_arg2432z00_3185 = BgL_newz00_3189;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32306ze3z83_4431,
							BgL_arg2432z00_3185);
						BgL_arg2432z00_3185;
					}
					return BgL_zc3anonymousza32306ze3z83_4431;
				}
			}
		}
	}



/* <anonymous:2306> */
	obj_t BGl_zc3anonymousza32306ze3z83zz__evmeaningz00(obj_t BgL_envz00_4432,
		obj_t BgL_xz00_4437, obj_t BgL_yz00_4438)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 586 */
			{	/* Eval/evmeaning.scm 587 */
				obj_t BgL_bodyz00_4433;

				obj_t BgL_stackz00_4434;

				obj_t BgL_wherez00_4435;

				obj_t BgL_locz00_4436;

				BgL_bodyz00_4433 = PROCEDURE_REF(BgL_envz00_4432, (int) (((long) 0)));
				BgL_stackz00_4434 = PROCEDURE_REF(BgL_envz00_4432, (int) (((long) 1)));
				BgL_wherez00_4435 = PROCEDURE_REF(BgL_envz00_4432, (int) (((long) 2)));
				BgL_locz00_4436 = PROCEDURE_REF(BgL_envz00_4432, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1482;

					obj_t BgL_yz00_1483;

					BgL_xz00_1482 = BgL_xz00_4437;
					BgL_yz00_1483 = BgL_yz00_4438;
					{	/* Eval/evmeaning.scm 587 */
						obj_t BgL_z12denvz12_1487;

						BgL_z12denvz12_1487 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 590 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1487, BgL_wherez00_4435,
								BgL_locz00_4436);
							{	/* Eval/evmeaning.scm 592 */
								obj_t BgL_rz00_1488;

								{	/* Eval/evmeaning.scm 592 */
									obj_t BgL_arg2307z00_1489;

									{	/* Eval/evmeaning.scm 592 */
										obj_t BgL_arg2308z00_1490;

										BgL_arg2308z00_1490 =
											MAKE_PAIR(BgL_yz00_1483, BgL_stackz00_4434);
										BgL_arg2307z00_1489 =
											MAKE_PAIR(BgL_xz00_1482, BgL_arg2308z00_1490);
									}
									BgL_rz00_1488 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4433,
										BgL_arg2307z00_1489, BgL_z12denvz12_1487);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1487);
								return BgL_rz00_1488;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-51 */
	obj_t BGl_evmeaningzd2bouncezd251z00zz__evmeaningz00(obj_t BgL_codez00_43,
		obj_t BgL_stackz00_44, obj_t BgL_denvz00_45)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 572 */
				obj_t BgL_bodyz00_1492;

				BgL_bodyz00_1492 = VECTOR_REF(BgL_codez00_43, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 575 */
					obj_t BgL_zc3anonymousza32311ze3z83_4439;

					BgL_zc3anonymousza32311ze3z83_4439 =
						make_va_procedure(BGl_zc3anonymousza32311ze3z83zz__evmeaningz00,
						(int) (((long) -1)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32311ze3z83_4439,
						(int) (((long) 0)), BgL_bodyz00_1492);
					PROCEDURE_SET(BgL_zc3anonymousza32311ze3z83_4439,
						(int) (((long) 1)), BgL_stackz00_44);
					PROCEDURE_SET(BgL_zc3anonymousza32311ze3z83_4439,
						(int) (((long) 2)), BgL_denvz00_45);
					{	/* Eval/evmeaning.scm 573 */
						obj_t BgL_arg2432z00_3211;

						{	/* Eval/evmeaning.scm 573 */
							obj_t BgL_newz00_3215;

							BgL_newz00_3215 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 573 */
								int BgL_auxz00_5769;

								BgL_auxz00_5769 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3215, BgL_auxz00_5769, BgL_stackz00_44);
							}
							{	/* Eval/evmeaning.scm 573 */
								int BgL_auxz00_5772;

								BgL_auxz00_5772 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3215, BgL_auxz00_5772, BgL_bodyz00_1492);
							}
							{	/* Eval/evmeaning.scm 573 */
								obj_t BgL_auxz00_5777;

								int BgL_auxz00_5775;

								BgL_auxz00_5777 = BINT(((long) -1));
								BgL_auxz00_5775 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3215, BgL_auxz00_5775, BgL_auxz00_5777);
							}
							BgL_arg2432z00_3211 = BgL_newz00_3215;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32311ze3z83_4439,
							BgL_arg2432z00_3211);
						BgL_arg2432z00_3211;
					}
					return BgL_zc3anonymousza32311ze3z83_4439;
				}
			}
		}
	}



/* <anonymous:2311> */
	obj_t BGl_zc3anonymousza32311ze3z83zz__evmeaningz00(obj_t BgL_envz00_4440,
		obj_t BgL_xz00_4444)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 574 */
			{	/* Eval/evmeaning.scm 575 */
				obj_t BgL_bodyz00_4441;

				obj_t BgL_stackz00_4442;

				obj_t BgL_denvz00_4443;

				BgL_bodyz00_4441 = PROCEDURE_REF(BgL_envz00_4440, (int) (((long) 0)));
				BgL_stackz00_4442 = PROCEDURE_REF(BgL_envz00_4440, (int) (((long) 1)));
				BgL_denvz00_4443 = PROCEDURE_REF(BgL_envz00_4440, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1495;

					BgL_xz00_1495 = BgL_xz00_4444;
					{	/* Eval/evmeaning.scm 576 */
						obj_t BgL_arg2312z00_1498;

						BgL_arg2312z00_1498 = MAKE_PAIR(BgL_xz00_1495, BgL_stackz00_4442);
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4441,
							BgL_arg2312z00_1498, BgL_denvz00_4443);
					}
				}
			}
		}
	}



/* evmeaning-bounce-47 */
	obj_t BGl_evmeaningzd2bouncezd247z00zz__evmeaningz00(obj_t BgL_codez00_46,
		obj_t BgL_stackz00_47, obj_t BgL_denvz00_48)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 554 */
				obj_t BgL_bodyz00_1500;

				obj_t BgL_wherez00_1501;

				obj_t BgL_locz00_1502;

				BgL_bodyz00_1500 = VECTOR_REF(BgL_codez00_46, (int) (((long) 2)));
				BgL_wherez00_1501 = VECTOR_REF(BgL_codez00_46, (int) (((long) 3)));
				BgL_locz00_1502 = VECTOR_REF(BgL_codez00_46, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 559 */
					obj_t BgL_zc3anonymousza32315ze3z83_4445;

					BgL_zc3anonymousza32315ze3z83_4445 =
						make_va_procedure(BGl_zc3anonymousza32315ze3z83zz__evmeaningz00,
						(int) (((long) -1)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32315ze3z83_4445,
						(int) (((long) 0)), BgL_bodyz00_1500);
					PROCEDURE_SET(BgL_zc3anonymousza32315ze3z83_4445,
						(int) (((long) 1)), BgL_stackz00_47);
					PROCEDURE_SET(BgL_zc3anonymousza32315ze3z83_4445,
						(int) (((long) 2)), BgL_wherez00_1501);
					PROCEDURE_SET(BgL_zc3anonymousza32315ze3z83_4445,
						(int) (((long) 3)), BgL_locz00_1502);
					{	/* Eval/evmeaning.scm 557 */
						obj_t BgL_arg2432z00_3241;

						{	/* Eval/evmeaning.scm 557 */
							obj_t BgL_newz00_3245;

							BgL_newz00_3245 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 557 */
								int BgL_auxz00_5808;

								BgL_auxz00_5808 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3245, BgL_auxz00_5808, BgL_stackz00_47);
							}
							{	/* Eval/evmeaning.scm 557 */
								int BgL_auxz00_5811;

								BgL_auxz00_5811 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3245, BgL_auxz00_5811, BgL_bodyz00_1500);
							}
							{	/* Eval/evmeaning.scm 557 */
								obj_t BgL_auxz00_5816;

								int BgL_auxz00_5814;

								BgL_auxz00_5816 = BINT(((long) -1));
								BgL_auxz00_5814 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3245, BgL_auxz00_5814, BgL_auxz00_5816);
							}
							BgL_arg2432z00_3241 = BgL_newz00_3245;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32315ze3z83_4445,
							BgL_arg2432z00_3241);
						BgL_arg2432z00_3241;
					}
					return BgL_zc3anonymousza32315ze3z83_4445;
				}
			}
		}
	}



/* <anonymous:2315> */
	obj_t BGl_zc3anonymousza32315ze3z83zz__evmeaningz00(obj_t BgL_envz00_4446,
		obj_t BgL_xz00_4451)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 558 */
			{	/* Eval/evmeaning.scm 559 */
				obj_t BgL_bodyz00_4447;

				obj_t BgL_stackz00_4448;

				obj_t BgL_wherez00_4449;

				obj_t BgL_locz00_4450;

				BgL_bodyz00_4447 = PROCEDURE_REF(BgL_envz00_4446, (int) (((long) 0)));
				BgL_stackz00_4448 = PROCEDURE_REF(BgL_envz00_4446, (int) (((long) 1)));
				BgL_wherez00_4449 = PROCEDURE_REF(BgL_envz00_4446, (int) (((long) 2)));
				BgL_locz00_4450 = PROCEDURE_REF(BgL_envz00_4446, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1505;

					BgL_xz00_1505 = BgL_xz00_4451;
					{	/* Eval/evmeaning.scm 559 */
						obj_t BgL_z12denvz12_1509;

						BgL_z12denvz12_1509 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 562 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1509, BgL_wherez00_4449,
								BgL_locz00_4450);
							{	/* Eval/evmeaning.scm 564 */
								obj_t BgL_resz00_1510;

								{	/* Eval/evmeaning.scm 564 */
									obj_t BgL_arg2316z00_1511;

									BgL_arg2316z00_1511 =
										MAKE_PAIR(BgL_xz00_1505, BgL_stackz00_4448);
									BgL_resz00_1510 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4447,
										BgL_arg2316z00_1511, BgL_z12denvz12_1509);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1509);
								return BgL_resz00_1510;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-46 */
	obj_t BGl_evmeaningzd2bouncezd246z00zz__evmeaningz00(obj_t BgL_codez00_49,
		obj_t BgL_stackz00_50, obj_t BgL_denvz00_51)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 542 */
				obj_t BgL_bodyz00_1513;

				BgL_bodyz00_1513 = VECTOR_REF(BgL_codez00_49, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 545 */
					obj_t BgL_zc3anonymousza32319ze3z83_4452;

					BgL_zc3anonymousza32319ze3z83_4452 =
						make_fx_procedure(BGl_zc3anonymousza32319ze3z83zz__evmeaningz00,
						(int) (((long) 4)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32319ze3z83_4452,
						(int) (((long) 0)), BgL_bodyz00_1513);
					PROCEDURE_SET(BgL_zc3anonymousza32319ze3z83_4452,
						(int) (((long) 1)), BgL_stackz00_50);
					PROCEDURE_SET(BgL_zc3anonymousza32319ze3z83_4452,
						(int) (((long) 2)), BgL_denvz00_51);
					{	/* Eval/evmeaning.scm 543 */
						obj_t BgL_arg2432z00_3267;

						{	/* Eval/evmeaning.scm 543 */
							obj_t BgL_newz00_3271;

							BgL_newz00_3271 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 543 */
								int BgL_auxz00_5846;

								BgL_auxz00_5846 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3271, BgL_auxz00_5846, BgL_stackz00_50);
							}
							{	/* Eval/evmeaning.scm 543 */
								int BgL_auxz00_5849;

								BgL_auxz00_5849 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3271, BgL_auxz00_5849, BgL_bodyz00_1513);
							}
							{	/* Eval/evmeaning.scm 543 */
								obj_t BgL_auxz00_5854;

								int BgL_auxz00_5852;

								BgL_auxz00_5854 = BINT(((long) 4));
								BgL_auxz00_5852 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3271, BgL_auxz00_5852, BgL_auxz00_5854);
							}
							BgL_arg2432z00_3267 = BgL_newz00_3271;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32319ze3z83_4452,
							BgL_arg2432z00_3267);
						BgL_arg2432z00_3267;
					}
					return BgL_zc3anonymousza32319ze3z83_4452;
				}
			}
		}
	}



/* <anonymous:2319> */
	obj_t BGl_zc3anonymousza32319ze3z83zz__evmeaningz00(obj_t BgL_envz00_4453,
		obj_t BgL_xz00_4457, obj_t BgL_yz00_4458, obj_t BgL_za7za7_4459,
		obj_t BgL_tz00_4460)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 544 */
			{	/* Eval/evmeaning.scm 545 */
				obj_t BgL_bodyz00_4454;

				obj_t BgL_stackz00_4455;

				obj_t BgL_denvz00_4456;

				BgL_bodyz00_4454 = PROCEDURE_REF(BgL_envz00_4453, (int) (((long) 0)));
				BgL_stackz00_4455 = PROCEDURE_REF(BgL_envz00_4453, (int) (((long) 1)));
				BgL_denvz00_4456 = PROCEDURE_REF(BgL_envz00_4453, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1516;

					obj_t BgL_yz00_1517;

					obj_t BgL_za7za7_1518;

					obj_t BgL_tz00_1519;

					BgL_xz00_1516 = BgL_xz00_4457;
					BgL_yz00_1517 = BgL_yz00_4458;
					BgL_za7za7_1518 = BgL_za7za7_4459;
					BgL_tz00_1519 = BgL_tz00_4460;
					{	/* Eval/evmeaning.scm 547 */
						obj_t BgL_arg2320z00_1522;

						{	/* Eval/evmeaning.scm 547 */
							obj_t BgL_arg2321z00_1523;

							{	/* Eval/evmeaning.scm 547 */
								obj_t BgL_arg2322z00_1524;

								{	/* Eval/evmeaning.scm 547 */
									obj_t BgL_arg2323z00_1525;

									BgL_arg2323z00_1525 =
										MAKE_PAIR(BgL_tz00_1519, BgL_stackz00_4455);
									BgL_arg2322z00_1524 =
										MAKE_PAIR(BgL_za7za7_1518, BgL_arg2323z00_1525);
								}
								BgL_arg2321z00_1523 =
									MAKE_PAIR(BgL_yz00_1517, BgL_arg2322z00_1524);
							}
							BgL_arg2320z00_1522 =
								MAKE_PAIR(BgL_xz00_1516, BgL_arg2321z00_1523);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4454,
							BgL_arg2320z00_1522, BgL_denvz00_4456);
					}
				}
			}
		}
	}



/* evmeaning-bounce-41 */
	obj_t BGl_evmeaningzd2bouncezd241z00zz__evmeaningz00(obj_t BgL_codez00_52,
		obj_t BgL_stackz00_53, obj_t BgL_denvz00_54)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 518 */
				obj_t BgL_bodyz00_1527;

				obj_t BgL_wherez00_1528;

				obj_t BgL_locz00_1529;

				BgL_bodyz00_1527 = VECTOR_REF(BgL_codez00_52, (int) (((long) 2)));
				BgL_wherez00_1528 = VECTOR_REF(BgL_codez00_52, (int) (((long) 3)));
				BgL_locz00_1529 = VECTOR_REF(BgL_codez00_52, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 523 */
					obj_t BgL_zc3anonymousza32326ze3z83_4461;

					BgL_zc3anonymousza32326ze3z83_4461 =
						make_fx_procedure(BGl_zc3anonymousza32326ze3z83zz__evmeaningz00,
						(int) (((long) 4)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4461,
						(int) (((long) 0)), BgL_bodyz00_1527);
					PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4461,
						(int) (((long) 1)), BgL_stackz00_53);
					PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4461,
						(int) (((long) 2)), BgL_wherez00_1528);
					PROCEDURE_SET(BgL_zc3anonymousza32326ze3z83_4461,
						(int) (((long) 3)), BgL_locz00_1529);
					{	/* Eval/evmeaning.scm 521 */
						obj_t BgL_arg2432z00_3297;

						{	/* Eval/evmeaning.scm 521 */
							obj_t BgL_newz00_3301;

							BgL_newz00_3301 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 521 */
								int BgL_auxz00_5888;

								BgL_auxz00_5888 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3301, BgL_auxz00_5888, BgL_stackz00_53);
							}
							{	/* Eval/evmeaning.scm 521 */
								int BgL_auxz00_5891;

								BgL_auxz00_5891 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3301, BgL_auxz00_5891, BgL_bodyz00_1527);
							}
							{	/* Eval/evmeaning.scm 521 */
								obj_t BgL_auxz00_5896;

								int BgL_auxz00_5894;

								BgL_auxz00_5896 = BINT(((long) 4));
								BgL_auxz00_5894 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3301, BgL_auxz00_5894, BgL_auxz00_5896);
							}
							BgL_arg2432z00_3297 = BgL_newz00_3301;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32326ze3z83_4461,
							BgL_arg2432z00_3297);
						BgL_arg2432z00_3297;
					}
					return BgL_zc3anonymousza32326ze3z83_4461;
				}
			}
		}
	}



/* <anonymous:2326> */
	obj_t BGl_zc3anonymousza32326ze3z83zz__evmeaningz00(obj_t BgL_envz00_4462,
		obj_t BgL_xz00_4467, obj_t BgL_yz00_4468, obj_t BgL_za7za7_4469,
		obj_t BgL_tz00_4470)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 522 */
			{	/* Eval/evmeaning.scm 523 */
				obj_t BgL_bodyz00_4463;

				obj_t BgL_stackz00_4464;

				obj_t BgL_wherez00_4465;

				obj_t BgL_locz00_4466;

				BgL_bodyz00_4463 = PROCEDURE_REF(BgL_envz00_4462, (int) (((long) 0)));
				BgL_stackz00_4464 = PROCEDURE_REF(BgL_envz00_4462, (int) (((long) 1)));
				BgL_wherez00_4465 = PROCEDURE_REF(BgL_envz00_4462, (int) (((long) 2)));
				BgL_locz00_4466 = PROCEDURE_REF(BgL_envz00_4462, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1532;

					obj_t BgL_yz00_1533;

					obj_t BgL_za7za7_1534;

					obj_t BgL_tz00_1535;

					BgL_xz00_1532 = BgL_xz00_4467;
					BgL_yz00_1533 = BgL_yz00_4468;
					BgL_za7za7_1534 = BgL_za7za7_4469;
					BgL_tz00_1535 = BgL_tz00_4470;
					{	/* Eval/evmeaning.scm 523 */
						obj_t BgL_z12denvz12_1539;

						BgL_z12denvz12_1539 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 526 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1539, BgL_wherez00_4465,
								BgL_locz00_4466);
							{	/* Eval/evmeaning.scm 528 */
								obj_t BgL_resz00_1540;

								{	/* Eval/evmeaning.scm 533 */
									obj_t BgL_arg2327z00_1541;

									{	/* Eval/evmeaning.scm 533 */
										obj_t BgL_arg2328z00_1542;

										{	/* Eval/evmeaning.scm 533 */
											obj_t BgL_arg2329z00_1543;

											{	/* Eval/evmeaning.scm 533 */
												obj_t BgL_arg2330z00_1544;

												BgL_arg2330z00_1544 =
													MAKE_PAIR(BgL_tz00_1535, BgL_stackz00_4464);
												BgL_arg2329z00_1543 =
													MAKE_PAIR(BgL_za7za7_1534, BgL_arg2330z00_1544);
											}
											BgL_arg2328z00_1542 =
												MAKE_PAIR(BgL_yz00_1533, BgL_arg2329z00_1543);
										}
										BgL_arg2327z00_1541 =
											MAKE_PAIR(BgL_xz00_1532, BgL_arg2328z00_1542);
									}
									BgL_resz00_1540 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4463,
										BgL_arg2327z00_1541, BgL_z12denvz12_1539);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1539);
								return BgL_resz00_1540;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-45 */
	obj_t BGl_evmeaningzd2bouncezd245z00zz__evmeaningz00(obj_t BgL_codez00_55,
		obj_t BgL_stackz00_56, obj_t BgL_denvz00_57)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 508 */
				obj_t BgL_bodyz00_1546;

				BgL_bodyz00_1546 = VECTOR_REF(BgL_codez00_55, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 511 */
					obj_t BgL_zc3anonymousza32333ze3z83_4471;

					BgL_zc3anonymousza32333ze3z83_4471 =
						make_fx_procedure(BGl_zc3anonymousza32333ze3z83zz__evmeaningz00,
						(int) (((long) 3)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32333ze3z83_4471,
						(int) (((long) 0)), BgL_bodyz00_1546);
					PROCEDURE_SET(BgL_zc3anonymousza32333ze3z83_4471,
						(int) (((long) 1)), BgL_stackz00_56);
					PROCEDURE_SET(BgL_zc3anonymousza32333ze3z83_4471,
						(int) (((long) 2)), BgL_denvz00_57);
					{	/* Eval/evmeaning.scm 509 */
						obj_t BgL_arg2432z00_3323;

						{	/* Eval/evmeaning.scm 509 */
							obj_t BgL_newz00_3327;

							BgL_newz00_3327 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 509 */
								int BgL_auxz00_5929;

								BgL_auxz00_5929 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3327, BgL_auxz00_5929, BgL_stackz00_56);
							}
							{	/* Eval/evmeaning.scm 509 */
								int BgL_auxz00_5932;

								BgL_auxz00_5932 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3327, BgL_auxz00_5932, BgL_bodyz00_1546);
							}
							{	/* Eval/evmeaning.scm 509 */
								obj_t BgL_auxz00_5937;

								int BgL_auxz00_5935;

								BgL_auxz00_5937 = BINT(((long) 3));
								BgL_auxz00_5935 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3327, BgL_auxz00_5935, BgL_auxz00_5937);
							}
							BgL_arg2432z00_3323 = BgL_newz00_3327;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32333ze3z83_4471,
							BgL_arg2432z00_3323);
						BgL_arg2432z00_3323;
					}
					return BgL_zc3anonymousza32333ze3z83_4471;
				}
			}
		}
	}



/* <anonymous:2333> */
	obj_t BGl_zc3anonymousza32333ze3z83zz__evmeaningz00(obj_t BgL_envz00_4472,
		obj_t BgL_xz00_4476, obj_t BgL_yz00_4477, obj_t BgL_za7za7_4478)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 510 */
			{	/* Eval/evmeaning.scm 511 */
				obj_t BgL_bodyz00_4473;

				obj_t BgL_stackz00_4474;

				obj_t BgL_denvz00_4475;

				BgL_bodyz00_4473 = PROCEDURE_REF(BgL_envz00_4472, (int) (((long) 0)));
				BgL_stackz00_4474 = PROCEDURE_REF(BgL_envz00_4472, (int) (((long) 1)));
				BgL_denvz00_4475 = PROCEDURE_REF(BgL_envz00_4472, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1549;

					obj_t BgL_yz00_1550;

					obj_t BgL_za7za7_1551;

					BgL_xz00_1549 = BgL_xz00_4476;
					BgL_yz00_1550 = BgL_yz00_4477;
					BgL_za7za7_1551 = BgL_za7za7_4478;
					{	/* Eval/evmeaning.scm 512 */
						obj_t BgL_arg2334z00_1554;

						{	/* Eval/evmeaning.scm 512 */
							obj_t BgL_arg2335z00_1555;

							{	/* Eval/evmeaning.scm 512 */
								obj_t BgL_arg2336z00_1556;

								BgL_arg2336z00_1556 =
									MAKE_PAIR(BgL_za7za7_1551, BgL_stackz00_4474);
								BgL_arg2335z00_1555 =
									MAKE_PAIR(BgL_yz00_1550, BgL_arg2336z00_1556);
							}
							BgL_arg2334z00_1554 =
								MAKE_PAIR(BgL_xz00_1549, BgL_arg2335z00_1555);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4473,
							BgL_arg2334z00_1554, BgL_denvz00_4475);
					}
				}
			}
		}
	}



/* evmeaning-bounce-40 */
	obj_t BGl_evmeaningzd2bouncezd240z00zz__evmeaningz00(obj_t BgL_codez00_58,
		obj_t BgL_stackz00_59, obj_t BgL_denvz00_60)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 486 */
				obj_t BgL_bodyz00_1558;

				obj_t BgL_wherez00_1559;

				obj_t BgL_locz00_1560;

				BgL_bodyz00_1558 = VECTOR_REF(BgL_codez00_58, (int) (((long) 2)));
				BgL_wherez00_1559 = VECTOR_REF(BgL_codez00_58, (int) (((long) 3)));
				BgL_locz00_1560 = VECTOR_REF(BgL_codez00_58, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 491 */
					obj_t BgL_zc3anonymousza32339ze3z83_4479;

					BgL_zc3anonymousza32339ze3z83_4479 =
						make_fx_procedure(BGl_zc3anonymousza32339ze3z83zz__evmeaningz00,
						(int) (((long) 3)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32339ze3z83_4479,
						(int) (((long) 0)), BgL_bodyz00_1558);
					PROCEDURE_SET(BgL_zc3anonymousza32339ze3z83_4479,
						(int) (((long) 1)), BgL_stackz00_59);
					PROCEDURE_SET(BgL_zc3anonymousza32339ze3z83_4479,
						(int) (((long) 2)), BgL_wherez00_1559);
					PROCEDURE_SET(BgL_zc3anonymousza32339ze3z83_4479,
						(int) (((long) 3)), BgL_locz00_1560);
					{	/* Eval/evmeaning.scm 489 */
						obj_t BgL_arg2432z00_3353;

						{	/* Eval/evmeaning.scm 489 */
							obj_t BgL_newz00_3357;

							BgL_newz00_3357 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 489 */
								int BgL_auxz00_5970;

								BgL_auxz00_5970 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3357, BgL_auxz00_5970, BgL_stackz00_59);
							}
							{	/* Eval/evmeaning.scm 489 */
								int BgL_auxz00_5973;

								BgL_auxz00_5973 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3357, BgL_auxz00_5973, BgL_bodyz00_1558);
							}
							{	/* Eval/evmeaning.scm 489 */
								obj_t BgL_auxz00_5978;

								int BgL_auxz00_5976;

								BgL_auxz00_5978 = BINT(((long) 3));
								BgL_auxz00_5976 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3357, BgL_auxz00_5976, BgL_auxz00_5978);
							}
							BgL_arg2432z00_3353 = BgL_newz00_3357;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32339ze3z83_4479,
							BgL_arg2432z00_3353);
						BgL_arg2432z00_3353;
					}
					return BgL_zc3anonymousza32339ze3z83_4479;
				}
			}
		}
	}



/* <anonymous:2339> */
	obj_t BGl_zc3anonymousza32339ze3z83zz__evmeaningz00(obj_t BgL_envz00_4480,
		obj_t BgL_xz00_4485, obj_t BgL_yz00_4486, obj_t BgL_za7za7_4487)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 490 */
			{	/* Eval/evmeaning.scm 491 */
				obj_t BgL_bodyz00_4481;

				obj_t BgL_stackz00_4482;

				obj_t BgL_wherez00_4483;

				obj_t BgL_locz00_4484;

				BgL_bodyz00_4481 = PROCEDURE_REF(BgL_envz00_4480, (int) (((long) 0)));
				BgL_stackz00_4482 = PROCEDURE_REF(BgL_envz00_4480, (int) (((long) 1)));
				BgL_wherez00_4483 = PROCEDURE_REF(BgL_envz00_4480, (int) (((long) 2)));
				BgL_locz00_4484 = PROCEDURE_REF(BgL_envz00_4480, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1563;

					obj_t BgL_yz00_1564;

					obj_t BgL_za7za7_1565;

					BgL_xz00_1563 = BgL_xz00_4485;
					BgL_yz00_1564 = BgL_yz00_4486;
					BgL_za7za7_1565 = BgL_za7za7_4487;
					{	/* Eval/evmeaning.scm 491 */
						obj_t BgL_z12denvz12_1569;

						BgL_z12denvz12_1569 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 494 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1569, BgL_wherez00_4483,
								BgL_locz00_4484);
							{	/* Eval/evmeaning.scm 496 */
								obj_t BgL_resz00_1570;

								{	/* Eval/evmeaning.scm 499 */
									obj_t BgL_arg2340z00_1571;

									{	/* Eval/evmeaning.scm 499 */
										obj_t BgL_arg2341z00_1572;

										{	/* Eval/evmeaning.scm 499 */
											obj_t BgL_arg2342z00_1573;

											BgL_arg2342z00_1573 =
												MAKE_PAIR(BgL_za7za7_1565, BgL_stackz00_4482);
											BgL_arg2341z00_1572 =
												MAKE_PAIR(BgL_yz00_1564, BgL_arg2342z00_1573);
										}
										BgL_arg2340z00_1571 =
											MAKE_PAIR(BgL_xz00_1563, BgL_arg2341z00_1572);
									}
									BgL_resz00_1570 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4481,
										BgL_arg2340z00_1571, BgL_z12denvz12_1569);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1569);
								return BgL_resz00_1570;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-44 */
	obj_t BGl_evmeaningzd2bouncezd244z00zz__evmeaningz00(obj_t BgL_codez00_61,
		obj_t BgL_stackz00_62, obj_t BgL_denvz00_63)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 476 */
				obj_t BgL_bodyz00_1575;

				BgL_bodyz00_1575 = VECTOR_REF(BgL_codez00_61, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 479 */
					obj_t BgL_zc3anonymousza32345ze3z83_4488;

					BgL_zc3anonymousza32345ze3z83_4488 =
						make_fx_procedure(BGl_zc3anonymousza32345ze3z83zz__evmeaningz00,
						(int) (((long) 2)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_4488,
						(int) (((long) 0)), BgL_bodyz00_1575);
					PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_4488,
						(int) (((long) 1)), BgL_stackz00_62);
					PROCEDURE_SET(BgL_zc3anonymousza32345ze3z83_4488,
						(int) (((long) 2)), BgL_denvz00_63);
					{	/* Eval/evmeaning.scm 477 */
						obj_t BgL_arg2432z00_3379;

						{	/* Eval/evmeaning.scm 477 */
							obj_t BgL_newz00_3383;

							BgL_newz00_3383 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 477 */
								int BgL_auxz00_6010;

								BgL_auxz00_6010 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3383, BgL_auxz00_6010, BgL_stackz00_62);
							}
							{	/* Eval/evmeaning.scm 477 */
								int BgL_auxz00_6013;

								BgL_auxz00_6013 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3383, BgL_auxz00_6013, BgL_bodyz00_1575);
							}
							{	/* Eval/evmeaning.scm 477 */
								obj_t BgL_auxz00_6018;

								int BgL_auxz00_6016;

								BgL_auxz00_6018 = BINT(((long) 2));
								BgL_auxz00_6016 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3383, BgL_auxz00_6016, BgL_auxz00_6018);
							}
							BgL_arg2432z00_3379 = BgL_newz00_3383;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32345ze3z83_4488,
							BgL_arg2432z00_3379);
						BgL_arg2432z00_3379;
					}
					return BgL_zc3anonymousza32345ze3z83_4488;
				}
			}
		}
	}



/* <anonymous:2345> */
	obj_t BGl_zc3anonymousza32345ze3z83zz__evmeaningz00(obj_t BgL_envz00_4489,
		obj_t BgL_xz00_4493, obj_t BgL_yz00_4494)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 478 */
			{	/* Eval/evmeaning.scm 479 */
				obj_t BgL_bodyz00_4490;

				obj_t BgL_stackz00_4491;

				obj_t BgL_denvz00_4492;

				BgL_bodyz00_4490 = PROCEDURE_REF(BgL_envz00_4489, (int) (((long) 0)));
				BgL_stackz00_4491 = PROCEDURE_REF(BgL_envz00_4489, (int) (((long) 1)));
				BgL_denvz00_4492 = PROCEDURE_REF(BgL_envz00_4489, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1578;

					obj_t BgL_yz00_1579;

					BgL_xz00_1578 = BgL_xz00_4493;
					BgL_yz00_1579 = BgL_yz00_4494;
					{	/* Eval/evmeaning.scm 480 */
						obj_t BgL_arg2346z00_1582;

						{	/* Eval/evmeaning.scm 480 */
							obj_t BgL_arg2347z00_1583;

							BgL_arg2347z00_1583 = MAKE_PAIR(BgL_yz00_1579, BgL_stackz00_4491);
							BgL_arg2346z00_1582 =
								MAKE_PAIR(BgL_xz00_1578, BgL_arg2347z00_1583);
						}
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4490,
							BgL_arg2346z00_1582, BgL_denvz00_4492);
					}
				}
			}
		}
	}



/* evmeaning-bounce-39 */
	obj_t BGl_evmeaningzd2bouncezd239z00zz__evmeaningz00(obj_t BgL_codez00_64,
		obj_t BgL_stackz00_65, obj_t BgL_denvz00_66)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 458 */
				obj_t BgL_bodyz00_1585;

				obj_t BgL_wherez00_1586;

				obj_t BgL_locz00_1587;

				BgL_bodyz00_1585 = VECTOR_REF(BgL_codez00_64, (int) (((long) 2)));
				BgL_wherez00_1586 = VECTOR_REF(BgL_codez00_64, (int) (((long) 3)));
				BgL_locz00_1587 = VECTOR_REF(BgL_codez00_64, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 463 */
					obj_t BgL_zc3anonymousza32350ze3z83_4495;

					BgL_zc3anonymousza32350ze3z83_4495 =
						make_fx_procedure(BGl_zc3anonymousza32350ze3z83zz__evmeaningz00,
						(int) (((long) 2)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32350ze3z83_4495,
						(int) (((long) 0)), BgL_bodyz00_1585);
					PROCEDURE_SET(BgL_zc3anonymousza32350ze3z83_4495,
						(int) (((long) 1)), BgL_stackz00_65);
					PROCEDURE_SET(BgL_zc3anonymousza32350ze3z83_4495,
						(int) (((long) 2)), BgL_wherez00_1586);
					PROCEDURE_SET(BgL_zc3anonymousza32350ze3z83_4495,
						(int) (((long) 3)), BgL_locz00_1587);
					{	/* Eval/evmeaning.scm 461 */
						obj_t BgL_arg2432z00_3409;

						{	/* Eval/evmeaning.scm 461 */
							obj_t BgL_newz00_3413;

							BgL_newz00_3413 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 461 */
								int BgL_auxz00_6050;

								BgL_auxz00_6050 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3413, BgL_auxz00_6050, BgL_stackz00_65);
							}
							{	/* Eval/evmeaning.scm 461 */
								int BgL_auxz00_6053;

								BgL_auxz00_6053 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3413, BgL_auxz00_6053, BgL_bodyz00_1585);
							}
							{	/* Eval/evmeaning.scm 461 */
								obj_t BgL_auxz00_6058;

								int BgL_auxz00_6056;

								BgL_auxz00_6058 = BINT(((long) 2));
								BgL_auxz00_6056 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3413, BgL_auxz00_6056, BgL_auxz00_6058);
							}
							BgL_arg2432z00_3409 = BgL_newz00_3413;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32350ze3z83_4495,
							BgL_arg2432z00_3409);
						BgL_arg2432z00_3409;
					}
					return BgL_zc3anonymousza32350ze3z83_4495;
				}
			}
		}
	}



/* <anonymous:2350> */
	obj_t BGl_zc3anonymousza32350ze3z83zz__evmeaningz00(obj_t BgL_envz00_4496,
		obj_t BgL_xz00_4501, obj_t BgL_yz00_4502)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 462 */
			{	/* Eval/evmeaning.scm 463 */
				obj_t BgL_bodyz00_4497;

				obj_t BgL_stackz00_4498;

				obj_t BgL_wherez00_4499;

				obj_t BgL_locz00_4500;

				BgL_bodyz00_4497 = PROCEDURE_REF(BgL_envz00_4496, (int) (((long) 0)));
				BgL_stackz00_4498 = PROCEDURE_REF(BgL_envz00_4496, (int) (((long) 1)));
				BgL_wherez00_4499 = PROCEDURE_REF(BgL_envz00_4496, (int) (((long) 2)));
				BgL_locz00_4500 = PROCEDURE_REF(BgL_envz00_4496, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1590;

					obj_t BgL_yz00_1591;

					BgL_xz00_1590 = BgL_xz00_4501;
					BgL_yz00_1591 = BgL_yz00_4502;
					{	/* Eval/evmeaning.scm 463 */
						obj_t BgL_z12denvz12_1595;

						BgL_z12denvz12_1595 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 466 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1595, BgL_wherez00_4499,
								BgL_locz00_4500);
							{	/* Eval/evmeaning.scm 468 */
								obj_t BgL_rz00_1596;

								{	/* Eval/evmeaning.scm 468 */
									obj_t BgL_arg2351z00_1597;

									{	/* Eval/evmeaning.scm 468 */
										obj_t BgL_arg2352z00_1598;

										BgL_arg2352z00_1598 =
											MAKE_PAIR(BgL_yz00_1591, BgL_stackz00_4498);
										BgL_arg2351z00_1597 =
											MAKE_PAIR(BgL_xz00_1590, BgL_arg2352z00_1598);
									}
									BgL_rz00_1596 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4497,
										BgL_arg2351z00_1597, BgL_z12denvz12_1595);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1595);
								return BgL_rz00_1596;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-43 */
	obj_t BGl_evmeaningzd2bouncezd243z00zz__evmeaningz00(obj_t BgL_codez00_67,
		obj_t BgL_stackz00_68, obj_t BgL_denvz00_69)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 448 */
				obj_t BgL_bodyz00_1600;

				BgL_bodyz00_1600 = VECTOR_REF(BgL_codez00_67, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 451 */
					obj_t BgL_zc3anonymousza32355ze3z83_4503;

					BgL_zc3anonymousza32355ze3z83_4503 =
						make_fx_procedure(BGl_zc3anonymousza32355ze3z83zz__evmeaningz00,
						(int) (((long) 1)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32355ze3z83_4503,
						(int) (((long) 0)), BgL_bodyz00_1600);
					PROCEDURE_SET(BgL_zc3anonymousza32355ze3z83_4503,
						(int) (((long) 1)), BgL_stackz00_68);
					PROCEDURE_SET(BgL_zc3anonymousza32355ze3z83_4503,
						(int) (((long) 2)), BgL_denvz00_69);
					{	/* Eval/evmeaning.scm 449 */
						obj_t BgL_arg2432z00_3435;

						{	/* Eval/evmeaning.scm 449 */
							obj_t BgL_newz00_3439;

							BgL_newz00_3439 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 449 */
								int BgL_auxz00_6089;

								BgL_auxz00_6089 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3439, BgL_auxz00_6089, BgL_stackz00_68);
							}
							{	/* Eval/evmeaning.scm 449 */
								int BgL_auxz00_6092;

								BgL_auxz00_6092 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3439, BgL_auxz00_6092, BgL_bodyz00_1600);
							}
							{	/* Eval/evmeaning.scm 449 */
								obj_t BgL_auxz00_6097;

								int BgL_auxz00_6095;

								BgL_auxz00_6097 = BINT(((long) 1));
								BgL_auxz00_6095 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3439, BgL_auxz00_6095, BgL_auxz00_6097);
							}
							BgL_arg2432z00_3435 = BgL_newz00_3439;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32355ze3z83_4503,
							BgL_arg2432z00_3435);
						BgL_arg2432z00_3435;
					}
					return BgL_zc3anonymousza32355ze3z83_4503;
				}
			}
		}
	}



/* <anonymous:2355> */
	obj_t BGl_zc3anonymousza32355ze3z83zz__evmeaningz00(obj_t BgL_envz00_4504,
		obj_t BgL_xz00_4508)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 450 */
			{	/* Eval/evmeaning.scm 451 */
				obj_t BgL_bodyz00_4505;

				obj_t BgL_stackz00_4506;

				obj_t BgL_denvz00_4507;

				BgL_bodyz00_4505 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 0)));
				BgL_stackz00_4506 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 1)));
				BgL_denvz00_4507 = PROCEDURE_REF(BgL_envz00_4504, (int) (((long) 2)));
				{
					obj_t BgL_xz00_1603;

					BgL_xz00_1603 = BgL_xz00_4508;
					{	/* Eval/evmeaning.scm 452 */
						obj_t BgL_arg2356z00_1606;

						BgL_arg2356z00_1606 = MAKE_PAIR(BgL_xz00_1603, BgL_stackz00_4506);
						return
							BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4505,
							BgL_arg2356z00_1606, BgL_denvz00_4507);
					}
				}
			}
		}
	}



/* evmeaning-bounce-38 */
	obj_t BGl_evmeaningzd2bouncezd238z00zz__evmeaningz00(obj_t BgL_codez00_70,
		obj_t BgL_stackz00_71, obj_t BgL_denvz00_72)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 430 */
				obj_t BgL_bodyz00_1608;

				obj_t BgL_wherez00_1609;

				obj_t BgL_locz00_1610;

				BgL_bodyz00_1608 = VECTOR_REF(BgL_codez00_70, (int) (((long) 2)));
				BgL_wherez00_1609 = VECTOR_REF(BgL_codez00_70, (int) (((long) 3)));
				BgL_locz00_1610 = VECTOR_REF(BgL_codez00_70, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 435 */
					obj_t BgL_zc3anonymousza32359ze3z83_4509;

					BgL_zc3anonymousza32359ze3z83_4509 =
						make_fx_procedure(BGl_zc3anonymousza32359ze3z83zz__evmeaningz00,
						(int) (((long) 1)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32359ze3z83_4509,
						(int) (((long) 0)), BgL_bodyz00_1608);
					PROCEDURE_SET(BgL_zc3anonymousza32359ze3z83_4509,
						(int) (((long) 1)), BgL_stackz00_71);
					PROCEDURE_SET(BgL_zc3anonymousza32359ze3z83_4509,
						(int) (((long) 2)), BgL_wherez00_1609);
					PROCEDURE_SET(BgL_zc3anonymousza32359ze3z83_4509,
						(int) (((long) 3)), BgL_locz00_1610);
					{	/* Eval/evmeaning.scm 433 */
						obj_t BgL_arg2432z00_3465;

						{	/* Eval/evmeaning.scm 433 */
							obj_t BgL_newz00_3469;

							BgL_newz00_3469 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 433 */
								int BgL_auxz00_6128;

								BgL_auxz00_6128 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3469, BgL_auxz00_6128, BgL_stackz00_71);
							}
							{	/* Eval/evmeaning.scm 433 */
								int BgL_auxz00_6131;

								BgL_auxz00_6131 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3469, BgL_auxz00_6131, BgL_bodyz00_1608);
							}
							{	/* Eval/evmeaning.scm 433 */
								obj_t BgL_auxz00_6136;

								int BgL_auxz00_6134;

								BgL_auxz00_6136 = BINT(((long) 1));
								BgL_auxz00_6134 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3469, BgL_auxz00_6134, BgL_auxz00_6136);
							}
							BgL_arg2432z00_3465 = BgL_newz00_3469;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32359ze3z83_4509,
							BgL_arg2432z00_3465);
						BgL_arg2432z00_3465;
					}
					return BgL_zc3anonymousza32359ze3z83_4509;
				}
			}
		}
	}



/* <anonymous:2359> */
	obj_t BGl_zc3anonymousza32359ze3z83zz__evmeaningz00(obj_t BgL_envz00_4510,
		obj_t BgL_xz00_4515)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 434 */
			{	/* Eval/evmeaning.scm 435 */
				obj_t BgL_bodyz00_4511;

				obj_t BgL_stackz00_4512;

				obj_t BgL_wherez00_4513;

				obj_t BgL_locz00_4514;

				BgL_bodyz00_4511 = PROCEDURE_REF(BgL_envz00_4510, (int) (((long) 0)));
				BgL_stackz00_4512 = PROCEDURE_REF(BgL_envz00_4510, (int) (((long) 1)));
				BgL_wherez00_4513 = PROCEDURE_REF(BgL_envz00_4510, (int) (((long) 2)));
				BgL_locz00_4514 = PROCEDURE_REF(BgL_envz00_4510, (int) (((long) 3)));
				{
					obj_t BgL_xz00_1613;

					BgL_xz00_1613 = BgL_xz00_4515;
					{	/* Eval/evmeaning.scm 435 */
						obj_t BgL_z12denvz12_1617;

						BgL_z12denvz12_1617 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 438 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1617, BgL_wherez00_4513,
								BgL_locz00_4514);
							{	/* Eval/evmeaning.scm 440 */
								obj_t BgL_resz00_1618;

								{	/* Eval/evmeaning.scm 440 */
									obj_t BgL_arg2360z00_1619;

									BgL_arg2360z00_1619 =
										MAKE_PAIR(BgL_xz00_1613, BgL_stackz00_4512);
									BgL_resz00_1618 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4511,
										BgL_arg2360z00_1619, BgL_z12denvz12_1617);
								}
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1617);
								return BgL_resz00_1618;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-42 */
	obj_t BGl_evmeaningzd2bouncezd242z00zz__evmeaningz00(obj_t BgL_codez00_73,
		obj_t BgL_stackz00_74, obj_t BgL_denvz00_75)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 420 */
				obj_t BgL_bodyz00_1621;

				BgL_bodyz00_1621 = VECTOR_REF(BgL_codez00_73, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 423 */
					obj_t BgL_zc3anonymousza32363ze3z83_4516;

					BgL_zc3anonymousza32363ze3z83_4516 =
						make_fx_procedure(BGl_zc3anonymousza32363ze3z83zz__evmeaningz00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza32363ze3z83_4516,
						(int) (((long) 0)), BgL_bodyz00_1621);
					PROCEDURE_SET(BgL_zc3anonymousza32363ze3z83_4516,
						(int) (((long) 1)), BgL_stackz00_74);
					PROCEDURE_SET(BgL_zc3anonymousza32363ze3z83_4516,
						(int) (((long) 2)), BgL_denvz00_75);
					{	/* Eval/evmeaning.scm 421 */
						obj_t BgL_arg2432z00_3491;

						{	/* Eval/evmeaning.scm 421 */
							obj_t BgL_newz00_3495;

							BgL_newz00_3495 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 421 */
								int BgL_auxz00_6166;

								BgL_auxz00_6166 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3495, BgL_auxz00_6166, BgL_stackz00_74);
							}
							{	/* Eval/evmeaning.scm 421 */
								int BgL_auxz00_6169;

								BgL_auxz00_6169 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3495, BgL_auxz00_6169, BgL_bodyz00_1621);
							}
							{	/* Eval/evmeaning.scm 421 */
								obj_t BgL_auxz00_6174;

								int BgL_auxz00_6172;

								BgL_auxz00_6174 = BINT(((long) 0));
								BgL_auxz00_6172 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3495, BgL_auxz00_6172, BgL_auxz00_6174);
							}
							BgL_arg2432z00_3491 = BgL_newz00_3495;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32363ze3z83_4516,
							BgL_arg2432z00_3491);
						BgL_arg2432z00_3491;
					}
					return BgL_zc3anonymousza32363ze3z83_4516;
				}
			}
		}
	}



/* <anonymous:2363> */
	obj_t BGl_zc3anonymousza32363ze3z83zz__evmeaningz00(obj_t BgL_envz00_4517)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 422 */
			{	/* Eval/evmeaning.scm 423 */
				obj_t BgL_bodyz00_4518;

				obj_t BgL_stackz00_4519;

				obj_t BgL_denvz00_4520;

				BgL_bodyz00_4518 = PROCEDURE_REF(BgL_envz00_4517, (int) (((long) 0)));
				BgL_stackz00_4519 = PROCEDURE_REF(BgL_envz00_4517, (int) (((long) 1)));
				BgL_denvz00_4520 = PROCEDURE_REF(BgL_envz00_4517, (int) (((long) 2)));
				{

					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4518,
						BgL_stackz00_4519, BgL_denvz00_4520);
				}
			}
		}
	}



/* evmeaning-bounce-37 */
	obj_t BGl_evmeaningzd2bouncezd237z00zz__evmeaningz00(obj_t BgL_codez00_76,
		obj_t BgL_stackz00_77, obj_t BgL_denvz00_78)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 401 */
				obj_t BgL_bodyz00_1627;

				obj_t BgL_wherez00_1628;

				obj_t BgL_locz00_1629;

				BgL_bodyz00_1627 = VECTOR_REF(BgL_codez00_76, (int) (((long) 2)));
				BgL_wherez00_1628 = VECTOR_REF(BgL_codez00_76, (int) (((long) 3)));
				BgL_locz00_1629 = VECTOR_REF(BgL_codez00_76, (int) (((long) 1)));
				{	/* Eval/evmeaning.scm 406 */
					obj_t BgL_zc3anonymousza32366ze3z83_4521;

					BgL_zc3anonymousza32366ze3z83_4521 =
						make_fx_procedure(BGl_zc3anonymousza32366ze3z83zz__evmeaningz00,
						(int) (((long) 0)), (int) (((long) 4)));
					PROCEDURE_SET(BgL_zc3anonymousza32366ze3z83_4521,
						(int) (((long) 0)), BgL_bodyz00_1627);
					PROCEDURE_SET(BgL_zc3anonymousza32366ze3z83_4521,
						(int) (((long) 1)), BgL_stackz00_77);
					PROCEDURE_SET(BgL_zc3anonymousza32366ze3z83_4521,
						(int) (((long) 2)), BgL_wherez00_1628);
					PROCEDURE_SET(BgL_zc3anonymousza32366ze3z83_4521,
						(int) (((long) 3)), BgL_locz00_1629);
					{	/* Eval/evmeaning.scm 404 */
						obj_t BgL_arg2432z00_3521;

						{	/* Eval/evmeaning.scm 404 */
							obj_t BgL_newz00_3525;

							BgL_newz00_3525 =
								create_struct(BGl_symbol2945z00zz__evmeaningz00,
								(int) (((long) 3)));
							{	/* Eval/evmeaning.scm 404 */
								int BgL_auxz00_6204;

								BgL_auxz00_6204 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_3525, BgL_auxz00_6204, BgL_stackz00_77);
							}
							{	/* Eval/evmeaning.scm 404 */
								int BgL_auxz00_6207;

								BgL_auxz00_6207 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3525, BgL_auxz00_6207, BgL_bodyz00_1627);
							}
							{	/* Eval/evmeaning.scm 404 */
								obj_t BgL_auxz00_6212;

								int BgL_auxz00_6210;

								BgL_auxz00_6212 = BINT(((long) 0));
								BgL_auxz00_6210 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3525, BgL_auxz00_6210, BgL_auxz00_6212);
							}
							BgL_arg2432z00_3521 = BgL_newz00_3525;
						}
						PROCEDURE_ATTR_SET(BgL_zc3anonymousza32366ze3z83_4521,
							BgL_arg2432z00_3521);
						BgL_arg2432z00_3521;
					}
					return BgL_zc3anonymousza32366ze3z83_4521;
				}
			}
		}
	}



/* <anonymous:2366> */
	obj_t BGl_zc3anonymousza32366ze3z83zz__evmeaningz00(obj_t BgL_envz00_4522)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 405 */
			{	/* Eval/evmeaning.scm 406 */
				obj_t BgL_bodyz00_4523;

				obj_t BgL_stackz00_4524;

				obj_t BgL_wherez00_4525;

				obj_t BgL_locz00_4526;

				BgL_bodyz00_4523 = PROCEDURE_REF(BgL_envz00_4522, (int) (((long) 0)));
				BgL_stackz00_4524 = PROCEDURE_REF(BgL_envz00_4522, (int) (((long) 1)));
				BgL_wherez00_4525 = PROCEDURE_REF(BgL_envz00_4522, (int) (((long) 2)));
				BgL_locz00_4526 = PROCEDURE_REF(BgL_envz00_4522, (int) (((long) 3)));
				{

					{	/* Eval/evmeaning.scm 406 */
						obj_t BgL_z12denvz12_1635;

						BgL_z12denvz12_1635 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 409 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_1635, BgL_wherez00_4525,
								BgL_locz00_4526);
							{	/* Eval/evmeaning.scm 411 */
								obj_t BgL_resz00_1636;

								BgL_resz00_1636 =
									BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4523,
									BgL_stackz00_4524, BgL_z12denvz12_1635);
								BGL_ENV_POP_TRACE(BgL_z12denvz12_1635);
								return BgL_resz00_1636;
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-36 */
	obj_t BGl_evmeaningzd2bouncezd236z00zz__evmeaningz00(obj_t BgL_codez00_79,
		obj_t BgL_stackz00_80, obj_t BgL_denvz00_81)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 381 */
				obj_t BgL_namez00_1638;

				BgL_namez00_1638 = VECTOR_REF(BgL_codez00_79, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 381 */
					obj_t BgL_funz00_1639;

					BgL_funz00_1639 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_79,
							(int) (((long) 3))), BgL_stackz00_80, BgL_denvz00_81);
					{	/* Eval/evmeaning.scm 382 */

						{	/* Eval/evmeaning.scm 383 */
							obj_t BgL_g1884z00_1640;

							BgL_g1884z00_1640 =
								VECTOR_REF(BgL_codez00_79, (int) (((long) 4)));
							{
								obj_t BgL_argsz00_1643;

								obj_t BgL_newz00_1644;

								long BgL_lenz00_1645;

								BgL_argsz00_1643 = BgL_g1884z00_1640;
								BgL_newz00_1644 = BNIL;
								BgL_lenz00_1645 = ((long) 0);
							BgL_zc3anonymousza32367ze3z83_1646:
								if (NULLP(BgL_argsz00_1643))
									{	/* Eval/evmeaning.scm 386 */
										BGL_ENV_BYTECODE_SET(BgL_denvz00_81, BgL_codez00_79);
										{	/* Eval/evmeaning.scm 389 */
											obj_t BgL_auxz00_6238;

											BgL_auxz00_6238 =
												VECTOR_REF(BgL_codez00_79, (int) (((long) 1)));
											BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_81,
												BgL_auxz00_6238);
										}
										{	/* Eval/evmeaning.scm 390 */
											obj_t BgL_arg2370z00_1649;

											BgL_arg2370z00_1649 = bgl_reverse_bang(BgL_newz00_1644);
											if (PROCEDUREP(BgL_funz00_1639))
												{	/* Eval/evmeaning.scm 390 */
													if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_1639,
															(int) (BgL_lenz00_1645)))
														{	/* Eval/evmeaning.scm 390 */
															return
																eval_apply(BgL_funz00_1639,
																BgL_arg2370z00_1649);
														}
													else
														{	/* Eval/evmeaning.scm 390 */
															return
																BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
																(BgL_codez00_79, BgL_namez00_1638,
																(int) (BgL_lenz00_1645),
																PROCEDURE_ARITY(BgL_funz00_1639));
												}}
											else
												{	/* Eval/evmeaning.scm 390 */
													return
														BGl_evmeaningzd2errorzd2zz__everrorz00
														(BgL_codez00_79, BGl_string2947z00zz__evmeaningz00,
														BGl_string2948z00zz__evmeaningz00,
														BgL_namez00_1638);
												}
										}
									}
								else
									{	/* Eval/evmeaning.scm 391 */
										obj_t BgL_arg2371z00_1650;

										obj_t BgL_arg2372z00_1651;

										long BgL_arg2373z00_1652;

										BgL_arg2371z00_1650 = CDR(BgL_argsz00_1643);
										BgL_arg2372z00_1651 =
											MAKE_PAIR(BGl_evmeaningz00zz__evmeaningz00(CAR
												(BgL_argsz00_1643), BgL_stackz00_80, BgL_denvz00_81),
											BgL_newz00_1644);
										BgL_arg2373z00_1652 = (((long) 1) + BgL_lenz00_1645);
										{
											long BgL_lenz00_6260;

											obj_t BgL_newz00_6259;

											obj_t BgL_argsz00_6258;

											BgL_argsz00_6258 = BgL_arg2371z00_1650;
											BgL_newz00_6259 = BgL_arg2372z00_1651;
											BgL_lenz00_6260 = BgL_arg2373z00_1652;
											BgL_lenz00_1645 = BgL_lenz00_6260;
											BgL_newz00_1644 = BgL_newz00_6259;
											BgL_argsz00_1643 = BgL_argsz00_6258;
											goto BgL_zc3anonymousza32367ze3z83_1646;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-30 */
	obj_t BGl_evmeaningzd2bouncezd230z00zz__evmeaningz00(obj_t BgL_codez00_82,
		obj_t BgL_stackz00_83, obj_t BgL_denvz00_84)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 354 */
				obj_t BgL_eargsz00_1657;

				{	/* Eval/evmeaning.scm 354 */
					obj_t BgL_l1928z00_1658;

					BgL_l1928z00_1658 = VECTOR_REF(BgL_codez00_82, (int) (((long) 3)));
					if (NULLP(BgL_l1928z00_1658))
						{	/* Eval/evmeaning.scm 354 */
							BgL_eargsz00_1657 = BNIL;
						}
					else
						{	/* Eval/evmeaning.scm 354 */
							obj_t BgL_head1930z00_1660;

							BgL_head1930z00_1660 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l1928z00_1662;

								obj_t BgL_tail1931z00_1663;

								BgL_l1928z00_1662 = BgL_l1928z00_1658;
								BgL_tail1931z00_1663 = BgL_head1930z00_1660;
							BgL_zc3anonymousza32378ze3z83_1664:
								if (NULLP(BgL_l1928z00_1662))
									{	/* Eval/evmeaning.scm 354 */
										BgL_eargsz00_1657 = CDR(BgL_head1930z00_1660);
									}
								else
									{	/* Eval/evmeaning.scm 354 */
										obj_t BgL_newtail1932z00_1666;

										BgL_newtail1932z00_1666 =
											MAKE_PAIR(BGl_evmeaningz00zz__evmeaningz00(CAR
												(BgL_l1928z00_1662), BgL_stackz00_83, BgL_denvz00_84),
											BNIL);
										SET_CDR(BgL_tail1931z00_1663, BgL_newtail1932z00_1666);
										{
											obj_t BgL_tail1931z00_6275;

											obj_t BgL_l1928z00_6273;

											BgL_l1928z00_6273 = CDR(BgL_l1928z00_1662);
											BgL_tail1931z00_6275 = BgL_newtail1932z00_1666;
											BgL_tail1931z00_1663 = BgL_tail1931z00_6275;
											BgL_l1928z00_1662 = BgL_l1928z00_6273;
											goto BgL_zc3anonymousza32378ze3z83_1664;
										}
									}
							}
						}
				}
				BGL_ENV_BYTECODE_SET(BgL_denvz00_84, BgL_codez00_82);
				{	/* Eval/evmeaning.scm 358 */
					obj_t BgL_funz00_4603;

					BgL_funz00_4603 = VECTOR_REF(BgL_codez00_82, (int) (((long) 2)));
					return apply(BgL_funz00_4603, BgL_eargsz00_1657);
				}
			}
		}
	}



/* evmeaning-bounce-29 */
	obj_t BGl_evmeaningzd2bouncezd229z00zz__evmeaningz00(obj_t BgL_codez00_85,
		obj_t BgL_stackz00_86, obj_t BgL_denvz00_87)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 345 */
				obj_t BgL_funz00_1672;

				BgL_funz00_1672 = VECTOR_REF(BgL_codez00_85, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 345 */
					obj_t BgL_a0z00_1673;

					BgL_a0z00_1673 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_85,
							(int) (((long) 3))), BgL_stackz00_86, BgL_denvz00_87);
					{	/* Eval/evmeaning.scm 346 */
						obj_t BgL_a1z00_1674;

						BgL_a1z00_1674 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_85,
								(int) (((long) 4))), BgL_stackz00_86, BgL_denvz00_87);
						{	/* Eval/evmeaning.scm 347 */
							obj_t BgL_a2z00_1675;

							BgL_a2z00_1675 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_85,
									(int) (((long) 5))), BgL_stackz00_86, BgL_denvz00_87);
							{	/* Eval/evmeaning.scm 348 */
								obj_t BgL_a3z00_1676;

								BgL_a3z00_1676 =
									BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_85,
										(int) (((long) 6))), BgL_stackz00_86, BgL_denvz00_87);
								{	/* Eval/evmeaning.scm 349 */

									BGL_ENV_BYTECODE_SET(BgL_denvz00_87, BgL_codez00_85);
									return
										PROCEDURE_ENTRY(BgL_funz00_1672) (BgL_funz00_1672,
										BgL_a0z00_1673, BgL_a1z00_1674, BgL_a2z00_1675,
										BgL_a3z00_1676, BEOA);
								}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-28 */
	obj_t BGl_evmeaningzd2bouncezd228z00zz__evmeaningz00(obj_t BgL_codez00_88,
		obj_t BgL_stackz00_89, obj_t BgL_denvz00_90)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 337 */
				obj_t BgL_funz00_1681;

				BgL_funz00_1681 = VECTOR_REF(BgL_codez00_88, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 337 */
					obj_t BgL_a0z00_1682;

					BgL_a0z00_1682 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_88,
							(int) (((long) 3))), BgL_stackz00_89, BgL_denvz00_90);
					{	/* Eval/evmeaning.scm 338 */
						obj_t BgL_a1z00_1683;

						BgL_a1z00_1683 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_88,
								(int) (((long) 4))), BgL_stackz00_89, BgL_denvz00_90);
						{	/* Eval/evmeaning.scm 339 */
							obj_t BgL_a2z00_1684;

							BgL_a2z00_1684 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_88,
									(int) (((long) 5))), BgL_stackz00_89, BgL_denvz00_90);
							{	/* Eval/evmeaning.scm 340 */

								BGL_ENV_BYTECODE_SET(BgL_denvz00_90, BgL_codez00_88);
								return
									PROCEDURE_ENTRY(BgL_funz00_1681) (BgL_funz00_1681,
									BgL_a0z00_1682, BgL_a1z00_1683, BgL_a2z00_1684, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-27 */
	obj_t BGl_evmeaningzd2bouncezd227z00zz__evmeaningz00(obj_t BgL_codez00_91,
		obj_t BgL_stackz00_92, obj_t BgL_denvz00_93)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 330 */
				obj_t BgL_funz00_1688;

				BgL_funz00_1688 = VECTOR_REF(BgL_codez00_91, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 330 */
					obj_t BgL_a0z00_1689;

					BgL_a0z00_1689 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_91,
							(int) (((long) 3))), BgL_stackz00_92, BgL_denvz00_93);
					{	/* Eval/evmeaning.scm 331 */
						obj_t BgL_a1z00_1690;

						BgL_a1z00_1690 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_91,
								(int) (((long) 4))), BgL_stackz00_92, BgL_denvz00_93);
						{	/* Eval/evmeaning.scm 332 */

							BGL_ENV_BYTECODE_SET(BgL_denvz00_93, BgL_codez00_91);
							return
								PROCEDURE_ENTRY(BgL_funz00_1688) (BgL_funz00_1688,
								BgL_a0z00_1689, BgL_a1z00_1690, BEOA);
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-26 */
	obj_t BGl_evmeaningzd2bouncezd226z00zz__evmeaningz00(obj_t BgL_codez00_94,
		obj_t BgL_stackz00_95, obj_t BgL_denvz00_96)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 324 */
				obj_t BgL_funz00_1693;

				BgL_funz00_1693 = VECTOR_REF(BgL_codez00_94, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 324 */
					obj_t BgL_a0z00_1694;

					BgL_a0z00_1694 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_94,
							(int) (((long) 3))), BgL_stackz00_95, BgL_denvz00_96);
					{	/* Eval/evmeaning.scm 325 */

						BGL_ENV_BYTECODE_SET(BgL_denvz00_96, BgL_codez00_94);
						return
							PROCEDURE_ENTRY(BgL_funz00_1693) (BgL_funz00_1693, BgL_a0z00_1694,
							BEOA);
					}
				}
			}
		}
	}



/* evmeaning-bounce-25 */
	obj_t BGl_evmeaningzd2bouncezd225z00zz__evmeaningz00(obj_t BgL_codez00_97)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 321 */
				obj_t BgL_fun2393z00_1696;

				BgL_fun2393z00_1696 = VECTOR_REF(BgL_codez00_97, (int) (((long) 2)));
				return PROCEDURE_ENTRY(BgL_fun2393z00_1696) (BgL_fun2393z00_1696, BEOA);
			}
		}
	}



/* evmeaning-bounce-18 */
	obj_t BGl_evmeaningzd2bouncezd218z00zz__evmeaningz00(obj_t BgL_codez00_98,
		obj_t BgL_stackz00_99, obj_t BgL_denvz00_100)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			return
				BGl_zc3exitza32394ze3z83zz__evmeaningz00(BgL_denvz00_100,
				BgL_stackz00_99, BgL_codez00_98);
		}
	}



/* <exit:2394> */
	obj_t BGl_zc3exitza32394ze3z83zz__evmeaningz00(obj_t BgL_denvz00_4578,
		obj_t BgL_stackz00_4577, obj_t BgL_codez00_4576)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 317 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1886z00_1698;

			if (SET_EXIT(BgL_an_exit1886z00_1698))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1886z00_1698 = (void *) jmpbuf;
					{	/* Eval/evmeaning.scm 317 */

						PUSH_EXIT(BgL_an_exit1886z00_1698, ((long) 1));
						{	/* Eval/evmeaning.scm 317 */
							obj_t BgL_an_exitd1887z00_1699;

							BgL_an_exitd1887z00_1699 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/evmeaning.scm 317 */
								obj_t BgL___dummy__z00_4527;

								BgL___dummy__z00_4527 =
									make_fx_procedure(BGl___dummy__z00zz__evmeaningz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL___dummy__z00_4527,
									(int) (((long) 0)), BgL_an_exitd1887z00_1699);
								{	/* Eval/evmeaning.scm 318 */
									obj_t BgL_res1889z00_1702;

									{	/* Eval/evmeaning.scm 318 */
										obj_t BgL_fun2396z00_1704;

										BgL_fun2396z00_1704 =
											BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF
											(BgL_codez00_4576, (int) (((long) 2))), BgL_stackz00_4577,
											BgL_denvz00_4578);
										BgL_res1889z00_1702 =
											PROCEDURE_ENTRY(BgL_fun2396z00_1704) (BgL_fun2396z00_1704,
											BgL___dummy__z00_4527, BEOA);
									}
									POP_EXIT();
									return BgL_res1889z00_1702;
								}
							}
						}
					}
				}
		}
	}



/* __dummy__ */
	obj_t BGl___dummy__z00zz__evmeaningz00(obj_t BgL_envz00_4528,
		obj_t BgL_val1888z00_4530)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 317 */
			{	/* Eval/evmeaning.scm 317 */
				obj_t BgL_an_exitd1887z00_4529;

				BgL_an_exitd1887z00_4529 =
					PROCEDURE_REF(BgL_envz00_4528, (int) (((long) 0)));
				{
					obj_t BgL_val1888z00_1700;

					BgL_val1888z00_1700 = BgL_val1888z00_4530;
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1887z00_4529,
						BgL_val1888z00_1700);
				}
			}
		}
	}



/* evmeaning-bounce-17 */
	obj_t BGl_evmeaningzd2bouncezd217z00zz__evmeaningz00(obj_t BgL_codez00_101,
		obj_t BgL_stackz00_102, obj_t BgL_denvz00_103)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 293 */
				obj_t BgL_varz00_1705;

				obj_t BgL_valz00_1706;

				obj_t BgL_modz00_1707;

				BgL_varz00_1705 = VECTOR_REF(BgL_codez00_101, (int) (((long) 2)));
				BgL_valz00_1706 = VECTOR_REF(BgL_codez00_101, (int) (((long) 3)));
				BgL_modz00_1707 = VECTOR_REF(BgL_codez00_101, (int) (((long) 4)));
				{	/* Eval/evmeaning.scm 296 */
					obj_t BgL_cellz00_1708;

					BgL_cellz00_1708 =
						BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_1707,
						BgL_varz00_1705);
					{	/* Eval/evmeaning.scm 297 */
						bool_t BgL_testz00_6361;

						if (VECTORP(BgL_cellz00_1708))
							{	/* Eval/evmeaning.scm 297 */
								int BgL_arg2682z00_3619;

								BgL_arg2682z00_3619 = VECTOR_LENGTH(BgL_cellz00_1708);
								BgL_testz00_6361 = ((long) (BgL_arg2682z00_3619) == ((long) 3));
							}
						else
							{	/* Eval/evmeaning.scm 297 */
								BgL_testz00_6361 = ((bool_t) 0);
							}
						if (BgL_testz00_6361)
							{	/* Eval/evmeaning.scm 298 */
								obj_t BgL_oldz00_1710;

								{	/* Eval/evmeaning.scm 298 */
									bool_t BgL_testz00_6367;

									if (
										(VECTOR_REF(BgL_cellz00_1708,
												(int) (((long) 0))) == BINT(((long) 1))))
										{	/* Eval/evmeaning.scm 298 */
											BgL_testz00_6367 = ((bool_t) 0);
										}
									else
										{	/* Eval/evmeaning.scm 298 */
											BgL_testz00_6367 = ((bool_t) 1);
										}
									if (BgL_testz00_6367)
										{	/* Eval/evmeaning.scm 298 */
											BgL_oldz00_1710 =
												VECTOR_REF(BgL_cellz00_1708, (int) (((long) 2)));
										}
									else
										{	/* Eval/evmeaning.scm 298 */
											BgL_oldz00_1710 = BFALSE;
										}
								}
								BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00
									(BgL_codez00_101, BgL_cellz00_1708,
									BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_1706, BNIL,
										BgL_denvz00_103));
								{	/* Eval/evmeaning.scm 301 */
									bool_t BgL_testz00_6377;

									if ((BgL_oldz00_1710 == BgL_modz00_1707))
										{	/* Eval/evmeaning.scm 301 */
											if (
												(BgL_oldz00_1710 ==
													BGl_evmodulezd2uninitializa7edz75zz__evmodulez00))
												{	/* Eval/evmeaning.scm 302 */
													BgL_testz00_6377 = ((bool_t) 0);
												}
											else
												{	/* Eval/evmeaning.scm 302 */
													BgL_testz00_6377 = ((bool_t) 1);
												}
										}
									else
										{	/* Eval/evmeaning.scm 301 */
											BgL_testz00_6377 = ((bool_t) 0);
										}
									if (BgL_testz00_6377)
										{	/* Eval/evmeaning.scm 303 */
											obj_t BgL_list2400z00_1713;

											{	/* Eval/evmeaning.scm 303 */
												obj_t BgL_arg2402z00_1715;

												{	/* Eval/evmeaning.scm 303 */
													obj_t BgL_arg2403z00_1716;

													{	/* Eval/evmeaning.scm 303 */
														obj_t BgL_arg2405z00_1718;

														BgL_arg2405z00_1718 =
															MAKE_PAIR(BgL_varz00_1705, BNIL);
														BgL_arg2403z00_1716 =
															MAKE_PAIR(BGl_string2959z00zz__evmeaningz00,
															BgL_arg2405z00_1718);
													}
													BgL_arg2402z00_1715 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')),
														BgL_arg2403z00_1716);
												}
												BgL_list2400z00_1713 =
													MAKE_PAIR(BGl_string2941z00zz__evmeaningz00,
													BgL_arg2402z00_1715);
											}
											BGl_evmeaningzd2warningzd2zz__everrorz00(BgL_codez00_101,
												BgL_list2400z00_1713);
										}
									else
										{	/* Eval/evmeaning.scm 301 */
											BFALSE;
										}
								}
							}
						else
							{	/* Eval/evmeaning.scm 308 */
								obj_t BgL_cellz00_1725;

								{	/* Eval/evmeaning.scm 308 */
									obj_t BgL_v1933z00_1727;

									BgL_v1933z00_1727 = create_vector((int) (((long) 3)));
									VECTOR_SET(BgL_v1933z00_1727, (int) (((long) 2)), BUNSPEC);
									VECTOR_SET(BgL_v1933z00_1727,
										(int) (((long) 1)), BgL_varz00_1705);
									VECTOR_SET(BgL_v1933z00_1727,
										(int) (((long) 0)), BINT(((long) 2)));
									BgL_cellz00_1725 = BgL_v1933z00_1727;
								}
								BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
									(BgL_modz00_1707, BgL_varz00_1705, BgL_cellz00_1725);
								VECTOR_SET(BgL_cellz00_1725, (int) (((long) 2)),
									BGl_evmeaningz00zz__evmeaningz00(BgL_valz00_1706, BNIL,
										BgL_denvz00_103));
					}}
					return BgL_varz00_1705;
				}
			}
		}
	}



/* evmeaning-bounce-14 */
	obj_t BGl_evmeaningzd2bouncezd214z00zz__evmeaningz00(obj_t BgL_codez00_104,
		obj_t BgL_stackz00_105, obj_t BgL_denvz00_106)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 271 */
				obj_t BgL_offsetz00_1730;

				obj_t BgL_valuez00_1731;

				BgL_offsetz00_1730 = VECTOR_REF(BgL_codez00_104, (int) (((long) 2)));
				BgL_valuez00_1731 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_104,
						(int) (((long) 3))), BgL_stackz00_105, BgL_denvz00_106);
				{
					long BgL_iz00_1735;

					obj_t BgL_envz00_1736;

					{	/* Eval/evmeaning.scm 273 */
						obj_t BgL_arg2414z00_1734;

						{	/* Eval/evmeaning.scm 274 */
							obj_t BgL_pairz00_3650;

							BgL_pairz00_3650 = BgL_stackz00_105;
							BgL_arg2414z00_1734 = CDR(CDR(CDR(CDR(BgL_pairz00_3650))));
						}
						BgL_iz00_1735 = ((long) 4);
						BgL_envz00_1736 = BgL_arg2414z00_1734;
					BgL_zc3anonymousza32415ze3z83_1737:
						if ((BgL_iz00_1735 == (long) CINT(BgL_offsetz00_1730)))
							{	/* Eval/evmeaning.scm 273 */
								SET_CAR(BgL_envz00_1736, BgL_valuez00_1731);
							}
						else
							{
								obj_t BgL_envz00_6416;

								long BgL_iz00_6414;

								BgL_iz00_6414 = (BgL_iz00_1735 + ((long) 1));
								BgL_envz00_6416 = CDR(BgL_envz00_1736);
								BgL_envz00_1736 = BgL_envz00_6416;
								BgL_iz00_1735 = BgL_iz00_6414;
								goto BgL_zc3anonymousza32415ze3z83_1737;
							}
					}
				}
				return BUNSPEC;
			}
		}
	}



/* evmeaning-bounce-9 */
	obj_t BGl_evmeaningzd2bouncezd29z00zz__evmeaningz00(obj_t BgL_codez00_107,
		obj_t BgL_stackz00_108, obj_t BgL_denvz00_109)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 242 */
				obj_t BgL_namez00_1743;

				BgL_namez00_1743 = VECTOR_REF(BgL_codez00_107, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 242 */
					obj_t BgL_valuez00_1744;

					BgL_valuez00_1744 = VECTOR_REF(BgL_codez00_107, (int) (((long) 3)));
					{	/* Eval/evmeaning.scm 243 */
						obj_t BgL_modz00_1745;

						BgL_modz00_1745 = VECTOR_REF(BgL_codez00_107, (int) (((long) 4)));
						{	/* Eval/evmeaning.scm 244 */
							obj_t BgL_globalz00_1746;

							BgL_globalz00_1746 =
								BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_1745,
								BgL_namez00_1743);
							{	/* Eval/evmeaning.scm 245 */

								{	/* Eval/evmeaning.scm 246 */
									bool_t BgL_testz00_6425;

									if (VECTORP(BgL_globalz00_1746))
										{	/* Eval/evmeaning.scm 246 */
											int BgL_arg2682z00_3674;

											BgL_arg2682z00_3674 = VECTOR_LENGTH(BgL_globalz00_1746);
											BgL_testz00_6425 =
												((long) (BgL_arg2682z00_3674) == ((long) 3));
										}
									else
										{	/* Eval/evmeaning.scm 246 */
											BgL_testz00_6425 = ((bool_t) 0);
										}
									if (BgL_testz00_6425)
										{	/* Eval/evmeaning.scm 246 */
											VECTOR_SET(BgL_codez00_107,
												(int) (((long) 0)), BINT(((long) 8)));
											VECTOR_SET(BgL_codez00_107,
												(int) (((long) 2)), BgL_globalz00_1746);
											VECTOR_SET(BgL_codez00_107,
												(int) (((long) 3)), BgL_valuez00_1744);
											return
												BGl_evmeaningz00zz__evmeaningz00(BgL_codez00_107,
												BgL_stackz00_108, BgL_denvz00_109);
										}
									else
										{	/* Eval/evmeaning.scm 246 */
											return
												BGl_evmeaningzd2unboundzd2zz__evmeaningz00
												(BgL_codez00_107, BgL_namez00_1743, BgL_modz00_1745);
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-bounce-7 */
	obj_t BGl_evmeaningzd2bouncezd27z00zz__evmeaningz00(obj_t BgL_codez00_110,
		obj_t BgL_stackz00_111, obj_t BgL_denvz00_112)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 914 */
			{	/* Eval/evmeaning.scm 223 */
				obj_t BgL_namez00_1748;

				BgL_namez00_1748 = VECTOR_REF(BgL_codez00_110, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 223 */
					obj_t BgL_modz00_1749;

					BgL_modz00_1749 = VECTOR_REF(BgL_codez00_110, (int) (((long) 3)));
					{	/* Eval/evmeaning.scm 224 */
						obj_t BgL_globalz00_1750;

						BgL_globalz00_1750 =
							BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_1749,
							BgL_namez00_1748);
						{	/* Eval/evmeaning.scm 225 */

							{	/* Eval/evmeaning.scm 226 */
								bool_t BgL_testz00_6445;

								if (VECTORP(BgL_globalz00_1750))
									{	/* Eval/evmeaning.scm 226 */
										int BgL_arg2682z00_3695;

										BgL_arg2682z00_3695 = VECTOR_LENGTH(BgL_globalz00_1750);
										BgL_testz00_6445 =
											((long) (BgL_arg2682z00_3695) == ((long) 3));
									}
								else
									{	/* Eval/evmeaning.scm 226 */
										BgL_testz00_6445 = ((bool_t) 0);
									}
								if (BgL_testz00_6445)
									{	/* Eval/evmeaning.scm 226 */
										VECTOR_SET(BgL_codez00_110,
											(int) (((long) 0)), BINT(((long) 6)));
										VECTOR_SET(BgL_codez00_110,
											(int) (((long) 2)), BgL_globalz00_1750);
										return VECTOR_REF(BgL_globalz00_1750, (int) (((long) 2)));
									}
								else
									{	/* Eval/evmeaning.scm 226 */
										return
											BGl_evmeaningzd2unboundzd2zz__evmeaningz00
											(BgL_codez00_110, BgL_namez00_1748, BgL_modz00_1749);
									}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-location */
	BGL_EXPORTED_DEF obj_t BGl_evmeaningzd2locationzd2zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 955 */
			{	/* Eval/evmeaning.scm 956 */
				obj_t BgL_envz00_1768;

				BgL_envz00_1768 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Eval/evmeaning.scm 957 */
					bool_t BgL_testz00_6460;

					{	/* Eval/evmeaning.scm 957 */
						obj_t BgL_arg2450z00_1790;

						BgL_arg2450z00_1790 = BGL_ENV_BYTECODE(BgL_envz00_1768);
						BgL_testz00_6460 = VECTORP(BgL_arg2450z00_1790);
					}
					if (BgL_testz00_6460)
						{	/* Eval/evmeaning.scm 958 */
							obj_t BgL_pz00_1770;

							{	/* Eval/evmeaning.scm 958 */
								obj_t BgL_arg2448z00_1788;

								BgL_arg2448z00_1788 = BGL_ENV_BYTECODE(BgL_envz00_1768);
								BgL_pz00_1770 =
									VECTOR_REF(BgL_arg2448z00_1788, (int) (((long) 1)));
							}
							{
								obj_t BgL_fnamez00_1771;

								obj_t BgL_locz00_1772;

								if (PAIRP(BgL_pz00_1770))
									{	/* Eval/evmeaning.scm 959 */
										obj_t BgL_cdrzd21678zd2_1777;

										BgL_cdrzd21678zd2_1777 = CDR(BgL_pz00_1770);
										if (
											(CAR(BgL_pz00_1770) == BGl_symbol2960z00zz__evmeaningz00))
											{	/* Eval/evmeaning.scm 959 */
												if (PAIRP(BgL_cdrzd21678zd2_1777))
													{	/* Eval/evmeaning.scm 959 */
														obj_t BgL_cdrzd21682zd2_1780;

														BgL_cdrzd21682zd2_1780 =
															CDR(BgL_cdrzd21678zd2_1777);
														if (PAIRP(BgL_cdrzd21682zd2_1780))
															{	/* Eval/evmeaning.scm 959 */
																if (NULLP(CDR(BgL_cdrzd21682zd2_1780)))
																	{	/* Eval/evmeaning.scm 959 */
																		BgL_fnamez00_1771 =
																			CAR(BgL_cdrzd21678zd2_1777);
																		BgL_locz00_1772 =
																			CAR(BgL_cdrzd21682zd2_1780);
																		return BgL_pz00_1770;
																	}
																else
																	{	/* Eval/evmeaning.scm 959 */
																		bool_t BgL_auxz00_6482;

																	BgL_tagzd21671zd2_1774:
																		BgL_auxz00_6482 = ((bool_t) 0);
																		return BBOOL(BgL_auxz00_6482);
																	}
															}
														else
															{	/* Eval/evmeaning.scm 959 */
																bool_t BgL_auxz00_6484;

																goto BgL_tagzd21671zd2_1774;
																return BBOOL(BgL_auxz00_6484);
															}
													}
												else
													{	/* Eval/evmeaning.scm 959 */
														bool_t BgL_auxz00_6486;

														goto BgL_tagzd21671zd2_1774;
														return BBOOL(BgL_auxz00_6486);
													}
											}
										else
											{	/* Eval/evmeaning.scm 959 */
												bool_t BgL_auxz00_6488;

												goto BgL_tagzd21671zd2_1774;
												return BBOOL(BgL_auxz00_6488);
											}
									}
								else
									{	/* Eval/evmeaning.scm 959 */
										bool_t BgL_auxz00_6490;

										goto BgL_tagzd21671zd2_1774;
										return BBOOL(BgL_auxz00_6490);
									}
							}
						}
					else
						{	/* Eval/evmeaning.scm 957 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _evmeaning-location */
	obj_t BGl__evmeaningzd2locationzd2zz__evmeaningz00(obj_t BgL_envz00_4531)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 955 */
			return BGl_evmeaningzd2locationzd2zz__evmeaningz00();
		}
	}



/* update-eval-global! */
	obj_t BGl_updatezd2evalzd2globalz12z12zz__evmeaningz00(obj_t BgL_codez00_135,
		obj_t BgL_variablez00_136, obj_t BgL_valz00_137)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 967 */
			if (
				(VECTOR_REF(BgL_variablez00_136,
						(int) (((long) 0))) == BINT(((long) 1))))
				{	/* Eval/evmeaning.scm 970 */
					obj_t BgL_auxz00_6498;

					BgL_auxz00_6498 = VECTOR_REF(BgL_variablez00_136, (int) (((long) 2)));
					__EVMEANING_ADDRESS_SET(BgL_auxz00_6498, BgL_valz00_137);
				}
			else
				{	/* Eval/evmeaning.scm 969 */
					VECTOR_SET(BgL_variablez00_136, (int) (((long) 2)), BgL_valz00_137);
					{	/* Eval/evmeaning.scm 973 */
						bool_t BgL_testz00_6504;

						if (
							(VECTOR_REF(BgL_variablez00_136,
									(int) (((long) 0))) == BINT(((long) 0))))
							{	/* Eval/evmeaning.scm 973 */
								BgL_testz00_6504 =
									BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
							}
						else
							{	/* Eval/evmeaning.scm 973 */
								BgL_testz00_6504 = ((bool_t) 0);
							}
						if (BgL_testz00_6504)
							{	/* Eval/evmeaning.scm 976 */
								obj_t BgL_arg2454z00_1794;

								obj_t BgL_arg2456z00_1796;

								BgL_arg2454z00_1794 = BGl_symbol2962z00zz__evmeaningz00;
								BgL_arg2456z00_1796 =
									VECTOR_REF(BgL_variablez00_136, (int) (((long) 1)));
								{	/* Eval/evmeaning.scm 975 */
									obj_t BgL_list2458z00_1798;

									{	/* Eval/evmeaning.scm 975 */
										obj_t BgL_arg2459z00_1799;

										{	/* Eval/evmeaning.scm 975 */
											obj_t BgL_arg2460z00_1800;

											{	/* Eval/evmeaning.scm 975 */
												obj_t BgL_arg2461z00_1801;

												BgL_arg2461z00_1801 =
													MAKE_PAIR(BGl_string2964z00zz__evmeaningz00, BNIL);
												BgL_arg2460z00_1800 =
													MAKE_PAIR(BgL_arg2456z00_1796, BgL_arg2461z00_1801);
											}
											BgL_arg2459z00_1799 =
												MAKE_PAIR(BGl_string2965z00zz__evmeaningz00,
												BgL_arg2460z00_1800);
										}
										BgL_list2458z00_1798 =
											MAKE_PAIR(BgL_arg2454z00_1794, BgL_arg2459z00_1799);
									}
									BGl_evmeaningzd2warningzd2zz__everrorz00(BgL_codez00_135,
										BgL_list2458z00_1798);
							}}
						else
							{	/* Eval/evmeaning.scm 973 */
								BFALSE;
							}
					}
				}
			return VECTOR_REF(BgL_variablez00_136, (int) (((long) 1)));
		}
	}



/* evmeaning-funcall-0 */
	obj_t BGl_evmeaningzd2funcallzd20z00zz__evmeaningz00(obj_t BgL_codez00_138,
		obj_t BgL_stackz00_139, obj_t BgL_denvz00_140, obj_t BgL_funz00_141)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 984 */
			{	/* Eval/evmeaning.scm 985 */
				obj_t BgL_namez00_1807;

				BgL_namez00_1807 = VECTOR_REF(BgL_codez00_138, (int) (((long) 2)));
				BGL_ENV_BYTECODE_SET(BgL_denvz00_140, BgL_codez00_138);
				{	/* Eval/evmeaning.scm 987 */
					obj_t BgL_auxz00_6523;

					BgL_auxz00_6523 = VECTOR_REF(BgL_codez00_138, (int) (((long) 1)));
					BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_140, BgL_auxz00_6523);
				}
				if (PROCEDUREP(BgL_funz00_141))
					{	/* Eval/evmeaning.scm 989 */
						if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_141, (int) (((long) 0))))
							{	/* Eval/evmeaning.scm 991 */
								return eval_funcall_0(BgL_funz00_141);
							}
						else
							{	/* Eval/evmeaning.scm 991 */
								return
									BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
									(BgL_codez00_138, BgL_namez00_1807, (int) (((long) 0)),
									PROCEDURE_ARITY(BgL_funz00_141));
					}}
				else
					{	/* Eval/evmeaning.scm 989 */
						return
							BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_138,
							BGl_string2941z00zz__evmeaningz00, BgL_namez00_1807,
							BGl_string2948z00zz__evmeaningz00);
					}
			}
		}
	}



/* evmeaning-funcall-1 */
	obj_t BGl_evmeaningzd2funcallzd21z00zz__evmeaningz00(obj_t BgL_codez00_142,
		obj_t BgL_stackz00_143, obj_t BgL_denvz00_144, obj_t BgL_funz00_145)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 999 */
			{	/* Eval/evmeaning.scm 1000 */
				obj_t BgL_namez00_1813;

				BgL_namez00_1813 = VECTOR_REF(BgL_codez00_142, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 1000 */
					obj_t BgL_a0z00_1814;

					BgL_a0z00_1814 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_142,
							(int) (((long) 4))), BgL_stackz00_143, BgL_denvz00_144);
					{	/* Eval/evmeaning.scm 1001 */

						BGL_ENV_BYTECODE_SET(BgL_denvz00_144, BgL_codez00_142);
						{	/* Eval/evmeaning.scm 1003 */
							obj_t BgL_auxz00_6543;

							BgL_auxz00_6543 = VECTOR_REF(BgL_codez00_142, (int) (((long) 1)));
							BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_144, BgL_auxz00_6543);
						}
						if (PROCEDUREP(BgL_funz00_145))
							{	/* Eval/evmeaning.scm 1005 */
								if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_145,
										(int) (((long) 1))))
									{	/* Eval/evmeaning.scm 1007 */
										return eval_funcall_1(BgL_funz00_145, BgL_a0z00_1814);
									}
								else
									{	/* Eval/evmeaning.scm 1007 */
										return
											BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
											(BgL_codez00_142, BgL_namez00_1813, (int) (((long) 1)),
											PROCEDURE_ARITY(BgL_funz00_145));
							}}
						else
							{	/* Eval/evmeaning.scm 1005 */
								return
									BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_142,
									BGl_string2941z00zz__evmeaningz00,
									BGl_string2948z00zz__evmeaningz00, BgL_namez00_1813);
							}
					}
				}
			}
		}
	}



/* evmeaning-funcall-2 */
	obj_t BGl_evmeaningzd2funcallzd22z00zz__evmeaningz00(obj_t BgL_codez00_146,
		obj_t BgL_stackz00_147, obj_t BgL_denvz00_148, obj_t BgL_funz00_149)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1015 */
			{	/* Eval/evmeaning.scm 1016 */
				obj_t BgL_namez00_1821;

				BgL_namez00_1821 = VECTOR_REF(BgL_codez00_146, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 1016 */
					obj_t BgL_a0z00_1822;

					BgL_a0z00_1822 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_146,
							(int) (((long) 4))), BgL_stackz00_147, BgL_denvz00_148);
					{	/* Eval/evmeaning.scm 1017 */
						obj_t BgL_a1z00_1823;

						BgL_a1z00_1823 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_146,
								(int) (((long) 5))), BgL_stackz00_147, BgL_denvz00_148);
						{	/* Eval/evmeaning.scm 1018 */

							BGL_ENV_BYTECODE_SET(BgL_denvz00_148, BgL_codez00_146);
							{	/* Eval/evmeaning.scm 1020 */
								obj_t BgL_auxz00_6566;

								BgL_auxz00_6566 =
									VECTOR_REF(BgL_codez00_146, (int) (((long) 1)));
								BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_148, BgL_auxz00_6566);
							}
							if (PROCEDUREP(BgL_funz00_149))
								{	/* Eval/evmeaning.scm 1022 */
									if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_149,
											(int) (((long) 2))))
										{	/* Eval/evmeaning.scm 1024 */
											return
												eval_funcall_2(BgL_funz00_149, BgL_a0z00_1822,
												BgL_a1z00_1823);
										}
									else
										{	/* Eval/evmeaning.scm 1024 */
											return
												BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
												(BgL_codez00_146, BgL_namez00_1821, (int) (((long) 2)),
												PROCEDURE_ARITY(BgL_funz00_149));
								}}
							else
								{	/* Eval/evmeaning.scm 1022 */
									return
										BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_146,
										BGl_string2941z00zz__evmeaningz00,
										BGl_string2948z00zz__evmeaningz00, BgL_namez00_1821);
								}
						}
					}
				}
			}
		}
	}



/* evmeaning-funcall-3 */
	obj_t BGl_evmeaningzd2funcallzd23z00zz__evmeaningz00(obj_t BgL_codez00_150,
		obj_t BgL_stackz00_151, obj_t BgL_denvz00_152, obj_t BgL_funz00_153)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1032 */
			{	/* Eval/evmeaning.scm 1033 */
				obj_t BgL_namez00_1831;

				BgL_namez00_1831 = VECTOR_REF(BgL_codez00_150, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 1033 */
					obj_t BgL_a0z00_1832;

					BgL_a0z00_1832 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_150,
							(int) (((long) 4))), BgL_stackz00_151, BgL_denvz00_152);
					{	/* Eval/evmeaning.scm 1034 */
						obj_t BgL_a1z00_1833;

						BgL_a1z00_1833 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_150,
								(int) (((long) 5))), BgL_stackz00_151, BgL_denvz00_152);
						{	/* Eval/evmeaning.scm 1035 */
							obj_t BgL_a2z00_1834;

							BgL_a2z00_1834 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_150,
									(int) (((long) 6))), BgL_stackz00_151, BgL_denvz00_152);
							{	/* Eval/evmeaning.scm 1036 */

								BGL_ENV_BYTECODE_SET(BgL_denvz00_152, BgL_codez00_150);
								{	/* Eval/evmeaning.scm 1038 */
									obj_t BgL_auxz00_6592;

									BgL_auxz00_6592 =
										VECTOR_REF(BgL_codez00_150, (int) (((long) 1)));
									BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_152, BgL_auxz00_6592);
								}
								if (PROCEDUREP(BgL_funz00_153))
									{	/* Eval/evmeaning.scm 1040 */
										if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_153,
												(int) (((long) 3))))
											{	/* Eval/evmeaning.scm 1042 */
												return
													eval_funcall_3(BgL_funz00_153, BgL_a0z00_1832,
													BgL_a1z00_1833, BgL_a2z00_1834);
											}
										else
											{	/* Eval/evmeaning.scm 1042 */
												return
													BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
													(BgL_codez00_150, BgL_namez00_1831,
													(int) (((long) 3)), PROCEDURE_ARITY(BgL_funz00_153));
									}}
								else
									{	/* Eval/evmeaning.scm 1040 */
										return
											BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_150,
											BGl_string2941z00zz__evmeaningz00,
											BGl_string2948z00zz__evmeaningz00, BgL_namez00_1831);
									}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-funcall-4 */
	obj_t BGl_evmeaningzd2funcallzd24z00zz__evmeaningz00(obj_t BgL_codez00_154,
		obj_t BgL_stackz00_155, obj_t BgL_denvz00_156, obj_t BgL_funz00_157)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1050 */
			{	/* Eval/evmeaning.scm 1051 */
				obj_t BgL_namez00_1843;

				BgL_namez00_1843 = VECTOR_REF(BgL_codez00_154, (int) (((long) 2)));
				{	/* Eval/evmeaning.scm 1051 */
					obj_t BgL_a0z00_1844;

					BgL_a0z00_1844 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_154,
							(int) (((long) 4))), BgL_stackz00_155, BgL_denvz00_156);
					{	/* Eval/evmeaning.scm 1052 */
						obj_t BgL_a1z00_1845;

						BgL_a1z00_1845 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_154,
								(int) (((long) 5))), BgL_stackz00_155, BgL_denvz00_156);
						{	/* Eval/evmeaning.scm 1053 */
							obj_t BgL_a2z00_1846;

							BgL_a2z00_1846 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_154,
									(int) (((long) 6))), BgL_stackz00_155, BgL_denvz00_156);
							{	/* Eval/evmeaning.scm 1054 */
								obj_t BgL_a3z00_1847;

								BgL_a3z00_1847 =
									BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_154,
										(int) (((long) 7))), BgL_stackz00_155, BgL_denvz00_156);
								{	/* Eval/evmeaning.scm 1055 */

									BGL_ENV_BYTECODE_SET(BgL_denvz00_156, BgL_codez00_154);
									{	/* Eval/evmeaning.scm 1057 */
										obj_t BgL_auxz00_6621;

										BgL_auxz00_6621 =
											VECTOR_REF(BgL_codez00_154, (int) (((long) 1)));
										BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_156,
											BgL_auxz00_6621);
									}
									if (PROCEDUREP(BgL_funz00_157))
										{	/* Eval/evmeaning.scm 1059 */
											if (PROCEDURE_CORRECT_ARITYP(BgL_funz00_157,
													(int) (((long) 4))))
												{	/* Eval/evmeaning.scm 1061 */
													return
														eval_funcall_4(BgL_funz00_157, BgL_a0z00_1844,
														BgL_a1z00_1845, BgL_a2z00_1846, BgL_a3z00_1847);
												}
											else
												{	/* Eval/evmeaning.scm 1061 */
													return
														BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
														(BgL_codez00_154, BgL_namez00_1843,
														(int) (((long) 4)),
														PROCEDURE_ARITY(BgL_funz00_157));
										}}
									else
										{	/* Eval/evmeaning.scm 1059 */
											return
												BGl_evmeaningzd2errorzd2zz__everrorz00(BgL_codez00_154,
												BGl_string2941z00zz__evmeaningz00,
												BGl_string2948z00zz__evmeaningz00, BgL_namez00_1843);
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-tailcall-0-stack */
	obj_t BGl_evmeaningzd2tailcallzd20zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_158, obj_t BgL_stackz00_159, obj_t BgL_denvz00_160,
		obj_t BgL_funz00_161)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1069 */
			BGL_ENV_BYTECODE_SET(BgL_denvz00_160, BgL_codez00_158);
			{	/* Eval/evmeaning.scm 1071 */
				obj_t BgL_envdz00_1857;

				{	/* Eval/evmeaning.scm 1071 */
					obj_t BgL_arg2435z00_3874;

					BgL_arg2435z00_3874 = PROCEDURE_ATTR(BgL_funz00_161);
					BgL_envdz00_1857 =
						STRUCT_REF(BgL_arg2435z00_3874, (int) (((long) 2)));
				}
				{	/* Eval/evmeaning.scm 1071 */
					obj_t BgL_arityz00_1858;

					{	/* Eval/evmeaning.scm 1072 */
						obj_t BgL_arg2436z00_3880;

						BgL_arg2436z00_3880 = PROCEDURE_ATTR(BgL_funz00_161);
						BgL_arityz00_1858 =
							STRUCT_REF(BgL_arg2436z00_3880, (int) (((long) 0)));
					}
					{	/* Eval/evmeaning.scm 1072 */

						{	/* Eval/evmeaning.scm 1073 */
							bool_t BgL_testz00_6642;

							{	/* Eval/evmeaning.scm 1073 */
								obj_t BgL_auxz00_6643;

								BgL_auxz00_6643 =
									VECTOR_REF(BgL_codez00_158, (int) (((long) 2)));
								BgL_testz00_6642 = SYMBOLP(BgL_auxz00_6643);
							}
							if (BgL_testz00_6642)
								{	/* Eval/evmeaning.scm 1073 */
									{	/* Eval/evmeaning.scm 1074 */
										obj_t BgL_auxz00_6647;

										BgL_auxz00_6647 =
											VECTOR_REF(BgL_codez00_158, (int) (((long) 2)));
										BGL_ENV_SET_TRACE_NAME(BgL_denvz00_160, BgL_auxz00_6647);
									}
									{	/* Eval/evmeaning.scm 1075 */
										obj_t BgL_auxz00_6651;

										BgL_auxz00_6651 =
											VECTOR_REF(BgL_codez00_158, (int) (((long) 1)));
										BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_160,
											BgL_auxz00_6651);
								}}
							else
								{	/* Eval/evmeaning.scm 1073 */
									BFALSE;
								}
						}
						{

							if (INTEGERP(BgL_arityz00_1858))
								{	/* Eval/evmeaning.scm 1076 */
									switch ((long) CINT(BgL_arityz00_1858))
										{
										case ((long) 0):

											return BgL_envdz00_1857;
											break;
										case ((long) -1):

											return MAKE_PAIR(BNIL, BgL_envdz00_1857);
											break;
										default:
										BgL_case_else1893z00_1863:
											return
												BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
												(BgL_codez00_158, VECTOR_REF(BgL_codez00_158,
													(int) (((long) 2))), (int) (((long) 0)),
												CINT(BgL_arityz00_1858));
								}}
							else
								{	/* Eval/evmeaning.scm 1076 */
									goto BgL_case_else1893z00_1863;
								}
						}
					}
				}
			}
		}
	}



/* evmeaning-tailcall-1-stack */
	obj_t BGl_evmeaningzd2tailcallzd21zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_162, obj_t BgL_stackz00_163, obj_t BgL_denvz00_164,
		obj_t BgL_funz00_165)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1087 */
			{	/* Eval/evmeaning.scm 1088 */
				obj_t BgL_a0z00_1868;

				BgL_a0z00_1868 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_162,
						(int) (((long) 4))), BgL_stackz00_163, BgL_denvz00_164);
				BGL_ENV_BYTECODE_SET(BgL_denvz00_164, BgL_codez00_162);
				{	/* Eval/evmeaning.scm 1090 */
					obj_t BgL_envdz00_1869;

					{	/* Eval/evmeaning.scm 1090 */
						obj_t BgL_arg2435z00_3897;

						BgL_arg2435z00_3897 = PROCEDURE_ATTR(BgL_funz00_165);
						BgL_envdz00_1869 =
							STRUCT_REF(BgL_arg2435z00_3897, (int) (((long) 2)));
					}
					{	/* Eval/evmeaning.scm 1090 */
						obj_t BgL_arityz00_1870;

						{	/* Eval/evmeaning.scm 1091 */
							obj_t BgL_arg2436z00_3903;

							BgL_arg2436z00_3903 = PROCEDURE_ATTR(BgL_funz00_165);
							BgL_arityz00_1870 =
								STRUCT_REF(BgL_arg2436z00_3903, (int) (((long) 0)));
						}
						{	/* Eval/evmeaning.scm 1091 */

							{	/* Eval/evmeaning.scm 1092 */
								bool_t BgL_testz00_6675;

								{	/* Eval/evmeaning.scm 1092 */
									obj_t BgL_auxz00_6676;

									BgL_auxz00_6676 =
										VECTOR_REF(BgL_codez00_162, (int) (((long) 2)));
									BgL_testz00_6675 = SYMBOLP(BgL_auxz00_6676);
								}
								if (BgL_testz00_6675)
									{	/* Eval/evmeaning.scm 1092 */
										{	/* Eval/evmeaning.scm 1093 */
											obj_t BgL_auxz00_6680;

											BgL_auxz00_6680 =
												VECTOR_REF(BgL_codez00_162, (int) (((long) 2)));
											BGL_ENV_SET_TRACE_NAME(BgL_denvz00_164, BgL_auxz00_6680);
										}
										{	/* Eval/evmeaning.scm 1094 */
											obj_t BgL_auxz00_6684;

											BgL_auxz00_6684 =
												VECTOR_REF(BgL_codez00_162, (int) (((long) 1)));
											BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_164,
												BgL_auxz00_6684);
									}}
								else
									{	/* Eval/evmeaning.scm 1092 */
										BFALSE;
									}
							}
							{

								if (INTEGERP(BgL_arityz00_1870))
									{	/* Eval/evmeaning.scm 1095 */
										switch ((long) CINT(BgL_arityz00_1870))
											{
											case ((long) 1):

												return MAKE_PAIR(BgL_a0z00_1868, BgL_envdz00_1869);
												break;
											case ((long) -1):

												{	/* Eval/evmeaning.scm 1099 */
													obj_t BgL_arg2522z00_1878;

													{	/* Eval/evmeaning.scm 1099 */
														obj_t BgL_list2523z00_1879;

														BgL_list2523z00_1879 =
															MAKE_PAIR(BgL_a0z00_1868, BNIL);
														BgL_arg2522z00_1878 = BgL_list2523z00_1879;
													}
													return
														MAKE_PAIR(BgL_arg2522z00_1878, BgL_envdz00_1869);
												}
												break;
											case ((long) -2):

												{	/* Eval/evmeaning.scm 1101 */
													obj_t BgL_arg2524z00_1880;

													BgL_arg2524z00_1880 =
														MAKE_PAIR(BNIL, BgL_envdz00_1869);
													return MAKE_PAIR(BgL_a0z00_1868, BgL_arg2524z00_1880);
												}
												break;
											default:
											BgL_case_else1895z00_1875:
												return
													BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
													(BgL_codez00_162, VECTOR_REF(BgL_codez00_162,
														(int) (((long) 2))), (int) (((long) 1)),
													CINT(BgL_arityz00_1870));
									}}
								else
									{	/* Eval/evmeaning.scm 1095 */
										goto BgL_case_else1895z00_1875;
									}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-tailcall-2-stack */
	obj_t BGl_evmeaningzd2tailcallzd22zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_166, obj_t BgL_stackz00_167, obj_t BgL_denvz00_168,
		obj_t BgL_funz00_169)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1108 */
			{	/* Eval/evmeaning.scm 1109 */
				obj_t BgL_a0z00_1884;

				BgL_a0z00_1884 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_166,
						(int) (((long) 4))), BgL_stackz00_167, BgL_denvz00_168);
				{	/* Eval/evmeaning.scm 1109 */
					obj_t BgL_a1z00_1885;

					BgL_a1z00_1885 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_166,
							(int) (((long) 5))), BgL_stackz00_167, BgL_denvz00_168);
					{	/* Eval/evmeaning.scm 1110 */

						BGL_ENV_BYTECODE_SET(BgL_denvz00_168, BgL_codez00_166);
						{	/* Eval/evmeaning.scm 1112 */
							obj_t BgL_envdz00_1886;

							{	/* Eval/evmeaning.scm 1112 */
								obj_t BgL_arg2435z00_3924;

								BgL_arg2435z00_3924 = PROCEDURE_ATTR(BgL_funz00_169);
								BgL_envdz00_1886 =
									STRUCT_REF(BgL_arg2435z00_3924, (int) (((long) 2)));
							}
							{	/* Eval/evmeaning.scm 1112 */
								obj_t BgL_arityz00_1887;

								{	/* Eval/evmeaning.scm 1113 */
									obj_t BgL_arg2436z00_3930;

									BgL_arg2436z00_3930 = PROCEDURE_ATTR(BgL_funz00_169);
									BgL_arityz00_1887 =
										STRUCT_REF(BgL_arg2436z00_3930, (int) (((long) 0)));
								}
								{	/* Eval/evmeaning.scm 1113 */

									{	/* Eval/evmeaning.scm 1114 */
										bool_t BgL_testz00_6715;

										{	/* Eval/evmeaning.scm 1114 */
											obj_t BgL_auxz00_6716;

											BgL_auxz00_6716 =
												VECTOR_REF(BgL_codez00_166, (int) (((long) 2)));
											BgL_testz00_6715 = SYMBOLP(BgL_auxz00_6716);
										}
										if (BgL_testz00_6715)
											{	/* Eval/evmeaning.scm 1114 */
												{	/* Eval/evmeaning.scm 1115 */
													obj_t BgL_auxz00_6720;

													BgL_auxz00_6720 =
														VECTOR_REF(BgL_codez00_166, (int) (((long) 2)));
													BGL_ENV_SET_TRACE_NAME(BgL_denvz00_168,
														BgL_auxz00_6720);
												}
												{	/* Eval/evmeaning.scm 1116 */
													obj_t BgL_auxz00_6724;

													BgL_auxz00_6724 =
														VECTOR_REF(BgL_codez00_166, (int) (((long) 1)));
													BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_168,
														BgL_auxz00_6724);
											}}
										else
											{	/* Eval/evmeaning.scm 1114 */
												BFALSE;
											}
									}
									{

										if (INTEGERP(BgL_arityz00_1887))
											{	/* Eval/evmeaning.scm 1117 */
												switch ((long) CINT(BgL_arityz00_1887))
													{
													case ((long) 2):

														{	/* Eval/evmeaning.scm 1119 */
															obj_t BgL_arg2533z00_1895;

															BgL_arg2533z00_1895 =
																MAKE_PAIR(BgL_a1z00_1885, BgL_envdz00_1886);
															return
																MAKE_PAIR(BgL_a0z00_1884, BgL_arg2533z00_1895);
														}
														break;
													case ((long) -1):

														{	/* Eval/evmeaning.scm 1121 */
															obj_t BgL_arg2534z00_1896;

															{	/* Eval/evmeaning.scm 1121 */
																obj_t BgL_list2535z00_1897;

																{	/* Eval/evmeaning.scm 1121 */
																	obj_t BgL_arg2536z00_1898;

																	BgL_arg2536z00_1898 =
																		MAKE_PAIR(BgL_a1z00_1885, BNIL);
																	BgL_list2535z00_1897 =
																		MAKE_PAIR(BgL_a0z00_1884,
																		BgL_arg2536z00_1898);
																}
																BgL_arg2534z00_1896 = BgL_list2535z00_1897;
															}
															return
																MAKE_PAIR(BgL_arg2534z00_1896,
																BgL_envdz00_1886);
														}
														break;
													case ((long) -2):

														{	/* Eval/evmeaning.scm 1123 */
															obj_t BgL_arg2537z00_1899;

															{	/* Eval/evmeaning.scm 1123 */
																obj_t BgL_arg2539z00_1900;

																{	/* Eval/evmeaning.scm 1123 */
																	obj_t BgL_list2540z00_1901;

																	BgL_list2540z00_1901 =
																		MAKE_PAIR(BgL_a1z00_1885, BNIL);
																	BgL_arg2539z00_1900 = BgL_list2540z00_1901;
																}
																BgL_arg2537z00_1899 =
																	MAKE_PAIR(BgL_arg2539z00_1900,
																	BgL_envdz00_1886);
															}
															return
																MAKE_PAIR(BgL_a0z00_1884, BgL_arg2537z00_1899);
														}
														break;
													case ((long) -3):

														{	/* Eval/evmeaning.scm 1125 */
															obj_t BgL_arg2541z00_1902;

															{	/* Eval/evmeaning.scm 1125 */
																obj_t BgL_arg2542z00_1903;

																BgL_arg2542z00_1903 =
																	MAKE_PAIR(BNIL, BgL_envdz00_1886);
																BgL_arg2541z00_1902 =
																	MAKE_PAIR(BgL_a1z00_1885,
																	BgL_arg2542z00_1903);
															}
															return
																MAKE_PAIR(BgL_a0z00_1884, BgL_arg2541z00_1902);
														}
														break;
													default:
													BgL_case_else1897z00_1892:
														return
															BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
															(BgL_codez00_166, VECTOR_REF(BgL_codez00_166,
																(int) (((long) 2))), (int) (((long) 2)),
															CINT(BgL_arityz00_1887));
											}}
										else
											{	/* Eval/evmeaning.scm 1117 */
												goto BgL_case_else1897z00_1892;
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



/* evmeaning-tailcall-3-stack */
	obj_t BGl_evmeaningzd2tailcallzd23zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_170, obj_t BgL_stackz00_171, obj_t BgL_denvz00_172,
		obj_t BgL_funz00_173)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1132 */
			{	/* Eval/evmeaning.scm 1133 */
				obj_t BgL_a0z00_1908;

				BgL_a0z00_1908 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_170,
						(int) (((long) 4))), BgL_stackz00_171, BgL_denvz00_172);
				{	/* Eval/evmeaning.scm 1133 */
					obj_t BgL_a1z00_1909;

					BgL_a1z00_1909 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_170,
							(int) (((long) 5))), BgL_stackz00_171, BgL_denvz00_172);
					{	/* Eval/evmeaning.scm 1134 */
						obj_t BgL_a2z00_1910;

						BgL_a2z00_1910 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_170,
								(int) (((long) 6))), BgL_stackz00_171, BgL_denvz00_172);
						{	/* Eval/evmeaning.scm 1135 */

							BGL_ENV_BYTECODE_SET(BgL_denvz00_172, BgL_codez00_170);
							{	/* Eval/evmeaning.scm 1137 */
								obj_t BgL_envdz00_1911;

								{	/* Eval/evmeaning.scm 1137 */
									obj_t BgL_arg2435z00_3955;

									BgL_arg2435z00_3955 = PROCEDURE_ATTR(BgL_funz00_173);
									BgL_envdz00_1911 =
										STRUCT_REF(BgL_arg2435z00_3955, (int) (((long) 2)));
								}
								{	/* Eval/evmeaning.scm 1137 */
									obj_t BgL_arityz00_1912;

									{	/* Eval/evmeaning.scm 1138 */
										obj_t BgL_arg2436z00_3961;

										BgL_arg2436z00_3961 = PROCEDURE_ATTR(BgL_funz00_173);
										BgL_arityz00_1912 =
											STRUCT_REF(BgL_arg2436z00_3961, (int) (((long) 0)));
									}
									{	/* Eval/evmeaning.scm 1138 */

										{	/* Eval/evmeaning.scm 1139 */
											bool_t BgL_testz00_6764;

											{	/* Eval/evmeaning.scm 1139 */
												obj_t BgL_auxz00_6765;

												BgL_auxz00_6765 =
													VECTOR_REF(BgL_codez00_170, (int) (((long) 2)));
												BgL_testz00_6764 = SYMBOLP(BgL_auxz00_6765);
											}
											if (BgL_testz00_6764)
												{	/* Eval/evmeaning.scm 1139 */
													{	/* Eval/evmeaning.scm 1140 */
														obj_t BgL_auxz00_6769;

														BgL_auxz00_6769 =
															VECTOR_REF(BgL_codez00_170, (int) (((long) 2)));
														BGL_ENV_SET_TRACE_NAME(BgL_denvz00_172,
															BgL_auxz00_6769);
													}
													{	/* Eval/evmeaning.scm 1141 */
														obj_t BgL_auxz00_6773;

														BgL_auxz00_6773 =
															VECTOR_REF(BgL_codez00_170, (int) (((long) 1)));
														BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_172,
															BgL_auxz00_6773);
												}}
											else
												{	/* Eval/evmeaning.scm 1139 */
													BFALSE;
												}
										}
										{

											if (INTEGERP(BgL_arityz00_1912))
												{	/* Eval/evmeaning.scm 1142 */
													switch ((long) CINT(BgL_arityz00_1912))
														{
														case ((long) 3):

															{	/* Eval/evmeaning.scm 1144 */
																obj_t BgL_arg2552z00_1920;

																{	/* Eval/evmeaning.scm 1144 */
																	obj_t BgL_arg2553z00_1921;

																	BgL_arg2553z00_1921 =
																		MAKE_PAIR(BgL_a2z00_1910, BgL_envdz00_1911);
																	BgL_arg2552z00_1920 =
																		MAKE_PAIR(BgL_a1z00_1909,
																		BgL_arg2553z00_1921);
																}
																return
																	MAKE_PAIR(BgL_a0z00_1908,
																	BgL_arg2552z00_1920);
															}
															break;
														case ((long) -1):

															{	/* Eval/evmeaning.scm 1146 */
																obj_t BgL_arg2554z00_1922;

																{	/* Eval/evmeaning.scm 1146 */
																	obj_t BgL_list2555z00_1923;

																	{	/* Eval/evmeaning.scm 1146 */
																		obj_t BgL_arg2556z00_1924;

																		{	/* Eval/evmeaning.scm 1146 */
																			obj_t BgL_arg2557z00_1925;

																			BgL_arg2557z00_1925 =
																				MAKE_PAIR(BgL_a2z00_1910, BNIL);
																			BgL_arg2556z00_1924 =
																				MAKE_PAIR(BgL_a1z00_1909,
																				BgL_arg2557z00_1925);
																		}
																		BgL_list2555z00_1923 =
																			MAKE_PAIR(BgL_a0z00_1908,
																			BgL_arg2556z00_1924);
																	}
																	BgL_arg2554z00_1922 = BgL_list2555z00_1923;
																}
																return
																	MAKE_PAIR(BgL_arg2554z00_1922,
																	BgL_envdz00_1911);
															}
															break;
														case ((long) -2):

															{	/* Eval/evmeaning.scm 1148 */
																obj_t BgL_arg2558z00_1926;

																{	/* Eval/evmeaning.scm 1148 */
																	obj_t BgL_arg2559z00_1927;

																	{	/* Eval/evmeaning.scm 1148 */
																		obj_t BgL_list2560z00_1928;

																		{	/* Eval/evmeaning.scm 1148 */
																			obj_t BgL_arg2561z00_1929;

																			BgL_arg2561z00_1929 =
																				MAKE_PAIR(BgL_a2z00_1910, BNIL);
																			BgL_list2560z00_1928 =
																				MAKE_PAIR(BgL_a1z00_1909,
																				BgL_arg2561z00_1929);
																		}
																		BgL_arg2559z00_1927 = BgL_list2560z00_1928;
																	}
																	BgL_arg2558z00_1926 =
																		MAKE_PAIR(BgL_arg2559z00_1927,
																		BgL_envdz00_1911);
																}
																return
																	MAKE_PAIR(BgL_a0z00_1908,
																	BgL_arg2558z00_1926);
															}
															break;
														case ((long) -3):

															{	/* Eval/evmeaning.scm 1150 */
																obj_t BgL_arg2562z00_1930;

																{	/* Eval/evmeaning.scm 1150 */
																	obj_t BgL_arg2563z00_1931;

																	{	/* Eval/evmeaning.scm 1150 */
																		obj_t BgL_arg2564z00_1932;

																		{	/* Eval/evmeaning.scm 1150 */
																			obj_t BgL_list2565z00_1933;

																			BgL_list2565z00_1933 =
																				MAKE_PAIR(BgL_a2z00_1910, BNIL);
																			BgL_arg2564z00_1932 =
																				BgL_list2565z00_1933;
																		}
																		BgL_arg2563z00_1931 =
																			MAKE_PAIR(BgL_arg2564z00_1932,
																			BgL_envdz00_1911);
																	}
																	BgL_arg2562z00_1930 =
																		MAKE_PAIR(BgL_a1z00_1909,
																		BgL_arg2563z00_1931);
																}
																return
																	MAKE_PAIR(BgL_a0z00_1908,
																	BgL_arg2562z00_1930);
															}
															break;
														case ((long) -4):

															{	/* Eval/evmeaning.scm 1152 */
																obj_t BgL_arg2566z00_1934;

																{	/* Eval/evmeaning.scm 1152 */
																	obj_t BgL_arg2568z00_1935;

																	{	/* Eval/evmeaning.scm 1152 */
																		obj_t BgL_arg2569z00_1936;

																		BgL_arg2569z00_1936 =
																			MAKE_PAIR(BNIL, BgL_envdz00_1911);
																		BgL_arg2568z00_1935 =
																			MAKE_PAIR(BgL_a2z00_1910,
																			BgL_arg2569z00_1936);
																	}
																	BgL_arg2566z00_1934 =
																		MAKE_PAIR(BgL_a1z00_1909,
																		BgL_arg2568z00_1935);
																}
																return
																	MAKE_PAIR(BgL_a0z00_1908,
																	BgL_arg2566z00_1934);
															}
															break;
														default:
														BgL_case_else1899z00_1917:
															return
																BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
																(BgL_codez00_170, VECTOR_REF(BgL_codez00_170,
																	(int) (((long) 2))), (int) (((long) 3)),
																CINT(BgL_arityz00_1912));
												}}
											else
												{	/* Eval/evmeaning.scm 1142 */
													goto BgL_case_else1899z00_1917;
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



/* evmeaning-tailcall-4-stack */
	obj_t BGl_evmeaningzd2tailcallzd24zd2stackzd2zz__evmeaningz00(obj_t
		BgL_codez00_174, obj_t BgL_stackz00_175, obj_t BgL_denvz00_176,
		obj_t BgL_funz00_177)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1159 */
			{	/* Eval/evmeaning.scm 1160 */
				obj_t BgL_a0z00_1942;

				BgL_a0z00_1942 =
					BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_174,
						(int) (((long) 4))), BgL_stackz00_175, BgL_denvz00_176);
				{	/* Eval/evmeaning.scm 1160 */
					obj_t BgL_a1z00_1943;

					BgL_a1z00_1943 =
						BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_174,
							(int) (((long) 5))), BgL_stackz00_175, BgL_denvz00_176);
					{	/* Eval/evmeaning.scm 1161 */
						obj_t BgL_a2z00_1944;

						BgL_a2z00_1944 =
							BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_174,
								(int) (((long) 6))), BgL_stackz00_175, BgL_denvz00_176);
						{	/* Eval/evmeaning.scm 1162 */
							obj_t BgL_a3z00_1945;

							BgL_a3z00_1945 =
								BGl_evmeaningz00zz__evmeaningz00(VECTOR_REF(BgL_codez00_174,
									(int) (((long) 7))), BgL_stackz00_175, BgL_denvz00_176);
							{	/* Eval/evmeaning.scm 1163 */

								BGL_ENV_BYTECODE_SET(BgL_denvz00_176, BgL_codez00_174);
								{	/* Eval/evmeaning.scm 1165 */
									obj_t BgL_envdz00_1946;

									{	/* Eval/evmeaning.scm 1165 */
										obj_t BgL_arg2435z00_3990;

										BgL_arg2435z00_3990 = PROCEDURE_ATTR(BgL_funz00_177);
										BgL_envdz00_1946 =
											STRUCT_REF(BgL_arg2435z00_3990, (int) (((long) 2)));
									}
									{	/* Eval/evmeaning.scm 1165 */
										obj_t BgL_arityz00_1947;

										{	/* Eval/evmeaning.scm 1166 */
											obj_t BgL_arg2436z00_3996;

											BgL_arg2436z00_3996 = PROCEDURE_ATTR(BgL_funz00_177);
											BgL_arityz00_1947 =
												STRUCT_REF(BgL_arg2436z00_3996, (int) (((long) 0)));
										}
										{	/* Eval/evmeaning.scm 1166 */

											{	/* Eval/evmeaning.scm 1167 */
												bool_t BgL_testz00_6824;

												{	/* Eval/evmeaning.scm 1167 */
													obj_t BgL_auxz00_6825;

													BgL_auxz00_6825 =
														VECTOR_REF(BgL_codez00_174, (int) (((long) 2)));
													BgL_testz00_6824 = SYMBOLP(BgL_auxz00_6825);
												}
												if (BgL_testz00_6824)
													{	/* Eval/evmeaning.scm 1167 */
														{	/* Eval/evmeaning.scm 1168 */
															obj_t BgL_auxz00_6829;

															BgL_auxz00_6829 =
																VECTOR_REF(BgL_codez00_174, (int) (((long) 2)));
															BGL_ENV_SET_TRACE_NAME(BgL_denvz00_176,
																BgL_auxz00_6829);
														}
														{	/* Eval/evmeaning.scm 1169 */
															obj_t BgL_auxz00_6833;

															BgL_auxz00_6833 =
																VECTOR_REF(BgL_codez00_174, (int) (((long) 1)));
															BGL_ENV_SET_TRACE_LOCATION(BgL_denvz00_176,
																BgL_auxz00_6833);
													}}
												else
													{	/* Eval/evmeaning.scm 1167 */
														BFALSE;
													}
											}
											{

												if (INTEGERP(BgL_arityz00_1947))
													{	/* Eval/evmeaning.scm 1170 */
														switch ((long) CINT(BgL_arityz00_1947))
															{
															case ((long) 4):

																{	/* Eval/evmeaning.scm 1172 */
																	obj_t BgL_arg2581z00_1955;

																	{	/* Eval/evmeaning.scm 1172 */
																		obj_t BgL_arg2582z00_1956;

																		{	/* Eval/evmeaning.scm 1172 */
																			obj_t BgL_arg2583z00_1957;

																			BgL_arg2583z00_1957 =
																				MAKE_PAIR(BgL_a3z00_1945,
																				BgL_envdz00_1946);
																			BgL_arg2582z00_1956 =
																				MAKE_PAIR(BgL_a2z00_1944,
																				BgL_arg2583z00_1957);
																		}
																		BgL_arg2581z00_1955 =
																			MAKE_PAIR(BgL_a1z00_1943,
																			BgL_arg2582z00_1956);
																	}
																	return
																		MAKE_PAIR(BgL_a0z00_1942,
																		BgL_arg2581z00_1955);
																}
																break;
															case ((long) -1):

																{	/* Eval/evmeaning.scm 1174 */
																	obj_t BgL_arg2584z00_1958;

																	{	/* Eval/evmeaning.scm 1174 */
																		obj_t BgL_list2585z00_1959;

																		{	/* Eval/evmeaning.scm 1174 */
																			obj_t BgL_arg2586z00_1960;

																			{	/* Eval/evmeaning.scm 1174 */
																				obj_t BgL_arg2587z00_1961;

																				{	/* Eval/evmeaning.scm 1174 */
																					obj_t BgL_arg2589z00_1962;

																					BgL_arg2589z00_1962 =
																						MAKE_PAIR(BgL_a3z00_1945, BNIL);
																					BgL_arg2587z00_1961 =
																						MAKE_PAIR(BgL_a2z00_1944,
																						BgL_arg2589z00_1962);
																				}
																				BgL_arg2586z00_1960 =
																					MAKE_PAIR(BgL_a1z00_1943,
																					BgL_arg2587z00_1961);
																			}
																			BgL_list2585z00_1959 =
																				MAKE_PAIR(BgL_a0z00_1942,
																				BgL_arg2586z00_1960);
																		}
																		BgL_arg2584z00_1958 = BgL_list2585z00_1959;
																	}
																	return
																		MAKE_PAIR(BgL_arg2584z00_1958,
																		BgL_envdz00_1946);
																}
																break;
															case ((long) -2):

																{	/* Eval/evmeaning.scm 1176 */
																	obj_t BgL_arg2590z00_1963;

																	{	/* Eval/evmeaning.scm 1176 */
																		obj_t BgL_arg2591z00_1964;

																		{	/* Eval/evmeaning.scm 1176 */
																			obj_t BgL_list2592z00_1965;

																			{	/* Eval/evmeaning.scm 1176 */
																				obj_t BgL_arg2593z00_1966;

																				{	/* Eval/evmeaning.scm 1176 */
																					obj_t BgL_arg2594z00_1967;

																					BgL_arg2594z00_1967 =
																						MAKE_PAIR(BgL_a3z00_1945, BNIL);
																					BgL_arg2593z00_1966 =
																						MAKE_PAIR(BgL_a2z00_1944,
																						BgL_arg2594z00_1967);
																				}
																				BgL_list2592z00_1965 =
																					MAKE_PAIR(BgL_a1z00_1943,
																					BgL_arg2593z00_1966);
																			}
																			BgL_arg2591z00_1964 =
																				BgL_list2592z00_1965;
																		}
																		BgL_arg2590z00_1963 =
																			MAKE_PAIR(BgL_arg2591z00_1964,
																			BgL_envdz00_1946);
																	}
																	return
																		MAKE_PAIR(BgL_a0z00_1942,
																		BgL_arg2590z00_1963);
																}
																break;
															case ((long) -3):

																{	/* Eval/evmeaning.scm 1178 */
																	obj_t BgL_arg2595z00_1968;

																	{	/* Eval/evmeaning.scm 1178 */
																		obj_t BgL_arg2596z00_1969;

																		{	/* Eval/evmeaning.scm 1178 */
																			obj_t BgL_arg2597z00_1970;

																			{	/* Eval/evmeaning.scm 1178 */
																				obj_t BgL_list2598z00_1971;

																				{	/* Eval/evmeaning.scm 1178 */
																					obj_t BgL_arg2599z00_1972;

																					BgL_arg2599z00_1972 =
																						MAKE_PAIR(BgL_a3z00_1945, BNIL);
																					BgL_list2598z00_1971 =
																						MAKE_PAIR(BgL_a2z00_1944,
																						BgL_arg2599z00_1972);
																				}
																				BgL_arg2597z00_1970 =
																					BgL_list2598z00_1971;
																			}
																			BgL_arg2596z00_1969 =
																				MAKE_PAIR(BgL_arg2597z00_1970,
																				BgL_envdz00_1946);
																		}
																		BgL_arg2595z00_1968 =
																			MAKE_PAIR(BgL_a1z00_1943,
																			BgL_arg2596z00_1969);
																	}
																	return
																		MAKE_PAIR(BgL_a0z00_1942,
																		BgL_arg2595z00_1968);
																}
																break;
															case ((long) -4):

																{	/* Eval/evmeaning.scm 1180 */
																	obj_t BgL_arg2600z00_1973;

																	{	/* Eval/evmeaning.scm 1180 */
																		obj_t BgL_arg2601z00_1974;

																		{	/* Eval/evmeaning.scm 1180 */
																			obj_t BgL_arg2602z00_1975;

																			{	/* Eval/evmeaning.scm 1180 */
																				obj_t BgL_arg2603z00_1976;

																				{	/* Eval/evmeaning.scm 1180 */
																					obj_t BgL_list2604z00_1977;

																					BgL_list2604z00_1977 =
																						MAKE_PAIR(BgL_a3z00_1945, BNIL);
																					BgL_arg2603z00_1976 =
																						BgL_list2604z00_1977;
																				}
																				BgL_arg2602z00_1975 =
																					MAKE_PAIR(BgL_arg2603z00_1976,
																					BgL_envdz00_1946);
																			}
																			BgL_arg2601z00_1974 =
																				MAKE_PAIR(BgL_a2z00_1944,
																				BgL_arg2602z00_1975);
																		}
																		BgL_arg2600z00_1973 =
																			MAKE_PAIR(BgL_a1z00_1943,
																			BgL_arg2601z00_1974);
																	}
																	return
																		MAKE_PAIR(BgL_a0z00_1942,
																		BgL_arg2600z00_1973);
																}
																break;
															case ((long) -5):

																{	/* Eval/evmeaning.scm 1182 */
																	obj_t BgL_arg2605z00_1978;

																	{	/* Eval/evmeaning.scm 1182 */
																		obj_t BgL_arg2606z00_1979;

																		{	/* Eval/evmeaning.scm 1182 */
																			obj_t BgL_arg2607z00_1980;

																			{	/* Eval/evmeaning.scm 1182 */
																				obj_t BgL_arg2608z00_1981;

																				BgL_arg2608z00_1981 =
																					MAKE_PAIR(BNIL, BgL_envdz00_1946);
																				BgL_arg2607z00_1980 =
																					MAKE_PAIR(BgL_a3z00_1945,
																					BgL_arg2608z00_1981);
																			}
																			BgL_arg2606z00_1979 =
																				MAKE_PAIR(BgL_a2z00_1944,
																				BgL_arg2607z00_1980);
																		}
																		BgL_arg2605z00_1978 =
																			MAKE_PAIR(BgL_a1z00_1943,
																			BgL_arg2606z00_1979);
																	}
																	return
																		MAKE_PAIR(BgL_a0z00_1942,
																		BgL_arg2605z00_1978);
																}
																break;
															default:
															BgL_case_else1901z00_1952:
																return
																	BGl_evmeaningzd2arityzd2errorz00zz__everrorz00
																	(BgL_codez00_174, VECTOR_REF(BgL_codez00_174,
																		(int) (((long) 2))), (int) (((long) 4)),
																	CINT(BgL_arityz00_1947));
													}}
												else
													{	/* Eval/evmeaning.scm 1170 */
														goto BgL_case_else1901z00_1952;
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



/* evmeaning-make-traced-4procedure */
	obj_t BGl_evmeaningzd2makezd2tracedzd24procedurezd2zz__evmeaningz00(obj_t
		BgL_codez00_183, obj_t BgL_stackz00_184, obj_t BgL_denvz00_185)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1201 */
			{	/* Eval/evmeaning.scm 1202 */
				obj_t BgL_bodyz00_1991;

				obj_t BgL_wherez00_1992;

				obj_t BgL_formalsz00_1993;

				obj_t BgL_locz00_1994;

				BgL_bodyz00_1991 = VECTOR_REF(BgL_codez00_183, (int) (((long) 2)));
				BgL_wherez00_1992 = VECTOR_REF(BgL_codez00_183, (int) (((long) 3)));
				BgL_formalsz00_1993 = VECTOR_REF(BgL_codez00_183, (int) (((long) 4)));
				BgL_locz00_1994 = VECTOR_REF(BgL_codez00_183, (int) (((long) 1)));
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_1993))
					{	/* Eval/evmeaning.scm 1207 */
						long BgL_lfz00_1996;

						BgL_lfz00_1996 = bgl_list_length(BgL_formalsz00_1993);
						{	/* Eval/evmeaning.scm 1210 */
							obj_t BgL_zc3anonymousza32620ze3z83_4532;

							BgL_zc3anonymousza32620ze3z83_4532 =
								make_va_procedure(BGl_zc3anonymousza32620ze3z83zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 6)));
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 0)), BgL_bodyz00_1991);
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 1)), BgL_stackz00_184);
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 2)), BgL_wherez00_1992);
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 3)), BgL_locz00_1994);
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 4)), BgL_codez00_183);
							PROCEDURE_SET(BgL_zc3anonymousza32620ze3z83_4532,
								(int) (((long) 5)), BINT(BgL_lfz00_1996));
							{	/* Eval/evmeaning.scm 1208 */
								obj_t BgL_arg2432z00_4033;

								{	/* Eval/evmeaning.scm 1208 */
									obj_t BgL_newz00_4037;

									BgL_newz00_4037 =
										create_struct(BGl_symbol2945z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 1208 */
										int BgL_auxz00_6904;

										BgL_auxz00_6904 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_4037, BgL_auxz00_6904,
											BgL_stackz00_184);
									}
									{	/* Eval/evmeaning.scm 1208 */
										int BgL_auxz00_6907;

										BgL_auxz00_6907 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4037, BgL_auxz00_6907,
											BgL_bodyz00_1991);
									}
									{	/* Eval/evmeaning.scm 1208 */
										obj_t BgL_auxz00_6912;

										int BgL_auxz00_6910;

										BgL_auxz00_6912 = BINT(BgL_lfz00_1996);
										BgL_auxz00_6910 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4037, BgL_auxz00_6910,
											BgL_auxz00_6912);
									}
									BgL_arg2432z00_4033 = BgL_newz00_4037;
								}
								PROCEDURE_ATTR_SET(BgL_zc3anonymousza32620ze3z83_4532,
									BgL_arg2432z00_4033);
								BgL_arg2432z00_4033;
							}
							return BgL_zc3anonymousza32620ze3z83_4532;
						}
					}
				else
					{	/* Eval/evmeaning.scm 1222 */
						long BgL_lfz00_2006;

						{
							obj_t BgL_formalsz00_2017;

							long BgL_numz00_2018;

							BgL_formalsz00_2017 = BgL_formalsz00_1993;
							BgL_numz00_2018 = ((long) -1);
						BgL_zc3anonymousza32623ze3z83_2019:
							if (PAIRP(BgL_formalsz00_2017))
								{
									long BgL_numz00_6920;

									obj_t BgL_formalsz00_6918;

									BgL_formalsz00_6918 = CDR(BgL_formalsz00_2017);
									BgL_numz00_6920 = (BgL_numz00_2018 - ((long) 1));
									BgL_numz00_2018 = BgL_numz00_6920;
									BgL_formalsz00_2017 = BgL_formalsz00_6918;
									goto BgL_zc3anonymousza32623ze3z83_2019;
								}
							else
								{	/* Eval/evmeaning.scm 1224 */
									BgL_lfz00_2006 = BgL_numz00_2018;
								}
						}
						{	/* Eval/evmeaning.scm 1229 */
							obj_t BgL_zc3anonymousza32622ze3z83_4533;

							BgL_zc3anonymousza32622ze3z83_4533 =
								make_va_procedure(BGl_zc3anonymousza32622ze3z83zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 6)));
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 0)), BgL_bodyz00_1991);
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 1)), BgL_stackz00_184);
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 2)), BgL_wherez00_1992);
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 3)), BgL_locz00_1994);
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 4)), BgL_codez00_183);
							PROCEDURE_SET(BgL_zc3anonymousza32622ze3z83_4533,
								(int) (((long) 5)), BINT(BgL_lfz00_2006));
							{	/* Eval/evmeaning.scm 1227 */
								obj_t BgL_arg2432z00_4061;

								{	/* Eval/evmeaning.scm 1227 */
									obj_t BgL_newz00_4065;

									BgL_newz00_4065 =
										create_struct(BGl_symbol2945z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 1227 */
										int BgL_auxz00_6940;

										BgL_auxz00_6940 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_4065, BgL_auxz00_6940,
											BgL_stackz00_184);
									}
									{	/* Eval/evmeaning.scm 1227 */
										int BgL_auxz00_6943;

										BgL_auxz00_6943 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4065, BgL_auxz00_6943,
											BgL_bodyz00_1991);
									}
									{	/* Eval/evmeaning.scm 1227 */
										obj_t BgL_auxz00_6948;

										int BgL_auxz00_6946;

										BgL_auxz00_6948 = BINT(BgL_lfz00_2006);
										BgL_auxz00_6946 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4065, BgL_auxz00_6946,
											BgL_auxz00_6948);
									}
									BgL_arg2432z00_4061 = BgL_newz00_4065;
								}
								PROCEDURE_ATTR_SET(BgL_zc3anonymousza32622ze3z83_4533,
									BgL_arg2432z00_4061);
								BgL_arg2432z00_4061;
							}
							return BgL_zc3anonymousza32622ze3z83_4533;
						}
					}
			}
		}
	}



/* <anonymous:2620> */
	obj_t BGl_zc3anonymousza32620ze3z83zz__evmeaningz00(obj_t BgL_envz00_4534,
		obj_t BgL_xz00_4541)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1209 */
			{	/* Eval/evmeaning.scm 1210 */
				obj_t BgL_bodyz00_4535;

				obj_t BgL_stackz00_4536;

				obj_t BgL_wherez00_4537;

				obj_t BgL_locz00_4538;

				obj_t BgL_codez00_4539;

				obj_t BgL_lfz00_4540;

				BgL_bodyz00_4535 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 0)));
				BgL_stackz00_4536 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 1)));
				BgL_wherez00_4537 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 2)));
				BgL_locz00_4538 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 3)));
				BgL_codez00_4539 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 4)));
				BgL_lfz00_4540 = PROCEDURE_REF(BgL_envz00_4534, (int) (((long) 5)));
				{
					obj_t BgL_xz00_1998;

					BgL_xz00_1998 = BgL_xz00_4541;
					{	/* Eval/evmeaning.scm 1210 */
						obj_t BgL_z12denvz12_2002;

						BgL_z12denvz12_2002 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 1213 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_2002, BgL_wherez00_4537,
								BgL_locz00_4538);
							{	/* Eval/evmeaning.scm 1215 */
								obj_t BgL_e2z00_2003;

								BgL_e2z00_2003 =
									BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00
									(BgL_wherez00_4537, BgL_codez00_4539, BgL_xz00_1998,
									BgL_lfz00_4540, BgL_stackz00_4536);
								{	/* Eval/evmeaning.scm 1216 */
									obj_t BgL_resz00_2004;

									BgL_resz00_2004 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4535,
										BgL_e2z00_2003, BgL_z12denvz12_2002);
									BGL_ENV_POP_TRACE(BgL_z12denvz12_2002);
									return BgL_resz00_2004;
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2622> */
	obj_t BGl_zc3anonymousza32622ze3z83zz__evmeaningz00(obj_t BgL_envz00_4542,
		obj_t BgL_xz00_4549)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1228 */
			{	/* Eval/evmeaning.scm 1229 */
				obj_t BgL_bodyz00_4543;

				obj_t BgL_stackz00_4544;

				obj_t BgL_wherez00_4545;

				obj_t BgL_locz00_4546;

				obj_t BgL_codez00_4547;

				obj_t BgL_lfz00_4548;

				BgL_bodyz00_4543 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 0)));
				BgL_stackz00_4544 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 1)));
				BgL_wherez00_4545 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 2)));
				BgL_locz00_4546 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 3)));
				BgL_codez00_4547 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 4)));
				BgL_lfz00_4548 = PROCEDURE_REF(BgL_envz00_4542, (int) (((long) 5)));
				{
					obj_t BgL_xz00_2008;

					BgL_xz00_2008 = BgL_xz00_4549;
					{	/* Eval/evmeaning.scm 1229 */
						obj_t BgL_z12denvz12_2012;

						BgL_z12denvz12_2012 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Eval/evmeaning.scm 1232 */

							BGL_ENV_PUSH_TRACE(BgL_z12denvz12_2012, BgL_wherez00_4545,
								BgL_locz00_4546);
							{	/* Eval/evmeaning.scm 1234 */
								obj_t BgL_e2z00_2013;

								BgL_e2z00_2013 =
									BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00
									(BgL_wherez00_4545, BgL_codez00_4547, BgL_xz00_2008,
									BgL_lfz00_4548, BgL_stackz00_4544);
								{	/* Eval/evmeaning.scm 1235 */
									obj_t BgL_resz00_2014;

									BgL_resz00_2014 =
										BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4543,
										BgL_e2z00_2013, BgL_z12denvz12_2012);
									BGL_ENV_POP_TRACE(BgL_z12denvz12_2012);
									return BgL_resz00_2014;
								}
							}
						}
					}
				}
			}
		}
	}



/* evmeaning-make-4procedure */
	obj_t BGl_evmeaningzd2makezd24procedurez00zz__evmeaningz00(obj_t
		BgL_codez00_186, obj_t BgL_stackz00_187, obj_t BgL_denvz00_188)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1245 */
			{	/* Eval/evmeaning.scm 1246 */
				obj_t BgL_bodyz00_2024;

				obj_t BgL_formalsz00_2025;

				BgL_bodyz00_2024 = VECTOR_REF(BgL_codez00_186, (int) (((long) 2)));
				BgL_formalsz00_2025 = VECTOR_REF(BgL_codez00_186, (int) (((long) 3)));
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_formalsz00_2025))
					{	/* Eval/evmeaning.scm 1249 */
						long BgL_lfz00_2027;

						BgL_lfz00_2027 = bgl_list_length(BgL_formalsz00_2025);
						{	/* Eval/evmeaning.scm 1252 */
							obj_t BgL_zc3anonymousza32629ze3z83_4550;

							BgL_zc3anonymousza32629ze3z83_4550 =
								make_va_procedure(BGl_zc3anonymousza32629ze3z83zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3anonymousza32629ze3z83_4550,
								(int) (((long) 0)), BgL_bodyz00_2024);
							PROCEDURE_SET(BgL_zc3anonymousza32629ze3z83_4550,
								(int) (((long) 1)), BgL_stackz00_187);
							PROCEDURE_SET(BgL_zc3anonymousza32629ze3z83_4550,
								(int) (((long) 2)), BgL_codez00_186);
							PROCEDURE_SET(BgL_zc3anonymousza32629ze3z83_4550,
								(int) (((long) 3)), BINT(BgL_lfz00_2027));
							PROCEDURE_SET(BgL_zc3anonymousza32629ze3z83_4550,
								(int) (((long) 4)), BgL_denvz00_188);
							{	/* Eval/evmeaning.scm 1250 */
								obj_t BgL_arg2432z00_4089;

								{	/* Eval/evmeaning.scm 1250 */
									obj_t BgL_newz00_4093;

									BgL_newz00_4093 =
										create_struct(BGl_symbol2945z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 1250 */
										int BgL_auxz00_7009;

										BgL_auxz00_7009 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_4093, BgL_auxz00_7009,
											BgL_stackz00_187);
									}
									{	/* Eval/evmeaning.scm 1250 */
										int BgL_auxz00_7012;

										BgL_auxz00_7012 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4093, BgL_auxz00_7012,
											BgL_bodyz00_2024);
									}
									{	/* Eval/evmeaning.scm 1250 */
										obj_t BgL_auxz00_7017;

										int BgL_auxz00_7015;

										BgL_auxz00_7017 = BINT(BgL_lfz00_2027);
										BgL_auxz00_7015 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4093, BgL_auxz00_7015,
											BgL_auxz00_7017);
									}
									BgL_arg2432z00_4089 = BgL_newz00_4093;
								}
								PROCEDURE_ATTR_SET(BgL_zc3anonymousza32629ze3z83_4550,
									BgL_arg2432z00_4089);
								BgL_arg2432z00_4089;
							}
							return BgL_zc3anonymousza32629ze3z83_4550;
						}
					}
				else
					{	/* Eval/evmeaning.scm 1259 */
						long BgL_lfz00_2035;

						{
							obj_t BgL_formalsz00_2044;

							long BgL_numz00_2045;

							BgL_formalsz00_2044 = BgL_formalsz00_2025;
							BgL_numz00_2045 = ((long) -1);
						BgL_zc3anonymousza32632ze3z83_2046:
							if (PAIRP(BgL_formalsz00_2044))
								{
									long BgL_numz00_7025;

									obj_t BgL_formalsz00_7023;

									BgL_formalsz00_7023 = CDR(BgL_formalsz00_2044);
									BgL_numz00_7025 = (BgL_numz00_2045 - ((long) 1));
									BgL_numz00_2045 = BgL_numz00_7025;
									BgL_formalsz00_2044 = BgL_formalsz00_7023;
									goto BgL_zc3anonymousza32632ze3z83_2046;
								}
							else
								{	/* Eval/evmeaning.scm 1261 */
									BgL_lfz00_2035 = BgL_numz00_2045;
								}
						}
						{	/* Eval/evmeaning.scm 1266 */
							obj_t BgL_zc3anonymousza32631ze3z83_4551;

							BgL_zc3anonymousza32631ze3z83_4551 =
								make_va_procedure(BGl_zc3anonymousza32631ze3z83zz__evmeaningz00,
								(int) (((long) -1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3anonymousza32631ze3z83_4551,
								(int) (((long) 0)), BgL_bodyz00_2024);
							PROCEDURE_SET(BgL_zc3anonymousza32631ze3z83_4551,
								(int) (((long) 1)), BgL_stackz00_187);
							PROCEDURE_SET(BgL_zc3anonymousza32631ze3z83_4551,
								(int) (((long) 2)), BgL_codez00_186);
							PROCEDURE_SET(BgL_zc3anonymousza32631ze3z83_4551,
								(int) (((long) 3)), BINT(BgL_lfz00_2035));
							PROCEDURE_SET(BgL_zc3anonymousza32631ze3z83_4551,
								(int) (((long) 4)), BgL_denvz00_188);
							{	/* Eval/evmeaning.scm 1264 */
								obj_t BgL_arg2432z00_4117;

								{	/* Eval/evmeaning.scm 1264 */
									obj_t BgL_newz00_4121;

									BgL_newz00_4121 =
										create_struct(BGl_symbol2945z00zz__evmeaningz00,
										(int) (((long) 3)));
									{	/* Eval/evmeaning.scm 1264 */
										int BgL_auxz00_7043;

										BgL_auxz00_7043 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_4121, BgL_auxz00_7043,
											BgL_stackz00_187);
									}
									{	/* Eval/evmeaning.scm 1264 */
										int BgL_auxz00_7046;

										BgL_auxz00_7046 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4121, BgL_auxz00_7046,
											BgL_bodyz00_2024);
									}
									{	/* Eval/evmeaning.scm 1264 */
										obj_t BgL_auxz00_7051;

										int BgL_auxz00_7049;

										BgL_auxz00_7051 = BINT(BgL_lfz00_2035);
										BgL_auxz00_7049 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4121, BgL_auxz00_7049,
											BgL_auxz00_7051);
									}
									BgL_arg2432z00_4117 = BgL_newz00_4121;
								}
								PROCEDURE_ATTR_SET(BgL_zc3anonymousza32631ze3z83_4551,
									BgL_arg2432z00_4117);
								BgL_arg2432z00_4117;
							}
							return BgL_zc3anonymousza32631ze3z83_4551;
						}
					}
			}
		}
	}



/* <anonymous:2629> */
	obj_t BGl_zc3anonymousza32629ze3z83zz__evmeaningz00(obj_t BgL_envz00_4552,
		obj_t BgL_xz00_4558)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1251 */
			{	/* Eval/evmeaning.scm 1252 */
				obj_t BgL_bodyz00_4553;

				obj_t BgL_stackz00_4554;

				obj_t BgL_codez00_4555;

				obj_t BgL_lfz00_4556;

				obj_t BgL_denvz00_4557;

				BgL_bodyz00_4553 = PROCEDURE_REF(BgL_envz00_4552, (int) (((long) 0)));
				BgL_stackz00_4554 = PROCEDURE_REF(BgL_envz00_4552, (int) (((long) 1)));
				BgL_codez00_4555 = PROCEDURE_REF(BgL_envz00_4552, (int) (((long) 2)));
				BgL_lfz00_4556 = PROCEDURE_REF(BgL_envz00_4552, (int) (((long) 3)));
				BgL_denvz00_4557 = PROCEDURE_REF(BgL_envz00_4552, (int) (((long) 4)));
				{
					obj_t BgL_xz00_2029;

					BgL_xz00_2029 = BgL_xz00_4558;
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4553,
						BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(BgL_xz00_2029,
							BgL_codez00_4555, BgL_xz00_2029, BgL_lfz00_4556,
							BgL_stackz00_4554), BgL_denvz00_4557);
				}
			}
		}
	}



/* <anonymous:2631> */
	obj_t BGl_zc3anonymousza32631ze3z83zz__evmeaningz00(obj_t BgL_envz00_4559,
		obj_t BgL_xz00_4565)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1265 */
			{	/* Eval/evmeaning.scm 1266 */
				obj_t BgL_bodyz00_4560;

				obj_t BgL_stackz00_4561;

				obj_t BgL_codez00_4562;

				obj_t BgL_lfz00_4563;

				obj_t BgL_denvz00_4564;

				BgL_bodyz00_4560 = PROCEDURE_REF(BgL_envz00_4559, (int) (((long) 0)));
				BgL_stackz00_4561 = PROCEDURE_REF(BgL_envz00_4559, (int) (((long) 1)));
				BgL_codez00_4562 = PROCEDURE_REF(BgL_envz00_4559, (int) (((long) 2)));
				BgL_lfz00_4563 = PROCEDURE_REF(BgL_envz00_4559, (int) (((long) 3)));
				BgL_denvz00_4564 = PROCEDURE_REF(BgL_envz00_4559, (int) (((long) 4)));
				{
					obj_t BgL_xz00_2037;

					BgL_xz00_2037 = BgL_xz00_4565;
					return
						BGl_evmeaningz00zz__evmeaningz00(BgL_bodyz00_4560,
						BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(BgL_xz00_2037,
							BgL_codez00_4562, BgL_xz00_2037, BgL_lfz00_4563,
							BgL_stackz00_4561), BgL_denvz00_4564);
				}
			}
		}
	}



/* evmeaning-push-fxargs */
	obj_t BGl_evmeaningzd2pushzd2fxargsz00zz__evmeaningz00(obj_t BgL_namez00_189,
		obj_t BgL_codez00_190, obj_t BgL_actualsz00_191, obj_t BgL_numz00_192,
		obj_t BgL_stackz00_193)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1277 */
			return
				BGl__loop_z72z72zz__evmeaningz00(BgL_stackz00_193, BgL_numz00_192,
				BgL_namez00_189, BgL_codez00_190, BgL_actualsz00_191,
				BgL_actualsz00_191, BgL_numz00_192);
		}
	}



/* _loop_' */
	obj_t BGl__loop_z72z72zz__evmeaningz00(obj_t BgL_stackz00_4575,
		obj_t BgL_numz00_4574, obj_t BgL_namez00_4573, obj_t BgL_codez00_4572,
		obj_t BgL_actualsz00_4571, obj_t BgL_az00_2052, obj_t BgL_nz00_2053)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1278 */
			if (((long) CINT(BgL_nz00_2053) == ((long) 0)))
				{	/* Eval/evmeaning.scm 1281 */
					if (NULLP(BgL_az00_2052))
						{	/* Eval/evmeaning.scm 1282 */
							return BgL_stackz00_4575;
						}
					else
						{	/* Eval/evmeaning.scm 1283 */
							long BgL_arg2639z00_2057;

							BgL_arg2639z00_2057 = bgl_list_length(BgL_actualsz00_4571);
							return
								BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(BgL_codez00_4572,
								BgL_namez00_4573, (int) (BgL_arg2639z00_2057),
								CINT(BgL_numz00_4574));
				}}
			else
				{	/* Eval/evmeaning.scm 1281 */
					if (NULLP(BgL_az00_2052))
						{	/* Eval/evmeaning.scm 1286 */
							long BgL_arg2641z00_2059;

							BgL_arg2641z00_2059 = bgl_list_length(BgL_actualsz00_4571);
							return
								BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(BgL_codez00_4572,
								BgL_namez00_4573, (int) (BgL_arg2641z00_2059),
								CINT(BgL_numz00_4574));
						}
					else
						{	/* Eval/evmeaning.scm 1288 */
							obj_t BgL_arg2642z00_2060;

							obj_t BgL_arg2643z00_2061;

							BgL_arg2642z00_2060 = CAR(BgL_az00_2052);
							{	/* Eval/evmeaning.scm 1288 */
								obj_t BgL_arg2644z00_2062;

								long BgL_arg2645z00_2063;

								BgL_arg2644z00_2062 = CDR(BgL_az00_2052);
								BgL_arg2645z00_2063 = ((long) CINT(BgL_nz00_2053) - ((long) 1));
								BgL_arg2643z00_2061 =
									BGl__loop_z72z72zz__evmeaningz00(BgL_stackz00_4575,
									BgL_numz00_4574, BgL_namez00_4573, BgL_codez00_4572,
									BgL_actualsz00_4571, BgL_arg2644z00_2062,
									BINT(BgL_arg2645z00_2063));
							}
							return MAKE_PAIR(BgL_arg2642z00_2060, BgL_arg2643z00_2061);
						}
				}
		}
	}



/* evmeaning-push-vaargs */
	obj_t BGl_evmeaningzd2pushzd2vaargsz00zz__evmeaningz00(obj_t BgL_namez00_194,
		obj_t BgL_codez00_195, obj_t BgL_actualsz00_196, obj_t BgL_numz00_197,
		obj_t BgL_stackz00_198)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1293 */
			return
				BGl__loop_z00zz__evmeaningz00(BgL_stackz00_198, BgL_numz00_197,
				BgL_namez00_194, BgL_codez00_195, BgL_actualsz00_196,
				BgL_actualsz00_196, BgL_numz00_197);
		}
	}



/* _loop_ */
	obj_t BGl__loop_z00zz__evmeaningz00(obj_t BgL_stackz00_4570,
		obj_t BgL_numz00_4569, obj_t BgL_namez00_4568, obj_t BgL_codez00_4567,
		obj_t BgL_actualsz00_4566, obj_t BgL_az00_2066, obj_t BgL_nz00_2067)
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 1294 */
			if (((long) CINT(BgL_nz00_2067) == ((long) -1)))
				{	/* Eval/evmeaning.scm 1297 */
					return MAKE_PAIR(BgL_az00_2066, BgL_stackz00_4570);
				}
			else
				{	/* Eval/evmeaning.scm 1297 */
					if (NULLP(BgL_az00_2066))
						{	/* Eval/evmeaning.scm 1300 */
							long BgL_arg2649z00_2071;

							BgL_arg2649z00_2071 = bgl_list_length(BgL_actualsz00_4566);
							return
								BGl_evmeaningzd2arityzd2errorz00zz__everrorz00(BgL_codez00_4567,
								BgL_namez00_4568, (int) (BgL_arg2649z00_2071),
								CINT(BgL_numz00_4569));
						}
					else
						{	/* Eval/evmeaning.scm 1302 */
							obj_t BgL_arg2650z00_2072;

							obj_t BgL_arg2651z00_2073;

							BgL_arg2650z00_2072 = CAR(BgL_az00_2066);
							{	/* Eval/evmeaning.scm 1302 */
								obj_t BgL_arg2652z00_2074;

								long BgL_arg2655z00_2075;

								BgL_arg2652z00_2074 = CDR(BgL_az00_2066);
								BgL_arg2655z00_2075 = ((long) CINT(BgL_nz00_2067) + ((long) 1));
								BgL_arg2651z00_2073 =
									BGl__loop_z00zz__evmeaningz00(BgL_stackz00_4570,
									BgL_numz00_4569, BgL_namez00_4568, BgL_codez00_4567,
									BgL_actualsz00_4566, BgL_arg2652z00_2074,
									BINT(BgL_arg2655z00_2075));
							}
							return MAKE_PAIR(BgL_arg2650z00_2072, BgL_arg2651z00_2073);
						}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evmeaningz00()
	{
		AN_OBJECT;
		{	/* Eval/evmeaning.scm 14 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 32719508),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 174190226),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
			return BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 187663721),
				BSTRING_TO_STRING(BGl_string2966z00zz__evmeaningz00));
		}
	}

#ifdef __cplusplus
}
#endif
