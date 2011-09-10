/*===========================================================================*/
/*   (R5rs/syntax.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c R5rs/syntax.scm -indent -o objs/obj_u/R5rs/syntax.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3064z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3074z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_list3000z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3001z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32235ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t);
	static obj_t BGl_list3004z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3083z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3005z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_list3006z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2984z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3007z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 =
		BUNSPEC;
	static obj_t BGl_list3008z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3010z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3009z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2911z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_symbol2993z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2916z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3105z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2917z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3096z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2918z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3107z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3020z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3019z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2997z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2919z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern long bgl_list_length(obj_t);
	static obj_t BGl_symbol3109z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3023z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3112z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3024z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3025z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3114z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2926z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3028z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3029z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2930z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2929z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_list2931z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3119z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3032z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3033z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_list3036z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2936z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3037z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3038z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3040z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3039z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2940z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2939z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3041z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3042z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3043z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2943z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2946z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2947z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3136z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3048z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2948z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32104ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list3053z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2953z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3054z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2954z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3055z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2955z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3056z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2956z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3057z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2957z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3058z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2958z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3060z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3059z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2960z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2959z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t);
	static obj_t BGl_list3061z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2961z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2962z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2963z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t string_to_symbol(char *);
	static obj_t BGl_list2964z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2965z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3154z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2966z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2967z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3068z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2968z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3070z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2969z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3071z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_list3072z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2972z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3073z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2973z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2974z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2975z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3076z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2976z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_list3077z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3078z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_list3080z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3079z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3081z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2981z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3082z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2982z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2983z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3085z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3086z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2986z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_list3087z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2987z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2988z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3100z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2990z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2989z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32098ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_list3101z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2991z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3102z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3092z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2992z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3103z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3093z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3104z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3094z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3095z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2995z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2996z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list2999z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 =
		BUNSPEC;
	static obj_t BGl_list3111z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3116z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list3117z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3118z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3121z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3122z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3123z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3124z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3125z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3126z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3127z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3128z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3130z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3129z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3131z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3132z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_list3133z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00();
	extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_keyword3152z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static long BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00;
	static obj_t
		BGl_zc3anonymousza31989ze3_2880z83zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_subz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	static obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_loopz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	extern obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t);
	static obj_t BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32061ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
	extern obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32226ze3z83zz__r5_macro_4_3_syntaxz00(obj_t,
		obj_t);
	static obj_t BGl_symbol3002z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2897z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3011z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t
		BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2912z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3013z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2914z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3026z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2934z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00();
	static obj_t BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3044z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3046z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3049z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol3051z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
	static obj_t BGl_gennamez00zz__r5_macro_4_3_syntaxz00(obj_t);
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2994z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2994za700za7za7_3159za7, "atoms", 5);
	      DEFINE_STRING(BGl_string3106z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3106za700za7za7_3160za7, "var", 3);
	      DEFINE_STRING(BGl_string3097z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3097za700za7za7_3161za7, "newtemp", 7);
	      DEFINE_STRING(BGl_string3108z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3108za700za7za7_3162za7, "init", 4);
	      DEFINE_STRING(BGl_string2998z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2998za700za7za7_3163za7, "memv", 4);
	      DEFINE_STRING(BGl_string3110z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3110za700za7za7_3164za7, "step", 4);
	      DEFINE_STRING(BGl_string3099z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3099za700za7za7_3165za7, "do", 2);
	      DEFINE_STRING(BGl_string3113z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3113za700za7za7_3166za7, "expr", 4);
	      DEFINE_STRING(BGl_string3115z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3115za700za7za7_3167za7, "command", 7);
	      DEFINE_STRING(BGl_string3120z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3120za700za7za7_3168za7, "loop", 4);
	      DEFINE_STRING(BGl_string3137z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3137za700za7za7_3169za7, "syntax-rules", 12);
	      DEFINE_STRING(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3138za700za7za7_3170za7, "define-syntax", 13);
	      DEFINE_STRING(BGl_string3140z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3140za700za7za7_3171za7, "_expand-define-syntax", 21);
	      DEFINE_STRING(BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3139za700za7za7_3172za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string3141z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3141za700za7za7_3173za7, "letrec-syntax", 13);
	      DEFINE_STRING(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3142za700za7za7_3174za7, "let-syntax", 10);
	      DEFINE_STRING(BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3143za700za7za7_3175za7, "Illegal bindings", 16);
	      DEFINE_STRING(BGl_string3144z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3144za700za7za7_3176za7, "_expand-letrec-syntax", 21);
	      DEFINE_STRING(BGl_string3145z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3145za700za7za7_3177za7, "_expand-let-syntax", 18);
	      DEFINE_STRING(BGl_string3146z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3146za700za7za7_3178za7, "Illegal declaration", 19);
	      DEFINE_STRING(BGl_string3147z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3147za700za7za7_3179za7, "_syntax-rules->expander", 23);
	      DEFINE_STRING(BGl_string3148z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3148za700za7za7_3180za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string3150z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3150za700za7za7_3181za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string3149z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3149za700za7za7_3182za7, "No matching clause", 18);
	      DEFINE_STRING(BGl_string3151z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3151za700za7za7_3183za7, "Illegal ellipsis", 16);
	      DEFINE_STRING(BGl_string3153z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3153za700za7za7_3184za7, "ellipsis", 8);
	      DEFINE_STRING(BGl_string3155z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3155za700za7za7_3185za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string3156z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3156za700za7za7_3186za7, "__r5_macro_4_3_syntax", 21);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__syntaxza7d2expand3187za7,
		BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__expandza7d2letza7d23188z00,
		BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2905z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za7c3anonymousza7a313189z00,
		BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2syntaxzd2expanderzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__installza7d2synta3190za7,
		BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2908z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za7c3anonymousza7a313191z00,
		BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_syntaxzd2ruleszd2ze3expanderzd2envz31zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__syntaxza7d2rulesza73192z00,
		BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3134z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za7c3anonymousza7a323193z00,
		BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3135z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_za7c3anonymousza7a323194z00,
		BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__expandza7d2letrec3195za7,
		BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2900z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2900za700za7za7_3196za7, "mutex", 5);
	      DEFINE_STRING(BGl_string2901z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2901za700za7za7_3197za7,
		"/tmp/bigloo/runtime/R5rs/syntax.scm", 35);
	      DEFINE_STRING(BGl_string2902z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2902za700za7za7_3198za7, "_install-syntax-expander", 24);
	      DEFINE_STRING(BGl_string3003z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3003za700za7za7_3199za7, "clause", 6);
	      DEFINE_STRING(BGl_string2903z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2903za700za7za7_3200za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2904z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2904za700za7za7_3201za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2907z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2907za700za7za7_3202za7, "quote", 5);
	      DEFINE_STRING(BGl_string2898z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2898za700za7za7_3203za7, "hygiene.r5rs.mark", 17);
	      DEFINE_STRING(BGl_string2910z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2910za700za7za7_3204za7, "cond", 4);
	      DEFINE_STRING(BGl_string3012z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3012za700za7za7_3205za7, "name", 4);
	      DEFINE_STRING(BGl_string2913z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2913za700za7za7_3206za7, "else", 4);
	      DEFINE_STRING(BGl_string3014z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3014za700za7za7_3207za7, "val", 3);
	      DEFINE_STRING(BGl_string2915z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2915za700za7za7_3208za7, "=>", 2);
	      DEFINE_STRING(BGl_string3016z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3016za700za7za7_3209za7, "body1", 5);
	      DEFINE_STRING(BGl_string3018z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3018za700za7za7_3210za7, "body2", 5);
	      DEFINE_STRING(BGl_string2921z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2921za700za7za7_3211za7, "result1", 7);
	      DEFINE_STRING(BGl_string3022z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3022za700za7za7_3212za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2923z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2923za700za7za7_3213za7, "result2", 7);
	      DEFINE_STRING(BGl_string2925z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2925za700za7za7_3214za7, "...", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00,
		BgL_bgl__expandza7d2define3215za7,
		BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3027z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3027za700za7za7_3216za7, "tag", 3);
	      DEFINE_STRING(BGl_string2928z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2928za700za7za7_3217za7, "begin", 5);
	      DEFINE_STRING(BGl_string3031z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3031za700za7za7_3218za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2933z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2933za700za7za7_3219za7, "test", 4);
	      DEFINE_STRING(BGl_string3035z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3035za700za7za7_3220za7, "let*", 4);
	      DEFINE_STRING(BGl_string2935z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2935za700za7za7_3221za7, "result", 6);
	      DEFINE_STRING(BGl_string2938z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2938za700za7za7_3222za7, "let", 3);
	      DEFINE_STRING(BGl_string2942z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2942za700za7za7_3223za7, "temp", 4);
	      DEFINE_STRING(BGl_string3045z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3045za700za7za7_3224za7, "name1", 5);
	      DEFINE_STRING(BGl_string2945z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2945za700za7za7_3225za7, "if", 2);
	      DEFINE_STRING(BGl_string3047z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3047za700za7za7_3226za7, "val1", 4);
	      DEFINE_STRING(BGl_string3050z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3050za700za7za7_3227za7, "name2", 5);
	      DEFINE_STRING(BGl_string2950z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2950za700za7za7_3228za7, "clause1", 7);
	      DEFINE_STRING(BGl_string3052z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3052za700za7za7_3229za7, "val2", 4);
	      DEFINE_STRING(BGl_string2952z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2952za700za7za7_3230za7, "clause2", 7);
	      DEFINE_STRING(BGl_string3063z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3063za700za7za7_3231za7, "var1", 4);
	      DEFINE_STRING(BGl_string3065z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3065za700za7za7_3232za7, "init1", 5);
	      DEFINE_STRING(BGl_string3067z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3067za700za7za7_3233za7, "body", 4);
	      DEFINE_STRING(BGl_string3069z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3069za700za7za7_3234za7, "generate temp names", 19);
	      DEFINE_STRING(BGl_string2971z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2971za700za7za7_3235za7, "case", 4);
	      DEFINE_STRING(BGl_string3075z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3075za700za7za7_3236za7, "temp1", 5);
	      DEFINE_STRING(BGl_string2978z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2978za700za7za7_3237za7, "key", 3);
	      DEFINE_STRING(BGl_string2980z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2980za700za7za7_3238za7, "clauses", 7);
	      DEFINE_STRING(BGl_string3084z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3084za700za7za7_3239za7, "set!", 4);
	      DEFINE_STRING(BGl_string2985z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string2985za700za7za7_3240za7, "atom-key", 8);
	      DEFINE_STRING(BGl_string3089z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3089za700za7za7_3241za7, "x", 1);
	      DEFINE_STRING(BGl_string3091z00zz__r5_macro_4_3_syntaxz00,
		BgL_bgl_string3091za700za7za7_3242za7, "y", 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long
		BgL_checksumz00_3530, char *BgL_fromz00_3531)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00))
				{
					BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
					BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
					BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 17 */
			BGl_symbol2897z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2898z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2900z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2907z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2910z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2912z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2913z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2914z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2915z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2911z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2912z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2914z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2921z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2923z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2925z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2919z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2912z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2918z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2919z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2928z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2926z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2917z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2918z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2933z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2934z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2935z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2931z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2914z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2934z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2930z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2931z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2938z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2942z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2940z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2939z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2940z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2945z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2946z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2934z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2943z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2946z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2936z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2939z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2943z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2929z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2930z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2936z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2950z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2952z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2948z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2931z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list2955z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2954z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2946z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list2955z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2953z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2939z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2954z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2947z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2948z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2953z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2958z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2957z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2958z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2956z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2957z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2960z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2958z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list2962z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list2955z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2961z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2939z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2962z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2959z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2960z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2961z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2965z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2964z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2965z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2966z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2963z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2964z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2966z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2968z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2965z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2949z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2951z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list2969z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list2955z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2967z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2968z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2969z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2916z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2917z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2929z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2947z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list2956z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_list2959z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_list2963z00zz__r5_macro_4_3_syntaxz00,
									MAKE_PAIR(BGl_list2967z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2971z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2972z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2912z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2978z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2976z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2980z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2975z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2976z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_symbol2984z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2985z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2983z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2984z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2976z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2982z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2983z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list2986z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2984z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2981z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2982z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2986z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2974z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2975z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2981z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2988z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2919z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2987z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2988z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol2993z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2994z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2992z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2993z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2991z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2992z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2920z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2922z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list2990z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2991z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol2997z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string2998z00zz__r5_macro_4_3_syntaxz00);
			BGl_list2999z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2992z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2996z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2997z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2999z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2995z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2996z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list2989z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2990z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2995z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3002z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3003z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3001z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2991z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3002z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_list3005z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2977z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3002z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2979z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3004z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2996z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2926z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3005z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3000z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3001z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3004z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list2973z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list2974z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list2987z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list2989z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3000z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_symbol3011z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3012z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3013z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3014z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3010z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3011z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3013z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3009z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3010z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3016z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3018z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3008z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3009z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3022z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3023z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3011z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3020z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3023z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3019z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3020z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3013z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3007z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3008z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3019z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3026z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3027z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3025z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3026z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3009z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3031z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3033z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3026z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3020z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3032z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3033z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list3029z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3032z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3026z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3028z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3029z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3013z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3024z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3025z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3028z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3006z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3007z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3024z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3035z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3038z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00, MAKE_PAIR(BNIL,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3039z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00, MAKE_PAIR(BNIL,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3037z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3038z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3039z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3044z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3045z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3046z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3047z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3043z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3044z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3046z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3049z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3050z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3051z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3052z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3048z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3049z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3051z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3042z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3043z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3048z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3041z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3042z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3054z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3043z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list3056z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3048z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3055z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3056z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3015z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3017z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3053z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3054z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3055z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3040z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3041z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3053z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3036z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3037z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3040z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3063z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3064z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3065z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3061z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3064z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3060z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3061z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3067z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3059z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3060z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3070z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3068z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3069z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3070z00zz__r5_macro_4_3_syntaxz00, MAKE_PAIR(BNIL,
							MAKE_PAIR(BGl_list3060z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
									MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list3058z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3059z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3068z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3074z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3075z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3073z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3074z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3072z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3069z00zz__r5_macro_4_3_syntaxz00, MAKE_PAIR(BNIL,
						MAKE_PAIR(BGl_list3073z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_list3060z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
									MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list3078z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BUNSPEC, BNIL));
			BGl_list3077z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3078z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3081z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3074z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3064z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3080z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3081z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3083z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3084z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3082z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3083z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3062z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3074z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3079z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3080z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3082z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
									BNIL))))));
			BGl_list3076z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3077z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3079z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3071z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3072z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3076z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3089z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3091z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3087z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3092z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3086z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3069z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3087z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3092z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_list3060z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
									MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list3094z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3096z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3097z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3095z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3096z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2941z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3093z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3069z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3094z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3095z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_list3060z00zz__r5_macro_4_3_syntaxz00,
								MAKE_PAIR(BGl_symbol3066z00zz__r5_macro_4_3_syntaxz00,
									MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
										BNIL)))))));
			BGl_list3085z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3086z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3093z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3057z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3058z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3071z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3085z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3099z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3105z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3106z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3107z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3108z00zz__r5_macro_4_3_syntaxz00);
			BGl_symbol3109z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3110z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3104z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3105z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3107z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3109z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3103z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3104z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_symbol3112z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3113z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3111z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3112z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol3114z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3115z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3102z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3103z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3111z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3114z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_symbol3119z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3120z00zz__r5_macro_4_3_syntaxz00);
			BGl_list3122z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3105z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3125z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BBOOL(((bool_t) 0)), MAKE_PAIR(BBOOL(((bool_t) 0)), BNIL)));
			BGl_list3124z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3125z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3112z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3128z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3110z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3105z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3109z00zz__r5_macro_4_3_syntaxz00,
							MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)))));
			BGl_list3127z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3119z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3128z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3126z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3114z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3127z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3123z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol2944z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol2932z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3124z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_list3126z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3121z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3122z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3123z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3118z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3119z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3121z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3117z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3118z00zz__r5_macro_4_3_syntaxz00, BNIL);
			BGl_list3129z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3119z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3107z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3116z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3117z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3129z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3101z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3102z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3116z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3131z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3110z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_list3130z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3131z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3133z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_string3110z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_symbol3088z00zz__r5_macro_4_3_syntaxz00,
						MAKE_PAIR(BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00, BNIL))));
			BGl_list3132z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3133z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_symbol3090z00zz__r5_macro_4_3_syntaxz00, BNIL));
			BGl_list3100z00zz__r5_macro_4_3_syntaxz00 =
				MAKE_PAIR(BGl_list3101z00zz__r5_macro_4_3_syntaxz00,
				MAKE_PAIR(BGl_list3130z00zz__r5_macro_4_3_syntaxz00,
					MAKE_PAIR(BGl_list3132z00zz__r5_macro_4_3_syntaxz00, BNIL)));
			BGl_symbol3136z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3137z00zz__r5_macro_4_3_syntaxz00);
			BGl_keyword3152z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_keyword(BGl_string3153z00zz__r5_macro_4_3_syntaxz00);
			return (BGl_symbol3154z00zz__r5_macro_4_3_syntaxz00 =
				bstring_to_symbol(BGl_string3155z00zz__r5_macro_4_3_syntaxz00),
				BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 17 */
			BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00
				(BGl_symbol2897z00zz__r5_macro_4_3_syntaxz00);
			{	/* R5rs/syntax.scm 56 */
				obj_t BgL_res2853z00_2113;

				{	/* R5rs/syntax.scm 56 */
					obj_t BgL_symbolz00_2111;

					BgL_symbolz00_2111 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00;
					{	/* R5rs/syntax.scm 56 */
						obj_t BgL_arg2769z00_2112;

						BgL_arg2769z00_2112 = SYMBOL_TO_STRING(BgL_symbolz00_2111);
						BgL_res2853z00_2113 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2769z00_2112);
					}
				}
				BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BgL_res2853z00_2113;
			}
			BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00 =
				STRING_LENGTH(BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00);
			BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BFALSE;
			{	/* R5rs/syntax.scm 60 */

				{	/* Llib/thread.scm 198 */
					obj_t BgL_namez00_704;

					BgL_namez00_704 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00);
					{	/* Llib/thread.scm 198 */

						BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 =
							bgl_make_mutex(BgL_namez00_704);
					}
				}
			}
			{	/* R5rs/syntax.scm 61 */

				{	/* Llib/thread.scm 198 */
					obj_t BgL_namez00_705;

					BgL_namez00_705 =
						BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_symbol2899z00zz__r5_macro_4_3_syntaxz00);
					{	/* Llib/thread.scm 198 */

						return (BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00
							= bgl_make_mutex(BgL_namez00_705), BUNSPEC);
					}
				}
			}
		}
	}



