/*===========================================================================*/
/*   (R5rs/syntax.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c R5rs/syntax.scm -indent -o objs/obj_s/R5rs/syntax.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_zc3anonymousza32100ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_zc3anonymousza32239ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_zc3anonymousza32106ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32244ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3250z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3255z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_symbol3268z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3270z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3290z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3341z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_subz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_symbol3350z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3354z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza31989ze3_2917z83zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_symbol3359z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3368z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3370z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3383z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3401z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3403z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3406z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3408z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3421z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_symbol3431z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3440z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_symbol3453z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3462z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3464z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3466z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3469z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3471z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3476z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3506z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3509z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3518z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3535z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3538z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3543z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3558z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_symbol3592z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_keyword(obj_t);
extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
static obj_t BGl_gennamez00zz__r5_macro_4_3_syntaxz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl_hygienezd2symbolzd2zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_keyword3566z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern long bgl_list_length(obj_t);
static obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t);
extern obj_t string_to_symbol(char *);
extern obj_t bgl_reverse(obj_t);
static obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t);
static obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00();
BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3267z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3272z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
static obj_t BGl_list3273z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3274z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3275z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3282z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3285z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3286z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3287z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_loopz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list3292z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3302z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3303z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3304z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3295z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_list3296z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3299z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3309z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3310z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3311z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3312z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3313z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3314z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3315z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3316z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3317z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3318z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3319z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3320z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3321z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3322z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3323z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3324z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3325z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3329z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3330z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3331z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3332z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3333z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3338z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3339z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3340z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3343z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3344z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3345z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3346z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3347z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3348z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3349z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3352z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3353z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3356z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3357z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32062ze3z83zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3358z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list3361z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3362z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3363z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3364z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3365z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3366z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3367z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list3376z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3377z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3380z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3381z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3382z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3385z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3386z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3389z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3390z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3400z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3393z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3394z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3395z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3405z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3396z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3397z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3398z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3399z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3410z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3411z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3412z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3413z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3414z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3415z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3416z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3417z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3418z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t bgl_append2(obj_t, obj_t);
static obj_t BGl_list3425z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3427z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3428z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3429z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3430z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3433z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3434z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3435z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3436z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3437z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3438z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3439z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3442z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3443z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3444z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3449z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3450z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3451z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3452z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3457z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3458z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3459z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3460z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3461z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list3468z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3473z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3474z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3475z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3478z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3480z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3479z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3481z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3482z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3483z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3484z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3485z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3486z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3487z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3488z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_list3490z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3489z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3505z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3495z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3508z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3517z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t, obj_t);
static obj_t BGl_list3532z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_list3537z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3542z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_list3551z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3557z00zz__r5_macro_4_3_syntaxz00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00();
static obj_t BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STATIC_BGL_PROCEDURE( BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00, BgL_bgl__syntaxza7d2expand3631za7, BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl__expandza7d2letza7d23632z00, BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_installzd2syntaxzd2expanderzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl__installza7d2synta3633za7, BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3261z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za7c3anonymousza7a313634z00, BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3264z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za7c3anonymousza7a313635z00, BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3251z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3251za700za7za7_3636za7, "hygiene.r5rs.mark", 17 );
DEFINE_STRING( BGl_string3252z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3252za700za7za7_3637za7, "/tmp/bigloo/runtime/R5rs/syntax.scm", 35 );
DEFINE_STRING( BGl_string3253z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3253za700za7za7_3638za7, "toplevel-init", 13 );
DEFINE_STRING( BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3254za700za7za7_3639za7, "symbol", 6 );
DEFINE_STRING( BGl_string3256z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3256za700za7za7_3640za7, "mutex", 5 );
DEFINE_STRING( BGl_string3257z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3257za700za7za7_3641za7, "<anonymous:1987>", 16 );
DEFINE_STRING( BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3258za700za7za7_3642za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3259z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3259za700za7za7_3643za7, "_install-syntax-expander", 24 );
DEFINE_STRING( BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3260za700za7za7_3644za7, "procedure", 9 );
DEFINE_STRING( BGl_string3263z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3263za700za7za7_3645za7, "quote", 5 );
DEFINE_STRING( BGl_string3266z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3266za700za7za7_3646za7, "cond", 4 );
DEFINE_STRING( BGl_string3269z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3269za700za7za7_3647za7, "else", 4 );
DEFINE_STRING( BGl_string3271z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3271za700za7za7_3648za7, "=>", 2 );
DEFINE_STRING( BGl_string3277z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3277za700za7za7_3649za7, "result1", 7 );
DEFINE_STRING( BGl_string3279z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3279za700za7za7_3650za7, "result2", 7 );
DEFINE_STRING( BGl_string3281z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3281za700za7za7_3651za7, "...", 3 );
DEFINE_STRING( BGl_string3284z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3284za700za7za7_3652za7, "begin", 5 );
DEFINE_STRING( BGl_string3289z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3289za700za7za7_3653za7, "test", 4 );
DEFINE_STRING( BGl_string3291z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3291za700za7za7_3654za7, "result", 6 );
DEFINE_STRING( BGl_string3301z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3301za700za7za7_3655za7, "if", 2 );
DEFINE_STRING( BGl_string3294z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3294za700za7za7_3656za7, "let", 3 );
DEFINE_STRING( BGl_string3306z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3306za700za7za7_3657za7, "clause1", 7 );
DEFINE_STRING( BGl_string3298z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3298za700za7za7_3658za7, "temp", 4 );
DEFINE_STRING( BGl_string3308z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3308za700za7za7_3659za7, "clause2", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3491z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za7c3anonymousza7a323660z00, BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3492z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_za7c3anonymousza7a323661z00, BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3326za700za7za7_3662za7, "<anonymous:1992>", 16 );
DEFINE_STRING( BGl_string3328z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3328za700za7za7_3663za7, "case", 4 );
DEFINE_STRING( BGl_string3335z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3335za700za7za7_3664za7, "key", 3 );
DEFINE_STRING( BGl_string3337z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3337za700za7za7_3665za7, "clauses", 7 );
DEFINE_STRING( BGl_string3342z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3342za700za7za7_3666za7, "atom-key", 8 );
DEFINE_STRING( BGl_string3351z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3351za700za7za7_3667za7, "atoms", 5 );
DEFINE_STRING( BGl_string3355z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3355za700za7za7_3668za7, "memv", 4 );
DEFINE_STRING( BGl_string3360z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3360za700za7za7_3669za7, "clause", 6 );
DEFINE_STRING( BGl_string3369z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3369za700za7za7_3670za7, "name", 4 );
DEFINE_STRING( BGl_string3371z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3371za700za7za7_3671za7, "val", 3 );
DEFINE_STRING( BGl_string3373z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3373za700za7za7_3672za7, "body1", 5 );
DEFINE_STRING( BGl_string3375z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3375za700za7za7_3673za7, "body2", 5 );
DEFINE_STRING( BGl_string3379z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3379za700za7za7_3674za7, "lambda", 6 );
DEFINE_STRING( BGl_string3384z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3384za700za7za7_3675za7, "tag", 3 );
DEFINE_STRING( BGl_string3388z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3388za700za7za7_3676za7, "letrec", 6 );
DEFINE_STRING( BGl_string3392z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3392za700za7za7_3677za7, "let*", 4 );
DEFINE_STRING( BGl_string3402z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3402za700za7za7_3678za7, "name1", 5 );
DEFINE_STRING( BGl_string3404z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3404za700za7za7_3679za7, "val1", 4 );
DEFINE_STRING( BGl_string3407z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3407za700za7za7_3680za7, "name2", 5 );
DEFINE_STRING( BGl_string3409z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3409za700za7za7_3681za7, "val2", 4 );
DEFINE_STRING( BGl_string3420z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3420za700za7za7_3682za7, "var1", 4 );
DEFINE_STRING( BGl_string3422z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3422za700za7za7_3683za7, "init1", 5 );
DEFINE_STRING( BGl_string3424z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3424za700za7za7_3684za7, "body", 4 );
DEFINE_STRING( BGl_string3426z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3426za700za7za7_3685za7, "generate temp names", 19 );
DEFINE_STRING( BGl_string3432z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3432za700za7za7_3686za7, "temp1", 5 );
DEFINE_STRING( BGl_string3441z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3441za700za7za7_3687za7, "set!", 4 );
DEFINE_STRING( BGl_string3446z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3446za700za7za7_3688za7, "x", 1 );
DEFINE_STRING( BGl_string3448z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3448za700za7za7_3689za7, "y", 1 );
DEFINE_STRING( BGl_string3454z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3454za700za7za7_3690za7, "newtemp", 7 );
DEFINE_STRING( BGl_string3456z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3456za700za7za7_3691za7, "do", 2 );
DEFINE_STRING( BGl_string3463z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3463za700za7za7_3692za7, "var", 3 );
DEFINE_STRING( BGl_string3465z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3465za700za7za7_3693za7, "init", 4 );
DEFINE_STRING( BGl_string3467z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3467za700za7za7_3694za7, "step", 4 );
DEFINE_STRING( BGl_string3470z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3470za700za7za7_3695za7, "expr", 4 );
DEFINE_STRING( BGl_string3472z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3472za700za7za7_3696za7, "command", 7 );
DEFINE_STRING( BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3477za700za7za7_3697za7, "loop", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syntaxzd2ruleszd2ze3expanderzd2envz31zz__r5_macro_4_3_syntaxz00, BgL_bgl__syntaxza7d2rulesza73698z00, BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3501z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3501za700za7za7_3699za7, "e", 1 );
DEFINE_STRING( BGl_string3502z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3502za700za7za7_3700za7, "epair", 5 );
DEFINE_STRING( BGl_string3503z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3503za700za7za7_3701za7, "loop'''", 7 );
DEFINE_STRING( BGl_string3493z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3493za700za7za7_3702za7, "syntax-expander", 15 );
DEFINE_STRING( BGl_string3504z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3504za700za7za7_3703za7, "loop''':Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string3494z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3494za700za7za7_3704za7, "syntax-expander:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string3507z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3507za700za7za7_3705za7, "arg2011", 7 );
DEFINE_STRING( BGl_string3497z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3497za700za7za7_3706za7, "funcall", 7 );
DEFINE_STRING( BGl_string3510z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3510za700za7za7_3707za7, "syntax-rules", 12 );
DEFINE_STRING( BGl_string3499z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3499za700za7za7_3708za7, "e1", 2 );
DEFINE_STRING( BGl_string3511z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3511za700za7za7_3709za7, "expand-define-syntax", 20 );
DEFINE_STRING( BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3512za700za7za7_3710za7, "define-syntax", 13 );
DEFINE_STRING( BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3513za700za7za7_3711za7, "Illegal form", 12 );
DEFINE_STRING( BGl_string3514z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3514za700za7za7_3712za7, "_expand-define-syntax", 21 );
DEFINE_STRING( BGl_string3515z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3515za700za7za7_3713za7, "<anonymous:2041>", 16 );
DEFINE_STRING( BGl_string3516z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3516za700za7za7_3714za7, "<anonymous:2041>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3520za700za7za7_3715za7, "map", 3 );
DEFINE_STRING( BGl_string3519z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3519za700za7za7_3716za7, "arg2046", 7 );
DEFINE_STRING( BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3521za700za7za7_3717za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string3522z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3522za700za7za7_3718za7, "TAG-1422", 8 );
DEFINE_STRING( BGl_string3523z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3523za700za7za7_3719za7, "letrec-syntax", 13 );
DEFINE_STRING( BGl_string3524z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3524za700za7za7_3720za7, "TAG-1437", 8 );
DEFINE_STRING( BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3525za700za7za7_3721za7, "pair", 4 );
DEFINE_STRING( BGl_string3526z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3526za700za7za7_3722za7, "loop''", 6 );
DEFINE_STRING( BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3527za700za7za7_3723za7, "let-syntax", 10 );
DEFINE_STRING( BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3528za700za7za7_3724za7, "Illegal bindings", 16 );
DEFINE_STRING( BGl_string3530z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3530za700za7za7_3725za7, "<anonymous:2062>", 16 );
DEFINE_STRING( BGl_string3529z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3529za700za7za7_3726za7, "_expand-letrec-syntax", 21 );
DEFINE_STRING( BGl_string3531z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3531za700za7za7_3727za7, "<anonymous:2062>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3534z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3534za700za7za7_3728za7, "e3", 2 );
DEFINE_STRING( BGl_string3536z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3536za700za7za7_3729za7, "e2", 2 );
DEFINE_STRING( BGl_string3540z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3540za700za7za7_3730za7, "<anonymous:2079>", 16 );
DEFINE_STRING( BGl_string3539z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3539za700za7za7_3731za7, "e4", 2 );
DEFINE_STRING( BGl_string3541z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3541za700za7za7_3732za7, "<anonymous:2079>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3544z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3544za700za7za7_3733za7, "arg2084", 7 );
DEFINE_STRING( BGl_string3545z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3545za700za7za7_3734za7, "TAG-1465", 8 );
DEFINE_STRING( BGl_string3546z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3546za700za7za7_3735za7, "TAG-1480", 8 );
DEFINE_STRING( BGl_string3547z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3547za700za7za7_3736za7, "loop'", 5 );
DEFINE_STRING( BGl_string3548z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3548za700za7za7_3737za7, "_expand-let-syntax", 18 );
DEFINE_STRING( BGl_string3550z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3550za700za7za7_3738za7, "<anonymous:2100>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3549z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3549za700za7za7_3739za7, "<anonymous:2100>", 16 );
DEFINE_STRING( BGl_string3552z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3552za700za7za7_3740za7, "Illegal declaration", 19 );
DEFINE_STRING( BGl_string3553z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3553za700za7za7_3741za7, "_syntax-rules->expander", 23 );
DEFINE_STRING( BGl_string3554z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3554za700za7za7_3742za7, "No matching clause", 18 );
DEFINE_STRING( BGl_string3555z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3555za700za7za7_3743za7, "TAG-1508", 8 );
DEFINE_STRING( BGl_string3556z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3556za700za7za7_3744za7, "TAG-1508:Wrong number of arguments", 34 );
DEFINE_STRING( BGl_string3560z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3560za700za7za7_3745za7, "TAG-1509", 8 );
DEFINE_STRING( BGl_string3559z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3559za700za7za7_3746za7, "arg2116", 7 );
DEFINE_STRING( BGl_string3561z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3561za700za7za7_3747za7, "Illegal clause", 14 );
DEFINE_STRING( BGl_string3562z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3562za700za7za7_3748za7, "syntax-matches-pattern?", 23 );
DEFINE_STRING( BGl_string3563z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3563za700za7za7_3749za7, "every?", 6 );
DEFINE_STRING( BGl_string3564z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3564za700za7za7_3750za7, "Illegal ellipsis", 16 );
DEFINE_STRING( BGl_string3565z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3565za700za7za7_3751za7, "syntax-get-frames", 17 );
DEFINE_STRING( BGl_string3567z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3567za700za7za7_3752za7, "ellipsis", 8 );
DEFINE_STRING( BGl_string3568z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3568za700za7za7_3753za7, "<anonymous:2180>", 16 );
DEFINE_STRING( BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3570za700za7za7_3754za7, "liip", 4 );
DEFINE_STRING( BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3569za700za7za7_3755za7, "syntax-expand-pattern", 21 );
DEFINE_STRING( BGl_string3571z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3571za700za7za7_3756za7, "<anonymous:2194>", 16 );
DEFINE_STRING( BGl_string3572z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3572za700za7za7_3757za7, "<anonymous:2224>", 16 );
DEFINE_STRING( BGl_string3573z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3573za700za7za7_3758za7, "any?", 4 );
DEFINE_STRING( BGl_string3574z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3574za700za7za7_3759za7, "<anonymous:2239>", 16 );
DEFINE_STRING( BGl_string3575z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3575za700za7za7_3760za7, "<anonymous:2244>", 16 );
DEFINE_STRING( BGl_string3576z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3576za700za7za7_3761za7, "sub", 3 );
DEFINE_STRING( BGl_string3577z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3577za700za7za7_3762za7, "ellipsis?", 9 );
DEFINE_STRING( BGl_string3578z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3578za700za7za7_3763za7, "hygiene-symbol", 14 );
DEFINE_STRING( BGl_string3580z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3580za700za7za7_3764za7, "long", 4 );
DEFINE_STRING( BGl_string3579z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3579za700za7za7_3765za7, "hygiene-value", 13 );
DEFINE_STRING( BGl_string3581z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3581za700za7za7_3766za7, "TAG-1522", 8 );
DEFINE_STRING( BGl_string3582z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3582za700za7za7_3767za7, "TAG-1524", 8 );
DEFINE_STRING( BGl_string3583z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3583za700za7za7_3768za7, "<anonymous:2486>", 16 );
DEFINE_STRING( BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3584za700za7za7_3769za7, "TAG-1525", 8 );
DEFINE_STRING( BGl_string3585z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3585za700za7za7_3770za7, "<anonymous:2529>", 16 );
DEFINE_STRING( BGl_string3586z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3586za700za7za7_3771za7, "<anonymous:2520>", 16 );
DEFINE_STRING( BGl_string3587z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3587za700za7za7_3772za7, "<anonymous:2506>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl__expandza7d2letrec3773za7, BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3588za700za7za7_3774za7, "TAG-1528", 8 );
DEFINE_STRING( BGl_string3590z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3590za700za7za7_3775za7, "<anonymous:2621>", 16 );
DEFINE_STRING( BGl_string3589z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3589za700za7za7_3776za7, "<anonymous:2630>", 16 );
DEFINE_STRING( BGl_string3591z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3591za700za7za7_3777za7, "<anonymous:2607>", 16 );
DEFINE_STRING( BGl_string3593z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3593za700za7za7_3778za7, "bind-exit", 9 );
DEFINE_STRING( BGl_string3594z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3594za700za7za7_3779za7, "TAG-1529", 8 );
DEFINE_STRING( BGl_string3595z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3595za700za7za7_3780za7, "TAG-2158", 8 );
DEFINE_STRING( BGl_string3596z00zz__r5_macro_4_3_syntaxz00, BgL_bgl_string3596za700za7za7_3781za7, "__r5_macro_4_3_syntax", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00, BgL_bgl__expandza7d2define3782za7, BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long BgL_checksumz00_3653, char * BgL_fromz00_3654)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00))
{ 
BGl_requirezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00(); 
BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00(); 
BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 17 */
BGl_symbol3250z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3251z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3255z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3256z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3263z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3266z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3268z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3269z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3270z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3271z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3267z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3268z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3270z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3277z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3279z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3281z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3275z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3268z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3274z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3275z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3284z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3282z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3273z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3274z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3289z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3290z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3291z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3287z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3270z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3290z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3286z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3287z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3294z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3298z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3296z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3295z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3296z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3301z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3302z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3290z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3299z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3302z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3292z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3295z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3299z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3285z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3286z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3292z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3306z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3308z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3304z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3287z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3311z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3310z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3302z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3311z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3309z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3295z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3310z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3303z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3304z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3309z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3314z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list3313z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3314z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3312z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3313z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3316z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3314z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3318z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3311z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3317z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3295z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3318z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3315z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3316z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3317z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3321z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3320z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3321z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3322z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3319z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3320z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3322z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3324z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3321z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3305z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3307z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3325z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3311z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3323z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3324z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3325z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3272z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3273z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3285z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3303z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3312z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3315z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3319z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3323z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3328z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3329z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3268z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3335z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3333z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3337z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3332z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3333z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_symbol3341z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3342z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3340z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3341z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3333z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3339z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3340z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list3343z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3341z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3338z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3339z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3343z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3331z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3332z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3338z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3345z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3275z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3344z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3345z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3350z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3351z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3349z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3350z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3348z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3349z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3276z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3278z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3347z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3348z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol3354z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3355z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3356z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3349z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3353z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3354z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3356z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3352z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3353z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3346z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3347z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3352z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3359z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3360z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3358z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3348z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3359z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_list3362z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3334z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3359z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3336z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3361z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3353z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3282z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3362z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3357z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3358z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3361z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3330z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3331z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3344z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3346z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3357z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_symbol3368z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3369z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3370z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3371z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3367z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3368z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3370z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3366z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3367z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3373z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3375z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3365z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3366z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3379z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3380z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3368z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3377z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3380z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3376z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3377z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3370z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3364z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3365z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3376z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3383z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3384z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3382z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3383z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3366z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3388z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3390z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3383z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3377z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3389z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3390z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list3386z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3389z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3383z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3385z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3386z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3370z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3381z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3382z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3385z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3363z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3364z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3381z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3392z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3395z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3396z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3394z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3395z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3396z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3401z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3402z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3403z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3404z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3400z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3401z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3403z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3406z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3407z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3408z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3409z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3405z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3406z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3408z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3399z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3400z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3405z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3398z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3399z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3411z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3400z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list3413z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3405z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3412z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3413z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3372z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3374z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3410z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3411z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3412z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3397z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3398z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3410z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3393z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3394z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3397z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3420z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3421z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3422z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3418z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3421z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3417z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3418z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3424z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3416z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3417z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3427z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3425z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3426z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3427z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list3417z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list3415z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3416z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3425z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3431z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3432z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3430z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3431z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3429z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3426z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BNIL, 
MAKE_PAIR(BGl_list3430z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3417z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list3435z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BUNSPEC, BNIL)); 
BGl_list3434z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3435z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3438z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3431z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3421z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3437z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3438z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3440z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3441z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3439z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3440z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3419z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3431z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3436z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3437z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3439z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))))); 
BGl_list3433z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3434z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3436z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3428z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3429z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3433z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3446z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3448z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3444z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3449z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3443z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3426z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3444z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3449z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3417z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list3451z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3453z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3454z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3452z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3453z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3297z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3450z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3426z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3451z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3452z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3417z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3423z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))))); 
BGl_list3442z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3443z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3450z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3414z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3415z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3428z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3442z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3456z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3462z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3463z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3464z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3465z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3466z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3467z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3461z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3462z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3464z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3466z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3460z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3461z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_symbol3469z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3470z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3468z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3469z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol3471z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3472z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3459z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3460z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3468z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3471z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3476z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3477z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3479z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3462z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3482z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(
BBOOL(((bool_t)0)), 
MAKE_PAIR(
BBOOL(((bool_t)0)), BNIL))); 
BGl_list3481z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3482z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3469z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3485z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3467z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3462z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3466z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3484z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3476z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3485z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3483z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3471z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3484z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3480z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3300z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3288z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3481z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3483z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3478z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3479z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3480z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3475z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3476z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3478z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3474z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3475z00zz__r5_macro_4_3_syntaxz00, BNIL); 
BGl_list3486z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3476z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3464z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3473z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3474z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3486z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3458z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3459z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3473z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3488z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3467z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_list3487z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3488z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3490z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_string3467z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00, BNIL)))); 
BGl_list3489z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3490z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3447z00zz__r5_macro_4_3_syntaxz00, BNIL)); 
BGl_list3457z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_list3458z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3487z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_list3489z00zz__r5_macro_4_3_syntaxz00, BNIL))); 
BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3497z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3499z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3501z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3495z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3506z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3507z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3505z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3506z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3508z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3509z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3510z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3518z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3519z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3517z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3518z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3534z00zz__r5_macro_4_3_syntaxz00); 
BGl_symbol3535z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3536z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3532z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3535z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3538z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3539z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3537z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3538z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3538z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3535z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3543z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3544z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3542z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3543z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3498z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_list3551z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3533z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3445z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_symbol3558z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3559z00zz__r5_macro_4_3_syntaxz00); 
BGl_list3557z00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BGl_symbol3496z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3558z00zz__r5_macro_4_3_syntaxz00, 
MAKE_PAIR(BGl_symbol3500z00zz__r5_macro_4_3_syntaxz00, BNIL))))); 
BGl_keyword3566z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_keyword(BGl_string3567z00zz__r5_macro_4_3_syntaxz00); 
return ( 
BGl_symbol3592z00zz__r5_macro_4_3_syntaxz00 = 
bstring_to_symbol(BGl_string3593z00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 17 */
BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3250z00zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 56 */
obj_t BgL_res2892z00_2146;
{ /* R5rs/syntax.scm 56 */
obj_t BgL_symbolz00_2144;
{ /* R5rs/syntax.scm 56 */
obj_t BgL_aux2918z00_3105;
BgL_aux2918z00_3105 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00; 
if(
SYMBOLP(BgL_aux2918z00_3105))
{ /* R5rs/syntax.scm 56 */
BgL_symbolz00_2144 = BgL_aux2918z00_3105; }  else 
{ 
obj_t BgL_auxz00_4162;
BgL_auxz00_4162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)2229)), BGl_string3253z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_aux2918z00_3105); 
FAILURE(BgL_auxz00_4162,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 56 */
obj_t BgL_arg2783z00_2145;
BgL_arg2783z00_2145 = 
SYMBOL_TO_STRING(BgL_symbolz00_2144); 
BgL_res2892z00_2146 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2145); } } 
BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00 = BgL_res2892z00_2146; } 
{ /* R5rs/syntax.scm 57 */
obj_t BgL_stringz00_2147;
BgL_stringz00_2147 = BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00; 
BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00 = 
BINT(
STRING_LENGTH(BgL_stringz00_2147)); } 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BFALSE; 
{ /* R5rs/syntax.scm 60 */

{ /* Llib/thread.scm 198 */
obj_t BgL_namez00_704;
BgL_namez00_704 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3255z00zz__r5_macro_4_3_syntaxz00); 
{ /* Llib/thread.scm 198 */

BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00 = 
bgl_make_mutex(BgL_namez00_704); } } } 
{ /* R5rs/syntax.scm 61 */

{ /* Llib/thread.scm 198 */
obj_t BgL_namez00_705;
BgL_namez00_705 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3255z00zz__r5_macro_4_3_syntaxz00); 
{ /* Llib/thread.scm 198 */

return ( 
BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00 = 
bgl_make_mutex(BgL_namez00_705), BUNSPEC) ;} } } } 
}



/* get-syntax-expander */
obj_t BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_fz00_1)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 73 */
{ /* R5rs/syntax.scm 74 */
obj_t BgL_idz00_706;
BgL_idz00_706 = 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_fz00_1); 
{ /* R5rs/syntax.scm 74 */
obj_t BgL_cz00_707;
{ /* R5rs/syntax.scm 75 */
obj_t BgL_zc3anonymousza31987ze3z83_3026;
BgL_zc3anonymousza31987ze3z83_3026 = 
make_fx_procedure(BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31987ze3z83_3026, 
(int)(((long)0)), BgL_idz00_706); 
BgL_cz00_707 = 
BGl_withzd2lockzd2zz__threadz00(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00, BgL_zc3anonymousza31987ze3z83_3026); } 
{ /* R5rs/syntax.scm 75 */

if(
PAIRP(BgL_cz00_707))
{ /* R5rs/syntax.scm 76 */
return 
CDR(BgL_cz00_707);}  else 
{ /* R5rs/syntax.scm 76 */
return BFALSE;} } } } } 
}



