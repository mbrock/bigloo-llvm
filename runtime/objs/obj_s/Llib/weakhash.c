/*===========================================================================*/
/*   (Llib/weakhash.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/weakhash.scm -indent -o objs/obj_s/Llib/weakhash.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_list3615z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3637z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3642z00zz__weakhashz00 = BUNSPEC;
extern long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
static obj_t BGl_list3647z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32093ze3z83zz__weakhashz00(obj_t, obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32095ze3z83zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_keepgoingz00zz__weakhashz00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_zc3anonymousza32107ze3z83zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t);
static obj_t BGl_zc3anonymousza32112ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__weakhashz00();
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32133ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__weakhashz00();
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32138ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00();
static obj_t BGl_symbol3552z00zz__weakhashz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3565z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3567z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3569z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3571z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3574z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3576z00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_symbol3580z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3582z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3600z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3610z00zz__weakhashz00 = BUNSPEC;
static bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_symbol3616z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3618z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3620z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3638z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3643z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_removez00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3645z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3648z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_symbol3650z00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t, obj_t);
extern obj_t weakptr_data(obj_t);
static obj_t BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_zc3anonymousza32161ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t make_weakptr(obj_t);
static obj_t BGl_toplevelzd2initzd2zz__weakhashz00();
static obj_t BGl_removestopz00zz__weakhashz00 = BUNSPEC;
static obj_t BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t, obj_t);
extern long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
extern bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
extern obj_t make_vector(int, obj_t);
static obj_t BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32181ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32204ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, int);
static obj_t BGl_zc3anonymousza32212ze3z83zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t, obj_t);
extern bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
static obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t, obj_t, long, obj_t);
static obj_t BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
static obj_t BGl_list3564z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3573z00zz__weakhashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__weakhashz00();
static obj_t BGl_list3578z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3579z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32086ze3z83zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_list3609z00zz__weakhashz00 = BUNSPEC;
static obj_t BGl_list3599z00zz__weakhashz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2keyzd2listzd2envz00zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3676za7, BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2forzd2eachzd2envz00zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3677za7, BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2updatez12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3678za7, BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2ze3listzd2envz31zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3679za7, BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2mapzd2envzd2zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3680za7, BGl__weakzd2hashtablezd2mapz00zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2ze3vectorzd2envz31zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3681za7, BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2removez12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3682za7, BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2filterz12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3683za7, BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2addz12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3684za7, BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2getzd2envzd2zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3685za7, BGl__weakzd2hashtablezd2getz00zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2expandz12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3686za7, BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2containszf3zd2envz21zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3687za7, BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakzd2hashtablezd2putz12zd2envzc0zz__weakhashz00, BgL_bgl__weakza7d2hashtabl3688za7, BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3550z00zz__weakhashz00, BgL_bgl_string3550za700za7za7_3689za7, "traverse-buckets", 16 );
DEFINE_STRING( BGl_string3549z00zz__weakhashz00, BgL_bgl_string3549za700za7za7_3690za7, "/tmp/bigloo/runtime/Llib/weakhash.scm", 37 );
DEFINE_STRING( BGl_string3551z00zz__weakhashz00, BgL_bgl_string3551za700za7za7_3691za7, "symbol", 6 );
DEFINE_STRING( BGl_string3553z00zz__weakhashz00, BgL_bgl_string3553za700za7za7_3692za7, "%hashtable", 10 );
DEFINE_STRING( BGl_string3554z00zz__weakhashz00, BgL_bgl_string3554za700za7za7_3693za7, "struct-ref:not an instance of", 29 );
DEFINE_STRING( BGl_string3555z00zz__weakhashz00, BgL_bgl_string3555za700za7za7_3694za7, "long", 4 );
DEFINE_STRING( BGl_string3556z00zz__weakhashz00, BgL_bgl_string3556za700za7za7_3695za7, "vector", 6 );
DEFINE_STRING( BGl_string3557z00zz__weakhashz00, BgL_bgl_string3557za700za7za7_3696za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string3558z00zz__weakhashz00, BgL_bgl_string3558za700za7za7_3697za7, "liip", 4 );
DEFINE_STRING( BGl_string3560z00zz__weakhashz00, BgL_bgl_string3560za700za7za7_3698za7, "weakptr", 7 );
DEFINE_STRING( BGl_string3559z00zz__weakhashz00, BgL_bgl_string3559za700za7za7_3699za7, "pair", 4 );
DEFINE_STRING( BGl_string3561z00zz__weakhashz00, BgL_bgl_string3561za700za7za7_3700za7, "struct-set!:not an instance of", 30 );
DEFINE_STRING( BGl_string3562z00zz__weakhashz00, BgL_bgl_string3562za700za7za7_3701za7, "traverse-hash", 13 );
DEFINE_STRING( BGl_string3563z00zz__weakhashz00, BgL_bgl_string3563za700za7za7_3702za7, "liip:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3566z00zz__weakhashz00, BgL_bgl_string3566za700za7za7_3703za7, "funcall", 7 );
DEFINE_STRING( BGl_string3568z00zz__weakhashz00, BgL_bgl_string3568za700za7za7_3704za7, "fun", 3 );
DEFINE_STRING( BGl_string3570z00zz__weakhashz00, BgL_bgl_string3570za700za7za7_3705za7, "key", 3 );
DEFINE_STRING( BGl_string3572z00zz__weakhashz00, BgL_bgl_string3572za700za7za7_3706za7, "arg2036", 7 );
DEFINE_STRING( BGl_string3575z00zz__weakhashz00, BgL_bgl_string3575za700za7za7_3707za7, "arg2048", 7 );
DEFINE_STRING( BGl_string3577z00zz__weakhashz00, BgL_bgl_string3577za700za7za7_3708za7, "data", 4 );
DEFINE_STRING( BGl_string3581z00zz__weakhashz00, BgL_bgl_string3581za700za7za7_3709za7, "arg2076", 7 );
DEFINE_STRING( BGl_string3583z00zz__weakhashz00, BgL_bgl_string3583za700za7za7_3710za7, "arg2077", 7 );
DEFINE_STRING( BGl_string3584z00zz__weakhashz00, BgL_bgl_string3584za700za7za7_3711za7, "weak-hashtable->vector", 22 );
DEFINE_STRING( BGl_string3585z00zz__weakhashz00, BgL_bgl_string3585za700za7za7_3712za7, "int", 3 );
DEFINE_STRING( BGl_string3586z00zz__weakhashz00, BgL_bgl_string3586za700za7za7_3713za7, "_weak-hashtable->vector", 23 );
DEFINE_STRING( BGl_string3587z00zz__weakhashz00, BgL_bgl_string3587za700za7za7_3714za7, "struct", 6 );
DEFINE_STRING( BGl_string3588z00zz__weakhashz00, BgL_bgl_string3588za700za7za7_3715za7, "<anonymous:2086>", 16 );
DEFINE_STRING( BGl_string3590z00zz__weakhashz00, BgL_bgl_string3590za700za7za7_3716za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3589z00zz__weakhashz00, BgL_bgl_string3589za700za7za7_3717za7, "weak-hashtable->list", 20 );
DEFINE_STRING( BGl_string3601z00zz__weakhashz00, BgL_bgl_string3601za700za7za7_3718za7, "val", 3 );
DEFINE_STRING( BGl_string3591z00zz__weakhashz00, BgL_bgl_string3591za700za7za7_3719za7, "_weak-hashtable->list", 21 );
DEFINE_STRING( BGl_string3602z00zz__weakhashz00, BgL_bgl_string3602za700za7za7_3720za7, "_weak-hashtable-for-each", 24 );
DEFINE_STRING( BGl_string3592z00zz__weakhashz00, BgL_bgl_string3592za700za7za7_3721za7, "weak-hashtable-key-list", 23 );
DEFINE_STRING( BGl_string3603z00zz__weakhashz00, BgL_bgl_string3603za700za7za7_3722za7, "weak-hashtable-filter!", 22 );
DEFINE_STRING( BGl_string3593z00zz__weakhashz00, BgL_bgl_string3593za700za7za7_3723za7, "_weak-hashtable-key-list", 24 );
DEFINE_STRING( BGl_string3604z00zz__weakhashz00, BgL_bgl_string3604za700za7za7_3724za7, "_weak-hashtable-filter!", 23 );
DEFINE_STRING( BGl_string3594z00zz__weakhashz00, BgL_bgl_string3594za700za7za7_3725za7, "weak-hashtable-map", 18 );
DEFINE_STRING( BGl_string3605z00zz__weakhashz00, BgL_bgl_string3605za700za7za7_3726za7, "<anonymous:2112>", 16 );
DEFINE_STRING( BGl_string3595z00zz__weakhashz00, BgL_bgl_string3595za700za7za7_3727za7, "_weak-hashtable-map", 19 );
DEFINE_STRING( BGl_string3606z00zz__weakhashz00, BgL_bgl_string3606za700za7za7_3728za7, "<anonymous:2112>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3596z00zz__weakhashz00, BgL_bgl_string3596za700za7za7_3729za7, "procedure", 9 );
DEFINE_STRING( BGl_string3607z00zz__weakhashz00, BgL_bgl_string3607za700za7za7_3730za7, "weak-hashtable-contains?", 24 );
DEFINE_STRING( BGl_string3597z00zz__weakhashz00, BgL_bgl_string3597za700za7za7_3731za7, "<anonymous:2107>", 16 );
DEFINE_STRING( BGl_string3608z00zz__weakhashz00, BgL_bgl_string3608za700za7za7_3732za7, "weak-hashtable-contains?:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string3598z00zz__weakhashz00, BgL_bgl_string3598za700za7za7_3733za7, "<anonymous:2107>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3611z00zz__weakhashz00, BgL_bgl_string3611za700za7za7_3734za7, "hashn", 5 );
DEFINE_STRING( BGl_string3612z00zz__weakhashz00, BgL_bgl_string3612za700za7za7_3735za7, "_weak-hashtable-contains?", 25 );
DEFINE_STRING( BGl_string3613z00zz__weakhashz00, BgL_bgl_string3613za700za7za7_3736za7, "<anonymous:2133>", 16 );
DEFINE_STRING( BGl_string3614z00zz__weakhashz00, BgL_bgl_string3614za700za7za7_3737za7, "<anonymous:2133>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3617z00zz__weakhashz00, BgL_bgl_string3617za700za7za7_3738za7, "eqt", 3 );
DEFINE_STRING( BGl_string3619z00zz__weakhashz00, BgL_bgl_string3619za700za7za7_3739za7, "obj1", 4 );
DEFINE_STRING( BGl_string3621z00zz__weakhashz00, BgL_bgl_string3621za700za7za7_3740za7, "obj2", 4 );
DEFINE_STRING( BGl_string3622z00zz__weakhashz00, BgL_bgl_string3622za700za7za7_3741za7, "weak-hashtable-get", 18 );
DEFINE_STRING( BGl_string3623z00zz__weakhashz00, BgL_bgl_string3623za700za7za7_3742za7, "weak-hashtable-get:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string3624z00zz__weakhashz00, BgL_bgl_string3624za700za7za7_3743za7, "_weak-hashtable-get", 19 );
DEFINE_STRING( BGl_string3625z00zz__weakhashz00, BgL_bgl_string3625za700za7za7_3744za7, "<anonymous:2138>", 16 );
DEFINE_STRING( BGl_string3626z00zz__weakhashz00, BgL_bgl_string3626za700za7za7_3745za7, "<anonymous:2138>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3627z00zz__weakhashz00, BgL_bgl_string3627za700za7za7_3746za7, "weak-hashtable-put!", 19 );
DEFINE_STRING( BGl_string3628z00zz__weakhashz00, BgL_bgl_string3628za700za7za7_3747za7, "weak-hashtable-put!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3630z00zz__weakhashz00, BgL_bgl_string3630za700za7za7_3748za7, "<anonymous:2161>", 16 );
DEFINE_STRING( BGl_string3629z00zz__weakhashz00, BgL_bgl_string3629za700za7za7_3749za7, "_weak-hashtable-put!", 20 );
DEFINE_STRING( BGl_string3631z00zz__weakhashz00, BgL_bgl_string3631za700za7za7_3750za7, "<anonymous:2161>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3632z00zz__weakhashz00, BgL_bgl_string3632za700za7za7_3751za7, "weak-hashtable-update!", 22 );
DEFINE_STRING( BGl_string3633z00zz__weakhashz00, BgL_bgl_string3633za700za7za7_3752za7, "weak-hashtable-update!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3634z00zz__weakhashz00, BgL_bgl_string3634za700za7za7_3753za7, "_weak-hashtable-update!", 23 );
DEFINE_STRING( BGl_string3635z00zz__weakhashz00, BgL_bgl_string3635za700za7za7_3754za7, "<anonymous:2181>", 16 );
DEFINE_STRING( BGl_string3636z00zz__weakhashz00, BgL_bgl_string3636za700za7za7_3755za7, "<anonymous:2181>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3640z00zz__weakhashz00, BgL_bgl_string3640za700za7za7_3756za7, "weak-hashtable-add!", 19 );
DEFINE_STRING( BGl_string3639z00zz__weakhashz00, BgL_bgl_string3639za700za7za7_3757za7, "proc", 4 );
DEFINE_STRING( BGl_string3641z00zz__weakhashz00, BgL_bgl_string3641za700za7za7_3758za7, "weak-hashtable-add!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3644z00zz__weakhashz00, BgL_bgl_string3644za700za7za7_3759za7, "arg2199", 7 );
DEFINE_STRING( BGl_string3646z00zz__weakhashz00, BgL_bgl_string3646za700za7za7_3760za7, "arg2200", 7 );
DEFINE_STRING( BGl_string3649z00zz__weakhashz00, BgL_bgl_string3649za700za7za7_3761za7, "obj", 3 );
DEFINE_STRING( BGl_string3651z00zz__weakhashz00, BgL_bgl_string3651za700za7za7_3762za7, "init", 4 );
DEFINE_STRING( BGl_string3652z00zz__weakhashz00, BgL_bgl_string3652za700za7za7_3763za7, "_weak-hashtable-add!", 20 );
DEFINE_STRING( BGl_string3653z00zz__weakhashz00, BgL_bgl_string3653za700za7za7_3764za7, "<anonymous:2204>", 16 );
DEFINE_STRING( BGl_string3654z00zz__weakhashz00, BgL_bgl_string3654za700za7za7_3765za7, "<anonymous:2204>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3655z00zz__weakhashz00, BgL_bgl_string3655za700za7za7_3766za7, "weak-hashtable-remove!", 22 );
DEFINE_STRING( BGl_string3656z00zz__weakhashz00, BgL_bgl_string3656za700za7za7_3767za7, "weak-hashtable-remove!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3657z00zz__weakhashz00, BgL_bgl_string3657za700za7za7_3768za7, "_weak-hashtable-remove!", 23 );
DEFINE_STRING( BGl_string3658z00zz__weakhashz00, BgL_bgl_string3658za700za7za7_3769za7, "<anonymous:2212>", 16 );
DEFINE_STRING( BGl_string3660z00zz__weakhashz00, BgL_bgl_string3660za700za7za7_3770za7, "weak-hashtable-expand!", 22 );
DEFINE_STRING( BGl_string3659z00zz__weakhashz00, BgL_bgl_string3659za700za7za7_3771za7, "<anonymous:2212>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3661z00zz__weakhashz00, BgL_bgl_string3661za700za7za7_3772za7, "<anonymous:2218>", 16 );
DEFINE_STRING( BGl_string3662z00zz__weakhashz00, BgL_bgl_string3662za700za7za7_3773za7, "<anonymous:2218>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3663z00zz__weakhashz00, BgL_bgl_string3663za700za7za7_3774za7, "for-each", 8 );
DEFINE_STRING( BGl_string3664z00zz__weakhashz00, BgL_bgl_string3664za700za7za7_3775za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string3665z00zz__weakhashz00, BgL_bgl_string3665za700za7za7_3776za7, "<anonymous:2237>", 16 );
DEFINE_STRING( BGl_string3666z00zz__weakhashz00, BgL_bgl_string3666za700za7za7_3777za7, "<anonymous:2237>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3667z00zz__weakhashz00, BgL_bgl_string3667za700za7za7_3778za7, "<anonymous:2252>", 16 );
DEFINE_STRING( BGl_string3668z00zz__weakhashz00, BgL_bgl_string3668za700za7za7_3779za7, "<anonymous:2252>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3670z00zz__weakhashz00, BgL_bgl_string3670za700za7za7_3780za7, "<anonymous:2267>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3669z00zz__weakhashz00, BgL_bgl_string3669za700za7za7_3781za7, "<anonymous:2267>", 16 );
DEFINE_STRING( BGl_string3671z00zz__weakhashz00, BgL_bgl_string3671za700za7za7_3782za7, "_weak-hashtable-expand!", 23 );
DEFINE_STRING( BGl_string3672z00zz__weakhashz00, BgL_bgl_string3672za700za7za7_3783za7, "__weakhash", 10 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long BgL_checksumz00_4588, char * BgL_fromz00_4589)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__weakhashz00))
{ 
BGl_requirezd2initializa7ationz75zz__weakhashz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__weakhashz00(); 
BGl_importedzd2moduleszd2initz00zz__weakhashz00(); 
BGl_toplevelzd2initzd2zz__weakhashz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__weakhashz00()
{ AN_OBJECT;
{ /* Llib/weakhash.scm 18 */
BGl_symbol3552z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3553z00zz__weakhashz00); 
BGl_symbol3565z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3566z00zz__weakhashz00); 
BGl_symbol3567z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3568z00zz__weakhashz00); 
BGl_symbol3569z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3570z00zz__weakhashz00); 
BGl_symbol3571z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3572z00zz__weakhashz00); 
BGl_list3564z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3569z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3571z00zz__weakhashz00, BNIL))))); 
BGl_symbol3574z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3575z00zz__weakhashz00); 
BGl_symbol3576z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3577z00zz__weakhashz00); 
BGl_list3573z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3574z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3576z00zz__weakhashz00, BNIL))))); 
BGl_list3578z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3569z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3576z00zz__weakhashz00, BNIL))))); 
BGl_symbol3580z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3581z00zz__weakhashz00); 
BGl_symbol3582z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3583z00zz__weakhashz00); 
BGl_list3579z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3580z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3582z00zz__weakhashz00, BNIL))))); 
BGl_symbol3600z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3601z00zz__weakhashz00); 
BGl_list3599z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3567z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3569z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3600z00zz__weakhashz00, BNIL))))); 
BGl_symbol3610z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3611z00zz__weakhashz00); 
BGl_list3609z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3610z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3610z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3569z00zz__weakhashz00, BNIL)))); 
BGl_symbol3616z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3617z00zz__weakhashz00); 
BGl_symbol3618z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3619z00zz__weakhashz00); 
BGl_symbol3620z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3621z00zz__weakhashz00); 
BGl_list3615z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3616z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3616z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3618z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3620z00zz__weakhashz00, BNIL))))); 
BGl_symbol3638z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3639z00zz__weakhashz00); 
BGl_list3637z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3600z00zz__weakhashz00, BNIL)))); 
BGl_symbol3643z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3644z00zz__weakhashz00); 
BGl_symbol3645z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3646z00zz__weakhashz00); 
BGl_list3642z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3643z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3645z00zz__weakhashz00, BNIL))))); 
BGl_symbol3648z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3649z00zz__weakhashz00); 
BGl_symbol3650z00zz__weakhashz00 = 
bstring_to_symbol(BGl_string3651z00zz__weakhashz00); 
return ( 
BGl_list3647z00zz__weakhashz00 = 
MAKE_PAIR(BGl_symbol3565z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3638z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3648z00zz__weakhashz00, 
MAKE_PAIR(BGl_symbol3650z00zz__weakhashz00, BNIL))))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__weakhashz00()
{ AN_OBJECT;
{ /* Llib/weakhash.scm 18 */
BGl_keepgoingz00zz__weakhashz00 = 
MAKE_PAIR(BUNSPEC, BUNSPEC); 
BGl_removez00zz__weakhashz00 = 
MAKE_PAIR(BUNSPEC, BUNSPEC); 
return ( 
BGl_removestopz00zz__weakhashz00 = 
MAKE_PAIR(BUNSPEC, BUNSPEC), BUNSPEC) ;} 
}



/* traverse-buckets */
obj_t BGl_traversezd2bucketszd2zz__weakhashz00(obj_t BgL_tablez00_37, obj_t BgL_bucketsz00_38, long BgL_iz00_39, obj_t BgL_funz00_40)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 131 */
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4666;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg2025z00_1003;
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4667;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4668;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_res2548z00_2019;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_aux2837z00_3834;
BgL_aux2837z00_3834 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2837z00_3834))
{ /* Llib/weakhash.scm 138 */
BgL_res2548z00_2019 = BgL_aux2837z00_3834; }  else 
{ 
obj_t BgL_auxz00_4672;
BgL_auxz00_4672 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5367)), BGl_string3550z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2837z00_3834); 
FAILURE(BgL_auxz00_4672,BFALSE,BFALSE);} } 
BgL_auxz00_4668 = BgL_res2548z00_2019; } 
BgL_testz00_4667 = 
(BgL_auxz00_4668==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4667)
{ /* Llib/weakhash.scm 138 */
int BgL_auxz00_4677;
BgL_auxz00_4677 = 
(int)(((long)5)); 
BgL_arg2025z00_1003 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_4677); }  else 
{ /* Llib/weakhash.scm 138 */
BgL_arg2025z00_1003 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 138 */
long BgL_n2z00_2021;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4681;
if(
INTEGERP(BgL_arg2025z00_1003))
{ /* Llib/weakhash.scm 138 */
BgL_auxz00_4681 = BgL_arg2025z00_1003
; }  else 
{ 
obj_t BgL_auxz00_4684;
BgL_auxz00_4684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5389)), BGl_string3550z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2025z00_1003); 
FAILURE(BgL_auxz00_4684,BFALSE,BFALSE);} 
BgL_n2z00_2021 = 
(long)CINT(BgL_auxz00_4681); } 
BgL_testz00_4666 = 
(((long)1)==BgL_n2z00_2021); } } 
if(BgL_testz00_4666)
{ /* Llib/weakhash.scm 138 */
obj_t BgL_g1839z00_928;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_vectorz00_2022;int BgL_kz00_2023;
if(
VECTORP(BgL_bucketsz00_38))
{ /* Llib/weakhash.scm 138 */
BgL_vectorz00_2022 = BgL_bucketsz00_38; }  else 
{ 
obj_t BgL_auxz00_4692;
BgL_auxz00_4692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3550z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_38); 
FAILURE(BgL_auxz00_4692,BFALSE,BFALSE);} 
BgL_kz00_2023 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 138 */
int BgL_l2667z00_3663;
BgL_l2667z00_3663 = 
VECTOR_LENGTH(BgL_vectorz00_2022); 
if(
BOUND_CHECK(BgL_kz00_2023, BgL_l2667z00_3663))
{ /* Llib/weakhash.scm 138 */
BgL_g1839z00_928 = 
VECTOR_REF(BgL_vectorz00_2022,BgL_kz00_2023); }  else 
{ 
obj_t BgL_auxz00_4701;
BgL_auxz00_4701 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2023), BgL_vectorz00_2022); 
FAILURE(BgL_auxz00_4701,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_930;obj_t BgL_lastzd2bucketzd2_931;
BgL_bucketz00_930 = BgL_g1839z00_928; 
BgL_lastzd2bucketzd2_931 = BFALSE; 
BgL_zc3anonymousza31975ze3z83_932:
if(
NULLP(BgL_bucketz00_930))
{ /* Llib/weakhash.scm 138 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 140 */
obj_t BgL_retz00_934;
{ /* Llib/weakhash.scm 140 */
obj_t BgL_keyz00_940;
{ /* Llib/weakhash.scm 140 */
obj_t BgL_arg1985z00_943;
{ /* Llib/weakhash.scm 140 */
obj_t BgL_pairz00_2025;
if(
PAIRP(BgL_bucketz00_930))
{ /* Llib/weakhash.scm 140 */
BgL_pairz00_2025 = BgL_bucketz00_930; }  else 
{ 
obj_t BgL_auxz00_4710;
BgL_auxz00_4710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5447)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_930); 
FAILURE(BgL_auxz00_4710,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 140 */
obj_t BgL_pairz00_2028;
{ /* Llib/weakhash.scm 140 */
obj_t BgL_aux2845z00_3842;
BgL_aux2845z00_3842 = 
CAR(BgL_pairz00_2025); 
if(
PAIRP(BgL_aux2845z00_3842))
{ /* Llib/weakhash.scm 140 */
BgL_pairz00_2028 = BgL_aux2845z00_3842; }  else 
{ 
obj_t BgL_auxz00_4717;
BgL_auxz00_4717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5441)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2845z00_3842); 
FAILURE(BgL_auxz00_4717,BFALSE,BFALSE);} } 
BgL_arg1985z00_943 = 
CAR(BgL_pairz00_2028); } } 
{ /* Llib/weakhash.scm 140 */
obj_t BgL_objz00_2029;
if(
BGL_WEAKPTRP(BgL_arg1985z00_943))
{ /* Llib/weakhash.scm 140 */
BgL_objz00_2029 = BgL_arg1985z00_943; }  else 
{ 
obj_t BgL_auxz00_4724;
BgL_auxz00_4724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5453)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg1985z00_943); 
FAILURE(BgL_auxz00_4724,BFALSE,BFALSE);} 
BgL_keyz00_940 = 
weakptr_data(BgL_objz00_2029); } } 
if(
(BgL_keyz00_940==BUNSPEC))
{ /* Llib/weakhash.scm 141 */
BgL_retz00_934 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 143 */
obj_t BgL_arg1984z00_942;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_pairz00_2030;
BgL_pairz00_2030 = BgL_bucketz00_930; 
{ /* Llib/weakhash.scm 143 */
obj_t BgL_pairz00_2033;
{ /* Llib/weakhash.scm 143 */
obj_t BgL_aux2851z00_3848;
BgL_aux2851z00_3848 = 
CAR(BgL_pairz00_2030); 
if(
PAIRP(BgL_aux2851z00_3848))
{ /* Llib/weakhash.scm 143 */
BgL_pairz00_2033 = BgL_aux2851z00_3848; }  else 
{ 
obj_t BgL_auxz00_4734;
BgL_auxz00_4734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5527)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2851z00_3848); 
FAILURE(BgL_auxz00_4734,BFALSE,BFALSE);} } 
BgL_arg1984z00_942 = 
CDR(BgL_pairz00_2033); } } 
BgL_retz00_934 = 
PROCEDURE_L_ENTRY(BgL_funz00_40)(BgL_funz00_40, BgL_keyz00_940, BgL_arg1984z00_942, BgL_bucketz00_930); } } 
if(
(BgL_retz00_934==BGl_keepgoingz00zz__weakhashz00))
{ 
obj_t BgL_lastzd2bucketzd2_4745;obj_t BgL_bucketz00_4743;
BgL_bucketz00_4743 = 
CDR(BgL_bucketz00_930); 
BgL_lastzd2bucketzd2_4745 = BgL_bucketz00_930; 
BgL_lastzd2bucketzd2_931 = BgL_lastzd2bucketzd2_4745; 
BgL_bucketz00_930 = BgL_bucketz00_4743; 
goto BgL_zc3anonymousza31975ze3z83_932;}  else 
{ /* Llib/weakhash.scm 138 */
if(
(BgL_retz00_934==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 138 */
{ /* Llib/weakhash.scm 138 */
long BgL_arg1969z00_2040;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1970z00_2041;
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4748;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4749;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_res2549z00_2050;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_aux2855z00_3852;
BgL_aux2855z00_3852 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2855z00_3852))
{ /* Llib/weakhash.scm 138 */
BgL_res2549z00_2050 = BgL_aux2855z00_3852; }  else 
{ 
obj_t BgL_auxz00_4753;
BgL_auxz00_4753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2855z00_3852); 
FAILURE(BgL_auxz00_4753,BFALSE,BFALSE);} } 
BgL_auxz00_4749 = BgL_res2549z00_2050; } 
BgL_testz00_4748 = 
(BgL_auxz00_4749==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4748)
{ /* Llib/weakhash.scm 138 */
int BgL_auxz00_4758;
BgL_auxz00_4758 = 
(int)(((long)0)); 
BgL_arg1970z00_2041 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_4758); }  else 
{ /* Llib/weakhash.scm 138 */
BgL_arg1970z00_2041 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 138 */
long BgL_za71za7_2051;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4762;
if(
INTEGERP(BgL_arg1970z00_2041))
{ /* Llib/weakhash.scm 138 */
BgL_auxz00_4762 = BgL_arg1970z00_2041
; }  else 
{ 
obj_t BgL_auxz00_4765;
BgL_auxz00_4765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2041); 
FAILURE(BgL_auxz00_4765,BFALSE,BFALSE);} 
BgL_za71za7_2051 = 
(long)CINT(BgL_auxz00_4762); } 
BgL_arg1969z00_2040 = 
(BgL_za71za7_2051-((long)1)); } } 
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4771;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4772;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_res2550z00_2059;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_aux2859z00_3856;
BgL_aux2859z00_3856 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2859z00_3856))
{ /* Llib/weakhash.scm 138 */
BgL_res2550z00_2059 = BgL_aux2859z00_3856; }  else 
{ 
obj_t BgL_auxz00_4776;
BgL_auxz00_4776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2859z00_3856); 
FAILURE(BgL_auxz00_4776,BFALSE,BFALSE);} } 
BgL_auxz00_4772 = BgL_res2550z00_2059; } 
BgL_testz00_4771 = 
(BgL_auxz00_4772==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4771)
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4783;int BgL_auxz00_4781;
BgL_auxz00_4783 = 
BINT(BgL_arg1969z00_2040); 
BgL_auxz00_4781 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_4781, BgL_auxz00_4783); }  else 
{ /* Llib/weakhash.scm 138 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_931))
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1972z00_2043;
BgL_arg1972z00_2043 = 
CDR(BgL_bucketz00_930); 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_pairz00_2061;
if(
PAIRP(BgL_lastzd2bucketzd2_931))
{ /* Llib/weakhash.scm 138 */
BgL_pairz00_2061 = BgL_lastzd2bucketzd2_931; }  else 
{ 
obj_t BgL_auxz00_4792;
BgL_auxz00_4792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_931); 
FAILURE(BgL_auxz00_4792,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2061, BgL_arg1972z00_2043); } }  else 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1973z00_2044;
BgL_arg1973z00_2044 = 
CDR(BgL_bucketz00_930); 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_vectorz00_2064;int BgL_kz00_2065;
BgL_vectorz00_2064 = BgL_bucketsz00_38; 
BgL_kz00_2065 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 138 */
int BgL_l2671z00_3667;
BgL_l2671z00_3667 = 
VECTOR_LENGTH(BgL_vectorz00_2064); 
if(
BOUND_CHECK(BgL_kz00_2065, BgL_l2671z00_3667))
{ /* Llib/weakhash.scm 138 */
VECTOR_SET(BgL_vectorz00_2064,BgL_kz00_2065,BgL_arg1973z00_2044); }  else 
{ 
obj_t BgL_auxz00_4803;
BgL_auxz00_4803 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2065), BgL_vectorz00_2064); 
FAILURE(BgL_auxz00_4803,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_4808;
BgL_bucketz00_4808 = 
CDR(BgL_bucketz00_930); 
BgL_bucketz00_930 = BgL_bucketz00_4808; 
goto BgL_zc3anonymousza31975ze3z83_932;} }  else 
{ /* Llib/weakhash.scm 138 */
if(
(BgL_retz00_934==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 138 */
{ /* Llib/weakhash.scm 138 */
long BgL_arg1969z00_2073;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1970z00_2074;
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4812;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4813;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_res2551z00_2083;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_aux2871z00_3868;
BgL_aux2871z00_3868 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2871z00_3868))
{ /* Llib/weakhash.scm 138 */
BgL_res2551z00_2083 = BgL_aux2871z00_3868; }  else 
{ 
obj_t BgL_auxz00_4817;
BgL_auxz00_4817 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2871z00_3868); 
FAILURE(BgL_auxz00_4817,BFALSE,BFALSE);} } 
BgL_auxz00_4813 = BgL_res2551z00_2083; } 
BgL_testz00_4812 = 
(BgL_auxz00_4813==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4812)
{ /* Llib/weakhash.scm 138 */
int BgL_auxz00_4822;
BgL_auxz00_4822 = 
(int)(((long)0)); 
BgL_arg1970z00_2074 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_4822); }  else 
{ /* Llib/weakhash.scm 138 */
BgL_arg1970z00_2074 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 138 */
long BgL_za71za7_2084;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4826;
if(
INTEGERP(BgL_arg1970z00_2074))
{ /* Llib/weakhash.scm 138 */
BgL_auxz00_4826 = BgL_arg1970z00_2074
; }  else 
{ 
obj_t BgL_auxz00_4829;
BgL_auxz00_4829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2074); 
FAILURE(BgL_auxz00_4829,BFALSE,BFALSE);} 
BgL_za71za7_2084 = 
(long)CINT(BgL_auxz00_4826); } 
BgL_arg1969z00_2073 = 
(BgL_za71za7_2084-((long)1)); } } 
{ /* Llib/weakhash.scm 138 */
bool_t BgL_testz00_4835;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4836;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_res2552z00_2092;
{ /* Llib/weakhash.scm 138 */
obj_t BgL_aux2875z00_3872;
BgL_aux2875z00_3872 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2875z00_3872))
{ /* Llib/weakhash.scm 138 */
BgL_res2552z00_2092 = BgL_aux2875z00_3872; }  else 
{ 
obj_t BgL_auxz00_4840;
BgL_auxz00_4840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2875z00_3872); 
FAILURE(BgL_auxz00_4840,BFALSE,BFALSE);} } 
BgL_auxz00_4836 = BgL_res2552z00_2092; } 
BgL_testz00_4835 = 
(BgL_auxz00_4836==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4835)
{ /* Llib/weakhash.scm 138 */
obj_t BgL_auxz00_4847;int BgL_auxz00_4845;
BgL_auxz00_4847 = 
BINT(BgL_arg1969z00_2073); 
BgL_auxz00_4845 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_4845, BgL_auxz00_4847); }  else 
{ /* Llib/weakhash.scm 138 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_931))
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1972z00_2076;
BgL_arg1972z00_2076 = 
CDR(BgL_bucketz00_930); 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_pairz00_2094;
if(
PAIRP(BgL_lastzd2bucketzd2_931))
{ /* Llib/weakhash.scm 138 */
BgL_pairz00_2094 = BgL_lastzd2bucketzd2_931; }  else 
{ 
obj_t BgL_auxz00_4856;
BgL_auxz00_4856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_931); 
FAILURE(BgL_auxz00_4856,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2094, BgL_arg1972z00_2076); } }  else 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_arg1973z00_2077;
BgL_arg1973z00_2077 = 
CDR(BgL_bucketz00_930); 
{ /* Llib/weakhash.scm 138 */
obj_t BgL_vectorz00_2097;int BgL_kz00_2098;
BgL_vectorz00_2097 = BgL_bucketsz00_38; 
BgL_kz00_2098 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 138 */
int BgL_l2675z00_3671;
BgL_l2675z00_3671 = 
VECTOR_LENGTH(BgL_vectorz00_2097); 
if(
BOUND_CHECK(BgL_kz00_2098, BgL_l2675z00_3671))
{ /* Llib/weakhash.scm 138 */
VECTOR_SET(BgL_vectorz00_2097,BgL_kz00_2098,BgL_arg1973z00_2077); }  else 
{ 
obj_t BgL_auxz00_4867;
BgL_auxz00_4867 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5350)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2098), BgL_vectorz00_2097); 
FAILURE(BgL_auxz00_4867,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 138 */
return BgL_retz00_934;} } } } } }  else 
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_4872;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg2023z00_1001;
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_4873;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4874;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_res2553z00_2105;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_aux2885z00_3882;
BgL_aux2885z00_3882 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2885z00_3882))
{ /* Llib/weakhash.scm 144 */
BgL_res2553z00_2105 = BgL_aux2885z00_3882; }  else 
{ 
obj_t BgL_auxz00_4878;
BgL_auxz00_4878 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5579)), BGl_string3550z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2885z00_3882); 
FAILURE(BgL_auxz00_4878,BFALSE,BFALSE);} } 
BgL_auxz00_4874 = BgL_res2553z00_2105; } 
BgL_testz00_4873 = 
(BgL_auxz00_4874==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4873)
{ /* Llib/weakhash.scm 144 */
int BgL_auxz00_4883;
BgL_auxz00_4883 = 
(int)(((long)5)); 
BgL_arg2023z00_1001 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_4883); }  else 
{ /* Llib/weakhash.scm 144 */
BgL_arg2023z00_1001 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 144 */
long BgL_n2z00_2107;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4887;
if(
INTEGERP(BgL_arg2023z00_1001))
{ /* Llib/weakhash.scm 144 */
BgL_auxz00_4887 = BgL_arg2023z00_1001
; }  else 
{ 
obj_t BgL_auxz00_4890;
BgL_auxz00_4890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5601)), BGl_string3550z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2023z00_1001); 
FAILURE(BgL_auxz00_4890,BFALSE,BFALSE);} 
BgL_n2z00_2107 = 
(long)CINT(BgL_auxz00_4887); } 
BgL_testz00_4872 = 
(((long)2)==BgL_n2z00_2107); } } 
if(BgL_testz00_4872)
{ /* Llib/weakhash.scm 144 */
obj_t BgL_g1840z00_946;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_vectorz00_2108;int BgL_kz00_2109;
if(
VECTORP(BgL_bucketsz00_38))
{ /* Llib/weakhash.scm 144 */
BgL_vectorz00_2108 = BgL_bucketsz00_38; }  else 
{ 
obj_t BgL_auxz00_4898;
BgL_auxz00_4898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3550z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_38); 
FAILURE(BgL_auxz00_4898,BFALSE,BFALSE);} 
BgL_kz00_2109 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 144 */
int BgL_l2679z00_3675;
BgL_l2679z00_3675 = 
VECTOR_LENGTH(BgL_vectorz00_2108); 
if(
BOUND_CHECK(BgL_kz00_2109, BgL_l2679z00_3675))
{ /* Llib/weakhash.scm 144 */
BgL_g1840z00_946 = 
VECTOR_REF(BgL_vectorz00_2108,BgL_kz00_2109); }  else 
{ 
obj_t BgL_auxz00_4907;
BgL_auxz00_4907 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2109), BgL_vectorz00_2108); 
FAILURE(BgL_auxz00_4907,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_948;obj_t BgL_lastzd2bucketzd2_949;
BgL_bucketz00_948 = BgL_g1840z00_946; 
BgL_lastzd2bucketzd2_949 = BFALSE; 
BgL_zc3anonymousza31987ze3z83_950:
if(
NULLP(BgL_bucketz00_948))
{ /* Llib/weakhash.scm 144 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 146 */
obj_t BgL_retz00_952;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_dataz00_958;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_arg1996z00_961;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_pairz00_2111;
if(
PAIRP(BgL_bucketz00_948))
{ /* Llib/weakhash.scm 146 */
BgL_pairz00_2111 = BgL_bucketz00_948; }  else 
{ 
obj_t BgL_auxz00_4916;
BgL_auxz00_4916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5660)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_948); 
FAILURE(BgL_auxz00_4916,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 146 */
obj_t BgL_pairz00_2114;
{ /* Llib/weakhash.scm 146 */
obj_t BgL_aux2893z00_3890;
BgL_aux2893z00_3890 = 
CAR(BgL_pairz00_2111); 
if(
PAIRP(BgL_aux2893z00_3890))
{ /* Llib/weakhash.scm 146 */
BgL_pairz00_2114 = BgL_aux2893z00_3890; }  else 
{ 
obj_t BgL_auxz00_4923;
BgL_auxz00_4923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5654)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2893z00_3890); 
FAILURE(BgL_auxz00_4923,BFALSE,BFALSE);} } 
BgL_arg1996z00_961 = 
CDR(BgL_pairz00_2114); } } 
{ /* Llib/weakhash.scm 146 */
obj_t BgL_objz00_2115;
if(
BGL_WEAKPTRP(BgL_arg1996z00_961))
{ /* Llib/weakhash.scm 146 */
BgL_objz00_2115 = BgL_arg1996z00_961; }  else 
{ 
obj_t BgL_auxz00_4930;
BgL_auxz00_4930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5666)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg1996z00_961); 
FAILURE(BgL_auxz00_4930,BFALSE,BFALSE);} 
BgL_dataz00_958 = 
weakptr_data(BgL_objz00_2115); } } 
if(
(BgL_dataz00_958==BUNSPEC))
{ /* Llib/weakhash.scm 147 */
BgL_retz00_952 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 149 */
obj_t BgL_arg1995z00_960;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_pairz00_2116;
BgL_pairz00_2116 = BgL_bucketz00_948; 
{ /* Llib/weakhash.scm 149 */
obj_t BgL_pairz00_2119;
{ /* Llib/weakhash.scm 149 */
obj_t BgL_aux2899z00_3896;
BgL_aux2899z00_3896 = 
CAR(BgL_pairz00_2116); 
if(
PAIRP(BgL_aux2899z00_3896))
{ /* Llib/weakhash.scm 149 */
BgL_pairz00_2119 = BgL_aux2899z00_3896; }  else 
{ 
obj_t BgL_auxz00_4940;
BgL_auxz00_4940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5737)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2899z00_3896); 
FAILURE(BgL_auxz00_4940,BFALSE,BFALSE);} } 
BgL_arg1995z00_960 = 
CAR(BgL_pairz00_2119); } } 
BgL_retz00_952 = 
PROCEDURE_L_ENTRY(BgL_funz00_40)(BgL_funz00_40, BgL_arg1995z00_960, BgL_dataz00_958, BgL_bucketz00_948); } } 
if(
(BgL_retz00_952==BGl_keepgoingz00zz__weakhashz00))
{ 
obj_t BgL_lastzd2bucketzd2_4951;obj_t BgL_bucketz00_4949;
BgL_bucketz00_4949 = 
CDR(BgL_bucketz00_948); 
BgL_lastzd2bucketzd2_4951 = BgL_bucketz00_948; 
BgL_lastzd2bucketzd2_949 = BgL_lastzd2bucketzd2_4951; 
BgL_bucketz00_948 = BgL_bucketz00_4949; 
goto BgL_zc3anonymousza31987ze3z83_950;}  else 
{ /* Llib/weakhash.scm 144 */
if(
(BgL_retz00_952==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 144 */
{ /* Llib/weakhash.scm 144 */
long BgL_arg1969z00_2126;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1970z00_2127;
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_4954;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4955;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_res2554z00_2136;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_aux2903z00_3900;
BgL_aux2903z00_3900 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2903z00_3900))
{ /* Llib/weakhash.scm 144 */
BgL_res2554z00_2136 = BgL_aux2903z00_3900; }  else 
{ 
obj_t BgL_auxz00_4959;
BgL_auxz00_4959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2903z00_3900); 
FAILURE(BgL_auxz00_4959,BFALSE,BFALSE);} } 
BgL_auxz00_4955 = BgL_res2554z00_2136; } 
BgL_testz00_4954 = 
(BgL_auxz00_4955==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4954)
{ /* Llib/weakhash.scm 144 */
int BgL_auxz00_4964;
BgL_auxz00_4964 = 
(int)(((long)0)); 
BgL_arg1970z00_2127 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_4964); }  else 
{ /* Llib/weakhash.scm 144 */
BgL_arg1970z00_2127 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 144 */
long BgL_za71za7_2137;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4968;
if(
INTEGERP(BgL_arg1970z00_2127))
{ /* Llib/weakhash.scm 144 */
BgL_auxz00_4968 = BgL_arg1970z00_2127
; }  else 
{ 
obj_t BgL_auxz00_4971;
BgL_auxz00_4971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2127); 
FAILURE(BgL_auxz00_4971,BFALSE,BFALSE);} 
BgL_za71za7_2137 = 
(long)CINT(BgL_auxz00_4968); } 
BgL_arg1969z00_2126 = 
(BgL_za71za7_2137-((long)1)); } } 
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_4977;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4978;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_res2555z00_2145;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_aux2907z00_3904;
BgL_aux2907z00_3904 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2907z00_3904))
{ /* Llib/weakhash.scm 144 */
BgL_res2555z00_2145 = BgL_aux2907z00_3904; }  else 
{ 
obj_t BgL_auxz00_4982;
BgL_auxz00_4982 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2907z00_3904); 
FAILURE(BgL_auxz00_4982,BFALSE,BFALSE);} } 
BgL_auxz00_4978 = BgL_res2555z00_2145; } 
BgL_testz00_4977 = 
(BgL_auxz00_4978==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_4977)
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_4989;int BgL_auxz00_4987;
BgL_auxz00_4989 = 
BINT(BgL_arg1969z00_2126); 
BgL_auxz00_4987 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_4987, BgL_auxz00_4989); }  else 
{ /* Llib/weakhash.scm 144 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_949))
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1972z00_2129;
BgL_arg1972z00_2129 = 
CDR(BgL_bucketz00_948); 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_pairz00_2147;
if(
PAIRP(BgL_lastzd2bucketzd2_949))
{ /* Llib/weakhash.scm 144 */
BgL_pairz00_2147 = BgL_lastzd2bucketzd2_949; }  else 
{ 
obj_t BgL_auxz00_4998;
BgL_auxz00_4998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_949); 
FAILURE(BgL_auxz00_4998,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2147, BgL_arg1972z00_2129); } }  else 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1973z00_2130;
BgL_arg1973z00_2130 = 
CDR(BgL_bucketz00_948); 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_vectorz00_2150;int BgL_kz00_2151;
BgL_vectorz00_2150 = BgL_bucketsz00_38; 
BgL_kz00_2151 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 144 */
int BgL_l2683z00_3679;
BgL_l2683z00_3679 = 
VECTOR_LENGTH(BgL_vectorz00_2150); 
if(
BOUND_CHECK(BgL_kz00_2151, BgL_l2683z00_3679))
{ /* Llib/weakhash.scm 144 */
VECTOR_SET(BgL_vectorz00_2150,BgL_kz00_2151,BgL_arg1973z00_2130); }  else 
{ 
obj_t BgL_auxz00_5009;
BgL_auxz00_5009 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2151), BgL_vectorz00_2150); 
FAILURE(BgL_auxz00_5009,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5014;
BgL_bucketz00_5014 = 
CDR(BgL_bucketz00_948); 
BgL_bucketz00_948 = BgL_bucketz00_5014; 
goto BgL_zc3anonymousza31987ze3z83_950;} }  else 
{ /* Llib/weakhash.scm 144 */
if(
(BgL_retz00_952==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 144 */
{ /* Llib/weakhash.scm 144 */
long BgL_arg1969z00_2159;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1970z00_2160;
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_5018;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_5019;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_res2556z00_2169;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_aux2919z00_3916;
BgL_aux2919z00_3916 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2919z00_3916))
{ /* Llib/weakhash.scm 144 */
BgL_res2556z00_2169 = BgL_aux2919z00_3916; }  else 
{ 
obj_t BgL_auxz00_5023;
BgL_auxz00_5023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2919z00_3916); 
FAILURE(BgL_auxz00_5023,BFALSE,BFALSE);} } 
BgL_auxz00_5019 = BgL_res2556z00_2169; } 
BgL_testz00_5018 = 
(BgL_auxz00_5019==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5018)
{ /* Llib/weakhash.scm 144 */
int BgL_auxz00_5028;
BgL_auxz00_5028 = 
(int)(((long)0)); 
BgL_arg1970z00_2160 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5028); }  else 
{ /* Llib/weakhash.scm 144 */
BgL_arg1970z00_2160 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 144 */
long BgL_za71za7_2170;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_5032;
if(
INTEGERP(BgL_arg1970z00_2160))
{ /* Llib/weakhash.scm 144 */
BgL_auxz00_5032 = BgL_arg1970z00_2160
; }  else 
{ 
obj_t BgL_auxz00_5035;
BgL_auxz00_5035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2160); 
FAILURE(BgL_auxz00_5035,BFALSE,BFALSE);} 
BgL_za71za7_2170 = 
(long)CINT(BgL_auxz00_5032); } 
BgL_arg1969z00_2159 = 
(BgL_za71za7_2170-((long)1)); } } 
{ /* Llib/weakhash.scm 144 */
bool_t BgL_testz00_5041;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_5042;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_res2557z00_2178;
{ /* Llib/weakhash.scm 144 */
obj_t BgL_aux2923z00_3920;
BgL_aux2923z00_3920 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2923z00_3920))
{ /* Llib/weakhash.scm 144 */
BgL_res2557z00_2178 = BgL_aux2923z00_3920; }  else 
{ 
obj_t BgL_auxz00_5046;
BgL_auxz00_5046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2923z00_3920); 
FAILURE(BgL_auxz00_5046,BFALSE,BFALSE);} } 
BgL_auxz00_5042 = BgL_res2557z00_2178; } 
BgL_testz00_5041 = 
(BgL_auxz00_5042==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5041)
{ /* Llib/weakhash.scm 144 */
obj_t BgL_auxz00_5053;int BgL_auxz00_5051;
BgL_auxz00_5053 = 
BINT(BgL_arg1969z00_2159); 
BgL_auxz00_5051 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_5051, BgL_auxz00_5053); }  else 
{ /* Llib/weakhash.scm 144 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_949))
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1972z00_2162;
BgL_arg1972z00_2162 = 
CDR(BgL_bucketz00_948); 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_pairz00_2180;
if(
PAIRP(BgL_lastzd2bucketzd2_949))
{ /* Llib/weakhash.scm 144 */
BgL_pairz00_2180 = BgL_lastzd2bucketzd2_949; }  else 
{ 
obj_t BgL_auxz00_5062;
BgL_auxz00_5062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_949); 
FAILURE(BgL_auxz00_5062,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2180, BgL_arg1972z00_2162); } }  else 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_arg1973z00_2163;
BgL_arg1973z00_2163 = 
CDR(BgL_bucketz00_948); 
{ /* Llib/weakhash.scm 144 */
obj_t BgL_vectorz00_2183;int BgL_kz00_2184;
BgL_vectorz00_2183 = BgL_bucketsz00_38; 
BgL_kz00_2184 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 144 */
int BgL_l2687z00_3683;
BgL_l2687z00_3683 = 
VECTOR_LENGTH(BgL_vectorz00_2183); 
if(
BOUND_CHECK(BgL_kz00_2184, BgL_l2687z00_3683))
{ /* Llib/weakhash.scm 144 */
VECTOR_SET(BgL_vectorz00_2183,BgL_kz00_2184,BgL_arg1973z00_2163); }  else 
{ 
obj_t BgL_auxz00_5073;
BgL_auxz00_5073 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5562)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2184), BgL_vectorz00_2183); 
FAILURE(BgL_auxz00_5073,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 144 */
return BgL_retz00_952;} } } } } }  else 
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5078;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg2021z00_999;
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5079;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5080;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2558z00_2191;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2933z00_3930;
BgL_aux2933z00_3930 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2933z00_3930))
{ /* Llib/weakhash.scm 150 */
BgL_res2558z00_2191 = BgL_aux2933z00_3930; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5794)), BGl_string3550z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2933z00_3930); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} } 
BgL_auxz00_5080 = BgL_res2558z00_2191; } 
BgL_testz00_5079 = 
(BgL_auxz00_5080==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5079)
{ /* Llib/weakhash.scm 150 */
int BgL_auxz00_5089;
BgL_auxz00_5089 = 
(int)(((long)5)); 
BgL_arg2021z00_999 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5089); }  else 
{ /* Llib/weakhash.scm 150 */
BgL_arg2021z00_999 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 150 */
long BgL_n2z00_2193;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5093;
if(
INTEGERP(BgL_arg2021z00_999))
{ /* Llib/weakhash.scm 150 */
BgL_auxz00_5093 = BgL_arg2021z00_999
; }  else 
{ 
obj_t BgL_auxz00_5096;
BgL_auxz00_5096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5816)), BGl_string3550z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2021z00_999); 
FAILURE(BgL_auxz00_5096,BFALSE,BFALSE);} 
BgL_n2z00_2193 = 
(long)CINT(BgL_auxz00_5093); } 
BgL_testz00_5078 = 
(((long)3)==BgL_n2z00_2193); } } 
if(BgL_testz00_5078)
{ /* Llib/weakhash.scm 150 */
obj_t BgL_g1841z00_964;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2194;int BgL_kz00_2195;
if(
VECTORP(BgL_bucketsz00_38))
{ /* Llib/weakhash.scm 150 */
BgL_vectorz00_2194 = BgL_bucketsz00_38; }  else 
{ 
obj_t BgL_auxz00_5104;
BgL_auxz00_5104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3550z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_38); 
FAILURE(BgL_auxz00_5104,BFALSE,BFALSE);} 
BgL_kz00_2195 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2691z00_3687;
BgL_l2691z00_3687 = 
VECTOR_LENGTH(BgL_vectorz00_2194); 
if(
BOUND_CHECK(BgL_kz00_2195, BgL_l2691z00_3687))
{ /* Llib/weakhash.scm 150 */
BgL_g1841z00_964 = 
VECTOR_REF(BgL_vectorz00_2194,BgL_kz00_2195); }  else 
{ 
obj_t BgL_auxz00_5113;
BgL_auxz00_5113 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2195), BgL_vectorz00_2194); 
FAILURE(BgL_auxz00_5113,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_966;obj_t BgL_lastzd2bucketzd2_967;
BgL_bucketz00_966 = BgL_g1841z00_964; 
BgL_lastzd2bucketzd2_967 = BFALSE; 
BgL_zc3anonymousza31998ze3z83_968:
if(
NULLP(BgL_bucketz00_966))
{ /* Llib/weakhash.scm 150 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 152 */
obj_t BgL_retz00_970;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_keyz00_976;obj_t BgL_dataz00_977;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_arg2007z00_980;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_pairz00_2197;
if(
PAIRP(BgL_bucketz00_966))
{ /* Llib/weakhash.scm 152 */
BgL_pairz00_2197 = BgL_bucketz00_966; }  else 
{ 
obj_t BgL_auxz00_5122;
BgL_auxz00_5122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5878)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_966); 
FAILURE(BgL_auxz00_5122,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 152 */
obj_t BgL_pairz00_2200;
{ /* Llib/weakhash.scm 152 */
obj_t BgL_aux2941z00_3938;
BgL_aux2941z00_3938 = 
CAR(BgL_pairz00_2197); 
if(
PAIRP(BgL_aux2941z00_3938))
{ /* Llib/weakhash.scm 152 */
BgL_pairz00_2200 = BgL_aux2941z00_3938; }  else 
{ 
obj_t BgL_auxz00_5129;
BgL_auxz00_5129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5872)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2941z00_3938); 
FAILURE(BgL_auxz00_5129,BFALSE,BFALSE);} } 
BgL_arg2007z00_980 = 
CAR(BgL_pairz00_2200); } } 
{ /* Llib/weakhash.scm 152 */
obj_t BgL_objz00_2201;
if(
BGL_WEAKPTRP(BgL_arg2007z00_980))
{ /* Llib/weakhash.scm 152 */
BgL_objz00_2201 = BgL_arg2007z00_980; }  else 
{ 
obj_t BgL_auxz00_5136;
BgL_auxz00_5136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5884)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2007z00_980); 
FAILURE(BgL_auxz00_5136,BFALSE,BFALSE);} 
BgL_keyz00_976 = 
weakptr_data(BgL_objz00_2201); } } 
{ /* Llib/weakhash.scm 153 */
obj_t BgL_arg2008z00_981;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_pairz00_2202;
BgL_pairz00_2202 = BgL_bucketz00_966; 
{ /* Llib/weakhash.scm 153 */
obj_t BgL_pairz00_2205;
{ /* Llib/weakhash.scm 153 */
obj_t BgL_aux2947z00_3944;
BgL_aux2947z00_3944 = 
CAR(BgL_pairz00_2202); 
if(
PAIRP(BgL_aux2947z00_3944))
{ /* Llib/weakhash.scm 153 */
BgL_pairz00_2205 = BgL_aux2947z00_3944; }  else 
{ 
obj_t BgL_auxz00_5144;
BgL_auxz00_5144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5917)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2947z00_3944); 
FAILURE(BgL_auxz00_5144,BFALSE,BFALSE);} } 
BgL_arg2008z00_981 = 
CDR(BgL_pairz00_2205); } } 
{ /* Llib/weakhash.scm 153 */
obj_t BgL_objz00_2206;
if(
BGL_WEAKPTRP(BgL_arg2008z00_981))
{ /* Llib/weakhash.scm 153 */
BgL_objz00_2206 = BgL_arg2008z00_981; }  else 
{ 
obj_t BgL_auxz00_5151;
BgL_auxz00_5151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5929)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2008z00_981); 
FAILURE(BgL_auxz00_5151,BFALSE,BFALSE);} 
BgL_dataz00_977 = 
weakptr_data(BgL_objz00_2206); } } 
{ /* Llib/weakhash.scm 154 */
bool_t BgL_testz00_5156;
if(
(BgL_keyz00_976==BUNSPEC))
{ /* Llib/weakhash.scm 154 */
BgL_testz00_5156 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 154 */
BgL_testz00_5156 = 
(BgL_dataz00_977==BUNSPEC)
; } 
if(BgL_testz00_5156)
{ /* Llib/weakhash.scm 154 */
BgL_retz00_970 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 154 */
BgL_retz00_970 = 
PROCEDURE_L_ENTRY(BgL_funz00_40)(BgL_funz00_40, BgL_keyz00_976, BgL_dataz00_977, BgL_bucketz00_966); } } } 
if(
(BgL_retz00_970==BGl_keepgoingz00zz__weakhashz00))
{ 
obj_t BgL_lastzd2bucketzd2_5166;obj_t BgL_bucketz00_5164;
BgL_bucketz00_5164 = 
CDR(BgL_bucketz00_966); 
BgL_lastzd2bucketzd2_5166 = BgL_bucketz00_966; 
BgL_lastzd2bucketzd2_967 = BgL_lastzd2bucketzd2_5166; 
BgL_bucketz00_966 = BgL_bucketz00_5164; 
goto BgL_zc3anonymousza31998ze3z83_968;}  else 
{ /* Llib/weakhash.scm 150 */
if(
(BgL_retz00_970==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 150 */
{ /* Llib/weakhash.scm 150 */
long BgL_arg1969z00_2213;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1970z00_2214;
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5169;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5170;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2559z00_2223;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2953z00_3950;
BgL_aux2953z00_3950 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2953z00_3950))
{ /* Llib/weakhash.scm 150 */
BgL_res2559z00_2223 = BgL_aux2953z00_3950; }  else 
{ 
obj_t BgL_auxz00_5174;
BgL_auxz00_5174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2953z00_3950); 
FAILURE(BgL_auxz00_5174,BFALSE,BFALSE);} } 
BgL_auxz00_5170 = BgL_res2559z00_2223; } 
BgL_testz00_5169 = 
(BgL_auxz00_5170==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5169)
{ /* Llib/weakhash.scm 150 */
int BgL_auxz00_5179;
BgL_auxz00_5179 = 
(int)(((long)0)); 
BgL_arg1970z00_2214 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5179); }  else 
{ /* Llib/weakhash.scm 150 */
BgL_arg1970z00_2214 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 150 */
long BgL_za71za7_2224;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5183;
if(
INTEGERP(BgL_arg1970z00_2214))
{ /* Llib/weakhash.scm 150 */
BgL_auxz00_5183 = BgL_arg1970z00_2214
; }  else 
{ 
obj_t BgL_auxz00_5186;
BgL_auxz00_5186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2214); 
FAILURE(BgL_auxz00_5186,BFALSE,BFALSE);} 
BgL_za71za7_2224 = 
(long)CINT(BgL_auxz00_5183); } 
BgL_arg1969z00_2213 = 
(BgL_za71za7_2224-((long)1)); } } 
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5192;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5193;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2560z00_2232;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2957z00_3954;
BgL_aux2957z00_3954 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2957z00_3954))
{ /* Llib/weakhash.scm 150 */
BgL_res2560z00_2232 = BgL_aux2957z00_3954; }  else 
{ 
obj_t BgL_auxz00_5197;
BgL_auxz00_5197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2957z00_3954); 
FAILURE(BgL_auxz00_5197,BFALSE,BFALSE);} } 
BgL_auxz00_5193 = BgL_res2560z00_2232; } 
BgL_testz00_5192 = 
(BgL_auxz00_5193==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5192)
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5204;int BgL_auxz00_5202;
BgL_auxz00_5204 = 
BINT(BgL_arg1969z00_2213); 
BgL_auxz00_5202 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_5202, BgL_auxz00_5204); }  else 
{ /* Llib/weakhash.scm 150 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_967))
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1972z00_2216;
BgL_arg1972z00_2216 = 
CDR(BgL_bucketz00_966); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_pairz00_2234;
if(
PAIRP(BgL_lastzd2bucketzd2_967))
{ /* Llib/weakhash.scm 150 */
BgL_pairz00_2234 = BgL_lastzd2bucketzd2_967; }  else 
{ 
obj_t BgL_auxz00_5213;
BgL_auxz00_5213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_967); 
FAILURE(BgL_auxz00_5213,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2234, BgL_arg1972z00_2216); } }  else 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1973z00_2217;
BgL_arg1973z00_2217 = 
CDR(BgL_bucketz00_966); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2237;int BgL_kz00_2238;
BgL_vectorz00_2237 = BgL_bucketsz00_38; 
BgL_kz00_2238 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2695z00_3691;
BgL_l2695z00_3691 = 
VECTOR_LENGTH(BgL_vectorz00_2237); 
if(
BOUND_CHECK(BgL_kz00_2238, BgL_l2695z00_3691))
{ /* Llib/weakhash.scm 150 */
VECTOR_SET(BgL_vectorz00_2237,BgL_kz00_2238,BgL_arg1973z00_2217); }  else 
{ 
obj_t BgL_auxz00_5224;
BgL_auxz00_5224 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2238), BgL_vectorz00_2237); 
FAILURE(BgL_auxz00_5224,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5229;
BgL_bucketz00_5229 = 
CDR(BgL_bucketz00_966); 
BgL_bucketz00_966 = BgL_bucketz00_5229; 
goto BgL_zc3anonymousza31998ze3z83_968;} }  else 
{ /* Llib/weakhash.scm 150 */
if(
(BgL_retz00_970==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 150 */
{ /* Llib/weakhash.scm 150 */
long BgL_arg1969z00_2246;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1970z00_2247;
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5233;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5234;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2561z00_2256;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2969z00_3966;
BgL_aux2969z00_3966 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2969z00_3966))
{ /* Llib/weakhash.scm 150 */
BgL_res2561z00_2256 = BgL_aux2969z00_3966; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2969z00_3966); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} } 
BgL_auxz00_5234 = BgL_res2561z00_2256; } 
BgL_testz00_5233 = 
(BgL_auxz00_5234==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5233)
{ /* Llib/weakhash.scm 150 */
int BgL_auxz00_5243;
BgL_auxz00_5243 = 
(int)(((long)0)); 
BgL_arg1970z00_2247 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5243); }  else 
{ /* Llib/weakhash.scm 150 */
BgL_arg1970z00_2247 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 150 */
long BgL_za71za7_2257;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5247;
if(
INTEGERP(BgL_arg1970z00_2247))
{ /* Llib/weakhash.scm 150 */
BgL_auxz00_5247 = BgL_arg1970z00_2247
; }  else 
{ 
obj_t BgL_auxz00_5250;
BgL_auxz00_5250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2247); 
FAILURE(BgL_auxz00_5250,BFALSE,BFALSE);} 
BgL_za71za7_2257 = 
(long)CINT(BgL_auxz00_5247); } 
BgL_arg1969z00_2246 = 
(BgL_za71za7_2257-((long)1)); } } 
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5256;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5257;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2562z00_2265;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2973z00_3970;
BgL_aux2973z00_3970 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2973z00_3970))
{ /* Llib/weakhash.scm 150 */
BgL_res2562z00_2265 = BgL_aux2973z00_3970; }  else 
{ 
obj_t BgL_auxz00_5261;
BgL_auxz00_5261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2973z00_3970); 
FAILURE(BgL_auxz00_5261,BFALSE,BFALSE);} } 
BgL_auxz00_5257 = BgL_res2562z00_2265; } 
BgL_testz00_5256 = 
(BgL_auxz00_5257==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5256)
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5268;int BgL_auxz00_5266;
BgL_auxz00_5268 = 
BINT(BgL_arg1969z00_2246); 
BgL_auxz00_5266 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_5266, BgL_auxz00_5268); }  else 
{ /* Llib/weakhash.scm 150 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_967))
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1972z00_2249;
BgL_arg1972z00_2249 = 
CDR(BgL_bucketz00_966); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_pairz00_2267;
if(
PAIRP(BgL_lastzd2bucketzd2_967))
{ /* Llib/weakhash.scm 150 */
BgL_pairz00_2267 = BgL_lastzd2bucketzd2_967; }  else 
{ 
obj_t BgL_auxz00_5277;
BgL_auxz00_5277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_967); 
FAILURE(BgL_auxz00_5277,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2267, BgL_arg1972z00_2249); } }  else 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1973z00_2250;
BgL_arg1973z00_2250 = 
CDR(BgL_bucketz00_966); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2270;int BgL_kz00_2271;
BgL_vectorz00_2270 = BgL_bucketsz00_38; 
BgL_kz00_2271 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2699z00_3695;
BgL_l2699z00_3695 = 
VECTOR_LENGTH(BgL_vectorz00_2270); 
if(
BOUND_CHECK(BgL_kz00_2271, BgL_l2699z00_3695))
{ /* Llib/weakhash.scm 150 */
VECTOR_SET(BgL_vectorz00_2270,BgL_kz00_2271,BgL_arg1973z00_2250); }  else 
{ 
obj_t BgL_auxz00_5288;
BgL_auxz00_5288 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2271), BgL_vectorz00_2270); 
FAILURE(BgL_auxz00_5288,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 150 */
return BgL_retz00_970;} } } } } }  else 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_g1842z00_983;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2273;int BgL_kz00_2274;
if(
VECTORP(BgL_bucketsz00_38))
{ /* Llib/weakhash.scm 150 */
BgL_vectorz00_2273 = BgL_bucketsz00_38; }  else 
{ 
obj_t BgL_auxz00_5295;
BgL_auxz00_5295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3550z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_38); 
FAILURE(BgL_auxz00_5295,BFALSE,BFALSE);} 
BgL_kz00_2274 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2703z00_3699;
BgL_l2703z00_3699 = 
VECTOR_LENGTH(BgL_vectorz00_2273); 
if(
BOUND_CHECK(BgL_kz00_2274, BgL_l2703z00_3699))
{ /* Llib/weakhash.scm 150 */
BgL_g1842z00_983 = 
VECTOR_REF(BgL_vectorz00_2273,BgL_kz00_2274); }  else 
{ 
obj_t BgL_auxz00_5304;
BgL_auxz00_5304 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2274), BgL_vectorz00_2273); 
FAILURE(BgL_auxz00_5304,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_985;obj_t BgL_lastzd2bucketzd2_986;
BgL_bucketz00_985 = BgL_g1842z00_983; 
BgL_lastzd2bucketzd2_986 = BFALSE; 
BgL_zc3anonymousza32009ze3z83_987:
if(
NULLP(BgL_bucketz00_985))
{ /* Llib/weakhash.scm 150 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 160 */
obj_t BgL_retz00_989;
{ /* Llib/weakhash.scm 160 */
obj_t BgL_arg2017z00_995;obj_t BgL_arg2018z00_996;
{ /* Llib/weakhash.scm 160 */
obj_t BgL_pairz00_2276;
if(
PAIRP(BgL_bucketz00_985))
{ /* Llib/weakhash.scm 160 */
BgL_pairz00_2276 = BgL_bucketz00_985; }  else 
{ 
obj_t BgL_auxz00_5313;
BgL_auxz00_5313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6101)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_985); 
FAILURE(BgL_auxz00_5313,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 160 */
obj_t BgL_pairz00_2279;
{ /* Llib/weakhash.scm 160 */
obj_t BgL_aux2987z00_3984;
BgL_aux2987z00_3984 = 
CAR(BgL_pairz00_2276); 
if(
PAIRP(BgL_aux2987z00_3984))
{ /* Llib/weakhash.scm 160 */
BgL_pairz00_2279 = BgL_aux2987z00_3984; }  else 
{ 
obj_t BgL_auxz00_5320;
BgL_auxz00_5320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6095)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2987z00_3984); 
FAILURE(BgL_auxz00_5320,BFALSE,BFALSE);} } 
BgL_arg2017z00_995 = 
CAR(BgL_pairz00_2279); } } 
{ /* Llib/weakhash.scm 160 */
obj_t BgL_pairz00_2280;
BgL_pairz00_2280 = BgL_bucketz00_985; 
{ /* Llib/weakhash.scm 160 */
obj_t BgL_pairz00_2283;
{ /* Llib/weakhash.scm 160 */
obj_t BgL_aux2991z00_3988;
BgL_aux2991z00_3988 = 
CAR(BgL_pairz00_2280); 
if(
PAIRP(BgL_aux2991z00_3988))
{ /* Llib/weakhash.scm 160 */
BgL_pairz00_2283 = BgL_aux2991z00_3988; }  else 
{ 
obj_t BgL_auxz00_5328;
BgL_auxz00_5328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6109)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux2991z00_3988); 
FAILURE(BgL_auxz00_5328,BFALSE,BFALSE);} } 
BgL_arg2018z00_996 = 
CDR(BgL_pairz00_2283); } } 
BgL_retz00_989 = 
PROCEDURE_L_ENTRY(BgL_funz00_40)(BgL_funz00_40, BgL_arg2017z00_995, BgL_arg2018z00_996, BgL_bucketz00_985); } 
if(
(BgL_retz00_989==BGl_keepgoingz00zz__weakhashz00))
{ 
obj_t BgL_lastzd2bucketzd2_5339;obj_t BgL_bucketz00_5337;
BgL_bucketz00_5337 = 
CDR(BgL_bucketz00_985); 
BgL_lastzd2bucketzd2_5339 = BgL_bucketz00_985; 
BgL_lastzd2bucketzd2_986 = BgL_lastzd2bucketzd2_5339; 
BgL_bucketz00_985 = BgL_bucketz00_5337; 
goto BgL_zc3anonymousza32009ze3z83_987;}  else 
{ /* Llib/weakhash.scm 150 */
if(
(BgL_retz00_989==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 150 */
{ /* Llib/weakhash.scm 150 */
long BgL_arg1969z00_2290;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1970z00_2291;
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5342;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5343;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2563z00_2300;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2995z00_3992;
BgL_aux2995z00_3992 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2995z00_3992))
{ /* Llib/weakhash.scm 150 */
BgL_res2563z00_2300 = BgL_aux2995z00_3992; }  else 
{ 
obj_t BgL_auxz00_5347;
BgL_auxz00_5347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2995z00_3992); 
FAILURE(BgL_auxz00_5347,BFALSE,BFALSE);} } 
BgL_auxz00_5343 = BgL_res2563z00_2300; } 
BgL_testz00_5342 = 
(BgL_auxz00_5343==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5342)
{ /* Llib/weakhash.scm 150 */
int BgL_auxz00_5352;
BgL_auxz00_5352 = 
(int)(((long)0)); 
BgL_arg1970z00_2291 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5352); }  else 
{ /* Llib/weakhash.scm 150 */
BgL_arg1970z00_2291 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 150 */
long BgL_za71za7_2301;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5356;
if(
INTEGERP(BgL_arg1970z00_2291))
{ /* Llib/weakhash.scm 150 */
BgL_auxz00_5356 = BgL_arg1970z00_2291
; }  else 
{ 
obj_t BgL_auxz00_5359;
BgL_auxz00_5359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2291); 
FAILURE(BgL_auxz00_5359,BFALSE,BFALSE);} 
BgL_za71za7_2301 = 
(long)CINT(BgL_auxz00_5356); } 
BgL_arg1969z00_2290 = 
(BgL_za71za7_2301-((long)1)); } } 
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5365;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5366;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2564z00_2309;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux2999z00_3996;
BgL_aux2999z00_3996 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux2999z00_3996))
{ /* Llib/weakhash.scm 150 */
BgL_res2564z00_2309 = BgL_aux2999z00_3996; }  else 
{ 
obj_t BgL_auxz00_5370;
BgL_auxz00_5370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux2999z00_3996); 
FAILURE(BgL_auxz00_5370,BFALSE,BFALSE);} } 
BgL_auxz00_5366 = BgL_res2564z00_2309; } 
BgL_testz00_5365 = 
(BgL_auxz00_5366==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5365)
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5377;int BgL_auxz00_5375;
BgL_auxz00_5377 = 
BINT(BgL_arg1969z00_2290); 
BgL_auxz00_5375 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_5375, BgL_auxz00_5377); }  else 
{ /* Llib/weakhash.scm 150 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_986))
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1972z00_2293;
BgL_arg1972z00_2293 = 
CDR(BgL_bucketz00_985); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_pairz00_2311;
if(
PAIRP(BgL_lastzd2bucketzd2_986))
{ /* Llib/weakhash.scm 150 */
BgL_pairz00_2311 = BgL_lastzd2bucketzd2_986; }  else 
{ 
obj_t BgL_auxz00_5386;
BgL_auxz00_5386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_986); 
FAILURE(BgL_auxz00_5386,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2311, BgL_arg1972z00_2293); } }  else 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1973z00_2294;
BgL_arg1973z00_2294 = 
CDR(BgL_bucketz00_985); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2314;int BgL_kz00_2315;
BgL_vectorz00_2314 = BgL_bucketsz00_38; 
BgL_kz00_2315 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2707z00_3703;
BgL_l2707z00_3703 = 
VECTOR_LENGTH(BgL_vectorz00_2314); 
if(
BOUND_CHECK(BgL_kz00_2315, BgL_l2707z00_3703))
{ /* Llib/weakhash.scm 150 */
VECTOR_SET(BgL_vectorz00_2314,BgL_kz00_2315,BgL_arg1973z00_2294); }  else 
{ 
obj_t BgL_auxz00_5397;
BgL_auxz00_5397 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2315), BgL_vectorz00_2314); 
FAILURE(BgL_auxz00_5397,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5402;
BgL_bucketz00_5402 = 
CDR(BgL_bucketz00_985); 
BgL_bucketz00_985 = BgL_bucketz00_5402; 
goto BgL_zc3anonymousza32009ze3z83_987;} }  else 
{ /* Llib/weakhash.scm 150 */
if(
(BgL_retz00_989==BGl_removestopz00zz__weakhashz00))
{ /* Llib/weakhash.scm 150 */
{ /* Llib/weakhash.scm 150 */
long BgL_arg1969z00_2323;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1970z00_2324;
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5406;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5407;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2565z00_2333;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux3011z00_4008;
BgL_aux3011z00_4008 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux3011z00_4008))
{ /* Llib/weakhash.scm 150 */
BgL_res2565z00_2333 = BgL_aux3011z00_4008; }  else 
{ 
obj_t BgL_auxz00_5411;
BgL_auxz00_5411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3011z00_4008); 
FAILURE(BgL_auxz00_5411,BFALSE,BFALSE);} } 
BgL_auxz00_5407 = BgL_res2565z00_2333; } 
BgL_testz00_5406 = 
(BgL_auxz00_5407==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5406)
{ /* Llib/weakhash.scm 150 */
int BgL_auxz00_5416;
BgL_auxz00_5416 = 
(int)(((long)0)); 
BgL_arg1970z00_2324 = 
STRUCT_REF(BgL_tablez00_37, BgL_auxz00_5416); }  else 
{ /* Llib/weakhash.scm 150 */
BgL_arg1970z00_2324 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } 
{ /* Llib/weakhash.scm 150 */
long BgL_za71za7_2334;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5420;
if(
INTEGERP(BgL_arg1970z00_2324))
{ /* Llib/weakhash.scm 150 */
BgL_auxz00_5420 = BgL_arg1970z00_2324
; }  else 
{ 
obj_t BgL_auxz00_5423;
BgL_auxz00_5423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2324); 
FAILURE(BgL_auxz00_5423,BFALSE,BFALSE);} 
BgL_za71za7_2334 = 
(long)CINT(BgL_auxz00_5420); } 
BgL_arg1969z00_2323 = 
(BgL_za71za7_2334-((long)1)); } } 
{ /* Llib/weakhash.scm 150 */
bool_t BgL_testz00_5429;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5430;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_res2566z00_2342;
{ /* Llib/weakhash.scm 150 */
obj_t BgL_aux3015z00_4012;
BgL_aux3015z00_4012 = 
STRUCT_KEY(BgL_tablez00_37); 
if(
SYMBOLP(BgL_aux3015z00_4012))
{ /* Llib/weakhash.scm 150 */
BgL_res2566z00_2342 = BgL_aux3015z00_4012; }  else 
{ 
obj_t BgL_auxz00_5434;
BgL_auxz00_5434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3015z00_4012); 
FAILURE(BgL_auxz00_5434,BFALSE,BFALSE);} } 
BgL_auxz00_5430 = BgL_res2566z00_2342; } 
BgL_testz00_5429 = 
(BgL_auxz00_5430==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5429)
{ /* Llib/weakhash.scm 150 */
obj_t BgL_auxz00_5441;int BgL_auxz00_5439;
BgL_auxz00_5441 = 
BINT(BgL_arg1969z00_2323); 
BgL_auxz00_5439 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_37, BgL_auxz00_5439, BgL_auxz00_5441); }  else 
{ /* Llib/weakhash.scm 150 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_37); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_986))
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1972z00_2326;
BgL_arg1972z00_2326 = 
CDR(BgL_bucketz00_985); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_pairz00_2344;
if(
PAIRP(BgL_lastzd2bucketzd2_986))
{ /* Llib/weakhash.scm 150 */
BgL_pairz00_2344 = BgL_lastzd2bucketzd2_986; }  else 
{ 
obj_t BgL_auxz00_5450;
BgL_auxz00_5450 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_986); 
FAILURE(BgL_auxz00_5450,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2344, BgL_arg1972z00_2326); } }  else 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_arg1973z00_2327;
BgL_arg1973z00_2327 = 
CDR(BgL_bucketz00_985); 
{ /* Llib/weakhash.scm 150 */
obj_t BgL_vectorz00_2347;int BgL_kz00_2348;
BgL_vectorz00_2347 = BgL_bucketsz00_38; 
BgL_kz00_2348 = 
(int)(BgL_iz00_39); 
{ /* Llib/weakhash.scm 150 */
int BgL_l2711z00_3707;
BgL_l2711z00_3707 = 
VECTOR_LENGTH(BgL_vectorz00_2347); 
if(
BOUND_CHECK(BgL_kz00_2348, BgL_l2711z00_3707))
{ /* Llib/weakhash.scm 150 */
VECTOR_SET(BgL_vectorz00_2347,BgL_kz00_2348,BgL_arg1973z00_2327); }  else 
{ 
obj_t BgL_auxz00_5461;
BgL_auxz00_5461 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)5777)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2348), BgL_vectorz00_2347); 
FAILURE(BgL_auxz00_5461,BFALSE,BFALSE);} } } } 
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 150 */
return BgL_retz00_989;} } } } } } } } } } 
}



/* traverse-hash */
bool_t BGl_traversezd2hashzd2zz__weakhashz00(obj_t BgL_tablez00_41, obj_t BgL_funz00_42)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 173 */
{ /* Llib/weakhash.scm 183 */
bool_t BgL_testz00_5466;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_arg2084z00_1104;
{ /* Llib/weakhash.scm 183 */
bool_t BgL_testz00_5467;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5468;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_res2567z00_2355;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_aux3025z00_4022;
BgL_aux3025z00_4022 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3025z00_4022))
{ /* Llib/weakhash.scm 183 */
BgL_res2567z00_2355 = BgL_aux3025z00_4022; }  else 
{ 
obj_t BgL_auxz00_5472;
BgL_auxz00_5472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7009)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3025z00_4022); 
FAILURE(BgL_auxz00_5472,BFALSE,BFALSE);} } 
BgL_auxz00_5468 = BgL_res2567z00_2355; } 
BgL_testz00_5467 = 
(BgL_auxz00_5468==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5467)
{ /* Llib/weakhash.scm 183 */
int BgL_auxz00_5477;
BgL_auxz00_5477 = 
(int)(((long)5)); 
BgL_arg2084z00_1104 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5477); }  else 
{ /* Llib/weakhash.scm 183 */
BgL_arg2084z00_1104 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 183 */
long BgL_n2z00_2357;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5481;
if(
INTEGERP(BgL_arg2084z00_1104))
{ /* Llib/weakhash.scm 183 */
BgL_auxz00_5481 = BgL_arg2084z00_1104
; }  else 
{ 
obj_t BgL_auxz00_5484;
BgL_auxz00_5484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7031)), BGl_string3562z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2084z00_1104); 
FAILURE(BgL_auxz00_5484,BFALSE,BFALSE);} 
BgL_n2z00_2357 = 
(long)CINT(BgL_auxz00_5481); } 
BgL_testz00_5466 = 
(((long)1)==BgL_n2z00_2357); } } 
if(BgL_testz00_5466)
{ /* Llib/weakhash.scm 183 */
obj_t BgL_bucketsz00_1005;
{ /* Llib/weakhash.scm 183 */
bool_t BgL_testz00_5490;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5491;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_res2568z00_2363;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_aux3029z00_4026;
BgL_aux3029z00_4026 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3029z00_4026))
{ /* Llib/weakhash.scm 183 */
BgL_res2568z00_2363 = BgL_aux3029z00_4026; }  else 
{ 
obj_t BgL_auxz00_5495;
BgL_auxz00_5495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3029z00_4026); 
FAILURE(BgL_auxz00_5495,BFALSE,BFALSE);} } 
BgL_auxz00_5491 = BgL_res2568z00_2363; } 
BgL_testz00_5490 = 
(BgL_auxz00_5491==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5490)
{ /* Llib/weakhash.scm 183 */
int BgL_auxz00_5500;
BgL_auxz00_5500 = 
(int)(((long)2)); 
BgL_bucketsz00_1005 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5500); }  else 
{ /* Llib/weakhash.scm 183 */
BgL_bucketsz00_1005 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 183 */
int BgL_bucketszd2lenzd2_1006;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_vectorz00_2364;
if(
VECTORP(BgL_bucketsz00_1005))
{ /* Llib/weakhash.scm 183 */
BgL_vectorz00_2364 = BgL_bucketsz00_1005; }  else 
{ 
obj_t BgL_auxz00_5506;
BgL_auxz00_5506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3562z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1005); 
FAILURE(BgL_auxz00_5506,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1006 = 
VECTOR_LENGTH(BgL_vectorz00_2364); } 
{ /* Llib/weakhash.scm 183 */

{ 
long BgL_iz00_1008;
BgL_iz00_1008 = ((long)0); 
BgL_zc3anonymousza32027ze3z83_1009:
if(
(BgL_iz00_1008==
(long)(BgL_bucketszd2lenzd2_1006)))
{ /* Llib/weakhash.scm 183 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 183 */
{ /* Llib/weakhash.scm 183 */
obj_t BgL_g1843z00_1011;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_vectorz00_2367;int BgL_kz00_2368;
BgL_vectorz00_2367 = BgL_bucketsz00_1005; 
BgL_kz00_2368 = 
(int)(BgL_iz00_1008); 
{ /* Llib/weakhash.scm 183 */
int BgL_l2715z00_3711;
BgL_l2715z00_3711 = 
VECTOR_LENGTH(BgL_vectorz00_2367); 
if(
BOUND_CHECK(BgL_kz00_2368, BgL_l2715z00_3711))
{ /* Llib/weakhash.scm 183 */
BgL_g1843z00_1011 = 
VECTOR_REF(BgL_vectorz00_2367,BgL_kz00_2368); }  else 
{ 
obj_t BgL_auxz00_5519;
BgL_auxz00_5519 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2368), BgL_vectorz00_2367); 
FAILURE(BgL_auxz00_5519,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1013;obj_t BgL_lastzd2bucketzd2_1014;
BgL_bucketz00_1013 = BgL_g1843z00_1011; 
BgL_lastzd2bucketzd2_1014 = BFALSE; 
BgL_zc3anonymousza32029ze3z83_1015:
if(
NULLP(BgL_bucketz00_1013))
{ /* Llib/weakhash.scm 183 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 185 */
obj_t BgL_retz00_1017;
{ /* Llib/weakhash.scm 185 */
obj_t BgL_keyz00_1021;
{ /* Llib/weakhash.scm 185 */
obj_t BgL_arg2037z00_1024;
{ /* Llib/weakhash.scm 185 */
obj_t BgL_pairz00_2370;
if(
PAIRP(BgL_bucketz00_1013))
{ /* Llib/weakhash.scm 185 */
BgL_pairz00_2370 = BgL_bucketz00_1013; }  else 
{ 
obj_t BgL_auxz00_5528;
BgL_auxz00_5528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7091)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1013); 
FAILURE(BgL_auxz00_5528,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 185 */
obj_t BgL_pairz00_2373;
{ /* Llib/weakhash.scm 185 */
obj_t BgL_aux3037z00_4034;
BgL_aux3037z00_4034 = 
CAR(BgL_pairz00_2370); 
if(
PAIRP(BgL_aux3037z00_4034))
{ /* Llib/weakhash.scm 185 */
BgL_pairz00_2373 = BgL_aux3037z00_4034; }  else 
{ 
obj_t BgL_auxz00_5535;
BgL_auxz00_5535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7085)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3037z00_4034); 
FAILURE(BgL_auxz00_5535,BFALSE,BFALSE);} } 
BgL_arg2037z00_1024 = 
CAR(BgL_pairz00_2373); } } 
{ /* Llib/weakhash.scm 185 */
obj_t BgL_objz00_2374;
if(
BGL_WEAKPTRP(BgL_arg2037z00_1024))
{ /* Llib/weakhash.scm 185 */
BgL_objz00_2374 = BgL_arg2037z00_1024; }  else 
{ 
obj_t BgL_auxz00_5542;
BgL_auxz00_5542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7097)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2037z00_1024); 
FAILURE(BgL_auxz00_5542,BFALSE,BFALSE);} 
BgL_keyz00_1021 = 
weakptr_data(BgL_objz00_2374); } } 
if(
(BgL_keyz00_1021==BUNSPEC))
{ /* Llib/weakhash.scm 186 */
BgL_retz00_1017 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 188 */
obj_t BgL_arg2036z00_1023;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_pairz00_2375;
BgL_pairz00_2375 = BgL_bucketz00_1013; 
{ /* Llib/weakhash.scm 188 */
obj_t BgL_pairz00_2378;
{ /* Llib/weakhash.scm 188 */
obj_t BgL_aux3043z00_4040;
BgL_aux3043z00_4040 = 
CAR(BgL_pairz00_2375); 
if(
PAIRP(BgL_aux3043z00_4040))
{ /* Llib/weakhash.scm 188 */
BgL_pairz00_2378 = BgL_aux3043z00_4040; }  else 
{ 
obj_t BgL_auxz00_5552;
BgL_auxz00_5552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7174)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3043z00_4040); 
FAILURE(BgL_auxz00_5552,BFALSE,BFALSE);} } 
BgL_arg2036z00_1023 = 
CDR(BgL_pairz00_2378); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_42, ((long)2)))
{ /* Llib/weakhash.scm 188 */
BgL_retz00_1017 = 
PROCEDURE_ENTRY(BgL_funz00_42)(BgL_funz00_42, BgL_keyz00_1021, BgL_arg2036z00_1023, BEOA); }  else 
{ /* Llib/weakhash.scm 188 */
FAILURE(BGl_string3563z00zz__weakhashz00,BGl_list3564z00zz__weakhashz00,BgL_funz00_42);} } } 
if(
(BgL_retz00_1017==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 183 */
{ /* Llib/weakhash.scm 183 */
long BgL_arg1969z00_2384;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_arg1970z00_2385;
{ /* Llib/weakhash.scm 183 */
bool_t BgL_testz00_5564;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5565;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_res2569z00_2394;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_aux3047z00_4045;
BgL_aux3047z00_4045 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3047z00_4045))
{ /* Llib/weakhash.scm 183 */
BgL_res2569z00_2394 = BgL_aux3047z00_4045; }  else 
{ 
obj_t BgL_auxz00_5569;
BgL_auxz00_5569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3047z00_4045); 
FAILURE(BgL_auxz00_5569,BFALSE,BFALSE);} } 
BgL_auxz00_5565 = BgL_res2569z00_2394; } 
BgL_testz00_5564 = 
(BgL_auxz00_5565==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5564)
{ /* Llib/weakhash.scm 183 */
int BgL_auxz00_5574;
BgL_auxz00_5574 = 
(int)(((long)0)); 
BgL_arg1970z00_2385 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5574); }  else 
{ /* Llib/weakhash.scm 183 */
BgL_arg1970z00_2385 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 183 */
long BgL_za71za7_2395;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5578;
if(
INTEGERP(BgL_arg1970z00_2385))
{ /* Llib/weakhash.scm 183 */
BgL_auxz00_5578 = BgL_arg1970z00_2385
; }  else 
{ 
obj_t BgL_auxz00_5581;
BgL_auxz00_5581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2385); 
FAILURE(BgL_auxz00_5581,BFALSE,BFALSE);} 
BgL_za71za7_2395 = 
(long)CINT(BgL_auxz00_5578); } 
BgL_arg1969z00_2384 = 
(BgL_za71za7_2395-((long)1)); } } 
{ /* Llib/weakhash.scm 183 */
bool_t BgL_testz00_5587;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5588;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_res2570z00_2403;
{ /* Llib/weakhash.scm 183 */
obj_t BgL_aux3051z00_4049;
BgL_aux3051z00_4049 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3051z00_4049))
{ /* Llib/weakhash.scm 183 */
BgL_res2570z00_2403 = BgL_aux3051z00_4049; }  else 
{ 
obj_t BgL_auxz00_5592;
BgL_auxz00_5592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3051z00_4049); 
FAILURE(BgL_auxz00_5592,BFALSE,BFALSE);} } 
BgL_auxz00_5588 = BgL_res2570z00_2403; } 
BgL_testz00_5587 = 
(BgL_auxz00_5588==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5587)
{ /* Llib/weakhash.scm 183 */
obj_t BgL_auxz00_5599;int BgL_auxz00_5597;
BgL_auxz00_5599 = 
BINT(BgL_arg1969z00_2384); 
BgL_auxz00_5597 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_41, BgL_auxz00_5597, BgL_auxz00_5599); }  else 
{ /* Llib/weakhash.scm 183 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1014))
{ /* Llib/weakhash.scm 183 */
obj_t BgL_arg1972z00_2387;
BgL_arg1972z00_2387 = 
CDR(BgL_bucketz00_1013); 
{ /* Llib/weakhash.scm 183 */
obj_t BgL_pairz00_2405;
if(
PAIRP(BgL_lastzd2bucketzd2_1014))
{ /* Llib/weakhash.scm 183 */
BgL_pairz00_2405 = BgL_lastzd2bucketzd2_1014; }  else 
{ 
obj_t BgL_auxz00_5608;
BgL_auxz00_5608 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_1014); 
FAILURE(BgL_auxz00_5608,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2405, BgL_arg1972z00_2387); } }  else 
{ /* Llib/weakhash.scm 183 */
obj_t BgL_arg1973z00_2388;
BgL_arg1973z00_2388 = 
CDR(BgL_bucketz00_1013); 
{ /* Llib/weakhash.scm 183 */
obj_t BgL_vectorz00_2408;int BgL_kz00_2409;
BgL_vectorz00_2408 = BgL_bucketsz00_1005; 
BgL_kz00_2409 = 
(int)(BgL_iz00_1008); 
{ /* Llib/weakhash.scm 183 */
int BgL_l2719z00_3715;
BgL_l2719z00_3715 = 
VECTOR_LENGTH(BgL_vectorz00_2408); 
if(
BOUND_CHECK(BgL_kz00_2409, BgL_l2719z00_3715))
{ /* Llib/weakhash.scm 183 */
VECTOR_SET(BgL_vectorz00_2408,BgL_kz00_2409,BgL_arg1973z00_2388); }  else 
{ 
obj_t BgL_auxz00_5619;
BgL_auxz00_5619 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)6992)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2409), BgL_vectorz00_2408); 
FAILURE(BgL_auxz00_5619,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5624;
BgL_bucketz00_5624 = 
CDR(BgL_bucketz00_1013); 
BgL_bucketz00_1013 = BgL_bucketz00_5624; 
goto BgL_zc3anonymousza32029ze3z83_1015;} }  else 
{ 
obj_t BgL_lastzd2bucketzd2_5628;obj_t BgL_bucketz00_5626;
BgL_bucketz00_5626 = 
CDR(BgL_bucketz00_1013); 
BgL_lastzd2bucketzd2_5628 = BgL_bucketz00_1013; 
BgL_lastzd2bucketzd2_1014 = BgL_lastzd2bucketzd2_5628; 
BgL_bucketz00_1013 = BgL_bucketz00_5626; 
goto BgL_zc3anonymousza32029ze3z83_1015;} } } } 
{ 
long BgL_iz00_5629;
BgL_iz00_5629 = 
(BgL_iz00_1008+((long)1)); 
BgL_iz00_1008 = BgL_iz00_5629; 
goto BgL_zc3anonymousza32027ze3z83_1009;} } } } } }  else 
{ /* Llib/weakhash.scm 189 */
bool_t BgL_testz00_5631;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_arg2082z00_1102;
{ /* Llib/weakhash.scm 189 */
bool_t BgL_testz00_5632;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5633;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_res2571z00_2420;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_aux3065z00_4063;
BgL_aux3065z00_4063 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3065z00_4063))
{ /* Llib/weakhash.scm 189 */
BgL_res2571z00_2420 = BgL_aux3065z00_4063; }  else 
{ 
obj_t BgL_auxz00_5637;
BgL_auxz00_5637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7220)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3065z00_4063); 
FAILURE(BgL_auxz00_5637,BFALSE,BFALSE);} } 
BgL_auxz00_5633 = BgL_res2571z00_2420; } 
BgL_testz00_5632 = 
(BgL_auxz00_5633==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5632)
{ /* Llib/weakhash.scm 189 */
int BgL_auxz00_5642;
BgL_auxz00_5642 = 
(int)(((long)5)); 
BgL_arg2082z00_1102 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5642); }  else 
{ /* Llib/weakhash.scm 189 */
BgL_arg2082z00_1102 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 189 */
long BgL_n2z00_2422;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5646;
if(
INTEGERP(BgL_arg2082z00_1102))
{ /* Llib/weakhash.scm 189 */
BgL_auxz00_5646 = BgL_arg2082z00_1102
; }  else 
{ 
obj_t BgL_auxz00_5649;
BgL_auxz00_5649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7242)), BGl_string3562z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2082z00_1102); 
FAILURE(BgL_auxz00_5649,BFALSE,BFALSE);} 
BgL_n2z00_2422 = 
(long)CINT(BgL_auxz00_5646); } 
BgL_testz00_5631 = 
(((long)2)==BgL_n2z00_2422); } } 
if(BgL_testz00_5631)
{ /* Llib/weakhash.scm 189 */
obj_t BgL_bucketsz00_1029;
{ /* Llib/weakhash.scm 189 */
bool_t BgL_testz00_5655;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5656;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_res2572z00_2428;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_aux3069z00_4067;
BgL_aux3069z00_4067 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3069z00_4067))
{ /* Llib/weakhash.scm 189 */
BgL_res2572z00_2428 = BgL_aux3069z00_4067; }  else 
{ 
obj_t BgL_auxz00_5660;
BgL_auxz00_5660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3069z00_4067); 
FAILURE(BgL_auxz00_5660,BFALSE,BFALSE);} } 
BgL_auxz00_5656 = BgL_res2572z00_2428; } 
BgL_testz00_5655 = 
(BgL_auxz00_5656==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5655)
{ /* Llib/weakhash.scm 189 */
int BgL_auxz00_5665;
BgL_auxz00_5665 = 
(int)(((long)2)); 
BgL_bucketsz00_1029 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5665); }  else 
{ /* Llib/weakhash.scm 189 */
BgL_bucketsz00_1029 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 189 */
int BgL_bucketszd2lenzd2_1030;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_vectorz00_2429;
if(
VECTORP(BgL_bucketsz00_1029))
{ /* Llib/weakhash.scm 189 */
BgL_vectorz00_2429 = BgL_bucketsz00_1029; }  else 
{ 
obj_t BgL_auxz00_5671;
BgL_auxz00_5671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3562z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1029); 
FAILURE(BgL_auxz00_5671,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1030 = 
VECTOR_LENGTH(BgL_vectorz00_2429); } 
{ /* Llib/weakhash.scm 189 */

{ 
long BgL_iz00_1032;
BgL_iz00_1032 = ((long)0); 
BgL_zc3anonymousza32040ze3z83_1033:
if(
(BgL_iz00_1032==
(long)(BgL_bucketszd2lenzd2_1030)))
{ /* Llib/weakhash.scm 189 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 189 */
{ /* Llib/weakhash.scm 189 */
obj_t BgL_g1844z00_1035;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_vectorz00_2432;int BgL_kz00_2433;
BgL_vectorz00_2432 = BgL_bucketsz00_1029; 
BgL_kz00_2433 = 
(int)(BgL_iz00_1032); 
{ /* Llib/weakhash.scm 189 */
int BgL_l2723z00_3719;
BgL_l2723z00_3719 = 
VECTOR_LENGTH(BgL_vectorz00_2432); 
if(
BOUND_CHECK(BgL_kz00_2433, BgL_l2723z00_3719))
{ /* Llib/weakhash.scm 189 */
BgL_g1844z00_1035 = 
VECTOR_REF(BgL_vectorz00_2432,BgL_kz00_2433); }  else 
{ 
obj_t BgL_auxz00_5684;
BgL_auxz00_5684 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2433), BgL_vectorz00_2432); 
FAILURE(BgL_auxz00_5684,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1037;obj_t BgL_lastzd2bucketzd2_1038;
BgL_bucketz00_1037 = BgL_g1844z00_1035; 
BgL_lastzd2bucketzd2_1038 = BFALSE; 
BgL_zc3anonymousza32042ze3z83_1039:
if(
NULLP(BgL_bucketz00_1037))
{ /* Llib/weakhash.scm 189 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_retz00_1041;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_dataz00_1045;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_arg2051z00_1048;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_pairz00_2435;
if(
PAIRP(BgL_bucketz00_1037))
{ /* Llib/weakhash.scm 191 */
BgL_pairz00_2435 = BgL_bucketz00_1037; }  else 
{ 
obj_t BgL_auxz00_5693;
BgL_auxz00_5693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7303)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1037); 
FAILURE(BgL_auxz00_5693,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_pairz00_2438;
{ /* Llib/weakhash.scm 191 */
obj_t BgL_aux3077z00_4075;
BgL_aux3077z00_4075 = 
CAR(BgL_pairz00_2435); 
if(
PAIRP(BgL_aux3077z00_4075))
{ /* Llib/weakhash.scm 191 */
BgL_pairz00_2438 = BgL_aux3077z00_4075; }  else 
{ 
obj_t BgL_auxz00_5700;
BgL_auxz00_5700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7297)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3077z00_4075); 
FAILURE(BgL_auxz00_5700,BFALSE,BFALSE);} } 
BgL_arg2051z00_1048 = 
CDR(BgL_pairz00_2438); } } 
{ /* Llib/weakhash.scm 191 */
obj_t BgL_objz00_2439;
if(
BGL_WEAKPTRP(BgL_arg2051z00_1048))
{ /* Llib/weakhash.scm 191 */
BgL_objz00_2439 = BgL_arg2051z00_1048; }  else 
{ 
obj_t BgL_auxz00_5707;
BgL_auxz00_5707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7309)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2051z00_1048); 
FAILURE(BgL_auxz00_5707,BFALSE,BFALSE);} 
BgL_dataz00_1045 = 
weakptr_data(BgL_objz00_2439); } } 
if(
(BgL_dataz00_1045==BUNSPEC))
{ /* Llib/weakhash.scm 192 */
BgL_retz00_1041 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 194 */
obj_t BgL_arg2048z00_1047;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_pairz00_2440;
BgL_pairz00_2440 = BgL_bucketz00_1037; 
{ /* Llib/weakhash.scm 194 */
obj_t BgL_pairz00_2443;
{ /* Llib/weakhash.scm 194 */
obj_t BgL_aux3083z00_4081;
BgL_aux3083z00_4081 = 
CAR(BgL_pairz00_2440); 
if(
PAIRP(BgL_aux3083z00_4081))
{ /* Llib/weakhash.scm 194 */
BgL_pairz00_2443 = BgL_aux3083z00_4081; }  else 
{ 
obj_t BgL_auxz00_5717;
BgL_auxz00_5717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7383)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3083z00_4081); 
FAILURE(BgL_auxz00_5717,BFALSE,BFALSE);} } 
BgL_arg2048z00_1047 = 
CAR(BgL_pairz00_2443); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_42, ((long)2)))
{ /* Llib/weakhash.scm 194 */
BgL_retz00_1041 = 
PROCEDURE_ENTRY(BgL_funz00_42)(BgL_funz00_42, BgL_arg2048z00_1047, BgL_dataz00_1045, BEOA); }  else 
{ /* Llib/weakhash.scm 194 */
FAILURE(BGl_string3563z00zz__weakhashz00,BGl_list3573z00zz__weakhashz00,BgL_funz00_42);} } } 
if(
(BgL_retz00_1041==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 189 */
{ /* Llib/weakhash.scm 189 */
long BgL_arg1969z00_2449;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_arg1970z00_2450;
{ /* Llib/weakhash.scm 189 */
bool_t BgL_testz00_5729;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5730;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_res2573z00_2459;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_aux3087z00_4086;
BgL_aux3087z00_4086 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3087z00_4086))
{ /* Llib/weakhash.scm 189 */
BgL_res2573z00_2459 = BgL_aux3087z00_4086; }  else 
{ 
obj_t BgL_auxz00_5734;
BgL_auxz00_5734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3087z00_4086); 
FAILURE(BgL_auxz00_5734,BFALSE,BFALSE);} } 
BgL_auxz00_5730 = BgL_res2573z00_2459; } 
BgL_testz00_5729 = 
(BgL_auxz00_5730==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5729)
{ /* Llib/weakhash.scm 189 */
int BgL_auxz00_5739;
BgL_auxz00_5739 = 
(int)(((long)0)); 
BgL_arg1970z00_2450 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5739); }  else 
{ /* Llib/weakhash.scm 189 */
BgL_arg1970z00_2450 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 189 */
long BgL_za71za7_2460;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5743;
if(
INTEGERP(BgL_arg1970z00_2450))
{ /* Llib/weakhash.scm 189 */
BgL_auxz00_5743 = BgL_arg1970z00_2450
; }  else 
{ 
obj_t BgL_auxz00_5746;
BgL_auxz00_5746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2450); 
FAILURE(BgL_auxz00_5746,BFALSE,BFALSE);} 
BgL_za71za7_2460 = 
(long)CINT(BgL_auxz00_5743); } 
BgL_arg1969z00_2449 = 
(BgL_za71za7_2460-((long)1)); } } 
{ /* Llib/weakhash.scm 189 */
bool_t BgL_testz00_5752;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5753;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_res2574z00_2468;
{ /* Llib/weakhash.scm 189 */
obj_t BgL_aux3091z00_4090;
BgL_aux3091z00_4090 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3091z00_4090))
{ /* Llib/weakhash.scm 189 */
BgL_res2574z00_2468 = BgL_aux3091z00_4090; }  else 
{ 
obj_t BgL_auxz00_5757;
BgL_auxz00_5757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3091z00_4090); 
FAILURE(BgL_auxz00_5757,BFALSE,BFALSE);} } 
BgL_auxz00_5753 = BgL_res2574z00_2468; } 
BgL_testz00_5752 = 
(BgL_auxz00_5753==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5752)
{ /* Llib/weakhash.scm 189 */
obj_t BgL_auxz00_5764;int BgL_auxz00_5762;
BgL_auxz00_5764 = 
BINT(BgL_arg1969z00_2449); 
BgL_auxz00_5762 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_41, BgL_auxz00_5762, BgL_auxz00_5764); }  else 
{ /* Llib/weakhash.scm 189 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1038))
{ /* Llib/weakhash.scm 189 */
obj_t BgL_arg1972z00_2452;
BgL_arg1972z00_2452 = 
CDR(BgL_bucketz00_1037); 
{ /* Llib/weakhash.scm 189 */
obj_t BgL_pairz00_2470;
if(
PAIRP(BgL_lastzd2bucketzd2_1038))
{ /* Llib/weakhash.scm 189 */
BgL_pairz00_2470 = BgL_lastzd2bucketzd2_1038; }  else 
{ 
obj_t BgL_auxz00_5773;
BgL_auxz00_5773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_1038); 
FAILURE(BgL_auxz00_5773,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2470, BgL_arg1972z00_2452); } }  else 
{ /* Llib/weakhash.scm 189 */
obj_t BgL_arg1973z00_2453;
BgL_arg1973z00_2453 = 
CDR(BgL_bucketz00_1037); 
{ /* Llib/weakhash.scm 189 */
obj_t BgL_vectorz00_2473;int BgL_kz00_2474;
BgL_vectorz00_2473 = BgL_bucketsz00_1029; 
BgL_kz00_2474 = 
(int)(BgL_iz00_1032); 
{ /* Llib/weakhash.scm 189 */
int BgL_l2727z00_3723;
BgL_l2727z00_3723 = 
VECTOR_LENGTH(BgL_vectorz00_2473); 
if(
BOUND_CHECK(BgL_kz00_2474, BgL_l2727z00_3723))
{ /* Llib/weakhash.scm 189 */
VECTOR_SET(BgL_vectorz00_2473,BgL_kz00_2474,BgL_arg1973z00_2453); }  else 
{ 
obj_t BgL_auxz00_5784;
BgL_auxz00_5784 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7203)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2474), BgL_vectorz00_2473); 
FAILURE(BgL_auxz00_5784,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5789;
BgL_bucketz00_5789 = 
CDR(BgL_bucketz00_1037); 
BgL_bucketz00_1037 = BgL_bucketz00_5789; 
goto BgL_zc3anonymousza32042ze3z83_1039;} }  else 
{ 
obj_t BgL_lastzd2bucketzd2_5793;obj_t BgL_bucketz00_5791;
BgL_bucketz00_5791 = 
CDR(BgL_bucketz00_1037); 
BgL_lastzd2bucketzd2_5793 = BgL_bucketz00_1037; 
BgL_lastzd2bucketzd2_1038 = BgL_lastzd2bucketzd2_5793; 
BgL_bucketz00_1037 = BgL_bucketz00_5791; 
goto BgL_zc3anonymousza32042ze3z83_1039;} } } } 
{ 
long BgL_iz00_5794;
BgL_iz00_5794 = 
(BgL_iz00_1032+((long)1)); 
BgL_iz00_1032 = BgL_iz00_5794; 
goto BgL_zc3anonymousza32040ze3z83_1033;} } } } } }  else 
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5796;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg2080z00_1100;
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5797;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5798;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2575z00_2485;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3105z00_4104;
BgL_aux3105z00_4104 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3105z00_4104))
{ /* Llib/weakhash.scm 195 */
BgL_res2575z00_2485 = BgL_aux3105z00_4104; }  else 
{ 
obj_t BgL_auxz00_5802;
BgL_auxz00_5802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7434)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3105z00_4104); 
FAILURE(BgL_auxz00_5802,BFALSE,BFALSE);} } 
BgL_auxz00_5798 = BgL_res2575z00_2485; } 
BgL_testz00_5797 = 
(BgL_auxz00_5798==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5797)
{ /* Llib/weakhash.scm 195 */
int BgL_auxz00_5807;
BgL_auxz00_5807 = 
(int)(((long)5)); 
BgL_arg2080z00_1100 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5807); }  else 
{ /* Llib/weakhash.scm 195 */
BgL_arg2080z00_1100 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 195 */
long BgL_n2z00_2487;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5811;
if(
INTEGERP(BgL_arg2080z00_1100))
{ /* Llib/weakhash.scm 195 */
BgL_auxz00_5811 = BgL_arg2080z00_1100
; }  else 
{ 
obj_t BgL_auxz00_5814;
BgL_auxz00_5814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7456)), BGl_string3562z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2080z00_1100); 
FAILURE(BgL_auxz00_5814,BFALSE,BFALSE);} 
BgL_n2z00_2487 = 
(long)CINT(BgL_auxz00_5811); } 
BgL_testz00_5796 = 
(((long)3)==BgL_n2z00_2487); } } 
if(BgL_testz00_5796)
{ /* Llib/weakhash.scm 195 */
obj_t BgL_bucketsz00_1053;
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5820;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5821;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2576z00_2493;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3109z00_4108;
BgL_aux3109z00_4108 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3109z00_4108))
{ /* Llib/weakhash.scm 195 */
BgL_res2576z00_2493 = BgL_aux3109z00_4108; }  else 
{ 
obj_t BgL_auxz00_5825;
BgL_auxz00_5825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3109z00_4108); 
FAILURE(BgL_auxz00_5825,BFALSE,BFALSE);} } 
BgL_auxz00_5821 = BgL_res2576z00_2493; } 
BgL_testz00_5820 = 
(BgL_auxz00_5821==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5820)
{ /* Llib/weakhash.scm 195 */
int BgL_auxz00_5830;
BgL_auxz00_5830 = 
(int)(((long)2)); 
BgL_bucketsz00_1053 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5830); }  else 
{ /* Llib/weakhash.scm 195 */
BgL_bucketsz00_1053 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 195 */
int BgL_bucketszd2lenzd2_1054;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2494;
if(
VECTORP(BgL_bucketsz00_1053))
{ /* Llib/weakhash.scm 195 */
BgL_vectorz00_2494 = BgL_bucketsz00_1053; }  else 
{ 
obj_t BgL_auxz00_5836;
BgL_auxz00_5836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3562z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1053); 
FAILURE(BgL_auxz00_5836,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1054 = 
VECTOR_LENGTH(BgL_vectorz00_2494); } 
{ /* Llib/weakhash.scm 195 */

{ 
long BgL_iz00_1056;
BgL_iz00_1056 = ((long)0); 
BgL_zc3anonymousza32054ze3z83_1057:
if(
(BgL_iz00_1056==
(long)(BgL_bucketszd2lenzd2_1054)))
{ /* Llib/weakhash.scm 195 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 195 */
{ /* Llib/weakhash.scm 195 */
obj_t BgL_g1845z00_1059;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2497;int BgL_kz00_2498;
BgL_vectorz00_2497 = BgL_bucketsz00_1053; 
BgL_kz00_2498 = 
(int)(BgL_iz00_1056); 
{ /* Llib/weakhash.scm 195 */
int BgL_l2731z00_3727;
BgL_l2731z00_3727 = 
VECTOR_LENGTH(BgL_vectorz00_2497); 
if(
BOUND_CHECK(BgL_kz00_2498, BgL_l2731z00_3727))
{ /* Llib/weakhash.scm 195 */
BgL_g1845z00_1059 = 
VECTOR_REF(BgL_vectorz00_2497,BgL_kz00_2498); }  else 
{ 
obj_t BgL_auxz00_5849;
BgL_auxz00_5849 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2498), BgL_vectorz00_2497); 
FAILURE(BgL_auxz00_5849,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1061;obj_t BgL_lastzd2bucketzd2_1062;
BgL_bucketz00_1061 = BgL_g1845z00_1059; 
BgL_lastzd2bucketzd2_1062 = BFALSE; 
BgL_zc3anonymousza32056ze3z83_1063:
if(
NULLP(BgL_bucketz00_1061))
{ /* Llib/weakhash.scm 195 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_retz00_1065;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_keyz00_1069;obj_t BgL_dataz00_1070;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_arg2063z00_1073;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_pairz00_2500;
if(
PAIRP(BgL_bucketz00_1061))
{ /* Llib/weakhash.scm 197 */
BgL_pairz00_2500 = BgL_bucketz00_1061; }  else 
{ 
obj_t BgL_auxz00_5858;
BgL_auxz00_5858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7520)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1061); 
FAILURE(BgL_auxz00_5858,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_pairz00_2503;
{ /* Llib/weakhash.scm 197 */
obj_t BgL_aux3117z00_4116;
BgL_aux3117z00_4116 = 
CAR(BgL_pairz00_2500); 
if(
PAIRP(BgL_aux3117z00_4116))
{ /* Llib/weakhash.scm 197 */
BgL_pairz00_2503 = BgL_aux3117z00_4116; }  else 
{ 
obj_t BgL_auxz00_5865;
BgL_auxz00_5865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7514)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3117z00_4116); 
FAILURE(BgL_auxz00_5865,BFALSE,BFALSE);} } 
BgL_arg2063z00_1073 = 
CAR(BgL_pairz00_2503); } } 
{ /* Llib/weakhash.scm 197 */
obj_t BgL_objz00_2504;
if(
BGL_WEAKPTRP(BgL_arg2063z00_1073))
{ /* Llib/weakhash.scm 197 */
BgL_objz00_2504 = BgL_arg2063z00_1073; }  else 
{ 
obj_t BgL_auxz00_5872;
BgL_auxz00_5872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7526)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2063z00_1073); 
FAILURE(BgL_auxz00_5872,BFALSE,BFALSE);} 
BgL_keyz00_1069 = 
weakptr_data(BgL_objz00_2504); } } 
{ /* Llib/weakhash.scm 198 */
obj_t BgL_arg2064z00_1074;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_pairz00_2505;
BgL_pairz00_2505 = BgL_bucketz00_1061; 
{ /* Llib/weakhash.scm 198 */
obj_t BgL_pairz00_2508;
{ /* Llib/weakhash.scm 198 */
obj_t BgL_aux3123z00_4122;
BgL_aux3123z00_4122 = 
CAR(BgL_pairz00_2505); 
if(
PAIRP(BgL_aux3123z00_4122))
{ /* Llib/weakhash.scm 198 */
BgL_pairz00_2508 = BgL_aux3123z00_4122; }  else 
{ 
obj_t BgL_auxz00_5880;
BgL_auxz00_5880 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7560)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3123z00_4122); 
FAILURE(BgL_auxz00_5880,BFALSE,BFALSE);} } 
BgL_arg2064z00_1074 = 
CDR(BgL_pairz00_2508); } } 
{ /* Llib/weakhash.scm 198 */
obj_t BgL_objz00_2509;
if(
BGL_WEAKPTRP(BgL_arg2064z00_1074))
{ /* Llib/weakhash.scm 198 */
BgL_objz00_2509 = BgL_arg2064z00_1074; }  else 
{ 
obj_t BgL_auxz00_5887;
BgL_auxz00_5887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7572)), BGl_string3558z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2064z00_1074); 
FAILURE(BgL_auxz00_5887,BFALSE,BFALSE);} 
BgL_dataz00_1070 = 
weakptr_data(BgL_objz00_2509); } } 
{ /* Llib/weakhash.scm 199 */
bool_t BgL_testz00_5892;
if(
(BgL_keyz00_1069==BUNSPEC))
{ /* Llib/weakhash.scm 199 */
BgL_testz00_5892 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 199 */
BgL_testz00_5892 = 
(BgL_dataz00_1070==BUNSPEC)
; } 
if(BgL_testz00_5892)
{ /* Llib/weakhash.scm 199 */
BgL_retz00_1065 = BGl_removez00zz__weakhashz00; }  else 
{ /* Llib/weakhash.scm 199 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_42, ((long)2)))
{ /* Llib/weakhash.scm 202 */
BgL_retz00_1065 = 
PROCEDURE_ENTRY(BgL_funz00_42)(BgL_funz00_42, BgL_keyz00_1069, BgL_dataz00_1070, BEOA); }  else 
{ /* Llib/weakhash.scm 202 */
FAILURE(BGl_string3563z00zz__weakhashz00,BGl_list3578z00zz__weakhashz00,BgL_funz00_42);} } } } 
if(
(BgL_retz00_1065==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 195 */
{ /* Llib/weakhash.scm 195 */
long BgL_arg1969z00_2515;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1970z00_2516;
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5903;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5904;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2577z00_2525;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3129z00_4129;
BgL_aux3129z00_4129 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3129z00_4129))
{ /* Llib/weakhash.scm 195 */
BgL_res2577z00_2525 = BgL_aux3129z00_4129; }  else 
{ 
obj_t BgL_auxz00_5908;
BgL_auxz00_5908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3129z00_4129); 
FAILURE(BgL_auxz00_5908,BFALSE,BFALSE);} } 
BgL_auxz00_5904 = BgL_res2577z00_2525; } 
BgL_testz00_5903 = 
(BgL_auxz00_5904==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5903)
{ /* Llib/weakhash.scm 195 */
int BgL_auxz00_5913;
BgL_auxz00_5913 = 
(int)(((long)0)); 
BgL_arg1970z00_2516 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5913); }  else 
{ /* Llib/weakhash.scm 195 */
BgL_arg1970z00_2516 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 195 */
long BgL_za71za7_2526;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5917;
if(
INTEGERP(BgL_arg1970z00_2516))
{ /* Llib/weakhash.scm 195 */
BgL_auxz00_5917 = BgL_arg1970z00_2516
; }  else 
{ 
obj_t BgL_auxz00_5920;
BgL_auxz00_5920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2516); 
FAILURE(BgL_auxz00_5920,BFALSE,BFALSE);} 
BgL_za71za7_2526 = 
(long)CINT(BgL_auxz00_5917); } 
BgL_arg1969z00_2515 = 
(BgL_za71za7_2526-((long)1)); } } 
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5926;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5927;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2578z00_2534;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3133z00_4133;
BgL_aux3133z00_4133 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3133z00_4133))
{ /* Llib/weakhash.scm 195 */
BgL_res2578z00_2534 = BgL_aux3133z00_4133; }  else 
{ 
obj_t BgL_auxz00_5931;
BgL_auxz00_5931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3133z00_4133); 
FAILURE(BgL_auxz00_5931,BFALSE,BFALSE);} } 
BgL_auxz00_5927 = BgL_res2578z00_2534; } 
BgL_testz00_5926 = 
(BgL_auxz00_5927==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5926)
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5938;int BgL_auxz00_5936;
BgL_auxz00_5938 = 
BINT(BgL_arg1969z00_2515); 
BgL_auxz00_5936 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_41, BgL_auxz00_5936, BgL_auxz00_5938); }  else 
{ /* Llib/weakhash.scm 195 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1062))
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1972z00_2518;
BgL_arg1972z00_2518 = 
CDR(BgL_bucketz00_1061); 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_pairz00_2536;
if(
PAIRP(BgL_lastzd2bucketzd2_1062))
{ /* Llib/weakhash.scm 195 */
BgL_pairz00_2536 = BgL_lastzd2bucketzd2_1062; }  else 
{ 
obj_t BgL_auxz00_5947;
BgL_auxz00_5947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_1062); 
FAILURE(BgL_auxz00_5947,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2536, BgL_arg1972z00_2518); } }  else 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1973z00_2519;
BgL_arg1973z00_2519 = 
CDR(BgL_bucketz00_1061); 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2539;int BgL_kz00_2540;
BgL_vectorz00_2539 = BgL_bucketsz00_1053; 
BgL_kz00_2540 = 
(int)(BgL_iz00_1056); 
{ /* Llib/weakhash.scm 195 */
int BgL_l2735z00_3731;
BgL_l2735z00_3731 = 
VECTOR_LENGTH(BgL_vectorz00_2539); 
if(
BOUND_CHECK(BgL_kz00_2540, BgL_l2735z00_3731))
{ /* Llib/weakhash.scm 195 */
VECTOR_SET(BgL_vectorz00_2539,BgL_kz00_2540,BgL_arg1973z00_2519); }  else 
{ 
obj_t BgL_auxz00_5958;
BgL_auxz00_5958 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2540), BgL_vectorz00_2539); 
FAILURE(BgL_auxz00_5958,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_5963;
BgL_bucketz00_5963 = 
CDR(BgL_bucketz00_1061); 
BgL_bucketz00_1061 = BgL_bucketz00_5963; 
goto BgL_zc3anonymousza32056ze3z83_1063;} }  else 
{ 
obj_t BgL_lastzd2bucketzd2_5967;obj_t BgL_bucketz00_5965;
BgL_bucketz00_5965 = 
CDR(BgL_bucketz00_1061); 
BgL_lastzd2bucketzd2_5967 = BgL_bucketz00_1061; 
BgL_lastzd2bucketzd2_1062 = BgL_lastzd2bucketzd2_5967; 
BgL_bucketz00_1061 = BgL_bucketz00_5965; 
goto BgL_zc3anonymousza32056ze3z83_1063;} } } } 
{ 
long BgL_iz00_5968;
BgL_iz00_5968 = 
(BgL_iz00_1056+((long)1)); 
BgL_iz00_1056 = BgL_iz00_5968; 
goto BgL_zc3anonymousza32054ze3z83_1057;} } } } } }  else 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_bucketsz00_1078;
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_5970;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_5971;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2579z00_2551;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3147z00_4147;
BgL_aux3147z00_4147 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3147z00_4147))
{ /* Llib/weakhash.scm 195 */
BgL_res2579z00_2551 = BgL_aux3147z00_4147; }  else 
{ 
obj_t BgL_auxz00_5975;
BgL_auxz00_5975 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3562z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3147z00_4147); 
FAILURE(BgL_auxz00_5975,BFALSE,BFALSE);} } 
BgL_auxz00_5971 = BgL_res2579z00_2551; } 
BgL_testz00_5970 = 
(BgL_auxz00_5971==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_5970)
{ /* Llib/weakhash.scm 195 */
int BgL_auxz00_5980;
BgL_auxz00_5980 = 
(int)(((long)2)); 
BgL_bucketsz00_1078 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_5980); }  else 
{ /* Llib/weakhash.scm 195 */
BgL_bucketsz00_1078 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 195 */
int BgL_bucketszd2lenzd2_1079;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2552;
if(
VECTORP(BgL_bucketsz00_1078))
{ /* Llib/weakhash.scm 195 */
BgL_vectorz00_2552 = BgL_bucketsz00_1078; }  else 
{ 
obj_t BgL_auxz00_5986;
BgL_auxz00_5986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3562z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1078); 
FAILURE(BgL_auxz00_5986,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1079 = 
VECTOR_LENGTH(BgL_vectorz00_2552); } 
{ /* Llib/weakhash.scm 195 */

{ 
long BgL_iz00_1081;
BgL_iz00_1081 = ((long)0); 
BgL_zc3anonymousza32066ze3z83_1082:
if(
(BgL_iz00_1081==
(long)(BgL_bucketszd2lenzd2_1079)))
{ /* Llib/weakhash.scm 195 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 195 */
{ /* Llib/weakhash.scm 195 */
obj_t BgL_g1846z00_1084;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2555;int BgL_kz00_2556;
BgL_vectorz00_2555 = BgL_bucketsz00_1078; 
BgL_kz00_2556 = 
(int)(BgL_iz00_1081); 
{ /* Llib/weakhash.scm 195 */
int BgL_l2739z00_3735;
BgL_l2739z00_3735 = 
VECTOR_LENGTH(BgL_vectorz00_2555); 
if(
BOUND_CHECK(BgL_kz00_2556, BgL_l2739z00_3735))
{ /* Llib/weakhash.scm 195 */
BgL_g1846z00_1084 = 
VECTOR_REF(BgL_vectorz00_2555,BgL_kz00_2556); }  else 
{ 
obj_t BgL_auxz00_5999;
BgL_auxz00_5999 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2556), BgL_vectorz00_2555); 
FAILURE(BgL_auxz00_5999,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1086;obj_t BgL_lastzd2bucketzd2_1087;
BgL_bucketz00_1086 = BgL_g1846z00_1084; 
BgL_lastzd2bucketzd2_1087 = BFALSE; 
BgL_zc3anonymousza32068ze3z83_1088:
if(
NULLP(BgL_bucketz00_1086))
{ /* Llib/weakhash.scm 195 */((bool_t)0); }  else 
{ /* Llib/weakhash.scm 205 */
obj_t BgL_retz00_1090;
{ /* Llib/weakhash.scm 205 */
obj_t BgL_arg2076z00_1094;obj_t BgL_arg2077z00_1095;
{ /* Llib/weakhash.scm 205 */
obj_t BgL_pairz00_2558;
if(
PAIRP(BgL_bucketz00_1086))
{ /* Llib/weakhash.scm 205 */
BgL_pairz00_2558 = BgL_bucketz00_1086; }  else 
{ 
obj_t BgL_auxz00_6008;
BgL_auxz00_6008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7744)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1086); 
FAILURE(BgL_auxz00_6008,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 205 */
obj_t BgL_pairz00_2561;
{ /* Llib/weakhash.scm 205 */
obj_t BgL_aux3155z00_4155;
BgL_aux3155z00_4155 = 
CAR(BgL_pairz00_2558); 
if(
PAIRP(BgL_aux3155z00_4155))
{ /* Llib/weakhash.scm 205 */
BgL_pairz00_2561 = BgL_aux3155z00_4155; }  else 
{ 
obj_t BgL_auxz00_6015;
BgL_auxz00_6015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7738)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3155z00_4155); 
FAILURE(BgL_auxz00_6015,BFALSE,BFALSE);} } 
BgL_arg2076z00_1094 = 
CAR(BgL_pairz00_2561); } } 
{ /* Llib/weakhash.scm 205 */
obj_t BgL_pairz00_2562;
BgL_pairz00_2562 = BgL_bucketz00_1086; 
{ /* Llib/weakhash.scm 205 */
obj_t BgL_pairz00_2565;
{ /* Llib/weakhash.scm 205 */
obj_t BgL_aux3159z00_4159;
BgL_aux3159z00_4159 = 
CAR(BgL_pairz00_2562); 
if(
PAIRP(BgL_aux3159z00_4159))
{ /* Llib/weakhash.scm 205 */
BgL_pairz00_2565 = BgL_aux3159z00_4159; }  else 
{ 
obj_t BgL_auxz00_6023;
BgL_auxz00_6023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7752)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_aux3159z00_4159); 
FAILURE(BgL_auxz00_6023,BFALSE,BFALSE);} } 
BgL_arg2077z00_1095 = 
CDR(BgL_pairz00_2565); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_42, ((long)2)))
{ /* Llib/weakhash.scm 205 */
BgL_retz00_1090 = 
PROCEDURE_ENTRY(BgL_funz00_42)(BgL_funz00_42, BgL_arg2076z00_1094, BgL_arg2077z00_1095, BEOA); }  else 
{ /* Llib/weakhash.scm 205 */
FAILURE(BGl_string3563z00zz__weakhashz00,BGl_list3579z00zz__weakhashz00,BgL_funz00_42);} } 
if(
(BgL_retz00_1090==BGl_removez00zz__weakhashz00))
{ /* Llib/weakhash.scm 195 */
{ /* Llib/weakhash.scm 195 */
long BgL_arg1969z00_2571;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1970z00_2572;
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_6035;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_6036;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2580z00_2581;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3163z00_4164;
BgL_aux3163z00_4164 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3163z00_4164))
{ /* Llib/weakhash.scm 195 */
BgL_res2580z00_2581 = BgL_aux3163z00_4164; }  else 
{ 
obj_t BgL_auxz00_6040;
BgL_auxz00_6040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3163z00_4164); 
FAILURE(BgL_auxz00_6040,BFALSE,BFALSE);} } 
BgL_auxz00_6036 = BgL_res2580z00_2581; } 
BgL_testz00_6035 = 
(BgL_auxz00_6036==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6035)
{ /* Llib/weakhash.scm 195 */
int BgL_auxz00_6045;
BgL_auxz00_6045 = 
(int)(((long)0)); 
BgL_arg1970z00_2572 = 
STRUCT_REF(BgL_tablez00_41, BgL_auxz00_6045); }  else 
{ /* Llib/weakhash.scm 195 */
BgL_arg1970z00_2572 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } 
{ /* Llib/weakhash.scm 195 */
long BgL_za71za7_2582;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_6049;
if(
INTEGERP(BgL_arg1970z00_2572))
{ /* Llib/weakhash.scm 195 */
BgL_auxz00_6049 = BgL_arg1970z00_2572
; }  else 
{ 
obj_t BgL_auxz00_6052;
BgL_auxz00_6052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1970z00_2572); 
FAILURE(BgL_auxz00_6052,BFALSE,BFALSE);} 
BgL_za71za7_2582 = 
(long)CINT(BgL_auxz00_6049); } 
BgL_arg1969z00_2571 = 
(BgL_za71za7_2582-((long)1)); } } 
{ /* Llib/weakhash.scm 195 */
bool_t BgL_testz00_6058;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_6059;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_res2581z00_2590;
{ /* Llib/weakhash.scm 195 */
obj_t BgL_aux3167z00_4168;
BgL_aux3167z00_4168 = 
STRUCT_KEY(BgL_tablez00_41); 
if(
SYMBOLP(BgL_aux3167z00_4168))
{ /* Llib/weakhash.scm 195 */
BgL_res2581z00_2590 = BgL_aux3167z00_4168; }  else 
{ 
obj_t BgL_auxz00_6063;
BgL_auxz00_6063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3167z00_4168); 
FAILURE(BgL_auxz00_6063,BFALSE,BFALSE);} } 
BgL_auxz00_6059 = BgL_res2581z00_2590; } 
BgL_testz00_6058 = 
(BgL_auxz00_6059==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6058)
{ /* Llib/weakhash.scm 195 */
obj_t BgL_auxz00_6070;int BgL_auxz00_6068;
BgL_auxz00_6070 = 
BINT(BgL_arg1969z00_2571); 
BgL_auxz00_6068 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_41, BgL_auxz00_6068, BgL_auxz00_6070); }  else 
{ /* Llib/weakhash.scm 195 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_41); } } } 
if(
CBOOL(BgL_lastzd2bucketzd2_1087))
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1972z00_2574;
BgL_arg1972z00_2574 = 
CDR(BgL_bucketz00_1086); 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_pairz00_2592;
if(
PAIRP(BgL_lastzd2bucketzd2_1087))
{ /* Llib/weakhash.scm 195 */
BgL_pairz00_2592 = BgL_lastzd2bucketzd2_1087; }  else 
{ 
obj_t BgL_auxz00_6079;
BgL_auxz00_6079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3558z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_lastzd2bucketzd2_1087); 
FAILURE(BgL_auxz00_6079,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2592, BgL_arg1972z00_2574); } }  else 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_arg1973z00_2575;
BgL_arg1973z00_2575 = 
CDR(BgL_bucketz00_1086); 
{ /* Llib/weakhash.scm 195 */
obj_t BgL_vectorz00_2595;int BgL_kz00_2596;
BgL_vectorz00_2595 = BgL_bucketsz00_1078; 
BgL_kz00_2596 = 
(int)(BgL_iz00_1081); 
{ /* Llib/weakhash.scm 195 */
int BgL_l2743z00_3739;
BgL_l2743z00_3739 = 
VECTOR_LENGTH(BgL_vectorz00_2595); 
if(
BOUND_CHECK(BgL_kz00_2596, BgL_l2743z00_3739))
{ /* Llib/weakhash.scm 195 */
VECTOR_SET(BgL_vectorz00_2595,BgL_kz00_2596,BgL_arg1973z00_2575); }  else 
{ 
obj_t BgL_auxz00_6090;
BgL_auxz00_6090 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)7417)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2596), BgL_vectorz00_2595); 
FAILURE(BgL_auxz00_6090,BFALSE,BFALSE);} } } } BGl_keepgoingz00zz__weakhashz00; 
{ 
obj_t BgL_bucketz00_6095;
BgL_bucketz00_6095 = 
CDR(BgL_bucketz00_1086); 
BgL_bucketz00_1086 = BgL_bucketz00_6095; 
goto BgL_zc3anonymousza32068ze3z83_1088;} }  else 
{ 
obj_t BgL_lastzd2bucketzd2_6099;obj_t BgL_bucketz00_6097;
BgL_bucketz00_6097 = 
CDR(BgL_bucketz00_1086); 
BgL_lastzd2bucketzd2_6099 = BgL_bucketz00_1086; 
BgL_lastzd2bucketzd2_1087 = BgL_lastzd2bucketzd2_6099; 
BgL_bucketz00_1086 = BgL_bucketz00_6097; 
goto BgL_zc3anonymousza32068ze3z83_1088;} } } } 
{ 
long BgL_iz00_6100;
BgL_iz00_6100 = 
(BgL_iz00_1081+((long)1)); 
BgL_iz00_1081 = BgL_iz00_6100; 
goto BgL_zc3anonymousza32066ze3z83_1082;} } } } } } } } } } 
}



/* weak-hashtable->vector */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t BgL_tablez00_43)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 217 */
{ /* Llib/weakhash.scm 218 */
obj_t BgL_vecz00_1105;obj_t BgL_wz00_1106;
{ /* Llib/weakhash.scm 218 */
long BgL_arg2090z00_1114;
BgL_arg2090z00_1114 = 
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_43); 
BgL_vecz00_1105 = 
make_vector(
(int)(BgL_arg2090z00_1114), BUNSPEC); } 
{ /* Llib/weakhash.scm 219 */
obj_t BgL_cellvalz00_6105;
BgL_cellvalz00_6105 = 
BINT(((long)0)); 
BgL_wz00_1106 = 
MAKE_CELL(BgL_cellvalz00_6105); } 
{ /* Llib/weakhash.scm 222 */
obj_t BgL_zc3anonymousza32086ze3z83_3537;
BgL_zc3anonymousza32086ze3z83_3537 = 
make_fx_procedure(BGl_zc3anonymousza32086ze3z83zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32086ze3z83_3537, 
(int)(((long)0)), BgL_vecz00_1105); 
PROCEDURE_SET(BgL_zc3anonymousza32086ze3z83_3537, 
(int)(((long)1)), BgL_wz00_1106); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_43, BgL_zc3anonymousza32086ze3z83_3537); } 
{ /* Llib/weakhash.scm 224 */
bool_t BgL_testz00_6115;
{ /* Llib/weakhash.scm 224 */
long BgL_arg2089z00_1113;
BgL_arg2089z00_1113 = 
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_tablez00_43); 
{ /* Llib/weakhash.scm 224 */
long BgL_n1z00_2608;
{ /* Llib/weakhash.scm 224 */
obj_t BgL_auxz00_6117;
{ /* Llib/weakhash.scm 224 */
obj_t BgL_aux3181z00_4183;
BgL_aux3181z00_4183 = 
CELL_REF(BgL_wz00_1106); 
if(
INTEGERP(BgL_aux3181z00_4183))
{ /* Llib/weakhash.scm 224 */
BgL_auxz00_6117 = BgL_aux3181z00_4183
; }  else 
{ 
obj_t BgL_auxz00_6120;
BgL_auxz00_6120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8475)), BGl_string3584z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3181z00_4183); 
FAILURE(BgL_auxz00_6120,BFALSE,BFALSE);} } 
BgL_n1z00_2608 = 
(long)CINT(BgL_auxz00_6117); } 
BgL_testz00_6115 = 
(BgL_n1z00_2608<BgL_arg2089z00_1113); } } 
if(BgL_testz00_6115)
{ /* Llib/weakhash.scm 225 */
int BgL_auxz00_6126;
{ /* Llib/weakhash.scm 225 */
obj_t BgL_auxz00_6127;
{ /* Llib/weakhash.scm 225 */
obj_t BgL_aux3183z00_4185;
BgL_aux3183z00_4185 = 
CELL_REF(BgL_wz00_1106); 
if(
INTEGERP(BgL_aux3183z00_4185))
{ /* Llib/weakhash.scm 225 */
BgL_auxz00_6127 = BgL_aux3183z00_4185
; }  else 
{ 
obj_t BgL_auxz00_6130;
BgL_auxz00_6130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8521)), BGl_string3584z00zz__weakhashz00, BGl_string3585z00zz__weakhashz00, BgL_aux3183z00_4185); 
FAILURE(BgL_auxz00_6130,BFALSE,BFALSE);} } 
BgL_auxz00_6126 = 
CINT(BgL_auxz00_6127); } 
return 
BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_vecz00_1105, BgL_auxz00_6126);}  else 
{ /* Llib/weakhash.scm 224 */
return BgL_vecz00_1105;} } } } 
}



/* _weak-hashtable->vector */
obj_t BGl__weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t BgL_envz00_3538, obj_t BgL_tablez00_3539)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 217 */
{ /* Llib/weakhash.scm 218 */
obj_t BgL_auxz00_6136;
if(
STRUCTP(BgL_tablez00_3539))
{ /* Llib/weakhash.scm 218 */
BgL_auxz00_6136 = BgL_tablez00_3539
; }  else 
{ 
obj_t BgL_auxz00_6139;
BgL_auxz00_6139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8299)), BGl_string3586z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3539); 
FAILURE(BgL_auxz00_6139,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_auxz00_6136);} } 
}



/* <anonymous:2086> */
obj_t BGl_zc3anonymousza32086ze3z83zz__weakhashz00(obj_t BgL_envz00_3540, obj_t BgL_keyz00_3543, obj_t BgL_valz00_3544)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 221 */
{ /* Llib/weakhash.scm 222 */
obj_t BgL_vecz00_3541;obj_t BgL_wz00_3542;
BgL_vecz00_3541 = 
PROCEDURE_REF(BgL_envz00_3540, 
(int)(((long)0))); 
BgL_wz00_3542 = 
PROCEDURE_REF(BgL_envz00_3540, 
(int)(((long)1))); 
{ 
obj_t BgL_keyz00_1108;obj_t BgL_valz00_1109;
BgL_keyz00_1108 = BgL_keyz00_3543; 
BgL_valz00_1109 = BgL_valz00_3544; 
{ /* Llib/weakhash.scm 222 */
obj_t BgL_vectorz00_2603;int BgL_kz00_2604;
if(
VECTORP(BgL_vecz00_3541))
{ /* Llib/weakhash.scm 222 */
BgL_vectorz00_2603 = BgL_vecz00_3541; }  else 
{ 
obj_t BgL_auxz00_6150;
BgL_auxz00_6150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8425)), BGl_string3588z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_vecz00_3541); 
FAILURE(BgL_auxz00_6150,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 222 */
obj_t BgL_auxz00_6154;
{ /* Llib/weakhash.scm 222 */
obj_t BgL_aux3189z00_4191;
BgL_aux3189z00_4191 = 
CELL_REF(BgL_wz00_3542); 
if(
INTEGERP(BgL_aux3189z00_4191))
{ /* Llib/weakhash.scm 222 */
BgL_auxz00_6154 = BgL_aux3189z00_4191
; }  else 
{ 
obj_t BgL_auxz00_6157;
BgL_auxz00_6157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8429)), BGl_string3588z00zz__weakhashz00, BGl_string3585z00zz__weakhashz00, BgL_aux3189z00_4191); 
FAILURE(BgL_auxz00_6157,BFALSE,BFALSE);} } 
BgL_kz00_2604 = 
CINT(BgL_auxz00_6154); } 
{ /* Llib/weakhash.scm 222 */
int BgL_l2747z00_3743;
BgL_l2747z00_3743 = 
VECTOR_LENGTH(BgL_vectorz00_2603); 
if(
BOUND_CHECK(BgL_kz00_2604, BgL_l2747z00_3743))
{ /* Llib/weakhash.scm 222 */
VECTOR_SET(BgL_vectorz00_2603,BgL_kz00_2604,BgL_valz00_1109); }  else 
{ 
obj_t BgL_auxz00_6166;
BgL_auxz00_6166 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8412)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2604), BgL_vectorz00_2603); 
FAILURE(BgL_auxz00_6166,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 223 */
obj_t BgL_auxz00_3545;
{ /* Llib/weakhash.scm 223 */
long BgL_za71za7_2606;
{ /* Llib/weakhash.scm 223 */
obj_t BgL_auxz00_6171;
{ /* Llib/weakhash.scm 223 */
obj_t BgL_aux3191z00_4193;
BgL_aux3191z00_4193 = 
CELL_REF(BgL_wz00_3542); 
if(
INTEGERP(BgL_aux3191z00_4193))
{ /* Llib/weakhash.scm 223 */
BgL_auxz00_6171 = BgL_aux3191z00_4193
; }  else 
{ 
obj_t BgL_auxz00_6174;
BgL_auxz00_6174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8447)), BGl_string3588z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3191z00_4193); 
FAILURE(BgL_auxz00_6174,BFALSE,BFALSE);} } 
BgL_za71za7_2606 = 
(long)CINT(BgL_auxz00_6171); } 
BgL_auxz00_3545 = 
BINT(
(BgL_za71za7_2606+((long)1))); } 
return 
CELL_SET(BgL_wz00_3542, BgL_auxz00_3545);} } } } 
}



/* weak-hashtable->list */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t BgL_tablez00_44)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 231 */
{ /* Llib/weakhash.scm 232 */
obj_t BgL_resz00_1116;
BgL_resz00_1116 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 235 */
obj_t BgL_zc3anonymousza32093ze3z83_3546;
BgL_zc3anonymousza32093ze3z83_3546 = 
make_fx_procedure(BGl_zc3anonymousza32093ze3z83zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32093ze3z83_3546, 
(int)(((long)0)), BgL_resz00_1116); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_44, BgL_zc3anonymousza32093ze3z83_3546); } 
{ /* Llib/weakhash.scm 236 */
obj_t BgL_aux3193z00_4195;
BgL_aux3193z00_4195 = 
CELL_REF(BgL_resz00_1116); 
{ /* Llib/weakhash.scm 236 */
bool_t BgL_testz00_6187;
if(
PAIRP(BgL_aux3193z00_4195))
{ /* Llib/weakhash.scm 236 */
BgL_testz00_6187 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 236 */
BgL_testz00_6187 = 
NULLP(BgL_aux3193z00_4195)
; } 
if(BgL_testz00_6187)
{ /* Llib/weakhash.scm 236 */
return BgL_aux3193z00_4195;}  else 
{ 
obj_t BgL_auxz00_6191;
BgL_auxz00_6191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8911)), BGl_string3589z00zz__weakhashz00, BGl_string3590z00zz__weakhashz00, BgL_aux3193z00_4195); 
FAILURE(BgL_auxz00_6191,BFALSE,BFALSE);} } } } } 
}



/* _weak-hashtable->list */
obj_t BGl__weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t BgL_envz00_3547, obj_t BgL_tablez00_3548)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 231 */
{ /* Llib/weakhash.scm 232 */
obj_t BgL_auxz00_6195;
if(
STRUCTP(BgL_tablez00_3548))
{ /* Llib/weakhash.scm 232 */
BgL_auxz00_6195 = BgL_tablez00_3548
; }  else 
{ 
obj_t BgL_auxz00_6198;
BgL_auxz00_6198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)8805)), BGl_string3591z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3548); 
FAILURE(BgL_auxz00_6198,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_auxz00_6195);} } 
}



/* <anonymous:2093> */
obj_t BGl_zc3anonymousza32093ze3z83zz__weakhashz00(obj_t BgL_envz00_3549, obj_t BgL_keyz00_3551, obj_t BgL_valz00_3552)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 234 */
{ /* Llib/weakhash.scm 235 */
obj_t BgL_resz00_3550;
BgL_resz00_3550 = 
PROCEDURE_REF(BgL_envz00_3549, 
(int)(((long)0))); 
{ 
obj_t BgL_keyz00_1118;obj_t BgL_valz00_1119;
BgL_keyz00_1118 = BgL_keyz00_3551; 
BgL_valz00_1119 = BgL_valz00_3552; 
{ /* Llib/weakhash.scm 235 */
obj_t BgL_auxz00_3553;
BgL_auxz00_3553 = 
MAKE_PAIR(BgL_valz00_1119, 
CELL_REF(BgL_resz00_3550)); 
return 
CELL_SET(BgL_resz00_3550, BgL_auxz00_3553);} } } } 
}



/* weak-hashtable-key-list */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t BgL_tablez00_45)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 241 */
{ /* Llib/weakhash.scm 242 */
obj_t BgL_resz00_1122;
BgL_resz00_1122 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 245 */
obj_t BgL_zc3anonymousza32095ze3z83_3554;
BgL_zc3anonymousza32095ze3z83_3554 = 
make_fx_procedure(BGl_zc3anonymousza32095ze3z83zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32095ze3z83_3554, 
(int)(((long)0)), BgL_resz00_1122); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_45, BgL_zc3anonymousza32095ze3z83_3554); } 
{ /* Llib/weakhash.scm 246 */
obj_t BgL_aux3197z00_4199;
BgL_aux3197z00_4199 = 
CELL_REF(BgL_resz00_1122); 
{ /* Llib/weakhash.scm 246 */
bool_t BgL_testz00_6212;
if(
PAIRP(BgL_aux3197z00_4199))
{ /* Llib/weakhash.scm 246 */
BgL_testz00_6212 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 246 */
BgL_testz00_6212 = 
NULLP(BgL_aux3197z00_4199)
; } 
if(BgL_testz00_6212)
{ /* Llib/weakhash.scm 246 */
return BgL_aux3197z00_4199;}  else 
{ 
obj_t BgL_auxz00_6216;
BgL_auxz00_6216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)9297)), BGl_string3592z00zz__weakhashz00, BGl_string3590z00zz__weakhashz00, BgL_aux3197z00_4199); 
FAILURE(BgL_auxz00_6216,BFALSE,BFALSE);} } } } } 
}



/* _weak-hashtable-key-list */
obj_t BGl__weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t BgL_envz00_3555, obj_t BgL_tablez00_3556)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 241 */
{ /* Llib/weakhash.scm 242 */
obj_t BgL_auxz00_6220;
if(
STRUCTP(BgL_tablez00_3556))
{ /* Llib/weakhash.scm 242 */
BgL_auxz00_6220 = BgL_tablez00_3556
; }  else 
{ 
obj_t BgL_auxz00_6223;
BgL_auxz00_6223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)9191)), BGl_string3593z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3556); 
FAILURE(BgL_auxz00_6223,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_auxz00_6220);} } 
}



/* <anonymous:2095> */
obj_t BGl_zc3anonymousza32095ze3z83zz__weakhashz00(obj_t BgL_envz00_3557, obj_t BgL_keyz00_3559, obj_t BgL_valz00_3560)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 244 */
{ /* Llib/weakhash.scm 245 */
obj_t BgL_resz00_3558;
BgL_resz00_3558 = 
PROCEDURE_REF(BgL_envz00_3557, 
(int)(((long)0))); 
{ 
obj_t BgL_keyz00_1124;obj_t BgL_valz00_1125;
BgL_keyz00_1124 = BgL_keyz00_3559; 
BgL_valz00_1125 = BgL_valz00_3560; 
{ /* Llib/weakhash.scm 245 */
obj_t BgL_auxz00_3561;
BgL_auxz00_3561 = 
MAKE_PAIR(BgL_keyz00_1124, 
CELL_REF(BgL_resz00_3558)); 
return 
CELL_SET(BgL_resz00_3558, BgL_auxz00_3561);} } } } 
}



/* weak-hashtable-map */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t BgL_tablez00_47, obj_t BgL_funz00_48)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 268 */
{ /* Llib/weakhash.scm 269 */
obj_t BgL_resz00_2610;
BgL_resz00_2610 = 
MAKE_CELL(BNIL); 
{ /* Llib/weakhash.scm 269 */
obj_t BgL_zc3anonymousza32107ze3z83_3562;
BgL_zc3anonymousza32107ze3z83_3562 = 
make_fx_procedure(BGl_zc3anonymousza32107ze3z83zz__weakhashz00, 
(int)(((long)2)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32107ze3z83_3562, 
(int)(((long)0)), BgL_funz00_48); 
PROCEDURE_SET(BgL_zc3anonymousza32107ze3z83_3562, 
(int)(((long)1)), BgL_resz00_2610); 
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_47, BgL_zc3anonymousza32107ze3z83_3562); } 
{ /* Llib/weakhash.scm 269 */
obj_t BgL_aux3201z00_4203;
BgL_aux3201z00_4203 = 
CELL_REF(BgL_resz00_2610); 
{ /* Llib/weakhash.scm 269 */
bool_t BgL_testz00_6239;
if(
PAIRP(BgL_aux3201z00_4203))
{ /* Llib/weakhash.scm 269 */
BgL_testz00_6239 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 269 */
BgL_testz00_6239 = 
NULLP(BgL_aux3201z00_4203)
; } 
if(BgL_testz00_6239)
{ /* Llib/weakhash.scm 269 */
return BgL_aux3201z00_4203;}  else 
{ 
obj_t BgL_auxz00_6243;
BgL_auxz00_6243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10235)), BGl_string3594z00zz__weakhashz00, BGl_string3590z00zz__weakhashz00, BgL_aux3201z00_4203); 
FAILURE(BgL_auxz00_6243,BFALSE,BFALSE);} } } } } 
}



/* _weak-hashtable-map */
obj_t BGl__weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t BgL_envz00_3563, obj_t BgL_tablez00_3564, obj_t BgL_funz00_3565)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 268 */
{ /* Llib/weakhash.scm 269 */
obj_t BgL_auxz00_6254;obj_t BgL_auxz00_6247;
if(
PROCEDUREP(BgL_funz00_3565))
{ /* Llib/weakhash.scm 269 */
BgL_auxz00_6254 = BgL_funz00_3565
; }  else 
{ 
obj_t BgL_auxz00_6257;
BgL_auxz00_6257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10235)), BGl_string3595z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_funz00_3565); 
FAILURE(BgL_auxz00_6257,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3564))
{ /* Llib/weakhash.scm 269 */
BgL_auxz00_6247 = BgL_tablez00_3564
; }  else 
{ 
obj_t BgL_auxz00_6250;
BgL_auxz00_6250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10235)), BGl_string3595z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3564); 
FAILURE(BgL_auxz00_6250,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_auxz00_6247, BgL_auxz00_6254);} } 
}



/* <anonymous:2107> */
obj_t BGl_zc3anonymousza32107ze3z83zz__weakhashz00(obj_t BgL_envz00_3566, obj_t BgL_keyz00_3569, obj_t BgL_valz00_3570)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 271 */
{ /* Llib/weakhash.scm 269 */
obj_t BgL_funz00_3567;obj_t BgL_resz00_3568;
BgL_funz00_3567 = 
PROCEDURE_REF(BgL_envz00_3566, 
(int)(((long)0))); 
BgL_resz00_3568 = 
PROCEDURE_REF(BgL_envz00_3566, 
(int)(((long)1))); 
{ 
obj_t BgL_keyz00_2612;obj_t BgL_valz00_2613;
BgL_keyz00_2612 = BgL_keyz00_3569; 
BgL_valz00_2613 = BgL_valz00_3570; 
{ /* Llib/weakhash.scm 269 */
obj_t BgL_auxz00_3571;
{ /* Llib/weakhash.scm 269 */
obj_t BgL_arg2108z00_2615;
{ /* Llib/weakhash.scm 269 */
obj_t BgL_funz00_4211;
if(
PROCEDUREP(BgL_funz00_3567))
{ /* Llib/weakhash.scm 269 */
BgL_funz00_4211 = BgL_funz00_3567; }  else 
{ 
obj_t BgL_auxz00_6268;
BgL_auxz00_6268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10235)), BGl_string3597z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_funz00_3567); 
FAILURE(BgL_auxz00_6268,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4211, ((long)2)))
{ /* Llib/weakhash.scm 269 */
BgL_arg2108z00_2615 = 
PROCEDURE_ENTRY(BgL_funz00_4211)(BgL_funz00_3567, BgL_keyz00_2612, BgL_valz00_2613, BEOA); }  else 
{ /* Llib/weakhash.scm 269 */
FAILURE(BGl_string3598z00zz__weakhashz00,BGl_list3599z00zz__weakhashz00,BgL_funz00_4211);} } 
BgL_auxz00_3571 = 
MAKE_PAIR(BgL_arg2108z00_2615, 
CELL_REF(BgL_resz00_3568)); } 
return 
CELL_SET(BgL_resz00_3568, BgL_auxz00_3571);} } } } 
}



/* weak-hashtable-for-each */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t BgL_tablez00_49, obj_t BgL_funz00_50)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 278 */
return 
BBOOL(
BGl_traversezd2hashzd2zz__weakhashz00(BgL_tablez00_49, BgL_funz00_50));} 
}



/* _weak-hashtable-for-each */
obj_t BGl__weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t BgL_envz00_3572, obj_t BgL_tablez00_3573, obj_t BgL_funz00_3574)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 278 */
{ /* Llib/weakhash.scm 279 */
obj_t BgL_auxz00_6287;obj_t BgL_auxz00_6280;
if(
PROCEDUREP(BgL_funz00_3574))
{ /* Llib/weakhash.scm 279 */
BgL_auxz00_6287 = BgL_funz00_3574
; }  else 
{ 
obj_t BgL_auxz00_6290;
BgL_auxz00_6290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10646)), BGl_string3602z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_funz00_3574); 
FAILURE(BgL_auxz00_6290,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3573))
{ /* Llib/weakhash.scm 279 */
BgL_auxz00_6280 = BgL_tablez00_3573
; }  else 
{ 
obj_t BgL_auxz00_6283;
BgL_auxz00_6283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10646)), BGl_string3602z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3573); 
FAILURE(BgL_auxz00_6283,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_auxz00_6280, BgL_auxz00_6287);} } 
}



/* weak-hashtable-filter! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t BgL_tablez00_51, obj_t BgL_funz00_52)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 284 */
{ /* Llib/weakhash.scm 285 */
obj_t BgL_bucketsz00_1158;
{ /* Llib/weakhash.scm 285 */
bool_t BgL_testz00_6295;
{ /* Llib/weakhash.scm 285 */
obj_t BgL_auxz00_6296;
{ /* Llib/weakhash.scm 285 */
obj_t BgL_res2583z00_2621;
{ /* Llib/weakhash.scm 285 */
obj_t BgL_aux3215z00_4218;
BgL_aux3215z00_4218 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux3215z00_4218))
{ /* Llib/weakhash.scm 285 */
BgL_res2583z00_2621 = BgL_aux3215z00_4218; }  else 
{ 
obj_t BgL_auxz00_6300;
BgL_auxz00_6300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10977)), BGl_string3603z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3215z00_4218); 
FAILURE(BgL_auxz00_6300,BFALSE,BFALSE);} } 
BgL_auxz00_6296 = BgL_res2583z00_2621; } 
BgL_testz00_6295 = 
(BgL_auxz00_6296==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6295)
{ /* Llib/weakhash.scm 285 */
int BgL_auxz00_6305;
BgL_auxz00_6305 = 
(int)(((long)2)); 
BgL_bucketsz00_1158 = 
STRUCT_REF(BgL_tablez00_51, BgL_auxz00_6305); }  else 
{ /* Llib/weakhash.scm 285 */
BgL_bucketsz00_1158 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_51); } } 
{ /* Llib/weakhash.scm 285 */
int BgL_bucketszd2lenzd2_1159;
{ /* Llib/weakhash.scm 286 */
obj_t BgL_vectorz00_2622;
if(
VECTORP(BgL_bucketsz00_1158))
{ /* Llib/weakhash.scm 286 */
BgL_vectorz00_2622 = BgL_bucketsz00_1158; }  else 
{ 
obj_t BgL_auxz00_6311;
BgL_auxz00_6311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)11036)), BGl_string3603z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1158); 
FAILURE(BgL_auxz00_6311,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1159 = 
VECTOR_LENGTH(BgL_vectorz00_2622); } 
{ /* Llib/weakhash.scm 286 */

{ 
long BgL_iz00_1161;
{ /* Llib/weakhash.scm 287 */
bool_t BgL_auxz00_6316;
BgL_iz00_1161 = ((long)0); 
BgL_zc3anonymousza32109ze3z83_1162:
if(
(BgL_iz00_1161<
(long)(BgL_bucketszd2lenzd2_1159)))
{ /* Llib/weakhash.scm 288 */
{ /* Llib/weakhash.scm 292 */
obj_t BgL_zc3anonymousza32112ze3z83_3575;
{ 
int BgL_auxz00_6320;
BgL_auxz00_6320 = 
(int)(((long)1)); 
BgL_zc3anonymousza32112ze3z83_3575 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32112ze3z83zz__weakhashz00, BgL_auxz00_6320); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32112ze3z83_3575, 
(int)(((long)0)), BgL_funz00_52); 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_51, BgL_bucketsz00_1158, BgL_iz00_1161, BgL_zc3anonymousza32112ze3z83_3575); } 
{ 
long BgL_iz00_6326;
BgL_iz00_6326 = 
(BgL_iz00_1161+((long)1)); 
BgL_iz00_1161 = BgL_iz00_6326; 
goto BgL_zc3anonymousza32109ze3z83_1162;} }  else 
{ /* Llib/weakhash.scm 288 */
BgL_auxz00_6316 = ((bool_t)0)
; } 
return 
BBOOL(BgL_auxz00_6316);} } } } } } 
}



/* _weak-hashtable-filter! */
obj_t BGl__weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t BgL_envz00_3576, obj_t BgL_tablez00_3577, obj_t BgL_funz00_3578)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 284 */
{ /* Llib/weakhash.scm 285 */
obj_t BgL_auxz00_6336;obj_t BgL_auxz00_6329;
if(
PROCEDUREP(BgL_funz00_3578))
{ /* Llib/weakhash.scm 285 */
BgL_auxz00_6336 = BgL_funz00_3578
; }  else 
{ 
obj_t BgL_auxz00_6339;
BgL_auxz00_6339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10961)), BGl_string3604z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_funz00_3578); 
FAILURE(BgL_auxz00_6339,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3577))
{ /* Llib/weakhash.scm 285 */
BgL_auxz00_6329 = BgL_tablez00_3577
; }  else 
{ 
obj_t BgL_auxz00_6332;
BgL_auxz00_6332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)10961)), BGl_string3604z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3577); 
FAILURE(BgL_auxz00_6332,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_auxz00_6329, BgL_auxz00_6336);} } 
}



/* <anonymous:2112> */
obj_t BGl_zc3anonymousza32112ze3z83zz__weakhashz00(obj_t BgL_envz00_3579, obj_t BgL_keyz00_3581, obj_t BgL_valz00_3582, obj_t BgL_bucketz00_3583)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 291 */
{ /* Llib/weakhash.scm 292 */
obj_t BgL_funz00_3580;
BgL_funz00_3580 = 
PROCEDURE_L_REF(BgL_envz00_3579, 
(int)(((long)0))); 
{ 
obj_t BgL_keyz00_1165;obj_t BgL_valz00_1166;obj_t BgL_bucketz00_1167;
BgL_keyz00_1165 = BgL_keyz00_3581; 
BgL_valz00_1166 = BgL_valz00_3582; 
BgL_bucketz00_1167 = BgL_bucketz00_3583; 
{ /* Llib/weakhash.scm 292 */
bool_t BgL_testz00_6346;
{ /* Llib/weakhash.scm 292 */
obj_t BgL_funz00_4228;
if(
PROCEDUREP(BgL_funz00_3580))
{ /* Llib/weakhash.scm 292 */
BgL_funz00_4228 = BgL_funz00_3580; }  else 
{ 
obj_t BgL_auxz00_6349;
BgL_auxz00_6349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)11190)), BGl_string3605z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_funz00_3580); 
FAILURE(BgL_auxz00_6349,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4228, ((long)2)))
{ /* Llib/weakhash.scm 292 */
BgL_testz00_6346 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4228)(BgL_funz00_3580, BgL_keyz00_1165, BgL_valz00_1166, BEOA))
; }  else 
{ /* Llib/weakhash.scm 292 */
FAILURE(BGl_string3606z00zz__weakhashz00,BGl_list3599z00zz__weakhashz00,BgL_funz00_4228);} } 
if(BgL_testz00_6346)
{ /* Llib/weakhash.scm 292 */
return BGl_keepgoingz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 292 */
return BGl_removez00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-contains? */
BGL_EXPORTED_DEF bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t BgL_tablez00_55, obj_t BgL_keyz00_56)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 319 */
{ /* Llib/weakhash.scm 320 */
obj_t BgL_bucketsz00_1196;
{ /* Llib/weakhash.scm 320 */
bool_t BgL_testz00_6359;
{ /* Llib/weakhash.scm 320 */
obj_t BgL_auxz00_6360;
{ /* Llib/weakhash.scm 320 */
obj_t BgL_res2584z00_2633;
{ /* Llib/weakhash.scm 320 */
obj_t BgL_aux3227z00_4231;
BgL_aux3227z00_4231 = 
STRUCT_KEY(BgL_tablez00_55); 
if(
SYMBOLP(BgL_aux3227z00_4231))
{ /* Llib/weakhash.scm 320 */
BgL_res2584z00_2633 = BgL_aux3227z00_4231; }  else 
{ 
obj_t BgL_auxz00_6364;
BgL_auxz00_6364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12477)), BGl_string3607z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3227z00_4231); 
FAILURE(BgL_auxz00_6364,BFALSE,BFALSE);} } 
BgL_auxz00_6360 = BgL_res2584z00_2633; } 
BgL_testz00_6359 = 
(BgL_auxz00_6360==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6359)
{ /* Llib/weakhash.scm 320 */
int BgL_auxz00_6369;
BgL_auxz00_6369 = 
(int)(((long)2)); 
BgL_bucketsz00_1196 = 
STRUCT_REF(BgL_tablez00_55, BgL_auxz00_6369); }  else 
{ /* Llib/weakhash.scm 320 */
BgL_bucketsz00_1196 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_55); } } 
{ /* Llib/weakhash.scm 320 */
int BgL_bucketzd2lenzd2_1197;
{ /* Llib/weakhash.scm 321 */
obj_t BgL_vectorz00_2634;
if(
VECTORP(BgL_bucketsz00_1196))
{ /* Llib/weakhash.scm 321 */
BgL_vectorz00_2634 = BgL_bucketsz00_1196; }  else 
{ 
obj_t BgL_auxz00_6375;
BgL_auxz00_6375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12535)), BGl_string3607z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1196); 
FAILURE(BgL_auxz00_6375,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1197 = 
VECTOR_LENGTH(BgL_vectorz00_2634); } 
{ /* Llib/weakhash.scm 321 */
long BgL_bucketzd2numzd2_1198;
{ /* Llib/weakhash.scm 322 */
long BgL_arg2135z00_1208;
{ /* Llib/weakhash.scm 322 */
long BgL_res2587z00_2653;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_hashnz00_2637;
{ /* Llib/weakhash.scm 322 */
bool_t BgL_testz00_6380;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_auxz00_6381;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_res2585z00_2645;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_aux3231z00_4235;
BgL_aux3231z00_4235 = 
STRUCT_KEY(BgL_tablez00_55); 
if(
SYMBOLP(BgL_aux3231z00_4235))
{ /* Llib/weakhash.scm 322 */
BgL_res2585z00_2645 = BgL_aux3231z00_4235; }  else 
{ 
obj_t BgL_auxz00_6385;
BgL_auxz00_6385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12573)), BGl_string3607z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3231z00_4235); 
FAILURE(BgL_auxz00_6385,BFALSE,BFALSE);} } 
BgL_auxz00_6381 = BgL_res2585z00_2645; } 
BgL_testz00_6380 = 
(BgL_auxz00_6381==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6380)
{ /* Llib/weakhash.scm 322 */
int BgL_auxz00_6390;
BgL_auxz00_6390 = 
(int)(((long)4)); 
BgL_hashnz00_2637 = 
STRUCT_REF(BgL_tablez00_55, BgL_auxz00_6390); }  else 
{ /* Llib/weakhash.scm 322 */
BgL_hashnz00_2637 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_55); } } 
if(
PROCEDUREP(BgL_hashnz00_2637))
{ /* Llib/weakhash.scm 322 */
obj_t BgL_arg1965z00_2639;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_funz00_4237;
BgL_funz00_4237 = BgL_hashnz00_2637; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4237, ((long)1)))
{ /* Llib/weakhash.scm 322 */
BgL_arg1965z00_2639 = 
PROCEDURE_ENTRY(BgL_funz00_4237)(BgL_hashnz00_2637, BgL_keyz00_56, BEOA); }  else 
{ /* Llib/weakhash.scm 322 */
FAILURE(BGl_string3608z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4237);} } 
{ /* Llib/weakhash.scm 322 */
long BgL_nz00_2647;
{ /* Llib/weakhash.scm 322 */
obj_t BgL_auxz00_6401;
if(
INTEGERP(BgL_arg1965z00_2639))
{ /* Llib/weakhash.scm 322 */
BgL_auxz00_6401 = BgL_arg1965z00_2639
; }  else 
{ 
obj_t BgL_auxz00_6404;
BgL_auxz00_6404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12573)), BGl_string3607z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_2639); 
FAILURE(BgL_auxz00_6404,BFALSE,BFALSE);} 
BgL_nz00_2647 = 
(long)CINT(BgL_auxz00_6401); } 
if(
(BgL_nz00_2647<((long)0)))
{ /* Llib/weakhash.scm 322 */
BgL_res2587z00_2653 = 
NEG(BgL_nz00_2647); }  else 
{ /* Llib/weakhash.scm 322 */
BgL_res2587z00_2653 = BgL_nz00_2647; } } }  else 
{ /* Llib/weakhash.scm 322 */
BgL_res2587z00_2653 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_56); } } 
BgL_arg2135z00_1208 = BgL_res2587z00_2653; } 
{ /* Llib/weakhash.scm 322 */
long BgL_auxz00_6413;
BgL_auxz00_6413 = 
(long)(BgL_bucketzd2lenzd2_1197); 
BgL_bucketzd2numzd2_1198 = 
(BgL_arg2135z00_1208%BgL_auxz00_6413); } } 
{ /* Llib/weakhash.scm 322 */
obj_t BgL_retz00_1199;
{ /* Llib/weakhash.scm 325 */
obj_t BgL_zc3anonymousza32133ze3z83_3584;
{ 
int BgL_auxz00_6416;
BgL_auxz00_6416 = 
(int)(((long)2)); 
BgL_zc3anonymousza32133ze3z83_3584 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32133ze3z83zz__weakhashz00, BgL_auxz00_6416); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32133ze3z83_3584, 
(int)(((long)0)), BgL_tablez00_55); 
PROCEDURE_L_SET(BgL_zc3anonymousza32133ze3z83_3584, 
(int)(((long)1)), BgL_keyz00_56); 
BgL_retz00_1199 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_55, BgL_bucketsz00_1196, BgL_bucketzd2numzd2_1198, BgL_zc3anonymousza32133ze3z83_3584); } 
{ /* Llib/weakhash.scm 323 */

if(
(BgL_retz00_1199==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 328 */
return ((bool_t)0);}  else 
{ /* Llib/weakhash.scm 328 */
return ((bool_t)1);} } } } } } } 
}



/* _weak-hashtable-contains? */
obj_t BGl__weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t BgL_envz00_3585, obj_t BgL_tablez00_3586, obj_t BgL_keyz00_3587)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 319 */
{ /* Llib/weakhash.scm 320 */
bool_t BgL_auxz00_6426;
{ /* Llib/weakhash.scm 320 */
obj_t BgL_auxz00_6427;
if(
STRUCTP(BgL_tablez00_3586))
{ /* Llib/weakhash.scm 320 */
BgL_auxz00_6427 = BgL_tablez00_3586
; }  else 
{ 
obj_t BgL_auxz00_6430;
BgL_auxz00_6430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12461)), BGl_string3612z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3586); 
FAILURE(BgL_auxz00_6430,BFALSE,BFALSE);} 
BgL_auxz00_6426 = 
BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(BgL_auxz00_6427, BgL_keyz00_3587); } 
return 
BBOOL(BgL_auxz00_6426);} } 
}



/* <anonymous:2133> */
obj_t BGl_zc3anonymousza32133ze3z83zz__weakhashz00(obj_t BgL_envz00_3588, obj_t BgL_bkeyz00_3591, obj_t BgL_valz00_3592, obj_t BgL_bucketz00_3593)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 324 */
{ /* Llib/weakhash.scm 325 */
obj_t BgL_tablez00_3589;obj_t BgL_keyz00_3590;
BgL_tablez00_3589 = 
PROCEDURE_L_REF(BgL_envz00_3588, 
(int)(((long)0))); 
BgL_keyz00_3590 = 
PROCEDURE_L_REF(BgL_envz00_3588, 
(int)(((long)1))); 
{ 
obj_t BgL_bkeyz00_1202;obj_t BgL_valz00_1203;obj_t BgL_bucketz00_1204;
BgL_bkeyz00_1202 = BgL_bkeyz00_3591; 
BgL_valz00_1203 = BgL_valz00_3592; 
BgL_bucketz00_1204 = BgL_bucketz00_3593; 
{ /* Llib/weakhash.scm 325 */
bool_t BgL_testz00_6440;
{ /* Llib/weakhash.scm 325 */
obj_t BgL_eqtz00_2660;
{ /* Llib/weakhash.scm 325 */
bool_t BgL_testz00_6441;
{ /* Llib/weakhash.scm 325 */
obj_t BgL_auxz00_6442;
{ /* Llib/weakhash.scm 325 */
obj_t BgL_res2588z00_2669;
{ /* Llib/weakhash.scm 325 */
obj_t BgL_sz00_2668;
if(
STRUCTP(BgL_tablez00_3589))
{ /* Llib/weakhash.scm 325 */
BgL_sz00_2668 = BgL_tablez00_3589; }  else 
{ 
obj_t BgL_auxz00_6445;
BgL_auxz00_6445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12713)), BGl_string3613z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3589); 
FAILURE(BgL_auxz00_6445,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 325 */
obj_t BgL_aux3241z00_4246;
BgL_aux3241z00_4246 = 
STRUCT_KEY(BgL_sz00_2668); 
if(
SYMBOLP(BgL_aux3241z00_4246))
{ /* Llib/weakhash.scm 325 */
BgL_res2588z00_2669 = BgL_aux3241z00_4246; }  else 
{ 
obj_t BgL_auxz00_6452;
BgL_auxz00_6452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)12713)), BGl_string3613z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3241z00_4246); 
FAILURE(BgL_auxz00_6452,BFALSE,BFALSE);} } } 
BgL_auxz00_6442 = BgL_res2588z00_2669; } 
BgL_testz00_6441 = 
(BgL_auxz00_6442==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6441)
{ /* Llib/weakhash.scm 325 */
int BgL_auxz00_6457;
BgL_auxz00_6457 = 
(int)(((long)3)); 
BgL_eqtz00_2660 = 
STRUCT_REF(BgL_tablez00_3589, BgL_auxz00_6457); }  else 
{ /* Llib/weakhash.scm 325 */
BgL_eqtz00_2660 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3589); } } 
if(
PROCEDUREP(BgL_eqtz00_2660))
{ /* Llib/weakhash.scm 325 */
obj_t BgL_funz00_4248;
BgL_funz00_4248 = BgL_eqtz00_2660; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4248, ((long)2)))
{ /* Llib/weakhash.scm 325 */
BgL_testz00_6440 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4248)(BgL_eqtz00_2660, BgL_keyz00_3590, BgL_bkeyz00_1202, BEOA))
; }  else 
{ /* Llib/weakhash.scm 325 */
FAILURE(BGl_string3614z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4248);} }  else 
{ /* Llib/weakhash.scm 325 */
if(
STRINGP(BgL_keyz00_3590))
{ /* Llib/weakhash.scm 325 */
if(
STRINGP(BgL_bkeyz00_1202))
{ /* Llib/weakhash.scm 325 */
BgL_testz00_6440 = 
bigloo_strcmp(BgL_keyz00_3590, BgL_bkeyz00_1202)
; }  else 
{ /* Llib/weakhash.scm 325 */
BgL_testz00_6440 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 325 */
BgL_testz00_6440 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_keyz00_3590, BgL_bkeyz00_1202)
; } } } 
if(BgL_testz00_6440)
{ /* Llib/weakhash.scm 325 */
return BTRUE;}  else 
{ /* Llib/weakhash.scm 325 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-get */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t BgL_tablez00_57, obj_t BgL_keyz00_58)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 333 */
{ /* Llib/weakhash.scm 334 */
obj_t BgL_bucketsz00_1209;
{ /* Llib/weakhash.scm 334 */
bool_t BgL_testz00_6475;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_auxz00_6476;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_res2589z00_2680;
{ /* Llib/weakhash.scm 334 */
obj_t BgL_aux3245z00_4251;
BgL_aux3245z00_4251 = 
STRUCT_KEY(BgL_tablez00_57); 
if(
SYMBOLP(BgL_aux3245z00_4251))
{ /* Llib/weakhash.scm 334 */
BgL_res2589z00_2680 = BgL_aux3245z00_4251; }  else 
{ 
obj_t BgL_auxz00_6480;
BgL_auxz00_6480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13103)), BGl_string3622z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3245z00_4251); 
FAILURE(BgL_auxz00_6480,BFALSE,BFALSE);} } 
BgL_auxz00_6476 = BgL_res2589z00_2680; } 
BgL_testz00_6475 = 
(BgL_auxz00_6476==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6475)
{ /* Llib/weakhash.scm 334 */
int BgL_auxz00_6485;
BgL_auxz00_6485 = 
(int)(((long)2)); 
BgL_bucketsz00_1209 = 
STRUCT_REF(BgL_tablez00_57, BgL_auxz00_6485); }  else 
{ /* Llib/weakhash.scm 334 */
BgL_bucketsz00_1209 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_57); } } 
{ /* Llib/weakhash.scm 334 */
int BgL_bucketzd2lenzd2_1210;
{ /* Llib/weakhash.scm 335 */
obj_t BgL_vectorz00_2681;
if(
VECTORP(BgL_bucketsz00_1209))
{ /* Llib/weakhash.scm 335 */
BgL_vectorz00_2681 = BgL_bucketsz00_1209; }  else 
{ 
obj_t BgL_auxz00_6491;
BgL_auxz00_6491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13161)), BGl_string3622z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1209); 
FAILURE(BgL_auxz00_6491,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1210 = 
VECTOR_LENGTH(BgL_vectorz00_2681); } 
{ /* Llib/weakhash.scm 335 */
long BgL_bucketzd2numzd2_1211;
{ /* Llib/weakhash.scm 336 */
long BgL_arg2140z00_1221;
{ /* Llib/weakhash.scm 336 */
long BgL_res2592z00_2700;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_hashnz00_2684;
{ /* Llib/weakhash.scm 336 */
bool_t BgL_testz00_6496;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_auxz00_6497;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_res2590z00_2692;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_aux3249z00_4255;
BgL_aux3249z00_4255 = 
STRUCT_KEY(BgL_tablez00_57); 
if(
SYMBOLP(BgL_aux3249z00_4255))
{ /* Llib/weakhash.scm 336 */
BgL_res2590z00_2692 = BgL_aux3249z00_4255; }  else 
{ 
obj_t BgL_auxz00_6501;
BgL_auxz00_6501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13199)), BGl_string3622z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3249z00_4255); 
FAILURE(BgL_auxz00_6501,BFALSE,BFALSE);} } 
BgL_auxz00_6497 = BgL_res2590z00_2692; } 
BgL_testz00_6496 = 
(BgL_auxz00_6497==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6496)
{ /* Llib/weakhash.scm 336 */
int BgL_auxz00_6506;
BgL_auxz00_6506 = 
(int)(((long)4)); 
BgL_hashnz00_2684 = 
STRUCT_REF(BgL_tablez00_57, BgL_auxz00_6506); }  else 
{ /* Llib/weakhash.scm 336 */
BgL_hashnz00_2684 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_57); } } 
if(
PROCEDUREP(BgL_hashnz00_2684))
{ /* Llib/weakhash.scm 336 */
obj_t BgL_arg1965z00_2686;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_funz00_4257;
BgL_funz00_4257 = BgL_hashnz00_2684; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4257, ((long)1)))
{ /* Llib/weakhash.scm 336 */
BgL_arg1965z00_2686 = 
PROCEDURE_ENTRY(BgL_funz00_4257)(BgL_hashnz00_2684, BgL_keyz00_58, BEOA); }  else 
{ /* Llib/weakhash.scm 336 */
FAILURE(BGl_string3623z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4257);} } 
{ /* Llib/weakhash.scm 336 */
long BgL_nz00_2694;
{ /* Llib/weakhash.scm 336 */
obj_t BgL_auxz00_6517;
if(
INTEGERP(BgL_arg1965z00_2686))
{ /* Llib/weakhash.scm 336 */
BgL_auxz00_6517 = BgL_arg1965z00_2686
; }  else 
{ 
obj_t BgL_auxz00_6520;
BgL_auxz00_6520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13199)), BGl_string3622z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_2686); 
FAILURE(BgL_auxz00_6520,BFALSE,BFALSE);} 
BgL_nz00_2694 = 
(long)CINT(BgL_auxz00_6517); } 
if(
(BgL_nz00_2694<((long)0)))
{ /* Llib/weakhash.scm 336 */
BgL_res2592z00_2700 = 
NEG(BgL_nz00_2694); }  else 
{ /* Llib/weakhash.scm 336 */
BgL_res2592z00_2700 = BgL_nz00_2694; } } }  else 
{ /* Llib/weakhash.scm 336 */
BgL_res2592z00_2700 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_58); } } 
BgL_arg2140z00_1221 = BgL_res2592z00_2700; } 
{ /* Llib/weakhash.scm 336 */
long BgL_auxz00_6529;
BgL_auxz00_6529 = 
(long)(BgL_bucketzd2lenzd2_1210); 
BgL_bucketzd2numzd2_1211 = 
(BgL_arg2140z00_1221%BgL_auxz00_6529); } } 
{ /* Llib/weakhash.scm 336 */
obj_t BgL_retz00_1212;
{ /* Llib/weakhash.scm 339 */
obj_t BgL_zc3anonymousza32138ze3z83_3594;
{ 
int BgL_auxz00_6532;
BgL_auxz00_6532 = 
(int)(((long)2)); 
BgL_zc3anonymousza32138ze3z83_3594 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32138ze3z83zz__weakhashz00, BgL_auxz00_6532); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32138ze3z83_3594, 
(int)(((long)0)), BgL_tablez00_57); 
PROCEDURE_L_SET(BgL_zc3anonymousza32138ze3z83_3594, 
(int)(((long)1)), BgL_keyz00_58); 
BgL_retz00_1212 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_57, BgL_bucketsz00_1209, BgL_bucketzd2numzd2_1211, BgL_zc3anonymousza32138ze3z83_3594); } 
{ /* Llib/weakhash.scm 337 */

if(
(BgL_retz00_1212==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 342 */
return BFALSE;}  else 
{ /* Llib/weakhash.scm 342 */
return BgL_retz00_1212;} } } } } } } 
}



/* _weak-hashtable-get */
obj_t BGl__weakzd2hashtablezd2getz00zz__weakhashz00(obj_t BgL_envz00_3595, obj_t BgL_tablez00_3596, obj_t BgL_keyz00_3597)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 333 */
{ /* Llib/weakhash.scm 334 */
obj_t BgL_auxz00_6542;
if(
STRUCTP(BgL_tablez00_3596))
{ /* Llib/weakhash.scm 334 */
BgL_auxz00_6542 = BgL_tablez00_3596
; }  else 
{ 
obj_t BgL_auxz00_6545;
BgL_auxz00_6545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13087)), BGl_string3624z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3596); 
FAILURE(BgL_auxz00_6545,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_auxz00_6542, BgL_keyz00_3597);} } 
}



/* <anonymous:2138> */
obj_t BGl_zc3anonymousza32138ze3z83zz__weakhashz00(obj_t BgL_envz00_3598, obj_t BgL_bkeyz00_3601, obj_t BgL_valz00_3602, obj_t BgL_bucketz00_3603)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 338 */
{ /* Llib/weakhash.scm 339 */
obj_t BgL_tablez00_3599;obj_t BgL_keyz00_3600;
BgL_tablez00_3599 = 
PROCEDURE_L_REF(BgL_envz00_3598, 
(int)(((long)0))); 
BgL_keyz00_3600 = 
PROCEDURE_L_REF(BgL_envz00_3598, 
(int)(((long)1))); 
{ 
obj_t BgL_bkeyz00_1215;obj_t BgL_valz00_1216;obj_t BgL_bucketz00_1217;
BgL_bkeyz00_1215 = BgL_bkeyz00_3601; 
BgL_valz00_1216 = BgL_valz00_3602; 
BgL_bucketz00_1217 = BgL_bucketz00_3603; 
{ /* Llib/weakhash.scm 339 */
bool_t BgL_testz00_6554;
{ /* Llib/weakhash.scm 339 */
obj_t BgL_eqtz00_2707;
{ /* Llib/weakhash.scm 339 */
bool_t BgL_testz00_6555;
{ /* Llib/weakhash.scm 339 */
obj_t BgL_auxz00_6556;
{ /* Llib/weakhash.scm 339 */
obj_t BgL_res2593z00_2716;
{ /* Llib/weakhash.scm 339 */
obj_t BgL_sz00_2715;
if(
STRUCTP(BgL_tablez00_3599))
{ /* Llib/weakhash.scm 339 */
BgL_sz00_2715 = BgL_tablez00_3599; }  else 
{ 
obj_t BgL_auxz00_6559;
BgL_auxz00_6559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13339)), BGl_string3625z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3599); 
FAILURE(BgL_auxz00_6559,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 339 */
obj_t BgL_aux3259z00_4266;
BgL_aux3259z00_4266 = 
STRUCT_KEY(BgL_sz00_2715); 
if(
SYMBOLP(BgL_aux3259z00_4266))
{ /* Llib/weakhash.scm 339 */
BgL_res2593z00_2716 = BgL_aux3259z00_4266; }  else 
{ 
obj_t BgL_auxz00_6566;
BgL_auxz00_6566 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)13339)), BGl_string3625z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3259z00_4266); 
FAILURE(BgL_auxz00_6566,BFALSE,BFALSE);} } } 
BgL_auxz00_6556 = BgL_res2593z00_2716; } 
BgL_testz00_6555 = 
(BgL_auxz00_6556==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6555)
{ /* Llib/weakhash.scm 339 */
int BgL_auxz00_6571;
BgL_auxz00_6571 = 
(int)(((long)3)); 
BgL_eqtz00_2707 = 
STRUCT_REF(BgL_tablez00_3599, BgL_auxz00_6571); }  else 
{ /* Llib/weakhash.scm 339 */
BgL_eqtz00_2707 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3599); } } 
if(
PROCEDUREP(BgL_eqtz00_2707))
{ /* Llib/weakhash.scm 339 */
obj_t BgL_funz00_4268;
BgL_funz00_4268 = BgL_eqtz00_2707; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4268, ((long)2)))
{ /* Llib/weakhash.scm 339 */
BgL_testz00_6554 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4268)(BgL_eqtz00_2707, BgL_keyz00_3600, BgL_bkeyz00_1215, BEOA))
; }  else 
{ /* Llib/weakhash.scm 339 */
FAILURE(BGl_string3626z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4268);} }  else 
{ /* Llib/weakhash.scm 339 */
if(
STRINGP(BgL_keyz00_3600))
{ /* Llib/weakhash.scm 339 */
if(
STRINGP(BgL_bkeyz00_1215))
{ /* Llib/weakhash.scm 339 */
BgL_testz00_6554 = 
bigloo_strcmp(BgL_keyz00_3600, BgL_bkeyz00_1215)
; }  else 
{ /* Llib/weakhash.scm 339 */
BgL_testz00_6554 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 339 */
BgL_testz00_6554 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_keyz00_3600, BgL_bkeyz00_1215)
; } } } 
if(BgL_testz00_6554)
{ /* Llib/weakhash.scm 339 */
return BgL_valz00_1216;}  else 
{ /* Llib/weakhash.scm 339 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-put! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t BgL_tablez00_61, obj_t BgL_keyz00_62, obj_t BgL_objz00_63)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 366 */
{ /* Llib/weakhash.scm 367 */
obj_t BgL_bucketsz00_1235;
{ /* Llib/weakhash.scm 367 */
bool_t BgL_testz00_6589;
{ /* Llib/weakhash.scm 367 */
obj_t BgL_auxz00_6590;
{ /* Llib/weakhash.scm 367 */
obj_t BgL_res2594z00_2727;
{ /* Llib/weakhash.scm 367 */
obj_t BgL_aux3263z00_4271;
BgL_aux3263z00_4271 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3263z00_4271))
{ /* Llib/weakhash.scm 367 */
BgL_res2594z00_2727 = BgL_aux3263z00_4271; }  else 
{ 
obj_t BgL_auxz00_6594;
BgL_auxz00_6594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14419)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3263z00_4271); 
FAILURE(BgL_auxz00_6594,BFALSE,BFALSE);} } 
BgL_auxz00_6590 = BgL_res2594z00_2727; } 
BgL_testz00_6589 = 
(BgL_auxz00_6590==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6589)
{ /* Llib/weakhash.scm 367 */
int BgL_auxz00_6599;
BgL_auxz00_6599 = 
(int)(((long)2)); 
BgL_bucketsz00_1235 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_6599); }  else 
{ /* Llib/weakhash.scm 367 */
BgL_bucketsz00_1235 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } 
{ /* Llib/weakhash.scm 367 */
int BgL_bucketzd2lenzd2_1236;
{ /* Llib/weakhash.scm 368 */
obj_t BgL_vectorz00_2728;
if(
VECTORP(BgL_bucketsz00_1235))
{ /* Llib/weakhash.scm 368 */
BgL_vectorz00_2728 = BgL_bucketsz00_1235; }  else 
{ 
obj_t BgL_auxz00_6605;
BgL_auxz00_6605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14477)), BGl_string3627z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1235); 
FAILURE(BgL_auxz00_6605,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1236 = 
VECTOR_LENGTH(BgL_vectorz00_2728); } 
{ /* Llib/weakhash.scm 368 */
long BgL_bucketzd2numzd2_1237;
{ /* Llib/weakhash.scm 369 */
long BgL_arg2166z00_1265;
{ /* Llib/weakhash.scm 369 */
long BgL_res2597z00_2747;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_hashnz00_2731;
{ /* Llib/weakhash.scm 369 */
bool_t BgL_testz00_6610;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_auxz00_6611;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_res2595z00_2739;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_aux3267z00_4275;
BgL_aux3267z00_4275 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3267z00_4275))
{ /* Llib/weakhash.scm 369 */
BgL_res2595z00_2739 = BgL_aux3267z00_4275; }  else 
{ 
obj_t BgL_auxz00_6615;
BgL_auxz00_6615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14515)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3267z00_4275); 
FAILURE(BgL_auxz00_6615,BFALSE,BFALSE);} } 
BgL_auxz00_6611 = BgL_res2595z00_2739; } 
BgL_testz00_6610 = 
(BgL_auxz00_6611==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6610)
{ /* Llib/weakhash.scm 369 */
int BgL_auxz00_6620;
BgL_auxz00_6620 = 
(int)(((long)4)); 
BgL_hashnz00_2731 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_6620); }  else 
{ /* Llib/weakhash.scm 369 */
BgL_hashnz00_2731 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } 
if(
PROCEDUREP(BgL_hashnz00_2731))
{ /* Llib/weakhash.scm 369 */
obj_t BgL_arg1965z00_2733;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_funz00_4277;
BgL_funz00_4277 = BgL_hashnz00_2731; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4277, ((long)1)))
{ /* Llib/weakhash.scm 369 */
BgL_arg1965z00_2733 = 
PROCEDURE_ENTRY(BgL_funz00_4277)(BgL_hashnz00_2731, BgL_keyz00_62, BEOA); }  else 
{ /* Llib/weakhash.scm 369 */
FAILURE(BGl_string3628z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4277);} } 
{ /* Llib/weakhash.scm 369 */
long BgL_nz00_2741;
{ /* Llib/weakhash.scm 369 */
obj_t BgL_auxz00_6631;
if(
INTEGERP(BgL_arg1965z00_2733))
{ /* Llib/weakhash.scm 369 */
BgL_auxz00_6631 = BgL_arg1965z00_2733
; }  else 
{ 
obj_t BgL_auxz00_6634;
BgL_auxz00_6634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14515)), BGl_string3627z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_2733); 
FAILURE(BgL_auxz00_6634,BFALSE,BFALSE);} 
BgL_nz00_2741 = 
(long)CINT(BgL_auxz00_6631); } 
if(
(BgL_nz00_2741<((long)0)))
{ /* Llib/weakhash.scm 369 */
BgL_res2597z00_2747 = 
NEG(BgL_nz00_2741); }  else 
{ /* Llib/weakhash.scm 369 */
BgL_res2597z00_2747 = BgL_nz00_2741; } } }  else 
{ /* Llib/weakhash.scm 369 */
BgL_res2597z00_2747 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_62); } } 
BgL_arg2166z00_1265 = BgL_res2597z00_2747; } 
{ /* Llib/weakhash.scm 369 */
long BgL_auxz00_6643;
BgL_auxz00_6643 = 
(long)(BgL_bucketzd2lenzd2_1236); 
BgL_bucketzd2numzd2_1237 = 
(BgL_arg2166z00_1265%BgL_auxz00_6643); } } 
{ /* Llib/weakhash.scm 369 */
obj_t BgL_bucketz00_1238;
{ /* Llib/weakhash.scm 370 */
obj_t BgL_vectorz00_2750;int BgL_kz00_2751;
BgL_vectorz00_2750 = BgL_bucketsz00_1235; 
BgL_kz00_2751 = 
(int)(BgL_bucketzd2numzd2_1237); 
{ /* Llib/weakhash.scm 370 */
int BgL_l2751z00_3747;
BgL_l2751z00_3747 = 
VECTOR_LENGTH(BgL_vectorz00_2750); 
if(
BOUND_CHECK(BgL_kz00_2751, BgL_l2751z00_3747))
{ /* Llib/weakhash.scm 370 */
BgL_bucketz00_1238 = 
VECTOR_REF(BgL_vectorz00_2750,BgL_kz00_2751); }  else 
{ 
obj_t BgL_auxz00_6651;
BgL_auxz00_6651 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14572)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2751), BgL_vectorz00_2750); 
FAILURE(BgL_auxz00_6651,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 370 */
obj_t BgL_maxzd2bucketzd2lenz00_1239;
{ /* Llib/weakhash.scm 371 */
bool_t BgL_testz00_6656;
{ /* Llib/weakhash.scm 371 */
obj_t BgL_auxz00_6657;
{ /* Llib/weakhash.scm 371 */
obj_t BgL_res2598z00_2757;
{ /* Llib/weakhash.scm 371 */
obj_t BgL_aux3275z00_4284;
BgL_aux3275z00_4284 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3275z00_4284))
{ /* Llib/weakhash.scm 371 */
BgL_res2598z00_2757 = BgL_aux3275z00_4284; }  else 
{ 
obj_t BgL_auxz00_6661;
BgL_auxz00_6661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14624)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3275z00_4284); 
FAILURE(BgL_auxz00_6661,BFALSE,BFALSE);} } 
BgL_auxz00_6657 = BgL_res2598z00_2757; } 
BgL_testz00_6656 = 
(BgL_auxz00_6657==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6656)
{ /* Llib/weakhash.scm 371 */
int BgL_auxz00_6666;
BgL_auxz00_6666 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1239 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_6666); }  else 
{ /* Llib/weakhash.scm 371 */
BgL_maxzd2bucketzd2lenz00_1239 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } 
{ /* Llib/weakhash.scm 371 */
obj_t BgL_countz00_1240;
{ /* Llib/weakhash.scm 372 */
obj_t BgL_cellvalz00_6670;
BgL_cellvalz00_6670 = 
BINT(((long)0)); 
BgL_countz00_1240 = 
MAKE_CELL(BgL_cellvalz00_6670); } 
{ /* Llib/weakhash.scm 372 */
obj_t BgL_foundz00_1241;
{ /* Llib/weakhash.scm 377 */
obj_t BgL_zc3anonymousza32161ze3z83_3604;
{ 
int BgL_auxz00_6672;
BgL_auxz00_6672 = 
(int)(((long)4)); 
BgL_zc3anonymousza32161ze3z83_3604 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32161ze3z83zz__weakhashz00, BgL_auxz00_6672); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32161ze3z83_3604, 
(int)(((long)0)), BgL_countz00_1240); 
PROCEDURE_L_SET(BgL_zc3anonymousza32161ze3z83_3604, 
(int)(((long)1)), BgL_objz00_63); 
PROCEDURE_L_SET(BgL_zc3anonymousza32161ze3z83_3604, 
(int)(((long)2)), BgL_tablez00_61); 
PROCEDURE_L_SET(BgL_zc3anonymousza32161ze3z83_3604, 
(int)(((long)3)), BgL_keyz00_62); 
BgL_foundz00_1241 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_61, BgL_bucketsz00_1235, BgL_bucketzd2numzd2_1237, BgL_zc3anonymousza32161ze3z83_3604); } 
{ /* Llib/weakhash.scm 374 */

if(
(BgL_foundz00_1241==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 388 */
{ /* Llib/weakhash.scm 391 */
long BgL_arg2148z00_1243;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_arg2149z00_1244;
{ /* Llib/weakhash.scm 391 */
bool_t BgL_testz00_6686;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_auxz00_6687;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_res2600z00_2787;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_aux3277z00_4286;
BgL_aux3277z00_4286 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3277z00_4286))
{ /* Llib/weakhash.scm 391 */
BgL_res2600z00_2787 = BgL_aux3277z00_4286; }  else 
{ 
obj_t BgL_auxz00_6691;
BgL_auxz00_6691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15224)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3277z00_4286); 
FAILURE(BgL_auxz00_6691,BFALSE,BFALSE);} } 
BgL_auxz00_6687 = BgL_res2600z00_2787; } 
BgL_testz00_6686 = 
(BgL_auxz00_6687==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6686)
{ /* Llib/weakhash.scm 391 */
int BgL_auxz00_6696;
BgL_auxz00_6696 = 
(int)(((long)0)); 
BgL_arg2149z00_1244 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_6696); }  else 
{ /* Llib/weakhash.scm 391 */
BgL_arg2149z00_1244 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } 
{ /* Llib/weakhash.scm 391 */
long BgL_za71za7_2788;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_auxz00_6700;
if(
INTEGERP(BgL_arg2149z00_1244))
{ /* Llib/weakhash.scm 391 */
BgL_auxz00_6700 = BgL_arg2149z00_1244
; }  else 
{ 
obj_t BgL_auxz00_6703;
BgL_auxz00_6703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15219)), BGl_string3627z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2149z00_1244); 
FAILURE(BgL_auxz00_6703,BFALSE,BFALSE);} 
BgL_za71za7_2788 = 
(long)CINT(BgL_auxz00_6700); } 
BgL_arg2148z00_1243 = 
(BgL_za71za7_2788+((long)1)); } } 
{ /* Llib/weakhash.scm 391 */
bool_t BgL_testz00_6709;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_auxz00_6710;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_res2601z00_2796;
{ /* Llib/weakhash.scm 391 */
obj_t BgL_aux3281z00_4290;
BgL_aux3281z00_4290 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3281z00_4290))
{ /* Llib/weakhash.scm 391 */
BgL_res2601z00_2796 = BgL_aux3281z00_4290; }  else 
{ 
obj_t BgL_auxz00_6714;
BgL_auxz00_6714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15191)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3281z00_4290); 
FAILURE(BgL_auxz00_6714,BFALSE,BFALSE);} } 
BgL_auxz00_6710 = BgL_res2601z00_2796; } 
BgL_testz00_6709 = 
(BgL_auxz00_6710==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6709)
{ /* Llib/weakhash.scm 391 */
obj_t BgL_auxz00_6721;int BgL_auxz00_6719;
BgL_auxz00_6721 = 
BINT(BgL_arg2148z00_1243); 
BgL_auxz00_6719 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_61, BgL_auxz00_6719, BgL_auxz00_6721); }  else 
{ /* Llib/weakhash.scm 391 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } } 
{ /* Llib/weakhash.scm 393 */
obj_t BgL_arg2151z00_1246;
{ /* Llib/weakhash.scm 393 */
obj_t BgL_arg2152z00_1247;obj_t BgL_arg2153z00_1248;
{ /* Llib/weakhash.scm 393 */
obj_t BgL_arg2154z00_1249;obj_t BgL_arg2155z00_1250;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_61))
{ /* Llib/weakhash.scm 393 */
BgL_arg2154z00_1249 = 
make_weakptr(BgL_keyz00_62); }  else 
{ /* Llib/weakhash.scm 393 */
BgL_arg2154z00_1249 = BgL_keyz00_62; } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_61))
{ /* Llib/weakhash.scm 396 */
BgL_arg2155z00_1250 = 
make_weakptr(BgL_objz00_63); }  else 
{ /* Llib/weakhash.scm 396 */
BgL_arg2155z00_1250 = BgL_objz00_63; } 
BgL_arg2152z00_1247 = 
MAKE_PAIR(BgL_arg2154z00_1249, BgL_arg2155z00_1250); } 
{ /* Llib/weakhash.scm 401 */
obj_t BgL_arg2158z00_1253;
{ /* Llib/weakhash.scm 401 */
bool_t BgL_testz00_6732;
{ /* Llib/weakhash.scm 401 */
obj_t BgL_auxz00_6733;
{ /* Llib/weakhash.scm 401 */
obj_t BgL_res2602z00_2804;
{ /* Llib/weakhash.scm 401 */
obj_t BgL_aux3283z00_4292;
BgL_aux3283z00_4292 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3283z00_4292))
{ /* Llib/weakhash.scm 401 */
BgL_res2602z00_2804 = BgL_aux3283z00_4292; }  else 
{ 
obj_t BgL_auxz00_6737;
BgL_auxz00_6737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15555)), BGl_string3627z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3283z00_4292); 
FAILURE(BgL_auxz00_6737,BFALSE,BFALSE);} } 
BgL_auxz00_6733 = BgL_res2602z00_2804; } 
BgL_testz00_6732 = 
(BgL_auxz00_6733==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6732)
{ /* Llib/weakhash.scm 401 */
int BgL_auxz00_6742;
BgL_auxz00_6742 = 
(int)(((long)2)); 
BgL_arg2158z00_1253 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_6742); }  else 
{ /* Llib/weakhash.scm 401 */
BgL_arg2158z00_1253 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_61); } } 
{ /* Llib/weakhash.scm 401 */
obj_t BgL_vectorz00_2805;int BgL_kz00_2806;
if(
VECTORP(BgL_arg2158z00_1253))
{ /* Llib/weakhash.scm 401 */
BgL_vectorz00_2805 = BgL_arg2158z00_1253; }  else 
{ 
obj_t BgL_auxz00_6748;
BgL_auxz00_6748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15580)), BGl_string3627z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_arg2158z00_1253); 
FAILURE(BgL_auxz00_6748,BFALSE,BFALSE);} 
BgL_kz00_2806 = 
(int)(BgL_bucketzd2numzd2_1237); 
{ /* Llib/weakhash.scm 401 */
int BgL_l2755z00_3751;
BgL_l2755z00_3751 = 
VECTOR_LENGTH(BgL_vectorz00_2805); 
if(
BOUND_CHECK(BgL_kz00_2806, BgL_l2755z00_3751))
{ /* Llib/weakhash.scm 401 */
BgL_arg2153z00_1248 = 
VECTOR_REF(BgL_vectorz00_2805,BgL_kz00_2806); }  else 
{ 
obj_t BgL_auxz00_6757;
BgL_auxz00_6757 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15543)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2806), BgL_vectorz00_2805); 
FAILURE(BgL_auxz00_6757,BFALSE,BFALSE);} } } } 
BgL_arg2151z00_1246 = 
MAKE_PAIR(BgL_arg2152z00_1247, BgL_arg2153z00_1248); } 
{ /* Llib/weakhash.scm 392 */
obj_t BgL_vectorz00_2807;int BgL_kz00_2808;
BgL_vectorz00_2807 = BgL_bucketsz00_1235; 
BgL_kz00_2808 = 
(int)(BgL_bucketzd2numzd2_1237); 
{ /* Llib/weakhash.scm 392 */
int BgL_l2759z00_3755;
BgL_l2759z00_3755 = 
VECTOR_LENGTH(BgL_vectorz00_2807); 
if(
BOUND_CHECK(BgL_kz00_2808, BgL_l2759z00_3755))
{ /* Llib/weakhash.scm 392 */
VECTOR_SET(BgL_vectorz00_2807,BgL_kz00_2808,BgL_arg2151z00_1246); }  else 
{ 
obj_t BgL_auxz00_6768;
BgL_auxz00_6768 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15258)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2808), BgL_vectorz00_2807); 
FAILURE(BgL_auxz00_6768,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 403 */
bool_t BgL_testz00_6773;
{ /* Llib/weakhash.scm 403 */
long BgL_n1z00_2810;long BgL_n2z00_2811;
{ /* Llib/weakhash.scm 403 */
obj_t BgL_auxz00_6774;
{ /* Llib/weakhash.scm 403 */
obj_t BgL_aux3289z00_4298;
BgL_aux3289z00_4298 = 
CELL_REF(BgL_countz00_1240); 
if(
INTEGERP(BgL_aux3289z00_4298))
{ /* Llib/weakhash.scm 403 */
BgL_auxz00_6774 = BgL_aux3289z00_4298
; }  else 
{ 
obj_t BgL_auxz00_6777;
BgL_auxz00_6777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15620)), BGl_string3627z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3289z00_4298); 
FAILURE(BgL_auxz00_6777,BFALSE,BFALSE);} } 
BgL_n1z00_2810 = 
(long)CINT(BgL_auxz00_6774); } 
{ /* Llib/weakhash.scm 403 */
obj_t BgL_auxz00_6782;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1239))
{ /* Llib/weakhash.scm 403 */
BgL_auxz00_6782 = BgL_maxzd2bucketzd2lenz00_1239
; }  else 
{ 
obj_t BgL_auxz00_6785;
BgL_auxz00_6785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15626)), BGl_string3627z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1239); 
FAILURE(BgL_auxz00_6785,BFALSE,BFALSE);} 
BgL_n2z00_2811 = 
(long)CINT(BgL_auxz00_6782); } 
BgL_testz00_6773 = 
(BgL_n1z00_2810>BgL_n2z00_2811); } 
if(BgL_testz00_6773)
{ /* Llib/weakhash.scm 403 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_61); }  else 
{ /* Llib/weakhash.scm 403 */BFALSE; } } 
return BgL_objz00_63;}  else 
{ /* Llib/weakhash.scm 388 */
return BgL_foundz00_1241;} } } } } } } } } } 
}



/* _weak-hashtable-put! */
obj_t BGl__weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t BgL_envz00_3605, obj_t BgL_tablez00_3606, obj_t BgL_keyz00_3607, obj_t BgL_objz00_3608)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 366 */
{ /* Llib/weakhash.scm 367 */
obj_t BgL_auxz00_6792;
if(
STRUCTP(BgL_tablez00_3606))
{ /* Llib/weakhash.scm 367 */
BgL_auxz00_6792 = BgL_tablez00_3606
; }  else 
{ 
obj_t BgL_auxz00_6795;
BgL_auxz00_6795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14403)), BGl_string3629z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3606); 
FAILURE(BgL_auxz00_6795,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_auxz00_6792, BgL_keyz00_3607, BgL_objz00_3608);} } 
}



/* <anonymous:2161> */
obj_t BGl_zc3anonymousza32161ze3z83zz__weakhashz00(obj_t BgL_envz00_3609, obj_t BgL_bkeyz00_3614, obj_t BgL_valz00_3615, obj_t BgL_bucketz00_3616)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 376 */
{ /* Llib/weakhash.scm 377 */
obj_t BgL_countz00_3610;obj_t BgL_objz00_3611;obj_t BgL_tablez00_3612;obj_t BgL_keyz00_3613;
BgL_countz00_3610 = 
PROCEDURE_L_REF(BgL_envz00_3609, 
(int)(((long)0))); 
BgL_objz00_3611 = 
PROCEDURE_L_REF(BgL_envz00_3609, 
(int)(((long)1))); 
BgL_tablez00_3612 = 
PROCEDURE_L_REF(BgL_envz00_3609, 
(int)(((long)2))); 
BgL_keyz00_3613 = 
PROCEDURE_L_REF(BgL_envz00_3609, 
(int)(((long)3))); 
{ 
obj_t BgL_bkeyz00_1256;obj_t BgL_valz00_1257;obj_t BgL_bucketz00_1258;
BgL_bkeyz00_1256 = BgL_bkeyz00_3614; 
BgL_valz00_1257 = BgL_valz00_3615; 
BgL_bucketz00_1258 = BgL_bucketz00_3616; 
{ /* Llib/weakhash.scm 377 */
obj_t BgL_auxz00_3617;
{ /* Llib/weakhash.scm 377 */
long BgL_za71za7_2758;
{ /* Llib/weakhash.scm 377 */
obj_t BgL_auxz00_6808;
{ /* Llib/weakhash.scm 377 */
obj_t BgL_aux3295z00_4304;
BgL_aux3295z00_4304 = 
CELL_REF(BgL_countz00_3610); 
if(
INTEGERP(BgL_aux3295z00_4304))
{ /* Llib/weakhash.scm 377 */
BgL_auxz00_6808 = BgL_aux3295z00_4304
; }  else 
{ 
obj_t BgL_auxz00_6811;
BgL_auxz00_6811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14854)), BGl_string3630z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3295z00_4304); 
FAILURE(BgL_auxz00_6811,BFALSE,BFALSE);} } 
BgL_za71za7_2758 = 
(long)CINT(BgL_auxz00_6808); } 
BgL_auxz00_3617 = 
BINT(
(BgL_za71za7_2758+((long)1))); } 
CELL_SET(BgL_countz00_3610, BgL_auxz00_3617); } 
{ /* Llib/weakhash.scm 378 */
bool_t BgL_testz00_6818;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_eqtz00_2763;
{ /* Llib/weakhash.scm 378 */
bool_t BgL_testz00_6819;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_auxz00_6820;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_res2599z00_2772;
{ /* Llib/weakhash.scm 378 */
obj_t BgL_sz00_2771;
if(
STRUCTP(BgL_tablez00_3612))
{ /* Llib/weakhash.scm 378 */
BgL_sz00_2771 = BgL_tablez00_3612; }  else 
{ 
obj_t BgL_auxz00_6823;
BgL_auxz00_6823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14880)), BGl_string3630z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3612); 
FAILURE(BgL_auxz00_6823,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 378 */
obj_t BgL_aux3299z00_4308;
BgL_aux3299z00_4308 = 
STRUCT_KEY(BgL_sz00_2771); 
if(
SYMBOLP(BgL_aux3299z00_4308))
{ /* Llib/weakhash.scm 378 */
BgL_res2599z00_2772 = BgL_aux3299z00_4308; }  else 
{ 
obj_t BgL_auxz00_6830;
BgL_auxz00_6830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14880)), BGl_string3630z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3299z00_4308); 
FAILURE(BgL_auxz00_6830,BFALSE,BFALSE);} } } 
BgL_auxz00_6820 = BgL_res2599z00_2772; } 
BgL_testz00_6819 = 
(BgL_auxz00_6820==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6819)
{ /* Llib/weakhash.scm 378 */
int BgL_auxz00_6835;
BgL_auxz00_6835 = 
(int)(((long)3)); 
BgL_eqtz00_2763 = 
STRUCT_REF(BgL_tablez00_3612, BgL_auxz00_6835); }  else 
{ /* Llib/weakhash.scm 378 */
BgL_eqtz00_2763 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3612); } } 
if(
PROCEDUREP(BgL_eqtz00_2763))
{ /* Llib/weakhash.scm 378 */
obj_t BgL_funz00_4310;
BgL_funz00_4310 = BgL_eqtz00_2763; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4310, ((long)2)))
{ /* Llib/weakhash.scm 378 */
BgL_testz00_6818 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4310)(BgL_eqtz00_2763, BgL_bkeyz00_1256, BgL_keyz00_3613, BEOA))
; }  else 
{ /* Llib/weakhash.scm 378 */
FAILURE(BGl_string3631z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4310);} }  else 
{ /* Llib/weakhash.scm 378 */
if(
STRINGP(BgL_bkeyz00_1256))
{ /* Llib/weakhash.scm 378 */
if(
STRINGP(BgL_keyz00_3613))
{ /* Llib/weakhash.scm 378 */
BgL_testz00_6818 = 
bigloo_strcmp(BgL_bkeyz00_1256, BgL_keyz00_3613)
; }  else 
{ /* Llib/weakhash.scm 378 */
BgL_testz00_6818 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 378 */
BgL_testz00_6818 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_bkeyz00_1256, BgL_keyz00_3613)
; } } } 
if(BgL_testz00_6818)
{ /* Llib/weakhash.scm 378 */
{ /* Llib/weakhash.scm 380 */
obj_t BgL_arg2163z00_1261;obj_t BgL_arg2164z00_1262;
{ /* Llib/weakhash.scm 380 */
obj_t BgL_pairz00_2778;
if(
PAIRP(BgL_bucketz00_1258))
{ /* Llib/weakhash.scm 380 */
BgL_pairz00_2778 = BgL_bucketz00_1258; }  else 
{ 
obj_t BgL_auxz00_6855;
BgL_auxz00_6855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14947)), BGl_string3630z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1258); 
FAILURE(BgL_auxz00_6855,BFALSE,BFALSE);} 
BgL_arg2163z00_1261 = 
CAR(BgL_pairz00_2778); } 
{ /* Llib/weakhash.scm 381 */
bool_t BgL_testz00_6860;
{ /* Llib/weakhash.scm 381 */
obj_t BgL_auxz00_6861;
if(
STRUCTP(BgL_tablez00_3612))
{ /* Llib/weakhash.scm 381 */
BgL_auxz00_6861 = BgL_tablez00_3612
; }  else 
{ 
obj_t BgL_auxz00_6864;
BgL_auxz00_6864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14991)), BGl_string3630z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3612); 
FAILURE(BgL_auxz00_6864,BFALSE,BFALSE);} 
BgL_testz00_6860 = 
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_6861); } 
if(BgL_testz00_6860)
{ /* Llib/weakhash.scm 381 */
BgL_arg2164z00_1262 = 
make_weakptr(BgL_objz00_3611); }  else 
{ /* Llib/weakhash.scm 381 */
BgL_arg2164z00_1262 = BgL_objz00_3611; } } 
{ /* Llib/weakhash.scm 380 */
obj_t BgL_pairz00_2780;
if(
PAIRP(BgL_arg2163z00_1261))
{ /* Llib/weakhash.scm 380 */
BgL_pairz00_2780 = BgL_arg2163z00_1261; }  else 
{ 
obj_t BgL_auxz00_6872;
BgL_auxz00_6872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)14953)), BGl_string3630z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_arg2163z00_1261); 
FAILURE(BgL_auxz00_6872,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2780, BgL_arg2164z00_1262); } } 
return BgL_valz00_1257;}  else 
{ /* Llib/weakhash.scm 378 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-update! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t BgL_tablez00_64, obj_t BgL_keyz00_65, obj_t BgL_procz00_66, obj_t BgL_objz00_67)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 410 */
{ /* Llib/weakhash.scm 411 */
obj_t BgL_bucketsz00_1266;
{ /* Llib/weakhash.scm 411 */
bool_t BgL_testz00_6877;
{ /* Llib/weakhash.scm 411 */
obj_t BgL_auxz00_6878;
{ /* Llib/weakhash.scm 411 */
obj_t BgL_res2603z00_2817;
{ /* Llib/weakhash.scm 411 */
obj_t BgL_aux3309z00_4319;
BgL_aux3309z00_4319 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3309z00_4319))
{ /* Llib/weakhash.scm 411 */
BgL_res2603z00_2817 = BgL_aux3309z00_4319; }  else 
{ 
obj_t BgL_auxz00_6882;
BgL_auxz00_6882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16009)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3309z00_4319); 
FAILURE(BgL_auxz00_6882,BFALSE,BFALSE);} } 
BgL_auxz00_6878 = BgL_res2603z00_2817; } 
BgL_testz00_6877 = 
(BgL_auxz00_6878==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6877)
{ /* Llib/weakhash.scm 411 */
int BgL_auxz00_6887;
BgL_auxz00_6887 = 
(int)(((long)2)); 
BgL_bucketsz00_1266 = 
STRUCT_REF(BgL_tablez00_64, BgL_auxz00_6887); }  else 
{ /* Llib/weakhash.scm 411 */
BgL_bucketsz00_1266 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } 
{ /* Llib/weakhash.scm 411 */
int BgL_bucketzd2lenzd2_1267;
{ /* Llib/weakhash.scm 412 */
obj_t BgL_vectorz00_2818;
if(
VECTORP(BgL_bucketsz00_1266))
{ /* Llib/weakhash.scm 412 */
BgL_vectorz00_2818 = BgL_bucketsz00_1266; }  else 
{ 
obj_t BgL_auxz00_6893;
BgL_auxz00_6893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16067)), BGl_string3632z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1266); 
FAILURE(BgL_auxz00_6893,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1267 = 
VECTOR_LENGTH(BgL_vectorz00_2818); } 
{ /* Llib/weakhash.scm 412 */
long BgL_bucketzd2numzd2_1268;
{ /* Llib/weakhash.scm 413 */
long BgL_arg2186z00_1297;
{ /* Llib/weakhash.scm 413 */
long BgL_res2606z00_2837;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_hashnz00_2821;
{ /* Llib/weakhash.scm 413 */
bool_t BgL_testz00_6898;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_auxz00_6899;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_res2604z00_2829;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_aux3313z00_4323;
BgL_aux3313z00_4323 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3313z00_4323))
{ /* Llib/weakhash.scm 413 */
BgL_res2604z00_2829 = BgL_aux3313z00_4323; }  else 
{ 
obj_t BgL_auxz00_6903;
BgL_auxz00_6903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16105)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3313z00_4323); 
FAILURE(BgL_auxz00_6903,BFALSE,BFALSE);} } 
BgL_auxz00_6899 = BgL_res2604z00_2829; } 
BgL_testz00_6898 = 
(BgL_auxz00_6899==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6898)
{ /* Llib/weakhash.scm 413 */
int BgL_auxz00_6908;
BgL_auxz00_6908 = 
(int)(((long)4)); 
BgL_hashnz00_2821 = 
STRUCT_REF(BgL_tablez00_64, BgL_auxz00_6908); }  else 
{ /* Llib/weakhash.scm 413 */
BgL_hashnz00_2821 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } 
if(
PROCEDUREP(BgL_hashnz00_2821))
{ /* Llib/weakhash.scm 413 */
obj_t BgL_arg1965z00_2823;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_funz00_4325;
BgL_funz00_4325 = BgL_hashnz00_2821; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4325, ((long)1)))
{ /* Llib/weakhash.scm 413 */
BgL_arg1965z00_2823 = 
PROCEDURE_ENTRY(BgL_funz00_4325)(BgL_hashnz00_2821, BgL_keyz00_65, BEOA); }  else 
{ /* Llib/weakhash.scm 413 */
FAILURE(BGl_string3633z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4325);} } 
{ /* Llib/weakhash.scm 413 */
long BgL_nz00_2831;
{ /* Llib/weakhash.scm 413 */
obj_t BgL_auxz00_6919;
if(
INTEGERP(BgL_arg1965z00_2823))
{ /* Llib/weakhash.scm 413 */
BgL_auxz00_6919 = BgL_arg1965z00_2823
; }  else 
{ 
obj_t BgL_auxz00_6922;
BgL_auxz00_6922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16105)), BGl_string3632z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_2823); 
FAILURE(BgL_auxz00_6922,BFALSE,BFALSE);} 
BgL_nz00_2831 = 
(long)CINT(BgL_auxz00_6919); } 
if(
(BgL_nz00_2831<((long)0)))
{ /* Llib/weakhash.scm 413 */
BgL_res2606z00_2837 = 
NEG(BgL_nz00_2831); }  else 
{ /* Llib/weakhash.scm 413 */
BgL_res2606z00_2837 = BgL_nz00_2831; } } }  else 
{ /* Llib/weakhash.scm 413 */
BgL_res2606z00_2837 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_65); } } 
BgL_arg2186z00_1297 = BgL_res2606z00_2837; } 
{ /* Llib/weakhash.scm 413 */
long BgL_auxz00_6931;
BgL_auxz00_6931 = 
(long)(BgL_bucketzd2lenzd2_1267); 
BgL_bucketzd2numzd2_1268 = 
(BgL_arg2186z00_1297%BgL_auxz00_6931); } } 
{ /* Llib/weakhash.scm 413 */
obj_t BgL_bucketz00_1269;
{ /* Llib/weakhash.scm 414 */
obj_t BgL_vectorz00_2840;int BgL_kz00_2841;
BgL_vectorz00_2840 = BgL_bucketsz00_1266; 
BgL_kz00_2841 = 
(int)(BgL_bucketzd2numzd2_1268); 
{ /* Llib/weakhash.scm 414 */
int BgL_l2763z00_3759;
BgL_l2763z00_3759 = 
VECTOR_LENGTH(BgL_vectorz00_2840); 
if(
BOUND_CHECK(BgL_kz00_2841, BgL_l2763z00_3759))
{ /* Llib/weakhash.scm 414 */
BgL_bucketz00_1269 = 
VECTOR_REF(BgL_vectorz00_2840,BgL_kz00_2841); }  else 
{ 
obj_t BgL_auxz00_6939;
BgL_auxz00_6939 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16162)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2841), BgL_vectorz00_2840); 
FAILURE(BgL_auxz00_6939,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 414 */
obj_t BgL_maxzd2bucketzd2lenz00_1270;
{ /* Llib/weakhash.scm 415 */
bool_t BgL_testz00_6944;
{ /* Llib/weakhash.scm 415 */
obj_t BgL_auxz00_6945;
{ /* Llib/weakhash.scm 415 */
obj_t BgL_res2607z00_2847;
{ /* Llib/weakhash.scm 415 */
obj_t BgL_aux3321z00_4332;
BgL_aux3321z00_4332 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3321z00_4332))
{ /* Llib/weakhash.scm 415 */
BgL_res2607z00_2847 = BgL_aux3321z00_4332; }  else 
{ 
obj_t BgL_auxz00_6949;
BgL_auxz00_6949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16214)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3321z00_4332); 
FAILURE(BgL_auxz00_6949,BFALSE,BFALSE);} } 
BgL_auxz00_6945 = BgL_res2607z00_2847; } 
BgL_testz00_6944 = 
(BgL_auxz00_6945==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6944)
{ /* Llib/weakhash.scm 415 */
int BgL_auxz00_6954;
BgL_auxz00_6954 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1270 = 
STRUCT_REF(BgL_tablez00_64, BgL_auxz00_6954); }  else 
{ /* Llib/weakhash.scm 415 */
BgL_maxzd2bucketzd2lenz00_1270 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } 
{ /* Llib/weakhash.scm 415 */
obj_t BgL_countz00_1271;
{ /* Llib/weakhash.scm 416 */
obj_t BgL_cellvalz00_6958;
BgL_cellvalz00_6958 = 
BINT(((long)0)); 
BgL_countz00_1271 = 
MAKE_CELL(BgL_cellvalz00_6958); } 
{ /* Llib/weakhash.scm 416 */
obj_t BgL_foundz00_1272;
{ /* Llib/weakhash.scm 421 */
obj_t BgL_zc3anonymousza32181ze3z83_3618;
{ 
int BgL_auxz00_6960;
BgL_auxz00_6960 = 
(int)(((long)4)); 
BgL_zc3anonymousza32181ze3z83_3618 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32181ze3z83zz__weakhashz00, BgL_auxz00_6960); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32181ze3z83_3618, 
(int)(((long)0)), BgL_countz00_1271); 
PROCEDURE_L_SET(BgL_zc3anonymousza32181ze3z83_3618, 
(int)(((long)1)), BgL_procz00_66); 
PROCEDURE_L_SET(BgL_zc3anonymousza32181ze3z83_3618, 
(int)(((long)2)), BgL_tablez00_64); 
PROCEDURE_L_SET(BgL_zc3anonymousza32181ze3z83_3618, 
(int)(((long)3)), BgL_keyz00_65); 
BgL_foundz00_1272 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_64, BgL_bucketsz00_1266, BgL_bucketzd2numzd2_1268, BgL_zc3anonymousza32181ze3z83_3618); } 
{ /* Llib/weakhash.scm 418 */

if(
(BgL_foundz00_1272==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 432 */
{ /* Llib/weakhash.scm 435 */
long BgL_arg2168z00_1274;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_arg2169z00_1275;
{ /* Llib/weakhash.scm 435 */
bool_t BgL_testz00_6974;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_auxz00_6975;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_res2609z00_2877;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_aux3323z00_4334;
BgL_aux3323z00_4334 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3323z00_4334))
{ /* Llib/weakhash.scm 435 */
BgL_res2609z00_2877 = BgL_aux3323z00_4334; }  else 
{ 
obj_t BgL_auxz00_6979;
BgL_auxz00_6979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16843)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3323z00_4334); 
FAILURE(BgL_auxz00_6979,BFALSE,BFALSE);} } 
BgL_auxz00_6975 = BgL_res2609z00_2877; } 
BgL_testz00_6974 = 
(BgL_auxz00_6975==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6974)
{ /* Llib/weakhash.scm 435 */
int BgL_auxz00_6984;
BgL_auxz00_6984 = 
(int)(((long)0)); 
BgL_arg2169z00_1275 = 
STRUCT_REF(BgL_tablez00_64, BgL_auxz00_6984); }  else 
{ /* Llib/weakhash.scm 435 */
BgL_arg2169z00_1275 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } 
{ /* Llib/weakhash.scm 435 */
long BgL_za71za7_2878;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_auxz00_6988;
if(
INTEGERP(BgL_arg2169z00_1275))
{ /* Llib/weakhash.scm 435 */
BgL_auxz00_6988 = BgL_arg2169z00_1275
; }  else 
{ 
obj_t BgL_auxz00_6991;
BgL_auxz00_6991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16838)), BGl_string3632z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2169z00_1275); 
FAILURE(BgL_auxz00_6991,BFALSE,BFALSE);} 
BgL_za71za7_2878 = 
(long)CINT(BgL_auxz00_6988); } 
BgL_arg2168z00_1274 = 
(BgL_za71za7_2878+((long)1)); } } 
{ /* Llib/weakhash.scm 435 */
bool_t BgL_testz00_6997;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_auxz00_6998;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_res2610z00_2886;
{ /* Llib/weakhash.scm 435 */
obj_t BgL_aux3327z00_4338;
BgL_aux3327z00_4338 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3327z00_4338))
{ /* Llib/weakhash.scm 435 */
BgL_res2610z00_2886 = BgL_aux3327z00_4338; }  else 
{ 
obj_t BgL_auxz00_7002;
BgL_auxz00_7002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16810)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3327z00_4338); 
FAILURE(BgL_auxz00_7002,BFALSE,BFALSE);} } 
BgL_auxz00_6998 = BgL_res2610z00_2886; } 
BgL_testz00_6997 = 
(BgL_auxz00_6998==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_6997)
{ /* Llib/weakhash.scm 435 */
obj_t BgL_auxz00_7009;int BgL_auxz00_7007;
BgL_auxz00_7009 = 
BINT(BgL_arg2168z00_1274); 
BgL_auxz00_7007 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_64, BgL_auxz00_7007, BgL_auxz00_7009); }  else 
{ /* Llib/weakhash.scm 435 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } } 
{ /* Llib/weakhash.scm 437 */
obj_t BgL_arg2171z00_1277;
{ /* Llib/weakhash.scm 437 */
obj_t BgL_arg2172z00_1278;obj_t BgL_arg2173z00_1279;
{ /* Llib/weakhash.scm 437 */
obj_t BgL_arg2174z00_1280;obj_t BgL_arg2175z00_1281;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_64))
{ /* Llib/weakhash.scm 437 */
BgL_arg2174z00_1280 = 
make_weakptr(BgL_keyz00_65); }  else 
{ /* Llib/weakhash.scm 437 */
BgL_arg2174z00_1280 = BgL_keyz00_65; } 
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_64))
{ /* Llib/weakhash.scm 440 */
BgL_arg2175z00_1281 = 
make_weakptr(BgL_objz00_67); }  else 
{ /* Llib/weakhash.scm 440 */
BgL_arg2175z00_1281 = BgL_objz00_67; } 
BgL_arg2172z00_1278 = 
MAKE_PAIR(BgL_arg2174z00_1280, BgL_arg2175z00_1281); } 
{ /* Llib/weakhash.scm 445 */
obj_t BgL_arg2178z00_1284;
{ /* Llib/weakhash.scm 445 */
bool_t BgL_testz00_7020;
{ /* Llib/weakhash.scm 445 */
obj_t BgL_auxz00_7021;
{ /* Llib/weakhash.scm 445 */
obj_t BgL_res2611z00_2894;
{ /* Llib/weakhash.scm 445 */
obj_t BgL_aux3329z00_4340;
BgL_aux3329z00_4340 = 
STRUCT_KEY(BgL_tablez00_64); 
if(
SYMBOLP(BgL_aux3329z00_4340))
{ /* Llib/weakhash.scm 445 */
BgL_res2611z00_2894 = BgL_aux3329z00_4340; }  else 
{ 
obj_t BgL_auxz00_7025;
BgL_auxz00_7025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17174)), BGl_string3632z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3329z00_4340); 
FAILURE(BgL_auxz00_7025,BFALSE,BFALSE);} } 
BgL_auxz00_7021 = BgL_res2611z00_2894; } 
BgL_testz00_7020 = 
(BgL_auxz00_7021==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7020)
{ /* Llib/weakhash.scm 445 */
int BgL_auxz00_7030;
BgL_auxz00_7030 = 
(int)(((long)2)); 
BgL_arg2178z00_1284 = 
STRUCT_REF(BgL_tablez00_64, BgL_auxz00_7030); }  else 
{ /* Llib/weakhash.scm 445 */
BgL_arg2178z00_1284 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_64); } } 
{ /* Llib/weakhash.scm 445 */
obj_t BgL_vectorz00_2895;int BgL_kz00_2896;
if(
VECTORP(BgL_arg2178z00_1284))
{ /* Llib/weakhash.scm 445 */
BgL_vectorz00_2895 = BgL_arg2178z00_1284; }  else 
{ 
obj_t BgL_auxz00_7036;
BgL_auxz00_7036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17199)), BGl_string3632z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_arg2178z00_1284); 
FAILURE(BgL_auxz00_7036,BFALSE,BFALSE);} 
BgL_kz00_2896 = 
(int)(BgL_bucketzd2numzd2_1268); 
{ /* Llib/weakhash.scm 445 */
int BgL_l2767z00_3763;
BgL_l2767z00_3763 = 
VECTOR_LENGTH(BgL_vectorz00_2895); 
if(
BOUND_CHECK(BgL_kz00_2896, BgL_l2767z00_3763))
{ /* Llib/weakhash.scm 445 */
BgL_arg2173z00_1279 = 
VECTOR_REF(BgL_vectorz00_2895,BgL_kz00_2896); }  else 
{ 
obj_t BgL_auxz00_7045;
BgL_auxz00_7045 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17162)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2896), BgL_vectorz00_2895); 
FAILURE(BgL_auxz00_7045,BFALSE,BFALSE);} } } } 
BgL_arg2171z00_1277 = 
MAKE_PAIR(BgL_arg2172z00_1278, BgL_arg2173z00_1279); } 
{ /* Llib/weakhash.scm 436 */
obj_t BgL_vectorz00_2897;int BgL_kz00_2898;
BgL_vectorz00_2897 = BgL_bucketsz00_1266; 
BgL_kz00_2898 = 
(int)(BgL_bucketzd2numzd2_1268); 
{ /* Llib/weakhash.scm 436 */
int BgL_l2771z00_3767;
BgL_l2771z00_3767 = 
VECTOR_LENGTH(BgL_vectorz00_2897); 
if(
BOUND_CHECK(BgL_kz00_2898, BgL_l2771z00_3767))
{ /* Llib/weakhash.scm 436 */
VECTOR_SET(BgL_vectorz00_2897,BgL_kz00_2898,BgL_arg2171z00_1277); }  else 
{ 
obj_t BgL_auxz00_7056;
BgL_auxz00_7056 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16877)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2898), BgL_vectorz00_2897); 
FAILURE(BgL_auxz00_7056,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 447 */
bool_t BgL_testz00_7061;
{ /* Llib/weakhash.scm 447 */
long BgL_n1z00_2900;long BgL_n2z00_2901;
{ /* Llib/weakhash.scm 447 */
obj_t BgL_auxz00_7062;
{ /* Llib/weakhash.scm 447 */
obj_t BgL_aux3335z00_4346;
BgL_aux3335z00_4346 = 
CELL_REF(BgL_countz00_1271); 
if(
INTEGERP(BgL_aux3335z00_4346))
{ /* Llib/weakhash.scm 447 */
BgL_auxz00_7062 = BgL_aux3335z00_4346
; }  else 
{ 
obj_t BgL_auxz00_7065;
BgL_auxz00_7065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17239)), BGl_string3632z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3335z00_4346); 
FAILURE(BgL_auxz00_7065,BFALSE,BFALSE);} } 
BgL_n1z00_2900 = 
(long)CINT(BgL_auxz00_7062); } 
{ /* Llib/weakhash.scm 447 */
obj_t BgL_auxz00_7070;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1270))
{ /* Llib/weakhash.scm 447 */
BgL_auxz00_7070 = BgL_maxzd2bucketzd2lenz00_1270
; }  else 
{ 
obj_t BgL_auxz00_7073;
BgL_auxz00_7073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17245)), BGl_string3632z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1270); 
FAILURE(BgL_auxz00_7073,BFALSE,BFALSE);} 
BgL_n2z00_2901 = 
(long)CINT(BgL_auxz00_7070); } 
BgL_testz00_7061 = 
(BgL_n1z00_2900>BgL_n2z00_2901); } 
if(BgL_testz00_7061)
{ /* Llib/weakhash.scm 447 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_64); }  else 
{ /* Llib/weakhash.scm 447 */BFALSE; } } 
return BgL_objz00_67;}  else 
{ /* Llib/weakhash.scm 432 */
return BgL_foundz00_1272;} } } } } } } } } } 
}



/* _weak-hashtable-update! */
obj_t BGl__weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t BgL_envz00_3619, obj_t BgL_tablez00_3620, obj_t BgL_keyz00_3621, obj_t BgL_procz00_3622, obj_t BgL_objz00_3623)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 410 */
{ /* Llib/weakhash.scm 411 */
obj_t BgL_auxz00_7087;obj_t BgL_auxz00_7080;
if(
PROCEDUREP(BgL_procz00_3622))
{ /* Llib/weakhash.scm 411 */
BgL_auxz00_7087 = BgL_procz00_3622
; }  else 
{ 
obj_t BgL_auxz00_7090;
BgL_auxz00_7090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15993)), BGl_string3634z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_procz00_3622); 
FAILURE(BgL_auxz00_7090,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3620))
{ /* Llib/weakhash.scm 411 */
BgL_auxz00_7080 = BgL_tablez00_3620
; }  else 
{ 
obj_t BgL_auxz00_7083;
BgL_auxz00_7083 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)15993)), BGl_string3634z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3620); 
FAILURE(BgL_auxz00_7083,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_auxz00_7080, BgL_keyz00_3621, BgL_auxz00_7087, BgL_objz00_3623);} } 
}



/* <anonymous:2181> */
obj_t BGl_zc3anonymousza32181ze3z83zz__weakhashz00(obj_t BgL_envz00_3624, obj_t BgL_bkeyz00_3629, obj_t BgL_valz00_3630, obj_t BgL_bucketz00_3631)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 420 */
{ /* Llib/weakhash.scm 421 */
obj_t BgL_countz00_3625;obj_t BgL_procz00_3626;obj_t BgL_tablez00_3627;obj_t BgL_keyz00_3628;
BgL_countz00_3625 = 
PROCEDURE_L_REF(BgL_envz00_3624, 
(int)(((long)0))); 
BgL_procz00_3626 = 
PROCEDURE_L_REF(BgL_envz00_3624, 
(int)(((long)1))); 
BgL_tablez00_3627 = 
PROCEDURE_L_REF(BgL_envz00_3624, 
(int)(((long)2))); 
BgL_keyz00_3628 = 
PROCEDURE_L_REF(BgL_envz00_3624, 
(int)(((long)3))); 
{ 
obj_t BgL_bkeyz00_1287;obj_t BgL_valz00_1288;obj_t BgL_bucketz00_1289;
BgL_bkeyz00_1287 = BgL_bkeyz00_3629; 
BgL_valz00_1288 = BgL_valz00_3630; 
BgL_bucketz00_1289 = BgL_bucketz00_3631; 
{ /* Llib/weakhash.scm 421 */
obj_t BgL_auxz00_3632;
{ /* Llib/weakhash.scm 421 */
long BgL_za71za7_2848;
{ /* Llib/weakhash.scm 421 */
obj_t BgL_auxz00_7103;
{ /* Llib/weakhash.scm 421 */
obj_t BgL_aux3343z00_4354;
BgL_aux3343z00_4354 = 
CELL_REF(BgL_countz00_3625); 
if(
INTEGERP(BgL_aux3343z00_4354))
{ /* Llib/weakhash.scm 421 */
BgL_auxz00_7103 = BgL_aux3343z00_4354
; }  else 
{ 
obj_t BgL_auxz00_7106;
BgL_auxz00_7106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16444)), BGl_string3635z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3343z00_4354); 
FAILURE(BgL_auxz00_7106,BFALSE,BFALSE);} } 
BgL_za71za7_2848 = 
(long)CINT(BgL_auxz00_7103); } 
BgL_auxz00_3632 = 
BINT(
(BgL_za71za7_2848+((long)1))); } 
CELL_SET(BgL_countz00_3625, BgL_auxz00_3632); } 
{ /* Llib/weakhash.scm 422 */
bool_t BgL_testz00_7113;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_eqtz00_2853;
{ /* Llib/weakhash.scm 422 */
bool_t BgL_testz00_7114;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_auxz00_7115;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_res2608z00_2862;
{ /* Llib/weakhash.scm 422 */
obj_t BgL_sz00_2861;
if(
STRUCTP(BgL_tablez00_3627))
{ /* Llib/weakhash.scm 422 */
BgL_sz00_2861 = BgL_tablez00_3627; }  else 
{ 
obj_t BgL_auxz00_7118;
BgL_auxz00_7118 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16470)), BGl_string3635z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3627); 
FAILURE(BgL_auxz00_7118,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 422 */
obj_t BgL_aux3347z00_4358;
BgL_aux3347z00_4358 = 
STRUCT_KEY(BgL_sz00_2861); 
if(
SYMBOLP(BgL_aux3347z00_4358))
{ /* Llib/weakhash.scm 422 */
BgL_res2608z00_2862 = BgL_aux3347z00_4358; }  else 
{ 
obj_t BgL_auxz00_7125;
BgL_auxz00_7125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16470)), BGl_string3635z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3347z00_4358); 
FAILURE(BgL_auxz00_7125,BFALSE,BFALSE);} } } 
BgL_auxz00_7115 = BgL_res2608z00_2862; } 
BgL_testz00_7114 = 
(BgL_auxz00_7115==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7114)
{ /* Llib/weakhash.scm 422 */
int BgL_auxz00_7130;
BgL_auxz00_7130 = 
(int)(((long)3)); 
BgL_eqtz00_2853 = 
STRUCT_REF(BgL_tablez00_3627, BgL_auxz00_7130); }  else 
{ /* Llib/weakhash.scm 422 */
BgL_eqtz00_2853 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3627); } } 
if(
PROCEDUREP(BgL_eqtz00_2853))
{ /* Llib/weakhash.scm 422 */
obj_t BgL_funz00_4360;
BgL_funz00_4360 = BgL_eqtz00_2853; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4360, ((long)2)))
{ /* Llib/weakhash.scm 422 */
BgL_testz00_7113 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4360)(BgL_eqtz00_2853, BgL_bkeyz00_1287, BgL_keyz00_3628, BEOA))
; }  else 
{ /* Llib/weakhash.scm 422 */
FAILURE(BGl_string3636z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4360);} }  else 
{ /* Llib/weakhash.scm 422 */
if(
STRINGP(BgL_bkeyz00_1287))
{ /* Llib/weakhash.scm 422 */
if(
STRINGP(BgL_keyz00_3628))
{ /* Llib/weakhash.scm 422 */
BgL_testz00_7113 = 
bigloo_strcmp(BgL_bkeyz00_1287, BgL_keyz00_3628)
; }  else 
{ /* Llib/weakhash.scm 422 */
BgL_testz00_7113 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 422 */
BgL_testz00_7113 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_bkeyz00_1287, BgL_keyz00_3628)
; } } } 
if(BgL_testz00_7113)
{ /* Llib/weakhash.scm 423 */
obj_t BgL_newvalz00_1292;
{ /* Llib/weakhash.scm 423 */
obj_t BgL_funz00_4365;
if(
PROCEDUREP(BgL_procz00_3626))
{ /* Llib/weakhash.scm 423 */
BgL_funz00_4365 = BgL_procz00_3626; }  else 
{ 
obj_t BgL_auxz00_7150;
BgL_auxz00_7150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16522)), BGl_string3635z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_procz00_3626); 
FAILURE(BgL_auxz00_7150,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4365, ((long)1)))
{ /* Llib/weakhash.scm 423 */
BgL_newvalz00_1292 = 
PROCEDURE_ENTRY(BgL_funz00_4365)(BgL_procz00_3626, BgL_valz00_1288, BEOA); }  else 
{ /* Llib/weakhash.scm 423 */
FAILURE(BGl_string3636z00zz__weakhashz00,BGl_list3637z00zz__weakhashz00,BgL_funz00_4365);} } 
{ /* Llib/weakhash.scm 424 */
obj_t BgL_arg2183z00_1293;obj_t BgL_arg2184z00_1294;
{ /* Llib/weakhash.scm 424 */
obj_t BgL_pairz00_2868;
if(
PAIRP(BgL_bucketz00_1289))
{ /* Llib/weakhash.scm 424 */
BgL_pairz00_2868 = BgL_bucketz00_1289; }  else 
{ 
obj_t BgL_auxz00_7161;
BgL_auxz00_7161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16557)), BGl_string3635z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1289); 
FAILURE(BgL_auxz00_7161,BFALSE,BFALSE);} 
BgL_arg2183z00_1293 = 
CAR(BgL_pairz00_2868); } 
{ /* Llib/weakhash.scm 425 */
bool_t BgL_testz00_7166;
{ /* Llib/weakhash.scm 425 */
obj_t BgL_auxz00_7167;
if(
STRUCTP(BgL_tablez00_3627))
{ /* Llib/weakhash.scm 425 */
BgL_auxz00_7167 = BgL_tablez00_3627
; }  else 
{ 
obj_t BgL_auxz00_7170;
BgL_auxz00_7170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16601)), BGl_string3635z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3627); 
FAILURE(BgL_auxz00_7170,BFALSE,BFALSE);} 
BgL_testz00_7166 = 
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_7167); } 
if(BgL_testz00_7166)
{ /* Llib/weakhash.scm 425 */
BgL_arg2184z00_1294 = 
make_weakptr(BgL_newvalz00_1292); }  else 
{ /* Llib/weakhash.scm 425 */
BgL_arg2184z00_1294 = BgL_newvalz00_1292; } } 
{ /* Llib/weakhash.scm 424 */
obj_t BgL_pairz00_2870;
if(
PAIRP(BgL_arg2183z00_1293))
{ /* Llib/weakhash.scm 424 */
BgL_pairz00_2870 = BgL_arg2183z00_1293; }  else 
{ 
obj_t BgL_auxz00_7178;
BgL_auxz00_7178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)16563)), BGl_string3635z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_arg2183z00_1293); 
FAILURE(BgL_auxz00_7178,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2870, BgL_arg2184z00_1294); } } 
return BgL_newvalz00_1292;}  else 
{ /* Llib/weakhash.scm 422 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-add! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t BgL_tablez00_68, obj_t BgL_keyz00_69, obj_t BgL_procz00_70, obj_t BgL_objz00_71, obj_t BgL_initz00_72)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 454 */
{ /* Llib/weakhash.scm 455 */
obj_t BgL_bucketsz00_1298;
{ /* Llib/weakhash.scm 455 */
bool_t BgL_testz00_7183;
{ /* Llib/weakhash.scm 455 */
obj_t BgL_auxz00_7184;
{ /* Llib/weakhash.scm 455 */
obj_t BgL_res2612z00_2907;
{ /* Llib/weakhash.scm 455 */
obj_t BgL_aux3361z00_4374;
BgL_aux3361z00_4374 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3361z00_4374))
{ /* Llib/weakhash.scm 455 */
BgL_res2612z00_2907 = BgL_aux3361z00_4374; }  else 
{ 
obj_t BgL_auxz00_7188;
BgL_auxz00_7188 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17630)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3361z00_4374); 
FAILURE(BgL_auxz00_7188,BFALSE,BFALSE);} } 
BgL_auxz00_7184 = BgL_res2612z00_2907; } 
BgL_testz00_7183 = 
(BgL_auxz00_7184==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7183)
{ /* Llib/weakhash.scm 455 */
int BgL_auxz00_7193;
BgL_auxz00_7193 = 
(int)(((long)2)); 
BgL_bucketsz00_1298 = 
STRUCT_REF(BgL_tablez00_68, BgL_auxz00_7193); }  else 
{ /* Llib/weakhash.scm 455 */
BgL_bucketsz00_1298 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } 
{ /* Llib/weakhash.scm 455 */
int BgL_bucketzd2lenzd2_1299;
{ /* Llib/weakhash.scm 456 */
obj_t BgL_vectorz00_2908;
if(
VECTORP(BgL_bucketsz00_1298))
{ /* Llib/weakhash.scm 456 */
BgL_vectorz00_2908 = BgL_bucketsz00_1298; }  else 
{ 
obj_t BgL_auxz00_7199;
BgL_auxz00_7199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17688)), BGl_string3640z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1298); 
FAILURE(BgL_auxz00_7199,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1299 = 
VECTOR_LENGTH(BgL_vectorz00_2908); } 
{ /* Llib/weakhash.scm 456 */
long BgL_bucketzd2numzd2_1300;
{ /* Llib/weakhash.scm 457 */
long BgL_arg2209z00_1331;
{ /* Llib/weakhash.scm 457 */
long BgL_res2615z00_2927;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_hashnz00_2911;
{ /* Llib/weakhash.scm 457 */
bool_t BgL_testz00_7204;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_auxz00_7205;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_res2613z00_2919;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_aux3365z00_4378;
BgL_aux3365z00_4378 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3365z00_4378))
{ /* Llib/weakhash.scm 457 */
BgL_res2613z00_2919 = BgL_aux3365z00_4378; }  else 
{ 
obj_t BgL_auxz00_7209;
BgL_auxz00_7209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17726)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3365z00_4378); 
FAILURE(BgL_auxz00_7209,BFALSE,BFALSE);} } 
BgL_auxz00_7205 = BgL_res2613z00_2919; } 
BgL_testz00_7204 = 
(BgL_auxz00_7205==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7204)
{ /* Llib/weakhash.scm 457 */
int BgL_auxz00_7214;
BgL_auxz00_7214 = 
(int)(((long)4)); 
BgL_hashnz00_2911 = 
STRUCT_REF(BgL_tablez00_68, BgL_auxz00_7214); }  else 
{ /* Llib/weakhash.scm 457 */
BgL_hashnz00_2911 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } 
if(
PROCEDUREP(BgL_hashnz00_2911))
{ /* Llib/weakhash.scm 457 */
obj_t BgL_arg1965z00_2913;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_funz00_4380;
BgL_funz00_4380 = BgL_hashnz00_2911; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4380, ((long)1)))
{ /* Llib/weakhash.scm 457 */
BgL_arg1965z00_2913 = 
PROCEDURE_ENTRY(BgL_funz00_4380)(BgL_hashnz00_2911, BgL_keyz00_69, BEOA); }  else 
{ /* Llib/weakhash.scm 457 */
FAILURE(BGl_string3641z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4380);} } 
{ /* Llib/weakhash.scm 457 */
long BgL_nz00_2921;
{ /* Llib/weakhash.scm 457 */
obj_t BgL_auxz00_7225;
if(
INTEGERP(BgL_arg1965z00_2913))
{ /* Llib/weakhash.scm 457 */
BgL_auxz00_7225 = BgL_arg1965z00_2913
; }  else 
{ 
obj_t BgL_auxz00_7228;
BgL_auxz00_7228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17726)), BGl_string3640z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_2913); 
FAILURE(BgL_auxz00_7228,BFALSE,BFALSE);} 
BgL_nz00_2921 = 
(long)CINT(BgL_auxz00_7225); } 
if(
(BgL_nz00_2921<((long)0)))
{ /* Llib/weakhash.scm 457 */
BgL_res2615z00_2927 = 
NEG(BgL_nz00_2921); }  else 
{ /* Llib/weakhash.scm 457 */
BgL_res2615z00_2927 = BgL_nz00_2921; } } }  else 
{ /* Llib/weakhash.scm 457 */
BgL_res2615z00_2927 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_69); } } 
BgL_arg2209z00_1331 = BgL_res2615z00_2927; } 
{ /* Llib/weakhash.scm 457 */
long BgL_auxz00_7237;
BgL_auxz00_7237 = 
(long)(BgL_bucketzd2lenzd2_1299); 
BgL_bucketzd2numzd2_1300 = 
(BgL_arg2209z00_1331%BgL_auxz00_7237); } } 
{ /* Llib/weakhash.scm 457 */
obj_t BgL_bucketz00_1301;
{ /* Llib/weakhash.scm 458 */
obj_t BgL_vectorz00_2930;int BgL_kz00_2931;
BgL_vectorz00_2930 = BgL_bucketsz00_1298; 
BgL_kz00_2931 = 
(int)(BgL_bucketzd2numzd2_1300); 
{ /* Llib/weakhash.scm 458 */
int BgL_l2775z00_3771;
BgL_l2775z00_3771 = 
VECTOR_LENGTH(BgL_vectorz00_2930); 
if(
BOUND_CHECK(BgL_kz00_2931, BgL_l2775z00_3771))
{ /* Llib/weakhash.scm 458 */
BgL_bucketz00_1301 = 
VECTOR_REF(BgL_vectorz00_2930,BgL_kz00_2931); }  else 
{ 
obj_t BgL_auxz00_7245;
BgL_auxz00_7245 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17783)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2931), BgL_vectorz00_2930); 
FAILURE(BgL_auxz00_7245,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 458 */
obj_t BgL_maxzd2bucketzd2lenz00_1302;
{ /* Llib/weakhash.scm 459 */
bool_t BgL_testz00_7250;
{ /* Llib/weakhash.scm 459 */
obj_t BgL_auxz00_7251;
{ /* Llib/weakhash.scm 459 */
obj_t BgL_res2616z00_2937;
{ /* Llib/weakhash.scm 459 */
obj_t BgL_aux3373z00_4387;
BgL_aux3373z00_4387 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3373z00_4387))
{ /* Llib/weakhash.scm 459 */
BgL_res2616z00_2937 = BgL_aux3373z00_4387; }  else 
{ 
obj_t BgL_auxz00_7255;
BgL_auxz00_7255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17835)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3373z00_4387); 
FAILURE(BgL_auxz00_7255,BFALSE,BFALSE);} } 
BgL_auxz00_7251 = BgL_res2616z00_2937; } 
BgL_testz00_7250 = 
(BgL_auxz00_7251==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7250)
{ /* Llib/weakhash.scm 459 */
int BgL_auxz00_7260;
BgL_auxz00_7260 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1302 = 
STRUCT_REF(BgL_tablez00_68, BgL_auxz00_7260); }  else 
{ /* Llib/weakhash.scm 459 */
BgL_maxzd2bucketzd2lenz00_1302 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } 
{ /* Llib/weakhash.scm 459 */
obj_t BgL_countz00_1303;
{ /* Llib/weakhash.scm 460 */
obj_t BgL_cellvalz00_7264;
BgL_cellvalz00_7264 = 
BINT(((long)0)); 
BgL_countz00_1303 = 
MAKE_CELL(BgL_cellvalz00_7264); } 
{ /* Llib/weakhash.scm 460 */
obj_t BgL_foundz00_1304;
{ /* Llib/weakhash.scm 465 */
obj_t BgL_zc3anonymousza32204ze3z83_3633;
{ 
int BgL_auxz00_7266;
BgL_auxz00_7266 = 
(int)(((long)4)); 
BgL_zc3anonymousza32204ze3z83_3633 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32204ze3z83zz__weakhashz00, BgL_auxz00_7266); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32204ze3z83_3633, 
(int)(((long)0)), BgL_countz00_1303); 
PROCEDURE_L_SET(BgL_zc3anonymousza32204ze3z83_3633, 
(int)(((long)1)), BgL_procz00_70); 
PROCEDURE_L_SET(BgL_zc3anonymousza32204ze3z83_3633, 
(int)(((long)2)), BgL_tablez00_68); 
PROCEDURE_L_SET(BgL_zc3anonymousza32204ze3z83_3633, 
(int)(((long)3)), BgL_keyz00_69); 
BgL_foundz00_1304 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_68, BgL_bucketsz00_1298, BgL_bucketzd2numzd2_1300, BgL_zc3anonymousza32204ze3z83_3633); } 
{ /* Llib/weakhash.scm 462 */

if(
(BgL_foundz00_1304==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 478 */
obj_t BgL_vz00_1306;
if(
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_tablez00_68))
{ /* Llib/weakhash.scm 479 */
obj_t BgL_arg2199z00_1318;obj_t BgL_arg2200z00_1319;
BgL_arg2199z00_1318 = 
make_weakptr(BgL_objz00_71); 
BgL_arg2200z00_1319 = 
make_weakptr(BgL_initz00_72); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_70, ((long)2)))
{ /* Llib/weakhash.scm 479 */
BgL_vz00_1306 = 
PROCEDURE_ENTRY(BgL_procz00_70)(BgL_procz00_70, BgL_arg2199z00_1318, BgL_arg2200z00_1319, BEOA); }  else 
{ /* Llib/weakhash.scm 479 */
FAILURE(BGl_string3641z00zz__weakhashz00,BGl_list3642z00zz__weakhashz00,BgL_procz00_70);} }  else 
{ /* Llib/weakhash.scm 478 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_70, ((long)2)))
{ /* Llib/weakhash.scm 480 */
BgL_vz00_1306 = 
PROCEDURE_ENTRY(BgL_procz00_70)(BgL_procz00_70, BgL_objz00_71, BgL_initz00_72, BEOA); }  else 
{ /* Llib/weakhash.scm 480 */
FAILURE(BGl_string3641z00zz__weakhashz00,BGl_list3647z00zz__weakhashz00,BgL_procz00_70);} } 
{ /* Llib/weakhash.scm 481 */
long BgL_arg2188z00_1307;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_arg2189z00_1308;
{ /* Llib/weakhash.scm 481 */
bool_t BgL_testz00_7294;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_auxz00_7295;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_res2618z00_2969;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_aux3379z00_4395;
BgL_aux3379z00_4395 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3379z00_4395))
{ /* Llib/weakhash.scm 481 */
BgL_res2618z00_2969 = BgL_aux3379z00_4395; }  else 
{ 
obj_t BgL_auxz00_7299;
BgL_auxz00_7299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18582)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3379z00_4395); 
FAILURE(BgL_auxz00_7299,BFALSE,BFALSE);} } 
BgL_auxz00_7295 = BgL_res2618z00_2969; } 
BgL_testz00_7294 = 
(BgL_auxz00_7295==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7294)
{ /* Llib/weakhash.scm 481 */
int BgL_auxz00_7304;
BgL_auxz00_7304 = 
(int)(((long)0)); 
BgL_arg2189z00_1308 = 
STRUCT_REF(BgL_tablez00_68, BgL_auxz00_7304); }  else 
{ /* Llib/weakhash.scm 481 */
BgL_arg2189z00_1308 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } 
{ /* Llib/weakhash.scm 481 */
long BgL_za71za7_2970;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_auxz00_7308;
if(
INTEGERP(BgL_arg2189z00_1308))
{ /* Llib/weakhash.scm 481 */
BgL_auxz00_7308 = BgL_arg2189z00_1308
; }  else 
{ 
obj_t BgL_auxz00_7311;
BgL_auxz00_7311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18577)), BGl_string3640z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2189z00_1308); 
FAILURE(BgL_auxz00_7311,BFALSE,BFALSE);} 
BgL_za71za7_2970 = 
(long)CINT(BgL_auxz00_7308); } 
BgL_arg2188z00_1307 = 
(BgL_za71za7_2970+((long)1)); } } 
{ /* Llib/weakhash.scm 481 */
bool_t BgL_testz00_7317;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_auxz00_7318;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_res2619z00_2978;
{ /* Llib/weakhash.scm 481 */
obj_t BgL_aux3383z00_4399;
BgL_aux3383z00_4399 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3383z00_4399))
{ /* Llib/weakhash.scm 481 */
BgL_res2619z00_2978 = BgL_aux3383z00_4399; }  else 
{ 
obj_t BgL_auxz00_7322;
BgL_auxz00_7322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18549)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3383z00_4399); 
FAILURE(BgL_auxz00_7322,BFALSE,BFALSE);} } 
BgL_auxz00_7318 = BgL_res2619z00_2978; } 
BgL_testz00_7317 = 
(BgL_auxz00_7318==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7317)
{ /* Llib/weakhash.scm 481 */
obj_t BgL_auxz00_7329;int BgL_auxz00_7327;
BgL_auxz00_7329 = 
BINT(BgL_arg2188z00_1307); 
BgL_auxz00_7327 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_68, BgL_auxz00_7327, BgL_auxz00_7329); }  else 
{ /* Llib/weakhash.scm 481 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } } 
{ /* Llib/weakhash.scm 483 */
obj_t BgL_arg2191z00_1310;
{ /* Llib/weakhash.scm 483 */
obj_t BgL_arg2192z00_1311;obj_t BgL_arg2193z00_1312;
{ /* Llib/weakhash.scm 483 */
obj_t BgL_arg2194z00_1313;
if(
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_tablez00_68))
{ /* Llib/weakhash.scm 483 */
BgL_arg2194z00_1313 = 
make_weakptr(BgL_keyz00_69); }  else 
{ /* Llib/weakhash.scm 483 */
BgL_arg2194z00_1313 = BgL_keyz00_69; } 
BgL_arg2192z00_1311 = 
MAKE_PAIR(BgL_arg2194z00_1313, BgL_vz00_1306); } 
{ /* Llib/weakhash.scm 489 */
obj_t BgL_arg2196z00_1315;
{ /* Llib/weakhash.scm 489 */
bool_t BgL_testz00_7337;
{ /* Llib/weakhash.scm 489 */
obj_t BgL_auxz00_7338;
{ /* Llib/weakhash.scm 489 */
obj_t BgL_res2620z00_2985;
{ /* Llib/weakhash.scm 489 */
obj_t BgL_aux3385z00_4401;
BgL_aux3385z00_4401 = 
STRUCT_KEY(BgL_tablez00_68); 
if(
SYMBOLP(BgL_aux3385z00_4401))
{ /* Llib/weakhash.scm 489 */
BgL_res2620z00_2985 = BgL_aux3385z00_4401; }  else 
{ 
obj_t BgL_auxz00_7342;
BgL_auxz00_7342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18844)), BGl_string3640z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3385z00_4401); 
FAILURE(BgL_auxz00_7342,BFALSE,BFALSE);} } 
BgL_auxz00_7338 = BgL_res2620z00_2985; } 
BgL_testz00_7337 = 
(BgL_auxz00_7338==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7337)
{ /* Llib/weakhash.scm 489 */
int BgL_auxz00_7347;
BgL_auxz00_7347 = 
(int)(((long)2)); 
BgL_arg2196z00_1315 = 
STRUCT_REF(BgL_tablez00_68, BgL_auxz00_7347); }  else 
{ /* Llib/weakhash.scm 489 */
BgL_arg2196z00_1315 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_68); } } 
{ /* Llib/weakhash.scm 489 */
obj_t BgL_vectorz00_2986;int BgL_kz00_2987;
if(
VECTORP(BgL_arg2196z00_1315))
{ /* Llib/weakhash.scm 489 */
BgL_vectorz00_2986 = BgL_arg2196z00_1315; }  else 
{ 
obj_t BgL_auxz00_7353;
BgL_auxz00_7353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18869)), BGl_string3640z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_arg2196z00_1315); 
FAILURE(BgL_auxz00_7353,BFALSE,BFALSE);} 
BgL_kz00_2987 = 
(int)(BgL_bucketzd2numzd2_1300); 
{ /* Llib/weakhash.scm 489 */
int BgL_l2779z00_3775;
BgL_l2779z00_3775 = 
VECTOR_LENGTH(BgL_vectorz00_2986); 
if(
BOUND_CHECK(BgL_kz00_2987, BgL_l2779z00_3775))
{ /* Llib/weakhash.scm 489 */
BgL_arg2193z00_1312 = 
VECTOR_REF(BgL_vectorz00_2986,BgL_kz00_2987); }  else 
{ 
obj_t BgL_auxz00_7362;
BgL_auxz00_7362 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18832)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2987), BgL_vectorz00_2986); 
FAILURE(BgL_auxz00_7362,BFALSE,BFALSE);} } } } 
BgL_arg2191z00_1310 = 
MAKE_PAIR(BgL_arg2192z00_1311, BgL_arg2193z00_1312); } 
{ /* Llib/weakhash.scm 482 */
obj_t BgL_vectorz00_2988;int BgL_kz00_2989;
BgL_vectorz00_2988 = BgL_bucketsz00_1298; 
BgL_kz00_2989 = 
(int)(BgL_bucketzd2numzd2_1300); 
{ /* Llib/weakhash.scm 482 */
int BgL_l2783z00_3779;
BgL_l2783z00_3779 = 
VECTOR_LENGTH(BgL_vectorz00_2988); 
if(
BOUND_CHECK(BgL_kz00_2989, BgL_l2783z00_3779))
{ /* Llib/weakhash.scm 482 */
VECTOR_SET(BgL_vectorz00_2988,BgL_kz00_2989,BgL_arg2191z00_1310); }  else 
{ 
obj_t BgL_auxz00_7373;
BgL_auxz00_7373 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18616)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_2989), BgL_vectorz00_2988); 
FAILURE(BgL_auxz00_7373,BFALSE,BFALSE);} } } } 
{ /* Llib/weakhash.scm 491 */
bool_t BgL_testz00_7378;
{ /* Llib/weakhash.scm 491 */
long BgL_n1z00_2991;long BgL_n2z00_2992;
{ /* Llib/weakhash.scm 491 */
obj_t BgL_auxz00_7379;
{ /* Llib/weakhash.scm 491 */
obj_t BgL_aux3391z00_4407;
BgL_aux3391z00_4407 = 
CELL_REF(BgL_countz00_1303); 
if(
INTEGERP(BgL_aux3391z00_4407))
{ /* Llib/weakhash.scm 491 */
BgL_auxz00_7379 = BgL_aux3391z00_4407
; }  else 
{ 
obj_t BgL_auxz00_7382;
BgL_auxz00_7382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18909)), BGl_string3640z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3391z00_4407); 
FAILURE(BgL_auxz00_7382,BFALSE,BFALSE);} } 
BgL_n1z00_2991 = 
(long)CINT(BgL_auxz00_7379); } 
{ /* Llib/weakhash.scm 491 */
obj_t BgL_auxz00_7387;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1302))
{ /* Llib/weakhash.scm 491 */
BgL_auxz00_7387 = BgL_maxzd2bucketzd2lenz00_1302
; }  else 
{ 
obj_t BgL_auxz00_7390;
BgL_auxz00_7390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18915)), BGl_string3640z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_maxzd2bucketzd2lenz00_1302); 
FAILURE(BgL_auxz00_7390,BFALSE,BFALSE);} 
BgL_n2z00_2992 = 
(long)CINT(BgL_auxz00_7387); } 
BgL_testz00_7378 = 
(BgL_n1z00_2991>BgL_n2z00_2992); } 
if(BgL_testz00_7378)
{ /* Llib/weakhash.scm 491 */
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_tablez00_68); }  else 
{ /* Llib/weakhash.scm 491 */BFALSE; } } 
return BgL_vz00_1306;}  else 
{ /* Llib/weakhash.scm 476 */
return BgL_foundz00_1304;} } } } } } } } } } 
}



/* _weak-hashtable-add! */
obj_t BGl__weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t BgL_envz00_3634, obj_t BgL_tablez00_3635, obj_t BgL_keyz00_3636, obj_t BgL_procz00_3637, obj_t BgL_objz00_3638, obj_t BgL_initz00_3639)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 454 */
{ /* Llib/weakhash.scm 455 */
obj_t BgL_auxz00_7404;obj_t BgL_auxz00_7397;
if(
PROCEDUREP(BgL_procz00_3637))
{ /* Llib/weakhash.scm 455 */
BgL_auxz00_7404 = BgL_procz00_3637
; }  else 
{ 
obj_t BgL_auxz00_7407;
BgL_auxz00_7407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17614)), BGl_string3652z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_procz00_3637); 
FAILURE(BgL_auxz00_7407,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3635))
{ /* Llib/weakhash.scm 455 */
BgL_auxz00_7397 = BgL_tablez00_3635
; }  else 
{ 
obj_t BgL_auxz00_7400;
BgL_auxz00_7400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)17614)), BGl_string3652z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3635); 
FAILURE(BgL_auxz00_7400,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_auxz00_7397, BgL_keyz00_3636, BgL_auxz00_7404, BgL_objz00_3638, BgL_initz00_3639);} } 
}



/* <anonymous:2204> */
obj_t BGl_zc3anonymousza32204ze3z83zz__weakhashz00(obj_t BgL_envz00_3640, obj_t BgL_bkeyz00_3645, obj_t BgL_valz00_3646, obj_t BgL_bucketz00_3647)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 464 */
{ /* Llib/weakhash.scm 465 */
obj_t BgL_countz00_3641;obj_t BgL_procz00_3642;obj_t BgL_tablez00_3643;obj_t BgL_keyz00_3644;
BgL_countz00_3641 = 
PROCEDURE_L_REF(BgL_envz00_3640, 
(int)(((long)0))); 
BgL_procz00_3642 = 
PROCEDURE_L_REF(BgL_envz00_3640, 
(int)(((long)1))); 
BgL_tablez00_3643 = 
PROCEDURE_L_REF(BgL_envz00_3640, 
(int)(((long)2))); 
BgL_keyz00_3644 = 
PROCEDURE_L_REF(BgL_envz00_3640, 
(int)(((long)3))); 
{ 
obj_t BgL_bkeyz00_1321;obj_t BgL_valz00_1322;obj_t BgL_bucketz00_1323;
BgL_bkeyz00_1321 = BgL_bkeyz00_3645; 
BgL_valz00_1322 = BgL_valz00_3646; 
BgL_bucketz00_1323 = BgL_bucketz00_3647; 
{ /* Llib/weakhash.scm 465 */
obj_t BgL_auxz00_3648;
{ /* Llib/weakhash.scm 465 */
long BgL_za71za7_2938;
{ /* Llib/weakhash.scm 465 */
obj_t BgL_auxz00_7420;
{ /* Llib/weakhash.scm 465 */
obj_t BgL_aux3399z00_4415;
BgL_aux3399z00_4415 = 
CELL_REF(BgL_countz00_3641); 
if(
INTEGERP(BgL_aux3399z00_4415))
{ /* Llib/weakhash.scm 465 */
BgL_auxz00_7420 = BgL_aux3399z00_4415
; }  else 
{ 
obj_t BgL_auxz00_7423;
BgL_auxz00_7423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18065)), BGl_string3653z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3399z00_4415); 
FAILURE(BgL_auxz00_7423,BFALSE,BFALSE);} } 
BgL_za71za7_2938 = 
(long)CINT(BgL_auxz00_7420); } 
BgL_auxz00_3648 = 
BINT(
(BgL_za71za7_2938+((long)1))); } 
CELL_SET(BgL_countz00_3641, BgL_auxz00_3648); } 
{ /* Llib/weakhash.scm 466 */
bool_t BgL_testz00_7430;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_eqtz00_2943;
{ /* Llib/weakhash.scm 466 */
bool_t BgL_testz00_7431;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_auxz00_7432;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_res2617z00_2952;
{ /* Llib/weakhash.scm 466 */
obj_t BgL_sz00_2951;
if(
STRUCTP(BgL_tablez00_3643))
{ /* Llib/weakhash.scm 466 */
BgL_sz00_2951 = BgL_tablez00_3643; }  else 
{ 
obj_t BgL_auxz00_7435;
BgL_auxz00_7435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18091)), BGl_string3653z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3643); 
FAILURE(BgL_auxz00_7435,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 466 */
obj_t BgL_aux3403z00_4419;
BgL_aux3403z00_4419 = 
STRUCT_KEY(BgL_sz00_2951); 
if(
SYMBOLP(BgL_aux3403z00_4419))
{ /* Llib/weakhash.scm 466 */
BgL_res2617z00_2952 = BgL_aux3403z00_4419; }  else 
{ 
obj_t BgL_auxz00_7442;
BgL_auxz00_7442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18091)), BGl_string3653z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3403z00_4419); 
FAILURE(BgL_auxz00_7442,BFALSE,BFALSE);} } } 
BgL_auxz00_7432 = BgL_res2617z00_2952; } 
BgL_testz00_7431 = 
(BgL_auxz00_7432==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7431)
{ /* Llib/weakhash.scm 466 */
int BgL_auxz00_7447;
BgL_auxz00_7447 = 
(int)(((long)3)); 
BgL_eqtz00_2943 = 
STRUCT_REF(BgL_tablez00_3643, BgL_auxz00_7447); }  else 
{ /* Llib/weakhash.scm 466 */
BgL_eqtz00_2943 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3643); } } 
if(
PROCEDUREP(BgL_eqtz00_2943))
{ /* Llib/weakhash.scm 466 */
obj_t BgL_funz00_4421;
BgL_funz00_4421 = BgL_eqtz00_2943; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4421, ((long)2)))
{ /* Llib/weakhash.scm 466 */
BgL_testz00_7430 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4421)(BgL_eqtz00_2943, BgL_bkeyz00_1321, BgL_keyz00_3644, BEOA))
; }  else 
{ /* Llib/weakhash.scm 466 */
FAILURE(BGl_string3654z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4421);} }  else 
{ /* Llib/weakhash.scm 466 */
if(
STRINGP(BgL_bkeyz00_1321))
{ /* Llib/weakhash.scm 466 */
if(
STRINGP(BgL_keyz00_3644))
{ /* Llib/weakhash.scm 466 */
BgL_testz00_7430 = 
bigloo_strcmp(BgL_bkeyz00_1321, BgL_keyz00_3644)
; }  else 
{ /* Llib/weakhash.scm 466 */
BgL_testz00_7430 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 466 */
BgL_testz00_7430 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_bkeyz00_1321, BgL_keyz00_3644)
; } } } 
if(BgL_testz00_7430)
{ /* Llib/weakhash.scm 467 */
obj_t BgL_newvalz00_1326;
{ /* Llib/weakhash.scm 467 */
obj_t BgL_funz00_4426;
if(
PROCEDUREP(BgL_procz00_3642))
{ /* Llib/weakhash.scm 467 */
BgL_funz00_4426 = BgL_procz00_3642; }  else 
{ 
obj_t BgL_auxz00_7467;
BgL_auxz00_7467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18143)), BGl_string3653z00zz__weakhashz00, BGl_string3596z00zz__weakhashz00, BgL_procz00_3642); 
FAILURE(BgL_auxz00_7467,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4426, ((long)1)))
{ /* Llib/weakhash.scm 467 */
BgL_newvalz00_1326 = 
PROCEDURE_ENTRY(BgL_funz00_4426)(BgL_procz00_3642, BgL_valz00_1322, BEOA); }  else 
{ /* Llib/weakhash.scm 467 */
FAILURE(BGl_string3654z00zz__weakhashz00,BGl_list3637z00zz__weakhashz00,BgL_funz00_4426);} } 
{ /* Llib/weakhash.scm 468 */
obj_t BgL_arg2206z00_1327;obj_t BgL_arg2207z00_1328;
{ /* Llib/weakhash.scm 468 */
obj_t BgL_pairz00_2958;
if(
PAIRP(BgL_bucketz00_1323))
{ /* Llib/weakhash.scm 468 */
BgL_pairz00_2958 = BgL_bucketz00_1323; }  else 
{ 
obj_t BgL_auxz00_7478;
BgL_auxz00_7478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18178)), BGl_string3653z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_bucketz00_1323); 
FAILURE(BgL_auxz00_7478,BFALSE,BFALSE);} 
BgL_arg2206z00_1327 = 
CAR(BgL_pairz00_2958); } 
{ /* Llib/weakhash.scm 469 */
bool_t BgL_testz00_7483;
{ /* Llib/weakhash.scm 469 */
obj_t BgL_auxz00_7484;
if(
STRUCTP(BgL_tablez00_3643))
{ /* Llib/weakhash.scm 469 */
BgL_auxz00_7484 = BgL_tablez00_3643
; }  else 
{ 
obj_t BgL_auxz00_7487;
BgL_auxz00_7487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18222)), BGl_string3653z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3643); 
FAILURE(BgL_auxz00_7487,BFALSE,BFALSE);} 
BgL_testz00_7483 = 
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_7484); } 
if(BgL_testz00_7483)
{ /* Llib/weakhash.scm 469 */
BgL_arg2207z00_1328 = 
make_weakptr(BgL_newvalz00_1326); }  else 
{ /* Llib/weakhash.scm 469 */
BgL_arg2207z00_1328 = BgL_newvalz00_1326; } } 
{ /* Llib/weakhash.scm 468 */
obj_t BgL_pairz00_2960;
if(
PAIRP(BgL_arg2206z00_1327))
{ /* Llib/weakhash.scm 468 */
BgL_pairz00_2960 = BgL_arg2206z00_1327; }  else 
{ 
obj_t BgL_auxz00_7495;
BgL_auxz00_7495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)18184)), BGl_string3653z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_arg2206z00_1327); 
FAILURE(BgL_auxz00_7495,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2960, BgL_arg2207z00_1328); } } 
return BgL_newvalz00_1326;}  else 
{ /* Llib/weakhash.scm 466 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-remove! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t BgL_tablez00_73, obj_t BgL_keyz00_74)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 498 */
{ /* Llib/weakhash.scm 499 */
obj_t BgL_bucketsz00_1332;
{ /* Llib/weakhash.scm 499 */
bool_t BgL_testz00_7500;
{ /* Llib/weakhash.scm 499 */
obj_t BgL_auxz00_7501;
{ /* Llib/weakhash.scm 499 */
obj_t BgL_res2621z00_2998;
{ /* Llib/weakhash.scm 499 */
obj_t BgL_aux3417z00_4435;
BgL_aux3417z00_4435 = 
STRUCT_KEY(BgL_tablez00_73); 
if(
SYMBOLP(BgL_aux3417z00_4435))
{ /* Llib/weakhash.scm 499 */
BgL_res2621z00_2998 = BgL_aux3417z00_4435; }  else 
{ 
obj_t BgL_auxz00_7505;
BgL_auxz00_7505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19276)), BGl_string3655z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3417z00_4435); 
FAILURE(BgL_auxz00_7505,BFALSE,BFALSE);} } 
BgL_auxz00_7501 = BgL_res2621z00_2998; } 
BgL_testz00_7500 = 
(BgL_auxz00_7501==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7500)
{ /* Llib/weakhash.scm 499 */
int BgL_auxz00_7510;
BgL_auxz00_7510 = 
(int)(((long)2)); 
BgL_bucketsz00_1332 = 
STRUCT_REF(BgL_tablez00_73, BgL_auxz00_7510); }  else 
{ /* Llib/weakhash.scm 499 */
BgL_bucketsz00_1332 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_73); } } 
{ /* Llib/weakhash.scm 499 */
int BgL_bucketzd2lenzd2_1333;
{ /* Llib/weakhash.scm 500 */
obj_t BgL_vectorz00_2999;
if(
VECTORP(BgL_bucketsz00_1332))
{ /* Llib/weakhash.scm 500 */
BgL_vectorz00_2999 = BgL_bucketsz00_1332; }  else 
{ 
obj_t BgL_auxz00_7516;
BgL_auxz00_7516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19334)), BGl_string3655z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_bucketsz00_1332); 
FAILURE(BgL_auxz00_7516,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1333 = 
VECTOR_LENGTH(BgL_vectorz00_2999); } 
{ /* Llib/weakhash.scm 500 */
long BgL_bucketzd2numzd2_1334;
{ /* Llib/weakhash.scm 501 */
long BgL_arg2214z00_1345;
{ /* Llib/weakhash.scm 501 */
long BgL_res2624z00_3018;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_hashnz00_3002;
{ /* Llib/weakhash.scm 501 */
bool_t BgL_testz00_7521;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_auxz00_7522;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_res2622z00_3010;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_aux3421z00_4439;
BgL_aux3421z00_4439 = 
STRUCT_KEY(BgL_tablez00_73); 
if(
SYMBOLP(BgL_aux3421z00_4439))
{ /* Llib/weakhash.scm 501 */
BgL_res2622z00_3010 = BgL_aux3421z00_4439; }  else 
{ 
obj_t BgL_auxz00_7526;
BgL_auxz00_7526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19372)), BGl_string3655z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3421z00_4439); 
FAILURE(BgL_auxz00_7526,BFALSE,BFALSE);} } 
BgL_auxz00_7522 = BgL_res2622z00_3010; } 
BgL_testz00_7521 = 
(BgL_auxz00_7522==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7521)
{ /* Llib/weakhash.scm 501 */
int BgL_auxz00_7531;
BgL_auxz00_7531 = 
(int)(((long)4)); 
BgL_hashnz00_3002 = 
STRUCT_REF(BgL_tablez00_73, BgL_auxz00_7531); }  else 
{ /* Llib/weakhash.scm 501 */
BgL_hashnz00_3002 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_73); } } 
if(
PROCEDUREP(BgL_hashnz00_3002))
{ /* Llib/weakhash.scm 501 */
obj_t BgL_arg1965z00_3004;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_funz00_4441;
BgL_funz00_4441 = BgL_hashnz00_3002; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4441, ((long)1)))
{ /* Llib/weakhash.scm 501 */
BgL_arg1965z00_3004 = 
PROCEDURE_ENTRY(BgL_funz00_4441)(BgL_hashnz00_3002, BgL_keyz00_74, BEOA); }  else 
{ /* Llib/weakhash.scm 501 */
FAILURE(BGl_string3656z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4441);} } 
{ /* Llib/weakhash.scm 501 */
long BgL_nz00_3012;
{ /* Llib/weakhash.scm 501 */
obj_t BgL_auxz00_7542;
if(
INTEGERP(BgL_arg1965z00_3004))
{ /* Llib/weakhash.scm 501 */
BgL_auxz00_7542 = BgL_arg1965z00_3004
; }  else 
{ 
obj_t BgL_auxz00_7545;
BgL_auxz00_7545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19372)), BGl_string3655z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_3004); 
FAILURE(BgL_auxz00_7545,BFALSE,BFALSE);} 
BgL_nz00_3012 = 
(long)CINT(BgL_auxz00_7542); } 
if(
(BgL_nz00_3012<((long)0)))
{ /* Llib/weakhash.scm 501 */
BgL_res2624z00_3018 = 
NEG(BgL_nz00_3012); }  else 
{ /* Llib/weakhash.scm 501 */
BgL_res2624z00_3018 = BgL_nz00_3012; } } }  else 
{ /* Llib/weakhash.scm 501 */
BgL_res2624z00_3018 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_74); } } 
BgL_arg2214z00_1345 = BgL_res2624z00_3018; } 
{ /* Llib/weakhash.scm 501 */
long BgL_auxz00_7554;
BgL_auxz00_7554 = 
(long)(BgL_bucketzd2lenzd2_1333); 
BgL_bucketzd2numzd2_1334 = 
(BgL_arg2214z00_1345%BgL_auxz00_7554); } } 
{ /* Llib/weakhash.scm 501 */
obj_t BgL_bucketz00_1335;
{ /* Llib/weakhash.scm 502 */
obj_t BgL_vectorz00_3021;int BgL_kz00_3022;
BgL_vectorz00_3021 = BgL_bucketsz00_1332; 
BgL_kz00_3022 = 
(int)(BgL_bucketzd2numzd2_1334); 
{ /* Llib/weakhash.scm 502 */
int BgL_l2787z00_3783;
BgL_l2787z00_3783 = 
VECTOR_LENGTH(BgL_vectorz00_3021); 
if(
BOUND_CHECK(BgL_kz00_3022, BgL_l2787z00_3783))
{ /* Llib/weakhash.scm 502 */
BgL_bucketz00_1335 = 
VECTOR_REF(BgL_vectorz00_3021,BgL_kz00_3022); }  else 
{ 
obj_t BgL_auxz00_7562;
BgL_auxz00_7562 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19429)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3022), BgL_vectorz00_3021); 
FAILURE(BgL_auxz00_7562,BFALSE,BFALSE);} } } 
{ /* Llib/weakhash.scm 502 */
obj_t BgL_foundz00_1336;
{ /* Llib/weakhash.scm 506 */
obj_t BgL_zc3anonymousza32212ze3z83_3649;
{ 
int BgL_auxz00_7567;
BgL_auxz00_7567 = 
(int)(((long)2)); 
BgL_zc3anonymousza32212ze3z83_3649 = 
MAKE_L_PROCEDURE(BGl_zc3anonymousza32212ze3z83zz__weakhashz00, BgL_auxz00_7567); } 
PROCEDURE_L_SET(BgL_zc3anonymousza32212ze3z83_3649, 
(int)(((long)0)), BgL_tablez00_73); 
PROCEDURE_L_SET(BgL_zc3anonymousza32212ze3z83_3649, 
(int)(((long)1)), BgL_keyz00_74); 
BgL_foundz00_1336 = 
BGl_traversezd2bucketszd2zz__weakhashz00(BgL_tablez00_73, BgL_bucketsz00_1332, BgL_bucketzd2numzd2_1334, BgL_zc3anonymousza32212ze3z83_3649); } 
{ /* Llib/weakhash.scm 503 */

if(
(BgL_foundz00_1336==BGl_keepgoingz00zz__weakhashz00))
{ /* Llib/weakhash.scm 509 */
return BFALSE;}  else 
{ /* Llib/weakhash.scm 509 */
return BTRUE;} } } } } } } } 
}



/* _weak-hashtable-remove! */
obj_t BGl__weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t BgL_envz00_3650, obj_t BgL_tablez00_3651, obj_t BgL_keyz00_3652)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 498 */
{ /* Llib/weakhash.scm 499 */
obj_t BgL_auxz00_7577;
if(
STRUCTP(BgL_tablez00_3651))
{ /* Llib/weakhash.scm 499 */
BgL_auxz00_7577 = BgL_tablez00_3651
; }  else 
{ 
obj_t BgL_auxz00_7580;
BgL_auxz00_7580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19260)), BGl_string3657z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3651); 
FAILURE(BgL_auxz00_7580,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_auxz00_7577, BgL_keyz00_3652);} } 
}



/* <anonymous:2212> */
obj_t BGl_zc3anonymousza32212ze3z83zz__weakhashz00(obj_t BgL_envz00_3653, obj_t BgL_bkeyz00_3656, obj_t BgL_valz00_3657, obj_t BgL_bucketz00_3658)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 505 */
{ /* Llib/weakhash.scm 506 */
obj_t BgL_tablez00_3654;obj_t BgL_keyz00_3655;
BgL_tablez00_3654 = 
PROCEDURE_L_REF(BgL_envz00_3653, 
(int)(((long)0))); 
BgL_keyz00_3655 = 
PROCEDURE_L_REF(BgL_envz00_3653, 
(int)(((long)1))); 
{ 
obj_t BgL_bkeyz00_1339;obj_t BgL_valz00_1340;obj_t BgL_bucketz00_1341;
BgL_bkeyz00_1339 = BgL_bkeyz00_3656; 
BgL_valz00_1340 = BgL_valz00_3657; 
BgL_bucketz00_1341 = BgL_bucketz00_3658; 
{ /* Llib/weakhash.scm 506 */
bool_t BgL_testz00_7589;
{ /* Llib/weakhash.scm 506 */
obj_t BgL_eqtz00_3027;
{ /* Llib/weakhash.scm 506 */
bool_t BgL_testz00_7590;
{ /* Llib/weakhash.scm 506 */
obj_t BgL_auxz00_7591;
{ /* Llib/weakhash.scm 506 */
obj_t BgL_res2625z00_3036;
{ /* Llib/weakhash.scm 506 */
obj_t BgL_sz00_3035;
if(
STRUCTP(BgL_tablez00_3654))
{ /* Llib/weakhash.scm 506 */
BgL_sz00_3035 = BgL_tablez00_3654; }  else 
{ 
obj_t BgL_auxz00_7594;
BgL_auxz00_7594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19599)), BGl_string3658z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3654); 
FAILURE(BgL_auxz00_7594,BFALSE,BFALSE);} 
{ /* Llib/weakhash.scm 506 */
obj_t BgL_aux3433z00_4452;
BgL_aux3433z00_4452 = 
STRUCT_KEY(BgL_sz00_3035); 
if(
SYMBOLP(BgL_aux3433z00_4452))
{ /* Llib/weakhash.scm 506 */
BgL_res2625z00_3036 = BgL_aux3433z00_4452; }  else 
{ 
obj_t BgL_auxz00_7601;
BgL_auxz00_7601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)19599)), BGl_string3658z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3433z00_4452); 
FAILURE(BgL_auxz00_7601,BFALSE,BFALSE);} } } 
BgL_auxz00_7591 = BgL_res2625z00_3036; } 
BgL_testz00_7590 = 
(BgL_auxz00_7591==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7590)
{ /* Llib/weakhash.scm 506 */
int BgL_auxz00_7606;
BgL_auxz00_7606 = 
(int)(((long)3)); 
BgL_eqtz00_3027 = 
STRUCT_REF(BgL_tablez00_3654, BgL_auxz00_7606); }  else 
{ /* Llib/weakhash.scm 506 */
BgL_eqtz00_3027 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_3654); } } 
if(
PROCEDUREP(BgL_eqtz00_3027))
{ /* Llib/weakhash.scm 506 */
obj_t BgL_funz00_4454;
BgL_funz00_4454 = BgL_eqtz00_3027; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4454, ((long)2)))
{ /* Llib/weakhash.scm 506 */
BgL_testz00_7589 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4454)(BgL_eqtz00_3027, BgL_keyz00_3655, BgL_bkeyz00_1339, BEOA))
; }  else 
{ /* Llib/weakhash.scm 506 */
FAILURE(BGl_string3659z00zz__weakhashz00,BGl_list3615z00zz__weakhashz00,BgL_funz00_4454);} }  else 
{ /* Llib/weakhash.scm 506 */
if(
STRINGP(BgL_keyz00_3655))
{ /* Llib/weakhash.scm 506 */
if(
STRINGP(BgL_bkeyz00_1339))
{ /* Llib/weakhash.scm 506 */
BgL_testz00_7589 = 
bigloo_strcmp(BgL_keyz00_3655, BgL_bkeyz00_1339)
; }  else 
{ /* Llib/weakhash.scm 506 */
BgL_testz00_7589 = ((bool_t)0)
; } }  else 
{ /* Llib/weakhash.scm 506 */
BgL_testz00_7589 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_keyz00_3655, BgL_bkeyz00_1339)
; } } } 
if(BgL_testz00_7589)
{ /* Llib/weakhash.scm 506 */
return BGl_removestopz00zz__weakhashz00;}  else 
{ /* Llib/weakhash.scm 506 */
return BGl_keepgoingz00zz__weakhashz00;} } } } } 
}



/* weak-hashtable-expand! */
BGL_EXPORTED_DEF obj_t BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t BgL_tablez00_75)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 514 */
{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7624;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_arg2283z00_1464;
{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7625;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7626;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_res2626z00_3047;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_aux3437z00_4457;
BgL_aux3437z00_4457 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3437z00_4457))
{ /* Llib/weakhash.scm 526 */
BgL_res2626z00_3047 = BgL_aux3437z00_4457; }  else 
{ 
obj_t BgL_auxz00_7630;
BgL_auxz00_7630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20377)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3437z00_4457); 
FAILURE(BgL_auxz00_7630,BFALSE,BFALSE);} } 
BgL_auxz00_7626 = BgL_res2626z00_3047; } 
BgL_testz00_7625 = 
(BgL_auxz00_7626==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7625)
{ /* Llib/weakhash.scm 526 */
int BgL_auxz00_7635;
BgL_auxz00_7635 = 
(int)(((long)5)); 
BgL_arg2283z00_1464 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7635); }  else 
{ /* Llib/weakhash.scm 526 */
BgL_arg2283z00_1464 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 526 */
long BgL_n2z00_3049;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7639;
if(
INTEGERP(BgL_arg2283z00_1464))
{ /* Llib/weakhash.scm 526 */
BgL_auxz00_7639 = BgL_arg2283z00_1464
; }  else 
{ 
obj_t BgL_auxz00_7642;
BgL_auxz00_7642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20399)), BGl_string3660z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2283z00_1464); 
FAILURE(BgL_auxz00_7642,BFALSE,BFALSE);} 
BgL_n2z00_3049 = 
(long)CINT(BgL_auxz00_7639); } 
BgL_testz00_7624 = 
(((long)1)==BgL_n2z00_3049); } } 
if(BgL_testz00_7624)
{ /* Llib/weakhash.scm 526 */
obj_t BgL_oldzd2buckszd2_1347;
{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7648;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7649;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_res2627z00_3055;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_aux3441z00_4461;
BgL_aux3441z00_4461 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3441z00_4461))
{ /* Llib/weakhash.scm 526 */
BgL_res2627z00_3055 = BgL_aux3441z00_4461; }  else 
{ 
obj_t BgL_auxz00_7653;
BgL_auxz00_7653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3441z00_4461); 
FAILURE(BgL_auxz00_7653,BFALSE,BFALSE);} } 
BgL_auxz00_7649 = BgL_res2627z00_3055; } 
BgL_testz00_7648 = 
(BgL_auxz00_7649==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7648)
{ /* Llib/weakhash.scm 526 */
int BgL_auxz00_7658;
BgL_auxz00_7658 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1347 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7658); }  else 
{ /* Llib/weakhash.scm 526 */
BgL_oldzd2buckszd2_1347 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 526 */
int BgL_oldzd2buckszd2lenz00_1348;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_vectorz00_3056;
if(
VECTORP(BgL_oldzd2buckszd2_1347))
{ /* Llib/weakhash.scm 526 */
BgL_vectorz00_3056 = BgL_oldzd2buckszd2_1347; }  else 
{ 
obj_t BgL_auxz00_7664;
BgL_auxz00_7664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3660z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_oldzd2buckszd2_1347); 
FAILURE(BgL_auxz00_7664,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1348 = 
VECTOR_LENGTH(BgL_vectorz00_3056); } 
{ /* Llib/weakhash.scm 526 */
long BgL_newzd2buckszd2lenz00_1349;
BgL_newzd2buckszd2lenz00_1349 = 
(((long)2)*
(long)(BgL_oldzd2buckszd2lenz00_1348)); 
{ /* Llib/weakhash.scm 526 */
obj_t BgL_newzd2buckszd2_1350;
BgL_newzd2buckszd2_1350 = 
make_vector(
(int)(BgL_newzd2buckszd2lenz00_1349), BNIL); 
{ /* Llib/weakhash.scm 526 */
obj_t BgL_countz00_1351;
{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7673;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7674;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_res2628z00_3064;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_aux3445z00_4465;
BgL_aux3445z00_4465 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3445z00_4465))
{ /* Llib/weakhash.scm 526 */
BgL_res2628z00_3064 = BgL_aux3445z00_4465; }  else 
{ 
obj_t BgL_auxz00_7678;
BgL_auxz00_7678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3445z00_4465); 
FAILURE(BgL_auxz00_7678,BFALSE,BFALSE);} } 
BgL_auxz00_7674 = BgL_res2628z00_3064; } 
BgL_testz00_7673 = 
(BgL_auxz00_7674==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7673)
{ /* Llib/weakhash.scm 526 */
int BgL_auxz00_7683;
BgL_auxz00_7683 = 
(int)(((long)0)); 
BgL_countz00_1351 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7683); }  else 
{ /* Llib/weakhash.scm 526 */
BgL_countz00_1351 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 526 */

{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7687;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7688;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_res2629z00_3071;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_aux3447z00_4467;
BgL_aux3447z00_4467 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3447z00_4467))
{ /* Llib/weakhash.scm 526 */
BgL_res2629z00_3071 = BgL_aux3447z00_4467; }  else 
{ 
obj_t BgL_auxz00_7692;
BgL_auxz00_7692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3447z00_4467); 
FAILURE(BgL_auxz00_7692,BFALSE,BFALSE);} } 
BgL_auxz00_7688 = BgL_res2629z00_3071; } 
BgL_testz00_7687 = 
(BgL_auxz00_7688==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7687)
{ /* Llib/weakhash.scm 526 */
int BgL_auxz00_7697;
BgL_auxz00_7697 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_7697, BgL_newzd2buckszd2_1350); }  else 
{ /* Llib/weakhash.scm 526 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ 
long BgL_iz00_1353;
BgL_iz00_1353 = ((long)0); 
BgL_zc3anonymousza32216ze3z83_1354:
if(
(BgL_iz00_1353<
(long)(BgL_oldzd2buckszd2lenz00_1348)))
{ /* Llib/weakhash.scm 526 */
{ /* Llib/weakhash.scm 526 */
obj_t BgL_g1871z00_1356;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_vectorz00_3074;int BgL_kz00_3075;
BgL_vectorz00_3074 = BgL_oldzd2buckszd2_1347; 
BgL_kz00_3075 = 
(int)(BgL_iz00_1353); 
{ /* Llib/weakhash.scm 526 */
int BgL_l2791z00_3787;
BgL_l2791z00_3787 = 
VECTOR_LENGTH(BgL_vectorz00_3074); 
if(
BOUND_CHECK(BgL_kz00_3075, BgL_l2791z00_3787))
{ /* Llib/weakhash.scm 526 */
BgL_g1871z00_1356 = 
VECTOR_REF(BgL_vectorz00_3074,BgL_kz00_3075); }  else 
{ 
obj_t BgL_auxz00_7709;
BgL_auxz00_7709 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3075), BgL_vectorz00_3074); 
FAILURE(BgL_auxz00_7709,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1869z00_1358;
BgL_l1869z00_1358 = BgL_g1871z00_1356; 
BgL_zc3anonymousza32218ze3z83_1359:
if(
PAIRP(BgL_l1869z00_1358))
{ /* Llib/weakhash.scm 526 */
{ /* Llib/weakhash.scm 528 */
obj_t BgL_cellz00_1361;
BgL_cellz00_1361 = 
CAR(BgL_l1869z00_1358); 
{ /* Llib/weakhash.scm 528 */
obj_t BgL_keyz00_1362;
{ /* Llib/weakhash.scm 528 */
obj_t BgL_arg2226z00_1368;
{ /* Llib/weakhash.scm 528 */
obj_t BgL_pairz00_3078;
if(
PAIRP(BgL_cellz00_1361))
{ /* Llib/weakhash.scm 528 */
BgL_pairz00_3078 = BgL_cellz00_1361; }  else 
{ 
obj_t BgL_auxz00_7719;
BgL_auxz00_7719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20464)), BGl_string3661z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_cellz00_1361); 
FAILURE(BgL_auxz00_7719,BFALSE,BFALSE);} 
BgL_arg2226z00_1368 = 
CAR(BgL_pairz00_3078); } 
{ /* Llib/weakhash.scm 528 */
obj_t BgL_objz00_3079;
if(
BGL_WEAKPTRP(BgL_arg2226z00_1368))
{ /* Llib/weakhash.scm 528 */
BgL_objz00_3079 = BgL_arg2226z00_1368; }  else 
{ 
obj_t BgL_auxz00_7726;
BgL_auxz00_7726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20468)), BGl_string3661z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2226z00_1368); 
FAILURE(BgL_auxz00_7726,BFALSE,BFALSE);} 
BgL_keyz00_1362 = 
weakptr_data(BgL_objz00_3079); } } 
if(
(BgL_keyz00_1362==BUNSPEC))
{ /* Llib/weakhash.scm 530 */
long BgL_za71za7_3080;
{ /* Llib/weakhash.scm 530 */
obj_t BgL_auxz00_7733;
{ /* Llib/weakhash.scm 530 */
obj_t BgL_aux3455z00_4475;
BgL_aux3455z00_4475 = BgL_countz00_1351; 
if(
INTEGERP(BgL_aux3455z00_4475))
{ /* Llib/weakhash.scm 530 */
BgL_auxz00_7733 = BgL_aux3455z00_4475
; }  else 
{ 
obj_t BgL_auxz00_7736;
BgL_auxz00_7736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20529)), BGl_string3661z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3455z00_4475); 
FAILURE(BgL_auxz00_7736,BFALSE,BFALSE);} } 
BgL_za71za7_3080 = 
(long)CINT(BgL_auxz00_7733); } 
BgL_countz00_1351 = 
BINT(
(BgL_za71za7_3080-((long)1))); }  else 
{ /* Llib/weakhash.scm 531 */
long BgL_hz00_1364;
{ /* Llib/weakhash.scm 532 */
long BgL_arg2224z00_1367;
{ /* Llib/weakhash.scm 532 */
long BgL_res2632z00_3100;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_hashnz00_3084;
{ /* Llib/weakhash.scm 532 */
bool_t BgL_testz00_7743;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_auxz00_7744;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_res2630z00_3092;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_aux3457z00_4477;
BgL_aux3457z00_4477 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3457z00_4477))
{ /* Llib/weakhash.scm 532 */
BgL_res2630z00_3092 = BgL_aux3457z00_4477; }  else 
{ 
obj_t BgL_auxz00_7748;
BgL_auxz00_7748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20583)), BGl_string3661z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3457z00_4477); 
FAILURE(BgL_auxz00_7748,BFALSE,BFALSE);} } 
BgL_auxz00_7744 = BgL_res2630z00_3092; } 
BgL_testz00_7743 = 
(BgL_auxz00_7744==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7743)
{ /* Llib/weakhash.scm 532 */
int BgL_auxz00_7753;
BgL_auxz00_7753 = 
(int)(((long)4)); 
BgL_hashnz00_3084 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7753); }  else 
{ /* Llib/weakhash.scm 532 */
BgL_hashnz00_3084 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
if(
PROCEDUREP(BgL_hashnz00_3084))
{ /* Llib/weakhash.scm 532 */
obj_t BgL_arg1965z00_3086;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_funz00_4479;
BgL_funz00_4479 = BgL_hashnz00_3084; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4479, ((long)1)))
{ /* Llib/weakhash.scm 532 */
BgL_arg1965z00_3086 = 
PROCEDURE_ENTRY(BgL_funz00_4479)(BgL_hashnz00_3084, BgL_keyz00_1362, BEOA); }  else 
{ /* Llib/weakhash.scm 532 */
FAILURE(BGl_string3662z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4479);} } 
{ /* Llib/weakhash.scm 532 */
long BgL_nz00_3094;
{ /* Llib/weakhash.scm 532 */
obj_t BgL_auxz00_7764;
if(
INTEGERP(BgL_arg1965z00_3086))
{ /* Llib/weakhash.scm 532 */
BgL_auxz00_7764 = BgL_arg1965z00_3086
; }  else 
{ 
obj_t BgL_auxz00_7767;
BgL_auxz00_7767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20583)), BGl_string3661z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_3086); 
FAILURE(BgL_auxz00_7767,BFALSE,BFALSE);} 
BgL_nz00_3094 = 
(long)CINT(BgL_auxz00_7764); } 
if(
(BgL_nz00_3094<((long)0)))
{ /* Llib/weakhash.scm 532 */
BgL_res2632z00_3100 = 
NEG(BgL_nz00_3094); }  else 
{ /* Llib/weakhash.scm 532 */
BgL_res2632z00_3100 = BgL_nz00_3094; } } }  else 
{ /* Llib/weakhash.scm 532 */
BgL_res2632z00_3100 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1362); } } 
BgL_arg2224z00_1367 = BgL_res2632z00_3100; } 
BgL_hz00_1364 = 
(BgL_arg2224z00_1367%BgL_newzd2buckszd2lenz00_1349); } 
{ /* Llib/weakhash.scm 537 */
obj_t BgL_arg2222z00_1365;
{ /* Llib/weakhash.scm 537 */
obj_t BgL_arg2223z00_1366;
{ /* Llib/weakhash.scm 537 */
int BgL_kz00_3104;
BgL_kz00_3104 = 
(int)(BgL_hz00_1364); 
{ /* Llib/weakhash.scm 537 */
int BgL_l2795z00_3791;
BgL_l2795z00_3791 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1350); 
if(
BOUND_CHECK(BgL_kz00_3104, BgL_l2795z00_3791))
{ /* Llib/weakhash.scm 537 */
BgL_arg2223z00_1366 = 
VECTOR_REF(BgL_newzd2buckszd2_1350,BgL_kz00_3104); }  else 
{ 
obj_t BgL_auxz00_7782;
BgL_auxz00_7782 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20715)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3104), BgL_newzd2buckszd2_1350); 
FAILURE(BgL_auxz00_7782,BFALSE,BFALSE);} } } 
BgL_arg2222z00_1365 = 
MAKE_PAIR(BgL_cellz00_1361, BgL_arg2223z00_1366); } 
{ /* Llib/weakhash.scm 534 */
int BgL_kz00_3106;
BgL_kz00_3106 = 
(int)(BgL_hz00_1364); 
{ /* Llib/weakhash.scm 534 */
int BgL_l2799z00_3795;
BgL_l2799z00_3795 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1350); 
if(
BOUND_CHECK(BgL_kz00_3106, BgL_l2799z00_3795))
{ /* Llib/weakhash.scm 534 */
VECTOR_SET(BgL_newzd2buckszd2_1350,BgL_kz00_3106,BgL_arg2222z00_1365); }  else 
{ 
obj_t BgL_auxz00_7793;
BgL_auxz00_7793 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20653)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3106), BgL_newzd2buckszd2_1350); 
FAILURE(BgL_auxz00_7793,BFALSE,BFALSE);} } } } } } } 
{ 
obj_t BgL_l1869z00_7798;
BgL_l1869z00_7798 = 
CDR(BgL_l1869z00_1358); 
BgL_l1869z00_1358 = BgL_l1869z00_7798; 
goto BgL_zc3anonymousza32218ze3z83_1359;} }  else 
{ /* Llib/weakhash.scm 526 */
if(
NULLP(BgL_l1869z00_1358))
{ /* Llib/weakhash.scm 526 */BTRUE; }  else 
{ /* Llib/weakhash.scm 526 */
BGl_errorz00zz__errorz00(BGl_string3663z00zz__weakhashz00, BGl_string3664z00zz__weakhashz00, BgL_l1869z00_1358); } } } } 
{ 
long BgL_iz00_7803;
BgL_iz00_7803 = 
(BgL_iz00_1353+((long)1)); 
BgL_iz00_1353 = BgL_iz00_7803; 
goto BgL_zc3anonymousza32216ze3z83_1354;} }  else 
{ /* Llib/weakhash.scm 526 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 526 */
obj_t BgL_vz00_3113;
BgL_vz00_3113 = BgL_countz00_1351; 
{ /* Llib/weakhash.scm 526 */
bool_t BgL_testz00_7805;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_7806;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_res2633z00_3118;
{ /* Llib/weakhash.scm 526 */
obj_t BgL_aux3463z00_4484;
BgL_aux3463z00_4484 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3463z00_4484))
{ /* Llib/weakhash.scm 526 */
BgL_res2633z00_3118 = BgL_aux3463z00_4484; }  else 
{ 
obj_t BgL_auxz00_7810;
BgL_auxz00_7810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3463z00_4484); 
FAILURE(BgL_auxz00_7810,BFALSE,BFALSE);} } 
BgL_auxz00_7806 = BgL_res2633z00_3118; } 
BgL_testz00_7805 = 
(BgL_auxz00_7806==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7805)
{ /* Llib/weakhash.scm 526 */
int BgL_auxz00_7815;
BgL_auxz00_7815 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_7815, BgL_vz00_3113);}  else 
{ /* Llib/weakhash.scm 526 */
return 
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_7819;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_arg2281z00_1462;
{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_7820;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_7821;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_res2634z00_3124;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_aux3465z00_4486;
BgL_aux3465z00_4486 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3465z00_4486))
{ /* Llib/weakhash.scm 539 */
BgL_res2634z00_3124 = BgL_aux3465z00_4486; }  else 
{ 
obj_t BgL_auxz00_7825;
BgL_auxz00_7825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20783)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3465z00_4486); 
FAILURE(BgL_auxz00_7825,BFALSE,BFALSE);} } 
BgL_auxz00_7821 = BgL_res2634z00_3124; } 
BgL_testz00_7820 = 
(BgL_auxz00_7821==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7820)
{ /* Llib/weakhash.scm 539 */
int BgL_auxz00_7830;
BgL_auxz00_7830 = 
(int)(((long)5)); 
BgL_arg2281z00_1462 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7830); }  else 
{ /* Llib/weakhash.scm 539 */
BgL_arg2281z00_1462 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 539 */
long BgL_n2z00_3126;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_7834;
if(
INTEGERP(BgL_arg2281z00_1462))
{ /* Llib/weakhash.scm 539 */
BgL_auxz00_7834 = BgL_arg2281z00_1462
; }  else 
{ 
obj_t BgL_auxz00_7837;
BgL_auxz00_7837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20805)), BGl_string3660z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2281z00_1462); 
FAILURE(BgL_auxz00_7837,BFALSE,BFALSE);} 
BgL_n2z00_3126 = 
(long)CINT(BgL_auxz00_7834); } 
BgL_testz00_7819 = 
(((long)2)==BgL_n2z00_3126); } } 
if(BgL_testz00_7819)
{ /* Llib/weakhash.scm 539 */
obj_t BgL_oldzd2buckszd2_1375;
{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_7843;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_7844;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_res2635z00_3132;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_aux3469z00_4490;
BgL_aux3469z00_4490 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3469z00_4490))
{ /* Llib/weakhash.scm 539 */
BgL_res2635z00_3132 = BgL_aux3469z00_4490; }  else 
{ 
obj_t BgL_auxz00_7848;
BgL_auxz00_7848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3469z00_4490); 
FAILURE(BgL_auxz00_7848,BFALSE,BFALSE);} } 
BgL_auxz00_7844 = BgL_res2635z00_3132; } 
BgL_testz00_7843 = 
(BgL_auxz00_7844==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7843)
{ /* Llib/weakhash.scm 539 */
int BgL_auxz00_7853;
BgL_auxz00_7853 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1375 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7853); }  else 
{ /* Llib/weakhash.scm 539 */
BgL_oldzd2buckszd2_1375 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 539 */
int BgL_oldzd2buckszd2lenz00_1376;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_vectorz00_3133;
if(
VECTORP(BgL_oldzd2buckszd2_1375))
{ /* Llib/weakhash.scm 539 */
BgL_vectorz00_3133 = BgL_oldzd2buckszd2_1375; }  else 
{ 
obj_t BgL_auxz00_7859;
BgL_auxz00_7859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3660z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_oldzd2buckszd2_1375); 
FAILURE(BgL_auxz00_7859,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1376 = 
VECTOR_LENGTH(BgL_vectorz00_3133); } 
{ /* Llib/weakhash.scm 539 */
long BgL_newzd2buckszd2lenz00_1377;
BgL_newzd2buckszd2lenz00_1377 = 
(((long)2)*
(long)(BgL_oldzd2buckszd2lenz00_1376)); 
{ /* Llib/weakhash.scm 539 */
obj_t BgL_newzd2buckszd2_1378;
BgL_newzd2buckszd2_1378 = 
make_vector(
(int)(BgL_newzd2buckszd2lenz00_1377), BNIL); 
{ /* Llib/weakhash.scm 539 */
obj_t BgL_countz00_1379;
{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_7868;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_7869;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_res2636z00_3141;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_aux3473z00_4494;
BgL_aux3473z00_4494 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3473z00_4494))
{ /* Llib/weakhash.scm 539 */
BgL_res2636z00_3141 = BgL_aux3473z00_4494; }  else 
{ 
obj_t BgL_auxz00_7873;
BgL_auxz00_7873 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3473z00_4494); 
FAILURE(BgL_auxz00_7873,BFALSE,BFALSE);} } 
BgL_auxz00_7869 = BgL_res2636z00_3141; } 
BgL_testz00_7868 = 
(BgL_auxz00_7869==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7868)
{ /* Llib/weakhash.scm 539 */
int BgL_auxz00_7878;
BgL_auxz00_7878 = 
(int)(((long)0)); 
BgL_countz00_1379 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7878); }  else 
{ /* Llib/weakhash.scm 539 */
BgL_countz00_1379 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 539 */

{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_7882;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_7883;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_res2637z00_3148;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_aux3475z00_4496;
BgL_aux3475z00_4496 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3475z00_4496))
{ /* Llib/weakhash.scm 539 */
BgL_res2637z00_3148 = BgL_aux3475z00_4496; }  else 
{ 
obj_t BgL_auxz00_7887;
BgL_auxz00_7887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3475z00_4496); 
FAILURE(BgL_auxz00_7887,BFALSE,BFALSE);} } 
BgL_auxz00_7883 = BgL_res2637z00_3148; } 
BgL_testz00_7882 = 
(BgL_auxz00_7883==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7882)
{ /* Llib/weakhash.scm 539 */
int BgL_auxz00_7892;
BgL_auxz00_7892 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_7892, BgL_newzd2buckszd2_1378); }  else 
{ /* Llib/weakhash.scm 539 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ 
long BgL_iz00_1381;
BgL_iz00_1381 = ((long)0); 
BgL_zc3anonymousza32235ze3z83_1382:
if(
(BgL_iz00_1381<
(long)(BgL_oldzd2buckszd2lenz00_1376)))
{ /* Llib/weakhash.scm 539 */
{ /* Llib/weakhash.scm 539 */
obj_t BgL_g1874z00_1384;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_vectorz00_3151;int BgL_kz00_3152;
BgL_vectorz00_3151 = BgL_oldzd2buckszd2_1375; 
BgL_kz00_3152 = 
(int)(BgL_iz00_1381); 
{ /* Llib/weakhash.scm 539 */
int BgL_l2803z00_3799;
BgL_l2803z00_3799 = 
VECTOR_LENGTH(BgL_vectorz00_3151); 
if(
BOUND_CHECK(BgL_kz00_3152, BgL_l2803z00_3799))
{ /* Llib/weakhash.scm 539 */
BgL_g1874z00_1384 = 
VECTOR_REF(BgL_vectorz00_3151,BgL_kz00_3152); }  else 
{ 
obj_t BgL_auxz00_7904;
BgL_auxz00_7904 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3152), BgL_vectorz00_3151); 
FAILURE(BgL_auxz00_7904,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1872z00_1386;
BgL_l1872z00_1386 = BgL_g1874z00_1384; 
BgL_zc3anonymousza32237ze3z83_1387:
if(
PAIRP(BgL_l1872z00_1386))
{ /* Llib/weakhash.scm 539 */
{ /* Llib/weakhash.scm 541 */
obj_t BgL_cellz00_1389;
BgL_cellz00_1389 = 
CAR(BgL_l1872z00_1386); 
{ /* Llib/weakhash.scm 541 */
obj_t BgL_dataz00_1390;
{ /* Llib/weakhash.scm 541 */
obj_t BgL_arg2245z00_1397;
{ /* Llib/weakhash.scm 541 */
obj_t BgL_pairz00_3155;
if(
PAIRP(BgL_cellz00_1389))
{ /* Llib/weakhash.scm 541 */
BgL_pairz00_3155 = BgL_cellz00_1389; }  else 
{ 
obj_t BgL_auxz00_7914;
BgL_auxz00_7914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20870)), BGl_string3665z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_cellz00_1389); 
FAILURE(BgL_auxz00_7914,BFALSE,BFALSE);} 
BgL_arg2245z00_1397 = 
CDR(BgL_pairz00_3155); } 
{ /* Llib/weakhash.scm 541 */
obj_t BgL_objz00_3156;
if(
BGL_WEAKPTRP(BgL_arg2245z00_1397))
{ /* Llib/weakhash.scm 541 */
BgL_objz00_3156 = BgL_arg2245z00_1397; }  else 
{ 
obj_t BgL_auxz00_7921;
BgL_auxz00_7921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20874)), BGl_string3665z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2245z00_1397); 
FAILURE(BgL_auxz00_7921,BFALSE,BFALSE);} 
BgL_dataz00_1390 = 
weakptr_data(BgL_objz00_3156); } } 
if(
(BgL_dataz00_1390==BUNSPEC))
{ /* Llib/weakhash.scm 543 */
long BgL_za71za7_3157;
{ /* Llib/weakhash.scm 543 */
obj_t BgL_auxz00_7928;
{ /* Llib/weakhash.scm 543 */
obj_t BgL_aux3483z00_4504;
BgL_aux3483z00_4504 = BgL_countz00_1379; 
if(
INTEGERP(BgL_aux3483z00_4504))
{ /* Llib/weakhash.scm 543 */
BgL_auxz00_7928 = BgL_aux3483z00_4504
; }  else 
{ 
obj_t BgL_auxz00_7931;
BgL_auxz00_7931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20936)), BGl_string3665z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3483z00_4504); 
FAILURE(BgL_auxz00_7931,BFALSE,BFALSE);} } 
BgL_za71za7_3157 = 
(long)CINT(BgL_auxz00_7928); } 
BgL_countz00_1379 = 
BINT(
(BgL_za71za7_3157-((long)1))); }  else 
{ /* Llib/weakhash.scm 544 */
long BgL_hz00_1392;
{ /* Llib/weakhash.scm 546 */
long BgL_arg2243z00_1395;
{ /* Llib/weakhash.scm 546 */
obj_t BgL_arg2244z00_1396;
BgL_arg2244z00_1396 = 
CAR(BgL_cellz00_1389); 
{ /* Llib/weakhash.scm 545 */
long BgL_res2640z00_3178;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_hashnz00_3162;
{ /* Llib/weakhash.scm 545 */
bool_t BgL_testz00_7939;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_auxz00_7940;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_res2638z00_3170;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_aux3487z00_4508;
BgL_aux3487z00_4508 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3487z00_4508))
{ /* Llib/weakhash.scm 545 */
BgL_res2638z00_3170 = BgL_aux3487z00_4508; }  else 
{ 
obj_t BgL_auxz00_7944;
BgL_auxz00_7944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20990)), BGl_string3665z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3487z00_4508); 
FAILURE(BgL_auxz00_7944,BFALSE,BFALSE);} } 
BgL_auxz00_7940 = BgL_res2638z00_3170; } 
BgL_testz00_7939 = 
(BgL_auxz00_7940==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_7939)
{ /* Llib/weakhash.scm 545 */
int BgL_auxz00_7949;
BgL_auxz00_7949 = 
(int)(((long)4)); 
BgL_hashnz00_3162 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_7949); }  else 
{ /* Llib/weakhash.scm 545 */
BgL_hashnz00_3162 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
if(
PROCEDUREP(BgL_hashnz00_3162))
{ /* Llib/weakhash.scm 545 */
obj_t BgL_arg1965z00_3164;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_funz00_4510;
BgL_funz00_4510 = BgL_hashnz00_3162; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4510, ((long)1)))
{ /* Llib/weakhash.scm 545 */
BgL_arg1965z00_3164 = 
PROCEDURE_ENTRY(BgL_funz00_4510)(BgL_hashnz00_3162, BgL_arg2244z00_1396, BEOA); }  else 
{ /* Llib/weakhash.scm 545 */
FAILURE(BGl_string3666z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4510);} } 
{ /* Llib/weakhash.scm 545 */
long BgL_nz00_3172;
{ /* Llib/weakhash.scm 545 */
obj_t BgL_auxz00_7960;
if(
INTEGERP(BgL_arg1965z00_3164))
{ /* Llib/weakhash.scm 545 */
BgL_auxz00_7960 = BgL_arg1965z00_3164
; }  else 
{ 
obj_t BgL_auxz00_7963;
BgL_auxz00_7963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20990)), BGl_string3665z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_3164); 
FAILURE(BgL_auxz00_7963,BFALSE,BFALSE);} 
BgL_nz00_3172 = 
(long)CINT(BgL_auxz00_7960); } 
if(
(BgL_nz00_3172<((long)0)))
{ /* Llib/weakhash.scm 545 */
BgL_res2640z00_3178 = 
NEG(BgL_nz00_3172); }  else 
{ /* Llib/weakhash.scm 545 */
BgL_res2640z00_3178 = BgL_nz00_3172; } } }  else 
{ /* Llib/weakhash.scm 545 */
BgL_res2640z00_3178 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg2244z00_1396); } } 
BgL_arg2243z00_1395 = BgL_res2640z00_3178; } } 
BgL_hz00_1392 = 
(BgL_arg2243z00_1395%BgL_newzd2buckszd2lenz00_1377); } 
{ /* Llib/weakhash.scm 551 */
obj_t BgL_arg2240z00_1393;
{ /* Llib/weakhash.scm 551 */
obj_t BgL_arg2242z00_1394;
{ /* Llib/weakhash.scm 551 */
int BgL_kz00_3182;
BgL_kz00_3182 = 
(int)(BgL_hz00_1392); 
{ /* Llib/weakhash.scm 551 */
int BgL_l2807z00_3803;
BgL_l2807z00_3803 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1378); 
if(
BOUND_CHECK(BgL_kz00_3182, BgL_l2807z00_3803))
{ /* Llib/weakhash.scm 551 */
BgL_arg2242z00_1394 = 
VECTOR_REF(BgL_newzd2buckszd2_1378,BgL_kz00_3182); }  else 
{ 
obj_t BgL_auxz00_7978;
BgL_auxz00_7978 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21140)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3182), BgL_newzd2buckszd2_1378); 
FAILURE(BgL_auxz00_7978,BFALSE,BFALSE);} } } 
BgL_arg2240z00_1393 = 
MAKE_PAIR(BgL_cellz00_1389, BgL_arg2242z00_1394); } 
{ /* Llib/weakhash.scm 548 */
int BgL_kz00_3184;
BgL_kz00_3184 = 
(int)(BgL_hz00_1392); 
{ /* Llib/weakhash.scm 548 */
int BgL_l2811z00_3807;
BgL_l2811z00_3807 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1378); 
if(
BOUND_CHECK(BgL_kz00_3184, BgL_l2811z00_3807))
{ /* Llib/weakhash.scm 548 */
VECTOR_SET(BgL_newzd2buckszd2_1378,BgL_kz00_3184,BgL_arg2240z00_1393); }  else 
{ 
obj_t BgL_auxz00_7989;
BgL_auxz00_7989 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21078)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3184), BgL_newzd2buckszd2_1378); 
FAILURE(BgL_auxz00_7989,BFALSE,BFALSE);} } } } } } } 
{ 
obj_t BgL_l1872z00_7994;
BgL_l1872z00_7994 = 
CDR(BgL_l1872z00_1386); 
BgL_l1872z00_1386 = BgL_l1872z00_7994; 
goto BgL_zc3anonymousza32237ze3z83_1387;} }  else 
{ /* Llib/weakhash.scm 539 */
if(
NULLP(BgL_l1872z00_1386))
{ /* Llib/weakhash.scm 539 */BTRUE; }  else 
{ /* Llib/weakhash.scm 539 */
BGl_errorz00zz__errorz00(BGl_string3663z00zz__weakhashz00, BGl_string3664z00zz__weakhashz00, BgL_l1872z00_1386); } } } } 
{ 
long BgL_iz00_7999;
BgL_iz00_7999 = 
(BgL_iz00_1381+((long)1)); 
BgL_iz00_1381 = BgL_iz00_7999; 
goto BgL_zc3anonymousza32235ze3z83_1382;} }  else 
{ /* Llib/weakhash.scm 539 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 539 */
obj_t BgL_vz00_3191;
BgL_vz00_3191 = BgL_countz00_1379; 
{ /* Llib/weakhash.scm 539 */
bool_t BgL_testz00_8001;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_auxz00_8002;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_res2641z00_3196;
{ /* Llib/weakhash.scm 539 */
obj_t BgL_aux3493z00_4515;
BgL_aux3493z00_4515 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3493z00_4515))
{ /* Llib/weakhash.scm 539 */
BgL_res2641z00_3196 = BgL_aux3493z00_4515; }  else 
{ 
obj_t BgL_auxz00_8006;
BgL_auxz00_8006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20766)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3493z00_4515); 
FAILURE(BgL_auxz00_8006,BFALSE,BFALSE);} } 
BgL_auxz00_8002 = BgL_res2641z00_3196; } 
BgL_testz00_8001 = 
(BgL_auxz00_8002==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8001)
{ /* Llib/weakhash.scm 539 */
int BgL_auxz00_8011;
BgL_auxz00_8011 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_8011, BgL_vz00_3191);}  else 
{ /* Llib/weakhash.scm 539 */
return 
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8015;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_arg2279z00_1460;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8016;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8017;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2642z00_3202;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3495z00_4517;
BgL_aux3495z00_4517 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3495z00_4517))
{ /* Llib/weakhash.scm 553 */
BgL_res2642z00_3202 = BgL_aux3495z00_4517; }  else 
{ 
obj_t BgL_auxz00_8021;
BgL_auxz00_8021 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21208)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3495z00_4517); 
FAILURE(BgL_auxz00_8021,BFALSE,BFALSE);} } 
BgL_auxz00_8017 = BgL_res2642z00_3202; } 
BgL_testz00_8016 = 
(BgL_auxz00_8017==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8016)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8026;
BgL_auxz00_8026 = 
(int)(((long)5)); 
BgL_arg2279z00_1460 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8026); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_arg2279z00_1460 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 553 */
long BgL_n2z00_3204;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8030;
if(
INTEGERP(BgL_arg2279z00_1460))
{ /* Llib/weakhash.scm 553 */
BgL_auxz00_8030 = BgL_arg2279z00_1460
; }  else 
{ 
obj_t BgL_auxz00_8033;
BgL_auxz00_8033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21230)), BGl_string3660z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg2279z00_1460); 
FAILURE(BgL_auxz00_8033,BFALSE,BFALSE);} 
BgL_n2z00_3204 = 
(long)CINT(BgL_auxz00_8030); } 
BgL_testz00_8015 = 
(((long)3)==BgL_n2z00_3204); } } 
if(BgL_testz00_8015)
{ /* Llib/weakhash.scm 553 */
obj_t BgL_oldzd2buckszd2_1404;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8039;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8040;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2643z00_3210;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3499z00_4521;
BgL_aux3499z00_4521 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3499z00_4521))
{ /* Llib/weakhash.scm 553 */
BgL_res2643z00_3210 = BgL_aux3499z00_4521; }  else 
{ 
obj_t BgL_auxz00_8044;
BgL_auxz00_8044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3499z00_4521); 
FAILURE(BgL_auxz00_8044,BFALSE,BFALSE);} } 
BgL_auxz00_8040 = BgL_res2643z00_3210; } 
BgL_testz00_8039 = 
(BgL_auxz00_8040==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8039)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8049;
BgL_auxz00_8049 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1404 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8049); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_oldzd2buckszd2_1404 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 553 */
int BgL_oldzd2buckszd2lenz00_1405;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_vectorz00_3211;
if(
VECTORP(BgL_oldzd2buckszd2_1404))
{ /* Llib/weakhash.scm 553 */
BgL_vectorz00_3211 = BgL_oldzd2buckszd2_1404; }  else 
{ 
obj_t BgL_auxz00_8055;
BgL_auxz00_8055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_oldzd2buckszd2_1404); 
FAILURE(BgL_auxz00_8055,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1405 = 
VECTOR_LENGTH(BgL_vectorz00_3211); } 
{ /* Llib/weakhash.scm 553 */
long BgL_newzd2buckszd2lenz00_1406;
BgL_newzd2buckszd2lenz00_1406 = 
(((long)2)*
(long)(BgL_oldzd2buckszd2lenz00_1405)); 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_newzd2buckszd2_1407;
BgL_newzd2buckszd2_1407 = 
make_vector(
(int)(BgL_newzd2buckszd2lenz00_1406), BNIL); 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_countz00_1408;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8064;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8065;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2644z00_3219;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3503z00_4525;
BgL_aux3503z00_4525 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3503z00_4525))
{ /* Llib/weakhash.scm 553 */
BgL_res2644z00_3219 = BgL_aux3503z00_4525; }  else 
{ 
obj_t BgL_auxz00_8069;
BgL_auxz00_8069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3503z00_4525); 
FAILURE(BgL_auxz00_8069,BFALSE,BFALSE);} } 
BgL_auxz00_8065 = BgL_res2644z00_3219; } 
BgL_testz00_8064 = 
(BgL_auxz00_8065==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8064)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8074;
BgL_auxz00_8074 = 
(int)(((long)0)); 
BgL_countz00_1408 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8074); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_countz00_1408 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 553 */

{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8078;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8079;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2645z00_3226;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3505z00_4527;
BgL_aux3505z00_4527 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3505z00_4527))
{ /* Llib/weakhash.scm 553 */
BgL_res2645z00_3226 = BgL_aux3505z00_4527; }  else 
{ 
obj_t BgL_auxz00_8083;
BgL_auxz00_8083 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3505z00_4527); 
FAILURE(BgL_auxz00_8083,BFALSE,BFALSE);} } 
BgL_auxz00_8079 = BgL_res2645z00_3226; } 
BgL_testz00_8078 = 
(BgL_auxz00_8079==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8078)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8088;
BgL_auxz00_8088 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_8088, BgL_newzd2buckszd2_1407); }  else 
{ /* Llib/weakhash.scm 553 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ 
long BgL_iz00_1410;
BgL_iz00_1410 = ((long)0); 
BgL_zc3anonymousza32250ze3z83_1411:
if(
(BgL_iz00_1410<
(long)(BgL_oldzd2buckszd2lenz00_1405)))
{ /* Llib/weakhash.scm 553 */
{ /* Llib/weakhash.scm 553 */
obj_t BgL_g1877z00_1413;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_vectorz00_3229;int BgL_kz00_3230;
BgL_vectorz00_3229 = BgL_oldzd2buckszd2_1404; 
BgL_kz00_3230 = 
(int)(BgL_iz00_1410); 
{ /* Llib/weakhash.scm 553 */
int BgL_l2815z00_3811;
BgL_l2815z00_3811 = 
VECTOR_LENGTH(BgL_vectorz00_3229); 
if(
BOUND_CHECK(BgL_kz00_3230, BgL_l2815z00_3811))
{ /* Llib/weakhash.scm 553 */
BgL_g1877z00_1413 = 
VECTOR_REF(BgL_vectorz00_3229,BgL_kz00_3230); }  else 
{ 
obj_t BgL_auxz00_8100;
BgL_auxz00_8100 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3230), BgL_vectorz00_3229); 
FAILURE(BgL_auxz00_8100,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1875z00_1415;
BgL_l1875z00_1415 = BgL_g1877z00_1413; 
BgL_zc3anonymousza32252ze3z83_1416:
if(
PAIRP(BgL_l1875z00_1415))
{ /* Llib/weakhash.scm 553 */
{ /* Llib/weakhash.scm 555 */
obj_t BgL_cellz00_1418;
BgL_cellz00_1418 = 
CAR(BgL_l1875z00_1415); 
{ /* Llib/weakhash.scm 555 */
obj_t BgL_keyz00_1419;obj_t BgL_dataz00_1420;
{ /* Llib/weakhash.scm 555 */
obj_t BgL_arg2259z00_1427;
{ /* Llib/weakhash.scm 555 */
obj_t BgL_pairz00_3233;
if(
PAIRP(BgL_cellz00_1418))
{ /* Llib/weakhash.scm 555 */
BgL_pairz00_3233 = BgL_cellz00_1418; }  else 
{ 
obj_t BgL_auxz00_8110;
BgL_auxz00_8110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21298)), BGl_string3667z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_cellz00_1418); 
FAILURE(BgL_auxz00_8110,BFALSE,BFALSE);} 
BgL_arg2259z00_1427 = 
CAR(BgL_pairz00_3233); } 
{ /* Llib/weakhash.scm 555 */
obj_t BgL_objz00_3234;
if(
BGL_WEAKPTRP(BgL_arg2259z00_1427))
{ /* Llib/weakhash.scm 555 */
BgL_objz00_3234 = BgL_arg2259z00_1427; }  else 
{ 
obj_t BgL_auxz00_8117;
BgL_auxz00_8117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21302)), BGl_string3667z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2259z00_1427); 
FAILURE(BgL_auxz00_8117,BFALSE,BFALSE);} 
BgL_keyz00_1419 = 
weakptr_data(BgL_objz00_3234); } } 
{ /* Llib/weakhash.scm 556 */
obj_t BgL_arg2260z00_1428;
BgL_arg2260z00_1428 = 
CDR(BgL_cellz00_1418); 
{ /* Llib/weakhash.scm 556 */
obj_t BgL_objz00_3236;
if(
BGL_WEAKPTRP(BgL_arg2260z00_1428))
{ /* Llib/weakhash.scm 556 */
BgL_objz00_3236 = BgL_arg2260z00_1428; }  else 
{ 
obj_t BgL_auxz00_8125;
BgL_auxz00_8125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21341)), BGl_string3667z00zz__weakhashz00, BGl_string3560z00zz__weakhashz00, BgL_arg2260z00_1428); 
FAILURE(BgL_auxz00_8125,BFALSE,BFALSE);} 
BgL_dataz00_1420 = 
weakptr_data(BgL_objz00_3236); } } 
{ /* Llib/weakhash.scm 557 */
bool_t BgL_testz00_8130;
if(
(BgL_keyz00_1419==BUNSPEC))
{ /* Llib/weakhash.scm 557 */
BgL_testz00_8130 = ((bool_t)1)
; }  else 
{ /* Llib/weakhash.scm 557 */
BgL_testz00_8130 = 
(BgL_dataz00_1420==BUNSPEC)
; } 
if(BgL_testz00_8130)
{ /* Llib/weakhash.scm 559 */
long BgL_za71za7_3237;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_auxz00_8134;
{ /* Llib/weakhash.scm 559 */
obj_t BgL_aux3517z00_4539;
BgL_aux3517z00_4539 = BgL_countz00_1408; 
if(
INTEGERP(BgL_aux3517z00_4539))
{ /* Llib/weakhash.scm 559 */
BgL_auxz00_8134 = BgL_aux3517z00_4539
; }  else 
{ 
obj_t BgL_auxz00_8137;
BgL_auxz00_8137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21442)), BGl_string3667z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_aux3517z00_4539); 
FAILURE(BgL_auxz00_8137,BFALSE,BFALSE);} } 
BgL_za71za7_3237 = 
(long)CINT(BgL_auxz00_8134); } 
BgL_countz00_1408 = 
BINT(
(BgL_za71za7_3237-((long)1))); }  else 
{ /* Llib/weakhash.scm 560 */
long BgL_hz00_1422;
{ /* Llib/weakhash.scm 561 */
long BgL_arg2257z00_1425;
{ /* Llib/weakhash.scm 561 */
long BgL_res2648z00_3257;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_hashnz00_3241;
{ /* Llib/weakhash.scm 561 */
bool_t BgL_testz00_8144;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_auxz00_8145;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_res2646z00_3249;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_aux3519z00_4541;
BgL_aux3519z00_4541 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3519z00_4541))
{ /* Llib/weakhash.scm 561 */
BgL_res2646z00_3249 = BgL_aux3519z00_4541; }  else 
{ 
obj_t BgL_auxz00_8149;
BgL_auxz00_8149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21496)), BGl_string3667z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3519z00_4541); 
FAILURE(BgL_auxz00_8149,BFALSE,BFALSE);} } 
BgL_auxz00_8145 = BgL_res2646z00_3249; } 
BgL_testz00_8144 = 
(BgL_auxz00_8145==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8144)
{ /* Llib/weakhash.scm 561 */
int BgL_auxz00_8154;
BgL_auxz00_8154 = 
(int)(((long)4)); 
BgL_hashnz00_3241 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8154); }  else 
{ /* Llib/weakhash.scm 561 */
BgL_hashnz00_3241 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
if(
PROCEDUREP(BgL_hashnz00_3241))
{ /* Llib/weakhash.scm 561 */
obj_t BgL_arg1965z00_3243;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_funz00_4543;
BgL_funz00_4543 = BgL_hashnz00_3241; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4543, ((long)1)))
{ /* Llib/weakhash.scm 561 */
BgL_arg1965z00_3243 = 
PROCEDURE_ENTRY(BgL_funz00_4543)(BgL_hashnz00_3241, BgL_keyz00_1419, BEOA); }  else 
{ /* Llib/weakhash.scm 561 */
FAILURE(BGl_string3668z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4543);} } 
{ /* Llib/weakhash.scm 561 */
long BgL_nz00_3251;
{ /* Llib/weakhash.scm 561 */
obj_t BgL_auxz00_8165;
if(
INTEGERP(BgL_arg1965z00_3243))
{ /* Llib/weakhash.scm 561 */
BgL_auxz00_8165 = BgL_arg1965z00_3243
; }  else 
{ 
obj_t BgL_auxz00_8168;
BgL_auxz00_8168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21496)), BGl_string3667z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_3243); 
FAILURE(BgL_auxz00_8168,BFALSE,BFALSE);} 
BgL_nz00_3251 = 
(long)CINT(BgL_auxz00_8165); } 
if(
(BgL_nz00_3251<((long)0)))
{ /* Llib/weakhash.scm 561 */
BgL_res2648z00_3257 = 
NEG(BgL_nz00_3251); }  else 
{ /* Llib/weakhash.scm 561 */
BgL_res2648z00_3257 = BgL_nz00_3251; } } }  else 
{ /* Llib/weakhash.scm 561 */
BgL_res2648z00_3257 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1419); } } 
BgL_arg2257z00_1425 = BgL_res2648z00_3257; } 
BgL_hz00_1422 = 
(BgL_arg2257z00_1425%BgL_newzd2buckszd2lenz00_1406); } 
{ /* Llib/weakhash.scm 566 */
obj_t BgL_arg2255z00_1423;
{ /* Llib/weakhash.scm 566 */
obj_t BgL_arg2256z00_1424;
{ /* Llib/weakhash.scm 566 */
int BgL_kz00_3261;
BgL_kz00_3261 = 
(int)(BgL_hz00_1422); 
{ /* Llib/weakhash.scm 566 */
int BgL_l2819z00_3815;
BgL_l2819z00_3815 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1407); 
if(
BOUND_CHECK(BgL_kz00_3261, BgL_l2819z00_3815))
{ /* Llib/weakhash.scm 566 */
BgL_arg2256z00_1424 = 
VECTOR_REF(BgL_newzd2buckszd2_1407,BgL_kz00_3261); }  else 
{ 
obj_t BgL_auxz00_8183;
BgL_auxz00_8183 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21628)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3261), BgL_newzd2buckszd2_1407); 
FAILURE(BgL_auxz00_8183,BFALSE,BFALSE);} } } 
BgL_arg2255z00_1423 = 
MAKE_PAIR(BgL_cellz00_1418, BgL_arg2256z00_1424); } 
{ /* Llib/weakhash.scm 563 */
int BgL_kz00_3263;
BgL_kz00_3263 = 
(int)(BgL_hz00_1422); 
{ /* Llib/weakhash.scm 563 */
int BgL_l2823z00_3819;
BgL_l2823z00_3819 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1407); 
if(
BOUND_CHECK(BgL_kz00_3263, BgL_l2823z00_3819))
{ /* Llib/weakhash.scm 563 */
VECTOR_SET(BgL_newzd2buckszd2_1407,BgL_kz00_3263,BgL_arg2255z00_1423); }  else 
{ 
obj_t BgL_auxz00_8194;
BgL_auxz00_8194 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21566)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3263), BgL_newzd2buckszd2_1407); 
FAILURE(BgL_auxz00_8194,BFALSE,BFALSE);} } } } } } } } 
{ 
obj_t BgL_l1875z00_8199;
BgL_l1875z00_8199 = 
CDR(BgL_l1875z00_1415); 
BgL_l1875z00_1415 = BgL_l1875z00_8199; 
goto BgL_zc3anonymousza32252ze3z83_1416;} }  else 
{ /* Llib/weakhash.scm 553 */
if(
NULLP(BgL_l1875z00_1415))
{ /* Llib/weakhash.scm 553 */BTRUE; }  else 
{ /* Llib/weakhash.scm 553 */
BGl_errorz00zz__errorz00(BGl_string3663z00zz__weakhashz00, BGl_string3664z00zz__weakhashz00, BgL_l1875z00_1415); } } } } 
{ 
long BgL_iz00_8204;
BgL_iz00_8204 = 
(BgL_iz00_1410+((long)1)); 
BgL_iz00_1410 = BgL_iz00_8204; 
goto BgL_zc3anonymousza32250ze3z83_1411;} }  else 
{ /* Llib/weakhash.scm 553 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_vz00_3270;
BgL_vz00_3270 = BgL_countz00_1408; 
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8206;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8207;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2649z00_3275;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3525z00_4548;
BgL_aux3525z00_4548 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3525z00_4548))
{ /* Llib/weakhash.scm 553 */
BgL_res2649z00_3275 = BgL_aux3525z00_4548; }  else 
{ 
obj_t BgL_auxz00_8211;
BgL_auxz00_8211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3525z00_4548); 
FAILURE(BgL_auxz00_8211,BFALSE,BFALSE);} } 
BgL_auxz00_8207 = BgL_res2649z00_3275; } 
BgL_testz00_8206 = 
(BgL_auxz00_8207==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8206)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8216;
BgL_auxz00_8216 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_8216, BgL_vz00_3270);}  else 
{ /* Llib/weakhash.scm 553 */
return 
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75);} } } } } } } } }  else 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_oldzd2buckszd2_1434;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8220;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8221;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2650z00_3281;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3527z00_4550;
BgL_aux3527z00_4550 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3527z00_4550))
{ /* Llib/weakhash.scm 553 */
BgL_res2650z00_3281 = BgL_aux3527z00_4550; }  else 
{ 
obj_t BgL_auxz00_8225;
BgL_auxz00_8225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3527z00_4550); 
FAILURE(BgL_auxz00_8225,BFALSE,BFALSE);} } 
BgL_auxz00_8221 = BgL_res2650z00_3281; } 
BgL_testz00_8220 = 
(BgL_auxz00_8221==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8220)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8230;
BgL_auxz00_8230 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1434 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8230); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_oldzd2buckszd2_1434 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 553 */
int BgL_oldzd2buckszd2lenz00_1435;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_vectorz00_3282;
if(
VECTORP(BgL_oldzd2buckszd2_1434))
{ /* Llib/weakhash.scm 553 */
BgL_vectorz00_3282 = BgL_oldzd2buckszd2_1434; }  else 
{ 
obj_t BgL_auxz00_8236;
BgL_auxz00_8236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3556z00zz__weakhashz00, BgL_oldzd2buckszd2_1434); 
FAILURE(BgL_auxz00_8236,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1435 = 
VECTOR_LENGTH(BgL_vectorz00_3282); } 
{ /* Llib/weakhash.scm 553 */
long BgL_newzd2buckszd2lenz00_1436;
BgL_newzd2buckszd2lenz00_1436 = 
(((long)2)*
(long)(BgL_oldzd2buckszd2lenz00_1435)); 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_newzd2buckszd2_1437;
BgL_newzd2buckszd2_1437 = 
make_vector(
(int)(BgL_newzd2buckszd2lenz00_1436), BNIL); 
{ /* Llib/weakhash.scm 553 */
obj_t BgL_countz00_1438;
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8245;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8246;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2651z00_3290;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3531z00_4554;
BgL_aux3531z00_4554 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3531z00_4554))
{ /* Llib/weakhash.scm 553 */
BgL_res2651z00_3290 = BgL_aux3531z00_4554; }  else 
{ 
obj_t BgL_auxz00_8250;
BgL_auxz00_8250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3531z00_4554); 
FAILURE(BgL_auxz00_8250,BFALSE,BFALSE);} } 
BgL_auxz00_8246 = BgL_res2651z00_3290; } 
BgL_testz00_8245 = 
(BgL_auxz00_8246==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8245)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8255;
BgL_auxz00_8255 = 
(int)(((long)0)); 
BgL_countz00_1438 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8255); }  else 
{ /* Llib/weakhash.scm 553 */
BgL_countz00_1438 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ /* Llib/weakhash.scm 553 */

{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8259;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8260;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2652z00_3297;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3533z00_4556;
BgL_aux3533z00_4556 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3533z00_4556))
{ /* Llib/weakhash.scm 553 */
BgL_res2652z00_3297 = BgL_aux3533z00_4556; }  else 
{ 
obj_t BgL_auxz00_8264;
BgL_auxz00_8264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3533z00_4556); 
FAILURE(BgL_auxz00_8264,BFALSE,BFALSE);} } 
BgL_auxz00_8260 = BgL_res2652z00_3297; } 
BgL_testz00_8259 = 
(BgL_auxz00_8260==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8259)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8269;
BgL_auxz00_8269 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_8269, BgL_newzd2buckszd2_1437); }  else 
{ /* Llib/weakhash.scm 553 */
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
{ 
long BgL_iz00_1440;
BgL_iz00_1440 = ((long)0); 
BgL_zc3anonymousza32265ze3z83_1441:
if(
(BgL_iz00_1440<
(long)(BgL_oldzd2buckszd2lenz00_1435)))
{ /* Llib/weakhash.scm 553 */
{ /* Llib/weakhash.scm 553 */
obj_t BgL_g1880z00_1443;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_vectorz00_3300;int BgL_kz00_3301;
BgL_vectorz00_3300 = BgL_oldzd2buckszd2_1434; 
BgL_kz00_3301 = 
(int)(BgL_iz00_1440); 
{ /* Llib/weakhash.scm 553 */
int BgL_l2827z00_3823;
BgL_l2827z00_3823 = 
VECTOR_LENGTH(BgL_vectorz00_3300); 
if(
BOUND_CHECK(BgL_kz00_3301, BgL_l2827z00_3823))
{ /* Llib/weakhash.scm 553 */
BgL_g1880z00_1443 = 
VECTOR_REF(BgL_vectorz00_3300,BgL_kz00_3301); }  else 
{ 
obj_t BgL_auxz00_8281;
BgL_auxz00_8281 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3301), BgL_vectorz00_3300); 
FAILURE(BgL_auxz00_8281,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1878z00_1445;
BgL_l1878z00_1445 = BgL_g1880z00_1443; 
BgL_zc3anonymousza32267ze3z83_1446:
if(
PAIRP(BgL_l1878z00_1445))
{ /* Llib/weakhash.scm 553 */
{ /* Llib/weakhash.scm 570 */
obj_t BgL_cellz00_1448;
BgL_cellz00_1448 = 
CAR(BgL_l1878z00_1445); 
{ /* Llib/weakhash.scm 570 */
long BgL_hz00_1449;
{ /* Llib/weakhash.scm 572 */
long BgL_arg2271z00_1452;
{ /* Llib/weakhash.scm 572 */
obj_t BgL_arg2272z00_1453;
{ /* Llib/weakhash.scm 572 */
obj_t BgL_pairz00_3304;
if(
PAIRP(BgL_cellz00_1448))
{ /* Llib/weakhash.scm 572 */
BgL_pairz00_3304 = BgL_cellz00_1448; }  else 
{ 
obj_t BgL_auxz00_8291;
BgL_auxz00_8291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21787)), BGl_string3669z00zz__weakhashz00, BGl_string3559z00zz__weakhashz00, BgL_cellz00_1448); 
FAILURE(BgL_auxz00_8291,BFALSE,BFALSE);} 
BgL_arg2272z00_1453 = 
CAR(BgL_pairz00_3304); } 
{ /* Llib/weakhash.scm 571 */
long BgL_res2655z00_3323;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_hashnz00_3307;
{ /* Llib/weakhash.scm 571 */
bool_t BgL_testz00_8296;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_auxz00_8297;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_res2653z00_3315;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_aux3539z00_4562;
BgL_aux3539z00_4562 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3539z00_4562))
{ /* Llib/weakhash.scm 571 */
BgL_res2653z00_3315 = BgL_aux3539z00_4562; }  else 
{ 
obj_t BgL_auxz00_8301;
BgL_auxz00_8301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21743)), BGl_string3669z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3539z00_4562); 
FAILURE(BgL_auxz00_8301,BFALSE,BFALSE);} } 
BgL_auxz00_8297 = BgL_res2653z00_3315; } 
BgL_testz00_8296 = 
(BgL_auxz00_8297==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8296)
{ /* Llib/weakhash.scm 571 */
int BgL_auxz00_8306;
BgL_auxz00_8306 = 
(int)(((long)4)); 
BgL_hashnz00_3307 = 
STRUCT_REF(BgL_tablez00_75, BgL_auxz00_8306); }  else 
{ /* Llib/weakhash.scm 571 */
BgL_hashnz00_3307 = 
BGl_errorz00zz__errorz00(BGl_string3554z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75); } } 
if(
PROCEDUREP(BgL_hashnz00_3307))
{ /* Llib/weakhash.scm 571 */
obj_t BgL_arg1965z00_3309;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_funz00_4564;
BgL_funz00_4564 = BgL_hashnz00_3307; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4564, ((long)1)))
{ /* Llib/weakhash.scm 571 */
BgL_arg1965z00_3309 = 
PROCEDURE_ENTRY(BgL_funz00_4564)(BgL_hashnz00_3307, BgL_arg2272z00_1453, BEOA); }  else 
{ /* Llib/weakhash.scm 571 */
FAILURE(BGl_string3670z00zz__weakhashz00,BGl_list3609z00zz__weakhashz00,BgL_funz00_4564);} } 
{ /* Llib/weakhash.scm 571 */
long BgL_nz00_3317;
{ /* Llib/weakhash.scm 571 */
obj_t BgL_auxz00_8317;
if(
INTEGERP(BgL_arg1965z00_3309))
{ /* Llib/weakhash.scm 571 */
BgL_auxz00_8317 = BgL_arg1965z00_3309
; }  else 
{ 
obj_t BgL_auxz00_8320;
BgL_auxz00_8320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21743)), BGl_string3669z00zz__weakhashz00, BGl_string3555z00zz__weakhashz00, BgL_arg1965z00_3309); 
FAILURE(BgL_auxz00_8320,BFALSE,BFALSE);} 
BgL_nz00_3317 = 
(long)CINT(BgL_auxz00_8317); } 
if(
(BgL_nz00_3317<((long)0)))
{ /* Llib/weakhash.scm 571 */
BgL_res2655z00_3323 = 
NEG(BgL_nz00_3317); }  else 
{ /* Llib/weakhash.scm 571 */
BgL_res2655z00_3323 = BgL_nz00_3317; } } }  else 
{ /* Llib/weakhash.scm 571 */
BgL_res2655z00_3323 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_arg2272z00_1453); } } 
BgL_arg2271z00_1452 = BgL_res2655z00_3323; } } 
BgL_hz00_1449 = 
(BgL_arg2271z00_1452%BgL_newzd2buckszd2lenz00_1436); } 
{ /* Llib/weakhash.scm 578 */
obj_t BgL_arg2269z00_1450;
{ /* Llib/weakhash.scm 578 */
obj_t BgL_arg2270z00_1451;
{ /* Llib/weakhash.scm 578 */
int BgL_kz00_3327;
BgL_kz00_3327 = 
(int)(BgL_hz00_1449); 
{ /* Llib/weakhash.scm 578 */
int BgL_l2831z00_3827;
BgL_l2831z00_3827 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1437); 
if(
BOUND_CHECK(BgL_kz00_3327, BgL_l2831z00_3827))
{ /* Llib/weakhash.scm 578 */
BgL_arg2270z00_1451 = 
VECTOR_REF(BgL_newzd2buckszd2_1437,BgL_kz00_3327); }  else 
{ 
obj_t BgL_auxz00_8335;
BgL_auxz00_8335 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21889)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3327), BgL_newzd2buckszd2_1437); 
FAILURE(BgL_auxz00_8335,BFALSE,BFALSE);} } } 
BgL_arg2269z00_1450 = 
MAKE_PAIR(BgL_cellz00_1448, BgL_arg2270z00_1451); } 
{ /* Llib/weakhash.scm 574 */
int BgL_kz00_3329;
BgL_kz00_3329 = 
(int)(BgL_hz00_1449); 
{ /* Llib/weakhash.scm 574 */
int BgL_l2835z00_3831;
BgL_l2835z00_3831 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1437); 
if(
BOUND_CHECK(BgL_kz00_3329, BgL_l2835z00_3831))
{ /* Llib/weakhash.scm 574 */
VECTOR_SET(BgL_newzd2buckszd2_1437,BgL_kz00_3329,BgL_arg2269z00_1450); }  else 
{ 
obj_t BgL_auxz00_8346;
BgL_auxz00_8346 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21831)), BGl_string3557z00zz__weakhashz00, 
BINT(BgL_kz00_3329), BgL_newzd2buckszd2_1437); 
FAILURE(BgL_auxz00_8346,BFALSE,BFALSE);} } } } } } 
{ 
obj_t BgL_l1878z00_8351;
BgL_l1878z00_8351 = 
CDR(BgL_l1878z00_1445); 
BgL_l1878z00_1445 = BgL_l1878z00_8351; 
goto BgL_zc3anonymousza32267ze3z83_1446;} }  else 
{ /* Llib/weakhash.scm 553 */
if(
NULLP(BgL_l1878z00_1445))
{ /* Llib/weakhash.scm 553 */BTRUE; }  else 
{ /* Llib/weakhash.scm 553 */
BGl_errorz00zz__errorz00(BGl_string3663z00zz__weakhashz00, BGl_string3664z00zz__weakhashz00, BgL_l1878z00_1445); } } } } 
{ 
long BgL_iz00_8356;
BgL_iz00_8356 = 
(BgL_iz00_1440+((long)1)); 
BgL_iz00_1440 = BgL_iz00_8356; 
goto BgL_zc3anonymousza32265ze3z83_1441;} }  else 
{ /* Llib/weakhash.scm 553 */((bool_t)0); } } 
{ /* Llib/weakhash.scm 553 */
bool_t BgL_testz00_8358;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_auxz00_8359;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_res2656z00_3341;
{ /* Llib/weakhash.scm 553 */
obj_t BgL_aux3545z00_4569;
BgL_aux3545z00_4569 = 
STRUCT_KEY(BgL_tablez00_75); 
if(
SYMBOLP(BgL_aux3545z00_4569))
{ /* Llib/weakhash.scm 553 */
BgL_res2656z00_3341 = BgL_aux3545z00_4569; }  else 
{ 
obj_t BgL_auxz00_8363;
BgL_auxz00_8363 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)21191)), BGl_string3660z00zz__weakhashz00, BGl_string3551z00zz__weakhashz00, BgL_aux3545z00_4569); 
FAILURE(BgL_auxz00_8363,BFALSE,BFALSE);} } 
BgL_auxz00_8359 = BgL_res2656z00_3341; } 
BgL_testz00_8358 = 
(BgL_auxz00_8359==BGl_symbol3552z00zz__weakhashz00); } 
if(BgL_testz00_8358)
{ /* Llib/weakhash.scm 553 */
int BgL_auxz00_8368;
BgL_auxz00_8368 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_75, BgL_auxz00_8368, BgL_countz00_1438);}  else 
{ /* Llib/weakhash.scm 553 */
return 
BGl_errorz00zz__errorz00(BGl_string3561z00zz__weakhashz00, BGl_string3553z00zz__weakhashz00, BgL_tablez00_75);} } } } } } } } } } } } 
}



/* _weak-hashtable-expand! */
obj_t BGl__weakzd2hashtablezd2expandz12z12zz__weakhashz00(obj_t BgL_envz00_3659, obj_t BgL_tablez00_3660)
{ AN_OBJECT;
{ /* Llib/weakhash.scm 514 */
{ /* Llib/weakhash.scm 526 */
obj_t BgL_auxz00_8372;
if(
STRUCTP(BgL_tablez00_3660))
{ /* Llib/weakhash.scm 526 */
BgL_auxz00_8372 = BgL_tablez00_3660
; }  else 
{ 
obj_t BgL_auxz00_8375;
BgL_auxz00_8375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3549z00zz__weakhashz00, 
BINT(((long)20360)), BGl_string3671z00zz__weakhashz00, BGl_string3587z00zz__weakhashz00, BgL_tablez00_3660); 
FAILURE(BgL_auxz00_8375,BFALSE,BFALSE);} 
return 
BGl_weakzd2hashtablezd2expandz12z12zz__weakhashz00(BgL_auxz00_8372);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__weakhashz00()
{ AN_OBJECT;
{ /* Llib/weakhash.scm 18 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__weakhashz00()
{ AN_OBJECT;
{ /* Llib/weakhash.scm 18 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__weakhashz00()
{ AN_OBJECT;
{ /* Llib/weakhash.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)504082187), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)81619416), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string3672z00zz__weakhashz00));} 
}

#ifdef __cplusplus
}
#endif