/* get-syntax-expander */
	obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_fz00_1)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 73 */
			{	/* R5rs/syntax.scm 74 */
				obj_t BgL_idz00_706;

				BgL_idz00_706 =
					BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_fz00_1);
				{	/* R5rs/syntax.scm 74 */
					obj_t BgL_cz00_707;

					{	/* R5rs/syntax.scm 75 */
						obj_t BgL_zc3anonymousza31987ze3z83_3389;

						BgL_zc3anonymousza31987ze3z83_3389 =
							make_fx_procedure
							(BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31987ze3z83_3389,
							(int) (((long) 0)), BgL_idz00_706);
						BgL_cz00_707 =
							BGl_withzd2lockzd2zz__threadz00
							(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00,
							BgL_zc3anonymousza31987ze3z83_3389);
					}
					{	/* R5rs/syntax.scm 75 */

						if (PAIRP(BgL_cz00_707))
							{	/* R5rs/syntax.scm 76 */
								return CDR(BgL_cz00_707);
							}
						else
							{	/* R5rs/syntax.scm 76 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* <anonymous:1987> */
	obj_t BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3390)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 75 */
			{	/* R5rs/syntax.scm 75 */
				obj_t BgL_idz00_3391;

				BgL_idz00_3391 = PROCEDURE_REF(BgL_envz00_3390, (int) (((long) 0)));
				{

					return
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_3391,
						BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00);
				}
			}
		}
	}



/* install-syntax-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_2, obj_t BgL_expanderz00_3)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 82 */
			{	/* R5rs/syntax.scm 85 */
				obj_t BgL_zc3anonymousza31989ze3z83_3392;

				BgL_zc3anonymousza31989ze3z83_3392 =
					make_fx_procedure
					(BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3392, (int) (((long) 0)),
					BgL_keywordz00_2);
				PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3392, (int) (((long) 1)),
					BgL_expanderz00_3);
				return
					BGl_withzd2lockzd2zz__threadz00
					(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00,
					BgL_zc3anonymousza31989ze3z83_3392);
			}
		}
	}



/* _install-syntax-expander */
	obj_t BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3393, obj_t BgL_keywordz00_3394, obj_t BgL_expanderz00_3395)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 82 */
			{	/* R5rs/syntax.scm 85 */
				obj_t BgL_auxz00_4017;

				obj_t BgL_auxz00_4010;

				if (PROCEDUREP(BgL_expanderz00_3395))
					{	/* R5rs/syntax.scm 85 */
						BgL_auxz00_4017 = BgL_expanderz00_3395;
					}
				else
					{
						obj_t BgL_auxz00_4020;

						BgL_auxz00_4020 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 3651)),
							BGl_string2902z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2904z00zz__r5_macro_4_3_syntaxz00,
							BgL_expanderz00_3395);
						FAILURE(BgL_auxz00_4020, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_keywordz00_3394))
					{	/* R5rs/syntax.scm 85 */
						BgL_auxz00_4010 = BgL_keywordz00_3394;
					}
				else
					{
						obj_t BgL_auxz00_4013;

						BgL_auxz00_4013 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 3651)),
							BGl_string2902z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2903z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3394);
						FAILURE(BgL_auxz00_4013, BFALSE, BFALSE);
					}
				return
					BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
					(BgL_auxz00_4010, BgL_auxz00_4017);
			}
		}
	}



/* <anonymous:1989> */
	obj_t BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3396)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 84 */
			{	/* R5rs/syntax.scm 85 */
				obj_t BgL_keywordz00_3397;

				obj_t BgL_expanderz00_3398;

				BgL_keywordz00_3397 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 0)));
				BgL_expanderz00_3398 =
					PROCEDURE_REF(BgL_envz00_3396, (int) (((long) 1)));
				{

					{	/* R5rs/syntax.scm 85 */
						obj_t BgL_arg1990z00_2120;

						BgL_arg1990z00_2120 =
							MAKE_PAIR(BgL_keywordz00_3397, BgL_expanderz00_3398);
						return (BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
							MAKE_PAIR(BgL_arg1990z00_2120,
								BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
					}
				}
			}
		}
	}



/* init-syntax-expanders! */
	obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 90 */
			return
				BGl_withzd2lockzd2zz__threadz00
				(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00,
				BGl_proc2905z00zz__r5_macro_4_3_syntaxz00);
		}
	}



/* <anonymous:1992> */
	obj_t BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3402)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 96 */
			{

				if (CBOOL(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00))
					{	/* R5rs/syntax.scm 97 */
						return BFALSE;
					}
				else
					{	/* R5rs/syntax.scm 97 */
						BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BNIL;
						{	/* R5rs/syntax.scm 100 */
							obj_t BgL_arg1993z00_719;

							BgL_arg1993z00_719 = BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00;
							{	/* R5rs/syntax.scm 100 */
								obj_t BgL_zc3anonymousza31989ze3z83_3400;

								BgL_zc3anonymousza31989ze3z83_3400 =
									make_fx_procedure
									(BGl_zc3anonymousza31989ze3_2880z83zz__r5_macro_4_3_syntaxz00,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3400,
									(int) (((long) 0)), BgL_arg1993z00_719);
								PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3400,
									(int) (((long) 1)),
									BGl_proc2908z00zz__r5_macro_4_3_syntaxz00);
								BGl_withzd2lockzd2zz__threadz00
									(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00,
									BgL_zc3anonymousza31989ze3z83_3400);
						}}
						{	/* R5rs/syntax.scm 102 */
							obj_t BgL_idz00_2124;

							obj_t BgL_literalsz00_2125;

							obj_t BgL_rulesz00_2126;

							BgL_idz00_2124 = BGl_symbol2909z00zz__r5_macro_4_3_syntaxz00;
							BgL_literalsz00_2125 = BGl_list2911z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2126 = BGl_list2916z00zz__r5_macro_4_3_syntaxz00;
							BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2124,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2124, BgL_literalsz00_2125, BgL_rulesz00_2126));
						}
						{	/* R5rs/syntax.scm 128 */
							obj_t BgL_idz00_2128;

							obj_t BgL_literalsz00_2129;

							obj_t BgL_rulesz00_2130;

							BgL_idz00_2128 = BGl_symbol2970z00zz__r5_macro_4_3_syntaxz00;
							BgL_literalsz00_2129 = BGl_list2972z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2130 = BGl_list2973z00zz__r5_macro_4_3_syntaxz00;
							BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2128,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2128, BgL_literalsz00_2129, BgL_rulesz00_2130));
						}
						{	/* R5rs/syntax.scm 148 */
							obj_t BgL_idz00_2132;

							obj_t BgL_rulesz00_2134;

							BgL_idz00_2132 = BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2134 = BGl_list3006z00zz__r5_macro_4_3_syntaxz00;
							BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2132,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2132, BNIL, BgL_rulesz00_2134));
						}
						{	/* R5rs/syntax.scm 159 */
							obj_t BgL_idz00_2136;

							obj_t BgL_rulesz00_2138;

							BgL_idz00_2136 = BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2138 = BGl_list3036z00zz__r5_macro_4_3_syntaxz00;
							BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2136,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2136, BNIL, BgL_rulesz00_2138));
						}
						{	/* R5rs/syntax.scm 169 */
							obj_t BgL_idz00_2140;

							obj_t BgL_rulesz00_2142;

							BgL_idz00_2140 = BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2142 = BGl_list3057z00zz__r5_macro_4_3_syntaxz00;
							BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2140,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2140, BNIL, BgL_rulesz00_2142));
						}
						{	/* R5rs/syntax.scm 198 */
							obj_t BgL_idz00_2144;

							obj_t BgL_rulesz00_2146;

							BgL_idz00_2144 = BGl_symbol3098z00zz__r5_macro_4_3_syntaxz00;
							BgL_rulesz00_2146 = BGl_list3100z00zz__r5_macro_4_3_syntaxz00;
							return
								BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2144,
								BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
								(BgL_idz00_2144, BNIL, BgL_rulesz00_2146));
						}
					}
			}
		}
	}



/* <anonymous:1989>_2880 */
	obj_t BGl_zc3anonymousza31989ze3_2880z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3403)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 84 */
			{	/* R5rs/syntax.scm 100 */
				obj_t BgL_keywordz00_3404;

				obj_t BgL_zc3anonymousza31995ze3z83_3405;

				BgL_keywordz00_3404 =
					PROCEDURE_REF(BgL_envz00_3403, (int) (((long) 0)));
				BgL_zc3anonymousza31995ze3z83_3405 =
					PROCEDURE_REF(BgL_envz00_3403, (int) (((long) 1)));
				{

					{	/* R5rs/syntax.scm 100 */
						obj_t BgL_arg1990z00_2123;

						BgL_arg1990z00_2123 =
							MAKE_PAIR(BgL_keywordz00_3404,
							BgL_zc3anonymousza31995ze3z83_3405);
						return (BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 =
							MAKE_PAIR(BgL_arg1990z00_2123,
								BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC);
					}
				}
			}
		}
	}



/* <anonymous:1995> */
	obj_t BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3406, obj_t BgL_xz00_3407, obj_t BgL_ez00_3408)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 100 */
			return BgL_xz00_3407;
		}
	}



/* syntax-expander */
	obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_5,
		obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 230 */
			{	/* R5rs/syntax.scm 231 */
				obj_t BgL_e1z00_732;

				if (PAIRP(BgL_xz00_5))
					{	/* R5rs/syntax.scm 234 */
						obj_t BgL_g1824z00_741;

						BgL_g1824z00_741 =
							BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(CAR
							(BgL_xz00_5));
						if (CBOOL(BgL_g1824z00_741))
							{	/* R5rs/syntax.scm 234 */
								BgL_e1z00_732 = BgL_g1824z00_741;
							}
						else
							{	/* R5rs/syntax.scm 234 */
								BgL_e1z00_732 = BGl_proc3134z00zz__r5_macro_4_3_syntaxz00;
							}
					}
				else
					{	/* R5rs/syntax.scm 232 */
						BgL_e1z00_732 = BGl_proc3135z00zz__r5_macro_4_3_syntaxz00;
					}
				{	/* R5rs/syntax.scm 247 */
					obj_t BgL_newz00_733;

					BgL_newz00_733 =
						PROCEDURE_ENTRY(BgL_e1z00_732) (BgL_e1z00_732, BgL_xz00_5,
						BgL_ez00_6, BEOA);
					{	/* R5rs/syntax.scm 248 */
						bool_t BgL_testz00_4068;

						if (PAIRP(BgL_newz00_733))
							{	/* R5rs/syntax.scm 248 */
								if (EXTENDED_PAIRP(BgL_newz00_733))
									{	/* R5rs/syntax.scm 248 */
										BgL_testz00_4068 = ((bool_t) 0);
									}
								else
									{	/* R5rs/syntax.scm 248 */
										BgL_testz00_4068 = EXTENDED_PAIRP(BgL_xz00_5);
									}
							}
						else
							{	/* R5rs/syntax.scm 248 */
								BgL_testz00_4068 = ((bool_t) 0);
							}
						if (BgL_testz00_4068)
							{	/* R5rs/syntax.scm 249 */
								obj_t BgL_arg2000z00_735;

								obj_t BgL_arg2001z00_736;

								obj_t BgL_arg2002z00_737;

								BgL_arg2000z00_735 = CAR(BgL_newz00_733);
								BgL_arg2001z00_736 = CDR(BgL_newz00_733);
								BgL_arg2002z00_737 = CER(BgL_xz00_5);
								{	/* R5rs/syntax.scm 249 */
									obj_t BgL_res2854z00_2168;

									BgL_res2854z00_2168 =
										MAKE_EXTENDED_PAIR(BgL_arg2000z00_735, BgL_arg2001z00_736,
										BgL_arg2002z00_737);
									return BgL_res2854z00_2168;
								}
							}
						else
							{	/* R5rs/syntax.scm 248 */
								return BgL_newz00_733;
							}
					}
				}
			}
		}
	}



/* _syntax-expander */
	obj_t BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3411, obj_t BgL_xz00_3412, obj_t BgL_ez00_3413)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 230 */
			return
				BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_3412,
				BgL_ez00_3413);
		}
	}



/* <anonymous:2006> */
	obj_t BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3414, obj_t BgL_xz00_3415, obj_t BgL_ez00_3416)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 238 */
			return
				BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_3416,
				BgL_xz00_3415);
		}
	}



/* loop''' */
	obj_t BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3467,
		obj_t BgL_xz00_748)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 239 */
			if (PAIRP(BgL_xz00_748))
				{	/* R5rs/syntax.scm 242 */
					obj_t BgL_arg2009z00_751;

					obj_t BgL_arg2010z00_752;

					{	/* R5rs/syntax.scm 242 */
						obj_t BgL_arg2011z00_753;

						BgL_arg2011z00_753 = CAR(BgL_xz00_748);
						BgL_arg2009z00_751 =
							PROCEDURE_ENTRY(BgL_ez00_3467) (BgL_ez00_3467, BgL_arg2011z00_753,
							BgL_ez00_3467, BEOA);
					}
					BgL_arg2010z00_752 =
						BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_3467,
						CDR(BgL_xz00_748));
					return MAKE_PAIR(BgL_arg2009z00_751, BgL_arg2010z00_752);
				}
			else
				{	/* R5rs/syntax.scm 241 */
					if (NULLP(BgL_xz00_748))
						{	/* R5rs/syntax.scm 243 */
							return BNIL;
						}
					else
						{	/* R5rs/syntax.scm 243 */
							return
								PROCEDURE_ENTRY(BgL_ez00_3467) (BgL_ez00_3467, BgL_xz00_748,
								BgL_ez00_3467, BEOA);
						}
				}
		}
	}



/* <anonymous:2016> */
	obj_t BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3417, obj_t BgL_xz00_3418, obj_t BgL_ez00_3419)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 233 */
			return BgL_xz00_3418;
		}
	}



/* expand-define-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_7,
		obj_t BgL_ez00_8)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 255 */
			if (PAIRP(BgL_xz00_7))
				{	/* R5rs/syntax.scm 256 */
					obj_t BgL_cdrzd21399zd2_768;

					BgL_cdrzd21399zd2_768 = CDR(BgL_xz00_7);
					if (PAIRP(BgL_cdrzd21399zd2_768))
						{	/* R5rs/syntax.scm 256 */
							obj_t BgL_carzd21403zd2_770;

							obj_t BgL_cdrzd21404zd2_771;

							BgL_carzd21403zd2_770 = CAR(BgL_cdrzd21399zd2_768);
							BgL_cdrzd21404zd2_771 = CDR(BgL_cdrzd21399zd2_768);
							if (SYMBOLP(BgL_carzd21403zd2_770))
								{	/* R5rs/syntax.scm 256 */
									if (PAIRP(BgL_cdrzd21404zd2_771))
										{	/* R5rs/syntax.scm 256 */
											obj_t BgL_carzd21410zd2_774;

											BgL_carzd21410zd2_774 = CAR(BgL_cdrzd21404zd2_771);
											if (PAIRP(BgL_carzd21410zd2_774))
												{	/* R5rs/syntax.scm 256 */
													obj_t BgL_cdrzd21415zd2_776;

													BgL_cdrzd21415zd2_776 = CDR(BgL_carzd21410zd2_774);
													if (
														(CAR(BgL_carzd21410zd2_774) ==
															BGl_symbol3136z00zz__r5_macro_4_3_syntaxz00))
														{	/* R5rs/syntax.scm 256 */
															if (PAIRP(BgL_cdrzd21415zd2_776))
																{	/* R5rs/syntax.scm 256 */
																	if (NULLP(CDR(BgL_cdrzd21404zd2_771)))
																		{	/* R5rs/syntax.scm 256 */
																			obj_t BgL_arg2025z00_780;

																			obj_t BgL_arg2027z00_781;

																			BgL_arg2025z00_780 =
																				CAR(BgL_cdrzd21415zd2_776);
																			BgL_arg2027z00_781 =
																				CDR(BgL_cdrzd21415zd2_776);
																			{	/* R5rs/syntax.scm 256 */
																				obj_t BgL_macronamez00_2185;

																				BgL_macronamez00_2185 =
																					BgL_carzd21403zd2_770;
																				{	/* R5rs/syntax.scm 256 */
																					obj_t BgL_exz00_2188;

																					BgL_exz00_2188 =
																						BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																						(BgL_macronamez00_2185,
																						BgL_arg2025z00_780,
																						BgL_arg2027z00_781);
																					BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00
																						(BgL_macronamez00_2185,
																						BgL_exz00_2188);
																					BGl_installzd2expanderzd2zz__macroz00
																						(BgL_macronamez00_2185,
																						BgL_exz00_2188);
																					return BUNSPEC;
																				}
																			}
																		}
																	else
																		{	/* R5rs/syntax.scm 256 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
																				BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
																				BgL_xz00_7);
																		}
																}
															else
																{	/* R5rs/syntax.scm 256 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
																		BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
																		BgL_xz00_7);
																}
														}
													else
														{	/* R5rs/syntax.scm 256 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
																BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
																BgL_xz00_7);
														}
												}
											else
												{	/* R5rs/syntax.scm 256 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
														BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
														BgL_xz00_7);
												}
										}
									else
										{	/* R5rs/syntax.scm 256 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
												BGl_string3139z00zz__r5_macro_4_3_syntaxz00,
												BgL_xz00_7);
										}
								}
							else
								{	/* R5rs/syntax.scm 256 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
										BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);
								}
						}
					else
						{	/* R5rs/syntax.scm 256 */
							return
								BGl_errorz00zz__errorz00
								(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
								BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);
						}
				}
			else
				{	/* R5rs/syntax.scm 256 */
					return
						BGl_errorz00zz__errorz00
						(BGl_string3138z00zz__r5_macro_4_3_syntaxz00,
						BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);
				}
		}
	}



/* _expand-define-syntax */
	obj_t BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3420, obj_t BgL_xz00_3421, obj_t BgL_ez00_3422)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 255 */
			{	/* R5rs/syntax.scm 256 */
				obj_t BgL_auxz00_4128;

				if (PROCEDUREP(BgL_ez00_3422))
					{	/* R5rs/syntax.scm 256 */
						BgL_auxz00_4128 = BgL_ez00_3422;
					}
				else
					{
						obj_t BgL_auxz00_4131;

						BgL_auxz00_4131 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 8522)),
							BGl_string3140z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2904z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3422);
						FAILURE(BgL_auxz00_4131, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00
					(BgL_xz00_3421, BgL_auxz00_4128);
			}
		}
	}