/* <anonymous:1987> */
obj_t BGl_zc3anonymousza31987ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3027)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 75 */
{ /* R5rs/syntax.scm 75 */
obj_t BgL_idz00_3028;
BgL_idz00_3028 = 
PROCEDURE_REF(BgL_envz00_3027, 
(int)(((long)0))); 
{ 

{ /* R5rs/syntax.scm 75 */
obj_t BgL_auxz00_4186;
{ /* R5rs/syntax.scm 75 */
obj_t BgL_aux2920z00_3107;
BgL_aux2920z00_3107 = BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 75 */
bool_t BgL_testz00_4187;
if(
PAIRP(BgL_aux2920z00_3107))
{ /* R5rs/syntax.scm 75 */
BgL_testz00_4187 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 75 */
BgL_testz00_4187 = 
NULLP(BgL_aux2920z00_3107)
; } 
if(BgL_testz00_4187)
{ /* R5rs/syntax.scm 75 */
BgL_auxz00_4186 = BgL_aux2920z00_3107
; }  else 
{ 
obj_t BgL_auxz00_4191;
BgL_auxz00_4191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3282)), BGl_string3257z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_aux2920z00_3107); 
FAILURE(BgL_auxz00_4191,BFALSE,BFALSE);} } } 
return 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_3028, BgL_auxz00_4186);} } } } 
}



/* install-syntax-expander */
BGL_EXPORTED_DEF obj_t BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_2, obj_t BgL_expanderz00_3)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 82 */
{ /* R5rs/syntax.scm 85 */
obj_t BgL_zc3anonymousza31989ze3z83_3029;
BgL_zc3anonymousza31989ze3z83_3029 = 
make_fx_procedure(BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3029, 
(int)(((long)0)), BgL_keywordz00_2); 
PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3029, 
(int)(((long)1)), BgL_expanderz00_3); 
return 
BGl_withzd2lockzd2zz__threadz00(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00, BgL_zc3anonymousza31989ze3z83_3029);} } 
}



/* _install-syntax-expander */
obj_t BGl__installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3030, obj_t BgL_keywordz00_3031, obj_t BgL_expanderz00_3032)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 82 */
{ /* R5rs/syntax.scm 85 */
obj_t BgL_auxz00_4211;obj_t BgL_auxz00_4204;
if(
PROCEDUREP(BgL_expanderz00_3032))
{ /* R5rs/syntax.scm 85 */
BgL_auxz00_4211 = BgL_expanderz00_3032
; }  else 
{ 
obj_t BgL_auxz00_4214;
BgL_auxz00_4214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3651)), BGl_string3259z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_expanderz00_3032); 
FAILURE(BgL_auxz00_4214,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_keywordz00_3031))
{ /* R5rs/syntax.scm 85 */
BgL_auxz00_4204 = BgL_keywordz00_3031
; }  else 
{ 
obj_t BgL_auxz00_4207;
BgL_auxz00_4207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)3651)), BGl_string3259z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3031); 
FAILURE(BgL_auxz00_4207,BFALSE,BFALSE);} 
return 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_auxz00_4204, BgL_auxz00_4211);} } 
}



/* <anonymous:1989> */
obj_t BGl_zc3anonymousza31989ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3033)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 84 */
{ /* R5rs/syntax.scm 85 */
obj_t BgL_keywordz00_3034;obj_t BgL_expanderz00_3035;
BgL_keywordz00_3034 = 
PROCEDURE_REF(BgL_envz00_3033, 
(int)(((long)0))); 
BgL_expanderz00_3035 = 
PROCEDURE_REF(BgL_envz00_3033, 
(int)(((long)1))); 
{ 

{ /* R5rs/syntax.scm 85 */
obj_t BgL_arg1990z00_2153;
BgL_arg1990z00_2153 = 
MAKE_PAIR(BgL_keywordz00_3034, BgL_expanderz00_3035); 
return ( 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BgL_arg1990z00_2153, BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ;} } } } 
}



/* init-syntax-expanders! */
obj_t BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 90 */
return 
BGl_withzd2lockzd2zz__threadz00(BGl_syntaxzd2expanderszd2mutexz00zz__r5_macro_4_3_syntaxz00, BGl_proc3261z00zz__r5_macro_4_3_syntaxz00);} 
}



/* <anonymous:1992> */
obj_t BGl_zc3anonymousza31992ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3039)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 96 */
{ 

if(
CBOOL(BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 97 */
return BFALSE;}  else 
{ /* R5rs/syntax.scm 97 */
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = BNIL; 
{ /* R5rs/syntax.scm 100 */
obj_t BgL_arg1993z00_719;
BgL_arg1993z00_719 = BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 100 */
obj_t BgL_zc3anonymousza31989ze3z83_3037;
BgL_zc3anonymousza31989ze3z83_3037 = 
make_fx_procedure(BGl_zc3anonymousza31989ze3_2917z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3037, 
(int)(((long)0)), BgL_arg1993z00_719); 
PROCEDURE_SET(BgL_zc3anonymousza31989ze3z83_3037, 
(int)(((long)1)), BGl_proc3264z00zz__r5_macro_4_3_syntaxz00); 
BGl_withzd2lockzd2zz__threadz00(BGl_syntaxzd2mutexzd2zz__r5_macro_4_3_syntaxz00, BgL_zc3anonymousza31989ze3z83_3037); } } 
{ /* R5rs/syntax.scm 102 */
obj_t BgL_idz00_2157;obj_t BgL_literalsz00_2158;obj_t BgL_rulesz00_2159;
BgL_idz00_2157 = BGl_symbol3265z00zz__r5_macro_4_3_syntaxz00; 
BgL_literalsz00_2158 = BGl_list3267z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2159 = BGl_list3272z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 102 */
obj_t BgL_arg1998z00_2160;
BgL_arg1998z00_2160 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2157, BgL_literalsz00_2158, BgL_rulesz00_2159); 
{ /* R5rs/syntax.scm 102 */
obj_t BgL_auxz00_4237;
if(
PROCEDUREP(BgL_arg1998z00_2160))
{ /* R5rs/syntax.scm 102 */
BgL_auxz00_4237 = BgL_arg1998z00_2160
; }  else 
{ 
obj_t BgL_auxz00_4240;
BgL_auxz00_4240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)4299)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2160); 
FAILURE(BgL_auxz00_4240,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2157, BgL_auxz00_4237); } } } 
{ /* R5rs/syntax.scm 128 */
obj_t BgL_idz00_2161;obj_t BgL_literalsz00_2162;obj_t BgL_rulesz00_2163;
BgL_idz00_2161 = BGl_symbol3327z00zz__r5_macro_4_3_syntaxz00; 
BgL_literalsz00_2162 = BGl_list3329z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2163 = BGl_list3330z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 128 */
obj_t BgL_arg1998z00_2164;
BgL_arg1998z00_2164 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2161, BgL_literalsz00_2162, BgL_rulesz00_2163); 
{ /* R5rs/syntax.scm 128 */
obj_t BgL_auxz00_4246;
if(
PROCEDUREP(BgL_arg1998z00_2164))
{ /* R5rs/syntax.scm 128 */
BgL_auxz00_4246 = BgL_arg1998z00_2164
; }  else 
{ 
obj_t BgL_auxz00_4249;
BgL_auxz00_4249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)5041)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2164); 
FAILURE(BgL_auxz00_4249,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2161, BgL_auxz00_4246); } } } 
{ /* R5rs/syntax.scm 148 */
obj_t BgL_idz00_2165;obj_t BgL_rulesz00_2167;
BgL_idz00_2165 = BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2167 = BGl_list3363z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 148 */
obj_t BgL_arg1998z00_2168;
BgL_arg1998z00_2168 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2165, BNIL, BgL_rulesz00_2167); 
{ /* R5rs/syntax.scm 148 */
obj_t BgL_auxz00_4255;
if(
PROCEDUREP(BgL_arg1998z00_2168))
{ /* R5rs/syntax.scm 148 */
BgL_auxz00_4255 = BgL_arg1998z00_2168
; }  else 
{ 
obj_t BgL_auxz00_4258;
BgL_auxz00_4258 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)5620)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2168); 
FAILURE(BgL_auxz00_4258,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2165, BgL_auxz00_4255); } } } 
{ /* R5rs/syntax.scm 159 */
obj_t BgL_idz00_2169;obj_t BgL_rulesz00_2171;
BgL_idz00_2169 = BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2171 = BGl_list3393z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 159 */
obj_t BgL_arg1998z00_2172;
BgL_arg1998z00_2172 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2169, BNIL, BgL_rulesz00_2171); 
{ /* R5rs/syntax.scm 159 */
obj_t BgL_auxz00_4264;
if(
PROCEDUREP(BgL_arg1998z00_2172))
{ /* R5rs/syntax.scm 159 */
BgL_auxz00_4264 = BgL_arg1998z00_2172
; }  else 
{ 
obj_t BgL_auxz00_4267;
BgL_auxz00_4267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)5927)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2172); 
FAILURE(BgL_auxz00_4267,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2169, BgL_auxz00_4264); } } } 
{ /* R5rs/syntax.scm 169 */
obj_t BgL_idz00_2173;obj_t BgL_rulesz00_2175;
BgL_idz00_2173 = BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2175 = BGl_list3414z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 169 */
obj_t BgL_arg1998z00_2176;
BgL_arg1998z00_2176 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2173, BNIL, BgL_rulesz00_2175); 
{ /* R5rs/syntax.scm 169 */
obj_t BgL_auxz00_4273;
if(
PROCEDUREP(BgL_arg1998z00_2176))
{ /* R5rs/syntax.scm 169 */
BgL_auxz00_4273 = BgL_arg1998z00_2176
; }  else 
{ 
obj_t BgL_auxz00_4276;
BgL_auxz00_4276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)6202)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2176); 
FAILURE(BgL_auxz00_4276,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2173, BgL_auxz00_4273); } } } 
{ /* R5rs/syntax.scm 198 */
obj_t BgL_idz00_2177;obj_t BgL_rulesz00_2179;
BgL_idz00_2177 = BGl_symbol3455z00zz__r5_macro_4_3_syntaxz00; 
BgL_rulesz00_2179 = BGl_list3457z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 198 */
obj_t BgL_arg1998z00_2180;
BgL_arg1998z00_2180 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_idz00_2177, BNIL, BgL_rulesz00_2179); 
{ /* R5rs/syntax.scm 198 */
obj_t BgL_auxz00_4282;
if(
PROCEDUREP(BgL_arg1998z00_2180))
{ /* R5rs/syntax.scm 198 */
BgL_auxz00_4282 = BgL_arg1998z00_2180
; }  else 
{ 
obj_t BgL_auxz00_4285;
BgL_auxz00_4285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)6865)), BGl_string3326z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_arg1998z00_2180); 
FAILURE(BgL_auxz00_4285,BFALSE,BFALSE);} 
return 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_idz00_2177, BgL_auxz00_4282);} } } } } } 
}



/* <anonymous:1989>_2917 */
obj_t BGl_zc3anonymousza31989ze3_2917z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3040)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 84 */
{ /* R5rs/syntax.scm 100 */
obj_t BgL_keywordz00_3041;obj_t BgL_zc3anonymousza31995ze3z83_3042;
BgL_keywordz00_3041 = 
PROCEDURE_REF(BgL_envz00_3040, 
(int)(((long)0))); 
BgL_zc3anonymousza31995ze3z83_3042 = 
PROCEDURE_REF(BgL_envz00_3040, 
(int)(((long)1))); 
{ 

{ /* R5rs/syntax.scm 100 */
obj_t BgL_arg1990z00_2156;
BgL_arg1990z00_2156 = 
MAKE_PAIR(BgL_keywordz00_3041, BgL_zc3anonymousza31995ze3z83_3042); 
return ( 
BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00 = 
MAKE_PAIR(BgL_arg1990z00_2156, BGl_syntaxesz00zz__r5_macro_4_3_syntaxz00), BUNSPEC) ;} } } } 
}



/* <anonymous:1995> */
obj_t BGl_zc3anonymousza31995ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3043, obj_t BgL_xz00_3044, obj_t BgL_ez00_3045)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 100 */
return BgL_xz00_3044;} 
}



/* syntax-expander */
obj_t BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_5, obj_t BgL_ez00_6)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 230 */
{ /* R5rs/syntax.scm 231 */
obj_t BgL_e1z00_732;
if(
PAIRP(BgL_xz00_5))
{ /* R5rs/syntax.scm 234 */
obj_t BgL_g1824z00_741;
BgL_g1824z00_741 = 
BGl_getzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_5)); 
if(
CBOOL(BgL_g1824z00_741))
{ /* R5rs/syntax.scm 234 */
BgL_e1z00_732 = BgL_g1824z00_741; }  else 
{ /* R5rs/syntax.scm 234 */
BgL_e1z00_732 = BGl_proc3491z00zz__r5_macro_4_3_syntaxz00; } }  else 
{ /* R5rs/syntax.scm 232 */
BgL_e1z00_732 = BGl_proc3492z00zz__r5_macro_4_3_syntaxz00; } 
{ /* R5rs/syntax.scm 247 */
obj_t BgL_newz00_733;
{ /* R5rs/syntax.scm 247 */
obj_t BgL_funz00_3127;
if(
PROCEDUREP(BgL_e1z00_732))
{ /* R5rs/syntax.scm 247 */
BgL_funz00_3127 = BgL_e1z00_732; }  else 
{ 
obj_t BgL_auxz00_4304;
BgL_auxz00_4304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8140)), BGl_string3493z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_732); 
FAILURE(BgL_auxz00_4304,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3127, ((long)2)))
{ /* R5rs/syntax.scm 247 */
BgL_newz00_733 = 
PROCEDURE_ENTRY(BgL_funz00_3127)(BgL_e1z00_732, BgL_xz00_5, BgL_ez00_6, BEOA); }  else 
{ /* R5rs/syntax.scm 247 */
FAILURE(BGl_string3494z00zz__r5_macro_4_3_syntaxz00,BGl_list3495z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3127);} } 
{ /* R5rs/syntax.scm 248 */
bool_t BgL_testz00_4313;
if(
PAIRP(BgL_newz00_733))
{ /* R5rs/syntax.scm 248 */
if(
EXTENDED_PAIRP(BgL_newz00_733))
{ /* R5rs/syntax.scm 248 */
BgL_testz00_4313 = ((bool_t)0)
; }  else 
{ /* R5rs/syntax.scm 248 */
BgL_testz00_4313 = 
EXTENDED_PAIRP(BgL_xz00_5)
; } }  else 
{ /* R5rs/syntax.scm 248 */
BgL_testz00_4313 = ((bool_t)0)
; } 
if(BgL_testz00_4313)
{ /* R5rs/syntax.scm 249 */
obj_t BgL_arg2000z00_735;obj_t BgL_arg2001z00_736;obj_t BgL_arg2002z00_737;
BgL_arg2000z00_735 = 
CAR(BgL_newz00_733); 
BgL_arg2001z00_736 = 
CDR(BgL_newz00_733); 
{ /* R5rs/syntax.scm 249 */
obj_t BgL_objz00_2197;
if(
EXTENDED_PAIRP(BgL_xz00_5))
{ /* R5rs/syntax.scm 249 */
BgL_objz00_2197 = BgL_xz00_5; }  else 
{ 
obj_t BgL_auxz00_4323;
BgL_auxz00_4323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8243)), BGl_string3493z00zz__r5_macro_4_3_syntaxz00, BGl_string3502z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_5); 
FAILURE(BgL_auxz00_4323,BFALSE,BFALSE);} 
BgL_arg2002z00_737 = 
CER(BgL_objz00_2197); } 
{ /* R5rs/syntax.scm 249 */
obj_t BgL_res2893z00_2201;
BgL_res2893z00_2201 = 
MAKE_EXTENDED_PAIR(BgL_arg2000z00_735, BgL_arg2001z00_736, BgL_arg2002z00_737); 
return BgL_res2893z00_2201;} }  else 
{ /* R5rs/syntax.scm 248 */
return BgL_newz00_733;} } } } } 
}



/* _syntax-expander */
obj_t BGl__syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3048, obj_t BgL_xz00_3049, obj_t BgL_ez00_3050)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 230 */
return 
BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_3049, BgL_ez00_3050);} 
}



/* <anonymous:2006> */
obj_t BGl_zc3anonymousza32006ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3051, obj_t BgL_xz00_3052, obj_t BgL_ez00_3053)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 238 */
return 
BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_3053, BgL_xz00_3052);} 
}



/* loop''' */
obj_t BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3104, obj_t BgL_xz00_748)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 239 */
if(
PAIRP(BgL_xz00_748))
{ /* R5rs/syntax.scm 242 */
obj_t BgL_arg2009z00_751;obj_t BgL_arg2010z00_752;
{ /* R5rs/syntax.scm 242 */
obj_t BgL_arg2011z00_753;
BgL_arg2011z00_753 = 
CAR(BgL_xz00_748); 
{ /* R5rs/syntax.scm 242 */
obj_t BgL_funz00_3134;
if(
PROCEDUREP(BgL_ez00_3104))
{ /* R5rs/syntax.scm 242 */
BgL_funz00_3134 = BgL_ez00_3104; }  else 
{ 
obj_t BgL_auxz00_4336;
BgL_auxz00_4336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8032)), BGl_string3503z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3104); 
FAILURE(BgL_auxz00_4336,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3134, ((long)2)))
{ /* R5rs/syntax.scm 242 */
BgL_arg2009z00_751 = 
PROCEDURE_ENTRY(BgL_funz00_3134)(BgL_ez00_3104, BgL_arg2011z00_753, BgL_ez00_3104, BEOA); }  else 
{ /* R5rs/syntax.scm 242 */
FAILURE(BGl_string3504z00zz__r5_macro_4_3_syntaxz00,BGl_list3505z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3134);} } } 
BgL_arg2010z00_752 = 
BGl_loopz72z72z72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_3104, 
CDR(BgL_xz00_748)); 
return 
MAKE_PAIR(BgL_arg2009z00_751, BgL_arg2010z00_752);}  else 
{ /* R5rs/syntax.scm 241 */
if(
NULLP(BgL_xz00_748))
{ /* R5rs/syntax.scm 243 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 246 */
obj_t BgL_funz00_3139;
if(
PROCEDUREP(BgL_ez00_3104))
{ /* R5rs/syntax.scm 246 */
BgL_funz00_3139 = BgL_ez00_3104; }  else 
{ 
obj_t BgL_auxz00_4352;
BgL_auxz00_4352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8107)), BGl_string3503z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3104); 
FAILURE(BgL_auxz00_4352,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3139, ((long)2)))
{ /* R5rs/syntax.scm 246 */
return 
PROCEDURE_ENTRY(BgL_funz00_3139)(BgL_ez00_3104, BgL_xz00_748, BgL_ez00_3104, BEOA);}  else 
{ /* R5rs/syntax.scm 246 */
FAILURE(BGl_string3504z00zz__r5_macro_4_3_syntaxz00,BGl_list3508z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3139);} } } } 
}



/* <anonymous:2016> */
obj_t BGl_zc3anonymousza32016ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3054, obj_t BgL_xz00_3055, obj_t BgL_ez00_3056)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 233 */
return BgL_xz00_3055;} 
}



/* expand-define-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_7, obj_t BgL_ez00_8)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 255 */
if(
PAIRP(BgL_xz00_7))
{ /* R5rs/syntax.scm 256 */
obj_t BgL_cdrzd21399zd2_768;
BgL_cdrzd21399zd2_768 = 
CDR(BgL_xz00_7); 
if(
PAIRP(BgL_cdrzd21399zd2_768))
{ /* R5rs/syntax.scm 256 */
obj_t BgL_carzd21403zd2_770;obj_t BgL_cdrzd21404zd2_771;
BgL_carzd21403zd2_770 = 
CAR(BgL_cdrzd21399zd2_768); 
BgL_cdrzd21404zd2_771 = 
CDR(BgL_cdrzd21399zd2_768); 
if(
SYMBOLP(BgL_carzd21403zd2_770))
{ /* R5rs/syntax.scm 256 */
if(
PAIRP(BgL_cdrzd21404zd2_771))
{ /* R5rs/syntax.scm 256 */
obj_t BgL_carzd21410zd2_774;
BgL_carzd21410zd2_774 = 
CAR(BgL_cdrzd21404zd2_771); 
if(
PAIRP(BgL_carzd21410zd2_774))
{ /* R5rs/syntax.scm 256 */
obj_t BgL_cdrzd21415zd2_776;
BgL_cdrzd21415zd2_776 = 
CDR(BgL_carzd21410zd2_774); 
if(
(
CAR(BgL_carzd21410zd2_774)==BGl_symbol3509z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 256 */
if(
PAIRP(BgL_cdrzd21415zd2_776))
{ /* R5rs/syntax.scm 256 */
if(
NULLP(
CDR(BgL_cdrzd21404zd2_771)))
{ /* R5rs/syntax.scm 256 */
obj_t BgL_arg2025z00_780;obj_t BgL_arg2027z00_781;
BgL_arg2025z00_780 = 
CAR(BgL_cdrzd21415zd2_776); 
BgL_arg2027z00_781 = 
CDR(BgL_cdrzd21415zd2_776); 
{ /* R5rs/syntax.scm 256 */
obj_t BgL_macronamez00_2218;
BgL_macronamez00_2218 = BgL_carzd21403zd2_770; 
{ /* R5rs/syntax.scm 256 */
obj_t BgL_exz00_2221;
{ /* R5rs/syntax.scm 256 */
obj_t BgL_auxz00_4395;obj_t BgL_auxz00_4386;
{ /* R5rs/syntax.scm 256 */
bool_t BgL_testz00_4396;
if(
PAIRP(BgL_arg2027z00_781))
{ /* R5rs/syntax.scm 256 */
BgL_testz00_4396 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 256 */
BgL_testz00_4396 = 
NULLP(BgL_arg2027z00_781)
; } 
if(BgL_testz00_4396)
{ /* R5rs/syntax.scm 256 */
BgL_auxz00_4395 = BgL_arg2027z00_781
; }  else 
{ 
obj_t BgL_auxz00_4400;
BgL_auxz00_4400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8522)), BGl_string3511z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2027z00_781); 
FAILURE(BgL_auxz00_4400,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 256 */
bool_t BgL_testz00_4387;
if(
PAIRP(BgL_arg2025z00_780))
{ /* R5rs/syntax.scm 256 */
BgL_testz00_4387 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 256 */
BgL_testz00_4387 = 
NULLP(BgL_arg2025z00_780)
; } 
if(BgL_testz00_4387)
{ /* R5rs/syntax.scm 256 */
BgL_auxz00_4386 = BgL_arg2025z00_780
; }  else 
{ 
obj_t BgL_auxz00_4391;
BgL_auxz00_4391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8522)), BGl_string3511z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2025z00_780); 
FAILURE(BgL_auxz00_4391,BFALSE,BFALSE);} } 
BgL_exz00_2221 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_macronamez00_2218, BgL_auxz00_4386, BgL_auxz00_4395); } 
{ /* R5rs/syntax.scm 256 */
obj_t BgL_auxz00_4405;
if(
PROCEDUREP(BgL_exz00_2221))
{ /* R5rs/syntax.scm 256 */
BgL_auxz00_4405 = BgL_exz00_2221
; }  else 
{ 
obj_t BgL_auxz00_4408;
BgL_auxz00_4408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8522)), BGl_string3511z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_exz00_2221); 
FAILURE(BgL_auxz00_4408,BFALSE,BFALSE);} 
BGl_installzd2syntaxzd2expanderz00zz__r5_macro_4_3_syntaxz00(BgL_macronamez00_2218, BgL_auxz00_4405); } 
BGl_installzd2expanderzd2zz__macroz00(BgL_macronamez00_2218, BgL_exz00_2221); 
return BUNSPEC;} } }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} }  else 
{ /* R5rs/syntax.scm 256 */
return 
BGl_errorz00zz__errorz00(BGl_string3512z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_7);} } 
}



/* _expand-define-syntax */
obj_t BGl__expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3057, obj_t BgL_xz00_3058, obj_t BgL_ez00_3059)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 255 */
{ /* R5rs/syntax.scm 256 */
obj_t BgL_auxz00_4422;
if(
PROCEDUREP(BgL_ez00_3059))
{ /* R5rs/syntax.scm 256 */
BgL_auxz00_4422 = BgL_ez00_3059
; }  else 
{ 
obj_t BgL_auxz00_4425;
BgL_auxz00_4425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)8522)), BGl_string3514z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3059); 
FAILURE(BgL_auxz00_4425,BFALSE,BFALSE);} 
return 
BGl_expandzd2definezd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3058, BgL_auxz00_4422);} } 
}



