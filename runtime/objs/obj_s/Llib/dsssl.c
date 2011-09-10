/*===========================================================================*/
/*   (Llib/dsssl.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/dsssl.scm -indent -o objs/obj_s/Llib/dsssl.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_list2875z00zz__dssslz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list2885z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2897z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2899z00zz__dssslz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
static obj_t BGl_list2941z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2949z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_restzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2952z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2954z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2957z00zz__dssslz00 = BUNSPEC;
extern obj_t string_to_symbol(char *);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t, obj_t);
static obj_t BGl_keyzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__dssslz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__dssslz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t, obj_t);
static obj_t BGl_nozd2restzd2keyzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_onezd2keyzd2argz00zz__dssslz00(bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_loopz00zz__dssslz00(obj_t, obj_t, obj_t, bool_t);
extern obj_t bgl_reverse_bang(obj_t);
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_optionalzd2statez72za0zz__dssslz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__dssslz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00();
static obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_restzd2keyzd2argz00zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
static obj_t BGl_symbol2866z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2868z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2870z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2872z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2876z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2878z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2880z00zz__dssslz00 = BUNSPEC;
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_symbol2882z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2886z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2900z00zz__dssslz00 = BUNSPEC;
static obj_t BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2902z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2904z00zz__dssslz00 = BUNSPEC;
extern obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_symbol2909z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2911z00zz__dssslz00 = BUNSPEC;
static obj_t BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2923z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2925z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2927z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2929z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_optionalzd2statezd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2931z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2933z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_symbol2935z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__dssslz00();
BGL_EXPORTED_DECL obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2862z00zz__dssslz00 = BUNSPEC;
static obj_t BGl_list2865z00zz__dssslz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2formalszd2ze3schemezd2formalszd2envze3zz__dssslz00, BgL_bgl__dssslza7d2formals2965za7, BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2checkzd2keyzd2argsz12zd2envz12zz__dssslz00, BgL_bgl__dssslza7d2checkza7d2966z00, BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2namedzd2constantzf3zd2envz21zz__dssslz00, BgL_bgl__dssslza7d2namedza7d2967z00, BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2getzd2keyzd2argzd2envz00zz__dssslz00, BgL_bgl__dssslza7d2getza7d2k2968z00, BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2dssslzd2functionzd2preludezd2envz00zz__dssslz00, BgL_bgl__makeza7d2dssslza7d22969z00, BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string2863z00zz__dssslz00, BgL_bgl_string2863za700za7za7_2970za7, "Illegal formal list", 19 );
DEFINE_STRING( BGl_string2864z00zz__dssslz00, BgL_bgl_string2864za700za7za7_2971za7, "scheme-state:Wrong number of arguments", 38 );
DEFINE_STRING( BGl_string2867z00zz__dssslz00, BgL_bgl_string2867za700za7za7_2972za7, "funcall", 7 );
DEFINE_STRING( BGl_string2869z00zz__dssslz00, BgL_bgl_string2869za700za7za7_2973za7, "err", 3 );
DEFINE_STRING( BGl_string2871z00zz__dssslz00, BgL_bgl_string2871za700za7za7_2974za7, "where", 5 );
DEFINE_STRING( BGl_string2873z00zz__dssslz00, BgL_bgl_string2873za700za7za7_2975za7, "formals", 7 );
DEFINE_STRING( BGl_string2874z00zz__dssslz00, BgL_bgl_string2874za700za7za7_2976za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2877z00zz__dssslz00, BgL_bgl_string2877za700za7za7_2977za7, "next-state", 10 );
DEFINE_STRING( BGl_string2879z00zz__dssslz00, BgL_bgl_string2879za700za7za7_2978za7, "args", 4 );
DEFINE_STRING( BGl_string2881z00zz__dssslz00, BgL_bgl_string2881za700za7za7_2979za7, "dsssl", 5 );
DEFINE_STRING( BGl_string2883z00zz__dssslz00, BgL_bgl_string2883za700za7za7_2980za7, "let", 3 );
DEFINE_STRING( BGl_string2884z00zz__dssslz00, BgL_bgl_string2884za700za7za7_2981za7, "TAG-1389:Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string2887z00zz__dssslz00, BgL_bgl_string2887za700za7za7_2982za7, "dsssl-arg", 9 );
DEFINE_STRING( BGl_string2888z00zz__dssslz00, BgL_bgl_string2888za700za7za7_2983za7, "/tmp/bigloo/runtime/Llib/dsssl.scm", 34 );
DEFINE_STRING( BGl_string2890z00zz__dssslz00, BgL_bgl_string2890za700za7za7_2984za7, "pair", 4 );
DEFINE_STRING( BGl_string2889z00zz__dssslz00, BgL_bgl_string2889za700za7za7_2985za7, "TAG-1390", 8 );
DEFINE_STRING( BGl_string2901z00zz__dssslz00, BgL_bgl_string2901za700za7za7_2986za7, "dsssl-get-key-rest-arg", 22 );
DEFINE_STRING( BGl_string2891z00zz__dssslz00, BgL_bgl_string2891za700za7za7_2987za7, "TAG-1390:Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string2892z00zz__dssslz00, BgL_bgl_string2892za700za7za7_2988za7, "_make-dsssl-function-prelude", 28 );
DEFINE_STRING( BGl_string2903z00zz__dssslz00, BgL_bgl_string2903za700za7za7_2989za7, "quote", 5 );
DEFINE_STRING( BGl_string2893z00zz__dssslz00, BgL_bgl_string2893za700za7za7_2990za7, "procedure", 9 );
DEFINE_STRING( BGl_string2894z00zz__dssslz00, BgL_bgl_string2894za700za7za7_2991za7, "key-state", 9 );
DEFINE_STRING( BGl_string2905z00zz__dssslz00, BgL_bgl_string2905za700za7za7_2992za7, "dsssl-get-key-arg", 17 );
DEFINE_STRING( BGl_string2895z00zz__dssslz00, BgL_bgl_string2895za700za7za7_2993za7, "Illegal DSSSL formal list (#!rest)", 34 );
DEFINE_STRING( BGl_string2906z00zz__dssslz00, BgL_bgl_string2906za700za7za7_2994za7, "one-key-arg", 11 );
DEFINE_STRING( BGl_string2896z00zz__dssslz00, BgL_bgl_string2896za700za7za7_2995za7, "key-state:Wrong number of arguments", 35 );
DEFINE_STRING( BGl_string2907z00zz__dssslz00, BgL_bgl_string2907za700za7za7_2996za7, "loop", 4 );
DEFINE_STRING( BGl_string2908z00zz__dssslz00, BgL_bgl_string2908za700za7za7_2997za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2898z00zz__dssslz00, BgL_bgl_string2898za700za7za7_2998za7, "Illegal DSSSL formal list (#!key)", 33 );
DEFINE_STRING( BGl_string2910z00zz__dssslz00, BgL_bgl_string2910za700za7za7_2999za7, "begin", 5 );
DEFINE_STRING( BGl_string2912z00zz__dssslz00, BgL_bgl_string2912za700za7za7_3000za7, "dsssl-check-key-args!", 21 );
DEFINE_STRING( BGl_string2913z00zz__dssslz00, BgL_bgl_string2913za700za7za7_3001za7, "<anonymous:2143>", 16 );
DEFINE_STRING( BGl_string2914z00zz__dssslz00, BgL_bgl_string2914za700za7za7_3002za7, "symbol", 6 );
DEFINE_STRING( BGl_string2915z00zz__dssslz00, BgL_bgl_string2915za700za7za7_3003za7, "dsssl formal parsing", 20 );
DEFINE_STRING( BGl_string2916z00zz__dssslz00, BgL_bgl_string2916za700za7za7_3004za7, "Illegal #!keys parameters", 25 );
DEFINE_STRING( BGl_string2917z00zz__dssslz00, BgL_bgl_string2917za700za7za7_3005za7, "map", 3 );
DEFINE_STRING( BGl_string2918z00zz__dssslz00, BgL_bgl_string2918za700za7za7_3006za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string2920z00zz__dssslz00, BgL_bgl_string2920za700za7za7_3007za7, "exit-rest-state:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2919z00zz__dssslz00, BgL_bgl_string2919za700za7za7_3008za7, "exit-rest-state", 15 );
DEFINE_STRING( BGl_string2921z00zz__dssslz00, BgL_bgl_string2921za700za7za7_3009za7, "rest-state", 10 );
DEFINE_STRING( BGl_string2922z00zz__dssslz00, BgL_bgl_string2922za700za7za7_3010za7, "rest-state:Wrong number of arguments", 36 );
DEFINE_STRING( BGl_string2924z00zz__dssslz00, BgL_bgl_string2924za700za7za7_3011za7, "tmp", 3 );
DEFINE_STRING( BGl_string2926z00zz__dssslz00, BgL_bgl_string2926za700za7za7_3012za7, "if", 2 );
DEFINE_STRING( BGl_string2928z00zz__dssslz00, BgL_bgl_string2928za700za7za7_3013za7, "null?", 5 );
DEFINE_STRING( BGl_string2930z00zz__dssslz00, BgL_bgl_string2930za700za7za7_3014za7, "memq", 4 );
DEFINE_STRING( BGl_string2932z00zz__dssslz00, BgL_bgl_string2932za700za7za7_3015za7, "car", 3 );
DEFINE_STRING( BGl_string2934z00zz__dssslz00, BgL_bgl_string2934za700za7za7_3016za7, "set!", 4 );
DEFINE_STRING( BGl_string2936z00zz__dssslz00, BgL_bgl_string2936za700za7za7_3017za7, "cdr", 3 );
DEFINE_STRING( BGl_string2937z00zz__dssslz00, BgL_bgl_string2937za700za7za7_3018za7, "one-optional-arg", 16 );
DEFINE_STRING( BGl_string2938z00zz__dssslz00, BgL_bgl_string2938za700za7za7_3019za7, "optional-state'", 15 );
DEFINE_STRING( BGl_string2940z00zz__dssslz00, BgL_bgl_string2940za700za7za7_3020za7, "optional-state':Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2939z00zz__dssslz00, BgL_bgl_string2939za700za7za7_3021za7, "Illegal DSSSL formal list (#!optional)", 38 );
DEFINE_STRING( BGl_string2942z00zz__dssslz00, BgL_bgl_string2942za700za7za7_3022za7, "Unexpected #!keys parameters", 28 );
DEFINE_STRING( BGl_string2943z00zz__dssslz00, BgL_bgl_string2943za700za7za7_3023za7, "keyword argument misses value", 29 );
DEFINE_STRING( BGl_string2944z00zz__dssslz00, BgL_bgl_string2944za700za7za7_3024za7, "_dsssl-get-key-arg", 18 );
DEFINE_STRING( BGl_string2945z00zz__dssslz00, BgL_bgl_string2945za700za7za7_3025za7, "keyword", 7 );
DEFINE_STRING( BGl_string2946z00zz__dssslz00, BgL_bgl_string2946za700za7za7_3026za7, "_dsssl-get-key-rest-arg", 23 );
DEFINE_STRING( BGl_string2947z00zz__dssslz00, BgL_bgl_string2947za700za7za7_3027za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2948z00zz__dssslz00, BgL_bgl_string2948za700za7za7_3028za7, "dsssl-defaulted-formal?", 23 );
DEFINE_STRING( BGl_string2950z00zz__dssslz00, BgL_bgl_string2950za700za7za7_3029za7, "Illegal formal parameter", 24 );
DEFINE_STRING( BGl_string2951z00zz__dssslz00, BgL_bgl_string2951za700za7za7_3030za7, "symbol or named constant expected", 33 );
DEFINE_STRING( BGl_string2953z00zz__dssslz00, BgL_bgl_string2953za700za7za7_3031za7, "symbol expected", 15 );
DEFINE_STRING( BGl_string2955z00zz__dssslz00, BgL_bgl_string2955za700za7za7_3032za7, "Can't use both DSSSL named constant", 35 );
DEFINE_STRING( BGl_string2956z00zz__dssslz00, BgL_bgl_string2956za700za7za7_3033za7, "and `.' notation", 16 );
DEFINE_STRING( BGl_string2958z00zz__dssslz00, BgL_bgl_string2958za700za7za7_3034za7, "_dsssl-formals->scheme-formals", 30 );
DEFINE_STRING( BGl_string2959z00zz__dssslz00, BgL_bgl_string2959za700za7za7_3035za7, "__dsssl", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dssslzd2getzd2keyzd2restzd2argzd2envzd2zz__dssslz00, BgL_bgl__dssslza7d2getza7d2k3036z00, BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long BgL_checksumz00_2614, char * BgL_fromz00_2615)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__dssslz00))
{ 
BGl_requirezd2initializa7ationz75zz__dssslz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__dssslz00(); 
BGl_importedzd2moduleszd2initz00zz__dssslz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__dssslz00()
{ AN_OBJECT;
{ /* Llib/dsssl.scm 14 */
BGl_list2862z00zz__dssslz00 = 
MAKE_PAIR(BCNST(259), 
MAKE_PAIR(BCNST(258), 
MAKE_PAIR(BCNST(262), BNIL))); 
BGl_symbol2866z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2867z00zz__dssslz00); 
BGl_symbol2868z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2869z00zz__dssslz00); 
BGl_symbol2870z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2871z00zz__dssslz00); 
BGl_symbol2872z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2873z00zz__dssslz00); 
BGl_list2865z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2870z00zz__dssslz00, 
MAKE_PAIR(BGl_string2863z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
BGl_symbol2876z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2877z00zz__dssslz00); 
BGl_symbol2878z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2879z00zz__dssslz00); 
BGl_list2875z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2876z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2876z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2878z00zz__dssslz00, 
MAKE_PAIR(BUNSPEC, BNIL))))); 
BGl_symbol2880z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2881z00zz__dssslz00); 
BGl_symbol2882z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2883z00zz__dssslz00); 
BGl_symbol2886z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2887z00zz__dssslz00); 
BGl_list2885z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2876z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2876z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2878z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2886z00zz__dssslz00, BNIL))))); 
BGl_list2897z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2870z00zz__dssslz00, 
MAKE_PAIR(BGl_string2895z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
BGl_list2899z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2870z00zz__dssslz00, 
MAKE_PAIR(BGl_string2898z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
BGl_symbol2900z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2901z00zz__dssslz00); 
BGl_symbol2902z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2903z00zz__dssslz00); 
BGl_symbol2904z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2905z00zz__dssslz00); 
BGl_symbol2909z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2910z00zz__dssslz00); 
BGl_symbol2911z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2912z00zz__dssslz00); 
BGl_symbol2923z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2924z00zz__dssslz00); 
BGl_symbol2925z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2926z00zz__dssslz00); 
BGl_symbol2927z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2928z00zz__dssslz00); 
BGl_symbol2929z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2930z00zz__dssslz00); 
BGl_symbol2931z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2932z00zz__dssslz00); 
BGl_symbol2933z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2934z00zz__dssslz00); 
BGl_symbol2935z00zz__dssslz00 = 
bstring_to_symbol(BGl_string2936z00zz__dssslz00); 
BGl_list2941z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2870z00zz__dssslz00, 
MAKE_PAIR(BGl_string2939z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
BGl_list2949z00zz__dssslz00 = 
MAKE_PAIR(BCNST(258), 
MAKE_PAIR(BCNST(259), 
MAKE_PAIR(BCNST(262), BNIL))); 
BGl_list2952z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_string2950z00zz__dssslz00, 
MAKE_PAIR(BGl_string2951z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
BGl_list2954z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_string2950z00zz__dssslz00, 
MAKE_PAIR(BGl_string2953z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))); 
return ( 
BGl_list2957z00zz__dssslz00 = 
MAKE_PAIR(BGl_symbol2866z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2868z00zz__dssslz00, 
MAKE_PAIR(BGl_string2955z00zz__dssslz00, 
MAKE_PAIR(BGl_string2956z00zz__dssslz00, 
MAKE_PAIR(BGl_symbol2872z00zz__dssslz00, BNIL)))))), BUNSPEC) ;} 
}



/* dsssl-named-constant? */
BGL_EXPORTED_DEF bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 56 */
if(
CNSTP(BgL_objz00_1))
{ /* Llib/dsssl.scm 57 */
return 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1, BGl_list2862z00zz__dssslz00));}  else 
{ /* Llib/dsssl.scm 57 */
return ((bool_t)0);} } 
}



/* _dsssl-named-constant? */
obj_t BGl__dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t BgL_envz00_2260, obj_t BgL_objz00_2261)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 56 */
return 
BBOOL(
BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_2261));} 
}