/* expand-letrec-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_9,
		obj_t BgL_ez00_10)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 268 */
			{
				obj_t BgL_bsz00_786;

				obj_t BgL_bodyz00_787;

				if (PAIRP(BgL_xz00_9))
					{	/* R5rs/syntax.scm 269 */
						obj_t BgL_cdrzd21430zd2_792;

						BgL_cdrzd21430zd2_792 = CDR(BgL_xz00_9);
						if (PAIRP(BgL_cdrzd21430zd2_792))
							{	/* R5rs/syntax.scm 269 */
								BgL_bsz00_786 = CAR(BgL_cdrzd21430zd2_792);
								BgL_bodyz00_787 = CDR(BgL_cdrzd21430zd2_792);
								{	/* R5rs/syntax.scm 271 */
									obj_t BgL_e1z00_796;

									BgL_e1z00_796 =
										BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(BgL_ez00_10,
										BgL_bsz00_786);
									{	/* R5rs/syntax.scm 284 */
										obj_t BgL_arg2036z00_797;

										obj_t BgL_arg2037z00_798;

										BgL_arg2036z00_797 =
											BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00;
										{	/* R5rs/syntax.scm 285 */
											obj_t BgL_arg2038z00_799;

											if (NULLP(BgL_bodyz00_787))
												{	/* R5rs/syntax.scm 285 */
													BgL_arg2038z00_799 = BNIL;
												}
											else
												{	/* R5rs/syntax.scm 285 */
													obj_t BgL_head1858z00_803;

													BgL_head1858z00_803 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1856z00_805;

														obj_t BgL_tail1859z00_806;

														BgL_l1856z00_805 = BgL_bodyz00_787;
														BgL_tail1859z00_806 = BgL_head1858z00_803;
													BgL_zc3anonymousza32041ze3z83_807:
														if (NULLP(BgL_l1856z00_805))
															{	/* R5rs/syntax.scm 285 */
																BgL_arg2038z00_799 = CDR(BgL_head1858z00_803);
															}
														else
															{	/* R5rs/syntax.scm 285 */
																obj_t BgL_newtail1860z00_809;

																{	/* R5rs/syntax.scm 285 */
																	obj_t BgL_arg2044z00_811;

																	{	/* R5rs/syntax.scm 285 */
																		obj_t BgL_xz00_813;

																		BgL_xz00_813 = CAR(BgL_l1856z00_805);
																		{	/* R5rs/syntax.scm 285 */
																			obj_t BgL_arg2046z00_814;

																			BgL_arg2046z00_814 =
																				BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																				(BgL_xz00_813, BNIL);
																			BgL_arg2044z00_811 =
																				PROCEDURE_ENTRY(BgL_e1z00_796)
																				(BgL_e1z00_796, BgL_arg2046z00_814,
																				BgL_e1z00_796, BEOA);
																		}
																	}
																	BgL_newtail1860z00_809 =
																		MAKE_PAIR(BgL_arg2044z00_811, BNIL);
																}
																SET_CDR(BgL_tail1859z00_806,
																	BgL_newtail1860z00_809);
																{
																	obj_t BgL_tail1859z00_4156;

																	obj_t BgL_l1856z00_4154;

																	BgL_l1856z00_4154 = CDR(BgL_l1856z00_805);
																	BgL_tail1859z00_4156 = BgL_newtail1860z00_809;
																	BgL_tail1859z00_806 = BgL_tail1859z00_4156;
																	BgL_l1856z00_805 = BgL_l1856z00_4154;
																	goto BgL_zc3anonymousza32041ze3z83_807;
																}
															}
													}
												}
											BgL_arg2037z00_798 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2038z00_799, BNIL);
										}
										return MAKE_PAIR(BgL_arg2036z00_797, BgL_arg2037z00_798);
									}
								}
							}
						else
							{	/* R5rs/syntax.scm 269 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string3141z00zz__r5_macro_4_3_syntaxz00,
									BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);
							}
					}
				else
					{	/* R5rs/syntax.scm 269 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string3141z00zz__r5_macro_4_3_syntaxz00,
							BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);
					}
			}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3466,
		obj_t BgL_bsz00_817)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 271 */
			if (NULLP(BgL_bsz00_817))
				{	/* R5rs/syntax.scm 272 */
					return BgL_ez00_3466;
				}
			else
				{
					obj_t BgL_mz00_820;

					obj_t BgL_lsz00_821;

					obj_t BgL_rulesz00_822;

					{	/* R5rs/syntax.scm 274 */
						obj_t BgL_ezd21439zd2_825;

						BgL_ezd21439zd2_825 = CAR(BgL_bsz00_817);
						if (PAIRP(BgL_ezd21439zd2_825))
							{	/* R5rs/syntax.scm 274 */
								obj_t BgL_carzd21446zd2_827;

								obj_t BgL_cdrzd21447zd2_828;

								BgL_carzd21446zd2_827 = CAR(BgL_ezd21439zd2_825);
								BgL_cdrzd21447zd2_828 = CDR(BgL_ezd21439zd2_825);
								if (SYMBOLP(BgL_carzd21446zd2_827))
									{	/* R5rs/syntax.scm 274 */
										if (PAIRP(BgL_cdrzd21447zd2_828))
											{	/* R5rs/syntax.scm 274 */
												obj_t BgL_carzd21453zd2_831;

												BgL_carzd21453zd2_831 = CAR(BgL_cdrzd21447zd2_828);
												if (PAIRP(BgL_carzd21453zd2_831))
													{	/* R5rs/syntax.scm 274 */
														obj_t BgL_cdrzd21458zd2_833;

														BgL_cdrzd21458zd2_833 = CDR(BgL_carzd21453zd2_831);
														if (
															(CAR(BgL_carzd21453zd2_831) ==
																BGl_symbol3136z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 274 */
																if (PAIRP(BgL_cdrzd21458zd2_833))
																	{	/* R5rs/syntax.scm 274 */
																		if (NULLP(CDR(BgL_cdrzd21447zd2_828)))
																			{	/* R5rs/syntax.scm 274 */
																				BgL_mz00_820 = BgL_carzd21446zd2_827;
																				BgL_lsz00_821 =
																					CAR(BgL_cdrzd21458zd2_833);
																				BgL_rulesz00_822 =
																					CDR(BgL_cdrzd21458zd2_833);
																				{	/* R5rs/syntax.scm 276 */
																					obj_t BgL_e3z00_842;

																					obj_t BgL_e4z00_843;

																					BgL_e3z00_842 =
																						BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																						(BgL_mz00_820, BgL_lsz00_821,
																						BgL_rulesz00_822);
																					BgL_e4z00_843 =
																						BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00
																						(BgL_ez00_3466, CDR(BgL_bsz00_817));
																					{	/* R5rs/syntax.scm 278 */
																						obj_t
																							BgL_zc3anonymousza32061ze3z83_3423;
																						BgL_zc3anonymousza32061ze3z83_3423 =
																							make_fx_procedure
																							(BGl_zc3anonymousza32061ze3z83zz__r5_macro_4_3_syntaxz00,
																							(int) (((long) 2)),
																							(int) (((long) 3)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32061ze3z83_3423,
																							(int) (((long) 0)),
																							BgL_e4z00_843);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32061ze3z83_3423,
																							(int) (((long) 1)),
																							BgL_e3z00_842);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32061ze3z83_3423,
																							(int) (((long) 2)), BgL_mz00_820);
																						return
																							BgL_zc3anonymousza32061ze3z83_3423;
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 274 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																					BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																					BgL_bsz00_817);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 274 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																			BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																			BgL_bsz00_817);
																	}
															}
														else
															{	/* R5rs/syntax.scm 274 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																	BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																	BgL_bsz00_817);
															}
													}
												else
													{	/* R5rs/syntax.scm 274 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
															BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
															BgL_bsz00_817);
													}
											}
										else
											{	/* R5rs/syntax.scm 274 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
													BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
													BgL_bsz00_817);
											}
									}
								else
									{	/* R5rs/syntax.scm 274 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
											BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
											BgL_bsz00_817);
									}
							}
						else
							{	/* R5rs/syntax.scm 274 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
									BGl_string3143z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_817);
							}
					}
				}
		}
	}



/* _expand-letrec-syntax */
	obj_t BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3424, obj_t BgL_xz00_3425, obj_t BgL_ez00_3426)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 268 */
			{	/* R5rs/syntax.scm 269 */
				obj_t BgL_auxz00_4207;

				if (PROCEDUREP(BgL_ez00_3426))
					{	/* R5rs/syntax.scm 269 */
						BgL_auxz00_4207 = BgL_ez00_3426;
					}
				else
					{
						obj_t BgL_auxz00_4210;

						BgL_auxz00_4210 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 9099)),
							BGl_string3144z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2904z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3426);
						FAILURE(BgL_auxz00_4210, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00
					(BgL_xz00_3425, BgL_auxz00_4207);
			}
		}
	}



/* <anonymous:2061> */
	obj_t BGl_zc3anonymousza32061ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3427, obj_t BgL_xz00_3431, obj_t BgL_e2z00_3432)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 278 */
			{	/* R5rs/syntax.scm 279 */
				obj_t BgL_e4z00_3428;

				obj_t BgL_e3z00_3429;

				obj_t BgL_mz00_3430;

				BgL_e4z00_3428 = PROCEDURE_REF(BgL_envz00_3427, (int) (((long) 0)));
				BgL_e3z00_3429 = PROCEDURE_REF(BgL_envz00_3427, (int) (((long) 1)));
				BgL_mz00_3430 = PROCEDURE_REF(BgL_envz00_3427, (int) (((long) 2)));
				{
					obj_t BgL_xz00_844;

					obj_t BgL_e2z00_845;

					BgL_xz00_844 = BgL_xz00_3431;
					BgL_e2z00_845 = BgL_e2z00_3432;
					{	/* R5rs/syntax.scm 279 */
						bool_t BgL_testz00_4221;

						if (PAIRP(BgL_xz00_844))
							{	/* R5rs/syntax.scm 279 */
								BgL_testz00_4221 =
									BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00
									(BgL_mz00_3430, CAR(BgL_xz00_844));
							}
						else
							{	/* R5rs/syntax.scm 279 */
								BgL_testz00_4221 = ((bool_t) 0);
							}
						if (BgL_testz00_4221)
							{	/* R5rs/syntax.scm 279 */
								return
									PROCEDURE_ENTRY(BgL_e3z00_3429) (BgL_e3z00_3429, BgL_xz00_844,
									BgL_e2z00_845, BEOA);
							}
						else
							{	/* R5rs/syntax.scm 279 */
								return
									PROCEDURE_ENTRY(BgL_e4z00_3428) (BgL_e4z00_3428, BgL_xz00_844,
									BgL_e2z00_845, BEOA);
							}
					}
				}
			}
		}
	}



/* expand-let-syntax */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_11,
		obj_t BgL_ez00_12)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 292 */
			{
				obj_t BgL_bsz00_852;

				obj_t BgL_bodyz00_853;

				if (PAIRP(BgL_xz00_11))
					{	/* R5rs/syntax.scm 293 */
						obj_t BgL_cdrzd21473zd2_858;

						BgL_cdrzd21473zd2_858 = CDR(BgL_xz00_11);
						if (PAIRP(BgL_cdrzd21473zd2_858))
							{	/* R5rs/syntax.scm 293 */
								BgL_bsz00_852 = CAR(BgL_cdrzd21473zd2_858);
								BgL_bodyz00_853 = CDR(BgL_cdrzd21473zd2_858);
								{	/* R5rs/syntax.scm 295 */
									obj_t BgL_e1z00_862;

									BgL_e1z00_862 =
										BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_12,
										BgL_bsz00_852);
									{	/* R5rs/syntax.scm 308 */
										obj_t BgL_arg2070z00_863;

										obj_t BgL_arg2072z00_864;

										BgL_arg2070z00_863 =
											BGl_symbol2927z00zz__r5_macro_4_3_syntaxz00;
										{	/* R5rs/syntax.scm 309 */
											obj_t BgL_arg2073z00_865;

											if (NULLP(BgL_bodyz00_853))
												{	/* R5rs/syntax.scm 309 */
													BgL_arg2073z00_865 = BNIL;
												}
											else
												{	/* R5rs/syntax.scm 309 */
													obj_t BgL_head1863z00_869;

													BgL_head1863z00_869 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1861z00_871;

														obj_t BgL_tail1864z00_872;

														BgL_l1861z00_871 = BgL_bodyz00_853;
														BgL_tail1864z00_872 = BgL_head1863z00_869;
													BgL_zc3anonymousza32078ze3z83_873:
														if (NULLP(BgL_l1861z00_871))
															{	/* R5rs/syntax.scm 309 */
																BgL_arg2073z00_865 = CDR(BgL_head1863z00_869);
															}
														else
															{	/* R5rs/syntax.scm 309 */
																obj_t BgL_newtail1865z00_875;

																{	/* R5rs/syntax.scm 309 */
																	obj_t BgL_arg2081z00_877;

																	{	/* R5rs/syntax.scm 309 */
																		obj_t BgL_xz00_879;

																		BgL_xz00_879 = CAR(BgL_l1861z00_871);
																		{	/* R5rs/syntax.scm 309 */
																			obj_t BgL_arg2083z00_880;

																			BgL_arg2083z00_880 =
																				BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																				(BgL_xz00_879, BNIL);
																			BgL_arg2081z00_877 =
																				PROCEDURE_ENTRY(BgL_e1z00_862)
																				(BgL_e1z00_862, BgL_arg2083z00_880,
																				BgL_e1z00_862, BEOA);
																		}
																	}
																	BgL_newtail1865z00_875 =
																		MAKE_PAIR(BgL_arg2081z00_877, BNIL);
																}
																SET_CDR(BgL_tail1864z00_872,
																	BgL_newtail1865z00_875);
																{
																	obj_t BgL_tail1864z00_4250;

																	obj_t BgL_l1861z00_4248;

																	BgL_l1861z00_4248 = CDR(BgL_l1861z00_871);
																	BgL_tail1864z00_4250 = BgL_newtail1865z00_875;
																	BgL_tail1864z00_872 = BgL_tail1864z00_4250;
																	BgL_l1861z00_871 = BgL_l1861z00_4248;
																	goto BgL_zc3anonymousza32078ze3z83_873;
																}
															}
													}
												}
											BgL_arg2072z00_864 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2073z00_865, BNIL);
										}
										return MAKE_PAIR(BgL_arg2070z00_863, BgL_arg2072z00_864);
									}
								}
							}
						else
							{	/* R5rs/syntax.scm 293 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
									BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);
							}
					}
				else
					{	/* R5rs/syntax.scm 293 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
							BGl_string3139z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);
					}
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3465,
		obj_t BgL_bsz00_883)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 295 */
			if (NULLP(BgL_bsz00_883))
				{	/* R5rs/syntax.scm 296 */
					return BgL_ez00_3465;
				}
			else
				{
					obj_t BgL_mz00_886;

					obj_t BgL_lsz00_887;

					obj_t BgL_rulesz00_888;

					{	/* R5rs/syntax.scm 298 */
						obj_t BgL_ezd21482zd2_891;

						BgL_ezd21482zd2_891 = CAR(BgL_bsz00_883);
						if (PAIRP(BgL_ezd21482zd2_891))
							{	/* R5rs/syntax.scm 298 */
								obj_t BgL_carzd21489zd2_893;

								obj_t BgL_cdrzd21490zd2_894;

								BgL_carzd21489zd2_893 = CAR(BgL_ezd21482zd2_891);
								BgL_cdrzd21490zd2_894 = CDR(BgL_ezd21482zd2_891);
								if (SYMBOLP(BgL_carzd21489zd2_893))
									{	/* R5rs/syntax.scm 298 */
										if (PAIRP(BgL_cdrzd21490zd2_894))
											{	/* R5rs/syntax.scm 298 */
												obj_t BgL_carzd21496zd2_897;

												BgL_carzd21496zd2_897 = CAR(BgL_cdrzd21490zd2_894);
												if (PAIRP(BgL_carzd21496zd2_897))
													{	/* R5rs/syntax.scm 298 */
														obj_t BgL_cdrzd21501zd2_899;

														BgL_cdrzd21501zd2_899 = CDR(BgL_carzd21496zd2_897);
														if (
															(CAR(BgL_carzd21496zd2_897) ==
																BGl_symbol3136z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 298 */
																if (PAIRP(BgL_cdrzd21501zd2_899))
																	{	/* R5rs/syntax.scm 298 */
																		if (NULLP(CDR(BgL_cdrzd21490zd2_894)))
																			{	/* R5rs/syntax.scm 298 */
																				BgL_mz00_886 = BgL_carzd21489zd2_893;
																				BgL_lsz00_887 =
																					CAR(BgL_cdrzd21501zd2_899);
																				BgL_rulesz00_888 =
																					CDR(BgL_cdrzd21501zd2_899);
																				{	/* R5rs/syntax.scm 300 */
																					obj_t BgL_e3z00_908;

																					obj_t BgL_e4z00_909;

																					BgL_e3z00_908 =
																						BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
																						(BgL_mz00_886, BgL_lsz00_887,
																						BgL_rulesz00_888);
																					BgL_e4z00_909 =
																						BGl_loopz72z72zz__r5_macro_4_3_syntaxz00
																						(BgL_ez00_3465, CDR(BgL_bsz00_883));
																					{	/* R5rs/syntax.scm 302 */
																						obj_t
																							BgL_zc3anonymousza32098ze3z83_3433;
																						BgL_zc3anonymousza32098ze3z83_3433 =
																							make_fx_procedure
																							(BGl_zc3anonymousza32098ze3z83zz__r5_macro_4_3_syntaxz00,
																							(int) (((long) 2)),
																							(int) (((long) 4)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32098ze3z83_3433,
																							(int) (((long) 0)),
																							BgL_e4z00_909);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32098ze3z83_3433,
																							(int) (((long) 1)),
																							BgL_e3z00_908);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32098ze3z83_3433,
																							(int) (((long) 2)),
																							BgL_ez00_3465);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza32098ze3z83_3433,
																							(int) (((long) 3)), BgL_mz00_886);
																						return
																							BgL_zc3anonymousza32098ze3z83_3433;
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 298 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																					BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																					BgL_bsz00_883);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 298 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																			BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																			BgL_bsz00_883);
																	}
															}
														else
															{	/* R5rs/syntax.scm 298 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
																	BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
																	BgL_bsz00_883);
															}
													}
												else
													{	/* R5rs/syntax.scm 298 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
															BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
															BgL_bsz00_883);
													}
											}
										else
											{	/* R5rs/syntax.scm 298 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
													BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
													BgL_bsz00_883);
											}
									}
								else
									{	/* R5rs/syntax.scm 298 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
											BGl_string3143z00zz__r5_macro_4_3_syntaxz00,
											BgL_bsz00_883);
									}
							}
						else
							{	/* R5rs/syntax.scm 298 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string3142z00zz__r5_macro_4_3_syntaxz00,
									BGl_string3143z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_883);
							}
					}
				}
		}
	}



/* _expand-let-syntax */
	obj_t BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3434, obj_t BgL_xz00_3435, obj_t BgL_ez00_3436)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 292 */
			{	/* R5rs/syntax.scm 293 */
				obj_t BgL_auxz00_4303;

				if (PROCEDUREP(BgL_ez00_3436))
					{	/* R5rs/syntax.scm 293 */
						BgL_auxz00_4303 = BgL_ez00_3436;
					}
				else
					{
						obj_t BgL_auxz00_4306;

						BgL_auxz00_4306 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00, BINT(((long) 9945)),
							BGl_string3145z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2904z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3436);
						FAILURE(BgL_auxz00_4306, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3435,
					BgL_auxz00_4303);
			}
		}
	}



/* <anonymous:2098> */
	obj_t BGl_zc3anonymousza32098ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3437, obj_t BgL_xz00_3442, obj_t BgL_e2z00_3443)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 302 */
			{	/* R5rs/syntax.scm 303 */
				obj_t BgL_e4z00_3438;

				obj_t BgL_e3z00_3439;

				obj_t BgL_ez00_3440;

				obj_t BgL_mz00_3441;

				BgL_e4z00_3438 = PROCEDURE_REF(BgL_envz00_3437, (int) (((long) 0)));
				BgL_e3z00_3439 = PROCEDURE_REF(BgL_envz00_3437, (int) (((long) 1)));
				BgL_ez00_3440 = PROCEDURE_REF(BgL_envz00_3437, (int) (((long) 2)));
				BgL_mz00_3441 = PROCEDURE_REF(BgL_envz00_3437, (int) (((long) 3)));
				{
					obj_t BgL_xz00_910;

					obj_t BgL_e2z00_911;

					BgL_xz00_910 = BgL_xz00_3442;
					BgL_e2z00_911 = BgL_e2z00_3443;
					{	/* R5rs/syntax.scm 303 */
						bool_t BgL_testz00_4319;

						if (PAIRP(BgL_xz00_910))
							{	/* R5rs/syntax.scm 303 */
								BgL_testz00_4319 =
									BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00
									(BgL_mz00_3441, CAR(BgL_xz00_910));
							}
						else
							{	/* R5rs/syntax.scm 303 */
								BgL_testz00_4319 = ((bool_t) 0);
							}
						if (BgL_testz00_4319)
							{	/* R5rs/syntax.scm 303 */
								return
									PROCEDURE_ENTRY(BgL_e3z00_3439) (BgL_e3z00_3439, BgL_xz00_910,
									BgL_ez00_3440, BEOA);
							}
						else
							{	/* R5rs/syntax.scm 303 */
								return
									PROCEDURE_ENTRY(BgL_e4z00_3438) (BgL_e4z00_3438, BgL_xz00_910,
									BgL_e2z00_911, BEOA);
							}
					}
				}
			}
		}
	}



/* syntax-rules->expander */
	BGL_EXPORTED_DEF obj_t
		BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_13, obj_t BgL_literalsz00_14, obj_t BgL_rulesz00_15)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 316 */
			BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00();
			{	/* R5rs/syntax.scm 318 */
				obj_t BgL_kz00_918;

				BgL_kz00_918 = MAKE_PAIR(BgL_keywordz00_13, BgL_literalsz00_14);
				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_rulesz00_15))
					{	/* R5rs/syntax.scm 320 */
						obj_t BgL_zc3anonymousza32104ze3z83_3444;

						BgL_zc3anonymousza32104ze3z83_3444 =
							make_fx_procedure
							(BGl_zc3anonymousza32104ze3z83zz__r5_macro_4_3_syntaxz00,
							(int) (((long) 2)), (int) (((long) 3)));
						PROCEDURE_SET(BgL_zc3anonymousza32104ze3z83_3444,
							(int) (((long) 0)), BgL_kz00_918);
						PROCEDURE_SET(BgL_zc3anonymousza32104ze3z83_3444,
							(int) (((long) 1)), BgL_keywordz00_13);
						PROCEDURE_SET(BgL_zc3anonymousza32104ze3z83_3444,
							(int) (((long) 2)), BgL_rulesz00_15);
						return BgL_zc3anonymousza32104ze3z83_3444;
					}
				else
					{	/* R5rs/syntax.scm 319 */
						return
							BGl_errorz00zz__errorz00(BgL_keywordz00_13,
							BGl_string3146z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_15);
					}
			}
		}
	}