/* expand-letrec-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_9, obj_t BgL_ez00_10)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 268 */
{ 
obj_t BgL_bsz00_786;obj_t BgL_bodyz00_787;
if(
PAIRP(BgL_xz00_9))
{ /* R5rs/syntax.scm 269 */
obj_t BgL_cdrzd21430zd2_792;
BgL_cdrzd21430zd2_792 = 
CDR(BgL_xz00_9); 
if(
PAIRP(BgL_cdrzd21430zd2_792))
{ /* R5rs/syntax.scm 269 */
BgL_bsz00_786 = 
CAR(BgL_cdrzd21430zd2_792); 
BgL_bodyz00_787 = 
CDR(BgL_cdrzd21430zd2_792); 
{ /* R5rs/syntax.scm 271 */
obj_t BgL_e1z00_796;
BgL_e1z00_796 = 
BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(BgL_ez00_10, BgL_bsz00_786); 
{ /* R5rs/syntax.scm 284 */
obj_t BgL_arg2036z00_797;obj_t BgL_arg2037z00_798;
BgL_arg2036z00_797 = BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 285 */
obj_t BgL_arg2038z00_799;
if(
NULLP(BgL_bodyz00_787))
{ /* R5rs/syntax.scm 285 */
BgL_arg2038z00_799 = BNIL; }  else 
{ /* R5rs/syntax.scm 285 */
obj_t BgL_head1858z00_803;
BgL_head1858z00_803 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1856z00_805;obj_t BgL_tail1859z00_806;
BgL_l1856z00_805 = BgL_bodyz00_787; 
BgL_tail1859z00_806 = BgL_head1858z00_803; 
BgL_zc3anonymousza32041ze3z83_807:
if(
PAIRP(BgL_l1856z00_805))
{ /* R5rs/syntax.scm 285 */
obj_t BgL_newtail1860z00_809;
{ /* R5rs/syntax.scm 285 */
obj_t BgL_arg2044z00_811;
{ /* R5rs/syntax.scm 285 */
obj_t BgL_xz00_813;
BgL_xz00_813 = 
CAR(BgL_l1856z00_805); 
{ /* R5rs/syntax.scm 285 */
obj_t BgL_arg2046z00_814;
BgL_arg2046z00_814 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_813, BNIL); 
{ /* R5rs/syntax.scm 285 */
obj_t BgL_funz00_3152;
if(
PROCEDUREP(BgL_e1z00_796))
{ /* R5rs/syntax.scm 285 */
BgL_funz00_3152 = BgL_e1z00_796; }  else 
{ 
obj_t BgL_auxz00_4445;
BgL_auxz00_4445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9588)), BGl_string3515z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_796); 
FAILURE(BgL_auxz00_4445,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3152, ((long)2)))
{ /* R5rs/syntax.scm 285 */
BgL_arg2044z00_811 = 
PROCEDURE_ENTRY(BgL_funz00_3152)(BgL_e1z00_796, BgL_arg2046z00_814, BgL_e1z00_796, BEOA); }  else 
{ /* R5rs/syntax.scm 285 */
FAILURE(BGl_string3516z00zz__r5_macro_4_3_syntaxz00,BGl_list3517z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3152);} } } } 
BgL_newtail1860z00_809 = 
MAKE_PAIR(BgL_arg2044z00_811, BNIL); } 
SET_CDR(BgL_tail1859z00_806, BgL_newtail1860z00_809); 
{ 
obj_t BgL_tail1859z00_4458;obj_t BgL_l1856z00_4456;
BgL_l1856z00_4456 = 
CDR(BgL_l1856z00_805); 
BgL_tail1859z00_4458 = BgL_newtail1860z00_809; 
BgL_tail1859z00_806 = BgL_tail1859z00_4458; 
BgL_l1856z00_805 = BgL_l1856z00_4456; 
goto BgL_zc3anonymousza32041ze3z83_807;} }  else 
{ /* R5rs/syntax.scm 285 */
if(
NULLP(BgL_l1856z00_805))
{ /* R5rs/syntax.scm 285 */
BgL_arg2038z00_799 = 
CDR(BgL_head1858z00_803); }  else 
{ /* R5rs/syntax.scm 285 */
BgL_arg2038z00_799 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1856z00_805); } } } } 
{ /* R5rs/syntax.scm 284 */
obj_t BgL_auxz00_4463;
{ /* R5rs/syntax.scm 284 */
bool_t BgL_testz00_4464;
if(
PAIRP(BgL_arg2038z00_799))
{ /* R5rs/syntax.scm 284 */
BgL_testz00_4464 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 284 */
BgL_testz00_4464 = 
NULLP(BgL_arg2038z00_799)
; } 
if(BgL_testz00_4464)
{ /* R5rs/syntax.scm 284 */
BgL_auxz00_4463 = BgL_arg2038z00_799
; }  else 
{ 
obj_t BgL_auxz00_4468;
BgL_auxz00_4468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9555)), BGl_string3522z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2038z00_799); 
FAILURE(BgL_auxz00_4468,BFALSE,BFALSE);} } 
BgL_arg2037z00_798 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4463, BNIL); } } 
return 
MAKE_PAIR(BgL_arg2036z00_797, BgL_arg2037z00_798);} } }  else 
{ /* R5rs/syntax.scm 269 */
return 
BGl_errorz00zz__errorz00(BGl_string3523z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} }  else 
{ /* R5rs/syntax.scm 269 */
return 
BGl_errorz00zz__errorz00(BGl_string3523z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_9);} } } 
}



/* loop'' */
obj_t BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3103, obj_t BgL_bsz00_818)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 271 */
if(
NULLP(BgL_bsz00_818))
{ /* R5rs/syntax.scm 272 */
return BgL_ez00_3103;}  else 
{ 
obj_t BgL_mz00_821;obj_t BgL_lsz00_822;obj_t BgL_rulesz00_823;
{ /* R5rs/syntax.scm 274 */
obj_t BgL_ezd21439zd2_826;
{ /* R5rs/syntax.scm 274 */
obj_t BgL_pairz00_2233;
if(
PAIRP(BgL_bsz00_818))
{ /* R5rs/syntax.scm 274 */
BgL_pairz00_2233 = BgL_bsz00_818; }  else 
{ 
obj_t BgL_auxz00_4482;
BgL_auxz00_4482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9220)), BGl_string3526z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818); 
FAILURE(BgL_auxz00_4482,BFALSE,BFALSE);} 
BgL_ezd21439zd2_826 = 
CAR(BgL_pairz00_2233); } 
if(
PAIRP(BgL_ezd21439zd2_826))
{ /* R5rs/syntax.scm 274 */
obj_t BgL_carzd21446zd2_828;obj_t BgL_cdrzd21447zd2_829;
BgL_carzd21446zd2_828 = 
CAR(BgL_ezd21439zd2_826); 
BgL_cdrzd21447zd2_829 = 
CDR(BgL_ezd21439zd2_826); 
if(
SYMBOLP(BgL_carzd21446zd2_828))
{ /* R5rs/syntax.scm 274 */
if(
PAIRP(BgL_cdrzd21447zd2_829))
{ /* R5rs/syntax.scm 274 */
obj_t BgL_carzd21453zd2_832;
BgL_carzd21453zd2_832 = 
CAR(BgL_cdrzd21447zd2_829); 
if(
PAIRP(BgL_carzd21453zd2_832))
{ /* R5rs/syntax.scm 274 */
obj_t BgL_cdrzd21458zd2_834;
BgL_cdrzd21458zd2_834 = 
CDR(BgL_carzd21453zd2_832); 
if(
(
CAR(BgL_carzd21453zd2_832)==BGl_symbol3509z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 274 */
if(
PAIRP(BgL_cdrzd21458zd2_834))
{ /* R5rs/syntax.scm 274 */
if(
NULLP(
CDR(BgL_cdrzd21447zd2_829)))
{ /* R5rs/syntax.scm 274 */
BgL_mz00_821 = BgL_carzd21446zd2_828; 
BgL_lsz00_822 = 
CAR(BgL_cdrzd21458zd2_834); 
BgL_rulesz00_823 = 
CDR(BgL_cdrzd21458zd2_834); 
{ /* R5rs/syntax.scm 276 */
obj_t BgL_e3z00_843;obj_t BgL_e4z00_844;
{ /* R5rs/syntax.scm 276 */
obj_t BgL_auxz00_4516;obj_t BgL_auxz00_4507;
{ /* R5rs/syntax.scm 276 */
bool_t BgL_testz00_4517;
if(
PAIRP(BgL_rulesz00_823))
{ /* R5rs/syntax.scm 276 */
BgL_testz00_4517 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 276 */
BgL_testz00_4517 = 
NULLP(BgL_rulesz00_823)
; } 
if(BgL_testz00_4517)
{ /* R5rs/syntax.scm 276 */
BgL_auxz00_4516 = BgL_rulesz00_823
; }  else 
{ 
obj_t BgL_auxz00_4521;
BgL_auxz00_4521 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9328)), BGl_string3524z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_823); 
FAILURE(BgL_auxz00_4521,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 276 */
bool_t BgL_testz00_4508;
if(
PAIRP(BgL_lsz00_822))
{ /* R5rs/syntax.scm 276 */
BgL_testz00_4508 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 276 */
BgL_testz00_4508 = 
NULLP(BgL_lsz00_822)
; } 
if(BgL_testz00_4508)
{ /* R5rs/syntax.scm 276 */
BgL_auxz00_4507 = BgL_lsz00_822
; }  else 
{ 
obj_t BgL_auxz00_4512;
BgL_auxz00_4512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9325)), BGl_string3524z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_lsz00_822); 
FAILURE(BgL_auxz00_4512,BFALSE,BFALSE);} } 
BgL_e3z00_843 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_mz00_821, BgL_auxz00_4507, BgL_auxz00_4516); } 
{ /* R5rs/syntax.scm 277 */
obj_t BgL_arg2066z00_851;
{ /* R5rs/syntax.scm 277 */
obj_t BgL_pairz00_2248;
if(
PAIRP(BgL_bsz00_818))
{ /* R5rs/syntax.scm 277 */
BgL_pairz00_2248 = BgL_bsz00_818; }  else 
{ 
obj_t BgL_auxz00_4528;
BgL_auxz00_4528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9357)), BGl_string3524z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818); 
FAILURE(BgL_auxz00_4528,BFALSE,BFALSE);} 
BgL_arg2066z00_851 = 
CDR(BgL_pairz00_2248); } 
BgL_e4z00_844 = 
BGl_loopz72z72z00zz__r5_macro_4_3_syntaxz00(BgL_ez00_3103, BgL_arg2066z00_851); } 
{ /* R5rs/syntax.scm 278 */
obj_t BgL_zc3anonymousza32062ze3z83_3060;
BgL_zc3anonymousza32062ze3z83_3060 = 
make_fx_procedure(BGl_zc3anonymousza32062ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza32062ze3z83_3060, 
(int)(((long)0)), BgL_e4z00_844); 
PROCEDURE_SET(BgL_zc3anonymousza32062ze3z83_3060, 
(int)(((long)1)), BgL_e3z00_843); 
PROCEDURE_SET(BgL_zc3anonymousza32062ze3z83_3060, 
(int)(((long)2)), BgL_mz00_821); 
return BgL_zc3anonymousza32062ze3z83_3060;} } }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} }  else 
{ /* R5rs/syntax.scm 274 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_818);} } } } 
}



/* _expand-letrec-syntax */
obj_t BGl__expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3061, obj_t BgL_xz00_3062, obj_t BgL_ez00_3063)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 268 */
{ /* R5rs/syntax.scm 269 */
obj_t BgL_auxz00_4552;
if(
PROCEDUREP(BgL_ez00_3063))
{ /* R5rs/syntax.scm 269 */
BgL_auxz00_4552 = BgL_ez00_3063
; }  else 
{ 
obj_t BgL_auxz00_4555;
BgL_auxz00_4555 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9099)), BGl_string3529z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3063); 
FAILURE(BgL_auxz00_4555,BFALSE,BFALSE);} 
return 
BGl_expandzd2letreczd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3062, BgL_auxz00_4552);} } 
}



/* <anonymous:2062> */
obj_t BGl_zc3anonymousza32062ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3064, obj_t BgL_xz00_3068, obj_t BgL_e2z00_3069)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 278 */
{ /* R5rs/syntax.scm 279 */
obj_t BgL_e4z00_3065;obj_t BgL_e3z00_3066;obj_t BgL_mz00_3067;
BgL_e4z00_3065 = 
PROCEDURE_REF(BgL_envz00_3064, 
(int)(((long)0))); 
BgL_e3z00_3066 = 
PROCEDURE_REF(BgL_envz00_3064, 
(int)(((long)1))); 
BgL_mz00_3067 = 
PROCEDURE_REF(BgL_envz00_3064, 
(int)(((long)2))); 
{ 
obj_t BgL_xz00_845;obj_t BgL_e2z00_846;
BgL_xz00_845 = BgL_xz00_3068; 
BgL_e2z00_846 = BgL_e2z00_3069; 
{ /* R5rs/syntax.scm 279 */
bool_t BgL_testz00_4566;
if(
PAIRP(BgL_xz00_845))
{ /* R5rs/syntax.scm 279 */
BgL_testz00_4566 = 
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3067, 
CAR(BgL_xz00_845))
; }  else 
{ /* R5rs/syntax.scm 279 */
BgL_testz00_4566 = ((bool_t)0)
; } 
if(BgL_testz00_4566)
{ /* R5rs/syntax.scm 280 */
obj_t BgL_funz00_3169;
if(
PROCEDUREP(BgL_e3z00_3066))
{ /* R5rs/syntax.scm 280 */
BgL_funz00_3169 = BgL_e3z00_3066; }  else 
{ 
obj_t BgL_auxz00_4573;
BgL_auxz00_4573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9449)), BGl_string3530z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e3z00_3066); 
FAILURE(BgL_auxz00_4573,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3169, ((long)2)))
{ /* R5rs/syntax.scm 280 */
return 
PROCEDURE_ENTRY(BgL_funz00_3169)(BgL_e3z00_3066, BgL_xz00_845, BgL_e2z00_846, BEOA);}  else 
{ /* R5rs/syntax.scm 280 */
FAILURE(BGl_string3531z00zz__r5_macro_4_3_syntaxz00,BGl_list3532z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3169);} }  else 
{ /* R5rs/syntax.scm 281 */
obj_t BgL_funz00_3174;
if(
PROCEDUREP(BgL_e4z00_3065))
{ /* R5rs/syntax.scm 281 */
BgL_funz00_3174 = BgL_e4z00_3065; }  else 
{ 
obj_t BgL_auxz00_4584;
BgL_auxz00_4584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9469)), BGl_string3530z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e4z00_3065); 
FAILURE(BgL_auxz00_4584,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3174, ((long)2)))
{ /* R5rs/syntax.scm 281 */
return 
PROCEDURE_ENTRY(BgL_funz00_3174)(BgL_e4z00_3065, BgL_xz00_845, BgL_e2z00_846, BEOA);}  else 
{ /* R5rs/syntax.scm 281 */
FAILURE(BGl_string3531z00zz__r5_macro_4_3_syntaxz00,BGl_list3537z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3174);} } } } } } 
}



/* expand-let-syntax */
BGL_EXPORTED_DEF obj_t BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_11, obj_t BgL_ez00_12)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 292 */
{ 
obj_t BgL_bsz00_853;obj_t BgL_bodyz00_854;
if(
PAIRP(BgL_xz00_11))
{ /* R5rs/syntax.scm 293 */
obj_t BgL_cdrzd21473zd2_859;
BgL_cdrzd21473zd2_859 = 
CDR(BgL_xz00_11); 
if(
PAIRP(BgL_cdrzd21473zd2_859))
{ /* R5rs/syntax.scm 293 */
BgL_bsz00_853 = 
CAR(BgL_cdrzd21473zd2_859); 
BgL_bodyz00_854 = 
CDR(BgL_cdrzd21473zd2_859); 
{ /* R5rs/syntax.scm 295 */
obj_t BgL_e1z00_863;
BgL_e1z00_863 = 
BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_12, BgL_bsz00_853); 
{ /* R5rs/syntax.scm 308 */
obj_t BgL_arg2072z00_864;obj_t BgL_arg2073z00_865;
BgL_arg2072z00_864 = BGl_symbol3283z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 309 */
obj_t BgL_arg2076z00_866;
if(
NULLP(BgL_bodyz00_854))
{ /* R5rs/syntax.scm 309 */
BgL_arg2076z00_866 = BNIL; }  else 
{ /* R5rs/syntax.scm 309 */
obj_t BgL_head1863z00_870;
BgL_head1863z00_870 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1861z00_872;obj_t BgL_tail1864z00_873;
BgL_l1861z00_872 = BgL_bodyz00_854; 
BgL_tail1864z00_873 = BgL_head1863z00_870; 
BgL_zc3anonymousza32079ze3z83_874:
if(
PAIRP(BgL_l1861z00_872))
{ /* R5rs/syntax.scm 309 */
obj_t BgL_newtail1865z00_876;
{ /* R5rs/syntax.scm 309 */
obj_t BgL_arg2082z00_878;
{ /* R5rs/syntax.scm 309 */
obj_t BgL_xz00_880;
BgL_xz00_880 = 
CAR(BgL_l1861z00_872); 
{ /* R5rs/syntax.scm 309 */
obj_t BgL_arg2084z00_881;
BgL_arg2084z00_881 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_880, BNIL); 
{ /* R5rs/syntax.scm 309 */
obj_t BgL_funz00_3179;
if(
PROCEDUREP(BgL_e1z00_863))
{ /* R5rs/syntax.scm 309 */
BgL_funz00_3179 = BgL_e1z00_863; }  else 
{ 
obj_t BgL_auxz00_4608;
BgL_auxz00_4608 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10433)), BGl_string3540z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e1z00_863); 
FAILURE(BgL_auxz00_4608,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3179, ((long)2)))
{ /* R5rs/syntax.scm 309 */
BgL_arg2082z00_878 = 
PROCEDURE_ENTRY(BgL_funz00_3179)(BgL_e1z00_863, BgL_arg2084z00_881, BgL_e1z00_863, BEOA); }  else 
{ /* R5rs/syntax.scm 309 */
FAILURE(BGl_string3541z00zz__r5_macro_4_3_syntaxz00,BGl_list3542z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3179);} } } } 
BgL_newtail1865z00_876 = 
MAKE_PAIR(BgL_arg2082z00_878, BNIL); } 
SET_CDR(BgL_tail1864z00_873, BgL_newtail1865z00_876); 
{ 
obj_t BgL_tail1864z00_4621;obj_t BgL_l1861z00_4619;
BgL_l1861z00_4619 = 
CDR(BgL_l1861z00_872); 
BgL_tail1864z00_4621 = BgL_newtail1865z00_876; 
BgL_tail1864z00_873 = BgL_tail1864z00_4621; 
BgL_l1861z00_872 = BgL_l1861z00_4619; 
goto BgL_zc3anonymousza32079ze3z83_874;} }  else 
{ /* R5rs/syntax.scm 309 */
if(
NULLP(BgL_l1861z00_872))
{ /* R5rs/syntax.scm 309 */
BgL_arg2076z00_866 = 
CDR(BgL_head1863z00_870); }  else 
{ /* R5rs/syntax.scm 309 */
BgL_arg2076z00_866 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1861z00_872); } } } } 
{ /* R5rs/syntax.scm 308 */
obj_t BgL_auxz00_4626;
{ /* R5rs/syntax.scm 308 */
bool_t BgL_testz00_4627;
if(
PAIRP(BgL_arg2076z00_866))
{ /* R5rs/syntax.scm 308 */
BgL_testz00_4627 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 308 */
BgL_testz00_4627 = 
NULLP(BgL_arg2076z00_866)
; } 
if(BgL_testz00_4627)
{ /* R5rs/syntax.scm 308 */
BgL_auxz00_4626 = BgL_arg2076z00_866
; }  else 
{ 
obj_t BgL_auxz00_4631;
BgL_auxz00_4631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10400)), BGl_string3545z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2076z00_866); 
FAILURE(BgL_auxz00_4631,BFALSE,BFALSE);} } 
BgL_arg2073z00_865 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4626, BNIL); } } 
return 
MAKE_PAIR(BgL_arg2072z00_864, BgL_arg2073z00_865);} } }  else 
{ /* R5rs/syntax.scm 293 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);} }  else 
{ /* R5rs/syntax.scm 293 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3513z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_11);} } } 
}



/* loop' */
obj_t BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(obj_t BgL_ez00_3102, obj_t BgL_bsz00_885)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 295 */
if(
NULLP(BgL_bsz00_885))
{ /* R5rs/syntax.scm 296 */
return BgL_ez00_3102;}  else 
{ 
obj_t BgL_mz00_888;obj_t BgL_lsz00_889;obj_t BgL_rulesz00_890;
{ /* R5rs/syntax.scm 298 */
obj_t BgL_ezd21482zd2_893;
{ /* R5rs/syntax.scm 298 */
obj_t BgL_pairz00_2269;
if(
PAIRP(BgL_bsz00_885))
{ /* R5rs/syntax.scm 298 */
BgL_pairz00_2269 = BgL_bsz00_885; }  else 
{ 
obj_t BgL_auxz00_4645;
BgL_auxz00_4645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10066)), BGl_string3547z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885); 
FAILURE(BgL_auxz00_4645,BFALSE,BFALSE);} 
BgL_ezd21482zd2_893 = 
CAR(BgL_pairz00_2269); } 
if(
PAIRP(BgL_ezd21482zd2_893))
{ /* R5rs/syntax.scm 298 */
obj_t BgL_carzd21489zd2_895;obj_t BgL_cdrzd21490zd2_896;
BgL_carzd21489zd2_895 = 
CAR(BgL_ezd21482zd2_893); 
BgL_cdrzd21490zd2_896 = 
CDR(BgL_ezd21482zd2_893); 
if(
SYMBOLP(BgL_carzd21489zd2_895))
{ /* R5rs/syntax.scm 298 */
if(
PAIRP(BgL_cdrzd21490zd2_896))
{ /* R5rs/syntax.scm 298 */
obj_t BgL_carzd21496zd2_899;
BgL_carzd21496zd2_899 = 
CAR(BgL_cdrzd21490zd2_896); 
if(
PAIRP(BgL_carzd21496zd2_899))
{ /* R5rs/syntax.scm 298 */
obj_t BgL_cdrzd21501zd2_901;
BgL_cdrzd21501zd2_901 = 
CDR(BgL_carzd21496zd2_899); 
if(
(
CAR(BgL_carzd21496zd2_899)==BGl_symbol3509z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 298 */
if(
PAIRP(BgL_cdrzd21501zd2_901))
{ /* R5rs/syntax.scm 298 */
if(
NULLP(
CDR(BgL_cdrzd21490zd2_896)))
{ /* R5rs/syntax.scm 298 */
BgL_mz00_888 = BgL_carzd21489zd2_895; 
BgL_lsz00_889 = 
CAR(BgL_cdrzd21501zd2_901); 
BgL_rulesz00_890 = 
CDR(BgL_cdrzd21501zd2_901); 
{ /* R5rs/syntax.scm 300 */
obj_t BgL_e3z00_910;obj_t BgL_e4z00_911;
{ /* R5rs/syntax.scm 300 */
obj_t BgL_auxz00_4679;obj_t BgL_auxz00_4670;
{ /* R5rs/syntax.scm 300 */
bool_t BgL_testz00_4680;
if(
PAIRP(BgL_rulesz00_890))
{ /* R5rs/syntax.scm 300 */
BgL_testz00_4680 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 300 */
BgL_testz00_4680 = 
NULLP(BgL_rulesz00_890)
; } 
if(BgL_testz00_4680)
{ /* R5rs/syntax.scm 300 */
BgL_auxz00_4679 = BgL_rulesz00_890
; }  else 
{ 
obj_t BgL_auxz00_4684;
BgL_auxz00_4684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10174)), BGl_string3546z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_890); 
FAILURE(BgL_auxz00_4684,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 300 */
bool_t BgL_testz00_4671;
if(
PAIRP(BgL_lsz00_889))
{ /* R5rs/syntax.scm 300 */
BgL_testz00_4671 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 300 */
BgL_testz00_4671 = 
NULLP(BgL_lsz00_889)
; } 
if(BgL_testz00_4671)
{ /* R5rs/syntax.scm 300 */
BgL_auxz00_4670 = BgL_lsz00_889
; }  else 
{ 
obj_t BgL_auxz00_4675;
BgL_auxz00_4675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10171)), BGl_string3546z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_lsz00_889); 
FAILURE(BgL_auxz00_4675,BFALSE,BFALSE);} } 
BgL_e3z00_910 = 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_mz00_888, BgL_auxz00_4670, BgL_auxz00_4679); } 
{ /* R5rs/syntax.scm 301 */
obj_t BgL_arg2104z00_918;
{ /* R5rs/syntax.scm 301 */
obj_t BgL_pairz00_2284;
if(
PAIRP(BgL_bsz00_885))
{ /* R5rs/syntax.scm 301 */
BgL_pairz00_2284 = BgL_bsz00_885; }  else 
{ 
obj_t BgL_auxz00_4691;
BgL_auxz00_4691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10203)), BGl_string3546z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885); 
FAILURE(BgL_auxz00_4691,BFALSE,BFALSE);} 
BgL_arg2104z00_918 = 
CDR(BgL_pairz00_2284); } 
BgL_e4z00_911 = 
BGl_loopz72z72zz__r5_macro_4_3_syntaxz00(BgL_ez00_3102, BgL_arg2104z00_918); } 
{ /* R5rs/syntax.scm 302 */
obj_t BgL_zc3anonymousza32100ze3z83_3070;
BgL_zc3anonymousza32100ze3z83_3070 = 
make_fx_procedure(BGl_zc3anonymousza32100ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3anonymousza32100ze3z83_3070, 
(int)(((long)0)), BgL_e4z00_911); 
PROCEDURE_SET(BgL_zc3anonymousza32100ze3z83_3070, 
(int)(((long)1)), BgL_e3z00_910); 
PROCEDURE_SET(BgL_zc3anonymousza32100ze3z83_3070, 
(int)(((long)2)), BgL_ez00_3102); 
PROCEDURE_SET(BgL_zc3anonymousza32100ze3z83_3070, 
(int)(((long)3)), BgL_mz00_888); 
return BgL_zc3anonymousza32100ze3z83_3070;} } }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} }  else 
{ /* R5rs/syntax.scm 298 */
return 
BGl_errorz00zz__errorz00(BGl_string3527z00zz__r5_macro_4_3_syntaxz00, BGl_string3528z00zz__r5_macro_4_3_syntaxz00, BgL_bsz00_885);} } } } 
}



/* _expand-let-syntax */
obj_t BGl__expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3071, obj_t BgL_xz00_3072, obj_t BgL_ez00_3073)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 292 */
{ /* R5rs/syntax.scm 293 */
obj_t BgL_auxz00_4717;
if(
PROCEDUREP(BgL_ez00_3073))
{ /* R5rs/syntax.scm 293 */
BgL_auxz00_4717 = BgL_ez00_3073
; }  else 
{ 
obj_t BgL_auxz00_4720;
BgL_auxz00_4720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)9945)), BGl_string3548z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_3073); 
FAILURE(BgL_auxz00_4720,BFALSE,BFALSE);} 
return 
BGl_expandzd2letzd2syntaxz00zz__r5_macro_4_3_syntaxz00(BgL_xz00_3072, BgL_auxz00_4717);} } 
}



