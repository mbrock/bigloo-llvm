/*===========================================================================*/
/*   (Ieee/pairlist.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/pairlist.scm -indent -o objs/obj_s/Ieee/pairlist.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol3060z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2874z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__listz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2877z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2878z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2879z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2882z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol3071z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2971z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2883z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2884z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2885z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2888z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3000z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__appendz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2902z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2892z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3003z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2903z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3004z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2982z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2904z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3005z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2905z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3006z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2906z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2896z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3085z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3007z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2897z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3008z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2898z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3009z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2910z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2909z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2899z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2911z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3090z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3012z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__consz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3013z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3014z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2914z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3015z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2915z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3016z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2916z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3017z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2917z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3018z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2918z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2920z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2919z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol3108z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3021z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL long bgl_list_length(obj_t);
static obj_t BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3099z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3022z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3023z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2923z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3024z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2924z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2925z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3114z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3026z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2926z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2927z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3116z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2928z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3030z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3029z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2929z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3031z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3032z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2932z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3033z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2933z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2934z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3123z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2935z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3036z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3037z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2937z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3038z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2940z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3128z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3041z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2941z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3042z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2942z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3043z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2943z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3044z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2944z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3045z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3135z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2947z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3048z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2948z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__reversez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3050z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3049z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2949z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3051z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3052z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2952z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3053z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2953z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3054z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2954z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3055z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2955z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3056z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2956z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3057z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3058z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3059z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2960z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2959z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2961z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3062z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2962z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3151z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3063z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2963z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3064z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2964z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3065z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2965z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_list3066z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2966z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2967z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2968z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3070z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2970z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2969z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2973z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3074z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2974z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3075z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2975z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, long);
static obj_t BGl_symbol3164z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3076z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2976z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_reverse(obj_t);
static obj_t BGl_list3077z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2977z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3080z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3081z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2981z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3169z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3082z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3171z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3083z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3084z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3173z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2985z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2986z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3087z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2987z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3088z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2988z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3089z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3101z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2991z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3102z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3092z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2992z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3181z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3103z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3093z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2993z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3104z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3094z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2994z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3183z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3105z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3095z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2995z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3106z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3096z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3107z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3097z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3098z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2998z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3110z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2999z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3111z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3112z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3113z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3115z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3194z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3118z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3120z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3119z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3198z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3121z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3122z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3125z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3126z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3127z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3130z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3131z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3132z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3133z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3134z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3137z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3138z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3140z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3139z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3141z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3142z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3143z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3144z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3145z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3147z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3150z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3149z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list3153z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3154z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__lengthz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3155z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3156z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3157z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__econsz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3163z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3168z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_list3180z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__findz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, long, obj_t);
static obj_t BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_remq(obj_t, obj_t);
static obj_t BGl__assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_loopz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_recurz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__caarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
static obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2726z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2737z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2739z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2741z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
static obj_t BGl__cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2747z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2750z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__iotaz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2760z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_append2(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2791z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
static obj_t BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2796z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2820z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2732z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2825z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2746z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2836z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2749z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2838z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__remqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2757z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2847z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2852z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2767z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2770z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2773z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2774z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2779z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl__carz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2782z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2785z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol2875z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2788z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2800z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2790z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2789z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2880z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2802z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2803z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2793z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2804z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2794z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2805z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2795z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2808z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2798z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2799z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2811z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2812z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3001z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2813z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2893z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2816z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2907z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2819z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3010z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2822z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2823z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2912z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2824z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
static obj_t BGl_list2827z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2828z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__cerz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list2831z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3019z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2921z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2834z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2835z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__reducez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3025z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2837z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3027z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2840z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2841z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2930z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2844z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_remq_bang(obj_t, obj_t);
static obj_t BGl_list2845z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3034z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2846z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2936z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2850z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2849z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2938z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2851z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__takez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3039z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_list_ref(obj_t, long);
static obj_t BGl_list2854z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_list2855z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2856z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2857z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol3046z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2858z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
static obj_t BGl_list2861z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2950z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2862z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2863z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list2864z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2865z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2868z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2870z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2869z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl_list2871z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
static obj_t BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__findza700za7za7__r4_p3205za7, BGl__findz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2997z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2997za700za7za7_3206za7, "head1166", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caadarza700za7za7__r43207za7, BGl__caadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3109z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3109za700za7za7_3208za7, "g1181", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2splitz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2splitza7123209z00, va_generic_entry, BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string3117z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3117za700za7za7_3210za7, "tail1179", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__appendza700za7za7__r43211za7, va_generic_entry, BGl__appendz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3124z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3124za700za7za7_3212za7, "newtail1180", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cddrza700za7za7__r4_p3213za7, BGl__cddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remqz12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl__remqza712za712za7za7__r3214z00, BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3129z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3129za700za7za7_3215za7, "arg1640", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdarza700za7za7__r4_p3216za7, BGl__cdarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3136z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3136za700za7za7_3217za7, "arg1643", 7 );
DEFINE_STRING( BGl_string3152z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3152za700za7za7_3218za7, "arg1639", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caaadrza700za7za7__r43219za7, BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cddddrza700za7za7__r43220za7, BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caaaarza700za7za7__r43221za7, BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3158z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3158za700za7za7_3222za7, "<anonymous:1624>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdddarza700za7za7__r43223za7, BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3160z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3160za700za7za7_3224za7, "find", 4 );
DEFINE_STRING( BGl_string3159z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3159za700za7za7_3225za7, "_any?", 5 );
DEFINE_STRING( BGl_string3161z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3161za700za7za7_3226za7, "_find", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza700za7za7__r4_p3227za7, va_generic_entry, BGl__listz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3162z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3162za700za7za7_3228za7, "lp:Wrong number of arguments", 28 );
DEFINE_STRING( BGl_string3165z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3165za700za7za7_3229za7, "arg1659", 7 );
DEFINE_STRING( BGl_string3166z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3166za700za7za7_3230za7, "_find-tail", 10 );
DEFINE_STRING( BGl_string3167z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3167za700za7za7_3231za7, "reduce", 6 );
DEFINE_STRING( BGl_string3170z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3170za700za7za7_3232za7, "f", 1 );
DEFINE_STRING( BGl_string3172z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3172za700za7za7_3233za7, "arg1666", 7 );
DEFINE_STRING( BGl_string3174z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3174za700za7za7_3234za7, "ans", 3 );
DEFINE_STRING( BGl_string3175z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3175za700za7za7_3235za7, "_reduce", 7 );
DEFINE_STRING( BGl_string3176z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3176za700za7za7_3236za7, "make-list", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cadrza700za7za7__r4_p3237za7, BGl__cadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__nullza7f3za7f3za7za7__r3238z00, BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3177z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3177za700za7za7_3239za7, "_make-list", 10 );
DEFINE_STRING( BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3178za700za7za7_3240za7, "int", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2cerz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__setza7d2cerza712za7c03241za7, BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3179z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3179za700za7za7_3242za7, "walk:Wrong number of arguments", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eappendzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__eappendza700za7za7__r3243za7, va_generic_entry, BGl__eappendz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3182z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3182za700za7za7_3244za7, "init-proc", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caarza700za7za7__r4_p3245za7, BGl__caarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_treezd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__treeza7d2copyza7d2za73246za7, BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3184z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3184za700za7za7_3247za7, "i", 1 );
DEFINE_STRING( BGl_string3185z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3185za700za7za7_3248za7, "list-tabulate", 13 );
DEFINE_STRING( BGl_string3186z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3186za700za7za7_3249za7, "_list-tabulate", 14 );
DEFINE_STRING( BGl_string3187z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3187za700za7za7_3250za7, "_list-split", 11 );
DEFINE_STRING( BGl_string3188z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3188za700za7za7_3251za7, "_list-split!", 12 );
DEFINE_STRING( BGl_string3200z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3200za700za7za7_3252za7, "_delete-duplicates!", 19 );
DEFINE_STRING( BGl_string3190z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3190za700za7za7_3253za7, "_iota", 5 );
DEFINE_STRING( BGl_string3189z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3189za700za7za7_3254za7, "iota", 4 );
DEFINE_STRING( BGl_string3201z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3201za700za7za7_3255za7, "recur", 5 );
DEFINE_STRING( BGl_string3191z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3191za700za7za7_3256za7, "list-copy", 9 );
DEFINE_STRING( BGl_string3202z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3202za700za7za7_3257za7, "__r4_pairs_and_lists_6_3", 24 );
DEFINE_STRING( BGl_string3192z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3192za700za7za7_3258za7, "_list-copy", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_econszd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__econsza700za7za7__r4_3259za7, BGl__econsz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memberzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__memberza700za7za7__r43260za7, BGl__memberz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3193z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3193za700za7za7_3261za7, "tree-copy", 9 );
DEFINE_STRING( BGl_string3195z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3195za700za7za7_3262za7, "delete-duplicates", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2cdrz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__setza7d2cdrza712za7c03263za7, BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3196z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3196za700za7za7_3264za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3197z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3197za700za7za7_3265za7, "_delete-duplicates", 18 );
DEFINE_STRING( BGl_string3199z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3199za700za7za7_3266za7, "delete-duplicates!", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdrza700za7za7__r4_pa3267za7, BGl__cdrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cddadrza700za7za7__r43268za7, BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__carza700za7za7__r4_pa3269za7, BGl__carz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cddaarza700za7za7__r43270za7, BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cadddrza700za7za7__r43271za7, BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__remqza700za7za7__r4_p3272za7, BGl__remqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caddarza700za7za7__r43273za7, BGl__caddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pairzd2orzd2nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__pairza7d2orza7d2nul3274z00, BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_anyzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__anyza700za7za7__r4_pa3275za7, va_generic_entry, BGl__anyz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2duplicatesz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza7d2duplic3276za7, opt_generic_entry, BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2carz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__setza7d2carza712za7c03277za7, BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__assqza700za7za7__r4_p3278za7, BGl__assqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cadadrza700za7za7__r43279za7, BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cadaarza700za7za7__r43280za7, BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletez12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza712za712za7za7_3281z00, opt_generic_entry, BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assvzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__assvza700za7za7__r4_p3282za7, BGl__assvz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_takezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__takeza700za7za7__r4_p3283za7, BGl__takez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dropzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__dropza700za7za7__r4_p3284za7, BGl__dropz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lastzd2pairzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__lastza7d2pairza7d2za73285za7, BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_everyzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__everyza7f3za7f3za7za7__3286z00, va_generic_entry, BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2618za700za7za7_3287za7, "/tmp/bigloo/runtime/Ieee/pairlist.scm", 37 );
DEFINE_STRING( BGl_string2619z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2619za700za7za7_3288za7, "_car", 4 );
DEFINE_STRING( BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2620za700za7za7_3289za7, "pair", 4 );
DEFINE_STRING( BGl_string2621z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2621za700za7za7_3290za7, "_cdr", 4 );
DEFINE_STRING( BGl_string2622z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2622za700za7za7_3291za7, "_cer", 4 );
DEFINE_STRING( BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2623za700za7za7_3292za7, "epair", 5 );
DEFINE_STRING( BGl_string2624z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2624za700za7za7_3293za7, "caar", 4 );
DEFINE_STRING( BGl_string2625z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2625za700za7za7_3294za7, "_caar", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendz12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl__appendza712za712za7za7_3295z00, va_generic_entry, BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2626z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2626za700za7za7_3296za7, "cadr", 4 );
DEFINE_STRING( BGl_string2627z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2627za700za7za7_3297za7, "_cadr", 5 );
DEFINE_STRING( BGl_string2628z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2628za700za7za7_3298za7, "cdar", 4 );
DEFINE_STRING( BGl_string2629z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2629za700za7za7_3299za7, "_cdar", 5 );
DEFINE_STRING( BGl_string2630z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2630za700za7za7_3300za7, "cddr", 4 );
DEFINE_STRING( BGl_string2631z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2631za700za7za7_3301za7, "_cddr", 5 );
DEFINE_STRING( BGl_string2632z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2632za700za7za7_3302za7, "caaar", 5 );
DEFINE_STRING( BGl_string2633z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2633za700za7za7_3303za7, "_caaar", 6 );
DEFINE_STRING( BGl_string2634z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2634za700za7za7_3304za7, "caadr", 5 );
DEFINE_STRING( BGl_string2635z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2635za700za7za7_3305za7, "_caadr", 6 );
DEFINE_STRING( BGl_string2636z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2636za700za7za7_3306za7, "cadar", 5 );
DEFINE_STRING( BGl_string2637z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2637za700za7za7_3307za7, "_cadar", 6 );
DEFINE_STRING( BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2638za700za7za7_3308za7, "caddr", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2splitzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2splitza7d23309z00, va_generic_entry, BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string2639z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2639za700za7za7_3310za7, "_caddr", 6 );
DEFINE_STRING( BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2640za700za7za7_3311za7, "cdaar", 5 );
DEFINE_STRING( BGl_string2641z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2641za700za7za7_3312za7, "_cdaar", 6 );
DEFINE_STRING( BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2642za700za7za7_3313za7, "cddar", 5 );
DEFINE_STRING( BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2643za700za7za7_3314za7, "_cddar", 6 );
DEFINE_STRING( BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2644za700za7za7_3315za7, "cdadr", 5 );
DEFINE_STRING( BGl_string2645z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2645za700za7za7_3316za7, "_cdadr", 6 );
DEFINE_STRING( BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2646za700za7za7_3317za7, "cdddr", 5 );
DEFINE_STRING( BGl_string2647z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2647za700za7za7_3318za7, "_cdddr", 6 );
DEFINE_STRING( BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2648za700za7za7_3319za7, "caaaar", 6 );
DEFINE_STRING( BGl_string2649z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2649za700za7za7_3320za7, "_caaaar", 7 );
DEFINE_STRING( BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2650za700za7za7_3321za7, "caaadr", 6 );
DEFINE_STRING( BGl_string2651z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2651za700za7za7_3322za7, "_caaadr", 7 );
DEFINE_STRING( BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2652za700za7za7_3323za7, "caadar", 6 );
DEFINE_STRING( BGl_string2653z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2653za700za7za7_3324za7, "_caadar", 7 );
DEFINE_STRING( BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2654za700za7za7_3325za7, "cadaar", 6 );
DEFINE_STRING( BGl_string2655z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2655za700za7za7_3326za7, "_cadaar", 7 );
DEFINE_STRING( BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2656za700za7za7_3327za7, "cdaaar", 6 );
DEFINE_STRING( BGl_string2657z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2657za700za7za7_3328za7, "_cdaaar", 7 );
DEFINE_STRING( BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2658za700za7za7_3329za7, "caaddr", 6 );
DEFINE_STRING( BGl_string2659z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2659za700za7za7_3330za7, "_caaddr", 7 );
DEFINE_STRING( BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2660za700za7za7_3331za7, "caddar", 6 );
DEFINE_STRING( BGl_string2661z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2661za700za7za7_3332za7, "_caddar", 7 );
DEFINE_STRING( BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2662za700za7za7_3333za7, "cadadr", 6 );
DEFINE_STRING( BGl_string2663z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2663za700za7za7_3334za7, "_cadadr", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7f3za7f3za7za7__r3335z00, BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2664za700za7za7_3336za7, "cadddr", 6 );
DEFINE_STRING( BGl_string2665z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2665za700za7za7_3337za7, "_cadddr", 7 );
DEFINE_STRING( BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2666za700za7za7_3338za7, "cdaadr", 6 );
DEFINE_STRING( BGl_string2667z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2667za700za7za7_3339za7, "_cdaadr", 7 );
DEFINE_STRING( BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2668za700za7za7_3340za7, "cdaddr", 6 );
DEFINE_STRING( BGl_string2669z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2669za700za7za7_3341za7, "_cdaddr", 7 );
DEFINE_STRING( BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2670za700za7za7_3342za7, "cddaar", 6 );
DEFINE_STRING( BGl_string2671z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2671za700za7za7_3343za7, "_cddaar", 7 );
DEFINE_STRING( BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2672za700za7za7_3344za7, "cddadr", 6 );
DEFINE_STRING( BGl_string2673z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2673za700za7za7_3345za7, "_cddadr", 7 );
DEFINE_STRING( BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2674za700za7za7_3346za7, "cdadar", 6 );
DEFINE_STRING( BGl_string2675z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2675za700za7za7_3347za7, "_cdadar", 7 );
DEFINE_STRING( BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2676za700za7za7_3348za7, "cdddar", 6 );
DEFINE_STRING( BGl_string2677z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2677za700za7za7_3349za7, "_cdddar", 7 );
DEFINE_STRING( BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2678za700za7za7_3350za7, "cddddr", 6 );
DEFINE_STRING( BGl_string2679z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2679za700za7za7_3351za7, "_cddddr", 7 );
DEFINE_STRING( BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2680za700za7za7_3352za7, "_set-car!", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cerzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cerza700za7za7__r4_pa3353za7, BGl__cerz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2681z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2681za700za7za7_3354za7, "_set-cdr!", 9 );
DEFINE_STRING( BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2682za700za7za7_3355za7, "_set-cer!", 9 );
DEFINE_STRING( BGl_string2683z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2683za700za7za7_3356za7, "list", 4 );
DEFINE_STRING( BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2684za700za7za7_3357za7, "pair-nil", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2setz12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2setza712za7c3358za7, BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2685z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2685za700za7za7_3359za7, "l2", 2 );
DEFINE_STRING( BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2686za700za7za7_3360za7, "loop", 4 );
DEFINE_STRING( BGl_string2687z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2687za700za7za7_3361za7, "_append-2", 9 );
DEFINE_STRING( BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2688za700za7za7_3362za7, "eappend-2", 9 );
DEFINE_STRING( BGl_string2689z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2689za700za7za7_3363za7, "_eappend-2", 10 );
DEFINE_STRING( BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2690za700za7za7_3364za7, "append-list''", 13 );
DEFINE_STRING( BGl_string2700z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2700za700za7za7_3365za7, "_length", 7 );
DEFINE_STRING( BGl_string2691z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2691za700za7za7_3366za7, "case_else1094", 13 );
DEFINE_STRING( BGl_string2701z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2701za700za7za7_3367za7, "reverse", 7 );
DEFINE_STRING( BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2692za700za7za7_3368za7, "append-list'", 12 );
DEFINE_STRING( BGl_string2702z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2702za700za7za7_3369za7, "_reverse", 8 );
DEFINE_STRING( BGl_string2693z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2693za700za7za7_3370za7, "case_else1096", 13 );
DEFINE_STRING( BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2703za700za7za7_3371za7, "ereverse", 8 );
DEFINE_STRING( BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2694za700za7za7_3372za7, "append!", 7 );
DEFINE_STRING( BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2704za700za7za7_3373za7, "_ereverse", 9 );
DEFINE_STRING( BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2695za700za7za7_3374za7, "append-list", 11 );
DEFINE_STRING( BGl_string2705z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2705za700za7za7_3375za7, "_take", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memqzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__memqza700za7za7__r4_p3376za7, BGl__memqz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2696za700za7za7_3377za7, "case_else1098", 13 );
DEFINE_STRING( BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2706za700za7za7_3378za7, "long", 4 );
DEFINE_STRING( BGl_string2697z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2697za700za7za7_3379za7, "append-2!", 9 );
DEFINE_STRING( BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2707za700za7za7_3380za7, "drop", 4 );
DEFINE_STRING( BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2698za700za7za7_3381za7, "do-loop--1100", 13 );
DEFINE_STRING( BGl_string2708z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2708za700za7za7_3382za7, "_drop", 5 );
DEFINE_STRING( BGl_string2699z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2699za700za7za7_3383za7, "_append-2!", 10 );
DEFINE_STRING( BGl_string2709z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2709za700za7za7_3384za7, "_list-tail", 10 );
DEFINE_STRING( BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2710za700za7za7_3385za7, "list-ref", 8 );
DEFINE_STRING( BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2711za700za7za7_3386za7, "_list-ref", 9 );
DEFINE_STRING( BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2712za700za7za7_3387za7, "list-set!", 9 );
DEFINE_STRING( BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2713za700za7za7_3388za7, "_list-set!", 10 );
DEFINE_STRING( BGl_string2714z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2714za700za7za7_3389za7, "last-pair", 9 );
DEFINE_STRING( BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2715za700za7za7_3390za7, "_last-pair", 10 );
DEFINE_STRING( BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2716za700za7za7_3391za7, "_memq", 5 );
DEFINE_STRING( BGl_string2717z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2717za700za7za7_3392za7, "_memv", 5 );
DEFINE_STRING( BGl_string2718z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2718za700za7za7_3393za7, "_member", 7 );
DEFINE_STRING( BGl_string2719z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2719za700za7za7_3394za7, "_assq", 5 );
DEFINE_STRING( BGl_string2720z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2720za700za7za7_3395za7, "_assv", 5 );
DEFINE_STRING( BGl_string2721z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2721za700za7za7_3396za7, "_assoc", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2refzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2refza7d2za7za73397z00, BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2722za700za7za7_3398za7, "remq", 4 );
DEFINE_STRING( BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2723za700za7za7_3399za7, "_remq", 5 );
DEFINE_STRING( BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2724za700za7za7_3400za7, "remq!", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ereversezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__ereverseza700za7za7__3401za7, BGl__ereversez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2725z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2725za700za7za7_3402za7, "_remq!", 6 );
DEFINE_STRING( BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2727za700za7za7_3403za7, "delete", 6 );
DEFINE_STRING( BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2728za700za7za7_3404za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2730za700za7za7_3405za7, "procedure", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_iotazd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__iotaza700za7za7__r4_p3406za7, va_generic_entry, BGl__iotaz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2729za700za7za7_3407za7, "_delete", 7 );
DEFINE_STRING( BGl_string2731z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2731za700za7za7_3408za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2734z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2734za700za7za7_3409za7, "funcall", 7 );
DEFINE_STRING( BGl_string2736z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2736za700za7za7_3410za7, "eq", 2 );
DEFINE_STRING( BGl_string2738z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2738za700za7za7_3411za7, "x", 1 );
DEFINE_STRING( BGl_string2740z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2740za700za7za7_3412za7, "arg1469", 7 );
DEFINE_STRING( BGl_string2742z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2742za700za7za7_3413za7, "delete!", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd22z12zd2envz12zz__r4_pairs_and_lists_6_3z00, BgL_bgl__appendza7d22za712za7c3414za7, BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2743z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2743za700za7za7_3415za7, "_delete!", 8 );
DEFINE_STRING( BGl_string2744z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2744za700za7za7_3416za7, "laap", 4 );
DEFINE_STRING( BGl_string2745z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2745za700za7za7_3417za7, "laap:Wrong number of arguments", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_memvzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__memvza700za7za7__r4_p3418za7, BGl__memvz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2748z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2748za700za7za7_3419za7, "arg1489", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__appendza7d22za7d2za7za73420z00, BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2751z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2751za700za7za7_3421za7, "arg1487", 7 );
DEFINE_STRING( BGl_string2752z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2752za700za7za7_3422za7, "cons*1", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_assoczd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__assocza700za7za7__r4_3423za7, BGl__assocz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2753z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2753za700za7za7_3424za7, "nr", 2 );
DEFINE_STRING( BGl_string2754z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2754za700za7za7_3425za7, "reverse!", 8 );
DEFINE_STRING( BGl_string2755z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2755za700za7za7_3426za7, "_reverse!", 9 );
DEFINE_STRING( BGl_string2756z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2756za700za7za7_3427za7, "every", 5 );
DEFINE_STRING( BGl_string2759z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2759za700za7za7_3428za7, "pred", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_epairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__epairza7f3za7f3za7za7__3429z00, BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2761z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2761za700za7za7_3430za7, "arg1507", 7 );
DEFINE_STRING( BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2762za700za7za7_3431za7, "<anonymous:1523>", 16 );
DEFINE_STRING( BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2763za700za7za7_3432za7, "map", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2tabulatezd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2tabulate3433za7, BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2764za700za7za7_3434za7, "argument not a list", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reversezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__reverseza700za7za7__r3435za7, BGl__reversez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2766z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2766za700za7za7_3436za7, "Wrong number of arguments", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caddrza700za7za7__r4_3437za7, BGl__caddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2769z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2769za700za7za7_3438za7, "apply", 5 );
DEFINE_STRING( BGl_string2772z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2772za700za7za7_3439za7, "let", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cadarza700za7za7__r4_3440za7, BGl__cadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_everyzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__everyza700za7za7__r4_3441za7, va_generic_entry, BGl__everyz00zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2776z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2776za700za7za7_3442za7, "l1140", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2listzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__makeza7d2listza7d2za73443za7, va_generic_entry, BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2778z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2778za700za7za7_3444za7, "l", 1 );
DEFINE_STRING( BGl_string2781z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2781za700za7za7_3445za7, "if", 2 );
DEFINE_STRING( BGl_string2784z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2784za700za7za7_3446za7, "c-null?", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_anyzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__anyza7f3za7f3za7za7__r43447z00, va_generic_entry, BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2787z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2787za700za7za7_3448za7, "quote", 5 );
DEFINE_STRING( BGl_string2792z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2792za700za7za7_3449za7, "head1142", 8 );
DEFINE_STRING( BGl_string2807z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2807za700za7za7_3450za7, "c-car", 5 );
DEFINE_STRING( BGl_string2797z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2797za700za7za7_3451za7, "arg1531", 7 );
DEFINE_STRING( BGl_string2810z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2810za700za7za7_3452za7, "arg1532", 7 );
DEFINE_STRING( BGl_string2815z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2815za700za7za7_3453za7, "obj1", 4 );
DEFINE_STRING( BGl_string2818z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2818za700za7za7_3454za7, "obj2", 4 );
DEFINE_STRING( BGl_string2821z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2821za700za7za7_3455za7, "c-cons", 6 );
DEFINE_STRING( BGl_string2826z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2826za700za7za7_3456za7, "g1145", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00, BgL_bgl__pairza7f3za7f3za7za7__r3457z00, BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caadrza700za7za7__r4_3458za7, BGl__caadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2830z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2830za700za7za7_3459za7, "c-cdr", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caaarza700za7za7__r4_3460za7, BGl__caaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2833z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2833za700za7za7_3461za7, "labels", 6 );
DEFINE_STRING( BGl_string2839z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2839za700za7za7_3462za7, "tail1143", 8 );
DEFINE_STRING( BGl_string2843z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2843za700za7za7_3463za7, "c-pair?", 7 );
DEFINE_STRING( BGl_string2848z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2848za700za7za7_3464za7, "newtail1144", 11 );
DEFINE_STRING( BGl_string2853z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2853za700za7za7_3465za7, "arg1526", 7 );
DEFINE_STRING( BGl_string2860z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2860za700za7za7_3466za7, "arg1527", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2copyza7d2za73467za7, BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2867z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2867za700za7za7_3468za7, "begin", 5 );
DEFINE_STRING( BGl_string2873z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2873za700za7za7_3469za7, "obj", 3 );
DEFINE_STRING( BGl_string2876z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2876za700za7za7_3470za7, "c-set-cdr!", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__listza7d2tailza7d2za73471za7, BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2881z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2881za700za7za7_3472za7, "arg1525", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reversez12zd2envzc0zz__r4_pairs_and_lists_6_3z00, BgL_bgl__reverseza712za712za7za73473z00, BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2887z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2887za700za7za7_3474za7, "error", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__consza700za7za7__r4_p3475za7, BGl__consz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2890z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2890za700za7za7_3476za7, "_every", 6 );
DEFINE_STRING( BGl_string2889z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2889za700za7za7_3477za7, "<anonymous:1512>", 16 );
DEFINE_STRING( BGl_string2901z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2901za700za7za7_3478za7, "l1152", 5 );
DEFINE_STRING( BGl_string2891z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2891za700za7za7_3479za7, "any", 3 );
DEFINE_STRING( BGl_string3002z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3002za700za7za7_3480za7, "arg1605", 7 );
DEFINE_STRING( BGl_string2894z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2894za700za7za7_3481za7, "arg1541", 7 );
DEFINE_STRING( BGl_string2895z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2895za700za7za7_3482za7, "<anonymous:1558>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdddrza700za7za7__r4_3483za7, BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2908z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2908za700za7za7_3484za7, "head1154", 8 );
DEFINE_STRING( BGl_string3011z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3011za700za7za7_3485za7, "arg1606", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cddarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cddarza700za7za7__r4_3486za7, BGl__cddarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2913z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2913za700za7za7_3487za7, "arg1566", 7 );
DEFINE_STRING( BGl_string3020z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3020za700za7za7_3488za7, "g1169", 5 );
DEFINE_STRING( BGl_string2922z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2922za700za7za7_3489za7, "arg1567", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdaddrza700za7za7__r43490za7, BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3028z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3028za700za7za7_3491za7, "tail1167", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdadarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdadarza700za7za7__r43492za7, BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2931z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2931za700za7za7_3493za7, "g1157", 5 );
DEFINE_STRING( BGl_string3035z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3035za700za7za7_3494za7, "newtail1168", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2duplicateszd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza7d2duplic3495za7, opt_generic_entry, BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3040z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3040za700za7za7_3496za7, "arg1601", 7 );
DEFINE_STRING( BGl_string2939z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2939za700za7za7_3497za7, "tail1155", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lengthzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__lengthza700za7za7__r43498za7, BGl__lengthz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__deleteza700za7za7__r43499za7, opt_generic_entry, BGl__deletez00zz__r4_pairs_and_lists_6_3z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2946z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2946za700za7za7_3500za7, "newtail1156", 11 );
DEFINE_STRING( BGl_string3047z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3047za700za7za7_3501za7, "arg1602", 7 );
DEFINE_STRING( BGl_string2951z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2951za700za7za7_3502za7, "arg1562", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdadrza700za7za7__r4_3503za7, BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reducezd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__reduceza700za7za7__r43504za7, BGl__reducez00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2958z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2958za700za7za7_3505za7, "arg1563", 7 );
DEFINE_STRING( BGl_string3061z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3061za700za7za7_3506za7, "arg1600", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdaarza700za7za7__r4_3507za7, BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3067z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3067za700za7za7_3508za7, "<anonymous:1584>", 16 );
DEFINE_STRING( BGl_string3068z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3068za700za7za7_3509za7, "_every?", 7 );
DEFINE_STRING( BGl_string3069z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3069za700za7za7_3510za7, "any?", 4 );
DEFINE_STRING( BGl_string3072z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3072za700za7za7_3511za7, "arg1618", 7 );
DEFINE_STRING( BGl_string2972z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2972za700za7za7_3512za7, "arg1560", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_consza2zd2envz70zz__r4_pairs_and_lists_6_3z00, BgL_bgl__consza7a2za7a2za7za7__r3513z00, va_generic_entry, BGl__consza2za2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3073z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3073za700za7za7_3514za7, "<anonymous:1637>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdaadrza700za7za7__r43515za7, BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2978z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2978za700za7za7_3516za7, "<anonymous:1546>", 16 );
DEFINE_STRING( BGl_string3079z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3079za700za7za7_3517za7, "l1176", 5 );
DEFINE_STRING( BGl_string2980z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2980za700za7za7_3518za7, "every?", 6 );
DEFINE_STRING( BGl_string2979z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2979za700za7za7_3519za7, "_any", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cdaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__cdaaarza700za7za7__r43520za7, BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2983z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2983za700za7za7_3521za7, "arg1578", 7 );
DEFINE_STRING( BGl_string2984z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2984za700za7za7_3522za7, "<anonymous:1598>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__findza7d2tailza7d2za73523za7, BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3086z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3086za700za7za7_3524za7, "head1178", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eappendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00, BgL_bgl__eappendza7d22za7d2za73525za7, BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3100z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3100za700za7za7_3526za7, "arg1647", 7 );
DEFINE_STRING( BGl_string2990z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string2990za700za7za7_3527za7, "l1164", 5 );
DEFINE_STRING( BGl_string3091z00zz__r4_pairs_and_lists_6_3z00, BgL_bgl_string3091za700za7za7_3528za7, "arg1646", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_caaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_bgl__caaddrza700za7za7__r43529za7, BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long BgL_checksumz00_3697, char * BgL_fromz00_3698)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00()
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 18 */
BGl_symbol2726z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2727z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2734z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2736z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2737z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2738z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2739z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2740z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2732z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2737z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2739z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2741z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2742z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2747z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2748z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2746z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2737z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2747z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2750z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2751z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2749z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2735z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2750z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2737z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2759z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2760z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2761z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2757z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2760z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2686z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2769z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2772z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2776z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2778z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2774z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2773z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2774z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2781z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2784z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2782z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2787z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2785z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2786z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BNIL, BNIL)); 
BGl_symbol2791z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2792z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2796z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2797z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2620z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2804z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2803z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2804z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2807z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2805z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2802z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2800z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2802z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2799z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2800z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2798z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2799z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2795z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2796z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2798z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2810z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2808z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2794z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2795z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2808z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2815z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2813z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2796z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2818z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2816z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2809z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2812z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2813z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2816z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2820z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2821z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2819z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2820z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2811z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2812z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2793z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2794z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2811z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2790z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2791z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2793z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2789z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2790z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2825z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2826z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2830z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2828z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2827z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2803z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2828z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2824z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2825z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2827z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2823z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2824z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2833z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2836z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2762z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2838z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2839z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2837z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2838z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2843z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2841z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2847z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2848z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2852z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2853z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2857z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2856z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2857z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2855z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2856z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2854z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2855z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2851z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2852z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2854z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2860z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2858z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2850z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2851z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2858z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2863z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2852z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2864z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2859z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2862z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2863z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2864z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2861z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2862z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2849z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2850z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2861z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2846z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2847z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2849z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2845z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2846z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2867z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2870z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2838z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2873z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2871z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2847z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2869z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2870z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2871z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2875z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2876z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2874z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2875z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2868z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2869z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2874z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2880z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2881z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2882z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2879z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2880z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2882z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2878z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2879z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2883z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2836z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2880z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2847z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2877z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2878z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2883z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2865z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2868z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2877z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2844z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2845z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2865z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2887z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2885z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2775z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2884z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2782z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2791z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2885z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2840z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2841z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2844z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2884z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2835z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2836z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2837z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2840z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2834z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2835z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2888z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2836z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2825z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2791z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2831z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2834z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2888z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2822z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2823z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2831z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2788z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2789z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2822z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2779z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2782z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2788z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2770z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2773z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2779z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2767z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2770z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2893z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2894z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2892z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2893z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2901z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2899z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2898z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2899z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2903z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2907z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2908z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2912z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2913z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2919z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2918z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2919z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2917z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2918z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2916z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2917z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2915z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2916z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2914z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2915z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2911z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2912z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2914z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2921z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2922z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2920z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2921z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2910z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2911z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2920z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2925z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2912z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2926z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2921z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2924z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2925z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2926z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2923z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2924z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2909z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2910z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2923z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2906z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2907z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2909z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2905z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2906z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2930z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2931z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2932z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2918z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2828z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2929z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2930z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2932z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2928z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2929z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol2936z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2895z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2938z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2939z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2937z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2938z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2941z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2946z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol2950z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2951z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2955z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2954z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2955z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2953z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2954z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2952z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2953z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2949z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2950z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2952z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2958z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2956z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2948z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2949z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2956z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2961z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2950z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2962z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2957z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2960z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2961z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2962z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2959z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2960z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2947z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2948z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2959z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2944z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2947z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2943z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2944z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2966z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2938z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2967z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2965z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2966z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2967z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2964z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2965z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2874z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2971z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2972z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2973z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2970z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2971z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2973z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2969z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2970z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2974z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2936z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2971z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2945z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2968z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2969z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2974z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2963z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2964z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2968z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2942z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2943z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2963z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2976z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2900z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2975z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2903z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2907z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2976z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2940z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2941z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2942z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2975z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2935z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2936z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2937z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2940z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2934z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2935z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2977z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2936z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2930z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2907z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2933z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2934z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2977z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2927z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2928z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2933z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2904z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2905z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2927z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2902z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2903z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2904z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2897z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2898z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2902z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2896z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2897z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol2982z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2983z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2981z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2982z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2990z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list2988z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2987z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2988z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list2992z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2997z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3001z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3002z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3008z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3007z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3008z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3006z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3007z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3005z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3006z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3004z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3005z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3003z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3004z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3000z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3001z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3003z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3010z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3011z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3009z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3010z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2999z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3000z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3009z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3014z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3001z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3015z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3010z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3013z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3014z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3015z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3012z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3013z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2998z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2999z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3012z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2995z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2998z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list2994z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list2995z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol3019z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3020z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3021z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3007z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2828z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3018z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3019z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3021z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3017z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3018z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol3025z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string2984z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3027z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3028z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3026z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3027z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3030z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3034z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3035z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3039z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3040z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3044z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3043z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3044z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3042z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3043z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3041z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3042z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3038z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3039z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3041z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3046z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3047z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3045z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3046z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3037z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3038z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3045z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3050z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3039z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3051z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3046z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3049z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3050z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3051z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3048z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3049z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3036z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3037z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3048z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3033z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3034z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3036z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3032z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3033z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3055z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3027z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3056z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3034z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3054z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3055z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3056z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3053z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3054z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2874z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol3060z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3061z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3062z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3059z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3060z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3062z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3058z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3059z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3063z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3025z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3060z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3034z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3057z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3058z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3063z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3052z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3053z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3057z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3031z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3032z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3052z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3065z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2989z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3064z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2992z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3065z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3029z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3030z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3031z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3064z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3024z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3025z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3026z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3029z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3023z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3024z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3066z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3025z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3019z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2996z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3022z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3023z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3066z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3016z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3017z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3022z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2993z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2994z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3016z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2991z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2992z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2993z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list2986z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2987z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2991z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list2985z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2986z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol3071z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3072z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3070z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3071z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3079z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3077z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2777z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3076z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3077z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3081z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2783z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3085z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3086z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3090z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3091z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3097z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3096z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3097z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3095z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3096z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3094z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3095z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3093z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3094z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3092z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3093z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3089z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3090z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3092z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3099z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3100z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3098z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3099z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3088z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3089z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3098z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3103z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3090z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3104z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3099z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3102z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3103z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3104z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3101z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3102z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3087z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3088z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3101z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3084z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3085z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3087z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3083z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3084z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol3108z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3109z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3110z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3096z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2828z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3107z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3108z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3110z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3106z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3107z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_symbol3114z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3073z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3116z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3117z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3115z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3116z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3119z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2842z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3123z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3124z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3128z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3129z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3133z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2806z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3132z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3133z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3131z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3132z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3130z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3131z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2805z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3127z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3128z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3130z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_symbol3135z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3136z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3134z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3135z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3126z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3127z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3134z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3139z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2814z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3128z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3140z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2817z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3135z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3138z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3139z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3140z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3137z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3138z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2819z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3125z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3126z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3137z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3122z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3123z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3125z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3121z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3122z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3144z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2801z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3116z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3145z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2872z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3123z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3143z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3144z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3145z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3142z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3143z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2874z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol3151z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3152z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3153z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2829z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3150z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3151z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3153z00zz__r4_pairs_and_lists_6_3z00, BNIL)); 
BGl_list3149z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3150z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3154z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3114z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3151z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3123z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3147z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3149z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3154z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3141z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2866z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3142z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3147z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3120z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3121z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3141z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3156z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2886z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3078z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3155z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3081z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3085z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3156z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3118z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3119z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3120z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3155z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3113z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3114z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3115z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3118z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3112z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_list3113z00zz__r4_pairs_and_lists_6_3z00, BNIL); 
BGl_list3157z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol3114z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3108z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3085z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3111z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2832z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3112z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3157z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3105z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3106z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3111z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3082z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3083z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3105z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3080z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2780z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3081z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list2785z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3082z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_list3075z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2771z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3076z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3080z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_list3074z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2768z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_list3075z00zz__r4_pairs_and_lists_6_3z00, BNIL))); 
BGl_symbol3164z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3165z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3163z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol2758z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3164z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol3169z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3170z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3171z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3172z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3173z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3174z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3168z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3169z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3169z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3171z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3173z00zz__r4_pairs_and_lists_6_3z00, BNIL))))); 
BGl_symbol3181z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3182z00zz__r4_pairs_and_lists_6_3z00); 
BGl_symbol3183z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3184z00zz__r4_pairs_and_lists_6_3z00); 
BGl_list3180z00zz__r4_pairs_and_lists_6_3z00 = 
MAKE_PAIR(BGl_symbol2733z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3181z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3181z00zz__r4_pairs_and_lists_6_3z00, 
MAKE_PAIR(BGl_symbol3183z00zz__r4_pairs_and_lists_6_3z00, BNIL)))); 
BGl_symbol3194z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3195z00zz__r4_pairs_and_lists_6_3z00); 
return ( 
BGl_symbol3198z00zz__r4_pairs_and_lists_6_3z00 = 
bstring_to_symbol(BGl_string3199z00zz__r4_pairs_and_lists_6_3z00), BUNSPEC) ;} 
}



/* pair? */
BGL_EXPORTED_DEF bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 216 */
return 
PAIRP(BgL_objz00_1);} 
}



/* _pair? */
obj_t BGl__pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2326, obj_t BgL_objz00_2327)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 216 */
return 
BBOOL(
PAIRP(BgL_objz00_2327));} 
}



/* epair? */
BGL_EXPORTED_DEF bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 222 */
return 
EXTENDED_PAIRP(BgL_objz00_2);} 
}



/* _epair? */
obj_t BGl__epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2328, obj_t BgL_objz00_2329)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 222 */
return 
BBOOL(
EXTENDED_PAIRP(BgL_objz00_2329));} 
}



/* pair-or-null? */
BGL_EXPORTED_DEF bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_3)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 228 */
if(
PAIRP(BgL_objz00_3))
{ /* Ieee/pairlist.scm 229 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 229 */
return 
NULLP(BgL_objz00_3);} } 
}



/* _pair-or-null? */
obj_t BGl__pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2330, obj_t BgL_objz00_2331)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 228 */
{ /* Ieee/pairlist.scm 229 */
bool_t BgL_auxz00_4417;
if(
PAIRP(BgL_objz00_2331))
{ /* Ieee/pairlist.scm 229 */
BgL_auxz00_4417 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 229 */
BgL_auxz00_4417 = 
NULLP(BgL_objz00_2331)
; } 
return 
BBOOL(BgL_auxz00_4417);} } 
}



/* cons */
BGL_EXPORTED_DEF obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_obj1z00_4, obj_t BgL_obj2z00_5)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 236 */
return 
MAKE_PAIR(BgL_obj1z00_4, BgL_obj2z00_5);} 
}



/* _cons */
obj_t BGl__consz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2332, obj_t BgL_obj1z00_2333, obj_t BgL_obj2z00_2334)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 236 */
return 
MAKE_PAIR(BgL_obj1z00_2333, BgL_obj2z00_2334);} 
}



/* econs */
BGL_EXPORTED_DEF obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_obj1z00_6, obj_t BgL_obj2z00_7, obj_t BgL_obj3z00_8)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 242 */
return 
MAKE_EXTENDED_PAIR(BgL_obj1z00_6, BgL_obj2z00_7, BgL_obj3z00_8);} 
}



/* _econs */
obj_t BGl__econsz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2335, obj_t BgL_obj1z00_2336, obj_t BgL_obj2z00_2337, obj_t BgL_obj3z00_2338)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 242 */
{ /* Ieee/pairlist.scm 243 */
obj_t BgL_res3203z00_3290;
BgL_res3203z00_3290 = 
MAKE_EXTENDED_PAIR(BgL_obj1z00_2336, BgL_obj2z00_2337, BgL_obj3z00_2338); 
return BgL_res3203z00_3290;} } 
}



/* car */
BGL_EXPORTED_DEF obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_9)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 248 */
return 
CAR(BgL_pairz00_9);} 
}



/* _car */
obj_t BGl__carz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2339, obj_t BgL_pairz00_2340)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 248 */
{ /* Ieee/pairlist.scm 249 */
obj_t BgL_pairz00_3291;
if(
PAIRP(BgL_pairz00_2340))
{ /* Ieee/pairlist.scm 249 */
BgL_pairz00_3291 = BgL_pairz00_2340; }  else 
{ 
obj_t BgL_auxz00_4429;
BgL_auxz00_4429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9731)), BGl_string2619z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2340); 
FAILURE(BgL_auxz00_4429,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_3291);} } 
}



/* cdr */
BGL_EXPORTED_DEF obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_10)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 254 */
return 
CDR(BgL_pairz00_10);} 
}



/* _cdr */
obj_t BGl__cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2341, obj_t BgL_pairz00_2342)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 254 */
{ /* Ieee/pairlist.scm 255 */
obj_t BgL_pairz00_3292;
if(
PAIRP(BgL_pairz00_2342))
{ /* Ieee/pairlist.scm 255 */
BgL_pairz00_3292 = BgL_pairz00_2342; }  else 
{ 
obj_t BgL_auxz00_4437;
BgL_auxz00_4437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)9997)), BGl_string2621z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2342); 
FAILURE(BgL_auxz00_4437,BFALSE,BFALSE);} 
return 
CDR(BgL_pairz00_3292);} } 
}



/* cer */
BGL_EXPORTED_DEF obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_11)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 260 */
return 
CER(BgL_objz00_11);} 
}



/* _cer */
obj_t BGl__cerz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2343, obj_t BgL_objz00_2344)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 260 */
{ /* Ieee/pairlist.scm 261 */
obj_t BgL_objz00_3293;
if(
EXTENDED_PAIRP(BgL_objz00_2344))
{ /* Ieee/pairlist.scm 261 */
BgL_objz00_3293 = BgL_objz00_2344; }  else 
{ 
obj_t BgL_auxz00_4445;
BgL_auxz00_4445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10262)), BGl_string2622z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_objz00_2344); 
FAILURE(BgL_auxz00_4445,BFALSE,BFALSE);} 
return 
CER(BgL_objz00_3293);} } 
}



/* caar */
BGL_EXPORTED_DEF obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_12)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 266 */
{ /* Ieee/pairlist.scm 267 */
obj_t BgL_pairz00_3294;
{ /* Ieee/pairlist.scm 267 */
obj_t BgL_aux1892z00_3295;
BgL_aux1892z00_3295 = 
CAR(BgL_pairz00_12); 
if(
PAIRP(BgL_aux1892z00_3295))
{ /* Ieee/pairlist.scm 267 */
BgL_pairz00_3294 = BgL_aux1892z00_3295; }  else 
{ 
obj_t BgL_auxz00_4453;
BgL_auxz00_4453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10533)), BGl_string2624z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1892z00_3295); 
FAILURE(BgL_auxz00_4453,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3294);} } 
}



/* _caar */
obj_t BGl__caarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2345, obj_t BgL_pairz00_2346)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 266 */
{ /* Ieee/pairlist.scm 267 */
obj_t BgL_pairz00_3296;
if(
PAIRP(BgL_pairz00_2346))
{ /* Ieee/pairlist.scm 267 */
BgL_pairz00_3296 = BgL_pairz00_2346; }  else 
{ 
obj_t BgL_auxz00_4460;
BgL_auxz00_4460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10533)), BGl_string2625z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2346); 
FAILURE(BgL_auxz00_4460,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 267 */
obj_t BgL_pairz00_3297;
{ /* Ieee/pairlist.scm 267 */
obj_t BgL_aux1892z00_3298;
BgL_aux1892z00_3298 = 
CAR(BgL_pairz00_3296); 
if(
PAIRP(BgL_aux1892z00_3298))
{ /* Ieee/pairlist.scm 267 */
BgL_pairz00_3297 = BgL_aux1892z00_3298; }  else 
{ 
obj_t BgL_auxz00_4467;
BgL_auxz00_4467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10533)), BGl_string2624z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1892z00_3298); 
FAILURE(BgL_auxz00_4467,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3297);} } } 
}



/* cadr */
BGL_EXPORTED_DEF obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_13)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 272 */
{ /* Ieee/pairlist.scm 273 */
obj_t BgL_pairz00_3299;
{ /* Ieee/pairlist.scm 273 */
obj_t BgL_aux1896z00_3300;
BgL_aux1896z00_3300 = 
CDR(BgL_pairz00_13); 
if(
PAIRP(BgL_aux1896z00_3300))
{ /* Ieee/pairlist.scm 273 */
BgL_pairz00_3299 = BgL_aux1896z00_3300; }  else 
{ 
obj_t BgL_auxz00_4475;
BgL_auxz00_4475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10804)), BGl_string2626z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1896z00_3300); 
FAILURE(BgL_auxz00_4475,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3299);} } 
}



/* _cadr */
obj_t BGl__cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2347, obj_t BgL_pairz00_2348)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 272 */
{ /* Ieee/pairlist.scm 273 */
obj_t BgL_pairz00_3301;
if(
PAIRP(BgL_pairz00_2348))
{ /* Ieee/pairlist.scm 273 */
BgL_pairz00_3301 = BgL_pairz00_2348; }  else 
{ 
obj_t BgL_auxz00_4482;
BgL_auxz00_4482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10804)), BGl_string2627z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2348); 
FAILURE(BgL_auxz00_4482,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 273 */
obj_t BgL_pairz00_3302;
{ /* Ieee/pairlist.scm 273 */
obj_t BgL_aux1896z00_3303;
BgL_aux1896z00_3303 = 
CDR(BgL_pairz00_3301); 
if(
PAIRP(BgL_aux1896z00_3303))
{ /* Ieee/pairlist.scm 273 */
BgL_pairz00_3302 = BgL_aux1896z00_3303; }  else 
{ 
obj_t BgL_auxz00_4489;
BgL_auxz00_4489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)10804)), BGl_string2626z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1896z00_3303); 
FAILURE(BgL_auxz00_4489,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_3302);} } } 
}



/* cdar */
BGL_EXPORTED_DEF obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_14)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 278 */
{ /* Ieee/pairlist.scm 279 */
obj_t BgL_pairz00_3304;
{ /* Ieee/pairlist.scm 279 */
obj_t BgL_aux1900z00_3305;
BgL_aux1900z00_3305 = 
CAR(BgL_pairz00_14); 
if(
PAIRP(BgL_aux1900z00_3305))
{ /* Ieee/pairlist.scm 279 */
BgL_pairz00_3304 = BgL_aux1900z00_3305; }  else 
{ 
obj_t BgL_auxz00_4497;
BgL_auxz00_4497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11075)), BGl_string2628z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1900z00_3305); 
FAILURE(BgL_auxz00_4497,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3304);} } 
}



/* _cdar */
obj_t BGl__cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2349, obj_t BgL_pairz00_2350)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 278 */
{ /* Ieee/pairlist.scm 279 */
obj_t BgL_pairz00_3306;
if(
PAIRP(BgL_pairz00_2350))
{ /* Ieee/pairlist.scm 279 */
BgL_pairz00_3306 = BgL_pairz00_2350; }  else 
{ 
obj_t BgL_auxz00_4504;
BgL_auxz00_4504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11075)), BGl_string2629z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2350); 
FAILURE(BgL_auxz00_4504,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 279 */
obj_t BgL_pairz00_3307;
{ /* Ieee/pairlist.scm 279 */
obj_t BgL_aux1900z00_3308;
BgL_aux1900z00_3308 = 
CAR(BgL_pairz00_3306); 
if(
PAIRP(BgL_aux1900z00_3308))
{ /* Ieee/pairlist.scm 279 */
BgL_pairz00_3307 = BgL_aux1900z00_3308; }  else 
{ 
obj_t BgL_auxz00_4511;
BgL_auxz00_4511 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11075)), BGl_string2628z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1900z00_3308); 
FAILURE(BgL_auxz00_4511,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3307);} } } 
}



/* cddr */
BGL_EXPORTED_DEF obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_15)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 284 */
{ /* Ieee/pairlist.scm 285 */
obj_t BgL_pairz00_3309;
{ /* Ieee/pairlist.scm 285 */
obj_t BgL_aux1904z00_3310;
BgL_aux1904z00_3310 = 
CDR(BgL_pairz00_15); 
if(
PAIRP(BgL_aux1904z00_3310))
{ /* Ieee/pairlist.scm 285 */
BgL_pairz00_3309 = BgL_aux1904z00_3310; }  else 
{ 
obj_t BgL_auxz00_4519;
BgL_auxz00_4519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11346)), BGl_string2630z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1904z00_3310); 
FAILURE(BgL_auxz00_4519,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3309);} } 
}



/* _cddr */
obj_t BGl__cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2351, obj_t BgL_pairz00_2352)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 284 */
{ /* Ieee/pairlist.scm 285 */
obj_t BgL_pairz00_3311;
if(
PAIRP(BgL_pairz00_2352))
{ /* Ieee/pairlist.scm 285 */
BgL_pairz00_3311 = BgL_pairz00_2352; }  else 
{ 
obj_t BgL_auxz00_4526;
BgL_auxz00_4526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11346)), BGl_string2631z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2352); 
FAILURE(BgL_auxz00_4526,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 285 */
obj_t BgL_pairz00_3312;
{ /* Ieee/pairlist.scm 285 */
obj_t BgL_aux1904z00_3313;
BgL_aux1904z00_3313 = 
CDR(BgL_pairz00_3311); 
if(
PAIRP(BgL_aux1904z00_3313))
{ /* Ieee/pairlist.scm 285 */
BgL_pairz00_3312 = BgL_aux1904z00_3313; }  else 
{ 
obj_t BgL_auxz00_4533;
BgL_auxz00_4533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11346)), BGl_string2630z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1904z00_3313); 
FAILURE(BgL_auxz00_4533,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_3312);} } } 
}



/* caaar */
BGL_EXPORTED_DEF obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_16)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 290 */
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_pairz00_3314;
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_pairz00_3315;
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_aux1908z00_3316;
BgL_aux1908z00_3316 = 
CAR(BgL_pairz00_16); 
if(
PAIRP(BgL_aux1908z00_3316))
{ /* Ieee/pairlist.scm 291 */
BgL_pairz00_3315 = BgL_aux1908z00_3316; }  else 
{ 
obj_t BgL_auxz00_4541;
BgL_auxz00_4541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11623)), BGl_string2632z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1908z00_3316); 
FAILURE(BgL_auxz00_4541,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_aux1910z00_3317;
BgL_aux1910z00_3317 = 
CAR(BgL_pairz00_3315); 
if(
PAIRP(BgL_aux1910z00_3317))
{ /* Ieee/pairlist.scm 291 */
BgL_pairz00_3314 = BgL_aux1910z00_3317; }  else 
{ 
obj_t BgL_auxz00_4548;
BgL_auxz00_4548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11623)), BGl_string2632z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1910z00_3317); 
FAILURE(BgL_auxz00_4548,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3314);} } 
}



/* _caaar */
obj_t BGl__caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2353, obj_t BgL_pairz00_2354)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 290 */
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_pairz00_3318;
if(
PAIRP(BgL_pairz00_2354))
{ /* Ieee/pairlist.scm 291 */
BgL_pairz00_3318 = BgL_pairz00_2354; }  else 
{ 
obj_t BgL_auxz00_4555;
BgL_auxz00_4555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11623)), BGl_string2633z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2354); 
FAILURE(BgL_auxz00_4555,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_pairz00_3319;
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_pairz00_3320;
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_aux1908z00_3321;
BgL_aux1908z00_3321 = 
CAR(BgL_pairz00_3318); 
if(
PAIRP(BgL_aux1908z00_3321))
{ /* Ieee/pairlist.scm 291 */
BgL_pairz00_3320 = BgL_aux1908z00_3321; }  else 
{ 
obj_t BgL_auxz00_4562;
BgL_auxz00_4562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11623)), BGl_string2632z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1908z00_3321); 
FAILURE(BgL_auxz00_4562,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 291 */
obj_t BgL_aux1910z00_3322;
BgL_aux1910z00_3322 = 
CAR(BgL_pairz00_3320); 
if(
PAIRP(BgL_aux1910z00_3322))
{ /* Ieee/pairlist.scm 291 */
BgL_pairz00_3319 = BgL_aux1910z00_3322; }  else 
{ 
obj_t BgL_auxz00_4569;
BgL_auxz00_4569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11623)), BGl_string2632z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1910z00_3322); 
FAILURE(BgL_auxz00_4569,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3319);} } } 
}



/* caadr */
BGL_EXPORTED_DEF obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_17)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 296 */
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_pairz00_3323;
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_pairz00_3324;
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_aux1914z00_3325;
BgL_aux1914z00_3325 = 
CDR(BgL_pairz00_17); 
if(
PAIRP(BgL_aux1914z00_3325))
{ /* Ieee/pairlist.scm 297 */
BgL_pairz00_3324 = BgL_aux1914z00_3325; }  else 
{ 
obj_t BgL_auxz00_4577;
BgL_auxz00_4577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11901)), BGl_string2634z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1914z00_3325); 
FAILURE(BgL_auxz00_4577,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_aux1916z00_3326;
BgL_aux1916z00_3326 = 
CAR(BgL_pairz00_3324); 
if(
PAIRP(BgL_aux1916z00_3326))
{ /* Ieee/pairlist.scm 297 */
BgL_pairz00_3323 = BgL_aux1916z00_3326; }  else 
{ 
obj_t BgL_auxz00_4584;
BgL_auxz00_4584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11901)), BGl_string2634z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1916z00_3326); 
FAILURE(BgL_auxz00_4584,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3323);} } 
}



/* _caadr */
obj_t BGl__caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2355, obj_t BgL_pairz00_2356)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 296 */
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_pairz00_3327;
if(
PAIRP(BgL_pairz00_2356))
{ /* Ieee/pairlist.scm 297 */
BgL_pairz00_3327 = BgL_pairz00_2356; }  else 
{ 
obj_t BgL_auxz00_4591;
BgL_auxz00_4591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11901)), BGl_string2635z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2356); 
FAILURE(BgL_auxz00_4591,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_pairz00_3328;
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_pairz00_3329;
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_aux1914z00_3330;
BgL_aux1914z00_3330 = 
CDR(BgL_pairz00_3327); 
if(
PAIRP(BgL_aux1914z00_3330))
{ /* Ieee/pairlist.scm 297 */
BgL_pairz00_3329 = BgL_aux1914z00_3330; }  else 
{ 
obj_t BgL_auxz00_4598;
BgL_auxz00_4598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11901)), BGl_string2634z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1914z00_3330); 
FAILURE(BgL_auxz00_4598,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 297 */
obj_t BgL_aux1916z00_3331;
BgL_aux1916z00_3331 = 
CAR(BgL_pairz00_3329); 
if(
PAIRP(BgL_aux1916z00_3331))
{ /* Ieee/pairlist.scm 297 */
BgL_pairz00_3328 = BgL_aux1916z00_3331; }  else 
{ 
obj_t BgL_auxz00_4605;
BgL_auxz00_4605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)11901)), BGl_string2634z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1916z00_3331); 
FAILURE(BgL_auxz00_4605,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3328);} } } 
}



/* cadar */
BGL_EXPORTED_DEF obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_18)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 302 */
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_pairz00_3332;
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_pairz00_3333;
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_aux1920z00_3334;
BgL_aux1920z00_3334 = 
CAR(BgL_pairz00_18); 
if(
PAIRP(BgL_aux1920z00_3334))
{ /* Ieee/pairlist.scm 303 */
BgL_pairz00_3333 = BgL_aux1920z00_3334; }  else 
{ 
obj_t BgL_auxz00_4613;
BgL_auxz00_4613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12179)), BGl_string2636z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1920z00_3334); 
FAILURE(BgL_auxz00_4613,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_aux1922z00_3335;
BgL_aux1922z00_3335 = 
CDR(BgL_pairz00_3333); 
if(
PAIRP(BgL_aux1922z00_3335))
{ /* Ieee/pairlist.scm 303 */
BgL_pairz00_3332 = BgL_aux1922z00_3335; }  else 
{ 
obj_t BgL_auxz00_4620;
BgL_auxz00_4620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12179)), BGl_string2636z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1922z00_3335); 
FAILURE(BgL_auxz00_4620,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3332);} } 
}



/* _cadar */
obj_t BGl__cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2357, obj_t BgL_pairz00_2358)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 302 */
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_pairz00_3336;
if(
PAIRP(BgL_pairz00_2358))
{ /* Ieee/pairlist.scm 303 */
BgL_pairz00_3336 = BgL_pairz00_2358; }  else 
{ 
obj_t BgL_auxz00_4627;
BgL_auxz00_4627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12179)), BGl_string2637z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2358); 
FAILURE(BgL_auxz00_4627,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_pairz00_3337;
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_pairz00_3338;
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_aux1920z00_3339;
BgL_aux1920z00_3339 = 
CAR(BgL_pairz00_3336); 
if(
PAIRP(BgL_aux1920z00_3339))
{ /* Ieee/pairlist.scm 303 */
BgL_pairz00_3338 = BgL_aux1920z00_3339; }  else 
{ 
obj_t BgL_auxz00_4634;
BgL_auxz00_4634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12179)), BGl_string2636z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1920z00_3339); 
FAILURE(BgL_auxz00_4634,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 303 */
obj_t BgL_aux1922z00_3340;
BgL_aux1922z00_3340 = 
CDR(BgL_pairz00_3338); 
if(
PAIRP(BgL_aux1922z00_3340))
{ /* Ieee/pairlist.scm 303 */
BgL_pairz00_3337 = BgL_aux1922z00_3340; }  else 
{ 
obj_t BgL_auxz00_4641;
BgL_auxz00_4641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12179)), BGl_string2636z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1922z00_3340); 
FAILURE(BgL_auxz00_4641,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3337);} } } 
}



/* caddr */
BGL_EXPORTED_DEF obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_19)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 308 */
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_pairz00_3341;
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_pairz00_3342;
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_aux1926z00_3343;
BgL_aux1926z00_3343 = 
CDR(BgL_pairz00_19); 
if(
PAIRP(BgL_aux1926z00_3343))
{ /* Ieee/pairlist.scm 309 */
BgL_pairz00_3342 = BgL_aux1926z00_3343; }  else 
{ 
obj_t BgL_auxz00_4649;
BgL_auxz00_4649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12457)), BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1926z00_3343); 
FAILURE(BgL_auxz00_4649,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_aux1928z00_3344;
BgL_aux1928z00_3344 = 
CDR(BgL_pairz00_3342); 
if(
PAIRP(BgL_aux1928z00_3344))
{ /* Ieee/pairlist.scm 309 */
BgL_pairz00_3341 = BgL_aux1928z00_3344; }  else 
{ 
obj_t BgL_auxz00_4656;
BgL_auxz00_4656 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12457)), BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1928z00_3344); 
FAILURE(BgL_auxz00_4656,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3341);} } 
}



/* _caddr */
obj_t BGl__caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2359, obj_t BgL_pairz00_2360)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 308 */
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_pairz00_3345;
if(
PAIRP(BgL_pairz00_2360))
{ /* Ieee/pairlist.scm 309 */
BgL_pairz00_3345 = BgL_pairz00_2360; }  else 
{ 
obj_t BgL_auxz00_4663;
BgL_auxz00_4663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12457)), BGl_string2639z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2360); 
FAILURE(BgL_auxz00_4663,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_pairz00_3346;
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_pairz00_3347;
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_aux1926z00_3348;
BgL_aux1926z00_3348 = 
CDR(BgL_pairz00_3345); 
if(
PAIRP(BgL_aux1926z00_3348))
{ /* Ieee/pairlist.scm 309 */
BgL_pairz00_3347 = BgL_aux1926z00_3348; }  else 
{ 
obj_t BgL_auxz00_4670;
BgL_auxz00_4670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12457)), BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1926z00_3348); 
FAILURE(BgL_auxz00_4670,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 309 */
obj_t BgL_aux1928z00_3349;
BgL_aux1928z00_3349 = 
CDR(BgL_pairz00_3347); 
if(
PAIRP(BgL_aux1928z00_3349))
{ /* Ieee/pairlist.scm 309 */
BgL_pairz00_3346 = BgL_aux1928z00_3349; }  else 
{ 
obj_t BgL_auxz00_4677;
BgL_auxz00_4677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12457)), BGl_string2638z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1928z00_3349); 
FAILURE(BgL_auxz00_4677,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3346);} } } 
}



/* cdaar */
BGL_EXPORTED_DEF obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_20)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 314 */
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_pairz00_3350;
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_pairz00_3351;
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_aux1932z00_3352;
BgL_aux1932z00_3352 = 
CAR(BgL_pairz00_20); 
if(
PAIRP(BgL_aux1932z00_3352))
{ /* Ieee/pairlist.scm 315 */
BgL_pairz00_3351 = BgL_aux1932z00_3352; }  else 
{ 
obj_t BgL_auxz00_4685;
BgL_auxz00_4685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12735)), BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1932z00_3352); 
FAILURE(BgL_auxz00_4685,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_aux1934z00_3353;
BgL_aux1934z00_3353 = 
CAR(BgL_pairz00_3351); 
if(
PAIRP(BgL_aux1934z00_3353))
{ /* Ieee/pairlist.scm 315 */
BgL_pairz00_3350 = BgL_aux1934z00_3353; }  else 
{ 
obj_t BgL_auxz00_4692;
BgL_auxz00_4692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12735)), BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1934z00_3353); 
FAILURE(BgL_auxz00_4692,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3350);} } 
}



/* _cdaar */
obj_t BGl__cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2361, obj_t BgL_pairz00_2362)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 314 */
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_pairz00_3354;
if(
PAIRP(BgL_pairz00_2362))
{ /* Ieee/pairlist.scm 315 */
BgL_pairz00_3354 = BgL_pairz00_2362; }  else 
{ 
obj_t BgL_auxz00_4699;
BgL_auxz00_4699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12735)), BGl_string2641z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2362); 
FAILURE(BgL_auxz00_4699,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_pairz00_3355;
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_pairz00_3356;
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_aux1932z00_3357;
BgL_aux1932z00_3357 = 
CAR(BgL_pairz00_3354); 
if(
PAIRP(BgL_aux1932z00_3357))
{ /* Ieee/pairlist.scm 315 */
BgL_pairz00_3356 = BgL_aux1932z00_3357; }  else 
{ 
obj_t BgL_auxz00_4706;
BgL_auxz00_4706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12735)), BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1932z00_3357); 
FAILURE(BgL_auxz00_4706,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 315 */
obj_t BgL_aux1934z00_3358;
BgL_aux1934z00_3358 = 
CAR(BgL_pairz00_3356); 
if(
PAIRP(BgL_aux1934z00_3358))
{ /* Ieee/pairlist.scm 315 */
BgL_pairz00_3355 = BgL_aux1934z00_3358; }  else 
{ 
obj_t BgL_auxz00_4713;
BgL_auxz00_4713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)12735)), BGl_string2640z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1934z00_3358); 
FAILURE(BgL_auxz00_4713,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3355);} } } 
}



/* cddar */
BGL_EXPORTED_DEF obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_21)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 320 */
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_pairz00_3359;
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_pairz00_3360;
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_aux1938z00_3361;
BgL_aux1938z00_3361 = 
CAR(BgL_pairz00_21); 
if(
PAIRP(BgL_aux1938z00_3361))
{ /* Ieee/pairlist.scm 321 */
BgL_pairz00_3360 = BgL_aux1938z00_3361; }  else 
{ 
obj_t BgL_auxz00_4721;
BgL_auxz00_4721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13013)), BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1938z00_3361); 
FAILURE(BgL_auxz00_4721,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_aux1940z00_3362;
BgL_aux1940z00_3362 = 
CDR(BgL_pairz00_3360); 
if(
PAIRP(BgL_aux1940z00_3362))
{ /* Ieee/pairlist.scm 321 */
BgL_pairz00_3359 = BgL_aux1940z00_3362; }  else 
{ 
obj_t BgL_auxz00_4728;
BgL_auxz00_4728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13013)), BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1940z00_3362); 
FAILURE(BgL_auxz00_4728,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3359);} } 
}



/* _cddar */
obj_t BGl__cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2363, obj_t BgL_pairz00_2364)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 320 */
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_pairz00_3363;
if(
PAIRP(BgL_pairz00_2364))
{ /* Ieee/pairlist.scm 321 */
BgL_pairz00_3363 = BgL_pairz00_2364; }  else 
{ 
obj_t BgL_auxz00_4735;
BgL_auxz00_4735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13013)), BGl_string2643z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2364); 
FAILURE(BgL_auxz00_4735,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_pairz00_3364;
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_pairz00_3365;
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_aux1938z00_3366;
BgL_aux1938z00_3366 = 
CAR(BgL_pairz00_3363); 
if(
PAIRP(BgL_aux1938z00_3366))
{ /* Ieee/pairlist.scm 321 */
BgL_pairz00_3365 = BgL_aux1938z00_3366; }  else 
{ 
obj_t BgL_auxz00_4742;
BgL_auxz00_4742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13013)), BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1938z00_3366); 
FAILURE(BgL_auxz00_4742,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 321 */
obj_t BgL_aux1940z00_3367;
BgL_aux1940z00_3367 = 
CDR(BgL_pairz00_3365); 
if(
PAIRP(BgL_aux1940z00_3367))
{ /* Ieee/pairlist.scm 321 */
BgL_pairz00_3364 = BgL_aux1940z00_3367; }  else 
{ 
obj_t BgL_auxz00_4749;
BgL_auxz00_4749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13013)), BGl_string2642z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1940z00_3367); 
FAILURE(BgL_auxz00_4749,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3364);} } } 
}



/* cdadr */
BGL_EXPORTED_DEF obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_22)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 326 */
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_pairz00_3368;
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_pairz00_3369;
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_aux1944z00_3370;
BgL_aux1944z00_3370 = 
CDR(BgL_pairz00_22); 
if(
PAIRP(BgL_aux1944z00_3370))
{ /* Ieee/pairlist.scm 327 */
BgL_pairz00_3369 = BgL_aux1944z00_3370; }  else 
{ 
obj_t BgL_auxz00_4757;
BgL_auxz00_4757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13291)), BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1944z00_3370); 
FAILURE(BgL_auxz00_4757,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_aux1946z00_3371;
BgL_aux1946z00_3371 = 
CAR(BgL_pairz00_3369); 
if(
PAIRP(BgL_aux1946z00_3371))
{ /* Ieee/pairlist.scm 327 */
BgL_pairz00_3368 = BgL_aux1946z00_3371; }  else 
{ 
obj_t BgL_auxz00_4764;
BgL_auxz00_4764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13291)), BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1946z00_3371); 
FAILURE(BgL_auxz00_4764,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3368);} } 
}



/* _cdadr */
obj_t BGl__cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2365, obj_t BgL_pairz00_2366)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 326 */
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_pairz00_3372;
if(
PAIRP(BgL_pairz00_2366))
{ /* Ieee/pairlist.scm 327 */
BgL_pairz00_3372 = BgL_pairz00_2366; }  else 
{ 
obj_t BgL_auxz00_4771;
BgL_auxz00_4771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13291)), BGl_string2645z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2366); 
FAILURE(BgL_auxz00_4771,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_pairz00_3373;
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_pairz00_3374;
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_aux1944z00_3375;
BgL_aux1944z00_3375 = 
CDR(BgL_pairz00_3372); 
if(
PAIRP(BgL_aux1944z00_3375))
{ /* Ieee/pairlist.scm 327 */
BgL_pairz00_3374 = BgL_aux1944z00_3375; }  else 
{ 
obj_t BgL_auxz00_4778;
BgL_auxz00_4778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13291)), BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1944z00_3375); 
FAILURE(BgL_auxz00_4778,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 327 */
obj_t BgL_aux1946z00_3376;
BgL_aux1946z00_3376 = 
CAR(BgL_pairz00_3374); 
if(
PAIRP(BgL_aux1946z00_3376))
{ /* Ieee/pairlist.scm 327 */
BgL_pairz00_3373 = BgL_aux1946z00_3376; }  else 
{ 
obj_t BgL_auxz00_4785;
BgL_auxz00_4785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13291)), BGl_string2644z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1946z00_3376); 
FAILURE(BgL_auxz00_4785,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3373);} } } 
}



/* cdddr */
BGL_EXPORTED_DEF obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_23)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 332 */
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_pairz00_3377;
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_pairz00_3378;
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_aux1950z00_3379;
BgL_aux1950z00_3379 = 
CDR(BgL_pairz00_23); 
if(
PAIRP(BgL_aux1950z00_3379))
{ /* Ieee/pairlist.scm 333 */
BgL_pairz00_3378 = BgL_aux1950z00_3379; }  else 
{ 
obj_t BgL_auxz00_4793;
BgL_auxz00_4793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13569)), BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1950z00_3379); 
FAILURE(BgL_auxz00_4793,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_aux1952z00_3380;
BgL_aux1952z00_3380 = 
CDR(BgL_pairz00_3378); 
if(
PAIRP(BgL_aux1952z00_3380))
{ /* Ieee/pairlist.scm 333 */
BgL_pairz00_3377 = BgL_aux1952z00_3380; }  else 
{ 
obj_t BgL_auxz00_4800;
BgL_auxz00_4800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13569)), BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1952z00_3380); 
FAILURE(BgL_auxz00_4800,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3377);} } 
}



/* _cdddr */
obj_t BGl__cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2367, obj_t BgL_pairz00_2368)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 332 */
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_pairz00_3381;
if(
PAIRP(BgL_pairz00_2368))
{ /* Ieee/pairlist.scm 333 */
BgL_pairz00_3381 = BgL_pairz00_2368; }  else 
{ 
obj_t BgL_auxz00_4807;
BgL_auxz00_4807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13569)), BGl_string2647z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2368); 
FAILURE(BgL_auxz00_4807,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_pairz00_3382;
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_pairz00_3383;
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_aux1950z00_3384;
BgL_aux1950z00_3384 = 
CDR(BgL_pairz00_3381); 
if(
PAIRP(BgL_aux1950z00_3384))
{ /* Ieee/pairlist.scm 333 */
BgL_pairz00_3383 = BgL_aux1950z00_3384; }  else 
{ 
obj_t BgL_auxz00_4814;
BgL_auxz00_4814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13569)), BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1950z00_3384); 
FAILURE(BgL_auxz00_4814,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 333 */
obj_t BgL_aux1952z00_3385;
BgL_aux1952z00_3385 = 
CDR(BgL_pairz00_3383); 
if(
PAIRP(BgL_aux1952z00_3385))
{ /* Ieee/pairlist.scm 333 */
BgL_pairz00_3382 = BgL_aux1952z00_3385; }  else 
{ 
obj_t BgL_auxz00_4821;
BgL_auxz00_4821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13569)), BGl_string2646z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1952z00_3385); 
FAILURE(BgL_auxz00_4821,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3382);} } } 
}



/* caaaar */
BGL_EXPORTED_DEF obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_24)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 338 */
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3386;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3387;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3388;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1956z00_3389;
BgL_aux1956z00_3389 = 
CAR(BgL_pairz00_24); 
if(
PAIRP(BgL_aux1956z00_3389))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3388 = BgL_aux1956z00_3389; }  else 
{ 
obj_t BgL_auxz00_4829;
BgL_auxz00_4829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1956z00_3389); 
FAILURE(BgL_auxz00_4829,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1958z00_3390;
BgL_aux1958z00_3390 = 
CAR(BgL_pairz00_3388); 
if(
PAIRP(BgL_aux1958z00_3390))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3387 = BgL_aux1958z00_3390; }  else 
{ 
obj_t BgL_auxz00_4836;
BgL_auxz00_4836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1958z00_3390); 
FAILURE(BgL_auxz00_4836,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1960z00_3391;
BgL_aux1960z00_3391 = 
CAR(BgL_pairz00_3387); 
if(
PAIRP(BgL_aux1960z00_3391))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3386 = BgL_aux1960z00_3391; }  else 
{ 
obj_t BgL_auxz00_4843;
BgL_auxz00_4843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1960z00_3391); 
FAILURE(BgL_auxz00_4843,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3386);} } 
}



/* _caaaar */
obj_t BGl__caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2369, obj_t BgL_pairz00_2370)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 338 */
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3392;
if(
PAIRP(BgL_pairz00_2370))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3392 = BgL_pairz00_2370; }  else 
{ 
obj_t BgL_auxz00_4850;
BgL_auxz00_4850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2649z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2370); 
FAILURE(BgL_auxz00_4850,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3393;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3394;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_pairz00_3395;
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1956z00_3396;
BgL_aux1956z00_3396 = 
CAR(BgL_pairz00_3392); 
if(
PAIRP(BgL_aux1956z00_3396))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3395 = BgL_aux1956z00_3396; }  else 
{ 
obj_t BgL_auxz00_4857;
BgL_auxz00_4857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1956z00_3396); 
FAILURE(BgL_auxz00_4857,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1958z00_3397;
BgL_aux1958z00_3397 = 
CAR(BgL_pairz00_3395); 
if(
PAIRP(BgL_aux1958z00_3397))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3394 = BgL_aux1958z00_3397; }  else 
{ 
obj_t BgL_auxz00_4864;
BgL_auxz00_4864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1958z00_3397); 
FAILURE(BgL_auxz00_4864,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 339 */
obj_t BgL_aux1960z00_3398;
BgL_aux1960z00_3398 = 
CAR(BgL_pairz00_3394); 
if(
PAIRP(BgL_aux1960z00_3398))
{ /* Ieee/pairlist.scm 339 */
BgL_pairz00_3393 = BgL_aux1960z00_3398; }  else 
{ 
obj_t BgL_auxz00_4871;
BgL_auxz00_4871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)13853)), BGl_string2648z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1960z00_3398); 
FAILURE(BgL_auxz00_4871,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3393);} } } 
}



/* caaadr */
BGL_EXPORTED_DEF obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_25)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 344 */
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3399;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3400;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3401;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1964z00_3402;
BgL_aux1964z00_3402 = 
CDR(BgL_pairz00_25); 
if(
PAIRP(BgL_aux1964z00_3402))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3401 = BgL_aux1964z00_3402; }  else 
{ 
obj_t BgL_auxz00_4879;
BgL_auxz00_4879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1964z00_3402); 
FAILURE(BgL_auxz00_4879,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1966z00_3403;
BgL_aux1966z00_3403 = 
CAR(BgL_pairz00_3401); 
if(
PAIRP(BgL_aux1966z00_3403))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3400 = BgL_aux1966z00_3403; }  else 
{ 
obj_t BgL_auxz00_4886;
BgL_auxz00_4886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1966z00_3403); 
FAILURE(BgL_auxz00_4886,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1968z00_3404;
BgL_aux1968z00_3404 = 
CAR(BgL_pairz00_3400); 
if(
PAIRP(BgL_aux1968z00_3404))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3399 = BgL_aux1968z00_3404; }  else 
{ 
obj_t BgL_auxz00_4893;
BgL_auxz00_4893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1968z00_3404); 
FAILURE(BgL_auxz00_4893,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3399);} } 
}



/* _caaadr */
obj_t BGl__caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2371, obj_t BgL_pairz00_2372)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 344 */
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3405;
if(
PAIRP(BgL_pairz00_2372))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3405 = BgL_pairz00_2372; }  else 
{ 
obj_t BgL_auxz00_4900;
BgL_auxz00_4900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2651z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2372); 
FAILURE(BgL_auxz00_4900,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3406;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3407;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_pairz00_3408;
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1964z00_3409;
BgL_aux1964z00_3409 = 
CDR(BgL_pairz00_3405); 
if(
PAIRP(BgL_aux1964z00_3409))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3408 = BgL_aux1964z00_3409; }  else 
{ 
obj_t BgL_auxz00_4907;
BgL_auxz00_4907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1964z00_3409); 
FAILURE(BgL_auxz00_4907,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1966z00_3410;
BgL_aux1966z00_3410 = 
CAR(BgL_pairz00_3408); 
if(
PAIRP(BgL_aux1966z00_3410))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3407 = BgL_aux1966z00_3410; }  else 
{ 
obj_t BgL_auxz00_4914;
BgL_auxz00_4914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1966z00_3410); 
FAILURE(BgL_auxz00_4914,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 345 */
obj_t BgL_aux1968z00_3411;
BgL_aux1968z00_3411 = 
CAR(BgL_pairz00_3407); 
if(
PAIRP(BgL_aux1968z00_3411))
{ /* Ieee/pairlist.scm 345 */
BgL_pairz00_3406 = BgL_aux1968z00_3411; }  else 
{ 
obj_t BgL_auxz00_4921;
BgL_auxz00_4921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14138)), BGl_string2650z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1968z00_3411); 
FAILURE(BgL_auxz00_4921,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3406);} } } 
}



/* caadar */
BGL_EXPORTED_DEF obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_26)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 350 */
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3412;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3413;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3414;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1972z00_3415;
BgL_aux1972z00_3415 = 
CAR(BgL_pairz00_26); 
if(
PAIRP(BgL_aux1972z00_3415))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3414 = BgL_aux1972z00_3415; }  else 
{ 
obj_t BgL_auxz00_4929;
BgL_auxz00_4929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1972z00_3415); 
FAILURE(BgL_auxz00_4929,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1974z00_3416;
BgL_aux1974z00_3416 = 
CDR(BgL_pairz00_3414); 
if(
PAIRP(BgL_aux1974z00_3416))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3413 = BgL_aux1974z00_3416; }  else 
{ 
obj_t BgL_auxz00_4936;
BgL_auxz00_4936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1974z00_3416); 
FAILURE(BgL_auxz00_4936,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1976z00_3417;
BgL_aux1976z00_3417 = 
CAR(BgL_pairz00_3413); 
if(
PAIRP(BgL_aux1976z00_3417))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3412 = BgL_aux1976z00_3417; }  else 
{ 
obj_t BgL_auxz00_4943;
BgL_auxz00_4943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1976z00_3417); 
FAILURE(BgL_auxz00_4943,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3412);} } 
}



/* _caadar */
obj_t BGl__caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2373, obj_t BgL_pairz00_2374)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 350 */
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3418;
if(
PAIRP(BgL_pairz00_2374))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3418 = BgL_pairz00_2374; }  else 
{ 
obj_t BgL_auxz00_4950;
BgL_auxz00_4950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2653z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2374); 
FAILURE(BgL_auxz00_4950,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3419;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3420;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_pairz00_3421;
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1972z00_3422;
BgL_aux1972z00_3422 = 
CAR(BgL_pairz00_3418); 
if(
PAIRP(BgL_aux1972z00_3422))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3421 = BgL_aux1972z00_3422; }  else 
{ 
obj_t BgL_auxz00_4957;
BgL_auxz00_4957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1972z00_3422); 
FAILURE(BgL_auxz00_4957,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1974z00_3423;
BgL_aux1974z00_3423 = 
CDR(BgL_pairz00_3421); 
if(
PAIRP(BgL_aux1974z00_3423))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3420 = BgL_aux1974z00_3423; }  else 
{ 
obj_t BgL_auxz00_4964;
BgL_auxz00_4964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1974z00_3423); 
FAILURE(BgL_auxz00_4964,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 351 */
obj_t BgL_aux1976z00_3424;
BgL_aux1976z00_3424 = 
CAR(BgL_pairz00_3420); 
if(
PAIRP(BgL_aux1976z00_3424))
{ /* Ieee/pairlist.scm 351 */
BgL_pairz00_3419 = BgL_aux1976z00_3424; }  else 
{ 
obj_t BgL_auxz00_4971;
BgL_auxz00_4971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14423)), BGl_string2652z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1976z00_3424); 
FAILURE(BgL_auxz00_4971,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3419);} } } 
}



/* cadaar */
BGL_EXPORTED_DEF obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_27)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 356 */
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3425;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3426;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3427;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1980z00_3428;
BgL_aux1980z00_3428 = 
CAR(BgL_pairz00_27); 
if(
PAIRP(BgL_aux1980z00_3428))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3427 = BgL_aux1980z00_3428; }  else 
{ 
obj_t BgL_auxz00_4979;
BgL_auxz00_4979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1980z00_3428); 
FAILURE(BgL_auxz00_4979,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1982z00_3429;
BgL_aux1982z00_3429 = 
CAR(BgL_pairz00_3427); 
if(
PAIRP(BgL_aux1982z00_3429))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3426 = BgL_aux1982z00_3429; }  else 
{ 
obj_t BgL_auxz00_4986;
BgL_auxz00_4986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1982z00_3429); 
FAILURE(BgL_auxz00_4986,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1984z00_3430;
BgL_aux1984z00_3430 = 
CDR(BgL_pairz00_3426); 
if(
PAIRP(BgL_aux1984z00_3430))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3425 = BgL_aux1984z00_3430; }  else 
{ 
obj_t BgL_auxz00_4993;
BgL_auxz00_4993 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1984z00_3430); 
FAILURE(BgL_auxz00_4993,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3425);} } 
}



/* _cadaar */
obj_t BGl__cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2375, obj_t BgL_pairz00_2376)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 356 */
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3431;
if(
PAIRP(BgL_pairz00_2376))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3431 = BgL_pairz00_2376; }  else 
{ 
obj_t BgL_auxz00_5000;
BgL_auxz00_5000 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2655z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2376); 
FAILURE(BgL_auxz00_5000,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3432;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3433;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_pairz00_3434;
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1980z00_3435;
BgL_aux1980z00_3435 = 
CAR(BgL_pairz00_3431); 
if(
PAIRP(BgL_aux1980z00_3435))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3434 = BgL_aux1980z00_3435; }  else 
{ 
obj_t BgL_auxz00_5007;
BgL_auxz00_5007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1980z00_3435); 
FAILURE(BgL_auxz00_5007,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1982z00_3436;
BgL_aux1982z00_3436 = 
CAR(BgL_pairz00_3434); 
if(
PAIRP(BgL_aux1982z00_3436))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3433 = BgL_aux1982z00_3436; }  else 
{ 
obj_t BgL_auxz00_5014;
BgL_auxz00_5014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1982z00_3436); 
FAILURE(BgL_auxz00_5014,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 357 */
obj_t BgL_aux1984z00_3437;
BgL_aux1984z00_3437 = 
CDR(BgL_pairz00_3433); 
if(
PAIRP(BgL_aux1984z00_3437))
{ /* Ieee/pairlist.scm 357 */
BgL_pairz00_3432 = BgL_aux1984z00_3437; }  else 
{ 
obj_t BgL_auxz00_5021;
BgL_auxz00_5021 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14708)), BGl_string2654z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1984z00_3437); 
FAILURE(BgL_auxz00_5021,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3432);} } } 
}



/* cdaaar */
BGL_EXPORTED_DEF obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_28)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 362 */
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3438;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3439;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3440;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1988z00_3441;
BgL_aux1988z00_3441 = 
CAR(BgL_pairz00_28); 
if(
PAIRP(BgL_aux1988z00_3441))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3440 = BgL_aux1988z00_3441; }  else 
{ 
obj_t BgL_auxz00_5029;
BgL_auxz00_5029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1988z00_3441); 
FAILURE(BgL_auxz00_5029,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1990z00_3442;
BgL_aux1990z00_3442 = 
CAR(BgL_pairz00_3440); 
if(
PAIRP(BgL_aux1990z00_3442))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3439 = BgL_aux1990z00_3442; }  else 
{ 
obj_t BgL_auxz00_5036;
BgL_auxz00_5036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1990z00_3442); 
FAILURE(BgL_auxz00_5036,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1992z00_3443;
BgL_aux1992z00_3443 = 
CAR(BgL_pairz00_3439); 
if(
PAIRP(BgL_aux1992z00_3443))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3438 = BgL_aux1992z00_3443; }  else 
{ 
obj_t BgL_auxz00_5043;
BgL_auxz00_5043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1992z00_3443); 
FAILURE(BgL_auxz00_5043,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3438);} } 
}



/* _cdaaar */
obj_t BGl__cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2377, obj_t BgL_pairz00_2378)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 362 */
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3444;
if(
PAIRP(BgL_pairz00_2378))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3444 = BgL_pairz00_2378; }  else 
{ 
obj_t BgL_auxz00_5050;
BgL_auxz00_5050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2657z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2378); 
FAILURE(BgL_auxz00_5050,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3445;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3446;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_pairz00_3447;
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1988z00_3448;
BgL_aux1988z00_3448 = 
CAR(BgL_pairz00_3444); 
if(
PAIRP(BgL_aux1988z00_3448))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3447 = BgL_aux1988z00_3448; }  else 
{ 
obj_t BgL_auxz00_5057;
BgL_auxz00_5057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1988z00_3448); 
FAILURE(BgL_auxz00_5057,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1990z00_3449;
BgL_aux1990z00_3449 = 
CAR(BgL_pairz00_3447); 
if(
PAIRP(BgL_aux1990z00_3449))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3446 = BgL_aux1990z00_3449; }  else 
{ 
obj_t BgL_auxz00_5064;
BgL_auxz00_5064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1990z00_3449); 
FAILURE(BgL_auxz00_5064,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 363 */
obj_t BgL_aux1992z00_3450;
BgL_aux1992z00_3450 = 
CAR(BgL_pairz00_3446); 
if(
PAIRP(BgL_aux1992z00_3450))
{ /* Ieee/pairlist.scm 363 */
BgL_pairz00_3445 = BgL_aux1992z00_3450; }  else 
{ 
obj_t BgL_auxz00_5071;
BgL_auxz00_5071 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)14993)), BGl_string2656z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1992z00_3450); 
FAILURE(BgL_auxz00_5071,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3445);} } } 
}



/* caaddr */
BGL_EXPORTED_DEF obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_29)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 368 */
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3451;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3452;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3453;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux1996z00_3454;
BgL_aux1996z00_3454 = 
CDR(BgL_pairz00_29); 
if(
PAIRP(BgL_aux1996z00_3454))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3453 = BgL_aux1996z00_3454; }  else 
{ 
obj_t BgL_auxz00_5079;
BgL_auxz00_5079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1996z00_3454); 
FAILURE(BgL_auxz00_5079,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux1998z00_3455;
BgL_aux1998z00_3455 = 
CDR(BgL_pairz00_3453); 
if(
PAIRP(BgL_aux1998z00_3455))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3452 = BgL_aux1998z00_3455; }  else 
{ 
obj_t BgL_auxz00_5086;
BgL_auxz00_5086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1998z00_3455); 
FAILURE(BgL_auxz00_5086,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux2000z00_3456;
BgL_aux2000z00_3456 = 
CAR(BgL_pairz00_3452); 
if(
PAIRP(BgL_aux2000z00_3456))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3451 = BgL_aux2000z00_3456; }  else 
{ 
obj_t BgL_auxz00_5093;
BgL_auxz00_5093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2000z00_3456); 
FAILURE(BgL_auxz00_5093,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3451);} } 
}



/* _caaddr */
obj_t BGl__caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2379, obj_t BgL_pairz00_2380)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 368 */
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3457;
if(
PAIRP(BgL_pairz00_2380))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3457 = BgL_pairz00_2380; }  else 
{ 
obj_t BgL_auxz00_5100;
BgL_auxz00_5100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2659z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2380); 
FAILURE(BgL_auxz00_5100,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3458;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3459;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_pairz00_3460;
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux1996z00_3461;
BgL_aux1996z00_3461 = 
CDR(BgL_pairz00_3457); 
if(
PAIRP(BgL_aux1996z00_3461))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3460 = BgL_aux1996z00_3461; }  else 
{ 
obj_t BgL_auxz00_5107;
BgL_auxz00_5107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1996z00_3461); 
FAILURE(BgL_auxz00_5107,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux1998z00_3462;
BgL_aux1998z00_3462 = 
CDR(BgL_pairz00_3460); 
if(
PAIRP(BgL_aux1998z00_3462))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3459 = BgL_aux1998z00_3462; }  else 
{ 
obj_t BgL_auxz00_5114;
BgL_auxz00_5114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux1998z00_3462); 
FAILURE(BgL_auxz00_5114,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 369 */
obj_t BgL_aux2000z00_3463;
BgL_aux2000z00_3463 = 
CAR(BgL_pairz00_3459); 
if(
PAIRP(BgL_aux2000z00_3463))
{ /* Ieee/pairlist.scm 369 */
BgL_pairz00_3458 = BgL_aux2000z00_3463; }  else 
{ 
obj_t BgL_auxz00_5121;
BgL_auxz00_5121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15278)), BGl_string2658z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2000z00_3463); 
FAILURE(BgL_auxz00_5121,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3458);} } } 
}



/* caddar */
BGL_EXPORTED_DEF obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_30)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 374 */
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3464;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3465;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3466;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2004z00_3467;
BgL_aux2004z00_3467 = 
CAR(BgL_pairz00_30); 
if(
PAIRP(BgL_aux2004z00_3467))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3466 = BgL_aux2004z00_3467; }  else 
{ 
obj_t BgL_auxz00_5129;
BgL_auxz00_5129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2004z00_3467); 
FAILURE(BgL_auxz00_5129,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2006z00_3468;
BgL_aux2006z00_3468 = 
CDR(BgL_pairz00_3466); 
if(
PAIRP(BgL_aux2006z00_3468))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3465 = BgL_aux2006z00_3468; }  else 
{ 
obj_t BgL_auxz00_5136;
BgL_auxz00_5136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2006z00_3468); 
FAILURE(BgL_auxz00_5136,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2008z00_3469;
BgL_aux2008z00_3469 = 
CDR(BgL_pairz00_3465); 
if(
PAIRP(BgL_aux2008z00_3469))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3464 = BgL_aux2008z00_3469; }  else 
{ 
obj_t BgL_auxz00_5143;
BgL_auxz00_5143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2008z00_3469); 
FAILURE(BgL_auxz00_5143,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3464);} } 
}



/* _caddar */
obj_t BGl__caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2381, obj_t BgL_pairz00_2382)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 374 */
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3470;
if(
PAIRP(BgL_pairz00_2382))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3470 = BgL_pairz00_2382; }  else 
{ 
obj_t BgL_auxz00_5150;
BgL_auxz00_5150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2661z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2382); 
FAILURE(BgL_auxz00_5150,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3471;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3472;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_pairz00_3473;
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2004z00_3474;
BgL_aux2004z00_3474 = 
CAR(BgL_pairz00_3470); 
if(
PAIRP(BgL_aux2004z00_3474))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3473 = BgL_aux2004z00_3474; }  else 
{ 
obj_t BgL_auxz00_5157;
BgL_auxz00_5157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2004z00_3474); 
FAILURE(BgL_auxz00_5157,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2006z00_3475;
BgL_aux2006z00_3475 = 
CDR(BgL_pairz00_3473); 
if(
PAIRP(BgL_aux2006z00_3475))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3472 = BgL_aux2006z00_3475; }  else 
{ 
obj_t BgL_auxz00_5164;
BgL_auxz00_5164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2006z00_3475); 
FAILURE(BgL_auxz00_5164,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 375 */
obj_t BgL_aux2008z00_3476;
BgL_aux2008z00_3476 = 
CDR(BgL_pairz00_3472); 
if(
PAIRP(BgL_aux2008z00_3476))
{ /* Ieee/pairlist.scm 375 */
BgL_pairz00_3471 = BgL_aux2008z00_3476; }  else 
{ 
obj_t BgL_auxz00_5171;
BgL_auxz00_5171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15563)), BGl_string2660z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2008z00_3476); 
FAILURE(BgL_auxz00_5171,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3471);} } } 
}



/* cadadr */
BGL_EXPORTED_DEF obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_31)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 380 */
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3477;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3478;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3479;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2012z00_3480;
BgL_aux2012z00_3480 = 
CDR(BgL_pairz00_31); 
if(
PAIRP(BgL_aux2012z00_3480))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3479 = BgL_aux2012z00_3480; }  else 
{ 
obj_t BgL_auxz00_5179;
BgL_auxz00_5179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2012z00_3480); 
FAILURE(BgL_auxz00_5179,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2014z00_3481;
BgL_aux2014z00_3481 = 
CAR(BgL_pairz00_3479); 
if(
PAIRP(BgL_aux2014z00_3481))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3478 = BgL_aux2014z00_3481; }  else 
{ 
obj_t BgL_auxz00_5186;
BgL_auxz00_5186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2014z00_3481); 
FAILURE(BgL_auxz00_5186,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2016z00_3482;
BgL_aux2016z00_3482 = 
CDR(BgL_pairz00_3478); 
if(
PAIRP(BgL_aux2016z00_3482))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3477 = BgL_aux2016z00_3482; }  else 
{ 
obj_t BgL_auxz00_5193;
BgL_auxz00_5193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2016z00_3482); 
FAILURE(BgL_auxz00_5193,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3477);} } 
}



/* _cadadr */
obj_t BGl__cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2383, obj_t BgL_pairz00_2384)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 380 */
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3483;
if(
PAIRP(BgL_pairz00_2384))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3483 = BgL_pairz00_2384; }  else 
{ 
obj_t BgL_auxz00_5200;
BgL_auxz00_5200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2663z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2384); 
FAILURE(BgL_auxz00_5200,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3484;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3485;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_pairz00_3486;
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2012z00_3487;
BgL_aux2012z00_3487 = 
CDR(BgL_pairz00_3483); 
if(
PAIRP(BgL_aux2012z00_3487))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3486 = BgL_aux2012z00_3487; }  else 
{ 
obj_t BgL_auxz00_5207;
BgL_auxz00_5207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2012z00_3487); 
FAILURE(BgL_auxz00_5207,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2014z00_3488;
BgL_aux2014z00_3488 = 
CAR(BgL_pairz00_3486); 
if(
PAIRP(BgL_aux2014z00_3488))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3485 = BgL_aux2014z00_3488; }  else 
{ 
obj_t BgL_auxz00_5214;
BgL_auxz00_5214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2014z00_3488); 
FAILURE(BgL_auxz00_5214,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 381 */
obj_t BgL_aux2016z00_3489;
BgL_aux2016z00_3489 = 
CDR(BgL_pairz00_3485); 
if(
PAIRP(BgL_aux2016z00_3489))
{ /* Ieee/pairlist.scm 381 */
BgL_pairz00_3484 = BgL_aux2016z00_3489; }  else 
{ 
obj_t BgL_auxz00_5221;
BgL_auxz00_5221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)15848)), BGl_string2662z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2016z00_3489); 
FAILURE(BgL_auxz00_5221,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3484);} } } 
}



/* cadddr */
BGL_EXPORTED_DEF obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_32)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 386 */
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3490;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3491;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3492;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2020z00_3493;
BgL_aux2020z00_3493 = 
CDR(BgL_pairz00_32); 
if(
PAIRP(BgL_aux2020z00_3493))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3492 = BgL_aux2020z00_3493; }  else 
{ 
obj_t BgL_auxz00_5229;
BgL_auxz00_5229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2020z00_3493); 
FAILURE(BgL_auxz00_5229,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2022z00_3494;
BgL_aux2022z00_3494 = 
CDR(BgL_pairz00_3492); 
if(
PAIRP(BgL_aux2022z00_3494))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3491 = BgL_aux2022z00_3494; }  else 
{ 
obj_t BgL_auxz00_5236;
BgL_auxz00_5236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2022z00_3494); 
FAILURE(BgL_auxz00_5236,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2024z00_3495;
BgL_aux2024z00_3495 = 
CDR(BgL_pairz00_3491); 
if(
PAIRP(BgL_aux2024z00_3495))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3490 = BgL_aux2024z00_3495; }  else 
{ 
obj_t BgL_auxz00_5243;
BgL_auxz00_5243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2024z00_3495); 
FAILURE(BgL_auxz00_5243,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3490);} } 
}



/* _cadddr */
obj_t BGl__cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2385, obj_t BgL_pairz00_2386)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 386 */
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3496;
if(
PAIRP(BgL_pairz00_2386))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3496 = BgL_pairz00_2386; }  else 
{ 
obj_t BgL_auxz00_5250;
BgL_auxz00_5250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2665z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2386); 
FAILURE(BgL_auxz00_5250,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3497;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3498;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_pairz00_3499;
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2020z00_3500;
BgL_aux2020z00_3500 = 
CDR(BgL_pairz00_3496); 
if(
PAIRP(BgL_aux2020z00_3500))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3499 = BgL_aux2020z00_3500; }  else 
{ 
obj_t BgL_auxz00_5257;
BgL_auxz00_5257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2020z00_3500); 
FAILURE(BgL_auxz00_5257,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2022z00_3501;
BgL_aux2022z00_3501 = 
CDR(BgL_pairz00_3499); 
if(
PAIRP(BgL_aux2022z00_3501))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3498 = BgL_aux2022z00_3501; }  else 
{ 
obj_t BgL_auxz00_5264;
BgL_auxz00_5264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2022z00_3501); 
FAILURE(BgL_auxz00_5264,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 387 */
obj_t BgL_aux2024z00_3502;
BgL_aux2024z00_3502 = 
CDR(BgL_pairz00_3498); 
if(
PAIRP(BgL_aux2024z00_3502))
{ /* Ieee/pairlist.scm 387 */
BgL_pairz00_3497 = BgL_aux2024z00_3502; }  else 
{ 
obj_t BgL_auxz00_5271;
BgL_auxz00_5271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16133)), BGl_string2664z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2024z00_3502); 
FAILURE(BgL_auxz00_5271,BFALSE,BFALSE);} } } 
return 
CAR(BgL_pairz00_3497);} } } 
}



/* cdaadr */
BGL_EXPORTED_DEF obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_33)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 392 */
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3503;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3504;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3505;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2028z00_3506;
BgL_aux2028z00_3506 = 
CDR(BgL_pairz00_33); 
if(
PAIRP(BgL_aux2028z00_3506))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3505 = BgL_aux2028z00_3506; }  else 
{ 
obj_t BgL_auxz00_5279;
BgL_auxz00_5279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2028z00_3506); 
FAILURE(BgL_auxz00_5279,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2030z00_3507;
BgL_aux2030z00_3507 = 
CAR(BgL_pairz00_3505); 
if(
PAIRP(BgL_aux2030z00_3507))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3504 = BgL_aux2030z00_3507; }  else 
{ 
obj_t BgL_auxz00_5286;
BgL_auxz00_5286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2030z00_3507); 
FAILURE(BgL_auxz00_5286,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2032z00_3508;
BgL_aux2032z00_3508 = 
CAR(BgL_pairz00_3504); 
if(
PAIRP(BgL_aux2032z00_3508))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3503 = BgL_aux2032z00_3508; }  else 
{ 
obj_t BgL_auxz00_5293;
BgL_auxz00_5293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2032z00_3508); 
FAILURE(BgL_auxz00_5293,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3503);} } 
}



/* _cdaadr */
obj_t BGl__cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2387, obj_t BgL_pairz00_2388)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 392 */
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3509;
if(
PAIRP(BgL_pairz00_2388))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3509 = BgL_pairz00_2388; }  else 
{ 
obj_t BgL_auxz00_5300;
BgL_auxz00_5300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2667z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2388); 
FAILURE(BgL_auxz00_5300,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3510;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3511;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_pairz00_3512;
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2028z00_3513;
BgL_aux2028z00_3513 = 
CDR(BgL_pairz00_3509); 
if(
PAIRP(BgL_aux2028z00_3513))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3512 = BgL_aux2028z00_3513; }  else 
{ 
obj_t BgL_auxz00_5307;
BgL_auxz00_5307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2028z00_3513); 
FAILURE(BgL_auxz00_5307,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2030z00_3514;
BgL_aux2030z00_3514 = 
CAR(BgL_pairz00_3512); 
if(
PAIRP(BgL_aux2030z00_3514))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3511 = BgL_aux2030z00_3514; }  else 
{ 
obj_t BgL_auxz00_5314;
BgL_auxz00_5314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2030z00_3514); 
FAILURE(BgL_auxz00_5314,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 393 */
obj_t BgL_aux2032z00_3515;
BgL_aux2032z00_3515 = 
CAR(BgL_pairz00_3511); 
if(
PAIRP(BgL_aux2032z00_3515))
{ /* Ieee/pairlist.scm 393 */
BgL_pairz00_3510 = BgL_aux2032z00_3515; }  else 
{ 
obj_t BgL_auxz00_5321;
BgL_auxz00_5321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16418)), BGl_string2666z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2032z00_3515); 
FAILURE(BgL_auxz00_5321,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3510);} } } 
}



/* cdaddr */
BGL_EXPORTED_DEF obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_34)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 398 */
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3516;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3517;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3518;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2036z00_3519;
BgL_aux2036z00_3519 = 
CDR(BgL_pairz00_34); 
if(
PAIRP(BgL_aux2036z00_3519))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3518 = BgL_aux2036z00_3519; }  else 
{ 
obj_t BgL_auxz00_5329;
BgL_auxz00_5329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2036z00_3519); 
FAILURE(BgL_auxz00_5329,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2038z00_3520;
BgL_aux2038z00_3520 = 
CDR(BgL_pairz00_3518); 
if(
PAIRP(BgL_aux2038z00_3520))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3517 = BgL_aux2038z00_3520; }  else 
{ 
obj_t BgL_auxz00_5336;
BgL_auxz00_5336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2038z00_3520); 
FAILURE(BgL_auxz00_5336,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2040z00_3521;
BgL_aux2040z00_3521 = 
CAR(BgL_pairz00_3517); 
if(
PAIRP(BgL_aux2040z00_3521))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3516 = BgL_aux2040z00_3521; }  else 
{ 
obj_t BgL_auxz00_5343;
BgL_auxz00_5343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2040z00_3521); 
FAILURE(BgL_auxz00_5343,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3516);} } 
}



/* _cdaddr */
obj_t BGl__cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2389, obj_t BgL_pairz00_2390)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 398 */
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3522;
if(
PAIRP(BgL_pairz00_2390))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3522 = BgL_pairz00_2390; }  else 
{ 
obj_t BgL_auxz00_5350;
BgL_auxz00_5350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2669z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2390); 
FAILURE(BgL_auxz00_5350,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3523;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3524;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_pairz00_3525;
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2036z00_3526;
BgL_aux2036z00_3526 = 
CDR(BgL_pairz00_3522); 
if(
PAIRP(BgL_aux2036z00_3526))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3525 = BgL_aux2036z00_3526; }  else 
{ 
obj_t BgL_auxz00_5357;
BgL_auxz00_5357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2036z00_3526); 
FAILURE(BgL_auxz00_5357,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2038z00_3527;
BgL_aux2038z00_3527 = 
CDR(BgL_pairz00_3525); 
if(
PAIRP(BgL_aux2038z00_3527))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3524 = BgL_aux2038z00_3527; }  else 
{ 
obj_t BgL_auxz00_5364;
BgL_auxz00_5364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2038z00_3527); 
FAILURE(BgL_auxz00_5364,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 399 */
obj_t BgL_aux2040z00_3528;
BgL_aux2040z00_3528 = 
CAR(BgL_pairz00_3524); 
if(
PAIRP(BgL_aux2040z00_3528))
{ /* Ieee/pairlist.scm 399 */
BgL_pairz00_3523 = BgL_aux2040z00_3528; }  else 
{ 
obj_t BgL_auxz00_5371;
BgL_auxz00_5371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16703)), BGl_string2668z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2040z00_3528); 
FAILURE(BgL_auxz00_5371,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3523);} } } 
}



/* cddaar */
BGL_EXPORTED_DEF obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_35)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 404 */
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3529;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3530;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3531;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2044z00_3532;
BgL_aux2044z00_3532 = 
CAR(BgL_pairz00_35); 
if(
PAIRP(BgL_aux2044z00_3532))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3531 = BgL_aux2044z00_3532; }  else 
{ 
obj_t BgL_auxz00_5379;
BgL_auxz00_5379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2044z00_3532); 
FAILURE(BgL_auxz00_5379,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2046z00_3533;
BgL_aux2046z00_3533 = 
CAR(BgL_pairz00_3531); 
if(
PAIRP(BgL_aux2046z00_3533))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3530 = BgL_aux2046z00_3533; }  else 
{ 
obj_t BgL_auxz00_5386;
BgL_auxz00_5386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2046z00_3533); 
FAILURE(BgL_auxz00_5386,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2048z00_3534;
BgL_aux2048z00_3534 = 
CDR(BgL_pairz00_3530); 
if(
PAIRP(BgL_aux2048z00_3534))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3529 = BgL_aux2048z00_3534; }  else 
{ 
obj_t BgL_auxz00_5393;
BgL_auxz00_5393 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2048z00_3534); 
FAILURE(BgL_auxz00_5393,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3529);} } 
}



/* _cddaar */
obj_t BGl__cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2391, obj_t BgL_pairz00_2392)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 404 */
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3535;
if(
PAIRP(BgL_pairz00_2392))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3535 = BgL_pairz00_2392; }  else 
{ 
obj_t BgL_auxz00_5400;
BgL_auxz00_5400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2671z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2392); 
FAILURE(BgL_auxz00_5400,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3536;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3537;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_pairz00_3538;
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2044z00_3539;
BgL_aux2044z00_3539 = 
CAR(BgL_pairz00_3535); 
if(
PAIRP(BgL_aux2044z00_3539))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3538 = BgL_aux2044z00_3539; }  else 
{ 
obj_t BgL_auxz00_5407;
BgL_auxz00_5407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2044z00_3539); 
FAILURE(BgL_auxz00_5407,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2046z00_3540;
BgL_aux2046z00_3540 = 
CAR(BgL_pairz00_3538); 
if(
PAIRP(BgL_aux2046z00_3540))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3537 = BgL_aux2046z00_3540; }  else 
{ 
obj_t BgL_auxz00_5414;
BgL_auxz00_5414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2046z00_3540); 
FAILURE(BgL_auxz00_5414,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 405 */
obj_t BgL_aux2048z00_3541;
BgL_aux2048z00_3541 = 
CDR(BgL_pairz00_3537); 
if(
PAIRP(BgL_aux2048z00_3541))
{ /* Ieee/pairlist.scm 405 */
BgL_pairz00_3536 = BgL_aux2048z00_3541; }  else 
{ 
obj_t BgL_auxz00_5421;
BgL_auxz00_5421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)16988)), BGl_string2670z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2048z00_3541); 
FAILURE(BgL_auxz00_5421,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3536);} } } 
}



/* cddadr */
BGL_EXPORTED_DEF obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_36)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 410 */
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3542;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3543;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3544;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2052z00_3545;
BgL_aux2052z00_3545 = 
CDR(BgL_pairz00_36); 
if(
PAIRP(BgL_aux2052z00_3545))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3544 = BgL_aux2052z00_3545; }  else 
{ 
obj_t BgL_auxz00_5429;
BgL_auxz00_5429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2052z00_3545); 
FAILURE(BgL_auxz00_5429,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2054z00_3546;
BgL_aux2054z00_3546 = 
CAR(BgL_pairz00_3544); 
if(
PAIRP(BgL_aux2054z00_3546))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3543 = BgL_aux2054z00_3546; }  else 
{ 
obj_t BgL_auxz00_5436;
BgL_auxz00_5436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2054z00_3546); 
FAILURE(BgL_auxz00_5436,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2056z00_3547;
BgL_aux2056z00_3547 = 
CDR(BgL_pairz00_3543); 
if(
PAIRP(BgL_aux2056z00_3547))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3542 = BgL_aux2056z00_3547; }  else 
{ 
obj_t BgL_auxz00_5443;
BgL_auxz00_5443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2056z00_3547); 
FAILURE(BgL_auxz00_5443,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3542);} } 
}



/* _cddadr */
obj_t BGl__cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2393, obj_t BgL_pairz00_2394)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 410 */
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3548;
if(
PAIRP(BgL_pairz00_2394))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3548 = BgL_pairz00_2394; }  else 
{ 
obj_t BgL_auxz00_5450;
BgL_auxz00_5450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2673z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2394); 
FAILURE(BgL_auxz00_5450,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3549;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3550;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_pairz00_3551;
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2052z00_3552;
BgL_aux2052z00_3552 = 
CDR(BgL_pairz00_3548); 
if(
PAIRP(BgL_aux2052z00_3552))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3551 = BgL_aux2052z00_3552; }  else 
{ 
obj_t BgL_auxz00_5457;
BgL_auxz00_5457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2052z00_3552); 
FAILURE(BgL_auxz00_5457,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2054z00_3553;
BgL_aux2054z00_3553 = 
CAR(BgL_pairz00_3551); 
if(
PAIRP(BgL_aux2054z00_3553))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3550 = BgL_aux2054z00_3553; }  else 
{ 
obj_t BgL_auxz00_5464;
BgL_auxz00_5464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2054z00_3553); 
FAILURE(BgL_auxz00_5464,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 411 */
obj_t BgL_aux2056z00_3554;
BgL_aux2056z00_3554 = 
CDR(BgL_pairz00_3550); 
if(
PAIRP(BgL_aux2056z00_3554))
{ /* Ieee/pairlist.scm 411 */
BgL_pairz00_3549 = BgL_aux2056z00_3554; }  else 
{ 
obj_t BgL_auxz00_5471;
BgL_auxz00_5471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17273)), BGl_string2672z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2056z00_3554); 
FAILURE(BgL_auxz00_5471,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3549);} } } 
}



/* cdadar */
BGL_EXPORTED_DEF obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_37)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 416 */
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3555;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3556;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3557;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2060z00_3558;
BgL_aux2060z00_3558 = 
CAR(BgL_pairz00_37); 
if(
PAIRP(BgL_aux2060z00_3558))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3557 = BgL_aux2060z00_3558; }  else 
{ 
obj_t BgL_auxz00_5479;
BgL_auxz00_5479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2060z00_3558); 
FAILURE(BgL_auxz00_5479,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2062z00_3559;
BgL_aux2062z00_3559 = 
CDR(BgL_pairz00_3557); 
if(
PAIRP(BgL_aux2062z00_3559))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3556 = BgL_aux2062z00_3559; }  else 
{ 
obj_t BgL_auxz00_5486;
BgL_auxz00_5486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2062z00_3559); 
FAILURE(BgL_auxz00_5486,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2064z00_3560;
BgL_aux2064z00_3560 = 
CAR(BgL_pairz00_3556); 
if(
PAIRP(BgL_aux2064z00_3560))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3555 = BgL_aux2064z00_3560; }  else 
{ 
obj_t BgL_auxz00_5493;
BgL_auxz00_5493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2064z00_3560); 
FAILURE(BgL_auxz00_5493,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3555);} } 
}



/* _cdadar */
obj_t BGl__cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2395, obj_t BgL_pairz00_2396)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 416 */
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3561;
if(
PAIRP(BgL_pairz00_2396))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3561 = BgL_pairz00_2396; }  else 
{ 
obj_t BgL_auxz00_5500;
BgL_auxz00_5500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2675z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2396); 
FAILURE(BgL_auxz00_5500,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3562;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3563;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_pairz00_3564;
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2060z00_3565;
BgL_aux2060z00_3565 = 
CAR(BgL_pairz00_3561); 
if(
PAIRP(BgL_aux2060z00_3565))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3564 = BgL_aux2060z00_3565; }  else 
{ 
obj_t BgL_auxz00_5507;
BgL_auxz00_5507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2060z00_3565); 
FAILURE(BgL_auxz00_5507,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2062z00_3566;
BgL_aux2062z00_3566 = 
CDR(BgL_pairz00_3564); 
if(
PAIRP(BgL_aux2062z00_3566))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3563 = BgL_aux2062z00_3566; }  else 
{ 
obj_t BgL_auxz00_5514;
BgL_auxz00_5514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2062z00_3566); 
FAILURE(BgL_auxz00_5514,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 417 */
obj_t BgL_aux2064z00_3567;
BgL_aux2064z00_3567 = 
CAR(BgL_pairz00_3563); 
if(
PAIRP(BgL_aux2064z00_3567))
{ /* Ieee/pairlist.scm 417 */
BgL_pairz00_3562 = BgL_aux2064z00_3567; }  else 
{ 
obj_t BgL_auxz00_5521;
BgL_auxz00_5521 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17558)), BGl_string2674z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2064z00_3567); 
FAILURE(BgL_auxz00_5521,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3562);} } } 
}



/* cdddar */
BGL_EXPORTED_DEF obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_38)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 422 */
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3568;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3569;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3570;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2068z00_3571;
BgL_aux2068z00_3571 = 
CAR(BgL_pairz00_38); 
if(
PAIRP(BgL_aux2068z00_3571))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3570 = BgL_aux2068z00_3571; }  else 
{ 
obj_t BgL_auxz00_5529;
BgL_auxz00_5529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2068z00_3571); 
FAILURE(BgL_auxz00_5529,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2070z00_3572;
BgL_aux2070z00_3572 = 
CDR(BgL_pairz00_3570); 
if(
PAIRP(BgL_aux2070z00_3572))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3569 = BgL_aux2070z00_3572; }  else 
{ 
obj_t BgL_auxz00_5536;
BgL_auxz00_5536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2070z00_3572); 
FAILURE(BgL_auxz00_5536,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2072z00_3573;
BgL_aux2072z00_3573 = 
CDR(BgL_pairz00_3569); 
if(
PAIRP(BgL_aux2072z00_3573))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3568 = BgL_aux2072z00_3573; }  else 
{ 
obj_t BgL_auxz00_5543;
BgL_auxz00_5543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2072z00_3573); 
FAILURE(BgL_auxz00_5543,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3568);} } 
}



/* _cdddar */
obj_t BGl__cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2397, obj_t BgL_pairz00_2398)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 422 */
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3574;
if(
PAIRP(BgL_pairz00_2398))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3574 = BgL_pairz00_2398; }  else 
{ 
obj_t BgL_auxz00_5550;
BgL_auxz00_5550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2677z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2398); 
FAILURE(BgL_auxz00_5550,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3575;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3576;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_pairz00_3577;
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2068z00_3578;
BgL_aux2068z00_3578 = 
CAR(BgL_pairz00_3574); 
if(
PAIRP(BgL_aux2068z00_3578))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3577 = BgL_aux2068z00_3578; }  else 
{ 
obj_t BgL_auxz00_5557;
BgL_auxz00_5557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2068z00_3578); 
FAILURE(BgL_auxz00_5557,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2070z00_3579;
BgL_aux2070z00_3579 = 
CDR(BgL_pairz00_3577); 
if(
PAIRP(BgL_aux2070z00_3579))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3576 = BgL_aux2070z00_3579; }  else 
{ 
obj_t BgL_auxz00_5564;
BgL_auxz00_5564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2070z00_3579); 
FAILURE(BgL_auxz00_5564,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 423 */
obj_t BgL_aux2072z00_3580;
BgL_aux2072z00_3580 = 
CDR(BgL_pairz00_3576); 
if(
PAIRP(BgL_aux2072z00_3580))
{ /* Ieee/pairlist.scm 423 */
BgL_pairz00_3575 = BgL_aux2072z00_3580; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)17843)), BGl_string2676z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2072z00_3580); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3575);} } } 
}



/* cddddr */
BGL_EXPORTED_DEF obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_39)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 429 */
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3581;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3582;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3583;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2076z00_3584;
BgL_aux2076z00_3584 = 
CDR(BgL_pairz00_39); 
if(
PAIRP(BgL_aux2076z00_3584))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3583 = BgL_aux2076z00_3584; }  else 
{ 
obj_t BgL_auxz00_5579;
BgL_auxz00_5579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2076z00_3584); 
FAILURE(BgL_auxz00_5579,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2078z00_3585;
BgL_aux2078z00_3585 = 
CDR(BgL_pairz00_3583); 
if(
PAIRP(BgL_aux2078z00_3585))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3582 = BgL_aux2078z00_3585; }  else 
{ 
obj_t BgL_auxz00_5586;
BgL_auxz00_5586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2078z00_3585); 
FAILURE(BgL_auxz00_5586,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2080z00_3586;
BgL_aux2080z00_3586 = 
CDR(BgL_pairz00_3582); 
if(
PAIRP(BgL_aux2080z00_3586))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3581 = BgL_aux2080z00_3586; }  else 
{ 
obj_t BgL_auxz00_5593;
BgL_auxz00_5593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2080z00_3586); 
FAILURE(BgL_auxz00_5593,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3581);} } 
}



/* _cddddr */
obj_t BGl__cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2399, obj_t BgL_pairz00_2400)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 429 */
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3587;
if(
PAIRP(BgL_pairz00_2400))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3587 = BgL_pairz00_2400; }  else 
{ 
obj_t BgL_auxz00_5600;
BgL_auxz00_5600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2679z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2400); 
FAILURE(BgL_auxz00_5600,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3588;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3589;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_pairz00_3590;
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2076z00_3591;
BgL_aux2076z00_3591 = 
CDR(BgL_pairz00_3587); 
if(
PAIRP(BgL_aux2076z00_3591))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3590 = BgL_aux2076z00_3591; }  else 
{ 
obj_t BgL_auxz00_5607;
BgL_auxz00_5607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2076z00_3591); 
FAILURE(BgL_auxz00_5607,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2078z00_3592;
BgL_aux2078z00_3592 = 
CDR(BgL_pairz00_3590); 
if(
PAIRP(BgL_aux2078z00_3592))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3589 = BgL_aux2078z00_3592; }  else 
{ 
obj_t BgL_auxz00_5614;
BgL_auxz00_5614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2078z00_3592); 
FAILURE(BgL_auxz00_5614,BFALSE,BFALSE);} } } 
{ /* Ieee/pairlist.scm 430 */
obj_t BgL_aux2080z00_3593;
BgL_aux2080z00_3593 = 
CDR(BgL_pairz00_3589); 
if(
PAIRP(BgL_aux2080z00_3593))
{ /* Ieee/pairlist.scm 430 */
BgL_pairz00_3588 = BgL_aux2080z00_3593; }  else 
{ 
obj_t BgL_auxz00_5621;
BgL_auxz00_5621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18129)), BGl_string2678z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2080z00_3593); 
FAILURE(BgL_auxz00_5621,BFALSE,BFALSE);} } } 
return 
CDR(BgL_pairz00_3588);} } } 
}



/* set-car! */
BGL_EXPORTED_DEF obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_40, obj_t BgL_objz00_41)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 435 */
return 
SET_CAR(BgL_pairz00_40, BgL_objz00_41);} 
}



/* _set-car! */
obj_t BGl__setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2401, obj_t BgL_pairz00_2402, obj_t BgL_objz00_2403)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 435 */
{ /* Ieee/pairlist.scm 436 */
obj_t BgL_pairz00_3594;
if(
PAIRP(BgL_pairz00_2402))
{ /* Ieee/pairlist.scm 436 */
BgL_pairz00_3594 = BgL_pairz00_2402; }  else 
{ 
obj_t BgL_auxz00_5629;
BgL_auxz00_5629 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18405)), BGl_string2680z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2402); 
FAILURE(BgL_auxz00_5629,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_3594, BgL_objz00_2403);} } 
}



/* set-cdr! */
BGL_EXPORTED_DEF obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_pairz00_42, obj_t BgL_objz00_43)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 441 */
return 
SET_CDR(BgL_pairz00_42, BgL_objz00_43);} 
}



/* _set-cdr! */
obj_t BGl__setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2404, obj_t BgL_pairz00_2405, obj_t BgL_objz00_2406)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 441 */
{ /* Ieee/pairlist.scm 442 */
obj_t BgL_pairz00_3596;
if(
PAIRP(BgL_pairz00_2405))
{ /* Ieee/pairlist.scm 442 */
BgL_pairz00_3596 = BgL_pairz00_2405; }  else 
{ 
obj_t BgL_auxz00_5637;
BgL_auxz00_5637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18689)), BGl_string2681z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2405); 
FAILURE(BgL_auxz00_5637,BFALSE,BFALSE);} 
return 
SET_CDR(BgL_pairz00_3596, BgL_objz00_2406);} } 
}



/* set-cer! */
BGL_EXPORTED_DEF obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_epairz00_44, obj_t BgL_objz00_45)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 447 */
return 
SET_CER(BgL_epairz00_44, BgL_objz00_45);} 
}



/* _set-cer! */
obj_t BGl__setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2407, obj_t BgL_epairz00_2408, obj_t BgL_objz00_2409)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 447 */
{ /* Ieee/pairlist.scm 448 */
obj_t BgL_epairz00_3598;
if(
EXTENDED_PAIRP(BgL_epairz00_2408))
{ /* Ieee/pairlist.scm 448 */
BgL_epairz00_3598 = BgL_epairz00_2408; }  else 
{ 
obj_t BgL_auxz00_5645;
BgL_auxz00_5645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)18974)), BGl_string2682z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_epairz00_2408); 
FAILURE(BgL_auxz00_5645,BFALSE,BFALSE);} 
return 
SET_CER(BgL_epairz00_3598, BgL_objz00_2409);} } 
}



/* null? */
BGL_EXPORTED_DEF bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_46)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 453 */
return 
NULLP(BgL_objz00_46);} 
}



/* _null? */
obj_t BGl__nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2410, obj_t BgL_objz00_2411)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 453 */
return 
BBOOL(
NULLP(BgL_objz00_2411));} 
}



/* list */
BGL_EXPORTED_DEF obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_47)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 459 */
{ /* Ieee/pairlist.scm 459 */
bool_t BgL_testz00_5653;
if(
PAIRP(BgL_lz00_47))
{ /* Ieee/pairlist.scm 459 */
BgL_testz00_5653 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 459 */
BgL_testz00_5653 = 
NULLP(BgL_lz00_47)
; } 
if(BgL_testz00_5653)
{ /* Ieee/pairlist.scm 459 */
return BgL_lz00_47;}  else 
{ 
obj_t BgL_auxz00_5657;
BgL_auxz00_5657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)19490)), BGl_string2683z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_47); 
FAILURE(BgL_auxz00_5657,BFALSE,BFALSE);} } } 
}



/* _list */
obj_t BGl__listz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2412, obj_t BgL_lz00_2413)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 459 */
{ /* Ieee/pairlist.scm 459 */
obj_t BgL_res3204z00_3604;
{ /* Ieee/pairlist.scm 459 */
bool_t BgL_testz00_5661;
if(
PAIRP(BgL_lz00_2413))
{ /* Ieee/pairlist.scm 459 */
BgL_testz00_5661 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 459 */
BgL_testz00_5661 = 
NULLP(BgL_lz00_2413)
; } 
if(BgL_testz00_5661)
{ /* Ieee/pairlist.scm 459 */
BgL_res3204z00_3604 = BgL_lz00_2413; }  else 
{ 
obj_t BgL_auxz00_5665;
BgL_auxz00_5665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)19490)), BGl_string2683z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2413); 
FAILURE(BgL_auxz00_5665,BFALSE,BFALSE);} } 
return BgL_res3204z00_3604;} } 
}



/* list? */
BGL_EXPORTED_DEF bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_48)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 465 */
{ 
obj_t BgL_xz00_553;obj_t BgL_prevz00_554;obj_t BgL_xz00_550;obj_t BgL_prevz00_551;
if(
NULLP(BgL_xz00_48))
{ /* Ieee/pairlist.scm 482 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 482 */
if(
PAIRP(BgL_xz00_48))
{ /* Ieee/pairlist.scm 484 */
BgL_xz00_550 = 
CDR(BgL_xz00_48); 
BgL_prevz00_551 = BgL_xz00_48; 
BgL_l1z00_552:
if(
NULLP(BgL_xz00_550))
{ /* Ieee/pairlist.scm 467 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 467 */
if(
PAIRP(BgL_xz00_550))
{ /* Ieee/pairlist.scm 469 */
if(
(BgL_xz00_550==BgL_prevz00_551))
{ /* Ieee/pairlist.scm 470 */
return ((bool_t)0);}  else 
{ /* Ieee/pairlist.scm 470 */
BgL_xz00_553 = 
CDR(BgL_xz00_550); 
BgL_prevz00_554 = BgL_prevz00_551; 
if(
NULLP(BgL_xz00_553))
{ /* Ieee/pairlist.scm 475 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 475 */
if(
PAIRP(BgL_xz00_553))
{ /* Ieee/pairlist.scm 477 */
if(
(BgL_xz00_553==BgL_prevz00_554))
{ /* Ieee/pairlist.scm 478 */
return ((bool_t)0);}  else 
{ 
obj_t BgL_prevz00_5687;obj_t BgL_xz00_5685;
BgL_xz00_5685 = 
CDR(BgL_xz00_553); 
{ /* Ieee/pairlist.scm 480 */
obj_t BgL_pairz00_1537;
if(
PAIRP(BgL_prevz00_554))
{ /* Ieee/pairlist.scm 480 */
BgL_pairz00_1537 = BgL_prevz00_554; }  else 
{ 
obj_t BgL_auxz00_5690;
BgL_auxz00_5690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20057)), BGl_string2685z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_554); 
FAILURE(BgL_auxz00_5690,BFALSE,BFALSE);} 
BgL_prevz00_5687 = 
CDR(BgL_pairz00_1537); } 
BgL_prevz00_551 = BgL_prevz00_5687; 
BgL_xz00_550 = BgL_xz00_5685; 
goto BgL_l1z00_552;} }  else 
{ /* Ieee/pairlist.scm 477 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/pairlist.scm 469 */
return ((bool_t)0);} } }  else 
{ /* Ieee/pairlist.scm 484 */
return ((bool_t)0);} } } } 
}



/* _list? */
obj_t BGl__listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2414, obj_t BgL_xz00_2415)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 465 */
return 
BBOOL(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2415));} 
}



/* append-2 */
BGL_EXPORTED_DEF obj_t bgl_append2(obj_t BgL_l1z00_49, obj_t BgL_l2z00_50)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 492 */
{ /* Ieee/pairlist.scm 493 */
obj_t BgL_headz00_568;
BgL_headz00_568 = 
MAKE_PAIR(BNIL, BgL_l2z00_50); 
{ 
obj_t BgL_prevz00_569;obj_t BgL_tailz00_570;
BgL_prevz00_569 = BgL_headz00_568; 
BgL_tailz00_570 = BgL_l1z00_49; 
BgL_loopz00_571:
if(
NULLP(BgL_tailz00_570))
{ /* Ieee/pairlist.scm 495 */BNIL; }  else 
{ /* Ieee/pairlist.scm 497 */
obj_t BgL_newzd2prevzd2_573;
{ /* Ieee/pairlist.scm 497 */
obj_t BgL_arg1320z00_575;
{ /* Ieee/pairlist.scm 497 */
obj_t BgL_pairz00_1540;
if(
PAIRP(BgL_tailz00_570))
{ /* Ieee/pairlist.scm 497 */
BgL_pairz00_1540 = BgL_tailz00_570; }  else 
{ 
obj_t BgL_auxz00_5704;
BgL_auxz00_5704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20557)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_570); 
FAILURE(BgL_auxz00_5704,BFALSE,BFALSE);} 
BgL_arg1320z00_575 = 
CAR(BgL_pairz00_1540); } 
BgL_newzd2prevzd2_573 = 
MAKE_PAIR(BgL_arg1320z00_575, BgL_l2z00_50); } 
SET_CDR(BgL_prevz00_569, BgL_newzd2prevzd2_573); 
{ 
obj_t BgL_tailz00_5712;obj_t BgL_prevz00_5711;
BgL_prevz00_5711 = BgL_newzd2prevzd2_573; 
BgL_tailz00_5712 = 
CDR(BgL_tailz00_570); 
BgL_tailz00_570 = BgL_tailz00_5712; 
BgL_prevz00_569 = BgL_prevz00_5711; 
goto BgL_loopz00_571;} } 
return 
CDR(BgL_headz00_568);} } } 
}



/* _append-2 */
obj_t BGl__appendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2416, obj_t BgL_l1z00_2417, obj_t BgL_l2z00_2418)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 492 */
{ /* Ieee/pairlist.scm 493 */
obj_t BgL_auxz00_5715;
{ /* Ieee/pairlist.scm 493 */
bool_t BgL_testz00_5716;
if(
PAIRP(BgL_l1z00_2417))
{ /* Ieee/pairlist.scm 493 */
BgL_testz00_5716 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 493 */
BgL_testz00_5716 = 
NULLP(BgL_l1z00_2417)
; } 
if(BgL_testz00_5716)
{ /* Ieee/pairlist.scm 493 */
BgL_auxz00_5715 = BgL_l1z00_2417
; }  else 
{ 
obj_t BgL_auxz00_5720;
BgL_auxz00_5720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20433)), BGl_string2687z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2417); 
FAILURE(BgL_auxz00_5720,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_5715, BgL_l2z00_2418);} } 
}



/* eappend-2 */
BGL_EXPORTED_DEF obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_l1z00_51, obj_t BgL_l2z00_52)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 506 */
{ /* Ieee/pairlist.scm 507 */
obj_t BgL_headz00_576;
if(
EXTENDED_PAIRP(BgL_l2z00_52))
{ /* Ieee/pairlist.scm 508 */
obj_t BgL_arg1329z00_589;
{ /* Ieee/pairlist.scm 508 */
obj_t BgL_objz00_1545;
if(
EXTENDED_PAIRP(BgL_l2z00_52))
{ /* Ieee/pairlist.scm 508 */
BgL_objz00_1545 = BgL_l2z00_52; }  else 
{ 
obj_t BgL_auxz00_5729;
BgL_auxz00_5729 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20976)), BGl_string2688z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_l2z00_52); 
FAILURE(BgL_auxz00_5729,BFALSE,BFALSE);} 
BgL_arg1329z00_589 = 
CER(BgL_objz00_1545); } 
{ /* Ieee/pairlist.scm 508 */
obj_t BgL_res1872z00_1549;
BgL_res1872z00_1549 = 
MAKE_EXTENDED_PAIR(BNIL, BgL_l2z00_52, BgL_arg1329z00_589); 
BgL_headz00_576 = BgL_res1872z00_1549; } }  else 
{ /* Ieee/pairlist.scm 507 */
BgL_headz00_576 = 
MAKE_PAIR(BNIL, BgL_l2z00_52); } 
{ 
obj_t BgL_prevz00_577;obj_t BgL_tailz00_578;
BgL_prevz00_577 = BgL_headz00_576; 
BgL_tailz00_578 = BgL_l1z00_51; 
BgL_loopz00_579:
if(
NULLP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 511 */BNIL; }  else 
{ /* Ieee/pairlist.scm 513 */
obj_t BgL_newzd2prevzd2_581;
if(
EXTENDED_PAIRP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_arg1324z00_584;obj_t BgL_arg1325z00_585;
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_pairz00_1553;
if(
PAIRP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 514 */
BgL_pairz00_1553 = BgL_tailz00_578; }  else 
{ 
obj_t BgL_auxz00_5742;
BgL_auxz00_5742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21128)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_578); 
FAILURE(BgL_auxz00_5742,BFALSE,BFALSE);} 
BgL_arg1324z00_584 = 
CAR(BgL_pairz00_1553); } 
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_objz00_1554;
if(
EXTENDED_PAIRP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 514 */
BgL_objz00_1554 = BgL_tailz00_578; }  else 
{ 
obj_t BgL_auxz00_5749;
BgL_auxz00_5749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21142)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_578); 
FAILURE(BgL_auxz00_5749,BFALSE,BFALSE);} 
BgL_arg1325z00_585 = 
CER(BgL_objz00_1554); } 
{ /* Ieee/pairlist.scm 514 */
obj_t BgL_res1873z00_1558;
BgL_res1873z00_1558 = 
MAKE_EXTENDED_PAIR(BgL_arg1324z00_584, BgL_l2z00_52, BgL_arg1325z00_585); 
BgL_newzd2prevzd2_581 = BgL_res1873z00_1558; } }  else 
{ /* Ieee/pairlist.scm 515 */
obj_t BgL_arg1326z00_586;
{ /* Ieee/pairlist.scm 515 */
obj_t BgL_pairz00_1559;
if(
PAIRP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 515 */
BgL_pairz00_1559 = BgL_tailz00_578; }  else 
{ 
obj_t BgL_auxz00_5757;
BgL_auxz00_5757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21170)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_578); 
FAILURE(BgL_auxz00_5757,BFALSE,BFALSE);} 
BgL_arg1326z00_586 = 
CAR(BgL_pairz00_1559); } 
BgL_newzd2prevzd2_581 = 
MAKE_PAIR(BgL_arg1326z00_586, BgL_l2z00_52); } 
SET_CDR(BgL_prevz00_577, BgL_newzd2prevzd2_581); 
{ /* Ieee/pairlist.scm 517 */
obj_t BgL_arg1322z00_582;
{ /* Ieee/pairlist.scm 517 */
obj_t BgL_pairz00_1562;
if(
PAIRP(BgL_tailz00_578))
{ /* Ieee/pairlist.scm 517 */
BgL_pairz00_1562 = BgL_tailz00_578; }  else 
{ 
obj_t BgL_auxz00_5766;
BgL_auxz00_5766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21242)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_578); 
FAILURE(BgL_auxz00_5766,BFALSE,BFALSE);} 
BgL_arg1322z00_582 = 
CDR(BgL_pairz00_1562); } 
{ 
obj_t BgL_tailz00_5772;obj_t BgL_prevz00_5771;
BgL_prevz00_5771 = BgL_newzd2prevzd2_581; 
BgL_tailz00_5772 = BgL_arg1322z00_582; 
BgL_tailz00_578 = BgL_tailz00_5772; 
BgL_prevz00_577 = BgL_prevz00_5771; 
goto BgL_loopz00_579;} } } 
return 
CDR(BgL_headz00_576);} } } 
}



/* _eappend-2 */
obj_t BGl__eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2419, obj_t BgL_l1z00_2420, obj_t BgL_l2z00_2421)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 506 */
{ /* Ieee/pairlist.scm 507 */
obj_t BgL_auxz00_5774;
{ /* Ieee/pairlist.scm 507 */
bool_t BgL_testz00_5775;
if(
PAIRP(BgL_l1z00_2420))
{ /* Ieee/pairlist.scm 507 */
BgL_testz00_5775 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 507 */
BgL_testz00_5775 = 
NULLP(BgL_l1z00_2420)
; } 
if(BgL_testz00_5775)
{ /* Ieee/pairlist.scm 507 */
BgL_auxz00_5774 = BgL_l1z00_2420
; }  else 
{ 
obj_t BgL_auxz00_5779;
BgL_auxz00_5779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)20924)), BGl_string2689z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2420); 
FAILURE(BgL_auxz00_5779,BFALSE,BFALSE);} } 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5774, BgL_l2z00_2421);} } 
}



/* append */
BGL_EXPORTED_DEF obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_53)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 524 */
return 
BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_53);} 
}



/* append-list'' */
obj_t BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_590)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 525 */
{ /* Ieee/pairlist.scm 526 */
long BgL_lenz00_592;
{ /* Ieee/pairlist.scm 526 */
obj_t BgL_auxz00_5785;
{ /* Ieee/pairlist.scm 526 */
bool_t BgL_testz00_5786;
if(
PAIRP(BgL_lz00_590))
{ /* Ieee/pairlist.scm 526 */
BgL_testz00_5786 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 526 */
BgL_testz00_5786 = 
NULLP(BgL_lz00_590)
; } 
if(BgL_testz00_5786)
{ /* Ieee/pairlist.scm 526 */
BgL_auxz00_5785 = BgL_lz00_590
; }  else 
{ 
obj_t BgL_auxz00_5790;
BgL_auxz00_5790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21582)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_590); 
FAILURE(BgL_auxz00_5790,BFALSE,BFALSE);} } 
BgL_lenz00_592 = 
bgl_list_length(BgL_auxz00_5785); } 
{ 

switch( BgL_lenz00_592) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 530 */
obj_t BgL_pairz00_1563;
if(
PAIRP(BgL_lz00_590))
{ /* Ieee/pairlist.scm 530 */
BgL_pairz00_1563 = BgL_lz00_590; }  else 
{ 
obj_t BgL_auxz00_5797;
BgL_auxz00_5797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21651)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_590); 
FAILURE(BgL_auxz00_5797,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1563);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 532 */
obj_t BgL_arg1333z00_596;obj_t BgL_arg1334z00_597;
{ /* Ieee/pairlist.scm 532 */
obj_t BgL_pairz00_1564;
if(
PAIRP(BgL_lz00_590))
{ /* Ieee/pairlist.scm 532 */
BgL_pairz00_1564 = BgL_lz00_590; }  else 
{ 
obj_t BgL_auxz00_5804;
BgL_auxz00_5804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21698)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_590); 
FAILURE(BgL_auxz00_5804,BFALSE,BFALSE);} 
BgL_arg1333z00_596 = 
CAR(BgL_pairz00_1564); } 
{ /* Ieee/pairlist.scm 533 */
obj_t BgL_pairz00_1566;
{ /* Ieee/pairlist.scm 533 */
obj_t BgL_pairz00_1565;
BgL_pairz00_1565 = BgL_lz00_590; 
{ /* Ieee/pairlist.scm 533 */
obj_t BgL_aux2126z00_2772;
BgL_aux2126z00_2772 = 
CDR(BgL_pairz00_1565); 
if(
PAIRP(BgL_aux2126z00_2772))
{ /* Ieee/pairlist.scm 533 */
BgL_pairz00_1566 = BgL_aux2126z00_2772; }  else 
{ 
obj_t BgL_auxz00_5812;
BgL_auxz00_5812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21714)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2126z00_2772); 
FAILURE(BgL_auxz00_5812,BFALSE,BFALSE);} } } 
BgL_arg1334z00_597 = 
CAR(BgL_pairz00_1566); } 
{ /* Ieee/pairlist.scm 532 */
obj_t BgL_auxz00_5817;
{ /* Ieee/pairlist.scm 532 */
bool_t BgL_testz00_5818;
if(
PAIRP(BgL_arg1333z00_596))
{ /* Ieee/pairlist.scm 532 */
BgL_testz00_5818 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 532 */
BgL_testz00_5818 = 
NULLP(BgL_arg1333z00_596)
; } 
if(BgL_testz00_5818)
{ /* Ieee/pairlist.scm 532 */
BgL_auxz00_5817 = BgL_arg1333z00_596
; }  else 
{ 
obj_t BgL_auxz00_5822;
BgL_auxz00_5822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21699)), BGl_string2690z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1333z00_596); 
FAILURE(BgL_auxz00_5822,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_5817, BgL_arg1334z00_597);} } break;
default: 
{ /* Ieee/pairlist.scm 534 */
obj_t BgL_arg1336z00_599;obj_t BgL_arg1337z00_600;
{ /* Ieee/pairlist.scm 534 */
obj_t BgL_pairz00_1567;
if(
PAIRP(BgL_lz00_590))
{ /* Ieee/pairlist.scm 534 */
BgL_pairz00_1567 = BgL_lz00_590; }  else 
{ 
obj_t BgL_auxz00_5829;
BgL_auxz00_5829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21744)), BGl_string2691z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_590); 
FAILURE(BgL_auxz00_5829,BFALSE,BFALSE);} 
BgL_arg1336z00_599 = 
CAR(BgL_pairz00_1567); } 
BgL_arg1337z00_600 = 
BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_590)); 
{ /* Ieee/pairlist.scm 534 */
obj_t BgL_auxz00_5836;
{ /* Ieee/pairlist.scm 534 */
bool_t BgL_testz00_5837;
if(
PAIRP(BgL_arg1336z00_599))
{ /* Ieee/pairlist.scm 534 */
BgL_testz00_5837 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 534 */
BgL_testz00_5837 = 
NULLP(BgL_arg1336z00_599)
; } 
if(BgL_testz00_5837)
{ /* Ieee/pairlist.scm 534 */
BgL_auxz00_5836 = BgL_arg1336z00_599
; }  else 
{ 
obj_t BgL_auxz00_5841;
BgL_auxz00_5841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)21745)), BGl_string2691z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1336z00_599); 
FAILURE(BgL_auxz00_5841,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_5836, BgL_arg1337z00_600);} } } } } } 
}



/* _append */
obj_t BGl__appendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2422, obj_t BgL_lz00_2423)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 524 */
return 
BGl_appendzd2listz72z72zd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2423);} 
}



/* eappend */
BGL_EXPORTED_DEF obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_54)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 541 */
return 
BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(BgL_lz00_54);} 
}



/* append-list' */
obj_t BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_602)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 542 */
{ /* Ieee/pairlist.scm 543 */
long BgL_lenz00_604;
{ /* Ieee/pairlist.scm 543 */
obj_t BgL_auxz00_5849;
{ /* Ieee/pairlist.scm 543 */
bool_t BgL_testz00_5850;
if(
PAIRP(BgL_lz00_602))
{ /* Ieee/pairlist.scm 543 */
BgL_testz00_5850 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 543 */
BgL_testz00_5850 = 
NULLP(BgL_lz00_602)
; } 
if(BgL_testz00_5850)
{ /* Ieee/pairlist.scm 543 */
BgL_auxz00_5849 = BgL_lz00_602
; }  else 
{ 
obj_t BgL_auxz00_5854;
BgL_auxz00_5854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22105)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_602); 
FAILURE(BgL_auxz00_5854,BFALSE,BFALSE);} } 
BgL_lenz00_604 = 
bgl_list_length(BgL_auxz00_5849); } 
{ 

switch( BgL_lenz00_604) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 547 */
obj_t BgL_pairz00_1569;
if(
PAIRP(BgL_lz00_602))
{ /* Ieee/pairlist.scm 547 */
BgL_pairz00_1569 = BgL_lz00_602; }  else 
{ 
obj_t BgL_auxz00_5861;
BgL_auxz00_5861 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22174)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_602); 
FAILURE(BgL_auxz00_5861,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1569);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 549 */
obj_t BgL_arg1340z00_608;obj_t BgL_arg1341z00_609;
{ /* Ieee/pairlist.scm 549 */
obj_t BgL_pairz00_1570;
if(
PAIRP(BgL_lz00_602))
{ /* Ieee/pairlist.scm 549 */
BgL_pairz00_1570 = BgL_lz00_602; }  else 
{ 
obj_t BgL_auxz00_5868;
BgL_auxz00_5868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22222)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_602); 
FAILURE(BgL_auxz00_5868,BFALSE,BFALSE);} 
BgL_arg1340z00_608 = 
CAR(BgL_pairz00_1570); } 
{ /* Ieee/pairlist.scm 550 */
obj_t BgL_pairz00_1572;
{ /* Ieee/pairlist.scm 550 */
obj_t BgL_pairz00_1571;
BgL_pairz00_1571 = BgL_lz00_602; 
{ /* Ieee/pairlist.scm 550 */
obj_t BgL_aux2144z00_2790;
BgL_aux2144z00_2790 = 
CDR(BgL_pairz00_1571); 
if(
PAIRP(BgL_aux2144z00_2790))
{ /* Ieee/pairlist.scm 550 */
BgL_pairz00_1572 = BgL_aux2144z00_2790; }  else 
{ 
obj_t BgL_auxz00_5876;
BgL_auxz00_5876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22239)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2144z00_2790); 
FAILURE(BgL_auxz00_5876,BFALSE,BFALSE);} } } 
BgL_arg1341z00_609 = 
CAR(BgL_pairz00_1572); } 
{ /* Ieee/pairlist.scm 549 */
obj_t BgL_auxz00_5881;
{ /* Ieee/pairlist.scm 549 */
bool_t BgL_testz00_5882;
if(
PAIRP(BgL_arg1340z00_608))
{ /* Ieee/pairlist.scm 549 */
BgL_testz00_5882 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 549 */
BgL_testz00_5882 = 
NULLP(BgL_arg1340z00_608)
; } 
if(BgL_testz00_5882)
{ /* Ieee/pairlist.scm 549 */
BgL_auxz00_5881 = BgL_arg1340z00_608
; }  else 
{ 
obj_t BgL_auxz00_5886;
BgL_auxz00_5886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22223)), BGl_string2692z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1340z00_608); 
FAILURE(BgL_auxz00_5886,BFALSE,BFALSE);} } 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5881, BgL_arg1341z00_609);} } break;
default: 
{ /* Ieee/pairlist.scm 551 */
obj_t BgL_arg1343z00_611;obj_t BgL_arg1344z00_612;
{ /* Ieee/pairlist.scm 551 */
obj_t BgL_pairz00_1573;
if(
PAIRP(BgL_lz00_602))
{ /* Ieee/pairlist.scm 551 */
BgL_pairz00_1573 = BgL_lz00_602; }  else 
{ 
obj_t BgL_auxz00_5893;
BgL_auxz00_5893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22270)), BGl_string2693z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_602); 
FAILURE(BgL_auxz00_5893,BFALSE,BFALSE);} 
BgL_arg1343z00_611 = 
CAR(BgL_pairz00_1573); } 
BgL_arg1344z00_612 = 
BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_602)); 
{ /* Ieee/pairlist.scm 551 */
obj_t BgL_auxz00_5900;
{ /* Ieee/pairlist.scm 551 */
bool_t BgL_testz00_5901;
if(
PAIRP(BgL_arg1343z00_611))
{ /* Ieee/pairlist.scm 551 */
BgL_testz00_5901 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 551 */
BgL_testz00_5901 = 
NULLP(BgL_arg1343z00_611)
; } 
if(BgL_testz00_5901)
{ /* Ieee/pairlist.scm 551 */
BgL_auxz00_5900 = BgL_arg1343z00_611
; }  else 
{ 
obj_t BgL_auxz00_5905;
BgL_auxz00_5905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22271)), BGl_string2693z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1343z00_611); 
FAILURE(BgL_auxz00_5905,BFALSE,BFALSE);} } 
return 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5900, BgL_arg1344z00_612);} } } } } } 
}



/* _eappend */
obj_t BGl__eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2424, obj_t BgL_lz00_2425)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 541 */
return 
BGl_appendzd2listz72za0zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2425);} 
}



/* append! */
BGL_EXPORTED_DEF obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_55)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 558 */
{ /* Ieee/pairlist.scm 570 */
obj_t BgL_aux2148z00_2794;
BgL_aux2148z00_2794 = 
BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_55); 
{ /* Ieee/pairlist.scm 570 */
bool_t BgL_testz00_5913;
if(
PAIRP(BgL_aux2148z00_2794))
{ /* Ieee/pairlist.scm 570 */
BgL_testz00_5913 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 570 */
BgL_testz00_5913 = 
NULLP(BgL_aux2148z00_2794)
; } 
if(BgL_testz00_5913)
{ /* Ieee/pairlist.scm 570 */
return BgL_aux2148z00_2794;}  else 
{ 
obj_t BgL_auxz00_5917;
BgL_auxz00_5917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22844)), BGl_string2694z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2148z00_2794); 
FAILURE(BgL_auxz00_5917,BFALSE,BFALSE);} } } } 
}



/* append-list */
obj_t BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_614)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 559 */
{ /* Ieee/pairlist.scm 560 */
long BgL_lenz00_616;
{ /* Ieee/pairlist.scm 560 */
obj_t BgL_auxz00_5921;
{ /* Ieee/pairlist.scm 560 */
bool_t BgL_testz00_5922;
if(
PAIRP(BgL_lz00_614))
{ /* Ieee/pairlist.scm 560 */
BgL_testz00_5922 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 560 */
BgL_testz00_5922 = 
NULLP(BgL_lz00_614)
; } 
if(BgL_testz00_5922)
{ /* Ieee/pairlist.scm 560 */
BgL_auxz00_5921 = BgL_lz00_614
; }  else 
{ 
obj_t BgL_auxz00_5926;
BgL_auxz00_5926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22632)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_614); 
FAILURE(BgL_auxz00_5926,BFALSE,BFALSE);} } 
BgL_lenz00_616 = 
bgl_list_length(BgL_auxz00_5921); } 
{ 

switch( BgL_lenz00_616) { case ((long)0) : 

return BNIL;break;case ((long)1) : 

{ /* Ieee/pairlist.scm 564 */
obj_t BgL_pairz00_1575;
if(
PAIRP(BgL_lz00_614))
{ /* Ieee/pairlist.scm 564 */
BgL_pairz00_1575 = BgL_lz00_614; }  else 
{ 
obj_t BgL_auxz00_5933;
BgL_auxz00_5933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22701)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_614); 
FAILURE(BgL_auxz00_5933,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1575);} break;case ((long)2) : 

{ /* Ieee/pairlist.scm 566 */
obj_t BgL_arg1347z00_620;obj_t BgL_arg1348z00_621;
{ /* Ieee/pairlist.scm 566 */
obj_t BgL_pairz00_1576;
if(
PAIRP(BgL_lz00_614))
{ /* Ieee/pairlist.scm 566 */
BgL_pairz00_1576 = BgL_lz00_614; }  else 
{ 
obj_t BgL_auxz00_5940;
BgL_auxz00_5940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22749)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_614); 
FAILURE(BgL_auxz00_5940,BFALSE,BFALSE);} 
BgL_arg1347z00_620 = 
CAR(BgL_pairz00_1576); } 
{ /* Ieee/pairlist.scm 567 */
obj_t BgL_pairz00_1578;
{ /* Ieee/pairlist.scm 567 */
obj_t BgL_pairz00_1577;
BgL_pairz00_1577 = BgL_lz00_614; 
{ /* Ieee/pairlist.scm 567 */
obj_t BgL_aux2166z00_2812;
BgL_aux2166z00_2812 = 
CDR(BgL_pairz00_1577); 
if(
PAIRP(BgL_aux2166z00_2812))
{ /* Ieee/pairlist.scm 567 */
BgL_pairz00_1578 = BgL_aux2166z00_2812; }  else 
{ 
obj_t BgL_auxz00_5948;
BgL_auxz00_5948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22766)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2166z00_2812); 
FAILURE(BgL_auxz00_5948,BFALSE,BFALSE);} } } 
BgL_arg1348z00_621 = 
CAR(BgL_pairz00_1578); } 
{ /* Ieee/pairlist.scm 566 */
obj_t BgL_auxz00_5962;obj_t BgL_auxz00_5953;
{ /* Ieee/pairlist.scm 567 */
bool_t BgL_testz00_5963;
if(
PAIRP(BgL_arg1348z00_621))
{ /* Ieee/pairlist.scm 567 */
BgL_testz00_5963 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 567 */
BgL_testz00_5963 = 
NULLP(BgL_arg1348z00_621)
; } 
if(BgL_testz00_5963)
{ /* Ieee/pairlist.scm 567 */
BgL_auxz00_5962 = BgL_arg1348z00_621
; }  else 
{ 
obj_t BgL_auxz00_5967;
BgL_auxz00_5967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22773)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1348z00_621); 
FAILURE(BgL_auxz00_5967,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 566 */
bool_t BgL_testz00_5954;
if(
PAIRP(BgL_arg1347z00_620))
{ /* Ieee/pairlist.scm 566 */
BgL_testz00_5954 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 566 */
BgL_testz00_5954 = 
NULLP(BgL_arg1347z00_620)
; } 
if(BgL_testz00_5954)
{ /* Ieee/pairlist.scm 566 */
BgL_auxz00_5953 = BgL_arg1347z00_620
; }  else 
{ 
obj_t BgL_auxz00_5958;
BgL_auxz00_5958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22750)), BGl_string2695z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1347z00_620); 
FAILURE(BgL_auxz00_5958,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5953, BgL_auxz00_5962);} } break;
default: 
{ /* Ieee/pairlist.scm 568 */
obj_t BgL_arg1354z00_623;obj_t BgL_arg1355z00_624;
{ /* Ieee/pairlist.scm 568 */
obj_t BgL_pairz00_1579;
if(
PAIRP(BgL_lz00_614))
{ /* Ieee/pairlist.scm 568 */
BgL_pairz00_1579 = BgL_lz00_614; }  else 
{ 
obj_t BgL_auxz00_5974;
BgL_auxz00_5974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22797)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_614); 
FAILURE(BgL_auxz00_5974,BFALSE,BFALSE);} 
BgL_arg1354z00_623 = 
CAR(BgL_pairz00_1579); } 
BgL_arg1355z00_624 = 
BGl_appendzd2listzd2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_614)); 
{ /* Ieee/pairlist.scm 568 */
obj_t BgL_auxz00_5990;obj_t BgL_auxz00_5981;
{ /* Ieee/pairlist.scm 569 */
bool_t BgL_testz00_5991;
if(
PAIRP(BgL_arg1355z00_624))
{ /* Ieee/pairlist.scm 569 */
BgL_testz00_5991 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 569 */
BgL_testz00_5991 = 
NULLP(BgL_arg1355z00_624)
; } 
if(BgL_testz00_5991)
{ /* Ieee/pairlist.scm 569 */
BgL_auxz00_5990 = BgL_arg1355z00_624
; }  else 
{ 
obj_t BgL_auxz00_5995;
BgL_auxz00_5995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22829)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1355z00_624); 
FAILURE(BgL_auxz00_5995,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 568 */
bool_t BgL_testz00_5982;
if(
PAIRP(BgL_arg1354z00_623))
{ /* Ieee/pairlist.scm 568 */
BgL_testz00_5982 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 568 */
BgL_testz00_5982 = 
NULLP(BgL_arg1354z00_623)
; } 
if(BgL_testz00_5982)
{ /* Ieee/pairlist.scm 568 */
BgL_auxz00_5981 = BgL_arg1354z00_623
; }  else 
{ 
obj_t BgL_auxz00_5986;
BgL_auxz00_5986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)22798)), BGl_string2696z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1354z00_623); 
FAILURE(BgL_auxz00_5986,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5981, BgL_auxz00_5990);} } } } } } 
}



/* _append! */
obj_t BGl__appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2426, obj_t BgL_lz00_2427)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 558 */
return 
BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2427);} 
}



/* append-2! */
BGL_EXPORTED_DEF obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_56, obj_t BgL_yz00_57)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 575 */
if(
NULLP(BgL_xz00_56))
{ /* Ieee/pairlist.scm 576 */
return BgL_yz00_57;}  else 
{ /* Ieee/pairlist.scm 579 */
obj_t BgL_arg1358z00_628;
{ /* Ieee/pairlist.scm 579 */
obj_t BgL_pairz00_1582;
if(
PAIRP(BgL_xz00_56))
{ /* Ieee/pairlist.scm 579 */
BgL_pairz00_1582 = BgL_xz00_56; }  else 
{ 
obj_t BgL_auxz00_6006;
BgL_auxz00_6006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23171)), BGl_string2697z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_56); 
FAILURE(BgL_auxz00_6006,BFALSE,BFALSE);} 
BgL_arg1358z00_628 = 
CDR(BgL_pairz00_1582); } 
{ 
obj_t BgL_az00_1584;obj_t BgL_bz00_1585;
BgL_az00_1584 = BgL_xz00_56; 
BgL_bz00_1585 = BgL_arg1358z00_628; 
BgL_dozd2loopzd2zd21100zd2_1583:
if(
NULLP(BgL_bz00_1585))
{ /* Ieee/pairlist.scm 578 */
{ /* Ieee/pairlist.scm 578 */
obj_t BgL_pairz00_1591;
if(
PAIRP(BgL_az00_1584))
{ /* Ieee/pairlist.scm 578 */
BgL_pairz00_1591 = BgL_az00_1584; }  else 
{ 
obj_t BgL_auxz00_6015;
BgL_auxz00_6015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23139)), BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_az00_1584); 
FAILURE(BgL_auxz00_6015,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1591, BgL_yz00_57); } 
return BgL_xz00_56;}  else 
{ /* Ieee/pairlist.scm 578 */
obj_t BgL_arg1367z00_1589;
{ /* Ieee/pairlist.scm 578 */
obj_t BgL_pairz00_1593;
if(
PAIRP(BgL_bz00_1585))
{ /* Ieee/pairlist.scm 578 */
BgL_pairz00_1593 = BgL_bz00_1585; }  else 
{ 
obj_t BgL_auxz00_6022;
BgL_auxz00_6022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23139)), BGl_string2698z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_bz00_1585); 
FAILURE(BgL_auxz00_6022,BFALSE,BFALSE);} 
BgL_arg1367z00_1589 = 
CDR(BgL_pairz00_1593); } 
{ 
obj_t BgL_bz00_6028;obj_t BgL_az00_6027;
BgL_az00_6027 = BgL_bz00_1585; 
BgL_bz00_6028 = BgL_arg1367z00_1589; 
BgL_bz00_1585 = BgL_bz00_6028; 
BgL_az00_1584 = BgL_az00_6027; 
goto BgL_dozd2loopzd2zd21100zd2_1583;} } } } } 
}



/* _append-2! */
obj_t BGl__appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2428, obj_t BgL_xz00_2429, obj_t BgL_yz00_2430)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 575 */
{ /* Ieee/pairlist.scm 576 */
obj_t BgL_auxz00_6038;obj_t BgL_auxz00_6029;
{ /* Ieee/pairlist.scm 576 */
bool_t BgL_testz00_6039;
if(
PAIRP(BgL_yz00_2430))
{ /* Ieee/pairlist.scm 576 */
BgL_testz00_6039 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 576 */
BgL_testz00_6039 = 
NULLP(BgL_yz00_2430)
; } 
if(BgL_testz00_6039)
{ /* Ieee/pairlist.scm 576 */
BgL_auxz00_6038 = BgL_yz00_2430
; }  else 
{ 
obj_t BgL_auxz00_6043;
BgL_auxz00_6043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23111)), BGl_string2699z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2430); 
FAILURE(BgL_auxz00_6043,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 576 */
bool_t BgL_testz00_6030;
if(
PAIRP(BgL_xz00_2429))
{ /* Ieee/pairlist.scm 576 */
BgL_testz00_6030 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 576 */
BgL_testz00_6030 = 
NULLP(BgL_xz00_2429)
; } 
if(BgL_testz00_6030)
{ /* Ieee/pairlist.scm 576 */
BgL_auxz00_6029 = BgL_xz00_2429
; }  else 
{ 
obj_t BgL_auxz00_6034;
BgL_auxz00_6034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23111)), BGl_string2699z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2429); 
FAILURE(BgL_auxz00_6034,BFALSE,BFALSE);} } 
return 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6029, BgL_auxz00_6038);} } 
}



/* length */
BGL_EXPORTED_DEF long bgl_list_length(obj_t BgL_listz00_58)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 587 */
{ 
obj_t BgL_lz00_1609;long BgL_resz00_1610;
BgL_lz00_1609 = BgL_listz00_58; 
BgL_resz00_1610 = ((long)0); 
BgL_loopz00_1608:
if(
NULLP(BgL_lz00_1609))
{ /* Ieee/pairlist.scm 588 */
return BgL_resz00_1610;}  else 
{ 
long BgL_resz00_6058;obj_t BgL_lz00_6050;
{ /* Ieee/pairlist.scm 588 */
obj_t BgL_pairz00_1618;
if(
PAIRP(BgL_lz00_1609))
{ /* Ieee/pairlist.scm 588 */
BgL_pairz00_1618 = BgL_lz00_1609; }  else 
{ 
obj_t BgL_auxz00_6053;
BgL_auxz00_6053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23496)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1609); 
FAILURE(BgL_auxz00_6053,BFALSE,BFALSE);} 
BgL_lz00_6050 = 
CDR(BgL_pairz00_1618); } 
BgL_resz00_6058 = 
(((long)1)+BgL_resz00_1610); 
BgL_resz00_1610 = BgL_resz00_6058; 
BgL_lz00_1609 = BgL_lz00_6050; 
goto BgL_loopz00_1608;} } } 
}



/* _length */
obj_t BGl__lengthz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2431, obj_t BgL_listz00_2432)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 587 */
{ /* Ieee/pairlist.scm 588 */
long BgL_auxz00_6060;
{ /* Ieee/pairlist.scm 588 */
obj_t BgL_auxz00_6061;
{ /* Ieee/pairlist.scm 588 */
bool_t BgL_testz00_6062;
if(
PAIRP(BgL_listz00_2432))
{ /* Ieee/pairlist.scm 588 */
BgL_testz00_6062 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 588 */
BgL_testz00_6062 = 
NULLP(BgL_listz00_2432)
; } 
if(BgL_testz00_6062)
{ /* Ieee/pairlist.scm 588 */
BgL_auxz00_6061 = BgL_listz00_2432
; }  else 
{ 
obj_t BgL_auxz00_6066;
BgL_auxz00_6066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23496)), BGl_string2700z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2432); 
FAILURE(BgL_auxz00_6066,BFALSE,BFALSE);} } 
BgL_auxz00_6060 = 
bgl_list_length(BgL_auxz00_6061); } 
return 
BINT(BgL_auxz00_6060);} } 
}



/* reverse */
BGL_EXPORTED_DEF obj_t bgl_reverse(obj_t BgL_lz00_59)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 599 */
{ 
obj_t BgL_lz00_1638;obj_t BgL_accz00_1639;
{ /* Ieee/pairlist.scm 600 */
obj_t BgL_aux2190z00_2836;
BgL_lz00_1638 = BgL_lz00_59; 
BgL_accz00_1639 = BNIL; 
BgL_loopz00_1637:
if(
NULLP(BgL_lz00_1638))
{ /* Ieee/pairlist.scm 600 */
BgL_aux2190z00_2836 = BgL_accz00_1639; }  else 
{ /* Ieee/pairlist.scm 600 */
obj_t BgL_arg1374z00_1645;obj_t BgL_arg1375z00_1646;
{ /* Ieee/pairlist.scm 600 */
obj_t BgL_pairz00_1649;
if(
PAIRP(BgL_lz00_1638))
{ /* Ieee/pairlist.scm 600 */
BgL_pairz00_1649 = BgL_lz00_1638; }  else 
{ 
obj_t BgL_auxz00_6076;
BgL_auxz00_6076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23866)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1638); 
FAILURE(BgL_auxz00_6076,BFALSE,BFALSE);} 
BgL_arg1374z00_1645 = 
CDR(BgL_pairz00_1649); } 
BgL_arg1375z00_1646 = 
MAKE_PAIR(
CAR(BgL_lz00_1638), BgL_accz00_1639); 
{ 
obj_t BgL_accz00_6084;obj_t BgL_lz00_6083;
BgL_lz00_6083 = BgL_arg1374z00_1645; 
BgL_accz00_6084 = BgL_arg1375z00_1646; 
BgL_accz00_1639 = BgL_accz00_6084; 
BgL_lz00_1638 = BgL_lz00_6083; 
goto BgL_loopz00_1637;} } 
{ /* Ieee/pairlist.scm 600 */
bool_t BgL_testz00_6085;
if(
PAIRP(BgL_aux2190z00_2836))
{ /* Ieee/pairlist.scm 600 */
BgL_testz00_6085 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 600 */
BgL_testz00_6085 = 
NULLP(BgL_aux2190z00_2836)
; } 
if(BgL_testz00_6085)
{ /* Ieee/pairlist.scm 600 */
return BgL_aux2190z00_2836;}  else 
{ 
obj_t BgL_auxz00_6089;
BgL_auxz00_6089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23866)), BGl_string2701z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2190z00_2836); 
FAILURE(BgL_auxz00_6089,BFALSE,BFALSE);} } } } } 
}



/* _reverse */
obj_t BGl__reversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2433, obj_t BgL_lz00_2434)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 599 */
{ /* Ieee/pairlist.scm 600 */
obj_t BgL_auxz00_6093;
{ /* Ieee/pairlist.scm 600 */
bool_t BgL_testz00_6094;
if(
PAIRP(BgL_lz00_2434))
{ /* Ieee/pairlist.scm 600 */
BgL_testz00_6094 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 600 */
BgL_testz00_6094 = 
NULLP(BgL_lz00_2434)
; } 
if(BgL_testz00_6094)
{ /* Ieee/pairlist.scm 600 */
BgL_auxz00_6093 = BgL_lz00_2434
; }  else 
{ 
obj_t BgL_auxz00_6098;
BgL_auxz00_6098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)23866)), BGl_string2702z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2434); 
FAILURE(BgL_auxz00_6098,BFALSE,BFALSE);} } 
return 
bgl_reverse(BgL_auxz00_6093);} } 
}



/* ereverse */
BGL_EXPORTED_DEF obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_60)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 609 */
{ 
obj_t BgL_lz00_655;obj_t BgL_accz00_656;
{ /* Ieee/pairlist.scm 610 */
obj_t BgL_aux2202z00_2848;
BgL_lz00_655 = BgL_lz00_60; 
BgL_accz00_656 = BNIL; 
BgL_zc3anonymousza31377ze3z83_657:
if(
NULLP(BgL_lz00_655))
{ /* Ieee/pairlist.scm 612 */
BgL_aux2202z00_2848 = BgL_accz00_656; }  else 
{ /* Ieee/pairlist.scm 614 */
obj_t BgL_arg1379z00_659;obj_t BgL_arg1380z00_660;
{ /* Ieee/pairlist.scm 614 */
obj_t BgL_pairz00_1668;
if(
PAIRP(BgL_lz00_655))
{ /* Ieee/pairlist.scm 614 */
BgL_pairz00_1668 = BgL_lz00_655; }  else 
{ 
obj_t BgL_auxz00_6107;
BgL_auxz00_6107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24295)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_655); 
FAILURE(BgL_auxz00_6107,BFALSE,BFALSE);} 
BgL_arg1379z00_659 = 
CDR(BgL_pairz00_1668); } 
if(
EXTENDED_PAIRP(BgL_lz00_655))
{ /* Ieee/pairlist.scm 616 */
obj_t BgL_arg1382z00_662;obj_t BgL_arg1383z00_663;
BgL_arg1382z00_662 = 
CAR(BgL_lz00_655); 
{ /* Ieee/pairlist.scm 616 */
obj_t BgL_objz00_1671;
if(
EXTENDED_PAIRP(BgL_lz00_655))
{ /* Ieee/pairlist.scm 616 */
BgL_objz00_1671 = BgL_lz00_655; }  else 
{ 
obj_t BgL_auxz00_6117;
BgL_auxz00_6117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24345)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_655); 
FAILURE(BgL_auxz00_6117,BFALSE,BFALSE);} 
BgL_arg1383z00_663 = 
CER(BgL_objz00_1671); } 
{ /* Ieee/pairlist.scm 616 */
obj_t BgL_res1874z00_1675;
BgL_res1874z00_1675 = 
MAKE_EXTENDED_PAIR(BgL_arg1382z00_662, BgL_accz00_656, BgL_arg1383z00_663); 
BgL_arg1380z00_660 = BgL_res1874z00_1675; } }  else 
{ /* Ieee/pairlist.scm 615 */
BgL_arg1380z00_660 = 
MAKE_PAIR(
CAR(BgL_lz00_655), BgL_accz00_656); } 
{ 
obj_t BgL_accz00_6126;obj_t BgL_lz00_6125;
BgL_lz00_6125 = BgL_arg1379z00_659; 
BgL_accz00_6126 = BgL_arg1380z00_660; 
BgL_accz00_656 = BgL_accz00_6126; 
BgL_lz00_655 = BgL_lz00_6125; 
goto BgL_zc3anonymousza31377ze3z83_657;} } 
{ /* Ieee/pairlist.scm 610 */
bool_t BgL_testz00_6127;
if(
PAIRP(BgL_aux2202z00_2848))
{ /* Ieee/pairlist.scm 610 */
BgL_testz00_6127 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 610 */
BgL_testz00_6127 = 
NULLP(BgL_aux2202z00_2848)
; } 
if(BgL_testz00_6127)
{ /* Ieee/pairlist.scm 610 */
return BgL_aux2202z00_2848;}  else 
{ 
obj_t BgL_auxz00_6131;
BgL_auxz00_6131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24217)), BGl_string2703z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2202z00_2848); 
FAILURE(BgL_auxz00_6131,BFALSE,BFALSE);} } } } } 
}



/* _ereverse */
obj_t BGl__ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2435, obj_t BgL_lz00_2436)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 609 */
{ /* Ieee/pairlist.scm 612 */
obj_t BgL_auxz00_6135;
{ /* Ieee/pairlist.scm 612 */
bool_t BgL_testz00_6136;
if(
PAIRP(BgL_lz00_2436))
{ /* Ieee/pairlist.scm 612 */
BgL_testz00_6136 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 612 */
BgL_testz00_6136 = 
NULLP(BgL_lz00_2436)
; } 
if(BgL_testz00_6136)
{ /* Ieee/pairlist.scm 612 */
BgL_auxz00_6135 = BgL_lz00_2436
; }  else 
{ 
obj_t BgL_auxz00_6140;
BgL_auxz00_6140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24260)), BGl_string2704z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2436); 
FAILURE(BgL_auxz00_6140,BFALSE,BFALSE);} } 
return 
BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6135);} } 
}



/* take */
BGL_EXPORTED_DEF obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_61, long BgL_kz00_62)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 622 */
{ 
obj_t BgL_listz00_1678;long BgL_kz00_1679;obj_t BgL_resz00_1680;
BgL_listz00_1678 = BgL_listz00_61; 
BgL_kz00_1679 = BgL_kz00_62; 
BgL_resz00_1680 = BNIL; 
BgL_loopz00_1677:
if(
(BgL_kz00_1679==((long)0)))
{ /* Ieee/pairlist.scm 623 */
obj_t BgL_auxz00_6147;
{ /* Ieee/pairlist.scm 623 */
bool_t BgL_testz00_6148;
if(
PAIRP(BgL_resz00_1680))
{ /* Ieee/pairlist.scm 623 */
BgL_testz00_6148 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 623 */
BgL_testz00_6148 = 
NULLP(BgL_resz00_1680)
; } 
if(BgL_testz00_6148)
{ /* Ieee/pairlist.scm 623 */
BgL_auxz00_6147 = BgL_resz00_1680
; }  else 
{ 
obj_t BgL_auxz00_6152;
BgL_auxz00_6152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24627)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_resz00_1680); 
FAILURE(BgL_auxz00_6152,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_6147);}  else 
{ /* Ieee/pairlist.scm 623 */
obj_t BgL_arg1387z00_1687;long BgL_arg1388z00_1688;obj_t BgL_arg1389z00_1689;
{ /* Ieee/pairlist.scm 623 */
obj_t BgL_pairz00_1694;
if(
PAIRP(BgL_listz00_1678))
{ /* Ieee/pairlist.scm 623 */
BgL_pairz00_1694 = BgL_listz00_1678; }  else 
{ 
obj_t BgL_auxz00_6159;
BgL_auxz00_6159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24627)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1678); 
FAILURE(BgL_auxz00_6159,BFALSE,BFALSE);} 
BgL_arg1387z00_1687 = 
CDR(BgL_pairz00_1694); } 
BgL_arg1388z00_1688 = 
(BgL_kz00_1679-((long)1)); 
BgL_arg1389z00_1689 = 
MAKE_PAIR(
CAR(BgL_listz00_1678), BgL_resz00_1680); 
{ 
obj_t BgL_resz00_6169;long BgL_kz00_6168;obj_t BgL_listz00_6167;
BgL_listz00_6167 = BgL_arg1387z00_1687; 
BgL_kz00_6168 = BgL_arg1388z00_1688; 
BgL_resz00_6169 = BgL_arg1389z00_1689; 
BgL_resz00_1680 = BgL_resz00_6169; 
BgL_kz00_1679 = BgL_kz00_6168; 
BgL_listz00_1678 = BgL_listz00_6167; 
goto BgL_loopz00_1677;} } } } 
}



/* _take */
obj_t BGl__takez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2437, obj_t BgL_listz00_2438, obj_t BgL_kz00_2439)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 622 */
{ /* Ieee/pairlist.scm 623 */
long BgL_auxz00_6179;obj_t BgL_auxz00_6170;
{ /* Ieee/pairlist.scm 623 */
obj_t BgL_auxz00_6180;
if(
INTEGERP(BgL_kz00_2439))
{ /* Ieee/pairlist.scm 623 */
BgL_auxz00_6180 = BgL_kz00_2439
; }  else 
{ 
obj_t BgL_auxz00_6183;
BgL_auxz00_6183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24627)), BGl_string2705z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2439); 
FAILURE(BgL_auxz00_6183,BFALSE,BFALSE);} 
BgL_auxz00_6179 = 
(long)CINT(BgL_auxz00_6180); } 
{ /* Ieee/pairlist.scm 623 */
bool_t BgL_testz00_6171;
if(
PAIRP(BgL_listz00_2438))
{ /* Ieee/pairlist.scm 623 */
BgL_testz00_6171 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 623 */
BgL_testz00_6171 = 
NULLP(BgL_listz00_2438)
; } 
if(BgL_testz00_6171)
{ /* Ieee/pairlist.scm 623 */
BgL_auxz00_6170 = BgL_listz00_2438
; }  else 
{ 
obj_t BgL_auxz00_6175;
BgL_auxz00_6175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)24627)), BGl_string2705z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2438); 
FAILURE(BgL_auxz00_6175,BFALSE,BFALSE);} } 
return 
BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6170, BgL_auxz00_6179);} } 
}



/* drop */
BGL_EXPORTED_DEF obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_63, long BgL_kz00_64)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 633 */
BGl_dropz00zz__r4_pairs_and_lists_6_3z00:
if(
(BgL_kz00_64==((long)0)))
{ /* Ieee/pairlist.scm 634 */
return BgL_listz00_63;}  else 
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_listz00_1734;long BgL_kz00_1735;
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_pairz00_1731;
if(
PAIRP(BgL_listz00_63))
{ /* Ieee/pairlist.scm 634 */
BgL_pairz00_1731 = BgL_listz00_63; }  else 
{ 
obj_t BgL_auxz00_6193;
BgL_auxz00_6193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_63); 
FAILURE(BgL_auxz00_6193,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_aux2218z00_2864;
BgL_aux2218z00_2864 = 
CDR(BgL_pairz00_1731); 
{ /* Ieee/pairlist.scm 634 */
bool_t BgL_testz00_6198;
if(
PAIRP(BgL_aux2218z00_2864))
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6198 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6198 = 
NULLP(BgL_aux2218z00_2864)
; } 
if(BgL_testz00_6198)
{ /* Ieee/pairlist.scm 634 */
BgL_listz00_1734 = BgL_aux2218z00_2864; }  else 
{ 
obj_t BgL_auxz00_6202;
BgL_auxz00_6202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2218z00_2864); 
FAILURE(BgL_auxz00_6202,BFALSE,BFALSE);} } } } 
BgL_kz00_1735 = 
(BgL_kz00_64-((long)1)); 
if(
(BgL_kz00_1735==((long)0)))
{ /* Ieee/pairlist.scm 634 */
return BgL_listz00_1734;}  else 
{ 
long BgL_kz00_6225;obj_t BgL_listz00_6209;
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_pairz00_1742;
if(
PAIRP(BgL_listz00_1734))
{ /* Ieee/pairlist.scm 634 */
BgL_pairz00_1742 = BgL_listz00_1734; }  else 
{ 
obj_t BgL_auxz00_6212;
BgL_auxz00_6212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1734); 
FAILURE(BgL_auxz00_6212,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_aux2222z00_2868;
BgL_aux2222z00_2868 = 
CDR(BgL_pairz00_1742); 
{ /* Ieee/pairlist.scm 634 */
bool_t BgL_testz00_6217;
if(
PAIRP(BgL_aux2222z00_2868))
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6217 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6217 = 
NULLP(BgL_aux2222z00_2868)
; } 
if(BgL_testz00_6217)
{ /* Ieee/pairlist.scm 634 */
BgL_listz00_6209 = BgL_aux2222z00_2868; }  else 
{ 
obj_t BgL_auxz00_6221;
BgL_auxz00_6221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2222z00_2868); 
FAILURE(BgL_auxz00_6221,BFALSE,BFALSE);} } } } 
BgL_kz00_6225 = 
(BgL_kz00_1735-((long)1)); 
BgL_kz00_64 = BgL_kz00_6225; 
BgL_listz00_63 = BgL_listz00_6209; 
goto BGl_dropz00zz__r4_pairs_and_lists_6_3z00;} } } 
}



/* _drop */
obj_t BGl__dropz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2440, obj_t BgL_listz00_2441, obj_t BgL_kz00_2442)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 633 */
{ /* Ieee/pairlist.scm 634 */
long BgL_auxz00_6236;obj_t BgL_auxz00_6227;
{ /* Ieee/pairlist.scm 634 */
obj_t BgL_auxz00_6237;
if(
INTEGERP(BgL_kz00_2442))
{ /* Ieee/pairlist.scm 634 */
BgL_auxz00_6237 = BgL_kz00_2442
; }  else 
{ 
obj_t BgL_auxz00_6240;
BgL_auxz00_6240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2708z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2442); 
FAILURE(BgL_auxz00_6240,BFALSE,BFALSE);} 
BgL_auxz00_6236 = 
(long)CINT(BgL_auxz00_6237); } 
{ /* Ieee/pairlist.scm 634 */
bool_t BgL_testz00_6228;
if(
PAIRP(BgL_listz00_2441))
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6228 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 634 */
BgL_testz00_6228 = 
NULLP(BgL_listz00_2441)
; } 
if(BgL_testz00_6228)
{ /* Ieee/pairlist.scm 634 */
BgL_auxz00_6227 = BgL_listz00_2441
; }  else 
{ 
obj_t BgL_auxz00_6232;
BgL_auxz00_6232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25025)), BGl_string2708z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2441); 
FAILURE(BgL_auxz00_6232,BFALSE,BFALSE);} } 
return 
BGl_dropz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6227, BgL_auxz00_6236);} } 
}



/* list-tail */
BGL_EXPORTED_DEF obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_65, long BgL_kz00_66)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 641 */
{ 
obj_t BgL_listz00_1747;long BgL_kz00_1748;
BgL_listz00_1747 = BgL_listz00_65; 
BgL_kz00_1748 = BgL_kz00_66; 
BgL_dropz00_1746:
if(
(BgL_kz00_1748==((long)0)))
{ /* Ieee/pairlist.scm 642 */
return BgL_listz00_1747;}  else 
{ 
long BgL_kz00_6264;obj_t BgL_listz00_6248;
{ /* Ieee/pairlist.scm 642 */
obj_t BgL_pairz00_1758;
if(
PAIRP(BgL_listz00_1747))
{ /* Ieee/pairlist.scm 642 */
BgL_pairz00_1758 = BgL_listz00_1747; }  else 
{ 
obj_t BgL_auxz00_6251;
BgL_auxz00_6251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25343)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1747); 
FAILURE(BgL_auxz00_6251,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 642 */
obj_t BgL_aux2230z00_2876;
BgL_aux2230z00_2876 = 
CDR(BgL_pairz00_1758); 
{ /* Ieee/pairlist.scm 642 */
bool_t BgL_testz00_6256;
if(
PAIRP(BgL_aux2230z00_2876))
{ /* Ieee/pairlist.scm 642 */
BgL_testz00_6256 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 642 */
BgL_testz00_6256 = 
NULLP(BgL_aux2230z00_2876)
; } 
if(BgL_testz00_6256)
{ /* Ieee/pairlist.scm 642 */
BgL_listz00_6248 = BgL_aux2230z00_2876; }  else 
{ 
obj_t BgL_auxz00_6260;
BgL_auxz00_6260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25343)), BGl_string2707z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2230z00_2876); 
FAILURE(BgL_auxz00_6260,BFALSE,BFALSE);} } } } 
BgL_kz00_6264 = 
(BgL_kz00_1748-((long)1)); 
BgL_kz00_1748 = BgL_kz00_6264; 
BgL_listz00_1747 = BgL_listz00_6248; 
goto BgL_dropz00_1746;} } } 
}



/* _list-tail */
obj_t BGl__listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2443, obj_t BgL_listz00_2444, obj_t BgL_kz00_2445)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 641 */
{ /* Ieee/pairlist.scm 642 */
long BgL_auxz00_6275;obj_t BgL_auxz00_6266;
{ /* Ieee/pairlist.scm 642 */
obj_t BgL_auxz00_6276;
if(
INTEGERP(BgL_kz00_2445))
{ /* Ieee/pairlist.scm 642 */
BgL_auxz00_6276 = BgL_kz00_2445
; }  else 
{ 
obj_t BgL_auxz00_6279;
BgL_auxz00_6279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25343)), BGl_string2709z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2445); 
FAILURE(BgL_auxz00_6279,BFALSE,BFALSE);} 
BgL_auxz00_6275 = 
(long)CINT(BgL_auxz00_6276); } 
{ /* Ieee/pairlist.scm 642 */
bool_t BgL_testz00_6267;
if(
PAIRP(BgL_listz00_2444))
{ /* Ieee/pairlist.scm 642 */
BgL_testz00_6267 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 642 */
BgL_testz00_6267 = 
NULLP(BgL_listz00_2444)
; } 
if(BgL_testz00_6267)
{ /* Ieee/pairlist.scm 642 */
BgL_auxz00_6266 = BgL_listz00_2444
; }  else 
{ 
obj_t BgL_auxz00_6271;
BgL_auxz00_6271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25343)), BGl_string2709z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2444); 
FAILURE(BgL_auxz00_6271,BFALSE,BFALSE);} } 
return 
BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6266, BgL_auxz00_6275);} } 
}



/* list-ref */
BGL_EXPORTED_DEF obj_t bgl_list_ref(obj_t BgL_listz00_67, long BgL_kz00_68)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 647 */
bgl_list_ref:
if(
(BgL_kz00_68==((long)0)))
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_pairz00_1767;
if(
PAIRP(BgL_listz00_67))
{ /* Ieee/pairlist.scm 648 */
BgL_pairz00_1767 = BgL_listz00_67; }  else 
{ 
obj_t BgL_auxz00_6289;
BgL_auxz00_6289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_67); 
FAILURE(BgL_auxz00_6289,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1767);}  else 
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_listz00_1771;long BgL_kz00_1772;
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_pairz00_1768;
if(
PAIRP(BgL_listz00_67))
{ /* Ieee/pairlist.scm 648 */
BgL_pairz00_1768 = BgL_listz00_67; }  else 
{ 
obj_t BgL_auxz00_6296;
BgL_auxz00_6296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_67); 
FAILURE(BgL_auxz00_6296,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_aux2240z00_2886;
BgL_aux2240z00_2886 = 
CDR(BgL_pairz00_1768); 
{ /* Ieee/pairlist.scm 648 */
bool_t BgL_testz00_6301;
if(
PAIRP(BgL_aux2240z00_2886))
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6301 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6301 = 
NULLP(BgL_aux2240z00_2886)
; } 
if(BgL_testz00_6301)
{ /* Ieee/pairlist.scm 648 */
BgL_listz00_1771 = BgL_aux2240z00_2886; }  else 
{ 
obj_t BgL_auxz00_6305;
BgL_auxz00_6305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2240z00_2886); 
FAILURE(BgL_auxz00_6305,BFALSE,BFALSE);} } } } 
BgL_kz00_1772 = 
(BgL_kz00_68-((long)1)); 
if(
(BgL_kz00_1772==((long)0)))
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_pairz00_1779;
if(
PAIRP(BgL_listz00_1771))
{ /* Ieee/pairlist.scm 648 */
BgL_pairz00_1779 = BgL_listz00_1771; }  else 
{ 
obj_t BgL_auxz00_6314;
BgL_auxz00_6314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1771); 
FAILURE(BgL_auxz00_6314,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1779);}  else 
{ 
long BgL_kz00_6335;obj_t BgL_listz00_6319;
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_pairz00_1780;
if(
PAIRP(BgL_listz00_1771))
{ /* Ieee/pairlist.scm 648 */
BgL_pairz00_1780 = BgL_listz00_1771; }  else 
{ 
obj_t BgL_auxz00_6322;
BgL_auxz00_6322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1771); 
FAILURE(BgL_auxz00_6322,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_aux2246z00_2892;
BgL_aux2246z00_2892 = 
CDR(BgL_pairz00_1780); 
{ /* Ieee/pairlist.scm 648 */
bool_t BgL_testz00_6327;
if(
PAIRP(BgL_aux2246z00_2892))
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6327 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6327 = 
NULLP(BgL_aux2246z00_2892)
; } 
if(BgL_testz00_6327)
{ /* Ieee/pairlist.scm 648 */
BgL_listz00_6319 = BgL_aux2246z00_2892; }  else 
{ 
obj_t BgL_auxz00_6331;
BgL_auxz00_6331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2710z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2246z00_2892); 
FAILURE(BgL_auxz00_6331,BFALSE,BFALSE);} } } } 
BgL_kz00_6335 = 
(BgL_kz00_1772-((long)1)); 
BgL_kz00_68 = BgL_kz00_6335; 
BgL_listz00_67 = BgL_listz00_6319; 
goto bgl_list_ref;} } } 
}



/* _list-ref */
obj_t BGl__listzd2refzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2446, obj_t BgL_listz00_2447, obj_t BgL_kz00_2448)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 647 */
{ /* Ieee/pairlist.scm 648 */
long BgL_auxz00_6346;obj_t BgL_auxz00_6337;
{ /* Ieee/pairlist.scm 648 */
obj_t BgL_auxz00_6347;
if(
INTEGERP(BgL_kz00_2448))
{ /* Ieee/pairlist.scm 648 */
BgL_auxz00_6347 = BgL_kz00_2448
; }  else 
{ 
obj_t BgL_auxz00_6350;
BgL_auxz00_6350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2448); 
FAILURE(BgL_auxz00_6350,BFALSE,BFALSE);} 
BgL_auxz00_6346 = 
(long)CINT(BgL_auxz00_6347); } 
{ /* Ieee/pairlist.scm 648 */
bool_t BgL_testz00_6338;
if(
PAIRP(BgL_listz00_2447))
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6338 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 648 */
BgL_testz00_6338 = 
NULLP(BgL_listz00_2447)
; } 
if(BgL_testz00_6338)
{ /* Ieee/pairlist.scm 648 */
BgL_auxz00_6337 = BgL_listz00_2447
; }  else 
{ 
obj_t BgL_auxz00_6342;
BgL_auxz00_6342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25610)), BGl_string2711z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2447); 
FAILURE(BgL_auxz00_6342,BFALSE,BFALSE);} } 
return 
bgl_list_ref(BgL_auxz00_6337, BgL_auxz00_6346);} } 
}



/* list-set! */
BGL_EXPORTED_DEF obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_listz00_69, long BgL_kz00_70, obj_t BgL_valz00_71)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 655 */
BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00:
if(
(BgL_kz00_70==((long)0)))
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_pairz00_1789;
if(
PAIRP(BgL_listz00_69))
{ /* Ieee/pairlist.scm 656 */
BgL_pairz00_1789 = BgL_listz00_69; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_69); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_1789, BgL_valz00_71);}  else 
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_arg1398z00_1784;long BgL_arg1399z00_1785;
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_pairz00_1791;
if(
PAIRP(BgL_listz00_69))
{ /* Ieee/pairlist.scm 656 */
BgL_pairz00_1791 = BgL_listz00_69; }  else 
{ 
obj_t BgL_auxz00_6367;
BgL_auxz00_6367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_69); 
FAILURE(BgL_auxz00_6367,BFALSE,BFALSE);} 
BgL_arg1398z00_1784 = 
CDR(BgL_pairz00_1791); } 
BgL_arg1399z00_1785 = 
(BgL_kz00_70-((long)1)); 
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_listz00_1794;
{ /* Ieee/pairlist.scm 656 */
bool_t BgL_testz00_6373;
if(
PAIRP(BgL_arg1398z00_1784))
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6373 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6373 = 
NULLP(BgL_arg1398z00_1784)
; } 
if(BgL_testz00_6373)
{ /* Ieee/pairlist.scm 656 */
BgL_listz00_1794 = BgL_arg1398z00_1784; }  else 
{ 
obj_t BgL_auxz00_6377;
BgL_auxz00_6377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1398z00_1784); 
FAILURE(BgL_auxz00_6377,BFALSE,BFALSE);} } 
if(
(BgL_arg1399z00_1785==((long)0)))
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_pairz00_1803;
if(
PAIRP(BgL_listz00_1794))
{ /* Ieee/pairlist.scm 656 */
BgL_pairz00_1803 = BgL_listz00_1794; }  else 
{ 
obj_t BgL_auxz00_6385;
BgL_auxz00_6385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1794); 
FAILURE(BgL_auxz00_6385,BFALSE,BFALSE);} 
return 
SET_CAR(BgL_pairz00_1803, BgL_valz00_71);}  else 
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_arg1398z00_1798;long BgL_arg1399z00_1799;
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_pairz00_1805;
if(
PAIRP(BgL_listz00_1794))
{ /* Ieee/pairlist.scm 656 */
BgL_pairz00_1805 = BgL_listz00_1794; }  else 
{ 
obj_t BgL_auxz00_6392;
BgL_auxz00_6392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_1794); 
FAILURE(BgL_auxz00_6392,BFALSE,BFALSE);} 
BgL_arg1398z00_1798 = 
CDR(BgL_pairz00_1805); } 
BgL_arg1399z00_1799 = 
(BgL_arg1399z00_1785-((long)1)); 
{ 
long BgL_kz00_6407;obj_t BgL_listz00_6398;
{ /* Ieee/pairlist.scm 656 */
bool_t BgL_testz00_6399;
if(
PAIRP(BgL_arg1398z00_1798))
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6399 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6399 = 
NULLP(BgL_arg1398z00_1798)
; } 
if(BgL_testz00_6399)
{ /* Ieee/pairlist.scm 656 */
BgL_listz00_6398 = BgL_arg1398z00_1798; }  else 
{ 
obj_t BgL_auxz00_6403;
BgL_auxz00_6403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2712z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1398z00_1798); 
FAILURE(BgL_auxz00_6403,BFALSE,BFALSE);} } 
BgL_kz00_6407 = BgL_arg1399z00_1799; 
BgL_kz00_70 = BgL_kz00_6407; 
BgL_listz00_69 = BgL_listz00_6398; 
goto BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00;} } } } } 
}



/* _list-set! */
obj_t BGl__listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2449, obj_t BgL_listz00_2450, obj_t BgL_kz00_2451, obj_t BgL_valz00_2452)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 655 */
{ /* Ieee/pairlist.scm 656 */
long BgL_auxz00_6417;obj_t BgL_auxz00_6408;
{ /* Ieee/pairlist.scm 656 */
obj_t BgL_auxz00_6418;
if(
INTEGERP(BgL_kz00_2451))
{ /* Ieee/pairlist.scm 656 */
BgL_auxz00_6418 = BgL_kz00_2451
; }  else 
{ 
obj_t BgL_auxz00_6421;
BgL_auxz00_6421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2451); 
FAILURE(BgL_auxz00_6421,BFALSE,BFALSE);} 
BgL_auxz00_6417 = 
(long)CINT(BgL_auxz00_6418); } 
{ /* Ieee/pairlist.scm 656 */
bool_t BgL_testz00_6409;
if(
PAIRP(BgL_listz00_2450))
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6409 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 656 */
BgL_testz00_6409 = 
NULLP(BgL_listz00_2450)
; } 
if(BgL_testz00_6409)
{ /* Ieee/pairlist.scm 656 */
BgL_auxz00_6408 = BgL_listz00_2450
; }  else 
{ 
obj_t BgL_auxz00_6413;
BgL_auxz00_6413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)25942)), BGl_string2713z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2450); 
FAILURE(BgL_auxz00_6413,BFALSE,BFALSE);} } 
return 
BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6408, BgL_auxz00_6417, BgL_valz00_2452);} } 
}



/* last-pair */
BGL_EXPORTED_DEF obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_72)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 663 */
BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00:
{ /* Ieee/pairlist.scm 664 */
bool_t BgL_testz00_6427;
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_auxz00_6428;
BgL_auxz00_6428 = 
CDR(BgL_xz00_72); 
BgL_testz00_6427 = 
PAIRP(BgL_auxz00_6428); } 
if(BgL_testz00_6427)
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_xz00_1814;
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_aux2268z00_2914;
BgL_aux2268z00_2914 = 
CDR(BgL_xz00_72); 
if(
PAIRP(BgL_aux2268z00_2914))
{ /* Ieee/pairlist.scm 664 */
BgL_xz00_1814 = BgL_aux2268z00_2914; }  else 
{ 
obj_t BgL_auxz00_6434;
BgL_auxz00_6434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26290)), BGl_string2714z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2268z00_2914); 
FAILURE(BgL_auxz00_6434,BFALSE,BFALSE);} } 
{ /* Ieee/pairlist.scm 664 */
bool_t BgL_testz00_6438;
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_auxz00_6439;
BgL_auxz00_6439 = 
CDR(BgL_xz00_1814); 
BgL_testz00_6438 = 
PAIRP(BgL_auxz00_6439); } 
if(BgL_testz00_6438)
{ 
obj_t BgL_xz00_6442;
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_aux2270z00_2916;
BgL_aux2270z00_2916 = 
CDR(BgL_xz00_1814); 
if(
PAIRP(BgL_aux2270z00_2916))
{ /* Ieee/pairlist.scm 664 */
BgL_xz00_6442 = BgL_aux2270z00_2916; }  else 
{ 
obj_t BgL_auxz00_6446;
BgL_auxz00_6446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26290)), BGl_string2714z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2270z00_2916); 
FAILURE(BgL_auxz00_6446,BFALSE,BFALSE);} } 
BgL_xz00_72 = BgL_xz00_6442; 
goto BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00;}  else 
{ /* Ieee/pairlist.scm 664 */
return BgL_xz00_1814;} } }  else 
{ /* Ieee/pairlist.scm 664 */
return BgL_xz00_72;} } } 
}



/* _last-pair */
obj_t BGl__lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2453, obj_t BgL_xz00_2454)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 663 */
{ /* Ieee/pairlist.scm 664 */
obj_t BgL_auxz00_6450;
if(
PAIRP(BgL_xz00_2454))
{ /* Ieee/pairlist.scm 664 */
BgL_auxz00_6450 = BgL_xz00_2454
; }  else 
{ 
obj_t BgL_auxz00_6453;
BgL_auxz00_6453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26290)), BGl_string2715z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2454); 
FAILURE(BgL_auxz00_6453,BFALSE,BFALSE);} 
return 
BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_6450);} } 
}



/* memq */
BGL_EXPORTED_DEF obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_73, obj_t BgL_listz00_74)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 671 */
{ 
obj_t BgL_listz00_691;
BgL_listz00_691 = BgL_listz00_74; 
BgL_zc3anonymousza31403ze3z83_692:
if(
PAIRP(BgL_listz00_691))
{ /* Ieee/pairlist.scm 673 */
if(
(
CAR(BgL_listz00_691)==BgL_objz00_73))
{ /* Ieee/pairlist.scm 674 */
return BgL_listz00_691;}  else 
{ 
obj_t BgL_listz00_6463;
BgL_listz00_6463 = 
CDR(BgL_listz00_691); 
BgL_listz00_691 = BgL_listz00_6463; 
goto BgL_zc3anonymousza31403ze3z83_692;} }  else 
{ /* Ieee/pairlist.scm 673 */
return BFALSE;} } } 
}



/* _memq */
obj_t BGl__memqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2455, obj_t BgL_objz00_2456, obj_t BgL_listz00_2457)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 671 */
{ /* Ieee/pairlist.scm 673 */
obj_t BgL_auxz00_6465;
{ /* Ieee/pairlist.scm 673 */
bool_t BgL_testz00_6466;
if(
PAIRP(BgL_listz00_2457))
{ /* Ieee/pairlist.scm 673 */
BgL_testz00_6466 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 673 */
BgL_testz00_6466 = 
NULLP(BgL_listz00_2457)
; } 
if(BgL_testz00_6466)
{ /* Ieee/pairlist.scm 673 */
BgL_auxz00_6465 = BgL_listz00_2457
; }  else 
{ 
obj_t BgL_auxz00_6470;
BgL_auxz00_6470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26617)), BGl_string2716z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2457); 
FAILURE(BgL_auxz00_6470,BFALSE,BFALSE);} } 
return 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2456, BgL_auxz00_6465);} } 
}



/* memv */
BGL_EXPORTED_DEF obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_75, obj_t BgL_listz00_76)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 682 */
{ 
obj_t BgL_listz00_699;
BgL_listz00_699 = BgL_listz00_76; 
BgL_zc3anonymousza31408ze3z83_700:
if(
PAIRP(BgL_listz00_699))
{ /* Ieee/pairlist.scm 684 */
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(
CAR(BgL_listz00_699), BgL_objz00_75))
{ /* Ieee/pairlist.scm 685 */
return BgL_listz00_699;}  else 
{ 
obj_t BgL_listz00_6480;
BgL_listz00_6480 = 
CDR(BgL_listz00_699); 
BgL_listz00_699 = BgL_listz00_6480; 
goto BgL_zc3anonymousza31408ze3z83_700;} }  else 
{ /* Ieee/pairlist.scm 684 */
return BFALSE;} } } 
}



/* _memv */
obj_t BGl__memvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2458, obj_t BgL_objz00_2459, obj_t BgL_listz00_2460)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 682 */
{ /* Ieee/pairlist.scm 684 */
obj_t BgL_auxz00_6482;
{ /* Ieee/pairlist.scm 684 */
bool_t BgL_testz00_6483;
if(
PAIRP(BgL_listz00_2460))
{ /* Ieee/pairlist.scm 684 */
BgL_testz00_6483 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 684 */
BgL_testz00_6483 = 
NULLP(BgL_listz00_2460)
; } 
if(BgL_testz00_6483)
{ /* Ieee/pairlist.scm 684 */
BgL_auxz00_6482 = BgL_listz00_2460
; }  else 
{ 
obj_t BgL_auxz00_6487;
BgL_auxz00_6487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)26989)), BGl_string2717z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2460); 
FAILURE(BgL_auxz00_6487,BFALSE,BFALSE);} } 
return 
BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2459, BgL_auxz00_6482);} } 
}



/* member */
BGL_EXPORTED_DEF obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_77, obj_t BgL_listz00_78)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 693 */
{ 
obj_t BgL_listz00_707;
BgL_listz00_707 = BgL_listz00_78; 
BgL_zc3anonymousza31413ze3z83_708:
if(
PAIRP(BgL_listz00_707))
{ /* Ieee/pairlist.scm 696 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_objz00_77, 
CAR(BgL_listz00_707)))
{ /* Ieee/pairlist.scm 697 */
return BgL_listz00_707;}  else 
{ 
obj_t BgL_listz00_6497;
BgL_listz00_6497 = 
CDR(BgL_listz00_707); 
BgL_listz00_707 = BgL_listz00_6497; 
goto BgL_zc3anonymousza31413ze3z83_708;} }  else 
{ /* Ieee/pairlist.scm 696 */
return BFALSE;} } } 
}



/* _member */
obj_t BGl__memberz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2461, obj_t BgL_objz00_2462, obj_t BgL_listz00_2463)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 693 */
{ /* Ieee/pairlist.scm 696 */
obj_t BgL_auxz00_6499;
{ /* Ieee/pairlist.scm 696 */
bool_t BgL_testz00_6500;
if(
PAIRP(BgL_listz00_2463))
{ /* Ieee/pairlist.scm 696 */
BgL_testz00_6500 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 696 */
BgL_testz00_6500 = 
NULLP(BgL_listz00_2463)
; } 
if(BgL_testz00_6500)
{ /* Ieee/pairlist.scm 696 */
BgL_auxz00_6499 = BgL_listz00_2463
; }  else 
{ 
obj_t BgL_auxz00_6504;
BgL_auxz00_6504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)27373)), BGl_string2718z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2463); 
FAILURE(BgL_auxz00_6504,BFALSE,BFALSE);} } 
return 
BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2462, BgL_auxz00_6499);} } 
}



/* assq */
BGL_EXPORTED_DEF obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_79, obj_t BgL_alistz00_80)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 703 */
{ 
obj_t BgL_alistz00_715;
BgL_alistz00_715 = BgL_alistz00_80; 
BgL_zc3anonymousza31418ze3z83_716:
if(
PAIRP(BgL_alistz00_715))
{ /* Ieee/pairlist.scm 706 */
bool_t BgL_testz00_6511;
{ /* Ieee/pairlist.scm 706 */
obj_t BgL_auxz00_6512;
{ /* Ieee/pairlist.scm 706 */
obj_t BgL_pairz00_1833;
{ /* Ieee/pairlist.scm 706 */
obj_t BgL_aux2280z00_2926;
BgL_aux2280z00_2926 = 
CAR(BgL_alistz00_715); 
if(
PAIRP(BgL_aux2280z00_2926))
{ /* Ieee/pairlist.scm 706 */
BgL_pairz00_1833 = BgL_aux2280z00_2926; }  else 
{ 
obj_t BgL_auxz00_6516;
BgL_auxz00_6516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)27785)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2280z00_2926); 
FAILURE(BgL_auxz00_6516,BFALSE,BFALSE);} } 
BgL_auxz00_6512 = 
CAR(BgL_pairz00_1833); } 
BgL_testz00_6511 = 
(BgL_auxz00_6512==BgL_objz00_79); } 
if(BgL_testz00_6511)
{ /* Ieee/pairlist.scm 706 */
return 
CAR(BgL_alistz00_715);}  else 
{ 
obj_t BgL_alistz00_6523;
BgL_alistz00_6523 = 
CDR(BgL_alistz00_715); 
BgL_alistz00_715 = BgL_alistz00_6523; 
goto BgL_zc3anonymousza31418ze3z83_716;} }  else 
{ /* Ieee/pairlist.scm 705 */
return BFALSE;} } } 
}



/* _assq */
obj_t BGl__assqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2464, obj_t BgL_objz00_2465, obj_t BgL_alistz00_2466)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 703 */
{ /* Ieee/pairlist.scm 705 */
obj_t BgL_auxz00_6525;
{ /* Ieee/pairlist.scm 705 */
bool_t BgL_testz00_6526;
if(
PAIRP(BgL_alistz00_2466))
{ /* Ieee/pairlist.scm 705 */
BgL_testz00_6526 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 705 */
BgL_testz00_6526 = 
NULLP(BgL_alistz00_2466)
; } 
if(BgL_testz00_6526)
{ /* Ieee/pairlist.scm 705 */
BgL_auxz00_6525 = BgL_alistz00_2466
; }  else 
{ 
obj_t BgL_auxz00_6530;
BgL_auxz00_6530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)27743)), BGl_string2719z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2466); 
FAILURE(BgL_auxz00_6530,BFALSE,BFALSE);} } 
return 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2465, BgL_auxz00_6525);} } 
}



/* assv */
BGL_EXPORTED_DEF obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_81, obj_t BgL_alistz00_82)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 714 */
{ 
obj_t BgL_alistz00_724;
BgL_alistz00_724 = BgL_alistz00_82; 
BgL_zc3anonymousza31424ze3z83_725:
if(
PAIRP(BgL_alistz00_724))
{ /* Ieee/pairlist.scm 717 */
bool_t BgL_testz00_6537;
{ /* Ieee/pairlist.scm 717 */
obj_t BgL_auxz00_6538;
{ /* Ieee/pairlist.scm 717 */
obj_t BgL_pairz00_1838;
{ /* Ieee/pairlist.scm 717 */
obj_t BgL_aux2284z00_2930;
BgL_aux2284z00_2930 = 
CAR(BgL_alistz00_724); 
if(
PAIRP(BgL_aux2284z00_2930))
{ /* Ieee/pairlist.scm 717 */
BgL_pairz00_1838 = BgL_aux2284z00_2930; }  else 
{ 
obj_t BgL_auxz00_6542;
BgL_auxz00_6542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28205)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2284z00_2930); 
FAILURE(BgL_auxz00_6542,BFALSE,BFALSE);} } 
BgL_auxz00_6538 = 
CAR(BgL_pairz00_1838); } 
BgL_testz00_6537 = 
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_6538, BgL_objz00_81); } 
if(BgL_testz00_6537)
{ /* Ieee/pairlist.scm 717 */
return 
CAR(BgL_alistz00_724);}  else 
{ 
obj_t BgL_alistz00_6549;
BgL_alistz00_6549 = 
CDR(BgL_alistz00_724); 
BgL_alistz00_724 = BgL_alistz00_6549; 
goto BgL_zc3anonymousza31424ze3z83_725;} }  else 
{ /* Ieee/pairlist.scm 716 */
return BFALSE;} } } 
}



/* _assv */
obj_t BGl__assvz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2467, obj_t BgL_objz00_2468, obj_t BgL_alistz00_2469)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 714 */
{ /* Ieee/pairlist.scm 716 */
obj_t BgL_auxz00_6551;
{ /* Ieee/pairlist.scm 716 */
bool_t BgL_testz00_6552;
if(
PAIRP(BgL_alistz00_2469))
{ /* Ieee/pairlist.scm 716 */
BgL_testz00_6552 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 716 */
BgL_testz00_6552 = 
NULLP(BgL_alistz00_2469)
; } 
if(BgL_testz00_6552)
{ /* Ieee/pairlist.scm 716 */
BgL_auxz00_6551 = BgL_alistz00_2469
; }  else 
{ 
obj_t BgL_auxz00_6556;
BgL_auxz00_6556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28162)), BGl_string2720z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2469); 
FAILURE(BgL_auxz00_6556,BFALSE,BFALSE);} } 
return 
BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2468, BgL_auxz00_6551);} } 
}



/* assoc */
BGL_EXPORTED_DEF obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_83, obj_t BgL_alistz00_84)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 725 */
{ 
obj_t BgL_alistz00_733;
BgL_alistz00_733 = BgL_alistz00_84; 
BgL_zc3anonymousza31430ze3z83_734:
if(
PAIRP(BgL_alistz00_733))
{ /* Ieee/pairlist.scm 728 */
bool_t BgL_testz00_6563;
{ /* Ieee/pairlist.scm 728 */
obj_t BgL_auxz00_6564;
{ /* Ieee/pairlist.scm 728 */
obj_t BgL_pairz00_1843;
{ /* Ieee/pairlist.scm 728 */
obj_t BgL_aux2288z00_2934;
BgL_aux2288z00_2934 = 
CAR(BgL_alistz00_733); 
if(
PAIRP(BgL_aux2288z00_2934))
{ /* Ieee/pairlist.scm 728 */
BgL_pairz00_1843 = BgL_aux2288z00_2934; }  else 
{ 
obj_t BgL_auxz00_6568;
BgL_auxz00_6568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28621)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2288z00_2934); 
FAILURE(BgL_auxz00_6568,BFALSE,BFALSE);} } 
BgL_auxz00_6564 = 
CAR(BgL_pairz00_1843); } 
BgL_testz00_6563 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_6564, BgL_objz00_83); } 
if(BgL_testz00_6563)
{ /* Ieee/pairlist.scm 728 */
return 
CAR(BgL_alistz00_733);}  else 
{ 
obj_t BgL_alistz00_6575;
BgL_alistz00_6575 = 
CDR(BgL_alistz00_733); 
BgL_alistz00_733 = BgL_alistz00_6575; 
goto BgL_zc3anonymousza31430ze3z83_734;} }  else 
{ /* Ieee/pairlist.scm 727 */
return BFALSE;} } } 
}



/* _assoc */
obj_t BGl__assocz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2470, obj_t BgL_objz00_2471, obj_t BgL_alistz00_2472)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 725 */
{ /* Ieee/pairlist.scm 727 */
obj_t BgL_auxz00_6577;
{ /* Ieee/pairlist.scm 727 */
bool_t BgL_testz00_6578;
if(
PAIRP(BgL_alistz00_2472))
{ /* Ieee/pairlist.scm 727 */
BgL_testz00_6578 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 727 */
BgL_testz00_6578 = 
NULLP(BgL_alistz00_2472)
; } 
if(BgL_testz00_6578)
{ /* Ieee/pairlist.scm 727 */
BgL_auxz00_6577 = BgL_alistz00_2472
; }  else 
{ 
obj_t BgL_auxz00_6582;
BgL_auxz00_6582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)28576)), BGl_string2721z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_alistz00_2472); 
FAILURE(BgL_auxz00_6582,BFALSE,BFALSE);} } 
return 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2471, BgL_auxz00_6577);} } 
}



/* remq */
BGL_EXPORTED_DEF obj_t bgl_remq(obj_t BgL_xz00_85, obj_t BgL_yz00_86)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 739 */
bgl_remq:
if(
NULLP(BgL_yz00_86))
{ /* Ieee/pairlist.scm 741 */
return BgL_yz00_86;}  else 
{ /* Ieee/pairlist.scm 742 */
bool_t BgL_testz00_6589;
{ /* Ieee/pairlist.scm 742 */
obj_t BgL_auxz00_6590;
{ /* Ieee/pairlist.scm 742 */
obj_t BgL_pairz00_1847;
if(
PAIRP(BgL_yz00_86))
{ /* Ieee/pairlist.scm 742 */
BgL_pairz00_1847 = BgL_yz00_86; }  else 
{ 
obj_t BgL_auxz00_6593;
BgL_auxz00_6593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29220)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_86); 
FAILURE(BgL_auxz00_6593,BFALSE,BFALSE);} 
BgL_auxz00_6590 = 
CAR(BgL_pairz00_1847); } 
BgL_testz00_6589 = 
(BgL_xz00_85==BgL_auxz00_6590); } 
if(BgL_testz00_6589)
{ /* Ieee/pairlist.scm 742 */
obj_t BgL_arg1438z00_743;
{ /* Ieee/pairlist.scm 742 */
obj_t BgL_pairz00_1848;
if(
PAIRP(BgL_yz00_86))
{ /* Ieee/pairlist.scm 742 */
BgL_pairz00_1848 = BgL_yz00_86; }  else 
{ 
obj_t BgL_auxz00_6601;
BgL_auxz00_6601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29237)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_86); 
FAILURE(BgL_auxz00_6601,BFALSE,BFALSE);} 
BgL_arg1438z00_743 = 
CDR(BgL_pairz00_1848); } 
{ 
obj_t BgL_yz00_6606;
{ /* Ieee/pairlist.scm 742 */
bool_t BgL_testz00_6607;
if(
PAIRP(BgL_arg1438z00_743))
{ /* Ieee/pairlist.scm 742 */
BgL_testz00_6607 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 742 */
BgL_testz00_6607 = 
NULLP(BgL_arg1438z00_743)
; } 
if(BgL_testz00_6607)
{ /* Ieee/pairlist.scm 742 */
BgL_yz00_6606 = BgL_arg1438z00_743; }  else 
{ 
obj_t BgL_auxz00_6611;
BgL_auxz00_6611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29238)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1438z00_743); 
FAILURE(BgL_auxz00_6611,BFALSE,BFALSE);} } 
BgL_yz00_86 = BgL_yz00_6606; 
goto bgl_remq;} }  else 
{ /* Ieee/pairlist.scm 743 */
obj_t BgL_arg1439z00_744;obj_t BgL_arg1440z00_745;
{ /* Ieee/pairlist.scm 743 */
obj_t BgL_pairz00_1849;
if(
PAIRP(BgL_yz00_86))
{ /* Ieee/pairlist.scm 743 */
BgL_pairz00_1849 = BgL_yz00_86; }  else 
{ 
obj_t BgL_auxz00_6617;
BgL_auxz00_6617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29265)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_86); 
FAILURE(BgL_auxz00_6617,BFALSE,BFALSE);} 
BgL_arg1439z00_744 = 
CAR(BgL_pairz00_1849); } 
{ /* Ieee/pairlist.scm 743 */
obj_t BgL_arg1441z00_746;
BgL_arg1441z00_746 = 
CDR(BgL_yz00_86); 
{ /* Ieee/pairlist.scm 743 */
obj_t BgL_auxz00_6623;
{ /* Ieee/pairlist.scm 743 */
bool_t BgL_testz00_6624;
if(
PAIRP(BgL_arg1441z00_746))
{ /* Ieee/pairlist.scm 743 */
BgL_testz00_6624 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 743 */
BgL_testz00_6624 = 
NULLP(BgL_arg1441z00_746)
; } 
if(BgL_testz00_6624)
{ /* Ieee/pairlist.scm 743 */
BgL_auxz00_6623 = BgL_arg1441z00_746
; }  else 
{ 
obj_t BgL_auxz00_6628;
BgL_auxz00_6628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29282)), BGl_string2722z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1441z00_746); 
FAILURE(BgL_auxz00_6628,BFALSE,BFALSE);} } 
BgL_arg1440z00_745 = 
bgl_remq(BgL_xz00_85, BgL_auxz00_6623); } } 
return 
MAKE_PAIR(BgL_arg1439z00_744, BgL_arg1440z00_745);} } } 
}



/* _remq */
obj_t BGl__remqz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2473, obj_t BgL_xz00_2474, obj_t BgL_yz00_2475)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 739 */
{ /* Ieee/pairlist.scm 741 */
obj_t BgL_auxz00_6634;
{ /* Ieee/pairlist.scm 741 */
bool_t BgL_testz00_6635;
if(
PAIRP(BgL_yz00_2475))
{ /* Ieee/pairlist.scm 741 */
BgL_testz00_6635 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 741 */
BgL_testz00_6635 = 
NULLP(BgL_yz00_2475)
; } 
if(BgL_testz00_6635)
{ /* Ieee/pairlist.scm 741 */
BgL_auxz00_6634 = BgL_yz00_2475
; }  else 
{ 
obj_t BgL_auxz00_6639;
BgL_auxz00_6639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29188)), BGl_string2723z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2475); 
FAILURE(BgL_auxz00_6639,BFALSE,BFALSE);} } 
return 
bgl_remq(BgL_xz00_2474, BgL_auxz00_6634);} } 
}



/* remq! */
BGL_EXPORTED_DEF obj_t bgl_remq_bang(obj_t BgL_xz00_87, obj_t BgL_yz00_88)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 748 */
bgl_remq_bang:
if(
NULLP(BgL_yz00_88))
{ /* Ieee/pairlist.scm 750 */
return BgL_yz00_88;}  else 
{ /* Ieee/pairlist.scm 751 */
bool_t BgL_testz00_6646;
{ /* Ieee/pairlist.scm 751 */
obj_t BgL_auxz00_6647;
{ /* Ieee/pairlist.scm 751 */
obj_t BgL_pairz00_1852;
if(
PAIRP(BgL_yz00_88))
{ /* Ieee/pairlist.scm 751 */
BgL_pairz00_1852 = BgL_yz00_88; }  else 
{ 
obj_t BgL_auxz00_6650;
BgL_auxz00_6650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29580)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_88); 
FAILURE(BgL_auxz00_6650,BFALSE,BFALSE);} 
BgL_auxz00_6647 = 
CAR(BgL_pairz00_1852); } 
BgL_testz00_6646 = 
(BgL_xz00_87==BgL_auxz00_6647); } 
if(BgL_testz00_6646)
{ /* Ieee/pairlist.scm 751 */
obj_t BgL_arg1445z00_750;
{ /* Ieee/pairlist.scm 751 */
obj_t BgL_pairz00_1853;
if(
PAIRP(BgL_yz00_88))
{ /* Ieee/pairlist.scm 751 */
BgL_pairz00_1853 = BgL_yz00_88; }  else 
{ 
obj_t BgL_auxz00_6658;
BgL_auxz00_6658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29598)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_88); 
FAILURE(BgL_auxz00_6658,BFALSE,BFALSE);} 
BgL_arg1445z00_750 = 
CDR(BgL_pairz00_1853); } 
{ 
obj_t BgL_yz00_6663;
{ /* Ieee/pairlist.scm 751 */
bool_t BgL_testz00_6664;
if(
PAIRP(BgL_arg1445z00_750))
{ /* Ieee/pairlist.scm 751 */
BgL_testz00_6664 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 751 */
BgL_testz00_6664 = 
NULLP(BgL_arg1445z00_750)
; } 
if(BgL_testz00_6664)
{ /* Ieee/pairlist.scm 751 */
BgL_yz00_6663 = BgL_arg1445z00_750; }  else 
{ 
obj_t BgL_auxz00_6668;
BgL_auxz00_6668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29599)), BGl_string2724z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1445z00_750); 
FAILURE(BgL_auxz00_6668,BFALSE,BFALSE);} } 
BgL_yz00_88 = BgL_yz00_6663; 
goto bgl_remq_bang;} }  else 
{ 
obj_t BgL_prevz00_752;
BgL_prevz00_752 = BgL_yz00_88; 
BgL_zc3anonymousza31446ze3z83_753:
{ /* Ieee/pairlist.scm 753 */
bool_t BgL_testz00_6672;
{ /* Ieee/pairlist.scm 753 */
obj_t BgL_auxz00_6673;
{ /* Ieee/pairlist.scm 753 */
obj_t BgL_pairz00_1854;
if(
PAIRP(BgL_prevz00_752))
{ /* Ieee/pairlist.scm 753 */
BgL_pairz00_1854 = BgL_prevz00_752; }  else 
{ 
obj_t BgL_auxz00_6676;
BgL_auxz00_6676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29670)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_752); 
FAILURE(BgL_auxz00_6676,BFALSE,BFALSE);} 
BgL_auxz00_6673 = 
CDR(BgL_pairz00_1854); } 
BgL_testz00_6672 = 
NULLP(BgL_auxz00_6673); } 
if(BgL_testz00_6672)
{ /* Ieee/pairlist.scm 753 */
return BgL_yz00_88;}  else 
{ /* Ieee/pairlist.scm 755 */
bool_t BgL_testz00_6682;
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_auxz00_6683;
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_pairz00_1856;
if(
PAIRP(BgL_prevz00_752))
{ /* Ieee/pairlist.scm 755 */
BgL_pairz00_1856 = BgL_prevz00_752; }  else 
{ 
obj_t BgL_auxz00_6686;
BgL_auxz00_6686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29735)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_752); 
FAILURE(BgL_auxz00_6686,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_pairz00_1859;
{ /* Ieee/pairlist.scm 755 */
obj_t BgL_aux2316z00_2962;
BgL_aux2316z00_2962 = 
CDR(BgL_pairz00_1856); 
if(
PAIRP(BgL_aux2316z00_2962))
{ /* Ieee/pairlist.scm 755 */
BgL_pairz00_1859 = BgL_aux2316z00_2962; }  else 
{ 
obj_t BgL_auxz00_6693;
BgL_auxz00_6693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29729)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2316z00_2962); 
FAILURE(BgL_auxz00_6693,BFALSE,BFALSE);} } 
BgL_auxz00_6683 = 
CAR(BgL_pairz00_1859); } } 
BgL_testz00_6682 = 
(BgL_auxz00_6683==BgL_xz00_87); } 
if(BgL_testz00_6682)
{ /* Ieee/pairlist.scm 755 */
{ /* Ieee/pairlist.scm 756 */
obj_t BgL_arg1449z00_756;
{ /* Ieee/pairlist.scm 756 */
obj_t BgL_pairz00_1860;
if(
PAIRP(BgL_prevz00_752))
{ /* Ieee/pairlist.scm 756 */
BgL_pairz00_1860 = BgL_prevz00_752; }  else 
{ 
obj_t BgL_auxz00_6701;
BgL_auxz00_6701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29787)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_752); 
FAILURE(BgL_auxz00_6701,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 756 */
obj_t BgL_pairz00_1863;
{ /* Ieee/pairlist.scm 756 */
obj_t BgL_aux2320z00_2966;
BgL_aux2320z00_2966 = 
CDR(BgL_pairz00_1860); 
if(
PAIRP(BgL_aux2320z00_2966))
{ /* Ieee/pairlist.scm 756 */
BgL_pairz00_1863 = BgL_aux2320z00_2966; }  else 
{ 
obj_t BgL_auxz00_6708;
BgL_auxz00_6708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29781)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2320z00_2966); 
FAILURE(BgL_auxz00_6708,BFALSE,BFALSE);} } 
BgL_arg1449z00_756 = 
CDR(BgL_pairz00_1863); } } 
SET_CDR(BgL_prevz00_752, BgL_arg1449z00_756); } 
{ 

goto BgL_zc3anonymousza31446ze3z83_753;} }  else 
{ /* Ieee/pairlist.scm 758 */
obj_t BgL_arg1450z00_757;
{ /* Ieee/pairlist.scm 758 */
obj_t BgL_pairz00_1866;
if(
PAIRP(BgL_prevz00_752))
{ /* Ieee/pairlist.scm 758 */
BgL_pairz00_1866 = BgL_prevz00_752; }  else 
{ 
obj_t BgL_auxz00_6716;
BgL_auxz00_6716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29867)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_752); 
FAILURE(BgL_auxz00_6716,BFALSE,BFALSE);} 
BgL_arg1450z00_757 = 
CDR(BgL_pairz00_1866); } 
{ 
obj_t BgL_prevz00_6721;
BgL_prevz00_6721 = BgL_arg1450z00_757; 
BgL_prevz00_752 = BgL_prevz00_6721; 
goto BgL_zc3anonymousza31446ze3z83_753;} } } } } } } 
}



/* _remq! */
obj_t BGl__remqz12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2476, obj_t BgL_xz00_2477, obj_t BgL_yz00_2478)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 748 */
{ /* Ieee/pairlist.scm 750 */
obj_t BgL_auxz00_6722;
{ /* Ieee/pairlist.scm 750 */
bool_t BgL_testz00_6723;
if(
PAIRP(BgL_yz00_2478))
{ /* Ieee/pairlist.scm 750 */
BgL_testz00_6723 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 750 */
BgL_testz00_6723 = 
NULLP(BgL_yz00_2478)
; } 
if(BgL_testz00_6723)
{ /* Ieee/pairlist.scm 750 */
BgL_auxz00_6722 = BgL_yz00_2478
; }  else 
{ 
obj_t BgL_auxz00_6727;
BgL_auxz00_6727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)29548)), BGl_string2725z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2478); 
FAILURE(BgL_auxz00_6727,BFALSE,BFALSE);} } 
return 
bgl_remq_bang(BgL_xz00_2477, BgL_auxz00_6722);} } 
}



/* _delete */
obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_93, obj_t BgL_optz00_92)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 763 */
{ /* Ieee/pairlist.scm 763 */
obj_t BgL_g1193z00_762;obj_t BgL_g1194z00_763;
BgL_g1193z00_762 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)0))); 
BgL_g1194z00_763 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)1))); 
{ 

{ /* Ieee/pairlist.scm 763 */
int BgL_aux1196z00_765;
BgL_aux1196z00_765 = 
VECTOR_LENGTH(BgL_optz00_92); 
switch( 
(long)(BgL_aux1196z00_765)) { case ((long)2) : 

{ /* Ieee/pairlist.scm 763 */

{ /* Ieee/pairlist.scm 763 */
obj_t BgL_arg1455z00_768;obj_t BgL_arg1456z00_769;
BgL_arg1455z00_768 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)0))); 
BgL_arg1456z00_769 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 763 */
obj_t BgL_auxz00_6741;
{ /* Ieee/pairlist.scm 763 */
bool_t BgL_testz00_6742;
if(
PAIRP(BgL_arg1456z00_769))
{ /* Ieee/pairlist.scm 763 */
BgL_testz00_6742 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 763 */
BgL_testz00_6742 = 
NULLP(BgL_arg1456z00_769)
; } 
if(BgL_testz00_6742)
{ /* Ieee/pairlist.scm 763 */
BgL_auxz00_6741 = BgL_arg1456z00_769
; }  else 
{ 
obj_t BgL_auxz00_6746;
BgL_auxz00_6746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30103)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1456z00_769); 
FAILURE(BgL_auxz00_6746,BFALSE,BFALSE);} } 
return 
BGl_deletez00zz__r4_pairs_and_lists_6_3z00(BgL_arg1455z00_768, BgL_auxz00_6741, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } } break;case ((long)3) : 

{ /* Ieee/pairlist.scm 763 */
obj_t BgL_eqz00_770;
BgL_eqz00_770 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)2))); 
{ /* Ieee/pairlist.scm 763 */

{ /* Ieee/pairlist.scm 763 */
obj_t BgL_arg1457z00_771;obj_t BgL_arg1458z00_772;
BgL_arg1457z00_771 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)0))); 
BgL_arg1458z00_772 = 
VECTOR_REF(BgL_optz00_92,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 763 */
obj_t BgL_auxz00_6757;
{ /* Ieee/pairlist.scm 763 */
bool_t BgL_testz00_6758;
if(
PAIRP(BgL_arg1458z00_772))
{ /* Ieee/pairlist.scm 763 */
BgL_testz00_6758 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 763 */
BgL_testz00_6758 = 
NULLP(BgL_arg1458z00_772)
; } 
if(BgL_testz00_6758)
{ /* Ieee/pairlist.scm 763 */
BgL_auxz00_6757 = BgL_arg1458z00_772
; }  else 
{ 
obj_t BgL_auxz00_6762;
BgL_auxz00_6762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30103)), BGl_string2729z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1458z00_772); 
FAILURE(BgL_auxz00_6762,BFALSE,BFALSE);} } 
return 
BGl_deletez00zz__r4_pairs_and_lists_6_3z00(BgL_arg1457z00_771, BgL_auxz00_6757, BgL_eqz00_770);} } } } break;
default: 
{ /* Ieee/pairlist.scm 763 */
obj_t BgL_arg1459z00_773;int BgL_arg1461z00_775;
BgL_arg1459z00_773 = BGl_symbol2726z00zz__r4_pairs_and_lists_6_3z00; 
BgL_arg1461z00_775 = 
VECTOR_LENGTH(BgL_optz00_92); 
return 
BGl_errorz00zz__errorz00(BgL_arg1459z00_773, BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, 
BINT(BgL_arg1461z00_775));} } } } } } 
}



/* delete */
BGL_EXPORTED_DEF obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_89, obj_t BgL_yz00_90, obj_t BgL_eqz00_91)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 763 */
{ /* Ieee/pairlist.scm 764 */
obj_t BgL_aux2332z00_2978;
BgL_aux2332z00_2978 = 
BGl_loopz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_91, BgL_xz00_89, BgL_yz00_90); 
{ /* Ieee/pairlist.scm 764 */
bool_t BgL_testz00_6773;
if(
PAIRP(BgL_aux2332z00_2978))
{ /* Ieee/pairlist.scm 764 */
BgL_testz00_6773 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 764 */
BgL_testz00_6773 = 
NULLP(BgL_aux2332z00_2978)
; } 
if(BgL_testz00_6773)
{ /* Ieee/pairlist.scm 764 */
return BgL_aux2332z00_2978;}  else 
{ 
obj_t BgL_auxz00_6777;
BgL_auxz00_6777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30150)), BGl_string2727z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2332z00_2978); 
FAILURE(BgL_auxz00_6777,BFALSE,BFALSE);} } } } 
}



/* loop */
obj_t BGl_loopz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2531, obj_t BgL_xz00_777, obj_t BgL_yz00_778)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 764 */
BGl_loopz00zz__r4_pairs_and_lists_6_3z00:
if(
NULLP(BgL_yz00_778))
{ /* Ieee/pairlist.scm 767 */
return BgL_yz00_778;}  else 
{ /* Ieee/pairlist.scm 768 */
bool_t BgL_testz00_6783;
{ /* Ieee/pairlist.scm 768 */
obj_t BgL_arg1469z00_786;
{ /* Ieee/pairlist.scm 768 */
obj_t BgL_pairz00_1868;
if(
PAIRP(BgL_yz00_778))
{ /* Ieee/pairlist.scm 768 */
BgL_pairz00_1868 = BgL_yz00_778; }  else 
{ 
obj_t BgL_auxz00_6786;
BgL_auxz00_6786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30223)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_778); 
FAILURE(BgL_auxz00_6786,BFALSE,BFALSE);} 
BgL_arg1469z00_786 = 
CAR(BgL_pairz00_1868); } 
{ /* Ieee/pairlist.scm 768 */
obj_t BgL_funz00_2984;
if(
PROCEDUREP(BgL_eqz00_2531))
{ /* Ieee/pairlist.scm 768 */
BgL_funz00_2984 = BgL_eqz00_2531; }  else 
{ 
obj_t BgL_auxz00_6793;
BgL_auxz00_6793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30212)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_2531); 
FAILURE(BgL_auxz00_6793,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2984, ((long)2)))
{ /* Ieee/pairlist.scm 768 */
BgL_testz00_6783 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_2984)(BgL_eqz00_2531, BgL_xz00_777, BgL_arg1469z00_786, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 768 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list2732z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_2984);} } } 
if(BgL_testz00_6783)
{ 
obj_t BgL_yz00_6803;
BgL_yz00_6803 = 
CDR(BgL_yz00_778); 
BgL_yz00_778 = BgL_yz00_6803; 
goto BGl_loopz00zz__r4_pairs_and_lists_6_3z00;}  else 
{ /* Ieee/pairlist.scm 769 */
obj_t BgL_arg1466z00_783;obj_t BgL_arg1467z00_784;
{ /* Ieee/pairlist.scm 769 */
obj_t BgL_pairz00_1870;
if(
PAIRP(BgL_yz00_778))
{ /* Ieee/pairlist.scm 769 */
BgL_pairz00_1870 = BgL_yz00_778; }  else 
{ 
obj_t BgL_auxz00_6807;
BgL_auxz00_6807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30264)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_778); 
FAILURE(BgL_auxz00_6807,BFALSE,BFALSE);} 
BgL_arg1466z00_783 = 
CAR(BgL_pairz00_1870); } 
BgL_arg1467z00_784 = 
BGl_loopz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2531, BgL_xz00_777, 
CDR(BgL_yz00_778)); 
return 
MAKE_PAIR(BgL_arg1466z00_783, BgL_arg1467z00_784);} } } 
}



/* _delete! */
obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_98, obj_t BgL_optz00_97)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 774 */
{ /* Ieee/pairlist.scm 774 */
obj_t BgL_g1197z00_788;obj_t BgL_g1198z00_789;
BgL_g1197z00_788 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)0))); 
BgL_g1198z00_789 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)1))); 
{ 

{ /* Ieee/pairlist.scm 774 */
int BgL_aux1200z00_791;
BgL_aux1200z00_791 = 
VECTOR_LENGTH(BgL_optz00_97); 
switch( 
(long)(BgL_aux1200z00_791)) { case ((long)2) : 

{ /* Ieee/pairlist.scm 774 */

{ /* Ieee/pairlist.scm 774 */
obj_t BgL_arg1471z00_794;obj_t BgL_arg1472z00_795;
BgL_arg1471z00_794 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)0))); 
BgL_arg1472z00_795 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 774 */
obj_t BgL_auxz00_6824;
{ /* Ieee/pairlist.scm 774 */
bool_t BgL_testz00_6825;
if(
PAIRP(BgL_arg1472z00_795))
{ /* Ieee/pairlist.scm 774 */
BgL_testz00_6825 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 774 */
BgL_testz00_6825 = 
NULLP(BgL_arg1472z00_795)
; } 
if(BgL_testz00_6825)
{ /* Ieee/pairlist.scm 774 */
BgL_auxz00_6824 = BgL_arg1472z00_795
; }  else 
{ 
obj_t BgL_auxz00_6829;
BgL_auxz00_6829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30512)), BGl_string2743z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1472z00_795); 
FAILURE(BgL_auxz00_6829,BFALSE,BFALSE);} } 
return 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_arg1471z00_794, BgL_auxz00_6824, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } } break;case ((long)3) : 

{ /* Ieee/pairlist.scm 774 */
obj_t BgL_eqz00_796;
BgL_eqz00_796 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)2))); 
{ /* Ieee/pairlist.scm 774 */

{ /* Ieee/pairlist.scm 774 */
obj_t BgL_arg1473z00_797;obj_t BgL_arg1474z00_798;
BgL_arg1473z00_797 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)0))); 
BgL_arg1474z00_798 = 
VECTOR_REF(BgL_optz00_97,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 774 */
obj_t BgL_auxz00_6840;
{ /* Ieee/pairlist.scm 774 */
bool_t BgL_testz00_6841;
if(
PAIRP(BgL_arg1474z00_798))
{ /* Ieee/pairlist.scm 774 */
BgL_testz00_6841 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 774 */
BgL_testz00_6841 = 
NULLP(BgL_arg1474z00_798)
; } 
if(BgL_testz00_6841)
{ /* Ieee/pairlist.scm 774 */
BgL_auxz00_6840 = BgL_arg1474z00_798
; }  else 
{ 
obj_t BgL_auxz00_6845;
BgL_auxz00_6845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30512)), BGl_string2743z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1474z00_798); 
FAILURE(BgL_auxz00_6845,BFALSE,BFALSE);} } 
return 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_arg1473z00_797, BgL_auxz00_6840, BgL_eqz00_796);} } } } break;
default: 
{ /* Ieee/pairlist.scm 774 */
obj_t BgL_arg1475z00_799;int BgL_arg1477z00_801;
BgL_arg1475z00_799 = BGl_symbol2741z00zz__r4_pairs_and_lists_6_3z00; 
BgL_arg1477z00_801 = 
VECTOR_LENGTH(BgL_optz00_97); 
return 
BGl_errorz00zz__errorz00(BgL_arg1475z00_799, BGl_string2728z00zz__r4_pairs_and_lists_6_3z00, 
BINT(BgL_arg1477z00_801));} } } } } } 
}



/* delete! */
BGL_EXPORTED_DEF obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_94, obj_t BgL_yz00_95, obj_t BgL_eqz00_96)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 774 */
{ 
obj_t BgL_xz00_803;obj_t BgL_yz00_804;
{ /* Ieee/pairlist.scm 775 */
obj_t BgL_aux2376z00_3025;
BgL_xz00_803 = BgL_xz00_94; 
BgL_yz00_804 = BgL_yz00_95; 
BgL_zc3anonymousza31478ze3z83_805:
if(
NULLP(BgL_yz00_804))
{ /* Ieee/pairlist.scm 778 */
BgL_aux2376z00_3025 = BgL_yz00_804; }  else 
{ /* Ieee/pairlist.scm 779 */
bool_t BgL_testz00_6857;
{ /* Ieee/pairlist.scm 779 */
obj_t BgL_arg1489z00_819;
{ /* Ieee/pairlist.scm 779 */
obj_t BgL_pairz00_1873;
if(
PAIRP(BgL_yz00_804))
{ /* Ieee/pairlist.scm 779 */
BgL_pairz00_1873 = BgL_yz00_804; }  else 
{ 
obj_t BgL_auxz00_6860;
BgL_auxz00_6860 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30633)), BGl_string2744z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_804); 
FAILURE(BgL_auxz00_6860,BFALSE,BFALSE);} 
BgL_arg1489z00_819 = 
CAR(BgL_pairz00_1873); } 
{ /* Ieee/pairlist.scm 779 */
obj_t BgL_funz00_3001;
if(
PROCEDUREP(BgL_eqz00_96))
{ /* Ieee/pairlist.scm 779 */
BgL_funz00_3001 = BgL_eqz00_96; }  else 
{ 
obj_t BgL_auxz00_6867;
BgL_auxz00_6867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30622)), BGl_string2744z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_96); 
FAILURE(BgL_auxz00_6867,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3001, ((long)2)))
{ /* Ieee/pairlist.scm 779 */
BgL_testz00_6857 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_3001)(BgL_eqz00_96, BgL_xz00_803, BgL_arg1489z00_819, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 779 */
FAILURE(BGl_string2745z00zz__r4_pairs_and_lists_6_3z00,BGl_list2746z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_3001);} } } 
if(BgL_testz00_6857)
{ 
obj_t BgL_yz00_6877;
BgL_yz00_6877 = 
CDR(BgL_yz00_804); 
BgL_yz00_804 = BgL_yz00_6877; 
goto BgL_zc3anonymousza31478ze3z83_805;}  else 
{ 
obj_t BgL_prevz00_810;
BgL_prevz00_810 = BgL_yz00_804; 
BgL_zc3anonymousza31482ze3z83_811:
{ /* Ieee/pairlist.scm 781 */
bool_t BgL_testz00_6879;
{ /* Ieee/pairlist.scm 781 */
obj_t BgL_auxz00_6880;
{ /* Ieee/pairlist.scm 781 */
obj_t BgL_pairz00_1875;
if(
PAIRP(BgL_prevz00_810))
{ /* Ieee/pairlist.scm 781 */
BgL_pairz00_1875 = BgL_prevz00_810; }  else 
{ 
obj_t BgL_auxz00_6883;
BgL_auxz00_6883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30707)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_810); 
FAILURE(BgL_auxz00_6883,BFALSE,BFALSE);} 
BgL_auxz00_6880 = 
CDR(BgL_pairz00_1875); } 
BgL_testz00_6879 = 
NULLP(BgL_auxz00_6880); } 
if(BgL_testz00_6879)
{ /* Ieee/pairlist.scm 781 */
BgL_aux2376z00_3025 = BgL_yz00_804; }  else 
{ /* Ieee/pairlist.scm 783 */
bool_t BgL_testz00_6889;
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_arg1487z00_816;
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_pairz00_1877;
if(
PAIRP(BgL_prevz00_810))
{ /* Ieee/pairlist.scm 783 */
BgL_pairz00_1877 = BgL_prevz00_810; }  else 
{ 
obj_t BgL_auxz00_6892;
BgL_auxz00_6892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30735)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_810); 
FAILURE(BgL_auxz00_6892,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_pairz00_1880;
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_aux2362z00_3010;
BgL_aux2362z00_3010 = 
CDR(BgL_pairz00_1877); 
if(
PAIRP(BgL_aux2362z00_3010))
{ /* Ieee/pairlist.scm 783 */
BgL_pairz00_1880 = BgL_aux2362z00_3010; }  else 
{ 
obj_t BgL_auxz00_6899;
BgL_auxz00_6899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30729)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2362z00_3010); 
FAILURE(BgL_auxz00_6899,BFALSE,BFALSE);} } 
BgL_arg1487z00_816 = 
CAR(BgL_pairz00_1880); } } 
{ /* Ieee/pairlist.scm 783 */
obj_t BgL_funz00_3014;
if(
PROCEDUREP(BgL_eqz00_96))
{ /* Ieee/pairlist.scm 783 */
BgL_funz00_3014 = BgL_eqz00_96; }  else 
{ 
obj_t BgL_auxz00_6906;
BgL_auxz00_6906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30725)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_96); 
FAILURE(BgL_auxz00_6906,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3014, ((long)2)))
{ /* Ieee/pairlist.scm 783 */
BgL_testz00_6889 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_3014)(BgL_eqz00_96, BgL_arg1487z00_816, BgL_xz00_803, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 783 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list2749z00zz__r4_pairs_and_lists_6_3z00,BgL_funz00_3014);} } } 
if(BgL_testz00_6889)
{ /* Ieee/pairlist.scm 783 */
{ /* Ieee/pairlist.scm 784 */
obj_t BgL_arg1485z00_814;
{ /* Ieee/pairlist.scm 784 */
obj_t BgL_pairz00_1881;
BgL_pairz00_1881 = BgL_prevz00_810; 
{ /* Ieee/pairlist.scm 784 */
obj_t BgL_pairz00_1884;
{ /* Ieee/pairlist.scm 784 */
obj_t BgL_aux2370z00_3019;
BgL_aux2370z00_3019 = 
CDR(BgL_pairz00_1881); 
if(
PAIRP(BgL_aux2370z00_3019))
{ /* Ieee/pairlist.scm 784 */
BgL_pairz00_1884 = BgL_aux2370z00_3019; }  else 
{ 
obj_t BgL_auxz00_6919;
BgL_auxz00_6919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30763)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2370z00_3019); 
FAILURE(BgL_auxz00_6919,BFALSE,BFALSE);} } 
BgL_arg1485z00_814 = 
CDR(BgL_pairz00_1884); } } 
SET_CDR(BgL_prevz00_810, BgL_arg1485z00_814); } 
{ 

goto BgL_zc3anonymousza31482ze3z83_811;} }  else 
{ /* Ieee/pairlist.scm 786 */
obj_t BgL_arg1486z00_815;
{ /* Ieee/pairlist.scm 786 */
obj_t BgL_pairz00_1887;
if(
PAIRP(BgL_prevz00_810))
{ /* Ieee/pairlist.scm 786 */
BgL_pairz00_1887 = BgL_prevz00_810; }  else 
{ 
obj_t BgL_auxz00_6927;
BgL_auxz00_6927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30813)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_prevz00_810); 
FAILURE(BgL_auxz00_6927,BFALSE,BFALSE);} 
BgL_arg1486z00_815 = 
CDR(BgL_pairz00_1887); } 
{ 
obj_t BgL_prevz00_6932;
BgL_prevz00_6932 = BgL_arg1486z00_815; 
BgL_prevz00_810 = BgL_prevz00_6932; 
goto BgL_zc3anonymousza31482ze3z83_811;} } } } } } 
{ /* Ieee/pairlist.scm 775 */
bool_t BgL_testz00_6933;
if(
PAIRP(BgL_aux2376z00_3025))
{ /* Ieee/pairlist.scm 775 */
BgL_testz00_6933 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 775 */
BgL_testz00_6933 = 
NULLP(BgL_aux2376z00_3025)
; } 
if(BgL_testz00_6933)
{ /* Ieee/pairlist.scm 775 */
return BgL_aux2376z00_3025;}  else 
{ 
obj_t BgL_auxz00_6937;
BgL_auxz00_6937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)30560)), BGl_string2742z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2376z00_3025); 
FAILURE(BgL_auxz00_6937,BFALSE,BFALSE);} } } } } 
}



/* cons* */
BGL_EXPORTED_DEF obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_99, obj_t BgL_yz00_100)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 791 */
if(
NULLP(BgL_yz00_100))
{ /* Ieee/pairlist.scm 796 */
return BgL_xz00_99;}  else 
{ /* Ieee/pairlist.scm 796 */
return 
MAKE_PAIR(BgL_xz00_99, 
BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(BgL_yz00_100));} } 
}



/* cons*1 */
obj_t BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_821)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 792 */
{ /* Ieee/pairlist.scm 792 */
bool_t BgL_testz00_6945;
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_auxz00_6946;
{ /* Ieee/pairlist.scm 792 */
obj_t BgL_pairz00_1889;
if(
PAIRP(BgL_xz00_821))
{ /* Ieee/pairlist.scm 792 */
BgL_pairz00_1889 = BgL_xz00_821; }  else 
{ 
obj_t BgL_auxz00_6949;
BgL_auxz00_6949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31115)), BGl_string2752z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_821); 
FAILURE(BgL_auxz00_6949,BFALSE,BFALSE);} 
BgL_auxz00_6946 = 
CDR(BgL_pairz00_1889); } 
BgL_testz00_6945 = 
NULLP(BgL_auxz00_6946); } 
if(BgL_testz00_6945)
{ /* Ieee/pairlist.scm 793 */
obj_t BgL_pairz00_1891;
if(
PAIRP(BgL_xz00_821))
{ /* Ieee/pairlist.scm 793 */
BgL_pairz00_1891 = BgL_xz00_821; }  else 
{ 
obj_t BgL_auxz00_6957;
BgL_auxz00_6957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31134)), BGl_string2752z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_821); 
FAILURE(BgL_auxz00_6957,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1891);}  else 
{ /* Ieee/pairlist.scm 795 */
obj_t BgL_arg1493z00_826;obj_t BgL_arg1494z00_827;
{ /* Ieee/pairlist.scm 795 */
obj_t BgL_pairz00_1892;
if(
PAIRP(BgL_xz00_821))
{ /* Ieee/pairlist.scm 795 */
BgL_pairz00_1892 = BgL_xz00_821; }  else 
{ 
obj_t BgL_auxz00_6964;
BgL_auxz00_6964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31174)), BGl_string2752z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_821); 
FAILURE(BgL_auxz00_6964,BFALSE,BFALSE);} 
BgL_arg1493z00_826 = 
CAR(BgL_pairz00_1892); } 
BgL_arg1494z00_827 = 
BGl_consza21za2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_xz00_821)); 
return 
MAKE_PAIR(BgL_arg1493z00_826, BgL_arg1494z00_827);} } } 
}



/* _cons* */
obj_t BGl__consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2482, obj_t BgL_xz00_2483, obj_t BgL_yz00_2484)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 791 */
return 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2483, BgL_yz00_2484);} 
}



/* reverse! */
BGL_EXPORTED_DEF obj_t bgl_reverse_bang(obj_t BgL_lz00_101)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 803 */
if(
PAIRP(BgL_lz00_101))
{ 
obj_t BgL_lz00_833;obj_t BgL_rz00_834;
{ /* Ieee/pairlist.scm 805 */
obj_t BgL_aux2394z00_3043;
BgL_lz00_833 = BgL_lz00_101; 
BgL_rz00_834 = BNIL; 
BgL_zc3anonymousza31498ze3z83_835:
{ /* Ieee/pairlist.scm 807 */
bool_t BgL_testz00_6975;
{ /* Ieee/pairlist.scm 807 */
obj_t BgL_auxz00_6976;
{ /* Ieee/pairlist.scm 807 */
obj_t BgL_pairz00_1895;
if(
PAIRP(BgL_lz00_833))
{ /* Ieee/pairlist.scm 807 */
BgL_pairz00_1895 = BgL_lz00_833; }  else 
{ 
obj_t BgL_auxz00_6979;
BgL_auxz00_6979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31577)), BGl_string2753z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_833); 
FAILURE(BgL_auxz00_6979,BFALSE,BFALSE);} 
BgL_auxz00_6976 = 
CDR(BgL_pairz00_1895); } 
BgL_testz00_6975 = 
NULLP(BgL_auxz00_6976); } 
if(BgL_testz00_6975)
{ /* Ieee/pairlist.scm 807 */
{ /* Ieee/pairlist.scm 809 */
obj_t BgL_pairz00_1897;
if(
PAIRP(BgL_lz00_833))
{ /* Ieee/pairlist.scm 809 */
BgL_pairz00_1897 = BgL_lz00_833; }  else 
{ 
obj_t BgL_auxz00_6987;
BgL_auxz00_6987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31629)), BGl_string2753z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_833); 
FAILURE(BgL_auxz00_6987,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1897, BgL_rz00_834); } 
BgL_aux2394z00_3043 = BgL_lz00_833; }  else 
{ /* Ieee/pairlist.scm 811 */
obj_t BgL_cdrlz00_837;
{ /* Ieee/pairlist.scm 811 */
obj_t BgL_pairz00_1899;
if(
PAIRP(BgL_lz00_833))
{ /* Ieee/pairlist.scm 811 */
BgL_pairz00_1899 = BgL_lz00_833; }  else 
{ 
obj_t BgL_auxz00_6994;
BgL_auxz00_6994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31678)), BGl_string2753z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_833); 
FAILURE(BgL_auxz00_6994,BFALSE,BFALSE);} 
BgL_cdrlz00_837 = 
CDR(BgL_pairz00_1899); } 
{ /* Ieee/pairlist.scm 813 */
obj_t BgL_arg1500z00_838;
SET_CDR(BgL_lz00_833, BgL_rz00_834); 
BgL_arg1500z00_838 = BgL_lz00_833; 
{ 
obj_t BgL_rz00_7001;obj_t BgL_lz00_7000;
BgL_lz00_7000 = BgL_cdrlz00_837; 
BgL_rz00_7001 = BgL_arg1500z00_838; 
BgL_rz00_834 = BgL_rz00_7001; 
BgL_lz00_833 = BgL_lz00_7000; 
goto BgL_zc3anonymousza31498ze3z83_835;} } } } 
{ /* Ieee/pairlist.scm 805 */
bool_t BgL_testz00_7002;
if(
PAIRP(BgL_aux2394z00_3043))
{ /* Ieee/pairlist.scm 805 */
BgL_testz00_7002 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 805 */
BgL_testz00_7002 = 
NULLP(BgL_aux2394z00_3043)
; } 
if(BgL_testz00_7002)
{ /* Ieee/pairlist.scm 805 */
return BgL_aux2394z00_3043;}  else 
{ 
obj_t BgL_auxz00_7006;
BgL_auxz00_7006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31525)), BGl_string2754z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2394z00_3043); 
FAILURE(BgL_auxz00_7006,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/pairlist.scm 804 */
return BgL_lz00_101;} } 
}



/* _reverse! */
obj_t BGl__reversez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2485, obj_t BgL_lz00_2486)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 803 */
{ /* Ieee/pairlist.scm 804 */
obj_t BgL_auxz00_7010;
{ /* Ieee/pairlist.scm 804 */
bool_t BgL_testz00_7011;
if(
PAIRP(BgL_lz00_2486))
{ /* Ieee/pairlist.scm 804 */
BgL_testz00_7011 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 804 */
BgL_testz00_7011 = 
NULLP(BgL_lz00_2486)
; } 
if(BgL_testz00_7011)
{ /* Ieee/pairlist.scm 804 */
BgL_auxz00_7010 = BgL_lz00_2486
; }  else 
{ 
obj_t BgL_auxz00_7015;
BgL_auxz00_7015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)31504)), BGl_string2755z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2486); 
FAILURE(BgL_auxz00_7015,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_7010);} } 
}



/* every */
BGL_EXPORTED_DEF obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_102, obj_t BgL_lz00_103)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 819 */
if(
NULLP(BgL_lz00_103))
{ /* Ieee/pairlist.scm 821 */
return BTRUE;}  else 
{ /* Ieee/pairlist.scm 823 */
bool_t BgL_testz00_7022;
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_auxz00_7023;
{ /* Ieee/pairlist.scm 823 */
obj_t BgL_pairz00_1903;
if(
PAIRP(BgL_lz00_103))
{ /* Ieee/pairlist.scm 823 */
BgL_pairz00_1903 = BgL_lz00_103; }  else 
{ 
obj_t BgL_auxz00_7026;
BgL_auxz00_7026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32046)), BGl_string2756z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_103); 
FAILURE(BgL_auxz00_7026,BFALSE,BFALSE);} 
BgL_auxz00_7023 = 
CDR(BgL_pairz00_1903); } 
BgL_testz00_7022 = 
NULLP(BgL_auxz00_7023); } 
if(BgL_testz00_7022)
{ /* Ieee/pairlist.scm 824 */
obj_t BgL_g1107z00_843;
{ /* Ieee/pairlist.scm 824 */
obj_t BgL_pairz00_1905;
if(
PAIRP(BgL_lz00_103))
{ /* Ieee/pairlist.scm 824 */
BgL_pairz00_1905 = BgL_lz00_103; }  else 
{ 
obj_t BgL_auxz00_7034;
BgL_auxz00_7034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32076)), BGl_string2756z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_103); 
FAILURE(BgL_auxz00_7034,BFALSE,BFALSE);} 
BgL_g1107z00_843 = 
CAR(BgL_pairz00_1905); } 
{ 
obj_t BgL_lz00_845;obj_t BgL_lvz00_846;
BgL_lz00_845 = BgL_g1107z00_843; 
BgL_lvz00_846 = BTRUE; 
BgL_zc3anonymousza31504ze3z83_847:
if(
NULLP(BgL_lz00_845))
{ /* Ieee/pairlist.scm 826 */
return BgL_lvz00_846;}  else 
{ /* Ieee/pairlist.scm 828 */
obj_t BgL_nvz00_849;
{ /* Ieee/pairlist.scm 828 */
obj_t BgL_arg1507z00_852;
{ /* Ieee/pairlist.scm 828 */
obj_t BgL_pairz00_1907;
if(
PAIRP(BgL_lz00_845))
{ /* Ieee/pairlist.scm 828 */
BgL_pairz00_1907 = BgL_lz00_845; }  else 
{ 
obj_t BgL_auxz00_7043;
BgL_auxz00_7043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32148)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_845); 
FAILURE(BgL_auxz00_7043,BFALSE,BFALSE);} 
BgL_arg1507z00_852 = 
CAR(BgL_pairz00_1907); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_102, ((long)1)))
{ /* Ieee/pairlist.scm 828 */
BgL_nvz00_849 = 
PROCEDURE_ENTRY(BgL_predz00_102)(BgL_predz00_102, BgL_arg1507z00_852, BEOA); }  else 
{ /* Ieee/pairlist.scm 828 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list2757z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_102);} } 
if(
CBOOL(BgL_nvz00_849))
{ 
obj_t BgL_lvz00_7057;obj_t BgL_lz00_7055;
BgL_lz00_7055 = 
CDR(BgL_lz00_845); 
BgL_lvz00_7057 = BgL_nvz00_849; 
BgL_lvz00_846 = BgL_lvz00_7057; 
BgL_lz00_845 = BgL_lz00_7055; 
goto BgL_zc3anonymousza31504ze3z83_847;}  else 
{ /* Ieee/pairlist.scm 829 */
return BFALSE;} } } }  else 
{ 
obj_t BgL_lz00_855;obj_t BgL_lvz00_856;
BgL_lz00_855 = BgL_lz00_103; 
BgL_lvz00_856 = BTRUE; 
BgL_zc3anonymousza31508ze3z83_857:
{ /* Ieee/pairlist.scm 833 */
bool_t BgL_testz00_7058;
{ /* Ieee/pairlist.scm 833 */
obj_t BgL_auxz00_7059;
{ /* Ieee/pairlist.scm 833 */
obj_t BgL_pairz00_1909;
if(
PAIRP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 833 */
BgL_pairz00_1909 = BgL_lz00_855; }  else 
{ 
obj_t BgL_auxz00_7062;
BgL_auxz00_7062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32256)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_855); 
FAILURE(BgL_auxz00_7062,BFALSE,BFALSE);} 
BgL_auxz00_7059 = 
CAR(BgL_pairz00_1909); } 
BgL_testz00_7058 = 
NULLP(BgL_auxz00_7059); } 
if(BgL_testz00_7058)
{ /* Ieee/pairlist.scm 833 */
return BgL_lvz00_856;}  else 
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_nvz00_859;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_valz00_3069;
if(
NULLP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 835 */
BgL_valz00_3069 = BNIL; }  else 
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_head1142z00_883;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_arg1531z00_897;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_pairz00_1913;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_pairz00_1912;
if(
PAIRP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 835 */
BgL_pairz00_1912 = BgL_lz00_855; }  else 
{ 
obj_t BgL_auxz00_7072;
BgL_auxz00_7072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32299)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_855); 
FAILURE(BgL_auxz00_7072,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_aux2412z00_3062;
BgL_aux2412z00_3062 = 
CAR(BgL_pairz00_1912); 
if(
PAIRP(BgL_aux2412z00_3062))
{ /* Ieee/pairlist.scm 835 */
BgL_pairz00_1913 = BgL_aux2412z00_3062; }  else 
{ 
obj_t BgL_auxz00_7079;
BgL_auxz00_7079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32299)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2412z00_3062); 
FAILURE(BgL_auxz00_7079,BFALSE,BFALSE);} } } 
BgL_arg1531z00_897 = 
CAR(BgL_pairz00_1913); } 
BgL_head1142z00_883 = 
MAKE_PAIR(BgL_arg1531z00_897, BNIL); } 
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_g1145z00_884;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_pairz00_1916;
if(
PAIRP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 835 */
BgL_pairz00_1916 = BgL_lz00_855; }  else 
{ 
obj_t BgL_auxz00_7087;
BgL_auxz00_7087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32299)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_855); 
FAILURE(BgL_auxz00_7087,BFALSE,BFALSE);} 
BgL_g1145z00_884 = 
CDR(BgL_pairz00_1916); } 
{ 
obj_t BgL_l1140z00_886;obj_t BgL_tail1143z00_887;
BgL_l1140z00_886 = BgL_g1145z00_884; 
BgL_tail1143z00_887 = BgL_head1142z00_883; 
BgL_zc3anonymousza31523ze3z83_888:
if(
PAIRP(BgL_l1140z00_886))
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_newtail1144z00_890;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_arg1526z00_892;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_pairz00_1919;
{ /* Ieee/pairlist.scm 835 */
obj_t BgL_aux2416z00_3066;
BgL_aux2416z00_3066 = 
CAR(BgL_l1140z00_886); 
if(
PAIRP(BgL_aux2416z00_3066))
{ /* Ieee/pairlist.scm 835 */
BgL_pairz00_1919 = BgL_aux2416z00_3066; }  else 
{ 
obj_t BgL_auxz00_7097;
BgL_auxz00_7097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32299)), BGl_string2762z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2416z00_3066); 
FAILURE(BgL_auxz00_7097,BFALSE,BFALSE);} } 
BgL_arg1526z00_892 = 
CAR(BgL_pairz00_1919); } 
BgL_newtail1144z00_890 = 
MAKE_PAIR(BgL_arg1526z00_892, BNIL); } 
SET_CDR(BgL_tail1143z00_887, BgL_newtail1144z00_890); 
{ 
obj_t BgL_tail1143z00_7106;obj_t BgL_l1140z00_7104;
BgL_l1140z00_7104 = 
CDR(BgL_l1140z00_886); 
BgL_tail1143z00_7106 = BgL_newtail1144z00_890; 
BgL_tail1143z00_887 = BgL_tail1143z00_7106; 
BgL_l1140z00_886 = BgL_l1140z00_7104; 
goto BgL_zc3anonymousza31523ze3z83_888;} }  else 
{ /* Ieee/pairlist.scm 835 */
if(
NULLP(BgL_l1140z00_886))
{ /* Ieee/pairlist.scm 835 */
BgL_valz00_3069 = BgL_head1142z00_883; }  else 
{ /* Ieee/pairlist.scm 835 */
BgL_valz00_3069 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1140z00_886); } } } } } 
{ /* Ieee/pairlist.scm 835 */
int BgL_len2418z00_3070;
BgL_len2418z00_3070 = 
(int)(
bgl_list_length(BgL_valz00_3069)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_102, BgL_len2418z00_3070))
{ /* Ieee/pairlist.scm 835 */
BgL_nvz00_859 = 
apply(BgL_predz00_102, BgL_valz00_3069); }  else 
{ /* Ieee/pairlist.scm 835 */
FAILURE(BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00,BGl_string2766z00zz__r4_pairs_and_lists_6_3z00,BGl_list2767z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(
CBOOL(BgL_nvz00_859))
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_arg1510z00_861;
if(
NULLP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 836 */
BgL_arg1510z00_861 = BNIL; }  else 
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_head1148z00_864;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_arg1519z00_878;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_pairz00_1928;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_pairz00_1927;
if(
PAIRP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 836 */
BgL_pairz00_1927 = BgL_lz00_855; }  else 
{ 
obj_t BgL_auxz00_7123;
BgL_auxz00_7123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32331)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_855); 
FAILURE(BgL_auxz00_7123,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_aux2422z00_3074;
BgL_aux2422z00_3074 = 
CAR(BgL_pairz00_1927); 
if(
PAIRP(BgL_aux2422z00_3074))
{ /* Ieee/pairlist.scm 836 */
BgL_pairz00_1928 = BgL_aux2422z00_3074; }  else 
{ 
obj_t BgL_auxz00_7130;
BgL_auxz00_7130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32331)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2422z00_3074); 
FAILURE(BgL_auxz00_7130,BFALSE,BFALSE);} } } 
BgL_arg1519z00_878 = 
CDR(BgL_pairz00_1928); } 
BgL_head1148z00_864 = 
MAKE_PAIR(BgL_arg1519z00_878, BNIL); } 
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_g1151z00_865;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_pairz00_1931;
if(
PAIRP(BgL_lz00_855))
{ /* Ieee/pairlist.scm 836 */
BgL_pairz00_1931 = BgL_lz00_855; }  else 
{ 
obj_t BgL_auxz00_7138;
BgL_auxz00_7138 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32331)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_855); 
FAILURE(BgL_auxz00_7138,BFALSE,BFALSE);} 
BgL_g1151z00_865 = 
CDR(BgL_pairz00_1931); } 
{ 
obj_t BgL_l1146z00_867;obj_t BgL_tail1149z00_868;
BgL_l1146z00_867 = BgL_g1151z00_865; 
BgL_tail1149z00_868 = BgL_head1148z00_864; 
BgL_zc3anonymousza31512ze3z83_869:
if(
PAIRP(BgL_l1146z00_867))
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_newtail1150z00_871;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_arg1515z00_873;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_pairz00_1934;
{ /* Ieee/pairlist.scm 836 */
obj_t BgL_aux2426z00_3078;
BgL_aux2426z00_3078 = 
CAR(BgL_l1146z00_867); 
if(
PAIRP(BgL_aux2426z00_3078))
{ /* Ieee/pairlist.scm 836 */
BgL_pairz00_1934 = BgL_aux2426z00_3078; }  else 
{ 
obj_t BgL_auxz00_7148;
BgL_auxz00_7148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32331)), BGl_string2889z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2426z00_3078); 
FAILURE(BgL_auxz00_7148,BFALSE,BFALSE);} } 
BgL_arg1515z00_873 = 
CDR(BgL_pairz00_1934); } 
BgL_newtail1150z00_871 = 
MAKE_PAIR(BgL_arg1515z00_873, BNIL); } 
SET_CDR(BgL_tail1149z00_868, BgL_newtail1150z00_871); 
{ 
obj_t BgL_tail1149z00_7157;obj_t BgL_l1146z00_7155;
BgL_l1146z00_7155 = 
CDR(BgL_l1146z00_867); 
BgL_tail1149z00_7157 = BgL_newtail1150z00_871; 
BgL_tail1149z00_868 = BgL_tail1149z00_7157; 
BgL_l1146z00_867 = BgL_l1146z00_7155; 
goto BgL_zc3anonymousza31512ze3z83_869;} }  else 
{ /* Ieee/pairlist.scm 836 */
if(
NULLP(BgL_l1146z00_867))
{ /* Ieee/pairlist.scm 836 */
BgL_arg1510z00_861 = BgL_head1148z00_864; }  else 
{ /* Ieee/pairlist.scm 836 */
BgL_arg1510z00_861 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1146z00_867); } } } } } 
{ 
obj_t BgL_lvz00_7162;obj_t BgL_lz00_7161;
BgL_lz00_7161 = BgL_arg1510z00_861; 
BgL_lvz00_7162 = BgL_nvz00_859; 
BgL_lvz00_856 = BgL_lvz00_7162; 
BgL_lz00_855 = BgL_lz00_7161; 
goto BgL_zc3anonymousza31508ze3z83_857;} }  else 
{ /* Ieee/pairlist.scm 836 */
return BFALSE;} } } } } } 
}



/* _every */
obj_t BGl__everyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2487, obj_t BgL_predz00_2488, obj_t BgL_lz00_2489)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 819 */
{ /* Ieee/pairlist.scm 821 */
obj_t BgL_auxz00_7163;
if(
PROCEDUREP(BgL_predz00_2488))
{ /* Ieee/pairlist.scm 821 */
BgL_auxz00_7163 = BgL_predz00_2488
; }  else 
{ 
obj_t BgL_auxz00_7166;
BgL_auxz00_7166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32006)), BGl_string2890z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2488); 
FAILURE(BgL_auxz00_7166,BFALSE,BFALSE);} 
return 
BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7163, BgL_lz00_2489);} } 
}



/* any */
BGL_EXPORTED_DEF obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_104, obj_t BgL_lz00_105)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 841 */
if(
NULLP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 843 */
return BFALSE;}  else 
{ /* Ieee/pairlist.scm 845 */
bool_t BgL_testz00_7173;
{ /* Ieee/pairlist.scm 845 */
obj_t BgL_auxz00_7174;
{ /* Ieee/pairlist.scm 845 */
obj_t BgL_pairz00_1942;
if(
PAIRP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 845 */
BgL_pairz00_1942 = BgL_lz00_105; }  else 
{ 
obj_t BgL_auxz00_7177;
BgL_auxz00_7177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32656)), BGl_string2891z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_105); 
FAILURE(BgL_auxz00_7177,BFALSE,BFALSE);} 
BgL_auxz00_7174 = 
CDR(BgL_pairz00_1942); } 
BgL_testz00_7173 = 
NULLP(BgL_auxz00_7174); } 
if(BgL_testz00_7173)
{ /* Ieee/pairlist.scm 846 */
obj_t BgL_g1110z00_905;
{ /* Ieee/pairlist.scm 846 */
obj_t BgL_pairz00_1944;
if(
PAIRP(BgL_lz00_105))
{ /* Ieee/pairlist.scm 846 */
BgL_pairz00_1944 = BgL_lz00_105; }  else 
{ 
obj_t BgL_auxz00_7185;
BgL_auxz00_7185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32686)), BGl_string2891z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_105); 
FAILURE(BgL_auxz00_7185,BFALSE,BFALSE);} 
BgL_g1110z00_905 = 
CAR(BgL_pairz00_1944); } 
{ 
obj_t BgL_lz00_907;
BgL_lz00_907 = BgL_g1110z00_905; 
BgL_zc3anonymousza31538ze3z83_908:
if(
NULLP(BgL_lz00_907))
{ /* Ieee/pairlist.scm 847 */
return BFALSE;}  else 
{ /* Ieee/pairlist.scm 849 */
obj_t BgL__ortest_1111z00_910;
{ /* Ieee/pairlist.scm 849 */
obj_t BgL_arg1541z00_912;
{ /* Ieee/pairlist.scm 849 */
obj_t BgL_pairz00_1946;
if(
PAIRP(BgL_lz00_907))
{ /* Ieee/pairlist.scm 849 */
BgL_pairz00_1946 = BgL_lz00_907; }  else 
{ 
obj_t BgL_auxz00_7194;
BgL_auxz00_7194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32740)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_907); 
FAILURE(BgL_auxz00_7194,BFALSE,BFALSE);} 
BgL_arg1541z00_912 = 
CAR(BgL_pairz00_1946); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_104, ((long)1)))
{ /* Ieee/pairlist.scm 849 */
BgL__ortest_1111z00_910 = 
PROCEDURE_ENTRY(BgL_predz00_104)(BgL_predz00_104, BgL_arg1541z00_912, BEOA); }  else 
{ /* Ieee/pairlist.scm 849 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list2892z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_104);} } 
if(
CBOOL(BgL__ortest_1111z00_910))
{ /* Ieee/pairlist.scm 849 */
return BgL__ortest_1111z00_910;}  else 
{ 
obj_t BgL_lz00_7206;
BgL_lz00_7206 = 
CDR(BgL_lz00_907); 
BgL_lz00_907 = BgL_lz00_7206; 
goto BgL_zc3anonymousza31538ze3z83_908;} } } }  else 
{ 
obj_t BgL_lz00_915;
BgL_lz00_915 = BgL_lz00_105; 
BgL_zc3anonymousza31542ze3z83_916:
{ /* Ieee/pairlist.scm 853 */
bool_t BgL_testz00_7208;
{ /* Ieee/pairlist.scm 853 */
obj_t BgL_auxz00_7209;
{ /* Ieee/pairlist.scm 853 */
obj_t BgL_pairz00_1948;
if(
PAIRP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 853 */
BgL_pairz00_1948 = BgL_lz00_915; }  else 
{ 
obj_t BgL_auxz00_7212;
BgL_auxz00_7212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32823)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_915); 
FAILURE(BgL_auxz00_7212,BFALSE,BFALSE);} 
BgL_auxz00_7209 = 
CAR(BgL_pairz00_1948); } 
BgL_testz00_7208 = 
NULLP(BgL_auxz00_7209); } 
if(BgL_testz00_7208)
{ /* Ieee/pairlist.scm 853 */
return BFALSE;}  else 
{ /* Ieee/pairlist.scm 855 */
obj_t BgL__ortest_1112z00_918;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_valz00_3104;
if(
NULLP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 855 */
BgL_valz00_3104 = BNIL; }  else 
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_head1154z00_941;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_arg1566z00_955;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_pairz00_1952;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_pairz00_1951;
if(
PAIRP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 855 */
BgL_pairz00_1951 = BgL_lz00_915; }  else 
{ 
obj_t BgL_auxz00_7222;
BgL_auxz00_7222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32860)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_915); 
FAILURE(BgL_auxz00_7222,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_aux2444z00_3097;
BgL_aux2444z00_3097 = 
CAR(BgL_pairz00_1951); 
if(
PAIRP(BgL_aux2444z00_3097))
{ /* Ieee/pairlist.scm 855 */
BgL_pairz00_1952 = BgL_aux2444z00_3097; }  else 
{ 
obj_t BgL_auxz00_7229;
BgL_auxz00_7229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32860)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2444z00_3097); 
FAILURE(BgL_auxz00_7229,BFALSE,BFALSE);} } } 
BgL_arg1566z00_955 = 
CAR(BgL_pairz00_1952); } 
BgL_head1154z00_941 = 
MAKE_PAIR(BgL_arg1566z00_955, BNIL); } 
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_g1157z00_942;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_pairz00_1955;
if(
PAIRP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 855 */
BgL_pairz00_1955 = BgL_lz00_915; }  else 
{ 
obj_t BgL_auxz00_7237;
BgL_auxz00_7237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32860)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_915); 
FAILURE(BgL_auxz00_7237,BFALSE,BFALSE);} 
BgL_g1157z00_942 = 
CDR(BgL_pairz00_1955); } 
{ 
obj_t BgL_l1152z00_944;obj_t BgL_tail1155z00_945;
BgL_l1152z00_944 = BgL_g1157z00_942; 
BgL_tail1155z00_945 = BgL_head1154z00_941; 
BgL_zc3anonymousza31558ze3z83_946:
if(
PAIRP(BgL_l1152z00_944))
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_newtail1156z00_948;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_arg1562z00_950;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_pairz00_1958;
{ /* Ieee/pairlist.scm 855 */
obj_t BgL_aux2448z00_3101;
BgL_aux2448z00_3101 = 
CAR(BgL_l1152z00_944); 
if(
PAIRP(BgL_aux2448z00_3101))
{ /* Ieee/pairlist.scm 855 */
BgL_pairz00_1958 = BgL_aux2448z00_3101; }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32860)), BGl_string2895z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2448z00_3101); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} } 
BgL_arg1562z00_950 = 
CAR(BgL_pairz00_1958); } 
BgL_newtail1156z00_948 = 
MAKE_PAIR(BgL_arg1562z00_950, BNIL); } 
SET_CDR(BgL_tail1155z00_945, BgL_newtail1156z00_948); 
{ 
obj_t BgL_tail1155z00_7256;obj_t BgL_l1152z00_7254;
BgL_l1152z00_7254 = 
CDR(BgL_l1152z00_944); 
BgL_tail1155z00_7256 = BgL_newtail1156z00_948; 
BgL_tail1155z00_945 = BgL_tail1155z00_7256; 
BgL_l1152z00_944 = BgL_l1152z00_7254; 
goto BgL_zc3anonymousza31558ze3z83_946;} }  else 
{ /* Ieee/pairlist.scm 855 */
if(
NULLP(BgL_l1152z00_944))
{ /* Ieee/pairlist.scm 855 */
BgL_valz00_3104 = BgL_head1154z00_941; }  else 
{ /* Ieee/pairlist.scm 855 */
BgL_valz00_3104 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1152z00_944); } } } } } 
{ /* Ieee/pairlist.scm 855 */
int BgL_len2450z00_3105;
BgL_len2450z00_3105 = 
(int)(
bgl_list_length(BgL_valz00_3104)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_104, BgL_len2450z00_3105))
{ /* Ieee/pairlist.scm 855 */
BgL__ortest_1112z00_918 = 
apply(BgL_predz00_104, BgL_valz00_3104); }  else 
{ /* Ieee/pairlist.scm 855 */
FAILURE(BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00,BGl_string2766z00zz__r4_pairs_and_lists_6_3z00,BGl_list2896z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(
CBOOL(BgL__ortest_1112z00_918))
{ /* Ieee/pairlist.scm 855 */
return BgL__ortest_1112z00_918;}  else 
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_arg1544z00_919;
if(
NULLP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 856 */
BgL_arg1544z00_919 = BNIL; }  else 
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_head1160z00_922;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_arg1554z00_936;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_pairz00_1967;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_pairz00_1966;
if(
PAIRP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 856 */
BgL_pairz00_1966 = BgL_lz00_915; }  else 
{ 
obj_t BgL_auxz00_7273;
BgL_auxz00_7273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32883)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_915); 
FAILURE(BgL_auxz00_7273,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_aux2454z00_3109;
BgL_aux2454z00_3109 = 
CAR(BgL_pairz00_1966); 
if(
PAIRP(BgL_aux2454z00_3109))
{ /* Ieee/pairlist.scm 856 */
BgL_pairz00_1967 = BgL_aux2454z00_3109; }  else 
{ 
obj_t BgL_auxz00_7280;
BgL_auxz00_7280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32883)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2454z00_3109); 
FAILURE(BgL_auxz00_7280,BFALSE,BFALSE);} } } 
BgL_arg1554z00_936 = 
CDR(BgL_pairz00_1967); } 
BgL_head1160z00_922 = 
MAKE_PAIR(BgL_arg1554z00_936, BNIL); } 
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_g1163z00_923;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_pairz00_1970;
if(
PAIRP(BgL_lz00_915))
{ /* Ieee/pairlist.scm 856 */
BgL_pairz00_1970 = BgL_lz00_915; }  else 
{ 
obj_t BgL_auxz00_7288;
BgL_auxz00_7288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32883)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_915); 
FAILURE(BgL_auxz00_7288,BFALSE,BFALSE);} 
BgL_g1163z00_923 = 
CDR(BgL_pairz00_1970); } 
{ 
obj_t BgL_l1158z00_925;obj_t BgL_tail1161z00_926;
BgL_l1158z00_925 = BgL_g1163z00_923; 
BgL_tail1161z00_926 = BgL_head1160z00_922; 
BgL_zc3anonymousza31546ze3z83_927:
if(
PAIRP(BgL_l1158z00_925))
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_newtail1162z00_929;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_arg1549z00_931;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_pairz00_1973;
{ /* Ieee/pairlist.scm 856 */
obj_t BgL_aux2458z00_3113;
BgL_aux2458z00_3113 = 
CAR(BgL_l1158z00_925); 
if(
PAIRP(BgL_aux2458z00_3113))
{ /* Ieee/pairlist.scm 856 */
BgL_pairz00_1973 = BgL_aux2458z00_3113; }  else 
{ 
obj_t BgL_auxz00_7298;
BgL_auxz00_7298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32883)), BGl_string2978z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2458z00_3113); 
FAILURE(BgL_auxz00_7298,BFALSE,BFALSE);} } 
BgL_arg1549z00_931 = 
CDR(BgL_pairz00_1973); } 
BgL_newtail1162z00_929 = 
MAKE_PAIR(BgL_arg1549z00_931, BNIL); } 
SET_CDR(BgL_tail1161z00_926, BgL_newtail1162z00_929); 
{ 
obj_t BgL_tail1161z00_7307;obj_t BgL_l1158z00_7305;
BgL_l1158z00_7305 = 
CDR(BgL_l1158z00_925); 
BgL_tail1161z00_7307 = BgL_newtail1162z00_929; 
BgL_tail1161z00_926 = BgL_tail1161z00_7307; 
BgL_l1158z00_925 = BgL_l1158z00_7305; 
goto BgL_zc3anonymousza31546ze3z83_927;} }  else 
{ /* Ieee/pairlist.scm 856 */
if(
NULLP(BgL_l1158z00_925))
{ /* Ieee/pairlist.scm 856 */
BgL_arg1544z00_919 = BgL_head1160z00_922; }  else 
{ /* Ieee/pairlist.scm 856 */
BgL_arg1544z00_919 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1158z00_925); } } } } } 
{ 
obj_t BgL_lz00_7311;
BgL_lz00_7311 = BgL_arg1544z00_919; 
BgL_lz00_915 = BgL_lz00_7311; 
goto BgL_zc3anonymousza31542ze3z83_916;} } } } } } } 
}



/* _any */
obj_t BGl__anyz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2490, obj_t BgL_predz00_2491, obj_t BgL_lz00_2492)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 841 */
{ /* Ieee/pairlist.scm 843 */
obj_t BgL_auxz00_7312;
if(
PROCEDUREP(BgL_predz00_2491))
{ /* Ieee/pairlist.scm 843 */
BgL_auxz00_7312 = BgL_predz00_2491
; }  else 
{ 
obj_t BgL_auxz00_7315;
BgL_auxz00_7315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)32616)), BGl_string2979z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2491); 
FAILURE(BgL_auxz00_7315,BFALSE,BFALSE);} 
return 
BGl_anyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7312, BgL_lz00_2492);} } 
}



/* every? */
BGL_EXPORTED_DEF bool_t BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_106, obj_t BgL_lz00_107)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 861 */
if(
NULLP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 863 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 865 */
bool_t BgL_testz00_7322;
{ /* Ieee/pairlist.scm 865 */
obj_t BgL_auxz00_7323;
{ /* Ieee/pairlist.scm 865 */
obj_t BgL_pairz00_1981;
if(
PAIRP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 865 */
BgL_pairz00_1981 = BgL_lz00_107; }  else 
{ 
obj_t BgL_auxz00_7326;
BgL_auxz00_7326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33207)), BGl_string2980z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_107); 
FAILURE(BgL_auxz00_7326,BFALSE,BFALSE);} 
BgL_auxz00_7323 = 
CDR(BgL_pairz00_1981); } 
BgL_testz00_7322 = 
NULLP(BgL_auxz00_7323); } 
if(BgL_testz00_7322)
{ /* Ieee/pairlist.scm 866 */
obj_t BgL_g1113z00_963;
{ /* Ieee/pairlist.scm 866 */
obj_t BgL_pairz00_1983;
if(
PAIRP(BgL_lz00_107))
{ /* Ieee/pairlist.scm 866 */
BgL_pairz00_1983 = BgL_lz00_107; }  else 
{ 
obj_t BgL_auxz00_7334;
BgL_auxz00_7334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33237)), BGl_string2980z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_107); 
FAILURE(BgL_auxz00_7334,BFALSE,BFALSE);} 
BgL_g1113z00_963 = 
CAR(BgL_pairz00_1983); } 
{ 
obj_t BgL_lz00_965;
BgL_lz00_965 = BgL_g1113z00_963; 
BgL_zc3anonymousza31574ze3z83_966:
if(
NULLP(BgL_lz00_965))
{ /* Ieee/pairlist.scm 868 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 870 */
bool_t BgL_testz00_7341;
{ /* Ieee/pairlist.scm 870 */
obj_t BgL_arg1578z00_970;
{ /* Ieee/pairlist.scm 870 */
obj_t BgL_pairz00_1985;
if(
PAIRP(BgL_lz00_965))
{ /* Ieee/pairlist.scm 870 */
BgL_pairz00_1985 = BgL_lz00_965; }  else 
{ 
obj_t BgL_auxz00_7344;
BgL_auxz00_7344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33297)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_965); 
FAILURE(BgL_auxz00_7344,BFALSE,BFALSE);} 
BgL_arg1578z00_970 = 
CAR(BgL_pairz00_1985); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_106, ((long)1)))
{ /* Ieee/pairlist.scm 870 */
BgL_testz00_7341 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_106)(BgL_predz00_106, BgL_arg1578z00_970, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 870 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list2981z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_106);} } 
if(BgL_testz00_7341)
{ 
obj_t BgL_lz00_7355;
BgL_lz00_7355 = 
CDR(BgL_lz00_965); 
BgL_lz00_965 = BgL_lz00_7355; 
goto BgL_zc3anonymousza31574ze3z83_966;}  else 
{ /* Ieee/pairlist.scm 870 */
return ((bool_t)0);} } } }  else 
{ 
obj_t BgL_lz00_973;
BgL_lz00_973 = BgL_lz00_107; 
BgL_zc3anonymousza31579ze3z83_974:
{ /* Ieee/pairlist.scm 877 */
bool_t BgL_testz00_7357;
{ /* Ieee/pairlist.scm 877 */
obj_t BgL_auxz00_7358;
{ /* Ieee/pairlist.scm 877 */
obj_t BgL_pairz00_1987;
if(
PAIRP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 877 */
BgL_pairz00_1987 = BgL_lz00_973; }  else 
{ 
obj_t BgL_auxz00_7361;
BgL_auxz00_7361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33415)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_973); 
FAILURE(BgL_auxz00_7361,BFALSE,BFALSE);} 
BgL_auxz00_7358 = 
CAR(BgL_pairz00_1987); } 
BgL_testz00_7357 = 
NULLP(BgL_auxz00_7358); } 
if(BgL_testz00_7357)
{ /* Ieee/pairlist.scm 877 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 879 */
bool_t BgL_testz00_7367;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_valz00_3139;
if(
NULLP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 879 */
BgL_valz00_3139 = BNIL; }  else 
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_head1166z00_999;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_arg1605z00_1013;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_pairz00_1991;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_pairz00_1990;
if(
PAIRP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 879 */
BgL_pairz00_1990 = BgL_lz00_973; }  else 
{ 
obj_t BgL_auxz00_7372;
BgL_auxz00_7372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33449)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_973); 
FAILURE(BgL_auxz00_7372,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_aux2476z00_3132;
BgL_aux2476z00_3132 = 
CAR(BgL_pairz00_1990); 
if(
PAIRP(BgL_aux2476z00_3132))
{ /* Ieee/pairlist.scm 879 */
BgL_pairz00_1991 = BgL_aux2476z00_3132; }  else 
{ 
obj_t BgL_auxz00_7379;
BgL_auxz00_7379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33449)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2476z00_3132); 
FAILURE(BgL_auxz00_7379,BFALSE,BFALSE);} } } 
BgL_arg1605z00_1013 = 
CAR(BgL_pairz00_1991); } 
BgL_head1166z00_999 = 
MAKE_PAIR(BgL_arg1605z00_1013, BNIL); } 
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_g1169z00_1000;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_pairz00_1994;
if(
PAIRP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 879 */
BgL_pairz00_1994 = BgL_lz00_973; }  else 
{ 
obj_t BgL_auxz00_7387;
BgL_auxz00_7387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33449)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_973); 
FAILURE(BgL_auxz00_7387,BFALSE,BFALSE);} 
BgL_g1169z00_1000 = 
CDR(BgL_pairz00_1994); } 
{ 
obj_t BgL_l1164z00_1002;obj_t BgL_tail1167z00_1003;
BgL_l1164z00_1002 = BgL_g1169z00_1000; 
BgL_tail1167z00_1003 = BgL_head1166z00_999; 
BgL_zc3anonymousza31598ze3z83_1004:
if(
PAIRP(BgL_l1164z00_1002))
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_newtail1168z00_1006;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_arg1601z00_1008;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_pairz00_1997;
{ /* Ieee/pairlist.scm 879 */
obj_t BgL_aux2480z00_3136;
BgL_aux2480z00_3136 = 
CAR(BgL_l1164z00_1002); 
if(
PAIRP(BgL_aux2480z00_3136))
{ /* Ieee/pairlist.scm 879 */
BgL_pairz00_1997 = BgL_aux2480z00_3136; }  else 
{ 
obj_t BgL_auxz00_7397;
BgL_auxz00_7397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33449)), BGl_string2984z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2480z00_3136); 
FAILURE(BgL_auxz00_7397,BFALSE,BFALSE);} } 
BgL_arg1601z00_1008 = 
CAR(BgL_pairz00_1997); } 
BgL_newtail1168z00_1006 = 
MAKE_PAIR(BgL_arg1601z00_1008, BNIL); } 
SET_CDR(BgL_tail1167z00_1003, BgL_newtail1168z00_1006); 
{ 
obj_t BgL_tail1167z00_7406;obj_t BgL_l1164z00_7404;
BgL_l1164z00_7404 = 
CDR(BgL_l1164z00_1002); 
BgL_tail1167z00_7406 = BgL_newtail1168z00_1006; 
BgL_tail1167z00_1003 = BgL_tail1167z00_7406; 
BgL_l1164z00_1002 = BgL_l1164z00_7404; 
goto BgL_zc3anonymousza31598ze3z83_1004;} }  else 
{ /* Ieee/pairlist.scm 879 */
if(
NULLP(BgL_l1164z00_1002))
{ /* Ieee/pairlist.scm 879 */
BgL_valz00_3139 = BgL_head1166z00_999; }  else 
{ /* Ieee/pairlist.scm 879 */
BgL_valz00_3139 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1164z00_1002); } } } } } 
{ /* Ieee/pairlist.scm 879 */
int BgL_len2482z00_3140;
BgL_len2482z00_3140 = 
(int)(
bgl_list_length(BgL_valz00_3139)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_106, BgL_len2482z00_3140))
{ /* Ieee/pairlist.scm 879 */
BgL_testz00_7367 = 
CBOOL(
apply(BgL_predz00_106, BgL_valz00_3139))
; }  else 
{ /* Ieee/pairlist.scm 879 */
FAILURE(BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00,BGl_string2766z00zz__r4_pairs_and_lists_6_3z00,BGl_list2985z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(BgL_testz00_7367)
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_arg1582z00_977;
if(
NULLP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 880 */
BgL_arg1582z00_977 = BNIL; }  else 
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_head1172z00_980;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_arg1591z00_994;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_pairz00_2006;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_pairz00_2005;
if(
PAIRP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 880 */
BgL_pairz00_2005 = BgL_lz00_973; }  else 
{ 
obj_t BgL_auxz00_7422;
BgL_auxz00_7422 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33475)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_973); 
FAILURE(BgL_auxz00_7422,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_aux2486z00_3144;
BgL_aux2486z00_3144 = 
CAR(BgL_pairz00_2005); 
if(
PAIRP(BgL_aux2486z00_3144))
{ /* Ieee/pairlist.scm 880 */
BgL_pairz00_2006 = BgL_aux2486z00_3144; }  else 
{ 
obj_t BgL_auxz00_7429;
BgL_auxz00_7429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33475)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2486z00_3144); 
FAILURE(BgL_auxz00_7429,BFALSE,BFALSE);} } } 
BgL_arg1591z00_994 = 
CDR(BgL_pairz00_2006); } 
BgL_head1172z00_980 = 
MAKE_PAIR(BgL_arg1591z00_994, BNIL); } 
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_g1175z00_981;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_pairz00_2009;
if(
PAIRP(BgL_lz00_973))
{ /* Ieee/pairlist.scm 880 */
BgL_pairz00_2009 = BgL_lz00_973; }  else 
{ 
obj_t BgL_auxz00_7437;
BgL_auxz00_7437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33475)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_973); 
FAILURE(BgL_auxz00_7437,BFALSE,BFALSE);} 
BgL_g1175z00_981 = 
CDR(BgL_pairz00_2009); } 
{ 
obj_t BgL_l1170z00_983;obj_t BgL_tail1173z00_984;
BgL_l1170z00_983 = BgL_g1175z00_981; 
BgL_tail1173z00_984 = BgL_head1172z00_980; 
BgL_zc3anonymousza31584ze3z83_985:
if(
PAIRP(BgL_l1170z00_983))
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_newtail1174z00_987;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_arg1587z00_989;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_pairz00_2012;
{ /* Ieee/pairlist.scm 880 */
obj_t BgL_aux2490z00_3148;
BgL_aux2490z00_3148 = 
CAR(BgL_l1170z00_983); 
if(
PAIRP(BgL_aux2490z00_3148))
{ /* Ieee/pairlist.scm 880 */
BgL_pairz00_2012 = BgL_aux2490z00_3148; }  else 
{ 
obj_t BgL_auxz00_7447;
BgL_auxz00_7447 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33475)), BGl_string3067z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2490z00_3148); 
FAILURE(BgL_auxz00_7447,BFALSE,BFALSE);} } 
BgL_arg1587z00_989 = 
CDR(BgL_pairz00_2012); } 
BgL_newtail1174z00_987 = 
MAKE_PAIR(BgL_arg1587z00_989, BNIL); } 
SET_CDR(BgL_tail1173z00_984, BgL_newtail1174z00_987); 
{ 
obj_t BgL_tail1173z00_7456;obj_t BgL_l1170z00_7454;
BgL_l1170z00_7454 = 
CDR(BgL_l1170z00_983); 
BgL_tail1173z00_7456 = BgL_newtail1174z00_987; 
BgL_tail1173z00_984 = BgL_tail1173z00_7456; 
BgL_l1170z00_983 = BgL_l1170z00_7454; 
goto BgL_zc3anonymousza31584ze3z83_985;} }  else 
{ /* Ieee/pairlist.scm 880 */
if(
NULLP(BgL_l1170z00_983))
{ /* Ieee/pairlist.scm 880 */
BgL_arg1582z00_977 = BgL_head1172z00_980; }  else 
{ /* Ieee/pairlist.scm 880 */
BgL_arg1582z00_977 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1170z00_983); } } } } } 
{ 
obj_t BgL_lz00_7460;
BgL_lz00_7460 = BgL_arg1582z00_977; 
BgL_lz00_973 = BgL_lz00_7460; 
goto BgL_zc3anonymousza31579ze3z83_974;} }  else 
{ /* Ieee/pairlist.scm 879 */
return ((bool_t)0);} } } } } } 
}



/* _every? */
obj_t BGl__everyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2493, obj_t BgL_predz00_2494, obj_t BgL_lz00_2495)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 861 */
{ /* Ieee/pairlist.scm 863 */
bool_t BgL_auxz00_7461;
{ /* Ieee/pairlist.scm 863 */
obj_t BgL_auxz00_7462;
if(
PROCEDUREP(BgL_predz00_2494))
{ /* Ieee/pairlist.scm 863 */
BgL_auxz00_7462 = BgL_predz00_2494
; }  else 
{ 
obj_t BgL_auxz00_7465;
BgL_auxz00_7465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33167)), BGl_string3068z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2494); 
FAILURE(BgL_auxz00_7465,BFALSE,BFALSE);} 
BgL_auxz00_7461 = 
BGl_everyzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7462, BgL_lz00_2495); } 
return 
BBOOL(BgL_auxz00_7461);} } 
}



/* any? */
BGL_EXPORTED_DEF bool_t BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_108, obj_t BgL_lz00_109)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 887 */
if(
NULLP(BgL_lz00_109))
{ /* Ieee/pairlist.scm 889 */
return ((bool_t)0);}  else 
{ /* Ieee/pairlist.scm 891 */
bool_t BgL_testz00_7473;
{ /* Ieee/pairlist.scm 891 */
obj_t BgL_auxz00_7474;
{ /* Ieee/pairlist.scm 891 */
obj_t BgL_pairz00_2020;
if(
PAIRP(BgL_lz00_109))
{ /* Ieee/pairlist.scm 891 */
BgL_pairz00_2020 = BgL_lz00_109; }  else 
{ 
obj_t BgL_auxz00_7477;
BgL_auxz00_7477 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33820)), BGl_string3069z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_109); 
FAILURE(BgL_auxz00_7477,BFALSE,BFALSE);} 
BgL_auxz00_7474 = 
CDR(BgL_pairz00_2020); } 
BgL_testz00_7473 = 
NULLP(BgL_auxz00_7474); } 
if(BgL_testz00_7473)
{ /* Ieee/pairlist.scm 892 */
obj_t BgL_g1114z00_1021;
{ /* Ieee/pairlist.scm 892 */
obj_t BgL_pairz00_2022;
if(
PAIRP(BgL_lz00_109))
{ /* Ieee/pairlist.scm 892 */
BgL_pairz00_2022 = BgL_lz00_109; }  else 
{ 
obj_t BgL_auxz00_7485;
BgL_auxz00_7485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33850)), BGl_string3069z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_109); 
FAILURE(BgL_auxz00_7485,BFALSE,BFALSE);} 
BgL_g1114z00_1021 = 
CAR(BgL_pairz00_2022); } 
{ 
obj_t BgL_lz00_1023;
BgL_lz00_1023 = BgL_g1114z00_1021; 
BgL_zc3anonymousza31613ze3z83_1024:
if(
NULLP(BgL_lz00_1023))
{ /* Ieee/pairlist.scm 894 */
return ((bool_t)0);}  else 
{ /* Ieee/pairlist.scm 896 */
bool_t BgL_testz00_7492;
{ /* Ieee/pairlist.scm 896 */
obj_t BgL_arg1618z00_1028;
{ /* Ieee/pairlist.scm 896 */
obj_t BgL_pairz00_2024;
if(
PAIRP(BgL_lz00_1023))
{ /* Ieee/pairlist.scm 896 */
BgL_pairz00_2024 = BgL_lz00_1023; }  else 
{ 
obj_t BgL_auxz00_7495;
BgL_auxz00_7495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33910)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1023); 
FAILURE(BgL_auxz00_7495,BFALSE,BFALSE);} 
BgL_arg1618z00_1028 = 
CAR(BgL_pairz00_2024); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_108, ((long)1)))
{ /* Ieee/pairlist.scm 896 */
BgL_testz00_7492 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_108)(BgL_predz00_108, BgL_arg1618z00_1028, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 896 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list3070z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_108);} } 
if(BgL_testz00_7492)
{ /* Ieee/pairlist.scm 896 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 899 */
obj_t BgL_arg1616z00_1027;
{ /* Ieee/pairlist.scm 899 */
obj_t BgL_pairz00_2025;
if(
PAIRP(BgL_lz00_1023))
{ /* Ieee/pairlist.scm 899 */
BgL_pairz00_2025 = BgL_lz00_1023; }  else 
{ 
obj_t BgL_auxz00_7508;
BgL_auxz00_7508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33955)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1023); 
FAILURE(BgL_auxz00_7508,BFALSE,BFALSE);} 
BgL_arg1616z00_1027 = 
CDR(BgL_pairz00_2025); } 
{ 
obj_t BgL_lz00_7513;
BgL_lz00_7513 = BgL_arg1616z00_1027; 
BgL_lz00_1023 = BgL_lz00_7513; 
goto BgL_zc3anonymousza31613ze3z83_1024;} } } } }  else 
{ 
obj_t BgL_lz00_1031;
BgL_lz00_1031 = BgL_lz00_109; 
BgL_zc3anonymousza31619ze3z83_1032:
{ /* Ieee/pairlist.scm 903 */
bool_t BgL_testz00_7514;
{ /* Ieee/pairlist.scm 903 */
obj_t BgL_auxz00_7515;
{ /* Ieee/pairlist.scm 903 */
obj_t BgL_pairz00_2026;
if(
PAIRP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 903 */
BgL_pairz00_2026 = BgL_lz00_1031; }  else 
{ 
obj_t BgL_auxz00_7518;
BgL_auxz00_7518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34028)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1031); 
FAILURE(BgL_auxz00_7518,BFALSE,BFALSE);} 
BgL_auxz00_7515 = 
CAR(BgL_pairz00_2026); } 
BgL_testz00_7514 = 
NULLP(BgL_auxz00_7515); } 
if(BgL_testz00_7514)
{ /* Ieee/pairlist.scm 903 */
return ((bool_t)0);}  else 
{ /* Ieee/pairlist.scm 905 */
bool_t BgL_testz00_7524;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_valz00_3174;
if(
NULLP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 905 */
BgL_valz00_3174 = BNIL; }  else 
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_head1178z00_1057;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_arg1646z00_1071;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_pairz00_2030;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_pairz00_2029;
if(
PAIRP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 905 */
BgL_pairz00_2029 = BgL_lz00_1031; }  else 
{ 
obj_t BgL_auxz00_7529;
BgL_auxz00_7529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34062)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1031); 
FAILURE(BgL_auxz00_7529,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_aux2508z00_3167;
BgL_aux2508z00_3167 = 
CAR(BgL_pairz00_2029); 
if(
PAIRP(BgL_aux2508z00_3167))
{ /* Ieee/pairlist.scm 905 */
BgL_pairz00_2030 = BgL_aux2508z00_3167; }  else 
{ 
obj_t BgL_auxz00_7536;
BgL_auxz00_7536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34062)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2508z00_3167); 
FAILURE(BgL_auxz00_7536,BFALSE,BFALSE);} } } 
BgL_arg1646z00_1071 = 
CAR(BgL_pairz00_2030); } 
BgL_head1178z00_1057 = 
MAKE_PAIR(BgL_arg1646z00_1071, BNIL); } 
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_g1181z00_1058;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_pairz00_2033;
if(
PAIRP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 905 */
BgL_pairz00_2033 = BgL_lz00_1031; }  else 
{ 
obj_t BgL_auxz00_7544;
BgL_auxz00_7544 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34062)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1031); 
FAILURE(BgL_auxz00_7544,BFALSE,BFALSE);} 
BgL_g1181z00_1058 = 
CDR(BgL_pairz00_2033); } 
{ 
obj_t BgL_l1176z00_1060;obj_t BgL_tail1179z00_1061;
BgL_l1176z00_1060 = BgL_g1181z00_1058; 
BgL_tail1179z00_1061 = BgL_head1178z00_1057; 
BgL_zc3anonymousza31637ze3z83_1062:
if(
PAIRP(BgL_l1176z00_1060))
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_newtail1180z00_1064;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_arg1640z00_1066;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_pairz00_2036;
{ /* Ieee/pairlist.scm 905 */
obj_t BgL_aux2512z00_3171;
BgL_aux2512z00_3171 = 
CAR(BgL_l1176z00_1060); 
if(
PAIRP(BgL_aux2512z00_3171))
{ /* Ieee/pairlist.scm 905 */
BgL_pairz00_2036 = BgL_aux2512z00_3171; }  else 
{ 
obj_t BgL_auxz00_7554;
BgL_auxz00_7554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34062)), BGl_string3073z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2512z00_3171); 
FAILURE(BgL_auxz00_7554,BFALSE,BFALSE);} } 
BgL_arg1640z00_1066 = 
CAR(BgL_pairz00_2036); } 
BgL_newtail1180z00_1064 = 
MAKE_PAIR(BgL_arg1640z00_1066, BNIL); } 
SET_CDR(BgL_tail1179z00_1061, BgL_newtail1180z00_1064); 
{ 
obj_t BgL_tail1179z00_7563;obj_t BgL_l1176z00_7561;
BgL_l1176z00_7561 = 
CDR(BgL_l1176z00_1060); 
BgL_tail1179z00_7563 = BgL_newtail1180z00_1064; 
BgL_tail1179z00_1061 = BgL_tail1179z00_7563; 
BgL_l1176z00_1060 = BgL_l1176z00_7561; 
goto BgL_zc3anonymousza31637ze3z83_1062;} }  else 
{ /* Ieee/pairlist.scm 905 */
if(
NULLP(BgL_l1176z00_1060))
{ /* Ieee/pairlist.scm 905 */
BgL_valz00_3174 = BgL_head1178z00_1057; }  else 
{ /* Ieee/pairlist.scm 905 */
BgL_valz00_3174 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1176z00_1060); } } } } } 
{ /* Ieee/pairlist.scm 905 */
int BgL_len2514z00_3175;
BgL_len2514z00_3175 = 
(int)(
bgl_list_length(BgL_valz00_3174)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_108, BgL_len2514z00_3175))
{ /* Ieee/pairlist.scm 905 */
BgL_testz00_7524 = 
CBOOL(
apply(BgL_predz00_108, BgL_valz00_3174))
; }  else 
{ /* Ieee/pairlist.scm 905 */
FAILURE(BGl_symbol2765z00zz__r4_pairs_and_lists_6_3z00,BGl_string2766z00zz__r4_pairs_and_lists_6_3z00,BGl_list3074z00zz__r4_pairs_and_lists_6_3z00);} } } 
if(BgL_testz00_7524)
{ /* Ieee/pairlist.scm 905 */
return ((bool_t)1);}  else 
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_arg1622z00_1035;
if(
NULLP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 908 */
BgL_arg1622z00_1035 = BNIL; }  else 
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_head1184z00_1038;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_arg1632z00_1052;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_pairz00_2045;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_pairz00_2044;
if(
PAIRP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 908 */
BgL_pairz00_2044 = BgL_lz00_1031; }  else 
{ 
obj_t BgL_auxz00_7579;
BgL_auxz00_7579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34111)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1031); 
FAILURE(BgL_auxz00_7579,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_aux2518z00_3179;
BgL_aux2518z00_3179 = 
CAR(BgL_pairz00_2044); 
if(
PAIRP(BgL_aux2518z00_3179))
{ /* Ieee/pairlist.scm 908 */
BgL_pairz00_2045 = BgL_aux2518z00_3179; }  else 
{ 
obj_t BgL_auxz00_7586;
BgL_auxz00_7586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34111)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2518z00_3179); 
FAILURE(BgL_auxz00_7586,BFALSE,BFALSE);} } } 
BgL_arg1632z00_1052 = 
CDR(BgL_pairz00_2045); } 
BgL_head1184z00_1038 = 
MAKE_PAIR(BgL_arg1632z00_1052, BNIL); } 
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_g1187z00_1039;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_pairz00_2048;
if(
PAIRP(BgL_lz00_1031))
{ /* Ieee/pairlist.scm 908 */
BgL_pairz00_2048 = BgL_lz00_1031; }  else 
{ 
obj_t BgL_auxz00_7594;
BgL_auxz00_7594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34111)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1031); 
FAILURE(BgL_auxz00_7594,BFALSE,BFALSE);} 
BgL_g1187z00_1039 = 
CDR(BgL_pairz00_2048); } 
{ 
obj_t BgL_l1182z00_1041;obj_t BgL_tail1185z00_1042;
BgL_l1182z00_1041 = BgL_g1187z00_1039; 
BgL_tail1185z00_1042 = BgL_head1184z00_1038; 
BgL_zc3anonymousza31624ze3z83_1043:
if(
PAIRP(BgL_l1182z00_1041))
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_newtail1186z00_1045;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_arg1627z00_1047;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_pairz00_2051;
{ /* Ieee/pairlist.scm 908 */
obj_t BgL_aux2522z00_3183;
BgL_aux2522z00_3183 = 
CAR(BgL_l1182z00_1041); 
if(
PAIRP(BgL_aux2522z00_3183))
{ /* Ieee/pairlist.scm 908 */
BgL_pairz00_2051 = BgL_aux2522z00_3183; }  else 
{ 
obj_t BgL_auxz00_7604;
BgL_auxz00_7604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34111)), BGl_string3158z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2522z00_3183); 
FAILURE(BgL_auxz00_7604,BFALSE,BFALSE);} } 
BgL_arg1627z00_1047 = 
CDR(BgL_pairz00_2051); } 
BgL_newtail1186z00_1045 = 
MAKE_PAIR(BgL_arg1627z00_1047, BNIL); } 
SET_CDR(BgL_tail1185z00_1042, BgL_newtail1186z00_1045); 
{ 
obj_t BgL_tail1185z00_7613;obj_t BgL_l1182z00_7611;
BgL_l1182z00_7611 = 
CDR(BgL_l1182z00_1041); 
BgL_tail1185z00_7613 = BgL_newtail1186z00_1045; 
BgL_tail1185z00_1042 = BgL_tail1185z00_7613; 
BgL_l1182z00_1041 = BgL_l1182z00_7611; 
goto BgL_zc3anonymousza31624ze3z83_1043;} }  else 
{ /* Ieee/pairlist.scm 908 */
if(
NULLP(BgL_l1182z00_1041))
{ /* Ieee/pairlist.scm 908 */
BgL_arg1622z00_1035 = BgL_head1184z00_1038; }  else 
{ /* Ieee/pairlist.scm 908 */
BgL_arg1622z00_1035 = 
BGl_errorz00zz__errorz00(BGl_string2763z00zz__r4_pairs_and_lists_6_3z00, BGl_string2764z00zz__r4_pairs_and_lists_6_3z00, BgL_l1182z00_1041); } } } } } 
{ 
obj_t BgL_lz00_7617;
BgL_lz00_7617 = BgL_arg1622z00_1035; 
BgL_lz00_1031 = BgL_lz00_7617; 
goto BgL_zc3anonymousza31619ze3z83_1032;} } } } } } } 
}



/* _any? */
obj_t BGl__anyzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2496, obj_t BgL_predz00_2497, obj_t BgL_lz00_2498)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 887 */
{ /* Ieee/pairlist.scm 889 */
bool_t BgL_auxz00_7618;
{ /* Ieee/pairlist.scm 889 */
obj_t BgL_auxz00_7619;
if(
PROCEDUREP(BgL_predz00_2497))
{ /* Ieee/pairlist.scm 889 */
BgL_auxz00_7619 = BgL_predz00_2497
; }  else 
{ 
obj_t BgL_auxz00_7622;
BgL_auxz00_7622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)33780)), BGl_string3159z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2497); 
FAILURE(BgL_auxz00_7622,BFALSE,BFALSE);} 
BgL_auxz00_7618 = 
BGl_anyzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7619, BgL_lz00_2498); } 
return 
BBOOL(BgL_auxz00_7618);} } 
}



/* find */
BGL_EXPORTED_DEF obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_110, obj_t BgL_listz00_111)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 913 */
{ /* Ieee/pairlist.scm 914 */
obj_t BgL_g1115z00_2058;
BgL_g1115z00_2058 = 
BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_predz00_110, BgL_listz00_111); 
if(
CBOOL(BgL_g1115z00_2058))
{ /* Ieee/pairlist.scm 914 */
obj_t BgL_pairz00_2060;
if(
PAIRP(BgL_g1115z00_2058))
{ /* Ieee/pairlist.scm 914 */
BgL_pairz00_2060 = BgL_g1115z00_2058; }  else 
{ 
obj_t BgL_auxz00_7633;
BgL_auxz00_7633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34388)), BGl_string3160z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_g1115z00_2058); 
FAILURE(BgL_auxz00_7633,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_2060);}  else 
{ /* Ieee/pairlist.scm 914 */
return BFALSE;} } } 
}



/* _find */
obj_t BGl__findz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2499, obj_t BgL_predz00_2500, obj_t BgL_listz00_2501)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 913 */
{ /* Ieee/pairlist.scm 914 */
obj_t BgL_auxz00_7645;obj_t BgL_auxz00_7638;
{ /* Ieee/pairlist.scm 914 */
bool_t BgL_testz00_7646;
if(
PAIRP(BgL_listz00_2501))
{ /* Ieee/pairlist.scm 914 */
BgL_testz00_7646 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 914 */
BgL_testz00_7646 = 
NULLP(BgL_listz00_2501)
; } 
if(BgL_testz00_7646)
{ /* Ieee/pairlist.scm 914 */
BgL_auxz00_7645 = BgL_listz00_2501
; }  else 
{ 
obj_t BgL_auxz00_7650;
BgL_auxz00_7650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34388)), BGl_string3161z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2501); 
FAILURE(BgL_auxz00_7650,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_predz00_2500))
{ /* Ieee/pairlist.scm 914 */
BgL_auxz00_7638 = BgL_predz00_2500
; }  else 
{ 
obj_t BgL_auxz00_7641;
BgL_auxz00_7641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34388)), BGl_string3161z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2500); 
FAILURE(BgL_auxz00_7641,BFALSE,BFALSE);} 
return 
BGl_findz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7638, BgL_auxz00_7645);} } 
}



/* find-tail */
BGL_EXPORTED_DEF obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_predz00_112, obj_t BgL_listz00_113)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 920 */
{ 
obj_t BgL_listz00_1080;
BgL_listz00_1080 = BgL_listz00_113; 
BgL_zc3anonymousza31654ze3z83_1081:
if(
PAIRP(BgL_listz00_1080))
{ /* Ieee/pairlist.scm 923 */
bool_t BgL_testz00_7657;
{ /* Ieee/pairlist.scm 923 */
obj_t BgL_arg1659z00_1085;
BgL_arg1659z00_1085 = 
CAR(BgL_listz00_1080); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_112, ((long)1)))
{ /* Ieee/pairlist.scm 923 */
BgL_testz00_7657 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_112)(BgL_predz00_112, BgL_arg1659z00_1085, BEOA))
; }  else 
{ /* Ieee/pairlist.scm 923 */
FAILURE(BGl_string3162z00zz__r4_pairs_and_lists_6_3z00,BGl_list3163z00zz__r4_pairs_and_lists_6_3z00,BgL_predz00_112);} } 
if(BgL_testz00_7657)
{ /* Ieee/pairlist.scm 923 */
return BgL_listz00_1080;}  else 
{ 
obj_t BgL_listz00_7665;
BgL_listz00_7665 = 
CDR(BgL_listz00_1080); 
BgL_listz00_1080 = BgL_listz00_7665; 
goto BgL_zc3anonymousza31654ze3z83_1081;} }  else 
{ /* Ieee/pairlist.scm 922 */
return BFALSE;} } } 
}



/* _find-tail */
obj_t BGl__findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2502, obj_t BgL_predz00_2503, obj_t BgL_listz00_2504)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 920 */
{ /* Ieee/pairlist.scm 922 */
obj_t BgL_auxz00_7674;obj_t BgL_auxz00_7667;
{ /* Ieee/pairlist.scm 922 */
bool_t BgL_testz00_7675;
if(
PAIRP(BgL_listz00_2504))
{ /* Ieee/pairlist.scm 922 */
BgL_testz00_7675 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 922 */
BgL_testz00_7675 = 
NULLP(BgL_listz00_2504)
; } 
if(BgL_testz00_7675)
{ /* Ieee/pairlist.scm 922 */
BgL_auxz00_7674 = BgL_listz00_2504
; }  else 
{ 
obj_t BgL_auxz00_7679;
BgL_auxz00_7679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34716)), BGl_string3166z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2504); 
FAILURE(BgL_auxz00_7679,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_predz00_2503))
{ /* Ieee/pairlist.scm 922 */
BgL_auxz00_7667 = BgL_predz00_2503
; }  else 
{ 
obj_t BgL_auxz00_7670;
BgL_auxz00_7670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)34716)), BGl_string3166z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2503); 
FAILURE(BgL_auxz00_7670,BFALSE,BFALSE);} 
return 
BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7667, BgL_auxz00_7674);} } 
}



/* reduce */
BGL_EXPORTED_DEF obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_fz00_114, obj_t BgL_ridentifyz00_115, obj_t BgL_listz00_116)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 930 */
if(
NULLP(BgL_listz00_116))
{ /* Ieee/pairlist.scm 931 */
return BgL_ridentifyz00_115;}  else 
{ /* Ieee/pairlist.scm 933 */
obj_t BgL_g1117z00_1088;obj_t BgL_g1118z00_1089;
{ /* Ieee/pairlist.scm 933 */
obj_t BgL_pairz00_2065;
if(
PAIRP(BgL_listz00_116))
{ /* Ieee/pairlist.scm 933 */
BgL_pairz00_2065 = BgL_listz00_116; }  else 
{ 
obj_t BgL_auxz00_7688;
BgL_auxz00_7688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35119)), BGl_string3167z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_116); 
FAILURE(BgL_auxz00_7688,BFALSE,BFALSE);} 
BgL_g1117z00_1088 = 
CDR(BgL_pairz00_2065); } 
BgL_g1118z00_1089 = 
CAR(BgL_listz00_116); 
{ 
obj_t BgL_listz00_2068;obj_t BgL_ansz00_2069;
BgL_listz00_2068 = BgL_g1117z00_1088; 
BgL_ansz00_2069 = BgL_g1118z00_1089; 
BgL_loopz00_2067:
if(
PAIRP(BgL_listz00_2068))
{ /* Ieee/pairlist.scm 933 */
obj_t BgL_arg1663z00_2075;obj_t BgL_arg1664z00_2076;
BgL_arg1663z00_2075 = 
CDR(BgL_listz00_2068); 
{ /* Ieee/pairlist.scm 933 */
obj_t BgL_arg1666z00_2077;
BgL_arg1666z00_2077 = 
CAR(BgL_listz00_2068); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fz00_114, ((long)2)))
{ /* Ieee/pairlist.scm 933 */
BgL_arg1664z00_2076 = 
PROCEDURE_ENTRY(BgL_fz00_114)(BgL_fz00_114, BgL_arg1666z00_2077, BgL_ansz00_2069, BEOA); }  else 
{ /* Ieee/pairlist.scm 933 */
FAILURE(BGl_string2731z00zz__r4_pairs_and_lists_6_3z00,BGl_list3168z00zz__r4_pairs_and_lists_6_3z00,BgL_fz00_114);} } 
{ 
obj_t BgL_ansz00_7704;obj_t BgL_listz00_7703;
BgL_listz00_7703 = BgL_arg1663z00_2075; 
BgL_ansz00_7704 = BgL_arg1664z00_2076; 
BgL_ansz00_2069 = BgL_ansz00_7704; 
BgL_listz00_2068 = BgL_listz00_7703; 
goto BgL_loopz00_2067;} }  else 
{ /* Ieee/pairlist.scm 933 */
return BgL_ansz00_2069;} } } } 
}



/* _reduce */
obj_t BGl__reducez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2505, obj_t BgL_fz00_2506, obj_t BgL_ridentifyz00_2507, obj_t BgL_listz00_2508)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 930 */
{ /* Ieee/pairlist.scm 931 */
obj_t BgL_auxz00_7712;obj_t BgL_auxz00_7705;
{ /* Ieee/pairlist.scm 931 */
bool_t BgL_testz00_7713;
if(
PAIRP(BgL_listz00_2508))
{ /* Ieee/pairlist.scm 931 */
BgL_testz00_7713 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 931 */
BgL_testz00_7713 = 
NULLP(BgL_listz00_2508)
; } 
if(BgL_testz00_7713)
{ /* Ieee/pairlist.scm 931 */
BgL_auxz00_7712 = BgL_listz00_2508
; }  else 
{ 
obj_t BgL_auxz00_7717;
BgL_auxz00_7717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35056)), BGl_string3175z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2508); 
FAILURE(BgL_auxz00_7717,BFALSE,BFALSE);} } 
if(
PROCEDUREP(BgL_fz00_2506))
{ /* Ieee/pairlist.scm 931 */
BgL_auxz00_7705 = BgL_fz00_2506
; }  else 
{ 
obj_t BgL_auxz00_7708;
BgL_auxz00_7708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35056)), BGl_string3175z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_fz00_2506); 
FAILURE(BgL_auxz00_7708,BFALSE,BFALSE);} 
return 
BGl_reducez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7705, BgL_ridentifyz00_2507, BgL_auxz00_7712);} } 
}



/* make-list */
BGL_EXPORTED_DEF obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int BgL_nz00_117, obj_t BgL_oz00_118)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 942 */
{ /* Ieee/pairlist.scm 943 */
obj_t BgL_fillz00_1099;
if(
PAIRP(BgL_oz00_118))
{ /* Ieee/pairlist.scm 943 */
BgL_fillz00_1099 = 
CAR(BgL_oz00_118); }  else 
{ /* Ieee/pairlist.scm 943 */
BgL_fillz00_1099 = BUNSPEC; } 
{ 
int BgL_iz00_2100;obj_t BgL_rz00_2101;
{ /* Ieee/pairlist.scm 944 */
obj_t BgL_aux2548z00_3211;
BgL_iz00_2100 = BgL_nz00_117; 
BgL_rz00_2101 = BNIL; 
BgL_walkz00_2099:
if(
(
(long)(BgL_iz00_2100)<=((long)0)))
{ /* Ieee/pairlist.scm 944 */
BgL_aux2548z00_3211 = BgL_rz00_2101; }  else 
{ /* Ieee/pairlist.scm 944 */
long BgL_arg1669z00_2106;obj_t BgL_arg1670z00_2107;
BgL_arg1669z00_2106 = 
(
(long)(BgL_iz00_2100)-((long)1)); 
BgL_arg1670z00_2107 = 
MAKE_PAIR(BgL_fillz00_1099, BgL_rz00_2101); 
{ 
obj_t BgL_rz00_7733;int BgL_iz00_7731;
BgL_iz00_7731 = 
(int)(BgL_arg1669z00_2106); 
BgL_rz00_7733 = BgL_arg1670z00_2107; 
BgL_rz00_2101 = BgL_rz00_7733; 
BgL_iz00_2100 = BgL_iz00_7731; 
goto BgL_walkz00_2099;} } 
{ /* Ieee/pairlist.scm 944 */
bool_t BgL_testz00_7734;
if(
PAIRP(BgL_aux2548z00_3211))
{ /* Ieee/pairlist.scm 944 */
BgL_testz00_7734 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 944 */
BgL_testz00_7734 = 
NULLP(BgL_aux2548z00_3211)
; } 
if(BgL_testz00_7734)
{ /* Ieee/pairlist.scm 944 */
return BgL_aux2548z00_3211;}  else 
{ 
obj_t BgL_auxz00_7738;
BgL_auxz00_7738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35541)), BGl_string3176z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2548z00_3211); 
FAILURE(BgL_auxz00_7738,BFALSE,BFALSE);} } } } } } 
}



/* _make-list */
obj_t BGl__makezd2listzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2509, obj_t BgL_nz00_2510, obj_t BgL_oz00_2511)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 942 */
{ /* Ieee/pairlist.scm 943 */
int BgL_auxz00_7742;
{ /* Ieee/pairlist.scm 943 */
obj_t BgL_auxz00_7743;
if(
INTEGERP(BgL_nz00_2510))
{ /* Ieee/pairlist.scm 943 */
BgL_auxz00_7743 = BgL_nz00_2510
; }  else 
{ 
obj_t BgL_auxz00_7746;
BgL_auxz00_7746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35485)), BGl_string3177z00zz__r4_pairs_and_lists_6_3z00, BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2510); 
FAILURE(BgL_auxz00_7746,BFALSE,BFALSE);} 
BgL_auxz00_7742 = 
CINT(BgL_auxz00_7743); } 
return 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7742, BgL_oz00_2511);} } 
}



/* list-tabulate */
BGL_EXPORTED_DEF obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int BgL_nz00_119, obj_t BgL_initzd2proczd2_120)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 952 */
{ /* Ieee/pairlist.scm 953 */
long BgL_g1120z00_1110;
BgL_g1120z00_1110 = 
(
(long)(BgL_nz00_119)-((long)1)); 
{ 
long BgL_iz00_1113;obj_t BgL_rz00_1114;
{ /* Ieee/pairlist.scm 953 */
obj_t BgL_aux2554z00_3218;
BgL_iz00_1113 = BgL_g1120z00_1110; 
BgL_rz00_1114 = BNIL; 
BgL_zc3anonymousza31672ze3z83_1115:
if(
(BgL_iz00_1113<((long)0)))
{ /* Ieee/pairlist.scm 954 */
BgL_aux2554z00_3218 = BgL_rz00_1114; }  else 
{ /* Ieee/pairlist.scm 956 */
long BgL_arg1674z00_1117;obj_t BgL_arg1675z00_1118;
BgL_arg1674z00_1117 = 
(BgL_iz00_1113-((long)1)); 
{ /* Ieee/pairlist.scm 956 */
obj_t BgL_arg1676z00_1119;
if(
PROCEDURE_CORRECT_ARITYP(BgL_initzd2proczd2_120, ((long)1)))
{ /* Ieee/pairlist.scm 956 */
BgL_arg1676z00_1119 = 
PROCEDURE_ENTRY(BgL_initzd2proczd2_120)(BgL_initzd2proczd2_120, 
BINT(BgL_iz00_1113), BEOA); }  else 
{ /* Ieee/pairlist.scm 956 */
FAILURE(BGl_string3179z00zz__r4_pairs_and_lists_6_3z00,BGl_list3180z00zz__r4_pairs_and_lists_6_3z00,BgL_initzd2proczd2_120);} 
BgL_arg1675z00_1118 = 
MAKE_PAIR(BgL_arg1676z00_1119, BgL_rz00_1114); } 
{ 
obj_t BgL_rz00_7765;long BgL_iz00_7764;
BgL_iz00_7764 = BgL_arg1674z00_1117; 
BgL_rz00_7765 = BgL_arg1675z00_1118; 
BgL_rz00_1114 = BgL_rz00_7765; 
BgL_iz00_1113 = BgL_iz00_7764; 
goto BgL_zc3anonymousza31672ze3z83_1115;} } 
{ /* Ieee/pairlist.scm 953 */
bool_t BgL_testz00_7766;
if(
PAIRP(BgL_aux2554z00_3218))
{ /* Ieee/pairlist.scm 953 */
BgL_testz00_7766 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 953 */
BgL_testz00_7766 = 
NULLP(BgL_aux2554z00_3218)
; } 
if(BgL_testz00_7766)
{ /* Ieee/pairlist.scm 953 */
return BgL_aux2554z00_3218;}  else 
{ 
obj_t BgL_auxz00_7770;
BgL_auxz00_7770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35896)), BGl_string3185z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2554z00_3218); 
FAILURE(BgL_auxz00_7770,BFALSE,BFALSE);} } } } } } 
}



/* _list-tabulate */
obj_t BGl__listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2512, obj_t BgL_nz00_2513, obj_t BgL_initzd2proczd2_2514)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 952 */
{ /* Ieee/pairlist.scm 953 */
obj_t BgL_auxz00_7783;int BgL_auxz00_7774;
if(
PROCEDUREP(BgL_initzd2proczd2_2514))
{ /* Ieee/pairlist.scm 953 */
BgL_auxz00_7783 = BgL_initzd2proczd2_2514
; }  else 
{ 
obj_t BgL_auxz00_7786;
BgL_auxz00_7786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35896)), BGl_string3186z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_initzd2proczd2_2514); 
FAILURE(BgL_auxz00_7786,BFALSE,BFALSE);} 
{ /* Ieee/pairlist.scm 953 */
obj_t BgL_auxz00_7775;
if(
INTEGERP(BgL_nz00_2513))
{ /* Ieee/pairlist.scm 953 */
BgL_auxz00_7775 = BgL_nz00_2513
; }  else 
{ 
obj_t BgL_auxz00_7778;
BgL_auxz00_7778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)35896)), BGl_string3186z00zz__r4_pairs_and_lists_6_3z00, BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2513); 
FAILURE(BgL_auxz00_7778,BFALSE,BFALSE);} 
BgL_auxz00_7774 = 
CINT(BgL_auxz00_7775); } 
return 
BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7774, BgL_auxz00_7783);} } 
}



/* list-split */
BGL_EXPORTED_DEF obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_121, int BgL_numz00_122, obj_t BgL_fillz00_123)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 961 */
{ 
obj_t BgL_lz00_1124;long BgL_iz00_1125;obj_t BgL_accz00_1126;obj_t BgL_resz00_1127;
BgL_lz00_1124 = BgL_lz00_121; 
BgL_iz00_1125 = ((long)0); 
BgL_accz00_1126 = BNIL; 
BgL_resz00_1127 = BNIL; 
BgL_zc3anonymousza31677ze3z83_1128:
if(
NULLP(BgL_lz00_1124))
{ /* Ieee/pairlist.scm 968 */
obj_t BgL_arg1680z00_1130;
{ /* Ieee/pairlist.scm 968 */
obj_t BgL_arg1684z00_1131;
{ /* Ieee/pairlist.scm 968 */
bool_t BgL_testz00_7793;
if(
NULLP(BgL_fillz00_123))
{ /* Ieee/pairlist.scm 968 */
BgL_testz00_7793 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 968 */
if(
(BgL_iz00_1125==
(long)(BgL_numz00_122)))
{ /* Ieee/pairlist.scm 968 */
BgL_testz00_7793 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 968 */
BgL_testz00_7793 = 
(BgL_iz00_1125==((long)0))
; } } 
if(BgL_testz00_7793)
{ /* Ieee/pairlist.scm 969 */
obj_t BgL_auxz00_7800;
{ /* Ieee/pairlist.scm 969 */
bool_t BgL_testz00_7801;
if(
PAIRP(BgL_accz00_1126))
{ /* Ieee/pairlist.scm 969 */
BgL_testz00_7801 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 969 */
BgL_testz00_7801 = 
NULLP(BgL_accz00_1126)
; } 
if(BgL_testz00_7801)
{ /* Ieee/pairlist.scm 969 */
BgL_auxz00_7800 = BgL_accz00_1126
; }  else 
{ 
obj_t BgL_auxz00_7805;
BgL_auxz00_7805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36433)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_accz00_1126); 
FAILURE(BgL_auxz00_7805,BFALSE,BFALSE);} } 
BgL_arg1684z00_1131 = 
bgl_reverse_bang(BgL_auxz00_7800); }  else 
{ /* Ieee/pairlist.scm 970 */
obj_t BgL_arg1688z00_1133;obj_t BgL_arg1689z00_1134;
{ /* Ieee/pairlist.scm 970 */
obj_t BgL_auxz00_7810;
{ /* Ieee/pairlist.scm 970 */
bool_t BgL_testz00_7811;
if(
PAIRP(BgL_accz00_1126))
{ /* Ieee/pairlist.scm 970 */
BgL_testz00_7811 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 970 */
BgL_testz00_7811 = 
NULLP(BgL_accz00_1126)
; } 
if(BgL_testz00_7811)
{ /* Ieee/pairlist.scm 970 */
BgL_auxz00_7810 = BgL_accz00_1126
; }  else 
{ 
obj_t BgL_auxz00_7815;
BgL_auxz00_7815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36466)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_accz00_1126); 
FAILURE(BgL_auxz00_7815,BFALSE,BFALSE);} } 
BgL_arg1688z00_1133 = 
bgl_reverse_bang(BgL_auxz00_7810); } 
{ /* Ieee/pairlist.scm 971 */
long BgL_arg1690z00_1135;obj_t BgL_arg1691z00_1136;
BgL_arg1690z00_1135 = 
(
(long)(BgL_numz00_122)-BgL_iz00_1125); 
{ /* Ieee/pairlist.scm 971 */
obj_t BgL_pairz00_2142;
if(
PAIRP(BgL_fillz00_123))
{ /* Ieee/pairlist.scm 971 */
BgL_pairz00_2142 = BgL_fillz00_123; }  else 
{ 
obj_t BgL_auxz00_7824;
BgL_auxz00_7824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36510)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_fillz00_123); 
FAILURE(BgL_auxz00_7824,BFALSE,BFALSE);} 
BgL_arg1691z00_1136 = 
CAR(BgL_pairz00_2142); } 
{ /* Ieee/pairlist.scm 971 */
obj_t BgL_list1692z00_1137;
BgL_list1692z00_1137 = 
MAKE_PAIR(BgL_arg1691z00_1136, BNIL); 
BgL_arg1689z00_1134 = 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
(int)(BgL_arg1690z00_1135), BgL_list1692z00_1137); } } 
BgL_arg1684z00_1131 = 
BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_arg1688z00_1133, BgL_arg1689z00_1134); } } 
BgL_arg1680z00_1130 = 
MAKE_PAIR(BgL_arg1684z00_1131, BgL_resz00_1127); } 
return 
bgl_reverse_bang(BgL_arg1680z00_1130);}  else 
{ /* Ieee/pairlist.scm 967 */
if(
(BgL_iz00_1125==
(long)(BgL_numz00_122)))
{ /* Ieee/pairlist.scm 974 */
obj_t BgL_arg1700z00_1143;
{ /* Ieee/pairlist.scm 974 */
obj_t BgL_arg1701z00_1144;
{ /* Ieee/pairlist.scm 974 */
obj_t BgL_auxz00_7838;
{ /* Ieee/pairlist.scm 974 */
bool_t BgL_testz00_7839;
if(
PAIRP(BgL_accz00_1126))
{ /* Ieee/pairlist.scm 974 */
BgL_testz00_7839 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 974 */
BgL_testz00_7839 = 
NULLP(BgL_accz00_1126)
; } 
if(BgL_testz00_7839)
{ /* Ieee/pairlist.scm 974 */
BgL_auxz00_7838 = BgL_accz00_1126
; }  else 
{ 
obj_t BgL_auxz00_7843;
BgL_auxz00_7843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36579)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_accz00_1126); 
FAILURE(BgL_auxz00_7843,BFALSE,BFALSE);} } 
BgL_arg1701z00_1144 = 
bgl_reverse_bang(BgL_auxz00_7838); } 
BgL_arg1700z00_1143 = 
MAKE_PAIR(BgL_arg1701z00_1144, BgL_resz00_1127); } 
{ 
obj_t BgL_resz00_7851;obj_t BgL_accz00_7850;long BgL_iz00_7849;
BgL_iz00_7849 = ((long)0); 
BgL_accz00_7850 = BNIL; 
BgL_resz00_7851 = BgL_arg1700z00_1143; 
BgL_resz00_1127 = BgL_resz00_7851; 
BgL_accz00_1126 = BgL_accz00_7850; 
BgL_iz00_1125 = BgL_iz00_7849; 
goto BgL_zc3anonymousza31677ze3z83_1128;} }  else 
{ /* Ieee/pairlist.scm 976 */
obj_t BgL_arg1702z00_1145;long BgL_arg1703z00_1146;obj_t BgL_arg1704z00_1147;
{ /* Ieee/pairlist.scm 976 */
obj_t BgL_pairz00_2145;
if(
PAIRP(BgL_lz00_1124))
{ /* Ieee/pairlist.scm 976 */
BgL_pairz00_2145 = BgL_lz00_1124; }  else 
{ 
obj_t BgL_auxz00_7854;
BgL_auxz00_7854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36613)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1124); 
FAILURE(BgL_auxz00_7854,BFALSE,BFALSE);} 
BgL_arg1702z00_1145 = 
CDR(BgL_pairz00_2145); } 
BgL_arg1703z00_1146 = 
(BgL_iz00_1125+((long)1)); 
BgL_arg1704z00_1147 = 
MAKE_PAIR(
CAR(BgL_lz00_1124), BgL_accz00_1126); 
{ 
obj_t BgL_accz00_7864;long BgL_iz00_7863;obj_t BgL_lz00_7862;
BgL_lz00_7862 = BgL_arg1702z00_1145; 
BgL_iz00_7863 = BgL_arg1703z00_1146; 
BgL_accz00_7864 = BgL_arg1704z00_1147; 
BgL_accz00_1126 = BgL_accz00_7864; 
BgL_iz00_1125 = BgL_iz00_7863; 
BgL_lz00_1124 = BgL_lz00_7862; 
goto BgL_zc3anonymousza31677ze3z83_1128;} } } } } 
}



/* _list-split */
obj_t BGl__listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2515, obj_t BgL_lz00_2516, obj_t BgL_numz00_2517, obj_t BgL_fillz00_2518)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 961 */
{ /* Ieee/pairlist.scm 967 */
int BgL_auxz00_7874;obj_t BgL_auxz00_7865;
{ /* Ieee/pairlist.scm 967 */
obj_t BgL_auxz00_7875;
if(
INTEGERP(BgL_numz00_2517))
{ /* Ieee/pairlist.scm 967 */
BgL_auxz00_7875 = BgL_numz00_2517
; }  else 
{ 
obj_t BgL_auxz00_7878;
BgL_auxz00_7878 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36341)), BGl_string3187z00zz__r4_pairs_and_lists_6_3z00, BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_numz00_2517); 
FAILURE(BgL_auxz00_7878,BFALSE,BFALSE);} 
BgL_auxz00_7874 = 
CINT(BgL_auxz00_7875); } 
{ /* Ieee/pairlist.scm 967 */
bool_t BgL_testz00_7866;
if(
PAIRP(BgL_lz00_2516))
{ /* Ieee/pairlist.scm 967 */
BgL_testz00_7866 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 967 */
BgL_testz00_7866 = 
NULLP(BgL_lz00_2516)
; } 
if(BgL_testz00_7866)
{ /* Ieee/pairlist.scm 967 */
BgL_auxz00_7865 = BgL_lz00_2516
; }  else 
{ 
obj_t BgL_auxz00_7870;
BgL_auxz00_7870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)36341)), BGl_string3187z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2516); 
FAILURE(BgL_auxz00_7870,BFALSE,BFALSE);} } 
return 
BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7865, BgL_auxz00_7874, BgL_fillz00_2518);} } 
}



/* list-split! */
BGL_EXPORTED_DEF obj_t BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_124, int BgL_numz00_125, obj_t BgL_fillz00_126)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 981 */
{ 
obj_t BgL_lz00_1152;long BgL_iz00_1153;obj_t BgL_lastz00_1154;obj_t BgL_accz00_1155;obj_t BgL_rowsz00_1156;
BgL_lz00_1152 = BgL_lz00_124; 
BgL_iz00_1153 = ((long)0); 
BgL_lastz00_1154 = BFALSE; 
BgL_accz00_1155 = BgL_lz00_124; 
BgL_rowsz00_1156 = BNIL; 
BgL_zc3anonymousza31706ze3z83_1157:
if(
NULLP(BgL_lz00_1152))
{ /* Ieee/pairlist.scm 989 */
obj_t BgL_lrowz00_1159;
{ /* Ieee/pairlist.scm 989 */
bool_t BgL_testz00_7886;
if(
NULLP(BgL_fillz00_126))
{ /* Ieee/pairlist.scm 989 */
BgL_testz00_7886 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 989 */
if(
(BgL_iz00_1153==
(long)(BgL_numz00_125)))
{ /* Ieee/pairlist.scm 989 */
BgL_testz00_7886 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 989 */
BgL_testz00_7886 = 
(BgL_iz00_1153==((long)0))
; } } 
if(BgL_testz00_7886)
{ /* Ieee/pairlist.scm 989 */
BgL_lrowz00_1159 = BgL_accz00_1155; }  else 
{ /* Ieee/pairlist.scm 989 */
{ /* Ieee/pairlist.scm 993 */
obj_t BgL_arg1710z00_1162;
{ /* Ieee/pairlist.scm 993 */
long BgL_arg1711z00_1163;obj_t BgL_arg1713z00_1164;
BgL_arg1711z00_1163 = 
(
(long)(BgL_numz00_125)-BgL_iz00_1153); 
{ /* Ieee/pairlist.scm 993 */
obj_t BgL_pairz00_2157;
if(
PAIRP(BgL_fillz00_126))
{ /* Ieee/pairlist.scm 993 */
BgL_pairz00_2157 = BgL_fillz00_126; }  else 
{ 
obj_t BgL_auxz00_7897;
BgL_auxz00_7897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37163)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_fillz00_126); 
FAILURE(BgL_auxz00_7897,BFALSE,BFALSE);} 
BgL_arg1713z00_1164 = 
CAR(BgL_pairz00_2157); } 
{ /* Ieee/pairlist.scm 993 */
obj_t BgL_list1714z00_1165;
BgL_list1714z00_1165 = 
MAKE_PAIR(BgL_arg1713z00_1164, BNIL); 
BgL_arg1710z00_1162 = 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
(int)(BgL_arg1711z00_1163), BgL_list1714z00_1165); } } 
{ /* Ieee/pairlist.scm 992 */
obj_t BgL_pairz00_2158;
if(
PAIRP(BgL_lastz00_1154))
{ /* Ieee/pairlist.scm 992 */
BgL_pairz00_2158 = BgL_lastz00_1154; }  else 
{ 
obj_t BgL_auxz00_7907;
BgL_auxz00_7907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37119)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lastz00_1154); 
FAILURE(BgL_auxz00_7907,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2158, BgL_arg1710z00_1162); } } 
BgL_lrowz00_1159 = BgL_accz00_1155; } } 
{ /* Ieee/pairlist.scm 995 */
obj_t BgL_arg1708z00_1160;
BgL_arg1708z00_1160 = 
MAKE_PAIR(BgL_lrowz00_1159, BgL_rowsz00_1156); 
return 
bgl_reverse_bang(BgL_arg1708z00_1160);} }  else 
{ /* Ieee/pairlist.scm 988 */
if(
(BgL_iz00_1153==
(long)(BgL_numz00_125)))
{ /* Ieee/pairlist.scm 996 */
{ /* Ieee/pairlist.scm 997 */
obj_t BgL_pairz00_2162;
if(
PAIRP(BgL_lastz00_1154))
{ /* Ieee/pairlist.scm 997 */
BgL_pairz00_2162 = BgL_lastz00_1154; }  else 
{ 
obj_t BgL_auxz00_7919;
BgL_auxz00_7919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37251)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lastz00_1154); 
FAILURE(BgL_auxz00_7919,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2162, BNIL); } 
{ /* Ieee/pairlist.scm 998 */
obj_t BgL_arg1719z00_1170;
BgL_arg1719z00_1170 = 
MAKE_PAIR(BgL_accz00_1155, BgL_rowsz00_1156); 
{ 
obj_t BgL_rowsz00_7928;obj_t BgL_accz00_7927;obj_t BgL_lastz00_7926;long BgL_iz00_7925;
BgL_iz00_7925 = ((long)0); 
BgL_lastz00_7926 = BgL_lz00_1152; 
BgL_accz00_7927 = BgL_lz00_1152; 
BgL_rowsz00_7928 = BgL_arg1719z00_1170; 
BgL_rowsz00_1156 = BgL_rowsz00_7928; 
BgL_accz00_1155 = BgL_accz00_7927; 
BgL_lastz00_1154 = BgL_lastz00_7926; 
BgL_iz00_1153 = BgL_iz00_7925; 
goto BgL_zc3anonymousza31706ze3z83_1157;} } }  else 
{ /* Ieee/pairlist.scm 1000 */
obj_t BgL_arg1724z00_1171;long BgL_arg1725z00_1172;
{ /* Ieee/pairlist.scm 1000 */
obj_t BgL_pairz00_2164;
if(
PAIRP(BgL_lz00_1152))
{ /* Ieee/pairlist.scm 1000 */
BgL_pairz00_2164 = BgL_lz00_1152; }  else 
{ 
obj_t BgL_auxz00_7931;
BgL_auxz00_7931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37318)), BGl_string2686z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_1152); 
FAILURE(BgL_auxz00_7931,BFALSE,BFALSE);} 
BgL_arg1724z00_1171 = 
CDR(BgL_pairz00_2164); } 
BgL_arg1725z00_1172 = 
(BgL_iz00_1153+((long)1)); 
{ 
obj_t BgL_lastz00_7939;long BgL_iz00_7938;obj_t BgL_lz00_7937;
BgL_lz00_7937 = BgL_arg1724z00_1171; 
BgL_iz00_7938 = BgL_arg1725z00_1172; 
BgL_lastz00_7939 = BgL_lz00_1152; 
BgL_lastz00_1154 = BgL_lastz00_7939; 
BgL_iz00_1153 = BgL_iz00_7938; 
BgL_lz00_1152 = BgL_lz00_7937; 
goto BgL_zc3anonymousza31706ze3z83_1157;} } } } } 
}



/* _list-split! */
obj_t BGl__listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2519, obj_t BgL_lz00_2520, obj_t BgL_numz00_2521, obj_t BgL_fillz00_2522)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 981 */
{ /* Ieee/pairlist.scm 988 */
int BgL_auxz00_7949;obj_t BgL_auxz00_7940;
{ /* Ieee/pairlist.scm 988 */
obj_t BgL_auxz00_7950;
if(
INTEGERP(BgL_numz00_2521))
{ /* Ieee/pairlist.scm 988 */
BgL_auxz00_7950 = BgL_numz00_2521
; }  else 
{ 
obj_t BgL_auxz00_7953;
BgL_auxz00_7953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37011)), BGl_string3188z00zz__r4_pairs_and_lists_6_3z00, BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_numz00_2521); 
FAILURE(BgL_auxz00_7953,BFALSE,BFALSE);} 
BgL_auxz00_7949 = 
CINT(BgL_auxz00_7950); } 
{ /* Ieee/pairlist.scm 988 */
bool_t BgL_testz00_7941;
if(
PAIRP(BgL_lz00_2520))
{ /* Ieee/pairlist.scm 988 */
BgL_testz00_7941 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 988 */
BgL_testz00_7941 = 
NULLP(BgL_lz00_2520)
; } 
if(BgL_testz00_7941)
{ /* Ieee/pairlist.scm 988 */
BgL_auxz00_7940 = BgL_lz00_2520
; }  else 
{ 
obj_t BgL_auxz00_7945;
BgL_auxz00_7945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37011)), BGl_string3188z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2520); 
FAILURE(BgL_auxz00_7945,BFALSE,BFALSE);} } 
return 
BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_7940, BgL_auxz00_7949, BgL_fillz00_2522);} } 
}



/* iota */
BGL_EXPORTED_DEF obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int BgL_countz00_127, obj_t BgL_restz00_128)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1005 */
{ /* Ieee/pairlist.scm 1006 */
obj_t BgL_startz00_1174;obj_t BgL_stepz00_1175;
BgL_startz00_1174 = 
BINT(((long)0)); 
BgL_stepz00_1175 = 
BINT(((long)1)); 
if(
PAIRP(BgL_restz00_128))
{ /* Ieee/pairlist.scm 1008 */
BgL_startz00_1174 = 
CAR(BgL_restz00_128); 
{ /* Ieee/pairlist.scm 1011 */
bool_t BgL_testz00_7964;
{ /* Ieee/pairlist.scm 1011 */
obj_t BgL_auxz00_7965;
BgL_auxz00_7965 = 
CDR(BgL_restz00_128); 
BgL_testz00_7964 = 
PAIRP(BgL_auxz00_7965); } 
if(BgL_testz00_7964)
{ /* Ieee/pairlist.scm 1012 */
obj_t BgL_pairz00_2174;
{ /* Ieee/pairlist.scm 1012 */
obj_t BgL_aux2588z00_3252;
BgL_aux2588z00_3252 = 
CDR(BgL_restz00_128); 
if(
PAIRP(BgL_aux2588z00_3252))
{ /* Ieee/pairlist.scm 1012 */
BgL_pairz00_2174 = BgL_aux2588z00_3252; }  else 
{ 
obj_t BgL_auxz00_7971;
BgL_auxz00_7971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37735)), BGl_string3189z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2588z00_3252); 
FAILURE(BgL_auxz00_7971,BFALSE,BFALSE);} } 
BgL_stepz00_1175 = 
CAR(BgL_pairz00_2174); }  else 
{ /* Ieee/pairlist.scm 1011 */BFALSE; } } }  else 
{ /* Ieee/pairlist.scm 1008 */BFALSE; } 
{ /* Ieee/pairlist.scm 1013 */
obj_t BgL_g1125z00_1179;
{ /* Ieee/pairlist.scm 1013 */
obj_t BgL_arg1735z00_1191;
{ /* Ieee/pairlist.scm 1013 */
long BgL_arg1736z00_1192;
{ /* Ieee/pairlist.scm 1013 */
obj_t BgL_auxz00_7976;
{ /* Ieee/pairlist.scm 1013 */
obj_t BgL_aux2590z00_3254;
BgL_aux2590z00_3254 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(BgL_countz00_127), 
BINT(((long)1))); 
if(
INTEGERP(BgL_aux2590z00_3254))
{ /* Ieee/pairlist.scm 1013 */
BgL_auxz00_7976 = BgL_aux2590z00_3254
; }  else 
{ 
obj_t BgL_auxz00_7982;
BgL_auxz00_7982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37793)), BGl_string3189z00zz__r4_pairs_and_lists_6_3z00, BGl_string2706z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2590z00_3254); 
FAILURE(BgL_auxz00_7982,BFALSE,BFALSE);} } 
BgL_arg1736z00_1192 = 
(long)CINT(BgL_auxz00_7976); } 
BgL_arg1735z00_1191 = 
BGl_2za2za2zz__r4_numbers_6_5z00(
BINT(BgL_arg1736z00_1192), BgL_stepz00_1175); } 
BgL_g1125z00_1179 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_startz00_1174, BgL_arg1735z00_1191); } 
{ 
int BgL_iz00_2176;obj_t BgL_vz00_2177;obj_t BgL_rz00_2178;
{ /* Ieee/pairlist.scm 1013 */
obj_t BgL_aux2592z00_3256;
BgL_iz00_2176 = BgL_countz00_127; 
BgL_vz00_2177 = BgL_g1125z00_1179; 
BgL_rz00_2178 = BNIL; 
BgL_walkz00_2175:
if(
(
(long)(BgL_iz00_2176)<=((long)0)))
{ /* Ieee/pairlist.scm 1013 */
BgL_aux2592z00_3256 = BgL_rz00_2178; }  else 
{ /* Ieee/pairlist.scm 1013 */
long BgL_arg1732z00_2184;obj_t BgL_arg1733z00_2185;obj_t BgL_arg1734z00_2186;
BgL_arg1732z00_2184 = 
(
(long)(BgL_iz00_2176)-((long)1)); 
BgL_arg1733z00_2185 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_vz00_2177, BgL_stepz00_1175); 
BgL_arg1734z00_2186 = 
MAKE_PAIR(BgL_vz00_2177, BgL_rz00_2178); 
{ 
obj_t BgL_rz00_8000;obj_t BgL_vz00_7999;int BgL_iz00_7997;
BgL_iz00_7997 = 
(int)(BgL_arg1732z00_2184); 
BgL_vz00_7999 = BgL_arg1733z00_2185; 
BgL_rz00_8000 = BgL_arg1734z00_2186; 
BgL_rz00_2178 = BgL_rz00_8000; 
BgL_vz00_2177 = BgL_vz00_7999; 
BgL_iz00_2176 = BgL_iz00_7997; 
goto BgL_walkz00_2175;} } 
{ /* Ieee/pairlist.scm 1013 */
bool_t BgL_testz00_8001;
if(
PAIRP(BgL_aux2592z00_3256))
{ /* Ieee/pairlist.scm 1013 */
BgL_testz00_8001 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1013 */
BgL_testz00_8001 = 
NULLP(BgL_aux2592z00_3256)
; } 
if(BgL_testz00_8001)
{ /* Ieee/pairlist.scm 1013 */
return BgL_aux2592z00_3256;}  else 
{ 
obj_t BgL_auxz00_8005;
BgL_auxz00_8005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37757)), BGl_string3189z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2592z00_3256); 
FAILURE(BgL_auxz00_8005,BFALSE,BFALSE);} } } } } } } 
}



/* _iota */
obj_t BGl__iotaz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2523, obj_t BgL_countz00_2524, obj_t BgL_restz00_2525)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1005 */
{ /* Ieee/pairlist.scm 1006 */
int BgL_auxz00_8009;
{ /* Ieee/pairlist.scm 1006 */
obj_t BgL_auxz00_8010;
if(
INTEGERP(BgL_countz00_2524))
{ /* Ieee/pairlist.scm 1006 */
BgL_auxz00_8010 = BgL_countz00_2524
; }  else 
{ 
obj_t BgL_auxz00_8013;
BgL_auxz00_8013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)37601)), BGl_string3190z00zz__r4_pairs_and_lists_6_3z00, BGl_string3178z00zz__r4_pairs_and_lists_6_3z00, BgL_countz00_2524); 
FAILURE(BgL_auxz00_8013,BFALSE,BFALSE);} 
BgL_auxz00_8009 = 
CINT(BgL_auxz00_8010); } 
return 
BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8009, BgL_restz00_2525);} } 
}



/* list-copy */
BGL_EXPORTED_DEF obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_129)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1021 */
if(
PAIRP(BgL_lz00_129))
{ /* Ieee/pairlist.scm 1023 */
obj_t BgL_arg1738z00_1194;obj_t BgL_arg1739z00_1195;
BgL_arg1738z00_1194 = 
CAR(BgL_lz00_129); 
{ /* Ieee/pairlist.scm 1023 */
obj_t BgL_arg1740z00_1196;
BgL_arg1740z00_1196 = 
CDR(BgL_lz00_129); 
{ /* Ieee/pairlist.scm 1023 */
obj_t BgL_auxz00_8023;
{ /* Ieee/pairlist.scm 1023 */
bool_t BgL_testz00_8024;
if(
PAIRP(BgL_arg1740z00_1196))
{ /* Ieee/pairlist.scm 1023 */
BgL_testz00_8024 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1023 */
BgL_testz00_8024 = 
NULLP(BgL_arg1740z00_1196)
; } 
if(BgL_testz00_8024)
{ /* Ieee/pairlist.scm 1023 */
BgL_auxz00_8023 = BgL_arg1740z00_1196
; }  else 
{ 
obj_t BgL_auxz00_8028;
BgL_auxz00_8028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38197)), BGl_string3191z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1740z00_1196); 
FAILURE(BgL_auxz00_8028,BFALSE,BFALSE);} } 
BgL_arg1739z00_1195 = 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8023); } } 
return 
MAKE_PAIR(BgL_arg1738z00_1194, BgL_arg1739z00_1195);}  else 
{ /* Ieee/pairlist.scm 1022 */
return BgL_lz00_129;} } 
}



/* _list-copy */
obj_t BGl__listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2526, obj_t BgL_lz00_2527)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1021 */
{ /* Ieee/pairlist.scm 1022 */
obj_t BgL_auxz00_8034;
{ /* Ieee/pairlist.scm 1022 */
bool_t BgL_testz00_8035;
if(
PAIRP(BgL_lz00_2527))
{ /* Ieee/pairlist.scm 1022 */
BgL_testz00_8035 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1022 */
BgL_testz00_8035 = 
NULLP(BgL_lz00_2527)
; } 
if(BgL_testz00_8035)
{ /* Ieee/pairlist.scm 1022 */
BgL_auxz00_8034 = BgL_lz00_2527
; }  else 
{ 
obj_t BgL_auxz00_8039;
BgL_auxz00_8039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38145)), BGl_string3192z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2527); 
FAILURE(BgL_auxz00_8039,BFALSE,BFALSE);} } 
return 
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8034);} } 
}



/* tree-copy */
BGL_EXPORTED_DEF obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_130)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1029 */
if(
EXTENDED_PAIRP(BgL_lz00_130))
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_arg1742z00_1198;obj_t BgL_arg1743z00_1199;obj_t BgL_arg1744z00_1200;
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_arg1745z00_1201;
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_pairz00_2214;
if(
PAIRP(BgL_lz00_130))
{ /* Ieee/pairlist.scm 1032 */
BgL_pairz00_2214 = BgL_lz00_130; }  else 
{ 
obj_t BgL_auxz00_8048;
BgL_auxz00_8048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38514)), BGl_string3193z00zz__r4_pairs_and_lists_6_3z00, BGl_string2620z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_130); 
FAILURE(BgL_auxz00_8048,BFALSE,BFALSE);} 
BgL_arg1745z00_1201 = 
CAR(BgL_pairz00_2214); } 
BgL_arg1742z00_1198 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1745z00_1201); } 
BgL_arg1743z00_1199 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_130)); 
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_arg1747z00_1203;
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_objz00_2216;
if(
EXTENDED_PAIRP(BgL_lz00_130))
{ /* Ieee/pairlist.scm 1032 */
BgL_objz00_2216 = BgL_lz00_130; }  else 
{ 
obj_t BgL_auxz00_8058;
BgL_auxz00_8058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38554)), BGl_string3193z00zz__r4_pairs_and_lists_6_3z00, BGl_string2623z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_130); 
FAILURE(BgL_auxz00_8058,BFALSE,BFALSE);} 
BgL_arg1747z00_1203 = 
CER(BgL_objz00_2216); } 
BgL_arg1744z00_1200 = 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1747z00_1203); } 
{ /* Ieee/pairlist.scm 1032 */
obj_t BgL_res1877z00_2220;
BgL_res1877z00_2220 = 
MAKE_EXTENDED_PAIR(BgL_arg1742z00_1198, BgL_arg1743z00_1199, BgL_arg1744z00_1200); 
return BgL_res1877z00_2220;} }  else 
{ /* Ieee/pairlist.scm 1031 */
if(
PAIRP(BgL_lz00_130))
{ /* Ieee/pairlist.scm 1033 */
return 
MAKE_PAIR(
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_lz00_130)), 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_lz00_130)));}  else 
{ /* Ieee/pairlist.scm 1033 */
return BgL_lz00_130;} } } 
}



/* _tree-copy */
obj_t BGl__treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2528, obj_t BgL_lz00_2529)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1029 */
return 
BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2529);} 
}



/* _delete-duplicates */
obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_134, obj_t BgL_optz00_133)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1041 */
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_g1201z00_1209;
BgL_g1201z00_1209 = 
VECTOR_REF(BgL_optz00_133,
(int)(((long)0))); 
{ 

{ /* Ieee/pairlist.scm 1041 */
int BgL_aux1203z00_1211;
BgL_aux1203z00_1211 = 
VECTOR_LENGTH(BgL_optz00_133); 
switch( 
(long)(BgL_aux1203z00_1211)) { case ((long)1) : 

{ /* Ieee/pairlist.scm 1041 */

{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_arg1755z00_1214;
BgL_arg1755z00_1214 = 
VECTOR_REF(BgL_optz00_133,
(int)(((long)0))); 
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_res1878z00_2227;
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_lisz00_2224;
{ /* Ieee/pairlist.scm 1041 */
bool_t BgL_testz00_8078;
if(
PAIRP(BgL_arg1755z00_1214))
{ /* Ieee/pairlist.scm 1041 */
BgL_testz00_8078 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1041 */
BgL_testz00_8078 = 
NULLP(BgL_arg1755z00_1214)
; } 
if(BgL_testz00_8078)
{ /* Ieee/pairlist.scm 1041 */
BgL_lisz00_2224 = BgL_arg1755z00_1214; }  else 
{ 
obj_t BgL_auxz00_8082;
BgL_auxz00_8082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38879)), BGl_string3197z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1755z00_1214); 
FAILURE(BgL_auxz00_8082,BFALSE,BFALSE);} } 
BgL_res1878z00_2227 = 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_2224), BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00); } 
return BgL_res1878z00_2227;} } } break;case ((long)2) : 

{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_eqz00_1215;
BgL_eqz00_1215 = 
VECTOR_REF(BgL_optz00_133,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 1041 */

{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_arg1756z00_1216;
BgL_arg1756z00_1216 = 
VECTOR_REF(BgL_optz00_133,
(int)(((long)0))); 
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_res1879z00_2231;
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_lisz00_2228;
{ /* Ieee/pairlist.scm 1041 */
bool_t BgL_testz00_8092;
if(
PAIRP(BgL_arg1756z00_1216))
{ /* Ieee/pairlist.scm 1041 */
BgL_testz00_8092 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1041 */
BgL_testz00_8092 = 
NULLP(BgL_arg1756z00_1216)
; } 
if(BgL_testz00_8092)
{ /* Ieee/pairlist.scm 1041 */
BgL_lisz00_2228 = BgL_arg1756z00_1216; }  else 
{ 
obj_t BgL_auxz00_8096;
BgL_auxz00_8096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)38879)), BGl_string3197z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1756z00_1216); 
FAILURE(BgL_auxz00_8096,BFALSE,BFALSE);} } 
BgL_res1879z00_2231 = 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_2228), BgL_eqz00_1215); } 
return BgL_res1879z00_2231;} } } } break;
default: 
{ /* Ieee/pairlist.scm 1041 */
obj_t BgL_arg1757z00_1217;int BgL_arg1764z00_1219;
BgL_arg1757z00_1217 = BGl_symbol3194z00zz__r4_pairs_and_lists_6_3z00; 
BgL_arg1764z00_1219 = 
VECTOR_LENGTH(BgL_optz00_133); 
return 
BGl_errorz00zz__errorz00(BgL_arg1757z00_1217, BGl_string3196z00zz__r4_pairs_and_lists_6_3z00, 
BINT(BgL_arg1764z00_1219));} } } } } } 
}



/* delete-duplicates */
BGL_EXPORTED_DEF obj_t BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lisz00_131, obj_t BgL_eqz00_132)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1041 */
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(
BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_131), BgL_eqz00_132);} 
}



/* _delete-duplicates! */
obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_138, obj_t BgL_optz00_137)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1047 */
{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_g1204z00_1221;
BgL_g1204z00_1221 = 
VECTOR_REF(BgL_optz00_137,
(int)(((long)0))); 
{ 

{ /* Ieee/pairlist.scm 1047 */
int BgL_aux1206z00_1223;
BgL_aux1206z00_1223 = 
VECTOR_LENGTH(BgL_optz00_137); 
switch( 
(long)(BgL_aux1206z00_1223)) { case ((long)1) : 

{ /* Ieee/pairlist.scm 1047 */

{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_arg1769z00_1226;
BgL_arg1769z00_1226 = 
VECTOR_REF(BgL_optz00_137,
(int)(((long)0))); 
{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_auxz00_8114;
{ /* Ieee/pairlist.scm 1047 */
bool_t BgL_testz00_8115;
if(
PAIRP(BgL_arg1769z00_1226))
{ /* Ieee/pairlist.scm 1047 */
BgL_testz00_8115 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1047 */
BgL_testz00_8115 = 
NULLP(BgL_arg1769z00_1226)
; } 
if(BgL_testz00_8115)
{ /* Ieee/pairlist.scm 1047 */
BgL_auxz00_8114 = BgL_arg1769z00_1226
; }  else 
{ 
obj_t BgL_auxz00_8119;
BgL_auxz00_8119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)39201)), BGl_string3200z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1769z00_1226); 
FAILURE(BgL_auxz00_8119,BFALSE,BFALSE);} } 
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8114, BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} } } break;case ((long)2) : 

{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_eqz00_1227;
BgL_eqz00_1227 = 
VECTOR_REF(BgL_optz00_137,
(int)(((long)1))); 
{ /* Ieee/pairlist.scm 1047 */

{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_arg1770z00_1228;
BgL_arg1770z00_1228 = 
VECTOR_REF(BgL_optz00_137,
(int)(((long)0))); 
{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_auxz00_8128;
{ /* Ieee/pairlist.scm 1047 */
bool_t BgL_testz00_8129;
if(
PAIRP(BgL_arg1770z00_1228))
{ /* Ieee/pairlist.scm 1047 */
BgL_testz00_8129 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1047 */
BgL_testz00_8129 = 
NULLP(BgL_arg1770z00_1228)
; } 
if(BgL_testz00_8129)
{ /* Ieee/pairlist.scm 1047 */
BgL_auxz00_8128 = BgL_arg1770z00_1228
; }  else 
{ 
obj_t BgL_auxz00_8133;
BgL_auxz00_8133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)39201)), BGl_string3200z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_arg1770z00_1228); 
FAILURE(BgL_auxz00_8133,BFALSE,BFALSE);} } 
return 
BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_8128, BgL_eqz00_1227);} } } } break;
default: 
{ /* Ieee/pairlist.scm 1047 */
obj_t BgL_arg1771z00_1229;int BgL_arg1775z00_1231;
BgL_arg1771z00_1229 = BGl_symbol3198z00zz__r4_pairs_and_lists_6_3z00; 
BgL_arg1775z00_1231 = 
VECTOR_LENGTH(BgL_optz00_137); 
return 
BGl_errorz00zz__errorz00(BgL_arg1771z00_1229, BGl_string3196z00zz__r4_pairs_and_lists_6_3z00, 
BINT(BgL_arg1775z00_1231));} } } } } } 
}



/* delete-duplicates! */
BGL_EXPORTED_DEF obj_t BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lisz00_135, obj_t BgL_eqz00_136)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1047 */
if(
PROCEDUREP(BgL_eqz00_136))
{ /* Ieee/pairlist.scm 1048 */BFALSE; }  else 
{ /* Ieee/pairlist.scm 1048 */
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol3198z00zz__r4_pairs_and_lists_6_3z00, BGl_string2730z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_136); } 
{ /* Ieee/pairlist.scm 1050 */
obj_t BgL_aux2614z00_3278;
BgL_aux2614z00_3278 = 
BGl_recurz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_136, BgL_lisz00_135); 
{ /* Ieee/pairlist.scm 1050 */
bool_t BgL_testz00_8147;
if(
PAIRP(BgL_aux2614z00_3278))
{ /* Ieee/pairlist.scm 1050 */
BgL_testz00_8147 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1050 */
BgL_testz00_8147 = 
NULLP(BgL_aux2614z00_3278)
; } 
if(BgL_testz00_8147)
{ /* Ieee/pairlist.scm 1050 */
return BgL_aux2614z00_3278;}  else 
{ 
obj_t BgL_auxz00_8151;
BgL_auxz00_8151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)39349)), BGl_string3199z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_aux2614z00_3278); 
FAILURE(BgL_auxz00_8151,BFALSE,BFALSE);} } } } 
}



/* recur */
obj_t BGl_recurz00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2530, obj_t BgL_lisz00_1234)
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 1050 */
if(
PAIRP(BgL_lisz00_1234))
{ /* Ieee/pairlist.scm 1052 */
obj_t BgL_xz00_1237;
BgL_xz00_1237 = 
CAR(BgL_lisz00_1234); 
{ /* Ieee/pairlist.scm 1052 */
obj_t BgL_tailz00_1238;
BgL_tailz00_1238 = 
CDR(BgL_lisz00_1234); 
{ /* Ieee/pairlist.scm 1053 */
obj_t BgL_newzd2tailzd2_1239;
{ /* Ieee/pairlist.scm 1054 */
obj_t BgL_arg1782z00_1241;
{ /* Ieee/pairlist.scm 1054 */
obj_t BgL_auxz00_8159;
{ /* Ieee/pairlist.scm 1054 */
bool_t BgL_testz00_8160;
if(
PAIRP(BgL_tailz00_1238))
{ /* Ieee/pairlist.scm 1054 */
BgL_testz00_8160 = ((bool_t)1)
; }  else 
{ /* Ieee/pairlist.scm 1054 */
BgL_testz00_8160 = 
NULLP(BgL_tailz00_1238)
; } 
if(BgL_testz00_8160)
{ /* Ieee/pairlist.scm 1054 */
BgL_auxz00_8159 = BgL_tailz00_1238
; }  else 
{ 
obj_t BgL_auxz00_8164;
BgL_auxz00_8164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2618z00zz__r4_pairs_and_lists_6_3z00, 
BINT(((long)39469)), BGl_string3201z00zz__r4_pairs_and_lists_6_3z00, BGl_string2684z00zz__r4_pairs_and_lists_6_3z00, BgL_tailz00_1238); 
FAILURE(BgL_auxz00_8164,BFALSE,BFALSE);} } 
BgL_arg1782z00_1241 = 
BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1237, BgL_auxz00_8159, BgL_eqz00_2530); } 
BgL_newzd2tailzd2_1239 = 
BGl_recurz00zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2530, BgL_arg1782z00_1241); } 
{ /* Ieee/pairlist.scm 1054 */

if(
(BgL_tailz00_1238==BgL_newzd2tailzd2_1239))
{ /* Ieee/pairlist.scm 1055 */
return BgL_lisz00_1234;}  else 
{ /* Ieee/pairlist.scm 1055 */
return 
MAKE_PAIR(BgL_xz00_1237, BgL_newzd2tailzd2_1239);} } } } }  else 
{ /* Ieee/pairlist.scm 1051 */
return BgL_lisz00_1234;} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00()
{ AN_OBJECT;
{ /* Ieee/pairlist.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3202z00zz__r4_pairs_and_lists_6_3z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3202z00zz__r4_pairs_and_lists_6_3z00));} 
}

#ifdef __cplusplus
}
#endif