/* make-dsssl-function-prelude */
BGL_EXPORTED_DEF obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t BgL_wherez00_2, obj_t BgL_formalsz00_3, obj_t BgL_bodyz00_4, obj_t BgL_errz00_5)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 69 */
{ /* Llib/dsssl.scm 73 */
obj_t BgL_nozd2restzd2keyzd2statezd2_2265;obj_t BgL_restzd2statezd2_2266;obj_t BgL_optionalzd2statezd2_2267;
BgL_nozd2restzd2keyzd2statezd2_2265 = 
make_fx_procedure(BGl_nozd2restzd2keyzd2statezd2zz__dssslz00, 
(int)(((long)2)), 
(int)(((long)4))); 
BgL_restzd2statezd2_2266 = 
make_fx_procedure(BGl_restzd2statezd2zz__dssslz00, 
(int)(((long)2)), 
(int)(((long)4))); 
BgL_optionalzd2statezd2_2267 = 
make_fx_procedure(BGl_optionalzd2statezd2zz__dssslz00, 
(int)(((long)2)), 
(int)(((long)6))); 
PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2265, 
(int)(((long)0)), BgL_errz00_5); 
PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2265, 
(int)(((long)1)), BgL_wherez00_2); 
PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2265, 
(int)(((long)2)), BgL_formalsz00_3); 
PROCEDURE_SET(BgL_nozd2restzd2keyzd2statezd2_2265, 
(int)(((long)3)), BgL_bodyz00_4); 
PROCEDURE_SET(BgL_restzd2statezd2_2266, 
(int)(((long)0)), BgL_errz00_5); 
PROCEDURE_SET(BgL_restzd2statezd2_2266, 
(int)(((long)1)), BgL_wherez00_2); 
PROCEDURE_SET(BgL_restzd2statezd2_2266, 
(int)(((long)2)), BgL_formalsz00_3); 
PROCEDURE_SET(BgL_restzd2statezd2_2266, 
(int)(((long)3)), BgL_bodyz00_4); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)0)), BgL_errz00_5); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)1)), BgL_wherez00_2); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)2)), BgL_formalsz00_3); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)3)), BgL_restzd2statezd2_2266); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)4)), BgL_nozd2restzd2keyzd2statezd2_2265); 
PROCEDURE_SET(BgL_optionalzd2statezd2_2267, 
(int)(((long)5)), BgL_bodyz00_4); 
{ 
obj_t BgL_argsz00_769;obj_t BgL_nextzd2statezd2_770;obj_t BgL_argsz00_752;
BgL_argsz00_752 = BgL_formalsz00_3; 
BgL_zc3anonymousza31897ze3z83_753:
if(
PAIRP(BgL_argsz00_752))
{ /* Llib/dsssl.scm 75 */
bool_t BgL_testz00_2745;
{ /* Llib/dsssl.scm 75 */
bool_t BgL_testz00_2746;
{ /* Llib/dsssl.scm 75 */
obj_t BgL_auxz00_2747;
BgL_auxz00_2747 = 
CAR(BgL_argsz00_752); 
BgL_testz00_2746 = 
SYMBOLP(BgL_auxz00_2747); } 
if(BgL_testz00_2746)
{ /* Llib/dsssl.scm 75 */
BgL_testz00_2745 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 75 */
bool_t BgL_testz00_2750;
{ /* Llib/dsssl.scm 75 */
obj_t BgL_auxz00_2751;
BgL_auxz00_2751 = 
CAR(BgL_argsz00_752); 
BgL_testz00_2750 = 
PAIRP(BgL_auxz00_2751); } 
if(BgL_testz00_2750)
{ /* Llib/dsssl.scm 75 */
BgL_testz00_2745 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 75 */
BgL_testz00_2745 = ((bool_t)1)
; } } } 
if(BgL_testz00_2745)
{ /* Llib/dsssl.scm 77 */
long BgL_aux1827z00_757;
{ /* Llib/dsssl.scm 77 */
obj_t BgL_aux1825z00_762;
BgL_aux1825z00_762 = 
CAR(BgL_argsz00_752); 
if(
CNSTP(BgL_aux1825z00_762))
{ /* Llib/dsssl.scm 77 */
BgL_aux1827z00_757 = 
CCNST(BgL_aux1825z00_762); }  else 
{ /* Llib/dsssl.scm 77 */
BgL_aux1827z00_757 = ((long)-1); } } 
switch( BgL_aux1827z00_757) { case ((long)258) : 

BgL_argsz00_769 = 
CDR(BgL_argsz00_752); 
BgL_nextzd2statezd2_770 = BgL_optionalzd2statezd2_2267; 
BgL_zc3anonymousza31910ze3z83_771:
{ 
obj_t BgL_asz00_773;
BgL_asz00_773 = BgL_argsz00_769; 
BgL_zc3anonymousza31911ze3z83_774:
if(
NULLP(BgL_asz00_773))
{ /* Llib/dsssl.scm 93 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_nextzd2statezd2_770, ((long)2)))
{ /* Llib/dsssl.scm 94 */
return 
PROCEDURE_ENTRY(BgL_nextzd2statezd2_770)(BgL_nextzd2statezd2_770, BgL_argsz00_769, BUNSPEC, BEOA);}  else 
{ /* Llib/dsssl.scm 94 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2875z00zz__dssslz00,BgL_nextzd2statezd2_770);} }  else 
{ /* Llib/dsssl.scm 93 */
if(
PAIRP(BgL_asz00_773))
{ /* Llib/dsssl.scm 97 */
bool_t BgL_testz00_2767;
{ /* Llib/dsssl.scm 97 */
bool_t BgL_testz00_2768;
{ /* Llib/dsssl.scm 97 */
obj_t BgL_auxz00_2769;
BgL_auxz00_2769 = 
CAR(BgL_asz00_773); 
BgL_testz00_2768 = 
SYMBOLP(BgL_auxz00_2769); } 
if(BgL_testz00_2768)
{ /* Llib/dsssl.scm 97 */
BgL_testz00_2767 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 97 */
bool_t BgL_testz00_2772;
{ /* Llib/dsssl.scm 97 */
obj_t BgL_auxz00_2773;
BgL_auxz00_2773 = 
CAR(BgL_asz00_773); 
BgL_testz00_2772 = 
PAIRP(BgL_auxz00_2773); } 
if(BgL_testz00_2772)
{ /* Llib/dsssl.scm 97 */
BgL_testz00_2767 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 97 */
BgL_testz00_2767 = ((bool_t)1)
; } } } 
if(BgL_testz00_2767)
{ 
obj_t BgL_asz00_2776;
BgL_asz00_2776 = 
CDR(BgL_asz00_773); 
BgL_asz00_773 = BgL_asz00_2776; 
goto BgL_zc3anonymousza31911ze3z83_774;}  else 
{ 

{ /* Llib/dsssl.scm 100 */
obj_t BgL_ezd21391zd2_781;
BgL_ezd21391zd2_781 = 
CAR(BgL_asz00_773); 
if(
SYMBOLP(BgL_ezd21391zd2_781))
{ /* Llib/dsssl.scm 100 */
{ /* Llib/dsssl.scm 102 */
obj_t BgL_dssslzd2argzd2_790;
BgL_dssslzd2argzd2_790 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2880z00zz__dssslz00); 
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1923z00_791;obj_t BgL_arg1924z00_792;
BgL_arg1923z00_791 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1925z00_793;obj_t BgL_arg1926z00_794;
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1930z00_798;
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1932z00_800;
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1935z00_801;
BgL_arg1935z00_801 = 
CAR(BgL_asz00_773); 
{ /* Llib/dsssl.scm 103 */
obj_t BgL_list1938z00_803;
BgL_list1938z00_803 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg1932z00_800 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1935z00_801, BgL_list1938z00_803); } } 
BgL_arg1930z00_798 = 
MAKE_PAIR(BgL_dssslzd2argzd2_790, BgL_arg1932z00_800); } 
BgL_arg1925z00_793 = 
MAKE_PAIR(BgL_arg1930z00_798, BNIL); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_nextzd2statezd2_770, ((long)2)))
{ /* Llib/dsssl.scm 104 */
BgL_arg1926z00_794 = 
PROCEDURE_ENTRY(BgL_nextzd2statezd2_770)(BgL_nextzd2statezd2_770, BgL_argsz00_769, BgL_dssslzd2argzd2_790, BEOA); }  else 
{ /* Llib/dsssl.scm 104 */
FAILURE(BGl_string2884z00zz__dssslz00,BGl_list2885z00zz__dssslz00,BgL_nextzd2statezd2_770);} 
{ /* Llib/dsssl.scm 103 */
obj_t BgL_list1928z00_796;
{ /* Llib/dsssl.scm 103 */
obj_t BgL_arg1929z00_797;
BgL_arg1929z00_797 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list1928z00_796 = 
MAKE_PAIR(BgL_arg1926z00_794, BgL_arg1929z00_797); } 
BgL_arg1924z00_792 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1925z00_793, BgL_list1928z00_796); } } 
return 
MAKE_PAIR(BgL_arg1923z00_791, BgL_arg1924z00_792);} } }  else 
{ /* Llib/dsssl.scm 100 */
if(
PAIRP(BgL_ezd21391zd2_781))
{ /* Llib/dsssl.scm 100 */
obj_t BgL_cdrzd21393zd2_784;
BgL_cdrzd21393zd2_784 = 
CDR(BgL_ezd21391zd2_781); 
{ /* Llib/dsssl.scm 100 */
bool_t BgL_testz00_2799;
{ /* Llib/dsssl.scm 100 */
obj_t BgL_auxz00_2800;
BgL_auxz00_2800 = 
CAR(BgL_ezd21391zd2_781); 
BgL_testz00_2799 = 
SYMBOLP(BgL_auxz00_2800); } 
if(BgL_testz00_2799)
{ /* Llib/dsssl.scm 100 */
if(
PAIRP(BgL_cdrzd21393zd2_784))
{ /* Llib/dsssl.scm 100 */
if(
NULLP(
CDR(BgL_cdrzd21393zd2_784)))
{ /* Llib/dsssl.scm 100 */
{ /* Llib/dsssl.scm 106 */
obj_t BgL_dssslzd2argzd2_804;
BgL_dssslzd2argzd2_804 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2880z00zz__dssslz00); 
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1940z00_805;obj_t BgL_arg1941z00_806;
BgL_arg1940z00_805 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1942z00_807;obj_t BgL_arg1943z00_808;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1948z00_812;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1950z00_814;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1951z00_815;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_pairz00_1814;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_aux2646z00_2347;
BgL_aux2646z00_2347 = 
CAR(BgL_asz00_773); 
if(
PAIRP(BgL_aux2646z00_2347))
{ /* Llib/dsssl.scm 107 */
BgL_pairz00_1814 = BgL_aux2646z00_2347; }  else 
{ 
obj_t BgL_auxz00_2812;
BgL_auxz00_2812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4162)), BGl_string2889z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2646z00_2347); 
FAILURE(BgL_auxz00_2812,BFALSE,BFALSE);} } 
BgL_arg1951z00_815 = 
CAR(BgL_pairz00_1814); } 
{ /* Llib/dsssl.scm 107 */
obj_t BgL_list1953z00_817;
BgL_list1953z00_817 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg1950z00_814 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1951z00_815, BgL_list1953z00_817); } } 
BgL_arg1948z00_812 = 
MAKE_PAIR(BgL_dssslzd2argzd2_804, BgL_arg1950z00_814); } 
BgL_arg1942z00_807 = 
MAKE_PAIR(BgL_arg1948z00_812, BNIL); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_nextzd2statezd2_770, ((long)2)))
{ /* Llib/dsssl.scm 108 */
BgL_arg1943z00_808 = 
PROCEDURE_ENTRY(BgL_nextzd2statezd2_770)(BgL_nextzd2statezd2_770, BgL_argsz00_769, BgL_dssslzd2argzd2_804, BEOA); }  else 
{ /* Llib/dsssl.scm 108 */
FAILURE(BGl_string2891z00zz__dssslz00,BGl_list2885z00zz__dssslz00,BgL_nextzd2statezd2_770);} 
{ /* Llib/dsssl.scm 107 */
obj_t BgL_list1945z00_810;
{ /* Llib/dsssl.scm 107 */
obj_t BgL_arg1946z00_811;
BgL_arg1946z00_811 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list1945z00_810 = 
MAKE_PAIR(BgL_arg1943z00_808, BgL_arg1946z00_811); } 
BgL_arg1941z00_806 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1942z00_807, BgL_list1945z00_810); } } 
return 
MAKE_PAIR(BgL_arg1940z00_805, BgL_arg1941z00_806);} } }  else 
{ /* Llib/dsssl.scm 100 */
return BFALSE;} }  else 
{ /* Llib/dsssl.scm 100 */
return BFALSE;} }  else 
{ /* Llib/dsssl.scm 100 */
return BFALSE;} } }  else 
{ /* Llib/dsssl.scm 100 */
return BFALSE;} } } } }  else 
{ /* Llib/dsssl.scm 95 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_5, ((long)3)))
{ /* Llib/dsssl.scm 96 */
return 
PROCEDURE_ENTRY(BgL_errz00_5)(BgL_errz00_5, BgL_wherez00_2, BGl_string2863z00zz__dssslz00, BgL_formalsz00_3, BEOA);}  else 
{ /* Llib/dsssl.scm 96 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2865z00zz__dssslz00,BgL_errz00_5);} } } } break;case ((long)259) : 

{ 
obj_t BgL_nextzd2statezd2_2838;obj_t BgL_argsz00_2836;
BgL_argsz00_2836 = 
CDR(BgL_argsz00_752); 
BgL_nextzd2statezd2_2838 = BgL_restzd2statezd2_2266; 
BgL_nextzd2statezd2_770 = BgL_nextzd2statezd2_2838; 
BgL_argsz00_769 = BgL_argsz00_2836; 
goto BgL_zc3anonymousza31910ze3z83_771;} break;case ((long)262) : 

{ 
obj_t BgL_nextzd2statezd2_2841;obj_t BgL_argsz00_2839;
BgL_argsz00_2839 = 
CDR(BgL_argsz00_752); 
BgL_nextzd2statezd2_2841 = BgL_nozd2restzd2keyzd2statezd2_2265; 
BgL_nextzd2statezd2_770 = BgL_nextzd2statezd2_2841; 
BgL_argsz00_769 = BgL_argsz00_2839; 
goto BgL_zc3anonymousza31910ze3z83_771;} break;
default: 
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_5, ((long)3)))
{ /* Llib/dsssl.scm 77 */
return 
PROCEDURE_ENTRY(BgL_errz00_5)(BgL_errz00_5, BgL_wherez00_2, BGl_string2863z00zz__dssslz00, BgL_formalsz00_3, BEOA);}  else 
{ /* Llib/dsssl.scm 77 */
FAILURE(BGl_string2864z00zz__dssslz00,BGl_list2865z00zz__dssslz00,BgL_errz00_5);} } }  else 
{ 
obj_t BgL_argsz00_2848;
BgL_argsz00_2848 = 
CDR(BgL_argsz00_752); 
BgL_argsz00_752 = BgL_argsz00_2848; 
goto BgL_zc3anonymousza31897ze3z83_753;} }  else 
{ /* Llib/dsssl.scm 73 */
return BgL_bodyz00_4;} } } } 
}



/* _make-dsssl-function-prelude */
obj_t BGl__makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t BgL_envz00_2268, obj_t BgL_wherez00_2269, obj_t BgL_formalsz00_2270, obj_t BgL_bodyz00_2271, obj_t BgL_errz00_2272)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 69 */
{ /* Llib/dsssl.scm 73 */
obj_t BgL_auxz00_2850;
if(
PROCEDUREP(BgL_errz00_2272))
{ /* Llib/dsssl.scm 73 */
BgL_auxz00_2850 = BgL_errz00_2272
; }  else 
{ 
obj_t BgL_auxz00_2853;
BgL_auxz00_2853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)3092)), BGl_string2892z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2272); 
FAILURE(BgL_auxz00_2853,BFALSE,BFALSE);} 
return 
BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(BgL_wherez00_2269, BgL_formalsz00_2270, BgL_bodyz00_2271, BgL_auxz00_2850);} } 
}