/* <anonymous:2100> */
obj_t BGl_zc3anonymousza32100ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3074, obj_t BgL_xz00_3079, obj_t BgL_e2z00_3080)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 302 */
{ /* R5rs/syntax.scm 303 */
obj_t BgL_e4z00_3075;obj_t BgL_e3z00_3076;obj_t BgL_ez00_3077;obj_t BgL_mz00_3078;
BgL_e4z00_3075 = 
PROCEDURE_REF(BgL_envz00_3074, 
(int)(((long)0))); 
BgL_e3z00_3076 = 
PROCEDURE_REF(BgL_envz00_3074, 
(int)(((long)1))); 
BgL_ez00_3077 = 
PROCEDURE_REF(BgL_envz00_3074, 
(int)(((long)2))); 
BgL_mz00_3078 = 
PROCEDURE_REF(BgL_envz00_3074, 
(int)(((long)3))); 
{ 
obj_t BgL_xz00_912;obj_t BgL_e2z00_913;
BgL_xz00_912 = BgL_xz00_3079; 
BgL_e2z00_913 = BgL_e2z00_3080; 
{ /* R5rs/syntax.scm 303 */
bool_t BgL_testz00_4733;
if(
PAIRP(BgL_xz00_912))
{ /* R5rs/syntax.scm 303 */
BgL_testz00_4733 = 
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_mz00_3078, 
CAR(BgL_xz00_912))
; }  else 
{ /* R5rs/syntax.scm 303 */
BgL_testz00_4733 = ((bool_t)0)
; } 
if(BgL_testz00_4733)
{ /* R5rs/syntax.scm 304 */
obj_t BgL_funz00_3196;
if(
PROCEDUREP(BgL_e3z00_3076))
{ /* R5rs/syntax.scm 304 */
BgL_funz00_3196 = BgL_e3z00_3076; }  else 
{ 
obj_t BgL_auxz00_4740;
BgL_auxz00_4740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10295)), BGl_string3549z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e3z00_3076); 
FAILURE(BgL_auxz00_4740,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3196, ((long)2)))
{ /* R5rs/syntax.scm 304 */
return 
PROCEDURE_ENTRY(BgL_funz00_3196)(BgL_e3z00_3076, BgL_xz00_912, BgL_ez00_3077, BEOA);}  else 
{ /* R5rs/syntax.scm 304 */
FAILURE(BGl_string3550z00zz__r5_macro_4_3_syntaxz00,BGl_list3551z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3196);} }  else 
{ /* R5rs/syntax.scm 305 */
obj_t BgL_funz00_3201;
if(
PROCEDUREP(BgL_e4z00_3075))
{ /* R5rs/syntax.scm 305 */
BgL_funz00_3201 = BgL_e4z00_3075; }  else 
{ 
obj_t BgL_auxz00_4751;
BgL_auxz00_4751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)10314)), BGl_string3549z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_e4z00_3075); 
FAILURE(BgL_auxz00_4751,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3201, ((long)2)))
{ /* R5rs/syntax.scm 305 */
return 
PROCEDURE_ENTRY(BgL_funz00_3201)(BgL_e4z00_3075, BgL_xz00_912, BgL_e2z00_913, BEOA);}  else 
{ /* R5rs/syntax.scm 305 */
FAILURE(BGl_string3550z00zz__r5_macro_4_3_syntaxz00,BGl_list3537z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3201);} } } } } } 
}



/* syntax-rules->expander */
BGL_EXPORTED_DEF obj_t BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_13, obj_t BgL_literalsz00_14, obj_t BgL_rulesz00_15)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 316 */
BGl_initzd2syntaxzd2expandersz12z12zz__r5_macro_4_3_syntaxz00(); 
{ /* R5rs/syntax.scm 318 */
obj_t BgL_kz00_920;
BgL_kz00_920 = 
MAKE_PAIR(BgL_keywordz00_13, BgL_literalsz00_14); 
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_rulesz00_15))
{ /* R5rs/syntax.scm 320 */
obj_t BgL_zc3anonymousza32106ze3z83_3081;
BgL_zc3anonymousza32106ze3z83_3081 = 
make_fx_procedure(BGl_zc3anonymousza32106ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)2)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza32106ze3z83_3081, 
(int)(((long)0)), BgL_keywordz00_13); 
PROCEDURE_SET(BgL_zc3anonymousza32106ze3z83_3081, 
(int)(((long)1)), BgL_kz00_920); 
PROCEDURE_SET(BgL_zc3anonymousza32106ze3z83_3081, 
(int)(((long)2)), BgL_rulesz00_15); 
return BgL_zc3anonymousza32106ze3z83_3081;}  else 
{ /* R5rs/syntax.scm 319 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_13, BGl_string3552z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_15);} } } 
}



/* _syntax-rules->expander */
obj_t BGl__syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3082, obj_t BgL_keywordz00_3083, obj_t BgL_literalsz00_3084, obj_t BgL_rulesz00_3085)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 316 */
{ /* R5rs/syntax.scm 339 */
obj_t BgL_auxz00_4790;obj_t BgL_auxz00_4781;obj_t BgL_auxz00_4774;
{ /* R5rs/syntax.scm 339 */
bool_t BgL_testz00_4791;
if(
PAIRP(BgL_rulesz00_3085))
{ /* R5rs/syntax.scm 339 */
BgL_testz00_4791 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 339 */
BgL_testz00_4791 = 
NULLP(BgL_rulesz00_3085)
; } 
if(BgL_testz00_4791)
{ /* R5rs/syntax.scm 339 */
BgL_auxz00_4790 = BgL_rulesz00_3085
; }  else 
{ 
obj_t BgL_auxz00_4795;
BgL_auxz00_4795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11659)), BGl_string3553z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_3085); 
FAILURE(BgL_auxz00_4795,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 339 */
bool_t BgL_testz00_4782;
if(
PAIRP(BgL_literalsz00_3084))
{ /* R5rs/syntax.scm 339 */
BgL_testz00_4782 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 339 */
BgL_testz00_4782 = 
NULLP(BgL_literalsz00_3084)
; } 
if(BgL_testz00_4782)
{ /* R5rs/syntax.scm 339 */
BgL_auxz00_4781 = BgL_literalsz00_3084
; }  else 
{ 
obj_t BgL_auxz00_4786;
BgL_auxz00_4786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11659)), BGl_string3553z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_literalsz00_3084); 
FAILURE(BgL_auxz00_4786,BFALSE,BFALSE);} } 
if(
SYMBOLP(BgL_keywordz00_3083))
{ /* R5rs/syntax.scm 339 */
BgL_auxz00_4774 = BgL_keywordz00_3083
; }  else 
{ 
obj_t BgL_auxz00_4777;
BgL_auxz00_4777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11659)), BGl_string3553z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_keywordz00_3083); 
FAILURE(BgL_auxz00_4777,BFALSE,BFALSE);} 
return 
BGl_syntaxzd2ruleszd2ze3expanderze3zz__r5_macro_4_3_syntaxz00(BgL_auxz00_4774, BgL_auxz00_4781, BgL_auxz00_4790);} } 
}



/* <anonymous:2106> */
obj_t BGl_zc3anonymousza32106ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3086, obj_t BgL_xz00_3090, obj_t BgL_ez00_3091)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 320 */
{ /* R5rs/syntax.scm 322 */
obj_t BgL_keywordz00_3087;obj_t BgL_kz00_3088;obj_t BgL_rulesz00_3089;
BgL_keywordz00_3087 = 
PROCEDURE_REF(BgL_envz00_3086, 
(int)(((long)0))); 
BgL_kz00_3088 = 
PROCEDURE_REF(BgL_envz00_3086, 
(int)(((long)1))); 
BgL_rulesz00_3089 = 
PROCEDURE_REF(BgL_envz00_3086, 
(int)(((long)2))); 
{ 
obj_t BgL_xz00_922;obj_t BgL_ez00_923;
BgL_xz00_922 = BgL_xz00_3090; 
BgL_ez00_923 = BgL_ez00_3091; 
{ 
obj_t BgL_rulesz00_926;
BgL_rulesz00_926 = BgL_rulesz00_3089; 
BgL_zc3anonymousza32107ze3z83_927:
if(
NULLP(BgL_rulesz00_926))
{ /* R5rs/syntax.scm 322 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_3087, BGl_string3554z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_922);}  else 
{ 
obj_t BgL_patternz00_929;obj_t BgL_templatez00_930;
{ /* R5rs/syntax.scm 324 */
obj_t BgL_ezd21510zd2_933;
{ /* R5rs/syntax.scm 324 */
obj_t BgL_pairz00_2300;
if(
PAIRP(BgL_rulesz00_926))
{ /* R5rs/syntax.scm 324 */
BgL_pairz00_2300 = BgL_rulesz00_926; }  else 
{ 
obj_t BgL_auxz00_4811;
BgL_auxz00_4811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11035)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_926); 
FAILURE(BgL_auxz00_4811,BFALSE,BFALSE);} 
BgL_ezd21510zd2_933 = 
CAR(BgL_pairz00_2300); } 
if(
PAIRP(BgL_ezd21510zd2_933))
{ /* R5rs/syntax.scm 324 */
obj_t BgL_cdrzd21516zd2_935;
BgL_cdrzd21516zd2_935 = 
CDR(BgL_ezd21510zd2_933); 
if(
PAIRP(BgL_cdrzd21516zd2_935))
{ /* R5rs/syntax.scm 324 */
if(
NULLP(
CDR(BgL_cdrzd21516zd2_935)))
{ /* R5rs/syntax.scm 324 */
BgL_patternz00_929 = 
CAR(BgL_ezd21510zd2_933); 
BgL_templatez00_930 = 
CAR(BgL_cdrzd21516zd2_935); 
if(
CBOOL(
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_3087, BgL_patternz00_929, BgL_xz00_922, BgL_kz00_3088)))
{ /* R5rs/syntax.scm 330 */
obj_t BgL_fsz00_942;
BgL_fsz00_942 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_patternz00_929, BgL_xz00_922, BgL_kz00_3088); 
{ /* R5rs/syntax.scm 330 */
obj_t BgL_tz00_943;
BgL_tz00_943 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_templatez00_930, BgL_fsz00_942, BgL_kz00_3088); 
{ /* R5rs/syntax.scm 331 */
obj_t BgL_tez00_944;
BgL_tez00_944 = 
BGl_syntaxzd2expanderzd2zz__r5_macro_4_3_syntaxz00(BgL_tz00_943, BGl_syntaxzd2expanderzd2envz00zz__r5_macro_4_3_syntaxz00); 
{ /* R5rs/syntax.scm 332 */

{ /* R5rs/syntax.scm 335 */
obj_t BgL_arg2116z00_945;
BgL_arg2116z00_945 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_tez00_944, BNIL); 
{ /* R5rs/syntax.scm 335 */
obj_t BgL_funz00_3212;
if(
PROCEDUREP(BgL_ez00_923))
{ /* R5rs/syntax.scm 335 */
BgL_funz00_3212 = BgL_ez00_923; }  else 
{ 
obj_t BgL_auxz00_4833;
BgL_auxz00_4833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11489)), BGl_string3555z00zz__r5_macro_4_3_syntaxz00, BGl_string3260z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_923); 
FAILURE(BgL_auxz00_4833,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3212, ((long)2)))
{ /* R5rs/syntax.scm 335 */
return 
PROCEDURE_ENTRY(BgL_funz00_3212)(BgL_ez00_923, BgL_arg2116z00_945, BgL_ez00_923, BEOA);}  else 
{ /* R5rs/syntax.scm 335 */
FAILURE(BGl_string3556z00zz__r5_macro_4_3_syntaxz00,BGl_list3557z00zz__r5_macro_4_3_syntaxz00,BgL_funz00_3212);} } } } } } }  else 
{ /* R5rs/syntax.scm 336 */
obj_t BgL_arg2118z00_946;
{ /* R5rs/syntax.scm 336 */
obj_t BgL_pairz00_2309;
if(
PAIRP(BgL_rulesz00_926))
{ /* R5rs/syntax.scm 336 */
BgL_pairz00_2309 = BgL_rulesz00_926; }  else 
{ 
obj_t BgL_auxz00_4844;
BgL_auxz00_4844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11534)), BGl_string3555z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_926); 
FAILURE(BgL_auxz00_4844,BFALSE,BFALSE);} 
BgL_arg2118z00_946 = 
CDR(BgL_pairz00_2309); } 
{ 
obj_t BgL_rulesz00_4849;
BgL_rulesz00_4849 = BgL_arg2118z00_946; 
BgL_rulesz00_926 = BgL_rulesz00_4849; 
goto BgL_zc3anonymousza32107ze3z83_927;} } }  else 
{ /* R5rs/syntax.scm 324 */
BgL_tagzd21509zd2_932:
{ /* R5rs/syntax.scm 338 */
obj_t BgL_arg2121z00_948;
{ /* R5rs/syntax.scm 338 */
obj_t BgL_pairz00_2310;
if(
PAIRP(BgL_rulesz00_926))
{ /* R5rs/syntax.scm 338 */
BgL_pairz00_2310 = BgL_rulesz00_926; }  else 
{ 
obj_t BgL_auxz00_4854;
BgL_auxz00_4854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11599)), BGl_string3560z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_rulesz00_926); 
FAILURE(BgL_auxz00_4854,BFALSE,BFALSE);} 
BgL_arg2121z00_948 = 
CAR(BgL_pairz00_2310); } 
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_3087, BGl_string3561z00zz__r5_macro_4_3_syntaxz00, BgL_arg2121z00_948);} } }  else 
{ /* R5rs/syntax.scm 324 */
goto BgL_tagzd21509zd2_932;} }  else 
{ /* R5rs/syntax.scm 324 */
goto BgL_tagzd21509zd2_932;} } } } } } } 
}



/* syntax-matches-pattern? */
obj_t BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_keywordz00_16, obj_t BgL_pz00_17, obj_t BgL_ez00_18, obj_t BgL_kz00_19)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 344 */
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00:
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_17))
{ /* R5rs/syntax.scm 347 */
bool_t BgL_testz00_4862;
{ /* R5rs/syntax.scm 347 */
long BgL_auxz00_4863;
{ /* R5rs/syntax.scm 347 */
obj_t BgL_auxz00_4864;
{ /* R5rs/syntax.scm 347 */
bool_t BgL_testz00_4865;
if(
PAIRP(BgL_pz00_17))
{ /* R5rs/syntax.scm 347 */
BgL_testz00_4865 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 347 */
BgL_testz00_4865 = 
NULLP(BgL_pz00_17)
; } 
if(BgL_testz00_4865)
{ /* R5rs/syntax.scm 347 */
BgL_auxz00_4864 = BgL_pz00_17
; }  else 
{ 
obj_t BgL_auxz00_4869;
BgL_auxz00_4869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)11993)), BGl_string3562z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_17); 
FAILURE(BgL_auxz00_4869,BFALSE,BFALSE);} } 
BgL_auxz00_4863 = 
bgl_list_length(BgL_auxz00_4864); } 
BgL_testz00_4862 = 
(BgL_auxz00_4863==((long)2)); } 
if(BgL_testz00_4862)
{ /* R5rs/syntax.scm 347 */
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_ez00_18))
{ /* R5rs/syntax.scm 350 */
obj_t BgL_p0z00_953;
{ /* R5rs/syntax.scm 350 */
obj_t BgL_pairz00_2313;
if(
PAIRP(BgL_pz00_17))
{ /* R5rs/syntax.scm 350 */
BgL_pairz00_2313 = BgL_pz00_17; }  else 
{ 
obj_t BgL_auxz00_4879;
BgL_auxz00_4879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12077)), BGl_string3562z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_17); 
FAILURE(BgL_auxz00_4879,BFALSE,BFALSE);} 
BgL_p0z00_953 = 
CAR(BgL_pairz00_2313); } 
{ 
obj_t BgL_l1866z00_955;
BgL_l1866z00_955 = BgL_ez00_18; 
BgL_zc3anonymousza32124ze3z83_956:
if(
NULLP(BgL_l1866z00_955))
{ /* R5rs/syntax.scm 351 */
return BTRUE;}  else 
{ /* R5rs/syntax.scm 351 */
if(
PAIRP(BgL_l1866z00_955))
{ /* R5rs/syntax.scm 351 */
bool_t BgL_testz00_4888;
{ /* R5rs/syntax.scm 352 */
obj_t BgL_eiz00_961;
BgL_eiz00_961 = 
CAR(BgL_l1866z00_955); 
BgL_testz00_4888 = 
CBOOL(
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_16, BgL_p0z00_953, BgL_eiz00_961, BgL_kz00_19)); } 
if(BgL_testz00_4888)
{ 
obj_t BgL_l1866z00_4892;
BgL_l1866z00_4892 = 
CDR(BgL_l1866z00_955); 
BgL_l1866z00_955 = BgL_l1866z00_4892; 
goto BgL_zc3anonymousza32124ze3z83_956;}  else 
{ /* R5rs/syntax.scm 351 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 351 */
return 
BGl_errorz00zz__errorz00(BGl_string3563z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1866z00_955);} } } }  else 
{ /* R5rs/syntax.scm 349 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 347 */
return 
BGl_errorz00zz__errorz00(BgL_keywordz00_16, BGl_string3564z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_17);} }  else 
{ /* R5rs/syntax.scm 346 */
if(
PAIRP(BgL_pz00_17))
{ /* R5rs/syntax.scm 354 */
if(
PAIRP(BgL_ez00_18))
{ /* R5rs/syntax.scm 356 */
obj_t BgL__andtest_1828z00_967;
BgL__andtest_1828z00_967 = 
BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00(BgL_keywordz00_16, 
CAR(BgL_pz00_17), 
CAR(BgL_ez00_18), BgL_kz00_19); 
if(
CBOOL(BgL__andtest_1828z00_967))
{ 
obj_t BgL_ez00_4907;obj_t BgL_pz00_4905;
BgL_pz00_4905 = 
CDR(BgL_pz00_17); 
BgL_ez00_4907 = 
CDR(BgL_ez00_18); 
BgL_ez00_18 = BgL_ez00_4907; 
BgL_pz00_17 = BgL_pz00_4905; 
goto BGl_syntaxzd2matcheszd2patternzf3zf3zz__r5_macro_4_3_syntaxz00;}  else 
{ /* R5rs/syntax.scm 356 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 355 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 354 */
if(
SYMBOLP(BgL_pz00_17))
{ /* R5rs/syntax.scm 359 */
bool_t BgL_testz00_4911;
{ /* R5rs/syntax.scm 359 */
obj_t BgL_auxz00_4912;
{ /* R5rs/syntax.scm 359 */
obj_t BgL_auxz00_4913;
{ /* R5rs/syntax.scm 359 */
bool_t BgL_testz00_4914;
if(
PAIRP(BgL_kz00_19))
{ /* R5rs/syntax.scm 359 */
BgL_testz00_4914 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 359 */
BgL_testz00_4914 = 
NULLP(BgL_kz00_19)
; } 
if(BgL_testz00_4914)
{ /* R5rs/syntax.scm 359 */
BgL_auxz00_4913 = BgL_kz00_19
; }  else 
{ 
obj_t BgL_auxz00_4918;
BgL_auxz00_4918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12365)), BGl_string3562z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_19); 
FAILURE(BgL_auxz00_4918,BFALSE,BFALSE);} } 
BgL_auxz00_4912 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_17, BgL_auxz00_4913); } 
BgL_testz00_4911 = 
CBOOL(BgL_auxz00_4912); } 
if(BgL_testz00_4911)
{ /* R5rs/syntax.scm 359 */
return 
BBOOL(
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(BgL_ez00_18, BgL_pz00_17));}  else 
{ /* R5rs/syntax.scm 359 */
return BTRUE;} }  else 
{ /* R5rs/syntax.scm 358 */
return 
BBOOL(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_pz00_17, BgL_ez00_18));} } } } 
}



/* syntax-get-frames */
obj_t BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_pz00_20, obj_t BgL_ez00_21, obj_t BgL_kz00_22)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 366 */
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_20))
{ /* R5rs/syntax.scm 369 */
obj_t BgL_p0z00_975;
{ /* R5rs/syntax.scm 369 */
obj_t BgL_pairz00_2325;
if(
PAIRP(BgL_pz00_20))
{ /* R5rs/syntax.scm 369 */
BgL_pairz00_2325 = BgL_pz00_20; }  else 
{ 
obj_t BgL_auxz00_4932;
BgL_auxz00_4932 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12735)), BGl_string3565z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_20); 
FAILURE(BgL_auxz00_4932,BFALSE,BFALSE);} 
BgL_p0z00_975 = 
CAR(BgL_pairz00_2325); } 
{ /* R5rs/syntax.scm 371 */
obj_t BgL_arg2141z00_976;
{ /* R5rs/syntax.scm 371 */
obj_t BgL_arg2144z00_978;
if(
NULLP(BgL_ez00_21))
{ /* R5rs/syntax.scm 371 */
BgL_arg2144z00_978 = BNIL; }  else 
{ /* R5rs/syntax.scm 371 */
obj_t BgL_head1870z00_981;
BgL_head1870z00_981 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1868z00_983;obj_t BgL_tail1871z00_984;
BgL_l1868z00_983 = BgL_ez00_21; 
BgL_tail1871z00_984 = BgL_head1870z00_981; 
BgL_zc3anonymousza32146ze3z83_985:
if(
PAIRP(BgL_l1868z00_983))
{ /* R5rs/syntax.scm 371 */
obj_t BgL_newtail1872z00_987;
BgL_newtail1872z00_987 = 
MAKE_PAIR(
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_p0z00_975, 
CAR(BgL_l1868z00_983), BgL_kz00_22), BNIL); 
SET_CDR(BgL_tail1871z00_984, BgL_newtail1872z00_987); 
{ 
obj_t BgL_tail1871z00_4948;obj_t BgL_l1868z00_4946;
BgL_l1868z00_4946 = 
CDR(BgL_l1868z00_983); 
BgL_tail1871z00_4948 = BgL_newtail1872z00_987; 
BgL_tail1871z00_984 = BgL_tail1871z00_4948; 
BgL_l1868z00_983 = BgL_l1868z00_4946; 
goto BgL_zc3anonymousza32146ze3z83_985;} }  else 
{ /* R5rs/syntax.scm 371 */
if(
NULLP(BgL_l1868z00_983))
{ /* R5rs/syntax.scm 371 */
BgL_arg2144z00_978 = 
CDR(BgL_head1870z00_981); }  else 
{ /* R5rs/syntax.scm 371 */
BgL_arg2144z00_978 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1868z00_983); } } } } 
BgL_arg2141z00_976 = 
MAKE_PAIR(BGl_keyword3566z00zz__r5_macro_4_3_syntaxz00, BgL_arg2144z00_978); } 
{ /* R5rs/syntax.scm 370 */
obj_t BgL_list2142z00_977;
BgL_list2142z00_977 = 
MAKE_PAIR(BgL_arg2141z00_976, BNIL); 
return BgL_list2142z00_977;} } }  else 
{ /* R5rs/syntax.scm 368 */
if(
PAIRP(BgL_pz00_20))
{ /* R5rs/syntax.scm 375 */
obj_t BgL_arg2153z00_995;obj_t BgL_arg2154z00_996;
{ /* R5rs/syntax.scm 375 */
obj_t BgL_arg2155z00_997;obj_t BgL_arg2156z00_998;
BgL_arg2155z00_997 = 
CAR(BgL_pz00_20); 
{ /* R5rs/syntax.scm 375 */
obj_t BgL_pairz00_2342;
if(
PAIRP(BgL_ez00_21))
{ /* R5rs/syntax.scm 375 */
BgL_pairz00_2342 = BgL_ez00_21; }  else 
{ 
obj_t BgL_auxz00_4960;
BgL_auxz00_4960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12897)), BGl_string3565z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_21); 
FAILURE(BgL_auxz00_4960,BFALSE,BFALSE);} 
BgL_arg2156z00_998 = 
CAR(BgL_pairz00_2342); } 
BgL_arg2153z00_995 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_arg2155z00_997, BgL_arg2156z00_998, BgL_kz00_22); } 
BgL_arg2154z00_996 = 
BGl_syntaxzd2getzd2framesz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_pz00_20), 
CDR(BgL_ez00_21), BgL_kz00_22); 
{ /* R5rs/syntax.scm 375 */
obj_t BgL_auxz00_4969;
{ /* R5rs/syntax.scm 375 */
bool_t BgL_testz00_4970;
if(
PAIRP(BgL_arg2153z00_995))
{ /* R5rs/syntax.scm 375 */
BgL_testz00_4970 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 375 */
BgL_testz00_4970 = 
NULLP(BgL_arg2153z00_995)
; } 
if(BgL_testz00_4970)
{ /* R5rs/syntax.scm 375 */
BgL_auxz00_4969 = BgL_arg2153z00_995
; }  else 
{ 
obj_t BgL_auxz00_4974;
BgL_auxz00_4974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12857)), BGl_string3565z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2153z00_995); 
FAILURE(BgL_auxz00_4974,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_4969, BgL_arg2154z00_996);} }  else 
{ /* R5rs/syntax.scm 374 */
if(
SYMBOLP(BgL_pz00_20))
{ /* R5rs/syntax.scm 378 */
bool_t BgL_testz00_4981;
{ /* R5rs/syntax.scm 378 */
obj_t BgL_auxz00_4982;
{ /* R5rs/syntax.scm 378 */
obj_t BgL_auxz00_4983;
{ /* R5rs/syntax.scm 378 */
bool_t BgL_testz00_4984;
if(
PAIRP(BgL_kz00_22))
{ /* R5rs/syntax.scm 378 */
BgL_testz00_4984 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 378 */
BgL_testz00_4984 = 
NULLP(BgL_kz00_22)
; } 
if(BgL_testz00_4984)
{ /* R5rs/syntax.scm 378 */
BgL_auxz00_4983 = BgL_kz00_22
; }  else 
{ 
obj_t BgL_auxz00_4988;
BgL_auxz00_4988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)12989)), BGl_string3565z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_22); 
FAILURE(BgL_auxz00_4988,BFALSE,BFALSE);} } 
BgL_auxz00_4982 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_20, BgL_auxz00_4983); } 
BgL_testz00_4981 = 
CBOOL(BgL_auxz00_4982); } 
if(BgL_testz00_4981)
{ /* R5rs/syntax.scm 378 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 378 */
obj_t BgL_arg2161z00_1003;
BgL_arg2161z00_1003 = 
MAKE_PAIR(BgL_pz00_20, 
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_ez00_21)); 
{ /* R5rs/syntax.scm 378 */
obj_t BgL_list2162z00_1004;
BgL_list2162z00_1004 = 
MAKE_PAIR(BgL_arg2161z00_1003, BNIL); 
return BgL_list2162z00_1004;} } }  else 
{ /* R5rs/syntax.scm 377 */
return BNIL;} } } } 
}