/* _syntax-rules->expander */
	obj_t BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3445, obj_t BgL_keywordz00_3446, obj_t BgL_literalsz00_3447,
		obj_t BgL_rulesz00_3448)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 316 */
			{	/* R5rs/syntax.scm 339 */
				obj_t BgL_auxz00_4358;

				obj_t BgL_auxz00_4349;

				obj_t BgL_auxz00_4342;

				{	/* R5rs/syntax.scm 339 */
					bool_t BgL_testz00_4359;

					if (PAIRP(BgL_rulesz00_3448))
						{	/* R5rs/syntax.scm 339 */
							BgL_testz00_4359 = ((bool_t) 1);
						}
					else
						{	/* R5rs/syntax.scm 339 */
							BgL_testz00_4359 = NULLP(BgL_rulesz00_3448);
						}
					if (BgL_testz00_4359)
						{	/* R5rs/syntax.scm 339 */
							BgL_auxz00_4358 = BgL_rulesz00_3448;
						}
					else
						{
							obj_t BgL_auxz00_4363;

							BgL_auxz00_4363 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2901z00zz__r5_macro_4_3_syntaxz00,
								BINT(((long) 11659)),
								BGl_string3147z00zz__r5_macro_4_3_syntaxz00,
								BGl_string3148z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3448);
							FAILURE(BgL_auxz00_4363, BFALSE, BFALSE);
				}}
				{	/* R5rs/syntax.scm 339 */
					bool_t BgL_testz00_4350;

					if (PAIRP(BgL_literalsz00_3447))
						{	/* R5rs/syntax.scm 339 */
							BgL_testz00_4350 = ((bool_t) 1);
						}
					else
						{	/* R5rs/syntax.scm 339 */
							BgL_testz00_4350 = NULLP(BgL_literalsz00_3447);
						}
					if (BgL_testz00_4350)
						{	/* R5rs/syntax.scm 339 */
							BgL_auxz00_4349 = BgL_literalsz00_3447;
						}
					else
						{
							obj_t BgL_auxz00_4354;

							BgL_auxz00_4354 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2901z00zz__r5_macro_4_3_syntaxz00,
								BINT(((long) 11659)),
								BGl_string3147z00zz__r5_macro_4_3_syntaxz00,
								BGl_string3148z00zz__r5_macro_4_3_syntaxz00,
								BgL_literalsz00_3447);
							FAILURE(BgL_auxz00_4354, BFALSE, BFALSE);
				}}
				if (SYMBOLP(BgL_keywordz00_3446))
					{	/* R5rs/syntax.scm 339 */
						BgL_auxz00_4342 = BgL_keywordz00_3446;
					}
				else
					{
						obj_t BgL_auxz00_4345;

						BgL_auxz00_4345 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2901z00zz__r5_macro_4_3_syntaxz00,
							BINT(((long) 11659)), BGl_string3147z00zz__r5_macro_4_3_syntaxz00,
							BGl_string2903z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3446);
						FAILURE(BgL_auxz00_4345, BFALSE, BFALSE);
					}
				return
					BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00
					(BgL_auxz00_4342, BgL_auxz00_4349, BgL_auxz00_4358);
			}
		}
	}



/* <anonymous:2104> */
	obj_t BGl_zc3anonymousza32104ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3449, obj_t BgL_xz00_3453, obj_t BgL_ez00_3454)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 320 */
			{	/* R5rs/syntax.scm 322 */
				obj_t BgL_kz00_3450;

				obj_t BgL_keywordz00_3451;

				obj_t BgL_rulesz00_3452;

				BgL_kz00_3450 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 0)));
				BgL_keywordz00_3451 =
					PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 1)));
				BgL_rulesz00_3452 = PROCEDURE_REF(BgL_envz00_3449, (int) (((long) 2)));
				{
					obj_t BgL_xz00_920;

					obj_t BgL_ez00_921;

					BgL_xz00_920 = BgL_xz00_3453;
					BgL_ez00_921 = BgL_ez00_3454;
					{
						obj_t BgL_rulesz00_924;

						BgL_rulesz00_924 = BgL_rulesz00_3452;
					BgL_zc3anonymousza32105ze3z83_925:
						if (NULLP(BgL_rulesz00_924))
							{	/* R5rs/syntax.scm 322 */
								return
									BGl_errorz00zz__errorz00(BgL_keywordz00_3451,
									BGl_string3149z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_920);
							}
						else
							{
								obj_t BgL_patternz00_927;

								obj_t BgL_templatez00_928;

								{	/* R5rs/syntax.scm 324 */
									obj_t BgL_ezd21510zd2_931;

									BgL_ezd21510zd2_931 = CAR(BgL_rulesz00_924);
									if (PAIRP(BgL_ezd21510zd2_931))
										{	/* R5rs/syntax.scm 324 */
											obj_t BgL_cdrzd21516zd2_933;

											BgL_cdrzd21516zd2_933 = CDR(BgL_ezd21510zd2_931);
											if (PAIRP(BgL_cdrzd21516zd2_933))
												{	/* R5rs/syntax.scm 324 */
													if (NULLP(CDR(BgL_cdrzd21516zd2_933)))
														{	/* R5rs/syntax.scm 324 */
															BgL_patternz00_927 = CAR(BgL_ezd21510zd2_931);
															BgL_templatez00_928 = CAR(BgL_cdrzd21516zd2_933);
															if (CBOOL
																(BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
																	(BgL_keywordz00_3451, BgL_patternz00_927,
																		BgL_xz00_920, BgL_kz00_3450)))
																{	/* R5rs/syntax.scm 330 */
																	obj_t BgL_fsz00_940;

																	BgL_fsz00_940 =
																		BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
																		(BgL_patternz00_927, BgL_xz00_920,
																		BgL_kz00_3450);
																	{	/* R5rs/syntax.scm 330 */
																		obj_t BgL_tz00_941;

																		BgL_tz00_941 =
																			BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
																			(BgL_templatez00_928, BgL_fsz00_940,
																			BgL_kz00_3450);
																		{	/* R5rs/syntax.scm 331 */
																			obj_t BgL_tez00_942;

																			BgL_tez00_942 =
																				BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00
																				(BgL_tz00_941,
																				BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00);
																			{	/* R5rs/syntax.scm 332 */

																				{	/* R5rs/syntax.scm 335 */
																					obj_t BgL_arg2114z00_943;

																					BgL_arg2114z00_943 =
																						BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																						(BgL_tez00_942, BNIL);
																					return
																						PROCEDURE_ENTRY(BgL_ez00_921)
																						(BgL_ez00_921, BgL_arg2114z00_943,
																						BgL_ez00_921, BEOA);
																				}
																			}
																		}
																	}
																}
															else
																{
																	obj_t BgL_rulesz00_4395;

																	BgL_rulesz00_4395 = CDR(BgL_rulesz00_924);
																	BgL_rulesz00_924 = BgL_rulesz00_4395;
																	goto BgL_zc3anonymousza32105ze3z83_925;
																}
														}
													else
														{	/* R5rs/syntax.scm 324 */
															return
																BGl_errorz00zz__errorz00(BgL_keywordz00_3451,
																BGl_string3150z00zz__r5_macro_4_3_syntaxz00,
																BgL_ezd21510zd2_931);
														}
												}
											else
												{	/* R5rs/syntax.scm 324 */
													return
														BGl_errorz00zz__errorz00(BgL_keywordz00_3451,
														BGl_string3150z00zz__r5_macro_4_3_syntaxz00,
														BgL_ezd21510zd2_931);
												}
										}
									else
										{	/* R5rs/syntax.scm 324 */
											return
												BGl_errorz00zz__errorz00(BgL_keywordz00_3451,
												BGl_string3150z00zz__r5_macro_4_3_syntaxz00,
												BgL_ezd21510zd2_931);
										}
								}
							}
					}
				}
			}
		}
	}



/* syntax-matches-pattern? */
	obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_keywordz00_16, obj_t BgL_pz00_17, obj_t BgL_ez00_18, obj_t BgL_kz00_19)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 344 */
		BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00:
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_17))
				{	/* R5rs/syntax.scm 346 */
					if ((bgl_list_length(BgL_pz00_17) == ((long) 2)))
						{	/* R5rs/syntax.scm 347 */
							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_ez00_18))
								{	/* R5rs/syntax.scm 350 */
									obj_t BgL_p0z00_951;

									BgL_p0z00_951 = CAR(BgL_pz00_17);
									{
										obj_t BgL_l1866z00_953;

										{	/* R5rs/syntax.scm 351 */
											bool_t BgL_auxz00_4410;

											BgL_l1866z00_953 = BgL_ez00_18;
										BgL_zc3anonymousza32121ze3z83_954:
											if (NULLP(BgL_l1866z00_953))
												{	/* R5rs/syntax.scm 351 */
													BgL_auxz00_4410 = ((bool_t) 1);
												}
											else
												{	/* R5rs/syntax.scm 351 */
													bool_t BgL_testz00_4413;

													{	/* R5rs/syntax.scm 352 */
														obj_t BgL_eiz00_958;

														BgL_eiz00_958 = CAR(BgL_l1866z00_953);
														BgL_testz00_4413 =
															CBOOL
															(BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
															(BgL_keywordz00_16, BgL_p0z00_951, BgL_eiz00_958,
																BgL_kz00_19));
													}
													if (BgL_testz00_4413)
														{
															obj_t BgL_l1866z00_4417;

															BgL_l1866z00_4417 = CDR(BgL_l1866z00_953);
															BgL_l1866z00_953 = BgL_l1866z00_4417;
															goto BgL_zc3anonymousza32121ze3z83_954;
														}
													else
														{	/* R5rs/syntax.scm 351 */
															BgL_auxz00_4410 = ((bool_t) 0);
														}
												}
											return BBOOL(BgL_auxz00_4410);
										}
									}
								}
							else
								{	/* R5rs/syntax.scm 349 */
									return BFALSE;
								}
						}
					else
						{	/* R5rs/syntax.scm 347 */
							return
								BGl_errorz00zz__errorz00(BgL_keywordz00_16,
								BGl_string3151z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_17);
						}
				}
			else
				{	/* R5rs/syntax.scm 346 */
					if (PAIRP(BgL_pz00_17))
						{	/* R5rs/syntax.scm 354 */
							if (PAIRP(BgL_ez00_18))
								{	/* R5rs/syntax.scm 356 */
									obj_t BgL__andtest_1828z00_964;

									BgL__andtest_1828z00_964 =
										BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00
										(BgL_keywordz00_16, CAR(BgL_pz00_17), CAR(BgL_ez00_18),
										BgL_kz00_19);
									if (CBOOL(BgL__andtest_1828z00_964))
										{
											obj_t BgL_ez00_4432;

											obj_t BgL_pz00_4430;

											BgL_pz00_4430 = CDR(BgL_pz00_17);
											BgL_ez00_4432 = CDR(BgL_ez00_18);
											BgL_ez00_18 = BgL_ez00_4432;
											BgL_pz00_17 = BgL_pz00_4430;
											goto
												BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00;
										}
									else
										{	/* R5rs/syntax.scm 356 */
											return BFALSE;
										}
								}
							else
								{	/* R5rs/syntax.scm 355 */
									return BFALSE;
								}
						}
					else
						{	/* R5rs/syntax.scm 354 */
							if (SYMBOLP(BgL_pz00_17))
								{	/* R5rs/syntax.scm 358 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_17, BgL_kz00_19)))
										{	/* R5rs/syntax.scm 359 */
											return
												BBOOL(BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00
												(BgL_ez00_18, BgL_pz00_17));
										}
									else
										{	/* R5rs/syntax.scm 359 */
											return BTRUE;
										}
								}
							else
								{	/* R5rs/syntax.scm 358 */
									return
										BBOOL(BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_17,
											BgL_ez00_18));
								}
						}
				}
		}
	}



/* syntax-get-frames */
	obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_pz00_20, obj_t BgL_ez00_21, obj_t BgL_kz00_22)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 366 */
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_20))
				{	/* R5rs/syntax.scm 369 */
					obj_t BgL_p0z00_972;

					BgL_p0z00_972 = CAR(BgL_pz00_20);
					{	/* R5rs/syntax.scm 371 */
						obj_t BgL_arg2137z00_973;

						{	/* R5rs/syntax.scm 371 */
							obj_t BgL_arg2139z00_975;

							if (NULLP(BgL_ez00_21))
								{	/* R5rs/syntax.scm 371 */
									BgL_arg2139z00_975 = BNIL;
								}
							else
								{	/* R5rs/syntax.scm 371 */
									obj_t BgL_head1870z00_978;

									BgL_head1870z00_978 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l1868z00_980;

										obj_t BgL_tail1871z00_981;

										BgL_l1868z00_980 = BgL_ez00_21;
										BgL_tail1871z00_981 = BgL_head1870z00_978;
									BgL_zc3anonymousza32141ze3z83_982:
										if (NULLP(BgL_l1868z00_980))
											{	/* R5rs/syntax.scm 371 */
												BgL_arg2139z00_975 = CDR(BgL_head1870z00_978);
											}
										else
											{	/* R5rs/syntax.scm 371 */
												obj_t BgL_newtail1872z00_984;

												BgL_newtail1872z00_984 =
													MAKE_PAIR
													(BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00
													(BgL_p0z00_972, CAR(BgL_l1868z00_980), BgL_kz00_22),
													BNIL);
												SET_CDR(BgL_tail1871z00_981, BgL_newtail1872z00_984);
												{
													obj_t BgL_tail1871z00_4458;

													obj_t BgL_l1868z00_4456;

													BgL_l1868z00_4456 = CDR(BgL_l1868z00_980);
													BgL_tail1871z00_4458 = BgL_newtail1872z00_984;
													BgL_tail1871z00_981 = BgL_tail1871z00_4458;
													BgL_l1868z00_980 = BgL_l1868z00_4456;
													goto BgL_zc3anonymousza32141ze3z83_982;
												}
											}
									}
								}
							BgL_arg2137z00_973 =
								MAKE_PAIR(BGl_keyword3152z00zz__r5_macro_4_3_syntaxz00,
								BgL_arg2139z00_975);
						}
						{	/* R5rs/syntax.scm 370 */
							obj_t BgL_list2138z00_974;

							BgL_list2138z00_974 = MAKE_PAIR(BgL_arg2137z00_973, BNIL);
							return BgL_list2138z00_974;
						}
					}
				}
			else
				{	/* R5rs/syntax.scm 368 */
					if (PAIRP(BgL_pz00_20))
						{	/* R5rs/syntax.scm 374 */
							return
								bgl_append2
								(BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(CAR
									(BgL_pz00_20), CAR(BgL_ez00_21), BgL_kz00_22),
								BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(CDR
									(BgL_pz00_20), CDR(BgL_ez00_21), BgL_kz00_22));
						}
					else
						{	/* R5rs/syntax.scm 374 */
							if (SYMBOLP(BgL_pz00_20))
								{	/* R5rs/syntax.scm 377 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_20, BgL_kz00_22)))
										{	/* R5rs/syntax.scm 378 */
											return BNIL;
										}
									else
										{	/* R5rs/syntax.scm 378 */
											obj_t BgL_arg2156z00_999;

											BgL_arg2156z00_999 =
												MAKE_PAIR(BgL_pz00_20,
												BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00
												(BgL_ez00_21));
											{	/* R5rs/syntax.scm 378 */
												obj_t BgL_list2157z00_1000;

												BgL_list2157z00_1000 =
													MAKE_PAIR(BgL_arg2156z00_999, BNIL);
												return BgL_list2157z00_1000;
											}
										}
								}
							else
								{	/* R5rs/syntax.scm 377 */
									return BNIL;
								}
						}
				}
		}
	}