/* key-state */
obj_t BGl_keyzd2statezd2zz__dssslz00(obj_t BgL_bodyz00_2276, obj_t BgL_formalsz00_2275, obj_t BgL_wherez00_2274, obj_t BgL_errz00_2273, obj_t BgL_argsz00_1108, obj_t BgL_dssslzd2argzd2_1109, obj_t BgL_collectedzd2keyszd2_1110, bool_t BgL_allowzd2restpzd2_1111)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 260 */
if(
NULLP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 266 */
return BgL_bodyz00_2276;}  else 
{ /* Llib/dsssl.scm 268 */
bool_t BgL_testz00_2860;
{ /* Llib/dsssl.scm 268 */
obj_t BgL_auxz00_2861;
{ /* Llib/dsssl.scm 268 */
obj_t BgL_pairz00_1922;
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 268 */
BgL_pairz00_1922 = BgL_argsz00_1108; }  else 
{ 
obj_t BgL_auxz00_2864;
BgL_auxz00_2864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8712)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1108); 
FAILURE(BgL_auxz00_2864,BFALSE,BFALSE);} 
BgL_auxz00_2861 = 
CAR(BgL_pairz00_1922); } 
BgL_testz00_2860 = 
(BgL_auxz00_2861==BCNST(259)); } 
if(BgL_testz00_2860)
{ /* Llib/dsssl.scm 269 */
bool_t BgL_testz00_2870;
if(BgL_allowzd2restpzd2_1111)
{ /* Llib/dsssl.scm 270 */
bool_t BgL_testz00_2872;
{ /* Llib/dsssl.scm 270 */
obj_t BgL_auxz00_2873;
{ /* Llib/dsssl.scm 270 */
obj_t BgL_pairz00_1923;
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 270 */
BgL_pairz00_1923 = BgL_argsz00_1108; }  else 
{ 
obj_t BgL_auxz00_2876;
BgL_auxz00_2876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8771)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1108); 
FAILURE(BgL_auxz00_2876,BFALSE,BFALSE);} 
BgL_auxz00_2873 = 
CDR(BgL_pairz00_1923); } 
BgL_testz00_2872 = 
NULLP(BgL_auxz00_2873); } 
if(BgL_testz00_2872)
{ /* Llib/dsssl.scm 270 */
BgL_testz00_2870 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 271 */
bool_t BgL_testz00_2882;
{ /* Llib/dsssl.scm 271 */
obj_t BgL_auxz00_2883;
{ /* Llib/dsssl.scm 271 */
obj_t BgL_pairz00_1925;
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 271 */
BgL_pairz00_1925 = BgL_argsz00_1108; }  else 
{ 
obj_t BgL_auxz00_2886;
BgL_auxz00_2886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8802)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1108); 
FAILURE(BgL_auxz00_2886,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 271 */
obj_t BgL_pairz00_1928;
{ /* Llib/dsssl.scm 271 */
obj_t BgL_aux2660z00_2363;
BgL_aux2660z00_2363 = 
CDR(BgL_pairz00_1925); 
if(
PAIRP(BgL_aux2660z00_2363))
{ /* Llib/dsssl.scm 271 */
BgL_pairz00_1928 = BgL_aux2660z00_2363; }  else 
{ 
obj_t BgL_auxz00_2893;
BgL_auxz00_2893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8796)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2660z00_2363); 
FAILURE(BgL_auxz00_2893,BFALSE,BFALSE);} } 
BgL_auxz00_2883 = 
CAR(BgL_pairz00_1928); } } 
BgL_testz00_2882 = 
SYMBOLP(BgL_auxz00_2883); } 
if(BgL_testz00_2882)
{ /* Llib/dsssl.scm 272 */
obj_t BgL_auxz00_2899;
{ /* Llib/dsssl.scm 272 */
obj_t BgL_pairz00_1930;
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 272 */
BgL_pairz00_1930 = BgL_argsz00_1108; }  else 
{ 
obj_t BgL_auxz00_2902;
BgL_auxz00_2902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8827)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1108); 
FAILURE(BgL_auxz00_2902,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 272 */
obj_t BgL_pairz00_1933;
{ /* Llib/dsssl.scm 272 */
obj_t BgL_aux2664z00_2367;
BgL_aux2664z00_2367 = 
CDR(BgL_pairz00_1930); 
if(
PAIRP(BgL_aux2664z00_2367))
{ /* Llib/dsssl.scm 272 */
BgL_pairz00_1933 = BgL_aux2664z00_2367; }  else 
{ 
obj_t BgL_auxz00_2909;
BgL_auxz00_2909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8821)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2664z00_2367); 
FAILURE(BgL_auxz00_2909,BFALSE,BFALSE);} } 
BgL_auxz00_2899 = 
CDR(BgL_pairz00_1933); } } 
BgL_testz00_2870 = 
PAIRP(BgL_auxz00_2899); }  else 
{ /* Llib/dsssl.scm 271 */
BgL_testz00_2870 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 269 */
BgL_testz00_2870 = ((bool_t)1)
; } 
if(BgL_testz00_2870)
{ /* Llib/dsssl.scm 273 */
obj_t BgL_funz00_2371;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 273 */
BgL_funz00_2371 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_2917;
BgL_auxz00_2917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8842)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_2917,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2371, ((long)3)))
{ /* Llib/dsssl.scm 273 */
return 
PROCEDURE_ENTRY(BgL_funz00_2371)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2895z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 273 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2897z00zz__dssslz00,BgL_funz00_2371);} }  else 
{ /* Llib/dsssl.scm 274 */
obj_t BgL_arg2195z00_1118;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_pairz00_1935;
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 274 */
BgL_pairz00_1935 = BgL_argsz00_1108; }  else 
{ 
obj_t BgL_auxz00_2928;
BgL_auxz00_2928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8926)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1108); 
FAILURE(BgL_auxz00_2928,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 274 */
obj_t BgL_pairz00_1938;
{ /* Llib/dsssl.scm 274 */
obj_t BgL_aux2672z00_2376;
BgL_aux2672z00_2376 = 
CDR(BgL_pairz00_1935); 
if(
PAIRP(BgL_aux2672z00_2376))
{ /* Llib/dsssl.scm 274 */
BgL_pairz00_1938 = BgL_aux2672z00_2376; }  else 
{ 
obj_t BgL_auxz00_2935;
BgL_auxz00_2935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8920)), BGl_string2894z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2672z00_2376); 
FAILURE(BgL_auxz00_2935,BFALSE,BFALSE);} } 
BgL_arg2195z00_1118 = 
CAR(BgL_pairz00_1938); } } 
return 
BGl_restzd2keyzd2argz00zz__dssslz00(BgL_dssslzd2argzd2_1109, BgL_collectedzd2keyszd2_1110, BgL_arg2195z00_1118, BgL_bodyz00_2276);} }  else 
{ /* Llib/dsssl.scm 268 */
if(
PAIRP(BgL_argsz00_1108))
{ /* Llib/dsssl.scm 277 */
bool_t BgL_testz00_2943;
{ /* Llib/dsssl.scm 277 */
bool_t BgL_testz00_2944;
{ /* Llib/dsssl.scm 277 */
obj_t BgL_auxz00_2945;
BgL_auxz00_2945 = 
CAR(BgL_argsz00_1108); 
BgL_testz00_2944 = 
SYMBOLP(BgL_auxz00_2945); } 
if(BgL_testz00_2944)
{ /* Llib/dsssl.scm 277 */
BgL_testz00_2943 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 277 */
bool_t BgL_testz00_2948;
{ /* Llib/dsssl.scm 277 */
obj_t BgL_auxz00_2949;
BgL_auxz00_2949 = 
CAR(BgL_argsz00_1108); 
BgL_testz00_2948 = 
PAIRP(BgL_auxz00_2949); } 
if(BgL_testz00_2948)
{ /* Llib/dsssl.scm 277 */
BgL_testz00_2943 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 277 */
BgL_testz00_2943 = ((bool_t)1)
; } } } 
if(BgL_testz00_2943)
{ /* Llib/dsssl.scm 278 */
obj_t BgL_funz00_2380;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 278 */
BgL_funz00_2380 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_2954;
BgL_auxz00_2954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)9086)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_2954,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2380, ((long)3)))
{ /* Llib/dsssl.scm 278 */
return 
PROCEDURE_ENTRY(BgL_funz00_2380)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 278 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2380);} }  else 
{ /* Llib/dsssl.scm 281 */
obj_t BgL_ezd21456zd2_1132;
BgL_ezd21456zd2_1132 = 
CAR(BgL_argsz00_1108); 
if(
PAIRP(BgL_ezd21456zd2_1132))
{ /* Llib/dsssl.scm 281 */
obj_t BgL_carzd21461zd2_1134;obj_t BgL_cdrzd21462zd2_1135;
BgL_carzd21461zd2_1134 = 
CAR(BgL_ezd21456zd2_1132); 
BgL_cdrzd21462zd2_1135 = 
CDR(BgL_ezd21456zd2_1132); 
if(
SYMBOLP(BgL_carzd21461zd2_1134))
{ /* Llib/dsssl.scm 281 */
if(
PAIRP(BgL_cdrzd21462zd2_1135))
{ /* Llib/dsssl.scm 281 */
if(
NULLP(
CDR(BgL_cdrzd21462zd2_1135)))
{ /* Llib/dsssl.scm 281 */
return 
BGl_onezd2keyzd2argz00zz__dssslz00(BgL_allowzd2restpzd2_1111, BgL_argsz00_1108, BgL_dssslzd2argzd2_1109, BgL_bodyz00_2276, BgL_formalsz00_2275, BgL_wherez00_2274, BgL_errz00_2273, BgL_carzd21461zd2_1134, 
CAR(BgL_cdrzd21462zd2_1135), BgL_collectedzd2keyszd2_1110);}  else 
{ /* Llib/dsssl.scm 281 */
obj_t BgL_funz00_2385;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 281 */
BgL_funz00_2385 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_2979;
BgL_auxz00_2979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)9185)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_2979,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2385, ((long)3)))
{ /* Llib/dsssl.scm 281 */
return 
PROCEDURE_ENTRY(BgL_funz00_2385)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 281 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2385);} } }  else 
{ /* Llib/dsssl.scm 281 */
obj_t BgL_funz00_2390;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 281 */
BgL_funz00_2390 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_2990;
BgL_auxz00_2990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)9185)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_2990,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2390, ((long)3)))
{ /* Llib/dsssl.scm 281 */
return 
PROCEDURE_ENTRY(BgL_funz00_2390)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 281 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2390);} } }  else 
{ /* Llib/dsssl.scm 281 */
obj_t BgL_funz00_2395;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 281 */
BgL_funz00_2395 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_3001;
BgL_auxz00_3001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)9185)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_3001,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2395, ((long)3)))
{ /* Llib/dsssl.scm 281 */
return 
PROCEDURE_ENTRY(BgL_funz00_2395)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 281 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2395);} } }  else 
{ /* Llib/dsssl.scm 281 */
if(
SYMBOLP(BgL_ezd21456zd2_1132))
{ /* Llib/dsssl.scm 281 */
return 
BGl_onezd2keyzd2argz00zz__dssslz00(BgL_allowzd2restpzd2_1111, BgL_argsz00_1108, BgL_dssslzd2argzd2_1109, BgL_bodyz00_2276, BgL_formalsz00_2275, BgL_wherez00_2274, BgL_errz00_2273, BgL_ezd21456zd2_1132, BFALSE, BgL_collectedzd2keyszd2_1110);}  else 
{ /* Llib/dsssl.scm 281 */
obj_t BgL_funz00_2400;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 281 */
BgL_funz00_2400 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_3015;
BgL_auxz00_3015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)9185)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_3015,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2400, ((long)3)))
{ /* Llib/dsssl.scm 281 */
return 
PROCEDURE_ENTRY(BgL_funz00_2400)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 281 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2400);} } } } }  else 
{ /* Llib/dsssl.scm 276 */
obj_t BgL_funz00_2405;
if(
PROCEDUREP(BgL_errz00_2273))
{ /* Llib/dsssl.scm 276 */
BgL_funz00_2405 = BgL_errz00_2273; }  else 
{ 
obj_t BgL_auxz00_3026;
BgL_auxz00_3026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8965)), BGl_string2894z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2273); 
FAILURE(BgL_auxz00_3026,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2405, ((long)3)))
{ /* Llib/dsssl.scm 276 */
return 
PROCEDURE_ENTRY(BgL_funz00_2405)(BgL_errz00_2273, BgL_wherez00_2274, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2275, BEOA);}  else 
{ /* Llib/dsssl.scm 276 */
FAILURE(BGl_string2896z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2405);} } } } } 
}



/* rest-key-arg */
obj_t BGl_restzd2keyzd2argz00zz__dssslz00(obj_t BgL_dssslzd2argzd2_2278, obj_t BgL_collectedzd2keyszd2_2277, obj_t BgL_argz00_1177, obj_t BgL_bodyz00_1178)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 264 */
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2255z00_1180;obj_t BgL_arg2256z00_1181;
BgL_arg2255z00_1180 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2257z00_1182;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2263z00_1186;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2265z00_1188;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2266z00_1189;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2269z00_1192;obj_t BgL_arg2270z00_1193;
BgL_arg2269z00_1192 = BGl_symbol2900z00zz__dssslz00; 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2271z00_1194;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2275z00_1198;obj_t BgL_arg2277z00_1199;
BgL_arg2275z00_1198 = BGl_symbol2902z00zz__dssslz00; 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_list2278z00_1200;
BgL_list2278z00_1200 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2277z00_1199 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_collectedzd2keyszd2_2277, BgL_list2278z00_1200); } 
BgL_arg2271z00_1194 = 
MAKE_PAIR(BgL_arg2275z00_1198, BgL_arg2277z00_1199); } 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_list2273z00_1196;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2274z00_1197;
BgL_arg2274z00_1197 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2273z00_1196 = 
MAKE_PAIR(BgL_arg2271z00_1194, BgL_arg2274z00_1197); } 
BgL_arg2270z00_1193 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_2278, BgL_list2273z00_1196); } } 
BgL_arg2266z00_1189 = 
MAKE_PAIR(BgL_arg2269z00_1192, BgL_arg2270z00_1193); } 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_list2268z00_1191;
BgL_list2268z00_1191 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2265z00_1188 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2266z00_1189, BgL_list2268z00_1191); } } 
BgL_arg2263z00_1186 = 
MAKE_PAIR(BgL_argz00_1177, BgL_arg2265z00_1188); } 
BgL_arg2257z00_1182 = 
MAKE_PAIR(BgL_arg2263z00_1186, BNIL); } 
{ /* Llib/dsssl.scm 263 */
obj_t BgL_list2260z00_1184;
{ /* Llib/dsssl.scm 263 */
obj_t BgL_arg2262z00_1185;
BgL_arg2262z00_1185 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2260z00_1184 = 
MAKE_PAIR(BgL_bodyz00_1178, BgL_arg2262z00_1185); } 
BgL_arg2256z00_1181 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2257z00_1182, BgL_list2260z00_1184); } } 
return 
MAKE_PAIR(BgL_arg2255z00_1180, BgL_arg2256z00_1181);} } 
}



/* one-key-arg */
obj_t BGl_onezd2keyzd2argz00zz__dssslz00(bool_t BgL_allowzd2restpzd2_2285, obj_t BgL_argsz00_2284, obj_t BgL_dssslzd2argzd2_2283, obj_t BgL_bodyz00_2282, obj_t BgL_formalsz00_2281, obj_t BgL_wherez00_2280, obj_t BgL_errz00_2279, obj_t BgL_argz00_1150, obj_t BgL_initializa7erza7_1151, obj_t BgL_collectedzd2keyszd2_1152)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 260 */
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2224z00_1154;obj_t BgL_arg2226z00_1155;
BgL_arg2224z00_1154 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2227z00_1156;obj_t BgL_arg2233z00_1157;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2237z00_1161;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2239z00_1163;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2240z00_1164;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2244z00_1167;obj_t BgL_arg2245z00_1168;
BgL_arg2244z00_1167 = BGl_symbol2904z00zz__dssslz00; 
{ /* Llib/dsssl.scm 254 */
obj_t BgL_arg2246z00_1169;
BgL_arg2246z00_1169 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1150); 
{ /* Llib/dsssl.scm 253 */
obj_t BgL_list2248z00_1171;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2249z00_1172;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2250z00_1173;
BgL_arg2250z00_1173 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2249z00_1172 = 
MAKE_PAIR(BgL_initializa7erza7_1151, BgL_arg2250z00_1173); } 
BgL_list2248z00_1171 = 
MAKE_PAIR(BgL_arg2246z00_1169, BgL_arg2249z00_1172); } 
BgL_arg2245z00_1168 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_2283, BgL_list2248z00_1171); } } 
BgL_arg2240z00_1164 = 
MAKE_PAIR(BgL_arg2244z00_1167, BgL_arg2245z00_1168); } 
{ /* Llib/dsssl.scm 253 */
obj_t BgL_list2243z00_1166;
BgL_list2243z00_1166 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2239z00_1163 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2240z00_1164, BgL_list2243z00_1166); } } 
BgL_arg2237z00_1161 = 
MAKE_PAIR(BgL_argz00_1150, BgL_arg2239z00_1163); } 
BgL_arg2227z00_1156 = 
MAKE_PAIR(BgL_arg2237z00_1161, BNIL); } 
{ /* Llib/dsssl.scm 256 */
obj_t BgL_arg2251z00_1174;obj_t BgL_arg2252z00_1175;
{ /* Llib/dsssl.scm 256 */
obj_t BgL_pairz00_1963;
if(
PAIRP(BgL_argsz00_2284))
{ /* Llib/dsssl.scm 256 */
BgL_pairz00_1963 = BgL_argsz00_2284; }  else 
{ 
obj_t BgL_auxz00_3062;
BgL_auxz00_3062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)8436)), BGl_string2906z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_2284); 
FAILURE(BgL_auxz00_3062,BFALSE,BFALSE);} 
BgL_arg2251z00_1174 = 
CDR(BgL_pairz00_1963); } 
BgL_arg2252z00_1175 = 
MAKE_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1150), BgL_collectedzd2keyszd2_1152); 
BgL_arg2233z00_1157 = 
BGl_keyzd2statezd2zz__dssslz00(BgL_bodyz00_2282, BgL_formalsz00_2281, BgL_wherez00_2280, BgL_errz00_2279, BgL_arg2251z00_1174, BgL_dssslzd2argzd2_2283, BgL_arg2252z00_1175, BgL_allowzd2restpzd2_2285); } 
{ /* Llib/dsssl.scm 253 */
obj_t BgL_list2235z00_1159;
{ /* Llib/dsssl.scm 253 */
obj_t BgL_arg2236z00_1160;
BgL_arg2236z00_1160 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2235z00_1159 = 
MAKE_PAIR(BgL_arg2233z00_1157, BgL_arg2236z00_1160); } 
BgL_arg2226z00_1155 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2227z00_1156, BgL_list2235z00_1159); } } 
return 
MAKE_PAIR(BgL_arg2224z00_1154, BgL_arg2226z00_1155);} } 
}