/* syntax-expand-pattern */
obj_t BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_pz00_23, obj_t BgL_envz00_24, obj_t BgL_kz00_25)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 385 */
{ 
obj_t BgL_p0z00_1021;obj_t BgL_envz00_1022;obj_t BgL_kz00_1023;
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_23))
{ /* R5rs/syntax.scm 399 */
obj_t BgL_arg2165z00_1008;obj_t BgL_arg2166z00_1009;
{ /* R5rs/syntax.scm 399 */
obj_t BgL_arg2167z00_1010;
{ /* R5rs/syntax.scm 399 */
obj_t BgL_pairz00_2348;
if(
PAIRP(BgL_pz00_23))
{ /* R5rs/syntax.scm 399 */
BgL_pairz00_2348 = BgL_pz00_23; }  else 
{ 
obj_t BgL_auxz00_5001;
BgL_auxz00_5001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13743)), BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_23); 
FAILURE(BgL_auxz00_5001,BFALSE,BFALSE);} 
BgL_arg2167z00_1010 = 
CAR(BgL_pairz00_2348); } 
BgL_p0z00_1021 = BgL_arg2167z00_1010; 
BgL_envz00_1022 = BgL_envz00_24; 
BgL_kz00_1023 = BgL_kz00_25; 
{ /* R5rs/syntax.scm 388 */
obj_t BgL_varsz00_1025;
BgL_varsz00_1025 = 
BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_1023, BgL_p0z00_1021); 
{ /* R5rs/syntax.scm 388 */
obj_t BgL_framesz00_1026;
BgL_framesz00_1026 = 
BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1025, BgL_envz00_1022); 
{ /* R5rs/syntax.scm 389 */

if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_framesz00_1026))
{ /* R5rs/syntax.scm 391 */
if(
NULLP(BgL_framesz00_1026))
{ /* R5rs/syntax.scm 393 */
BgL_arg2165z00_1008 = BNIL; }  else 
{ /* R5rs/syntax.scm 393 */
obj_t BgL_head1875z00_1030;
BgL_head1875z00_1030 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_l1873z00_1032;obj_t BgL_tail1876z00_1033;
BgL_l1873z00_1032 = BgL_framesz00_1026; 
BgL_tail1876z00_1033 = BgL_head1875z00_1030; 
BgL_zc3anonymousza32180ze3z83_1034:
if(
PAIRP(BgL_l1873z00_1032))
{ /* R5rs/syntax.scm 393 */
obj_t BgL_newtail1877z00_1036;
{ /* R5rs/syntax.scm 393 */
obj_t BgL_arg2183z00_1038;
{ /* R5rs/syntax.scm 393 */
obj_t BgL_fz00_1040;
BgL_fz00_1040 = 
CAR(BgL_l1873z00_1032); 
{ /* R5rs/syntax.scm 394 */
obj_t BgL_arg2185z00_1041;
{ /* R5rs/syntax.scm 394 */
obj_t BgL_auxz00_5016;
{ /* R5rs/syntax.scm 394 */
bool_t BgL_testz00_5017;
if(
PAIRP(BgL_fz00_1040))
{ /* R5rs/syntax.scm 394 */
BgL_testz00_5017 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 394 */
BgL_testz00_5017 = 
NULLP(BgL_fz00_1040)
; } 
if(BgL_testz00_5017)
{ /* R5rs/syntax.scm 394 */
BgL_auxz00_5016 = BgL_fz00_1040
; }  else 
{ 
obj_t BgL_auxz00_5021;
BgL_auxz00_5021 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13631)), BGl_string3568z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1040); 
FAILURE(BgL_auxz00_5021,BFALSE,BFALSE);} } 
BgL_arg2185z00_1041 = 
bgl_append2(BgL_auxz00_5016, BgL_envz00_1022); } 
BgL_arg2183z00_1038 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_p0z00_1021, BgL_arg2185z00_1041, BgL_kz00_1023); } } 
BgL_newtail1877z00_1036 = 
MAKE_PAIR(BgL_arg2183z00_1038, BNIL); } 
SET_CDR(BgL_tail1876z00_1033, BgL_newtail1877z00_1036); 
{ 
obj_t BgL_tail1876z00_5031;obj_t BgL_l1873z00_5029;
BgL_l1873z00_5029 = 
CDR(BgL_l1873z00_1032); 
BgL_tail1876z00_5031 = BgL_newtail1877z00_1036; 
BgL_tail1876z00_1033 = BgL_tail1876z00_5031; 
BgL_l1873z00_1032 = BgL_l1873z00_5029; 
goto BgL_zc3anonymousza32180ze3z83_1034;} }  else 
{ /* R5rs/syntax.scm 393 */
if(
NULLP(BgL_l1873z00_1032))
{ /* R5rs/syntax.scm 393 */
BgL_arg2165z00_1008 = 
CDR(BgL_head1875z00_1030); }  else 
{ /* R5rs/syntax.scm 393 */
BgL_arg2165z00_1008 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1873z00_1032); } } } } }  else 
{ /* R5rs/syntax.scm 391 */
BgL_arg2165z00_1008 = BNIL; } } } } } 
{ /* R5rs/syntax.scm 400 */
obj_t BgL_arg2168z00_1011;
{ /* R5rs/syntax.scm 400 */
obj_t BgL_pairz00_2349;
BgL_pairz00_2349 = BgL_pz00_23; 
{ /* R5rs/syntax.scm 400 */
obj_t BgL_pairz00_2352;
{ /* R5rs/syntax.scm 400 */
obj_t BgL_aux3046z00_3243;
BgL_aux3046z00_3243 = 
CDR(BgL_pairz00_2349); 
if(
PAIRP(BgL_aux3046z00_3243))
{ /* R5rs/syntax.scm 400 */
BgL_pairz00_2352 = BgL_aux3046z00_3243; }  else 
{ 
obj_t BgL_auxz00_5039;
BgL_auxz00_5039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13784)), BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3046z00_3243); 
FAILURE(BgL_auxz00_5039,BFALSE,BFALSE);} } 
BgL_arg2168z00_1011 = 
CDR(BgL_pairz00_2352); } } 
BgL_arg2166z00_1009 = 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(BgL_arg2168z00_1011, BgL_envz00_24, BgL_kz00_25); } 
{ /* R5rs/syntax.scm 399 */
obj_t BgL_auxz00_5045;
{ /* R5rs/syntax.scm 399 */
bool_t BgL_testz00_5046;
if(
PAIRP(BgL_arg2165z00_1008))
{ /* R5rs/syntax.scm 399 */
BgL_testz00_5046 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 399 */
BgL_testz00_5046 = 
NULLP(BgL_arg2165z00_1008)
; } 
if(BgL_testz00_5046)
{ /* R5rs/syntax.scm 399 */
BgL_auxz00_5045 = BgL_arg2165z00_1008
; }  else 
{ 
obj_t BgL_auxz00_5050;
BgL_auxz00_5050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13706)), BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2165z00_1008); 
FAILURE(BgL_auxz00_5050,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_5045, BgL_arg2166z00_1009);} }  else 
{ /* R5rs/syntax.scm 398 */
if(
PAIRP(BgL_pz00_23))
{ /* R5rs/syntax.scm 401 */
return 
MAKE_PAIR(
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(
CAR(BgL_pz00_23), BgL_envz00_24, BgL_kz00_25), 
BGl_syntaxzd2expandzd2patternz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_pz00_23), BgL_envz00_24, BgL_kz00_25));}  else 
{ /* R5rs/syntax.scm 401 */
if(
SYMBOLP(BgL_pz00_23))
{ /* R5rs/syntax.scm 405 */
bool_t BgL_testz00_5064;
{ /* R5rs/syntax.scm 405 */
obj_t BgL_auxz00_5065;
{ /* R5rs/syntax.scm 405 */
obj_t BgL_auxz00_5066;
{ /* R5rs/syntax.scm 405 */
bool_t BgL_testz00_5067;
if(
PAIRP(BgL_kz00_25))
{ /* R5rs/syntax.scm 405 */
BgL_testz00_5067 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 405 */
BgL_testz00_5067 = 
NULLP(BgL_kz00_25)
; } 
if(BgL_testz00_5067)
{ /* R5rs/syntax.scm 405 */
BgL_auxz00_5066 = BgL_kz00_25
; }  else 
{ 
obj_t BgL_auxz00_5071;
BgL_auxz00_5071 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13954)), BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_25); 
FAILURE(BgL_auxz00_5071,BFALSE,BFALSE);} } 
BgL_auxz00_5065 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_23, BgL_auxz00_5066); } 
BgL_testz00_5064 = 
CBOOL(BgL_auxz00_5065); } 
if(BgL_testz00_5064)
{ /* R5rs/syntax.scm 405 */
return BgL_pz00_23;}  else 
{ /* R5rs/syntax.scm 407 */
obj_t BgL_xz00_1019;
{ /* R5rs/syntax.scm 407 */
obj_t BgL_auxz00_5077;
{ /* R5rs/syntax.scm 407 */
bool_t BgL_testz00_5078;
if(
PAIRP(BgL_envz00_24))
{ /* R5rs/syntax.scm 407 */
BgL_testz00_5078 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 407 */
BgL_testz00_5078 = 
NULLP(BgL_envz00_24)
; } 
if(BgL_testz00_5078)
{ /* R5rs/syntax.scm 407 */
BgL_auxz00_5077 = BgL_envz00_24
; }  else 
{ 
obj_t BgL_auxz00_5082;
BgL_auxz00_5082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)13984)), BGl_string3569z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_envz00_24); 
FAILURE(BgL_auxz00_5082,BFALSE,BFALSE);} } 
BgL_xz00_1019 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_23, BgL_auxz00_5077); } 
if(
PAIRP(BgL_xz00_1019))
{ /* R5rs/syntax.scm 409 */
return 
CDR(BgL_xz00_1019);}  else 
{ /* R5rs/syntax.scm 409 */
return BgL_pz00_23;} } }  else 
{ /* R5rs/syntax.scm 404 */
return BgL_pz00_23;} } } } } 
}



/* get-ellipsis-frames */
obj_t BGl_getzd2ellipsiszd2framesz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_varsz00_26, obj_t BgL_framesz00_27)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 418 */
{ 
obj_t BgL_varsz00_1047;obj_t BgL_resz00_1048;
BgL_varsz00_1047 = BgL_varsz00_26; 
BgL_resz00_1048 = BNIL; 
BgL_zc3anonymousza32187ze3z83_1049:
if(
NULLP(BgL_varsz00_1047))
{ /* R5rs/syntax.scm 421 */
return BgL_resz00_1048;}  else 
{ /* R5rs/syntax.scm 423 */
obj_t BgL_vz00_1051;
{ /* R5rs/syntax.scm 423 */
obj_t BgL_pairz00_2372;
if(
PAIRP(BgL_varsz00_1047))
{ /* R5rs/syntax.scm 423 */
BgL_pairz00_2372 = BgL_varsz00_1047; }  else 
{ 
obj_t BgL_auxz00_5094;
BgL_auxz00_5094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14484)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_varsz00_1047); 
FAILURE(BgL_auxz00_5094,BFALSE,BFALSE);} 
BgL_vz00_1051 = 
CAR(BgL_pairz00_2372); } 
{ /* R5rs/syntax.scm 424 */
obj_t BgL_fz00_1052;
{ /* R5rs/syntax.scm 425 */
obj_t BgL_zc3anonymousza32239ze3z83_3093;
BgL_zc3anonymousza32239ze3z83_3093 = 
make_fx_procedure(BGl_zc3anonymousza32239ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32239ze3z83_3093, 
(int)(((long)0)), BgL_vz00_1051); 
{ /* R5rs/syntax.scm 424 */
obj_t BgL_list2238z00_1109;
BgL_list2238z00_1109 = 
MAKE_PAIR(BgL_framesz00_27, BNIL); 
BgL_fz00_1052 = 
BGl_anyz00zz__r4_pairs_and_lists_6_3z00(BgL_zc3anonymousza32239ze3z83_3093, BgL_list2238z00_1109); } } 
if(
CBOOL(BgL_fz00_1052))
{ /* R5rs/syntax.scm 430 */
obj_t BgL_g1830z00_1053;
BgL_g1830z00_1053 = 
CDR(BgL_varsz00_1047); 
{ 
obj_t BgL_ovarsz00_1056;obj_t BgL_nvarsz00_1057;
BgL_ovarsz00_1056 = BgL_g1830z00_1053; 
BgL_nvarsz00_1057 = BNIL; 
BgL_zc3anonymousza32189ze3z83_1058:
if(
NULLP(BgL_ovarsz00_1056))
{ /* R5rs/syntax.scm 433 */
if(
NULLP(BgL_resz00_1048))
{ 
obj_t BgL_resz00_5114;obj_t BgL_varsz00_5113;
BgL_varsz00_5113 = BgL_nvarsz00_1057; 
BgL_resz00_5114 = BgL_fz00_1052; 
BgL_resz00_1048 = BgL_resz00_5114; 
BgL_varsz00_1047 = BgL_varsz00_5113; 
goto BgL_zc3anonymousza32187ze3z83_1049;}  else 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2192z00_1061;
if(
NULLP(BgL_fz00_1052))
{ /* R5rs/syntax.scm 438 */
BgL_arg2192z00_1061 = BNIL; }  else 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_head1880z00_1065;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2207z00_1084;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2209z00_1086;obj_t BgL_arg2210z00_1087;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2380;
if(
PAIRP(BgL_fz00_1052))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2380 = BgL_fz00_1052; }  else 
{ 
obj_t BgL_auxz00_5119;
BgL_auxz00_5119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1052); 
FAILURE(BgL_auxz00_5119,BFALSE,BFALSE);} 
BgL_arg2209z00_1086 = 
CAR(BgL_pairz00_2380); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2381;
if(
PAIRP(BgL_resz00_1048))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2381 = BgL_resz00_1048; }  else 
{ 
obj_t BgL_auxz00_5126;
BgL_auxz00_5126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_resz00_1048); 
FAILURE(BgL_auxz00_5126,BFALSE,BFALSE);} 
BgL_arg2210z00_1087 = 
CAR(BgL_pairz00_2381); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_list2212z00_1088;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2213z00_1089;
BgL_arg2213z00_1089 = 
MAKE_PAIR(BgL_arg2210z00_1087, BNIL); 
BgL_list2212z00_1088 = 
MAKE_PAIR(BgL_arg2209z00_1086, BgL_arg2213z00_1089); } 
BgL_arg2207z00_1084 = 
BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2212z00_1088); } } 
BgL_head1880z00_1065 = 
MAKE_PAIR(BgL_arg2207z00_1084, BNIL); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_g1884z00_1066;obj_t BgL_g1885z00_1067;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2384;
if(
PAIRP(BgL_fz00_1052))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2384 = BgL_fz00_1052; }  else 
{ 
obj_t BgL_auxz00_5137;
BgL_auxz00_5137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1052); 
FAILURE(BgL_auxz00_5137,BFALSE,BFALSE);} 
BgL_g1884z00_1066 = 
CDR(BgL_pairz00_2384); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2385;
if(
PAIRP(BgL_resz00_1048))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2385 = BgL_resz00_1048; }  else 
{ 
obj_t BgL_auxz00_5144;
BgL_auxz00_5144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_resz00_1048); 
FAILURE(BgL_auxz00_5144,BFALSE,BFALSE);} 
BgL_g1885z00_1067 = 
CDR(BgL_pairz00_2385); } 
{ 
obj_t BgL_ll1878z00_1069;obj_t BgL_ll1879z00_1070;obj_t BgL_tail1881z00_1071;
BgL_ll1878z00_1069 = BgL_g1884z00_1066; 
BgL_ll1879z00_1070 = BgL_g1885z00_1067; 
BgL_tail1881z00_1071 = BgL_head1880z00_1065; 
BgL_zc3anonymousza32194ze3z83_1072:
if(
NULLP(BgL_ll1878z00_1069))
{ /* R5rs/syntax.scm 438 */
BgL_arg2192z00_1061 = BgL_head1880z00_1065; }  else 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_newtail1882z00_1074;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2198z00_1077;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2200z00_1079;obj_t BgL_arg2203z00_1080;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2387;
if(
PAIRP(BgL_ll1878z00_1069))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2387 = BgL_ll1878z00_1069; }  else 
{ 
obj_t BgL_auxz00_5153;
BgL_auxz00_5153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3571z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1878z00_1069); 
FAILURE(BgL_auxz00_5153,BFALSE,BFALSE);} 
BgL_arg2200z00_1079 = 
CAR(BgL_pairz00_2387); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_pairz00_2388;
if(
PAIRP(BgL_ll1879z00_1070))
{ /* R5rs/syntax.scm 438 */
BgL_pairz00_2388 = BgL_ll1879z00_1070; }  else 
{ 
obj_t BgL_auxz00_5160;
BgL_auxz00_5160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14949)), BGl_string3571z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1879z00_1070); 
FAILURE(BgL_auxz00_5160,BFALSE,BFALSE);} 
BgL_arg2203z00_1080 = 
CAR(BgL_pairz00_2388); } 
{ /* R5rs/syntax.scm 438 */
obj_t BgL_list2205z00_1081;
{ /* R5rs/syntax.scm 438 */
obj_t BgL_arg2206z00_1082;
BgL_arg2206z00_1082 = 
MAKE_PAIR(BgL_arg2203z00_1080, BNIL); 
BgL_list2205z00_1081 = 
MAKE_PAIR(BgL_arg2200z00_1079, BgL_arg2206z00_1082); } 
BgL_arg2198z00_1077 = 
BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2205z00_1081); } } 
BgL_newtail1882z00_1074 = 
MAKE_PAIR(BgL_arg2198z00_1077, BNIL); } 
SET_CDR(BgL_tail1881z00_1071, BgL_newtail1882z00_1074); 
{ 
obj_t BgL_tail1881z00_5174;obj_t BgL_ll1879z00_5172;obj_t BgL_ll1878z00_5170;
BgL_ll1878z00_5170 = 
CDR(BgL_ll1878z00_1069); 
BgL_ll1879z00_5172 = 
CDR(BgL_ll1879z00_1070); 
BgL_tail1881z00_5174 = BgL_newtail1882z00_1074; 
BgL_tail1881z00_1071 = BgL_tail1881z00_5174; 
BgL_ll1879z00_1070 = BgL_ll1879z00_5172; 
BgL_ll1878z00_1069 = BgL_ll1878z00_5170; 
goto BgL_zc3anonymousza32194ze3z83_1072;} } } } } 
{ 
obj_t BgL_resz00_5176;obj_t BgL_varsz00_5175;
BgL_varsz00_5175 = BgL_nvarsz00_1057; 
BgL_resz00_5176 = BgL_arg2192z00_1061; 
BgL_resz00_1048 = BgL_resz00_5176; 
BgL_varsz00_1047 = BgL_varsz00_5175; 
goto BgL_zc3anonymousza32187ze3z83_1049;} } }  else 
{ /* R5rs/syntax.scm 439 */
bool_t BgL_testz00_5177;
{ 
obj_t BgL_l1886z00_1096;
{ /* R5rs/syntax.scm 439 */
obj_t BgL_auxz00_5178;
BgL_l1886z00_1096 = BgL_fz00_1052; 
BgL_zc3anonymousza32224ze3z83_1097:
if(
NULLP(BgL_l1886z00_1096))
{ /* R5rs/syntax.scm 439 */
BgL_auxz00_5178 = BFALSE
; }  else 
{ /* R5rs/syntax.scm 439 */
if(
PAIRP(BgL_l1886z00_1096))
{ /* R5rs/syntax.scm 439 */
bool_t BgL_testz00_5183;
{ /* R5rs/syntax.scm 439 */
obj_t BgL_auxz00_5184;
{ /* R5rs/syntax.scm 439 */
obj_t BgL_auxz00_5193;obj_t BgL_auxz00_5185;
{ /* R5rs/syntax.scm 439 */
obj_t BgL_aux3076z00_3273;
BgL_aux3076z00_3273 = 
CAR(BgL_l1886z00_1096); 
{ /* R5rs/syntax.scm 439 */
bool_t BgL_testz00_5195;
if(
PAIRP(BgL_aux3076z00_3273))
{ /* R5rs/syntax.scm 439 */
BgL_testz00_5195 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 439 */
BgL_testz00_5195 = 
NULLP(BgL_aux3076z00_3273)
; } 
if(BgL_testz00_5195)
{ /* R5rs/syntax.scm 439 */
BgL_auxz00_5193 = BgL_aux3076z00_3273
; }  else 
{ 
obj_t BgL_auxz00_5199;
BgL_auxz00_5199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14995)), BGl_string3572z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_aux3076z00_3273); 
FAILURE(BgL_auxz00_5199,BFALSE,BFALSE);} } } 
{ /* R5rs/syntax.scm 439 */
obj_t BgL_pairz00_2398;
if(
PAIRP(BgL_ovarsz00_1056))
{ /* R5rs/syntax.scm 439 */
BgL_pairz00_2398 = BgL_ovarsz00_1056; }  else 
{ 
obj_t BgL_auxz00_5188;
BgL_auxz00_5188 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15013)), BGl_string3572z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1056); 
FAILURE(BgL_auxz00_5188,BFALSE,BFALSE);} 
BgL_auxz00_5185 = 
CAR(BgL_pairz00_2398); } 
BgL_auxz00_5184 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5185, BgL_auxz00_5193); } 
BgL_testz00_5183 = 
PAIRP(BgL_auxz00_5184); } 
if(BgL_testz00_5183)
{ /* R5rs/syntax.scm 439 */
BgL_auxz00_5178 = BTRUE
; }  else 
{ 
obj_t BgL_l1886z00_5205;
BgL_l1886z00_5205 = 
CDR(BgL_l1886z00_1096); 
BgL_l1886z00_1096 = BgL_l1886z00_5205; 
goto BgL_zc3anonymousza32224ze3z83_1097;} }  else 
{ /* R5rs/syntax.scm 439 */
BgL_auxz00_5178 = 
BGl_errorz00zz__errorz00(BGl_string3573z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1886z00_1096)
; } } 
BgL_testz00_5177 = 
CBOOL(BgL_auxz00_5178); } } 
if(BgL_testz00_5177)
{ /* R5rs/syntax.scm 440 */
obj_t BgL_arg2216z00_1091;
{ /* R5rs/syntax.scm 440 */
obj_t BgL_pairz00_2401;
if(
PAIRP(BgL_ovarsz00_1056))
{ /* R5rs/syntax.scm 440 */
BgL_pairz00_2401 = BgL_ovarsz00_1056; }  else 
{ 
obj_t BgL_auxz00_5211;
BgL_auxz00_5211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15045)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1056); 
FAILURE(BgL_auxz00_5211,BFALSE,BFALSE);} 
BgL_arg2216z00_1091 = 
CDR(BgL_pairz00_2401); } 
{ 
obj_t BgL_ovarsz00_5216;
BgL_ovarsz00_5216 = BgL_arg2216z00_1091; 
BgL_ovarsz00_1056 = BgL_ovarsz00_5216; 
goto BgL_zc3anonymousza32189ze3z83_1058;} }  else 
{ /* R5rs/syntax.scm 442 */
obj_t BgL_arg2217z00_1092;obj_t BgL_arg2222z00_1093;
{ /* R5rs/syntax.scm 442 */
obj_t BgL_pairz00_2402;
if(
PAIRP(BgL_ovarsz00_1056))
{ /* R5rs/syntax.scm 442 */
BgL_pairz00_2402 = BgL_ovarsz00_1056; }  else 
{ 
obj_t BgL_auxz00_5219;
BgL_auxz00_5219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15088)), BGl_string3570z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ovarsz00_1056); 
FAILURE(BgL_auxz00_5219,BFALSE,BFALSE);} 
BgL_arg2217z00_1092 = 
CDR(BgL_pairz00_2402); } 
BgL_arg2222z00_1093 = 
MAKE_PAIR(
CAR(BgL_ovarsz00_1056), BgL_nvarsz00_1057); 
{ 
obj_t BgL_nvarsz00_5227;obj_t BgL_ovarsz00_5226;
BgL_ovarsz00_5226 = BgL_arg2217z00_1092; 
BgL_nvarsz00_5227 = BgL_arg2222z00_1093; 
BgL_nvarsz00_1057 = BgL_nvarsz00_5227; 
BgL_ovarsz00_1056 = BgL_ovarsz00_5226; 
goto BgL_zc3anonymousza32189ze3z83_1058;} } } } }  else 
{ 
obj_t BgL_varsz00_5228;
BgL_varsz00_5228 = 
CDR(BgL_varsz00_1047); 
BgL_varsz00_1047 = BgL_varsz00_5228; 
goto BgL_zc3anonymousza32187ze3z83_1049;} } } } } 
}