/* syntax-expand-pattern */
	obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_pz00_23, obj_t BgL_envz00_24, obj_t BgL_kz00_25)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 385 */
			{
				obj_t BgL_p0z00_1017;

				obj_t BgL_envz00_1018;

				obj_t BgL_kz00_1019;

				if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_23))
					{	/* R5rs/syntax.scm 399 */
						obj_t BgL_arg2160z00_1004;

						obj_t BgL_arg2161z00_1005;

						BgL_p0z00_1017 = CAR(BgL_pz00_23);
						BgL_envz00_1018 = BgL_envz00_24;
						BgL_kz00_1019 = BgL_kz00_25;
						{	/* R5rs/syntax.scm 388 */
							obj_t BgL_varsz00_1021;

							BgL_varsz00_1021 =
								BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_1019,
								BgL_p0z00_1017);
							{	/* R5rs/syntax.scm 388 */
								obj_t BgL_framesz00_1022;

								BgL_framesz00_1022 =
									BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00
									(BgL_varsz00_1021, BgL_envz00_1018);
								{	/* R5rs/syntax.scm 389 */

									if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_framesz00_1022))
										{	/* R5rs/syntax.scm 391 */
											if (NULLP(BgL_framesz00_1022))
												{	/* R5rs/syntax.scm 393 */
													BgL_arg2160z00_1004 = BNIL;
												}
											else
												{	/* R5rs/syntax.scm 393 */
													obj_t BgL_head1875z00_1026;

													BgL_head1875z00_1026 = MAKE_PAIR(BNIL, BNIL);
													{
														obj_t BgL_l1873z00_1028;

														obj_t BgL_tail1876z00_1029;

														BgL_l1873z00_1028 = BgL_framesz00_1022;
														BgL_tail1876z00_1029 = BgL_head1875z00_1026;
													BgL_zc3anonymousza32175ze3z83_1030:
														if (NULLP(BgL_l1873z00_1028))
															{	/* R5rs/syntax.scm 393 */
																BgL_arg2160z00_1004 = CDR(BgL_head1875z00_1026);
															}
														else
															{	/* R5rs/syntax.scm 393 */
																obj_t BgL_newtail1877z00_1032;

																{	/* R5rs/syntax.scm 393 */
																	obj_t BgL_arg2178z00_1034;

																	{	/* R5rs/syntax.scm 393 */
																		obj_t BgL_fz00_1036;

																		BgL_fz00_1036 = CAR(BgL_l1873z00_1028);
																		BgL_arg2178z00_1034 =
																			BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
																			(BgL_p0z00_1017,
																			bgl_append2(BgL_fz00_1036,
																				BgL_envz00_1018), BgL_kz00_1019);
																	}
																	BgL_newtail1877z00_1032 =
																		MAKE_PAIR(BgL_arg2178z00_1034, BNIL);
																}
																SET_CDR(BgL_tail1876z00_1029,
																	BgL_newtail1877z00_1032);
																{
																	obj_t BgL_tail1876z00_4497;

																	obj_t BgL_l1873z00_4495;

																	BgL_l1873z00_4495 = CDR(BgL_l1873z00_1028);
																	BgL_tail1876z00_4497 =
																		BgL_newtail1877z00_1032;
																	BgL_tail1876z00_1029 = BgL_tail1876z00_4497;
																	BgL_l1873z00_1028 = BgL_l1873z00_4495;
																	goto BgL_zc3anonymousza32175ze3z83_1030;
																}
															}
													}
												}
										}
									else
										{	/* R5rs/syntax.scm 391 */
											BgL_arg2160z00_1004 = BNIL;
										}
								}
							}
						}
						{	/* R5rs/syntax.scm 400 */
							obj_t BgL_arg2163z00_1007;

							{	/* R5rs/syntax.scm 400 */
								obj_t BgL_pairz00_2329;

								BgL_pairz00_2329 = BgL_pz00_23;
								BgL_arg2163z00_1007 = CDR(CDR(BgL_pairz00_2329));
							}
							BgL_arg2161z00_1005 =
								BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
								(BgL_arg2163z00_1007, BgL_envz00_24, BgL_kz00_25);
						}
						return bgl_append2(BgL_arg2160z00_1004, BgL_arg2161z00_1005);
					}
				else
					{	/* R5rs/syntax.scm 398 */
						if (PAIRP(BgL_pz00_23))
							{	/* R5rs/syntax.scm 401 */
								return
									MAKE_PAIR
									(BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00
									(CAR(BgL_pz00_23), BgL_envz00_24, BgL_kz00_25),
									BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(CDR
										(BgL_pz00_23), BgL_envz00_24, BgL_kz00_25));
							}
						else
							{	/* R5rs/syntax.scm 401 */
								if (SYMBOLP(BgL_pz00_23))
									{	/* R5rs/syntax.scm 404 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_pz00_23, BgL_kz00_25)))
											{	/* R5rs/syntax.scm 405 */
												return BgL_pz00_23;
											}
										else
											{	/* R5rs/syntax.scm 407 */
												obj_t BgL_xz00_1015;

												BgL_xz00_1015 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_23,
													BgL_envz00_24);
												if (PAIRP(BgL_xz00_1015))
													{	/* R5rs/syntax.scm 409 */
														return CDR(BgL_xz00_1015);
													}
												else
													{	/* R5rs/syntax.scm 409 */
														return BgL_pz00_23;
													}
											}
									}
								else
									{	/* R5rs/syntax.scm 404 */
										return BgL_pz00_23;
									}
							}
					}
			}
		}
	}



/* get-ellipsis-frames */
	obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_varsz00_26, obj_t BgL_framesz00_27)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 418 */
			{
				obj_t BgL_varsz00_1042;

				obj_t BgL_resz00_1043;

				BgL_varsz00_1042 = BgL_varsz00_26;
				BgL_resz00_1043 = BNIL;
			BgL_zc3anonymousza32181ze3z83_1044:
				if (NULLP(BgL_varsz00_1042))
					{	/* R5rs/syntax.scm 421 */
						return BgL_resz00_1043;
					}
				else
					{	/* R5rs/syntax.scm 423 */
						obj_t BgL_vz00_1046;

						BgL_vz00_1046 = CAR(BgL_varsz00_1042);
						{	/* R5rs/syntax.scm 424 */
							obj_t BgL_fz00_1047;

							{	/* R5rs/syntax.scm 425 */
								obj_t BgL_zc3anonymousza32226ze3z83_3456;

								BgL_zc3anonymousza32226ze3z83_3456 =
									make_fx_procedure
									(BGl_zc3anonymousza32226ze3z83zz__r5_macro_4_3_syntaxz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza32226ze3z83_3456,
									(int) (((long) 0)), BgL_vz00_1046);
								{	/* R5rs/syntax.scm 424 */
									obj_t BgL_list2225z00_1103;

									BgL_list2225z00_1103 = MAKE_PAIR(BgL_framesz00_27, BNIL);
									BgL_fz00_1047 =
										BGl_anyz00zz__r4_pairs_and_lists_6_3z00
										(BgL_zc3anonymousza32226ze3z83_3456, BgL_list2225z00_1103);
							}}
							if (CBOOL(BgL_fz00_1047))
								{	/* R5rs/syntax.scm 430 */
									obj_t BgL_g1830z00_1048;

									BgL_g1830z00_1048 = CDR(BgL_varsz00_1042);
									{
										obj_t BgL_ovarsz00_1051;

										obj_t BgL_nvarsz00_1052;

										BgL_ovarsz00_1051 = BgL_g1830z00_1048;
										BgL_nvarsz00_1052 = BNIL;
									BgL_zc3anonymousza32183ze3z83_1053:
										if (NULLP(BgL_ovarsz00_1051))
											{	/* R5rs/syntax.scm 433 */
												if (NULLP(BgL_resz00_1043))
													{
														obj_t BgL_resz00_4537;

														obj_t BgL_varsz00_4536;

														BgL_varsz00_4536 = BgL_nvarsz00_1052;
														BgL_resz00_4537 = BgL_fz00_1047;
														BgL_resz00_1043 = BgL_resz00_4537;
														BgL_varsz00_1042 = BgL_varsz00_4536;
														goto BgL_zc3anonymousza32181ze3z83_1044;
													}
												else
													{	/* R5rs/syntax.scm 438 */
														obj_t BgL_arg2186z00_1056;

														if (NULLP(BgL_fz00_1047))
															{	/* R5rs/syntax.scm 438 */
																BgL_arg2186z00_1056 = BNIL;
															}
														else
															{	/* R5rs/syntax.scm 438 */
																obj_t BgL_head1880z00_1060;

																{	/* R5rs/syntax.scm 438 */
																	obj_t BgL_arg2198z00_1079;

																	{	/* R5rs/syntax.scm 438 */
																		obj_t BgL_arg2200z00_1081;

																		obj_t BgL_arg2203z00_1082;

																		BgL_arg2200z00_1081 = CAR(BgL_fz00_1047);
																		BgL_arg2203z00_1082 = CAR(BgL_resz00_1043);
																		{	/* R5rs/syntax.scm 438 */
																			obj_t BgL_list2205z00_1083;

																			{	/* R5rs/syntax.scm 438 */
																				obj_t BgL_arg2206z00_1084;

																				BgL_arg2206z00_1084 =
																					MAKE_PAIR(BgL_arg2203z00_1082, BNIL);
																				BgL_list2205z00_1083 =
																					MAKE_PAIR(BgL_arg2200z00_1081,
																					BgL_arg2206z00_1084);
																			}
																			BgL_arg2198z00_1079 =
																				BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_list2205z00_1083);
																		}
																	}
																	BgL_head1880z00_1060 =
																		MAKE_PAIR(BgL_arg2198z00_1079, BNIL);
																}
																{	/* R5rs/syntax.scm 438 */
																	obj_t BgL_g1884z00_1061;

																	obj_t BgL_g1885z00_1062;

																	BgL_g1884z00_1061 = CDR(BgL_fz00_1047);
																	BgL_g1885z00_1062 = CDR(BgL_resz00_1043);
																	{
																		obj_t BgL_ll1878z00_1064;

																		obj_t BgL_ll1879z00_1065;

																		obj_t BgL_tail1881z00_1066;

																		BgL_ll1878z00_1064 = BgL_g1884z00_1061;
																		BgL_ll1879z00_1065 = BgL_g1885z00_1062;
																		BgL_tail1881z00_1066 = BgL_head1880z00_1060;
																	BgL_zc3anonymousza32188ze3z83_1067:
																		if (NULLP(BgL_ll1878z00_1064))
																			{	/* R5rs/syntax.scm 438 */
																				BgL_arg2186z00_1056 =
																					BgL_head1880z00_1060;
																			}
																		else
																			{	/* R5rs/syntax.scm 438 */
																				obj_t BgL_newtail1882z00_1069;

																				{	/* R5rs/syntax.scm 438 */
																					obj_t BgL_arg2192z00_1072;

																					{	/* R5rs/syntax.scm 438 */
																						obj_t BgL_arg2194z00_1074;

																						obj_t BgL_arg2195z00_1075;

																						BgL_arg2194z00_1074 =
																							CAR(BgL_ll1878z00_1064);
																						BgL_arg2195z00_1075 =
																							CAR(BgL_ll1879z00_1065);
																						{	/* R5rs/syntax.scm 438 */
																							obj_t BgL_list2196z00_1076;

																							{	/* R5rs/syntax.scm 438 */
																								obj_t BgL_arg2197z00_1077;

																								BgL_arg2197z00_1077 =
																									MAKE_PAIR(BgL_arg2195z00_1075,
																									BNIL);
																								BgL_list2196z00_1076 =
																									MAKE_PAIR(BgL_arg2194z00_1074,
																									BgL_arg2197z00_1077);
																							}
																							BgL_arg2192z00_1072 =
																								BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_list2196z00_1076);
																						}
																					}
																					BgL_newtail1882z00_1069 =
																						MAKE_PAIR(BgL_arg2192z00_1072,
																						BNIL);
																				}
																				SET_CDR(BgL_tail1881z00_1066,
																					BgL_newtail1882z00_1069);
																				{
																					obj_t BgL_tail1881z00_4561;

																					obj_t BgL_ll1879z00_4559;

																					obj_t BgL_ll1878z00_4557;

																					BgL_ll1878z00_4557 =
																						CDR(BgL_ll1878z00_1064);
																					BgL_ll1879z00_4559 =
																						CDR(BgL_ll1879z00_1065);
																					BgL_tail1881z00_4561 =
																						BgL_newtail1882z00_1069;
																					BgL_tail1881z00_1066 =
																						BgL_tail1881z00_4561;
																					BgL_ll1879z00_1065 =
																						BgL_ll1879z00_4559;
																					BgL_ll1878z00_1064 =
																						BgL_ll1878z00_4557;
																					goto
																						BgL_zc3anonymousza32188ze3z83_1067;
																				}
																			}
																	}
																}
															}
														{
															obj_t BgL_resz00_4563;

															obj_t BgL_varsz00_4562;

															BgL_varsz00_4562 = BgL_nvarsz00_1052;
															BgL_resz00_4563 = BgL_arg2186z00_1056;
															BgL_resz00_1043 = BgL_resz00_4563;
															BgL_varsz00_1042 = BgL_varsz00_4562;
															goto BgL_zc3anonymousza32181ze3z83_1044;
														}
													}
											}
										else
											{	/* R5rs/syntax.scm 439 */
												bool_t BgL_testz00_4564;

												{
													obj_t BgL_l1886z00_1091;

													BgL_l1886z00_1091 = BgL_fz00_1047;
												BgL_zc3anonymousza32212ze3z83_1092:
													if (NULLP(BgL_l1886z00_1091))
														{	/* R5rs/syntax.scm 439 */
															BgL_testz00_4564 = ((bool_t) 0);
														}
													else
														{	/* R5rs/syntax.scm 439 */
															bool_t BgL_testz00_4567;

															{	/* R5rs/syntax.scm 439 */
																obj_t BgL_auxz00_4568;

																BgL_auxz00_4568 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR
																	(BgL_ovarsz00_1051), CAR(BgL_l1886z00_1091));
																BgL_testz00_4567 = PAIRP(BgL_auxz00_4568);
															}
															if (BgL_testz00_4567)
																{	/* R5rs/syntax.scm 439 */
																	BgL_testz00_4564 = ((bool_t) 1);
																}
															else
																{
																	obj_t BgL_l1886z00_4573;

																	BgL_l1886z00_4573 = CDR(BgL_l1886z00_1091);
																	BgL_l1886z00_1091 = BgL_l1886z00_4573;
																	goto BgL_zc3anonymousza32212ze3z83_1092;
																}
														}
												}
												if (BgL_testz00_4564)
													{
														obj_t BgL_ovarsz00_4575;

														BgL_ovarsz00_4575 = CDR(BgL_ovarsz00_1051);
														BgL_ovarsz00_1051 = BgL_ovarsz00_4575;
														goto BgL_zc3anonymousza32183ze3z83_1053;
													}
												else
													{	/* R5rs/syntax.scm 442 */
														obj_t BgL_arg2209z00_1087;

														obj_t BgL_arg2210z00_1088;

														BgL_arg2209z00_1087 = CDR(BgL_ovarsz00_1051);
														BgL_arg2210z00_1088 =
															MAKE_PAIR(CAR(BgL_ovarsz00_1051),
															BgL_nvarsz00_1052);
														{
															obj_t BgL_nvarsz00_4581;

															obj_t BgL_ovarsz00_4580;

															BgL_ovarsz00_4580 = BgL_arg2209z00_1087;
															BgL_nvarsz00_4581 = BgL_arg2210z00_1088;
															BgL_nvarsz00_1052 = BgL_nvarsz00_4581;
															BgL_ovarsz00_1051 = BgL_ovarsz00_4580;
															goto BgL_zc3anonymousza32183ze3z83_1053;
														}
													}
											}
									}
								}
							else
								{
									obj_t BgL_varsz00_4582;

									BgL_varsz00_4582 = CDR(BgL_varsz00_1042);
									BgL_varsz00_1042 = BgL_varsz00_4582;
									goto BgL_zc3anonymousza32181ze3z83_1044;
								}
						}
					}
			}
		}
	}



/* <anonymous:2226> */
	obj_t BGl_zc3anonymousza32226ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3457, obj_t BgL_fz00_3459)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 424 */
			{	/* R5rs/syntax.scm 425 */
				obj_t BgL_vz00_3458;

				BgL_vz00_3458 = PROCEDURE_REF(BgL_envz00_3457, (int) (((long) 0)));
				{
					obj_t BgL_fz00_1104;

					BgL_fz00_1104 = BgL_fz00_3459;
					if (
						(CAR(BgL_fz00_1104) ==
							BGl_keyword3152z00zz__r5_macro_4_3_syntaxz00))
						{	/* R5rs/syntax.scm 426 */
							obj_t BgL_ez00_1107;

							{	/* R5rs/syntax.scm 426 */
								obj_t BgL_arg2234z00_1110;

								BgL_arg2234z00_1110 = CDR(BgL_fz00_1104);
								{	/* R5rs/syntax.scm 426 */
									obj_t BgL_zc3anonymousza32235ze3z83_3455;

									BgL_zc3anonymousza32235ze3z83_3455 =
										make_fx_procedure
										(BGl_zc3anonymousza32235ze3z83zz__r5_macro_4_3_syntaxz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza32235ze3z83_3455,
										(int) (((long) 0)), BgL_vz00_3458);
									BgL_ez00_1107 =
										BGl_filterz00zz__r4_control_features_6_9z00
										(BgL_zc3anonymousza32235ze3z83_3455, BgL_arg2234z00_1110);
							}}
							if (PAIRP(BgL_ez00_1107))
								{	/* R5rs/syntax.scm 427 */
									return BgL_ez00_1107;
								}
							else
								{	/* R5rs/syntax.scm 427 */
									return BFALSE;
								}
						}
					else
						{	/* R5rs/syntax.scm 425 */
							return BFALSE;
						}
				}
			}
		}
	}