/* no-rest-key-state */
obj_t BGl_nozd2restzd2keyzd2statezd2zz__dssslz00(obj_t BgL_envz00_2286, obj_t BgL_argsz00_2291, obj_t BgL_dssslzd2argzd2_2292)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 248 */
{ /* Llib/dsssl.scm 243 */
obj_t BgL_errz00_2287;obj_t BgL_wherez00_2288;obj_t BgL_formalsz00_2289;obj_t BgL_bodyz00_2290;
BgL_errz00_2287 = 
PROCEDURE_REF(BgL_envz00_2286, 
(int)(((long)0))); 
BgL_wherez00_2288 = 
PROCEDURE_REF(BgL_envz00_2286, 
(int)(((long)1))); 
BgL_formalsz00_2289 = 
PROCEDURE_REF(BgL_envz00_2286, 
(int)(((long)2))); 
BgL_bodyz00_2290 = 
PROCEDURE_REF(BgL_envz00_2286, 
(int)(((long)3))); 
{ 
obj_t BgL_argsz00_1086;obj_t BgL_dssslzd2argzd2_1087;
BgL_argsz00_1086 = BgL_argsz00_2291; 
BgL_dssslzd2argzd2_1087 = BgL_dssslzd2argzd2_2292; 
{ 
obj_t BgL_argsz00_1055;
if(
NULLP(BgL_argsz00_1086))
{ /* Llib/dsssl.scm 243 */
return BgL_bodyz00_2290;}  else 
{ /* Llib/dsssl.scm 246 */
obj_t BgL_arg2173z00_1090;obj_t BgL_arg2174z00_1091;
BgL_arg2173z00_1090 = BGl_symbol2909z00zz__dssslz00; 
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2175z00_1092;obj_t BgL_arg2176z00_1093;
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2180z00_1097;obj_t BgL_arg2181z00_1098;
BgL_arg2180z00_1097 = BGl_symbol2911z00zz__dssslz00; 
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2182z00_1099;
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2186z00_1103;obj_t BgL_arg2187z00_1104;
BgL_arg2186z00_1103 = BGl_symbol2902z00zz__dssslz00; 
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2188z00_1105;
BgL_argsz00_1055 = BgL_argsz00_1086; 
{ 
obj_t BgL_argsz00_1059;obj_t BgL_auxz00_1060;
BgL_argsz00_1059 = BgL_argsz00_1055; 
BgL_auxz00_1060 = BNIL; 
BgL_zc3anonymousza32155ze3z83_1061:
if(
NULLP(BgL_argsz00_1059))
{ /* Llib/dsssl.scm 227 */
obj_t BgL_auxz00_3086;
{ /* Llib/dsssl.scm 227 */
bool_t BgL_testz00_3087;
if(
PAIRP(BgL_auxz00_1060))
{ /* Llib/dsssl.scm 227 */
BgL_testz00_3087 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 227 */
BgL_testz00_3087 = 
NULLP(BgL_auxz00_1060)
; } 
if(BgL_testz00_3087)
{ /* Llib/dsssl.scm 227 */
BgL_auxz00_3086 = BgL_auxz00_1060
; }  else 
{ 
obj_t BgL_auxz00_3091;
BgL_auxz00_3091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7605)), BGl_string2907z00zz__dssslz00, BGl_string2908z00zz__dssslz00, BgL_auxz00_1060); 
FAILURE(BgL_auxz00_3091,BFALSE,BFALSE);} } 
BgL_arg2188z00_1105 = 
bgl_reverse_bang(BgL_auxz00_3086); }  else 
{ /* Llib/dsssl.scm 228 */
bool_t BgL_testz00_3096;
{ /* Llib/dsssl.scm 228 */
obj_t BgL_auxz00_3097;
{ /* Llib/dsssl.scm 228 */
obj_t BgL_pairz00_1892;
if(
PAIRP(BgL_argsz00_1059))
{ /* Llib/dsssl.scm 228 */
BgL_pairz00_1892 = BgL_argsz00_1059; }  else 
{ 
obj_t BgL_auxz00_3100;
BgL_auxz00_3100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7627)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1059); 
FAILURE(BgL_auxz00_3100,BFALSE,BFALSE);} 
BgL_auxz00_3097 = 
CAR(BgL_pairz00_1892); } 
BgL_testz00_3096 = 
(BgL_auxz00_3097==BCNST(259)); } 
if(BgL_testz00_3096)
{ /* Llib/dsssl.scm 229 */
obj_t BgL_auxz00_3106;
{ /* Llib/dsssl.scm 229 */
bool_t BgL_testz00_3107;
if(
PAIRP(BgL_auxz00_1060))
{ /* Llib/dsssl.scm 229 */
BgL_testz00_3107 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 229 */
BgL_testz00_3107 = 
NULLP(BgL_auxz00_1060)
; } 
if(BgL_testz00_3107)
{ /* Llib/dsssl.scm 229 */
BgL_auxz00_3106 = BgL_auxz00_1060
; }  else 
{ 
obj_t BgL_auxz00_3111;
BgL_auxz00_3111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7657)), BGl_string2907z00zz__dssslz00, BGl_string2908z00zz__dssslz00, BgL_auxz00_1060); 
FAILURE(BgL_auxz00_3111,BFALSE,BFALSE);} } 
BgL_arg2188z00_1105 = 
bgl_reverse_bang(BgL_auxz00_3106); }  else 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_ezd21439zd2_1069;
{ /* Llib/dsssl.scm 231 */
obj_t BgL_pairz00_1893;
if(
PAIRP(BgL_argsz00_1059))
{ /* Llib/dsssl.scm 231 */
BgL_pairz00_1893 = BgL_argsz00_1059; }  else 
{ 
obj_t BgL_auxz00_3118;
BgL_auxz00_3118 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7697)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1059); 
FAILURE(BgL_auxz00_3118,BFALSE,BFALSE);} 
BgL_ezd21439zd2_1069 = 
CAR(BgL_pairz00_1893); } 
if(
SYMBOLP(BgL_ezd21439zd2_1069))
{ /* Llib/dsssl.scm 231 */
obj_t BgL_argz00_1895;
BgL_argz00_1895 = BgL_ezd21439zd2_1069; 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_arg2164z00_1896;obj_t BgL_arg2165z00_1897;
BgL_arg2164z00_1896 = 
CDR(BgL_argsz00_1059); 
BgL_arg2165z00_1897 = 
MAKE_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1895), BgL_auxz00_1060); 
{ 
obj_t BgL_auxz00_3129;obj_t BgL_argsz00_3128;
BgL_argsz00_3128 = BgL_arg2164z00_1896; 
BgL_auxz00_3129 = BgL_arg2165z00_1897; 
BgL_auxz00_1060 = BgL_auxz00_3129; 
BgL_argsz00_1059 = BgL_argsz00_3128; 
goto BgL_zc3anonymousza32155ze3z83_1061;} } }  else 
{ /* Llib/dsssl.scm 231 */
if(
PAIRP(BgL_ezd21439zd2_1069))
{ /* Llib/dsssl.scm 231 */
obj_t BgL_carzd21446zd2_1072;obj_t BgL_cdrzd21447zd2_1073;
BgL_carzd21446zd2_1072 = 
CAR(BgL_ezd21439zd2_1069); 
BgL_cdrzd21447zd2_1073 = 
CDR(BgL_ezd21439zd2_1069); 
if(
SYMBOLP(BgL_carzd21446zd2_1072))
{ /* Llib/dsssl.scm 231 */
if(
PAIRP(BgL_cdrzd21447zd2_1073))
{ /* Llib/dsssl.scm 231 */
if(
NULLP(
CDR(BgL_cdrzd21447zd2_1073)))
{ /* Llib/dsssl.scm 231 */
obj_t BgL_argz00_1907;
BgL_argz00_1907 = BgL_carzd21446zd2_1072; 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_arg2167z00_1908;obj_t BgL_arg2168z00_1909;
BgL_arg2167z00_1908 = 
CDR(BgL_argsz00_1059); 
BgL_arg2168z00_1909 = 
MAKE_PAIR(
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_argz00_1907), BgL_auxz00_1060); 
{ 
obj_t BgL_auxz00_3145;obj_t BgL_argsz00_3144;
BgL_argsz00_3144 = BgL_arg2167z00_1908; 
BgL_auxz00_3145 = BgL_arg2168z00_1909; 
BgL_auxz00_1060 = BgL_auxz00_3145; 
BgL_argsz00_1059 = BgL_argsz00_3144; 
goto BgL_zc3anonymousza32155ze3z83_1061;} } }  else 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_funz00_2424;
if(
PROCEDUREP(BgL_errz00_2287))
{ /* Llib/dsssl.scm 231 */
BgL_funz00_2424 = BgL_errz00_2287; }  else 
{ 
obj_t BgL_auxz00_3148;
BgL_auxz00_3148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7680)), BGl_string2907z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2287); 
FAILURE(BgL_auxz00_3148,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2424, ((long)3)))
{ /* Llib/dsssl.scm 231 */
BgL_arg2188z00_1105 = 
PROCEDURE_ENTRY(BgL_funz00_2424)(BgL_errz00_2287, BgL_wherez00_2288, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2289, BEOA); }  else 
{ /* Llib/dsssl.scm 231 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2424);} } }  else 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_funz00_2429;
if(
PROCEDUREP(BgL_errz00_2287))
{ /* Llib/dsssl.scm 231 */
BgL_funz00_2429 = BgL_errz00_2287; }  else 
{ 
obj_t BgL_auxz00_3159;
BgL_auxz00_3159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7680)), BGl_string2907z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2287); 
FAILURE(BgL_auxz00_3159,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2429, ((long)3)))
{ /* Llib/dsssl.scm 231 */
BgL_arg2188z00_1105 = 
PROCEDURE_ENTRY(BgL_funz00_2429)(BgL_errz00_2287, BgL_wherez00_2288, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2289, BEOA); }  else 
{ /* Llib/dsssl.scm 231 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2429);} } }  else 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_funz00_2434;
if(
PROCEDUREP(BgL_errz00_2287))
{ /* Llib/dsssl.scm 231 */
BgL_funz00_2434 = BgL_errz00_2287; }  else 
{ 
obj_t BgL_auxz00_3170;
BgL_auxz00_3170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7680)), BGl_string2907z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2287); 
FAILURE(BgL_auxz00_3170,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2434, ((long)3)))
{ /* Llib/dsssl.scm 231 */
BgL_arg2188z00_1105 = 
PROCEDURE_ENTRY(BgL_funz00_2434)(BgL_errz00_2287, BgL_wherez00_2288, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2289, BEOA); }  else 
{ /* Llib/dsssl.scm 231 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2434);} } }  else 
{ /* Llib/dsssl.scm 231 */
obj_t BgL_funz00_2439;
if(
PROCEDUREP(BgL_errz00_2287))
{ /* Llib/dsssl.scm 231 */
BgL_funz00_2439 = BgL_errz00_2287; }  else 
{ 
obj_t BgL_auxz00_3181;
BgL_auxz00_3181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7680)), BGl_string2907z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2287); 
FAILURE(BgL_auxz00_3181,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2439, ((long)3)))
{ /* Llib/dsssl.scm 231 */
BgL_arg2188z00_1105 = 
PROCEDURE_ENTRY(BgL_funz00_2439)(BgL_errz00_2287, BgL_wherez00_2288, BGl_string2898z00zz__dssslz00, BgL_formalsz00_2289, BEOA); }  else 
{ /* Llib/dsssl.scm 231 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2899z00zz__dssslz00,BgL_funz00_2439);} } } } } } 
{ /* Llib/dsssl.scm 247 */
obj_t BgL_list2190z00_1107;
BgL_list2190z00_1107 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2187z00_1104 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2188z00_1105, BgL_list2190z00_1107); } } 
BgL_arg2182z00_1099 = 
MAKE_PAIR(BgL_arg2186z00_1103, BgL_arg2187z00_1104); } 
{ /* Llib/dsssl.scm 247 */
obj_t BgL_list2184z00_1101;
{ /* Llib/dsssl.scm 247 */
obj_t BgL_arg2185z00_1102;
BgL_arg2185z00_1102 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2184z00_1101 = 
MAKE_PAIR(BgL_arg2182z00_1099, BgL_arg2185z00_1102); } 
BgL_arg2181z00_1098 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_1087, BgL_list2184z00_1101); } } 
BgL_arg2175z00_1092 = 
MAKE_PAIR(BgL_arg2180z00_1097, BgL_arg2181z00_1098); } 
BgL_arg2176z00_1093 = 
BGl_keyzd2statezd2zz__dssslz00(BgL_bodyz00_2290, BgL_formalsz00_2289, BgL_wherez00_2288, BgL_errz00_2287, BgL_argsz00_1086, BgL_dssslzd2argzd2_1087, BNIL, ((bool_t)1)); 
{ /* Llib/dsssl.scm 246 */
obj_t BgL_list2178z00_1095;
{ /* Llib/dsssl.scm 246 */
obj_t BgL_arg2179z00_1096;
BgL_arg2179z00_1096 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2178z00_1095 = 
MAKE_PAIR(BgL_arg2176z00_1093, BgL_arg2179z00_1096); } 
BgL_arg2174z00_1091 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2175z00_1092, BgL_list2178z00_1095); } } 
return 
MAKE_PAIR(BgL_arg2173z00_1090, BgL_arg2174z00_1091);} } } } } 
}



/* rest-state */
obj_t BGl_restzd2statezd2zz__dssslz00(obj_t BgL_envz00_2293, obj_t BgL_argsz00_2298, obj_t BgL_dssslzd2argzd2_2299)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 189 */
{ /* Llib/dsssl.scm 181 */
obj_t BgL_errz00_2294;obj_t BgL_wherez00_2295;obj_t BgL_formalsz00_2296;obj_t BgL_bodyz00_2297;
BgL_errz00_2294 = 
PROCEDURE_REF(BgL_envz00_2293, 
(int)(((long)0))); 
BgL_wherez00_2295 = 
PROCEDURE_REF(BgL_envz00_2293, 
(int)(((long)1))); 
BgL_formalsz00_2296 = 
PROCEDURE_REF(BgL_envz00_2293, 
(int)(((long)2))); 
BgL_bodyz00_2297 = 
PROCEDURE_REF(BgL_envz00_2293, 
(int)(((long)3))); 
{ 
obj_t BgL_argsz00_985;obj_t BgL_dssslzd2argzd2_986;
BgL_argsz00_985 = BgL_argsz00_2298; 
BgL_dssslzd2argzd2_986 = BgL_dssslzd2argzd2_2299; 
{ 
obj_t BgL_argsz00_1006;obj_t BgL_dssslzd2argzd2_1007;obj_t BgL_argsz00_1014;obj_t BgL_dssslzd2argzd2_1015;
if(
PAIRP(BgL_argsz00_985))
{ 
obj_t BgL_idz00_989;
{ /* Llib/dsssl.scm 184 */
obj_t BgL_ezd21431zd2_992;
BgL_ezd21431zd2_992 = 
CAR(BgL_argsz00_985); 
if(
SYMBOLP(BgL_ezd21431zd2_992))
{ /* Llib/dsssl.scm 184 */
BgL_idz00_989 = BgL_ezd21431zd2_992; 
{ /* Llib/dsssl.scm 186 */
obj_t BgL_arg2103z00_994;obj_t BgL_arg2104z00_995;
BgL_arg2103z00_994 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 186 */
obj_t BgL_arg2105z00_996;obj_t BgL_arg2106z00_997;
{ /* Llib/dsssl.scm 186 */
obj_t BgL_arg2110z00_1001;
{ /* Llib/dsssl.scm 186 */
obj_t BgL_arg2112z00_1003;
{ /* Llib/dsssl.scm 186 */
obj_t BgL_list2113z00_1004;
BgL_list2113z00_1004 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2112z00_1003 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_986, BgL_list2113z00_1004); } 
BgL_arg2110z00_1001 = 
MAKE_PAIR(BgL_idz00_989, BgL_arg2112z00_1003); } 
BgL_arg2105z00_996 = 
MAKE_PAIR(BgL_arg2110z00_1001, BNIL); } 
BgL_argsz00_1006 = 
CDR(BgL_argsz00_985); 
BgL_dssslzd2argzd2_1007 = BgL_dssslzd2argzd2_986; 
if(
NULLP(BgL_argsz00_1006))
{ /* Llib/dsssl.scm 193 */
BgL_arg2106z00_997 = BgL_bodyz00_2297; }  else 
{ /* Llib/dsssl.scm 193 */
if(
PAIRP(BgL_argsz00_1006))
{ /* Llib/dsssl.scm 195 */
if(
(
CAR(BgL_argsz00_1006)==BCNST(262)))
{ /* Llib/dsssl.scm 197 */
BgL_argsz00_1014 = 
CDR(BgL_argsz00_1006); 
BgL_dssslzd2argzd2_1015 = BgL_dssslzd2argzd2_1007; 
if(
NULLP(BgL_argsz00_1014))
{ /* Llib/dsssl.scm 204 */
BgL_arg2106z00_997 = BgL_bodyz00_2297; }  else 
{ /* Llib/dsssl.scm 207 */
obj_t BgL_keyzd2listzd2_1018;
{ /* Llib/dsssl.scm 207 */
obj_t BgL_head1859z00_1037;
BgL_head1859z00_1037 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1857z00_1039;obj_t BgL_tail1860z00_1040;
BgL_l1857z00_1039 = BgL_argsz00_1014; 
BgL_tail1860z00_1040 = BgL_head1859z00_1037; 
BgL_zc3anonymousza32143ze3z83_1041:
if(
PAIRP(BgL_l1857z00_1039))
{ /* Llib/dsssl.scm 207 */
obj_t BgL_newtail1861z00_1043;
{ /* Llib/dsssl.scm 207 */
obj_t BgL_arg2146z00_1045;
{ /* Llib/dsssl.scm 207 */
obj_t BgL_xz00_1047;
BgL_xz00_1047 = 
CAR(BgL_l1857z00_1039); 
{ /* Llib/dsssl.scm 209 */
bool_t BgL_testz00_3232;
if(
PAIRP(BgL_xz00_1047))
{ /* Llib/dsssl.scm 209 */
obj_t BgL_auxz00_3235;
BgL_auxz00_3235 = 
CAR(BgL_xz00_1047); 
BgL_testz00_3232 = 
SYMBOLP(BgL_auxz00_3235); }  else 
{ /* Llib/dsssl.scm 209 */
BgL_testz00_3232 = ((bool_t)0)
; } 
if(BgL_testz00_3232)
{ /* Llib/dsssl.scm 210 */
obj_t BgL_arg2149z00_1049;
BgL_arg2149z00_1049 = 
CAR(BgL_xz00_1047); 
{ /* Llib/dsssl.scm 210 */
obj_t BgL_auxz00_3239;
if(
SYMBOLP(BgL_arg2149z00_1049))
{ /* Llib/dsssl.scm 210 */
BgL_auxz00_3239 = BgL_arg2149z00_1049
; }  else 
{ 
obj_t BgL_auxz00_3242;
BgL_auxz00_3242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)7190)), BGl_string2913z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg2149z00_1049); 
FAILURE(BgL_auxz00_3242,BFALSE,BFALSE);} 
BgL_arg2146z00_1045 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3239); } }  else 
{ /* Llib/dsssl.scm 209 */
if(
SYMBOLP(BgL_xz00_1047))
{ /* Llib/dsssl.scm 211 */
BgL_arg2146z00_1045 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_xz00_1047); }  else 
{ /* Llib/dsssl.scm 211 */
BgL_arg2146z00_1045 = 
BGl_errorz00zz__errorz00(BGl_string2915z00zz__dssslz00, BGl_string2916z00zz__dssslz00, BgL_xz00_1047); } } } } 
BgL_newtail1861z00_1043 = 
MAKE_PAIR(BgL_arg2146z00_1045, BNIL); } 
SET_CDR(BgL_tail1860z00_1040, BgL_newtail1861z00_1043); 
{ 
obj_t BgL_tail1860z00_3255;obj_t BgL_l1857z00_3253;
BgL_l1857z00_3253 = 
CDR(BgL_l1857z00_1039); 
BgL_tail1860z00_3255 = BgL_newtail1861z00_1043; 
BgL_tail1860z00_1040 = BgL_tail1860z00_3255; 
BgL_l1857z00_1039 = BgL_l1857z00_3253; 
goto BgL_zc3anonymousza32143ze3z83_1041;} }  else 
{ /* Llib/dsssl.scm 207 */
if(
NULLP(BgL_l1857z00_1039))
{ /* Llib/dsssl.scm 207 */
BgL_keyzd2listzd2_1018 = 
CDR(BgL_head1859z00_1037); }  else 
{ /* Llib/dsssl.scm 207 */
BgL_keyzd2listzd2_1018 = 
BGl_errorz00zz__errorz00(BGl_string2917z00zz__dssslz00, BGl_string2918z00zz__dssslz00, BgL_l1857z00_1039); } } } } 
{ /* Llib/dsssl.scm 218 */
obj_t BgL_arg2124z00_1019;obj_t BgL_arg2125z00_1020;
BgL_arg2124z00_1019 = BGl_symbol2909z00zz__dssslz00; 
{ /* Llib/dsssl.scm 219 */
obj_t BgL_arg2126z00_1021;obj_t BgL_arg2127z00_1022;
{ /* Llib/dsssl.scm 219 */
obj_t BgL_arg2133z00_1026;obj_t BgL_arg2134z00_1027;
BgL_arg2133z00_1026 = BGl_symbol2911z00zz__dssslz00; 
{ /* Llib/dsssl.scm 219 */
obj_t BgL_arg2135z00_1028;
{ /* Llib/dsssl.scm 219 */
obj_t BgL_arg2139z00_1032;obj_t BgL_arg2140z00_1033;
BgL_arg2139z00_1032 = BGl_symbol2902z00zz__dssslz00; 
{ /* Llib/dsssl.scm 219 */
obj_t BgL_list2141z00_1034;
BgL_list2141z00_1034 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2140z00_1033 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_keyzd2listzd2_1018, BgL_list2141z00_1034); } 
BgL_arg2135z00_1028 = 
MAKE_PAIR(BgL_arg2139z00_1032, BgL_arg2140z00_1033); } 
{ /* Llib/dsssl.scm 219 */
obj_t BgL_list2137z00_1030;
{ /* Llib/dsssl.scm 219 */
obj_t BgL_arg2138z00_1031;
BgL_arg2138z00_1031 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2137z00_1030 = 
MAKE_PAIR(BgL_arg2135z00_1028, BgL_arg2138z00_1031); } 
BgL_arg2134z00_1027 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_1015, BgL_list2137z00_1030); } } 
BgL_arg2126z00_1021 = 
MAKE_PAIR(BgL_arg2133z00_1026, BgL_arg2134z00_1027); } 
BgL_arg2127z00_1022 = 
BGl_keyzd2statezd2zz__dssslz00(BgL_bodyz00_2297, BgL_formalsz00_2296, BgL_wherez00_2295, BgL_errz00_2294, BgL_argsz00_1014, BgL_dssslzd2argzd2_1015, BNIL, ((bool_t)0)); 
{ /* Llib/dsssl.scm 218 */
obj_t BgL_list2131z00_1024;
{ /* Llib/dsssl.scm 218 */
obj_t BgL_arg2132z00_1025;
BgL_arg2132z00_1025 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2131z00_1024 = 
MAKE_PAIR(BgL_arg2127z00_1022, BgL_arg2132z00_1025); } 
BgL_arg2125z00_1020 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2126z00_1021, BgL_list2131z00_1024); } } 
BgL_arg2106z00_997 = 
MAKE_PAIR(BgL_arg2124z00_1019, BgL_arg2125z00_1020); } } }  else 
{ /* Llib/dsssl.scm 200 */
obj_t BgL_funz00_2446;
if(
PROCEDUREP(BgL_errz00_2294))
{ /* Llib/dsssl.scm 200 */
BgL_funz00_2446 = BgL_errz00_2294; }  else 
{ 
obj_t BgL_auxz00_3275;
BgL_auxz00_3275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6916)), BGl_string2919z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2294); 
FAILURE(BgL_auxz00_3275,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2446, ((long)3)))
{ /* Llib/dsssl.scm 200 */
BgL_arg2106z00_997 = 
PROCEDURE_ENTRY(BgL_funz00_2446)(BgL_errz00_2294, BgL_wherez00_2295, BGl_string2895z00zz__dssslz00, BgL_formalsz00_2296, BEOA); }  else 
{ /* Llib/dsssl.scm 200 */
FAILURE(BGl_string2920z00zz__dssslz00,BGl_list2897z00zz__dssslz00,BgL_funz00_2446);} } }  else 
{ /* Llib/dsssl.scm 196 */
obj_t BgL_funz00_2451;
if(
PROCEDUREP(BgL_errz00_2294))
{ /* Llib/dsssl.scm 196 */
BgL_funz00_2451 = BgL_errz00_2294; }  else 
{ 
obj_t BgL_auxz00_3286;
BgL_auxz00_3286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6779)), BGl_string2919z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2294); 
FAILURE(BgL_auxz00_3286,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2451, ((long)3)))
{ /* Llib/dsssl.scm 196 */
BgL_arg2106z00_997 = 
PROCEDURE_ENTRY(BgL_funz00_2451)(BgL_errz00_2294, BgL_wherez00_2295, BGl_string2895z00zz__dssslz00, BgL_formalsz00_2296, BEOA); }  else 
{ /* Llib/dsssl.scm 196 */
FAILURE(BGl_string2920z00zz__dssslz00,BGl_list2897z00zz__dssslz00,BgL_funz00_2451);} } } 
{ /* Llib/dsssl.scm 186 */
obj_t BgL_list2108z00_999;
{ /* Llib/dsssl.scm 186 */
obj_t BgL_arg2109z00_1000;
BgL_arg2109z00_1000 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2108z00_999 = 
MAKE_PAIR(BgL_arg2106z00_997, BgL_arg2109z00_1000); } 
BgL_arg2104z00_995 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2105z00_996, BgL_list2108z00_999); } } 
return 
MAKE_PAIR(BgL_arg2103z00_994, BgL_arg2104z00_995);} }  else 
{ /* Llib/dsssl.scm 184 */
return 
BGl_errorz00zz__errorz00(BgL_wherez00_2295, BGl_string2895z00zz__dssslz00, BgL_formalsz00_2296);} } }  else 
{ /* Llib/dsssl.scm 182 */
obj_t BgL_funz00_2456;
if(
PROCEDUREP(BgL_errz00_2294))
{ /* Llib/dsssl.scm 182 */
BgL_funz00_2456 = BgL_errz00_2294; }  else 
{ 
obj_t BgL_auxz00_3303;
BgL_auxz00_3303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6384)), BGl_string2921z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2294); 
FAILURE(BgL_auxz00_3303,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2456, ((long)3)))
{ /* Llib/dsssl.scm 182 */
return 
PROCEDURE_ENTRY(BgL_funz00_2456)(BgL_errz00_2294, BgL_wherez00_2295, BGl_string2895z00zz__dssslz00, BgL_formalsz00_2296, BEOA);}  else 
{ /* Llib/dsssl.scm 182 */
FAILURE(BGl_string2922z00zz__dssslz00,BGl_list2897z00zz__dssslz00,BgL_funz00_2456);} } } } } } 
}