/* <anonymous:2239> */
obj_t BGl_zc3anonymousza32239ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3094, obj_t BgL_fz00_3096)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 424 */
{ /* R5rs/syntax.scm 425 */
obj_t BgL_vz00_3095;
BgL_vz00_3095 = 
PROCEDURE_REF(BgL_envz00_3094, 
(int)(((long)0))); 
{ 
obj_t BgL_fz00_1110;
BgL_fz00_1110 = BgL_fz00_3096; 
{ /* R5rs/syntax.scm 425 */
bool_t BgL_testz00_5232;
{ /* R5rs/syntax.scm 425 */
obj_t BgL_auxz00_5233;
{ /* R5rs/syntax.scm 425 */
obj_t BgL_pairz00_2373;
if(
PAIRP(BgL_fz00_1110))
{ /* R5rs/syntax.scm 425 */
BgL_pairz00_2373 = BgL_fz00_1110; }  else 
{ 
obj_t BgL_auxz00_5236;
BgL_auxz00_5236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14549)), BGl_string3574z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1110); 
FAILURE(BgL_auxz00_5236,BFALSE,BFALSE);} 
BgL_auxz00_5233 = 
CAR(BgL_pairz00_2373); } 
BgL_testz00_5232 = 
(BgL_auxz00_5233==BGl_keyword3566z00zz__r5_macro_4_3_syntaxz00); } 
if(BgL_testz00_5232)
{ /* R5rs/syntax.scm 426 */
obj_t BgL_ez00_1113;
{ /* R5rs/syntax.scm 426 */
obj_t BgL_arg2243z00_1116;
{ /* R5rs/syntax.scm 426 */
obj_t BgL_pairz00_2374;
if(
PAIRP(BgL_fz00_1110))
{ /* R5rs/syntax.scm 426 */
BgL_pairz00_2374 = BgL_fz00_1110; }  else 
{ 
obj_t BgL_auxz00_5244;
BgL_auxz00_5244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14614)), BGl_string3574z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_fz00_1110); 
FAILURE(BgL_auxz00_5244,BFALSE,BFALSE);} 
BgL_arg2243z00_1116 = 
CDR(BgL_pairz00_2374); } 
{ /* R5rs/syntax.scm 426 */
obj_t BgL_zc3anonymousza32244ze3z83_3092;
BgL_zc3anonymousza32244ze3z83_3092 = 
make_fx_procedure(BGl_zc3anonymousza32244ze3z83zz__r5_macro_4_3_syntaxz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32244ze3z83_3092, 
(int)(((long)0)), BgL_vz00_3095); 
{ /* R5rs/syntax.scm 426 */
obj_t BgL_auxz00_5254;
{ /* R5rs/syntax.scm 426 */
bool_t BgL_testz00_5255;
if(
PAIRP(BgL_arg2243z00_1116))
{ /* R5rs/syntax.scm 426 */
BgL_testz00_5255 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 426 */
BgL_testz00_5255 = 
NULLP(BgL_arg2243z00_1116)
; } 
if(BgL_testz00_5255)
{ /* R5rs/syntax.scm 426 */
BgL_auxz00_5254 = BgL_arg2243z00_1116
; }  else 
{ 
obj_t BgL_auxz00_5259;
BgL_auxz00_5259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14615)), BGl_string3574z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2243z00_1116); 
FAILURE(BgL_auxz00_5259,BFALSE,BFALSE);} } 
BgL_ez00_1113 = 
BGl_filterz00zz__r4_control_features_6_9z00(BgL_zc3anonymousza32244ze3z83_3092, BgL_auxz00_5254); } } } 
if(
PAIRP(BgL_ez00_1113))
{ /* R5rs/syntax.scm 427 */
return BgL_ez00_1113;}  else 
{ /* R5rs/syntax.scm 427 */
return BFALSE;} }  else 
{ /* R5rs/syntax.scm 425 */
return BFALSE;} } } } } 
}



/* <anonymous:2244> */
obj_t BGl_zc3anonymousza32244ze3z83zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3097, obj_t BgL_ez00_3099)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 426 */
{ /* R5rs/syntax.scm 426 */
obj_t BgL_vz00_3098;
BgL_vz00_3098 = 
PROCEDURE_REF(BgL_envz00_3097, 
(int)(((long)0))); 
{ 
obj_t BgL_ez00_1117;
BgL_ez00_1117 = BgL_ez00_3099; 
{ /* R5rs/syntax.scm 426 */
obj_t BgL_auxz00_5268;
{ /* R5rs/syntax.scm 426 */
bool_t BgL_testz00_5269;
if(
PAIRP(BgL_ez00_1117))
{ /* R5rs/syntax.scm 426 */
BgL_testz00_5269 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 426 */
BgL_testz00_5269 = 
NULLP(BgL_ez00_1117)
; } 
if(BgL_testz00_5269)
{ /* R5rs/syntax.scm 426 */
BgL_auxz00_5268 = BgL_ez00_1117
; }  else 
{ 
obj_t BgL_auxz00_5273;
BgL_auxz00_5273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)14605)), BGl_string3575z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_ez00_1117); 
FAILURE(BgL_auxz00_5273,BFALSE,BFALSE);} } 
return 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_3098, BgL_auxz00_5268);} } } } 
}



/* sub */
obj_t BGl_subz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_kz00_3101, obj_t BgL_pz00_1124)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 449 */
if(
BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(BgL_pz00_1124))
{ /* R5rs/syntax.scm 452 */
obj_t BgL_arg2248z00_1127;obj_t BgL_arg2249z00_1128;
{ /* R5rs/syntax.scm 452 */
obj_t BgL_arg2250z00_1129;
{ /* R5rs/syntax.scm 452 */
obj_t BgL_pairz00_2405;
if(
PAIRP(BgL_pz00_1124))
{ /* R5rs/syntax.scm 452 */
BgL_pairz00_2405 = BgL_pz00_1124; }  else 
{ 
obj_t BgL_auxz00_5282;
BgL_auxz00_5282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15489)), BGl_string3576z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_pz00_1124); 
FAILURE(BgL_auxz00_5282,BFALSE,BFALSE);} 
BgL_arg2250z00_1129 = 
CAR(BgL_pairz00_2405); } 
BgL_arg2248z00_1127 = 
BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3101, BgL_arg2250z00_1129); } 
{ /* R5rs/syntax.scm 452 */
obj_t BgL_arg2251z00_1130;
{ /* R5rs/syntax.scm 452 */
obj_t BgL_pairz00_2406;
BgL_pairz00_2406 = BgL_pz00_1124; 
{ /* R5rs/syntax.scm 452 */
obj_t BgL_pairz00_2409;
{ /* R5rs/syntax.scm 452 */
obj_t BgL_aux3098z00_3295;
BgL_aux3098z00_3295 = 
CDR(BgL_pairz00_2406); 
if(
PAIRP(BgL_aux3098z00_3295))
{ /* R5rs/syntax.scm 452 */
BgL_pairz00_2409 = BgL_aux3098z00_3295; }  else 
{ 
obj_t BgL_auxz00_5291;
BgL_auxz00_5291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15498)), BGl_string3576z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3098z00_3295); 
FAILURE(BgL_auxz00_5291,BFALSE,BFALSE);} } 
BgL_arg2251z00_1130 = 
CDR(BgL_pairz00_2409); } } 
BgL_arg2249z00_1128 = 
BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3101, BgL_arg2251z00_1130); } 
return 
MAKE_PAIR(BgL_arg2248z00_1127, BgL_arg2249z00_1128);}  else 
{ /* R5rs/syntax.scm 451 */
if(
PAIRP(BgL_pz00_1124))
{ /* R5rs/syntax.scm 454 */
obj_t BgL_arg2253z00_1132;obj_t BgL_arg2255z00_1133;
BgL_arg2253z00_1132 = 
BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3101, 
CAR(BgL_pz00_1124)); 
BgL_arg2255z00_1133 = 
BGl_subz00zz__r5_macro_4_3_syntaxz00(BgL_kz00_3101, 
CDR(BgL_pz00_1124)); 
{ /* R5rs/syntax.scm 454 */
obj_t BgL_auxz00_5304;
{ /* R5rs/syntax.scm 454 */
bool_t BgL_testz00_5305;
if(
PAIRP(BgL_arg2253z00_1132))
{ /* R5rs/syntax.scm 454 */
BgL_testz00_5305 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 454 */
BgL_testz00_5305 = 
NULLP(BgL_arg2253z00_1132)
; } 
if(BgL_testz00_5305)
{ /* R5rs/syntax.scm 454 */
BgL_auxz00_5304 = BgL_arg2253z00_1132
; }  else 
{ 
obj_t BgL_auxz00_5309;
BgL_auxz00_5309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15526)), BGl_string3576z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2253z00_1132); 
FAILURE(BgL_auxz00_5309,BFALSE,BFALSE);} } 
return 
bgl_append2(BgL_auxz00_5304, BgL_arg2255z00_1133);} }  else 
{ /* R5rs/syntax.scm 453 */
if(
SYMBOLP(BgL_pz00_1124))
{ /* R5rs/syntax.scm 456 */
bool_t BgL_testz00_5316;
{ /* R5rs/syntax.scm 456 */
obj_t BgL_auxz00_5317;
{ /* R5rs/syntax.scm 456 */
obj_t BgL_auxz00_5318;
{ /* R5rs/syntax.scm 456 */
bool_t BgL_testz00_5319;
if(
PAIRP(BgL_kz00_3101))
{ /* R5rs/syntax.scm 456 */
BgL_testz00_5319 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 456 */
BgL_testz00_5319 = 
NULLP(BgL_kz00_3101)
; } 
if(BgL_testz00_5319)
{ /* R5rs/syntax.scm 456 */
BgL_auxz00_5318 = BgL_kz00_3101
; }  else 
{ 
obj_t BgL_auxz00_5323;
BgL_auxz00_5323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15594)), BGl_string3576z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_kz00_3101); 
FAILURE(BgL_auxz00_5323,BFALSE,BFALSE);} } 
BgL_auxz00_5317 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_pz00_1124, BgL_auxz00_5318); } 
BgL_testz00_5316 = 
CBOOL(BgL_auxz00_5317); } 
if(BgL_testz00_5316)
{ /* R5rs/syntax.scm 456 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 456 */
obj_t BgL_list2260z00_1138;
BgL_list2260z00_1138 = 
MAKE_PAIR(BgL_pz00_1124, BNIL); 
return BgL_list2260z00_1138;} }  else 
{ /* R5rs/syntax.scm 455 */
return BNIL;} } } } 
}



/* ellipsis? */
bool_t BGl_ellipsiszf3zf3zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_30)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 463 */
if(
PAIRP(BgL_xz00_30))
{ /* R5rs/syntax.scm 465 */
bool_t BgL_testz00_5332;
{ /* R5rs/syntax.scm 465 */
obj_t BgL_auxz00_5333;
BgL_auxz00_5333 = 
CDR(BgL_xz00_30); 
BgL_testz00_5332 = 
PAIRP(BgL_auxz00_5333); } 
if(BgL_testz00_5332)
{ /* R5rs/syntax.scm 466 */
obj_t BgL_auxz00_5336;
{ /* R5rs/syntax.scm 466 */
obj_t BgL_pairz00_2422;
{ /* R5rs/syntax.scm 466 */
obj_t BgL_aux3104z00_3301;
BgL_aux3104z00_3301 = 
CDR(BgL_xz00_30); 
if(
PAIRP(BgL_aux3104z00_3301))
{ /* R5rs/syntax.scm 466 */
BgL_pairz00_2422 = BgL_aux3104z00_3301; }  else 
{ 
obj_t BgL_auxz00_5340;
BgL_auxz00_5340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)15917)), BGl_string3577z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3104z00_3301); 
FAILURE(BgL_auxz00_5340,BFALSE,BFALSE);} } 
BgL_auxz00_5336 = 
CAR(BgL_pairz00_2422); } 
return 
(BgL_auxz00_5336==BGl_symbol3280z00zz__r5_macro_4_3_syntaxz00);}  else 
{ /* R5rs/syntax.scm 465 */
return ((bool_t)0);} }  else 
{ /* R5rs/syntax.scm 464 */
return ((bool_t)0);} } 
}



/* hygiene-symbol */
obj_t BGl_hygienezd2symbolzd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_31)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 471 */
{ /* R5rs/syntax.scm 472 */
obj_t BgL_arg2265z00_1145;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_arg2266z00_1146;obj_t BgL_arg2267z00_1147;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_res2897z00_2425;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_symbolz00_2423;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_aux3106z00_3303;
BgL_aux3106z00_3303 = BGl_hygienezd2markzd2zz__r5_macro_4_3_syntaxz00; 
if(
SYMBOLP(BgL_aux3106z00_3303))
{ /* R5rs/syntax.scm 472 */
BgL_symbolz00_2423 = BgL_aux3106z00_3303; }  else 
{ 
obj_t BgL_auxz00_5348;
BgL_auxz00_5348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)16187)), BGl_string3578z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_aux3106z00_3303); 
FAILURE(BgL_auxz00_5348,BFALSE,BFALSE);} } 
{ /* R5rs/syntax.scm 472 */
obj_t BgL_arg2783z00_2424;
BgL_arg2783z00_2424 = 
SYMBOL_TO_STRING(BgL_symbolz00_2423); 
BgL_res2897z00_2425 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2424); } } 
BgL_arg2266z00_1146 = BgL_res2897z00_2425; } 
{ /* R5rs/syntax.scm 472 */
obj_t BgL_res2898z00_2428;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_arg2783z00_2427;
BgL_arg2783z00_2427 = 
SYMBOL_TO_STRING(BgL_xz00_31); 
BgL_res2898z00_2428 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2427); } 
BgL_arg2267z00_1147 = BgL_res2898z00_2428; } 
{ /* R5rs/syntax.scm 472 */
obj_t BgL_list2268z00_1148;
{ /* R5rs/syntax.scm 472 */
obj_t BgL_arg2269z00_1149;
BgL_arg2269z00_1149 = 
MAKE_PAIR(BgL_arg2267z00_1147, BNIL); 
BgL_list2268z00_1148 = 
MAKE_PAIR(BgL_arg2266z00_1146, BgL_arg2269z00_1149); } 
BgL_arg2265z00_1145 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2268z00_1148); } } 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg2265z00_1145));} } 
}



/* hygiene-value */
obj_t BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_33)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 484 */
if(
SYMBOLP(BgL_xz00_33))
{ /* R5rs/syntax.scm 487 */
obj_t BgL_sz00_1152;
{ /* R5rs/syntax.scm 487 */
obj_t BgL_res2900z00_2437;
{ /* R5rs/syntax.scm 487 */
obj_t BgL_symbolz00_2435;
BgL_symbolz00_2435 = BgL_xz00_33; 
{ /* R5rs/syntax.scm 487 */
obj_t BgL_arg2783z00_2436;
BgL_arg2783z00_2436 = 
SYMBOL_TO_STRING(BgL_symbolz00_2435); 
BgL_res2900z00_2437 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2436); } } 
BgL_sz00_1152 = BgL_res2900z00_2437; } 
if(
bigloo_strcmp_at(BgL_sz00_1152, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)))
{ /* R5rs/syntax.scm 490 */
obj_t BgL_arg2272z00_1154;
{ /* R5rs/syntax.scm 490 */
long BgL_arg2274z00_1155;
BgL_arg2274z00_1155 = 
STRING_LENGTH(BgL_sz00_1152); 
{ /* R5rs/syntax.scm 490 */
long BgL_auxz00_5368;
{ /* R5rs/syntax.scm 490 */
obj_t BgL_auxz00_5369;
{ /* R5rs/syntax.scm 490 */
obj_t BgL_aux3108z00_3305;
BgL_aux3108z00_3305 = BGl_hygienezd2prefixzd2lenz00zz__r5_macro_4_3_syntaxz00; 
if(
INTEGERP(BgL_aux3108z00_3305))
{ /* R5rs/syntax.scm 490 */
BgL_auxz00_5369 = BgL_aux3108z00_3305
; }  else 
{ 
obj_t BgL_auxz00_5372;
BgL_auxz00_5372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)16942)), BGl_string3579z00zz__r5_macro_4_3_syntaxz00, BGl_string3580z00zz__r5_macro_4_3_syntaxz00, BgL_aux3108z00_3305); 
FAILURE(BgL_auxz00_5372,BFALSE,BFALSE);} } 
BgL_auxz00_5368 = 
(long)CINT(BgL_auxz00_5369); } 
BgL_arg2272z00_1154 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_sz00_1152, BgL_auxz00_5368, BgL_arg2274z00_1155); } } 
return 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg2272z00_1154));}  else 
{ /* R5rs/syntax.scm 488 */
return BgL_xz00_33;} }  else 
{ /* R5rs/syntax.scm 485 */
return BgL_xz00_33;} } 
}



/* hygiene-eq? */
bool_t BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_34, obj_t BgL_idz00_35)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 496 */
BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00:
{ /* R5rs/syntax.scm 497 */
bool_t BgL_testz00_5380;
if(
SYMBOLP(BgL_idz00_35))
{ /* R5rs/syntax.scm 497 */
BgL_testz00_5380 = 
SYMBOLP(BgL_xz00_34)
; }  else 
{ /* R5rs/syntax.scm 497 */
BgL_testz00_5380 = ((bool_t)0)
; } 
if(BgL_testz00_5380)
{ /* R5rs/syntax.scm 498 */
bool_t BgL__ortest_1834z00_1157;
BgL__ortest_1834z00_1157 = 
(BgL_xz00_34==BgL_idz00_35); 
if(BgL__ortest_1834z00_1157)
{ /* R5rs/syntax.scm 498 */
return BgL__ortest_1834z00_1157;}  else 
{ /* R5rs/syntax.scm 499 */
bool_t BgL_testz00_5386;
{ /* R5rs/syntax.scm 499 */
obj_t BgL_xz00_2442;
BgL_xz00_2442 = BgL_xz00_34; 
{ /* R5rs/syntax.scm 499 */
obj_t BgL_sz00_2443;
{ /* R5rs/syntax.scm 499 */
obj_t BgL_res2901z00_2446;
{ /* R5rs/syntax.scm 499 */
obj_t BgL_arg2783z00_2445;
BgL_arg2783z00_2445 = 
SYMBOL_TO_STRING(BgL_xz00_2442); 
BgL_res2901z00_2446 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2445); } 
BgL_sz00_2443 = BgL_res2901z00_2446; } 
BgL_testz00_5386 = 
bigloo_strcmp_at(BgL_sz00_2443, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } } 
if(BgL_testz00_5386)
{ 
obj_t BgL_xz00_5390;
BgL_xz00_5390 = 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_34); 
BgL_xz00_34 = BgL_xz00_5390; 
goto BGl_hygienezd2eqzf3z21zz__r5_macro_4_3_syntaxz00;}  else 
{ /* R5rs/syntax.scm 499 */
return ((bool_t)0);} } }  else 
{ /* R5rs/syntax.scm 497 */
return ((bool_t)0);} } } 
}



/* unhygienize */
obj_t BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_36)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 504 */
if(
SYMBOLP(BgL_xz00_36))
{ /* R5rs/syntax.scm 506 */
return 
BGl_hygienezd2symbolzd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_36);}  else 
{ /* R5rs/syntax.scm 506 */
if(
PAIRP(BgL_xz00_36))
{ /* R5rs/syntax.scm 508 */
return 
MAKE_PAIR(
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_36)), 
BGl_unhygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CDR(BgL_xz00_36)));}  else 
{ /* R5rs/syntax.scm 508 */
return BgL_xz00_36;} } } 
}