/* <anonymous:2235> */
	obj_t BGl_zc3anonymousza32235ze3z83zz__r5_macro_4_3_syntaxz00(obj_t
		BgL_envz00_3460, obj_t BgL_ez00_3462)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 426 */
			{	/* R5rs/syntax.scm 426 */
				obj_t BgL_vz00_3461;

				BgL_vz00_3461 = PROCEDURE_REF(BgL_envz00_3460, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1111;

					BgL_ez00_1111 = BgL_ez00_3462;
					return
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_3461,
						BgL_ez00_1111);
				}
			}
		}
	}



/* sub */
	obj_t BGl_subz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_kz00_3464,
		obj_t BgL_pz00_1118)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 449 */
			if (BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_1118))
				{	/* R5rs/syntax.scm 452 */
					obj_t BgL_arg2239z00_1121;

					obj_t BgL_arg2240z00_1122;

					BgL_arg2239z00_1121 =
						BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3464,
						CAR(BgL_pz00_1118));
					{	/* R5rs/syntax.scm 452 */
						obj_t BgL_arg2243z00_1124;

						{	/* R5rs/syntax.scm 452 */
							obj_t BgL_pairz00_2384;

							BgL_pairz00_2384 = BgL_pz00_1118;
							BgL_arg2243z00_1124 = CDR(CDR(BgL_pairz00_2384));
						}
						BgL_arg2240z00_1122 =
							BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3464,
							BgL_arg2243z00_1124);
					}
					return MAKE_PAIR(BgL_arg2239z00_1121, BgL_arg2240z00_1122);
				}
			else
				{	/* R5rs/syntax.scm 451 */
					if (PAIRP(BgL_pz00_1118))
						{	/* R5rs/syntax.scm 453 */
							return
								bgl_append2(BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3464,
									CAR(BgL_pz00_1118)),
								BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3464,
									CDR(BgL_pz00_1118)));
						}
					else
						{	/* R5rs/syntax.scm 453 */
							if (SYMBOLP(BgL_pz00_1118))
								{	/* R5rs/syntax.scm 455 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_pz00_1118, BgL_kz00_3464)))
										{	/* R5rs/syntax.scm 456 */
											return BNIL;
										}
									else
										{	/* R5rs/syntax.scm 456 */
											obj_t BgL_list2251z00_1132;

											BgL_list2251z00_1132 = MAKE_PAIR(BgL_pz00_1118, BNIL);
											return BgL_list2251z00_1132;
										}
								}
							else
								{	/* R5rs/syntax.scm 455 */
									return BNIL;
								}
						}
				}
		}
	}



/* ellipsis? */
	bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_30)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 463 */
			if (PAIRP(BgL_xz00_30))
				{	/* R5rs/syntax.scm 465 */
					bool_t BgL_testz00_4624;

					{	/* R5rs/syntax.scm 465 */
						obj_t BgL_auxz00_4625;

						BgL_auxz00_4625 = CDR(BgL_xz00_30);
						BgL_testz00_4624 = PAIRP(BgL_auxz00_4625);
					}
					if (BgL_testz00_4624)
						{	/* R5rs/syntax.scm 465 */
							return
								(CAR(CDR(BgL_xz00_30)) ==
								BGl_symbol2924z00zz__r5_macro_4_3_syntaxz00);
						}
					else
						{	/* R5rs/syntax.scm 465 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* R5rs/syntax.scm 464 */
					return ((bool_t) 0);
				}
		}
	}



/* hygiene-value */
	obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_33)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 484 */
			if (SYMBOLP(BgL_xz00_33))
				{	/* R5rs/syntax.scm 487 */
					obj_t BgL_sz00_1146;

					{	/* R5rs/syntax.scm 487 */
						obj_t BgL_res2861z00_2420;

						{	/* R5rs/syntax.scm 487 */
							obj_t BgL_symbolz00_2418;

							BgL_symbolz00_2418 = BgL_xz00_33;
							{	/* R5rs/syntax.scm 487 */
								obj_t BgL_arg2769z00_2419;

								BgL_arg2769z00_2419 = SYMBOL_TO_STRING(BgL_symbolz00_2418);
								BgL_res2861z00_2420 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2769z00_2419);
							}
						}
						BgL_sz00_1146 = BgL_res2861z00_2420;
					}
					if (bigloo_strcmp_at(BgL_sz00_1146,
							BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long) 0)))
						{	/* R5rs/syntax.scm 490 */
							obj_t BgL_arg2265z00_1148;

							{	/* R5rs/syntax.scm 490 */
								long BgL_arg2266z00_1149;

								BgL_arg2266z00_1149 = STRING_LENGTH(BgL_sz00_1146);
								BgL_arg2265z00_1148 =
									c_substring(BgL_sz00_1146,
									BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00,
									BgL_arg2266z00_1149);
							}
							return string_to_symbol(BSTRING_TO_STRING(BgL_arg2265z00_1148));
						}
					else
						{	/* R5rs/syntax.scm 488 */
							return BgL_xz00_33;
						}
				}
			else
				{	/* R5rs/syntax.scm 485 */
					return BgL_xz00_33;
				}
		}
	}



/* hygiene-eq? */
	bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_34,
		obj_t BgL_idz00_35)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 496 */
		BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00:
			{	/* R5rs/syntax.scm 497 */
				bool_t BgL_testz00_4641;

				if (SYMBOLP(BgL_idz00_35))
					{	/* R5rs/syntax.scm 497 */
						BgL_testz00_4641 = SYMBOLP(BgL_xz00_34);
					}
				else
					{	/* R5rs/syntax.scm 497 */
						BgL_testz00_4641 = ((bool_t) 0);
					}
				if (BgL_testz00_4641)
					{	/* R5rs/syntax.scm 498 */
						bool_t BgL__ortest_1834z00_1151;

						BgL__ortest_1834z00_1151 = (BgL_xz00_34 == BgL_idz00_35);
						if (BgL__ortest_1834z00_1151)
							{	/* R5rs/syntax.scm 498 */
								return BgL__ortest_1834z00_1151;
							}
						else
							{	/* R5rs/syntax.scm 499 */
								bool_t BgL_testz00_4647;

								{	/* R5rs/syntax.scm 499 */
									obj_t BgL_xz00_2428;

									BgL_xz00_2428 = BgL_xz00_34;
									{	/* R5rs/syntax.scm 499 */
										obj_t BgL_sz00_2429;

										{	/* R5rs/syntax.scm 499 */
											obj_t BgL_res2862z00_2432;

											{	/* R5rs/syntax.scm 499 */
												obj_t BgL_arg2769z00_2431;

												BgL_arg2769z00_2431 = SYMBOL_TO_STRING(BgL_xz00_2428);
												BgL_res2862z00_2432 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2769z00_2431);
											}
											BgL_sz00_2429 = BgL_res2862z00_2432;
										}
										BgL_testz00_4647 =
											bigloo_strcmp_at(BgL_sz00_2429,
											BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
											((long) 0));
								}}
								if (BgL_testz00_4647)
									{
										obj_t BgL_xz00_4651;

										BgL_xz00_4651 =
											BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
											(BgL_xz00_34);
										BgL_xz00_34 = BgL_xz00_4651;
										goto BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00;
									}
								else
									{	/* R5rs/syntax.scm 499 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* R5rs/syntax.scm 497 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* unhygienize */
	obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_36)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 504 */
			if (SYMBOLP(BgL_xz00_36))
				{	/* R5rs/syntax.scm 507 */
					obj_t BgL_xz00_2434;

					BgL_xz00_2434 = BgL_xz00_36;
					{	/* R5rs/syntax.scm 507 */
						obj_t BgL_arg2256z00_2435;

						{	/* R5rs/syntax.scm 507 */
							obj_t BgL_arg2257z00_2436;

							obj_t BgL_arg2259z00_2437;

							{	/* R5rs/syntax.scm 507 */
								obj_t BgL_res2863z00_2442;

								{	/* R5rs/syntax.scm 507 */
									obj_t BgL_symbolz00_2440;

									BgL_symbolz00_2440 =
										BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00;
									{	/* R5rs/syntax.scm 507 */
										obj_t BgL_arg2769z00_2441;

										BgL_arg2769z00_2441 = SYMBOL_TO_STRING(BgL_symbolz00_2440);
										BgL_res2863z00_2442 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2769z00_2441);
									}
								}
								BgL_arg2257z00_2436 = BgL_res2863z00_2442;
							}
							{	/* R5rs/syntax.scm 507 */
								obj_t BgL_res2864z00_2445;

								{	/* R5rs/syntax.scm 507 */
									obj_t BgL_arg2769z00_2444;

									BgL_arg2769z00_2444 = SYMBOL_TO_STRING(BgL_xz00_2434);
									BgL_res2864z00_2445 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2769z00_2444);
								}
								BgL_arg2259z00_2437 = BgL_res2864z00_2445;
							}
							{	/* R5rs/syntax.scm 507 */
								obj_t BgL_list2260z00_2438;

								{	/* R5rs/syntax.scm 507 */
									obj_t BgL_arg2262z00_2439;

									BgL_arg2262z00_2439 = MAKE_PAIR(BgL_arg2259z00_2437, BNIL);
									BgL_list2260z00_2438 =
										MAKE_PAIR(BgL_arg2257z00_2436, BgL_arg2262z00_2439);
								}
								BgL_arg2256z00_2435 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2260z00_2438);
							}
						}
						return string_to_symbol(BSTRING_TO_STRING(BgL_arg2256z00_2435));
					}
				}
			else
				{	/* R5rs/syntax.scm 506 */
					if (PAIRP(BgL_xz00_36))
						{	/* R5rs/syntax.scm 508 */
							return
								MAKE_PAIR(BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(CAR
									(BgL_xz00_36)),
								BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(CDR
									(BgL_xz00_36)));
						}
					else
						{	/* R5rs/syntax.scm 508 */
							return BgL_xz00_36;
						}
				}
		}
	}