/* optional-state */
obj_t BGl_optionalzd2statezd2zz__dssslz00(obj_t BgL_envz00_2300, obj_t BgL_argsz00_2307, obj_t BgL_dssslzd2argzd2_2308)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 134 */
return 
BGl_optionalzd2statez72za0zz__dssslz00(
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)5))), 
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)4))), 
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)3))), 
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)2))), 
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)1))), 
PROCEDURE_REF(BgL_envz00_2300, 
(int)(((long)0))), BgL_argsz00_2307, BgL_dssslzd2argzd2_2308);} 
}



/* optional-state' */
obj_t BGl_optionalzd2statez72za0zz__dssslz00(obj_t BgL_bodyz00_2329, obj_t BgL_nozd2restzd2keyzd2statezd2_2328, obj_t BgL_restzd2statezd2_2327, obj_t BgL_formalsz00_2326, obj_t BgL_wherez00_2325, obj_t BgL_errz00_2324, obj_t BgL_argsz00_824, obj_t BgL_dssslzd2argzd2_825)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 134 */
{ /* Llib/dsssl.scm 134 */
obj_t BgL_keywordzd2argumentszd2_828;
BgL_keywordzd2argumentszd2_828 = BUNSPEC; 
{ 
obj_t BgL_argz00_902;obj_t BgL_initializa7erza7_903;obj_t BgL_argsz00_863;
BgL_argsz00_863 = BgL_argsz00_824; 
{ 
obj_t BgL_argsz00_866;
BgL_argsz00_866 = BgL_argsz00_863; 
BgL_zc3anonymousza31983ze3z83_867:
if(
PAIRP(BgL_argsz00_866))
{ /* Llib/dsssl.scm 115 */
if(
(
CAR(BgL_argsz00_866)==BCNST(262)))
{ /* Llib/dsssl.scm 118 */
obj_t BgL_g1828z00_870;
BgL_g1828z00_870 = 
CDR(BgL_argsz00_866); 
{ 
obj_t BgL_argsz00_873;obj_t BgL_resz00_874;
BgL_argsz00_873 = BgL_g1828z00_870; 
BgL_resz00_874 = BNIL; 
BgL_zc3anonymousza31986ze3z83_875:
{ /* Llib/dsssl.scm 121 */
bool_t BgL_testz00_3331;
if(
PAIRP(BgL_argsz00_873))
{ /* Llib/dsssl.scm 122 */
bool_t BgL_testz00_3334;
{ /* Llib/dsssl.scm 122 */
bool_t BgL_testz00_3335;
{ /* Llib/dsssl.scm 122 */
obj_t BgL_auxz00_3336;
BgL_auxz00_3336 = 
CAR(BgL_argsz00_873); 
BgL_testz00_3335 = 
PAIRP(BgL_auxz00_3336); } 
if(BgL_testz00_3335)
{ /* Llib/dsssl.scm 122 */
BgL_testz00_3334 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 123 */
obj_t BgL_auxz00_3339;
BgL_auxz00_3339 = 
CAR(BgL_argsz00_873); 
BgL_testz00_3334 = 
SYMBOLP(BgL_auxz00_3339); } } 
if(BgL_testz00_3334)
{ /* Llib/dsssl.scm 122 */
if(
(
CAR(BgL_argsz00_873)==BCNST(258)))
{ /* Llib/dsssl.scm 124 */
BgL_testz00_3331 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 124 */
BgL_testz00_3331 = 
(
CAR(BgL_argsz00_873)==BCNST(259))
; } }  else 
{ /* Llib/dsssl.scm 122 */
BgL_testz00_3331 = ((bool_t)1)
; } }  else 
{ /* Llib/dsssl.scm 121 */
BgL_testz00_3331 = ((bool_t)1)
; } 
if(BgL_testz00_3331)
{ /* Llib/dsssl.scm 121 */
BgL_keywordzd2argumentszd2_828 = BgL_resz00_874; }  else 
{ /* Llib/dsssl.scm 127 */
bool_t BgL_testz00_3347;
{ /* Llib/dsssl.scm 127 */
obj_t BgL_auxz00_3348;
{ /* Llib/dsssl.scm 127 */
obj_t BgL_pairz00_1854;
if(
PAIRP(BgL_argsz00_873))
{ /* Llib/dsssl.scm 127 */
BgL_pairz00_1854 = BgL_argsz00_873; }  else 
{ 
obj_t BgL_auxz00_3351;
BgL_auxz00_3351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4673)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_873); 
FAILURE(BgL_auxz00_3351,BFALSE,BFALSE);} 
BgL_auxz00_3348 = 
CAR(BgL_pairz00_1854); } 
BgL_testz00_3347 = 
SYMBOLP(BgL_auxz00_3348); } 
if(BgL_testz00_3347)
{ /* Llib/dsssl.scm 128 */
obj_t BgL_arg1989z00_878;obj_t BgL_arg1990z00_879;
{ /* Llib/dsssl.scm 128 */
obj_t BgL_pairz00_1856;
if(
PAIRP(BgL_argsz00_873))
{ /* Llib/dsssl.scm 128 */
BgL_pairz00_1856 = BgL_argsz00_873; }  else 
{ 
obj_t BgL_auxz00_3359;
BgL_auxz00_3359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4700)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_873); 
FAILURE(BgL_auxz00_3359,BFALSE,BFALSE);} 
BgL_arg1989z00_878 = 
CDR(BgL_pairz00_1856); } 
{ /* Llib/dsssl.scm 129 */
obj_t BgL_arg1991z00_880;
{ /* Llib/dsssl.scm 129 */
obj_t BgL_arg1992z00_881;
BgL_arg1992z00_881 = 
CAR(BgL_argsz00_873); 
{ /* Llib/dsssl.scm 129 */
obj_t BgL_auxz00_3365;
if(
SYMBOLP(BgL_arg1992z00_881))
{ /* Llib/dsssl.scm 129 */
BgL_auxz00_3365 = BgL_arg1992z00_881
; }  else 
{ 
obj_t BgL_auxz00_3368;
BgL_auxz00_3368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4746)), BGl_string2907z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg1992z00_881); 
FAILURE(BgL_auxz00_3368,BFALSE,BFALSE);} 
BgL_arg1991z00_880 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3365); } } 
BgL_arg1990z00_879 = 
MAKE_PAIR(BgL_arg1991z00_880, BgL_resz00_874); } 
{ 
obj_t BgL_resz00_3375;obj_t BgL_argsz00_3374;
BgL_argsz00_3374 = BgL_arg1989z00_878; 
BgL_resz00_3375 = BgL_arg1990z00_879; 
BgL_resz00_874 = BgL_resz00_3375; 
BgL_argsz00_873 = BgL_argsz00_3374; 
goto BgL_zc3anonymousza31986ze3z83_875;} }  else 
{ /* Llib/dsssl.scm 131 */
obj_t BgL_arg1993z00_882;obj_t BgL_arg1994z00_883;
{ /* Llib/dsssl.scm 131 */
obj_t BgL_pairz00_1858;
if(
PAIRP(BgL_argsz00_873))
{ /* Llib/dsssl.scm 131 */
BgL_pairz00_1858 = BgL_argsz00_873; }  else 
{ 
obj_t BgL_auxz00_3378;
BgL_auxz00_3378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4790)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_873); 
FAILURE(BgL_auxz00_3378,BFALSE,BFALSE);} 
BgL_arg1993z00_882 = 
CDR(BgL_pairz00_1858); } 
{ /* Llib/dsssl.scm 132 */
obj_t BgL_arg1995z00_884;
{ /* Llib/dsssl.scm 132 */
obj_t BgL_arg1996z00_885;
{ /* Llib/dsssl.scm 132 */
obj_t BgL_pairz00_1859;
BgL_pairz00_1859 = BgL_argsz00_873; 
{ /* Llib/dsssl.scm 132 */
obj_t BgL_pairz00_1862;
{ /* Llib/dsssl.scm 132 */
obj_t BgL_aux2754z00_2471;
BgL_aux2754z00_2471 = 
CAR(BgL_pairz00_1859); 
if(
PAIRP(BgL_aux2754z00_2471))
{ /* Llib/dsssl.scm 132 */
BgL_pairz00_1862 = BgL_aux2754z00_2471; }  else 
{ 
obj_t BgL_auxz00_3386;
BgL_auxz00_3386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4827)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2754z00_2471); 
FAILURE(BgL_auxz00_3386,BFALSE,BFALSE);} } 
BgL_arg1996z00_885 = 
CAR(BgL_pairz00_1862); } } 
{ /* Llib/dsssl.scm 132 */
obj_t BgL_auxz00_3391;
if(
SYMBOLP(BgL_arg1996z00_885))
{ /* Llib/dsssl.scm 132 */
BgL_auxz00_3391 = BgL_arg1996z00_885
; }  else 
{ 
obj_t BgL_auxz00_3394;
BgL_auxz00_3394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)4837)), BGl_string2907z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg1996z00_885); 
FAILURE(BgL_auxz00_3394,BFALSE,BFALSE);} 
BgL_arg1995z00_884 = 
BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_auxz00_3391); } } 
BgL_arg1994z00_883 = 
MAKE_PAIR(BgL_arg1995z00_884, BgL_resz00_874); } 
{ 
obj_t BgL_resz00_3401;obj_t BgL_argsz00_3400;
BgL_argsz00_3400 = BgL_arg1993z00_882; 
BgL_resz00_3401 = BgL_arg1994z00_883; 
BgL_resz00_874 = BgL_resz00_3401; 
BgL_argsz00_873 = BgL_argsz00_3400; 
goto BgL_zc3anonymousza31986ze3z83_875;} } } } } }  else 
{ 
obj_t BgL_argsz00_3402;
BgL_argsz00_3402 = 
CDR(BgL_argsz00_866); 
BgL_argsz00_866 = BgL_argsz00_3402; 
goto BgL_zc3anonymousza31983ze3z83_867;} }  else 
{ /* Llib/dsssl.scm 115 */
BgL_keywordzd2argumentszd2_828 = BNIL; } } 
if(
NULLP(BgL_argsz00_824))
{ /* Llib/dsssl.scm 156 */
return BgL_bodyz00_2329;}  else 
{ /* Llib/dsssl.scm 156 */
if(
PAIRP(BgL_argsz00_824))
{ /* Llib/dsssl.scm 160 */
bool_t BgL_testz00_3408;
{ /* Llib/dsssl.scm 160 */
bool_t BgL_testz00_3409;
{ /* Llib/dsssl.scm 160 */
obj_t BgL_auxz00_3410;
BgL_auxz00_3410 = 
CAR(BgL_argsz00_824); 
BgL_testz00_3409 = 
SYMBOLP(BgL_auxz00_3410); } 
if(BgL_testz00_3409)
{ /* Llib/dsssl.scm 160 */
BgL_testz00_3408 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 160 */
bool_t BgL_testz00_3413;
{ /* Llib/dsssl.scm 160 */
obj_t BgL_auxz00_3414;
BgL_auxz00_3414 = 
CAR(BgL_argsz00_824); 
BgL_testz00_3413 = 
PAIRP(BgL_auxz00_3414); } 
if(BgL_testz00_3413)
{ /* Llib/dsssl.scm 160 */
BgL_testz00_3408 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 160 */
BgL_testz00_3408 = ((bool_t)1)
; } } } 
if(BgL_testz00_3408)
{ /* Llib/dsssl.scm 162 */
long BgL_aux1832z00_834;
{ /* Llib/dsssl.scm 162 */
obj_t BgL_aux1830z00_838;
BgL_aux1830z00_838 = 
CAR(BgL_argsz00_824); 
if(
CNSTP(BgL_aux1830z00_838))
{ /* Llib/dsssl.scm 162 */
BgL_aux1832z00_834 = 
CCNST(BgL_aux1830z00_838); }  else 
{ /* Llib/dsssl.scm 162 */
BgL_aux1832z00_834 = ((long)-1); } } 
switch( BgL_aux1832z00_834) { case ((long)259) : 

{ /* Llib/dsssl.scm 164 */
obj_t BgL_arg1965z00_836;
BgL_arg1965z00_836 = 
CDR(BgL_argsz00_824); 
{ /* Llib/dsssl.scm 164 */
obj_t BgL_auxz00_3422;
if(
PROCEDUREP(BgL_restzd2statezd2_2327))
{ /* Llib/dsssl.scm 164 */
BgL_auxz00_3422 = BgL_restzd2statezd2_2327
; }  else 
{ 
obj_t BgL_auxz00_3425;
BgL_auxz00_3425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)5823)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_restzd2statezd2_2327); 
FAILURE(BgL_auxz00_3425,BFALSE,BFALSE);} 
return 
BGl_restzd2statezd2zz__dssslz00(BgL_auxz00_3422, BgL_arg1965z00_836, BgL_dssslzd2argzd2_825);} } break;case ((long)262) : 

{ /* Llib/dsssl.scm 166 */
obj_t BgL_arg1966z00_837;
BgL_arg1966z00_837 = 
CDR(BgL_argsz00_824); 
{ /* Llib/dsssl.scm 166 */
obj_t BgL_auxz00_3431;
if(
PROCEDUREP(BgL_nozd2restzd2keyzd2statezd2_2328))
{ /* Llib/dsssl.scm 166 */
BgL_auxz00_3431 = BgL_nozd2restzd2keyzd2statezd2_2328
; }  else 
{ 
obj_t BgL_auxz00_3434;
BgL_auxz00_3434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)5880)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_nozd2restzd2keyzd2statezd2_2328); 
FAILURE(BgL_auxz00_3434,BFALSE,BFALSE);} 
return 
BGl_nozd2restzd2keyzd2statezd2zz__dssslz00(BgL_auxz00_3431, BgL_arg1966z00_837, BgL_dssslzd2argzd2_825);} } break;
default: 
{ /* Llib/dsssl.scm 162 */
obj_t BgL_funz00_2483;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 162 */
BgL_funz00_2483 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3441;
BgL_auxz00_3441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)5783)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3441,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2483, ((long)3)))
{ /* Llib/dsssl.scm 162 */
return 
PROCEDURE_ENTRY(BgL_funz00_2483)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 162 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2483);} } } }  else 
{ /* Llib/dsssl.scm 171 */
obj_t BgL_ezd21399zd2_846;
BgL_ezd21399zd2_846 = 
CAR(BgL_argsz00_824); 
if(
PAIRP(BgL_ezd21399zd2_846))
{ /* Llib/dsssl.scm 171 */
obj_t BgL_carzd21404zd2_848;obj_t BgL_cdrzd21405zd2_849;
BgL_carzd21404zd2_848 = 
CAR(BgL_ezd21399zd2_846); 
BgL_cdrzd21405zd2_849 = 
CDR(BgL_ezd21399zd2_846); 
if(
SYMBOLP(BgL_carzd21404zd2_848))
{ /* Llib/dsssl.scm 171 */
if(
PAIRP(BgL_cdrzd21405zd2_849))
{ /* Llib/dsssl.scm 171 */
if(
NULLP(
CDR(BgL_cdrzd21405zd2_849)))
{ /* Llib/dsssl.scm 171 */
BgL_argz00_902 = BgL_carzd21404zd2_848; 
BgL_initializa7erza7_903 = 
CAR(BgL_cdrzd21405zd2_849); 
BgL_zc3anonymousza32012ze3z83_904:
{ /* Llib/dsssl.scm 139 */
obj_t BgL_tmpz00_905;
BgL_tmpz00_905 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol2923z00zz__dssslz00); 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2013z00_906;obj_t BgL_arg2015z00_907;
BgL_arg2013z00_906 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2016z00_908;obj_t BgL_arg2017z00_909;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2022z00_913;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2024z00_915;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2025z00_916;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2029z00_919;obj_t BgL_arg2030z00_920;
BgL_arg2029z00_919 = BGl_symbol2925z00zz__dssslz00; 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2031z00_921;obj_t BgL_arg2033z00_922;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2038z00_927;obj_t BgL_arg2039z00_928;
BgL_arg2038z00_927 = BGl_symbol2925z00zz__dssslz00; 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2040z00_929;obj_t BgL_arg2041z00_930;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2046z00_935;obj_t BgL_arg2047z00_936;
BgL_arg2046z00_935 = BGl_symbol2927z00zz__dssslz00; 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_list2048z00_937;
BgL_list2048z00_937 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2047z00_936 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_825, BgL_list2048z00_937); } 
BgL_arg2040z00_929 = 
MAKE_PAIR(BgL_arg2046z00_935, BgL_arg2047z00_936); } 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_arg2051z00_938;obj_t BgL_arg2052z00_939;
BgL_arg2051z00_938 = BGl_symbol2929z00zz__dssslz00; 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_arg2053z00_940;obj_t BgL_arg2054z00_941;
{ /* Llib/dsssl.scm 142 */
obj_t BgL_arg2058z00_945;obj_t BgL_arg2059z00_946;
BgL_arg2058z00_945 = BGl_symbol2931z00zz__dssslz00; 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_list2060z00_947;
BgL_list2060z00_947 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2059z00_946 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_825, BgL_list2060z00_947); } 
BgL_arg2053z00_940 = 
MAKE_PAIR(BgL_arg2058z00_945, BgL_arg2059z00_946); } 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_arg2061z00_948;obj_t BgL_arg2062z00_949;
BgL_arg2061z00_948 = BGl_symbol2902z00zz__dssslz00; 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_list2063z00_950;
BgL_list2063z00_950 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2062z00_949 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_keywordzd2argumentszd2_828, BgL_list2063z00_950); } 
BgL_arg2054z00_941 = 
MAKE_PAIR(BgL_arg2061z00_948, BgL_arg2062z00_949); } 
{ /* Llib/dsssl.scm 142 */
obj_t BgL_list2056z00_943;
{ /* Llib/dsssl.scm 142 */
obj_t BgL_arg2057z00_944;
BgL_arg2057z00_944 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2056z00_943 = 
MAKE_PAIR(BgL_arg2054z00_941, BgL_arg2057z00_944); } 
BgL_arg2052z00_939 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2053z00_940, BgL_list2056z00_943); } } 
BgL_arg2041z00_930 = 
MAKE_PAIR(BgL_arg2051z00_938, BgL_arg2052z00_939); } 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_list2043z00_932;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2044z00_933;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2045z00_934;
BgL_arg2045z00_934 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2044z00_933 = 
MAKE_PAIR(BgL_arg2041z00_930, BgL_arg2045z00_934); } 
BgL_list2043z00_932 = 
MAKE_PAIR(BTRUE, BgL_arg2044z00_933); } 
BgL_arg2039z00_928 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2040z00_929, BgL_list2043z00_932); } } 
BgL_arg2031z00_921 = 
MAKE_PAIR(BgL_arg2038z00_927, BgL_arg2039z00_928); } 
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2064z00_951;obj_t BgL_arg2065z00_952;
BgL_arg2064z00_951 = BGl_symbol2882z00zz__dssslz00; 
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2066z00_953;obj_t BgL_arg2067z00_954;
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2072z00_958;
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2076z00_960;
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2077z00_961;
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2080z00_964;obj_t BgL_arg2081z00_965;
BgL_arg2080z00_964 = BGl_symbol2931z00zz__dssslz00; 
{ /* Llib/dsssl.scm 144 */
obj_t BgL_list2082z00_966;
BgL_list2082z00_966 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2081z00_965 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_825, BgL_list2082z00_966); } 
BgL_arg2077z00_961 = 
MAKE_PAIR(BgL_arg2080z00_964, BgL_arg2081z00_965); } 
{ /* Llib/dsssl.scm 144 */
obj_t BgL_list2079z00_963;
BgL_list2079z00_963 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2076z00_960 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2077z00_961, BgL_list2079z00_963); } } 
BgL_arg2072z00_958 = 
MAKE_PAIR(BgL_tmpz00_905, BgL_arg2076z00_960); } 
BgL_arg2066z00_953 = 
MAKE_PAIR(BgL_arg2072z00_958, BNIL); } 
{ /* Llib/dsssl.scm 151 */
obj_t BgL_arg2083z00_967;obj_t BgL_arg2084z00_968;
BgL_arg2083z00_967 = BGl_symbol2909z00zz__dssslz00; 
{ /* Llib/dsssl.scm 152 */
obj_t BgL_arg2085z00_969;
{ /* Llib/dsssl.scm 152 */
obj_t BgL_arg2090z00_973;obj_t BgL_arg2091z00_974;
BgL_arg2090z00_973 = BGl_symbol2933z00zz__dssslz00; 
{ /* Llib/dsssl.scm 152 */
obj_t BgL_arg2092z00_975;
{ /* Llib/dsssl.scm 152 */
obj_t BgL_arg2096z00_979;obj_t BgL_arg2097z00_980;
BgL_arg2096z00_979 = BGl_symbol2935z00zz__dssslz00; 
{ /* Llib/dsssl.scm 152 */
obj_t BgL_list2098z00_981;
BgL_list2098z00_981 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2097z00_980 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_825, BgL_list2098z00_981); } 
BgL_arg2092z00_975 = 
MAKE_PAIR(BgL_arg2096z00_979, BgL_arg2097z00_980); } 
{ /* Llib/dsssl.scm 152 */
obj_t BgL_list2094z00_977;
{ /* Llib/dsssl.scm 152 */
obj_t BgL_arg2095z00_978;
BgL_arg2095z00_978 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2094z00_977 = 
MAKE_PAIR(BgL_arg2092z00_975, BgL_arg2095z00_978); } 
BgL_arg2091z00_974 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_dssslzd2argzd2_825, BgL_list2094z00_977); } } 
BgL_arg2085z00_969 = 
MAKE_PAIR(BgL_arg2090z00_973, BgL_arg2091z00_974); } 
{ /* Llib/dsssl.scm 151 */
obj_t BgL_list2087z00_971;
{ /* Llib/dsssl.scm 151 */
obj_t BgL_arg2089z00_972;
BgL_arg2089z00_972 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2087z00_971 = 
MAKE_PAIR(BgL_tmpz00_905, BgL_arg2089z00_972); } 
BgL_arg2084z00_968 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2085z00_969, BgL_list2087z00_971); } } 
BgL_arg2067z00_954 = 
MAKE_PAIR(BgL_arg2083z00_967, BgL_arg2084z00_968); } 
{ /* Llib/dsssl.scm 144 */
obj_t BgL_list2069z00_956;
{ /* Llib/dsssl.scm 144 */
obj_t BgL_arg2070z00_957;
BgL_arg2070z00_957 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2069z00_956 = 
MAKE_PAIR(BgL_arg2067z00_954, BgL_arg2070z00_957); } 
BgL_arg2065z00_952 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2066z00_953, BgL_list2069z00_956); } } 
BgL_arg2033z00_922 = 
MAKE_PAIR(BgL_arg2064z00_951, BgL_arg2065z00_952); } 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_list2035z00_924;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2036z00_925;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2037z00_926;
BgL_arg2037z00_926 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2036z00_925 = 
MAKE_PAIR(BgL_arg2033z00_922, BgL_arg2037z00_926); } 
BgL_list2035z00_924 = 
MAKE_PAIR(BgL_initializa7erza7_903, BgL_arg2036z00_925); } 
BgL_arg2030z00_920 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2031z00_921, BgL_list2035z00_924); } } 
BgL_arg2025z00_916 = 
MAKE_PAIR(BgL_arg2029z00_919, BgL_arg2030z00_920); } 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_list2028z00_918;
BgL_list2028z00_918 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2024z00_915 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2025z00_916, BgL_list2028z00_918); } } 
BgL_arg2022z00_913 = 
MAKE_PAIR(BgL_argz00_902, BgL_arg2024z00_915); } 
BgL_arg2016z00_908 = 
MAKE_PAIR(BgL_arg2022z00_913, BNIL); } 
{ /* Llib/dsssl.scm 154 */
obj_t BgL_arg2099z00_982;
{ /* Llib/dsssl.scm 154 */
obj_t BgL_pairz00_1864;
if(
PAIRP(BgL_argsz00_824))
{ /* Llib/dsssl.scm 154 */
BgL_pairz00_1864 = BgL_argsz00_824; }  else 
{ 
obj_t BgL_auxz00_3515;
BgL_auxz00_3515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)5520)), BGl_string2937z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_824); 
FAILURE(BgL_auxz00_3515,BFALSE,BFALSE);} 
BgL_arg2099z00_982 = 
CDR(BgL_pairz00_1864); } 
BgL_arg2017z00_909 = 
BGl_optionalzd2statez72za0zz__dssslz00(BgL_bodyz00_2329, BgL_nozd2restzd2keyzd2statezd2_2328, BgL_restzd2statezd2_2327, BgL_formalsz00_2326, BgL_wherez00_2325, BgL_errz00_2324, BgL_arg2099z00_982, BgL_dssslzd2argzd2_825); } 
{ /* Llib/dsssl.scm 140 */
obj_t BgL_list2019z00_911;
{ /* Llib/dsssl.scm 140 */
obj_t BgL_arg2021z00_912;
BgL_arg2021z00_912 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_list2019z00_911 = 
MAKE_PAIR(BgL_arg2017z00_909, BgL_arg2021z00_912); } 
BgL_arg2015z00_907 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2016z00_908, BgL_list2019z00_911); } } 
return 
MAKE_PAIR(BgL_arg2013z00_906, BgL_arg2015z00_907);} } }  else 
{ /* Llib/dsssl.scm 171 */
obj_t BgL_funz00_2488;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 171 */
BgL_funz00_2488 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3528;
BgL_auxz00_3528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6047)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3528,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2488, ((long)3)))
{ /* Llib/dsssl.scm 171 */
return 
PROCEDURE_ENTRY(BgL_funz00_2488)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 171 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2488);} } }  else 
{ /* Llib/dsssl.scm 171 */
obj_t BgL_funz00_2493;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 171 */
BgL_funz00_2493 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3539;
BgL_auxz00_3539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6047)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3539,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2493, ((long)3)))
{ /* Llib/dsssl.scm 171 */
return 
PROCEDURE_ENTRY(BgL_funz00_2493)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 171 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2493);} } }  else 
{ /* Llib/dsssl.scm 171 */
obj_t BgL_funz00_2498;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 171 */
BgL_funz00_2498 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3550;
BgL_auxz00_3550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6047)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3550,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2498, ((long)3)))
{ /* Llib/dsssl.scm 171 */
return 
PROCEDURE_ENTRY(BgL_funz00_2498)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 171 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2498);} } }  else 
{ /* Llib/dsssl.scm 171 */
if(
SYMBOLP(BgL_ezd21399zd2_846))
{ 
obj_t BgL_initializa7erza7_3562;obj_t BgL_argz00_3561;
BgL_argz00_3561 = BgL_ezd21399zd2_846; 
BgL_initializa7erza7_3562 = BFALSE; 
BgL_initializa7erza7_903 = BgL_initializa7erza7_3562; 
BgL_argz00_902 = BgL_argz00_3561; 
goto BgL_zc3anonymousza32012ze3z83_904;}  else 
{ /* Llib/dsssl.scm 171 */
obj_t BgL_funz00_2503;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 171 */
BgL_funz00_2503 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3565;
BgL_auxz00_3565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)6047)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3565,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2503, ((long)3)))
{ /* Llib/dsssl.scm 171 */
return 
PROCEDURE_ENTRY(BgL_funz00_2503)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 171 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2503);} } } } }  else 
{ /* Llib/dsssl.scm 159 */
obj_t BgL_funz00_2508;
if(
PROCEDUREP(BgL_errz00_2324))
{ /* Llib/dsssl.scm 159 */
BgL_funz00_2508 = BgL_errz00_2324; }  else 
{ 
obj_t BgL_auxz00_3576;
BgL_auxz00_3576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)5602)), BGl_string2938z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2324); 
FAILURE(BgL_auxz00_3576,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2508, ((long)3)))
{ /* Llib/dsssl.scm 159 */
return 
PROCEDURE_ENTRY(BgL_funz00_2508)(BgL_errz00_2324, BgL_wherez00_2325, BGl_string2939z00zz__dssslz00, BgL_formalsz00_2326, BEOA);}  else 
{ /* Llib/dsssl.scm 159 */
FAILURE(BGl_string2940z00zz__dssslz00,BGl_list2941z00zz__dssslz00,BgL_funz00_2508);} } } } } } 
}