/* hygienize */
obj_t BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(obj_t BgL_xz00_37, obj_t BgL_envz00_38)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 516 */
{ 
obj_t BgL_varz00_1187;obj_t BgL_bodyz00_1188;obj_t BgL_bindingsz00_1184;obj_t BgL_bodyz00_1185;obj_t BgL_bindingsz00_1181;obj_t BgL_bodyz00_1182;obj_t BgL_bindingsz00_1174;obj_t BgL_bodyz00_1175;obj_t BgL_varsz00_1171;obj_t BgL_bodyz00_1172;obj_t BgL_varz00_1167;
if(
SYMBOLP(BgL_xz00_37))
{ /* R5rs/syntax.scm 517 */
BgL_varz00_1167 = BgL_xz00_37; 
{ /* R5rs/syntax.scm 519 */
bool_t BgL_testz00_5404;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_sz00_2618;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_res2902z00_2621;
{ /* R5rs/syntax.scm 519 */
obj_t BgL_symbolz00_2619;
if(
SYMBOLP(BgL_xz00_37))
{ /* R5rs/syntax.scm 519 */
BgL_symbolz00_2619 = BgL_xz00_37; }  else 
{ 
obj_t BgL_auxz00_5407;
BgL_auxz00_5407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18094)), BGl_string3581z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_xz00_37); 
FAILURE(BgL_auxz00_5407,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 519 */
obj_t BgL_arg2783z00_2620;
BgL_arg2783z00_2620 = 
SYMBOL_TO_STRING(BgL_symbolz00_2619); 
BgL_res2902z00_2621 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2620); } } 
BgL_sz00_2618 = BgL_res2902z00_2621; } 
BgL_testz00_5404 = 
bigloo_strcmp_at(BgL_sz00_2618, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } 
if(BgL_testz00_5404)
{ /* R5rs/syntax.scm 519 */
return 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_xz00_37);}  else 
{ /* R5rs/syntax.scm 521 */
obj_t BgL_oz00_1407;
{ /* R5rs/syntax.scm 521 */
obj_t BgL_auxz00_5415;
{ /* R5rs/syntax.scm 521 */
bool_t BgL_testz00_5416;
if(
PAIRP(BgL_envz00_38))
{ /* R5rs/syntax.scm 521 */
BgL_testz00_5416 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 521 */
BgL_testz00_5416 = 
NULLP(BgL_envz00_38)
; } 
if(BgL_testz00_5416)
{ /* R5rs/syntax.scm 521 */
BgL_auxz00_5415 = BgL_envz00_38
; }  else 
{ 
obj_t BgL_auxz00_5420;
BgL_auxz00_5420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18159)), BGl_string3581z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_envz00_38); 
FAILURE(BgL_auxz00_5420,BFALSE,BFALSE);} } 
BgL_oz00_1407 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_1167, BgL_auxz00_5415); } 
if(
PAIRP(BgL_oz00_1407))
{ /* R5rs/syntax.scm 522 */
return 
CDR(BgL_oz00_1407);}  else 
{ /* R5rs/syntax.scm 522 */
return BgL_varz00_1167;} } } }  else 
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_xz00_37))
{ /* R5rs/syntax.scm 517 */
if(
(
CAR(BgL_xz00_37)==BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
obj_t BgL_arg2289z00_1196;
BgL_arg2289z00_1196 = 
CDR(BgL_xz00_37); 
return 
MAKE_PAIR(BGl_symbol3262z00zz__r5_macro_4_3_syntaxz00, 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_arg2289z00_1196));}  else 
{ /* R5rs/syntax.scm 517 */
obj_t BgL_cdrzd21559zd2_1197;
BgL_cdrzd21559zd2_1197 = 
CDR(BgL_xz00_37); 
if(
(
CAR(BgL_xz00_37)==BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_cdrzd21559zd2_1197))
{ /* R5rs/syntax.scm 517 */
BgL_varsz00_1171 = 
CAR(BgL_cdrzd21559zd2_1197); 
BgL_bodyz00_1172 = 
CDR(BgL_cdrzd21559zd2_1197); 
{ /* R5rs/syntax.scm 528 */
obj_t BgL_nvarsz00_1411;
BgL_nvarsz00_1411 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1171); 
{ /* R5rs/syntax.scm 528 */
obj_t BgL_nenvz00_1412;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg2484z00_1419;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_ll1888z00_1420;obj_t BgL_ll1889z00_1421;
BgL_ll1888z00_1420 = 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(BgL_varsz00_1171); 
BgL_ll1889z00_1421 = 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(BgL_nvarsz00_1411); 
if(
NULLP(BgL_ll1888z00_1420))
{ /* R5rs/syntax.scm 529 */
BgL_arg2484z00_1419 = BNIL; }  else 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_head1890z00_1423;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg2495z00_1440;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg2498z00_1442;obj_t BgL_arg2499z00_1443;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_2627;
if(
PAIRP(BgL_ll1888z00_1420))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_2627 = BgL_ll1888z00_1420; }  else 
{ 
obj_t BgL_auxz00_5449;
BgL_auxz00_5449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18374)), BGl_string3582z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1888z00_1420); 
FAILURE(BgL_auxz00_5449,BFALSE,BFALSE);} 
BgL_arg2498z00_1442 = 
CAR(BgL_pairz00_2627); } 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_2628;
if(
PAIRP(BgL_ll1889z00_1421))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_2628 = BgL_ll1889z00_1421; }  else 
{ 
obj_t BgL_auxz00_5456;
BgL_auxz00_5456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18374)), BGl_string3582z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1889z00_1421); 
FAILURE(BgL_auxz00_5456,BFALSE,BFALSE);} 
BgL_arg2499z00_1443 = 
CAR(BgL_pairz00_2628); } 
BgL_arg2495z00_1440 = 
MAKE_PAIR(BgL_arg2498z00_1442, BgL_arg2499z00_1443); } 
BgL_head1890z00_1423 = 
MAKE_PAIR(BgL_arg2495z00_1440, BNIL); } 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_g1894z00_1424;obj_t BgL_g1895z00_1425;
BgL_g1894z00_1424 = 
CDR(BgL_ll1888z00_1420); 
BgL_g1895z00_1425 = 
CDR(BgL_ll1889z00_1421); 
{ 
obj_t BgL_ll1888z00_1427;obj_t BgL_ll1889z00_1428;obj_t BgL_tail1891z00_1429;
BgL_ll1888z00_1427 = BgL_g1894z00_1424; 
BgL_ll1889z00_1428 = BgL_g1895z00_1425; 
BgL_tail1891z00_1429 = BgL_head1890z00_1423; 
BgL_zc3anonymousza32486ze3z83_1430:
if(
NULLP(BgL_ll1888z00_1427))
{ /* R5rs/syntax.scm 529 */
BgL_arg2484z00_1419 = BgL_head1890z00_1423; }  else 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_newtail1892z00_1432;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg2491z00_1435;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_arg2493z00_1437;obj_t BgL_arg2494z00_1438;
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_2636;
if(
PAIRP(BgL_ll1888z00_1427))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_2636 = BgL_ll1888z00_1427; }  else 
{ 
obj_t BgL_auxz00_5469;
BgL_auxz00_5469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18374)), BGl_string3583z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1888z00_1427); 
FAILURE(BgL_auxz00_5469,BFALSE,BFALSE);} 
BgL_arg2493z00_1437 = 
CAR(BgL_pairz00_2636); } 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_pairz00_2637;
if(
PAIRP(BgL_ll1889z00_1428))
{ /* R5rs/syntax.scm 529 */
BgL_pairz00_2637 = BgL_ll1889z00_1428; }  else 
{ 
obj_t BgL_auxz00_5476;
BgL_auxz00_5476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18374)), BGl_string3583z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1889z00_1428); 
FAILURE(BgL_auxz00_5476,BFALSE,BFALSE);} 
BgL_arg2494z00_1438 = 
CAR(BgL_pairz00_2637); } 
BgL_arg2491z00_1435 = 
MAKE_PAIR(BgL_arg2493z00_1437, BgL_arg2494z00_1438); } 
BgL_newtail1892z00_1432 = 
MAKE_PAIR(BgL_arg2491z00_1435, BNIL); } 
SET_CDR(BgL_tail1891z00_1429, BgL_newtail1892z00_1432); 
{ 
obj_t BgL_tail1891z00_5488;obj_t BgL_ll1889z00_5486;obj_t BgL_ll1888z00_5484;
BgL_ll1888z00_5484 = 
CDR(BgL_ll1888z00_1427); 
BgL_ll1889z00_5486 = 
CDR(BgL_ll1889z00_1428); 
BgL_tail1891z00_5488 = BgL_newtail1892z00_1432; 
BgL_tail1891z00_1429 = BgL_tail1891z00_5488; 
BgL_ll1889z00_1428 = BgL_ll1889z00_5486; 
BgL_ll1888z00_1427 = BgL_ll1888z00_5484; 
goto BgL_zc3anonymousza32486ze3z83_1430;} } } } } } 
{ /* R5rs/syntax.scm 529 */
obj_t BgL_auxz00_5489;
{ /* R5rs/syntax.scm 529 */
bool_t BgL_testz00_5490;
if(
PAIRP(BgL_arg2484z00_1419))
{ /* R5rs/syntax.scm 529 */
BgL_testz00_5490 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 529 */
BgL_testz00_5490 = 
NULLP(BgL_arg2484z00_1419)
; } 
if(BgL_testz00_5490)
{ /* R5rs/syntax.scm 529 */
BgL_auxz00_5489 = BgL_arg2484z00_1419
; }  else 
{ 
obj_t BgL_auxz00_5494;
BgL_auxz00_5494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18366)), BGl_string3582z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2484z00_1419); 
FAILURE(BgL_auxz00_5494,BFALSE,BFALSE);} } 
BgL_nenvz00_1412 = 
bgl_append2(BgL_auxz00_5489, BgL_envz00_38); } } 
{ /* R5rs/syntax.scm 529 */

{ /* R5rs/syntax.scm 530 */
obj_t BgL_arg2478z00_1413;obj_t BgL_arg2479z00_1414;
BgL_arg2478z00_1413 = BGl_symbol3378z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 531 */
obj_t BgL_arg2480z00_1415;
{ /* R5rs/syntax.scm 531 */
obj_t BgL_arg2482z00_1417;
BgL_arg2482z00_1417 = 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1412, BgL_bodyz00_1172); 
{ /* R5rs/syntax.scm 530 */
obj_t BgL_auxz00_5500;
{ /* R5rs/syntax.scm 530 */
bool_t BgL_testz00_5501;
if(
PAIRP(BgL_arg2482z00_1417))
{ /* R5rs/syntax.scm 530 */
BgL_testz00_5501 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 530 */
BgL_testz00_5501 = 
NULLP(BgL_arg2482z00_1417)
; } 
if(BgL_testz00_5501)
{ /* R5rs/syntax.scm 530 */
BgL_auxz00_5500 = BgL_arg2482z00_1417
; }  else 
{ 
obj_t BgL_auxz00_5505;
BgL_auxz00_5505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18427)), BGl_string3582z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2482z00_1417); 
FAILURE(BgL_auxz00_5505,BFALSE,BFALSE);} } 
BgL_arg2480z00_1415 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5500, BNIL); } } 
{ /* R5rs/syntax.scm 530 */
obj_t BgL_list2481z00_1416;
BgL_list2481z00_1416 = 
MAKE_PAIR(BgL_arg2480z00_1415, BNIL); 
BgL_arg2479z00_1414 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_nvarsz00_1411, BgL_list2481z00_1416); } } 
return 
MAKE_PAIR(BgL_arg2478z00_1413, BgL_arg2479z00_1414);} } } } }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
if(
(
CAR(BgL_xz00_37)==BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_cdrzd21559zd2_1197))
{ /* R5rs/syntax.scm 517 */
BgL_bindingsz00_1174 = 
CAR(BgL_cdrzd21559zd2_1197); 
BgL_bodyz00_1175 = 
CDR(BgL_cdrzd21559zd2_1197); 
{ /* R5rs/syntax.scm 533 */
obj_t BgL_nvarsz00_1444;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_arg2527z00_1495;
if(
NULLP(BgL_bindingsz00_1174))
{ /* R5rs/syntax.scm 533 */
BgL_arg2527z00_1495 = BNIL; }  else 
{ /* R5rs/syntax.scm 533 */
obj_t BgL_head1898z00_1498;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_arg2536z00_1512;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_pairz00_2648;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_pairz00_2647;
if(
PAIRP(BgL_bindingsz00_1174))
{ /* R5rs/syntax.scm 533 */
BgL_pairz00_2647 = BgL_bindingsz00_1174; }  else 
{ 
obj_t BgL_auxz00_5525;
BgL_auxz00_5525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18538)), BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1174); 
FAILURE(BgL_auxz00_5525,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 533 */
obj_t BgL_aux3136z00_3333;
BgL_aux3136z00_3333 = 
CAR(BgL_pairz00_2647); 
if(
PAIRP(BgL_aux3136z00_3333))
{ /* R5rs/syntax.scm 533 */
BgL_pairz00_2648 = BgL_aux3136z00_3333; }  else 
{ 
obj_t BgL_auxz00_5532;
BgL_auxz00_5532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18538)), BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3136z00_3333); 
FAILURE(BgL_auxz00_5532,BFALSE,BFALSE);} } } 
BgL_arg2536z00_1512 = 
CAR(BgL_pairz00_2648); } 
BgL_head1898z00_1498 = 
MAKE_PAIR(BgL_arg2536z00_1512, BNIL); } 
{ /* R5rs/syntax.scm 533 */
obj_t BgL_g1901z00_1499;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_pairz00_2651;
if(
PAIRP(BgL_bindingsz00_1174))
{ /* R5rs/syntax.scm 533 */
BgL_pairz00_2651 = BgL_bindingsz00_1174; }  else 
{ 
obj_t BgL_auxz00_5540;
BgL_auxz00_5540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18538)), BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1174); 
FAILURE(BgL_auxz00_5540,BFALSE,BFALSE);} 
BgL_g1901z00_1499 = 
CDR(BgL_pairz00_2651); } 
{ 
obj_t BgL_l1896z00_1501;obj_t BgL_tail1899z00_1502;
BgL_l1896z00_1501 = BgL_g1901z00_1499; 
BgL_tail1899z00_1502 = BgL_head1898z00_1498; 
BgL_zc3anonymousza32529ze3z83_1503:
if(
PAIRP(BgL_l1896z00_1501))
{ /* R5rs/syntax.scm 533 */
obj_t BgL_newtail1900z00_1505;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_arg2532z00_1507;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_pairz00_2654;
{ /* R5rs/syntax.scm 533 */
obj_t BgL_aux3140z00_3337;
BgL_aux3140z00_3337 = 
CAR(BgL_l1896z00_1501); 
if(
PAIRP(BgL_aux3140z00_3337))
{ /* R5rs/syntax.scm 533 */
BgL_pairz00_2654 = BgL_aux3140z00_3337; }  else 
{ 
obj_t BgL_auxz00_5550;
BgL_auxz00_5550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18538)), BGl_string3585z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3140z00_3337); 
FAILURE(BgL_auxz00_5550,BFALSE,BFALSE);} } 
BgL_arg2532z00_1507 = 
CAR(BgL_pairz00_2654); } 
BgL_newtail1900z00_1505 = 
MAKE_PAIR(BgL_arg2532z00_1507, BNIL); } 
SET_CDR(BgL_tail1899z00_1502, BgL_newtail1900z00_1505); 
{ 
obj_t BgL_tail1899z00_5559;obj_t BgL_l1896z00_5557;
BgL_l1896z00_5557 = 
CDR(BgL_l1896z00_1501); 
BgL_tail1899z00_5559 = BgL_newtail1900z00_1505; 
BgL_tail1899z00_1502 = BgL_tail1899z00_5559; 
BgL_l1896z00_1501 = BgL_l1896z00_5557; 
goto BgL_zc3anonymousza32529ze3z83_1503;} }  else 
{ /* R5rs/syntax.scm 533 */
if(
NULLP(BgL_l1896z00_1501))
{ /* R5rs/syntax.scm 533 */
BgL_arg2527z00_1495 = BgL_head1898z00_1498; }  else 
{ /* R5rs/syntax.scm 533 */
BgL_arg2527z00_1495 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1896z00_1501); } } } } } 
BgL_nvarsz00_1444 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_arg2527z00_1495); } 
{ /* R5rs/syntax.scm 533 */
obj_t BgL_nenvz00_1445;
{ /* R5rs/syntax.scm 534 */
obj_t BgL_arg2518z00_1475;
if(
NULLP(BgL_bindingsz00_1174))
{ /* R5rs/syntax.scm 534 */
BgL_arg2518z00_1475 = BNIL; }  else 
{ /* R5rs/syntax.scm 534 */
obj_t BgL_head1904z00_1479;
BgL_head1904z00_1479 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_ll1902z00_1481;obj_t BgL_ll1903z00_1482;obj_t BgL_tail1905z00_1483;
BgL_ll1902z00_1481 = BgL_bindingsz00_1174; 
BgL_ll1903z00_1482 = BgL_nvarsz00_1444; 
BgL_tail1905z00_1483 = BgL_head1904z00_1479; 
BgL_zc3anonymousza32520ze3z83_1484:
if(
NULLP(BgL_ll1902z00_1481))
{ /* R5rs/syntax.scm 534 */
BgL_arg2518z00_1475 = 
CDR(BgL_head1904z00_1479); }  else 
{ /* R5rs/syntax.scm 534 */
obj_t BgL_newtail1906z00_1486;
{ /* R5rs/syntax.scm 534 */
obj_t BgL_arg2524z00_1489;
{ /* R5rs/syntax.scm 534 */
obj_t BgL_bz00_1491;obj_t BgL_vz00_1492;
{ /* R5rs/syntax.scm 534 */
obj_t BgL_pairz00_2666;
if(
PAIRP(BgL_ll1902z00_1481))
{ /* R5rs/syntax.scm 534 */
BgL_pairz00_2666 = BgL_ll1902z00_1481; }  else 
{ 
obj_t BgL_auxz00_5572;
BgL_auxz00_5572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18580)), BGl_string3586z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1902z00_1481); 
FAILURE(BgL_auxz00_5572,BFALSE,BFALSE);} 
BgL_bz00_1491 = 
CAR(BgL_pairz00_2666); } 
{ /* R5rs/syntax.scm 534 */
obj_t BgL_pairz00_2667;
if(
PAIRP(BgL_ll1903z00_1482))
{ /* R5rs/syntax.scm 534 */
BgL_pairz00_2667 = BgL_ll1903z00_1482; }  else 
{ 
obj_t BgL_auxz00_5579;
BgL_auxz00_5579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18580)), BGl_string3586z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1903z00_1482); 
FAILURE(BgL_auxz00_5579,BFALSE,BFALSE);} 
BgL_vz00_1492 = 
CAR(BgL_pairz00_2667); } 
{ /* R5rs/syntax.scm 535 */
obj_t BgL_arg2526z00_1493;
{ /* R5rs/syntax.scm 535 */
obj_t BgL_pairz00_2668;
if(
PAIRP(BgL_bz00_1491))
{ /* R5rs/syntax.scm 535 */
BgL_pairz00_2668 = BgL_bz00_1491; }  else 
{ 
obj_t BgL_auxz00_5586;
BgL_auxz00_5586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18618)), BGl_string3586z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_1491); 
FAILURE(BgL_auxz00_5586,BFALSE,BFALSE);} 
BgL_arg2526z00_1493 = 
CAR(BgL_pairz00_2668); } 
BgL_arg2524z00_1489 = 
MAKE_PAIR(BgL_arg2526z00_1493, BgL_vz00_1492); } } 
BgL_newtail1906z00_1486 = 
MAKE_PAIR(BgL_arg2524z00_1489, BNIL); } 
SET_CDR(BgL_tail1905z00_1483, BgL_newtail1906z00_1486); 
{ 
obj_t BgL_tail1905z00_5598;obj_t BgL_ll1903z00_5596;obj_t BgL_ll1902z00_5594;
BgL_ll1902z00_5594 = 
CDR(BgL_ll1902z00_1481); 
BgL_ll1903z00_5596 = 
CDR(BgL_ll1903z00_1482); 
BgL_tail1905z00_5598 = BgL_newtail1906z00_1486; 
BgL_tail1905z00_1483 = BgL_tail1905z00_5598; 
BgL_ll1903z00_1482 = BgL_ll1903z00_5596; 
BgL_ll1902z00_1481 = BgL_ll1902z00_5594; 
goto BgL_zc3anonymousza32520ze3z83_1484;} } } } 
{ /* R5rs/syntax.scm 534 */
obj_t BgL_auxz00_5599;
{ /* R5rs/syntax.scm 534 */
bool_t BgL_testz00_5600;
if(
PAIRP(BgL_arg2518z00_1475))
{ /* R5rs/syntax.scm 534 */
BgL_testz00_5600 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 534 */
BgL_testz00_5600 = 
NULLP(BgL_arg2518z00_1475)
; } 
if(BgL_testz00_5600)
{ /* R5rs/syntax.scm 534 */
BgL_auxz00_5599 = BgL_arg2518z00_1475
; }  else 
{ 
obj_t BgL_auxz00_5604;
BgL_auxz00_5604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18572)), BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2518z00_1475); 
FAILURE(BgL_auxz00_5604,BFALSE,BFALSE);} } 
BgL_nenvz00_1445 = 
bgl_append2(BgL_auxz00_5599, BgL_envz00_38); } } 
{ /* R5rs/syntax.scm 534 */

{ /* R5rs/syntax.scm 538 */
obj_t BgL_arg2500z00_1446;obj_t BgL_arg2501z00_1447;
BgL_arg2500z00_1446 = BGl_symbol3293z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_arg2502z00_1448;obj_t BgL_arg2503z00_1449;
if(
NULLP(BgL_bindingsz00_1174))
{ /* R5rs/syntax.scm 538 */
BgL_arg2502z00_1448 = BNIL; }  else 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_head1910z00_1454;
BgL_head1910z00_1454 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_ll1908z00_1456;obj_t BgL_ll1909z00_1457;obj_t BgL_tail1911z00_1458;
BgL_ll1908z00_1456 = BgL_bindingsz00_1174; 
BgL_ll1909z00_1457 = BgL_nvarsz00_1444; 
BgL_tail1911z00_1458 = BgL_head1910z00_1454; 
BgL_zc3anonymousza32506ze3z83_1459:
if(
NULLP(BgL_ll1908z00_1456))
{ /* R5rs/syntax.scm 538 */
BgL_arg2502z00_1448 = 
CDR(BgL_head1910z00_1454); }  else 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_newtail1912z00_1461;
{ /* R5rs/syntax.scm 538 */
obj_t BgL_arg2510z00_1464;
{ /* R5rs/syntax.scm 538 */
obj_t BgL_bz00_1466;obj_t BgL_vz00_1467;
{ /* R5rs/syntax.scm 538 */
obj_t BgL_pairz00_2680;
if(
PAIRP(BgL_ll1908z00_1456))
{ /* R5rs/syntax.scm 538 */
BgL_pairz00_2680 = BgL_ll1908z00_1456; }  else 
{ 
obj_t BgL_auxz00_5617;
BgL_auxz00_5617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18670)), BGl_string3587z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1908z00_1456); 
FAILURE(BgL_auxz00_5617,BFALSE,BFALSE);} 
BgL_bz00_1466 = 
CAR(BgL_pairz00_2680); } 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_pairz00_2681;
if(
PAIRP(BgL_ll1909z00_1457))
{ /* R5rs/syntax.scm 538 */
BgL_pairz00_2681 = BgL_ll1909z00_1457; }  else 
{ 
obj_t BgL_auxz00_5624;
BgL_auxz00_5624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18670)), BGl_string3587z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1909z00_1457); 
FAILURE(BgL_auxz00_5624,BFALSE,BFALSE);} 
BgL_vz00_1467 = 
CAR(BgL_pairz00_2681); } 
{ /* R5rs/syntax.scm 539 */
obj_t BgL_arg2512z00_1468;
{ /* R5rs/syntax.scm 539 */
obj_t BgL_arg2515z00_1471;
{ /* R5rs/syntax.scm 539 */
obj_t BgL_pairz00_2682;
if(
PAIRP(BgL_bz00_1466))
{ /* R5rs/syntax.scm 539 */
BgL_pairz00_2682 = BgL_bz00_1466; }  else 
{ 
obj_t BgL_auxz00_5631;
BgL_auxz00_5631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18718)), BGl_string3587z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_1466); 
FAILURE(BgL_auxz00_5631,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 539 */
obj_t BgL_pairz00_2685;
{ /* R5rs/syntax.scm 539 */
obj_t BgL_aux3160z00_3357;
BgL_aux3160z00_3357 = 
CDR(BgL_pairz00_2682); 
if(
PAIRP(BgL_aux3160z00_3357))
{ /* R5rs/syntax.scm 539 */
BgL_pairz00_2685 = BgL_aux3160z00_3357; }  else 
{ 
obj_t BgL_auxz00_5638;
BgL_auxz00_5638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18712)), BGl_string3587z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3160z00_3357); 
FAILURE(BgL_auxz00_5638,BFALSE,BFALSE);} } 
BgL_arg2515z00_1471 = 
CAR(BgL_pairz00_2685); } } 
BgL_arg2512z00_1468 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_arg2515z00_1471, BgL_envz00_38); } 
{ /* R5rs/syntax.scm 539 */
obj_t BgL_list2513z00_1469;
{ /* R5rs/syntax.scm 539 */
obj_t BgL_arg2514z00_1470;
BgL_arg2514z00_1470 = 
MAKE_PAIR(BgL_arg2512z00_1468, BNIL); 
BgL_list2513z00_1469 = 
MAKE_PAIR(BgL_vz00_1467, BgL_arg2514z00_1470); } 
BgL_arg2510z00_1464 = BgL_list2513z00_1469; } } } 
BgL_newtail1912z00_1461 = 
MAKE_PAIR(BgL_arg2510z00_1464, BNIL); } 
SET_CDR(BgL_tail1911z00_1458, BgL_newtail1912z00_1461); 
{ 
obj_t BgL_tail1911z00_5652;obj_t BgL_ll1909z00_5650;obj_t BgL_ll1908z00_5648;
BgL_ll1908z00_5648 = 
CDR(BgL_ll1908z00_1456); 
BgL_ll1909z00_5650 = 
CDR(BgL_ll1909z00_1457); 
BgL_tail1911z00_5652 = BgL_newtail1912z00_1461; 
BgL_tail1911z00_1458 = BgL_tail1911z00_5652; 
BgL_ll1909z00_1457 = BgL_ll1909z00_5650; 
BgL_ll1908z00_1456 = BgL_ll1908z00_5648; 
goto BgL_zc3anonymousza32506ze3z83_1459;} } } } 
{ /* R5rs/syntax.scm 541 */
obj_t BgL_arg2516z00_1473;
BgL_arg2516z00_1473 = 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1445, BgL_bodyz00_1175); 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_auxz00_5654;
{ /* R5rs/syntax.scm 538 */
bool_t BgL_testz00_5655;
if(
PAIRP(BgL_arg2516z00_1473))
{ /* R5rs/syntax.scm 538 */
BgL_testz00_5655 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 538 */
BgL_testz00_5655 = 
NULLP(BgL_arg2516z00_1473)
; } 
if(BgL_testz00_5655)
{ /* R5rs/syntax.scm 538 */
BgL_auxz00_5654 = BgL_arg2516z00_1473
; }  else 
{ 
obj_t BgL_auxz00_5659;
BgL_auxz00_5659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)18664)), BGl_string3584z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2516z00_1473); 
FAILURE(BgL_auxz00_5659,BFALSE,BFALSE);} } 
BgL_arg2503z00_1449 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5654, BNIL); } } 
{ /* R5rs/syntax.scm 538 */
obj_t BgL_list2504z00_1450;
BgL_list2504z00_1450 = 
MAKE_PAIR(BgL_arg2503z00_1449, BNIL); 
BgL_arg2501z00_1447 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2502z00_1448, BgL_list2504z00_1450); } } 
return 
MAKE_PAIR(BgL_arg2500z00_1446, BgL_arg2501z00_1447);} } } } }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
obj_t BgL_cdrzd21641zd2_1207;
BgL_cdrzd21641zd2_1207 = 
CDR(BgL_xz00_37); 
if(
(
CAR(BgL_xz00_37)==BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_cdrzd21641zd2_1207))
{ /* R5rs/syntax.scm 517 */
BgL_bindingsz00_1181 = 
CAR(BgL_cdrzd21641zd2_1207); 
BgL_bodyz00_1182 = 
CDR(BgL_cdrzd21641zd2_1207); 
{ 
obj_t BgL_bindingsz00_1592;obj_t BgL_nbindingsz00_1593;obj_t BgL_nenvz00_1594;
BgL_bindingsz00_1592 = BgL_bindingsz00_1181; 
BgL_nbindingsz00_1593 = BNIL; 
BgL_nenvz00_1594 = BgL_envz00_38; 
BgL_zc3anonymousza32584ze3z83_1595:
if(
NULLP(BgL_bindingsz00_1592))
{ /* R5rs/syntax.scm 559 */
obj_t BgL_arg2586z00_1597;obj_t BgL_arg2587z00_1598;
BgL_arg2586z00_1597 = BGl_symbol3391z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 559 */
obj_t BgL_arg2589z00_1599;obj_t BgL_arg2590z00_1600;
{ /* R5rs/syntax.scm 559 */
obj_t BgL_auxz00_5678;
{ /* R5rs/syntax.scm 559 */
bool_t BgL_testz00_5679;
if(
PAIRP(BgL_nbindingsz00_1593))
{ /* R5rs/syntax.scm 559 */
BgL_testz00_5679 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 559 */
BgL_testz00_5679 = 
NULLP(BgL_nbindingsz00_1593)
; } 
if(BgL_testz00_5679)
{ /* R5rs/syntax.scm 559 */
BgL_auxz00_5678 = BgL_nbindingsz00_1593
; }  else 
{ 
obj_t BgL_auxz00_5683;
BgL_auxz00_5683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19341)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_nbindingsz00_1593); 
FAILURE(BgL_auxz00_5683,BFALSE,BFALSE);} } 
BgL_arg2589z00_1599 = 
bgl_reverse(BgL_auxz00_5678); } 
{ /* R5rs/syntax.scm 559 */
obj_t BgL_arg2592z00_1602;
BgL_arg2592z00_1602 = 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1594, BgL_bodyz00_1182); 
{ /* R5rs/syntax.scm 559 */
obj_t BgL_auxz00_5689;
{ /* R5rs/syntax.scm 559 */
bool_t BgL_testz00_5690;
if(
PAIRP(BgL_arg2592z00_1602))
{ /* R5rs/syntax.scm 559 */
BgL_testz00_5690 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 559 */
BgL_testz00_5690 = 
NULLP(BgL_arg2592z00_1602)
; } 
if(BgL_testz00_5690)
{ /* R5rs/syntax.scm 559 */
BgL_auxz00_5689 = BgL_arg2592z00_1602
; }  else 
{ 
obj_t BgL_auxz00_5694;
BgL_auxz00_5694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19325)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2592z00_1602); 
FAILURE(BgL_auxz00_5694,BFALSE,BFALSE);} } 
BgL_arg2590z00_1600 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5689, BNIL); } } 
{ /* R5rs/syntax.scm 559 */
obj_t BgL_list2591z00_1601;
BgL_list2591z00_1601 = 
MAKE_PAIR(BgL_arg2590z00_1600, BNIL); 
BgL_arg2587z00_1598 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2589z00_1599, BgL_list2591z00_1601); } } 
return 
MAKE_PAIR(BgL_arg2586z00_1597, BgL_arg2587z00_1598);}  else 
{ /* R5rs/syntax.scm 560 */
obj_t BgL_varz00_1604;
{ /* R5rs/syntax.scm 560 */
obj_t BgL_pairz00_2743;
if(
PAIRP(BgL_bindingsz00_1592))
{ /* R5rs/syntax.scm 560 */
BgL_pairz00_2743 = BgL_bindingsz00_1592; }  else 
{ 
obj_t BgL_auxz00_5704;
BgL_auxz00_5704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19403)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1592); 
FAILURE(BgL_auxz00_5704,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 560 */
obj_t BgL_pairz00_2746;
{ /* R5rs/syntax.scm 560 */
obj_t BgL_aux3208z00_3405;
BgL_aux3208z00_3405 = 
CAR(BgL_pairz00_2743); 
if(
PAIRP(BgL_aux3208z00_3405))
{ /* R5rs/syntax.scm 560 */
BgL_pairz00_2746 = BgL_aux3208z00_3405; }  else 
{ 
obj_t BgL_auxz00_5711;
BgL_auxz00_5711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19397)), BGl_string3477z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3208z00_3405); 
FAILURE(BgL_auxz00_5711,BFALSE,BFALSE);} } 
BgL_varz00_1604 = 
CAR(BgL_pairz00_2746); } } 
{ /* R5rs/syntax.scm 561 */
obj_t BgL_nvarz00_1606;
BgL_nvarz00_1606 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varz00_1604); 
{ /* R5rs/syntax.scm 562 */
obj_t BgL_nenvz00_1607;
{ /* R5rs/syntax.scm 563 */
obj_t BgL_arg2600z00_1614;
BgL_arg2600z00_1614 = 
MAKE_PAIR(BgL_varz00_1604, BgL_nvarz00_1606); 
BgL_nenvz00_1607 = 
MAKE_PAIR(BgL_arg2600z00_1614, BgL_envz00_38); } 
{ /* R5rs/syntax.scm 563 */

{ /* R5rs/syntax.scm 564 */
obj_t BgL_arg2594z00_1608;obj_t BgL_arg2595z00_1609;
BgL_arg2594z00_1608 = 
CDR(BgL_bindingsz00_1592); 
{ /* R5rs/syntax.scm 565 */
obj_t BgL_arg2596z00_1610;
{ /* R5rs/syntax.scm 565 */
obj_t BgL_arg2597z00_1611;
BgL_arg2597z00_1611 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_varz00_1604, BgL_envz00_38); 
{ /* R5rs/syntax.scm 565 */
obj_t BgL_list2598z00_1612;
{ /* R5rs/syntax.scm 565 */
obj_t BgL_arg2599z00_1613;
BgL_arg2599z00_1613 = 
MAKE_PAIR(BgL_arg2597z00_1611, BNIL); 
BgL_list2598z00_1612 = 
MAKE_PAIR(BgL_varz00_1604, BgL_arg2599z00_1613); } 
BgL_arg2596z00_1610 = BgL_list2598z00_1612; } } 
BgL_arg2595z00_1609 = 
MAKE_PAIR(BgL_arg2596z00_1610, BgL_nbindingsz00_1593); } 
{ 
obj_t BgL_nenvz00_5726;obj_t BgL_nbindingsz00_5725;obj_t BgL_bindingsz00_5724;
BgL_bindingsz00_5724 = BgL_arg2594z00_1608; 
BgL_nbindingsz00_5725 = BgL_arg2595z00_1609; 
BgL_nenvz00_5726 = BgL_nenvz00_1607; 
BgL_nenvz00_1594 = BgL_nenvz00_5726; 
BgL_nbindingsz00_1593 = BgL_nbindingsz00_5725; 
BgL_bindingsz00_1592 = BgL_bindingsz00_5724; 
goto BgL_zc3anonymousza32584ze3z83_1595;} } } } } } } }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
if(
(
CAR(BgL_xz00_37)==BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_cdrzd21641zd2_1207))
{ /* R5rs/syntax.scm 517 */
BgL_bindingsz00_1184 = 
CAR(BgL_cdrzd21641zd2_1207); 
BgL_bodyz00_1185 = 
CDR(BgL_cdrzd21641zd2_1207); 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_nvarsz00_1616;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_arg2628z00_1667;
if(
NULLP(BgL_bindingsz00_1184))
{ /* R5rs/syntax.scm 568 */
BgL_arg2628z00_1667 = BNIL; }  else 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_head1934z00_1670;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_arg2637z00_1684;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_pairz00_2758;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_pairz00_2757;
if(
PAIRP(BgL_bindingsz00_1184))
{ /* R5rs/syntax.scm 568 */
BgL_pairz00_2757 = BgL_bindingsz00_1184; }  else 
{ 
obj_t BgL_auxz00_5739;
BgL_auxz00_5739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19678)), BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1184); 
FAILURE(BgL_auxz00_5739,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_aux3214z00_3411;
BgL_aux3214z00_3411 = 
CAR(BgL_pairz00_2757); 
if(
PAIRP(BgL_aux3214z00_3411))
{ /* R5rs/syntax.scm 568 */
BgL_pairz00_2758 = BgL_aux3214z00_3411; }  else 
{ 
obj_t BgL_auxz00_5746;
BgL_auxz00_5746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19678)), BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3214z00_3411); 
FAILURE(BgL_auxz00_5746,BFALSE,BFALSE);} } } 
BgL_arg2637z00_1684 = 
CAR(BgL_pairz00_2758); } 
BgL_head1934z00_1670 = 
MAKE_PAIR(BgL_arg2637z00_1684, BNIL); } 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_g1937z00_1671;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_pairz00_2761;
if(
PAIRP(BgL_bindingsz00_1184))
{ /* R5rs/syntax.scm 568 */
BgL_pairz00_2761 = BgL_bindingsz00_1184; }  else 
{ 
obj_t BgL_auxz00_5754;
BgL_auxz00_5754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19678)), BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bindingsz00_1184); 
FAILURE(BgL_auxz00_5754,BFALSE,BFALSE);} 
BgL_g1937z00_1671 = 
CDR(BgL_pairz00_2761); } 
{ 
obj_t BgL_l1932z00_1673;obj_t BgL_tail1935z00_1674;
BgL_l1932z00_1673 = BgL_g1937z00_1671; 
BgL_tail1935z00_1674 = BgL_head1934z00_1670; 
BgL_zc3anonymousza32630ze3z83_1675:
if(
PAIRP(BgL_l1932z00_1673))
{ /* R5rs/syntax.scm 568 */
obj_t BgL_newtail1936z00_1677;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_arg2633z00_1679;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_pairz00_2764;
{ /* R5rs/syntax.scm 568 */
obj_t BgL_aux3218z00_3415;
BgL_aux3218z00_3415 = 
CAR(BgL_l1932z00_1673); 
if(
PAIRP(BgL_aux3218z00_3415))
{ /* R5rs/syntax.scm 568 */
BgL_pairz00_2764 = BgL_aux3218z00_3415; }  else 
{ 
obj_t BgL_auxz00_5764;
BgL_auxz00_5764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19678)), BGl_string3589z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3218z00_3415); 
FAILURE(BgL_auxz00_5764,BFALSE,BFALSE);} } 
BgL_arg2633z00_1679 = 
CAR(BgL_pairz00_2764); } 
BgL_newtail1936z00_1677 = 
MAKE_PAIR(BgL_arg2633z00_1679, BNIL); } 
SET_CDR(BgL_tail1935z00_1674, BgL_newtail1936z00_1677); 
{ 
obj_t BgL_tail1935z00_5773;obj_t BgL_l1932z00_5771;
BgL_l1932z00_5771 = 
CDR(BgL_l1932z00_1673); 
BgL_tail1935z00_5773 = BgL_newtail1936z00_1677; 
BgL_tail1935z00_1674 = BgL_tail1935z00_5773; 
BgL_l1932z00_1673 = BgL_l1932z00_5771; 
goto BgL_zc3anonymousza32630ze3z83_1675;} }  else 
{ /* R5rs/syntax.scm 568 */
if(
NULLP(BgL_l1932z00_1673))
{ /* R5rs/syntax.scm 568 */
BgL_arg2628z00_1667 = BgL_head1934z00_1670; }  else 
{ /* R5rs/syntax.scm 568 */
BgL_arg2628z00_1667 = 
BGl_errorz00zz__errorz00(BGl_string3520z00zz__r5_macro_4_3_syntaxz00, BGl_string3521z00zz__r5_macro_4_3_syntaxz00, BgL_l1932z00_1673); } } } } } 
BgL_nvarsz00_1616 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_arg2628z00_1667); } 
{ /* R5rs/syntax.scm 568 */
obj_t BgL_nenvz00_1617;
{ /* R5rs/syntax.scm 569 */
obj_t BgL_arg2619z00_1647;
if(
NULLP(BgL_bindingsz00_1184))
{ /* R5rs/syntax.scm 569 */
BgL_arg2619z00_1647 = BNIL; }  else 
{ /* R5rs/syntax.scm 569 */
obj_t BgL_head1940z00_1651;
BgL_head1940z00_1651 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_ll1938z00_1653;obj_t BgL_ll1939z00_1654;obj_t BgL_tail1941z00_1655;
BgL_ll1938z00_1653 = BgL_bindingsz00_1184; 
BgL_ll1939z00_1654 = BgL_nvarsz00_1616; 
BgL_tail1941z00_1655 = BgL_head1940z00_1651; 
BgL_zc3anonymousza32621ze3z83_1656:
if(
NULLP(BgL_ll1938z00_1653))
{ /* R5rs/syntax.scm 569 */
BgL_arg2619z00_1647 = 
CDR(BgL_head1940z00_1651); }  else 
{ /* R5rs/syntax.scm 569 */
obj_t BgL_newtail1942z00_1658;
{ /* R5rs/syntax.scm 569 */
obj_t BgL_arg2625z00_1661;
{ /* R5rs/syntax.scm 569 */
obj_t BgL_bz00_1663;obj_t BgL_vz00_1664;
{ /* R5rs/syntax.scm 569 */
obj_t BgL_pairz00_2776;
if(
PAIRP(BgL_ll1938z00_1653))
{ /* R5rs/syntax.scm 569 */
BgL_pairz00_2776 = BgL_ll1938z00_1653; }  else 
{ 
obj_t BgL_auxz00_5786;
BgL_auxz00_5786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19720)), BGl_string3590z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1938z00_1653); 
FAILURE(BgL_auxz00_5786,BFALSE,BFALSE);} 
BgL_bz00_1663 = 
CAR(BgL_pairz00_2776); } 
{ /* R5rs/syntax.scm 569 */
obj_t BgL_pairz00_2777;
if(
PAIRP(BgL_ll1939z00_1654))
{ /* R5rs/syntax.scm 569 */
BgL_pairz00_2777 = BgL_ll1939z00_1654; }  else 
{ 
obj_t BgL_auxz00_5793;
BgL_auxz00_5793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19720)), BGl_string3590z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1939z00_1654); 
FAILURE(BgL_auxz00_5793,BFALSE,BFALSE);} 
BgL_vz00_1664 = 
CAR(BgL_pairz00_2777); } 
{ /* R5rs/syntax.scm 570 */
obj_t BgL_arg2627z00_1665;
{ /* R5rs/syntax.scm 570 */
obj_t BgL_pairz00_2778;
if(
PAIRP(BgL_bz00_1663))
{ /* R5rs/syntax.scm 570 */
BgL_pairz00_2778 = BgL_bz00_1663; }  else 
{ 
obj_t BgL_auxz00_5800;
BgL_auxz00_5800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19758)), BGl_string3590z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_1663); 
FAILURE(BgL_auxz00_5800,BFALSE,BFALSE);} 
BgL_arg2627z00_1665 = 
CAR(BgL_pairz00_2778); } 
BgL_arg2625z00_1661 = 
MAKE_PAIR(BgL_arg2627z00_1665, BgL_vz00_1664); } } 
BgL_newtail1942z00_1658 = 
MAKE_PAIR(BgL_arg2625z00_1661, BNIL); } 
SET_CDR(BgL_tail1941z00_1655, BgL_newtail1942z00_1658); 
{ 
obj_t BgL_tail1941z00_5812;obj_t BgL_ll1939z00_5810;obj_t BgL_ll1938z00_5808;
BgL_ll1938z00_5808 = 
CDR(BgL_ll1938z00_1653); 
BgL_ll1939z00_5810 = 
CDR(BgL_ll1939z00_1654); 
BgL_tail1941z00_5812 = BgL_newtail1942z00_1658; 
BgL_tail1941z00_1655 = BgL_tail1941z00_5812; 
BgL_ll1939z00_1654 = BgL_ll1939z00_5810; 
BgL_ll1938z00_1653 = BgL_ll1938z00_5808; 
goto BgL_zc3anonymousza32621ze3z83_1656;} } } } 
{ /* R5rs/syntax.scm 569 */
obj_t BgL_auxz00_5813;
{ /* R5rs/syntax.scm 569 */
bool_t BgL_testz00_5814;
if(
PAIRP(BgL_arg2619z00_1647))
{ /* R5rs/syntax.scm 569 */
BgL_testz00_5814 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 569 */
BgL_testz00_5814 = 
NULLP(BgL_arg2619z00_1647)
; } 
if(BgL_testz00_5814)
{ /* R5rs/syntax.scm 569 */
BgL_auxz00_5813 = BgL_arg2619z00_1647
; }  else 
{ 
obj_t BgL_auxz00_5818;
BgL_auxz00_5818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19712)), BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2619z00_1647); 
FAILURE(BgL_auxz00_5818,BFALSE,BFALSE);} } 
BgL_nenvz00_1617 = 
bgl_append2(BgL_auxz00_5813, BgL_envz00_38); } } 
{ /* R5rs/syntax.scm 569 */

{ /* R5rs/syntax.scm 573 */
obj_t BgL_arg2601z00_1618;obj_t BgL_arg2602z00_1619;
BgL_arg2601z00_1618 = BGl_symbol3387z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_arg2603z00_1620;obj_t BgL_arg2604z00_1621;
if(
NULLP(BgL_bindingsz00_1184))
{ /* R5rs/syntax.scm 573 */
BgL_arg2603z00_1620 = BNIL; }  else 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_head1946z00_1626;
BgL_head1946z00_1626 = 
MAKE_PAIR(BNIL, BNIL); 
{ 
obj_t BgL_ll1944z00_1628;obj_t BgL_ll1945z00_1629;obj_t BgL_tail1947z00_1630;
BgL_ll1944z00_1628 = BgL_bindingsz00_1184; 
BgL_ll1945z00_1629 = BgL_nvarsz00_1616; 
BgL_tail1947z00_1630 = BgL_head1946z00_1626; 
BgL_zc3anonymousza32607ze3z83_1631:
if(
NULLP(BgL_ll1944z00_1628))
{ /* R5rs/syntax.scm 573 */
BgL_arg2603z00_1620 = 
CDR(BgL_head1946z00_1626); }  else 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_newtail1948z00_1633;
{ /* R5rs/syntax.scm 573 */
obj_t BgL_arg2611z00_1636;
{ /* R5rs/syntax.scm 573 */
obj_t BgL_bz00_1638;obj_t BgL_vz00_1639;
{ /* R5rs/syntax.scm 573 */
obj_t BgL_pairz00_2790;
if(
PAIRP(BgL_ll1944z00_1628))
{ /* R5rs/syntax.scm 573 */
BgL_pairz00_2790 = BgL_ll1944z00_1628; }  else 
{ 
obj_t BgL_auxz00_5831;
BgL_auxz00_5831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19813)), BGl_string3591z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1944z00_1628); 
FAILURE(BgL_auxz00_5831,BFALSE,BFALSE);} 
BgL_bz00_1638 = 
CAR(BgL_pairz00_2790); } 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_pairz00_2791;
if(
PAIRP(BgL_ll1945z00_1629))
{ /* R5rs/syntax.scm 573 */
BgL_pairz00_2791 = BgL_ll1945z00_1629; }  else 
{ 
obj_t BgL_auxz00_5838;
BgL_auxz00_5838 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19813)), BGl_string3591z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_ll1945z00_1629); 
FAILURE(BgL_auxz00_5838,BFALSE,BFALSE);} 
BgL_vz00_1639 = 
CAR(BgL_pairz00_2791); } 
{ /* R5rs/syntax.scm 574 */
obj_t BgL_arg2613z00_1640;
{ /* R5rs/syntax.scm 574 */
obj_t BgL_arg2616z00_1643;
{ /* R5rs/syntax.scm 574 */
obj_t BgL_pairz00_2792;
if(
PAIRP(BgL_bz00_1638))
{ /* R5rs/syntax.scm 574 */
BgL_pairz00_2792 = BgL_bz00_1638; }  else 
{ 
obj_t BgL_auxz00_5845;
BgL_auxz00_5845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19864)), BGl_string3591z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_bz00_1638); 
FAILURE(BgL_auxz00_5845,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 574 */
obj_t BgL_pairz00_2795;
{ /* R5rs/syntax.scm 574 */
obj_t BgL_aux3238z00_3435;
BgL_aux3238z00_3435 = 
CDR(BgL_pairz00_2792); 
if(
PAIRP(BgL_aux3238z00_3435))
{ /* R5rs/syntax.scm 574 */
BgL_pairz00_2795 = BgL_aux3238z00_3435; }  else 
{ 
obj_t BgL_auxz00_5852;
BgL_auxz00_5852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19858)), BGl_string3591z00zz__r5_macro_4_3_syntaxz00, BGl_string3525z00zz__r5_macro_4_3_syntaxz00, BgL_aux3238z00_3435); 
FAILURE(BgL_auxz00_5852,BFALSE,BFALSE);} } 
BgL_arg2616z00_1643 = 
CAR(BgL_pairz00_2795); } } 
BgL_arg2613z00_1640 = 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_arg2616z00_1643, BgL_nenvz00_1617); } 
{ /* R5rs/syntax.scm 574 */
obj_t BgL_list2614z00_1641;
{ /* R5rs/syntax.scm 574 */
obj_t BgL_arg2615z00_1642;
BgL_arg2615z00_1642 = 
MAKE_PAIR(BgL_arg2613z00_1640, BNIL); 
BgL_list2614z00_1641 = 
MAKE_PAIR(BgL_vz00_1639, BgL_arg2615z00_1642); } 
BgL_arg2611z00_1636 = BgL_list2614z00_1641; } } } 
BgL_newtail1948z00_1633 = 
MAKE_PAIR(BgL_arg2611z00_1636, BNIL); } 
SET_CDR(BgL_tail1947z00_1630, BgL_newtail1948z00_1633); 
{ 
obj_t BgL_tail1947z00_5866;obj_t BgL_ll1945z00_5864;obj_t BgL_ll1944z00_5862;
BgL_ll1944z00_5862 = 
CDR(BgL_ll1944z00_1628); 
BgL_ll1945z00_5864 = 
CDR(BgL_ll1945z00_1629); 
BgL_tail1947z00_5866 = BgL_newtail1948z00_1633; 
BgL_tail1947z00_1630 = BgL_tail1947z00_5866; 
BgL_ll1945z00_1629 = BgL_ll1945z00_5864; 
BgL_ll1944z00_1628 = BgL_ll1944z00_5862; 
goto BgL_zc3anonymousza32607ze3z83_1631;} } } } 
{ /* R5rs/syntax.scm 576 */
obj_t BgL_arg2617z00_1645;
BgL_arg2617z00_1645 = 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1617, BgL_bodyz00_1185); 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_auxz00_5868;
{ /* R5rs/syntax.scm 573 */
bool_t BgL_testz00_5869;
if(
PAIRP(BgL_arg2617z00_1645))
{ /* R5rs/syntax.scm 573 */
BgL_testz00_5869 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 573 */
BgL_testz00_5869 = 
NULLP(BgL_arg2617z00_1645)
; } 
if(BgL_testz00_5869)
{ /* R5rs/syntax.scm 573 */
BgL_auxz00_5868 = BgL_arg2617z00_1645
; }  else 
{ 
obj_t BgL_auxz00_5873;
BgL_auxz00_5873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)19804)), BGl_string3588z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2617z00_1645); 
FAILURE(BgL_auxz00_5873,BFALSE,BFALSE);} } 
BgL_arg2604z00_1621 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5868, BNIL); } } 
{ /* R5rs/syntax.scm 573 */
obj_t BgL_list2605z00_1622;
BgL_list2605z00_1622 = 
MAKE_PAIR(BgL_arg2604z00_1621, BNIL); 
BgL_arg2602z00_1619 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2603z00_1620, BgL_list2605z00_1622); } } 
return 
MAKE_PAIR(BgL_arg2601z00_1618, BgL_arg2602z00_1619);} } } } }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
obj_t BgL_cdrzd21679zd2_1217;
BgL_cdrzd21679zd2_1217 = 
CDR(BgL_xz00_37); 
if(
(
CAR(BgL_xz00_37)==BGl_symbol3592z00zz__r5_macro_4_3_syntaxz00))
{ /* R5rs/syntax.scm 517 */
if(
PAIRP(BgL_cdrzd21679zd2_1217))
{ /* R5rs/syntax.scm 517 */
obj_t BgL_carzd21682zd2_1220;
BgL_carzd21682zd2_1220 = 
CAR(BgL_cdrzd21679zd2_1217); 
if(
PAIRP(BgL_carzd21682zd2_1220))
{ /* R5rs/syntax.scm 517 */
if(
NULLP(
CDR(BgL_carzd21682zd2_1220)))
{ /* R5rs/syntax.scm 517 */
BgL_varz00_1187 = 
CAR(BgL_carzd21682zd2_1220); 
BgL_bodyz00_1188 = 
CDR(BgL_cdrzd21679zd2_1217); 
{ /* R5rs/syntax.scm 578 */
obj_t BgL_nvarz00_1687;
BgL_nvarz00_1687 = 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(BgL_varz00_1187); 
{ /* R5rs/syntax.scm 578 */
obj_t BgL_nenvz00_1688;
{ /* R5rs/syntax.scm 579 */
obj_t BgL_arg2647z00_1696;
BgL_arg2647z00_1696 = 
MAKE_PAIR(BgL_varz00_1187, BgL_nvarz00_1687); 
BgL_nenvz00_1688 = 
MAKE_PAIR(BgL_arg2647z00_1696, BgL_envz00_38); } 
{ /* R5rs/syntax.scm 579 */

{ /* R5rs/syntax.scm 580 */
obj_t BgL_arg2640z00_1689;obj_t BgL_arg2641z00_1690;
BgL_arg2640z00_1689 = BGl_symbol3592z00zz__r5_macro_4_3_syntaxz00; 
{ /* R5rs/syntax.scm 580 */
obj_t BgL_arg2642z00_1691;obj_t BgL_arg2643z00_1692;
BgL_arg2642z00_1691 = 
MAKE_PAIR(BgL_nvarz00_1687, BNIL); 
{ /* R5rs/syntax.scm 580 */
obj_t BgL_arg2645z00_1694;
BgL_arg2645z00_1694 = 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_nenvz00_1688, BgL_bodyz00_1188); 
{ /* R5rs/syntax.scm 580 */
obj_t BgL_auxz00_5901;
{ /* R5rs/syntax.scm 580 */
bool_t BgL_testz00_5902;
if(
PAIRP(BgL_arg2645z00_1694))
{ /* R5rs/syntax.scm 580 */
BgL_testz00_5902 = ((bool_t)1)
; }  else 
{ /* R5rs/syntax.scm 580 */
BgL_testz00_5902 = 
NULLP(BgL_arg2645z00_1694)
; } 
if(BgL_testz00_5902)
{ /* R5rs/syntax.scm 580 */
BgL_auxz00_5901 = BgL_arg2645z00_1694
; }  else 
{ 
obj_t BgL_auxz00_5906;
BgL_auxz00_5906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)20045)), BGl_string3594z00zz__r5_macro_4_3_syntaxz00, BGl_string3258z00zz__r5_macro_4_3_syntaxz00, BgL_arg2645z00_1694); 
FAILURE(BgL_auxz00_5906,BFALSE,BFALSE);} } 
BgL_arg2643z00_1692 = 
BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_5901, BNIL); } } 
{ /* R5rs/syntax.scm 580 */
obj_t BgL_list2644z00_1693;
BgL_list2644z00_1693 = 
MAKE_PAIR(BgL_arg2643z00_1692, BNIL); 
BgL_arg2641z00_1690 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2642z00_1691, BgL_list2644z00_1693); } } 
return 
MAKE_PAIR(BgL_arg2640z00_1689, BgL_arg2641z00_1690);} } } } }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} }  else 
{ /* R5rs/syntax.scm 517 */
return 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_38, BgL_xz00_37);} } } } } } }  else 
{ /* R5rs/syntax.scm 517 */
return BgL_xz00_37;} } } } 
}



