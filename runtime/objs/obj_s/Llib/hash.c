/*===========================================================================*/
/*   (Llib/hash.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/hash.scm -indent -o objs/obj_s/Llib/hash.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */

static obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t);
static obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl__hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern bool_t BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(obj_t, obj_t);
extern long bgl_symbol_hash_number(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__hashz00();
extern obj_t BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl__makezd2hashtablezd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t, obj_t);
extern obj_t create_struct(obj_t, int);
extern obj_t BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(obj_t, obj_t);
static obj_t BGl__hashtablezf3zf3zz__hashz00(obj_t, obj_t);
static obj_t BGl__hashtablezd2keyzd2listz00zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3405z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3409z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3413z00zz__hashz00 = BUNSPEC;
static obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3427z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3431z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3433z00zz__hashz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__hashz00();
static obj_t BGl__hashtablezd2getzd2zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3463z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3465z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3467z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3469z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3477z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3479z00zz__hashz00 = BUNSPEC;
static obj_t BGl__hashtablezd2filterz12zc0zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl__hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3490z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3501z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3492z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3505z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3507z00zz__hashz00 = BUNSPEC;
extern long bgl_string_hash_number(char *);
static obj_t BGl_symbol3509z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3499z00zz__hashz00 = BUNSPEC;
static obj_t BGl__hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__getzd2pointerzd2hashnumberz00zz__hashz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t);
static obj_t BGl_symbol3524z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3526z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__hashz00();
static obj_t BGl_symbol3533z00zz__hashz00 = BUNSPEC;
static obj_t BGl_symbol3535z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
BGL_EXPORTED_DECL long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t, long);
static obj_t BGl_symbol3538z00zz__hashz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32145ze3z83zz__hashz00(obj_t, obj_t);
static obj_t BGl_symbol3550z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_keyword3417z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_keyword3419z00zz__hashz00 = BUNSPEC;
static obj_t BGl_keyword3421z00zz__hashz00 = BUNSPEC;
static obj_t BGl_keyword3423z00zz__hashz00 = BUNSPEC;
static obj_t BGl__getzd2hashnumberzd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_keyword3425z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
extern obj_t bstring_to_keyword(obj_t);
extern obj_t BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(obj_t, obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__weakhashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t);
extern long bgl_pointer_hashnumber(obj_t, long);
static obj_t BGl_toplevelzd2initzd2zz__hashz00();
static obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t);
static bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t, obj_t);
extern long bgl_string_hash(char *, int, int);
BGL_EXPORTED_DECL obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_getzd2hashnumberzd2zz__hashz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t);
static obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t);
extern obj_t make_vector(int, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(obj_t, obj_t);
static obj_t BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
static obj_t BGl_search1885z00zz__hashz00(int, obj_t, obj_t, long);
static obj_t BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
static bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t, obj_t);
extern long bgl_foreign_hash_number(obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2hashzd2zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__hashtablezd2mapzd2zz__hashz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t);
static obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t);
static obj_t BGl__hashtablezd2siza7ez75zz__hashz00(obj_t, obj_t);
static obj_t BGl_list3416z00zz__hashz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__hashtablezd2ze3vectorz31zz__hashz00(obj_t, obj_t);
static obj_t BGl__hashtablezd2ze3listz31zz__hashz00(obj_t, obj_t);
static bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t, obj_t);
static obj_t BGl_list3462z00zz__hashz00 = BUNSPEC;
extern long bgl_keyword_hash_number(obj_t);
static obj_t BGl_list3476z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3489z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3504z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3498z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_list3523z00zz__hashz00 = BUNSPEC;
static obj_t BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t, obj_t);
static obj_t BGl_list3532z00zz__hashz00 = BUNSPEC;
static obj_t BGl_list3537z00zz__hashz00 = BUNSPEC;
extern obj_t BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(obj_t);
static bool_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t);
extern long bgl_obj_hash_number(obj_t);
extern obj_t BGl_weakzd2hashtablezd2getz00zz__weakhashz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__hashz00();
extern int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DECL bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t, obj_t);
static obj_t BGl__hashtablezd2containszf3z21zz__hashz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2ze3listzd2envze3zz__hashz00, BgL_bgl__hashtableza7d2za7e33560z00, BGl__hashtablezd2ze3listz31zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2putz12zd2envz12zz__hashz00, BgL_bgl__hashtableza7d2put3561za7, BGl__hashtablezd2putz12zc0zz__hashz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2ze3vectorzd2envze3zz__hashz00, BgL_bgl__hashtableza7d2za7e33562z00, BGl__hashtablezd2ze3vectorz31zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2hashtablezd2envz00zz__hashz00, BgL_bgl__makeza7d2hashtabl3563za7, va_generic_entry, BGl__makezd2hashtablezd2zz__hashz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezf3zd2envz21zz__hashz00, BgL_bgl__hashtableza7f3za7f33564z00, BGl__hashtablezf3zf3zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2keyzd2listzd2envzd2zz__hashz00, BgL_bgl__hashtableza7d2key3565za7, BGl__hashtablezd2keyzd2listz00zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2getzd2envz00zz__hashz00, BgL_bgl__hashtableza7d2get3566za7, BGl__hashtablezd2getzd2zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2removez12zd2envz12zz__hashz00, BgL_bgl__hashtableza7d2rem3567za7, BGl__hashtablezd2removez12zc0zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2filterz12zd2envz12zz__hashz00, BgL_bgl__hashtableza7d2fil3568za7, BGl__hashtablezd2filterz12zc0zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2forzd2eachzd2envzd2zz__hashz00, BgL_bgl__hashtableza7d2for3569za7, BGl__hashtablezd2forzd2eachz00zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_createzd2hashtablezd2envz00zz__hashz00, BgL_bgl__createza7d2hashta3570za7, opt_generic_entry, BGl__createzd2hashtablezd2zz__hashz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2hashnumberzd2envz00zz__hashz00, BgL_bgl__getza7d2hashnumbe3571za7, BGl__getzd2hashnumberzd2zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2weakzd2datazf3zd2envz21zz__hashz00, BgL_bgl__hashtableza7d2wea3572za7, BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hashzd2envz00zz__hashz00, BgL_bgl__stringza7d2hashza7d3573z00, opt_generic_entry, BGl__stringzd2hashzd2zz__hashz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2weakzd2keyszf3zd2envz21zz__hashz00, BgL_bgl__hashtableza7d2wea3574za7, BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2containszf3zd2envzf3zz__hashz00, BgL_bgl__hashtableza7d2con3575za7, BGl__hashtablezd2containszf3z21zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2pointerzd2hashnumberzd2envzd2zz__hashz00, BgL_bgl__getza7d2pointerza7d3576z00, BGl__getzd2pointerzd2hashnumberz00zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2siza7ezd2envza7zz__hashz00, BgL_bgl__hashtableza7d2siza73577z00, BGl__hashtablezd2siza7ez75zz__hashz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2addz12zd2envz12zz__hashz00, BgL_bgl__hashtableza7d2add3578za7, BGl__hashtablezd2addz12zc0zz__hashz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string3400z00zz__hashz00, BgL_bgl_string3400za700za7za7_3579za7, "make-hashtable", 14 );
DEFINE_STRING( BGl_string3401z00zz__hashz00, BgL_bgl_string3401za700za7za7_3580za7, "long", 4 );
DEFINE_STRING( BGl_string3402z00zz__hashz00, BgL_bgl_string3402za700za7za7_3581za7, "Illegal default bucket length", 29 );
DEFINE_STRING( BGl_string3403z00zz__hashz00, BgL_bgl_string3403za700za7za7_3582za7, "pair", 4 );
DEFINE_STRING( BGl_string3404z00zz__hashz00, BgL_bgl_string3404za700za7za7_3583za7, "Illegal max bucket length", 25 );
DEFINE_STRING( BGl_string3406z00zz__hashz00, BgL_bgl_string3406za700za7za7_3584za7, "Illegal equality test", 21 );
DEFINE_STRING( BGl_string3407z00zz__hashz00, BgL_bgl_string3407za700za7za7_3585za7, "Illegal hashnumber function", 27 );
DEFINE_STRING( BGl_string3408z00zz__hashz00, BgL_bgl_string3408za700za7za7_3586za7, "int", 3 );
DEFINE_STRING( BGl_string3410z00zz__hashz00, BgL_bgl_string3410za700za7za7_3587za7, "%hashtable", 10 );
DEFINE_STRING( BGl_string3399z00zz__hashz00, BgL_bgl_string3399za700za7za7_3588za7, "/tmp/bigloo/runtime/Llib/hash.scm", 33 );
DEFINE_STRING( BGl_string3411z00zz__hashz00, BgL_bgl_string3411za700za7za7_3589za7, "symbol", 6 );
DEFINE_STRING( BGl_string3412z00zz__hashz00, BgL_bgl_string3412za700za7za7_3590za7, "struct-set!:not an instance of", 30 );
DEFINE_STRING( BGl_string3414z00zz__hashz00, BgL_bgl_string3414za700za7za7_3591za7, "none", 4 );
DEFINE_STRING( BGl_string3415z00zz__hashz00, BgL_bgl_string3415za700za7za7_3592za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string3418z00zz__hashz00, BgL_bgl_string3418za700za7za7_3593za7, "eqtest", 6 );
DEFINE_STRING( BGl_string3420z00zz__hashz00, BgL_bgl_string3420za700za7za7_3594za7, "hash", 4 );
DEFINE_STRING( BGl_string3422z00zz__hashz00, BgL_bgl_string3422za700za7za7_3595za7, "max-bucket-length", 17 );
DEFINE_STRING( BGl_string3424z00zz__hashz00, BgL_bgl_string3424za700za7za7_3596za7, "size", 4 );
DEFINE_STRING( BGl_string3426z00zz__hashz00, BgL_bgl_string3426za700za7za7_3597za7, "weak", 4 );
DEFINE_STRING( BGl_string3428z00zz__hashz00, BgL_bgl_string3428za700za7za7_3598za7, "create-hashtable", 16 );
DEFINE_STRING( BGl_string3430z00zz__hashz00, BgL_bgl_string3430za700za7za7_3599za7, "_create-hashtable", 17 );
DEFINE_STRING( BGl_string3429z00zz__hashz00, BgL_bgl_string3429za700za7za7_3600za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string3432z00zz__hashz00, BgL_bgl_string3432za700za7za7_3601za7, "keys", 4 );
DEFINE_STRING( BGl_string3434z00zz__hashz00, BgL_bgl_string3434za700za7za7_3602za7, "data", 4 );
DEFINE_STRING( BGl_string3435z00zz__hashz00, BgL_bgl_string3435za700za7za7_3603za7, "wrong number of arguments: [0..5] expected, provided", 52 );
DEFINE_STRING( BGl_string3436z00zz__hashz00, BgL_bgl_string3436za700za7za7_3604za7, "hashtable?", 10 );
DEFINE_STRING( BGl_string3437z00zz__hashz00, BgL_bgl_string3437za700za7za7_3605za7, "hashtable-weak-keys?", 20 );
DEFINE_STRING( BGl_string3438z00zz__hashz00, BgL_bgl_string3438za700za7za7_3606za7, "struct-ref:not an instance of", 29 );
DEFINE_STRING( BGl_string3440z00zz__hashz00, BgL_bgl_string3440za700za7za7_3607za7, "struct", 6 );
DEFINE_STRING( BGl_string3439z00zz__hashz00, BgL_bgl_string3439za700za7za7_3608za7, "_hashtable-weak-keys?", 21 );
DEFINE_STRING( BGl_string3441z00zz__hashz00, BgL_bgl_string3441za700za7za7_3609za7, "hashtable-weak-data?", 20 );
DEFINE_STRING( BGl_string3442z00zz__hashz00, BgL_bgl_string3442za700za7za7_3610za7, "_hashtable-weak-data?", 21 );
DEFINE_STRING( BGl_string3443z00zz__hashz00, BgL_bgl_string3443za700za7za7_3611za7, "hashtable-size", 14 );
DEFINE_STRING( BGl_string3444z00zz__hashz00, BgL_bgl_string3444za700za7za7_3612za7, "_hashtable-size", 15 );
DEFINE_STRING( BGl_string3445z00zz__hashz00, BgL_bgl_string3445za700za7za7_3613za7, "hashtable->vector", 17 );
DEFINE_STRING( BGl_string3446z00zz__hashz00, BgL_bgl_string3446za700za7za7_3614za7, "_hashtable->vector", 18 );
DEFINE_STRING( BGl_string3447z00zz__hashz00, BgL_bgl_string3447za700za7za7_3615za7, "plain-hashtable->vector", 23 );
DEFINE_STRING( BGl_string3448z00zz__hashz00, BgL_bgl_string3448za700za7za7_3616za7, "vector", 6 );
DEFINE_STRING( BGl_string3450z00zz__hashz00, BgL_bgl_string3450za700za7za7_3617za7, "hashtable->list", 15 );
DEFINE_STRING( BGl_string3449z00zz__hashz00, BgL_bgl_string3449za700za7za7_3618za7, "liip", 4 );
DEFINE_STRING( BGl_string3451z00zz__hashz00, BgL_bgl_string3451za700za7za7_3619za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3452z00zz__hashz00, BgL_bgl_string3452za700za7za7_3620za7, "_hashtable->list", 16 );
DEFINE_STRING( BGl_string3453z00zz__hashz00, BgL_bgl_string3453za700za7za7_3621za7, "plain-hashtable->list", 21 );
DEFINE_STRING( BGl_string3454z00zz__hashz00, BgL_bgl_string3454za700za7za7_3622za7, "hashtable-key-list", 18 );
DEFINE_STRING( BGl_string3455z00zz__hashz00, BgL_bgl_string3455za700za7za7_3623za7, "_hashtable-key-list", 19 );
DEFINE_STRING( BGl_string3456z00zz__hashz00, BgL_bgl_string3456za700za7za7_3624za7, "plain-hashtable-key-list", 24 );
DEFINE_STRING( BGl_string3457z00zz__hashz00, BgL_bgl_string3457za700za7za7_3625za7, "hashtable-map", 13 );
DEFINE_STRING( BGl_string3458z00zz__hashz00, BgL_bgl_string3458za700za7za7_3626za7, "_hashtable-map", 14 );
DEFINE_STRING( BGl_string3460z00zz__hashz00, BgL_bgl_string3460za700za7za7_3627za7, "plain-hashtable-map", 19 );
DEFINE_STRING( BGl_string3459z00zz__hashz00, BgL_bgl_string3459za700za7za7_3628za7, "procedure", 9 );
DEFINE_STRING( BGl_string3461z00zz__hashz00, BgL_bgl_string3461za700za7za7_3629za7, "liip:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3464z00zz__hashz00, BgL_bgl_string3464za700za7za7_3630za7, "funcall", 7 );
DEFINE_STRING( BGl_string3466z00zz__hashz00, BgL_bgl_string3466za700za7za7_3631za7, "fun", 3 );
DEFINE_STRING( BGl_string3468z00zz__hashz00, BgL_bgl_string3468za700za7za7_3632za7, "arg2124", 7 );
DEFINE_STRING( BGl_string3470z00zz__hashz00, BgL_bgl_string3470za700za7za7_3633za7, "arg2125", 7 );
DEFINE_STRING( BGl_string3471z00zz__hashz00, BgL_bgl_string3471za700za7za7_3634za7, "hashtable-for-each", 18 );
DEFINE_STRING( BGl_string3472z00zz__hashz00, BgL_bgl_string3472za700za7za7_3635za7, "_hashtable-for-each", 19 );
DEFINE_STRING( BGl_string3473z00zz__hashz00, BgL_bgl_string3473za700za7za7_3636za7, "plain-hashtable-for-each", 24 );
DEFINE_STRING( BGl_string3474z00zz__hashz00, BgL_bgl_string3474za700za7za7_3637za7, "<anonymous:2129>", 16 );
DEFINE_STRING( BGl_string3475z00zz__hashz00, BgL_bgl_string3475za700za7za7_3638za7, "<anonymous:2129>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3478z00zz__hashz00, BgL_bgl_string3478za700za7za7_3639za7, "arg2131", 7 );
DEFINE_STRING( BGl_string3480z00zz__hashz00, BgL_bgl_string3480za700za7za7_3640za7, "arg2132", 7 );
DEFINE_STRING( BGl_string3481z00zz__hashz00, BgL_bgl_string3481za700za7za7_3641za7, "for-each", 8 );
DEFINE_STRING( BGl_string3482z00zz__hashz00, BgL_bgl_string3482za700za7za7_3642za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string3483z00zz__hashz00, BgL_bgl_string3483za700za7za7_3643za7, "hashtable-filter!", 17 );
DEFINE_STRING( BGl_string3484z00zz__hashz00, BgL_bgl_string3484za700za7za7_3644za7, "_hashtable-filter!", 18 );
DEFINE_STRING( BGl_string3485z00zz__hashz00, BgL_bgl_string3485za700za7za7_3645za7, "plain-hashtable-filter!", 23 );
DEFINE_STRING( BGl_string3486z00zz__hashz00, BgL_bgl_string3486za700za7za7_3646za7, "loop", 4 );
DEFINE_STRING( BGl_string3487z00zz__hashz00, BgL_bgl_string3487za700za7za7_3647za7, "<anonymous:2145>", 16 );
DEFINE_STRING( BGl_string3488z00zz__hashz00, BgL_bgl_string3488za700za7za7_3648za7, "<anonymous:2145>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3500z00zz__hashz00, BgL_bgl_string3500za700za7za7_3649za7, "hashn", 5 );
DEFINE_STRING( BGl_string3491z00zz__hashz00, BgL_bgl_string3491za700za7za7_3650za7, "arg2146", 7 );
DEFINE_STRING( BGl_string3502z00zz__hashz00, BgL_bgl_string3502za700za7za7_3651za7, "key", 3 );
DEFINE_STRING( BGl_string3503z00zz__hashz00, BgL_bgl_string3503za700za7za7_3652za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3493z00zz__hashz00, BgL_bgl_string3493za700za7za7_3653za7, "arg2147", 7 );
DEFINE_STRING( BGl_string3494z00zz__hashz00, BgL_bgl_string3494za700za7za7_3654za7, "hashtable-contains?", 19 );
DEFINE_STRING( BGl_string3495z00zz__hashz00, BgL_bgl_string3495za700za7za7_3655za7, "_hashtable-contains?", 20 );
DEFINE_STRING( BGl_string3506z00zz__hashz00, BgL_bgl_string3506za700za7za7_3656za7, "eqt", 3 );
DEFINE_STRING( BGl_string3496z00zz__hashz00, BgL_bgl_string3496za700za7za7_3657za7, "plain-hashtable-contains?", 25 );
DEFINE_STRING( BGl_string3497z00zz__hashz00, BgL_bgl_string3497za700za7za7_3658za7, "plain-hashtable-contains?:Wrong number of arguments", 51 );
DEFINE_STRING( BGl_string3508z00zz__hashz00, BgL_bgl_string3508za700za7za7_3659za7, "obj1", 4 );
DEFINE_STRING( BGl_string3510z00zz__hashz00, BgL_bgl_string3510za700za7za7_3660za7, "obj2", 4 );
DEFINE_STRING( BGl_string3511z00zz__hashz00, BgL_bgl_string3511za700za7za7_3661za7, "hashtable-get", 13 );
DEFINE_STRING( BGl_string3512z00zz__hashz00, BgL_bgl_string3512za700za7za7_3662za7, "_hashtable-get", 14 );
DEFINE_STRING( BGl_string3513z00zz__hashz00, BgL_bgl_string3513za700za7za7_3663za7, "plain-hashtable-get", 19 );
DEFINE_STRING( BGl_string3514z00zz__hashz00, BgL_bgl_string3514za700za7za7_3664za7, "plain-hashtable-get:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3515z00zz__hashz00, BgL_bgl_string3515za700za7za7_3665za7, "hashtable-put!", 14 );
DEFINE_STRING( BGl_string3516z00zz__hashz00, BgL_bgl_string3516za700za7za7_3666za7, "_hashtable-put!", 15 );
DEFINE_STRING( BGl_string3517z00zz__hashz00, BgL_bgl_string3517za700za7za7_3667za7, "plain-hashtable-put!", 20 );
DEFINE_STRING( BGl_string3518z00zz__hashz00, BgL_bgl_string3518za700za7za7_3668za7, "plain-hashtable-put!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3520z00zz__hashz00, BgL_bgl_string3520za700za7za7_3669za7, "_hashtable-update!", 18 );
DEFINE_STRING( BGl_string3519z00zz__hashz00, BgL_bgl_string3519za700za7za7_3670za7, "hashtable-update!", 17 );
DEFINE_STRING( BGl_string3521z00zz__hashz00, BgL_bgl_string3521za700za7za7_3671za7, "plain-hashtable-update!", 23 );
DEFINE_STRING( BGl_string3522z00zz__hashz00, BgL_bgl_string3522za700za7za7_3672za7, "plain-hashtable-update!:Wrong number of arguments", 49 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2mapzd2envz00zz__hashz00, BgL_bgl__hashtableza7d2map3673za7, BGl__hashtablezd2mapzd2zz__hashz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3525z00zz__hashz00, BgL_bgl_string3525za700za7za7_3674za7, "proc", 4 );
DEFINE_STRING( BGl_string3527z00zz__hashz00, BgL_bgl_string3527za700za7za7_3675za7, "arg2204", 7 );
DEFINE_STRING( BGl_string3528z00zz__hashz00, BgL_bgl_string3528za700za7za7_3676za7, "hashtable-add!", 14 );
DEFINE_STRING( BGl_string3530z00zz__hashz00, BgL_bgl_string3530za700za7za7_3677za7, "plain-hashtable-add!", 20 );
DEFINE_STRING( BGl_string3529z00zz__hashz00, BgL_bgl_string3529za700za7za7_3678za7, "_hashtable-add!", 15 );
DEFINE_STRING( BGl_string3531z00zz__hashz00, BgL_bgl_string3531za700za7za7_3679za7, "plain-hashtable-add!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3534z00zz__hashz00, BgL_bgl_string3534za700za7za7_3680za7, "obj", 3 );
DEFINE_STRING( BGl_string3536z00zz__hashz00, BgL_bgl_string3536za700za7za7_3681za7, "init", 4 );
DEFINE_STRING( BGl_string3540z00zz__hashz00, BgL_bgl_string3540za700za7za7_3682za7, "hashtable-remove!", 17 );
DEFINE_STRING( BGl_string3539z00zz__hashz00, BgL_bgl_string3539za700za7za7_3683za7, "arg2234", 7 );
DEFINE_STRING( BGl_string3541z00zz__hashz00, BgL_bgl_string3541za700za7za7_3684za7, "_hashtable-remove!", 18 );
DEFINE_STRING( BGl_string3542z00zz__hashz00, BgL_bgl_string3542za700za7za7_3685za7, "plain-hashtable-remove!", 23 );
DEFINE_STRING( BGl_string3543z00zz__hashz00, BgL_bgl_string3543za700za7za7_3686za7, "plain-hashtable-remove!:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3544z00zz__hashz00, BgL_bgl_string3544za700za7za7_3687za7, "plain-hashtable-expand!", 23 );
DEFINE_STRING( BGl_string3545z00zz__hashz00, BgL_bgl_string3545za700za7za7_3688za7, "<anonymous:2261>", 16 );
DEFINE_STRING( BGl_string3546z00zz__hashz00, BgL_bgl_string3546za700za7za7_3689za7, "<anonymous:2261>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string3547z00zz__hashz00, BgL_bgl_string3547za700za7za7_3690za7, "get-hashnumber", 14 );
DEFINE_STRING( BGl_string3548z00zz__hashz00, BgL_bgl_string3548za700za7za7_3691za7, "object", 6 );
DEFINE_STRING( BGl_string3549z00zz__hashz00, BgL_bgl_string3549za700za7za7_3692za7, "_get-pointer-hashnumber", 23 );
DEFINE_STRING( BGl_string3551z00zz__hashz00, BgL_bgl_string3551za700za7za7_3693za7, "string-hash", 11 );
DEFINE_STRING( BGl_string3552z00zz__hashz00, BgL_bgl_string3552za700za7za7_3694za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3553z00zz__hashz00, BgL_bgl_string3553za700za7za7_3695za7, "_string-hash", 12 );
DEFINE_STRING( BGl_string3554z00zz__hashz00, BgL_bgl_string3554za700za7za7_3696za7, "bstring", 7 );
DEFINE_STRING( BGl_string3555z00zz__hashz00, BgL_bgl_string3555za700za7za7_3697za7, "__hash", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hashtablezd2updatez12zd2envz12zz__hashz00, BgL_bgl__hashtableza7d2upd3698za7, BGl__hashtablezd2updatez12zc0zz__hashz00, 0L, BUNSPEC, 4 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long BgL_checksumz00_4407, char * BgL_fromz00_4408)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__hashz00))
{ 
BGl_requirezd2initializa7ationz75zz__hashz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__hashz00(); 
BGl_importedzd2moduleszd2initz00zz__hashz00(); 
BGl_toplevelzd2initzd2zz__hashz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__hashz00()
{ AN_OBJECT;
{ /* Llib/hash.scm 18 */
BGl_symbol3405z00zz__hashz00 = 
bstring_to_symbol(BGl_string3400z00zz__hashz00); 
BGl_symbol3409z00zz__hashz00 = 
bstring_to_symbol(BGl_string3410z00zz__hashz00); 
BGl_symbol3413z00zz__hashz00 = 
bstring_to_symbol(BGl_string3414z00zz__hashz00); 
BGl_keyword3417z00zz__hashz00 = 
bstring_to_keyword(BGl_string3418z00zz__hashz00); 
BGl_keyword3419z00zz__hashz00 = 
bstring_to_keyword(BGl_string3420z00zz__hashz00); 
BGl_keyword3421z00zz__hashz00 = 
bstring_to_keyword(BGl_string3422z00zz__hashz00); 
BGl_keyword3423z00zz__hashz00 = 
bstring_to_keyword(BGl_string3424z00zz__hashz00); 
BGl_keyword3425z00zz__hashz00 = 
bstring_to_keyword(BGl_string3426z00zz__hashz00); 
BGl_list3416z00zz__hashz00 = 
MAKE_PAIR(BGl_keyword3417z00zz__hashz00, 
MAKE_PAIR(BGl_keyword3419z00zz__hashz00, 
MAKE_PAIR(BGl_keyword3421z00zz__hashz00, 
MAKE_PAIR(BGl_keyword3423z00zz__hashz00, 
MAKE_PAIR(BGl_keyword3425z00zz__hashz00, BNIL))))); 
BGl_symbol3427z00zz__hashz00 = 
bstring_to_symbol(BGl_string3428z00zz__hashz00); 
BGl_symbol3431z00zz__hashz00 = 
bstring_to_symbol(BGl_string3432z00zz__hashz00); 
BGl_symbol3433z00zz__hashz00 = 
bstring_to_symbol(BGl_string3434z00zz__hashz00); 
BGl_symbol3463z00zz__hashz00 = 
bstring_to_symbol(BGl_string3464z00zz__hashz00); 
BGl_symbol3465z00zz__hashz00 = 
bstring_to_symbol(BGl_string3466z00zz__hashz00); 
BGl_symbol3467z00zz__hashz00 = 
bstring_to_symbol(BGl_string3468z00zz__hashz00); 
BGl_symbol3469z00zz__hashz00 = 
bstring_to_symbol(BGl_string3470z00zz__hashz00); 
BGl_list3462z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3467z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3469z00zz__hashz00, BNIL))))); 
BGl_symbol3477z00zz__hashz00 = 
bstring_to_symbol(BGl_string3478z00zz__hashz00); 
BGl_symbol3479z00zz__hashz00 = 
bstring_to_symbol(BGl_string3480z00zz__hashz00); 
BGl_list3476z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3477z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3479z00zz__hashz00, BNIL))))); 
BGl_symbol3490z00zz__hashz00 = 
bstring_to_symbol(BGl_string3491z00zz__hashz00); 
BGl_symbol3492z00zz__hashz00 = 
bstring_to_symbol(BGl_string3493z00zz__hashz00); 
BGl_list3489z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3465z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3490z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3492z00zz__hashz00, BNIL))))); 
BGl_symbol3499z00zz__hashz00 = 
bstring_to_symbol(BGl_string3500z00zz__hashz00); 
BGl_symbol3501z00zz__hashz00 = 
bstring_to_symbol(BGl_string3502z00zz__hashz00); 
BGl_list3498z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3499z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3499z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3501z00zz__hashz00, BNIL)))); 
BGl_symbol3505z00zz__hashz00 = 
bstring_to_symbol(BGl_string3506z00zz__hashz00); 
BGl_symbol3507z00zz__hashz00 = 
bstring_to_symbol(BGl_string3508z00zz__hashz00); 
BGl_symbol3509z00zz__hashz00 = 
bstring_to_symbol(BGl_string3510z00zz__hashz00); 
BGl_list3504z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3505z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3505z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3507z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3509z00zz__hashz00, BNIL))))); 
BGl_symbol3524z00zz__hashz00 = 
bstring_to_symbol(BGl_string3525z00zz__hashz00); 
BGl_symbol3526z00zz__hashz00 = 
bstring_to_symbol(BGl_string3527z00zz__hashz00); 
BGl_list3523z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3526z00zz__hashz00, BNIL)))); 
BGl_symbol3533z00zz__hashz00 = 
bstring_to_symbol(BGl_string3534z00zz__hashz00); 
BGl_symbol3535z00zz__hashz00 = 
bstring_to_symbol(BGl_string3536z00zz__hashz00); 
BGl_list3532z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3533z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3535z00zz__hashz00, BNIL))))); 
BGl_symbol3538z00zz__hashz00 = 
bstring_to_symbol(BGl_string3539z00zz__hashz00); 
BGl_list3537z00zz__hashz00 = 
MAKE_PAIR(BGl_symbol3463z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3524z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3533z00zz__hashz00, 
MAKE_PAIR(BGl_symbol3538z00zz__hashz00, BNIL))))); 
return ( 
BGl_symbol3550z00zz__hashz00 = 
bstring_to_symbol(BGl_string3551z00zz__hashz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__hashz00()
{ AN_OBJECT;
{ /* Llib/hash.scm 18 */
BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00 = 
BINT(((long)128)); 
return ( 
BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00 = 
BINT(((long)10)), BUNSPEC) ;} 
}



/* make-hashtable */
BGL_EXPORTED_DEF obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t BgL_argsz00_32)
{ AN_OBJECT;
{ /* Llib/hash.scm 123 */
{ /* Llib/hash.scm 124 */
obj_t BgL_siza7eza7_953;obj_t BgL_mblenz00_954;obj_t BgL_eqtestz00_955;obj_t BgL_hashnz00_956;long BgL_wkz00_957;
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 126 */
bool_t BgL_testz00_4492;
if(
INTEGERP(
CAR(BgL_argsz00_32)))
{ /* Llib/hash.scm 126 */
long BgL_n1z00_2055;
{ /* Llib/hash.scm 126 */
obj_t BgL_auxz00_4496;
{ /* Llib/hash.scm 126 */
obj_t BgL_aux2815z00_3776;
BgL_aux2815z00_3776 = 
CAR(BgL_argsz00_32); 
if(
INTEGERP(BgL_aux2815z00_3776))
{ /* Llib/hash.scm 126 */
BgL_auxz00_4496 = BgL_aux2815z00_3776
; }  else 
{ 
obj_t BgL_auxz00_4500;
BgL_auxz00_4500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5043)), BGl_string3400z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2815z00_3776); 
FAILURE(BgL_auxz00_4500,BFALSE,BFALSE);} } 
BgL_n1z00_2055 = 
(long)CINT(BgL_auxz00_4496); } 
BgL_testz00_4492 = 
(BgL_n1z00_2055>=((long)1)); }  else 
{ /* Llib/hash.scm 126 */
BgL_testz00_4492 = ((bool_t)0)
; } 
if(BgL_testz00_4492)
{ /* Llib/hash.scm 126 */
BgL_siza7eza7_953 = 
CAR(BgL_argsz00_32); }  else 
{ /* Llib/hash.scm 126 */
if(
(
CAR(BgL_argsz00_32)==BUNSPEC))
{ /* Llib/hash.scm 128 */
BgL_siza7eza7_953 = BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00; }  else 
{ /* Llib/hash.scm 128 */
BgL_siza7eza7_953 = 
BGl_errorz00zz__errorz00(BGl_string3400z00zz__hashz00, BGl_string3402z00zz__hashz00, BgL_argsz00_32); } } }  else 
{ /* Llib/hash.scm 124 */
BgL_siza7eza7_953 = BGl_defaultzd2hashtablezd2bucketzd2lengthzd2zz__hashz00; } 
{ /* Llib/hash.scm 135 */
bool_t BgL_testz00_4511;
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 135 */
obj_t BgL_auxz00_4514;
BgL_auxz00_4514 = 
CDR(BgL_argsz00_32); 
BgL_testz00_4511 = 
PAIRP(BgL_auxz00_4514); }  else 
{ /* Llib/hash.scm 135 */
BgL_testz00_4511 = ((bool_t)0)
; } 
if(BgL_testz00_4511)
{ /* Llib/hash.scm 137 */
bool_t BgL_testz00_4517;
{ /* Llib/hash.scm 137 */
bool_t BgL_testz00_4518;
{ /* Llib/hash.scm 137 */
obj_t BgL_auxz00_4519;
{ /* Llib/hash.scm 137 */
obj_t BgL_pairz00_2065;
{ /* Llib/hash.scm 137 */
obj_t BgL_aux2817z00_3778;
BgL_aux2817z00_3778 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_aux2817z00_3778))
{ /* Llib/hash.scm 137 */
BgL_pairz00_2065 = BgL_aux2817z00_3778; }  else 
{ 
obj_t BgL_auxz00_4523;
BgL_auxz00_4523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5391)), BGl_string3400z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2817z00_3778); 
FAILURE(BgL_auxz00_4523,BFALSE,BFALSE);} } 
BgL_auxz00_4519 = 
CAR(BgL_pairz00_2065); } 
BgL_testz00_4518 = 
INTEGERP(BgL_auxz00_4519); } 
if(BgL_testz00_4518)
{ /* Llib/hash.scm 137 */
long BgL_n1z00_2071;
{ /* Llib/hash.scm 137 */
obj_t BgL_pairz00_2070;
{ /* Llib/hash.scm 137 */
obj_t BgL_aux2819z00_3780;
BgL_aux2819z00_3780 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_aux2819z00_3780))
{ /* Llib/hash.scm 137 */
BgL_pairz00_2070 = BgL_aux2819z00_3780; }  else 
{ 
obj_t BgL_auxz00_4532;
BgL_auxz00_4532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5410)), BGl_string3400z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2819z00_3780); 
FAILURE(BgL_auxz00_4532,BFALSE,BFALSE);} } 
{ /* Llib/hash.scm 137 */
obj_t BgL_auxz00_4536;
{ /* Llib/hash.scm 137 */
obj_t BgL_aux2821z00_3782;
BgL_aux2821z00_3782 = 
CAR(BgL_pairz00_2070); 
if(
INTEGERP(BgL_aux2821z00_3782))
{ /* Llib/hash.scm 137 */
BgL_auxz00_4536 = BgL_aux2821z00_3782
; }  else 
{ 
obj_t BgL_auxz00_4540;
BgL_auxz00_4540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5410)), BGl_string3400z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2821z00_3782); 
FAILURE(BgL_auxz00_4540,BFALSE,BFALSE);} } 
BgL_n1z00_2071 = 
(long)CINT(BgL_auxz00_4536); } } 
BgL_testz00_4517 = 
(BgL_n1z00_2071>=((long)1)); }  else 
{ /* Llib/hash.scm 137 */
BgL_testz00_4517 = ((bool_t)0)
; } } 
if(BgL_testz00_4517)
{ /* Llib/hash.scm 138 */
obj_t BgL_pairz00_2076;
{ /* Llib/hash.scm 138 */
obj_t BgL_aux2823z00_3784;
BgL_aux2823z00_3784 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_aux2823z00_3784))
{ /* Llib/hash.scm 138 */
BgL_pairz00_2076 = BgL_aux2823z00_3784; }  else 
{ 
obj_t BgL_auxz00_4549;
BgL_auxz00_4549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5429)), BGl_string3400z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2823z00_3784); 
FAILURE(BgL_auxz00_4549,BFALSE,BFALSE);} } 
BgL_mblenz00_954 = 
CAR(BgL_pairz00_2076); }  else 
{ /* Llib/hash.scm 139 */
bool_t BgL_testz00_4554;
{ /* Llib/hash.scm 139 */
obj_t BgL_auxz00_4555;
{ /* Llib/hash.scm 139 */
obj_t BgL_pairz00_2080;
{ /* Llib/hash.scm 139 */
obj_t BgL_aux2825z00_3786;
BgL_aux2825z00_3786 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_aux2825z00_3786))
{ /* Llib/hash.scm 139 */
BgL_pairz00_2080 = BgL_aux2825z00_3786; }  else 
{ 
obj_t BgL_auxz00_4559;
BgL_auxz00_4559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)5457)), BGl_string3400z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2825z00_3786); 
FAILURE(BgL_auxz00_4559,BFALSE,BFALSE);} } 
BgL_auxz00_4555 = 
CAR(BgL_pairz00_2080); } 
BgL_testz00_4554 = 
(BgL_auxz00_4555==BUNSPEC); } 
if(BgL_testz00_4554)
{ /* Llib/hash.scm 139 */
BgL_mblenz00_954 = BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00; }  else 
{ /* Llib/hash.scm 139 */
BgL_mblenz00_954 = 
BGl_errorz00zz__errorz00(BGl_string3400z00zz__hashz00, BGl_string3404z00zz__hashz00, BgL_argsz00_32); } } }  else 
{ /* Llib/hash.scm 135 */
BgL_mblenz00_954 = BGl_defaultzd2maxzd2bucketzd2lengthzd2zz__hashz00; } } 
{ 
obj_t BgL_eqz00_978;
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 146 */
obj_t BgL_cdrzd21463zd2_983;
BgL_cdrzd21463zd2_983 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_cdrzd21463zd2_983))
{ /* Llib/hash.scm 146 */
obj_t BgL_cdrzd21466zd2_985;
BgL_cdrzd21466zd2_985 = 
CDR(BgL_cdrzd21463zd2_983); 
if(
PAIRP(BgL_cdrzd21466zd2_985))
{ /* Llib/hash.scm 146 */
BgL_eqz00_978 = 
CAR(BgL_cdrzd21466zd2_985); 
{ /* Llib/hash.scm 149 */
bool_t BgL_testz00_4574;
if(
PROCEDUREP(BgL_eqz00_978))
{ /* Llib/hash.scm 149 */
BgL_testz00_4574 = 
PROCEDURE_CORRECT_ARITYP(BgL_eqz00_978, 
(int)(((long)2)))
; }  else 
{ /* Llib/hash.scm 149 */
BgL_testz00_4574 = ((bool_t)0)
; } 
if(BgL_testz00_4574)
{ /* Llib/hash.scm 149 */
BgL_eqtestz00_955 = BgL_eqz00_978; }  else 
{ /* Llib/hash.scm 149 */
if(
(BgL_eqz00_978==BUNSPEC))
{ /* Llib/hash.scm 151 */
BgL_eqtestz00_955 = BFALSE; }  else 
{ /* Llib/hash.scm 151 */
BgL_eqtestz00_955 = 
BGl_errorz00zz__errorz00(BGl_symbol3405z00zz__hashz00, BGl_string3406z00zz__hashz00, BgL_eqz00_978); } } } }  else 
{ /* Llib/hash.scm 146 */
BgL_eqtestz00_955 = BFALSE; } }  else 
{ /* Llib/hash.scm 146 */
BgL_eqtestz00_955 = BFALSE; } }  else 
{ /* Llib/hash.scm 146 */
BgL_eqtestz00_955 = BFALSE; } } 
{ 
obj_t BgL_hnz00_991;
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 159 */
obj_t BgL_cdrzd21477zd2_996;
BgL_cdrzd21477zd2_996 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_cdrzd21477zd2_996))
{ /* Llib/hash.scm 159 */
obj_t BgL_cdrzd21480zd2_998;
BgL_cdrzd21480zd2_998 = 
CDR(BgL_cdrzd21477zd2_996); 
if(
PAIRP(BgL_cdrzd21480zd2_998))
{ /* Llib/hash.scm 159 */
obj_t BgL_cdrzd21483zd2_1000;
BgL_cdrzd21483zd2_1000 = 
CDR(BgL_cdrzd21480zd2_998); 
if(
PAIRP(BgL_cdrzd21483zd2_1000))
{ /* Llib/hash.scm 159 */
BgL_hnz00_991 = 
CAR(BgL_cdrzd21483zd2_1000); 
{ /* Llib/hash.scm 162 */
bool_t BgL_testz00_4594;
if(
PROCEDUREP(BgL_hnz00_991))
{ /* Llib/hash.scm 162 */
BgL_testz00_4594 = 
PROCEDURE_CORRECT_ARITYP(BgL_hnz00_991, 
(int)(((long)1)))
; }  else 
{ /* Llib/hash.scm 162 */
BgL_testz00_4594 = ((bool_t)0)
; } 
if(BgL_testz00_4594)
{ /* Llib/hash.scm 162 */
BgL_hashnz00_956 = BgL_hnz00_991; }  else 
{ /* Llib/hash.scm 162 */
if(
(BgL_hnz00_991==BUNSPEC))
{ /* Llib/hash.scm 164 */
BgL_hashnz00_956 = BFALSE; }  else 
{ /* Llib/hash.scm 164 */
BgL_hashnz00_956 = 
BGl_errorz00zz__errorz00(BGl_symbol3405z00zz__hashz00, BGl_string3407z00zz__hashz00, BgL_hnz00_991); } } } }  else 
{ /* Llib/hash.scm 159 */
BgL_hashnz00_956 = BFALSE; } }  else 
{ /* Llib/hash.scm 159 */
BgL_hashnz00_956 = BFALSE; } }  else 
{ /* Llib/hash.scm 159 */
BgL_hashnz00_956 = BFALSE; } }  else 
{ /* Llib/hash.scm 159 */
BgL_hashnz00_956 = BFALSE; } } 
{ /* Llib/hash.scm 172 */
long BgL_auxz00_4623;long BgL_auxz00_4603;
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21514zd2_1029;
BgL_cdrzd21514zd2_1029 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_cdrzd21514zd2_1029))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21517zd2_1031;
BgL_cdrzd21517zd2_1031 = 
CDR(BgL_cdrzd21514zd2_1029); 
if(
PAIRP(BgL_cdrzd21517zd2_1031))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21520zd2_1033;
BgL_cdrzd21520zd2_1033 = 
CDR(BgL_cdrzd21517zd2_1031); 
if(
PAIRP(BgL_cdrzd21520zd2_1033))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21523zd2_1035;
BgL_cdrzd21523zd2_1035 = 
CDR(BgL_cdrzd21520zd2_1033); 
if(
PAIRP(BgL_cdrzd21523zd2_1035))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21526zd2_1037;
BgL_cdrzd21526zd2_1037 = 
CDR(BgL_cdrzd21523zd2_1035); 
if(
PAIRP(BgL_cdrzd21526zd2_1037))
{ /* Llib/hash.scm 172 */
if(
NULLP(
CDR(BgL_cdrzd21526zd2_1037)))
{ /* Llib/hash.scm 172 */
obj_t BgL_wkdz00_2126;
BgL_wkdz00_2126 = 
CAR(BgL_cdrzd21526zd2_1037); 
{ /* Llib/hash.scm 172 */
bool_t BgL_testz00_4645;
if(
(BgL_wkdz00_2126==BUNSPEC))
{ /* Llib/hash.scm 172 */
BgL_testz00_4645 = ((bool_t)0)
; }  else 
{ /* Llib/hash.scm 172 */
BgL_testz00_4645 = 
CBOOL(BgL_wkdz00_2126)
; } 
if(BgL_testz00_4645)
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)2)
; }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4623 = ((long)0)
; } 
if(
PAIRP(BgL_argsz00_32))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21494zd2_1013;
BgL_cdrzd21494zd2_1013 = 
CDR(BgL_argsz00_32); 
if(
PAIRP(BgL_cdrzd21494zd2_1013))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21497zd2_1015;
BgL_cdrzd21497zd2_1015 = 
CDR(BgL_cdrzd21494zd2_1013); 
if(
PAIRP(BgL_cdrzd21497zd2_1015))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21500zd2_1017;
BgL_cdrzd21500zd2_1017 = 
CDR(BgL_cdrzd21497zd2_1015); 
if(
PAIRP(BgL_cdrzd21500zd2_1017))
{ /* Llib/hash.scm 172 */
obj_t BgL_cdrzd21503zd2_1019;
BgL_cdrzd21503zd2_1019 = 
CDR(BgL_cdrzd21500zd2_1017); 
if(
PAIRP(BgL_cdrzd21503zd2_1019))
{ /* Llib/hash.scm 172 */
obj_t BgL_wkkz00_2107;
BgL_wkkz00_2107 = 
CAR(BgL_cdrzd21503zd2_1019); 
{ /* Llib/hash.scm 172 */
bool_t BgL_testz00_4619;
if(
(BgL_wkkz00_2107==BUNSPEC))
{ /* Llib/hash.scm 172 */
BgL_testz00_4619 = ((bool_t)0)
; }  else 
{ /* Llib/hash.scm 172 */
BgL_testz00_4619 = 
CBOOL(BgL_wkkz00_2107)
; } 
if(BgL_testz00_4619)
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)1)
; }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } }  else 
{ /* Llib/hash.scm 172 */
BgL_auxz00_4603 = ((long)0)
; } 
BgL_wkz00_957 = 
(BgL_auxz00_4603 | BgL_auxz00_4623); } 
{ /* Llib/hash.scm 188 */
obj_t BgL_arg1980z00_959;
{ /* Llib/hash.scm 188 */
int BgL_auxz00_4650;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4651;
if(
INTEGERP(BgL_siza7eza7_953))
{ /* Llib/hash.scm 188 */
BgL_auxz00_4651 = BgL_siza7eza7_953
; }  else 
{ 
obj_t BgL_auxz00_4654;
BgL_auxz00_4654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6580)), BGl_string3400z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_siza7eza7_953); 
FAILURE(BgL_auxz00_4654,BFALSE,BFALSE);} 
BgL_auxz00_4650 = 
CINT(BgL_auxz00_4651); } 
BgL_arg1980z00_959 = 
make_vector(BgL_auxz00_4650, BNIL); } 
{ /* Llib/hash.scm 188 */
obj_t BgL_newz00_2139;
BgL_newz00_2139 = 
create_struct(BGl_symbol3409z00zz__hashz00, 
(int)(((long)6))); 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4662;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4663;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2569z00_2146;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2829z00_3790;
BgL_aux2829z00_3790 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2829z00_3790))
{ /* Llib/hash.scm 188 */
BgL_res2569z00_2146 = BgL_aux2829z00_3790; }  else 
{ 
obj_t BgL_auxz00_4667;
BgL_auxz00_4667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2829z00_3790); 
FAILURE(BgL_auxz00_4667,BFALSE,BFALSE);} } 
BgL_auxz00_4663 = BgL_res2569z00_2146; } 
BgL_testz00_4662 = 
(BgL_auxz00_4663==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4662)
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4674;int BgL_auxz00_4672;
BgL_auxz00_4674 = 
BINT(BgL_wkz00_957); 
BgL_auxz00_4672 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4672, BgL_auxz00_4674); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4678;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4679;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2570z00_2153;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2831z00_3792;
BgL_aux2831z00_3792 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2831z00_3792))
{ /* Llib/hash.scm 188 */
BgL_res2570z00_2153 = BgL_aux2831z00_3792; }  else 
{ 
obj_t BgL_auxz00_4683;
BgL_auxz00_4683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2831z00_3792); 
FAILURE(BgL_auxz00_4683,BFALSE,BFALSE);} } 
BgL_auxz00_4679 = BgL_res2570z00_2153; } 
BgL_testz00_4678 = 
(BgL_auxz00_4679==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4678)
{ /* Llib/hash.scm 188 */
int BgL_auxz00_4688;
BgL_auxz00_4688 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4688, BgL_hashnz00_956); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4692;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4693;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2571z00_2160;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2833z00_3794;
BgL_aux2833z00_3794 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2833z00_3794))
{ /* Llib/hash.scm 188 */
BgL_res2571z00_2160 = BgL_aux2833z00_3794; }  else 
{ 
obj_t BgL_auxz00_4697;
BgL_auxz00_4697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2833z00_3794); 
FAILURE(BgL_auxz00_4697,BFALSE,BFALSE);} } 
BgL_auxz00_4693 = BgL_res2571z00_2160; } 
BgL_testz00_4692 = 
(BgL_auxz00_4693==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4692)
{ /* Llib/hash.scm 188 */
int BgL_auxz00_4702;
BgL_auxz00_4702 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4702, BgL_eqtestz00_955); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4706;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4707;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2572z00_2167;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2835z00_3796;
BgL_aux2835z00_3796 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2835z00_3796))
{ /* Llib/hash.scm 188 */
BgL_res2572z00_2167 = BgL_aux2835z00_3796; }  else 
{ 
obj_t BgL_auxz00_4711;
BgL_auxz00_4711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2835z00_3796); 
FAILURE(BgL_auxz00_4711,BFALSE,BFALSE);} } 
BgL_auxz00_4707 = BgL_res2572z00_2167; } 
BgL_testz00_4706 = 
(BgL_auxz00_4707==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4706)
{ /* Llib/hash.scm 188 */
int BgL_auxz00_4716;
BgL_auxz00_4716 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4716, BgL_arg1980z00_959); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4720;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4721;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2573z00_2174;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2837z00_3798;
BgL_aux2837z00_3798 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2837z00_3798))
{ /* Llib/hash.scm 188 */
BgL_res2573z00_2174 = BgL_aux2837z00_3798; }  else 
{ 
obj_t BgL_auxz00_4725;
BgL_auxz00_4725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2837z00_3798); 
FAILURE(BgL_auxz00_4725,BFALSE,BFALSE);} } 
BgL_auxz00_4721 = BgL_res2573z00_2174; } 
BgL_testz00_4720 = 
(BgL_auxz00_4721==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4720)
{ /* Llib/hash.scm 188 */
int BgL_auxz00_4730;
BgL_auxz00_4730 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4730, BgL_mblenz00_954); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
{ /* Llib/hash.scm 188 */
bool_t BgL_testz00_4734;
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4735;
{ /* Llib/hash.scm 188 */
obj_t BgL_res2574z00_2181;
{ /* Llib/hash.scm 188 */
obj_t BgL_aux2839z00_3800;
BgL_aux2839z00_3800 = 
STRUCT_KEY(BgL_newz00_2139); 
if(
SYMBOLP(BgL_aux2839z00_3800))
{ /* Llib/hash.scm 188 */
BgL_res2574z00_2181 = BgL_aux2839z00_3800; }  else 
{ 
obj_t BgL_auxz00_4739;
BgL_auxz00_4739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6560)), BGl_string3400z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2839z00_3800); 
FAILURE(BgL_auxz00_4739,BFALSE,BFALSE);} } 
BgL_auxz00_4735 = BgL_res2574z00_2181; } 
BgL_testz00_4734 = 
(BgL_auxz00_4735==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4734)
{ /* Llib/hash.scm 188 */
obj_t BgL_auxz00_4746;int BgL_auxz00_4744;
BgL_auxz00_4746 = 
BINT(((long)0)); 
BgL_auxz00_4744 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2139, BgL_auxz00_4744, BgL_auxz00_4746); }  else 
{ /* Llib/hash.scm 188 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2139); } } 
return BgL_newz00_2139;} } } } 
}



/* _make-hashtable */
obj_t BGl__makezd2hashtablezd2zz__hashz00(obj_t BgL_envz00_3611, obj_t BgL_argsz00_3612)
{ AN_OBJECT;
{ /* Llib/hash.scm 123 */
return 
BGl_makezd2hashtablezd2zz__hashz00(BgL_argsz00_3612);} 
}



/* _create-hashtable */
obj_t BGl__createzd2hashtablezd2zz__hashz00(obj_t BgL_envz00_39, obj_t BgL_opt1883z00_38)
{ AN_OBJECT;
{ /* Llib/hash.scm 193 */
{ /* Llib/hash.scm 193 */
int BgL_l1884z00_1044;
BgL_l1884z00_1044 = 
VECTOR_LENGTH(BgL_opt1883z00_38); 
{ /* Llib/hash.scm 193 */

{ /* Llib/hash.scm 193 */
obj_t BgL_eqtestz00_1048;
BgL_eqtestz00_1048 = BFALSE; 
{ /* Llib/hash.scm 193 */
obj_t BgL_hashz00_1049;
BgL_hashz00_1049 = BFALSE; 
{ /* Llib/hash.scm 193 */
obj_t BgL_maxzd2bucketzd2lengthz00_1050;
BgL_maxzd2bucketzd2lengthz00_1050 = 
BINT(((long)10)); 
{ /* Llib/hash.scm 193 */
obj_t BgL_siza7eza7_1051;
BgL_siza7eza7_1051 = 
BINT(((long)128)); 
{ /* Llib/hash.scm 198 */
obj_t BgL_weakz00_1052;
BgL_weakz00_1052 = BGl_symbol3413z00zz__hashz00; 
{ /* Llib/hash.scm 193 */

{ 
long BgL_iz00_1053;
BgL_iz00_1053 = ((long)0); 
BgL_check1886z00_1054:
if(
(BgL_iz00_1053==
(long)(BgL_l1884z00_1044)))
{ /* Llib/hash.scm 193 */BNIL; }  else 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4757;
{ /* Llib/hash.scm 193 */
obj_t BgL_arg2043z00_1061;obj_t BgL_arg2044z00_1062;
{ /* Llib/hash.scm 193 */
int BgL_kz00_2186;
BgL_kz00_2186 = 
(int)(BgL_iz00_1053); 
{ /* Llib/hash.scm 193 */
int BgL_l2713z00_3673;
BgL_l2713z00_3673 = 
VECTOR_LENGTH(BgL_opt1883z00_38); 
if(
BOUND_CHECK(BgL_kz00_2186, BgL_l2713z00_3673))
{ /* Llib/hash.scm 193 */
BgL_arg2043z00_1061 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_kz00_2186); }  else 
{ 
obj_t BgL_auxz00_4763;
BgL_auxz00_4763 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2186), BgL_opt1883z00_38); 
FAILURE(BgL_auxz00_4763,BFALSE,BFALSE);} } } 
BgL_arg2044z00_1062 = BGl_list3416z00zz__hashz00; 
BgL_testz00_4757 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2043z00_1061, BgL_arg2044z00_1062)); } 
if(BgL_testz00_4757)
{ 
long BgL_iz00_4770;
BgL_iz00_4770 = 
(BgL_iz00_1053+((long)2)); 
BgL_iz00_1053 = BgL_iz00_4770; 
goto BgL_check1886z00_1054;}  else 
{ /* Llib/hash.scm 193 */
obj_t BgL_arg2040z00_1058;obj_t BgL_arg2042z00_1060;
BgL_arg2040z00_1058 = BGl_symbol3427z00zz__hashz00; 
{ /* Llib/hash.scm 193 */
int BgL_kz00_2190;
BgL_kz00_2190 = 
(int)(BgL_iz00_1053); 
{ /* Llib/hash.scm 193 */
int BgL_l2717z00_3677;
BgL_l2717z00_3677 = 
VECTOR_LENGTH(BgL_opt1883z00_38); 
if(
BOUND_CHECK(BgL_kz00_2190, BgL_l2717z00_3677))
{ /* Llib/hash.scm 193 */
BgL_arg2042z00_1060 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_kz00_2190); }  else 
{ 
obj_t BgL_auxz00_4777;
BgL_auxz00_4777 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2190), BgL_opt1883z00_38); 
FAILURE(BgL_auxz00_4777,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg2040z00_1058, BGl_string3429z00zz__hashz00, BgL_arg2042z00_1060); } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_index1888z00_1063;
BgL_index1888z00_1063 = 
BGl_search1885z00zz__hashz00(BgL_l1884z00_1044, BgL_opt1883z00_38, BGl_keyword3417z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4784;
{ /* Llib/hash.scm 193 */
long BgL_n1z00_2191;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4785;
if(
INTEGERP(BgL_index1888z00_1063))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4785 = BgL_index1888z00_1063
; }  else 
{ 
obj_t BgL_auxz00_4788;
BgL_auxz00_4788 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_index1888z00_1063); 
FAILURE(BgL_auxz00_4788,BFALSE,BFALSE);} 
BgL_n1z00_2191 = 
(long)CINT(BgL_auxz00_4785); } 
BgL_testz00_4784 = 
(BgL_n1z00_2191>=((long)0)); } 
if(BgL_testz00_4784)
{ 
int BgL_auxz00_4794;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4795;
{ /* Llib/hash.scm 193 */
bool_t BgL_test2844z00_3805;
BgL_test2844z00_3805 = 
INTEGERP(BgL_index1888z00_1063); 
if(BgL_test2844z00_3805)
{ /* Llib/hash.scm 193 */
BgL_auxz00_4795 = BgL_index1888z00_1063
; }  else 
{ 
obj_t BgL_auxz00_4798;
BgL_auxz00_4798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_index1888z00_1063); 
FAILURE(BgL_auxz00_4798,BFALSE,BFALSE);} } 
BgL_auxz00_4794 = 
CINT(BgL_auxz00_4795); } 
BgL_eqtestz00_1048 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_auxz00_4794); }  else 
{ /* Llib/hash.scm 193 */BFALSE; } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_index1889z00_1065;
BgL_index1889z00_1065 = 
BGl_search1885z00zz__hashz00(BgL_l1884z00_1044, BgL_opt1883z00_38, BGl_keyword3419z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4805;
{ /* Llib/hash.scm 193 */
long BgL_n1z00_2193;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4806;
if(
INTEGERP(BgL_index1889z00_1065))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4806 = BgL_index1889z00_1065
; }  else 
{ 
obj_t BgL_auxz00_4809;
BgL_auxz00_4809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_index1889z00_1065); 
FAILURE(BgL_auxz00_4809,BFALSE,BFALSE);} 
BgL_n1z00_2193 = 
(long)CINT(BgL_auxz00_4806); } 
BgL_testz00_4805 = 
(BgL_n1z00_2193>=((long)0)); } 
if(BgL_testz00_4805)
{ 
int BgL_auxz00_4815;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4816;
{ /* Llib/hash.scm 193 */
bool_t BgL_test2848z00_3809;
BgL_test2848z00_3809 = 
INTEGERP(BgL_index1889z00_1065); 
if(BgL_test2848z00_3809)
{ /* Llib/hash.scm 193 */
BgL_auxz00_4816 = BgL_index1889z00_1065
; }  else 
{ 
obj_t BgL_auxz00_4819;
BgL_auxz00_4819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_index1889z00_1065); 
FAILURE(BgL_auxz00_4819,BFALSE,BFALSE);} } 
BgL_auxz00_4815 = 
CINT(BgL_auxz00_4816); } 
BgL_hashz00_1049 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_auxz00_4815); }  else 
{ /* Llib/hash.scm 193 */BFALSE; } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_index1890z00_1067;
BgL_index1890z00_1067 = 
BGl_search1885z00zz__hashz00(BgL_l1884z00_1044, BgL_opt1883z00_38, BGl_keyword3421z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4826;
{ /* Llib/hash.scm 193 */
long BgL_n1z00_2195;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4827;
if(
INTEGERP(BgL_index1890z00_1067))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4827 = BgL_index1890z00_1067
; }  else 
{ 
obj_t BgL_auxz00_4830;
BgL_auxz00_4830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_index1890z00_1067); 
FAILURE(BgL_auxz00_4830,BFALSE,BFALSE);} 
BgL_n1z00_2195 = 
(long)CINT(BgL_auxz00_4827); } 
BgL_testz00_4826 = 
(BgL_n1z00_2195>=((long)0)); } 
if(BgL_testz00_4826)
{ 
int BgL_auxz00_4836;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4837;
{ /* Llib/hash.scm 193 */
bool_t BgL_test2852z00_3813;
BgL_test2852z00_3813 = 
INTEGERP(BgL_index1890z00_1067); 
if(BgL_test2852z00_3813)
{ /* Llib/hash.scm 193 */
BgL_auxz00_4837 = BgL_index1890z00_1067
; }  else 
{ 
obj_t BgL_auxz00_4840;
BgL_auxz00_4840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_index1890z00_1067); 
FAILURE(BgL_auxz00_4840,BFALSE,BFALSE);} } 
BgL_auxz00_4836 = 
CINT(BgL_auxz00_4837); } 
BgL_maxzd2bucketzd2lengthz00_1050 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_auxz00_4836); }  else 
{ /* Llib/hash.scm 193 */BFALSE; } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_index1891z00_1069;
BgL_index1891z00_1069 = 
BGl_search1885z00zz__hashz00(BgL_l1884z00_1044, BgL_opt1883z00_38, BGl_keyword3423z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4847;
{ /* Llib/hash.scm 193 */
long BgL_n1z00_2197;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4848;
if(
INTEGERP(BgL_index1891z00_1069))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4848 = BgL_index1891z00_1069
; }  else 
{ 
obj_t BgL_auxz00_4851;
BgL_auxz00_4851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_index1891z00_1069); 
FAILURE(BgL_auxz00_4851,BFALSE,BFALSE);} 
BgL_n1z00_2197 = 
(long)CINT(BgL_auxz00_4848); } 
BgL_testz00_4847 = 
(BgL_n1z00_2197>=((long)0)); } 
if(BgL_testz00_4847)
{ 
int BgL_auxz00_4857;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4858;
{ /* Llib/hash.scm 193 */
bool_t BgL_test2856z00_3817;
BgL_test2856z00_3817 = 
INTEGERP(BgL_index1891z00_1069); 
if(BgL_test2856z00_3817)
{ /* Llib/hash.scm 193 */
BgL_auxz00_4858 = BgL_index1891z00_1069
; }  else 
{ 
obj_t BgL_auxz00_4861;
BgL_auxz00_4861 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_index1891z00_1069); 
FAILURE(BgL_auxz00_4861,BFALSE,BFALSE);} } 
BgL_auxz00_4857 = 
CINT(BgL_auxz00_4858); } 
BgL_siza7eza7_1051 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_auxz00_4857); }  else 
{ /* Llib/hash.scm 193 */BFALSE; } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_index1892z00_1071;
BgL_index1892z00_1071 = 
BGl_search1885z00zz__hashz00(BgL_l1884z00_1044, BgL_opt1883z00_38, BGl_keyword3425z00zz__hashz00, ((long)0)); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4868;
{ /* Llib/hash.scm 193 */
long BgL_n1z00_2199;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4869;
if(
INTEGERP(BgL_index1892z00_1071))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4869 = BgL_index1892z00_1071
; }  else 
{ 
obj_t BgL_auxz00_4872;
BgL_auxz00_4872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_index1892z00_1071); 
FAILURE(BgL_auxz00_4872,BFALSE,BFALSE);} 
BgL_n1z00_2199 = 
(long)CINT(BgL_auxz00_4869); } 
BgL_testz00_4868 = 
(BgL_n1z00_2199>=((long)0)); } 
if(BgL_testz00_4868)
{ 
int BgL_auxz00_4878;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4879;
{ /* Llib/hash.scm 193 */
bool_t BgL_test2860z00_3821;
BgL_test2860z00_3821 = 
INTEGERP(BgL_index1892z00_1071); 
if(BgL_test2860z00_3821)
{ /* Llib/hash.scm 193 */
BgL_auxz00_4879 = BgL_index1892z00_1071
; }  else 
{ 
obj_t BgL_auxz00_4882;
BgL_auxz00_4882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_index1892z00_1071); 
FAILURE(BgL_auxz00_4882,BFALSE,BFALSE);} } 
BgL_auxz00_4878 = 
CINT(BgL_auxz00_4879); } 
BgL_weakz00_1052 = 
VECTOR_REF(BgL_opt1883z00_38,BgL_auxz00_4878); }  else 
{ /* Llib/hash.scm 193 */BFALSE; } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_eqtestz00_1073;
BgL_eqtestz00_1073 = BgL_eqtestz00_1048; 
{ /* Llib/hash.scm 193 */
obj_t BgL_hashz00_1074;
BgL_hashz00_1074 = BgL_hashz00_1049; 
{ /* Llib/hash.scm 193 */
obj_t BgL_maxzd2bucketzd2lengthz00_1075;
BgL_maxzd2bucketzd2lengthz00_1075 = BgL_maxzd2bucketzd2lengthz00_1050; 
{ /* Llib/hash.scm 193 */
obj_t BgL_siza7eza7_1076;
BgL_siza7eza7_1076 = BgL_siza7eza7_1051; 
{ /* Llib/hash.scm 193 */
obj_t BgL_weakz00_1077;
BgL_weakz00_1077 = BgL_weakz00_1052; 
{ /* Llib/hash.scm 193 */
long BgL_weakz00_2206;
if(
(BgL_weakz00_1077==BGl_symbol3431z00zz__hashz00))
{ /* Llib/hash.scm 193 */
BgL_weakz00_2206 = ((long)1); }  else 
{ /* Llib/hash.scm 193 */
if(
(BgL_weakz00_1077==BGl_symbol3433z00zz__hashz00))
{ /* Llib/hash.scm 193 */
BgL_weakz00_2206 = ((long)2); }  else 
{ /* Llib/hash.scm 193 */
if(
(BgL_weakz00_1077==BGl_symbol3413z00zz__hashz00))
{ /* Llib/hash.scm 193 */
BgL_weakz00_2206 = ((long)0); }  else 
{ /* Llib/hash.scm 193 */
if(
CBOOL(BgL_weakz00_1077))
{ /* Llib/hash.scm 193 */
BgL_weakz00_2206 = ((long)2); }  else 
{ /* Llib/hash.scm 193 */
BgL_weakz00_2206 = ((long)0); } } } } 
{ /* Llib/hash.scm 193 */
obj_t BgL_arg2059z00_2212;
{ /* Llib/hash.scm 193 */
int BgL_auxz00_4896;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4897;
if(
INTEGERP(BgL_siza7eza7_1076))
{ /* Llib/hash.scm 193 */
BgL_auxz00_4897 = BgL_siza7eza7_1076
; }  else 
{ 
obj_t BgL_auxz00_4900;
BgL_auxz00_4900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_siza7eza7_1076); 
FAILURE(BgL_auxz00_4900,BFALSE,BFALSE);} 
BgL_auxz00_4896 = 
CINT(BgL_auxz00_4897); } 
BgL_arg2059z00_2212 = 
make_vector(BgL_auxz00_4896, BNIL); } 
{ /* Llib/hash.scm 193 */
obj_t BgL_newz00_2225;
BgL_newz00_2225 = 
create_struct(BGl_symbol3409z00zz__hashz00, 
(int)(((long)6))); 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4908;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4909;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2575z00_2232;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2863z00_3824;
BgL_aux2863z00_3824 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2863z00_3824))
{ /* Llib/hash.scm 193 */
BgL_res2575z00_2232 = BgL_aux2863z00_3824; }  else 
{ 
obj_t BgL_auxz00_4913;
BgL_auxz00_4913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2863z00_3824); 
FAILURE(BgL_auxz00_4913,BFALSE,BFALSE);} } 
BgL_auxz00_4909 = BgL_res2575z00_2232; } 
BgL_testz00_4908 = 
(BgL_auxz00_4909==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4908)
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4920;int BgL_auxz00_4918;
BgL_auxz00_4920 = 
BINT(BgL_weakz00_2206); 
BgL_auxz00_4918 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4918, BgL_auxz00_4920); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4924;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4925;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2576z00_2239;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2865z00_3826;
BgL_aux2865z00_3826 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2865z00_3826))
{ /* Llib/hash.scm 193 */
BgL_res2576z00_2239 = BgL_aux2865z00_3826; }  else 
{ 
obj_t BgL_auxz00_4929;
BgL_auxz00_4929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2865z00_3826); 
FAILURE(BgL_auxz00_4929,BFALSE,BFALSE);} } 
BgL_auxz00_4925 = BgL_res2576z00_2239; } 
BgL_testz00_4924 = 
(BgL_auxz00_4925==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4924)
{ /* Llib/hash.scm 193 */
int BgL_auxz00_4934;
BgL_auxz00_4934 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4934, BgL_hashz00_1074); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4938;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4939;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2577z00_2246;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2867z00_3828;
BgL_aux2867z00_3828 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2867z00_3828))
{ /* Llib/hash.scm 193 */
BgL_res2577z00_2246 = BgL_aux2867z00_3828; }  else 
{ 
obj_t BgL_auxz00_4943;
BgL_auxz00_4943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2867z00_3828); 
FAILURE(BgL_auxz00_4943,BFALSE,BFALSE);} } 
BgL_auxz00_4939 = BgL_res2577z00_2246; } 
BgL_testz00_4938 = 
(BgL_auxz00_4939==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4938)
{ /* Llib/hash.scm 193 */
int BgL_auxz00_4948;
BgL_auxz00_4948 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4948, BgL_eqtestz00_1073); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4952;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4953;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2578z00_2253;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2869z00_3830;
BgL_aux2869z00_3830 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2869z00_3830))
{ /* Llib/hash.scm 193 */
BgL_res2578z00_2253 = BgL_aux2869z00_3830; }  else 
{ 
obj_t BgL_auxz00_4957;
BgL_auxz00_4957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2869z00_3830); 
FAILURE(BgL_auxz00_4957,BFALSE,BFALSE);} } 
BgL_auxz00_4953 = BgL_res2578z00_2253; } 
BgL_testz00_4952 = 
(BgL_auxz00_4953==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4952)
{ /* Llib/hash.scm 193 */
int BgL_auxz00_4962;
BgL_auxz00_4962 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4962, BgL_arg2059z00_2212); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4966;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4967;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2579z00_2260;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2871z00_3832;
BgL_aux2871z00_3832 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2871z00_3832))
{ /* Llib/hash.scm 193 */
BgL_res2579z00_2260 = BgL_aux2871z00_3832; }  else 
{ 
obj_t BgL_auxz00_4971;
BgL_auxz00_4971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2871z00_3832); 
FAILURE(BgL_auxz00_4971,BFALSE,BFALSE);} } 
BgL_auxz00_4967 = BgL_res2579z00_2260; } 
BgL_testz00_4966 = 
(BgL_auxz00_4967==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4966)
{ /* Llib/hash.scm 193 */
int BgL_auxz00_4976;
BgL_auxz00_4976 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4976, BgL_maxzd2bucketzd2lengthz00_1075); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
{ /* Llib/hash.scm 193 */
bool_t BgL_testz00_4980;
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4981;
{ /* Llib/hash.scm 193 */
obj_t BgL_res2580z00_2267;
{ /* Llib/hash.scm 193 */
obj_t BgL_aux2873z00_3834;
BgL_aux2873z00_3834 = 
STRUCT_KEY(BgL_newz00_2225); 
if(
SYMBOLP(BgL_aux2873z00_3834))
{ /* Llib/hash.scm 193 */
BgL_res2580z00_2267 = BgL_aux2873z00_3834; }  else 
{ 
obj_t BgL_auxz00_4985;
BgL_auxz00_4985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6845)), BGl_string3430z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2873z00_3834); 
FAILURE(BgL_auxz00_4985,BFALSE,BFALSE);} } 
BgL_auxz00_4981 = BgL_res2580z00_2267; } 
BgL_testz00_4980 = 
(BgL_auxz00_4981==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_4980)
{ /* Llib/hash.scm 193 */
obj_t BgL_auxz00_4992;int BgL_auxz00_4990;
BgL_auxz00_4992 = 
BINT(((long)0)); 
BgL_auxz00_4990 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2225, BgL_auxz00_4990, BgL_auxz00_4992); }  else 
{ /* Llib/hash.scm 193 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2225); } } 
return BgL_newz00_2225;} } } } } } } } } } } } } } } } } 
}



/* search1885 */
obj_t BGl_search1885z00zz__hashz00(int BgL_l1884z00_3670, obj_t BgL_opt1883z00_3669, obj_t BgL_k1z00_1045, long BgL_iz00_1046)
{ AN_OBJECT;
{ /* Llib/hash.scm 193 */
BGl_search1885z00zz__hashz00:
if(
(BgL_iz00_1046==
(long)(BgL_l1884z00_3670)))
{ /* Llib/hash.scm 193 */
return 
BINT(((long)-1));}  else 
{ /* Llib/hash.scm 193 */
if(
(BgL_iz00_1046==
(
(long)(BgL_l1884z00_3670)-((long)1))))
{ /* Llib/hash.scm 193 */
obj_t BgL_arg2052z00_1080;int BgL_arg2054z00_1082;
BgL_arg2052z00_1080 = BGl_symbol3427z00zz__hashz00; 
BgL_arg2054z00_1082 = 
VECTOR_LENGTH(BgL_opt1883z00_3669); 
return 
BGl_errorz00zz__errorz00(BgL_arg2052z00_1080, BGl_string3435z00zz__hashz00, 
BINT(BgL_arg2054z00_1082));}  else 
{ /* Llib/hash.scm 193 */
obj_t BgL_vz00_1083;
BgL_vz00_1083 = 
VECTOR_REF(BgL_opt1883z00_3669,
(int)(BgL_iz00_1046)); 
if(
(BgL_vz00_1083==BgL_k1z00_1045))
{ /* Llib/hash.scm 193 */
return 
BINT(
(BgL_iz00_1046+((long)1)));}  else 
{ 
long BgL_iz00_5013;
BgL_iz00_5013 = 
(BgL_iz00_1046+((long)2)); 
BgL_iz00_1046 = BgL_iz00_5013; 
goto BGl_search1885z00zz__hashz00;} } } } 
}



/* create-hashtable */
BGL_EXPORTED_DEF obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t BgL_eqtestz00_33, obj_t BgL_hashz00_34, obj_t BgL_maxzd2bucketzd2lengthz00_35, obj_t BgL_siza7eza7_36, obj_t BgL_weakz00_37)
{ AN_OBJECT;
{ /* Llib/hash.scm 193 */
{ /* Llib/hash.scm 199 */
long BgL_weakz00_2278;
if(
(BgL_weakz00_37==BGl_symbol3431z00zz__hashz00))
{ /* Llib/hash.scm 199 */
BgL_weakz00_2278 = ((long)1); }  else 
{ /* Llib/hash.scm 199 */
if(
(BgL_weakz00_37==BGl_symbol3433z00zz__hashz00))
{ /* Llib/hash.scm 199 */
BgL_weakz00_2278 = ((long)2); }  else 
{ /* Llib/hash.scm 199 */
if(
(BgL_weakz00_37==BGl_symbol3413z00zz__hashz00))
{ /* Llib/hash.scm 199 */
BgL_weakz00_2278 = ((long)0); }  else 
{ /* Llib/hash.scm 199 */
if(
CBOOL(BgL_weakz00_37))
{ /* Llib/hash.scm 199 */
BgL_weakz00_2278 = ((long)2); }  else 
{ /* Llib/hash.scm 199 */
BgL_weakz00_2278 = ((long)0); } } } } 
{ /* Llib/hash.scm 199 */
obj_t BgL_arg2059z00_2284;
{ /* Llib/hash.scm 199 */
int BgL_auxz00_5023;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5024;
if(
INTEGERP(BgL_siza7eza7_36))
{ /* Llib/hash.scm 199 */
BgL_auxz00_5024 = BgL_siza7eza7_36
; }  else 
{ 
obj_t BgL_auxz00_5027;
BgL_auxz00_5027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_siza7eza7_36); 
FAILURE(BgL_auxz00_5027,BFALSE,BFALSE);} 
BgL_auxz00_5023 = 
CINT(BgL_auxz00_5024); } 
BgL_arg2059z00_2284 = 
make_vector(BgL_auxz00_5023, BNIL); } 
{ /* Llib/hash.scm 199 */
obj_t BgL_newz00_2297;
BgL_newz00_2297 = 
create_struct(BGl_symbol3409z00zz__hashz00, 
(int)(((long)6))); 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5035;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5036;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2581z00_2304;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2877z00_3838;
BgL_aux2877z00_3838 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2877z00_3838))
{ /* Llib/hash.scm 199 */
BgL_res2581z00_2304 = BgL_aux2877z00_3838; }  else 
{ 
obj_t BgL_auxz00_5040;
BgL_auxz00_5040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2877z00_3838); 
FAILURE(BgL_auxz00_5040,BFALSE,BFALSE);} } 
BgL_auxz00_5036 = BgL_res2581z00_2304; } 
BgL_testz00_5035 = 
(BgL_auxz00_5036==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5035)
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5047;int BgL_auxz00_5045;
BgL_auxz00_5047 = 
BINT(BgL_weakz00_2278); 
BgL_auxz00_5045 = 
(int)(((long)5)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5045, BgL_auxz00_5047); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5051;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5052;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2582z00_2311;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2879z00_3840;
BgL_aux2879z00_3840 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2879z00_3840))
{ /* Llib/hash.scm 199 */
BgL_res2582z00_2311 = BgL_aux2879z00_3840; }  else 
{ 
obj_t BgL_auxz00_5056;
BgL_auxz00_5056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2879z00_3840); 
FAILURE(BgL_auxz00_5056,BFALSE,BFALSE);} } 
BgL_auxz00_5052 = BgL_res2582z00_2311; } 
BgL_testz00_5051 = 
(BgL_auxz00_5052==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5051)
{ /* Llib/hash.scm 199 */
int BgL_auxz00_5061;
BgL_auxz00_5061 = 
(int)(((long)4)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5061, BgL_hashz00_34); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5065;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5066;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2583z00_2318;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2881z00_3842;
BgL_aux2881z00_3842 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2881z00_3842))
{ /* Llib/hash.scm 199 */
BgL_res2583z00_2318 = BgL_aux2881z00_3842; }  else 
{ 
obj_t BgL_auxz00_5070;
BgL_auxz00_5070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2881z00_3842); 
FAILURE(BgL_auxz00_5070,BFALSE,BFALSE);} } 
BgL_auxz00_5066 = BgL_res2583z00_2318; } 
BgL_testz00_5065 = 
(BgL_auxz00_5066==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5065)
{ /* Llib/hash.scm 199 */
int BgL_auxz00_5075;
BgL_auxz00_5075 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5075, BgL_eqtestz00_33); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5079;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5080;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2584z00_2325;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2883z00_3844;
BgL_aux2883z00_3844 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2883z00_3844))
{ /* Llib/hash.scm 199 */
BgL_res2584z00_2325 = BgL_aux2883z00_3844; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2883z00_3844); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} } 
BgL_auxz00_5080 = BgL_res2584z00_2325; } 
BgL_testz00_5079 = 
(BgL_auxz00_5080==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5079)
{ /* Llib/hash.scm 199 */
int BgL_auxz00_5089;
BgL_auxz00_5089 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5089, BgL_arg2059z00_2284); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5093;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5094;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2585z00_2332;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2885z00_3846;
BgL_aux2885z00_3846 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2885z00_3846))
{ /* Llib/hash.scm 199 */
BgL_res2585z00_2332 = BgL_aux2885z00_3846; }  else 
{ 
obj_t BgL_auxz00_5098;
BgL_auxz00_5098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2885z00_3846); 
FAILURE(BgL_auxz00_5098,BFALSE,BFALSE);} } 
BgL_auxz00_5094 = BgL_res2585z00_2332; } 
BgL_testz00_5093 = 
(BgL_auxz00_5094==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5093)
{ /* Llib/hash.scm 199 */
int BgL_auxz00_5103;
BgL_auxz00_5103 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5103, BgL_maxzd2bucketzd2lengthz00_35); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
{ /* Llib/hash.scm 199 */
bool_t BgL_testz00_5107;
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5108;
{ /* Llib/hash.scm 199 */
obj_t BgL_res2586z00_2339;
{ /* Llib/hash.scm 199 */
obj_t BgL_aux2887z00_3848;
BgL_aux2887z00_3848 = 
STRUCT_KEY(BgL_newz00_2297); 
if(
SYMBOLP(BgL_aux2887z00_3848))
{ /* Llib/hash.scm 199 */
BgL_res2586z00_2339 = BgL_aux2887z00_3848; }  else 
{ 
obj_t BgL_auxz00_5112;
BgL_auxz00_5112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)6987)), BGl_string3428z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2887z00_3848); 
FAILURE(BgL_auxz00_5112,BFALSE,BFALSE);} } 
BgL_auxz00_5108 = BgL_res2586z00_2339; } 
BgL_testz00_5107 = 
(BgL_auxz00_5108==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5107)
{ /* Llib/hash.scm 199 */
obj_t BgL_auxz00_5119;int BgL_auxz00_5117;
BgL_auxz00_5119 = 
BINT(((long)0)); 
BgL_auxz00_5117 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_2297, BgL_auxz00_5117, BgL_auxz00_5119); }  else 
{ /* Llib/hash.scm 199 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_newz00_2297); } } 
return BgL_newz00_2297;} } } } 
}



/* hashtable? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t BgL_objz00_40)
{ AN_OBJECT;
{ /* Llib/hash.scm 209 */
if(
STRUCTP(BgL_objz00_40))
{ /* Llib/hash.scm 210 */
obj_t BgL_auxz00_5125;
{ /* Llib/hash.scm 210 */
obj_t BgL_res2587z00_2346;
{ /* Llib/hash.scm 210 */
obj_t BgL_aux2889z00_3850;
BgL_aux2889z00_3850 = 
STRUCT_KEY(BgL_objz00_40); 
if(
SYMBOLP(BgL_aux2889z00_3850))
{ /* Llib/hash.scm 210 */
BgL_res2587z00_2346 = BgL_aux2889z00_3850; }  else 
{ 
obj_t BgL_auxz00_5129;
BgL_auxz00_5129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)7464)), BGl_string3436z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2889z00_3850); 
FAILURE(BgL_auxz00_5129,BFALSE,BFALSE);} } 
BgL_auxz00_5125 = BgL_res2587z00_2346; } 
return 
(BgL_auxz00_5125==BGl_symbol3409z00zz__hashz00);}  else 
{ /* Llib/hash.scm 210 */
return ((bool_t)0);} } 
}



/* _hashtable? */
obj_t BGl__hashtablezf3zf3zz__hashz00(obj_t BgL_envz00_3613, obj_t BgL_objz00_3614)
{ AN_OBJECT;
{ /* Llib/hash.scm 209 */
return 
BBOOL(
BGl_hashtablezf3zf3zz__hashz00(BgL_objz00_3614));} 
}



/* hashtable-weak-keys? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t BgL_tablez00_42)
{ AN_OBJECT;
{ /* Llib/hash.scm 221 */
{ /* Llib/hash.scm 222 */
bool_t BgL_testz00_5136;
{ /* Llib/hash.scm 222 */
long BgL_arg2068z00_1099;
{ /* Llib/hash.scm 222 */
obj_t BgL_arg2070z00_1101;
{ /* Llib/hash.scm 222 */
bool_t BgL_testz00_5137;
{ /* Llib/hash.scm 222 */
obj_t BgL_auxz00_5138;
{ /* Llib/hash.scm 222 */
obj_t BgL_res2589z00_2363;
{ /* Llib/hash.scm 222 */
obj_t BgL_aux2891z00_3852;
BgL_aux2891z00_3852 = 
STRUCT_KEY(BgL_tablez00_42); 
if(
SYMBOLP(BgL_aux2891z00_3852))
{ /* Llib/hash.scm 222 */
BgL_res2589z00_2363 = BgL_aux2891z00_3852; }  else 
{ 
obj_t BgL_auxz00_5142;
BgL_auxz00_5142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8104)), BGl_string3437z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2891z00_3852); 
FAILURE(BgL_auxz00_5142,BFALSE,BFALSE);} } 
BgL_auxz00_5138 = BgL_res2589z00_2363; } 
BgL_testz00_5137 = 
(BgL_auxz00_5138==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5137)
{ /* Llib/hash.scm 222 */
int BgL_auxz00_5147;
BgL_auxz00_5147 = 
(int)(((long)5)); 
BgL_arg2070z00_1101 = 
STRUCT_REF(BgL_tablez00_42, BgL_auxz00_5147); }  else 
{ /* Llib/hash.scm 222 */
BgL_arg2070z00_1101 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_42); } } 
{ /* Llib/hash.scm 222 */
long BgL_yz00_2365;
{ /* Llib/hash.scm 222 */
obj_t BgL_auxz00_5151;
if(
INTEGERP(BgL_arg2070z00_1101))
{ /* Llib/hash.scm 222 */
BgL_auxz00_5151 = BgL_arg2070z00_1101
; }  else 
{ 
obj_t BgL_auxz00_5154;
BgL_auxz00_5154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8126)), BGl_string3437z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2070z00_1101); 
FAILURE(BgL_auxz00_5154,BFALSE,BFALSE);} 
BgL_yz00_2365 = 
(long)CINT(BgL_auxz00_5151); } 
BgL_arg2068z00_1099 = 
(((long)1) & BgL_yz00_2365); } } 
BgL_testz00_5136 = 
(((long)0)==BgL_arg2068z00_1099); } 
if(BgL_testz00_5136)
{ /* Llib/hash.scm 222 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 222 */
return ((bool_t)1);} } } 
}



/* _hashtable-weak-keys? */
obj_t BGl__hashtablezd2weakzd2keyszf3zf3zz__hashz00(obj_t BgL_envz00_3615, obj_t BgL_tablez00_3616)
{ AN_OBJECT;
{ /* Llib/hash.scm 221 */
{ /* Llib/hash.scm 222 */
bool_t BgL_auxz00_5161;
{ /* Llib/hash.scm 222 */
obj_t BgL_auxz00_5162;
if(
STRUCTP(BgL_tablez00_3616))
{ /* Llib/hash.scm 222 */
BgL_auxz00_5162 = BgL_tablez00_3616
; }  else 
{ 
obj_t BgL_auxz00_5165;
BgL_auxz00_5165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8071)), BGl_string3439z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3616); 
FAILURE(BgL_auxz00_5165,BFALSE,BFALSE);} 
BgL_auxz00_5161 = 
BGl_hashtablezd2weakzd2keyszf3zf3zz__hashz00(BgL_auxz00_5162); } 
return 
BBOOL(BgL_auxz00_5161);} } 
}



/* hashtable-weak-data? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t BgL_tablez00_43)
{ AN_OBJECT;
{ /* Llib/hash.scm 227 */
{ /* Llib/hash.scm 228 */
bool_t BgL_testz00_5171;
{ /* Llib/hash.scm 228 */
long BgL_arg2073z00_1104;
{ /* Llib/hash.scm 228 */
obj_t BgL_arg2077z00_1106;
{ /* Llib/hash.scm 228 */
bool_t BgL_testz00_5172;
{ /* Llib/hash.scm 228 */
obj_t BgL_auxz00_5173;
{ /* Llib/hash.scm 228 */
obj_t BgL_res2590z00_2373;
{ /* Llib/hash.scm 228 */
obj_t BgL_aux2897z00_3858;
BgL_aux2897z00_3858 = 
STRUCT_KEY(BgL_tablez00_43); 
if(
SYMBOLP(BgL_aux2897z00_3858))
{ /* Llib/hash.scm 228 */
BgL_res2590z00_2373 = BgL_aux2897z00_3858; }  else 
{ 
obj_t BgL_auxz00_5177;
BgL_auxz00_5177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8442)), BGl_string3441z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2897z00_3858); 
FAILURE(BgL_auxz00_5177,BFALSE,BFALSE);} } 
BgL_auxz00_5173 = BgL_res2590z00_2373; } 
BgL_testz00_5172 = 
(BgL_auxz00_5173==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5172)
{ /* Llib/hash.scm 228 */
int BgL_auxz00_5182;
BgL_auxz00_5182 = 
(int)(((long)5)); 
BgL_arg2077z00_1106 = 
STRUCT_REF(BgL_tablez00_43, BgL_auxz00_5182); }  else 
{ /* Llib/hash.scm 228 */
BgL_arg2077z00_1106 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_43); } } 
{ /* Llib/hash.scm 228 */
long BgL_yz00_2375;
{ /* Llib/hash.scm 228 */
obj_t BgL_auxz00_5186;
if(
INTEGERP(BgL_arg2077z00_1106))
{ /* Llib/hash.scm 228 */
BgL_auxz00_5186 = BgL_arg2077z00_1106
; }  else 
{ 
obj_t BgL_auxz00_5189;
BgL_auxz00_5189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8464)), BGl_string3441z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2077z00_1106); 
FAILURE(BgL_auxz00_5189,BFALSE,BFALSE);} 
BgL_yz00_2375 = 
(long)CINT(BgL_auxz00_5186); } 
BgL_arg2073z00_1104 = 
(((long)2) & BgL_yz00_2375); } } 
BgL_testz00_5171 = 
(((long)0)==BgL_arg2073z00_1104); } 
if(BgL_testz00_5171)
{ /* Llib/hash.scm 228 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 228 */
return ((bool_t)1);} } } 
}



/* _hashtable-weak-data? */
obj_t BGl__hashtablezd2weakzd2datazf3zf3zz__hashz00(obj_t BgL_envz00_3617, obj_t BgL_tablez00_3618)
{ AN_OBJECT;
{ /* Llib/hash.scm 227 */
{ /* Llib/hash.scm 228 */
bool_t BgL_auxz00_5196;
{ /* Llib/hash.scm 228 */
obj_t BgL_auxz00_5197;
if(
STRUCTP(BgL_tablez00_3618))
{ /* Llib/hash.scm 228 */
BgL_auxz00_5197 = BgL_tablez00_3618
; }  else 
{ 
obj_t BgL_auxz00_5200;
BgL_auxz00_5200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8409)), BGl_string3442z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3618); 
FAILURE(BgL_auxz00_5200,BFALSE,BFALSE);} 
BgL_auxz00_5196 = 
BGl_hashtablezd2weakzd2datazf3zf3zz__hashz00(BgL_auxz00_5197); } 
return 
BBOOL(BgL_auxz00_5196);} } 
}



/* hashtable-size */
BGL_EXPORTED_DEF long BGl_hashtablezd2siza7ez75zz__hashz00(obj_t BgL_tablez00_44)
{ AN_OBJECT;
{ /* Llib/hash.scm 233 */
{ /* Llib/hash.scm 234 */
bool_t BgL_testz00_5206;
{ /* Llib/hash.scm 234 */
obj_t BgL_auxz00_5207;
{ /* Llib/hash.scm 234 */
obj_t BgL_res2591z00_2383;
{ /* Llib/hash.scm 234 */
obj_t BgL_aux2903z00_3864;
BgL_aux2903z00_3864 = 
STRUCT_KEY(BgL_tablez00_44); 
if(
SYMBOLP(BgL_aux2903z00_3864))
{ /* Llib/hash.scm 234 */
BgL_res2591z00_2383 = BgL_aux2903z00_3864; }  else 
{ 
obj_t BgL_auxz00_5211;
BgL_auxz00_5211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8741)), BGl_string3443z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2903z00_3864); 
FAILURE(BgL_auxz00_5211,BFALSE,BFALSE);} } 
BgL_auxz00_5207 = BgL_res2591z00_2383; } 
BgL_testz00_5206 = 
(BgL_auxz00_5207==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5206)
{ /* Llib/hash.scm 234 */
obj_t BgL_auxz00_5216;
{ /* Llib/hash.scm 234 */
obj_t BgL_aux2905z00_3866;
{ /* Llib/hash.scm 234 */
int BgL_auxz00_5217;
BgL_auxz00_5217 = 
(int)(((long)0)); 
BgL_aux2905z00_3866 = 
STRUCT_REF(BgL_tablez00_44, BgL_auxz00_5217); } 
if(
INTEGERP(BgL_aux2905z00_3866))
{ /* Llib/hash.scm 234 */
BgL_auxz00_5216 = BgL_aux2905z00_3866
; }  else 
{ 
obj_t BgL_auxz00_5222;
BgL_auxz00_5222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8741)), BGl_string3443z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2905z00_3866); 
FAILURE(BgL_auxz00_5222,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_5216);}  else 
{ /* Llib/hash.scm 234 */
obj_t BgL_auxz00_5227;
{ /* Llib/hash.scm 234 */
obj_t BgL_aux2907z00_3868;
BgL_aux2907z00_3868 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_44); 
if(
INTEGERP(BgL_aux2907z00_3868))
{ /* Llib/hash.scm 234 */
BgL_auxz00_5227 = BgL_aux2907z00_3868
; }  else 
{ 
obj_t BgL_auxz00_5231;
BgL_auxz00_5231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8741)), BGl_string3443z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2907z00_3868); 
FAILURE(BgL_auxz00_5231,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_5227);} } } 
}



/* _hashtable-size */
obj_t BGl__hashtablezd2siza7ez75zz__hashz00(obj_t BgL_envz00_3619, obj_t BgL_tablez00_3620)
{ AN_OBJECT;
{ /* Llib/hash.scm 233 */
{ /* Llib/hash.scm 234 */
long BgL_auxz00_5236;
{ /* Llib/hash.scm 234 */
obj_t BgL_auxz00_5237;
if(
STRUCTP(BgL_tablez00_3620))
{ /* Llib/hash.scm 234 */
BgL_auxz00_5237 = BgL_tablez00_3620
; }  else 
{ 
obj_t BgL_auxz00_5240;
BgL_auxz00_5240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)8741)), BGl_string3444z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3620); 
FAILURE(BgL_auxz00_5240,BFALSE,BFALSE);} 
BgL_auxz00_5236 = 
BGl_hashtablezd2siza7ez75zz__hashz00(BgL_auxz00_5237); } 
return 
BINT(BgL_auxz00_5236);} } 
}



/* hashtable->vector */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3vectorz31zz__hashz00(obj_t BgL_tablez00_45)
{ AN_OBJECT;
{ /* Llib/hash.scm 239 */
{ /* Llib/hash.scm 240 */
bool_t BgL_testz00_5246;
{ /* Llib/hash.scm 240 */
bool_t BgL_res2593z00_2397;
{ /* Llib/hash.scm 240 */
bool_t BgL_testz00_5247;
{ /* Llib/hash.scm 240 */
obj_t BgL_arg2065z00_2388;
{ /* Llib/hash.scm 240 */
bool_t BgL_testz00_5248;
{ /* Llib/hash.scm 240 */
obj_t BgL_auxz00_5249;
{ /* Llib/hash.scm 240 */
obj_t BgL_res2592z00_2394;
{ /* Llib/hash.scm 240 */
obj_t BgL_aux2911z00_3872;
BgL_aux2911z00_3872 = 
STRUCT_KEY(BgL_tablez00_45); 
if(
SYMBOLP(BgL_aux2911z00_3872))
{ /* Llib/hash.scm 240 */
BgL_res2592z00_2394 = BgL_aux2911z00_3872; }  else 
{ 
obj_t BgL_auxz00_5253;
BgL_auxz00_5253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9038)), BGl_string3445z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2911z00_3872); 
FAILURE(BgL_auxz00_5253,BFALSE,BFALSE);} } 
BgL_auxz00_5249 = BgL_res2592z00_2394; } 
BgL_testz00_5248 = 
(BgL_auxz00_5249==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5248)
{ /* Llib/hash.scm 240 */
int BgL_auxz00_5258;
BgL_auxz00_5258 = 
(int)(((long)5)); 
BgL_arg2065z00_2388 = 
STRUCT_REF(BgL_tablez00_45, BgL_auxz00_5258); }  else 
{ /* Llib/hash.scm 240 */
BgL_arg2065z00_2388 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_45); } } 
{ /* Llib/hash.scm 240 */
long BgL_n2z00_2396;
{ /* Llib/hash.scm 240 */
obj_t BgL_auxz00_5262;
if(
INTEGERP(BgL_arg2065z00_2388))
{ /* Llib/hash.scm 240 */
BgL_auxz00_5262 = BgL_arg2065z00_2388
; }  else 
{ 
obj_t BgL_auxz00_5265;
BgL_auxz00_5265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9038)), BGl_string3445z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2388); 
FAILURE(BgL_auxz00_5265,BFALSE,BFALSE);} 
BgL_n2z00_2396 = 
(long)CINT(BgL_auxz00_5262); } 
BgL_testz00_5247 = 
(((long)0)==BgL_n2z00_2396); } } 
if(BgL_testz00_5247)
{ /* Llib/hash.scm 240 */
BgL_res2593z00_2397 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 240 */
BgL_res2593z00_2397 = ((bool_t)1); } } 
BgL_testz00_5246 = BgL_res2593z00_2397; } 
if(BgL_testz00_5246)
{ /* Llib/hash.scm 240 */
return 
BGl_weakzd2hashtablezd2ze3vectorze3zz__weakhashz00(BgL_tablez00_45);}  else 
{ /* Llib/hash.scm 240 */
return 
BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(BgL_tablez00_45);} } } 
}



/* _hashtable->vector */
obj_t BGl__hashtablezd2ze3vectorz31zz__hashz00(obj_t BgL_envz00_3621, obj_t BgL_tablez00_3622)
{ AN_OBJECT;
{ /* Llib/hash.scm 239 */
{ /* Llib/hash.scm 240 */
obj_t BgL_auxz00_5273;
if(
STRUCTP(BgL_tablez00_3622))
{ /* Llib/hash.scm 240 */
BgL_auxz00_5273 = BgL_tablez00_3622
; }  else 
{ 
obj_t BgL_auxz00_5276;
BgL_auxz00_5276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9034)), BGl_string3446z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3622); 
FAILURE(BgL_auxz00_5276,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2ze3vectorz31zz__hashz00(BgL_auxz00_5273);} } 
}



/* plain-hashtable->vector */
obj_t BGl_plainzd2hashtablezd2ze3vectorze3zz__hashz00(obj_t BgL_tablez00_46)
{ AN_OBJECT;
{ /* Llib/hash.scm 247 */
{ /* Llib/hash.scm 248 */
obj_t BgL_vecz00_1108;
{ /* Llib/hash.scm 248 */
long BgL_arg2089z00_1128;
{ /* Llib/hash.scm 248 */
long BgL_res2595z00_2405;
{ /* Llib/hash.scm 248 */
bool_t BgL_testz00_5281;
{ /* Llib/hash.scm 248 */
obj_t BgL_auxz00_5282;
{ /* Llib/hash.scm 248 */
obj_t BgL_res2594z00_2404;
{ /* Llib/hash.scm 248 */
obj_t BgL_aux2917z00_3878;
BgL_aux2917z00_3878 = 
STRUCT_KEY(BgL_tablez00_46); 
if(
SYMBOLP(BgL_aux2917z00_3878))
{ /* Llib/hash.scm 248 */
BgL_res2594z00_2404 = BgL_aux2917z00_3878; }  else 
{ 
obj_t BgL_auxz00_5286;
BgL_auxz00_5286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9440)), BGl_string3447z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2917z00_3878); 
FAILURE(BgL_auxz00_5286,BFALSE,BFALSE);} } 
BgL_auxz00_5282 = BgL_res2594z00_2404; } 
BgL_testz00_5281 = 
(BgL_auxz00_5282==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5281)
{ /* Llib/hash.scm 248 */
obj_t BgL_auxz00_5291;
{ /* Llib/hash.scm 248 */
obj_t BgL_aux2919z00_3880;
{ /* Llib/hash.scm 248 */
int BgL_auxz00_5292;
BgL_auxz00_5292 = 
(int)(((long)0)); 
BgL_aux2919z00_3880 = 
STRUCT_REF(BgL_tablez00_46, BgL_auxz00_5292); } 
if(
INTEGERP(BgL_aux2919z00_3880))
{ /* Llib/hash.scm 248 */
BgL_auxz00_5291 = BgL_aux2919z00_3880
; }  else 
{ 
obj_t BgL_auxz00_5297;
BgL_auxz00_5297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9440)), BGl_string3447z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2919z00_3880); 
FAILURE(BgL_auxz00_5297,BFALSE,BFALSE);} } 
BgL_res2595z00_2405 = 
(long)CINT(BgL_auxz00_5291); }  else 
{ /* Llib/hash.scm 248 */
obj_t BgL_auxz00_5302;
{ /* Llib/hash.scm 248 */
obj_t BgL_aux2921z00_3882;
BgL_aux2921z00_3882 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_46); 
if(
INTEGERP(BgL_aux2921z00_3882))
{ /* Llib/hash.scm 248 */
BgL_auxz00_5302 = BgL_aux2921z00_3882
; }  else 
{ 
obj_t BgL_auxz00_5306;
BgL_auxz00_5306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9440)), BGl_string3447z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2921z00_3882); 
FAILURE(BgL_auxz00_5306,BFALSE,BFALSE);} } 
BgL_res2595z00_2405 = 
(long)CINT(BgL_auxz00_5302); } } 
BgL_arg2089z00_1128 = BgL_res2595z00_2405; } 
BgL_vecz00_1108 = 
make_vector(
(int)(BgL_arg2089z00_1128), BUNSPEC); } 
{ /* Llib/hash.scm 248 */
obj_t BgL_bucketsz00_1109;
{ /* Llib/hash.scm 249 */
bool_t BgL_testz00_5313;
{ /* Llib/hash.scm 249 */
obj_t BgL_auxz00_5314;
{ /* Llib/hash.scm 249 */
obj_t BgL_res2597z00_2412;
{ /* Llib/hash.scm 249 */
obj_t BgL_aux2923z00_3885;
BgL_aux2923z00_3885 = 
STRUCT_KEY(BgL_tablez00_46); 
if(
SYMBOLP(BgL_aux2923z00_3885))
{ /* Llib/hash.scm 249 */
BgL_res2597z00_2412 = BgL_aux2923z00_3885; }  else 
{ 
obj_t BgL_auxz00_5318;
BgL_auxz00_5318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9477)), BGl_string3447z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2923z00_3885); 
FAILURE(BgL_auxz00_5318,BFALSE,BFALSE);} } 
BgL_auxz00_5314 = BgL_res2597z00_2412; } 
BgL_testz00_5313 = 
(BgL_auxz00_5314==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5313)
{ /* Llib/hash.scm 249 */
int BgL_auxz00_5323;
BgL_auxz00_5323 = 
(int)(((long)2)); 
BgL_bucketsz00_1109 = 
STRUCT_REF(BgL_tablez00_46, BgL_auxz00_5323); }  else 
{ /* Llib/hash.scm 249 */
BgL_bucketsz00_1109 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_46); } } 
{ /* Llib/hash.scm 249 */
int BgL_bucketszd2lenzd2_1110;
{ /* Llib/hash.scm 250 */
obj_t BgL_vectorz00_2413;
if(
VECTORP(BgL_bucketsz00_1109))
{ /* Llib/hash.scm 250 */
BgL_vectorz00_2413 = BgL_bucketsz00_1109; }  else 
{ 
obj_t BgL_auxz00_5329;
BgL_auxz00_5329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9536)), BGl_string3447z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1109); 
FAILURE(BgL_auxz00_5329,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1110 = 
VECTOR_LENGTH(BgL_vectorz00_2413); } 
{ /* Llib/hash.scm 250 */

{ 
long BgL_iz00_1112;long BgL_wz00_1113;
BgL_iz00_1112 = ((long)0); 
BgL_wz00_1113 = ((long)0); 
BgL_zc3anonymousza32079ze3z83_1114:
if(
(BgL_iz00_1112==
(long)(BgL_bucketszd2lenzd2_1110)))
{ /* Llib/hash.scm 253 */
return BgL_vecz00_1108;}  else 
{ /* Llib/hash.scm 255 */
obj_t BgL_g1837z00_1116;
{ /* Llib/hash.scm 255 */
obj_t BgL_vectorz00_2416;int BgL_kz00_2417;
BgL_vectorz00_2416 = BgL_bucketsz00_1109; 
BgL_kz00_2417 = 
(int)(BgL_iz00_1112); 
{ /* Llib/hash.scm 255 */
int BgL_l2721z00_3681;
BgL_l2721z00_3681 = 
VECTOR_LENGTH(BgL_vectorz00_2416); 
if(
BOUND_CHECK(BgL_kz00_2417, BgL_l2721z00_3681))
{ /* Llib/hash.scm 255 */
BgL_g1837z00_1116 = 
VECTOR_REF(BgL_vectorz00_2416,BgL_kz00_2417); }  else 
{ 
obj_t BgL_auxz00_5342;
BgL_auxz00_5342 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9641)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2417), BgL_vectorz00_2416); 
FAILURE(BgL_auxz00_5342,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1118;long BgL_wz00_1119;
BgL_bucketz00_1118 = BgL_g1837z00_1116; 
BgL_wz00_1119 = BgL_wz00_1113; 
BgL_zc3anonymousza32081ze3z83_1120:
if(
NULLP(BgL_bucketz00_1118))
{ 
long BgL_wz00_5351;long BgL_iz00_5349;
BgL_iz00_5349 = 
(BgL_iz00_1112+((long)1)); 
BgL_wz00_5351 = BgL_wz00_1119; 
BgL_wz00_1113 = BgL_wz00_5351; 
BgL_iz00_1112 = BgL_iz00_5349; 
goto BgL_zc3anonymousza32079ze3z83_1114;}  else 
{ /* Llib/hash.scm 257 */
{ /* Llib/hash.scm 260 */
obj_t BgL_arg2084z00_1123;
{ /* Llib/hash.scm 260 */
obj_t BgL_pairz00_2421;
if(
PAIRP(BgL_bucketz00_1118))
{ /* Llib/hash.scm 260 */
BgL_pairz00_2421 = BgL_bucketz00_1118; }  else 
{ 
obj_t BgL_auxz00_5354;
BgL_auxz00_5354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9768)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1118); 
FAILURE(BgL_auxz00_5354,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 260 */
obj_t BgL_pairz00_2424;
{ /* Llib/hash.scm 260 */
obj_t BgL_aux2931z00_3893;
BgL_aux2931z00_3893 = 
CAR(BgL_pairz00_2421); 
if(
PAIRP(BgL_aux2931z00_3893))
{ /* Llib/hash.scm 260 */
BgL_pairz00_2424 = BgL_aux2931z00_3893; }  else 
{ 
obj_t BgL_auxz00_5361;
BgL_auxz00_5361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9762)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2931z00_3893); 
FAILURE(BgL_auxz00_5361,BFALSE,BFALSE);} } 
BgL_arg2084z00_1123 = 
CDR(BgL_pairz00_2424); } } 
{ /* Llib/hash.scm 260 */
int BgL_kz00_2426;
BgL_kz00_2426 = 
(int)(BgL_wz00_1119); 
{ /* Llib/hash.scm 260 */
int BgL_l2725z00_3685;
BgL_l2725z00_3685 = 
VECTOR_LENGTH(BgL_vecz00_1108); 
if(
BOUND_CHECK(BgL_kz00_2426, BgL_l2725z00_3685))
{ /* Llib/hash.scm 260 */
VECTOR_SET(BgL_vecz00_1108,BgL_kz00_2426,BgL_arg2084z00_1123); }  else 
{ 
obj_t BgL_auxz00_5371;
BgL_auxz00_5371 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)9743)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2426), BgL_vecz00_1108); 
FAILURE(BgL_auxz00_5371,BFALSE,BFALSE);} } } } 
{ 
long BgL_wz00_5378;obj_t BgL_bucketz00_5376;
BgL_bucketz00_5376 = 
CDR(BgL_bucketz00_1118); 
BgL_wz00_5378 = 
(BgL_wz00_1119+((long)1)); 
BgL_wz00_1119 = BgL_wz00_5378; 
BgL_bucketz00_1118 = BgL_bucketz00_5376; 
goto BgL_zc3anonymousza32081ze3z83_1120;} } } } } } } } } } 
}



/* hashtable->list */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t BgL_tablez00_47)
{ AN_OBJECT;
{ /* Llib/hash.scm 266 */
{ /* Llib/hash.scm 267 */
bool_t BgL_testz00_5380;
{ /* Llib/hash.scm 267 */
bool_t BgL_res2599z00_2444;
{ /* Llib/hash.scm 267 */
bool_t BgL_testz00_5381;
{ /* Llib/hash.scm 267 */
obj_t BgL_arg2065z00_2435;
{ /* Llib/hash.scm 267 */
bool_t BgL_testz00_5382;
{ /* Llib/hash.scm 267 */
obj_t BgL_auxz00_5383;
{ /* Llib/hash.scm 267 */
obj_t BgL_res2598z00_2441;
{ /* Llib/hash.scm 267 */
obj_t BgL_aux2935z00_3897;
BgL_aux2935z00_3897 = 
STRUCT_KEY(BgL_tablez00_47); 
if(
SYMBOLP(BgL_aux2935z00_3897))
{ /* Llib/hash.scm 267 */
BgL_res2598z00_2441 = BgL_aux2935z00_3897; }  else 
{ 
obj_t BgL_auxz00_5387;
BgL_auxz00_5387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10093)), BGl_string3450z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2935z00_3897); 
FAILURE(BgL_auxz00_5387,BFALSE,BFALSE);} } 
BgL_auxz00_5383 = BgL_res2598z00_2441; } 
BgL_testz00_5382 = 
(BgL_auxz00_5383==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5382)
{ /* Llib/hash.scm 267 */
int BgL_auxz00_5392;
BgL_auxz00_5392 = 
(int)(((long)5)); 
BgL_arg2065z00_2435 = 
STRUCT_REF(BgL_tablez00_47, BgL_auxz00_5392); }  else 
{ /* Llib/hash.scm 267 */
BgL_arg2065z00_2435 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_47); } } 
{ /* Llib/hash.scm 267 */
long BgL_n2z00_2443;
{ /* Llib/hash.scm 267 */
obj_t BgL_auxz00_5396;
if(
INTEGERP(BgL_arg2065z00_2435))
{ /* Llib/hash.scm 267 */
BgL_auxz00_5396 = BgL_arg2065z00_2435
; }  else 
{ 
obj_t BgL_auxz00_5399;
BgL_auxz00_5399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10093)), BGl_string3450z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2435); 
FAILURE(BgL_auxz00_5399,BFALSE,BFALSE);} 
BgL_n2z00_2443 = 
(long)CINT(BgL_auxz00_5396); } 
BgL_testz00_5381 = 
(((long)0)==BgL_n2z00_2443); } } 
if(BgL_testz00_5381)
{ /* Llib/hash.scm 267 */
BgL_res2599z00_2444 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 267 */
BgL_res2599z00_2444 = ((bool_t)1); } } 
BgL_testz00_5380 = BgL_res2599z00_2444; } 
if(BgL_testz00_5380)
{ /* Llib/hash.scm 267 */
return 
BGl_weakzd2hashtablezd2ze3listze3zz__weakhashz00(BgL_tablez00_47);}  else 
{ /* Llib/hash.scm 267 */
obj_t BgL_aux2939z00_3901;
BgL_aux2939z00_3901 = 
BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(BgL_tablez00_47); 
{ /* Llib/hash.scm 267 */
bool_t BgL_testz00_5407;
if(
PAIRP(BgL_aux2939z00_3901))
{ /* Llib/hash.scm 267 */
BgL_testz00_5407 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 267 */
BgL_testz00_5407 = 
NULLP(BgL_aux2939z00_3901)
; } 
if(BgL_testz00_5407)
{ /* Llib/hash.scm 267 */
return BgL_aux2939z00_3901;}  else 
{ 
obj_t BgL_auxz00_5411;
BgL_auxz00_5411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10089)), BGl_string3450z00zz__hashz00, BGl_string3451z00zz__hashz00, BgL_aux2939z00_3901); 
FAILURE(BgL_auxz00_5411,BFALSE,BFALSE);} } } } } 
}



/* _hashtable->list */
obj_t BGl__hashtablezd2ze3listz31zz__hashz00(obj_t BgL_envz00_3623, obj_t BgL_tablez00_3624)
{ AN_OBJECT;
{ /* Llib/hash.scm 266 */
{ /* Llib/hash.scm 267 */
obj_t BgL_auxz00_5415;
if(
STRUCTP(BgL_tablez00_3624))
{ /* Llib/hash.scm 267 */
BgL_auxz00_5415 = BgL_tablez00_3624
; }  else 
{ 
obj_t BgL_auxz00_5418;
BgL_auxz00_5418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10089)), BGl_string3452z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3624); 
FAILURE(BgL_auxz00_5418,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2ze3listz31zz__hashz00(BgL_auxz00_5415);} } 
}



/* plain-hashtable->list */
obj_t BGl_plainzd2hashtablezd2ze3listze3zz__hashz00(obj_t BgL_tablez00_48)
{ AN_OBJECT;
{ /* Llib/hash.scm 274 */
{ /* Llib/hash.scm 275 */
obj_t BgL_vecz00_1131;
{ /* Llib/hash.scm 275 */
long BgL_arg2100z00_1152;
{ /* Llib/hash.scm 275 */
long BgL_res2601z00_2452;
{ /* Llib/hash.scm 275 */
bool_t BgL_testz00_5423;
{ /* Llib/hash.scm 275 */
obj_t BgL_auxz00_5424;
{ /* Llib/hash.scm 275 */
obj_t BgL_res2600z00_2451;
{ /* Llib/hash.scm 275 */
obj_t BgL_aux2943z00_3905;
BgL_aux2943z00_3905 = 
STRUCT_KEY(BgL_tablez00_48); 
if(
SYMBOLP(BgL_aux2943z00_3905))
{ /* Llib/hash.scm 275 */
BgL_res2600z00_2451 = BgL_aux2943z00_3905; }  else 
{ 
obj_t BgL_auxz00_5428;
BgL_auxz00_5428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10489)), BGl_string3453z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2943z00_3905); 
FAILURE(BgL_auxz00_5428,BFALSE,BFALSE);} } 
BgL_auxz00_5424 = BgL_res2600z00_2451; } 
BgL_testz00_5423 = 
(BgL_auxz00_5424==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5423)
{ /* Llib/hash.scm 275 */
obj_t BgL_auxz00_5433;
{ /* Llib/hash.scm 275 */
obj_t BgL_aux2945z00_3907;
{ /* Llib/hash.scm 275 */
int BgL_auxz00_5434;
BgL_auxz00_5434 = 
(int)(((long)0)); 
BgL_aux2945z00_3907 = 
STRUCT_REF(BgL_tablez00_48, BgL_auxz00_5434); } 
if(
INTEGERP(BgL_aux2945z00_3907))
{ /* Llib/hash.scm 275 */
BgL_auxz00_5433 = BgL_aux2945z00_3907
; }  else 
{ 
obj_t BgL_auxz00_5439;
BgL_auxz00_5439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10489)), BGl_string3453z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2945z00_3907); 
FAILURE(BgL_auxz00_5439,BFALSE,BFALSE);} } 
BgL_res2601z00_2452 = 
(long)CINT(BgL_auxz00_5433); }  else 
{ /* Llib/hash.scm 275 */
obj_t BgL_auxz00_5444;
{ /* Llib/hash.scm 275 */
obj_t BgL_aux2947z00_3909;
BgL_aux2947z00_3909 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_48); 
if(
INTEGERP(BgL_aux2947z00_3909))
{ /* Llib/hash.scm 275 */
BgL_auxz00_5444 = BgL_aux2947z00_3909
; }  else 
{ 
obj_t BgL_auxz00_5448;
BgL_auxz00_5448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10489)), BGl_string3453z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2947z00_3909); 
FAILURE(BgL_auxz00_5448,BFALSE,BFALSE);} } 
BgL_res2601z00_2452 = 
(long)CINT(BgL_auxz00_5444); } } 
BgL_arg2100z00_1152 = BgL_res2601z00_2452; } 
BgL_vecz00_1131 = 
make_vector(
(int)(BgL_arg2100z00_1152), BUNSPEC); } 
{ /* Llib/hash.scm 275 */
obj_t BgL_bucketsz00_1132;
{ /* Llib/hash.scm 276 */
bool_t BgL_testz00_5455;
{ /* Llib/hash.scm 276 */
obj_t BgL_auxz00_5456;
{ /* Llib/hash.scm 276 */
obj_t BgL_res2603z00_2459;
{ /* Llib/hash.scm 276 */
obj_t BgL_aux2949z00_3912;
BgL_aux2949z00_3912 = 
STRUCT_KEY(BgL_tablez00_48); 
if(
SYMBOLP(BgL_aux2949z00_3912))
{ /* Llib/hash.scm 276 */
BgL_res2603z00_2459 = BgL_aux2949z00_3912; }  else 
{ 
obj_t BgL_auxz00_5460;
BgL_auxz00_5460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10526)), BGl_string3453z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2949z00_3912); 
FAILURE(BgL_auxz00_5460,BFALSE,BFALSE);} } 
BgL_auxz00_5456 = BgL_res2603z00_2459; } 
BgL_testz00_5455 = 
(BgL_auxz00_5456==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5455)
{ /* Llib/hash.scm 276 */
int BgL_auxz00_5465;
BgL_auxz00_5465 = 
(int)(((long)2)); 
BgL_bucketsz00_1132 = 
STRUCT_REF(BgL_tablez00_48, BgL_auxz00_5465); }  else 
{ /* Llib/hash.scm 276 */
BgL_bucketsz00_1132 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_48); } } 
{ /* Llib/hash.scm 276 */
int BgL_bucketszd2lenzd2_1133;
{ /* Llib/hash.scm 277 */
obj_t BgL_vectorz00_2460;
if(
VECTORP(BgL_bucketsz00_1132))
{ /* Llib/hash.scm 277 */
BgL_vectorz00_2460 = BgL_bucketsz00_1132; }  else 
{ 
obj_t BgL_auxz00_5471;
BgL_auxz00_5471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10585)), BGl_string3453z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1132); 
FAILURE(BgL_auxz00_5471,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1133 = 
VECTOR_LENGTH(BgL_vectorz00_2460); } 
{ /* Llib/hash.scm 277 */

{ 
long BgL_iz00_1136;obj_t BgL_resz00_1137;
BgL_iz00_1136 = ((long)0); 
BgL_resz00_1137 = BNIL; 
BgL_zc3anonymousza32092ze3z83_1138:
if(
(BgL_iz00_1136==
(long)(BgL_bucketszd2lenzd2_1133)))
{ /* Llib/hash.scm 280 */
return BgL_resz00_1137;}  else 
{ /* Llib/hash.scm 282 */
obj_t BgL_g1839z00_1140;
{ /* Llib/hash.scm 282 */
obj_t BgL_vectorz00_2463;int BgL_kz00_2464;
BgL_vectorz00_2463 = BgL_bucketsz00_1132; 
BgL_kz00_2464 = 
(int)(BgL_iz00_1136); 
{ /* Llib/hash.scm 282 */
int BgL_l2729z00_3689;
BgL_l2729z00_3689 = 
VECTOR_LENGTH(BgL_vectorz00_2463); 
if(
BOUND_CHECK(BgL_kz00_2464, BgL_l2729z00_3689))
{ /* Llib/hash.scm 282 */
BgL_g1839z00_1140 = 
VECTOR_REF(BgL_vectorz00_2463,BgL_kz00_2464); }  else 
{ 
obj_t BgL_auxz00_5484;
BgL_auxz00_5484 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10694)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2464), BgL_vectorz00_2463); 
FAILURE(BgL_auxz00_5484,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1142;obj_t BgL_resz00_1143;
BgL_bucketz00_1142 = BgL_g1839z00_1140; 
BgL_resz00_1143 = BgL_resz00_1137; 
BgL_zc3anonymousza32094ze3z83_1144:
if(
NULLP(BgL_bucketz00_1142))
{ 
obj_t BgL_resz00_5493;long BgL_iz00_5491;
BgL_iz00_5491 = 
(BgL_iz00_1136+((long)1)); 
BgL_resz00_5493 = BgL_resz00_1143; 
BgL_resz00_1137 = BgL_resz00_5493; 
BgL_iz00_1136 = BgL_iz00_5491; 
goto BgL_zc3anonymousza32092ze3z83_1138;}  else 
{ /* Llib/hash.scm 286 */
obj_t BgL_arg2097z00_1147;obj_t BgL_arg2098z00_1148;
{ /* Llib/hash.scm 286 */
obj_t BgL_pairz00_2468;
if(
PAIRP(BgL_bucketz00_1142))
{ /* Llib/hash.scm 286 */
BgL_pairz00_2468 = BgL_bucketz00_1142; }  else 
{ 
obj_t BgL_auxz00_5496;
BgL_auxz00_5496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10797)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1142); 
FAILURE(BgL_auxz00_5496,BFALSE,BFALSE);} 
BgL_arg2097z00_1147 = 
CDR(BgL_pairz00_2468); } 
{ /* Llib/hash.scm 286 */
obj_t BgL_arg2099z00_1149;
{ /* Llib/hash.scm 286 */
obj_t BgL_pairz00_2469;
BgL_pairz00_2469 = BgL_bucketz00_1142; 
{ /* Llib/hash.scm 286 */
obj_t BgL_pairz00_2472;
{ /* Llib/hash.scm 286 */
obj_t BgL_aux2959z00_3922;
BgL_aux2959z00_3922 = 
CAR(BgL_pairz00_2469); 
if(
PAIRP(BgL_aux2959z00_3922))
{ /* Llib/hash.scm 286 */
BgL_pairz00_2472 = BgL_aux2959z00_3922; }  else 
{ 
obj_t BgL_auxz00_5504;
BgL_auxz00_5504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)10811)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2959z00_3922); 
FAILURE(BgL_auxz00_5504,BFALSE,BFALSE);} } 
BgL_arg2099z00_1149 = 
CDR(BgL_pairz00_2472); } } 
BgL_arg2098z00_1148 = 
MAKE_PAIR(BgL_arg2099z00_1149, BgL_resz00_1143); } 
{ 
obj_t BgL_resz00_5511;obj_t BgL_bucketz00_5510;
BgL_bucketz00_5510 = BgL_arg2097z00_1147; 
BgL_resz00_5511 = BgL_arg2098z00_1148; 
BgL_resz00_1143 = BgL_resz00_5511; 
BgL_bucketz00_1142 = BgL_bucketz00_5510; 
goto BgL_zc3anonymousza32094ze3z83_1144;} } } } } } } } } } 
}



/* hashtable-key-list */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2keyzd2listz00zz__hashz00(obj_t BgL_tablez00_49)
{ AN_OBJECT;
{ /* Llib/hash.scm 291 */
{ /* Llib/hash.scm 292 */
bool_t BgL_testz00_5512;
{ /* Llib/hash.scm 292 */
bool_t BgL_res2605z00_2486;
{ /* Llib/hash.scm 292 */
bool_t BgL_testz00_5513;
{ /* Llib/hash.scm 292 */
obj_t BgL_arg2065z00_2477;
{ /* Llib/hash.scm 292 */
bool_t BgL_testz00_5514;
{ /* Llib/hash.scm 292 */
obj_t BgL_auxz00_5515;
{ /* Llib/hash.scm 292 */
obj_t BgL_res2604z00_2483;
{ /* Llib/hash.scm 292 */
obj_t BgL_aux2961z00_3924;
BgL_aux2961z00_3924 = 
STRUCT_KEY(BgL_tablez00_49); 
if(
SYMBOLP(BgL_aux2961z00_3924))
{ /* Llib/hash.scm 292 */
BgL_res2604z00_2483 = BgL_aux2961z00_3924; }  else 
{ 
obj_t BgL_auxz00_5519;
BgL_auxz00_5519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11110)), BGl_string3454z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2961z00_3924); 
FAILURE(BgL_auxz00_5519,BFALSE,BFALSE);} } 
BgL_auxz00_5515 = BgL_res2604z00_2483; } 
BgL_testz00_5514 = 
(BgL_auxz00_5515==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5514)
{ /* Llib/hash.scm 292 */
int BgL_auxz00_5524;
BgL_auxz00_5524 = 
(int)(((long)5)); 
BgL_arg2065z00_2477 = 
STRUCT_REF(BgL_tablez00_49, BgL_auxz00_5524); }  else 
{ /* Llib/hash.scm 292 */
BgL_arg2065z00_2477 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_49); } } 
{ /* Llib/hash.scm 292 */
long BgL_n2z00_2485;
{ /* Llib/hash.scm 292 */
obj_t BgL_auxz00_5528;
if(
INTEGERP(BgL_arg2065z00_2477))
{ /* Llib/hash.scm 292 */
BgL_auxz00_5528 = BgL_arg2065z00_2477
; }  else 
{ 
obj_t BgL_auxz00_5531;
BgL_auxz00_5531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11110)), BGl_string3454z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2477); 
FAILURE(BgL_auxz00_5531,BFALSE,BFALSE);} 
BgL_n2z00_2485 = 
(long)CINT(BgL_auxz00_5528); } 
BgL_testz00_5513 = 
(((long)0)==BgL_n2z00_2485); } } 
if(BgL_testz00_5513)
{ /* Llib/hash.scm 292 */
BgL_res2605z00_2486 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 292 */
BgL_res2605z00_2486 = ((bool_t)1); } } 
BgL_testz00_5512 = BgL_res2605z00_2486; } 
if(BgL_testz00_5512)
{ /* Llib/hash.scm 292 */
return 
BGl_weakzd2hashtablezd2keyzd2listzd2zz__weakhashz00(BgL_tablez00_49);}  else 
{ /* Llib/hash.scm 292 */
obj_t BgL_aux2965z00_3928;
BgL_aux2965z00_3928 = 
BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(BgL_tablez00_49); 
{ /* Llib/hash.scm 292 */
bool_t BgL_testz00_5539;
if(
PAIRP(BgL_aux2965z00_3928))
{ /* Llib/hash.scm 292 */
BgL_testz00_5539 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 292 */
BgL_testz00_5539 = 
NULLP(BgL_aux2965z00_3928)
; } 
if(BgL_testz00_5539)
{ /* Llib/hash.scm 292 */
return BgL_aux2965z00_3928;}  else 
{ 
obj_t BgL_auxz00_5543;
BgL_auxz00_5543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11106)), BGl_string3454z00zz__hashz00, BGl_string3451z00zz__hashz00, BgL_aux2965z00_3928); 
FAILURE(BgL_auxz00_5543,BFALSE,BFALSE);} } } } } 
}



/* _hashtable-key-list */
obj_t BGl__hashtablezd2keyzd2listz00zz__hashz00(obj_t BgL_envz00_3625, obj_t BgL_tablez00_3626)
{ AN_OBJECT;
{ /* Llib/hash.scm 291 */
{ /* Llib/hash.scm 292 */
obj_t BgL_auxz00_5547;
if(
STRUCTP(BgL_tablez00_3626))
{ /* Llib/hash.scm 292 */
BgL_auxz00_5547 = BgL_tablez00_3626
; }  else 
{ 
obj_t BgL_auxz00_5550;
BgL_auxz00_5550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11106)), BGl_string3455z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3626); 
FAILURE(BgL_auxz00_5550,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2keyzd2listz00zz__hashz00(BgL_auxz00_5547);} } 
}



/* plain-hashtable-key-list */
obj_t BGl_plainzd2hashtablezd2keyzd2listzd2zz__hashz00(obj_t BgL_tablez00_50)
{ AN_OBJECT;
{ /* Llib/hash.scm 299 */
{ /* Llib/hash.scm 300 */
obj_t BgL_vecz00_1155;
{ /* Llib/hash.scm 300 */
long BgL_arg2111z00_1176;
{ /* Llib/hash.scm 300 */
long BgL_res2607z00_2494;
{ /* Llib/hash.scm 300 */
bool_t BgL_testz00_5555;
{ /* Llib/hash.scm 300 */
obj_t BgL_auxz00_5556;
{ /* Llib/hash.scm 300 */
obj_t BgL_res2606z00_2493;
{ /* Llib/hash.scm 300 */
obj_t BgL_aux2969z00_3932;
BgL_aux2969z00_3932 = 
STRUCT_KEY(BgL_tablez00_50); 
if(
SYMBOLP(BgL_aux2969z00_3932))
{ /* Llib/hash.scm 300 */
BgL_res2606z00_2493 = BgL_aux2969z00_3932; }  else 
{ 
obj_t BgL_auxz00_5560;
BgL_auxz00_5560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11515)), BGl_string3456z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2969z00_3932); 
FAILURE(BgL_auxz00_5560,BFALSE,BFALSE);} } 
BgL_auxz00_5556 = BgL_res2606z00_2493; } 
BgL_testz00_5555 = 
(BgL_auxz00_5556==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5555)
{ /* Llib/hash.scm 300 */
obj_t BgL_auxz00_5565;
{ /* Llib/hash.scm 300 */
obj_t BgL_aux2971z00_3934;
{ /* Llib/hash.scm 300 */
int BgL_auxz00_5566;
BgL_auxz00_5566 = 
(int)(((long)0)); 
BgL_aux2971z00_3934 = 
STRUCT_REF(BgL_tablez00_50, BgL_auxz00_5566); } 
if(
INTEGERP(BgL_aux2971z00_3934))
{ /* Llib/hash.scm 300 */
BgL_auxz00_5565 = BgL_aux2971z00_3934
; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11515)), BGl_string3456z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2971z00_3934); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} } 
BgL_res2607z00_2494 = 
(long)CINT(BgL_auxz00_5565); }  else 
{ /* Llib/hash.scm 300 */
obj_t BgL_auxz00_5576;
{ /* Llib/hash.scm 300 */
obj_t BgL_aux2973z00_3936;
BgL_aux2973z00_3936 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_50); 
if(
INTEGERP(BgL_aux2973z00_3936))
{ /* Llib/hash.scm 300 */
BgL_auxz00_5576 = BgL_aux2973z00_3936
; }  else 
{ 
obj_t BgL_auxz00_5580;
BgL_auxz00_5580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11515)), BGl_string3456z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_aux2973z00_3936); 
FAILURE(BgL_auxz00_5580,BFALSE,BFALSE);} } 
BgL_res2607z00_2494 = 
(long)CINT(BgL_auxz00_5576); } } 
BgL_arg2111z00_1176 = BgL_res2607z00_2494; } 
BgL_vecz00_1155 = 
make_vector(
(int)(BgL_arg2111z00_1176), BUNSPEC); } 
{ /* Llib/hash.scm 300 */
obj_t BgL_bucketsz00_1156;
{ /* Llib/hash.scm 301 */
bool_t BgL_testz00_5587;
{ /* Llib/hash.scm 301 */
obj_t BgL_auxz00_5588;
{ /* Llib/hash.scm 301 */
obj_t BgL_res2609z00_2501;
{ /* Llib/hash.scm 301 */
obj_t BgL_aux2975z00_3939;
BgL_aux2975z00_3939 = 
STRUCT_KEY(BgL_tablez00_50); 
if(
SYMBOLP(BgL_aux2975z00_3939))
{ /* Llib/hash.scm 301 */
BgL_res2609z00_2501 = BgL_aux2975z00_3939; }  else 
{ 
obj_t BgL_auxz00_5592;
BgL_auxz00_5592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11552)), BGl_string3456z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2975z00_3939); 
FAILURE(BgL_auxz00_5592,BFALSE,BFALSE);} } 
BgL_auxz00_5588 = BgL_res2609z00_2501; } 
BgL_testz00_5587 = 
(BgL_auxz00_5588==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5587)
{ /* Llib/hash.scm 301 */
int BgL_auxz00_5597;
BgL_auxz00_5597 = 
(int)(((long)2)); 
BgL_bucketsz00_1156 = 
STRUCT_REF(BgL_tablez00_50, BgL_auxz00_5597); }  else 
{ /* Llib/hash.scm 301 */
BgL_bucketsz00_1156 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_50); } } 
{ /* Llib/hash.scm 301 */
int BgL_bucketszd2lenzd2_1157;
{ /* Llib/hash.scm 302 */
obj_t BgL_vectorz00_2502;
if(
VECTORP(BgL_bucketsz00_1156))
{ /* Llib/hash.scm 302 */
BgL_vectorz00_2502 = BgL_bucketsz00_1156; }  else 
{ 
obj_t BgL_auxz00_5603;
BgL_auxz00_5603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11611)), BGl_string3456z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1156); 
FAILURE(BgL_auxz00_5603,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1157 = 
VECTOR_LENGTH(BgL_vectorz00_2502); } 
{ /* Llib/hash.scm 302 */

{ 
long BgL_iz00_1160;obj_t BgL_resz00_1161;
BgL_iz00_1160 = ((long)0); 
BgL_resz00_1161 = BNIL; 
BgL_zc3anonymousza32103ze3z83_1162:
if(
(BgL_iz00_1160==
(long)(BgL_bucketszd2lenzd2_1157)))
{ /* Llib/hash.scm 305 */
return BgL_resz00_1161;}  else 
{ /* Llib/hash.scm 307 */
obj_t BgL_g1841z00_1164;
{ /* Llib/hash.scm 307 */
obj_t BgL_vectorz00_2505;int BgL_kz00_2506;
BgL_vectorz00_2505 = BgL_bucketsz00_1156; 
BgL_kz00_2506 = 
(int)(BgL_iz00_1160); 
{ /* Llib/hash.scm 307 */
int BgL_l2733z00_3693;
BgL_l2733z00_3693 = 
VECTOR_LENGTH(BgL_vectorz00_2505); 
if(
BOUND_CHECK(BgL_kz00_2506, BgL_l2733z00_3693))
{ /* Llib/hash.scm 307 */
BgL_g1841z00_1164 = 
VECTOR_REF(BgL_vectorz00_2505,BgL_kz00_2506); }  else 
{ 
obj_t BgL_auxz00_5616;
BgL_auxz00_5616 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11720)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2506), BgL_vectorz00_2505); 
FAILURE(BgL_auxz00_5616,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_bucketz00_1166;obj_t BgL_resz00_1167;
BgL_bucketz00_1166 = BgL_g1841z00_1164; 
BgL_resz00_1167 = BgL_resz00_1161; 
BgL_zc3anonymousza32105ze3z83_1168:
if(
NULLP(BgL_bucketz00_1166))
{ 
obj_t BgL_resz00_5625;long BgL_iz00_5623;
BgL_iz00_5623 = 
(BgL_iz00_1160+((long)1)); 
BgL_resz00_5625 = BgL_resz00_1167; 
BgL_resz00_1161 = BgL_resz00_5625; 
BgL_iz00_1160 = BgL_iz00_5623; 
goto BgL_zc3anonymousza32103ze3z83_1162;}  else 
{ /* Llib/hash.scm 311 */
obj_t BgL_arg2108z00_1171;obj_t BgL_arg2109z00_1172;
{ /* Llib/hash.scm 311 */
obj_t BgL_pairz00_2510;
if(
PAIRP(BgL_bucketz00_1166))
{ /* Llib/hash.scm 311 */
BgL_pairz00_2510 = BgL_bucketz00_1166; }  else 
{ 
obj_t BgL_auxz00_5628;
BgL_auxz00_5628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11823)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1166); 
FAILURE(BgL_auxz00_5628,BFALSE,BFALSE);} 
BgL_arg2108z00_1171 = 
CDR(BgL_pairz00_2510); } 
{ /* Llib/hash.scm 311 */
obj_t BgL_arg2110z00_1173;
{ /* Llib/hash.scm 311 */
obj_t BgL_pairz00_2511;
BgL_pairz00_2511 = BgL_bucketz00_1166; 
{ /* Llib/hash.scm 311 */
obj_t BgL_pairz00_2514;
{ /* Llib/hash.scm 311 */
obj_t BgL_aux2985z00_3949;
BgL_aux2985z00_3949 = 
CAR(BgL_pairz00_2511); 
if(
PAIRP(BgL_aux2985z00_3949))
{ /* Llib/hash.scm 311 */
BgL_pairz00_2514 = BgL_aux2985z00_3949; }  else 
{ 
obj_t BgL_auxz00_5636;
BgL_auxz00_5636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)11837)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux2985z00_3949); 
FAILURE(BgL_auxz00_5636,BFALSE,BFALSE);} } 
BgL_arg2110z00_1173 = 
CAR(BgL_pairz00_2514); } } 
BgL_arg2109z00_1172 = 
MAKE_PAIR(BgL_arg2110z00_1173, BgL_resz00_1167); } 
{ 
obj_t BgL_resz00_5643;obj_t BgL_bucketz00_5642;
BgL_bucketz00_5642 = BgL_arg2108z00_1171; 
BgL_resz00_5643 = BgL_arg2109z00_1172; 
BgL_resz00_1167 = BgL_resz00_5643; 
BgL_bucketz00_1166 = BgL_bucketz00_5642; 
goto BgL_zc3anonymousza32105ze3z83_1168;} } } } } } } } } } 
}



/* hashtable-map */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2mapzd2zz__hashz00(obj_t BgL_tablez00_51, obj_t BgL_funz00_52)
{ AN_OBJECT;
{ /* Llib/hash.scm 316 */
{ /* Llib/hash.scm 317 */
bool_t BgL_testz00_5644;
{ /* Llib/hash.scm 317 */
bool_t BgL_res2611z00_2528;
{ /* Llib/hash.scm 317 */
bool_t BgL_testz00_5645;
{ /* Llib/hash.scm 317 */
obj_t BgL_arg2065z00_2519;
{ /* Llib/hash.scm 317 */
bool_t BgL_testz00_5646;
{ /* Llib/hash.scm 317 */
obj_t BgL_auxz00_5647;
{ /* Llib/hash.scm 317 */
obj_t BgL_res2610z00_2525;
{ /* Llib/hash.scm 317 */
obj_t BgL_aux2987z00_3951;
BgL_aux2987z00_3951 = 
STRUCT_KEY(BgL_tablez00_51); 
if(
SYMBOLP(BgL_aux2987z00_3951))
{ /* Llib/hash.scm 317 */
BgL_res2610z00_2525 = BgL_aux2987z00_3951; }  else 
{ 
obj_t BgL_auxz00_5651;
BgL_auxz00_5651 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12146)), BGl_string3457z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2987z00_3951); 
FAILURE(BgL_auxz00_5651,BFALSE,BFALSE);} } 
BgL_auxz00_5647 = BgL_res2610z00_2525; } 
BgL_testz00_5646 = 
(BgL_auxz00_5647==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5646)
{ /* Llib/hash.scm 317 */
int BgL_auxz00_5656;
BgL_auxz00_5656 = 
(int)(((long)5)); 
BgL_arg2065z00_2519 = 
STRUCT_REF(BgL_tablez00_51, BgL_auxz00_5656); }  else 
{ /* Llib/hash.scm 317 */
BgL_arg2065z00_2519 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_51); } } 
{ /* Llib/hash.scm 317 */
long BgL_n2z00_2527;
{ /* Llib/hash.scm 317 */
obj_t BgL_auxz00_5660;
if(
INTEGERP(BgL_arg2065z00_2519))
{ /* Llib/hash.scm 317 */
BgL_auxz00_5660 = BgL_arg2065z00_2519
; }  else 
{ 
obj_t BgL_auxz00_5663;
BgL_auxz00_5663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12146)), BGl_string3457z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2519); 
FAILURE(BgL_auxz00_5663,BFALSE,BFALSE);} 
BgL_n2z00_2527 = 
(long)CINT(BgL_auxz00_5660); } 
BgL_testz00_5645 = 
(((long)0)==BgL_n2z00_2527); } } 
if(BgL_testz00_5645)
{ /* Llib/hash.scm 317 */
BgL_res2611z00_2528 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 317 */
BgL_res2611z00_2528 = ((bool_t)1); } } 
BgL_testz00_5644 = BgL_res2611z00_2528; } 
if(BgL_testz00_5644)
{ /* Llib/hash.scm 317 */
return 
BGl_weakzd2hashtablezd2mapz00zz__weakhashz00(BgL_tablez00_51, BgL_funz00_52);}  else 
{ /* Llib/hash.scm 317 */
return 
BGl_plainzd2hashtablezd2mapz00zz__hashz00(BgL_tablez00_51, BgL_funz00_52);} } } 
}



/* _hashtable-map */
obj_t BGl__hashtablezd2mapzd2zz__hashz00(obj_t BgL_envz00_3627, obj_t BgL_tablez00_3628, obj_t BgL_funz00_3629)
{ AN_OBJECT;
{ /* Llib/hash.scm 316 */
{ /* Llib/hash.scm 317 */
obj_t BgL_auxz00_5678;obj_t BgL_auxz00_5671;
if(
PROCEDUREP(BgL_funz00_3629))
{ /* Llib/hash.scm 317 */
BgL_auxz00_5678 = BgL_funz00_3629
; }  else 
{ 
obj_t BgL_auxz00_5681;
BgL_auxz00_5681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12142)), BGl_string3458z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_funz00_3629); 
FAILURE(BgL_auxz00_5681,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3628))
{ /* Llib/hash.scm 317 */
BgL_auxz00_5671 = BgL_tablez00_3628
; }  else 
{ 
obj_t BgL_auxz00_5674;
BgL_auxz00_5674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12142)), BGl_string3458z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3628); 
FAILURE(BgL_auxz00_5674,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2mapzd2zz__hashz00(BgL_auxz00_5671, BgL_auxz00_5678);} } 
}



/* plain-hashtable-map */
obj_t BGl_plainzd2hashtablezd2mapz00zz__hashz00(obj_t BgL_tablez00_53, obj_t BgL_funz00_54)
{ AN_OBJECT;
{ /* Llib/hash.scm 324 */
{ /* Llib/hash.scm 325 */
obj_t BgL_bucketsz00_1179;
{ /* Llib/hash.scm 325 */
bool_t BgL_testz00_5686;
{ /* Llib/hash.scm 325 */
obj_t BgL_auxz00_5687;
{ /* Llib/hash.scm 325 */
obj_t BgL_res2612z00_2534;
{ /* Llib/hash.scm 325 */
obj_t BgL_aux2995z00_3959;
BgL_aux2995z00_3959 = 
STRUCT_KEY(BgL_tablez00_53); 
if(
SYMBOLP(BgL_aux2995z00_3959))
{ /* Llib/hash.scm 325 */
BgL_res2612z00_2534 = BgL_aux2995z00_3959; }  else 
{ 
obj_t BgL_auxz00_5691;
BgL_auxz00_5691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12550)), BGl_string3460z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux2995z00_3959); 
FAILURE(BgL_auxz00_5691,BFALSE,BFALSE);} } 
BgL_auxz00_5687 = BgL_res2612z00_2534; } 
BgL_testz00_5686 = 
(BgL_auxz00_5687==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5686)
{ /* Llib/hash.scm 325 */
int BgL_auxz00_5696;
BgL_auxz00_5696 = 
(int)(((long)2)); 
BgL_bucketsz00_1179 = 
STRUCT_REF(BgL_tablez00_53, BgL_auxz00_5696); }  else 
{ /* Llib/hash.scm 325 */
BgL_bucketsz00_1179 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_53); } } 
{ /* Llib/hash.scm 325 */
int BgL_bucketszd2lenzd2_1180;
{ /* Llib/hash.scm 326 */
obj_t BgL_vectorz00_2535;
if(
VECTORP(BgL_bucketsz00_1179))
{ /* Llib/hash.scm 326 */
BgL_vectorz00_2535 = BgL_bucketsz00_1179; }  else 
{ 
obj_t BgL_auxz00_5702;
BgL_auxz00_5702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12609)), BGl_string3460z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1179); 
FAILURE(BgL_auxz00_5702,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1180 = 
VECTOR_LENGTH(BgL_vectorz00_2535); } 
{ /* Llib/hash.scm 326 */

{ 
long BgL_iz00_1183;obj_t BgL_resz00_1184;
BgL_iz00_1183 = ((long)0); 
BgL_resz00_1184 = BNIL; 
BgL_zc3anonymousza32114ze3z83_1185:
if(
(BgL_iz00_1183<
(long)(BgL_bucketszd2lenzd2_1180)))
{ /* Llib/hash.scm 330 */
obj_t BgL_g1843z00_1187;
{ /* Llib/hash.scm 330 */
obj_t BgL_vectorz00_2538;int BgL_kz00_2539;
BgL_vectorz00_2538 = BgL_bucketsz00_1179; 
BgL_kz00_2539 = 
(int)(BgL_iz00_1183); 
{ /* Llib/hash.scm 330 */
int BgL_l2737z00_3697;
BgL_l2737z00_3697 = 
VECTOR_LENGTH(BgL_vectorz00_2538); 
if(
BOUND_CHECK(BgL_kz00_2539, BgL_l2737z00_3697))
{ /* Llib/hash.scm 330 */
BgL_g1843z00_1187 = 
VECTOR_REF(BgL_vectorz00_2538,BgL_kz00_2539); }  else 
{ 
obj_t BgL_auxz00_5715;
BgL_auxz00_5715 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12705)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2539), BgL_vectorz00_2538); 
FAILURE(BgL_auxz00_5715,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_lstz00_1189;obj_t BgL_resz00_1190;
BgL_lstz00_1189 = BgL_g1843z00_1187; 
BgL_resz00_1190 = BgL_resz00_1184; 
BgL_zc3anonymousza32116ze3z83_1191:
if(
NULLP(BgL_lstz00_1189))
{ 
obj_t BgL_resz00_5724;long BgL_iz00_5722;
BgL_iz00_5722 = 
(BgL_iz00_1183+((long)1)); 
BgL_resz00_5724 = BgL_resz00_1190; 
BgL_resz00_1184 = BgL_resz00_5724; 
BgL_iz00_1183 = BgL_iz00_5722; 
goto BgL_zc3anonymousza32114ze3z83_1185;}  else 
{ /* Llib/hash.scm 334 */
obj_t BgL_cellz00_1194;
{ /* Llib/hash.scm 334 */
obj_t BgL_pairz00_2543;
if(
PAIRP(BgL_lstz00_1189))
{ /* Llib/hash.scm 334 */
BgL_pairz00_2543 = BgL_lstz00_1189; }  else 
{ 
obj_t BgL_auxz00_5727;
BgL_auxz00_5727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12811)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_lstz00_1189); 
FAILURE(BgL_auxz00_5727,BFALSE,BFALSE);} 
BgL_cellz00_1194 = 
CAR(BgL_pairz00_2543); } 
{ /* Llib/hash.scm 335 */
obj_t BgL_arg2119z00_1195;obj_t BgL_arg2121z00_1196;
BgL_arg2119z00_1195 = 
CDR(BgL_lstz00_1189); 
{ /* Llib/hash.scm 336 */
obj_t BgL_arg2123z00_1197;
{ /* Llib/hash.scm 336 */
obj_t BgL_arg2124z00_1198;obj_t BgL_arg2125z00_1199;
{ /* Llib/hash.scm 336 */
obj_t BgL_pairz00_2545;
if(
PAIRP(BgL_cellz00_1194))
{ /* Llib/hash.scm 336 */
BgL_pairz00_2545 = BgL_cellz00_1194; }  else 
{ 
obj_t BgL_auxz00_5735;
BgL_auxz00_5735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)12867)), BGl_string3449z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_cellz00_1194); 
FAILURE(BgL_auxz00_5735,BFALSE,BFALSE);} 
BgL_arg2124z00_1198 = 
CAR(BgL_pairz00_2545); } 
BgL_arg2125z00_1199 = 
CDR(BgL_cellz00_1194); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_54, ((long)2)))
{ /* Llib/hash.scm 336 */
BgL_arg2123z00_1197 = 
PROCEDURE_ENTRY(BgL_funz00_54)(BgL_funz00_54, BgL_arg2124z00_1198, BgL_arg2125z00_1199, BEOA); }  else 
{ /* Llib/hash.scm 336 */
FAILURE(BGl_string3461z00zz__hashz00,BGl_list3462z00zz__hashz00,BgL_funz00_54);} } 
BgL_arg2121z00_1196 = 
MAKE_PAIR(BgL_arg2123z00_1197, BgL_resz00_1190); } 
{ 
obj_t BgL_resz00_5748;obj_t BgL_lstz00_5747;
BgL_lstz00_5747 = BgL_arg2119z00_1195; 
BgL_resz00_5748 = BgL_arg2121z00_1196; 
BgL_resz00_1190 = BgL_resz00_5748; 
BgL_lstz00_1189 = BgL_lstz00_5747; 
goto BgL_zc3anonymousza32116ze3z83_1191;} } } } }  else 
{ /* Llib/hash.scm 329 */
return BgL_resz00_1184;} } } } } } 
}



/* hashtable-for-each */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t BgL_tablez00_55, obj_t BgL_funz00_56)
{ AN_OBJECT;
{ /* Llib/hash.scm 342 */
{ /* Llib/hash.scm 343 */
bool_t BgL_testz00_5749;
{ /* Llib/hash.scm 343 */
bool_t BgL_res2614z00_2560;
{ /* Llib/hash.scm 343 */
bool_t BgL_testz00_5750;
{ /* Llib/hash.scm 343 */
obj_t BgL_arg2065z00_2551;
{ /* Llib/hash.scm 343 */
bool_t BgL_testz00_5751;
{ /* Llib/hash.scm 343 */
obj_t BgL_auxz00_5752;
{ /* Llib/hash.scm 343 */
obj_t BgL_res2613z00_2557;
{ /* Llib/hash.scm 343 */
obj_t BgL_aux3011z00_3976;
BgL_aux3011z00_3976 = 
STRUCT_KEY(BgL_tablez00_55); 
if(
SYMBOLP(BgL_aux3011z00_3976))
{ /* Llib/hash.scm 343 */
BgL_res2613z00_2557 = BgL_aux3011z00_3976; }  else 
{ 
obj_t BgL_auxz00_5756;
BgL_auxz00_5756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13196)), BGl_string3471z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3011z00_3976); 
FAILURE(BgL_auxz00_5756,BFALSE,BFALSE);} } 
BgL_auxz00_5752 = BgL_res2613z00_2557; } 
BgL_testz00_5751 = 
(BgL_auxz00_5752==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5751)
{ /* Llib/hash.scm 343 */
int BgL_auxz00_5761;
BgL_auxz00_5761 = 
(int)(((long)5)); 
BgL_arg2065z00_2551 = 
STRUCT_REF(BgL_tablez00_55, BgL_auxz00_5761); }  else 
{ /* Llib/hash.scm 343 */
BgL_arg2065z00_2551 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_55); } } 
{ /* Llib/hash.scm 343 */
long BgL_n2z00_2559;
{ /* Llib/hash.scm 343 */
obj_t BgL_auxz00_5765;
if(
INTEGERP(BgL_arg2065z00_2551))
{ /* Llib/hash.scm 343 */
BgL_auxz00_5765 = BgL_arg2065z00_2551
; }  else 
{ 
obj_t BgL_auxz00_5768;
BgL_auxz00_5768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13196)), BGl_string3471z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2551); 
FAILURE(BgL_auxz00_5768,BFALSE,BFALSE);} 
BgL_n2z00_2559 = 
(long)CINT(BgL_auxz00_5765); } 
BgL_testz00_5750 = 
(((long)0)==BgL_n2z00_2559); } } 
if(BgL_testz00_5750)
{ /* Llib/hash.scm 343 */
BgL_res2614z00_2560 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 343 */
BgL_res2614z00_2560 = ((bool_t)1); } } 
BgL_testz00_5749 = BgL_res2614z00_2560; } 
if(BgL_testz00_5749)
{ /* Llib/hash.scm 343 */
return 
BGl_weakzd2hashtablezd2forzd2eachzd2zz__weakhashz00(BgL_tablez00_55, BgL_funz00_56);}  else 
{ /* Llib/hash.scm 343 */
return 
BBOOL(
BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(BgL_tablez00_55, BgL_funz00_56));} } } 
}



/* _hashtable-for-each */
obj_t BGl__hashtablezd2forzd2eachz00zz__hashz00(obj_t BgL_envz00_3630, obj_t BgL_tablez00_3631, obj_t BgL_funz00_3632)
{ AN_OBJECT;
{ /* Llib/hash.scm 342 */
{ /* Llib/hash.scm 343 */
obj_t BgL_auxz00_5784;obj_t BgL_auxz00_5777;
if(
PROCEDUREP(BgL_funz00_3632))
{ /* Llib/hash.scm 343 */
BgL_auxz00_5784 = BgL_funz00_3632
; }  else 
{ 
obj_t BgL_auxz00_5787;
BgL_auxz00_5787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13192)), BGl_string3472z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_funz00_3632); 
FAILURE(BgL_auxz00_5787,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3631))
{ /* Llib/hash.scm 343 */
BgL_auxz00_5777 = BgL_tablez00_3631
; }  else 
{ 
obj_t BgL_auxz00_5780;
BgL_auxz00_5780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13192)), BGl_string3472z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3631); 
FAILURE(BgL_auxz00_5780,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_5777, BgL_auxz00_5784);} } 
}



/* plain-hashtable-for-each */
bool_t BGl_plainzd2hashtablezd2forzd2eachzd2zz__hashz00(obj_t BgL_tablez00_57, obj_t BgL_funz00_58)
{ AN_OBJECT;
{ /* Llib/hash.scm 350 */
{ /* Llib/hash.scm 351 */
obj_t BgL_bucketsz00_1203;
{ /* Llib/hash.scm 351 */
bool_t BgL_testz00_5792;
{ /* Llib/hash.scm 351 */
obj_t BgL_auxz00_5793;
{ /* Llib/hash.scm 351 */
obj_t BgL_res2615z00_2566;
{ /* Llib/hash.scm 351 */
obj_t BgL_aux3019z00_3984;
BgL_aux3019z00_3984 = 
STRUCT_KEY(BgL_tablez00_57); 
if(
SYMBOLP(BgL_aux3019z00_3984))
{ /* Llib/hash.scm 351 */
BgL_res2615z00_2566 = BgL_aux3019z00_3984; }  else 
{ 
obj_t BgL_auxz00_5797;
BgL_auxz00_5797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13615)), BGl_string3473z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3019z00_3984); 
FAILURE(BgL_auxz00_5797,BFALSE,BFALSE);} } 
BgL_auxz00_5793 = BgL_res2615z00_2566; } 
BgL_testz00_5792 = 
(BgL_auxz00_5793==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5792)
{ /* Llib/hash.scm 351 */
int BgL_auxz00_5802;
BgL_auxz00_5802 = 
(int)(((long)2)); 
BgL_bucketsz00_1203 = 
STRUCT_REF(BgL_tablez00_57, BgL_auxz00_5802); }  else 
{ /* Llib/hash.scm 351 */
BgL_bucketsz00_1203 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_57); } } 
{ /* Llib/hash.scm 351 */
int BgL_bucketszd2lenzd2_1204;
{ /* Llib/hash.scm 352 */
obj_t BgL_vectorz00_2567;
if(
VECTORP(BgL_bucketsz00_1203))
{ /* Llib/hash.scm 352 */
BgL_vectorz00_2567 = BgL_bucketsz00_1203; }  else 
{ 
obj_t BgL_auxz00_5808;
BgL_auxz00_5808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13674)), BGl_string3473z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1203); 
FAILURE(BgL_auxz00_5808,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1204 = 
VECTOR_LENGTH(BgL_vectorz00_2567); } 
{ /* Llib/hash.scm 352 */

{ 
long BgL_iz00_1206;
BgL_iz00_1206 = ((long)0); 
BgL_zc3anonymousza32127ze3z83_1207:
if(
(BgL_iz00_1206<
(long)(BgL_bucketszd2lenzd2_1204)))
{ /* Llib/hash.scm 354 */
{ /* Llib/hash.scm 356 */
obj_t BgL_g1870z00_1209;
{ /* Llib/hash.scm 358 */
obj_t BgL_vectorz00_2570;int BgL_kz00_2571;
BgL_vectorz00_2570 = BgL_bucketsz00_1203; 
BgL_kz00_2571 = 
(int)(BgL_iz00_1206); 
{ /* Llib/hash.scm 358 */
int BgL_l2741z00_3701;
BgL_l2741z00_3701 = 
VECTOR_LENGTH(BgL_vectorz00_2570); 
if(
BOUND_CHECK(BgL_kz00_2571, BgL_l2741z00_3701))
{ /* Llib/hash.scm 358 */
BgL_g1870z00_1209 = 
VECTOR_REF(BgL_vectorz00_2570,BgL_kz00_2571); }  else 
{ 
obj_t BgL_auxz00_5821;
BgL_auxz00_5821 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13817)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2571), BgL_vectorz00_2570); 
FAILURE(BgL_auxz00_5821,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1868z00_1211;
BgL_l1868z00_1211 = BgL_g1870z00_1209; 
BgL_zc3anonymousza32129ze3z83_1212:
if(
PAIRP(BgL_l1868z00_1211))
{ /* Llib/hash.scm 358 */
{ /* Llib/hash.scm 357 */
obj_t BgL_cellz00_1214;
BgL_cellz00_1214 = 
CAR(BgL_l1868z00_1211); 
{ /* Llib/hash.scm 357 */
obj_t BgL_arg2131z00_1215;obj_t BgL_arg2132z00_1216;
{ /* Llib/hash.scm 357 */
obj_t BgL_pairz00_2574;
if(
PAIRP(BgL_cellz00_1214))
{ /* Llib/hash.scm 357 */
BgL_pairz00_2574 = BgL_cellz00_1214; }  else 
{ 
obj_t BgL_auxz00_5831;
BgL_auxz00_5831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)13793)), BGl_string3474z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_cellz00_1214); 
FAILURE(BgL_auxz00_5831,BFALSE,BFALSE);} 
BgL_arg2131z00_1215 = 
CAR(BgL_pairz00_2574); } 
BgL_arg2132z00_1216 = 
CDR(BgL_cellz00_1214); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_58, ((long)2)))
{ /* Llib/hash.scm 357 */
PROCEDURE_ENTRY(BgL_funz00_58)(BgL_funz00_58, BgL_arg2131z00_1215, BgL_arg2132z00_1216, BEOA); }  else 
{ /* Llib/hash.scm 357 */
FAILURE(BGl_string3475z00zz__hashz00,BGl_list3476z00zz__hashz00,BgL_funz00_58);} } } 
{ 
obj_t BgL_l1868z00_5842;
BgL_l1868z00_5842 = 
CDR(BgL_l1868z00_1211); 
BgL_l1868z00_1211 = BgL_l1868z00_5842; 
goto BgL_zc3anonymousza32129ze3z83_1212;} }  else 
{ /* Llib/hash.scm 358 */
if(
NULLP(BgL_l1868z00_1211))
{ /* Llib/hash.scm 358 */BTRUE; }  else 
{ /* Llib/hash.scm 358 */
BGl_errorz00zz__errorz00(BGl_string3481z00zz__hashz00, BGl_string3482z00zz__hashz00, BgL_l1868z00_1211); } } } } 
{ 
long BgL_iz00_5847;
BgL_iz00_5847 = 
(BgL_iz00_1206+((long)1)); 
BgL_iz00_1206 = BgL_iz00_5847; 
goto BgL_zc3anonymousza32127ze3z83_1207;} }  else 
{ /* Llib/hash.scm 354 */
return ((bool_t)0);} } } } } } 
}



/* hashtable-filter! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2filterz12zc0zz__hashz00(obj_t BgL_tablez00_59, obj_t BgL_funz00_60)
{ AN_OBJECT;
{ /* Llib/hash.scm 364 */
{ /* Llib/hash.scm 365 */
bool_t BgL_testz00_5849;
{ /* Llib/hash.scm 365 */
bool_t BgL_res2617z00_2593;
{ /* Llib/hash.scm 365 */
bool_t BgL_testz00_5850;
{ /* Llib/hash.scm 365 */
obj_t BgL_arg2065z00_2584;
{ /* Llib/hash.scm 365 */
bool_t BgL_testz00_5851;
{ /* Llib/hash.scm 365 */
obj_t BgL_auxz00_5852;
{ /* Llib/hash.scm 365 */
obj_t BgL_res2616z00_2590;
{ /* Llib/hash.scm 365 */
obj_t BgL_aux3031z00_3997;
BgL_aux3031z00_3997 = 
STRUCT_KEY(BgL_tablez00_59); 
if(
SYMBOLP(BgL_aux3031z00_3997))
{ /* Llib/hash.scm 365 */
BgL_res2616z00_2590 = BgL_aux3031z00_3997; }  else 
{ 
obj_t BgL_auxz00_5856;
BgL_auxz00_5856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14152)), BGl_string3483z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3031z00_3997); 
FAILURE(BgL_auxz00_5856,BFALSE,BFALSE);} } 
BgL_auxz00_5852 = BgL_res2616z00_2590; } 
BgL_testz00_5851 = 
(BgL_auxz00_5852==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5851)
{ /* Llib/hash.scm 365 */
int BgL_auxz00_5861;
BgL_auxz00_5861 = 
(int)(((long)5)); 
BgL_arg2065z00_2584 = 
STRUCT_REF(BgL_tablez00_59, BgL_auxz00_5861); }  else 
{ /* Llib/hash.scm 365 */
BgL_arg2065z00_2584 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_59); } } 
{ /* Llib/hash.scm 365 */
long BgL_n2z00_2592;
{ /* Llib/hash.scm 365 */
obj_t BgL_auxz00_5865;
if(
INTEGERP(BgL_arg2065z00_2584))
{ /* Llib/hash.scm 365 */
BgL_auxz00_5865 = BgL_arg2065z00_2584
; }  else 
{ 
obj_t BgL_auxz00_5868;
BgL_auxz00_5868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14152)), BGl_string3483z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2584); 
FAILURE(BgL_auxz00_5868,BFALSE,BFALSE);} 
BgL_n2z00_2592 = 
(long)CINT(BgL_auxz00_5865); } 
BgL_testz00_5850 = 
(((long)0)==BgL_n2z00_2592); } } 
if(BgL_testz00_5850)
{ /* Llib/hash.scm 365 */
BgL_res2617z00_2593 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 365 */
BgL_res2617z00_2593 = ((bool_t)1); } } 
BgL_testz00_5849 = BgL_res2617z00_2593; } 
if(BgL_testz00_5849)
{ /* Llib/hash.scm 365 */
return 
BGl_weakzd2hashtablezd2filterz12z12zz__weakhashz00(BgL_tablez00_59, BgL_funz00_60);}  else 
{ /* Llib/hash.scm 365 */
return 
BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(BgL_tablez00_59, BgL_funz00_60);} } } 
}



/* _hashtable-filter! */
obj_t BGl__hashtablezd2filterz12zc0zz__hashz00(obj_t BgL_envz00_3633, obj_t BgL_tablez00_3634, obj_t BgL_funz00_3635)
{ AN_OBJECT;
{ /* Llib/hash.scm 364 */
{ /* Llib/hash.scm 365 */
obj_t BgL_auxz00_5883;obj_t BgL_auxz00_5876;
if(
PROCEDUREP(BgL_funz00_3635))
{ /* Llib/hash.scm 365 */
BgL_auxz00_5883 = BgL_funz00_3635
; }  else 
{ 
obj_t BgL_auxz00_5886;
BgL_auxz00_5886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14148)), BGl_string3484z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_funz00_3635); 
FAILURE(BgL_auxz00_5886,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3634))
{ /* Llib/hash.scm 365 */
BgL_auxz00_5876 = BgL_tablez00_3634
; }  else 
{ 
obj_t BgL_auxz00_5879;
BgL_auxz00_5879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14148)), BGl_string3484z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3634); 
FAILURE(BgL_auxz00_5879,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2filterz12zc0zz__hashz00(BgL_auxz00_5876, BgL_auxz00_5883);} } 
}



/* plain-hashtable-filter! */
obj_t BGl_plainzd2hashtablezd2filterz12z12zz__hashz00(obj_t BgL_tablez00_61, obj_t BgL_funz00_62)
{ AN_OBJECT;
{ /* Llib/hash.scm 372 */
{ /* Llib/hash.scm 373 */
obj_t BgL_bucketsz00_1223;
{ /* Llib/hash.scm 373 */
bool_t BgL_testz00_5891;
{ /* Llib/hash.scm 373 */
obj_t BgL_auxz00_5892;
{ /* Llib/hash.scm 373 */
obj_t BgL_res2618z00_2599;
{ /* Llib/hash.scm 373 */
obj_t BgL_aux3039z00_4005;
BgL_aux3039z00_4005 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3039z00_4005))
{ /* Llib/hash.scm 373 */
BgL_res2618z00_2599 = BgL_aux3039z00_4005; }  else 
{ 
obj_t BgL_auxz00_5896;
BgL_auxz00_5896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14568)), BGl_string3485z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3039z00_4005); 
FAILURE(BgL_auxz00_5896,BFALSE,BFALSE);} } 
BgL_auxz00_5892 = BgL_res2618z00_2599; } 
BgL_testz00_5891 = 
(BgL_auxz00_5892==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5891)
{ /* Llib/hash.scm 373 */
int BgL_auxz00_5901;
BgL_auxz00_5901 = 
(int)(((long)2)); 
BgL_bucketsz00_1223 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_5901); }  else 
{ /* Llib/hash.scm 373 */
BgL_bucketsz00_1223 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_61); } } 
{ /* Llib/hash.scm 373 */
int BgL_bucketszd2lenzd2_1224;
{ /* Llib/hash.scm 374 */
obj_t BgL_vectorz00_2600;
if(
VECTORP(BgL_bucketsz00_1223))
{ /* Llib/hash.scm 374 */
BgL_vectorz00_2600 = BgL_bucketsz00_1223; }  else 
{ 
obj_t BgL_auxz00_5907;
BgL_auxz00_5907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14627)), BGl_string3485z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1223); 
FAILURE(BgL_auxz00_5907,BFALSE,BFALSE);} 
BgL_bucketszd2lenzd2_1224 = 
VECTOR_LENGTH(BgL_vectorz00_2600); } 
{ /* Llib/hash.scm 374 */

{ 
long BgL_iz00_1226;long BgL_deltaz00_1227;
BgL_iz00_1226 = ((long)0); 
BgL_deltaz00_1227 = ((long)0); 
BgL_zc3anonymousza32137ze3z83_1228:
if(
(BgL_iz00_1226<
(long)(BgL_bucketszd2lenzd2_1224)))
{ /* Llib/hash.scm 377 */
obj_t BgL_lz00_1230;
{ /* Llib/hash.scm 377 */
obj_t BgL_vectorz00_2603;int BgL_kz00_2604;
BgL_vectorz00_2603 = BgL_bucketsz00_1223; 
BgL_kz00_2604 = 
(int)(BgL_iz00_1226); 
{ /* Llib/hash.scm 377 */
int BgL_l2745z00_3705;
BgL_l2745z00_3705 = 
VECTOR_LENGTH(BgL_vectorz00_2603); 
if(
BOUND_CHECK(BgL_kz00_2604, BgL_l2745z00_3705))
{ /* Llib/hash.scm 377 */
BgL_lz00_1230 = 
VECTOR_REF(BgL_vectorz00_2603,BgL_kz00_2604); }  else 
{ 
obj_t BgL_auxz00_5920;
BgL_auxz00_5920 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14714)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2604), BgL_vectorz00_2603); 
FAILURE(BgL_auxz00_5920,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 377 */
long BgL_oldzd2lenzd2_1231;
{ /* Llib/hash.scm 378 */
obj_t BgL_auxz00_5925;
{ /* Llib/hash.scm 378 */
bool_t BgL_testz00_5926;
if(
PAIRP(BgL_lz00_1230))
{ /* Llib/hash.scm 378 */
BgL_testz00_5926 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 378 */
BgL_testz00_5926 = 
NULLP(BgL_lz00_1230)
; } 
if(BgL_testz00_5926)
{ /* Llib/hash.scm 378 */
BgL_auxz00_5925 = BgL_lz00_1230
; }  else 
{ 
obj_t BgL_auxz00_5930;
BgL_auxz00_5930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14775)), BGl_string3486z00zz__hashz00, BGl_string3451z00zz__hashz00, BgL_lz00_1230); 
FAILURE(BgL_auxz00_5930,BFALSE,BFALSE);} } 
BgL_oldzd2lenzd2_1231 = 
bgl_list_length(BgL_auxz00_5925); } 
{ /* Llib/hash.scm 378 */
obj_t BgL_newlz00_1232;
{ /* Llib/hash.scm 380 */
obj_t BgL_zc3anonymousza32145ze3z83_3636;
BgL_zc3anonymousza32145ze3z83_3636 = 
make_fx_procedure(BGl_zc3anonymousza32145ze3z83zz__hashz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32145ze3z83_3636, 
(int)(((long)0)), BgL_funz00_62); 
{ /* Llib/hash.scm 379 */
obj_t BgL_auxz00_5940;
{ /* Llib/hash.scm 381 */
bool_t BgL_testz00_5941;
if(
PAIRP(BgL_lz00_1230))
{ /* Llib/hash.scm 381 */
BgL_testz00_5941 = ((bool_t)1)
; }  else 
{ /* Llib/hash.scm 381 */
BgL_testz00_5941 = 
NULLP(BgL_lz00_1230)
; } 
if(BgL_testz00_5941)
{ /* Llib/hash.scm 381 */
BgL_auxz00_5940 = BgL_lz00_1230
; }  else 
{ 
obj_t BgL_auxz00_5945;
BgL_auxz00_5945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14929)), BGl_string3486z00zz__hashz00, BGl_string3451z00zz__hashz00, BgL_lz00_1230); 
FAILURE(BgL_auxz00_5945,BFALSE,BFALSE);} } 
BgL_newlz00_1232 = 
BGl_filterz12z12zz__r4_control_features_6_9z00(BgL_zc3anonymousza32145ze3z83_3636, BgL_auxz00_5940); } } 
{ /* Llib/hash.scm 379 */
long BgL_newzd2lenzd2_1233;
BgL_newzd2lenzd2_1233 = 
bgl_list_length(BgL_newlz00_1232); 
{ /* Llib/hash.scm 382 */

{ /* Llib/hash.scm 383 */
obj_t BgL_vectorz00_2609;int BgL_kz00_2610;
BgL_vectorz00_2609 = BgL_bucketsz00_1223; 
BgL_kz00_2610 = 
(int)(BgL_iz00_1226); 
{ /* Llib/hash.scm 383 */
int BgL_l2749z00_3709;
BgL_l2749z00_3709 = 
VECTOR_LENGTH(BgL_vectorz00_2609); 
if(
BOUND_CHECK(BgL_kz00_2610, BgL_l2749z00_3709))
{ /* Llib/hash.scm 383 */
VECTOR_SET(BgL_vectorz00_2609,BgL_kz00_2610,BgL_newlz00_1232); }  else 
{ 
obj_t BgL_auxz00_5956;
BgL_auxz00_5956 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14980)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2610), BgL_vectorz00_2609); 
FAILURE(BgL_auxz00_5956,BFALSE,BFALSE);} } } 
{ 
long BgL_deltaz00_5963;long BgL_iz00_5961;
BgL_iz00_5961 = 
(BgL_iz00_1226+((long)1)); 
BgL_deltaz00_5963 = 
(BgL_deltaz00_1227+
(BgL_newzd2lenzd2_1233-BgL_oldzd2lenzd2_1231)); 
BgL_deltaz00_1227 = BgL_deltaz00_5963; 
BgL_iz00_1226 = BgL_iz00_5961; 
goto BgL_zc3anonymousza32137ze3z83_1228;} } } } } }  else 
{ /* Llib/hash.scm 386 */
long BgL_arg2148z00_1243;
{ /* Llib/hash.scm 386 */
obj_t BgL_arg2149z00_1244;
{ /* Llib/hash.scm 386 */
bool_t BgL_testz00_5966;
{ /* Llib/hash.scm 386 */
obj_t BgL_auxz00_5967;
{ /* Llib/hash.scm 386 */
obj_t BgL_res2619z00_2623;
{ /* Llib/hash.scm 386 */
obj_t BgL_aux3051z00_4017;
BgL_aux3051z00_4017 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3051z00_4017))
{ /* Llib/hash.scm 386 */
BgL_res2619z00_2623 = BgL_aux3051z00_4017; }  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15150)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3051z00_4017); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} } 
BgL_auxz00_5967 = BgL_res2619z00_2623; } 
BgL_testz00_5966 = 
(BgL_auxz00_5967==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5966)
{ /* Llib/hash.scm 386 */
int BgL_auxz00_5976;
BgL_auxz00_5976 = 
(int)(((long)0)); 
BgL_arg2149z00_1244 = 
STRUCT_REF(BgL_tablez00_61, BgL_auxz00_5976); }  else 
{ /* Llib/hash.scm 386 */
BgL_arg2149z00_1244 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_61); } } 
{ /* Llib/hash.scm 386 */
long BgL_za72za7_2625;
{ /* Llib/hash.scm 386 */
obj_t BgL_auxz00_5980;
if(
INTEGERP(BgL_arg2149z00_1244))
{ /* Llib/hash.scm 386 */
BgL_auxz00_5980 = BgL_arg2149z00_1244
; }  else 
{ 
obj_t BgL_auxz00_5983;
BgL_auxz00_5983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15139)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2149z00_1244); 
FAILURE(BgL_auxz00_5983,BFALSE,BFALSE);} 
BgL_za72za7_2625 = 
(long)CINT(BgL_auxz00_5980); } 
BgL_arg2148z00_1243 = 
(BgL_deltaz00_1227+BgL_za72za7_2625); } } 
{ /* Llib/hash.scm 385 */
bool_t BgL_testz00_5989;
{ /* Llib/hash.scm 385 */
obj_t BgL_auxz00_5990;
{ /* Llib/hash.scm 385 */
obj_t BgL_res2620z00_2632;
{ /* Llib/hash.scm 385 */
obj_t BgL_aux3055z00_4021;
BgL_aux3055z00_4021 = 
STRUCT_KEY(BgL_tablez00_61); 
if(
SYMBOLP(BgL_aux3055z00_4021))
{ /* Llib/hash.scm 385 */
BgL_res2620z00_2632 = BgL_aux3055z00_4021; }  else 
{ 
obj_t BgL_auxz00_5994;
BgL_auxz00_5994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15076)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3055z00_4021); 
FAILURE(BgL_auxz00_5994,BFALSE,BFALSE);} } 
BgL_auxz00_5990 = BgL_res2620z00_2632; } 
BgL_testz00_5989 = 
(BgL_auxz00_5990==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_5989)
{ /* Llib/hash.scm 385 */
obj_t BgL_auxz00_6001;int BgL_auxz00_5999;
BgL_auxz00_6001 = 
BINT(BgL_arg2148z00_1243); 
BgL_auxz00_5999 = 
(int)(((long)0)); 
return 
STRUCT_SET(BgL_tablez00_61, BgL_auxz00_5999, BgL_auxz00_6001);}  else 
{ /* Llib/hash.scm 385 */
return 
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_61);} } } } } } } } 
}



/* <anonymous:2145> */
obj_t BGl_zc3anonymousza32145ze3z83zz__hashz00(obj_t BgL_envz00_3637, obj_t BgL_cellz00_3639)
{ AN_OBJECT;
{ /* Llib/hash.scm 379 */
{ /* Llib/hash.scm 380 */
obj_t BgL_funz00_3638;
BgL_funz00_3638 = 
PROCEDURE_REF(BgL_envz00_3637, 
(int)(((long)0))); 
{ 
obj_t BgL_cellz00_1238;
BgL_cellz00_1238 = BgL_cellz00_3639; 
{ /* Llib/hash.scm 380 */
obj_t BgL_arg2146z00_2605;obj_t BgL_arg2147z00_2606;
{ /* Llib/hash.scm 380 */
obj_t BgL_pairz00_2607;
if(
PAIRP(BgL_cellz00_1238))
{ /* Llib/hash.scm 380 */
BgL_pairz00_2607 = BgL_cellz00_1238; }  else 
{ 
obj_t BgL_auxz00_6009;
BgL_auxz00_6009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14875)), BGl_string3487z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_cellz00_1238); 
FAILURE(BgL_auxz00_6009,BFALSE,BFALSE);} 
BgL_arg2146z00_2605 = 
CAR(BgL_pairz00_2607); } 
BgL_arg2147z00_2606 = 
CDR(BgL_cellz00_1238); 
{ /* Llib/hash.scm 380 */
obj_t BgL_funz00_4029;
if(
PROCEDUREP(BgL_funz00_3638))
{ /* Llib/hash.scm 380 */
BgL_funz00_4029 = BgL_funz00_3638; }  else 
{ 
obj_t BgL_auxz00_6017;
BgL_auxz00_6017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)14870)), BGl_string3487z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_funz00_3638); 
FAILURE(BgL_auxz00_6017,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4029, ((long)2)))
{ /* Llib/hash.scm 380 */
return 
PROCEDURE_ENTRY(BgL_funz00_4029)(BgL_funz00_3638, BgL_arg2146z00_2605, BgL_arg2147z00_2606, BEOA);}  else 
{ /* Llib/hash.scm 380 */
FAILURE(BGl_string3488z00zz__hashz00,BGl_list3489z00zz__hashz00,BgL_funz00_4029);} } } } } } 
}



/* hashtable-contains? */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2containszf3z21zz__hashz00(obj_t BgL_tablez00_63, obj_t BgL_keyz00_64)
{ AN_OBJECT;
{ /* Llib/hash.scm 391 */
{ /* Llib/hash.scm 392 */
bool_t BgL_testz00_6026;
{ /* Llib/hash.scm 392 */
bool_t BgL_res2622z00_2646;
{ /* Llib/hash.scm 392 */
bool_t BgL_testz00_6027;
{ /* Llib/hash.scm 392 */
obj_t BgL_arg2065z00_2637;
{ /* Llib/hash.scm 392 */
bool_t BgL_testz00_6028;
{ /* Llib/hash.scm 392 */
obj_t BgL_auxz00_6029;
{ /* Llib/hash.scm 392 */
obj_t BgL_res2621z00_2643;
{ /* Llib/hash.scm 392 */
obj_t BgL_aux3065z00_4032;
BgL_aux3065z00_4032 = 
STRUCT_KEY(BgL_tablez00_63); 
if(
SYMBOLP(BgL_aux3065z00_4032))
{ /* Llib/hash.scm 392 */
BgL_res2621z00_2643 = BgL_aux3065z00_4032; }  else 
{ 
obj_t BgL_auxz00_6033;
BgL_auxz00_6033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15463)), BGl_string3494z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3065z00_4032); 
FAILURE(BgL_auxz00_6033,BFALSE,BFALSE);} } 
BgL_auxz00_6029 = BgL_res2621z00_2643; } 
BgL_testz00_6028 = 
(BgL_auxz00_6029==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6028)
{ /* Llib/hash.scm 392 */
int BgL_auxz00_6038;
BgL_auxz00_6038 = 
(int)(((long)5)); 
BgL_arg2065z00_2637 = 
STRUCT_REF(BgL_tablez00_63, BgL_auxz00_6038); }  else 
{ /* Llib/hash.scm 392 */
BgL_arg2065z00_2637 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_63); } } 
{ /* Llib/hash.scm 392 */
long BgL_n2z00_2645;
{ /* Llib/hash.scm 392 */
obj_t BgL_auxz00_6042;
if(
INTEGERP(BgL_arg2065z00_2637))
{ /* Llib/hash.scm 392 */
BgL_auxz00_6042 = BgL_arg2065z00_2637
; }  else 
{ 
obj_t BgL_auxz00_6045;
BgL_auxz00_6045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15463)), BGl_string3494z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2637); 
FAILURE(BgL_auxz00_6045,BFALSE,BFALSE);} 
BgL_n2z00_2645 = 
(long)CINT(BgL_auxz00_6042); } 
BgL_testz00_6027 = 
(((long)0)==BgL_n2z00_2645); } } 
if(BgL_testz00_6027)
{ /* Llib/hash.scm 392 */
BgL_res2622z00_2646 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 392 */
BgL_res2622z00_2646 = ((bool_t)1); } } 
BgL_testz00_6026 = BgL_res2622z00_2646; } 
if(BgL_testz00_6026)
{ /* Llib/hash.scm 392 */
return 
BGl_weakzd2hashtablezd2containszf3zf3zz__weakhashz00(BgL_tablez00_63, BgL_keyz00_64);}  else 
{ /* Llib/hash.scm 392 */
return 
BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(BgL_tablez00_63, BgL_keyz00_64);} } } 
}



/* _hashtable-contains? */
obj_t BGl__hashtablezd2containszf3z21zz__hashz00(obj_t BgL_envz00_3640, obj_t BgL_tablez00_3641, obj_t BgL_keyz00_3642)
{ AN_OBJECT;
{ /* Llib/hash.scm 391 */
{ /* Llib/hash.scm 392 */
bool_t BgL_auxz00_6053;
{ /* Llib/hash.scm 392 */
obj_t BgL_auxz00_6054;
if(
STRUCTP(BgL_tablez00_3641))
{ /* Llib/hash.scm 392 */
BgL_auxz00_6054 = BgL_tablez00_3641
; }  else 
{ 
obj_t BgL_auxz00_6057;
BgL_auxz00_6057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15459)), BGl_string3495z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3641); 
FAILURE(BgL_auxz00_6057,BFALSE,BFALSE);} 
BgL_auxz00_6053 = 
BGl_hashtablezd2containszf3z21zz__hashz00(BgL_auxz00_6054, BgL_keyz00_3642); } 
return 
BBOOL(BgL_auxz00_6053);} } 
}



/* plain-hashtable-contains? */
bool_t BGl_plainzd2hashtablezd2containszf3zf3zz__hashz00(obj_t BgL_tablez00_65, obj_t BgL_keyz00_66)
{ AN_OBJECT;
{ /* Llib/hash.scm 399 */
{ /* Llib/hash.scm 400 */
obj_t BgL_bucketsz00_1247;
{ /* Llib/hash.scm 400 */
bool_t BgL_testz00_6063;
{ /* Llib/hash.scm 400 */
obj_t BgL_auxz00_6064;
{ /* Llib/hash.scm 400 */
obj_t BgL_res2623z00_2652;
{ /* Llib/hash.scm 400 */
obj_t BgL_aux3071z00_4038;
BgL_aux3071z00_4038 = 
STRUCT_KEY(BgL_tablez00_65); 
if(
SYMBOLP(BgL_aux3071z00_4038))
{ /* Llib/hash.scm 400 */
BgL_res2623z00_2652 = BgL_aux3071z00_4038; }  else 
{ 
obj_t BgL_auxz00_6068;
BgL_auxz00_6068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15879)), BGl_string3496z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3071z00_4038); 
FAILURE(BgL_auxz00_6068,BFALSE,BFALSE);} } 
BgL_auxz00_6064 = BgL_res2623z00_2652; } 
BgL_testz00_6063 = 
(BgL_auxz00_6064==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6063)
{ /* Llib/hash.scm 400 */
int BgL_auxz00_6073;
BgL_auxz00_6073 = 
(int)(((long)2)); 
BgL_bucketsz00_1247 = 
STRUCT_REF(BgL_tablez00_65, BgL_auxz00_6073); }  else 
{ /* Llib/hash.scm 400 */
BgL_bucketsz00_1247 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_65); } } 
{ /* Llib/hash.scm 400 */
int BgL_bucketzd2lenzd2_1248;
{ /* Llib/hash.scm 401 */
obj_t BgL_vectorz00_2653;
if(
VECTORP(BgL_bucketsz00_1247))
{ /* Llib/hash.scm 401 */
BgL_vectorz00_2653 = BgL_bucketsz00_1247; }  else 
{ 
obj_t BgL_auxz00_6079;
BgL_auxz00_6079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15937)), BGl_string3496z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1247); 
FAILURE(BgL_auxz00_6079,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1248 = 
VECTOR_LENGTH(BgL_vectorz00_2653); } 
{ /* Llib/hash.scm 401 */
long BgL_bucketzd2numzd2_1249;
{ /* Llib/hash.scm 402 */
long BgL_arg2156z00_1259;
{ /* Llib/hash.scm 402 */
long BgL_res2626z00_2672;
{ /* Llib/hash.scm 402 */
obj_t BgL_hashnz00_2656;
{ /* Llib/hash.scm 402 */
bool_t BgL_testz00_6084;
{ /* Llib/hash.scm 402 */
obj_t BgL_auxz00_6085;
{ /* Llib/hash.scm 402 */
obj_t BgL_res2624z00_2664;
{ /* Llib/hash.scm 402 */
obj_t BgL_aux3075z00_4042;
BgL_aux3075z00_4042 = 
STRUCT_KEY(BgL_tablez00_65); 
if(
SYMBOLP(BgL_aux3075z00_4042))
{ /* Llib/hash.scm 402 */
BgL_res2624z00_2664 = BgL_aux3075z00_4042; }  else 
{ 
obj_t BgL_auxz00_6089;
BgL_auxz00_6089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15975)), BGl_string3496z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3075z00_4042); 
FAILURE(BgL_auxz00_6089,BFALSE,BFALSE);} } 
BgL_auxz00_6085 = BgL_res2624z00_2664; } 
BgL_testz00_6084 = 
(BgL_auxz00_6085==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6084)
{ /* Llib/hash.scm 402 */
int BgL_auxz00_6094;
BgL_auxz00_6094 = 
(int)(((long)4)); 
BgL_hashnz00_2656 = 
STRUCT_REF(BgL_tablez00_65, BgL_auxz00_6094); }  else 
{ /* Llib/hash.scm 402 */
BgL_hashnz00_2656 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_65); } } 
if(
PROCEDUREP(BgL_hashnz00_2656))
{ /* Llib/hash.scm 402 */
obj_t BgL_arg1974z00_2658;
{ /* Llib/hash.scm 402 */
obj_t BgL_funz00_4044;
BgL_funz00_4044 = BgL_hashnz00_2656; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4044, ((long)1)))
{ /* Llib/hash.scm 402 */
BgL_arg1974z00_2658 = 
PROCEDURE_ENTRY(BgL_funz00_4044)(BgL_hashnz00_2656, BgL_keyz00_66, BEOA); }  else 
{ /* Llib/hash.scm 402 */
FAILURE(BGl_string3497z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4044);} } 
{ /* Llib/hash.scm 402 */
long BgL_nz00_2666;
{ /* Llib/hash.scm 402 */
obj_t BgL_auxz00_6105;
if(
INTEGERP(BgL_arg1974z00_2658))
{ /* Llib/hash.scm 402 */
BgL_auxz00_6105 = BgL_arg1974z00_2658
; }  else 
{ 
obj_t BgL_auxz00_6108;
BgL_auxz00_6108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)15975)), BGl_string3496z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_2658); 
FAILURE(BgL_auxz00_6108,BFALSE,BFALSE);} 
BgL_nz00_2666 = 
(long)CINT(BgL_auxz00_6105); } 
if(
(BgL_nz00_2666<((long)0)))
{ /* Llib/hash.scm 402 */
BgL_res2626z00_2672 = 
NEG(BgL_nz00_2666); }  else 
{ /* Llib/hash.scm 402 */
BgL_res2626z00_2672 = BgL_nz00_2666; } } }  else 
{ /* Llib/hash.scm 402 */
BgL_res2626z00_2672 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_66); } } 
BgL_arg2156z00_1259 = BgL_res2626z00_2672; } 
{ /* Llib/hash.scm 402 */
long BgL_auxz00_6117;
BgL_auxz00_6117 = 
(long)(BgL_bucketzd2lenzd2_1248); 
BgL_bucketzd2numzd2_1249 = 
(BgL_arg2156z00_1259%BgL_auxz00_6117); } } 
{ /* Llib/hash.scm 402 */
obj_t BgL_bucketz00_1250;
{ /* Llib/hash.scm 403 */
obj_t BgL_vectorz00_2675;int BgL_kz00_2676;
BgL_vectorz00_2675 = BgL_bucketsz00_1247; 
BgL_kz00_2676 = 
(int)(BgL_bucketzd2numzd2_1249); 
{ /* Llib/hash.scm 403 */
int BgL_l2753z00_3713;
BgL_l2753z00_3713 = 
VECTOR_LENGTH(BgL_vectorz00_2675); 
if(
BOUND_CHECK(BgL_kz00_2676, BgL_l2753z00_3713))
{ /* Llib/hash.scm 403 */
BgL_bucketz00_1250 = 
VECTOR_REF(BgL_vectorz00_2675,BgL_kz00_2676); }  else 
{ 
obj_t BgL_auxz00_6125;
BgL_auxz00_6125 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16032)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2676), BgL_vectorz00_2675); 
FAILURE(BgL_auxz00_6125,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 403 */

{ 
obj_t BgL_bucketz00_1252;
BgL_bucketz00_1252 = BgL_bucketz00_1250; 
BgL_zc3anonymousza32151ze3z83_1253:
if(
NULLP(BgL_bucketz00_1252))
{ /* Llib/hash.scm 406 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 408 */
bool_t BgL_testz00_6132;
{ /* Llib/hash.scm 408 */
obj_t BgL_arg2155z00_1257;
{ /* Llib/hash.scm 408 */
obj_t BgL_pairz00_2678;
if(
PAIRP(BgL_bucketz00_1252))
{ /* Llib/hash.scm 408 */
BgL_pairz00_2678 = BgL_bucketz00_1252; }  else 
{ 
obj_t BgL_auxz00_6135;
BgL_auxz00_6135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16175)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1252); 
FAILURE(BgL_auxz00_6135,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 408 */
obj_t BgL_pairz00_2681;
{ /* Llib/hash.scm 408 */
obj_t BgL_aux3085z00_4053;
BgL_aux3085z00_4053 = 
CAR(BgL_pairz00_2678); 
if(
PAIRP(BgL_aux3085z00_4053))
{ /* Llib/hash.scm 408 */
BgL_pairz00_2681 = BgL_aux3085z00_4053; }  else 
{ 
obj_t BgL_auxz00_6142;
BgL_auxz00_6142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16169)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3085z00_4053); 
FAILURE(BgL_auxz00_6142,BFALSE,BFALSE);} } 
BgL_arg2155z00_1257 = 
CAR(BgL_pairz00_2681); } } 
{ /* Llib/hash.scm 408 */
obj_t BgL_eqtz00_2685;
{ /* Llib/hash.scm 408 */
bool_t BgL_testz00_6147;
{ /* Llib/hash.scm 408 */
obj_t BgL_auxz00_6148;
{ /* Llib/hash.scm 408 */
obj_t BgL_res2627z00_2694;
{ /* Llib/hash.scm 408 */
obj_t BgL_aux3087z00_4055;
BgL_aux3087z00_4055 = 
STRUCT_KEY(BgL_tablez00_65); 
if(
SYMBOLP(BgL_aux3087z00_4055))
{ /* Llib/hash.scm 408 */
BgL_res2627z00_2694 = BgL_aux3087z00_4055; }  else 
{ 
obj_t BgL_auxz00_6152;
BgL_auxz00_6152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16145)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3087z00_4055); 
FAILURE(BgL_auxz00_6152,BFALSE,BFALSE);} } 
BgL_auxz00_6148 = BgL_res2627z00_2694; } 
BgL_testz00_6147 = 
(BgL_auxz00_6148==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6147)
{ /* Llib/hash.scm 408 */
int BgL_auxz00_6157;
BgL_auxz00_6157 = 
(int)(((long)3)); 
BgL_eqtz00_2685 = 
STRUCT_REF(BgL_tablez00_65, BgL_auxz00_6157); }  else 
{ /* Llib/hash.scm 408 */
BgL_eqtz00_2685 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_65); } } 
if(
PROCEDUREP(BgL_eqtz00_2685))
{ /* Llib/hash.scm 408 */
obj_t BgL_funz00_4057;
BgL_funz00_4057 = BgL_eqtz00_2685; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4057, ((long)2)))
{ /* Llib/hash.scm 408 */
BgL_testz00_6132 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4057)(BgL_eqtz00_2685, BgL_arg2155z00_1257, BgL_keyz00_66, BEOA))
; }  else 
{ /* Llib/hash.scm 408 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4057);} }  else 
{ /* Llib/hash.scm 408 */
if(
STRINGP(BgL_arg2155z00_1257))
{ /* Llib/hash.scm 408 */
if(
STRINGP(BgL_keyz00_66))
{ /* Llib/hash.scm 408 */
BgL_testz00_6132 = 
bigloo_strcmp(BgL_arg2155z00_1257, BgL_keyz00_66)
; }  else 
{ /* Llib/hash.scm 408 */
BgL_testz00_6132 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 408 */
BgL_testz00_6132 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2155z00_1257, BgL_keyz00_66)
; } } } } 
if(BgL_testz00_6132)
{ /* Llib/hash.scm 408 */
return ((bool_t)1);}  else 
{ /* Llib/hash.scm 411 */
obj_t BgL_arg2154z00_1256;
{ /* Llib/hash.scm 411 */
obj_t BgL_pairz00_2700;
if(
PAIRP(BgL_bucketz00_1252))
{ /* Llib/hash.scm 411 */
BgL_pairz00_2700 = BgL_bucketz00_1252; }  else 
{ 
obj_t BgL_auxz00_6177;
BgL_auxz00_6177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16226)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1252); 
FAILURE(BgL_auxz00_6177,BFALSE,BFALSE);} 
BgL_arg2154z00_1256 = 
CDR(BgL_pairz00_2700); } 
{ 
obj_t BgL_bucketz00_6182;
BgL_bucketz00_6182 = BgL_arg2154z00_1256; 
BgL_bucketz00_1252 = BgL_bucketz00_6182; 
goto BgL_zc3anonymousza32151ze3z83_1253;} } } } } } } } } } 
}



/* hashtable-get */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t BgL_tablez00_67, obj_t BgL_keyz00_68)
{ AN_OBJECT;
{ /* Llib/hash.scm 416 */
{ /* Llib/hash.scm 417 */
bool_t BgL_testz00_6183;
{ /* Llib/hash.scm 417 */
bool_t BgL_res2629z00_2714;
{ /* Llib/hash.scm 417 */
bool_t BgL_testz00_6184;
{ /* Llib/hash.scm 417 */
obj_t BgL_arg2065z00_2705;
{ /* Llib/hash.scm 417 */
bool_t BgL_testz00_6185;
{ /* Llib/hash.scm 417 */
obj_t BgL_auxz00_6186;
{ /* Llib/hash.scm 417 */
obj_t BgL_res2628z00_2711;
{ /* Llib/hash.scm 417 */
obj_t BgL_aux3093z00_4062;
BgL_aux3093z00_4062 = 
STRUCT_KEY(BgL_tablez00_67); 
if(
SYMBOLP(BgL_aux3093z00_4062))
{ /* Llib/hash.scm 417 */
BgL_res2628z00_2711 = BgL_aux3093z00_4062; }  else 
{ 
obj_t BgL_auxz00_6190;
BgL_auxz00_6190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16517)), BGl_string3511z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3093z00_4062); 
FAILURE(BgL_auxz00_6190,BFALSE,BFALSE);} } 
BgL_auxz00_6186 = BgL_res2628z00_2711; } 
BgL_testz00_6185 = 
(BgL_auxz00_6186==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6185)
{ /* Llib/hash.scm 417 */
int BgL_auxz00_6195;
BgL_auxz00_6195 = 
(int)(((long)5)); 
BgL_arg2065z00_2705 = 
STRUCT_REF(BgL_tablez00_67, BgL_auxz00_6195); }  else 
{ /* Llib/hash.scm 417 */
BgL_arg2065z00_2705 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_67); } } 
{ /* Llib/hash.scm 417 */
long BgL_n2z00_2713;
{ /* Llib/hash.scm 417 */
obj_t BgL_auxz00_6199;
if(
INTEGERP(BgL_arg2065z00_2705))
{ /* Llib/hash.scm 417 */
BgL_auxz00_6199 = BgL_arg2065z00_2705
; }  else 
{ 
obj_t BgL_auxz00_6202;
BgL_auxz00_6202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16517)), BGl_string3511z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2705); 
FAILURE(BgL_auxz00_6202,BFALSE,BFALSE);} 
BgL_n2z00_2713 = 
(long)CINT(BgL_auxz00_6199); } 
BgL_testz00_6184 = 
(((long)0)==BgL_n2z00_2713); } } 
if(BgL_testz00_6184)
{ /* Llib/hash.scm 417 */
BgL_res2629z00_2714 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 417 */
BgL_res2629z00_2714 = ((bool_t)1); } } 
BgL_testz00_6183 = BgL_res2629z00_2714; } 
if(BgL_testz00_6183)
{ /* Llib/hash.scm 417 */
return 
BGl_weakzd2hashtablezd2getz00zz__weakhashz00(BgL_tablez00_67, BgL_keyz00_68);}  else 
{ /* Llib/hash.scm 417 */
return 
BGl_plainzd2hashtablezd2getz00zz__hashz00(BgL_tablez00_67, BgL_keyz00_68);} } } 
}



/* _hashtable-get */
obj_t BGl__hashtablezd2getzd2zz__hashz00(obj_t BgL_envz00_3643, obj_t BgL_tablez00_3644, obj_t BgL_keyz00_3645)
{ AN_OBJECT;
{ /* Llib/hash.scm 416 */
{ /* Llib/hash.scm 417 */
obj_t BgL_auxz00_6210;
if(
STRUCTP(BgL_tablez00_3644))
{ /* Llib/hash.scm 417 */
BgL_auxz00_6210 = BgL_tablez00_3644
; }  else 
{ 
obj_t BgL_auxz00_6213;
BgL_auxz00_6213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16513)), BGl_string3512z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3644); 
FAILURE(BgL_auxz00_6213,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_6210, BgL_keyz00_3645);} } 
}



/* plain-hashtable-get */
obj_t BGl_plainzd2hashtablezd2getz00zz__hashz00(obj_t BgL_tablez00_69, obj_t BgL_keyz00_70)
{ AN_OBJECT;
{ /* Llib/hash.scm 424 */
{ /* Llib/hash.scm 425 */
obj_t BgL_bucketsz00_1261;
{ /* Llib/hash.scm 425 */
bool_t BgL_testz00_6218;
{ /* Llib/hash.scm 425 */
obj_t BgL_auxz00_6219;
{ /* Llib/hash.scm 425 */
obj_t BgL_res2630z00_2720;
{ /* Llib/hash.scm 425 */
obj_t BgL_aux3099z00_4068;
BgL_aux3099z00_4068 = 
STRUCT_KEY(BgL_tablez00_69); 
if(
SYMBOLP(BgL_aux3099z00_4068))
{ /* Llib/hash.scm 425 */
BgL_res2630z00_2720 = BgL_aux3099z00_4068; }  else 
{ 
obj_t BgL_auxz00_6223;
BgL_auxz00_6223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16915)), BGl_string3513z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3099z00_4068); 
FAILURE(BgL_auxz00_6223,BFALSE,BFALSE);} } 
BgL_auxz00_6219 = BgL_res2630z00_2720; } 
BgL_testz00_6218 = 
(BgL_auxz00_6219==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6218)
{ /* Llib/hash.scm 425 */
int BgL_auxz00_6228;
BgL_auxz00_6228 = 
(int)(((long)2)); 
BgL_bucketsz00_1261 = 
STRUCT_REF(BgL_tablez00_69, BgL_auxz00_6228); }  else 
{ /* Llib/hash.scm 425 */
BgL_bucketsz00_1261 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_69); } } 
{ /* Llib/hash.scm 425 */
int BgL_bucketzd2lenzd2_1262;
{ /* Llib/hash.scm 426 */
obj_t BgL_vectorz00_2721;
if(
VECTORP(BgL_bucketsz00_1261))
{ /* Llib/hash.scm 426 */
BgL_vectorz00_2721 = BgL_bucketsz00_1261; }  else 
{ 
obj_t BgL_auxz00_6234;
BgL_auxz00_6234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)16973)), BGl_string3513z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1261); 
FAILURE(BgL_auxz00_6234,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1262 = 
VECTOR_LENGTH(BgL_vectorz00_2721); } 
{ /* Llib/hash.scm 426 */
long BgL_bucketzd2numzd2_1263;
{ /* Llib/hash.scm 427 */
long BgL_arg2163z00_1273;
{ /* Llib/hash.scm 427 */
long BgL_res2633z00_2740;
{ /* Llib/hash.scm 427 */
obj_t BgL_hashnz00_2724;
{ /* Llib/hash.scm 427 */
bool_t BgL_testz00_6239;
{ /* Llib/hash.scm 427 */
obj_t BgL_auxz00_6240;
{ /* Llib/hash.scm 427 */
obj_t BgL_res2631z00_2732;
{ /* Llib/hash.scm 427 */
obj_t BgL_aux3103z00_4072;
BgL_aux3103z00_4072 = 
STRUCT_KEY(BgL_tablez00_69); 
if(
SYMBOLP(BgL_aux3103z00_4072))
{ /* Llib/hash.scm 427 */
BgL_res2631z00_2732 = BgL_aux3103z00_4072; }  else 
{ 
obj_t BgL_auxz00_6244;
BgL_auxz00_6244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17011)), BGl_string3513z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3103z00_4072); 
FAILURE(BgL_auxz00_6244,BFALSE,BFALSE);} } 
BgL_auxz00_6240 = BgL_res2631z00_2732; } 
BgL_testz00_6239 = 
(BgL_auxz00_6240==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6239)
{ /* Llib/hash.scm 427 */
int BgL_auxz00_6249;
BgL_auxz00_6249 = 
(int)(((long)4)); 
BgL_hashnz00_2724 = 
STRUCT_REF(BgL_tablez00_69, BgL_auxz00_6249); }  else 
{ /* Llib/hash.scm 427 */
BgL_hashnz00_2724 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_69); } } 
if(
PROCEDUREP(BgL_hashnz00_2724))
{ /* Llib/hash.scm 427 */
obj_t BgL_arg1974z00_2726;
{ /* Llib/hash.scm 427 */
obj_t BgL_funz00_4074;
BgL_funz00_4074 = BgL_hashnz00_2724; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4074, ((long)1)))
{ /* Llib/hash.scm 427 */
BgL_arg1974z00_2726 = 
PROCEDURE_ENTRY(BgL_funz00_4074)(BgL_hashnz00_2724, BgL_keyz00_70, BEOA); }  else 
{ /* Llib/hash.scm 427 */
FAILURE(BGl_string3514z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4074);} } 
{ /* Llib/hash.scm 427 */
long BgL_nz00_2734;
{ /* Llib/hash.scm 427 */
obj_t BgL_auxz00_6260;
if(
INTEGERP(BgL_arg1974z00_2726))
{ /* Llib/hash.scm 427 */
BgL_auxz00_6260 = BgL_arg1974z00_2726
; }  else 
{ 
obj_t BgL_auxz00_6263;
BgL_auxz00_6263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17011)), BGl_string3513z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_2726); 
FAILURE(BgL_auxz00_6263,BFALSE,BFALSE);} 
BgL_nz00_2734 = 
(long)CINT(BgL_auxz00_6260); } 
if(
(BgL_nz00_2734<((long)0)))
{ /* Llib/hash.scm 427 */
BgL_res2633z00_2740 = 
NEG(BgL_nz00_2734); }  else 
{ /* Llib/hash.scm 427 */
BgL_res2633z00_2740 = BgL_nz00_2734; } } }  else 
{ /* Llib/hash.scm 427 */
BgL_res2633z00_2740 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_70); } } 
BgL_arg2163z00_1273 = BgL_res2633z00_2740; } 
{ /* Llib/hash.scm 427 */
long BgL_auxz00_6272;
BgL_auxz00_6272 = 
(long)(BgL_bucketzd2lenzd2_1262); 
BgL_bucketzd2numzd2_1263 = 
(BgL_arg2163z00_1273%BgL_auxz00_6272); } } 
{ /* Llib/hash.scm 427 */
obj_t BgL_bucketz00_1264;
{ /* Llib/hash.scm 428 */
obj_t BgL_vectorz00_2743;int BgL_kz00_2744;
BgL_vectorz00_2743 = BgL_bucketsz00_1261; 
BgL_kz00_2744 = 
(int)(BgL_bucketzd2numzd2_1263); 
{ /* Llib/hash.scm 428 */
int BgL_l2757z00_3717;
BgL_l2757z00_3717 = 
VECTOR_LENGTH(BgL_vectorz00_2743); 
if(
BOUND_CHECK(BgL_kz00_2744, BgL_l2757z00_3717))
{ /* Llib/hash.scm 428 */
BgL_bucketz00_1264 = 
VECTOR_REF(BgL_vectorz00_2743,BgL_kz00_2744); }  else 
{ 
obj_t BgL_auxz00_6280;
BgL_auxz00_6280 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17068)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2744), BgL_vectorz00_2743); 
FAILURE(BgL_auxz00_6280,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 428 */

{ 
obj_t BgL_bucketz00_1266;
BgL_bucketz00_1266 = BgL_bucketz00_1264; 
BgL_zc3anonymousza32158ze3z83_1267:
if(
NULLP(BgL_bucketz00_1266))
{ /* Llib/hash.scm 431 */
return BFALSE;}  else 
{ /* Llib/hash.scm 433 */
bool_t BgL_testz00_6287;
{ /* Llib/hash.scm 433 */
obj_t BgL_arg2162z00_1271;
{ /* Llib/hash.scm 433 */
obj_t BgL_pairz00_2746;
if(
PAIRP(BgL_bucketz00_1266))
{ /* Llib/hash.scm 433 */
BgL_pairz00_2746 = BgL_bucketz00_1266; }  else 
{ 
obj_t BgL_auxz00_6290;
BgL_auxz00_6290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17211)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1266); 
FAILURE(BgL_auxz00_6290,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 433 */
obj_t BgL_pairz00_2749;
{ /* Llib/hash.scm 433 */
obj_t BgL_aux3113z00_4083;
BgL_aux3113z00_4083 = 
CAR(BgL_pairz00_2746); 
if(
PAIRP(BgL_aux3113z00_4083))
{ /* Llib/hash.scm 433 */
BgL_pairz00_2749 = BgL_aux3113z00_4083; }  else 
{ 
obj_t BgL_auxz00_6297;
BgL_auxz00_6297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17205)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3113z00_4083); 
FAILURE(BgL_auxz00_6297,BFALSE,BFALSE);} } 
BgL_arg2162z00_1271 = 
CAR(BgL_pairz00_2749); } } 
{ /* Llib/hash.scm 433 */
obj_t BgL_eqtz00_2753;
{ /* Llib/hash.scm 433 */
bool_t BgL_testz00_6302;
{ /* Llib/hash.scm 433 */
obj_t BgL_auxz00_6303;
{ /* Llib/hash.scm 433 */
obj_t BgL_res2634z00_2762;
{ /* Llib/hash.scm 433 */
obj_t BgL_aux3115z00_4085;
BgL_aux3115z00_4085 = 
STRUCT_KEY(BgL_tablez00_69); 
if(
SYMBOLP(BgL_aux3115z00_4085))
{ /* Llib/hash.scm 433 */
BgL_res2634z00_2762 = BgL_aux3115z00_4085; }  else 
{ 
obj_t BgL_auxz00_6307;
BgL_auxz00_6307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17181)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3115z00_4085); 
FAILURE(BgL_auxz00_6307,BFALSE,BFALSE);} } 
BgL_auxz00_6303 = BgL_res2634z00_2762; } 
BgL_testz00_6302 = 
(BgL_auxz00_6303==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6302)
{ /* Llib/hash.scm 433 */
int BgL_auxz00_6312;
BgL_auxz00_6312 = 
(int)(((long)3)); 
BgL_eqtz00_2753 = 
STRUCT_REF(BgL_tablez00_69, BgL_auxz00_6312); }  else 
{ /* Llib/hash.scm 433 */
BgL_eqtz00_2753 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_69); } } 
if(
PROCEDUREP(BgL_eqtz00_2753))
{ /* Llib/hash.scm 433 */
obj_t BgL_funz00_4087;
BgL_funz00_4087 = BgL_eqtz00_2753; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4087, ((long)2)))
{ /* Llib/hash.scm 433 */
BgL_testz00_6287 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4087)(BgL_eqtz00_2753, BgL_arg2162z00_1271, BgL_keyz00_70, BEOA))
; }  else 
{ /* Llib/hash.scm 433 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4087);} }  else 
{ /* Llib/hash.scm 433 */
if(
STRINGP(BgL_arg2162z00_1271))
{ /* Llib/hash.scm 433 */
if(
STRINGP(BgL_keyz00_70))
{ /* Llib/hash.scm 433 */
BgL_testz00_6287 = 
bigloo_strcmp(BgL_arg2162z00_1271, BgL_keyz00_70)
; }  else 
{ /* Llib/hash.scm 433 */
BgL_testz00_6287 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 433 */
BgL_testz00_6287 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2162z00_1271, BgL_keyz00_70)
; } } } } 
if(BgL_testz00_6287)
{ /* Llib/hash.scm 434 */
obj_t BgL_pairz00_2768;
BgL_pairz00_2768 = BgL_bucketz00_1266; 
{ /* Llib/hash.scm 434 */
obj_t BgL_pairz00_2771;
{ /* Llib/hash.scm 434 */
obj_t BgL_aux3121z00_4092;
BgL_aux3121z00_4092 = 
CAR(BgL_pairz00_2768); 
if(
PAIRP(BgL_aux3121z00_4092))
{ /* Llib/hash.scm 434 */
BgL_pairz00_2771 = BgL_aux3121z00_4092; }  else 
{ 
obj_t BgL_auxz00_6333;
BgL_auxz00_6333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17230)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3121z00_4092); 
FAILURE(BgL_auxz00_6333,BFALSE,BFALSE);} } 
return 
CDR(BgL_pairz00_2771);} }  else 
{ /* Llib/hash.scm 436 */
obj_t BgL_arg2161z00_1270;
{ /* Llib/hash.scm 436 */
obj_t BgL_pairz00_2772;
if(
PAIRP(BgL_bucketz00_1266))
{ /* Llib/hash.scm 436 */
BgL_pairz00_2772 = BgL_bucketz00_1266; }  else 
{ 
obj_t BgL_auxz00_6340;
BgL_auxz00_6340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17273)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1266); 
FAILURE(BgL_auxz00_6340,BFALSE,BFALSE);} 
BgL_arg2161z00_1270 = 
CDR(BgL_pairz00_2772); } 
{ 
obj_t BgL_bucketz00_6345;
BgL_bucketz00_6345 = BgL_arg2161z00_1270; 
BgL_bucketz00_1266 = BgL_bucketz00_6345; 
goto BgL_zc3anonymousza32158ze3z83_1267;} } } } } } } } } } 
}



/* hashtable-put! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t BgL_tablez00_71, obj_t BgL_keyz00_72, obj_t BgL_objz00_73)
{ AN_OBJECT;
{ /* Llib/hash.scm 441 */
{ /* Llib/hash.scm 442 */
bool_t BgL_testz00_6346;
{ /* Llib/hash.scm 442 */
bool_t BgL_res2636z00_2786;
{ /* Llib/hash.scm 442 */
bool_t BgL_testz00_6347;
{ /* Llib/hash.scm 442 */
obj_t BgL_arg2065z00_2777;
{ /* Llib/hash.scm 442 */
bool_t BgL_testz00_6348;
{ /* Llib/hash.scm 442 */
obj_t BgL_auxz00_6349;
{ /* Llib/hash.scm 442 */
obj_t BgL_res2635z00_2783;
{ /* Llib/hash.scm 442 */
obj_t BgL_aux3125z00_4096;
BgL_aux3125z00_4096 = 
STRUCT_KEY(BgL_tablez00_71); 
if(
SYMBOLP(BgL_aux3125z00_4096))
{ /* Llib/hash.scm 442 */
BgL_res2635z00_2783 = BgL_aux3125z00_4096; }  else 
{ 
obj_t BgL_auxz00_6353;
BgL_auxz00_6353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17574)), BGl_string3515z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3125z00_4096); 
FAILURE(BgL_auxz00_6353,BFALSE,BFALSE);} } 
BgL_auxz00_6349 = BgL_res2635z00_2783; } 
BgL_testz00_6348 = 
(BgL_auxz00_6349==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6348)
{ /* Llib/hash.scm 442 */
int BgL_auxz00_6358;
BgL_auxz00_6358 = 
(int)(((long)5)); 
BgL_arg2065z00_2777 = 
STRUCT_REF(BgL_tablez00_71, BgL_auxz00_6358); }  else 
{ /* Llib/hash.scm 442 */
BgL_arg2065z00_2777 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_71); } } 
{ /* Llib/hash.scm 442 */
long BgL_n2z00_2785;
{ /* Llib/hash.scm 442 */
obj_t BgL_auxz00_6362;
if(
INTEGERP(BgL_arg2065z00_2777))
{ /* Llib/hash.scm 442 */
BgL_auxz00_6362 = BgL_arg2065z00_2777
; }  else 
{ 
obj_t BgL_auxz00_6365;
BgL_auxz00_6365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17574)), BGl_string3515z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2777); 
FAILURE(BgL_auxz00_6365,BFALSE,BFALSE);} 
BgL_n2z00_2785 = 
(long)CINT(BgL_auxz00_6362); } 
BgL_testz00_6347 = 
(((long)0)==BgL_n2z00_2785); } } 
if(BgL_testz00_6347)
{ /* Llib/hash.scm 442 */
BgL_res2636z00_2786 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 442 */
BgL_res2636z00_2786 = ((bool_t)1); } } 
BgL_testz00_6346 = BgL_res2636z00_2786; } 
if(BgL_testz00_6346)
{ /* Llib/hash.scm 442 */
return 
BGl_weakzd2hashtablezd2putz12z12zz__weakhashz00(BgL_tablez00_71, BgL_keyz00_72, BgL_objz00_73);}  else 
{ /* Llib/hash.scm 442 */
return 
BGl_plainzd2hashtablezd2putz12z12zz__hashz00(BgL_tablez00_71, BgL_keyz00_72, BgL_objz00_73);} } } 
}



/* _hashtable-put! */
obj_t BGl__hashtablezd2putz12zc0zz__hashz00(obj_t BgL_envz00_3646, obj_t BgL_tablez00_3647, obj_t BgL_keyz00_3648, obj_t BgL_objz00_3649)
{ AN_OBJECT;
{ /* Llib/hash.scm 441 */
{ /* Llib/hash.scm 442 */
obj_t BgL_auxz00_6373;
if(
STRUCTP(BgL_tablez00_3647))
{ /* Llib/hash.scm 442 */
BgL_auxz00_6373 = BgL_tablez00_3647
; }  else 
{ 
obj_t BgL_auxz00_6376;
BgL_auxz00_6376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17570)), BGl_string3516z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3647); 
FAILURE(BgL_auxz00_6376,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_6373, BgL_keyz00_3648, BgL_objz00_3649);} } 
}



/* plain-hashtable-put! */
obj_t BGl_plainzd2hashtablezd2putz12z12zz__hashz00(obj_t BgL_tablez00_74, obj_t BgL_keyz00_75, obj_t BgL_objz00_76)
{ AN_OBJECT;
{ /* Llib/hash.scm 449 */
{ /* Llib/hash.scm 450 */
obj_t BgL_bucketsz00_1275;
{ /* Llib/hash.scm 450 */
bool_t BgL_testz00_6381;
{ /* Llib/hash.scm 450 */
obj_t BgL_auxz00_6382;
{ /* Llib/hash.scm 450 */
obj_t BgL_res2637z00_2792;
{ /* Llib/hash.scm 450 */
obj_t BgL_aux3131z00_4102;
BgL_aux3131z00_4102 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3131z00_4102))
{ /* Llib/hash.scm 450 */
BgL_res2637z00_2792 = BgL_aux3131z00_4102; }  else 
{ 
obj_t BgL_auxz00_6386;
BgL_auxz00_6386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)17992)), BGl_string3517z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3131z00_4102); 
FAILURE(BgL_auxz00_6386,BFALSE,BFALSE);} } 
BgL_auxz00_6382 = BgL_res2637z00_2792; } 
BgL_testz00_6381 = 
(BgL_auxz00_6382==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6381)
{ /* Llib/hash.scm 450 */
int BgL_auxz00_6391;
BgL_auxz00_6391 = 
(int)(((long)2)); 
BgL_bucketsz00_1275 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6391); }  else 
{ /* Llib/hash.scm 450 */
BgL_bucketsz00_1275 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 450 */
int BgL_bucketzd2lenzd2_1276;
{ /* Llib/hash.scm 451 */
obj_t BgL_vectorz00_2793;
if(
VECTORP(BgL_bucketsz00_1275))
{ /* Llib/hash.scm 451 */
BgL_vectorz00_2793 = BgL_bucketsz00_1275; }  else 
{ 
obj_t BgL_auxz00_6397;
BgL_auxz00_6397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18050)), BGl_string3517z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1275); 
FAILURE(BgL_auxz00_6397,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1276 = 
VECTOR_LENGTH(BgL_vectorz00_2793); } 
{ /* Llib/hash.scm 451 */
long BgL_bucketzd2numzd2_1277;
{ /* Llib/hash.scm 452 */
long BgL_arg2185z00_1305;
{ /* Llib/hash.scm 452 */
long BgL_res2640z00_2812;
{ /* Llib/hash.scm 452 */
obj_t BgL_hashnz00_2796;
{ /* Llib/hash.scm 452 */
bool_t BgL_testz00_6402;
{ /* Llib/hash.scm 452 */
obj_t BgL_auxz00_6403;
{ /* Llib/hash.scm 452 */
obj_t BgL_res2638z00_2804;
{ /* Llib/hash.scm 452 */
obj_t BgL_aux3135z00_4106;
BgL_aux3135z00_4106 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3135z00_4106))
{ /* Llib/hash.scm 452 */
BgL_res2638z00_2804 = BgL_aux3135z00_4106; }  else 
{ 
obj_t BgL_auxz00_6407;
BgL_auxz00_6407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18088)), BGl_string3517z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3135z00_4106); 
FAILURE(BgL_auxz00_6407,BFALSE,BFALSE);} } 
BgL_auxz00_6403 = BgL_res2638z00_2804; } 
BgL_testz00_6402 = 
(BgL_auxz00_6403==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6402)
{ /* Llib/hash.scm 452 */
int BgL_auxz00_6412;
BgL_auxz00_6412 = 
(int)(((long)4)); 
BgL_hashnz00_2796 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6412); }  else 
{ /* Llib/hash.scm 452 */
BgL_hashnz00_2796 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
if(
PROCEDUREP(BgL_hashnz00_2796))
{ /* Llib/hash.scm 452 */
obj_t BgL_arg1974z00_2798;
{ /* Llib/hash.scm 452 */
obj_t BgL_funz00_4108;
BgL_funz00_4108 = BgL_hashnz00_2796; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4108, ((long)1)))
{ /* Llib/hash.scm 452 */
BgL_arg1974z00_2798 = 
PROCEDURE_ENTRY(BgL_funz00_4108)(BgL_hashnz00_2796, BgL_keyz00_75, BEOA); }  else 
{ /* Llib/hash.scm 452 */
FAILURE(BGl_string3518z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4108);} } 
{ /* Llib/hash.scm 452 */
long BgL_nz00_2806;
{ /* Llib/hash.scm 452 */
obj_t BgL_auxz00_6423;
if(
INTEGERP(BgL_arg1974z00_2798))
{ /* Llib/hash.scm 452 */
BgL_auxz00_6423 = BgL_arg1974z00_2798
; }  else 
{ 
obj_t BgL_auxz00_6426;
BgL_auxz00_6426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18088)), BGl_string3517z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_2798); 
FAILURE(BgL_auxz00_6426,BFALSE,BFALSE);} 
BgL_nz00_2806 = 
(long)CINT(BgL_auxz00_6423); } 
if(
(BgL_nz00_2806<((long)0)))
{ /* Llib/hash.scm 452 */
BgL_res2640z00_2812 = 
NEG(BgL_nz00_2806); }  else 
{ /* Llib/hash.scm 452 */
BgL_res2640z00_2812 = BgL_nz00_2806; } } }  else 
{ /* Llib/hash.scm 452 */
BgL_res2640z00_2812 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_75); } } 
BgL_arg2185z00_1305 = BgL_res2640z00_2812; } 
{ /* Llib/hash.scm 452 */
long BgL_auxz00_6435;
BgL_auxz00_6435 = 
(long)(BgL_bucketzd2lenzd2_1276); 
BgL_bucketzd2numzd2_1277 = 
(BgL_arg2185z00_1305%BgL_auxz00_6435); } } 
{ /* Llib/hash.scm 452 */
obj_t BgL_bucketz00_1278;
{ /* Llib/hash.scm 453 */
obj_t BgL_vectorz00_2815;int BgL_kz00_2816;
BgL_vectorz00_2815 = BgL_bucketsz00_1275; 
BgL_kz00_2816 = 
(int)(BgL_bucketzd2numzd2_1277); 
{ /* Llib/hash.scm 453 */
int BgL_l2761z00_3721;
BgL_l2761z00_3721 = 
VECTOR_LENGTH(BgL_vectorz00_2815); 
if(
BOUND_CHECK(BgL_kz00_2816, BgL_l2761z00_3721))
{ /* Llib/hash.scm 453 */
BgL_bucketz00_1278 = 
VECTOR_REF(BgL_vectorz00_2815,BgL_kz00_2816); }  else 
{ 
obj_t BgL_auxz00_6443;
BgL_auxz00_6443 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18145)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2816), BgL_vectorz00_2815); 
FAILURE(BgL_auxz00_6443,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 453 */
obj_t BgL_maxzd2bucketzd2lenz00_1279;
{ /* Llib/hash.scm 454 */
bool_t BgL_testz00_6448;
{ /* Llib/hash.scm 454 */
obj_t BgL_auxz00_6449;
{ /* Llib/hash.scm 454 */
obj_t BgL_res2641z00_2822;
{ /* Llib/hash.scm 454 */
obj_t BgL_aux3143z00_4115;
BgL_aux3143z00_4115 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3143z00_4115))
{ /* Llib/hash.scm 454 */
BgL_res2641z00_2822 = BgL_aux3143z00_4115; }  else 
{ 
obj_t BgL_auxz00_6453;
BgL_auxz00_6453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18197)), BGl_string3517z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3143z00_4115); 
FAILURE(BgL_auxz00_6453,BFALSE,BFALSE);} } 
BgL_auxz00_6449 = BgL_res2641z00_2822; } 
BgL_testz00_6448 = 
(BgL_auxz00_6449==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6448)
{ /* Llib/hash.scm 454 */
int BgL_auxz00_6458;
BgL_auxz00_6458 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1279 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6458); }  else 
{ /* Llib/hash.scm 454 */
BgL_maxzd2bucketzd2lenz00_1279 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 454 */

if(
NULLP(BgL_bucketz00_1278))
{ /* Llib/hash.scm 455 */
{ /* Llib/hash.scm 457 */
long BgL_arg2166z00_1281;
{ /* Llib/hash.scm 457 */
obj_t BgL_arg2167z00_1282;
{ /* Llib/hash.scm 457 */
bool_t BgL_testz00_6464;
{ /* Llib/hash.scm 457 */
obj_t BgL_auxz00_6465;
{ /* Llib/hash.scm 457 */
obj_t BgL_res2642z00_2829;
{ /* Llib/hash.scm 457 */
obj_t BgL_aux3145z00_4117;
BgL_aux3145z00_4117 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3145z00_4117))
{ /* Llib/hash.scm 457 */
BgL_res2642z00_2829 = BgL_aux3145z00_4117; }  else 
{ 
obj_t BgL_auxz00_6469;
BgL_auxz00_6469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18307)), BGl_string3517z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3145z00_4117); 
FAILURE(BgL_auxz00_6469,BFALSE,BFALSE);} } 
BgL_auxz00_6465 = BgL_res2642z00_2829; } 
BgL_testz00_6464 = 
(BgL_auxz00_6465==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6464)
{ /* Llib/hash.scm 457 */
int BgL_auxz00_6474;
BgL_auxz00_6474 = 
(int)(((long)0)); 
BgL_arg2167z00_1282 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6474); }  else 
{ /* Llib/hash.scm 457 */
BgL_arg2167z00_1282 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 457 */
long BgL_za71za7_2830;
{ /* Llib/hash.scm 457 */
obj_t BgL_auxz00_6478;
if(
INTEGERP(BgL_arg2167z00_1282))
{ /* Llib/hash.scm 457 */
BgL_auxz00_6478 = BgL_arg2167z00_1282
; }  else 
{ 
obj_t BgL_auxz00_6481;
BgL_auxz00_6481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18302)), BGl_string3517z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2167z00_1282); 
FAILURE(BgL_auxz00_6481,BFALSE,BFALSE);} 
BgL_za71za7_2830 = 
(long)CINT(BgL_auxz00_6478); } 
BgL_arg2166z00_1281 = 
(BgL_za71za7_2830+((long)1)); } } 
{ /* Llib/hash.scm 457 */
bool_t BgL_testz00_6487;
{ /* Llib/hash.scm 457 */
obj_t BgL_auxz00_6488;
{ /* Llib/hash.scm 457 */
obj_t BgL_res2643z00_2838;
{ /* Llib/hash.scm 457 */
obj_t BgL_aux3149z00_4121;
BgL_aux3149z00_4121 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3149z00_4121))
{ /* Llib/hash.scm 457 */
BgL_res2643z00_2838 = BgL_aux3149z00_4121; }  else 
{ 
obj_t BgL_auxz00_6492;
BgL_auxz00_6492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18274)), BGl_string3517z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3149z00_4121); 
FAILURE(BgL_auxz00_6492,BFALSE,BFALSE);} } 
BgL_auxz00_6488 = BgL_res2643z00_2838; } 
BgL_testz00_6487 = 
(BgL_auxz00_6488==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6487)
{ /* Llib/hash.scm 457 */
obj_t BgL_auxz00_6499;int BgL_auxz00_6497;
BgL_auxz00_6499 = 
BINT(BgL_arg2166z00_1281); 
BgL_auxz00_6497 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_74, BgL_auxz00_6497, BgL_auxz00_6499); }  else 
{ /* Llib/hash.scm 457 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } } 
{ /* Llib/hash.scm 458 */
obj_t BgL_arg2169z00_1284;
{ /* Llib/hash.scm 458 */
obj_t BgL_arg2170z00_1285;
BgL_arg2170z00_1285 = 
MAKE_PAIR(BgL_keyz00_75, BgL_objz00_76); 
{ /* Llib/hash.scm 458 */
obj_t BgL_list2171z00_1286;
BgL_list2171z00_1286 = 
MAKE_PAIR(BgL_arg2170z00_1285, BNIL); 
BgL_arg2169z00_1284 = BgL_list2171z00_1286; } } 
{ /* Llib/hash.scm 458 */
obj_t BgL_vectorz00_2841;int BgL_kz00_2842;
BgL_vectorz00_2841 = BgL_bucketsz00_1275; 
BgL_kz00_2842 = 
(int)(BgL_bucketzd2numzd2_1277); 
{ /* Llib/hash.scm 458 */
int BgL_l2765z00_3725;
BgL_l2765z00_3725 = 
VECTOR_LENGTH(BgL_vectorz00_2841); 
if(
BOUND_CHECK(BgL_kz00_2842, BgL_l2765z00_3725))
{ /* Llib/hash.scm 458 */
VECTOR_SET(BgL_vectorz00_2841,BgL_kz00_2842,BgL_arg2169z00_1284); }  else 
{ 
obj_t BgL_auxz00_6510;
BgL_auxz00_6510 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18341)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2842), BgL_vectorz00_2841); 
FAILURE(BgL_auxz00_6510,BFALSE,BFALSE);} } } } 
return BgL_objz00_76;}  else 
{ 
obj_t BgL_buckz00_1288;long BgL_countz00_1289;
BgL_buckz00_1288 = BgL_bucketz00_1278; 
BgL_countz00_1289 = ((long)0); 
BgL_zc3anonymousza32172ze3z83_1290:
if(
NULLP(BgL_buckz00_1288))
{ /* Llib/hash.scm 463 */
{ /* Llib/hash.scm 464 */
long BgL_arg2174z00_1292;
{ /* Llib/hash.scm 464 */
obj_t BgL_arg2175z00_1293;
{ /* Llib/hash.scm 464 */
bool_t BgL_testz00_6517;
{ /* Llib/hash.scm 464 */
obj_t BgL_auxz00_6518;
{ /* Llib/hash.scm 464 */
obj_t BgL_res2645z00_2850;
{ /* Llib/hash.scm 464 */
obj_t BgL_aux3153z00_4125;
BgL_aux3153z00_4125 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3153z00_4125))
{ /* Llib/hash.scm 464 */
BgL_res2645z00_2850 = BgL_aux3153z00_4125; }  else 
{ 
obj_t BgL_auxz00_6522;
BgL_auxz00_6522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18517)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3153z00_4125); 
FAILURE(BgL_auxz00_6522,BFALSE,BFALSE);} } 
BgL_auxz00_6518 = BgL_res2645z00_2850; } 
BgL_testz00_6517 = 
(BgL_auxz00_6518==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6517)
{ /* Llib/hash.scm 464 */
int BgL_auxz00_6527;
BgL_auxz00_6527 = 
(int)(((long)0)); 
BgL_arg2175z00_1293 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6527); }  else 
{ /* Llib/hash.scm 464 */
BgL_arg2175z00_1293 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
{ /* Llib/hash.scm 464 */
long BgL_za71za7_2851;
{ /* Llib/hash.scm 464 */
obj_t BgL_auxz00_6531;
if(
INTEGERP(BgL_arg2175z00_1293))
{ /* Llib/hash.scm 464 */
BgL_auxz00_6531 = BgL_arg2175z00_1293
; }  else 
{ 
obj_t BgL_auxz00_6534;
BgL_auxz00_6534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18512)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2175z00_1293); 
FAILURE(BgL_auxz00_6534,BFALSE,BFALSE);} 
BgL_za71za7_2851 = 
(long)CINT(BgL_auxz00_6531); } 
BgL_arg2174z00_1292 = 
(BgL_za71za7_2851+((long)1)); } } 
{ /* Llib/hash.scm 464 */
bool_t BgL_testz00_6540;
{ /* Llib/hash.scm 464 */
obj_t BgL_auxz00_6541;
{ /* Llib/hash.scm 464 */
obj_t BgL_res2646z00_2859;
{ /* Llib/hash.scm 464 */
obj_t BgL_aux3157z00_4129;
BgL_aux3157z00_4129 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3157z00_4129))
{ /* Llib/hash.scm 464 */
BgL_res2646z00_2859 = BgL_aux3157z00_4129; }  else 
{ 
obj_t BgL_auxz00_6545;
BgL_auxz00_6545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18484)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3157z00_4129); 
FAILURE(BgL_auxz00_6545,BFALSE,BFALSE);} } 
BgL_auxz00_6541 = BgL_res2646z00_2859; } 
BgL_testz00_6540 = 
(BgL_auxz00_6541==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6540)
{ /* Llib/hash.scm 464 */
obj_t BgL_auxz00_6552;int BgL_auxz00_6550;
BgL_auxz00_6552 = 
BINT(BgL_arg2174z00_1292); 
BgL_auxz00_6550 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_74, BgL_auxz00_6550, BgL_auxz00_6552); }  else 
{ /* Llib/hash.scm 464 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } } 
{ /* Llib/hash.scm 465 */
obj_t BgL_arg2177z00_1295;
{ /* Llib/hash.scm 465 */
obj_t BgL_arg2178z00_1296;
BgL_arg2178z00_1296 = 
MAKE_PAIR(BgL_keyz00_75, BgL_objz00_76); 
BgL_arg2177z00_1295 = 
MAKE_PAIR(BgL_arg2178z00_1296, BgL_bucketz00_1278); } 
{ /* Llib/hash.scm 465 */
obj_t BgL_vectorz00_2860;int BgL_kz00_2861;
BgL_vectorz00_2860 = BgL_bucketsz00_1275; 
BgL_kz00_2861 = 
(int)(BgL_bucketzd2numzd2_1277); 
{ /* Llib/hash.scm 465 */
int BgL_l2769z00_3729;
BgL_l2769z00_3729 = 
VECTOR_LENGTH(BgL_vectorz00_2860); 
if(
BOUND_CHECK(BgL_kz00_2861, BgL_l2769z00_3729))
{ /* Llib/hash.scm 465 */
VECTOR_SET(BgL_vectorz00_2860,BgL_kz00_2861,BgL_arg2177z00_1295); }  else 
{ 
obj_t BgL_auxz00_6563;
BgL_auxz00_6563 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18548)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2861), BgL_vectorz00_2860); 
FAILURE(BgL_auxz00_6563,BFALSE,BFALSE);} } } } 
{ /* Llib/hash.scm 466 */
bool_t BgL_testz00_6568;
{ /* Llib/hash.scm 466 */
long BgL_n2z00_2864;
{ /* Llib/hash.scm 466 */
obj_t BgL_auxz00_6569;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1279))
{ /* Llib/hash.scm 466 */
BgL_auxz00_6569 = BgL_maxzd2bucketzd2lenz00_1279
; }  else 
{ 
obj_t BgL_auxz00_6572;
BgL_auxz00_6572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18628)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1279); 
FAILURE(BgL_auxz00_6572,BFALSE,BFALSE);} 
BgL_n2z00_2864 = 
(long)CINT(BgL_auxz00_6569); } 
BgL_testz00_6568 = 
(BgL_countz00_1289>BgL_n2z00_2864); } 
if(BgL_testz00_6568)
{ /* Llib/hash.scm 466 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_74); }  else 
{ /* Llib/hash.scm 466 */((bool_t)0); } } 
return BgL_objz00_76;}  else 
{ /* Llib/hash.scm 469 */
bool_t BgL_testz00_6579;
{ /* Llib/hash.scm 469 */
obj_t BgL_arg2184z00_1303;
{ /* Llib/hash.scm 469 */
obj_t BgL_pairz00_2865;
if(
PAIRP(BgL_buckz00_1288))
{ /* Llib/hash.scm 469 */
BgL_pairz00_2865 = BgL_buckz00_1288; }  else 
{ 
obj_t BgL_auxz00_6582;
BgL_auxz00_6582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18725)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1288); 
FAILURE(BgL_auxz00_6582,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 469 */
obj_t BgL_pairz00_2868;
{ /* Llib/hash.scm 469 */
obj_t BgL_aux3165z00_4137;
BgL_aux3165z00_4137 = 
CAR(BgL_pairz00_2865); 
if(
PAIRP(BgL_aux3165z00_4137))
{ /* Llib/hash.scm 469 */
BgL_pairz00_2868 = BgL_aux3165z00_4137; }  else 
{ 
obj_t BgL_auxz00_6589;
BgL_auxz00_6589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18719)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3165z00_4137); 
FAILURE(BgL_auxz00_6589,BFALSE,BFALSE);} } 
BgL_arg2184z00_1303 = 
CAR(BgL_pairz00_2868); } } 
{ /* Llib/hash.scm 469 */
obj_t BgL_eqtz00_2872;
{ /* Llib/hash.scm 469 */
bool_t BgL_testz00_6594;
{ /* Llib/hash.scm 469 */
obj_t BgL_auxz00_6595;
{ /* Llib/hash.scm 469 */
obj_t BgL_res2647z00_2881;
{ /* Llib/hash.scm 469 */
obj_t BgL_aux3167z00_4139;
BgL_aux3167z00_4139 = 
STRUCT_KEY(BgL_tablez00_74); 
if(
SYMBOLP(BgL_aux3167z00_4139))
{ /* Llib/hash.scm 469 */
BgL_res2647z00_2881 = BgL_aux3167z00_4139; }  else 
{ 
obj_t BgL_auxz00_6599;
BgL_auxz00_6599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18695)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3167z00_4139); 
FAILURE(BgL_auxz00_6599,BFALSE,BFALSE);} } 
BgL_auxz00_6595 = BgL_res2647z00_2881; } 
BgL_testz00_6594 = 
(BgL_auxz00_6595==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6594)
{ /* Llib/hash.scm 469 */
int BgL_auxz00_6604;
BgL_auxz00_6604 = 
(int)(((long)3)); 
BgL_eqtz00_2872 = 
STRUCT_REF(BgL_tablez00_74, BgL_auxz00_6604); }  else 
{ /* Llib/hash.scm 469 */
BgL_eqtz00_2872 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_74); } } 
if(
PROCEDUREP(BgL_eqtz00_2872))
{ /* Llib/hash.scm 469 */
obj_t BgL_funz00_4141;
BgL_funz00_4141 = BgL_eqtz00_2872; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4141, ((long)2)))
{ /* Llib/hash.scm 469 */
BgL_testz00_6579 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4141)(BgL_eqtz00_2872, BgL_arg2184z00_1303, BgL_keyz00_75, BEOA))
; }  else 
{ /* Llib/hash.scm 469 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4141);} }  else 
{ /* Llib/hash.scm 469 */
if(
STRINGP(BgL_arg2184z00_1303))
{ /* Llib/hash.scm 469 */
if(
STRINGP(BgL_keyz00_75))
{ /* Llib/hash.scm 469 */
BgL_testz00_6579 = 
bigloo_strcmp(BgL_arg2184z00_1303, BgL_keyz00_75)
; }  else 
{ /* Llib/hash.scm 469 */
BgL_testz00_6579 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 469 */
BgL_testz00_6579 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2184z00_1303, BgL_keyz00_75)
; } } } } 
if(BgL_testz00_6579)
{ /* Llib/hash.scm 470 */
obj_t BgL_oldzd2objzd2_1299;
{ /* Llib/hash.scm 470 */
obj_t BgL_pairz00_2887;
BgL_pairz00_2887 = BgL_buckz00_1288; 
{ /* Llib/hash.scm 470 */
obj_t BgL_pairz00_2890;
{ /* Llib/hash.scm 470 */
obj_t BgL_aux3173z00_4146;
BgL_aux3173z00_4146 = 
CAR(BgL_pairz00_2887); 
if(
PAIRP(BgL_aux3173z00_4146))
{ /* Llib/hash.scm 470 */
BgL_pairz00_2890 = BgL_aux3173z00_4146; }  else 
{ 
obj_t BgL_auxz00_6625;
BgL_auxz00_6625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18754)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3173z00_4146); 
FAILURE(BgL_auxz00_6625,BFALSE,BFALSE);} } 
BgL_oldzd2objzd2_1299 = 
CDR(BgL_pairz00_2890); } } 
{ /* Llib/hash.scm 471 */
obj_t BgL_arg2181z00_1300;
BgL_arg2181z00_1300 = 
CAR(BgL_buckz00_1288); 
{ /* Llib/hash.scm 471 */
obj_t BgL_pairz00_2892;
if(
PAIRP(BgL_arg2181z00_1300))
{ /* Llib/hash.scm 471 */
BgL_pairz00_2892 = BgL_arg2181z00_1300; }  else 
{ 
obj_t BgL_auxz00_6633;
BgL_auxz00_6633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18793)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_arg2181z00_1300); 
FAILURE(BgL_auxz00_6633,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_2892, BgL_objz00_76); } } 
return BgL_oldzd2objzd2_1299;}  else 
{ /* Llib/hash.scm 474 */
obj_t BgL_arg2182z00_1301;long BgL_arg2183z00_1302;
{ /* Llib/hash.scm 474 */
obj_t BgL_pairz00_2894;
if(
PAIRP(BgL_buckz00_1288))
{ /* Llib/hash.scm 474 */
BgL_pairz00_2894 = BgL_buckz00_1288; }  else 
{ 
obj_t BgL_auxz00_6640;
BgL_auxz00_6640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)18838)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1288); 
FAILURE(BgL_auxz00_6640,BFALSE,BFALSE);} 
BgL_arg2182z00_1301 = 
CDR(BgL_pairz00_2894); } 
BgL_arg2183z00_1302 = 
(BgL_countz00_1289+((long)1)); 
{ 
long BgL_countz00_6647;obj_t BgL_buckz00_6646;
BgL_buckz00_6646 = BgL_arg2182z00_1301; 
BgL_countz00_6647 = BgL_arg2183z00_1302; 
BgL_countz00_1289 = BgL_countz00_6647; 
BgL_buckz00_1288 = BgL_buckz00_6646; 
goto BgL_zc3anonymousza32172ze3z83_1290;} } } } } } } } } } } 
}



/* hashtable-update! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t BgL_tablez00_77, obj_t BgL_keyz00_78, obj_t BgL_procz00_79, obj_t BgL_objz00_80)
{ AN_OBJECT;
{ /* Llib/hash.scm 479 */
{ /* Llib/hash.scm 480 */
bool_t BgL_testz00_6648;
{ /* Llib/hash.scm 480 */
bool_t BgL_res2649z00_2910;
{ /* Llib/hash.scm 480 */
bool_t BgL_testz00_6649;
{ /* Llib/hash.scm 480 */
obj_t BgL_arg2065z00_2901;
{ /* Llib/hash.scm 480 */
bool_t BgL_testz00_6650;
{ /* Llib/hash.scm 480 */
obj_t BgL_auxz00_6651;
{ /* Llib/hash.scm 480 */
obj_t BgL_res2648z00_2907;
{ /* Llib/hash.scm 480 */
obj_t BgL_aux3181z00_4154;
BgL_aux3181z00_4154 = 
STRUCT_KEY(BgL_tablez00_77); 
if(
SYMBOLP(BgL_aux3181z00_4154))
{ /* Llib/hash.scm 480 */
BgL_res2648z00_2907 = BgL_aux3181z00_4154; }  else 
{ 
obj_t BgL_auxz00_6655;
BgL_auxz00_6655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19166)), BGl_string3519z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3181z00_4154); 
FAILURE(BgL_auxz00_6655,BFALSE,BFALSE);} } 
BgL_auxz00_6651 = BgL_res2648z00_2907; } 
BgL_testz00_6650 = 
(BgL_auxz00_6651==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6650)
{ /* Llib/hash.scm 480 */
int BgL_auxz00_6660;
BgL_auxz00_6660 = 
(int)(((long)5)); 
BgL_arg2065z00_2901 = 
STRUCT_REF(BgL_tablez00_77, BgL_auxz00_6660); }  else 
{ /* Llib/hash.scm 480 */
BgL_arg2065z00_2901 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_77); } } 
{ /* Llib/hash.scm 480 */
long BgL_n2z00_2909;
{ /* Llib/hash.scm 480 */
obj_t BgL_auxz00_6664;
if(
INTEGERP(BgL_arg2065z00_2901))
{ /* Llib/hash.scm 480 */
BgL_auxz00_6664 = BgL_arg2065z00_2901
; }  else 
{ 
obj_t BgL_auxz00_6667;
BgL_auxz00_6667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19166)), BGl_string3519z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_2901); 
FAILURE(BgL_auxz00_6667,BFALSE,BFALSE);} 
BgL_n2z00_2909 = 
(long)CINT(BgL_auxz00_6664); } 
BgL_testz00_6649 = 
(((long)0)==BgL_n2z00_2909); } } 
if(BgL_testz00_6649)
{ /* Llib/hash.scm 480 */
BgL_res2649z00_2910 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 480 */
BgL_res2649z00_2910 = ((bool_t)1); } } 
BgL_testz00_6648 = BgL_res2649z00_2910; } 
if(BgL_testz00_6648)
{ /* Llib/hash.scm 480 */
return 
BGl_weakzd2hashtablezd2updatez12z12zz__weakhashz00(BgL_tablez00_77, BgL_keyz00_78, BgL_procz00_79, BgL_objz00_80);}  else 
{ /* Llib/hash.scm 480 */
return 
BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(BgL_tablez00_77, BgL_keyz00_78, BgL_procz00_79, BgL_objz00_80);} } } 
}



/* _hashtable-update! */
obj_t BGl__hashtablezd2updatez12zc0zz__hashz00(obj_t BgL_envz00_3650, obj_t BgL_tablez00_3651, obj_t BgL_keyz00_3652, obj_t BgL_procz00_3653, obj_t BgL_objz00_3654)
{ AN_OBJECT;
{ /* Llib/hash.scm 479 */
{ /* Llib/hash.scm 480 */
obj_t BgL_auxz00_6682;obj_t BgL_auxz00_6675;
if(
PROCEDUREP(BgL_procz00_3653))
{ /* Llib/hash.scm 480 */
BgL_auxz00_6682 = BgL_procz00_3653
; }  else 
{ 
obj_t BgL_auxz00_6685;
BgL_auxz00_6685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19162)), BGl_string3520z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_procz00_3653); 
FAILURE(BgL_auxz00_6685,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3651))
{ /* Llib/hash.scm 480 */
BgL_auxz00_6675 = BgL_tablez00_3651
; }  else 
{ 
obj_t BgL_auxz00_6678;
BgL_auxz00_6678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19162)), BGl_string3520z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3651); 
FAILURE(BgL_auxz00_6678,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2updatez12zc0zz__hashz00(BgL_auxz00_6675, BgL_keyz00_3652, BgL_auxz00_6682, BgL_objz00_3654);} } 
}



/* plain-hashtable-update! */
obj_t BGl_plainzd2hashtablezd2updatez12z12zz__hashz00(obj_t BgL_tablez00_81, obj_t BgL_keyz00_82, obj_t BgL_procz00_83, obj_t BgL_objz00_84)
{ AN_OBJECT;
{ /* Llib/hash.scm 487 */
{ /* Llib/hash.scm 488 */
obj_t BgL_bucketsz00_1307;
{ /* Llib/hash.scm 488 */
bool_t BgL_testz00_6690;
{ /* Llib/hash.scm 488 */
obj_t BgL_auxz00_6691;
{ /* Llib/hash.scm 488 */
obj_t BgL_res2650z00_2916;
{ /* Llib/hash.scm 488 */
obj_t BgL_aux3189z00_4162;
BgL_aux3189z00_4162 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3189z00_4162))
{ /* Llib/hash.scm 488 */
BgL_res2650z00_2916 = BgL_aux3189z00_4162; }  else 
{ 
obj_t BgL_auxz00_6695;
BgL_auxz00_6695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19614)), BGl_string3521z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3189z00_4162); 
FAILURE(BgL_auxz00_6695,BFALSE,BFALSE);} } 
BgL_auxz00_6691 = BgL_res2650z00_2916; } 
BgL_testz00_6690 = 
(BgL_auxz00_6691==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6690)
{ /* Llib/hash.scm 488 */
int BgL_auxz00_6700;
BgL_auxz00_6700 = 
(int)(((long)2)); 
BgL_bucketsz00_1307 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6700); }  else 
{ /* Llib/hash.scm 488 */
BgL_bucketsz00_1307 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
{ /* Llib/hash.scm 488 */
int BgL_bucketzd2lenzd2_1308;
{ /* Llib/hash.scm 489 */
obj_t BgL_vectorz00_2917;
if(
VECTORP(BgL_bucketsz00_1307))
{ /* Llib/hash.scm 489 */
BgL_vectorz00_2917 = BgL_bucketsz00_1307; }  else 
{ 
obj_t BgL_auxz00_6706;
BgL_auxz00_6706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19672)), BGl_string3521z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1307); 
FAILURE(BgL_auxz00_6706,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1308 = 
VECTOR_LENGTH(BgL_vectorz00_2917); } 
{ /* Llib/hash.scm 489 */
long BgL_bucketzd2numzd2_1309;
{ /* Llib/hash.scm 490 */
long BgL_arg2208z00_1338;
{ /* Llib/hash.scm 490 */
long BgL_res2653z00_2936;
{ /* Llib/hash.scm 490 */
obj_t BgL_hashnz00_2920;
{ /* Llib/hash.scm 490 */
bool_t BgL_testz00_6711;
{ /* Llib/hash.scm 490 */
obj_t BgL_auxz00_6712;
{ /* Llib/hash.scm 490 */
obj_t BgL_res2651z00_2928;
{ /* Llib/hash.scm 490 */
obj_t BgL_aux3193z00_4166;
BgL_aux3193z00_4166 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3193z00_4166))
{ /* Llib/hash.scm 490 */
BgL_res2651z00_2928 = BgL_aux3193z00_4166; }  else 
{ 
obj_t BgL_auxz00_6716;
BgL_auxz00_6716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19710)), BGl_string3521z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3193z00_4166); 
FAILURE(BgL_auxz00_6716,BFALSE,BFALSE);} } 
BgL_auxz00_6712 = BgL_res2651z00_2928; } 
BgL_testz00_6711 = 
(BgL_auxz00_6712==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6711)
{ /* Llib/hash.scm 490 */
int BgL_auxz00_6721;
BgL_auxz00_6721 = 
(int)(((long)4)); 
BgL_hashnz00_2920 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6721); }  else 
{ /* Llib/hash.scm 490 */
BgL_hashnz00_2920 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
if(
PROCEDUREP(BgL_hashnz00_2920))
{ /* Llib/hash.scm 490 */
obj_t BgL_arg1974z00_2922;
{ /* Llib/hash.scm 490 */
obj_t BgL_funz00_4168;
BgL_funz00_4168 = BgL_hashnz00_2920; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4168, ((long)1)))
{ /* Llib/hash.scm 490 */
BgL_arg1974z00_2922 = 
PROCEDURE_ENTRY(BgL_funz00_4168)(BgL_hashnz00_2920, BgL_keyz00_82, BEOA); }  else 
{ /* Llib/hash.scm 490 */
FAILURE(BGl_string3522z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4168);} } 
{ /* Llib/hash.scm 490 */
long BgL_nz00_2930;
{ /* Llib/hash.scm 490 */
obj_t BgL_auxz00_6732;
if(
INTEGERP(BgL_arg1974z00_2922))
{ /* Llib/hash.scm 490 */
BgL_auxz00_6732 = BgL_arg1974z00_2922
; }  else 
{ 
obj_t BgL_auxz00_6735;
BgL_auxz00_6735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19710)), BGl_string3521z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_2922); 
FAILURE(BgL_auxz00_6735,BFALSE,BFALSE);} 
BgL_nz00_2930 = 
(long)CINT(BgL_auxz00_6732); } 
if(
(BgL_nz00_2930<((long)0)))
{ /* Llib/hash.scm 490 */
BgL_res2653z00_2936 = 
NEG(BgL_nz00_2930); }  else 
{ /* Llib/hash.scm 490 */
BgL_res2653z00_2936 = BgL_nz00_2930; } } }  else 
{ /* Llib/hash.scm 490 */
BgL_res2653z00_2936 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_82); } } 
BgL_arg2208z00_1338 = BgL_res2653z00_2936; } 
{ /* Llib/hash.scm 490 */
long BgL_auxz00_6744;
BgL_auxz00_6744 = 
(long)(BgL_bucketzd2lenzd2_1308); 
BgL_bucketzd2numzd2_1309 = 
(BgL_arg2208z00_1338%BgL_auxz00_6744); } } 
{ /* Llib/hash.scm 490 */
obj_t BgL_bucketz00_1310;
{ /* Llib/hash.scm 491 */
obj_t BgL_vectorz00_2939;int BgL_kz00_2940;
BgL_vectorz00_2939 = BgL_bucketsz00_1307; 
BgL_kz00_2940 = 
(int)(BgL_bucketzd2numzd2_1309); 
{ /* Llib/hash.scm 491 */
int BgL_l2773z00_3733;
BgL_l2773z00_3733 = 
VECTOR_LENGTH(BgL_vectorz00_2939); 
if(
BOUND_CHECK(BgL_kz00_2940, BgL_l2773z00_3733))
{ /* Llib/hash.scm 491 */
BgL_bucketz00_1310 = 
VECTOR_REF(BgL_vectorz00_2939,BgL_kz00_2940); }  else 
{ 
obj_t BgL_auxz00_6752;
BgL_auxz00_6752 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19767)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2940), BgL_vectorz00_2939); 
FAILURE(BgL_auxz00_6752,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 491 */
obj_t BgL_maxzd2bucketzd2lenz00_1311;
{ /* Llib/hash.scm 492 */
bool_t BgL_testz00_6757;
{ /* Llib/hash.scm 492 */
obj_t BgL_auxz00_6758;
{ /* Llib/hash.scm 492 */
obj_t BgL_res2654z00_2946;
{ /* Llib/hash.scm 492 */
obj_t BgL_aux3201z00_4175;
BgL_aux3201z00_4175 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3201z00_4175))
{ /* Llib/hash.scm 492 */
BgL_res2654z00_2946 = BgL_aux3201z00_4175; }  else 
{ 
obj_t BgL_auxz00_6762;
BgL_auxz00_6762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19819)), BGl_string3521z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3201z00_4175); 
FAILURE(BgL_auxz00_6762,BFALSE,BFALSE);} } 
BgL_auxz00_6758 = BgL_res2654z00_2946; } 
BgL_testz00_6757 = 
(BgL_auxz00_6758==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6757)
{ /* Llib/hash.scm 492 */
int BgL_auxz00_6767;
BgL_auxz00_6767 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1311 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6767); }  else 
{ /* Llib/hash.scm 492 */
BgL_maxzd2bucketzd2lenz00_1311 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
{ /* Llib/hash.scm 492 */

if(
NULLP(BgL_bucketz00_1310))
{ /* Llib/hash.scm 493 */
{ /* Llib/hash.scm 495 */
long BgL_arg2188z00_1313;
{ /* Llib/hash.scm 495 */
obj_t BgL_arg2189z00_1314;
{ /* Llib/hash.scm 495 */
bool_t BgL_testz00_6773;
{ /* Llib/hash.scm 495 */
obj_t BgL_auxz00_6774;
{ /* Llib/hash.scm 495 */
obj_t BgL_res2655z00_2953;
{ /* Llib/hash.scm 495 */
obj_t BgL_aux3203z00_4177;
BgL_aux3203z00_4177 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3203z00_4177))
{ /* Llib/hash.scm 495 */
BgL_res2655z00_2953 = BgL_aux3203z00_4177; }  else 
{ 
obj_t BgL_auxz00_6778;
BgL_auxz00_6778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19929)), BGl_string3521z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3203z00_4177); 
FAILURE(BgL_auxz00_6778,BFALSE,BFALSE);} } 
BgL_auxz00_6774 = BgL_res2655z00_2953; } 
BgL_testz00_6773 = 
(BgL_auxz00_6774==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6773)
{ /* Llib/hash.scm 495 */
int BgL_auxz00_6783;
BgL_auxz00_6783 = 
(int)(((long)0)); 
BgL_arg2189z00_1314 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6783); }  else 
{ /* Llib/hash.scm 495 */
BgL_arg2189z00_1314 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
{ /* Llib/hash.scm 495 */
long BgL_za71za7_2954;
{ /* Llib/hash.scm 495 */
obj_t BgL_auxz00_6787;
if(
INTEGERP(BgL_arg2189z00_1314))
{ /* Llib/hash.scm 495 */
BgL_auxz00_6787 = BgL_arg2189z00_1314
; }  else 
{ 
obj_t BgL_auxz00_6790;
BgL_auxz00_6790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19924)), BGl_string3521z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2189z00_1314); 
FAILURE(BgL_auxz00_6790,BFALSE,BFALSE);} 
BgL_za71za7_2954 = 
(long)CINT(BgL_auxz00_6787); } 
BgL_arg2188z00_1313 = 
(BgL_za71za7_2954+((long)1)); } } 
{ /* Llib/hash.scm 495 */
bool_t BgL_testz00_6796;
{ /* Llib/hash.scm 495 */
obj_t BgL_auxz00_6797;
{ /* Llib/hash.scm 495 */
obj_t BgL_res2656z00_2962;
{ /* Llib/hash.scm 495 */
obj_t BgL_aux3207z00_4181;
BgL_aux3207z00_4181 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3207z00_4181))
{ /* Llib/hash.scm 495 */
BgL_res2656z00_2962 = BgL_aux3207z00_4181; }  else 
{ 
obj_t BgL_auxz00_6801;
BgL_auxz00_6801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19896)), BGl_string3521z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3207z00_4181); 
FAILURE(BgL_auxz00_6801,BFALSE,BFALSE);} } 
BgL_auxz00_6797 = BgL_res2656z00_2962; } 
BgL_testz00_6796 = 
(BgL_auxz00_6797==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6796)
{ /* Llib/hash.scm 495 */
obj_t BgL_auxz00_6808;int BgL_auxz00_6806;
BgL_auxz00_6808 = 
BINT(BgL_arg2188z00_1313); 
BgL_auxz00_6806 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_81, BgL_auxz00_6806, BgL_auxz00_6808); }  else 
{ /* Llib/hash.scm 495 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } } 
{ /* Llib/hash.scm 496 */
obj_t BgL_arg2191z00_1316;
{ /* Llib/hash.scm 496 */
obj_t BgL_arg2192z00_1317;
BgL_arg2192z00_1317 = 
MAKE_PAIR(BgL_keyz00_82, BgL_objz00_84); 
{ /* Llib/hash.scm 496 */
obj_t BgL_list2193z00_1318;
BgL_list2193z00_1318 = 
MAKE_PAIR(BgL_arg2192z00_1317, BNIL); 
BgL_arg2191z00_1316 = BgL_list2193z00_1318; } } 
{ /* Llib/hash.scm 496 */
obj_t BgL_vectorz00_2965;int BgL_kz00_2966;
BgL_vectorz00_2965 = BgL_bucketsz00_1307; 
BgL_kz00_2966 = 
(int)(BgL_bucketzd2numzd2_1309); 
{ /* Llib/hash.scm 496 */
int BgL_l2777z00_3737;
BgL_l2777z00_3737 = 
VECTOR_LENGTH(BgL_vectorz00_2965); 
if(
BOUND_CHECK(BgL_kz00_2966, BgL_l2777z00_3737))
{ /* Llib/hash.scm 496 */
VECTOR_SET(BgL_vectorz00_2965,BgL_kz00_2966,BgL_arg2191z00_1316); }  else 
{ 
obj_t BgL_auxz00_6819;
BgL_auxz00_6819 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)19963)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2966), BgL_vectorz00_2965); 
FAILURE(BgL_auxz00_6819,BFALSE,BFALSE);} } } } 
return BgL_objz00_84;}  else 
{ 
obj_t BgL_buckz00_1320;long BgL_countz00_1321;
BgL_buckz00_1320 = BgL_bucketz00_1310; 
BgL_countz00_1321 = ((long)0); 
BgL_zc3anonymousza32194ze3z83_1322:
if(
NULLP(BgL_buckz00_1320))
{ /* Llib/hash.scm 501 */
{ /* Llib/hash.scm 502 */
long BgL_arg2196z00_1324;
{ /* Llib/hash.scm 502 */
obj_t BgL_arg2197z00_1325;
{ /* Llib/hash.scm 502 */
bool_t BgL_testz00_6826;
{ /* Llib/hash.scm 502 */
obj_t BgL_auxz00_6827;
{ /* Llib/hash.scm 502 */
obj_t BgL_res2658z00_2974;
{ /* Llib/hash.scm 502 */
obj_t BgL_aux3211z00_4185;
BgL_aux3211z00_4185 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3211z00_4185))
{ /* Llib/hash.scm 502 */
BgL_res2658z00_2974 = BgL_aux3211z00_4185; }  else 
{ 
obj_t BgL_auxz00_6831;
BgL_auxz00_6831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20139)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3211z00_4185); 
FAILURE(BgL_auxz00_6831,BFALSE,BFALSE);} } 
BgL_auxz00_6827 = BgL_res2658z00_2974; } 
BgL_testz00_6826 = 
(BgL_auxz00_6827==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6826)
{ /* Llib/hash.scm 502 */
int BgL_auxz00_6836;
BgL_auxz00_6836 = 
(int)(((long)0)); 
BgL_arg2197z00_1325 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6836); }  else 
{ /* Llib/hash.scm 502 */
BgL_arg2197z00_1325 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
{ /* Llib/hash.scm 502 */
long BgL_za71za7_2975;
{ /* Llib/hash.scm 502 */
obj_t BgL_auxz00_6840;
if(
INTEGERP(BgL_arg2197z00_1325))
{ /* Llib/hash.scm 502 */
BgL_auxz00_6840 = BgL_arg2197z00_1325
; }  else 
{ 
obj_t BgL_auxz00_6843;
BgL_auxz00_6843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20134)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2197z00_1325); 
FAILURE(BgL_auxz00_6843,BFALSE,BFALSE);} 
BgL_za71za7_2975 = 
(long)CINT(BgL_auxz00_6840); } 
BgL_arg2196z00_1324 = 
(BgL_za71za7_2975+((long)1)); } } 
{ /* Llib/hash.scm 502 */
bool_t BgL_testz00_6849;
{ /* Llib/hash.scm 502 */
obj_t BgL_auxz00_6850;
{ /* Llib/hash.scm 502 */
obj_t BgL_res2659z00_2983;
{ /* Llib/hash.scm 502 */
obj_t BgL_aux3215z00_4189;
BgL_aux3215z00_4189 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3215z00_4189))
{ /* Llib/hash.scm 502 */
BgL_res2659z00_2983 = BgL_aux3215z00_4189; }  else 
{ 
obj_t BgL_auxz00_6854;
BgL_auxz00_6854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20106)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3215z00_4189); 
FAILURE(BgL_auxz00_6854,BFALSE,BFALSE);} } 
BgL_auxz00_6850 = BgL_res2659z00_2983; } 
BgL_testz00_6849 = 
(BgL_auxz00_6850==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6849)
{ /* Llib/hash.scm 502 */
obj_t BgL_auxz00_6861;int BgL_auxz00_6859;
BgL_auxz00_6861 = 
BINT(BgL_arg2196z00_1324); 
BgL_auxz00_6859 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_81, BgL_auxz00_6859, BgL_auxz00_6861); }  else 
{ /* Llib/hash.scm 502 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } } 
{ /* Llib/hash.scm 503 */
obj_t BgL_arg2199z00_1327;
{ /* Llib/hash.scm 503 */
obj_t BgL_arg2200z00_1328;
BgL_arg2200z00_1328 = 
MAKE_PAIR(BgL_keyz00_82, BgL_objz00_84); 
BgL_arg2199z00_1327 = 
MAKE_PAIR(BgL_arg2200z00_1328, BgL_bucketz00_1310); } 
{ /* Llib/hash.scm 503 */
obj_t BgL_vectorz00_2984;int BgL_kz00_2985;
BgL_vectorz00_2984 = BgL_bucketsz00_1307; 
BgL_kz00_2985 = 
(int)(BgL_bucketzd2numzd2_1309); 
{ /* Llib/hash.scm 503 */
int BgL_l2781z00_3741;
BgL_l2781z00_3741 = 
VECTOR_LENGTH(BgL_vectorz00_2984); 
if(
BOUND_CHECK(BgL_kz00_2985, BgL_l2781z00_3741))
{ /* Llib/hash.scm 503 */
VECTOR_SET(BgL_vectorz00_2984,BgL_kz00_2985,BgL_arg2199z00_1327); }  else 
{ 
obj_t BgL_auxz00_6872;
BgL_auxz00_6872 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20170)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_2985), BgL_vectorz00_2984); 
FAILURE(BgL_auxz00_6872,BFALSE,BFALSE);} } } } 
{ /* Llib/hash.scm 504 */
bool_t BgL_testz00_6877;
{ /* Llib/hash.scm 504 */
long BgL_n2z00_2988;
{ /* Llib/hash.scm 504 */
obj_t BgL_auxz00_6878;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1311))
{ /* Llib/hash.scm 504 */
BgL_auxz00_6878 = BgL_maxzd2bucketzd2lenz00_1311
; }  else 
{ 
obj_t BgL_auxz00_6881;
BgL_auxz00_6881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20250)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1311); 
FAILURE(BgL_auxz00_6881,BFALSE,BFALSE);} 
BgL_n2z00_2988 = 
(long)CINT(BgL_auxz00_6878); } 
BgL_testz00_6877 = 
(BgL_countz00_1321>BgL_n2z00_2988); } 
if(BgL_testz00_6877)
{ /* Llib/hash.scm 504 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_81); }  else 
{ /* Llib/hash.scm 504 */((bool_t)0); } } 
return BgL_objz00_84;}  else 
{ /* Llib/hash.scm 507 */
bool_t BgL_testz00_6888;
{ /* Llib/hash.scm 507 */
obj_t BgL_arg2207z00_1336;
{ /* Llib/hash.scm 507 */
obj_t BgL_pairz00_2989;
if(
PAIRP(BgL_buckz00_1320))
{ /* Llib/hash.scm 507 */
BgL_pairz00_2989 = BgL_buckz00_1320; }  else 
{ 
obj_t BgL_auxz00_6891;
BgL_auxz00_6891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20347)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1320); 
FAILURE(BgL_auxz00_6891,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 507 */
obj_t BgL_pairz00_2992;
{ /* Llib/hash.scm 507 */
obj_t BgL_aux3223z00_4197;
BgL_aux3223z00_4197 = 
CAR(BgL_pairz00_2989); 
if(
PAIRP(BgL_aux3223z00_4197))
{ /* Llib/hash.scm 507 */
BgL_pairz00_2992 = BgL_aux3223z00_4197; }  else 
{ 
obj_t BgL_auxz00_6898;
BgL_auxz00_6898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20341)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3223z00_4197); 
FAILURE(BgL_auxz00_6898,BFALSE,BFALSE);} } 
BgL_arg2207z00_1336 = 
CAR(BgL_pairz00_2992); } } 
{ /* Llib/hash.scm 507 */
obj_t BgL_eqtz00_2996;
{ /* Llib/hash.scm 507 */
bool_t BgL_testz00_6903;
{ /* Llib/hash.scm 507 */
obj_t BgL_auxz00_6904;
{ /* Llib/hash.scm 507 */
obj_t BgL_res2660z00_3005;
{ /* Llib/hash.scm 507 */
obj_t BgL_aux3225z00_4199;
BgL_aux3225z00_4199 = 
STRUCT_KEY(BgL_tablez00_81); 
if(
SYMBOLP(BgL_aux3225z00_4199))
{ /* Llib/hash.scm 507 */
BgL_res2660z00_3005 = BgL_aux3225z00_4199; }  else 
{ 
obj_t BgL_auxz00_6908;
BgL_auxz00_6908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20317)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3225z00_4199); 
FAILURE(BgL_auxz00_6908,BFALSE,BFALSE);} } 
BgL_auxz00_6904 = BgL_res2660z00_3005; } 
BgL_testz00_6903 = 
(BgL_auxz00_6904==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6903)
{ /* Llib/hash.scm 507 */
int BgL_auxz00_6913;
BgL_auxz00_6913 = 
(int)(((long)3)); 
BgL_eqtz00_2996 = 
STRUCT_REF(BgL_tablez00_81, BgL_auxz00_6913); }  else 
{ /* Llib/hash.scm 507 */
BgL_eqtz00_2996 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_81); } } 
if(
PROCEDUREP(BgL_eqtz00_2996))
{ /* Llib/hash.scm 507 */
obj_t BgL_funz00_4201;
BgL_funz00_4201 = BgL_eqtz00_2996; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4201, ((long)2)))
{ /* Llib/hash.scm 507 */
BgL_testz00_6888 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4201)(BgL_eqtz00_2996, BgL_arg2207z00_1336, BgL_keyz00_82, BEOA))
; }  else 
{ /* Llib/hash.scm 507 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4201);} }  else 
{ /* Llib/hash.scm 507 */
if(
STRINGP(BgL_arg2207z00_1336))
{ /* Llib/hash.scm 507 */
if(
STRINGP(BgL_keyz00_82))
{ /* Llib/hash.scm 507 */
BgL_testz00_6888 = 
bigloo_strcmp(BgL_arg2207z00_1336, BgL_keyz00_82)
; }  else 
{ /* Llib/hash.scm 507 */
BgL_testz00_6888 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 507 */
BgL_testz00_6888 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2207z00_1336, BgL_keyz00_82)
; } } } } 
if(BgL_testz00_6888)
{ /* Llib/hash.scm 508 */
obj_t BgL_resz00_1331;
{ /* Llib/hash.scm 508 */
obj_t BgL_arg2204z00_1333;
{ /* Llib/hash.scm 508 */
obj_t BgL_pairz00_3011;
BgL_pairz00_3011 = BgL_buckz00_1320; 
{ /* Llib/hash.scm 508 */
obj_t BgL_pairz00_3014;
{ /* Llib/hash.scm 508 */
obj_t BgL_aux3231z00_4206;
BgL_aux3231z00_4206 = 
CAR(BgL_pairz00_3011); 
if(
PAIRP(BgL_aux3231z00_4206))
{ /* Llib/hash.scm 508 */
BgL_pairz00_3014 = BgL_aux3231z00_4206; }  else 
{ 
obj_t BgL_auxz00_6934;
BgL_auxz00_6934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20378)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3231z00_4206); 
FAILURE(BgL_auxz00_6934,BFALSE,BFALSE);} } 
BgL_arg2204z00_1333 = 
CDR(BgL_pairz00_3014); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_83, ((long)1)))
{ /* Llib/hash.scm 508 */
BgL_resz00_1331 = 
PROCEDURE_ENTRY(BgL_procz00_83)(BgL_procz00_83, BgL_arg2204z00_1333, BEOA); }  else 
{ /* Llib/hash.scm 508 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3523z00zz__hashz00,BgL_procz00_83);} } 
{ /* Llib/hash.scm 509 */
obj_t BgL_arg2203z00_1332;
BgL_arg2203z00_1332 = 
CAR(BgL_buckz00_1320); 
{ /* Llib/hash.scm 509 */
obj_t BgL_pairz00_3016;
if(
PAIRP(BgL_arg2203z00_1332))
{ /* Llib/hash.scm 509 */
BgL_pairz00_3016 = BgL_arg2203z00_1332; }  else 
{ 
obj_t BgL_auxz00_6947;
BgL_auxz00_6947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20418)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_arg2203z00_1332); 
FAILURE(BgL_auxz00_6947,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3016, BgL_resz00_1331); } } 
return BgL_resz00_1331;}  else 
{ /* Llib/hash.scm 512 */
obj_t BgL_arg2205z00_1334;long BgL_arg2206z00_1335;
{ /* Llib/hash.scm 512 */
obj_t BgL_pairz00_3018;
if(
PAIRP(BgL_buckz00_1320))
{ /* Llib/hash.scm 512 */
BgL_pairz00_3018 = BgL_buckz00_1320; }  else 
{ 
obj_t BgL_auxz00_6954;
BgL_auxz00_6954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20459)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1320); 
FAILURE(BgL_auxz00_6954,BFALSE,BFALSE);} 
BgL_arg2205z00_1334 = 
CDR(BgL_pairz00_3018); } 
BgL_arg2206z00_1335 = 
(BgL_countz00_1321+((long)1)); 
{ 
long BgL_countz00_6961;obj_t BgL_buckz00_6960;
BgL_buckz00_6960 = BgL_arg2205z00_1334; 
BgL_countz00_6961 = BgL_arg2206z00_1335; 
BgL_countz00_1321 = BgL_countz00_6961; 
BgL_buckz00_1320 = BgL_buckz00_6960; 
goto BgL_zc3anonymousza32194ze3z83_1322;} } } } } } } } } } } 
}



/* hashtable-add! */
BGL_EXPORTED_DEF obj_t BGl_hashtablezd2addz12zc0zz__hashz00(obj_t BgL_tablez00_85, obj_t BgL_keyz00_86, obj_t BgL_p2z00_87, obj_t BgL_objz00_88, obj_t BgL_initz00_89)
{ AN_OBJECT;
{ /* Llib/hash.scm 517 */
{ /* Llib/hash.scm 518 */
bool_t BgL_testz00_6962;
{ /* Llib/hash.scm 518 */
bool_t BgL_res2662z00_3034;
{ /* Llib/hash.scm 518 */
bool_t BgL_testz00_6963;
{ /* Llib/hash.scm 518 */
obj_t BgL_arg2065z00_3025;
{ /* Llib/hash.scm 518 */
bool_t BgL_testz00_6964;
{ /* Llib/hash.scm 518 */
obj_t BgL_auxz00_6965;
{ /* Llib/hash.scm 518 */
obj_t BgL_res2661z00_3031;
{ /* Llib/hash.scm 518 */
obj_t BgL_aux3241z00_4217;
BgL_aux3241z00_4217 = 
STRUCT_KEY(BgL_tablez00_85); 
if(
SYMBOLP(BgL_aux3241z00_4217))
{ /* Llib/hash.scm 518 */
BgL_res2661z00_3031 = BgL_aux3241z00_4217; }  else 
{ 
obj_t BgL_auxz00_6969;
BgL_auxz00_6969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20790)), BGl_string3528z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3241z00_4217); 
FAILURE(BgL_auxz00_6969,BFALSE,BFALSE);} } 
BgL_auxz00_6965 = BgL_res2661z00_3031; } 
BgL_testz00_6964 = 
(BgL_auxz00_6965==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_6964)
{ /* Llib/hash.scm 518 */
int BgL_auxz00_6974;
BgL_auxz00_6974 = 
(int)(((long)5)); 
BgL_arg2065z00_3025 = 
STRUCT_REF(BgL_tablez00_85, BgL_auxz00_6974); }  else 
{ /* Llib/hash.scm 518 */
BgL_arg2065z00_3025 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_85); } } 
{ /* Llib/hash.scm 518 */
long BgL_n2z00_3033;
{ /* Llib/hash.scm 518 */
obj_t BgL_auxz00_6978;
if(
INTEGERP(BgL_arg2065z00_3025))
{ /* Llib/hash.scm 518 */
BgL_auxz00_6978 = BgL_arg2065z00_3025
; }  else 
{ 
obj_t BgL_auxz00_6981;
BgL_auxz00_6981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20790)), BGl_string3528z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_3025); 
FAILURE(BgL_auxz00_6981,BFALSE,BFALSE);} 
BgL_n2z00_3033 = 
(long)CINT(BgL_auxz00_6978); } 
BgL_testz00_6963 = 
(((long)0)==BgL_n2z00_3033); } } 
if(BgL_testz00_6963)
{ /* Llib/hash.scm 518 */
BgL_res2662z00_3034 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 518 */
BgL_res2662z00_3034 = ((bool_t)1); } } 
BgL_testz00_6962 = BgL_res2662z00_3034; } 
if(BgL_testz00_6962)
{ /* Llib/hash.scm 518 */
return 
BGl_weakzd2hashtablezd2addz12z12zz__weakhashz00(BgL_tablez00_85, BgL_keyz00_86, BgL_p2z00_87, BgL_objz00_88, BgL_initz00_89);}  else 
{ /* Llib/hash.scm 518 */
return 
BGl_plainzd2hashtablezd2addz12z12zz__hashz00(BgL_tablez00_85, BgL_keyz00_86, BgL_p2z00_87, BgL_objz00_88, BgL_initz00_89);} } } 
}



/* _hashtable-add! */
obj_t BGl__hashtablezd2addz12zc0zz__hashz00(obj_t BgL_envz00_3655, obj_t BgL_tablez00_3656, obj_t BgL_keyz00_3657, obj_t BgL_p2z00_3658, obj_t BgL_objz00_3659, obj_t BgL_initz00_3660)
{ AN_OBJECT;
{ /* Llib/hash.scm 517 */
{ /* Llib/hash.scm 518 */
obj_t BgL_auxz00_6996;obj_t BgL_auxz00_6989;
if(
PROCEDUREP(BgL_p2z00_3658))
{ /* Llib/hash.scm 518 */
BgL_auxz00_6996 = BgL_p2z00_3658
; }  else 
{ 
obj_t BgL_auxz00_6999;
BgL_auxz00_6999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20786)), BGl_string3529z00zz__hashz00, BGl_string3459z00zz__hashz00, BgL_p2z00_3658); 
FAILURE(BgL_auxz00_6999,BFALSE,BFALSE);} 
if(
STRUCTP(BgL_tablez00_3656))
{ /* Llib/hash.scm 518 */
BgL_auxz00_6989 = BgL_tablez00_3656
; }  else 
{ 
obj_t BgL_auxz00_6992;
BgL_auxz00_6992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)20786)), BGl_string3529z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3656); 
FAILURE(BgL_auxz00_6992,BFALSE,BFALSE);} 
return 
BGl_hashtablezd2addz12zc0zz__hashz00(BgL_auxz00_6989, BgL_keyz00_3657, BgL_auxz00_6996, BgL_objz00_3659, BgL_initz00_3660);} } 
}



/* plain-hashtable-add! */
obj_t BGl_plainzd2hashtablezd2addz12z12zz__hashz00(obj_t BgL_tablez00_90, obj_t BgL_keyz00_91, obj_t BgL_procz00_92, obj_t BgL_objz00_93, obj_t BgL_initz00_94)
{ AN_OBJECT;
{ /* Llib/hash.scm 525 */
{ /* Llib/hash.scm 526 */
obj_t BgL_bucketsz00_1340;
{ /* Llib/hash.scm 526 */
bool_t BgL_testz00_7004;
{ /* Llib/hash.scm 526 */
obj_t BgL_auxz00_7005;
{ /* Llib/hash.scm 526 */
obj_t BgL_res2663z00_3040;
{ /* Llib/hash.scm 526 */
obj_t BgL_aux3249z00_4225;
BgL_aux3249z00_4225 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3249z00_4225))
{ /* Llib/hash.scm 526 */
BgL_res2663z00_3040 = BgL_aux3249z00_4225; }  else 
{ 
obj_t BgL_auxz00_7009;
BgL_auxz00_7009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21240)), BGl_string3530z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3249z00_4225); 
FAILURE(BgL_auxz00_7009,BFALSE,BFALSE);} } 
BgL_auxz00_7005 = BgL_res2663z00_3040; } 
BgL_testz00_7004 = 
(BgL_auxz00_7005==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7004)
{ /* Llib/hash.scm 526 */
int BgL_auxz00_7014;
BgL_auxz00_7014 = 
(int)(((long)2)); 
BgL_bucketsz00_1340 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7014); }  else 
{ /* Llib/hash.scm 526 */
BgL_bucketsz00_1340 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
{ /* Llib/hash.scm 526 */
int BgL_bucketzd2lenzd2_1341;
{ /* Llib/hash.scm 527 */
obj_t BgL_vectorz00_3041;
if(
VECTORP(BgL_bucketsz00_1340))
{ /* Llib/hash.scm 527 */
BgL_vectorz00_3041 = BgL_bucketsz00_1340; }  else 
{ 
obj_t BgL_auxz00_7020;
BgL_auxz00_7020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21298)), BGl_string3530z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1340); 
FAILURE(BgL_auxz00_7020,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1341 = 
VECTOR_LENGTH(BgL_vectorz00_3041); } 
{ /* Llib/hash.scm 527 */
long BgL_bucketzd2numzd2_1342;
{ /* Llib/hash.scm 528 */
long BgL_arg2238z00_1373;
{ /* Llib/hash.scm 528 */
long BgL_res2666z00_3060;
{ /* Llib/hash.scm 528 */
obj_t BgL_hashnz00_3044;
{ /* Llib/hash.scm 528 */
bool_t BgL_testz00_7025;
{ /* Llib/hash.scm 528 */
obj_t BgL_auxz00_7026;
{ /* Llib/hash.scm 528 */
obj_t BgL_res2664z00_3052;
{ /* Llib/hash.scm 528 */
obj_t BgL_aux3253z00_4229;
BgL_aux3253z00_4229 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3253z00_4229))
{ /* Llib/hash.scm 528 */
BgL_res2664z00_3052 = BgL_aux3253z00_4229; }  else 
{ 
obj_t BgL_auxz00_7030;
BgL_auxz00_7030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21336)), BGl_string3530z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3253z00_4229); 
FAILURE(BgL_auxz00_7030,BFALSE,BFALSE);} } 
BgL_auxz00_7026 = BgL_res2664z00_3052; } 
BgL_testz00_7025 = 
(BgL_auxz00_7026==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7025)
{ /* Llib/hash.scm 528 */
int BgL_auxz00_7035;
BgL_auxz00_7035 = 
(int)(((long)4)); 
BgL_hashnz00_3044 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7035); }  else 
{ /* Llib/hash.scm 528 */
BgL_hashnz00_3044 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
if(
PROCEDUREP(BgL_hashnz00_3044))
{ /* Llib/hash.scm 528 */
obj_t BgL_arg1974z00_3046;
{ /* Llib/hash.scm 528 */
obj_t BgL_funz00_4231;
BgL_funz00_4231 = BgL_hashnz00_3044; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4231, ((long)1)))
{ /* Llib/hash.scm 528 */
BgL_arg1974z00_3046 = 
PROCEDURE_ENTRY(BgL_funz00_4231)(BgL_hashnz00_3044, BgL_keyz00_91, BEOA); }  else 
{ /* Llib/hash.scm 528 */
FAILURE(BGl_string3531z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4231);} } 
{ /* Llib/hash.scm 528 */
long BgL_nz00_3054;
{ /* Llib/hash.scm 528 */
obj_t BgL_auxz00_7046;
if(
INTEGERP(BgL_arg1974z00_3046))
{ /* Llib/hash.scm 528 */
BgL_auxz00_7046 = BgL_arg1974z00_3046
; }  else 
{ 
obj_t BgL_auxz00_7049;
BgL_auxz00_7049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21336)), BGl_string3530z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_3046); 
FAILURE(BgL_auxz00_7049,BFALSE,BFALSE);} 
BgL_nz00_3054 = 
(long)CINT(BgL_auxz00_7046); } 
if(
(BgL_nz00_3054<((long)0)))
{ /* Llib/hash.scm 528 */
BgL_res2666z00_3060 = 
NEG(BgL_nz00_3054); }  else 
{ /* Llib/hash.scm 528 */
BgL_res2666z00_3060 = BgL_nz00_3054; } } }  else 
{ /* Llib/hash.scm 528 */
BgL_res2666z00_3060 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_91); } } 
BgL_arg2238z00_1373 = BgL_res2666z00_3060; } 
{ /* Llib/hash.scm 528 */
long BgL_auxz00_7058;
BgL_auxz00_7058 = 
(long)(BgL_bucketzd2lenzd2_1341); 
BgL_bucketzd2numzd2_1342 = 
(BgL_arg2238z00_1373%BgL_auxz00_7058); } } 
{ /* Llib/hash.scm 528 */
obj_t BgL_bucketz00_1343;
{ /* Llib/hash.scm 529 */
obj_t BgL_vectorz00_3063;int BgL_kz00_3064;
BgL_vectorz00_3063 = BgL_bucketsz00_1340; 
BgL_kz00_3064 = 
(int)(BgL_bucketzd2numzd2_1342); 
{ /* Llib/hash.scm 529 */
int BgL_l2785z00_3745;
BgL_l2785z00_3745 = 
VECTOR_LENGTH(BgL_vectorz00_3063); 
if(
BOUND_CHECK(BgL_kz00_3064, BgL_l2785z00_3745))
{ /* Llib/hash.scm 529 */
BgL_bucketz00_1343 = 
VECTOR_REF(BgL_vectorz00_3063,BgL_kz00_3064); }  else 
{ 
obj_t BgL_auxz00_7066;
BgL_auxz00_7066 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21393)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3064), BgL_vectorz00_3063); 
FAILURE(BgL_auxz00_7066,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 529 */
obj_t BgL_maxzd2bucketzd2lenz00_1344;
{ /* Llib/hash.scm 530 */
bool_t BgL_testz00_7071;
{ /* Llib/hash.scm 530 */
obj_t BgL_auxz00_7072;
{ /* Llib/hash.scm 530 */
obj_t BgL_res2667z00_3070;
{ /* Llib/hash.scm 530 */
obj_t BgL_aux3261z00_4238;
BgL_aux3261z00_4238 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3261z00_4238))
{ /* Llib/hash.scm 530 */
BgL_res2667z00_3070 = BgL_aux3261z00_4238; }  else 
{ 
obj_t BgL_auxz00_7076;
BgL_auxz00_7076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21445)), BGl_string3530z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3261z00_4238); 
FAILURE(BgL_auxz00_7076,BFALSE,BFALSE);} } 
BgL_auxz00_7072 = BgL_res2667z00_3070; } 
BgL_testz00_7071 = 
(BgL_auxz00_7072==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7071)
{ /* Llib/hash.scm 530 */
int BgL_auxz00_7081;
BgL_auxz00_7081 = 
(int)(((long)1)); 
BgL_maxzd2bucketzd2lenz00_1344 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7081); }  else 
{ /* Llib/hash.scm 530 */
BgL_maxzd2bucketzd2lenz00_1344 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
{ /* Llib/hash.scm 530 */

if(
NULLP(BgL_bucketz00_1343))
{ /* Llib/hash.scm 532 */
obj_t BgL_vz00_1346;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_92, ((long)2)))
{ /* Llib/hash.scm 532 */
BgL_vz00_1346 = 
PROCEDURE_ENTRY(BgL_procz00_92)(BgL_procz00_92, BgL_objz00_93, BgL_initz00_94, BEOA); }  else 
{ /* Llib/hash.scm 532 */
FAILURE(BGl_string3531z00zz__hashz00,BGl_list3532z00zz__hashz00,BgL_procz00_92);} 
{ /* Llib/hash.scm 533 */
long BgL_arg2211z00_1347;
{ /* Llib/hash.scm 533 */
obj_t BgL_arg2212z00_1348;
{ /* Llib/hash.scm 533 */
bool_t BgL_testz00_7092;
{ /* Llib/hash.scm 533 */
obj_t BgL_auxz00_7093;
{ /* Llib/hash.scm 533 */
obj_t BgL_res2668z00_3077;
{ /* Llib/hash.scm 533 */
obj_t BgL_aux3265z00_4243;
BgL_aux3265z00_4243 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3265z00_4243))
{ /* Llib/hash.scm 533 */
BgL_res2668z00_3077 = BgL_aux3265z00_4243; }  else 
{ 
obj_t BgL_auxz00_7097;
BgL_auxz00_7097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21575)), BGl_string3530z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3265z00_4243); 
FAILURE(BgL_auxz00_7097,BFALSE,BFALSE);} } 
BgL_auxz00_7093 = BgL_res2668z00_3077; } 
BgL_testz00_7092 = 
(BgL_auxz00_7093==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7092)
{ /* Llib/hash.scm 533 */
int BgL_auxz00_7102;
BgL_auxz00_7102 = 
(int)(((long)0)); 
BgL_arg2212z00_1348 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7102); }  else 
{ /* Llib/hash.scm 533 */
BgL_arg2212z00_1348 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
{ /* Llib/hash.scm 533 */
long BgL_za71za7_3078;
{ /* Llib/hash.scm 533 */
obj_t BgL_auxz00_7106;
if(
INTEGERP(BgL_arg2212z00_1348))
{ /* Llib/hash.scm 533 */
BgL_auxz00_7106 = BgL_arg2212z00_1348
; }  else 
{ 
obj_t BgL_auxz00_7109;
BgL_auxz00_7109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21570)), BGl_string3530z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2212z00_1348); 
FAILURE(BgL_auxz00_7109,BFALSE,BFALSE);} 
BgL_za71za7_3078 = 
(long)CINT(BgL_auxz00_7106); } 
BgL_arg2211z00_1347 = 
(BgL_za71za7_3078+((long)1)); } } 
{ /* Llib/hash.scm 533 */
bool_t BgL_testz00_7115;
{ /* Llib/hash.scm 533 */
obj_t BgL_auxz00_7116;
{ /* Llib/hash.scm 533 */
obj_t BgL_res2669z00_3086;
{ /* Llib/hash.scm 533 */
obj_t BgL_aux3269z00_4247;
BgL_aux3269z00_4247 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3269z00_4247))
{ /* Llib/hash.scm 533 */
BgL_res2669z00_3086 = BgL_aux3269z00_4247; }  else 
{ 
obj_t BgL_auxz00_7120;
BgL_auxz00_7120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21542)), BGl_string3530z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3269z00_4247); 
FAILURE(BgL_auxz00_7120,BFALSE,BFALSE);} } 
BgL_auxz00_7116 = BgL_res2669z00_3086; } 
BgL_testz00_7115 = 
(BgL_auxz00_7116==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7115)
{ /* Llib/hash.scm 533 */
obj_t BgL_auxz00_7127;int BgL_auxz00_7125;
BgL_auxz00_7127 = 
BINT(BgL_arg2211z00_1347); 
BgL_auxz00_7125 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_90, BgL_auxz00_7125, BgL_auxz00_7127); }  else 
{ /* Llib/hash.scm 533 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } } 
{ /* Llib/hash.scm 534 */
obj_t BgL_arg2214z00_1350;
{ /* Llib/hash.scm 534 */
obj_t BgL_arg2216z00_1351;
BgL_arg2216z00_1351 = 
MAKE_PAIR(BgL_keyz00_91, BgL_vz00_1346); 
{ /* Llib/hash.scm 534 */
obj_t BgL_list2217z00_1352;
BgL_list2217z00_1352 = 
MAKE_PAIR(BgL_arg2216z00_1351, BNIL); 
BgL_arg2214z00_1350 = BgL_list2217z00_1352; } } 
{ /* Llib/hash.scm 534 */
obj_t BgL_vectorz00_3089;int BgL_kz00_3090;
BgL_vectorz00_3089 = BgL_bucketsz00_1340; 
BgL_kz00_3090 = 
(int)(BgL_bucketzd2numzd2_1342); 
{ /* Llib/hash.scm 534 */
int BgL_l2789z00_3749;
BgL_l2789z00_3749 = 
VECTOR_LENGTH(BgL_vectorz00_3089); 
if(
BOUND_CHECK(BgL_kz00_3090, BgL_l2789z00_3749))
{ /* Llib/hash.scm 534 */
VECTOR_SET(BgL_vectorz00_3089,BgL_kz00_3090,BgL_arg2214z00_1350); }  else 
{ 
obj_t BgL_auxz00_7138;
BgL_auxz00_7138 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21609)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3090), BgL_vectorz00_3089); 
FAILURE(BgL_auxz00_7138,BFALSE,BFALSE);} } } } 
return BgL_vz00_1346;}  else 
{ 
obj_t BgL_buckz00_1354;long BgL_countz00_1355;
BgL_buckz00_1354 = BgL_bucketz00_1343; 
BgL_countz00_1355 = ((long)0); 
BgL_zc3anonymousza32218ze3z83_1356:
if(
NULLP(BgL_buckz00_1354))
{ /* Llib/hash.scm 540 */
obj_t BgL_vz00_1358;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_92, ((long)2)))
{ /* Llib/hash.scm 540 */
BgL_vz00_1358 = 
PROCEDURE_ENTRY(BgL_procz00_92)(BgL_procz00_92, BgL_objz00_93, BgL_initz00_94, BEOA); }  else 
{ /* Llib/hash.scm 540 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3532z00zz__hashz00,BgL_procz00_92);} 
{ /* Llib/hash.scm 541 */
long BgL_arg2222z00_1359;
{ /* Llib/hash.scm 541 */
obj_t BgL_arg2223z00_1360;
{ /* Llib/hash.scm 541 */
bool_t BgL_testz00_7150;
{ /* Llib/hash.scm 541 */
obj_t BgL_auxz00_7151;
{ /* Llib/hash.scm 541 */
obj_t BgL_res2671z00_3098;
{ /* Llib/hash.scm 541 */
obj_t BgL_aux3275z00_4254;
BgL_aux3275z00_4254 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3275z00_4254))
{ /* Llib/hash.scm 541 */
BgL_res2671z00_3098 = BgL_aux3275z00_4254; }  else 
{ 
obj_t BgL_auxz00_7155;
BgL_auxz00_7155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21814)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3275z00_4254); 
FAILURE(BgL_auxz00_7155,BFALSE,BFALSE);} } 
BgL_auxz00_7151 = BgL_res2671z00_3098; } 
BgL_testz00_7150 = 
(BgL_auxz00_7151==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7150)
{ /* Llib/hash.scm 541 */
int BgL_auxz00_7160;
BgL_auxz00_7160 = 
(int)(((long)0)); 
BgL_arg2223z00_1360 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7160); }  else 
{ /* Llib/hash.scm 541 */
BgL_arg2223z00_1360 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
{ /* Llib/hash.scm 541 */
long BgL_za71za7_3099;
{ /* Llib/hash.scm 541 */
obj_t BgL_auxz00_7164;
if(
INTEGERP(BgL_arg2223z00_1360))
{ /* Llib/hash.scm 541 */
BgL_auxz00_7164 = BgL_arg2223z00_1360
; }  else 
{ 
obj_t BgL_auxz00_7167;
BgL_auxz00_7167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21809)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2223z00_1360); 
FAILURE(BgL_auxz00_7167,BFALSE,BFALSE);} 
BgL_za71za7_3099 = 
(long)CINT(BgL_auxz00_7164); } 
BgL_arg2222z00_1359 = 
(BgL_za71za7_3099+((long)1)); } } 
{ /* Llib/hash.scm 541 */
bool_t BgL_testz00_7173;
{ /* Llib/hash.scm 541 */
obj_t BgL_auxz00_7174;
{ /* Llib/hash.scm 541 */
obj_t BgL_res2672z00_3107;
{ /* Llib/hash.scm 541 */
obj_t BgL_aux3279z00_4258;
BgL_aux3279z00_4258 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3279z00_4258))
{ /* Llib/hash.scm 541 */
BgL_res2672z00_3107 = BgL_aux3279z00_4258; }  else 
{ 
obj_t BgL_auxz00_7178;
BgL_auxz00_7178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21781)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3279z00_4258); 
FAILURE(BgL_auxz00_7178,BFALSE,BFALSE);} } 
BgL_auxz00_7174 = BgL_res2672z00_3107; } 
BgL_testz00_7173 = 
(BgL_auxz00_7174==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7173)
{ /* Llib/hash.scm 541 */
obj_t BgL_auxz00_7185;int BgL_auxz00_7183;
BgL_auxz00_7185 = 
BINT(BgL_arg2222z00_1359); 
BgL_auxz00_7183 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_90, BgL_auxz00_7183, BgL_auxz00_7185); }  else 
{ /* Llib/hash.scm 541 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } } 
{ /* Llib/hash.scm 542 */
obj_t BgL_arg2226z00_1362;
{ /* Llib/hash.scm 542 */
obj_t BgL_arg2227z00_1363;
BgL_arg2227z00_1363 = 
MAKE_PAIR(BgL_keyz00_91, BgL_vz00_1358); 
BgL_arg2226z00_1362 = 
MAKE_PAIR(BgL_arg2227z00_1363, BgL_bucketz00_1343); } 
{ /* Llib/hash.scm 542 */
obj_t BgL_vectorz00_3108;int BgL_kz00_3109;
BgL_vectorz00_3108 = BgL_bucketsz00_1340; 
BgL_kz00_3109 = 
(int)(BgL_bucketzd2numzd2_1342); 
{ /* Llib/hash.scm 542 */
int BgL_l2793z00_3753;
BgL_l2793z00_3753 = 
VECTOR_LENGTH(BgL_vectorz00_3108); 
if(
BOUND_CHECK(BgL_kz00_3109, BgL_l2793z00_3753))
{ /* Llib/hash.scm 542 */
VECTOR_SET(BgL_vectorz00_3108,BgL_kz00_3109,BgL_arg2226z00_1362); }  else 
{ 
obj_t BgL_auxz00_7196;
BgL_auxz00_7196 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21848)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3109), BgL_vectorz00_3108); 
FAILURE(BgL_auxz00_7196,BFALSE,BFALSE);} } } } 
{ /* Llib/hash.scm 543 */
bool_t BgL_testz00_7201;
{ /* Llib/hash.scm 543 */
long BgL_n2z00_3112;
{ /* Llib/hash.scm 543 */
obj_t BgL_auxz00_7202;
if(
INTEGERP(BgL_maxzd2bucketzd2lenz00_1344))
{ /* Llib/hash.scm 543 */
BgL_auxz00_7202 = BgL_maxzd2bucketzd2lenz00_1344
; }  else 
{ 
obj_t BgL_auxz00_7205;
BgL_auxz00_7205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21929)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_maxzd2bucketzd2lenz00_1344); 
FAILURE(BgL_auxz00_7205,BFALSE,BFALSE);} 
BgL_n2z00_3112 = 
(long)CINT(BgL_auxz00_7202); } 
BgL_testz00_7201 = 
(BgL_countz00_1355>BgL_n2z00_3112); } 
if(BgL_testz00_7201)
{ /* Llib/hash.scm 543 */
BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(BgL_tablez00_90); }  else 
{ /* Llib/hash.scm 543 */((bool_t)0); } } 
return BgL_vz00_1358;}  else 
{ /* Llib/hash.scm 546 */
bool_t BgL_testz00_7212;
{ /* Llib/hash.scm 546 */
obj_t BgL_arg2237z00_1371;
{ /* Llib/hash.scm 546 */
obj_t BgL_pairz00_3113;
if(
PAIRP(BgL_buckz00_1354))
{ /* Llib/hash.scm 546 */
BgL_pairz00_3113 = BgL_buckz00_1354; }  else 
{ 
obj_t BgL_auxz00_7215;
BgL_auxz00_7215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22024)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1354); 
FAILURE(BgL_auxz00_7215,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 546 */
obj_t BgL_pairz00_3116;
{ /* Llib/hash.scm 546 */
obj_t BgL_aux3287z00_4266;
BgL_aux3287z00_4266 = 
CAR(BgL_pairz00_3113); 
if(
PAIRP(BgL_aux3287z00_4266))
{ /* Llib/hash.scm 546 */
BgL_pairz00_3116 = BgL_aux3287z00_4266; }  else 
{ 
obj_t BgL_auxz00_7222;
BgL_auxz00_7222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22018)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3287z00_4266); 
FAILURE(BgL_auxz00_7222,BFALSE,BFALSE);} } 
BgL_arg2237z00_1371 = 
CAR(BgL_pairz00_3116); } } 
{ /* Llib/hash.scm 546 */
obj_t BgL_eqtz00_3120;
{ /* Llib/hash.scm 546 */
bool_t BgL_testz00_7227;
{ /* Llib/hash.scm 546 */
obj_t BgL_auxz00_7228;
{ /* Llib/hash.scm 546 */
obj_t BgL_res2673z00_3129;
{ /* Llib/hash.scm 546 */
obj_t BgL_aux3289z00_4268;
BgL_aux3289z00_4268 = 
STRUCT_KEY(BgL_tablez00_90); 
if(
SYMBOLP(BgL_aux3289z00_4268))
{ /* Llib/hash.scm 546 */
BgL_res2673z00_3129 = BgL_aux3289z00_4268; }  else 
{ 
obj_t BgL_auxz00_7232;
BgL_auxz00_7232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)21994)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3289z00_4268); 
FAILURE(BgL_auxz00_7232,BFALSE,BFALSE);} } 
BgL_auxz00_7228 = BgL_res2673z00_3129; } 
BgL_testz00_7227 = 
(BgL_auxz00_7228==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7227)
{ /* Llib/hash.scm 546 */
int BgL_auxz00_7237;
BgL_auxz00_7237 = 
(int)(((long)3)); 
BgL_eqtz00_3120 = 
STRUCT_REF(BgL_tablez00_90, BgL_auxz00_7237); }  else 
{ /* Llib/hash.scm 546 */
BgL_eqtz00_3120 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_90); } } 
if(
PROCEDUREP(BgL_eqtz00_3120))
{ /* Llib/hash.scm 546 */
obj_t BgL_funz00_4270;
BgL_funz00_4270 = BgL_eqtz00_3120; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4270, ((long)2)))
{ /* Llib/hash.scm 546 */
BgL_testz00_7212 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4270)(BgL_eqtz00_3120, BgL_arg2237z00_1371, BgL_keyz00_91, BEOA))
; }  else 
{ /* Llib/hash.scm 546 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4270);} }  else 
{ /* Llib/hash.scm 546 */
if(
STRINGP(BgL_arg2237z00_1371))
{ /* Llib/hash.scm 546 */
if(
STRINGP(BgL_keyz00_91))
{ /* Llib/hash.scm 546 */
BgL_testz00_7212 = 
bigloo_strcmp(BgL_arg2237z00_1371, BgL_keyz00_91)
; }  else 
{ /* Llib/hash.scm 546 */
BgL_testz00_7212 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 546 */
BgL_testz00_7212 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2237z00_1371, BgL_keyz00_91)
; } } } } 
if(BgL_testz00_7212)
{ /* Llib/hash.scm 547 */
obj_t BgL_resz00_1366;
{ /* Llib/hash.scm 547 */
obj_t BgL_arg2234z00_1368;
{ /* Llib/hash.scm 547 */
obj_t BgL_pairz00_3135;
BgL_pairz00_3135 = BgL_buckz00_1354; 
{ /* Llib/hash.scm 547 */
obj_t BgL_pairz00_3138;
{ /* Llib/hash.scm 547 */
obj_t BgL_aux3295z00_4275;
BgL_aux3295z00_4275 = 
CAR(BgL_pairz00_3135); 
if(
PAIRP(BgL_aux3295z00_4275))
{ /* Llib/hash.scm 547 */
BgL_pairz00_3138 = BgL_aux3295z00_4275; }  else 
{ 
obj_t BgL_auxz00_7258;
BgL_auxz00_7258 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22059)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3295z00_4275); 
FAILURE(BgL_auxz00_7258,BFALSE,BFALSE);} } 
BgL_arg2234z00_1368 = 
CDR(BgL_pairz00_3138); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_92, ((long)2)))
{ /* Llib/hash.scm 547 */
BgL_resz00_1366 = 
PROCEDURE_ENTRY(BgL_procz00_92)(BgL_procz00_92, BgL_objz00_93, BgL_arg2234z00_1368, BEOA); }  else 
{ /* Llib/hash.scm 547 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3537z00zz__hashz00,BgL_procz00_92);} } 
{ /* Llib/hash.scm 548 */
obj_t BgL_arg2233z00_1367;
BgL_arg2233z00_1367 = 
CAR(BgL_buckz00_1354); 
{ /* Llib/hash.scm 548 */
obj_t BgL_pairz00_3140;
if(
PAIRP(BgL_arg2233z00_1367))
{ /* Llib/hash.scm 548 */
BgL_pairz00_3140 = BgL_arg2233z00_1367; }  else 
{ 
obj_t BgL_auxz00_7271;
BgL_auxz00_7271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22099)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_arg2233z00_1367); 
FAILURE(BgL_auxz00_7271,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3140, BgL_resz00_1366); } } 
return BgL_resz00_1366;}  else 
{ /* Llib/hash.scm 551 */
obj_t BgL_arg2235z00_1369;long BgL_arg2236z00_1370;
{ /* Llib/hash.scm 551 */
obj_t BgL_pairz00_3142;
if(
PAIRP(BgL_buckz00_1354))
{ /* Llib/hash.scm 551 */
BgL_pairz00_3142 = BgL_buckz00_1354; }  else 
{ 
obj_t BgL_auxz00_7278;
BgL_auxz00_7278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22140)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_buckz00_1354); 
FAILURE(BgL_auxz00_7278,BFALSE,BFALSE);} 
BgL_arg2235z00_1369 = 
CDR(BgL_pairz00_3142); } 
BgL_arg2236z00_1370 = 
(BgL_countz00_1355+((long)1)); 
{ 
long BgL_countz00_7285;obj_t BgL_buckz00_7284;
BgL_buckz00_7284 = BgL_arg2235z00_1369; 
BgL_countz00_7285 = BgL_arg2236z00_1370; 
BgL_countz00_1355 = BgL_countz00_7285; 
BgL_buckz00_1354 = BgL_buckz00_7284; 
goto BgL_zc3anonymousza32218ze3z83_1356;} } } } } } } } } } } 
}



/* hashtable-remove! */
BGL_EXPORTED_DEF bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t BgL_tablez00_95, obj_t BgL_keyz00_96)
{ AN_OBJECT;
{ /* Llib/hash.scm 556 */
{ /* Llib/hash.scm 557 */
bool_t BgL_testz00_7286;
{ /* Llib/hash.scm 557 */
bool_t BgL_res2675z00_3158;
{ /* Llib/hash.scm 557 */
bool_t BgL_testz00_7287;
{ /* Llib/hash.scm 557 */
obj_t BgL_arg2065z00_3149;
{ /* Llib/hash.scm 557 */
bool_t BgL_testz00_7288;
{ /* Llib/hash.scm 557 */
obj_t BgL_auxz00_7289;
{ /* Llib/hash.scm 557 */
obj_t BgL_res2674z00_3155;
{ /* Llib/hash.scm 557 */
obj_t BgL_aux3305z00_4286;
BgL_aux3305z00_4286 = 
STRUCT_KEY(BgL_tablez00_95); 
if(
SYMBOLP(BgL_aux3305z00_4286))
{ /* Llib/hash.scm 557 */
BgL_res2674z00_3155 = BgL_aux3305z00_4286; }  else 
{ 
obj_t BgL_auxz00_7293;
BgL_auxz00_7293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22451)), BGl_string3540z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3305z00_4286); 
FAILURE(BgL_auxz00_7293,BFALSE,BFALSE);} } 
BgL_auxz00_7289 = BgL_res2674z00_3155; } 
BgL_testz00_7288 = 
(BgL_auxz00_7289==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7288)
{ /* Llib/hash.scm 557 */
int BgL_auxz00_7298;
BgL_auxz00_7298 = 
(int)(((long)5)); 
BgL_arg2065z00_3149 = 
STRUCT_REF(BgL_tablez00_95, BgL_auxz00_7298); }  else 
{ /* Llib/hash.scm 557 */
BgL_arg2065z00_3149 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_95); } } 
{ /* Llib/hash.scm 557 */
long BgL_n2z00_3157;
{ /* Llib/hash.scm 557 */
obj_t BgL_auxz00_7302;
if(
INTEGERP(BgL_arg2065z00_3149))
{ /* Llib/hash.scm 557 */
BgL_auxz00_7302 = BgL_arg2065z00_3149
; }  else 
{ 
obj_t BgL_auxz00_7305;
BgL_auxz00_7305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22451)), BGl_string3540z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2065z00_3149); 
FAILURE(BgL_auxz00_7305,BFALSE,BFALSE);} 
BgL_n2z00_3157 = 
(long)CINT(BgL_auxz00_7302); } 
BgL_testz00_7287 = 
(((long)0)==BgL_n2z00_3157); } } 
if(BgL_testz00_7287)
{ /* Llib/hash.scm 557 */
BgL_res2675z00_3158 = ((bool_t)0); }  else 
{ /* Llib/hash.scm 557 */
BgL_res2675z00_3158 = ((bool_t)1); } } 
BgL_testz00_7286 = BgL_res2675z00_3158; } 
if(BgL_testz00_7286)
{ /* Llib/hash.scm 557 */
return 
CBOOL(
BGl_weakzd2hashtablezd2removez12z12zz__weakhashz00(BgL_tablez00_95, BgL_keyz00_96));}  else 
{ /* Llib/hash.scm 557 */
return 
BGl_plainzd2hashtablezd2removez12z12zz__hashz00(BgL_tablez00_95, BgL_keyz00_96);} } } 
}



/* _hashtable-remove! */
obj_t BGl__hashtablezd2removez12zc0zz__hashz00(obj_t BgL_envz00_3661, obj_t BgL_tablez00_3662, obj_t BgL_keyz00_3663)
{ AN_OBJECT;
{ /* Llib/hash.scm 556 */
{ /* Llib/hash.scm 557 */
bool_t BgL_auxz00_7314;
{ /* Llib/hash.scm 557 */
obj_t BgL_auxz00_7315;
if(
STRUCTP(BgL_tablez00_3662))
{ /* Llib/hash.scm 557 */
BgL_auxz00_7315 = BgL_tablez00_3662
; }  else 
{ 
obj_t BgL_auxz00_7318;
BgL_auxz00_7318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22447)), BGl_string3541z00zz__hashz00, BGl_string3440z00zz__hashz00, BgL_tablez00_3662); 
FAILURE(BgL_auxz00_7318,BFALSE,BFALSE);} 
BgL_auxz00_7314 = 
BGl_hashtablezd2removez12zc0zz__hashz00(BgL_auxz00_7315, BgL_keyz00_3663); } 
return 
BBOOL(BgL_auxz00_7314);} } 
}



/* plain-hashtable-remove! */
bool_t BGl_plainzd2hashtablezd2removez12z12zz__hashz00(obj_t BgL_tablez00_97, obj_t BgL_keyz00_98)
{ AN_OBJECT;
{ /* Llib/hash.scm 564 */
{ /* Llib/hash.scm 565 */
obj_t BgL_bucketsz00_1375;
{ /* Llib/hash.scm 565 */
bool_t BgL_testz00_7324;
{ /* Llib/hash.scm 565 */
obj_t BgL_auxz00_7325;
{ /* Llib/hash.scm 565 */
obj_t BgL_res2676z00_3164;
{ /* Llib/hash.scm 565 */
obj_t BgL_aux3311z00_4292;
BgL_aux3311z00_4292 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3311z00_4292))
{ /* Llib/hash.scm 565 */
BgL_res2676z00_3164 = BgL_aux3311z00_4292; }  else 
{ 
obj_t BgL_auxz00_7329;
BgL_auxz00_7329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22861)), BGl_string3542z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3311z00_4292); 
FAILURE(BgL_auxz00_7329,BFALSE,BFALSE);} } 
BgL_auxz00_7325 = BgL_res2676z00_3164; } 
BgL_testz00_7324 = 
(BgL_auxz00_7325==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7324)
{ /* Llib/hash.scm 565 */
int BgL_auxz00_7334;
BgL_auxz00_7334 = 
(int)(((long)2)); 
BgL_bucketsz00_1375 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7334); }  else 
{ /* Llib/hash.scm 565 */
BgL_bucketsz00_1375 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
{ /* Llib/hash.scm 565 */
int BgL_bucketzd2lenzd2_1376;
{ /* Llib/hash.scm 566 */
obj_t BgL_vectorz00_3165;
if(
VECTORP(BgL_bucketsz00_1375))
{ /* Llib/hash.scm 566 */
BgL_vectorz00_3165 = BgL_bucketsz00_1375; }  else 
{ 
obj_t BgL_auxz00_7340;
BgL_auxz00_7340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22919)), BGl_string3542z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_bucketsz00_1375); 
FAILURE(BgL_auxz00_7340,BFALSE,BFALSE);} 
BgL_bucketzd2lenzd2_1376 = 
VECTOR_LENGTH(BgL_vectorz00_3165); } 
{ /* Llib/hash.scm 566 */
long BgL_bucketzd2numzd2_1377;
{ /* Llib/hash.scm 567 */
long BgL_arg2257z00_1400;
{ /* Llib/hash.scm 567 */
long BgL_res2679z00_3184;
{ /* Llib/hash.scm 567 */
obj_t BgL_hashnz00_3168;
{ /* Llib/hash.scm 567 */
bool_t BgL_testz00_7345;
{ /* Llib/hash.scm 567 */
obj_t BgL_auxz00_7346;
{ /* Llib/hash.scm 567 */
obj_t BgL_res2677z00_3176;
{ /* Llib/hash.scm 567 */
obj_t BgL_aux3315z00_4296;
BgL_aux3315z00_4296 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3315z00_4296))
{ /* Llib/hash.scm 567 */
BgL_res2677z00_3176 = BgL_aux3315z00_4296; }  else 
{ 
obj_t BgL_auxz00_7350;
BgL_auxz00_7350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22957)), BGl_string3542z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3315z00_4296); 
FAILURE(BgL_auxz00_7350,BFALSE,BFALSE);} } 
BgL_auxz00_7346 = BgL_res2677z00_3176; } 
BgL_testz00_7345 = 
(BgL_auxz00_7346==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7345)
{ /* Llib/hash.scm 567 */
int BgL_auxz00_7355;
BgL_auxz00_7355 = 
(int)(((long)4)); 
BgL_hashnz00_3168 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7355); }  else 
{ /* Llib/hash.scm 567 */
BgL_hashnz00_3168 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
if(
PROCEDUREP(BgL_hashnz00_3168))
{ /* Llib/hash.scm 567 */
obj_t BgL_arg1974z00_3170;
{ /* Llib/hash.scm 567 */
obj_t BgL_funz00_4298;
BgL_funz00_4298 = BgL_hashnz00_3168; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4298, ((long)1)))
{ /* Llib/hash.scm 567 */
BgL_arg1974z00_3170 = 
PROCEDURE_ENTRY(BgL_funz00_4298)(BgL_hashnz00_3168, BgL_keyz00_98, BEOA); }  else 
{ /* Llib/hash.scm 567 */
FAILURE(BGl_string3543z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4298);} } 
{ /* Llib/hash.scm 567 */
long BgL_nz00_3178;
{ /* Llib/hash.scm 567 */
obj_t BgL_auxz00_7366;
if(
INTEGERP(BgL_arg1974z00_3170))
{ /* Llib/hash.scm 567 */
BgL_auxz00_7366 = BgL_arg1974z00_3170
; }  else 
{ 
obj_t BgL_auxz00_7369;
BgL_auxz00_7369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)22957)), BGl_string3542z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_3170); 
FAILURE(BgL_auxz00_7369,BFALSE,BFALSE);} 
BgL_nz00_3178 = 
(long)CINT(BgL_auxz00_7366); } 
if(
(BgL_nz00_3178<((long)0)))
{ /* Llib/hash.scm 567 */
BgL_res2679z00_3184 = 
NEG(BgL_nz00_3178); }  else 
{ /* Llib/hash.scm 567 */
BgL_res2679z00_3184 = BgL_nz00_3178; } } }  else 
{ /* Llib/hash.scm 567 */
BgL_res2679z00_3184 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_98); } } 
BgL_arg2257z00_1400 = BgL_res2679z00_3184; } 
{ /* Llib/hash.scm 567 */
long BgL_auxz00_7378;
BgL_auxz00_7378 = 
(long)(BgL_bucketzd2lenzd2_1376); 
BgL_bucketzd2numzd2_1377 = 
(BgL_arg2257z00_1400%BgL_auxz00_7378); } } 
{ /* Llib/hash.scm 567 */
obj_t BgL_bucketz00_1378;
{ /* Llib/hash.scm 568 */
obj_t BgL_vectorz00_3187;int BgL_kz00_3188;
BgL_vectorz00_3187 = BgL_bucketsz00_1375; 
BgL_kz00_3188 = 
(int)(BgL_bucketzd2numzd2_1377); 
{ /* Llib/hash.scm 568 */
int BgL_l2797z00_3757;
BgL_l2797z00_3757 = 
VECTOR_LENGTH(BgL_vectorz00_3187); 
if(
BOUND_CHECK(BgL_kz00_3188, BgL_l2797z00_3757))
{ /* Llib/hash.scm 568 */
BgL_bucketz00_1378 = 
VECTOR_REF(BgL_vectorz00_3187,BgL_kz00_3188); }  else 
{ 
obj_t BgL_auxz00_7386;
BgL_auxz00_7386 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23014)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3188), BgL_vectorz00_3187); 
FAILURE(BgL_auxz00_7386,BFALSE,BFALSE);} } } 
{ /* Llib/hash.scm 568 */

if(
NULLP(BgL_bucketz00_1378))
{ /* Llib/hash.scm 570 */
return ((bool_t)0);}  else 
{ /* Llib/hash.scm 572 */
bool_t BgL_testz00_7393;
{ /* Llib/hash.scm 572 */
obj_t BgL_arg2256z00_1399;
{ /* Llib/hash.scm 572 */
obj_t BgL_pairz00_3190;
if(
PAIRP(BgL_bucketz00_1378))
{ /* Llib/hash.scm 572 */
BgL_pairz00_3190 = BgL_bucketz00_1378; }  else 
{ 
obj_t BgL_auxz00_7396;
BgL_auxz00_7396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23118)), BGl_string3542z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1378); 
FAILURE(BgL_auxz00_7396,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 572 */
obj_t BgL_pairz00_3193;
{ /* Llib/hash.scm 572 */
obj_t BgL_aux3325z00_4307;
BgL_aux3325z00_4307 = 
CAR(BgL_pairz00_3190); 
if(
PAIRP(BgL_aux3325z00_4307))
{ /* Llib/hash.scm 572 */
BgL_pairz00_3193 = BgL_aux3325z00_4307; }  else 
{ 
obj_t BgL_auxz00_7403;
BgL_auxz00_7403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23112)), BGl_string3542z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3325z00_4307); 
FAILURE(BgL_auxz00_7403,BFALSE,BFALSE);} } 
BgL_arg2256z00_1399 = 
CAR(BgL_pairz00_3193); } } 
{ /* Llib/hash.scm 572 */
obj_t BgL_eqtz00_3197;
{ /* Llib/hash.scm 572 */
bool_t BgL_testz00_7408;
{ /* Llib/hash.scm 572 */
obj_t BgL_auxz00_7409;
{ /* Llib/hash.scm 572 */
obj_t BgL_res2680z00_3206;
{ /* Llib/hash.scm 572 */
obj_t BgL_aux3327z00_4309;
BgL_aux3327z00_4309 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3327z00_4309))
{ /* Llib/hash.scm 572 */
BgL_res2680z00_3206 = BgL_aux3327z00_4309; }  else 
{ 
obj_t BgL_auxz00_7413;
BgL_auxz00_7413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23088)), BGl_string3542z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3327z00_4309); 
FAILURE(BgL_auxz00_7413,BFALSE,BFALSE);} } 
BgL_auxz00_7409 = BgL_res2680z00_3206; } 
BgL_testz00_7408 = 
(BgL_auxz00_7409==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7408)
{ /* Llib/hash.scm 572 */
int BgL_auxz00_7418;
BgL_auxz00_7418 = 
(int)(((long)3)); 
BgL_eqtz00_3197 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7418); }  else 
{ /* Llib/hash.scm 572 */
BgL_eqtz00_3197 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
if(
PROCEDUREP(BgL_eqtz00_3197))
{ /* Llib/hash.scm 572 */
obj_t BgL_funz00_4311;
BgL_funz00_4311 = BgL_eqtz00_3197; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4311, ((long)2)))
{ /* Llib/hash.scm 572 */
BgL_testz00_7393 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4311)(BgL_eqtz00_3197, BgL_arg2256z00_1399, BgL_keyz00_98, BEOA))
; }  else 
{ /* Llib/hash.scm 572 */
FAILURE(BGl_string3543z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4311);} }  else 
{ /* Llib/hash.scm 572 */
if(
STRINGP(BgL_arg2256z00_1399))
{ /* Llib/hash.scm 572 */
if(
STRINGP(BgL_keyz00_98))
{ /* Llib/hash.scm 572 */
BgL_testz00_7393 = 
bigloo_strcmp(BgL_arg2256z00_1399, BgL_keyz00_98)
; }  else 
{ /* Llib/hash.scm 572 */
BgL_testz00_7393 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 572 */
BgL_testz00_7393 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2256z00_1399, BgL_keyz00_98)
; } } } } 
if(BgL_testz00_7393)
{ /* Llib/hash.scm 572 */
{ /* Llib/hash.scm 573 */
obj_t BgL_arg2242z00_1381;
BgL_arg2242z00_1381 = 
CDR(BgL_bucketz00_1378); 
{ /* Llib/hash.scm 573 */
obj_t BgL_vectorz00_3213;int BgL_kz00_3214;
BgL_vectorz00_3213 = BgL_bucketsz00_1375; 
BgL_kz00_3214 = 
(int)(BgL_bucketzd2numzd2_1377); 
{ /* Llib/hash.scm 573 */
int BgL_l2801z00_3761;
BgL_l2801z00_3761 = 
VECTOR_LENGTH(BgL_vectorz00_3213); 
if(
BOUND_CHECK(BgL_kz00_3214, BgL_l2801z00_3761))
{ /* Llib/hash.scm 573 */
VECTOR_SET(BgL_vectorz00_3213,BgL_kz00_3214,BgL_arg2242z00_1381); }  else 
{ 
obj_t BgL_auxz00_7442;
BgL_auxz00_7442 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23134)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3214), BgL_vectorz00_3213); 
FAILURE(BgL_auxz00_7442,BFALSE,BFALSE);} } } } 
{ /* Llib/hash.scm 574 */
long BgL_arg2243z00_1382;
{ /* Llib/hash.scm 574 */
obj_t BgL_arg2244z00_1383;
{ /* Llib/hash.scm 574 */
bool_t BgL_testz00_7447;
{ /* Llib/hash.scm 574 */
obj_t BgL_auxz00_7448;
{ /* Llib/hash.scm 574 */
obj_t BgL_res2681z00_3221;
{ /* Llib/hash.scm 574 */
obj_t BgL_aux3335z00_4318;
BgL_aux3335z00_4318 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3335z00_4318))
{ /* Llib/hash.scm 574 */
BgL_res2681z00_3221 = BgL_aux3335z00_4318; }  else 
{ 
obj_t BgL_auxz00_7452;
BgL_auxz00_7452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23216)), BGl_string3542z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3335z00_4318); 
FAILURE(BgL_auxz00_7452,BFALSE,BFALSE);} } 
BgL_auxz00_7448 = BgL_res2681z00_3221; } 
BgL_testz00_7447 = 
(BgL_auxz00_7448==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7447)
{ /* Llib/hash.scm 574 */
int BgL_auxz00_7457;
BgL_auxz00_7457 = 
(int)(((long)0)); 
BgL_arg2244z00_1383 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7457); }  else 
{ /* Llib/hash.scm 574 */
BgL_arg2244z00_1383 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
{ /* Llib/hash.scm 574 */
long BgL_za71za7_3222;
{ /* Llib/hash.scm 574 */
obj_t BgL_auxz00_7461;
if(
INTEGERP(BgL_arg2244z00_1383))
{ /* Llib/hash.scm 574 */
BgL_auxz00_7461 = BgL_arg2244z00_1383
; }  else 
{ 
obj_t BgL_auxz00_7464;
BgL_auxz00_7464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23211)), BGl_string3542z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2244z00_1383); 
FAILURE(BgL_auxz00_7464,BFALSE,BFALSE);} 
BgL_za71za7_3222 = 
(long)CINT(BgL_auxz00_7461); } 
BgL_arg2243z00_1382 = 
(BgL_za71za7_3222-((long)1)); } } 
{ /* Llib/hash.scm 574 */
bool_t BgL_testz00_7470;
{ /* Llib/hash.scm 574 */
obj_t BgL_auxz00_7471;
{ /* Llib/hash.scm 574 */
obj_t BgL_res2682z00_3230;
{ /* Llib/hash.scm 574 */
obj_t BgL_aux3339z00_4322;
BgL_aux3339z00_4322 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3339z00_4322))
{ /* Llib/hash.scm 574 */
BgL_res2682z00_3230 = BgL_aux3339z00_4322; }  else 
{ 
obj_t BgL_auxz00_7475;
BgL_auxz00_7475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23183)), BGl_string3542z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3339z00_4322); 
FAILURE(BgL_auxz00_7475,BFALSE,BFALSE);} } 
BgL_auxz00_7471 = BgL_res2682z00_3230; } 
BgL_testz00_7470 = 
(BgL_auxz00_7471==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7470)
{ /* Llib/hash.scm 574 */
obj_t BgL_auxz00_7482;int BgL_auxz00_7480;
BgL_auxz00_7482 = 
BINT(BgL_arg2243z00_1382); 
BgL_auxz00_7480 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_97, BgL_auxz00_7480, BgL_auxz00_7482); }  else 
{ /* Llib/hash.scm 574 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } } 
return ((bool_t)1);}  else 
{ /* Llib/hash.scm 577 */
obj_t BgL_g1844z00_1385;
{ /* Llib/hash.scm 577 */
obj_t BgL_pairz00_3231;
if(
PAIRP(BgL_bucketz00_1378))
{ /* Llib/hash.scm 577 */
BgL_pairz00_3231 = BgL_bucketz00_1378; }  else 
{ 
obj_t BgL_auxz00_7488;
BgL_auxz00_7488 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23286)), BGl_string3542z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_bucketz00_1378); 
FAILURE(BgL_auxz00_7488,BFALSE,BFALSE);} 
BgL_g1844z00_1385 = 
CDR(BgL_pairz00_3231); } 
{ 
obj_t BgL_bucketz00_1387;obj_t BgL_prevz00_1388;
BgL_bucketz00_1387 = BgL_g1844z00_1385; 
BgL_prevz00_1388 = BgL_bucketz00_1378; 
BgL_zc3anonymousza32246ze3z83_1389:
if(
PAIRP(BgL_bucketz00_1387))
{ /* Llib/hash.scm 580 */
bool_t BgL_testz00_7495;
{ /* Llib/hash.scm 580 */
obj_t BgL_arg2255z00_1397;
{ /* Llib/hash.scm 580 */
obj_t BgL_pairz00_3236;
{ /* Llib/hash.scm 580 */
obj_t BgL_aux3343z00_4326;
BgL_aux3343z00_4326 = 
CAR(BgL_bucketz00_1387); 
if(
PAIRP(BgL_aux3343z00_4326))
{ /* Llib/hash.scm 580 */
BgL_pairz00_3236 = BgL_aux3343z00_4326; }  else 
{ 
obj_t BgL_auxz00_7499;
BgL_auxz00_7499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23373)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_aux3343z00_4326); 
FAILURE(BgL_auxz00_7499,BFALSE,BFALSE);} } 
BgL_arg2255z00_1397 = 
CAR(BgL_pairz00_3236); } 
{ /* Llib/hash.scm 580 */
obj_t BgL_eqtz00_3240;
{ /* Llib/hash.scm 580 */
bool_t BgL_testz00_7504;
{ /* Llib/hash.scm 580 */
obj_t BgL_auxz00_7505;
{ /* Llib/hash.scm 580 */
obj_t BgL_res2683z00_3249;
{ /* Llib/hash.scm 580 */
obj_t BgL_aux3345z00_4328;
BgL_aux3345z00_4328 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3345z00_4328))
{ /* Llib/hash.scm 580 */
BgL_res2683z00_3249 = BgL_aux3345z00_4328; }  else 
{ 
obj_t BgL_auxz00_7509;
BgL_auxz00_7509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23349)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3345z00_4328); 
FAILURE(BgL_auxz00_7509,BFALSE,BFALSE);} } 
BgL_auxz00_7505 = BgL_res2683z00_3249; } 
BgL_testz00_7504 = 
(BgL_auxz00_7505==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7504)
{ /* Llib/hash.scm 580 */
int BgL_auxz00_7514;
BgL_auxz00_7514 = 
(int)(((long)3)); 
BgL_eqtz00_3240 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7514); }  else 
{ /* Llib/hash.scm 580 */
BgL_eqtz00_3240 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
if(
PROCEDUREP(BgL_eqtz00_3240))
{ /* Llib/hash.scm 580 */
obj_t BgL_funz00_4330;
BgL_funz00_4330 = BgL_eqtz00_3240; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4330, ((long)2)))
{ /* Llib/hash.scm 580 */
BgL_testz00_7495 = 
CBOOL(
PROCEDURE_ENTRY(BgL_funz00_4330)(BgL_eqtz00_3240, BgL_arg2255z00_1397, BgL_keyz00_98, BEOA))
; }  else 
{ /* Llib/hash.scm 580 */
FAILURE(BGl_string3503z00zz__hashz00,BGl_list3504z00zz__hashz00,BgL_funz00_4330);} }  else 
{ /* Llib/hash.scm 580 */
if(
STRINGP(BgL_arg2255z00_1397))
{ /* Llib/hash.scm 580 */
if(
STRINGP(BgL_keyz00_98))
{ /* Llib/hash.scm 580 */
BgL_testz00_7495 = 
bigloo_strcmp(BgL_arg2255z00_1397, BgL_keyz00_98)
; }  else 
{ /* Llib/hash.scm 580 */
BgL_testz00_7495 = ((bool_t)0)
; } }  else 
{ /* Llib/hash.scm 580 */
BgL_testz00_7495 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2255z00_1397, BgL_keyz00_98)
; } } } } 
if(BgL_testz00_7495)
{ /* Llib/hash.scm 580 */
{ /* Llib/hash.scm 582 */
obj_t BgL_arg2249z00_1392;
BgL_arg2249z00_1392 = 
CDR(BgL_bucketz00_1387); 
{ /* Llib/hash.scm 582 */
obj_t BgL_pairz00_3256;
if(
PAIRP(BgL_prevz00_1388))
{ /* Llib/hash.scm 582 */
BgL_pairz00_3256 = BgL_prevz00_1388; }  else 
{ 
obj_t BgL_auxz00_7535;
BgL_auxz00_7535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23419)), BGl_string3486z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_prevz00_1388); 
FAILURE(BgL_auxz00_7535,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_3256, BgL_arg2249z00_1392); } } 
{ /* Llib/hash.scm 584 */
long BgL_arg2250z00_1393;
{ /* Llib/hash.scm 584 */
obj_t BgL_arg2251z00_1394;
{ /* Llib/hash.scm 584 */
bool_t BgL_testz00_7540;
{ /* Llib/hash.scm 584 */
obj_t BgL_auxz00_7541;
{ /* Llib/hash.scm 584 */
obj_t BgL_res2684z00_3263;
{ /* Llib/hash.scm 584 */
obj_t BgL_aux3351z00_4335;
BgL_aux3351z00_4335 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3351z00_4335))
{ /* Llib/hash.scm 584 */
BgL_res2684z00_3263 = BgL_aux3351z00_4335; }  else 
{ 
obj_t BgL_auxz00_7545;
BgL_auxz00_7545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23485)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3351z00_4335); 
FAILURE(BgL_auxz00_7545,BFALSE,BFALSE);} } 
BgL_auxz00_7541 = BgL_res2684z00_3263; } 
BgL_testz00_7540 = 
(BgL_auxz00_7541==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7540)
{ /* Llib/hash.scm 584 */
int BgL_auxz00_7550;
BgL_auxz00_7550 = 
(int)(((long)0)); 
BgL_arg2251z00_1394 = 
STRUCT_REF(BgL_tablez00_97, BgL_auxz00_7550); }  else 
{ /* Llib/hash.scm 584 */
BgL_arg2251z00_1394 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } 
{ /* Llib/hash.scm 584 */
long BgL_za71za7_3264;
{ /* Llib/hash.scm 584 */
obj_t BgL_auxz00_7554;
if(
INTEGERP(BgL_arg2251z00_1394))
{ /* Llib/hash.scm 584 */
BgL_auxz00_7554 = BgL_arg2251z00_1394
; }  else 
{ 
obj_t BgL_auxz00_7557;
BgL_auxz00_7557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23480)), BGl_string3486z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg2251z00_1394); 
FAILURE(BgL_auxz00_7557,BFALSE,BFALSE);} 
BgL_za71za7_3264 = 
(long)CINT(BgL_auxz00_7554); } 
BgL_arg2250z00_1393 = 
(BgL_za71za7_3264-((long)1)); } } 
{ /* Llib/hash.scm 583 */
bool_t BgL_testz00_7563;
{ /* Llib/hash.scm 583 */
obj_t BgL_auxz00_7564;
{ /* Llib/hash.scm 583 */
obj_t BgL_res2685z00_3272;
{ /* Llib/hash.scm 583 */
obj_t BgL_aux3355z00_4339;
BgL_aux3355z00_4339 = 
STRUCT_KEY(BgL_tablez00_97); 
if(
SYMBOLP(BgL_aux3355z00_4339))
{ /* Llib/hash.scm 583 */
BgL_res2685z00_3272 = BgL_aux3355z00_4339; }  else 
{ 
obj_t BgL_auxz00_7568;
BgL_auxz00_7568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)23441)), BGl_string3486z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3355z00_4339); 
FAILURE(BgL_auxz00_7568,BFALSE,BFALSE);} } 
BgL_auxz00_7564 = BgL_res2685z00_3272; } 
BgL_testz00_7563 = 
(BgL_auxz00_7564==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7563)
{ /* Llib/hash.scm 583 */
obj_t BgL_auxz00_7575;int BgL_auxz00_7573;
BgL_auxz00_7575 = 
BINT(BgL_arg2250z00_1393); 
BgL_auxz00_7573 = 
(int)(((long)0)); 
STRUCT_SET(BgL_tablez00_97, BgL_auxz00_7573, BgL_auxz00_7575); }  else 
{ /* Llib/hash.scm 583 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_97); } } } 
return ((bool_t)1);}  else 
{ 
obj_t BgL_prevz00_7581;obj_t BgL_bucketz00_7579;
BgL_bucketz00_7579 = 
CDR(BgL_bucketz00_1387); 
BgL_prevz00_7581 = BgL_bucketz00_1387; 
BgL_prevz00_1388 = BgL_prevz00_7581; 
BgL_bucketz00_1387 = BgL_bucketz00_7579; 
goto BgL_zc3anonymousza32246ze3z83_1389;} }  else 
{ /* Llib/hash.scm 579 */
return ((bool_t)0);} } } } } } } } } } 
}



/* plain-hashtable-expand! */
bool_t BGl_plainzd2hashtablezd2expandz12z12zz__hashz00(obj_t BgL_tablez00_100)
{ AN_OBJECT;
{ /* Llib/hash.scm 601 */
{ /* Llib/hash.scm 602 */
obj_t BgL_oldzd2buckszd2_1402;
{ /* Llib/hash.scm 602 */
bool_t BgL_testz00_7582;
{ /* Llib/hash.scm 602 */
obj_t BgL_auxz00_7583;
{ /* Llib/hash.scm 602 */
obj_t BgL_res2686z00_3279;
{ /* Llib/hash.scm 602 */
obj_t BgL_aux3357z00_4341;
BgL_aux3357z00_4341 = 
STRUCT_KEY(BgL_tablez00_100); 
if(
SYMBOLP(BgL_aux3357z00_4341))
{ /* Llib/hash.scm 602 */
BgL_res2686z00_3279 = BgL_aux3357z00_4341; }  else 
{ 
obj_t BgL_auxz00_7587;
BgL_auxz00_7587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24227)), BGl_string3544z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3357z00_4341); 
FAILURE(BgL_auxz00_7587,BFALSE,BFALSE);} } 
BgL_auxz00_7583 = BgL_res2686z00_3279; } 
BgL_testz00_7582 = 
(BgL_auxz00_7583==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7582)
{ /* Llib/hash.scm 602 */
int BgL_auxz00_7592;
BgL_auxz00_7592 = 
(int)(((long)2)); 
BgL_oldzd2buckszd2_1402 = 
STRUCT_REF(BgL_tablez00_100, BgL_auxz00_7592); }  else 
{ /* Llib/hash.scm 602 */
BgL_oldzd2buckszd2_1402 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_100); } } 
{ /* Llib/hash.scm 602 */
int BgL_oldzd2buckszd2lenz00_1403;
{ /* Llib/hash.scm 603 */
obj_t BgL_vectorz00_3280;
if(
VECTORP(BgL_oldzd2buckszd2_1402))
{ /* Llib/hash.scm 603 */
BgL_vectorz00_3280 = BgL_oldzd2buckszd2_1402; }  else 
{ 
obj_t BgL_auxz00_7598;
BgL_auxz00_7598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24288)), BGl_string3544z00zz__hashz00, BGl_string3448z00zz__hashz00, BgL_oldzd2buckszd2_1402); 
FAILURE(BgL_auxz00_7598,BFALSE,BFALSE);} 
BgL_oldzd2buckszd2lenz00_1403 = 
VECTOR_LENGTH(BgL_vectorz00_3280); } 
{ /* Llib/hash.scm 603 */
long BgL_newzd2buckszd2lenz00_1404;
BgL_newzd2buckszd2lenz00_1404 = 
(((long)2)*
(long)(BgL_oldzd2buckszd2lenz00_1403)); 
{ /* Llib/hash.scm 604 */
obj_t BgL_newzd2buckszd2_1405;
BgL_newzd2buckszd2_1405 = 
make_vector(
(int)(BgL_newzd2buckszd2lenz00_1404), BNIL); 
{ /* Llib/hash.scm 605 */

{ /* Llib/hash.scm 606 */
bool_t BgL_testz00_7607;
{ /* Llib/hash.scm 606 */
obj_t BgL_auxz00_7608;
{ /* Llib/hash.scm 606 */
obj_t BgL_res2687z00_3289;
{ /* Llib/hash.scm 606 */
obj_t BgL_aux3361z00_4345;
BgL_aux3361z00_4345 = 
STRUCT_KEY(BgL_tablez00_100); 
if(
SYMBOLP(BgL_aux3361z00_4345))
{ /* Llib/hash.scm 606 */
BgL_res2687z00_3289 = BgL_aux3361z00_4345; }  else 
{ 
obj_t BgL_auxz00_7612;
BgL_auxz00_7612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24395)), BGl_string3544z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3361z00_4345); 
FAILURE(BgL_auxz00_7612,BFALSE,BFALSE);} } 
BgL_auxz00_7608 = BgL_res2687z00_3289; } 
BgL_testz00_7607 = 
(BgL_auxz00_7608==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7607)
{ /* Llib/hash.scm 606 */
int BgL_auxz00_7617;
BgL_auxz00_7617 = 
(int)(((long)2)); 
STRUCT_SET(BgL_tablez00_100, BgL_auxz00_7617, BgL_newzd2buckszd2_1405); }  else 
{ /* Llib/hash.scm 606 */
BGl_errorz00zz__errorz00(BGl_string3412z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_100); } } 
{ 
long BgL_iz00_1407;
BgL_iz00_1407 = ((long)0); 
BgL_zc3anonymousza32259ze3z83_1408:
if(
(BgL_iz00_1407<
(long)(BgL_oldzd2buckszd2lenz00_1403)))
{ /* Llib/hash.scm 608 */
{ /* Llib/hash.scm 609 */
obj_t BgL_g1873z00_1410;
{ /* Llib/hash.scm 617 */
obj_t BgL_vectorz00_3292;int BgL_kz00_3293;
BgL_vectorz00_3292 = BgL_oldzd2buckszd2_1402; 
BgL_kz00_3293 = 
(int)(BgL_iz00_1407); 
{ /* Llib/hash.scm 617 */
int BgL_l2805z00_3765;
BgL_l2805z00_3765 = 
VECTOR_LENGTH(BgL_vectorz00_3292); 
if(
BOUND_CHECK(BgL_kz00_3293, BgL_l2805z00_3765))
{ /* Llib/hash.scm 617 */
BgL_g1873z00_1410 = 
VECTOR_REF(BgL_vectorz00_3292,BgL_kz00_3293); }  else 
{ 
obj_t BgL_auxz00_7629;
BgL_auxz00_7629 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24734)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3293), BgL_vectorz00_3292); 
FAILURE(BgL_auxz00_7629,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_l1871z00_1412;
BgL_l1871z00_1412 = BgL_g1873z00_1410; 
BgL_zc3anonymousza32261ze3z83_1413:
if(
PAIRP(BgL_l1871z00_1412))
{ /* Llib/hash.scm 617 */
{ /* Llib/hash.scm 610 */
obj_t BgL_cellz00_1415;
BgL_cellz00_1415 = 
CAR(BgL_l1871z00_1412); 
{ /* Llib/hash.scm 610 */
obj_t BgL_keyz00_1416;
{ /* Llib/hash.scm 610 */
obj_t BgL_pairz00_3296;
if(
PAIRP(BgL_cellz00_1415))
{ /* Llib/hash.scm 610 */
BgL_pairz00_3296 = BgL_cellz00_1415; }  else 
{ 
obj_t BgL_auxz00_7639;
BgL_auxz00_7639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24542)), BGl_string3545z00zz__hashz00, BGl_string3403z00zz__hashz00, BgL_cellz00_1415); 
FAILURE(BgL_auxz00_7639,BFALSE,BFALSE);} 
BgL_keyz00_1416 = 
CAR(BgL_pairz00_3296); } 
{ /* Llib/hash.scm 610 */
long BgL_hz00_1417;
{ /* Llib/hash.scm 611 */
long BgL_arg2265z00_1420;
{ /* Llib/hash.scm 611 */
long BgL_res2690z00_3315;
{ /* Llib/hash.scm 611 */
obj_t BgL_hashnz00_3299;
{ /* Llib/hash.scm 611 */
bool_t BgL_testz00_7644;
{ /* Llib/hash.scm 611 */
obj_t BgL_auxz00_7645;
{ /* Llib/hash.scm 611 */
obj_t BgL_res2688z00_3307;
{ /* Llib/hash.scm 611 */
obj_t BgL_aux3367z00_4351;
BgL_aux3367z00_4351 = 
STRUCT_KEY(BgL_tablez00_100); 
if(
SYMBOLP(BgL_aux3367z00_4351))
{ /* Llib/hash.scm 611 */
BgL_res2688z00_3307 = BgL_aux3367z00_4351; }  else 
{ 
obj_t BgL_auxz00_7649;
BgL_auxz00_7649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24569)), BGl_string3545z00zz__hashz00, BGl_string3411z00zz__hashz00, BgL_aux3367z00_4351); 
FAILURE(BgL_auxz00_7649,BFALSE,BFALSE);} } 
BgL_auxz00_7645 = BgL_res2688z00_3307; } 
BgL_testz00_7644 = 
(BgL_auxz00_7645==BGl_symbol3409z00zz__hashz00); } 
if(BgL_testz00_7644)
{ /* Llib/hash.scm 611 */
int BgL_auxz00_7654;
BgL_auxz00_7654 = 
(int)(((long)4)); 
BgL_hashnz00_3299 = 
STRUCT_REF(BgL_tablez00_100, BgL_auxz00_7654); }  else 
{ /* Llib/hash.scm 611 */
BgL_hashnz00_3299 = 
BGl_errorz00zz__errorz00(BGl_string3438z00zz__hashz00, BGl_string3410z00zz__hashz00, BgL_tablez00_100); } } 
if(
PROCEDUREP(BgL_hashnz00_3299))
{ /* Llib/hash.scm 611 */
obj_t BgL_arg1974z00_3301;
{ /* Llib/hash.scm 611 */
obj_t BgL_funz00_4353;
BgL_funz00_4353 = BgL_hashnz00_3299; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_4353, ((long)1)))
{ /* Llib/hash.scm 611 */
BgL_arg1974z00_3301 = 
PROCEDURE_ENTRY(BgL_funz00_4353)(BgL_hashnz00_3299, BgL_keyz00_1416, BEOA); }  else 
{ /* Llib/hash.scm 611 */
FAILURE(BGl_string3546z00zz__hashz00,BGl_list3498z00zz__hashz00,BgL_funz00_4353);} } 
{ /* Llib/hash.scm 611 */
long BgL_nz00_3309;
{ /* Llib/hash.scm 611 */
obj_t BgL_auxz00_7665;
if(
INTEGERP(BgL_arg1974z00_3301))
{ /* Llib/hash.scm 611 */
BgL_auxz00_7665 = BgL_arg1974z00_3301
; }  else 
{ 
obj_t BgL_auxz00_7668;
BgL_auxz00_7668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24569)), BGl_string3545z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_arg1974z00_3301); 
FAILURE(BgL_auxz00_7668,BFALSE,BFALSE);} 
BgL_nz00_3309 = 
(long)CINT(BgL_auxz00_7665); } 
if(
(BgL_nz00_3309<((long)0)))
{ /* Llib/hash.scm 611 */
BgL_res2690z00_3315 = 
NEG(BgL_nz00_3309); }  else 
{ /* Llib/hash.scm 611 */
BgL_res2690z00_3315 = BgL_nz00_3309; } } }  else 
{ /* Llib/hash.scm 611 */
BgL_res2690z00_3315 = 
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_1416); } } 
BgL_arg2265z00_1420 = BgL_res2690z00_3315; } 
BgL_hz00_1417 = 
(BgL_arg2265z00_1420%BgL_newzd2buckszd2lenz00_1404); } 
{ /* Llib/hash.scm 611 */

{ /* Llib/hash.scm 616 */
obj_t BgL_arg2263z00_1418;
{ /* Llib/hash.scm 616 */
obj_t BgL_arg2264z00_1419;
{ /* Llib/hash.scm 616 */
int BgL_kz00_3319;
BgL_kz00_3319 = 
(int)(BgL_hz00_1417); 
{ /* Llib/hash.scm 616 */
int BgL_l2809z00_3769;
BgL_l2809z00_3769 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1405); 
if(
BOUND_CHECK(BgL_kz00_3319, BgL_l2809z00_3769))
{ /* Llib/hash.scm 616 */
BgL_arg2264z00_1419 = 
VECTOR_REF(BgL_newzd2buckszd2_1405,BgL_kz00_3319); }  else 
{ 
obj_t BgL_auxz00_7683;
BgL_auxz00_7683 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24697)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3319), BgL_newzd2buckszd2_1405); 
FAILURE(BgL_auxz00_7683,BFALSE,BFALSE);} } } 
BgL_arg2263z00_1418 = 
MAKE_PAIR(BgL_cellz00_1415, BgL_arg2264z00_1419); } 
{ /* Llib/hash.scm 613 */
int BgL_kz00_3321;
BgL_kz00_3321 = 
(int)(BgL_hz00_1417); 
{ /* Llib/hash.scm 613 */
int BgL_l2813z00_3773;
BgL_l2813z00_3773 = 
VECTOR_LENGTH(BgL_newzd2buckszd2_1405); 
if(
BOUND_CHECK(BgL_kz00_3321, BgL_l2813z00_3773))
{ /* Llib/hash.scm 613 */
VECTOR_SET(BgL_newzd2buckszd2_1405,BgL_kz00_3321,BgL_arg2263z00_1418); }  else 
{ 
obj_t BgL_auxz00_7694;
BgL_auxz00_7694 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)24637)), BGl_string3415z00zz__hashz00, 
BINT(BgL_kz00_3321), BgL_newzd2buckszd2_1405); 
FAILURE(BgL_auxz00_7694,BFALSE,BFALSE);} } } } } } } } 
{ 
obj_t BgL_l1871z00_7699;
BgL_l1871z00_7699 = 
CDR(BgL_l1871z00_1412); 
BgL_l1871z00_1412 = BgL_l1871z00_7699; 
goto BgL_zc3anonymousza32261ze3z83_1413;} }  else 
{ /* Llib/hash.scm 617 */
if(
NULLP(BgL_l1871z00_1412))
{ /* Llib/hash.scm 617 */BTRUE; }  else 
{ /* Llib/hash.scm 617 */
BGl_errorz00zz__errorz00(BGl_string3481z00zz__hashz00, BGl_string3482z00zz__hashz00, BgL_l1871z00_1412); } } } } 
{ 
long BgL_iz00_7704;
BgL_iz00_7704 = 
(BgL_iz00_1407+((long)1)); 
BgL_iz00_1407 = BgL_iz00_7704; 
goto BgL_zc3anonymousza32259ze3z83_1408;} }  else 
{ /* Llib/hash.scm 608 */
return ((bool_t)0);} } } } } } } } 
}



/* get-hashnumber */
BGL_EXPORTED_DEF long BGl_getzd2hashnumberzd2zz__hashz00(obj_t BgL_keyz00_101)
{ AN_OBJECT;
{ /* Llib/hash.scm 623 */
if(
STRINGP(BgL_keyz00_101))
{ /* Llib/hash.scm 626 */
long BgL_arg2270z00_1427;
BgL_arg2270z00_1427 = 
bgl_string_hash_number(
BSTRING_TO_STRING(BgL_keyz00_101)); 
if(
(BgL_arg2270z00_1427<((long)0)))
{ /* Llib/hash.scm 626 */
return 
NEG(BgL_arg2270z00_1427);}  else 
{ /* Llib/hash.scm 626 */
return BgL_arg2270z00_1427;} }  else 
{ /* Llib/hash.scm 625 */
if(
SYMBOLP(BgL_keyz00_101))
{ /* Llib/hash.scm 628 */
long BgL_arg2272z00_1429;
BgL_arg2272z00_1429 = 
bgl_symbol_hash_number(BgL_keyz00_101); 
if(
(BgL_arg2272z00_1429<((long)0)))
{ /* Llib/hash.scm 628 */
return 
NEG(BgL_arg2272z00_1429);}  else 
{ /* Llib/hash.scm 628 */
return BgL_arg2272z00_1429;} }  else 
{ /* Llib/hash.scm 627 */
if(
KEYWORDP(BgL_keyz00_101))
{ /* Llib/hash.scm 630 */
long BgL_arg2274z00_1431;
BgL_arg2274z00_1431 = 
bgl_keyword_hash_number(BgL_keyz00_101); 
if(
(BgL_arg2274z00_1431<((long)0)))
{ /* Llib/hash.scm 630 */
return 
NEG(BgL_arg2274z00_1431);}  else 
{ /* Llib/hash.scm 630 */
return BgL_arg2274z00_1431;} }  else 
{ /* Llib/hash.scm 629 */
if(
INTEGERP(BgL_keyz00_101))
{ /* Llib/hash.scm 632 */
long BgL_nz00_3349;
BgL_nz00_3349 = 
(long)CINT(BgL_keyz00_101); 
if(
(BgL_nz00_3349<((long)0)))
{ /* Llib/hash.scm 632 */
return 
NEG(BgL_nz00_3349);}  else 
{ /* Llib/hash.scm 632 */
return BgL_nz00_3349;} }  else 
{ /* Llib/hash.scm 631 */
if(
ELONGP(BgL_keyz00_101))
{ /* Llib/hash.scm 634 */
long BgL_arg2277z00_1434;
{ /* Llib/hash.scm 634 */
long BgL_auxz00_7733;
BgL_auxz00_7733 = 
BELONG_TO_LONG(BgL_keyz00_101); 
BgL_arg2277z00_1434 = 
(long)(BgL_auxz00_7733); } 
if(
(BgL_arg2277z00_1434<((long)0)))
{ /* Llib/hash.scm 634 */
return 
NEG(BgL_arg2277z00_1434);}  else 
{ /* Llib/hash.scm 634 */
return BgL_arg2277z00_1434;} }  else 
{ /* Llib/hash.scm 633 */
if(
LLONGP(BgL_keyz00_101))
{ /* Llib/hash.scm 636 */
long BgL_arg2279z00_1436;
{ /* Llib/hash.scm 636 */
BGL_LONGLONG_T BgL_auxz00_7741;
BgL_auxz00_7741 = 
BLLONG_TO_LLONG(BgL_keyz00_101); 
BgL_arg2279z00_1436 = 
(long)(BgL_auxz00_7741); } 
if(
(BgL_arg2279z00_1436<((long)0)))
{ /* Llib/hash.scm 636 */
return 
NEG(BgL_arg2279z00_1436);}  else 
{ /* Llib/hash.scm 636 */
return BgL_arg2279z00_1436;} }  else 
{ /* Llib/hash.scm 635 */
if(
BGL_OBJECTP(BgL_keyz00_101))
{ /* Llib/hash.scm 638 */
int BgL_arg2281z00_1438;
{ /* Llib/hash.scm 638 */
BgL_objectz00_bglt BgL_auxz00_7749;
if(
BGL_OBJECTP(BgL_keyz00_101))
{ /* Llib/hash.scm 638 */
BgL_auxz00_7749 = 
(BgL_objectz00_bglt)(BgL_keyz00_101)
; }  else 
{ 
obj_t BgL_auxz00_7753;
BgL_auxz00_7753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)25456)), BGl_string3547z00zz__hashz00, BGl_string3548z00zz__hashz00, BgL_keyz00_101); 
FAILURE(BgL_auxz00_7753,BFALSE,BFALSE);} 
BgL_arg2281z00_1438 = 
BGl_objectzd2hashnumberzd2zz__objectz00(BgL_auxz00_7749); } 
{ /* Llib/hash.scm 638 */
long BgL_nz00_3370;
BgL_nz00_3370 = 
(long)(BgL_arg2281z00_1438); 
if(
(BgL_nz00_3370<((long)0)))
{ /* Llib/hash.scm 638 */
return 
NEG(BgL_nz00_3370);}  else 
{ /* Llib/hash.scm 638 */
return BgL_nz00_3370;} } }  else 
{ /* Llib/hash.scm 637 */
if(
FOREIGNP(BgL_keyz00_101))
{ /* Llib/hash.scm 640 */
long BgL_arg2283z00_1440;
BgL_arg2283z00_1440 = 
bgl_foreign_hash_number(BgL_keyz00_101); 
if(
(BgL_arg2283z00_1440<((long)0)))
{ /* Llib/hash.scm 640 */
return 
NEG(BgL_arg2283z00_1440);}  else 
{ /* Llib/hash.scm 640 */
return BgL_arg2283z00_1440;} }  else 
{ /* Llib/hash.scm 642 */
long BgL_arg2284z00_1441;
BgL_arg2284z00_1441 = 
bgl_obj_hash_number(BgL_keyz00_101); 
if(
(BgL_arg2284z00_1441<((long)0)))
{ /* Llib/hash.scm 642 */
return 
NEG(BgL_arg2284z00_1441);}  else 
{ /* Llib/hash.scm 642 */
return BgL_arg2284z00_1441;} } } } } } } } } } 
}



/* _get-hashnumber */
obj_t BGl__getzd2hashnumberzd2zz__hashz00(obj_t BgL_envz00_3664, obj_t BgL_keyz00_3665)
{ AN_OBJECT;
{ /* Llib/hash.scm 623 */
return 
BINT(
BGl_getzd2hashnumberzd2zz__hashz00(BgL_keyz00_3665));} 
}



/* get-pointer-hashnumber */
BGL_EXPORTED_DEF long BGl_getzd2pointerzd2hashnumberz00zz__hashz00(obj_t BgL_ptrz00_102, long BgL_powerz00_103)
{ AN_OBJECT;
{ /* Llib/hash.scm 647 */
return 
bgl_pointer_hashnumber(BgL_ptrz00_102, BgL_powerz00_103);} 
}



/* _get-pointer-hashnumber */
obj_t BGl__getzd2pointerzd2hashnumberz00zz__hashz00(obj_t BgL_envz00_3666, obj_t BgL_ptrz00_3667, obj_t BgL_powerz00_3668)
{ AN_OBJECT;
{ /* Llib/hash.scm 647 */
{ /* Llib/hash.scm 648 */
long BgL_auxz00_7775;
{ /* Llib/hash.scm 648 */
long BgL_powerz00_4406;
{ /* Llib/hash.scm 648 */
obj_t BgL_auxz00_7776;
if(
INTEGERP(BgL_powerz00_3668))
{ /* Llib/hash.scm 648 */
BgL_auxz00_7776 = BgL_powerz00_3668
; }  else 
{ 
obj_t BgL_auxz00_7779;
BgL_auxz00_7779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)25866)), BGl_string3549z00zz__hashz00, BGl_string3401z00zz__hashz00, BgL_powerz00_3668); 
FAILURE(BgL_auxz00_7779,BFALSE,BFALSE);} 
BgL_powerz00_4406 = 
(long)CINT(BgL_auxz00_7776); } 
BgL_auxz00_7775 = 
bgl_pointer_hashnumber(BgL_ptrz00_3667, BgL_powerz00_4406); } 
return 
BINT(BgL_auxz00_7775);} } 
}



/* _string-hash */
obj_t BGl__stringzd2hashzd2zz__hashz00(obj_t BgL_envz00_108, obj_t BgL_optz00_107)
{ AN_OBJECT;
{ /* Llib/hash.scm 653 */
{ /* Llib/hash.scm 653 */
obj_t BgL_g1893z00_1442;
BgL_g1893z00_1442 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)0))); 
{ 

{ /* Llib/hash.scm 653 */
int BgL_aux1895z00_1444;
BgL_aux1895z00_1444 = 
VECTOR_LENGTH(BgL_optz00_107); 
switch( 
(long)(BgL_aux1895z00_1444)) { case ((long)1) : 

{ /* Llib/hash.scm 653 */

{ /* Llib/hash.scm 653 */
obj_t BgL_arg2286z00_1448;
BgL_arg2286z00_1448 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)0))); 
{ /* Llib/hash.scm 653 */
long BgL_res2700z00_3395;
{ /* Llib/hash.scm 653 */
obj_t BgL_stringz00_3389;obj_t BgL_startz00_3390;
if(
STRINGP(BgL_arg2286z00_1448))
{ /* Llib/hash.scm 653 */
BgL_stringz00_3389 = BgL_arg2286z00_1448; }  else 
{ 
obj_t BgL_auxz00_7793;
BgL_auxz00_7793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3554z00zz__hashz00, BgL_arg2286z00_1448); 
FAILURE(BgL_auxz00_7793,BFALSE,BFALSE);} 
BgL_startz00_3390 = 
BINT(((long)0)); 
{ /* Llib/hash.scm 653 */
obj_t BgL_arg2294z00_3392;
if(
CBOOL(BFALSE))
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3392 = BFALSE; }  else 
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3392 = 
BINT(
STRING_LENGTH(BgL_stringz00_3389)); } 
{ /* Llib/hash.scm 653 */
int BgL_auxz00_7812;int BgL_auxz00_7802;
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7813;
if(
INTEGERP(BgL_arg2294z00_3392))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7813 = BgL_arg2294z00_3392
; }  else 
{ 
obj_t BgL_auxz00_7816;
BgL_auxz00_7816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_arg2294z00_3392); 
FAILURE(BgL_auxz00_7816,BFALSE,BFALSE);} 
BgL_auxz00_7812 = 
CINT(BgL_auxz00_7813); } 
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7804;
if(
INTEGERP(BgL_startz00_3390))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7804 = BgL_startz00_3390
; }  else 
{ 
obj_t BgL_auxz00_7807;
BgL_auxz00_7807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_startz00_3390); 
FAILURE(BgL_auxz00_7807,BFALSE,BFALSE);} 
BgL_auxz00_7802 = 
CINT(BgL_auxz00_7804); } 
BgL_res2700z00_3395 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_3389), BgL_auxz00_7802, BgL_auxz00_7812); } } } 
return 
BINT(BgL_res2700z00_3395);} } } break;case ((long)2) : 

{ /* Llib/hash.scm 653 */
obj_t BgL_startz00_1449;
BgL_startz00_1449 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)1))); 
{ /* Llib/hash.scm 653 */

{ /* Llib/hash.scm 653 */
obj_t BgL_arg2289z00_1451;
BgL_arg2289z00_1451 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)0))); 
{ /* Llib/hash.scm 653 */
long BgL_res2701z00_3402;
{ /* Llib/hash.scm 653 */
obj_t BgL_stringz00_3396;
if(
STRINGP(BgL_arg2289z00_1451))
{ /* Llib/hash.scm 653 */
BgL_stringz00_3396 = BgL_arg2289z00_1451; }  else 
{ 
obj_t BgL_auxz00_7829;
BgL_auxz00_7829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3554z00zz__hashz00, BgL_arg2289z00_1451); 
FAILURE(BgL_auxz00_7829,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 653 */
obj_t BgL_arg2294z00_3399;
if(
CBOOL(BFALSE))
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3399 = BFALSE; }  else 
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3399 = 
BINT(
STRING_LENGTH(BgL_stringz00_3396)); } 
{ /* Llib/hash.scm 653 */
int BgL_auxz00_7847;int BgL_auxz00_7837;
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7848;
if(
INTEGERP(BgL_arg2294z00_3399))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7848 = BgL_arg2294z00_3399
; }  else 
{ 
obj_t BgL_auxz00_7851;
BgL_auxz00_7851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_arg2294z00_3399); 
FAILURE(BgL_auxz00_7851,BFALSE,BFALSE);} 
BgL_auxz00_7847 = 
CINT(BgL_auxz00_7848); } 
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7839;
if(
INTEGERP(BgL_startz00_1449))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7839 = BgL_startz00_1449
; }  else 
{ 
obj_t BgL_auxz00_7842;
BgL_auxz00_7842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_startz00_1449); 
FAILURE(BgL_auxz00_7842,BFALSE,BFALSE);} 
BgL_auxz00_7837 = 
CINT(BgL_auxz00_7839); } 
BgL_res2701z00_3402 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_3396), BgL_auxz00_7837, BgL_auxz00_7847); } } } 
return 
BINT(BgL_res2701z00_3402);} } } } break;case ((long)3) : 

{ /* Llib/hash.scm 653 */
obj_t BgL_startz00_1452;
BgL_startz00_1452 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)1))); 
{ /* Llib/hash.scm 653 */
obj_t BgL_lenz00_1453;
BgL_lenz00_1453 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)2))); 
{ /* Llib/hash.scm 653 */

{ /* Llib/hash.scm 653 */
obj_t BgL_arg2290z00_1454;
BgL_arg2290z00_1454 = 
VECTOR_REF(BgL_optz00_107,
(int)(((long)0))); 
{ /* Llib/hash.scm 653 */
long BgL_res2702z00_3409;
{ /* Llib/hash.scm 653 */
obj_t BgL_stringz00_3403;
if(
STRINGP(BgL_arg2290z00_1454))
{ /* Llib/hash.scm 653 */
BgL_stringz00_3403 = BgL_arg2290z00_1454; }  else 
{ 
obj_t BgL_auxz00_7866;
BgL_auxz00_7866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3554z00zz__hashz00, BgL_arg2290z00_1454); 
FAILURE(BgL_auxz00_7866,BFALSE,BFALSE);} 
{ /* Llib/hash.scm 653 */
obj_t BgL_arg2294z00_3406;
if(
CBOOL(BgL_lenz00_1453))
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3406 = BgL_lenz00_1453; }  else 
{ /* Llib/hash.scm 653 */
BgL_arg2294z00_3406 = 
BINT(
STRING_LENGTH(BgL_stringz00_3403)); } 
{ /* Llib/hash.scm 653 */
int BgL_auxz00_7884;int BgL_auxz00_7874;
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7885;
if(
INTEGERP(BgL_arg2294z00_3406))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7885 = BgL_arg2294z00_3406
; }  else 
{ 
obj_t BgL_auxz00_7888;
BgL_auxz00_7888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_arg2294z00_3406); 
FAILURE(BgL_auxz00_7888,BFALSE,BFALSE);} 
BgL_auxz00_7884 = 
CINT(BgL_auxz00_7885); } 
{ /* Llib/hash.scm 653 */
obj_t BgL_auxz00_7876;
if(
INTEGERP(BgL_startz00_1452))
{ /* Llib/hash.scm 653 */
BgL_auxz00_7876 = BgL_startz00_1452
; }  else 
{ 
obj_t BgL_auxz00_7879;
BgL_auxz00_7879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26123)), BGl_string3553z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_startz00_1452); 
FAILURE(BgL_auxz00_7879,BFALSE,BFALSE);} 
BgL_auxz00_7874 = 
CINT(BgL_auxz00_7876); } 
BgL_res2702z00_3409 = 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_3403), BgL_auxz00_7874, BgL_auxz00_7884); } } } 
return 
BINT(BgL_res2702z00_3409);} } } } } break;
default: 
{ /* Llib/hash.scm 653 */
obj_t BgL_arg2291z00_1455;int BgL_arg2293z00_1457;
BgL_arg2291z00_1455 = BGl_symbol3550z00zz__hashz00; 
BgL_arg2293z00_1457 = 
VECTOR_LENGTH(BgL_optz00_107); 
return 
BGl_errorz00zz__errorz00(BgL_arg2291z00_1455, BGl_string3552z00zz__hashz00, 
BINT(BgL_arg2293z00_1457));} } } } } } 
}



/* string-hash */
BGL_EXPORTED_DEF long BGl_stringzd2hashzd2zz__hashz00(obj_t BgL_stringz00_104, obj_t BgL_startz00_105, obj_t BgL_lenz00_106)
{ AN_OBJECT;
{ /* Llib/hash.scm 653 */
{ /* Llib/hash.scm 654 */
obj_t BgL_arg2294z00_3410;
if(
CBOOL(BgL_lenz00_106))
{ /* Llib/hash.scm 654 */
BgL_arg2294z00_3410 = BgL_lenz00_106; }  else 
{ /* Llib/hash.scm 654 */
BgL_arg2294z00_3410 = 
BINT(
STRING_LENGTH(BgL_stringz00_104)); } 
{ /* Llib/hash.scm 654 */
int BgL_auxz00_7914;int BgL_auxz00_7904;
{ /* Llib/hash.scm 654 */
obj_t BgL_auxz00_7915;
if(
INTEGERP(BgL_arg2294z00_3410))
{ /* Llib/hash.scm 654 */
BgL_auxz00_7915 = BgL_arg2294z00_3410
; }  else 
{ 
obj_t BgL_auxz00_7918;
BgL_auxz00_7918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26207)), BGl_string3551z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_arg2294z00_3410); 
FAILURE(BgL_auxz00_7918,BFALSE,BFALSE);} 
BgL_auxz00_7914 = 
CINT(BgL_auxz00_7915); } 
{ /* Llib/hash.scm 654 */
obj_t BgL_auxz00_7906;
if(
INTEGERP(BgL_startz00_105))
{ /* Llib/hash.scm 654 */
BgL_auxz00_7906 = BgL_startz00_105
; }  else 
{ 
obj_t BgL_auxz00_7909;
BgL_auxz00_7909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3399z00zz__hashz00, 
BINT(((long)26207)), BGl_string3551z00zz__hashz00, BGl_string3408z00zz__hashz00, BgL_startz00_105); 
FAILURE(BgL_auxz00_7909,BFALSE,BFALSE);} 
BgL_auxz00_7904 = 
CINT(BgL_auxz00_7906); } 
return 
bgl_string_hash(
BSTRING_TO_STRING(BgL_stringz00_104), BgL_auxz00_7904, BgL_auxz00_7914);} } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__hashz00()
{ AN_OBJECT;
{ /* Llib/hash.scm 18 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__hashz00()
{ AN_OBJECT;
{ /* Llib/hash.scm 18 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__hashz00()
{ AN_OBJECT;
{ /* Llib/hash.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3555z00zz__hashz00)); 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)504082187), 
BSTRING_TO_STRING(BGl_string3555z00zz__hashz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3555z00zz__hashz00)); 
return 
BGl_modulezd2initializa7ationz75zz__weakhashz00(((long)416719151), 
BSTRING_TO_STRING(BGl_string3555z00zz__hashz00));} 
}

#ifdef __cplusplus
}
#endif