/* dsssl-check-key-args! */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t BgL_dssslzd2argszd2_6, obj_t BgL_keyzd2listzd2_7)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 300 */
if(
NULLP(BgL_keyzd2listzd2_7))
{ 
obj_t BgL_argsz00_1214;
BgL_argsz00_1214 = BgL_dssslzd2argszd2_6; 
BgL_zc3anonymousza32280ze3z83_1215:
if(
NULLP(BgL_argsz00_1214))
{ /* Llib/dsssl.scm 304 */
return BgL_dssslzd2argszd2_6;}  else 
{ /* Llib/dsssl.scm 306 */
bool_t BgL_testz00_3589;
if(
PAIRP(BgL_argsz00_1214))
{ /* Llib/dsssl.scm 306 */
if(
NULLP(
CDR(BgL_argsz00_1214)))
{ /* Llib/dsssl.scm 307 */
BgL_testz00_3589 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 308 */
bool_t BgL_testz00_3595;
{ /* Llib/dsssl.scm 308 */
obj_t BgL_auxz00_3596;
BgL_auxz00_3596 = 
CAR(BgL_argsz00_1214); 
BgL_testz00_3595 = 
KEYWORDP(BgL_auxz00_3596); } 
if(BgL_testz00_3595)
{ /* Llib/dsssl.scm 308 */
BgL_testz00_3589 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 308 */
BgL_testz00_3589 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 306 */
BgL_testz00_3589 = ((bool_t)1)
; } 
if(BgL_testz00_3589)
{ /* Llib/dsssl.scm 306 */
return 
BGl_errorz00zz__errorz00(BGl_string2915z00zz__dssslz00, BGl_string2942z00zz__dssslz00, BgL_argsz00_1214);}  else 
{ /* Llib/dsssl.scm 313 */
obj_t BgL_arg2283z00_1218;
{ /* Llib/dsssl.scm 313 */
obj_t BgL_pairz00_1971;
if(
PAIRP(BgL_argsz00_1214))
{ /* Llib/dsssl.scm 313 */
BgL_pairz00_1971 = BgL_argsz00_1214; }  else 
{ 
obj_t BgL_auxz00_3602;
BgL_auxz00_3602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10528)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1214); 
FAILURE(BgL_auxz00_3602,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 313 */
obj_t BgL_pairz00_1974;
{ /* Llib/dsssl.scm 313 */
obj_t BgL_aux2790z00_2513;
BgL_aux2790z00_2513 = 
CDR(BgL_pairz00_1971); 
if(
PAIRP(BgL_aux2790z00_2513))
{ /* Llib/dsssl.scm 313 */
BgL_pairz00_1974 = BgL_aux2790z00_2513; }  else 
{ 
obj_t BgL_auxz00_3609;
BgL_auxz00_3609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10522)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2790z00_2513); 
FAILURE(BgL_auxz00_3609,BFALSE,BFALSE);} } 
BgL_arg2283z00_1218 = 
CDR(BgL_pairz00_1974); } } 
{ 
obj_t BgL_argsz00_3614;
BgL_argsz00_3614 = BgL_arg2283z00_1218; 
BgL_argsz00_1214 = BgL_argsz00_3614; 
goto BgL_zc3anonymousza32280ze3z83_1215;} } } }  else 
{ 
obj_t BgL_argsz00_1227;bool_t BgL_armedz00_1228;obj_t BgL_optsz00_1229;
BgL_argsz00_1227 = BgL_dssslzd2argszd2_6; 
BgL_armedz00_1228 = ((bool_t)0); 
BgL_optsz00_1229 = BNIL; 
BgL_zc3anonymousza32291ze3z83_1230:
if(
NULLP(BgL_argsz00_1227))
{ /* Llib/dsssl.scm 319 */
obj_t BgL_auxz00_3617;
{ /* Llib/dsssl.scm 319 */
bool_t BgL_testz00_3618;
if(
PAIRP(BgL_optsz00_1229))
{ /* Llib/dsssl.scm 319 */
BgL_testz00_3618 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 319 */
BgL_testz00_3618 = 
NULLP(BgL_optsz00_1229)
; } 
if(BgL_testz00_3618)
{ /* Llib/dsssl.scm 319 */
BgL_auxz00_3617 = BgL_optsz00_1229
; }  else 
{ 
obj_t BgL_auxz00_3622;
BgL_auxz00_3622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10651)), BGl_string2907z00zz__dssslz00, BGl_string2908z00zz__dssslz00, BgL_optsz00_1229); 
FAILURE(BgL_auxz00_3622,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_3617);}  else 
{ /* Llib/dsssl.scm 320 */
bool_t BgL_testz00_3627;
if(
PAIRP(BgL_argsz00_1227))
{ /* Llib/dsssl.scm 320 */
if(
NULLP(
CDR(BgL_argsz00_1227)))
{ /* Llib/dsssl.scm 321 */
BgL_testz00_3627 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 322 */
bool_t BgL_testz00_3633;
{ /* Llib/dsssl.scm 322 */
obj_t BgL_auxz00_3634;
BgL_auxz00_3634 = 
CAR(BgL_argsz00_1227); 
BgL_testz00_3633 = 
KEYWORDP(BgL_auxz00_3634); } 
if(BgL_testz00_3633)
{ /* Llib/dsssl.scm 323 */
bool_t BgL_testz00_3637;
{ /* Llib/dsssl.scm 323 */
obj_t BgL_auxz00_3638;
{ /* Llib/dsssl.scm 323 */
obj_t BgL_auxz00_3639;
{ /* Llib/dsssl.scm 323 */
bool_t BgL_testz00_3641;
if(
PAIRP(BgL_keyzd2listzd2_7))
{ /* Llib/dsssl.scm 323 */
BgL_testz00_3641 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 323 */
BgL_testz00_3641 = 
NULLP(BgL_keyzd2listzd2_7)
; } 
if(BgL_testz00_3641)
{ /* Llib/dsssl.scm 323 */
BgL_auxz00_3639 = BgL_keyzd2listzd2_7
; }  else 
{ 
obj_t BgL_auxz00_3645;
BgL_auxz00_3645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10769)), BGl_string2907z00zz__dssslz00, BGl_string2908z00zz__dssslz00, BgL_keyzd2listzd2_7); 
FAILURE(BgL_auxz00_3645,BFALSE,BFALSE);} } 
BgL_auxz00_3638 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_argsz00_1227), BgL_auxz00_3639); } 
BgL_testz00_3637 = 
CBOOL(BgL_auxz00_3638); } 
if(BgL_testz00_3637)
{ /* Llib/dsssl.scm 323 */
BgL_testz00_3627 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 323 */
BgL_testz00_3627 = ((bool_t)1)
; } }  else 
{ /* Llib/dsssl.scm 322 */
BgL_testz00_3627 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 320 */
BgL_testz00_3627 = ((bool_t)1)
; } 
if(BgL_testz00_3627)
{ /* Llib/dsssl.scm 320 */
if(BgL_armedz00_1228)
{ /* Llib/dsssl.scm 326 */
obj_t BgL_arg2294z00_1233;obj_t BgL_arg2295z00_1234;
{ /* Llib/dsssl.scm 326 */
obj_t BgL_pairz00_1982;
if(
PAIRP(BgL_argsz00_1227))
{ /* Llib/dsssl.scm 326 */
BgL_pairz00_1982 = BgL_argsz00_1227; }  else 
{ 
obj_t BgL_auxz00_3654;
BgL_auxz00_3654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10852)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1227); 
FAILURE(BgL_auxz00_3654,BFALSE,BFALSE);} 
BgL_arg2294z00_1233 = 
CDR(BgL_pairz00_1982); } 
BgL_arg2295z00_1234 = 
MAKE_PAIR(
CAR(BgL_argsz00_1227), BgL_optsz00_1229); 
{ 
obj_t BgL_optsz00_3663;bool_t BgL_armedz00_3662;obj_t BgL_argsz00_3661;
BgL_argsz00_3661 = BgL_arg2294z00_1233; 
BgL_armedz00_3662 = ((bool_t)0); 
BgL_optsz00_3663 = BgL_arg2295z00_1234; 
BgL_optsz00_1229 = BgL_optsz00_3663; 
BgL_armedz00_1228 = BgL_armedz00_3662; 
BgL_argsz00_1227 = BgL_argsz00_3661; 
goto BgL_zc3anonymousza32291ze3z83_1230;} }  else 
{ /* Llib/dsssl.scm 325 */
obj_t BgL_arg2297z00_1236;
{ /* Llib/dsssl.scm 325 */
obj_t BgL_pairz00_1984;
if(
PAIRP(BgL_argsz00_1227))
{ /* Llib/dsssl.scm 325 */
BgL_pairz00_1984 = BgL_argsz00_1227; }  else 
{ 
obj_t BgL_auxz00_3666;
BgL_auxz00_3666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10819)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1227); 
FAILURE(BgL_auxz00_3666,BFALSE,BFALSE);} 
BgL_arg2297z00_1236 = 
CDR(BgL_pairz00_1984); } 
{ 
obj_t BgL_argsz00_3671;
BgL_argsz00_3671 = BgL_arg2297z00_1236; 
BgL_argsz00_1227 = BgL_argsz00_3671; 
goto BgL_zc3anonymousza32291ze3z83_1230;} } }  else 
{ /* Llib/dsssl.scm 330 */
obj_t BgL_arg2300z00_1237;
{ /* Llib/dsssl.scm 330 */
obj_t BgL_pairz00_1985;
if(
PAIRP(BgL_argsz00_1227))
{ /* Llib/dsssl.scm 330 */
BgL_pairz00_1985 = BgL_argsz00_1227; }  else 
{ 
obj_t BgL_auxz00_3674;
BgL_auxz00_3674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10924)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1227); 
FAILURE(BgL_auxz00_3674,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 330 */
obj_t BgL_pairz00_1988;
{ /* Llib/dsssl.scm 330 */
obj_t BgL_aux2804z00_2527;
BgL_aux2804z00_2527 = 
CDR(BgL_pairz00_1985); 
if(
PAIRP(BgL_aux2804z00_2527))
{ /* Llib/dsssl.scm 330 */
BgL_pairz00_1988 = BgL_aux2804z00_2527; }  else 
{ 
obj_t BgL_auxz00_3681;
BgL_auxz00_3681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)10918)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2804z00_2527); 
FAILURE(BgL_auxz00_3681,BFALSE,BFALSE);} } 
BgL_arg2300z00_1237 = 
CDR(BgL_pairz00_1988); } } 
{ 
bool_t BgL_armedz00_3687;obj_t BgL_argsz00_3686;
BgL_argsz00_3686 = BgL_arg2300z00_1237; 
BgL_armedz00_3687 = ((bool_t)1); 
BgL_armedz00_1228 = BgL_armedz00_3687; 
BgL_argsz00_1227 = BgL_argsz00_3686; 
goto BgL_zc3anonymousza32291ze3z83_1230;} } } } } 
}