/* hygienize */
	obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_37,
		obj_t BgL_envz00_38)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 516 */
			{
				obj_t BgL_varz00_1181;

				obj_t BgL_bodyz00_1182;

				obj_t BgL_bindingsz00_1178;

				obj_t BgL_bodyz00_1179;

				obj_t BgL_bindingsz00_1175;

				obj_t BgL_bodyz00_1176;

				obj_t BgL_bindingsz00_1168;

				obj_t BgL_bodyz00_1169;

				obj_t BgL_varsz00_1165;

				obj_t BgL_bodyz00_1166;

				obj_t BgL_varz00_1161;

				if (SYMBOLP(BgL_xz00_37))
					{	/* R5rs/syntax.scm 517 */
						BgL_varz00_1161 = BgL_xz00_37;
						{	/* R5rs/syntax.scm 519 */
							bool_t BgL_testz00_4673;

							{	/* R5rs/syntax.scm 519 */
								obj_t BgL_sz00_2617;

								{	/* R5rs/syntax.scm 519 */
									obj_t BgL_res2865z00_2620;

									{	/* R5rs/syntax.scm 519 */
										obj_t BgL_symbolz00_2618;

										BgL_symbolz00_2618 = BgL_xz00_37;
										{	/* R5rs/syntax.scm 519 */
											obj_t BgL_arg2769z00_2619;

											BgL_arg2769z00_2619 =
												SYMBOL_TO_STRING(BgL_symbolz00_2618);
											BgL_res2865z00_2620 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2769z00_2619);
										}
									}
									BgL_sz00_2617 = BgL_res2865z00_2620;
								}
								BgL_testz00_4673 =
									bigloo_strcmp_at(BgL_sz00_2617,
									BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
									((long) 0));
							}
							if (BgL_testz00_4673)
								{	/* R5rs/syntax.scm 519 */
									return
										BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
										(BgL_xz00_37);
								}
							else
								{	/* R5rs/syntax.scm 521 */
									obj_t BgL_oz00_1401;

									BgL_oz00_1401 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_1161,
										BgL_envz00_38);
									if (PAIRP(BgL_oz00_1401))
										{	/* R5rs/syntax.scm 522 */
											return CDR(BgL_oz00_1401);
										}
									else
										{	/* R5rs/syntax.scm 522 */
											return BgL_varz00_1161;
										}
								}
						}
					}
				else
					{	/* R5rs/syntax.scm 517 */
						if (PAIRP(BgL_xz00_37))
							{	/* R5rs/syntax.scm 517 */
								if (
									(CAR(BgL_xz00_37) ==
										BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00))
									{	/* R5rs/syntax.scm 517 */
										obj_t BgL_arg2281z00_1190;

										BgL_arg2281z00_1190 = CDR(BgL_xz00_37);
										return
											MAKE_PAIR(BGl_symbol2906z00zz__r5_macro_4_3_syntaxz00,
											BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38,
												BgL_arg2281z00_1190));
									}
								else
									{	/* R5rs/syntax.scm 517 */
										obj_t BgL_cdrzd21559zd2_1191;

										BgL_cdrzd21559zd2_1191 = CDR(BgL_xz00_37);
										if (
											(CAR(BgL_xz00_37) ==
												BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00))
											{	/* R5rs/syntax.scm 517 */
												if (PAIRP(BgL_cdrzd21559zd2_1191))
													{	/* R5rs/syntax.scm 517 */
														BgL_varsz00_1165 = CAR(BgL_cdrzd21559zd2_1191);
														BgL_bodyz00_1166 = CDR(BgL_cdrzd21559zd2_1191);
														{	/* R5rs/syntax.scm 528 */
															obj_t BgL_nvarsz00_1405;

															BgL_nvarsz00_1405 =
																BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																(BgL_varsz00_1165);
															{	/* R5rs/syntax.scm 528 */
																obj_t BgL_nenvz00_1406;

																{	/* R5rs/syntax.scm 529 */
																	obj_t BgL_arg2478z00_1413;

																	{	/* R5rs/syntax.scm 529 */
																		obj_t BgL_ll1888z00_1414;

																		obj_t BgL_ll1889z00_1415;

																		BgL_ll1888z00_1414 =
																			BGl_flattenz00zz__r5_macro_4_3_syntaxz00
																			(BgL_varsz00_1165);
																		BgL_ll1889z00_1415 =
																			BGl_flattenz00zz__r5_macro_4_3_syntaxz00
																			(BgL_nvarsz00_1405);
																		if (NULLP(BgL_ll1888z00_1414))
																			{	/* R5rs/syntax.scm 529 */
																				BgL_arg2478z00_1413 = BNIL;
																			}
																		else
																			{	/* R5rs/syntax.scm 529 */
																				obj_t BgL_head1890z00_1417;

																				{	/* R5rs/syntax.scm 529 */
																					obj_t BgL_arg2488z00_1434;

																					BgL_arg2488z00_1434 =
																						MAKE_PAIR(CAR(BgL_ll1888z00_1414),
																						CAR(BgL_ll1889z00_1415));
																					BgL_head1890z00_1417 =
																						MAKE_PAIR(BgL_arg2488z00_1434,
																						BNIL);
																				}
																				{	/* R5rs/syntax.scm 529 */
																					obj_t BgL_g1894z00_1418;

																					obj_t BgL_g1895z00_1419;

																					BgL_g1894z00_1418 =
																						CDR(BgL_ll1888z00_1414);
																					BgL_g1895z00_1419 =
																						CDR(BgL_ll1889z00_1415);
																					{
																						obj_t BgL_ll1888z00_2635;

																						obj_t BgL_ll1889z00_2636;

																						obj_t BgL_tail1891z00_2637;

																						BgL_ll1888z00_2635 =
																							BgL_g1894z00_1418;
																						BgL_ll1889z00_2636 =
																							BgL_g1895z00_1419;
																						BgL_tail1891z00_2637 =
																							BgL_head1890z00_1417;
																					BgL_zc3anonymousza32480ze3z83_2634:
																						if (NULLP(BgL_ll1888z00_2635))
																							{	/* R5rs/syntax.scm 529 */
																								BgL_arg2478z00_1413 =
																									BgL_head1890z00_1417;
																							}
																						else
																							{	/* R5rs/syntax.scm 529 */
																								obj_t BgL_newtail1892z00_2647;

																								{	/* R5rs/syntax.scm 529 */
																									obj_t BgL_arg2484z00_2648;

																									BgL_arg2484z00_2648 =
																										MAKE_PAIR(CAR
																										(BgL_ll1888z00_2635),
																										CAR(BgL_ll1889z00_2636));
																									BgL_newtail1892z00_2647 =
																										MAKE_PAIR
																										(BgL_arg2484z00_2648, BNIL);
																								}
																								SET_CDR(BgL_tail1891z00_2637,
																									BgL_newtail1892z00_2647);
																								{
																									obj_t BgL_tail1891z00_4718;

																									obj_t BgL_ll1889z00_4716;

																									obj_t BgL_ll1888z00_4714;

																									BgL_ll1888z00_4714 =
																										CDR(BgL_ll1888z00_2635);
																									BgL_ll1889z00_4716 =
																										CDR(BgL_ll1889z00_2636);
																									BgL_tail1891z00_4718 =
																										BgL_newtail1892z00_2647;
																									BgL_tail1891z00_2637 =
																										BgL_tail1891z00_4718;
																									BgL_ll1889z00_2636 =
																										BgL_ll1889z00_4716;
																									BgL_ll1888z00_2635 =
																										BgL_ll1888z00_4714;
																									goto
																										BgL_zc3anonymousza32480ze3z83_2634;
																								}
																							}
																					}
																				}
																			}
																	}
																	BgL_nenvz00_1406 =
																		bgl_append2(BgL_arg2478z00_1413,
																		BgL_envz00_38);
																}
																{	/* R5rs/syntax.scm 529 */

																	{	/* R5rs/syntax.scm 530 */
																		obj_t BgL_arg2469z00_1407;

																		obj_t BgL_arg2470z00_1408;

																		BgL_arg2469z00_1407 =
																			BGl_symbol3021z00zz__r5_macro_4_3_syntaxz00;
																		{	/* R5rs/syntax.scm 531 */
																			obj_t BgL_arg2471z00_1409;

																			BgL_arg2471z00_1409 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BGl_loopz00zz__r5_macro_4_3_syntaxz00
																				(BgL_nenvz00_1406, BgL_bodyz00_1166),
																				BNIL);
																			{	/* R5rs/syntax.scm 530 */
																				obj_t BgL_list2472z00_1410;

																				BgL_list2472z00_1410 =
																					MAKE_PAIR(BgL_arg2471z00_1409, BNIL);
																				BgL_arg2470z00_1408 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_nvarsz00_1405,
																					BgL_list2472z00_1410);
																			}
																		}
																		return
																			MAKE_PAIR(BgL_arg2469z00_1407,
																			BgL_arg2470z00_1408);
																	}
																}
															}
														}
													}
												else
													{	/* R5rs/syntax.scm 517 */
														return
															BGl_loopz00zz__r5_macro_4_3_syntaxz00
															(BgL_envz00_38, BgL_xz00_37);
													}
											}
										else
											{	/* R5rs/syntax.scm 517 */
												if (
													(CAR(BgL_xz00_37) ==
														BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00))
													{	/* R5rs/syntax.scm 517 */
														if (PAIRP(BgL_cdrzd21559zd2_1191))
															{	/* R5rs/syntax.scm 517 */
																BgL_bindingsz00_1168 =
																	CAR(BgL_cdrzd21559zd2_1191);
																BgL_bodyz00_1169 = CDR(BgL_cdrzd21559zd2_1191);
																{	/* R5rs/syntax.scm 533 */
																	obj_t BgL_nvarsz00_1438;

																	{	/* R5rs/syntax.scm 533 */
																		obj_t BgL_arg2521z00_1489;

																		if (NULLP(BgL_bindingsz00_1168))
																			{	/* R5rs/syntax.scm 533 */
																				BgL_arg2521z00_1489 = BNIL;
																			}
																		else
																			{	/* R5rs/syntax.scm 533 */
																				obj_t BgL_head1898z00_1492;

																				BgL_head1898z00_1492 =
																					MAKE_PAIR(CAR(CAR
																						(BgL_bindingsz00_1168)), BNIL);
																				{	/* R5rs/syntax.scm 533 */
																					obj_t BgL_g1901z00_1493;

																					BgL_g1901z00_1493 =
																						CDR(BgL_bindingsz00_1168);
																					{
																						obj_t BgL_l1896z00_2713;

																						obj_t BgL_tail1899z00_2714;

																						BgL_l1896z00_2713 =
																							BgL_g1901z00_1493;
																						BgL_tail1899z00_2714 =
																							BgL_head1898z00_1492;
																					BgL_zc3anonymousza32523ze3z83_2712:
																						if (NULLP(BgL_l1896z00_2713))
																							{	/* R5rs/syntax.scm 533 */
																								BgL_arg2521z00_1489 =
																									BgL_head1898z00_1492;
																							}
																						else
																							{	/* R5rs/syntax.scm 533 */
																								obj_t BgL_newtail1900z00_2722;

																								BgL_newtail1900z00_2722 =
																									MAKE_PAIR(CAR(CAR
																										(BgL_l1896z00_2713)), BNIL);
																								SET_CDR(BgL_tail1899z00_2714,
																									BgL_newtail1900z00_2722);
																								{
																									obj_t BgL_tail1899z00_4747;

																									obj_t BgL_l1896z00_4745;

																									BgL_l1896z00_4745 =
																										CDR(BgL_l1896z00_2713);
																									BgL_tail1899z00_4747 =
																										BgL_newtail1900z00_2722;
																									BgL_tail1899z00_2714 =
																										BgL_tail1899z00_4747;
																									BgL_l1896z00_2713 =
																										BgL_l1896z00_4745;
																									goto
																										BgL_zc3anonymousza32523ze3z83_2712;
																								}
																							}
																					}
																				}
																			}
																		BgL_nvarsz00_1438 =
																			BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																			(BgL_arg2521z00_1489);
																	}
																	{	/* R5rs/syntax.scm 533 */
																		obj_t BgL_nenvz00_1439;

																		{	/* R5rs/syntax.scm 534 */
																			obj_t BgL_arg2512z00_1469;

																			if (NULLP(BgL_bindingsz00_1168))
																				{	/* R5rs/syntax.scm 534 */
																					BgL_arg2512z00_1469 = BNIL;
																				}
																			else
																				{	/* R5rs/syntax.scm 534 */
																					obj_t BgL_head1904z00_1473;

																					BgL_head1904z00_1473 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_ll1902z00_2769;

																						obj_t BgL_ll1903z00_2770;

																						obj_t BgL_tail1905z00_2771;

																						BgL_ll1902z00_2769 =
																							BgL_bindingsz00_1168;
																						BgL_ll1903z00_2770 =
																							BgL_nvarsz00_1438;
																						BgL_tail1905z00_2771 =
																							BgL_head1904z00_1473;
																					BgL_zc3anonymousza32514ze3z83_2768:
																						if (NULLP(BgL_ll1902z00_2769))
																							{	/* R5rs/syntax.scm 534 */
																								BgL_arg2512z00_1469 =
																									CDR(BgL_head1904z00_1473);
																							}
																						else
																							{	/* R5rs/syntax.scm 534 */
																								obj_t BgL_newtail1906z00_2782;

																								{	/* R5rs/syntax.scm 534 */
																									obj_t BgL_arg2518z00_2783;

																									{	/* R5rs/syntax.scm 534 */
																										obj_t BgL_bz00_2785;

																										obj_t BgL_vz00_2786;

																										BgL_bz00_2785 =
																											CAR(BgL_ll1902z00_2769);
																										BgL_vz00_2786 =
																											CAR(BgL_ll1903z00_2770);
																										BgL_arg2518z00_2783 =
																											MAKE_PAIR(CAR
																											(BgL_bz00_2785),
																											BgL_vz00_2786);
																									}
																									BgL_newtail1906z00_2782 =
																										MAKE_PAIR
																										(BgL_arg2518z00_2783, BNIL);
																								}
																								SET_CDR(BgL_tail1905z00_2771,
																									BgL_newtail1906z00_2782);
																								{
																									obj_t BgL_tail1905z00_4765;

																									obj_t BgL_ll1903z00_4763;

																									obj_t BgL_ll1902z00_4761;

																									BgL_ll1902z00_4761 =
																										CDR(BgL_ll1902z00_2769);
																									BgL_ll1903z00_4763 =
																										CDR(BgL_ll1903z00_2770);
																									BgL_tail1905z00_4765 =
																										BgL_newtail1906z00_2782;
																									BgL_tail1905z00_2771 =
																										BgL_tail1905z00_4765;
																									BgL_ll1903z00_2770 =
																										BgL_ll1903z00_4763;
																									BgL_ll1902z00_2769 =
																										BgL_ll1902z00_4761;
																									goto
																										BgL_zc3anonymousza32514ze3z83_2768;
																								}
																							}
																					}
																				}
																			BgL_nenvz00_1439 =
																				bgl_append2(BgL_arg2512z00_1469,
																				BgL_envz00_38);
																		}
																		{	/* R5rs/syntax.scm 534 */

																			{	/* R5rs/syntax.scm 538 */
																				obj_t BgL_arg2493z00_1440;

																				obj_t BgL_arg2494z00_1441;

																				BgL_arg2493z00_1440 =
																					BGl_symbol2937z00zz__r5_macro_4_3_syntaxz00;
																				{	/* R5rs/syntax.scm 538 */
																					obj_t BgL_arg2495z00_1442;

																					obj_t BgL_arg2497z00_1443;

																					if (NULLP(BgL_bindingsz00_1168))
																						{	/* R5rs/syntax.scm 538 */
																							BgL_arg2495z00_1442 = BNIL;
																						}
																					else
																						{	/* R5rs/syntax.scm 538 */
																							obj_t BgL_head1910z00_1448;

																							BgL_head1910z00_1448 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_ll1908z00_1450;

																								obj_t BgL_ll1909z00_1451;

																								obj_t BgL_tail1911z00_1452;

																								BgL_ll1908z00_1450 =
																									BgL_bindingsz00_1168;
																								BgL_ll1909z00_1451 =
																									BgL_nvarsz00_1438;
																								BgL_tail1911z00_1452 =
																									BgL_head1910z00_1448;
																							BgL_zc3anonymousza32500ze3z83_1453:
																								if (NULLP
																									(BgL_ll1908z00_1450))
																									{	/* R5rs/syntax.scm 538 */
																										BgL_arg2495z00_1442 =
																											CDR(BgL_head1910z00_1448);
																									}
																								else
																									{	/* R5rs/syntax.scm 538 */
																										obj_t
																											BgL_newtail1912z00_1455;
																										{	/* R5rs/syntax.scm 538 */
																											obj_t BgL_arg2504z00_1458;

																											{	/* R5rs/syntax.scm 538 */
																												obj_t BgL_bz00_1460;

																												obj_t BgL_vz00_1461;

																												BgL_bz00_1460 =
																													CAR
																													(BgL_ll1908z00_1450);
																												BgL_vz00_1461 =
																													CAR
																													(BgL_ll1909z00_1451);
																												{	/* R5rs/syntax.scm 539 */
																													obj_t
																														BgL_arg2506z00_1462;
																													{	/* R5rs/syntax.scm 539 */
																														obj_t
																															BgL_arg2509z00_1465;
																														{	/* R5rs/syntax.scm 539 */
																															obj_t
																																BgL_pairz00_2851;
																															BgL_pairz00_2851 =
																																BgL_bz00_1460;
																															BgL_arg2509z00_1465
																																=
																																CAR(CDR
																																(BgL_pairz00_2851));
																														}
																														BgL_arg2506z00_1462
																															=
																															BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																															(BgL_arg2509z00_1465,
																															BgL_envz00_38);
																													}
																													{	/* R5rs/syntax.scm 539 */
																														obj_t
																															BgL_list2507z00_1463;
																														{	/* R5rs/syntax.scm 539 */
																															obj_t
																																BgL_arg2508z00_1464;
																															BgL_arg2508z00_1464
																																=
																																MAKE_PAIR
																																(BgL_arg2506z00_1462,
																																BNIL);
																															BgL_list2507z00_1463
																																=
																																MAKE_PAIR
																																(BgL_vz00_1461,
																																BgL_arg2508z00_1464);
																														}
																														BgL_arg2504z00_1458
																															=
																															BgL_list2507z00_1463;
																													}
																												}
																											}
																											BgL_newtail1912z00_1455 =
																												MAKE_PAIR
																												(BgL_arg2504z00_1458,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail1911z00_1452,
																											BgL_newtail1912z00_1455);
																										{
																											obj_t
																												BgL_tail1911z00_4786;
																											obj_t BgL_ll1909z00_4784;

																											obj_t BgL_ll1908z00_4782;

																											BgL_ll1908z00_4782 =
																												CDR(BgL_ll1908z00_1450);
																											BgL_ll1909z00_4784 =
																												CDR(BgL_ll1909z00_1451);
																											BgL_tail1911z00_4786 =
																												BgL_newtail1912z00_1455;
																											BgL_tail1911z00_1452 =
																												BgL_tail1911z00_4786;
																											BgL_ll1909z00_1451 =
																												BgL_ll1909z00_4784;
																											BgL_ll1908z00_1450 =
																												BgL_ll1908z00_4782;
																											goto
																												BgL_zc3anonymousza32500ze3z83_1453;
																										}
																									}
																							}
																						}
																					BgL_arg2497z00_1443 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_loopz00zz__r5_macro_4_3_syntaxz00
																						(BgL_nenvz00_1439,
																							BgL_bodyz00_1169), BNIL);
																					{	/* R5rs/syntax.scm 538 */
																						obj_t BgL_list2498z00_1444;

																						BgL_list2498z00_1444 =
																							MAKE_PAIR(BgL_arg2497z00_1443,
																							BNIL);
																						BgL_arg2494z00_1441 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2495z00_1442,
																							BgL_list2498z00_1444);
																					}
																				}
																				return
																					MAKE_PAIR(BgL_arg2493z00_1440,
																					BgL_arg2494z00_1441);
																			}
																		}
																	}
																}
															}
														else
															{	/* R5rs/syntax.scm 517 */
																return
																	BGl_loopz00zz__r5_macro_4_3_syntaxz00
																	(BgL_envz00_38, BgL_xz00_37);
															}
													}
												else
													{	/* R5rs/syntax.scm 517 */
														obj_t BgL_cdrzd21641zd2_1201;

														BgL_cdrzd21641zd2_1201 = CDR(BgL_xz00_37);
														if (
															(CAR(BgL_xz00_37) ==
																BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00))
															{	/* R5rs/syntax.scm 517 */
																if (PAIRP(BgL_cdrzd21641zd2_1201))
																	{	/* R5rs/syntax.scm 517 */
																		BgL_bindingsz00_1175 =
																			CAR(BgL_cdrzd21641zd2_1201);
																		BgL_bodyz00_1176 =
																			CDR(BgL_cdrzd21641zd2_1201);
																		{
																			obj_t BgL_bindingsz00_1584;

																			obj_t BgL_nbindingsz00_1585;

																			obj_t BgL_nenvz00_1586;

																			BgL_bindingsz00_1584 =
																				BgL_bindingsz00_1175;
																			BgL_nbindingsz00_1585 = BNIL;
																			BgL_nenvz00_1586 = BgL_envz00_38;
																		BgL_zc3anonymousza32575ze3z83_1587:
																			if (NULLP(BgL_bindingsz00_1584))
																				{	/* R5rs/syntax.scm 559 */
																					obj_t BgL_arg2577z00_1589;

																					obj_t BgL_arg2578z00_1590;

																					BgL_arg2577z00_1589 =
																						BGl_symbol3034z00zz__r5_macro_4_3_syntaxz00;
																					{	/* R5rs/syntax.scm 559 */
																						obj_t BgL_arg2579z00_1591;

																						obj_t BgL_arg2580z00_1592;

																						BgL_arg2579z00_1591 =
																							bgl_reverse
																							(BgL_nbindingsz00_1585);
																						BgL_arg2580z00_1592 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BGl_loopz00zz__r5_macro_4_3_syntaxz00
																							(BgL_nenvz00_1586,
																								BgL_bodyz00_1176), BNIL);
																						{	/* R5rs/syntax.scm 559 */
																							obj_t BgL_list2581z00_1593;

																							BgL_list2581z00_1593 =
																								MAKE_PAIR(BgL_arg2580z00_1592,
																								BNIL);
																							BgL_arg2578z00_1590 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2579z00_1591,
																								BgL_list2581z00_1593);
																						}
																					}
																					return
																						MAKE_PAIR(BgL_arg2577z00_1589,
																						BgL_arg2578z00_1590);
																				}
																			else
																				{	/* R5rs/syntax.scm 560 */
																					obj_t BgL_varz00_1596;

																					{	/* R5rs/syntax.scm 560 */
																						obj_t BgL_pairz00_3021;

																						BgL_pairz00_3021 =
																							BgL_bindingsz00_1584;
																						BgL_varz00_1596 =
																							CAR(CAR(BgL_pairz00_3021));
																					}
																					{	/* R5rs/syntax.scm 561 */
																						obj_t BgL_nvarz00_1598;

																						BgL_nvarz00_1598 =
																							BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																							(BgL_varz00_1596);
																						{	/* R5rs/syntax.scm 562 */
																							obj_t BgL_nenvz00_1599;

																							{	/* R5rs/syntax.scm 563 */
																								obj_t BgL_arg2590z00_1606;

																								BgL_arg2590z00_1606 =
																									MAKE_PAIR(BgL_varz00_1596,
																									BgL_nvarz00_1598);
																								BgL_nenvz00_1599 =
																									MAKE_PAIR(BgL_arg2590z00_1606,
																									BgL_envz00_38);
																							}
																							{	/* R5rs/syntax.scm 563 */

																								{	/* R5rs/syntax.scm 564 */
																									obj_t BgL_arg2584z00_1600;

																									obj_t BgL_arg2585z00_1601;

																									BgL_arg2584z00_1600 =
																										CDR(BgL_bindingsz00_1584);
																									{	/* R5rs/syntax.scm 565 */
																										obj_t BgL_arg2586z00_1602;

																										{	/* R5rs/syntax.scm 565 */
																											obj_t BgL_arg2587z00_1603;

																											BgL_arg2587z00_1603 =
																												BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																												(BgL_varz00_1596,
																												BgL_envz00_38);
																											{	/* R5rs/syntax.scm 565 */
																												obj_t
																													BgL_list2588z00_1604;
																												{	/* R5rs/syntax.scm 565 */
																													obj_t
																														BgL_arg2589z00_1605;
																													BgL_arg2589z00_1605 =
																														MAKE_PAIR
																														(BgL_arg2587z00_1603,
																														BNIL);
																													BgL_list2588z00_1604 =
																														MAKE_PAIR
																														(BgL_varz00_1596,
																														BgL_arg2589z00_1605);
																												}
																												BgL_arg2586z00_1602 =
																													BgL_list2588z00_1604;
																											}
																										}
																										BgL_arg2585z00_1601 =
																											MAKE_PAIR
																											(BgL_arg2586z00_1602,
																											BgL_nbindingsz00_1585);
																									}
																									{
																										obj_t BgL_nenvz00_4821;

																										obj_t BgL_nbindingsz00_4820;

																										obj_t BgL_bindingsz00_4819;

																										BgL_bindingsz00_4819 =
																											BgL_arg2584z00_1600;
																										BgL_nbindingsz00_4820 =
																											BgL_arg2585z00_1601;
																										BgL_nenvz00_4821 =
																											BgL_nenvz00_1599;
																										BgL_nenvz00_1586 =
																											BgL_nenvz00_4821;
																										BgL_nbindingsz00_1585 =
																											BgL_nbindingsz00_4820;
																										BgL_bindingsz00_1584 =
																											BgL_bindingsz00_4819;
																										goto
																											BgL_zc3anonymousza32575ze3z83_1587;
																									}
																								}
																							}
																						}
																					}
																				}
																		}
																	}
																else
																	{	/* R5rs/syntax.scm 517 */
																		return
																			BGl_loopz00zz__r5_macro_4_3_syntaxz00
																			(BgL_envz00_38, BgL_xz00_37);
																	}
															}
														else
															{	/* R5rs/syntax.scm 517 */
																if (
																	(CAR(BgL_xz00_37) ==
																		BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00))
																	{	/* R5rs/syntax.scm 517 */
																		if (PAIRP(BgL_cdrzd21641zd2_1201))
																			{	/* R5rs/syntax.scm 517 */
																				BgL_bindingsz00_1178 =
																					CAR(BgL_cdrzd21641zd2_1201);
																				BgL_bodyz00_1179 =
																					CDR(BgL_cdrzd21641zd2_1201);
																				{	/* R5rs/syntax.scm 568 */
																					obj_t BgL_nvarsz00_1608;

																					{	/* R5rs/syntax.scm 568 */
																						obj_t BgL_arg2618z00_1659;

																						if (NULLP(BgL_bindingsz00_1178))
																							{	/* R5rs/syntax.scm 568 */
																								BgL_arg2618z00_1659 = BNIL;
																							}
																						else
																							{	/* R5rs/syntax.scm 568 */
																								obj_t BgL_head1934z00_1662;

																								BgL_head1934z00_1662 =
																									MAKE_PAIR(CAR(CAR
																										(BgL_bindingsz00_1178)),
																									BNIL);
																								{	/* R5rs/syntax.scm 568 */
																									obj_t BgL_g1937z00_1663;

																									BgL_g1937z00_1663 =
																										CDR(BgL_bindingsz00_1178);
																									{
																										obj_t BgL_l1932z00_3041;

																										obj_t BgL_tail1935z00_3042;

																										BgL_l1932z00_3041 =
																											BgL_g1937z00_1663;
																										BgL_tail1935z00_3042 =
																											BgL_head1934z00_1662;
																									BgL_zc3anonymousza32620ze3z83_3040:
																										if (NULLP
																											(BgL_l1932z00_3041))
																											{	/* R5rs/syntax.scm 568 */
																												BgL_arg2618z00_1659 =
																													BgL_head1934z00_1662;
																											}
																										else
																											{	/* R5rs/syntax.scm 568 */
																												obj_t
																													BgL_newtail1936z00_3050;
																												BgL_newtail1936z00_3050
																													=
																													MAKE_PAIR(CAR(CAR
																														(BgL_l1932z00_3041)),
																													BNIL);
																												SET_CDR
																													(BgL_tail1935z00_3042,
																													BgL_newtail1936z00_3050);
																												{
																													obj_t
																														BgL_tail1935z00_4844;
																													obj_t
																														BgL_l1932z00_4842;
																													BgL_l1932z00_4842 =
																														CDR
																														(BgL_l1932z00_3041);
																													BgL_tail1935z00_4844 =
																														BgL_newtail1936z00_3050;
																													BgL_tail1935z00_3042 =
																														BgL_tail1935z00_4844;
																													BgL_l1932z00_3041 =
																														BgL_l1932z00_4842;
																													goto
																														BgL_zc3anonymousza32620ze3z83_3040;
																												}
																											}
																									}
																								}
																							}
																						BgL_nvarsz00_1608 =
																							BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																							(BgL_arg2618z00_1659);
																					}
																					{	/* R5rs/syntax.scm 568 */
																						obj_t BgL_nenvz00_1609;

																						{	/* R5rs/syntax.scm 569 */
																							obj_t BgL_arg2609z00_1639;

																							if (NULLP(BgL_bindingsz00_1178))
																								{	/* R5rs/syntax.scm 569 */
																									BgL_arg2609z00_1639 = BNIL;
																								}
																							else
																								{	/* R5rs/syntax.scm 569 */
																									obj_t BgL_head1940z00_1643;

																									BgL_head1940z00_1643 =
																										MAKE_PAIR(BNIL, BNIL);
																									{
																										obj_t BgL_ll1938z00_3097;

																										obj_t BgL_ll1939z00_3098;

																										obj_t BgL_tail1941z00_3099;

																										BgL_ll1938z00_3097 =
																											BgL_bindingsz00_1178;
																										BgL_ll1939z00_3098 =
																											BgL_nvarsz00_1608;
																										BgL_tail1941z00_3099 =
																											BgL_head1940z00_1643;
																									BgL_zc3anonymousza32611ze3z83_3096:
																										if (NULLP
																											(BgL_ll1938z00_3097))
																											{	/* R5rs/syntax.scm 569 */
																												BgL_arg2609z00_1639 =
																													CDR
																													(BgL_head1940z00_1643);
																											}
																										else
																											{	/* R5rs/syntax.scm 569 */
																												obj_t
																													BgL_newtail1942z00_3110;
																												{	/* R5rs/syntax.scm 569 */
																													obj_t
																														BgL_arg2615z00_3111;
																													{	/* R5rs/syntax.scm 569 */
																														obj_t BgL_bz00_3113;

																														obj_t BgL_vz00_3114;

																														BgL_bz00_3113 =
																															CAR
																															(BgL_ll1938z00_3097);
																														BgL_vz00_3114 =
																															CAR
																															(BgL_ll1939z00_3098);
																														BgL_arg2615z00_3111
																															=
																															MAKE_PAIR(CAR
																															(BgL_bz00_3113),
																															BgL_vz00_3114);
																													}
																													BgL_newtail1942z00_3110
																														=
																														MAKE_PAIR
																														(BgL_arg2615z00_3111,
																														BNIL);
																												}
																												SET_CDR
																													(BgL_tail1941z00_3099,
																													BgL_newtail1942z00_3110);
																												{
																													obj_t
																														BgL_tail1941z00_4862;
																													obj_t
																														BgL_ll1939z00_4860;
																													obj_t
																														BgL_ll1938z00_4858;
																													BgL_ll1938z00_4858 =
																														CDR
																														(BgL_ll1938z00_3097);
																													BgL_ll1939z00_4860 =
																														CDR
																														(BgL_ll1939z00_3098);
																													BgL_tail1941z00_4862 =
																														BgL_newtail1942z00_3110;
																													BgL_tail1941z00_3099 =
																														BgL_tail1941z00_4862;
																													BgL_ll1939z00_3098 =
																														BgL_ll1939z00_4860;
																													BgL_ll1938z00_3097 =
																														BgL_ll1938z00_4858;
																													goto
																														BgL_zc3anonymousza32611ze3z83_3096;
																												}
																											}
																									}
																								}
																							BgL_nenvz00_1609 =
																								bgl_append2(BgL_arg2609z00_1639,
																								BgL_envz00_38);
																						}
																						{	/* R5rs/syntax.scm 569 */

																							{	/* R5rs/syntax.scm 573 */
																								obj_t BgL_arg2591z00_1610;

																								obj_t BgL_arg2592z00_1611;

																								BgL_arg2591z00_1610 =
																									BGl_symbol3030z00zz__r5_macro_4_3_syntaxz00;
																								{	/* R5rs/syntax.scm 573 */
																									obj_t BgL_arg2593z00_1612;

																									obj_t BgL_arg2594z00_1613;

																									if (NULLP
																										(BgL_bindingsz00_1178))
																										{	/* R5rs/syntax.scm 573 */
																											BgL_arg2593z00_1612 =
																												BNIL;
																										}
																									else
																										{	/* R5rs/syntax.scm 573 */
																											obj_t
																												BgL_head1946z00_1618;
																											BgL_head1946z00_1618 =
																												MAKE_PAIR(BNIL, BNIL);
																											{
																												obj_t
																													BgL_ll1944z00_1620;
																												obj_t
																													BgL_ll1945z00_1621;
																												obj_t
																													BgL_tail1947z00_1622;
																												BgL_ll1944z00_1620 =
																													BgL_bindingsz00_1178;
																												BgL_ll1945z00_1621 =
																													BgL_nvarsz00_1608;
																												BgL_tail1947z00_1622 =
																													BgL_head1946z00_1618;
																											BgL_zc3anonymousza32597ze3z83_1623:
																												if (NULLP
																													(BgL_ll1944z00_1620))
																													{	/* R5rs/syntax.scm 573 */
																														BgL_arg2593z00_1612
																															=
																															CDR
																															(BgL_head1946z00_1618);
																													}
																												else
																													{	/* R5rs/syntax.scm 573 */
																														obj_t
																															BgL_newtail1948z00_1625;
																														{	/* R5rs/syntax.scm 573 */
																															obj_t
																																BgL_arg2601z00_1628;
																															{	/* R5rs/syntax.scm 573 */
																																obj_t
																																	BgL_bz00_1630;
																																obj_t
																																	BgL_vz00_1631;
																																BgL_bz00_1630 =
																																	CAR
																																	(BgL_ll1944z00_1620);
																																BgL_vz00_1631 =
																																	CAR
																																	(BgL_ll1945z00_1621);
																																{	/* R5rs/syntax.scm 574 */
																																	obj_t
																																		BgL_arg2603z00_1632;
																																	{	/* R5rs/syntax.scm 574 */
																																		obj_t
																																			BgL_arg2606z00_1635;
																																		{	/* R5rs/syntax.scm 574 */
																																			obj_t
																																				BgL_pairz00_3179;
																																			BgL_pairz00_3179
																																				=
																																				BgL_bz00_1630;
																																			BgL_arg2606z00_1635
																																				=
																																				CAR(CDR
																																				(BgL_pairz00_3179));
																																		}
																																		BgL_arg2603z00_1632
																																			=
																																			BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00
																																			(BgL_arg2606z00_1635,
																																			BgL_nenvz00_1609);
																																	}
																																	{	/* R5rs/syntax.scm 574 */
																																		obj_t
																																			BgL_list2604z00_1633;
																																		{	/* R5rs/syntax.scm 574 */
																																			obj_t
																																				BgL_arg2605z00_1634;
																																			BgL_arg2605z00_1634
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2603z00_1632,
																																				BNIL);
																																			BgL_list2604z00_1633
																																				=
																																				MAKE_PAIR
																																				(BgL_vz00_1631,
																																				BgL_arg2605z00_1634);
																																		}
																																		BgL_arg2601z00_1628
																																			=
																																			BgL_list2604z00_1633;
																																	}
																																}
																															}
																															BgL_newtail1948z00_1625
																																=
																																MAKE_PAIR
																																(BgL_arg2601z00_1628,
																																BNIL);
																														}
																														SET_CDR
																															(BgL_tail1947z00_1622,
																															BgL_newtail1948z00_1625);
																														{
																															obj_t
																																BgL_tail1947z00_4883;
																															obj_t
																																BgL_ll1945z00_4881;
																															obj_t
																																BgL_ll1944z00_4879;
																															BgL_ll1944z00_4879
																																=
																																CDR
																																(BgL_ll1944z00_1620);
																															BgL_ll1945z00_4881
																																=
																																CDR
																																(BgL_ll1945z00_1621);
																															BgL_tail1947z00_4883
																																=
																																BgL_newtail1948z00_1625;
																															BgL_tail1947z00_1622
																																=
																																BgL_tail1947z00_4883;
																															BgL_ll1945z00_1621
																																=
																																BgL_ll1945z00_4881;
																															BgL_ll1944z00_1620
																																=
																																BgL_ll1944z00_4879;
																															goto
																																BgL_zc3anonymousza32597ze3z83_1623;
																														}
																													}
																											}
																										}
																									BgL_arg2594z00_1613 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BGl_loopz00zz__r5_macro_4_3_syntaxz00
																										(BgL_nenvz00_1609,
																											BgL_bodyz00_1179), BNIL);
																									{	/* R5rs/syntax.scm 573 */
																										obj_t BgL_list2595z00_1614;

																										BgL_list2595z00_1614 =
																											MAKE_PAIR
																											(BgL_arg2594z00_1613,
																											BNIL);
																										BgL_arg2592z00_1611 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2593z00_1612,
																											BgL_list2595z00_1614);
																									}
																								}
																								return
																									MAKE_PAIR(BgL_arg2591z00_1610,
																									BgL_arg2592z00_1611);
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* R5rs/syntax.scm 517 */
																				return
																					BGl_loopz00zz__r5_macro_4_3_syntaxz00
																					(BgL_envz00_38, BgL_xz00_37);
																			}
																	}
																else
																	{	/* R5rs/syntax.scm 517 */
																		obj_t BgL_cdrzd21679zd2_1211;

																		BgL_cdrzd21679zd2_1211 = CDR(BgL_xz00_37);
																		if (
																			(CAR(BgL_xz00_37) ==
																				BGl_symbol3154z00zz__r5_macro_4_3_syntaxz00))
																			{	/* R5rs/syntax.scm 517 */
																				if (PAIRP(BgL_cdrzd21679zd2_1211))
																					{	/* R5rs/syntax.scm 517 */
																						obj_t BgL_carzd21682zd2_1214;

																						BgL_carzd21682zd2_1214 =
																							CAR(BgL_cdrzd21679zd2_1211);
																						if (PAIRP(BgL_carzd21682zd2_1214))
																							{	/* R5rs/syntax.scm 517 */
																								if (NULLP(CDR
																										(BgL_carzd21682zd2_1214)))
																									{	/* R5rs/syntax.scm 517 */
																										BgL_varz00_1181 =
																											CAR
																											(BgL_carzd21682zd2_1214);
																										BgL_bodyz00_1182 =
																											CDR
																											(BgL_cdrzd21679zd2_1211);
																										{	/* R5rs/syntax.scm 578 */
																											obj_t BgL_nvarz00_1678;

																											BgL_nvarz00_1678 =
																												BGl_genvarsz00zz__r5_macro_4_3_syntaxz00
																												(BgL_varz00_1181);
																											{	/* R5rs/syntax.scm 578 */
																												obj_t BgL_nenvz00_1679;

																												{	/* R5rs/syntax.scm 579 */
																													obj_t
																														BgL_arg2636z00_1687;
																													BgL_arg2636z00_1687 =
																														MAKE_PAIR
																														(BgL_varz00_1181,
																														BgL_nvarz00_1678);
																													BgL_nenvz00_1679 =
																														MAKE_PAIR
																														(BgL_arg2636z00_1687,
																														BgL_envz00_38);
																												}
																												{	/* R5rs/syntax.scm 579 */

																													{	/* R5rs/syntax.scm 580 */
																														obj_t
																															BgL_arg2629z00_1680;
																														obj_t
																															BgL_arg2630z00_1681;
																														BgL_arg2629z00_1680
																															=
																															BGl_symbol3154z00zz__r5_macro_4_3_syntaxz00;
																														{	/* R5rs/syntax.scm 580 */
																															obj_t
																																BgL_arg2631z00_1682;
																															obj_t
																																BgL_arg2632z00_1683;
																															BgL_arg2631z00_1682
																																=
																																MAKE_PAIR
																																(BgL_nvarz00_1678,
																																BNIL);
																															BgL_arg2632z00_1683
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BGl_loopz00zz__r5_macro_4_3_syntaxz00
																																(BgL_nenvz00_1679,
																																	BgL_bodyz00_1182),
																																BNIL);
																															{	/* R5rs/syntax.scm 580 */
																																obj_t
																																	BgL_list2633z00_1684;
																																BgL_list2633z00_1684
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2632z00_1683,
																																	BNIL);
																																BgL_arg2630z00_1681
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2631z00_1682,
																																	BgL_list2633z00_1684);
																															}
																														}
																														return
																															MAKE_PAIR
																															(BgL_arg2629z00_1680,
																															BgL_arg2630z00_1681);
																													}
																												}
																											}
																										}
																									}
																								else
																									{	/* R5rs/syntax.scm 517 */
																										return
																											BGl_loopz00zz__r5_macro_4_3_syntaxz00
																											(BgL_envz00_38,
																											BgL_xz00_37);
																									}
																							}
																						else
																							{	/* R5rs/syntax.scm 517 */
																								return
																									BGl_loopz00zz__r5_macro_4_3_syntaxz00
																									(BgL_envz00_38, BgL_xz00_37);
																							}
																					}
																				else
																					{	/* R5rs/syntax.scm 517 */
																						return
																							BGl_loopz00zz__r5_macro_4_3_syntaxz00
																							(BgL_envz00_38, BgL_xz00_37);
																					}
																			}
																		else
																			{	/* R5rs/syntax.scm 517 */
																				return
																					BGl_loopz00zz__r5_macro_4_3_syntaxz00
																					(BgL_envz00_38, BgL_xz00_37);
																			}
																	}
															}
													}
											}
									}
							}
						else
							{	/* R5rs/syntax.scm 517 */
								return BgL_xz00_37;
							}
					}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3463,
		obj_t BgL_xz00_1689)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 590 */
			if (PAIRP(BgL_xz00_1689))
				{	/* R5rs/syntax.scm 592 */
					return
						MAKE_PAIR(BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(CAR
							(BgL_xz00_1689), BgL_envz00_3463),
						BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_3463,
							CDR(BgL_xz00_1689)));
				}
			else
				{	/* R5rs/syntax.scm 592 */
					if (NULLP(BgL_xz00_1689))
						{	/* R5rs/syntax.scm 594 */
							return BNIL;
						}
					else
						{	/* R5rs/syntax.scm 594 */
							return
								BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_1689,
								BgL_envz00_3463);
						}
				}
		}
	}