/* loop */
obj_t BGl_loopz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_envz00_3100, obj_t BgL_xz00_1698)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 590 */
if(
PAIRP(BgL_xz00_1698))
{ /* R5rs/syntax.scm 592 */
return 
MAKE_PAIR(
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(
CAR(BgL_xz00_1698), BgL_envz00_3100), 
BGl_loopz00zz__r5_macro_4_3_syntaxz00(BgL_envz00_3100, 
CDR(BgL_xz00_1698)));}  else 
{ /* R5rs/syntax.scm 592 */
if(
NULLP(BgL_xz00_1698))
{ /* R5rs/syntax.scm 594 */
return BNIL;}  else 
{ /* R5rs/syntax.scm 594 */
return 
BGl_hygieniza7eza7zz__r5_macro_4_3_syntaxz00(BgL_xz00_1698, BgL_envz00_3100);} } } 
}



/* flatten */
obj_t BGl_flattenz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_41)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 602 */
if(
PAIRP(BgL_lz00_41))
{ /* R5rs/syntax.scm 604 */
return 
MAKE_PAIR(
CAR(BgL_lz00_41), 
BGl_flattenz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_lz00_41)));}  else 
{ /* R5rs/syntax.scm 604 */
if(
NULLP(BgL_lz00_41))
{ /* R5rs/syntax.scm 605 */
return BgL_lz00_41;}  else 
{ /* R5rs/syntax.scm 606 */
obj_t BgL_list2662z00_1712;
BgL_list2662z00_1712 = 
MAKE_PAIR(BgL_lz00_41, BNIL); 
return BgL_list2662z00_1712;} } } 
}



/* genvars */
obj_t BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_42)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 611 */
if(
PAIRP(BgL_lz00_42))
{ /* R5rs/syntax.scm 621 */
return 
MAKE_PAIR(
BGl_gennamez00zz__r5_macro_4_3_syntaxz00(
CAR(BgL_lz00_42)), 
BGl_genvarsz00zz__r5_macro_4_3_syntaxz00(
CDR(BgL_lz00_42)));}  else 
{ /* R5rs/syntax.scm 621 */
if(
NULLP(BgL_lz00_42))
{ /* R5rs/syntax.scm 622 */
return BgL_lz00_42;}  else 
{ /* R5rs/syntax.scm 622 */
return 
BGl_gennamez00zz__r5_macro_4_3_syntaxz00(BgL_lz00_42);} } } 
}



/* genname */
obj_t BGl_gennamez00zz__r5_macro_4_3_syntaxz00(obj_t BgL_lz00_1720)
{ AN_OBJECT;
{ /* R5rs/syntax.scm 619 */
{ 

if(
SYMBOLP(BgL_lz00_1720))
{ /* R5rs/syntax.scm 619 */
{ /* R5rs/syntax.scm 615 */
bool_t BgL_testz00_5951;
{ /* R5rs/syntax.scm 615 */
obj_t BgL_sz00_2821;
{ /* R5rs/syntax.scm 615 */
obj_t BgL_res2908z00_2824;
{ /* R5rs/syntax.scm 615 */
obj_t BgL_symbolz00_2822;
if(
SYMBOLP(BgL_lz00_1720))
{ /* R5rs/syntax.scm 615 */
BgL_symbolz00_2822 = BgL_lz00_1720; }  else 
{ 
obj_t BgL_auxz00_5954;
BgL_auxz00_5954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3252z00zz__r5_macro_4_3_syntaxz00, 
BINT(((long)21215)), BGl_string3595z00zz__r5_macro_4_3_syntaxz00, BGl_string3254z00zz__r5_macro_4_3_syntaxz00, BgL_lz00_1720); 
FAILURE(BgL_auxz00_5954,BFALSE,BFALSE);} 
{ /* R5rs/syntax.scm 615 */
obj_t BgL_arg2783z00_2823;
BgL_arg2783z00_2823 = 
SYMBOL_TO_STRING(BgL_symbolz00_2822); 
BgL_res2908z00_2824 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2783z00_2823); } } 
BgL_sz00_2821 = BgL_res2908z00_2824; } 
BgL_testz00_5951 = 
bigloo_strcmp_at(BgL_sz00_2821, BGl_hygienezd2prefixzd2zz__r5_macro_4_3_syntaxz00, ((long)0)); } 
if(BgL_testz00_5951)
{ /* R5rs/syntax.scm 615 */
return 
BGl_hygienezd2valuezd2zz__r5_macro_4_3_syntaxz00(BgL_lz00_1720);}  else 
{ /* R5rs/syntax.scm 615 */
return 
BGl_gensymz00zz__r4_symbols_6_4z00(BgL_lz00_1720);} } }  else 
{ /* R5rs/syntax.scm 619 */

{ /* R5rs/syntax.scm 619 */

return 
BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);} } } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 17 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 17 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r5_macro_4_3_syntaxz00()
{ AN_OBJECT;
{ /* R5rs/syntax.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3596z00zz__r5_macro_4_3_syntaxz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string3596z00zz__r5_macro_4_3_syntaxz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string3596z00zz__r5_macro_4_3_syntaxz00));} 
}

#ifdef __cplusplus
}
#endif