/* _dsssl-check-key-args! */
obj_t BGl__dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t BgL_envz00_2309, obj_t BgL_dssslzd2argszd2_2310, obj_t BgL_keyzd2listzd2_2311)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 300 */
return 
BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(BgL_dssslzd2argszd2_2310, BgL_keyzd2listzd2_2311);} 
}



/* dsssl-get-key-arg */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t BgL_dssslzd2argszd2_8, obj_t BgL_keywordz00_9, obj_t BgL_initializa7erza7_10)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 338 */
{ 
obj_t BgL_argsz00_1247;
BgL_argsz00_1247 = BgL_dssslzd2argszd2_8; 
BgL_zc3anonymousza32308ze3z83_1248:
if(
NULLP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 341 */
return BgL_initializa7erza7_10;}  else 
{ /* Llib/dsssl.scm 343 */
bool_t BgL_testz00_3691;
{ /* Llib/dsssl.scm 343 */
obj_t BgL_auxz00_3692;
{ /* Llib/dsssl.scm 343 */
obj_t BgL_pairz00_1990;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 343 */
BgL_pairz00_1990 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3695;
BgL_auxz00_3695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11551)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3695,BFALSE,BFALSE);} 
BgL_auxz00_3692 = 
CAR(BgL_pairz00_1990); } 
BgL_testz00_3691 = 
KEYWORDP(BgL_auxz00_3692); } 
if(BgL_testz00_3691)
{ /* Llib/dsssl.scm 345 */
bool_t BgL_testz00_3701;
{ /* Llib/dsssl.scm 345 */
obj_t BgL_auxz00_3702;
{ /* Llib/dsssl.scm 345 */
obj_t BgL_pairz00_1992;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 345 */
BgL_pairz00_1992 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3705;
BgL_auxz00_3705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11594)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3705,BFALSE,BFALSE);} 
BgL_auxz00_3702 = 
CAR(BgL_pairz00_1992); } 
BgL_testz00_3701 = 
(BgL_auxz00_3702==BgL_keywordz00_9); } 
if(BgL_testz00_3701)
{ /* Llib/dsssl.scm 346 */
bool_t BgL_testz00_3711;
{ /* Llib/dsssl.scm 346 */
obj_t BgL_auxz00_3712;
{ /* Llib/dsssl.scm 346 */
obj_t BgL_pairz00_1993;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 346 */
BgL_pairz00_1993 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3715;
BgL_auxz00_3715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11633)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3715,BFALSE,BFALSE);} 
BgL_auxz00_3712 = 
CDR(BgL_pairz00_1993); } 
BgL_testz00_3711 = 
PAIRP(BgL_auxz00_3712); } 
if(BgL_testz00_3711)
{ /* Llib/dsssl.scm 350 */
obj_t BgL_pairz00_1995;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 350 */
BgL_pairz00_1995 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3723;
BgL_auxz00_3723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11745)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3723,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 350 */
obj_t BgL_pairz00_1998;
{ /* Llib/dsssl.scm 350 */
obj_t BgL_aux2814z00_2537;
BgL_aux2814z00_2537 = 
CDR(BgL_pairz00_1995); 
if(
PAIRP(BgL_aux2814z00_2537))
{ /* Llib/dsssl.scm 350 */
BgL_pairz00_1998 = BgL_aux2814z00_2537; }  else 
{ 
obj_t BgL_auxz00_3730;
BgL_auxz00_3730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11739)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2814z00_2537); 
FAILURE(BgL_auxz00_3730,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_1998);} }  else 
{ /* Llib/dsssl.scm 347 */
obj_t BgL_arg2313z00_1253;obj_t BgL_arg2315z00_1255;
BgL_arg2313z00_1253 = BGl_symbol2904z00zz__dssslz00; 
{ /* Llib/dsssl.scm 349 */
obj_t BgL_pairz00_1999;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 349 */
BgL_pairz00_1999 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3737;
BgL_auxz00_3737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11725)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3737,BFALSE,BFALSE);} 
BgL_arg2315z00_1255 = 
CAR(BgL_pairz00_1999); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2313z00_1253, BGl_string2943z00zz__dssslz00, BgL_arg2315z00_1255);} }  else 
{ /* Llib/dsssl.scm 352 */
bool_t BgL_testz00_3743;
{ /* Llib/dsssl.scm 352 */
obj_t BgL_auxz00_3744;
{ /* Llib/dsssl.scm 352 */
obj_t BgL_pairz00_2000;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 352 */
BgL_pairz00_2000 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3747;
BgL_auxz00_3747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11785)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3747,BFALSE,BFALSE);} 
BgL_auxz00_3744 = 
CDR(BgL_pairz00_2000); } 
BgL_testz00_3743 = 
PAIRP(BgL_auxz00_3744); } 
if(BgL_testz00_3743)
{ /* Llib/dsssl.scm 356 */
obj_t BgL_arg2318z00_1258;
{ /* Llib/dsssl.scm 356 */
obj_t BgL_pairz00_2002;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 356 */
BgL_pairz00_2002 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3755;
BgL_auxz00_3755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11903)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3755,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 356 */
obj_t BgL_pairz00_2005;
{ /* Llib/dsssl.scm 356 */
obj_t BgL_aux2822z00_2545;
BgL_aux2822z00_2545 = 
CDR(BgL_pairz00_2002); 
if(
PAIRP(BgL_aux2822z00_2545))
{ /* Llib/dsssl.scm 356 */
BgL_pairz00_2005 = BgL_aux2822z00_2545; }  else 
{ 
obj_t BgL_auxz00_3762;
BgL_auxz00_3762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11897)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2822z00_2545); 
FAILURE(BgL_auxz00_3762,BFALSE,BFALSE);} } 
BgL_arg2318z00_1258 = 
CDR(BgL_pairz00_2005); } } 
{ 
obj_t BgL_argsz00_3767;
BgL_argsz00_3767 = BgL_arg2318z00_1258; 
BgL_argsz00_1247 = BgL_argsz00_3767; 
goto BgL_zc3anonymousza32308ze3z83_1248;} }  else 
{ /* Llib/dsssl.scm 353 */
obj_t BgL_arg2319z00_1259;obj_t BgL_arg2321z00_1261;
BgL_arg2319z00_1259 = BGl_symbol2904z00zz__dssslz00; 
{ /* Llib/dsssl.scm 355 */
obj_t BgL_pairz00_2006;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 355 */
BgL_pairz00_2006 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3770;
BgL_auxz00_3770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11877)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3770,BFALSE,BFALSE);} 
BgL_arg2321z00_1261 = 
CAR(BgL_pairz00_2006); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2319z00_1259, BGl_string2943z00zz__dssslz00, BgL_arg2321z00_1261);} } }  else 
{ /* Llib/dsssl.scm 344 */
obj_t BgL_arg2324z00_1264;
{ /* Llib/dsssl.scm 344 */
obj_t BgL_pairz00_2007;
if(
PAIRP(BgL_argsz00_1247))
{ /* Llib/dsssl.scm 344 */
BgL_pairz00_2007 = BgL_argsz00_1247; }  else 
{ 
obj_t BgL_auxz00_3778;
BgL_auxz00_3778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11573)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1247); 
FAILURE(BgL_auxz00_3778,BFALSE,BFALSE);} 
BgL_arg2324z00_1264 = 
CDR(BgL_pairz00_2007); } 
{ 
obj_t BgL_argsz00_3783;
BgL_argsz00_3783 = BgL_arg2324z00_1264; 
BgL_argsz00_1247 = BgL_argsz00_3783; 
goto BgL_zc3anonymousza32308ze3z83_1248;} } } } } 
}



/* _dsssl-get-key-arg */
obj_t BGl__dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t BgL_envz00_2312, obj_t BgL_dssslzd2argszd2_2313, obj_t BgL_keywordz00_2314, obj_t BgL_initializa7erza7_2315)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 338 */
{ /* Llib/dsssl.scm 341 */
obj_t BgL_auxz00_3784;
if(
KEYWORDP(BgL_keywordz00_2314))
{ /* Llib/dsssl.scm 341 */
BgL_auxz00_3784 = BgL_keywordz00_2314
; }  else 
{ 
obj_t BgL_auxz00_3787;
BgL_auxz00_3787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)11499)), BGl_string2944z00zz__dssslz00, BGl_string2945z00zz__dssslz00, BgL_keywordz00_2314); 
FAILURE(BgL_auxz00_3787,BFALSE,BFALSE);} 
return 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dssslzd2argszd2_2313, BgL_auxz00_3784, BgL_initializa7erza7_2315);} } 
}



/* dsssl-get-key-rest-arg */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t BgL_dssslzd2argszd2_11, obj_t BgL_keysz00_12)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 361 */
{ 
obj_t BgL_argsz00_1268;
BgL_argsz00_1268 = BgL_dssslzd2argszd2_11; 
BgL_zc3anonymousza32326ze3z83_1269:
if(
NULLP(BgL_argsz00_1268))
{ /* Llib/dsssl.scm 364 */
return BNIL;}  else 
{ /* Llib/dsssl.scm 366 */
bool_t BgL_testz00_3794;
{ /* Llib/dsssl.scm 366 */
bool_t BgL_testz00_3795;
{ /* Llib/dsssl.scm 366 */
obj_t BgL_auxz00_3796;
{ /* Llib/dsssl.scm 366 */
obj_t BgL_pairz00_2009;
if(
PAIRP(BgL_argsz00_1268))
{ /* Llib/dsssl.scm 366 */
BgL_pairz00_2009 = BgL_argsz00_1268; }  else 
{ 
obj_t BgL_auxz00_3799;
BgL_auxz00_3799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12286)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1268); 
FAILURE(BgL_auxz00_3799,BFALSE,BFALSE);} 
BgL_auxz00_3796 = 
CAR(BgL_pairz00_2009); } 
BgL_testz00_3795 = 
KEYWORDP(BgL_auxz00_3796); } 
if(BgL_testz00_3795)
{ /* Llib/dsssl.scm 367 */
bool_t BgL_testz00_3805;
{ /* Llib/dsssl.scm 367 */
obj_t BgL_auxz00_3806;
{ /* Llib/dsssl.scm 367 */
obj_t BgL_pairz00_2011;
if(
PAIRP(BgL_argsz00_1268))
{ /* Llib/dsssl.scm 367 */
BgL_pairz00_2011 = BgL_argsz00_1268; }  else 
{ 
obj_t BgL_auxz00_3809;
BgL_auxz00_3809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12313)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1268); 
FAILURE(BgL_auxz00_3809,BFALSE,BFALSE);} 
BgL_auxz00_3806 = 
CDR(BgL_pairz00_2011); } 
BgL_testz00_3805 = 
NULLP(BgL_auxz00_3806); } 
if(BgL_testz00_3805)
{ /* Llib/dsssl.scm 367 */
BgL_testz00_3794 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 368 */
bool_t BgL_testz00_3815;
{ /* Llib/dsssl.scm 368 */
obj_t BgL_auxz00_3816;
{ /* Llib/dsssl.scm 368 */
obj_t BgL_auxz00_3817;
{ /* Llib/dsssl.scm 368 */
obj_t BgL_pairz00_2013;
if(
PAIRP(BgL_argsz00_1268))
{ /* Llib/dsssl.scm 368 */
BgL_pairz00_2013 = BgL_argsz00_1268; }  else 
{ 
obj_t BgL_auxz00_3820;
BgL_auxz00_3820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12343)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1268); 
FAILURE(BgL_auxz00_3820,BFALSE,BFALSE);} 
BgL_auxz00_3817 = 
CAR(BgL_pairz00_2013); } 
BgL_auxz00_3816 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3817, BgL_keysz00_12); } 
BgL_testz00_3815 = 
CBOOL(BgL_auxz00_3816); } 
if(BgL_testz00_3815)
{ /* Llib/dsssl.scm 368 */
BgL_testz00_3794 = ((bool_t)0)
; }  else 
{ /* Llib/dsssl.scm 368 */
BgL_testz00_3794 = ((bool_t)1)
; } } }  else 
{ /* Llib/dsssl.scm 366 */
BgL_testz00_3794 = ((bool_t)1)
; } } 
if(BgL_testz00_3794)
{ /* Llib/dsssl.scm 366 */
return BgL_argsz00_1268;}  else 
{ /* Llib/dsssl.scm 371 */
obj_t BgL_arg2329z00_1272;
{ /* Llib/dsssl.scm 371 */
obj_t BgL_pairz00_2014;
if(
PAIRP(BgL_argsz00_1268))
{ /* Llib/dsssl.scm 371 */
BgL_pairz00_2014 = BgL_argsz00_1268; }  else 
{ 
obj_t BgL_auxz00_3829;
BgL_auxz00_3829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12389)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_argsz00_1268); 
FAILURE(BgL_auxz00_3829,BFALSE,BFALSE);} 
{ /* Llib/dsssl.scm 371 */
obj_t BgL_pairz00_2017;
{ /* Llib/dsssl.scm 371 */
obj_t BgL_aux2838z00_2561;
BgL_aux2838z00_2561 = 
CDR(BgL_pairz00_2014); 
if(
PAIRP(BgL_aux2838z00_2561))
{ /* Llib/dsssl.scm 371 */
BgL_pairz00_2017 = BgL_aux2838z00_2561; }  else 
{ 
obj_t BgL_auxz00_3836;
BgL_auxz00_3836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12383)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2838z00_2561); 
FAILURE(BgL_auxz00_3836,BFALSE,BFALSE);} } 
BgL_arg2329z00_1272 = 
CDR(BgL_pairz00_2017); } } 
{ 
obj_t BgL_argsz00_3841;
BgL_argsz00_3841 = BgL_arg2329z00_1272; 
BgL_argsz00_1268 = BgL_argsz00_3841; 
goto BgL_zc3anonymousza32326ze3z83_1269;} } } } } 
}