/* flatten */
	obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_41)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 602 */
			if (PAIRP(BgL_lz00_41))
				{	/* R5rs/syntax.scm 604 */
					return
						MAKE_PAIR(CAR(BgL_lz00_41),
						BGl_flattenz00zz__r5_macro_4_3_syntaxz00(CDR(BgL_lz00_41)));
				}
			else
				{	/* R5rs/syntax.scm 604 */
					if (NULLP(BgL_lz00_41))
						{	/* R5rs/syntax.scm 605 */
							return BgL_lz00_41;
						}
					else
						{	/* R5rs/syntax.scm 606 */
							obj_t BgL_list2649z00_1703;

							BgL_list2649z00_1703 = MAKE_PAIR(BgL_lz00_41, BNIL);
							return BgL_list2649z00_1703;
						}
				}
		}
	}



/* genvars */
	obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_42)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 611 */
			if (PAIRP(BgL_lz00_42))
				{	/* R5rs/syntax.scm 621 */
					return
						MAKE_PAIR(BGl_gennamez00zz__r5_macro_4_3_syntaxz00(CAR
							(BgL_lz00_42)),
						BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(CDR(BgL_lz00_42)));
				}
			else
				{	/* R5rs/syntax.scm 621 */
					if (NULLP(BgL_lz00_42))
						{	/* R5rs/syntax.scm 622 */
							return BgL_lz00_42;
						}
					else
						{	/* R5rs/syntax.scm 622 */
							return BGl_gennamez00zz__r5_macro_4_3_syntaxz00(BgL_lz00_42);
						}
				}
		}
	}



/* genname */
	obj_t BGl_gennamez00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_1711)
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 619 */
			{

				if (SYMBOLP(BgL_lz00_1711))
					{	/* R5rs/syntax.scm 619 */
						{	/* R5rs/syntax.scm 615 */
							bool_t BgL_testz00_4950;

							{	/* R5rs/syntax.scm 615 */
								obj_t BgL_sz00_3208;

								{	/* R5rs/syntax.scm 615 */
									obj_t BgL_res2871z00_3211;

									{	/* R5rs/syntax.scm 615 */
										obj_t BgL_symbolz00_3209;

										BgL_symbolz00_3209 = BgL_lz00_1711;
										{	/* R5rs/syntax.scm 615 */
											obj_t BgL_arg2769z00_3210;

											BgL_arg2769z00_3210 =
												SYMBOL_TO_STRING(BgL_symbolz00_3209);
											BgL_res2871z00_3211 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2769z00_3210);
										}
									}
									BgL_sz00_3208 = BgL_res2871z00_3211;
								}
								BgL_testz00_4950 =
									bigloo_strcmp_at(BgL_sz00_3208,
									BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00,
									((long) 0));
							}
							if (BgL_testz00_4950)
								{	/* R5rs/syntax.scm 615 */
									return
										BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00
										(BgL_lz00_1711);
								}
							else
								{	/* R5rs/syntax.scm 615 */
									return BGl_gensymz00zz__r4_symbols_6_4z00(BgL_lz00_1711);
								}
						}
					}
				else
					{	/* R5rs/syntax.scm 619 */

						{	/* R5rs/syntax.scm 619 */

							return BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00()
	{
		AN_OBJECT;
		{	/* R5rs/syntax.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3156z00zz__r5_macro_4_3_syntaxz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3156z00zz__r5_macro_4_3_syntaxz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3156z00zz__r5_macro_4_3_syntaxz00));
		}
	}

#ifdef __cplusplus
}
#endif