/* _dsssl-get-key-rest-arg */
obj_t BGl__dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t BgL_envz00_2316, obj_t BgL_dssslzd2argszd2_2317, obj_t BgL_keysz00_2318)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 361 */
{ /* Llib/dsssl.scm 364 */
obj_t BgL_auxz00_3842;
{ /* Llib/dsssl.scm 364 */
bool_t BgL_testz00_3843;
if(
PAIRP(BgL_keysz00_2318))
{ /* Llib/dsssl.scm 364 */
BgL_testz00_3843 = ((bool_t)1)
; }  else 
{ /* Llib/dsssl.scm 364 */
BgL_testz00_3843 = 
NULLP(BgL_keysz00_2318)
; } 
if(BgL_testz00_3843)
{ /* Llib/dsssl.scm 364 */
BgL_auxz00_3842 = BgL_keysz00_2318
; }  else 
{ 
obj_t BgL_auxz00_3847;
BgL_auxz00_3847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)12238)), BGl_string2946z00zz__dssslz00, BGl_string2908z00zz__dssslz00, BgL_keysz00_2318); 
FAILURE(BgL_auxz00_3847,BFALSE,BFALSE);} } 
return 
BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(BgL_dssslzd2argszd2_2317, BgL_auxz00_3842);} } 
}



/* id-sans-type */
obj_t BGl_idzd2sanszd2typez00zz__dssslz00(obj_t BgL_idz00_13)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 379 */
{ /* Llib/dsssl.scm 380 */
obj_t BgL_stringz00_1280;
{ /* Llib/dsssl.scm 380 */
obj_t BgL_res2623z00_2020;
{ /* Llib/dsssl.scm 380 */
obj_t BgL_arg2400z00_2019;
BgL_arg2400z00_2019 = 
SYMBOL_TO_STRING(BgL_idz00_13); 
BgL_res2623z00_2020 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2400z00_2019); } 
BgL_stringz00_1280 = BgL_res2623z00_2020; } 
{ /* Llib/dsssl.scm 380 */
long BgL_lenz00_1281;
BgL_lenz00_1281 = 
STRING_LENGTH(BgL_stringz00_1280); 
{ /* Llib/dsssl.scm 381 */

{ 
long BgL_walkerz00_1283;
BgL_walkerz00_1283 = ((long)0); 
BgL_zc3anonymousza32336ze3z83_1284:
if(
(BgL_walkerz00_1283==BgL_lenz00_1281))
{ /* Llib/dsssl.scm 384 */
return BgL_idz00_13;}  else 
{ /* Llib/dsssl.scm 386 */
bool_t BgL_testz00_3857;
{ /* Llib/dsssl.scm 386 */
bool_t BgL_testz00_3858;
{ /* Llib/dsssl.scm 386 */
unsigned char BgL_auxz00_3859;
{ /* Llib/dsssl.scm 386 */
long BgL_l2634z00_2332;
BgL_l2634z00_2332 = 
STRING_LENGTH(BgL_stringz00_1280); 
if(
BOUND_CHECK(BgL_walkerz00_1283, BgL_l2634z00_2332))
{ /* Llib/dsssl.scm 386 */
BgL_auxz00_3859 = 
STRING_REF(BgL_stringz00_1280, BgL_walkerz00_1283)
; }  else 
{ 
obj_t BgL_auxz00_3864;
BgL_auxz00_3864 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)13055)), BGl_string2947z00zz__dssslz00, 
BINT(BgL_walkerz00_1283), BgL_stringz00_1280); 
FAILURE(BgL_auxz00_3864,BFALSE,BFALSE);} } 
BgL_testz00_3858 = 
(BgL_auxz00_3859==((unsigned char)':')); } 
if(BgL_testz00_3858)
{ /* Llib/dsssl.scm 386 */
if(
(BgL_walkerz00_1283<
(BgL_lenz00_1281-((long)1))))
{ /* Llib/dsssl.scm 388 */
unsigned char BgL_auxz00_3873;
{ /* Llib/dsssl.scm 388 */
long BgL_i2637z00_2335;
BgL_i2637z00_2335 = 
(BgL_walkerz00_1283+((long)1)); 
{ /* Llib/dsssl.scm 388 */
long BgL_l2638z00_2336;
BgL_l2638z00_2336 = 
STRING_LENGTH(BgL_stringz00_1280); 
if(
BOUND_CHECK(BgL_i2637z00_2335, BgL_l2638z00_2336))
{ /* Llib/dsssl.scm 388 */
BgL_auxz00_3873 = 
STRING_REF(BgL_stringz00_1280, BgL_i2637z00_2335)
; }  else 
{ 
obj_t BgL_auxz00_3879;
BgL_auxz00_3879 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)13128)), BGl_string2947z00zz__dssslz00, 
BINT(BgL_i2637z00_2335), BgL_stringz00_1280); 
FAILURE(BgL_auxz00_3879,BFALSE,BFALSE);} } } 
BgL_testz00_3857 = 
(BgL_auxz00_3873==((unsigned char)':')); }  else 
{ /* Llib/dsssl.scm 387 */
BgL_testz00_3857 = ((bool_t)0)
; } }  else 
{ /* Llib/dsssl.scm 386 */
BgL_testz00_3857 = ((bool_t)0)
; } } 
if(BgL_testz00_3857)
{ /* Llib/dsssl.scm 389 */
obj_t BgL_arg2339z00_1287;
BgL_arg2339z00_1287 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_1280, ((long)0), BgL_walkerz00_1283); 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg2339z00_1287));}  else 
{ 
long BgL_walkerz00_3888;
BgL_walkerz00_3888 = 
(BgL_walkerz00_1283+((long)1)); 
BgL_walkerz00_1283 = BgL_walkerz00_3888; 
goto BgL_zc3anonymousza32336ze3z83_1284;} } } } } } } 
}



/* dsssl-formals->scheme-formals */
BGL_EXPORTED_DEF obj_t BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t BgL_formalsz00_14, obj_t BgL_errz00_15)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 405 */
return 
BGl_loopz00zz__dssslz00(BgL_formalsz00_14, BgL_errz00_15, BgL_formalsz00_14, ((bool_t)0));} 
}



/* loop */
obj_t BGl_loopz00zz__dssslz00(obj_t BgL_formalsz00_2323, obj_t BgL_errz00_2322, obj_t BgL_argsz00_1300, bool_t BgL_dssslz00_1301)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 418 */
BGl_loopz00zz__dssslz00:
{ 
obj_t BgL_objz00_1323;
if(
NULLP(BgL_argsz00_1300))
{ /* Llib/dsssl.scm 421 */
return BNIL;}  else 
{ /* Llib/dsssl.scm 421 */
if(
PAIRP(BgL_argsz00_1300))
{ /* Llib/dsssl.scm 433 */
bool_t BgL_testz00_3895;
{ /* Llib/dsssl.scm 433 */
obj_t BgL_auxz00_3896;
BgL_auxz00_3896 = 
CAR(BgL_argsz00_1300); 
BgL_testz00_3895 = 
SYMBOLP(BgL_auxz00_3896); } 
if(BgL_testz00_3895)
{ /* Llib/dsssl.scm 433 */
if(BgL_dssslz00_1301)
{ /* Llib/dsssl.scm 446 */
obj_t BgL_arg2351z00_1306;
BgL_arg2351z00_1306 = 
CAR(BgL_argsz00_1300); 
{ /* Llib/dsssl.scm 446 */
obj_t BgL_auxz00_3901;
if(
SYMBOLP(BgL_arg2351z00_1306))
{ /* Llib/dsssl.scm 446 */
BgL_auxz00_3901 = BgL_arg2351z00_1306
; }  else 
{ 
obj_t BgL_auxz00_3904;
BgL_auxz00_3904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)15260)), BGl_string2907z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg2351z00_1306); 
FAILURE(BgL_auxz00_3904,BFALSE,BFALSE);} 
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_3901);} }  else 
{ /* Llib/dsssl.scm 448 */
obj_t BgL_arg2352z00_1307;obj_t BgL_arg2353z00_1308;
{ /* Llib/dsssl.scm 448 */
obj_t BgL_arg2354z00_1309;
BgL_arg2354z00_1309 = 
CAR(BgL_argsz00_1300); 
{ /* Llib/dsssl.scm 448 */
obj_t BgL_auxz00_3910;
if(
SYMBOLP(BgL_arg2354z00_1309))
{ /* Llib/dsssl.scm 448 */
BgL_auxz00_3910 = BgL_arg2354z00_1309
; }  else 
{ 
obj_t BgL_auxz00_3913;
BgL_auxz00_3913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)15304)), BGl_string2907z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg2354z00_1309); 
FAILURE(BgL_auxz00_3913,BFALSE,BFALSE);} 
BgL_arg2352z00_1307 = 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_3910); } } 
BgL_arg2353z00_1308 = 
BGl_loopz00zz__dssslz00(BgL_formalsz00_2323, BgL_errz00_2322, 
CDR(BgL_argsz00_1300), ((bool_t)0)); 
return 
MAKE_PAIR(BgL_arg2352z00_1307, BgL_arg2353z00_1308);} }  else 
{ /* Llib/dsssl.scm 433 */
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
CAR(BgL_argsz00_1300), BGl_list2949z00zz__dssslz00)))
{ 
bool_t BgL_dssslz00_3927;obj_t BgL_argsz00_3925;
BgL_argsz00_3925 = 
CDR(BgL_argsz00_1300); 
BgL_dssslz00_3927 = ((bool_t)1); 
BgL_dssslz00_1301 = BgL_dssslz00_3927; 
BgL_argsz00_1300 = BgL_argsz00_3925; 
goto BGl_loopz00zz__dssslz00;}  else 
{ /* Llib/dsssl.scm 435 */
if(BgL_dssslz00_1301)
{ /* Llib/dsssl.scm 439 */
bool_t BgL_testz00_3929;
BgL_objz00_1323 = 
CAR(BgL_argsz00_1300); 
if(
PAIRP(BgL_objz00_1323))
{ /* Llib/dsssl.scm 412 */
bool_t BgL_testz00_3932;
{ /* Llib/dsssl.scm 412 */
obj_t BgL_auxz00_3933;
BgL_auxz00_3933 = 
CDR(BgL_objz00_1323); 
BgL_testz00_3932 = 
PAIRP(BgL_auxz00_3933); } 
if(BgL_testz00_3932)
{ /* Llib/dsssl.scm 413 */
obj_t BgL_auxz00_3936;
{ /* Llib/dsssl.scm 413 */
obj_t BgL_pairz00_2062;
{ /* Llib/dsssl.scm 413 */
obj_t BgL_aux2842z00_2565;
BgL_aux2842z00_2565 = 
CDR(BgL_objz00_1323); 
if(
PAIRP(BgL_aux2842z00_2565))
{ /* Llib/dsssl.scm 413 */
BgL_pairz00_2062 = BgL_aux2842z00_2565; }  else 
{ 
obj_t BgL_auxz00_3940;
BgL_auxz00_3940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)14392)), BGl_string2948z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2842z00_2565); 
FAILURE(BgL_auxz00_3940,BFALSE,BFALSE);} } 
BgL_auxz00_3936 = 
CDR(BgL_pairz00_2062); } 
BgL_testz00_3929 = 
NULLP(BgL_auxz00_3936); }  else 
{ /* Llib/dsssl.scm 412 */
BgL_testz00_3929 = ((bool_t)0)
; } }  else 
{ /* Llib/dsssl.scm 411 */
BgL_testz00_3929 = ((bool_t)0)
; } 
if(BgL_testz00_3929)
{ /* Llib/dsssl.scm 440 */
obj_t BgL_arg2359z00_1314;
{ /* Llib/dsssl.scm 440 */
obj_t BgL_pairz00_2054;
{ /* Llib/dsssl.scm 440 */
obj_t BgL_aux2848z00_2571;
BgL_aux2848z00_2571 = 
CAR(BgL_argsz00_1300); 
if(
PAIRP(BgL_aux2848z00_2571))
{ /* Llib/dsssl.scm 440 */
BgL_pairz00_2054 = BgL_aux2848z00_2571; }  else 
{ 
obj_t BgL_auxz00_3950;
BgL_auxz00_3950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)15102)), BGl_string2907z00zz__dssslz00, BGl_string2890z00zz__dssslz00, BgL_aux2848z00_2571); 
FAILURE(BgL_auxz00_3950,BFALSE,BFALSE);} } 
BgL_arg2359z00_1314 = 
CAR(BgL_pairz00_2054); } 
{ /* Llib/dsssl.scm 440 */
obj_t BgL_auxz00_3955;
if(
SYMBOLP(BgL_arg2359z00_1314))
{ /* Llib/dsssl.scm 440 */
BgL_auxz00_3955 = BgL_arg2359z00_1314
; }  else 
{ 
obj_t BgL_auxz00_3958;
BgL_auxz00_3958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)15112)), BGl_string2907z00zz__dssslz00, BGl_string2914z00zz__dssslz00, BgL_arg2359z00_1314); 
FAILURE(BgL_auxz00_3958,BFALSE,BFALSE);} 
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_auxz00_3955);} }  else 
{ /* Llib/dsssl.scm 439 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2322, ((long)3)))
{ /* Llib/dsssl.scm 442 */
return 
PROCEDURE_ENTRY(BgL_errz00_2322)(BgL_errz00_2322, BGl_string2950z00zz__dssslz00, BGl_string2951z00zz__dssslz00, BgL_formalsz00_2323, BEOA);}  else 
{ /* Llib/dsssl.scm 442 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2952z00zz__dssslz00,BgL_errz00_2322);} } }  else 
{ /* Llib/dsssl.scm 437 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2322, ((long)3)))
{ /* Llib/dsssl.scm 438 */
return 
PROCEDURE_ENTRY(BgL_errz00_2322)(BgL_errz00_2322, BGl_string2950z00zz__dssslz00, BGl_string2953z00zz__dssslz00, BgL_formalsz00_2323, BEOA);}  else 
{ /* Llib/dsssl.scm 438 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2954z00zz__dssslz00,BgL_errz00_2322);} } } } }  else 
{ /* Llib/dsssl.scm 423 */
if(BgL_dssslz00_1301)
{ /* Llib/dsssl.scm 425 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2322, ((long)3)))
{ /* Llib/dsssl.scm 426 */
return 
PROCEDURE_ENTRY(BgL_errz00_2322)(BgL_errz00_2322, BGl_string2955z00zz__dssslz00, BGl_string2956z00zz__dssslz00, BgL_formalsz00_2323, BEOA);}  else 
{ /* Llib/dsssl.scm 426 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2957z00zz__dssslz00,BgL_errz00_2322);} }  else 
{ /* Llib/dsssl.scm 425 */
if(
SYMBOLP(BgL_argsz00_1300))
{ /* Llib/dsssl.scm 429 */
return 
BGl_idzd2sanszd2typez00zz__dssslz00(BgL_argsz00_1300);}  else 
{ /* Llib/dsssl.scm 429 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_errz00_2322, ((long)3)))
{ /* Llib/dsssl.scm 430 */
return 
PROCEDURE_ENTRY(BgL_errz00_2322)(BgL_errz00_2322, BGl_string2950z00zz__dssslz00, BGl_string2953z00zz__dssslz00, BgL_formalsz00_2323, BEOA);}  else 
{ /* Llib/dsssl.scm 430 */
FAILURE(BGl_string2874z00zz__dssslz00,BGl_list2954z00zz__dssslz00,BgL_errz00_2322);} } } } } } } 
}



/* _dsssl-formals->scheme-formals */
obj_t BGl__dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(obj_t BgL_envz00_2319, obj_t BgL_formalsz00_2320, obj_t BgL_errz00_2321)
{ AN_OBJECT;
{ /* Llib/dsssl.scm 405 */
{ /* Llib/dsssl.scm 408 */
obj_t BgL_auxz00_3987;
if(
PROCEDUREP(BgL_errz00_2321))
{ /* Llib/dsssl.scm 408 */
BgL_auxz00_3987 = BgL_errz00_2321
; }  else 
{ 
obj_t BgL_auxz00_3990;
BgL_auxz00_3990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2888z00zz__dssslz00, 
BINT(((long)14255)), BGl_string2958z00zz__dssslz00, BGl_string2893z00zz__dssslz00, BgL_errz00_2321); 
FAILURE(BgL_auxz00_3990,BFALSE,BFALSE);} 
return 
BGl_dssslzd2formalszd2ze3schemezd2formalsz31zz__dssslz00(BgL_formalsz00_2320, BgL_auxz00_3987);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__dssslz00()
{ AN_OBJECT;
{ /* Llib/dsssl.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__dssslz00()
{ AN_OBJECT;
{ /* Llib/dsssl.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__dssslz00()
{ AN_OBJECT;
{ /* Llib/dsssl.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2959z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2959z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2959z00zz__dssslz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2959z00zz__dssslz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2959z00zz__dssslz00));} 
}

#ifdef __cplusplus
}
#endif
