/*===========================================================================*/
/*   (Llib/thread.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/thread.scm -indent -o objs/obj_s/Llib/thread.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */
typedef struct BgL_nothreadzd2backendzd2_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_nothreadzd2backendzd2_bglt;

typedef struct BgL_threadzd2backendzd2_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_threadzd2backendzd2_bglt;

typedef struct BgL_threadz00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
} *BgL_threadz00_bglt;

typedef struct BgL_nothreadz00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_namez00;
   obj_t BgL_bodyz00;
   obj_t BgL_z52specificz52;
   obj_t BgL_z52cleanupz52;
   obj_t BgL_endzd2resultzd2;
   obj_t BgL_endzd2exceptionzd2;
} *BgL_nothreadz00_bglt;


static obj_t BGl__z52userzd2currentzd2threadz52zz__threadz00(obj_t, obj_t);
static obj_t BGl_z52currentzd2threadz80zz__threadz00();
static obj_t BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL BgL_nothreadz00_bglt BGl_nothreadzd2nilzd2zz__threadz00();
BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt BGl_fillzd2threadzd2backendz12z12zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t);
static obj_t BGl_symbol3084z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3087z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__threadzd2namezd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3104z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3095z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3106z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_symbol3097z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3099z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t, obj_t);
static obj_t BGl_symbol3115z00zz__threadz00 = BUNSPEC;
static BgL_nothreadzd2backendzd2_bglt BGl_nothreadzd2backendzd2nilz00zz__threadz00();
static obj_t BGl_symbol3118z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3121z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_symbol3130z00zz__threadz00 = BUNSPEC;
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl_symbol3133z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3135z00zz__threadz00 = BUNSPEC;
extern long BGl_classzd2numzd2zz__objectz00(obj_t);
static obj_t BGl_symbol3139z00zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2nilzd2zz__threadz00(obj_t);
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3145z00zz__threadz00 = BUNSPEC;
static obj_t BGl_zc3exitza32083ze3z83zz__threadz00(obj_t);
static obj_t BGl_symbol3146z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3150z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3153z00zz__threadz00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_symbol3155z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3157z00zz__threadz00 = BUNSPEC;
static BgL_nothreadzd2backendzd2_bglt BGl_za2nothreadzd2backendza2zd2zz__threadz00;
static obj_t BGl_symbol3161z00zz__threadz00 = BUNSPEC;
static obj_t BGl__fillzd2threadzd2backendz12z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3162z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3164z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3166z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3168z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3170z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3172z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3174z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3184z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3186z00zz__threadz00 = BUNSPEC;
static obj_t BGl__nothreadzd2backendzd2nilz00zz__threadz00(obj_t);
extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_fillzd2threadz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__makezd2nothreadzd2zz__threadz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 = BUNSPEC;
static obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3228z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t);
static obj_t BGl_symbol3231z00zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3237z00zz__threadz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32251ze3z83zz__threadz00(obj_t);
static obj_t BGl_symbol3243z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3246z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3248z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3251z00zz__threadz00 = BUNSPEC;
static obj_t BGl__currentzd2threadzd2backendz00zz__threadz00(obj_t);
static obj_t BGl_symbol3255z00zz__threadz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__threadz00();
BGL_EXPORTED_DECL obj_t BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_symbol3258z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3260z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3264z00zz__threadz00 = BUNSPEC;
static obj_t BGl__z52userzd2threadzd2yieldz12z40zz__threadz00(obj_t, obj_t);
extern obj_t BGl_objectz00zz__objectz00;
static obj_t BGl_symbol3267z00zz__threadz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32117ze3z83zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3272z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendz00zz__threadz00();
static obj_t BGl_symbol3275z00zz__threadz00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32118ze3z83zz__threadz00(obj_t, obj_t);
extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3278z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3280z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t);
static obj_t BGl_symbol3285z00zz__threadz00 = BUNSPEC;
extern void bgl_sleep(long);
static obj_t BGl_symbol3288z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3300z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3292z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3305z00zz__threadz00 = BUNSPEC;
static obj_t BGl__fillzd2nothreadz12zc0zz__threadz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3297z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3308z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t);
static obj_t BGl_symbol3313z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2getzd2specificz00zz__threadz00(BgL_threadz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t);
static obj_t BGl_symbol3315z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3318z00zz__threadz00 = BUNSPEC;
static obj_t BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl__threadzd2getzd2specificz00zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3323z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt);
extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
static obj_t BGl_symbol3326z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3331z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3334z00zz__threadz00 = BUNSPEC;
static obj_t BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3342z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3344z00zz__threadz00 = BUNSPEC;
static obj_t BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3349z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3354z00zz__threadz00 = BUNSPEC;
static obj_t BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL BgL_nothreadz00_bglt BGl_makezd2nothreadzd2zz__threadz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t);
static obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00(obj_t, obj_t, obj_t);
extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_nothreadzf3zf3zz__threadz00(obj_t);
static obj_t BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl__nothreadzd2z52specificz80zz__threadz00(obj_t, obj_t);
static obj_t BGl_symbol3400z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3404z00zz__threadz00 = BUNSPEC;
static obj_t BGl_symbol3396z00zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__conditionzd2variablezd2signalz12z12zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_threadzd2backendzd2zz__threadz00 = BUNSPEC;
static obj_t BGl_threadzd2getzd2specificzd21997zd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__currentzd2threadzd2zz__threadz00(obj_t);
static obj_t BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt);
static obj_t BGl__mutexzd2namezd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__conditionzd2variablezd2namez00zz__threadz00(obj_t, obj_t);
static obj_t BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__threadz00();
static obj_t BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00(obj_t, obj_t);
static obj_t BGl__z52allocatezd2nothreadz80zz__threadz00(obj_t);
static obj_t BGl__makezd2threadzd2zz__threadz00(obj_t, obj_t);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mutexzd2nilzd2zz__threadz00();
static obj_t BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_threadzd2nilzd2zz__threadz00();
static obj_t BGl__threadzd2startzd2joinabl1964z00zz__threadz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__threadz00();
extern obj_t make_struct(obj_t, int, obj_t);
static obj_t BGl__threadzd2joinz12zc0zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BgL_nothreadz00_bglt BGl_fillzd2nothreadz12zc0zz__threadz00(BgL_nothreadz00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2joinz12zd2default1967z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_threadzf3zf3zz__threadz00(obj_t);
extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__dynamiczd2envzf3z21zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2sleepz12zc0zz__threadz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32286ze3z83zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL BgL_nothreadz00_bglt BGl_z52allocatezd2nothreadz80zz__threadz00();
static BgL_nothreadzd2backendzd2_bglt BGl_makezd2nothreadzd2backendz00zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__mutexzf3zf3zz__threadz00(obj_t, obj_t);
extern obj_t BGl_exitz00zz__errorz00(obj_t);
static obj_t BGl_zc3exitza32276ze3z83zz__threadz00(BgL_nothreadz00_bglt);
static obj_t BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00(obj_t);
static obj_t BGl_zc3exitza32277ze3z83zz__threadz00(BgL_nothreadz00_bglt, BgL_nothreadz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_nothreadz00zz__threadz00 = BUNSPEC;
static obj_t BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_objectzd2printzd2thread1959z00zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl__mutexzd2unlockz12zc0zz__threadz00(obj_t, obj_t);
static obj_t BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2threadzd2zz__threadz00();
static obj_t BGl__threadzd2setzd2specificz12z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3exitza32283ze3z83zz__threadz00(BgL_nothreadz00_bglt, BgL_nothreadz00_bglt, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL BgL_threadz00_bglt BGl_z52allocatezd2threadz80zz__threadz00();
static obj_t BGl_threadzd2startz12zd2nothre1989z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__threadzd2specificzd2setz12z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00(obj_t, obj_t);
static obj_t BGl__mutexzd2statezd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__threadz00();
static obj_t BGl__threadzd2namezd2setz12z12zz__threadz00(obj_t, obj_t, obj_t);
extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl__getzd2threadzd2backendz00zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl__z52allocatezd2threadzd2backendz52zz__threadz00(obj_t);
static obj_t BGl__threadzd2setzd2specificz121973z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t);
extern obj_t bgl_make_nil_mutex();
extern long bgl_current_seconds();
static obj_t BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00(BgL_threadzd2backendzd2_bglt);
extern obj_t bgl_seconds_to_date(long);
BGL_EXPORTED_DECL bool_t BGl_threadzd2backendzf3z21zz__threadz00(obj_t);
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
static obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_threadz00_bglt, obj_t);
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t);
static obj_t BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__threadzd2startz12zd2defaul1962z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t, obj_t, long);
static obj_t BGl__nothreadzd2z52cleanupz80zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2setzd2cleanupz12z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__conditionzd2variablezf3z21zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_threadz00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t);
static obj_t BGl_list3103z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3094z00zz__threadz00 = BUNSPEC;
static obj_t BGl_za2mutexzd2nilza2zd2zz__threadz00 = BUNSPEC;
static obj_t BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_threadz00_bglt, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t);
static obj_t BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BUNSPEC;
static obj_t BGl_list3129z00zz__threadz00 = BUNSPEC;
static obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt BGl_makezd2threadzd2backendz00zz__threadz00(obj_t);
static obj_t BGl__threadzd2specificzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2yieldz12zc0zz__threadz00(obj_t);
static obj_t BGl_list3149z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3152z00zz__threadz00 = BUNSPEC;
static obj_t BGl__makezd2threadzd2backendz00zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t);
extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__threadzd2parameterzd2zz__threadz00(obj_t, obj_t);
extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3183z00zz__threadz00 = BUNSPEC;
static obj_t BGl__nothreadzd2endzd2exceptionz00zz__threadz00(obj_t, obj_t);
static obj_t BGl__nothreadzd2backendzf3z21zz__threadz00(obj_t, obj_t);
static obj_t BGl_objectzd2writezd2thread1957z00zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2getzd2cleanupz00zz__threadz00(obj_t, obj_t);
static obj_t BGl_list3227z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(BgL_threadz00_bglt, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt);
static obj_t BGl_list3245z00zz__threadz00 = BUNSPEC;
static obj_t BGl_nothreadzd2backendzd2zz__threadz00 = BUNSPEC;
static obj_t BGl_z52thezd2threadzd2nilz52zz__threadz00 = BUNSPEC;
static obj_t BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl__threadzd2backendzd2nilz00zz__threadz00(obj_t);
static obj_t BGl_list3250z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3253z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3254z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3257z00zz__threadz00 = BUNSPEC;
static obj_t BGl_z52thezd2nothreadzd2nilz52zz__threadz00 = BUNSPEC;
static obj_t BGl_list3262z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3263z00zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2backendzf3z21zz__threadz00(obj_t, obj_t);
static obj_t BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3271z00zz__threadz00 = BUNSPEC;
static obj_t BGl_threadzd2startzd2joinabl1991z00zz__threadz00(obj_t, obj_t);
static obj_t BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl_list3279z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3282z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3283z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3284z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3287z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3290z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3304z00zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2terminatez12zc0zz__threadz00(obj_t, obj_t);
static obj_t BGl_list3296z00zz__threadz00 = BUNSPEC;
static obj_t BGl__conditionzd2variablezd2nilz00zz__threadz00(obj_t);
static obj_t BGl_list3312z00zz__threadz00 = BUNSPEC;
static obj_t BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2yieldz12zc0zz__threadz00();
BGL_EXPORTED_DECL obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t);
static obj_t BGl_list3322z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00();
static obj_t BGl__nothreadzf3zf3zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2startzd2joinablez12z12zz__threadz00(obj_t, obj_t);
static obj_t BGl_list3330z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_za2classesza2z00zz__objectz00;
static obj_t BGl_list3341z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_list3353z00zz__threadz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t, long);
extern obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
static obj_t BGl__defaultzd2threadzd2backendz00zz__threadz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl__threadzd2cleanupzd2setz12z12zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00();
extern obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
BGL_EXPORTED_DECL bool_t BGl_mutexzf3zf3zz__threadz00(obj_t);
BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt BGl_threadzd2backendzd2nilz00zz__threadz00();
static obj_t BGl__threadzd2parameterzd2setz12z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__tbzd2makezd2threadz00zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_list3403z00zz__threadz00 = BUNSPEC;
static obj_t BGl_list3395z00zz__threadz00 = BUNSPEC;
extern obj_t BGl_z62exceptionz62zz__objectz00;
static obj_t BGl__threadzd2cleanupzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__threadzd2terminatez12zd2de1969z12zz__threadz00(obj_t, obj_t);
static obj_t BGl__mutexzd2nilzd2zz__threadz00(obj_t);
static obj_t BGl_objectzd2initzd2zz__threadz00();
BGL_EXPORTED_DECL BgL_threadzd2backendzd2_bglt BGl_z52allocatezd2threadzd2backendz52zz__threadz00();
static obj_t BGl__threadzf3zf3zz__threadz00(obj_t, obj_t);
static obj_t BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__nothreadzd2nilzd2zz__threadz00(obj_t);
static obj_t BGl_za2threadzd2backendsza2zd2zz__threadz00 = BUNSPEC;
static obj_t BGl__threadzd2startz12zc0zz__threadz00(obj_t, obj_t, obj_t);
extern obj_t BGl_raisez00zz__errorz00(obj_t);
extern obj_t bgl_make_nil_condvar();
static obj_t BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00();
static obj_t BGl_threadzd2setzd2specificz121999z12zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__threadzd2backendzd2namez00zz__threadz00(obj_t, obj_t);
static obj_t BGl__currentzd2dynamiczd2envz00zz__threadz00(obj_t);
static obj_t BGl__threadzd2getzd2specificzd21971zd2zz__threadz00(obj_t, obj_t);
static obj_t BGl_objectzd2displayzd2threa1955z00zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__withzd2lockzd2zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__tbzd2currentzd2threadz00zz__threadz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32224ze3z83zz__threadz00(obj_t);
extern long bgl_date_to_seconds(obj_t);
static obj_t BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00(BgL_threadzd2backendzd2_bglt, obj_t, obj_t);
static obj_t BGl__z52userzd2currentzd2thread1982z52zz__threadz00(obj_t, obj_t);
static obj_t BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_threadz00_bglt, obj_t);
static obj_t BGl__threadzd2initializa7ez12z67zz__threadz00(obj_t, obj_t);
static obj_t BGl_structzb2objectzd2ze3objec2018z83zz__threadz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt);
static obj_t BGl_structzb2objectzd2ze3objec2022z83zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_structzb2objectzd2ze3objec2026z83zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__z52userzd2threadzd2sleepz12z40zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl_threadzd2terminatez12zd2no1995z12zz__threadz00(obj_t, obj_t);
static obj_t BGl__nothreadzd2bodyzd2zz__threadz00(obj_t, obj_t);
static obj_t BGl__z52allocatezd2threadz80zz__threadz00(obj_t);
extern obj_t bgl_remq_bang(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__threadz00();
static obj_t BGl__fillzd2threadz12zc0zz__threadz00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2nothreadzd2backendz00zz__threadz00(obj_t, obj_t);
extern obj_t BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00();
static obj_t BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t, obj_t);
static obj_t BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t);
static obj_t BGl__nothreadzd2endzd2resultz00zz__threadz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2sleepz12zd2envz12zz__threadz00, BgL_bgl__threadza7d2sleepza73431z00, BGl__threadzd2sleepz12zc0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_tbzd2makezd2threadzd2defau1945zd2envz00zz__threadz00, BgL_bgl__tbza7d2makeza7d2thr3432z00, BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zz__threadz00, BgL_bgl__nothreadza7d2endza73433z00, BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2setza7d23434z00, BGl__threadzd2setzd2cleanupz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, BgL_bgl__za752userza7d2threa3435z00, BGl__z52userzd2threadzd2sleepz12z40zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2namezd2envzd2zz__threadz00, BgL_bgl__conditionza7d2var3436za7, BGl__conditionzd2variablezd2namez00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl__getza7d2threadza7d23437z00, BGl__getzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_makezd2nothreadzd2backendzd2envzd2zz__threadz00, BgL_bgl__makeza7d2nothread3438za7, BGl__makezd2nothreadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2setza7d23439z00, BGl__threadzd2setzd2specificz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2z52specificzd2setz12zd2envz92zz__threadz00, BgL_bgl__nothreadza7d2za752s3440z00, BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2broadcastz12zd2envzc0zz__threadz00, BgL_bgl__conditionza7d2var3441za7, BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2endzd2exceptionzd2envzd2zz__threadz00, BgL_bgl__nothreadza7d2endza73442z00, BGl__nothreadzd2endzd2exceptionz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2envz00zz__threadz00, BgL_bgl__currentza7d2threa3443za7, BGl__currentzd2threadzd2zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2nothreadzd2envz00zz__threadz00, BgL_bgl__makeza7d2nothread3444za7, BGl__makezd2nothreadzd2zz__threadz00, 0L, BUNSPEC, 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzf3zd2envz21zz__threadz00, BgL_bgl__threadza7f3za7f3za7za7_3445z00, BGl__threadzf3zf3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2namezd2envz00zz__threadz00, BgL_bgl__mutexza7d2nameza7d23446z00, BGl__mutexzd2namezd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zz__threadz00, BgL_bgl__nothreadza7d2endza73447z00, BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2parameterzd2setz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2parame3448za7, BGl__threadzd2parameterzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52userzd2currentzd2thread1982zd2envz80zz__threadz00, BgL_bgl__za752userza7d2curre3449z00, BGl__z52userzd2currentzd2thread1982z52zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2startza73450z00, BGl__threadzd2startzd2joinablez12z12zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2joinz12zd2default1967zd2envzc0zz__threadz00, BgL_bgl__threadza7d2joinza713451z00, va_generic_entry, BGl__threadzd2joinz12zd2default1967z12zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2bodyzd2envz00zz__threadz00, BgL_bgl__nothreadza7d2body3452za7, BGl__nothreadzd2bodyzd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2getzd2specificzd21971zd2envz00zz__threadz00, BgL_bgl__threadza7d2getza7d23453z00, BGl__threadzd2getzd2specificzd21971zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2backendzd2nilzd2envzd2zz__threadz00, BgL_bgl__nothreadza7d2back3454za7, BGl__nothreadzd2backendzd2nilz00zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2backendzd2nilzd2envzd2zz__threadz00, BgL_bgl__threadza7d2backen3455za7, BGl__threadzd2backendzd2nilz00zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2threadzd2backendzd2setz12zd2envz12zz__threadz00, BgL_bgl__defaultza7d2threa3456za7, BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2lockz12zd2envz12zz__threadz00, BgL_bgl__mutexza7d2lockza7123457z00, opt_generic_entry, BGl__mutexzd2lockz12zc0zz__threadz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2parameterzd2envz00zz__threadz00, BgL_bgl__threadza7d2parame3458za7, BGl__threadzd2parameterzd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2backendzd2setz12zd2envz12zz__threadz00, BgL_bgl__currentza7d2threa3459za7, BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2getzd2cleanupzd2d1975zd2envz00zz__threadz00, BgL_bgl__threadza7d2getza7d23460z00, BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2backendzf3zd2envzf3zz__threadz00, BgL_bgl__nothreadza7d2back3461za7, BGl__nothreadzd2backendzf3z21zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2unlockz12zd2envz12zz__threadz00, BgL_bgl__mutexza7d2unlockza73462z00, BGl__mutexzd2unlockz12zc0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2cleanu3463za7, BGl__threadzd2cleanupzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2z52specificzd2envz52zz__threadz00, BgL_bgl__nothreadza7d2za752s3464z00, BGl__nothreadzd2z52specificz80zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52userzd2threadzd2sleepz12zd21984zd2envz40zz__threadz00, BgL_bgl__za752userza7d2threa3465z00, BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zz__threadz00, BgL_bgl__nothreadza7d2za752c3466z00, BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2backendzf3zd2envzf3zz__threadz00, BgL_bgl__threadza7d2backen3467za7, BGl__threadzd2backendzf3z21zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2joinz12zd2envz12zz__threadz00, BgL_bgl__threadza7d2joinza713468z00, va_generic_entry, BGl__threadzd2joinz12zc0zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2z52cleanupzd2envz52zz__threadz00, BgL_bgl__nothreadza7d2za752c3469z00, BGl__nothreadzd2z52cleanupz80zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52allocatezd2nothreadzd2backendzd2envz80zz__threadz00, BgL_bgl__za752allocateza7d2n3470z00, BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00, 0L, BUNSPEC, 0 );
extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nothreadzd2nilzd2envz00zz__threadz00, BgL_bgl__nothreadza7d2nilza73471z00, BGl__nothreadzd2nilzd2zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3160z00zz__threadz00, BgL_bgl_za7c3anonymousza7a323472z00, BGl_zc3anonymousza32118ze3z83zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3159z00zz__threadz00, BgL_bgl_za7c3anonymousza7a323473z00, BGl_zc3anonymousza32117ze3z83zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2conditionzd2variablezd2envzd2zz__threadz00, BgL_bgl__makeza7d2conditio3474za7, opt_generic_entry, BGl__makezd2conditionzd2variablez00zz__threadz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2yieldz12zd2envz12zz__threadz00, BgL_bgl__threadza7d2yieldza73475z00, BGl__threadzd2yieldz12zc0zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52userzd2threadzd2yieldz12zd21986zd2envz40zz__threadz00, BgL_bgl__za752userza7d2threa3476z00, BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00, 0L, BUNSPEC, 1 );
extern obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2startz12zd2defaul1962zd2envzc0zz__threadz00, BgL_bgl__threadza7d2startza73477z00, va_generic_entry, BGl__threadzd2startz12zd2defaul1962z12zz__threadz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fillzd2threadzd2backendz12zd2envzc0zz__threadz00, BgL_bgl__fillza7d2threadza7d3478z00, BGl__fillzd2threadzd2backendz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2nilzd2envzd2zz__threadz00, BgL_bgl__conditionza7d2var3479za7, BGl__conditionzd2variablezd2nilz00zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, BgL_bgl__za752userza7d2threa3480z00, BGl__z52userzd2threadzd2yieldz12z40zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, BgL_bgl__za752userza7d2curre3481z00, BGl__z52userzd2currentzd2threadz52zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2envzf3zd2envzf3zz__threadz00, BgL_bgl__dynamicza7d2envza7f3482z00, BGl__dynamiczd2envzf3z21zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52allocatezd2threadzd2envz52zz__threadz00, BgL_bgl__za752allocateza7d2t3483z00, BGl__z52allocatezd2threadz80zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00, BgL_bgl__threadza7d2getza7d23484z00, BGl__threadzd2getzd2cleanupz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3072z00zz__threadz00, BgL_bgl_string3072za700za7za7_3485za7, "nothread", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2waitz12zd2envzc0zz__threadz00, BgL_bgl__conditionza7d2var3486za7, opt_generic_entry, BGl__conditionzd2variablezd2waitz12z12zz__threadz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3073z00zz__threadz00, BgL_bgl_string3073za700za7za7_3487za7, "/tmp/bigloo/runtime/Llib/thread.scm", 35 );
DEFINE_STRING( BGl_string3074z00zz__threadz00, BgL_bgl_string3074za700za7za7_3488za7, "_current-thread-backend-set!", 28 );
DEFINE_STRING( BGl_string3075z00zz__threadz00, BgL_bgl_string3075za700za7za7_3489za7, "thread-backend", 14 );
DEFINE_STRING( BGl_string3076z00zz__threadz00, BgL_bgl_string3076za700za7za7_3490za7, "default-thread-backend", 22 );
DEFINE_STRING( BGl_string3077z00zz__threadz00, BgL_bgl_string3077za700za7za7_3491za7, "pair", 4 );
DEFINE_STRING( BGl_string3078z00zz__threadz00, BgL_bgl_string3078za700za7za7_3492za7, "default-thread-backend-set!", 27 );
DEFINE_STRING( BGl_string3080z00zz__threadz00, BgL_bgl_string3080za700za7za7_3493za7, "_default-thread-backend-set!", 28 );
DEFINE_STRING( BGl_string3079z00zz__threadz00, BgL_bgl_string3079za700za7za7_3494za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3081z00zz__threadz00, BgL_bgl_string3081za700za7za7_3495za7, "loop", 4 );
DEFINE_STRING( BGl_string3082z00zz__threadz00, BgL_bgl_string3082za700za7za7_3496za7, "_get-thread-backend", 19 );
DEFINE_STRING( BGl_string3083z00zz__threadz00, BgL_bgl_string3083za700za7za7_3497za7, "bstring", 7 );
DEFINE_STRING( BGl_string3085z00zz__threadz00, BgL_bgl_string3085za700za7za7_3498za7, "make-thread", 11 );
DEFINE_STRING( BGl_string3086z00zz__threadz00, BgL_bgl_string3086za700za7za7_3499za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3088z00zz__threadz00, BgL_bgl_string3088za700za7za7_3500za7, "thread", 6 );
DEFINE_STRING( BGl_string3100z00zz__threadz00, BgL_bgl_string3100za700za7za7_3501za7, "tb", 2 );
DEFINE_STRING( BGl_string3090z00zz__threadz00, BgL_bgl_string3090za700za7za7_3502za7, "procedure", 9 );
DEFINE_STRING( BGl_string3089z00zz__threadz00, BgL_bgl_string3089za700za7za7_3503za7, "_make-thread", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fillzd2threadz12zd2envz12zz__threadz00, BgL_bgl__fillza7d2threadza713504z00, BGl__fillzd2threadz12zc0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3101z00zz__threadz00, BgL_bgl_string3101za700za7za7_3505za7, "current-thread", 14 );
DEFINE_STRING( BGl_string3091z00zz__threadz00, BgL_bgl_string3091za700za7za7_3506za7, "%current-thread", 15 );
DEFINE_STRING( BGl_string3102z00zz__threadz00, BgL_bgl_string3102za700za7za7_3507za7, "current-thread:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string3092z00zz__threadz00, BgL_bgl_string3092za700za7za7_3508za7, "vector", 6 );
DEFINE_STRING( BGl_string3093z00zz__threadz00, BgL_bgl_string3093za700za7za7_3509za7, "%current-thread:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string3105z00zz__threadz00, BgL_bgl_string3105za700za7za7_3510za7, "method1983", 10 );
DEFINE_STRING( BGl_string3096z00zz__threadz00, BgL_bgl_string3096za700za7za7_3511za7, "funcall", 7 );
DEFINE_STRING( BGl_string3107z00zz__threadz00, BgL_bgl_string3107za700za7za7_3512za7, "o", 1 );
DEFINE_STRING( BGl_string3108z00zz__threadz00, BgL_bgl_string3108za700za7za7_3513za7, "thread-sleep!", 13 );
DEFINE_STRING( BGl_string3098z00zz__threadz00, BgL_bgl_string3098za700za7za7_3514za7, "method1949", 10 );
DEFINE_STRING( BGl_string3110z00zz__threadz00, BgL_bgl_string3110za700za7za7_3515za7, "thread-parameter", 16 );
DEFINE_STRING( BGl_string3109z00zz__threadz00, BgL_bgl_string3109za700za7za7_3516za7, "thread-yield!", 13 );
DEFINE_STRING( BGl_string3111z00zz__threadz00, BgL_bgl_string3111za700za7za7_3517za7, "_thread-parameter", 17 );
DEFINE_STRING( BGl_string3112z00zz__threadz00, BgL_bgl_string3112za700za7za7_3518za7, "symbol", 6 );
DEFINE_STRING( BGl_string3113z00zz__threadz00, BgL_bgl_string3113za700za7za7_3519za7, "thread-parameter-set!", 21 );
DEFINE_STRING( BGl_string3114z00zz__threadz00, BgL_bgl_string3114za700za7za7_3520za7, "_thread-parameter-set!", 22 );
DEFINE_STRING( BGl_string3116z00zz__threadz00, BgL_bgl_string3116za700za7za7_3521za7, "make-mutex", 10 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2startz12zd2envz12zz__threadz00, BgL_bgl__threadza7d2startza73522z00, va_generic_entry, BGl__threadzd2startz12zc0zz__threadz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3117z00zz__threadz00, BgL_bgl_string3117za700za7za7_3523za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string3120z00zz__threadz00, BgL_bgl_string3120za700za7za7_3524za7, "_mutex-name", 11 );
DEFINE_STRING( BGl_string3119z00zz__threadz00, BgL_bgl_string3119za700za7za7_3525za7, "mutex", 5 );
DEFINE_STRING( BGl_string3122z00zz__threadz00, BgL_bgl_string3122za700za7za7_3526za7, "mutex-lock!", 11 );
DEFINE_STRING( BGl_string3123z00zz__threadz00, BgL_bgl_string3123za700za7za7_3527za7, "_mutex-lock!", 12 );
DEFINE_STRING( BGl_string3124z00zz__threadz00, BgL_bgl_string3124za700za7za7_3528za7, "long", 4 );
DEFINE_STRING( BGl_string3125z00zz__threadz00, BgL_bgl_string3125za700za7za7_3529za7, "_mutex-unlock!", 14 );
DEFINE_STRING( BGl_string3126z00zz__threadz00, BgL_bgl_string3126za700za7za7_3530za7, "_mutex-state", 12 );
DEFINE_STRING( BGl_string3127z00zz__threadz00, BgL_bgl_string3127za700za7za7_3531za7, "with-lock", 9 );
DEFINE_STRING( BGl_string3128z00zz__threadz00, BgL_bgl_string3128za700za7za7_3532za7, "<exit:2083>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3131z00zz__threadz00, BgL_bgl_string3131za700za7za7_3533za7, "thunk", 5 );
DEFINE_STRING( BGl_string3132z00zz__threadz00, BgL_bgl_string3132za700za7za7_3534za7, "_with-lock", 10 );
DEFINE_STRING( BGl_string3134z00zz__threadz00, BgL_bgl_string3134za700za7za7_3535za7, "make-condition-variable", 23 );
DEFINE_STRING( BGl_string3136z00zz__threadz00, BgL_bgl_string3136za700za7za7_3536za7, "condition-variable", 18 );
DEFINE_STRING( BGl_string3137z00zz__threadz00, BgL_bgl_string3137za700za7za7_3537za7, "_condition-variable-name", 24 );
DEFINE_STRING( BGl_string3138z00zz__threadz00, BgL_bgl_string3138za700za7za7_3538za7, "condvar", 7 );
DEFINE_STRING( BGl_string3140z00zz__threadz00, BgL_bgl_string3140za700za7za7_3539za7, "condition-variable-wait!", 24 );
DEFINE_STRING( BGl_string3141z00zz__threadz00, BgL_bgl_string3141za700za7za7_3540za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3142z00zz__threadz00, BgL_bgl_string3142za700za7za7_3541za7, "_condition-variable-wait!", 25 );
DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BgL_bgl__tbza7d2currentza7d23542z00, BGl__tbzd2currentzd2threadz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3143z00zz__threadz00, BgL_bgl_string3143za700za7za7_3543za7, "_condition-variable-signal!", 27 );
DEFINE_STRING( BGl_string3144z00zz__threadz00, BgL_bgl_string3144za700za7za7_3544za7, "_condition-variable-broadcast!", 30 );
DEFINE_STRING( BGl_string3147z00zz__threadz00, BgL_bgl_string3147za700za7za7_3545za7, "name", 4 );
DEFINE_STRING( BGl_string3151z00zz__threadz00, BgL_bgl_string3151za700za7za7_3546za7, "gensym", 6 );
DEFINE_STRING( BGl_string3154z00zz__threadz00, BgL_bgl_string3154za700za7za7_3547za7, "quote", 5 );
DEFINE_STRING( BGl_string3156z00zz__threadz00, BgL_bgl_string3156za700za7za7_3548za7, "specific", 8 );
DEFINE_STRING( BGl_string3158z00zz__threadz00, BgL_bgl_string3158za700za7za7_3549za7, "cleanup", 7 );
DEFINE_STRING( BGl_string3163z00zz__threadz00, BgL_bgl_string3163za700za7za7_3550za7, "body", 4 );
DEFINE_STRING( BGl_string3165z00zz__threadz00, BgL_bgl_string3165za700za7za7_3551za7, "%specific", 9 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2getzd2specificzd2envzd2zz__threadz00, BgL_bgl__threadza7d2getza7d23552z00, BGl__threadzd2getzd2specificz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3167z00zz__threadz00, BgL_bgl_string3167za700za7za7_3553za7, "%cleanup", 8 );
DEFINE_STRING( BGl_string3169z00zz__threadz00, BgL_bgl_string3169za700za7za7_3554za7, "end-result", 10 );
DEFINE_STRING( BGl_string3171z00zz__threadz00, BgL_bgl_string3171za700za7za7_3555za7, "end-exception", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl__currentza7d2threa3556za7, BGl__currentzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3173z00zz__threadz00, BgL_bgl_string3173za700za7za7_3557za7, "nothread-backend", 16 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3358z00zz__threadz00, BgL_bgl_tbza7d2makeza7d2thre3558z00, BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3175z00zz__threadz00, BgL_bgl_string3175za700za7za7_3559za7, "%allocate-thread", 16 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3360z00zz__threadz00, BgL_bgl_objectza7d2display3560za7, va_generic_entry, BGl_objectzd2displayzd2threa1955z00zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3359z00zz__threadz00, BgL_bgl_tbza7d2currentza7d2t3561z00, BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3176z00zz__threadz00, BgL_bgl_string3176za700za7za7_3562za7, "Can't allocate instance of abstract classes", 43 );
DEFINE_STRING( BGl_string3177z00zz__threadz00, BgL_bgl_string3177za700za7za7_3563za7, "Can't make instance of abstract classes", 39 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3362z00zz__threadz00, BgL_bgl_objectza7d2writeza7d3564z00, va_generic_entry, BGl_objectzd2writezd2thread1957z00zz__threadz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3178z00zz__threadz00, BgL_bgl_string3178za700za7za7_3565za7, "_make-nothread-backend", 22 );
DEFINE_STRING( BGl_string3180z00zz__threadz00, BgL_bgl_string3180za700za7za7_3566za7, "", 0 );
DEFINE_STRING( BGl_string3179z00zz__threadz00, BgL_bgl_string3179za700za7za7_3567za7, "nothread-backend-nil", 20 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3364z00zz__threadz00, BgL_bgl_objectza7d2printza7d3568z00, BGl_objectzd2printzd2thread1959z00zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3181z00zz__threadz00, BgL_bgl_string3181za700za7za7_3569za7, "make-nothread", 13 );
DEFINE_STRING( BGl_string3182z00zz__threadz00, BgL_bgl_string3182za700za7za7_3570za7, "make-nothread:Wrong number of arguments", 39 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3366z00zz__threadz00, BgL_bgl_threadza7d2startza713571z00, va_generic_entry, BGl_threadzd2startz12zd2nothre1989z12zz__threadz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3367z00zz__threadz00, BgL_bgl_threadza7d2startza7d3572z00, BGl_threadzd2startzd2joinabl1991z00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3368z00zz__threadz00, BgL_bgl_threadza7d2joinza7123573z00, va_generic_entry, BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3185z00zz__threadz00, BgL_bgl_string3185za700za7za7_3574za7, "method1961", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3370z00zz__threadz00, BgL_bgl_threadza7d2getza7d2s3575z00, BGl_threadzd2getzd2specificzd21997zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3369z00zz__threadz00, BgL_bgl_threadza7d2termina3576za7, BGl_threadzd2terminatez12zd2no1995z12zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3371z00zz__threadz00, BgL_bgl_threadza7d2setza7d2s3577z00, BGl_threadzd2setzd2specificz121999z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3187z00zz__threadz00, BgL_bgl_string3187za700za7za7_3578za7, "th", 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3372z00zz__threadz00, BgL_bgl_threadza7d2getza7d2c3579z00, BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3188z00zz__threadz00, BgL_bgl_string3188za700za7za7_3580za7, "_make-nothread", 14 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3373z00zz__threadz00, BgL_bgl_threadza7d2setza7d2c3581z00, BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3200z00zz__threadz00, BgL_bgl_string3200za700za7za7_3582za7, "_fill-thread!", 13 );
DEFINE_STRING( BGl_string3190z00zz__threadz00, BgL_bgl_string3190za700za7za7_3583za7, "nothread-nil", 12 );
DEFINE_STRING( BGl_string3189z00zz__threadz00, BgL_bgl_string3189za700za7za7_3584za7, "_fill-nothread!", 15 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3374z00zz__threadz00, BgL_bgl_objectza7d2za7e3stru3585z00, BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3201z00zz__threadz00, BgL_bgl_string3201za700za7za7_3586za7, "thread-nil", 10 );
DEFINE_STRING( BGl_string3191z00zz__threadz00, BgL_bgl_string3191za700za7za7_3587za7, "_nothread-body", 14 );
DEFINE_STRING( BGl_string3202z00zz__threadz00, BgL_bgl_string3202za700za7za7_3588za7, "_thread-name-set!", 17 );
DEFINE_STRING( BGl_string3192z00zz__threadz00, BgL_bgl_string3192za700za7za7_3589za7, "_nothread-%specific-set!", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3376z00zz__threadz00, BgL_bgl_structza7b2objectza73590z00, BGl_structzb2objectzd2ze3objec2018z83zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3203z00zz__threadz00, BgL_bgl_string3203za700za7za7_3591za7, "_thread-name", 12 );
DEFINE_STRING( BGl_string3193z00zz__threadz00, BgL_bgl_string3193za700za7za7_3592za7, "_nothread-%specific", 19 );
DEFINE_STRING( BGl_string3204z00zz__threadz00, BgL_bgl_string3204za700za7za7_3593za7, "_thread-specific-set!", 21 );
DEFINE_STRING( BGl_string3194z00zz__threadz00, BgL_bgl_string3194za700za7za7_3594za7, "_nothread-%cleanup-set!", 23 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3378z00zz__threadz00, BgL_bgl_objectza7d2za7e3stru3595z00, BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3205z00zz__threadz00, BgL_bgl_string3205za700za7za7_3596za7, "_thread-specific", 16 );
DEFINE_STRING( BGl_string3195z00zz__threadz00, BgL_bgl_string3195za700za7za7_3597za7, "_nothread-%cleanup", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3380z00zz__threadz00, BgL_bgl_objectza7d2za7e3stru3598z00, BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3379z00zz__threadz00, BgL_bgl_structza7b2objectza73599z00, BGl_structzb2objectzd2ze3objec2022z83zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3206z00zz__threadz00, BgL_bgl_string3206za700za7za7_3600za7, "_thread-cleanup-set!", 20 );
DEFINE_STRING( BGl_string3196z00zz__threadz00, BgL_bgl_string3196za700za7za7_3601za7, "_nothread-end-result-set!", 25 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3381z00zz__threadz00, BgL_bgl_structza7b2objectza73602z00, BGl_structzb2objectzd2ze3objec2026z83zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3207z00zz__threadz00, BgL_bgl_string3207za700za7za7_3603za7, "_thread-cleanup", 15 );
DEFINE_STRING( BGl_string3197z00zz__threadz00, BgL_bgl_string3197za700za7za7_3604za7, "_nothread-end-result", 20 );
DEFINE_STRING( BGl_string3208z00zz__threadz00, BgL_bgl_string3208za700za7za7_3605za7, "_make-thread-backend", 20 );
DEFINE_STRING( BGl_string3198z00zz__threadz00, BgL_bgl_string3198za700za7za7_3606za7, "_nothread-end-exception-set!", 28 );
DEFINE_EXPORT_BGL_GENERIC( BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BgL_bgl__tbza7d2makeza7d2thr3607z00, BGl__tbzd2makezd2threadz00zz__threadz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3210z00zz__threadz00, BgL_bgl_string3210za700za7za7_3608za7, "thread-backend-nil", 18 );
DEFINE_STRING( BGl_string3209z00zz__threadz00, BgL_bgl_string3209za700za7za7_3609za7, "_fill-thread-backend!", 21 );
DEFINE_STRING( BGl_string3199z00zz__threadz00, BgL_bgl_string3199za700za7za7_3610za7, "_nothread-end-exception", 23 );
DEFINE_STRING( BGl_string3211z00zz__threadz00, BgL_bgl_string3211za700za7za7_3611za7, "_thread-backend-name", 20 );
DEFINE_STRING( BGl_string3212z00zz__threadz00, BgL_bgl_string3212za700za7za7_3612za7, "tb-make-thread", 14 );
DEFINE_STRING( BGl_string3213z00zz__threadz00, BgL_bgl_string3213za700za7za7_3613za7, "tb-current-thread", 17 );
DEFINE_STRING( BGl_string3214z00zz__threadz00, BgL_bgl_string3214za700za7za7_3614za7, "thread-initialize!", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2threadzd2envz00zz__threadz00, BgL_bgl__makeza7d2threadza7d3615z00, opt_generic_entry, BGl__makezd2threadzd2zz__threadz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3215z00zz__threadz00, BgL_bgl_string3215za700za7za7_3616za7, "thread-start!", 13 );
DEFINE_STRING( BGl_string3216z00zz__threadz00, BgL_bgl_string3216za700za7za7_3617za7, "thread-start-joinable!", 22 );
DEFINE_STRING( BGl_string3217z00zz__threadz00, BgL_bgl_string3217za700za7za7_3618za7, "thread-join!", 12 );
DEFINE_STRING( BGl_string3218z00zz__threadz00, BgL_bgl_string3218za700za7za7_3619za7, "thread-terminate!", 17 );
DEFINE_STRING( BGl_string3220z00zz__threadz00, BgL_bgl_string3220za700za7za7_3620za7, "thread-set-specific!", 20 );
DEFINE_STRING( BGl_string3219z00zz__threadz00, BgL_bgl_string3219za700za7za7_3621za7, "thread-get-specific", 19 );
DEFINE_STRING( BGl_string3221z00zz__threadz00, BgL_bgl_string3221za700za7za7_3622za7, "thread-get-cleanup", 18 );
DEFINE_STRING( BGl_string3222z00zz__threadz00, BgL_bgl_string3222za700za7za7_3623za7, "thread-set-cleanup!", 19 );
DEFINE_STRING( BGl_string3223z00zz__threadz00, BgL_bgl_string3223za700za7za7_3624za7, "%user-current-thread", 20 );
DEFINE_STRING( BGl_string3224z00zz__threadz00, BgL_bgl_string3224za700za7za7_3625za7, "%user-thread-sleep!", 19 );
DEFINE_STRING( BGl_string3225z00zz__threadz00, BgL_bgl_string3225za700za7za7_3626za7, "%user-thread-yield!", 19 );
DEFINE_STRING( BGl_string3226z00zz__threadz00, BgL_bgl_string3226za700za7za7_3627za7, "tb-make-thread:Wrong number of arguments", 40 );
DEFINE_STRING( BGl_string3230z00zz__threadz00, BgL_bgl_string3230za700za7za7_3628za7, "_tb-make-thread", 15 );
DEFINE_STRING( BGl_string3229z00zz__threadz00, BgL_bgl_string3229za700za7za7_3629za7, "method1946", 10 );
DEFINE_STRING( BGl_string3232z00zz__threadz00, BgL_bgl_string3232za700za7za7_3630za7, "tb-make-thread-defau1945", 24 );
DEFINE_STRING( BGl_string3233z00zz__threadz00, BgL_bgl_string3233za700za7za7_3631za7, "No method for this object", 25 );
DEFINE_STRING( BGl_string3234z00zz__threadz00, BgL_bgl_string3234za700za7za7_3632za7, "_tb-make-thread-defau1945", 25 );
DEFINE_STRING( BGl_string3235z00zz__threadz00, BgL_bgl_string3235za700za7za7_3633za7, "tb-current-thread:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string3236z00zz__threadz00, BgL_bgl_string3236za700za7za7_3634za7, "_tb-current-thread", 18 );
DEFINE_STRING( BGl_string3238z00zz__threadz00, BgL_bgl_string3238za700za7za7_3635za7, "tb-current-thread-de1947", 24 );
DEFINE_STRING( BGl_string3240z00zz__threadz00, BgL_bgl_string3240za700za7za7_3636za7, "thread-initialize!:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string3239z00zz__threadz00, BgL_bgl_string3239za700za7za7_3637za7, "_tb-current-thread-de1947", 25 );
DEFINE_STRING( BGl_string3241z00zz__threadz00, BgL_bgl_string3241za700za7za7_3638za7, "_thread-initialize!", 19 );
DEFINE_STRING( BGl_string3242z00zz__threadz00, BgL_bgl_string3242za700za7za7_3639za7, "_thread-initialize!-d1960", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52allocatezd2threadzd2backendzd2envz80zz__threadz00, BgL_bgl__za752allocateza7d2t3640z00, BGl__z52allocatezd2threadzd2backendz52zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3244z00zz__threadz00, BgL_bgl_string3244za700za7za7_3641za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string3247z00zz__threadz00, BgL_bgl_string3247za700za7za7_3642za7, "apply", 5 );
DEFINE_STRING( BGl_string3249z00zz__threadz00, BgL_bgl_string3249za700za7za7_3643za7, "method1963", 10 );
DEFINE_STRING( BGl_string3252z00zz__threadz00, BgL_bgl_string3252za700za7za7_3644za7, "let", 3 );
DEFINE_STRING( BGl_string3256z00zz__threadz00, BgL_bgl_string3256za700za7za7_3645za7, "list2200", 8 );
DEFINE_STRING( BGl_string3259z00zz__threadz00, BgL_bgl_string3259za700za7za7_3646za7, "c-cons", 6 );
DEFINE_STRING( BGl_string3261z00zz__threadz00, BgL_bgl_string3261za700za7za7_3647za7, "sc", 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_nothreadzd2endzd2resultzd2envzd2zz__threadz00, BgL_bgl__nothreadza7d2endza73648z00, BGl__nothreadzd2endzd2resultz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3265z00zz__threadz00, BgL_bgl_string3265za700za7za7_3649za7, "cons*", 5 );
DEFINE_STRING( BGl_string3266z00zz__threadz00, BgL_bgl_string3266za700za7za7_3650za7, "_thread-start!", 14 );
DEFINE_STRING( BGl_string3268z00zz__threadz00, BgL_bgl_string3268za700za7za7_3651za7, "thread-start!-defaul1962", 24 );
DEFINE_STRING( BGl_string3270z00zz__threadz00, BgL_bgl_string3270za700za7za7_3652za7, "thread-start-joinable!:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3269z00zz__threadz00, BgL_bgl_string3269za700za7za7_3653za7, "_thread-start!-defaul1962", 25 );
DEFINE_STRING( BGl_string3273z00zz__threadz00, BgL_bgl_string3273za700za7za7_3654za7, "method1966", 10 );
DEFINE_STRING( BGl_string3274z00zz__threadz00, BgL_bgl_string3274za700za7za7_3655za7, "_thread-start-joinable!", 23 );
DEFINE_STRING( BGl_string3276z00zz__threadz00, BgL_bgl_string3276za700za7za7_3656za7, "thread-start-joinabl1964", 24 );
DEFINE_STRING( BGl_string3277z00zz__threadz00, BgL_bgl_string3277za700za7za7_3657za7, "_thread-start-joinabl1964", 25 );
DEFINE_STRING( BGl_string3281z00zz__threadz00, BgL_bgl_string3281za700za7za7_3658za7, "method1968", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2setzd2specificz121973zd2envzc0zz__threadz00, BgL_bgl__threadza7d2setza7d23659z00, BGl__threadzd2setzd2specificz121973z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3286z00zz__threadz00, BgL_bgl_string3286za700za7za7_3660za7, "list2201", 8 );
DEFINE_STRING( BGl_string3289z00zz__threadz00, BgL_bgl_string3289za700za7za7_3661za7, "timeout", 7 );
DEFINE_STRING( BGl_string3301z00zz__threadz00, BgL_bgl_string3301za700za7za7_3662za7, "thread-terminate!-de1969", 24 );
DEFINE_STRING( BGl_string3291z00zz__threadz00, BgL_bgl_string3291za700za7za7_3663za7, "_thread-join!", 13 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BgL_bgl__threadza7d2initia3664za7, BGl__threadzd2initializa7ez12z67zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3302z00zz__threadz00, BgL_bgl_string3302za700za7za7_3665za7, "_thread-terminate!-de1969", 25 );
DEFINE_STRING( BGl_string3303z00zz__threadz00, BgL_bgl_string3303za700za7za7_3666za7, "thread-get-specific:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3293z00zz__threadz00, BgL_bgl_string3293za700za7za7_3667za7, "thread-join!-default1967", 24 );
DEFINE_STRING( BGl_string3294z00zz__threadz00, BgL_bgl_string3294za700za7za7_3668za7, "_thread-join!-default1967", 25 );
DEFINE_STRING( BGl_string3295z00zz__threadz00, BgL_bgl_string3295za700za7za7_3669za7, "thread-terminate!:Wrong number of arguments", 43 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52allocatezd2nothreadzd2envz52zz__threadz00, BgL_bgl__za752allocateza7d2n3670z00, BGl__z52allocatezd2nothreadz80zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3306z00zz__threadz00, BgL_bgl_string3306za700za7za7_3671za7, "method1972", 10 );
DEFINE_STRING( BGl_string3307z00zz__threadz00, BgL_bgl_string3307za700za7za7_3672za7, "_thread-get-specific", 20 );
DEFINE_STRING( BGl_string3298z00zz__threadz00, BgL_bgl_string3298za700za7za7_3673za7, "method1970", 10 );
DEFINE_STRING( BGl_string3310z00zz__threadz00, BgL_bgl_string3310za700za7za7_3674za7, "_thread-get-specific-1971", 25 );
DEFINE_STRING( BGl_string3309z00zz__threadz00, BgL_bgl_string3309za700za7za7_3675za7, "thread-get-specific-1971", 24 );
DEFINE_STRING( BGl_string3299z00zz__threadz00, BgL_bgl_string3299za700za7za7_3676za7, "_thread-terminate!", 18 );
DEFINE_STRING( BGl_string3311z00zz__threadz00, BgL_bgl_string3311za700za7za7_3677za7, "thread-set-specific!:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3314z00zz__threadz00, BgL_bgl_string3314za700za7za7_3678za7, "method1974", 10 );
DEFINE_STRING( BGl_string3316z00zz__threadz00, BgL_bgl_string3316za700za7za7_3679za7, "v", 1 );
DEFINE_STRING( BGl_string3317z00zz__threadz00, BgL_bgl_string3317za700za7za7_3680za7, "_thread-set-specific!", 21 );
DEFINE_STRING( BGl_string3320z00zz__threadz00, BgL_bgl_string3320za700za7za7_3681za7, "_thread-set-specific!1973", 25 );
DEFINE_STRING( BGl_string3319z00zz__threadz00, BgL_bgl_string3319za700za7za7_3682za7, "thread-set-specific!1973", 24 );
DEFINE_STRING( BGl_string3321z00zz__threadz00, BgL_bgl_string3321za700za7za7_3683za7, "thread-get-cleanup:Wrong number of arguments", 44 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2nilzd2envz00zz__threadz00, BgL_bgl__mutexza7d2nilza7d2za73684za7, BGl__mutexzd2nilzd2zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3324z00zz__threadz00, BgL_bgl_string3324za700za7za7_3685za7, "method1976", 10 );
DEFINE_STRING( BGl_string3325z00zz__threadz00, BgL_bgl_string3325za700za7za7_3686za7, "_thread-get-cleanup", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2mutexzd2envz00zz__threadz00, BgL_bgl__makeza7d2mutexza7d23687z00, opt_generic_entry, BGl__makezd2mutexzd2zz__threadz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3327z00zz__threadz00, BgL_bgl_string3327za700za7za7_3688za7, "thread-get-cleanup-d1975", 24 );
DEFINE_STRING( BGl_string3328z00zz__threadz00, BgL_bgl_string3328za700za7za7_3689za7, "_thread-get-cleanup-d1975", 25 );
DEFINE_STRING( BGl_string3329z00zz__threadz00, BgL_bgl_string3329za700za7za7_3690za7, "thread-set-cleanup!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3332z00zz__threadz00, BgL_bgl_string3332za700za7za7_3691za7, "method1978", 10 );
DEFINE_STRING( BGl_string3333z00zz__threadz00, BgL_bgl_string3333za700za7za7_3692za7, "_thread-set-cleanup!", 20 );
DEFINE_STRING( BGl_string3335z00zz__threadz00, BgL_bgl_string3335za700za7za7_3693za7, "thread-set-cleanup!-1977", 24 );
DEFINE_STRING( BGl_string3336z00zz__threadz00, BgL_bgl_string3336za700za7za7_3694za7, "_thread-set-cleanup!-1977", 25 );
DEFINE_STRING( BGl_string3337z00zz__threadz00, BgL_bgl_string3337za700za7za7_3695za7, "%user-current-thread:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3338z00zz__threadz00, BgL_bgl_string3338za700za7za7_3696za7, "_%user-current-thread", 21 );
DEFINE_STRING( BGl_string3340z00zz__threadz00, BgL_bgl_string3340za700za7za7_3697za7, "%user-thread-sleep!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3339z00zz__threadz00, BgL_bgl_string3339za700za7za7_3698za7, "_%user-current-thread1982", 25 );
DEFINE_STRING( BGl_string3343z00zz__threadz00, BgL_bgl_string3343za700za7za7_3699za7, "method1985", 10 );
DEFINE_STRING( BGl_string3345z00zz__threadz00, BgL_bgl_string3345za700za7za7_3700za7, "d", 1 );
DEFINE_STRING( BGl_string3346z00zz__threadz00, BgL_bgl_string3346za700za7za7_3701za7, "_%user-thread-sleep!", 20 );
DEFINE_STRING( BGl_string3347z00zz__threadz00, BgL_bgl_string3347za700za7za7_3702za7, "%user-thread-sleep!-1984", 24 );
DEFINE_STRING( BGl_string3348z00zz__threadz00, BgL_bgl_string3348za700za7za7_3703za7, "double", 6 );
DEFINE_STRING( BGl_string3350z00zz__threadz00, BgL_bgl_string3350za700za7za7_3704za7, "date, real, or integer", 22 );
DEFINE_STRING( BGl_string3351z00zz__threadz00, BgL_bgl_string3351za700za7za7_3705za7, "_%user-thread-sleep!-1984", 25 );
DEFINE_STRING( BGl_string3352z00zz__threadz00, BgL_bgl_string3352za700za7za7_3706za7, "%user-thread-yield!:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string3355z00zz__threadz00, BgL_bgl_string3355za700za7za7_3707za7, "method1987", 10 );
DEFINE_STRING( BGl_string3356z00zz__threadz00, BgL_bgl_string3356za700za7za7_3708za7, "_%user-thread-yield!", 20 );
DEFINE_STRING( BGl_string3357z00zz__threadz00, BgL_bgl_string3357za700za7za7_3709za7, "_%user-thread-yield!-1986", 25 );
DEFINE_STRING( BGl_string3361z00zz__threadz00, BgL_bgl_string3361za700za7za7_3710za7, "object-display", 14 );
DEFINE_STRING( BGl_string3363z00zz__threadz00, BgL_bgl_string3363za700za7za7_3711za7, "object-write", 12 );
DEFINE_STRING( BGl_string3365z00zz__threadz00, BgL_bgl_string3365za700za7za7_3712za7, "object-print", 12 );
DEFINE_STRING( BGl_string3375z00zz__threadz00, BgL_bgl_string3375za700za7za7_3713za7, "object->struct::struct", 22 );
DEFINE_STRING( BGl_string3377z00zz__threadz00, BgL_bgl_string3377za700za7za7_3714za7, "struct+object->object::object", 29 );
DEFINE_STRING( BGl_string3382z00zz__threadz00, BgL_bgl_string3382za700za7za7_3715za7, "struct+object->objec2026", 24 );
DEFINE_STRING( BGl_string3383z00zz__threadz00, BgL_bgl_string3383za700za7za7_3716za7, "struct", 6 );
DEFINE_STRING( BGl_string3384z00zz__threadz00, BgL_bgl_string3384za700za7za7_3717za7, "object->struct-threa2024", 24 );
DEFINE_STRING( BGl_string3385z00zz__threadz00, BgL_bgl_string3385za700za7za7_3718za7, "struct+object->objec2022", 24 );
DEFINE_STRING( BGl_string3386z00zz__threadz00, BgL_bgl_string3386za700za7za7_3719za7, "object->struct-nothr2020", 24 );
DEFINE_STRING( BGl_string3387z00zz__threadz00, BgL_bgl_string3387za700za7za7_3720za7, "struct+object->objec2018", 24 );
DEFINE_STRING( BGl_string3388z00zz__threadz00, BgL_bgl_string3388za700za7za7_3721za7, "object->struct-nothr2016", 24 );
DEFINE_STRING( BGl_string3390z00zz__threadz00, BgL_bgl_string3390za700za7za7_3722za7, "thread-get-cleanup-n2001", 24 );
DEFINE_STRING( BGl_string3389z00zz__threadz00, BgL_bgl_string3389za700za7za7_3723za7, "thread-set-cleanup!-2003", 24 );
DEFINE_STRING( BGl_string3401z00zz__threadz00, BgL_bgl_string3401za700za7za7_3724za7, "thread-start!-nothre1989", 24 );
DEFINE_STRING( BGl_string3391z00zz__threadz00, BgL_bgl_string3391za700za7za7_3725za7, "thread-set-specific!1999", 24 );
DEFINE_STRING( BGl_string3402z00zz__threadz00, BgL_bgl_string3402za700za7za7_3726za7, "<exit:2283>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3392z00zz__threadz00, BgL_bgl_string3392za700za7za7_3727za7, "thread-get-specific-1997", 24 );
DEFINE_STRING( BGl_string3393z00zz__threadz00, BgL_bgl_string3393za700za7za7_3728za7, "thread-terminate!-no1995", 24 );
DEFINE_STRING( BGl_string3394z00zz__threadz00, BgL_bgl_string3394za700za7za7_3729za7, "thread-terminate!-no1995:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string3405z00zz__threadz00, BgL_bgl_string3405za700za7za7_3730za7, "fun2290", 7 );
DEFINE_STRING( BGl_string3406z00zz__threadz00, BgL_bgl_string3406za700za7za7_3731za7, "<exit:2277>", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezd2signalz12zd2envzc0zz__threadz00, BgL_bgl__conditionza7d2var3732za7, BGl__conditionzd2variablezd2signalz12z12zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3407z00zz__threadz00, BgL_bgl_string3407za700za7za7_3733za7, "<anonymous:2286>", 16 );
DEFINE_STRING( BGl_string3397z00zz__threadz00, BgL_bgl_string3397za700za7za7_3734za7, "fun2309", 7 );
DEFINE_STRING( BGl_string3408z00zz__threadz00, BgL_bgl_string3408za700za7za7_3735za7, "object-print-thread1959", 23 );
DEFINE_STRING( BGl_string3398z00zz__threadz00, BgL_bgl_string3398za700za7za7_3736za7, "thread-join!-nothrea1993", 24 );
DEFINE_STRING( BGl_string3410z00zz__threadz00, BgL_bgl_string3410za700za7za7_3737za7, "output-port", 11 );
DEFINE_STRING( BGl_string3409z00zz__threadz00, BgL_bgl_string3409za700za7za7_3738za7, "object-write-thread1957", 23 );
DEFINE_STRING( BGl_string3399z00zz__threadz00, BgL_bgl_string3399za700za7za7_3739za7, "thread-start-joinabl1991", 24 );
DEFINE_STRING( BGl_string3411z00zz__threadz00, BgL_bgl_string3411za700za7za7_3740za7, "<anonymous:2251>", 16 );
DEFINE_STRING( BGl_string3412z00zz__threadz00, BgL_bgl_string3412za700za7za7_3741za7, "object", 6 );
DEFINE_STRING( BGl_string3413z00zz__threadz00, BgL_bgl_string3413za700za7za7_3742za7, ">", 1 );
DEFINE_STRING( BGl_string3414z00zz__threadz00, BgL_bgl_string3414za700za7za7_3743za7, ":", 1 );
DEFINE_STRING( BGl_string3415z00zz__threadz00, BgL_bgl_string3415za700za7za7_3744za7, "#<", 2 );
DEFINE_STRING( BGl_string3416z00zz__threadz00, BgL_bgl_string3416za700za7za7_3745za7, "object-display-threa1955", 24 );
DEFINE_EXPORT_BGL_GENERIC( BGl_threadzd2terminatez12zd2envz12zz__threadz00, BgL_bgl__threadza7d2termin3746za7, BGl__threadzd2terminatez12zc0zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3417z00zz__threadz00, BgL_bgl_string3417za700za7za7_3747za7, "<anonymous:2224>", 16 );
DEFINE_STRING( BGl_string3418z00zz__threadz00, BgL_bgl_string3418za700za7za7_3748za7, "tb-current-thread-no1953", 24 );
DEFINE_STRING( BGl_string3420z00zz__threadz00, BgL_bgl_string3420za700za7za7_3749za7, "__thread", 8 );
DEFINE_STRING( BGl_string3419z00zz__threadz00, BgL_bgl_string3419za700za7za7_3750za7, "tb-make-thread-nothr1951", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2namezd2envz00zz__threadz00, BgL_bgl__threadza7d2nameza7d3751z00, BGl__threadzd2namezd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl__defaultza7d2threa3752za7, BGl__defaultzd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 0 );
extern obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2startzd2joinabl1964zd2envzd2zz__threadz00, BgL_bgl__threadza7d2startza73753z00, BGl__threadzd2startzd2joinabl1964z00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2specificzd2envz00zz__threadz00, BgL_bgl__threadza7d2specif3754za7, BGl__threadzd2specificzd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fillzd2nothreadz12zd2envz12zz__threadz00, BgL_bgl__fillza7d2nothread3755za7, BGl__fillzd2nothreadz12zc0zz__threadz00, 0L, BUNSPEC, 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2lockzd2envz00zz__threadz00, BgL_bgl__withza7d2lockza7d2za73756za7, BGl__withzd2lockzd2zz__threadz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2specif3757za7, BGl__threadzd2specificzd2setz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2setzd2cleanupz12zd21977zd2envz12zz__threadz00, BgL_bgl__threadza7d2setza7d23758z00, BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_conditionzd2variablezf3zd2envzf3zz__threadz00, BgL_bgl__conditionza7d2var3759za7, BGl__conditionzd2variablezf3z21zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_tbzd2currentzd2threadzd2de1947zd2envz00zz__threadz00, BgL_bgl__tbza7d2currentza7d23760z00, BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2initializa7ez12zd2d1960zd2envz67zz__threadz00, BgL_bgl__threadza7d2initia3761za7, BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00, 0L, BUNSPEC, 1 );
extern obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2namezd2setz12zd2envzc0zz__threadz00, BgL_bgl__threadza7d2nameza7d3762z00, BGl__threadzd2namezd2setz12z12zz__threadz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2cleanupzd2envz00zz__threadz00, BgL_bgl__threadza7d2cleanu3763za7, BGl__threadzd2cleanupzd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzd2statezd2envz00zz__threadz00, BgL_bgl__mutexza7d2stateza7d3764z00, BGl__mutexzd2statezd2zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_threadzd2nilzd2envz00zz__threadz00, BgL_bgl__threadza7d2nilza7d23765z00, BGl__threadzd2nilzd2zz__threadz00, 0L, BUNSPEC, 0 );
extern obj_t BGl_objectzd2writezd2envz00zz__objectz00;
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2backendzd2namezd2envzd2zz__threadz00, BgL_bgl__threadza7d2backen3766za7, BGl__threadzd2backendzd2namez00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2dynamiczd2envzd2envzd2zz__threadz00, BgL_bgl__currentza7d2dynam3767za7, BGl__currentzd2dynamiczd2envz00zz__threadz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nothreadzf3zd2envz21zz__threadz00, BgL_bgl__nothreadza7f3za7f3za73768za7, BGl__nothreadzf3zf3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2threadzd2backendzd2envzd2zz__threadz00, BgL_bgl__makeza7d2threadza7d3769z00, BGl__makezd2threadzd2backendz00zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mutexzf3zd2envz21zz__threadz00, BgL_bgl__mutexza7f3za7f3za7za7__3770z00, BGl__mutexzf3zf3zz__threadz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_threadzd2terminatez12zd2de1969zd2envzc0zz__threadz00, BgL_bgl__threadza7d2termin3771za7, BGl__threadzd2terminatez12zd2de1969z12zz__threadz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long BgL_checksumz00_3808, char * BgL_fromz00_3809)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__threadz00))
{ 
BGl_requirezd2initializa7ationz75zz__threadz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__threadz00(); 
BGl_importedzd2moduleszd2initz00zz__threadz00(); 
BGl_objectzd2initzd2zz__threadz00(); 
BGl_genericzd2initzd2zz__threadz00(); 
BGl_methodzd2initzd2zz__threadz00(); 
BGl_toplevelzd2initzd2zz__threadz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
BGl_symbol3084z00zz__threadz00 = 
bstring_to_symbol(BGl_string3085z00zz__threadz00); 
BGl_symbol3087z00zz__threadz00 = 
bstring_to_symbol(BGl_string3088z00zz__threadz00); 
BGl_symbol3095z00zz__threadz00 = 
bstring_to_symbol(BGl_string3096z00zz__threadz00); 
BGl_symbol3097z00zz__threadz00 = 
bstring_to_symbol(BGl_string3098z00zz__threadz00); 
BGl_symbol3099z00zz__threadz00 = 
bstring_to_symbol(BGl_string3100z00zz__threadz00); 
BGl_list3094z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3097z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3097z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3099z00zz__threadz00, BNIL)))); 
BGl_symbol3104z00zz__threadz00 = 
bstring_to_symbol(BGl_string3105z00zz__threadz00); 
BGl_symbol3106z00zz__threadz00 = 
bstring_to_symbol(BGl_string3107z00zz__threadz00); 
BGl_list3103z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3104z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3104z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3106z00zz__threadz00, BNIL)))); 
BGl_symbol3115z00zz__threadz00 = 
bstring_to_symbol(BGl_string3116z00zz__threadz00); 
BGl_symbol3118z00zz__threadz00 = 
bstring_to_symbol(BGl_string3119z00zz__threadz00); 
BGl_symbol3121z00zz__threadz00 = 
bstring_to_symbol(BGl_string3122z00zz__threadz00); 
BGl_symbol3130z00zz__threadz00 = 
bstring_to_symbol(BGl_string3131z00zz__threadz00); 
BGl_list3129z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3130z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3130z00zz__threadz00, BNIL))); 
BGl_symbol3133z00zz__threadz00 = 
bstring_to_symbol(BGl_string3134z00zz__threadz00); 
BGl_symbol3135z00zz__threadz00 = 
bstring_to_symbol(BGl_string3136z00zz__threadz00); 
BGl_symbol3139z00zz__threadz00 = 
bstring_to_symbol(BGl_string3140z00zz__threadz00); 
BGl_symbol3145z00zz__threadz00 = 
bstring_to_symbol(BGl_string3075z00zz__threadz00); 
BGl_symbol3146z00zz__threadz00 = 
bstring_to_symbol(BGl_string3147z00zz__threadz00); 
BGl_symbol3150z00zz__threadz00 = 
bstring_to_symbol(BGl_string3151z00zz__threadz00); 
BGl_symbol3153z00zz__threadz00 = 
bstring_to_symbol(BGl_string3154z00zz__threadz00); 
BGl_list3152z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3153z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3087z00zz__threadz00, BNIL)); 
BGl_list3149z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3150z00zz__threadz00, 
MAKE_PAIR(BGl_list3152z00zz__threadz00, BNIL)); 
BGl_symbol3155z00zz__threadz00 = 
bstring_to_symbol(BGl_string3156z00zz__threadz00); 
BGl_symbol3157z00zz__threadz00 = 
bstring_to_symbol(BGl_string3158z00zz__threadz00); 
BGl_symbol3161z00zz__threadz00 = 
bstring_to_symbol(BGl_string3072z00zz__threadz00); 
BGl_symbol3162z00zz__threadz00 = 
bstring_to_symbol(BGl_string3163z00zz__threadz00); 
BGl_symbol3164z00zz__threadz00 = 
bstring_to_symbol(BGl_string3165z00zz__threadz00); 
BGl_symbol3166z00zz__threadz00 = 
bstring_to_symbol(BGl_string3167z00zz__threadz00); 
BGl_symbol3168z00zz__threadz00 = 
bstring_to_symbol(BGl_string3169z00zz__threadz00); 
BGl_symbol3170z00zz__threadz00 = 
bstring_to_symbol(BGl_string3171z00zz__threadz00); 
BGl_symbol3172z00zz__threadz00 = 
bstring_to_symbol(BGl_string3173z00zz__threadz00); 
BGl_symbol3174z00zz__threadz00 = 
bstring_to_symbol(BGl_string3175z00zz__threadz00); 
BGl_symbol3184z00zz__threadz00 = 
bstring_to_symbol(BGl_string3185z00zz__threadz00); 
BGl_symbol3186z00zz__threadz00 = 
bstring_to_symbol(BGl_string3187z00zz__threadz00); 
BGl_list3183z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3184z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3184z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, BNIL)))); 
BGl_symbol3228z00zz__threadz00 = 
bstring_to_symbol(BGl_string3229z00zz__threadz00); 
BGl_list3227z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3228z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3228z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3099z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3162z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3146z00zz__threadz00, BNIL)))))); 
BGl_symbol3231z00zz__threadz00 = 
bstring_to_symbol(BGl_string3232z00zz__threadz00); 
BGl_symbol3237z00zz__threadz00 = 
bstring_to_symbol(BGl_string3238z00zz__threadz00); 
BGl_symbol3243z00zz__threadz00 = 
bstring_to_symbol(BGl_string3215z00zz__threadz00); 
BGl_symbol3246z00zz__threadz00 = 
bstring_to_symbol(BGl_string3247z00zz__threadz00); 
BGl_symbol3248z00zz__threadz00 = 
bstring_to_symbol(BGl_string3249z00zz__threadz00); 
BGl_symbol3251z00zz__threadz00 = 
bstring_to_symbol(BGl_string3252z00zz__threadz00); 
BGl_symbol3255z00zz__threadz00 = 
bstring_to_symbol(BGl_string3256z00zz__threadz00); 
BGl_symbol3258z00zz__threadz00 = 
bstring_to_symbol(BGl_string3259z00zz__threadz00); 
BGl_symbol3260z00zz__threadz00 = 
bstring_to_symbol(BGl_string3261z00zz__threadz00); 
BGl_list3262z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3153z00zz__threadz00, 
MAKE_PAIR(BNIL, BNIL)); 
BGl_list3257z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3258z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3260z00zz__threadz00, 
MAKE_PAIR(BGl_list3262z00zz__threadz00, BNIL))); 
BGl_list3254z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3255z00zz__threadz00, 
MAKE_PAIR(BGl_list3257z00zz__threadz00, BNIL)); 
BGl_list3253z00zz__threadz00 = 
MAKE_PAIR(BGl_list3254z00zz__threadz00, BNIL); 
BGl_symbol3264z00zz__threadz00 = 
bstring_to_symbol(BGl_string3265z00zz__threadz00); 
BGl_list3263z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3264z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3255z00zz__threadz00, BNIL))); 
BGl_list3250z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3251z00zz__threadz00, 
MAKE_PAIR(BGl_list3253z00zz__threadz00, 
MAKE_PAIR(BGl_list3263z00zz__threadz00, BNIL))); 
BGl_list3245z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3246z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3248z00zz__threadz00, 
MAKE_PAIR(BGl_list3250z00zz__threadz00, BNIL))); 
BGl_symbol3267z00zz__threadz00 = 
bstring_to_symbol(BGl_string3268z00zz__threadz00); 
BGl_symbol3272z00zz__threadz00 = 
bstring_to_symbol(BGl_string3273z00zz__threadz00); 
BGl_list3271z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3272z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3272z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, BNIL)))); 
BGl_symbol3275z00zz__threadz00 = 
bstring_to_symbol(BGl_string3276z00zz__threadz00); 
BGl_symbol3278z00zz__threadz00 = 
bstring_to_symbol(BGl_string3217z00zz__threadz00); 
BGl_symbol3280z00zz__threadz00 = 
bstring_to_symbol(BGl_string3281z00zz__threadz00); 
BGl_symbol3285z00zz__threadz00 = 
bstring_to_symbol(BGl_string3286z00zz__threadz00); 
BGl_symbol3288z00zz__threadz00 = 
bstring_to_symbol(BGl_string3289z00zz__threadz00); 
BGl_list3287z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3258z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3288z00zz__threadz00, 
MAKE_PAIR(BGl_list3262z00zz__threadz00, BNIL))); 
BGl_list3284z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3285z00zz__threadz00, 
MAKE_PAIR(BGl_list3287z00zz__threadz00, BNIL)); 
BGl_list3283z00zz__threadz00 = 
MAKE_PAIR(BGl_list3284z00zz__threadz00, BNIL); 
BGl_list3290z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3264z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3285z00zz__threadz00, BNIL))); 
BGl_list3282z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3251z00zz__threadz00, 
MAKE_PAIR(BGl_list3283z00zz__threadz00, 
MAKE_PAIR(BGl_list3290z00zz__threadz00, BNIL))); 
BGl_list3279z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3246z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3280z00zz__threadz00, 
MAKE_PAIR(BGl_list3282z00zz__threadz00, BNIL))); 
BGl_symbol3292z00zz__threadz00 = 
bstring_to_symbol(BGl_string3293z00zz__threadz00); 
BGl_symbol3297z00zz__threadz00 = 
bstring_to_symbol(BGl_string3298z00zz__threadz00); 
BGl_list3296z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3297z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3297z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, BNIL)))); 
BGl_symbol3300z00zz__threadz00 = 
bstring_to_symbol(BGl_string3301z00zz__threadz00); 
BGl_symbol3305z00zz__threadz00 = 
bstring_to_symbol(BGl_string3306z00zz__threadz00); 
BGl_list3304z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3305z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3305z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, BNIL)))); 
BGl_symbol3308z00zz__threadz00 = 
bstring_to_symbol(BGl_string3309z00zz__threadz00); 
BGl_symbol3313z00zz__threadz00 = 
bstring_to_symbol(BGl_string3314z00zz__threadz00); 
BGl_symbol3315z00zz__threadz00 = 
bstring_to_symbol(BGl_string3316z00zz__threadz00); 
BGl_list3312z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3313z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3313z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3315z00zz__threadz00, BNIL))))); 
BGl_symbol3318z00zz__threadz00 = 
bstring_to_symbol(BGl_string3319z00zz__threadz00); 
BGl_symbol3323z00zz__threadz00 = 
bstring_to_symbol(BGl_string3324z00zz__threadz00); 
BGl_list3322z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3323z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3323z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, BNIL)))); 
BGl_symbol3326z00zz__threadz00 = 
bstring_to_symbol(BGl_string3327z00zz__threadz00); 
BGl_symbol3331z00zz__threadz00 = 
bstring_to_symbol(BGl_string3332z00zz__threadz00); 
BGl_list3330z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3331z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3331z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3186z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3315z00zz__threadz00, BNIL))))); 
BGl_symbol3334z00zz__threadz00 = 
bstring_to_symbol(BGl_string3335z00zz__threadz00); 
BGl_symbol3342z00zz__threadz00 = 
bstring_to_symbol(BGl_string3343z00zz__threadz00); 
BGl_symbol3344z00zz__threadz00 = 
bstring_to_symbol(BGl_string3345z00zz__threadz00); 
BGl_list3341z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3342z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3342z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3106z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3344z00zz__threadz00, BNIL))))); 
BGl_symbol3349z00zz__threadz00 = 
bstring_to_symbol(BGl_string3108z00zz__threadz00); 
BGl_symbol3354z00zz__threadz00 = 
bstring_to_symbol(BGl_string3355z00zz__threadz00); 
BGl_list3353z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3354z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3354z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3106z00zz__threadz00, BNIL)))); 
BGl_symbol3396z00zz__threadz00 = 
bstring_to_symbol(BGl_string3397z00zz__threadz00); 
BGl_list3395z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3396z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3396z00zz__threadz00, BNIL))); 
BGl_symbol3400z00zz__threadz00 = 
bstring_to_symbol(BGl_string3399z00zz__threadz00); 
BGl_symbol3404z00zz__threadz00 = 
bstring_to_symbol(BGl_string3405z00zz__threadz00); 
return ( 
BGl_list3403z00zz__threadz00 = 
MAKE_PAIR(BGl_symbol3095z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3404z00zz__threadz00, 
MAKE_PAIR(BGl_symbol3404z00zz__threadz00, BNIL))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_res2556z00_1752;
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_new1868z00_1742;
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_res2554z00_1747;
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1743;
BgL_new1874z00_1743 = 
((BgL_nothreadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1874z00_1743), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 233 */
BgL_objectz00_bglt BgL_auxz00_3988;
BgL_auxz00_3988 = 
(BgL_objectz00_bglt)(BgL_new1874z00_1743); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_3988, BFALSE); } 
BgL_res2554z00_1747 = BgL_new1874z00_1743; } 
BgL_new1868z00_1742 = BgL_res2554z00_1747; } 
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_res2555z00_1751;
{ /* Llib/thread.scm 233 */
BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1748;
BgL_new1871z00_1748 = BgL_new1868z00_1742; 
{ /* Llib/thread.scm 233 */
obj_t BgL_name1870z00_1750;
BgL_name1870z00_1750 = BGl_string3072z00zz__threadz00; 
((((BgL_nothreadzd2backendzd2_bglt)CREF(BgL_new1871z00_1748))->BgL_namez00) = ((obj_t)BgL_name1870z00_1750), BUNSPEC); 
BgL_res2555z00_1751 = BgL_new1871z00_1748; } } BgL_res2555z00_1751; } 
BgL_res2556z00_1752 = BgL_new1868z00_1742; } 
BGl_za2nothreadzd2backendza2zd2zz__threadz00 = BgL_res2556z00_1752; } 
{ /* Llib/thread.scm 240 */
obj_t BgL_list2040z00_888;
BgL_list2040z00_888 = 
MAKE_PAIR(
(obj_t)(BGl_za2nothreadzd2backendza2zd2zz__threadz00), BNIL); 
BGl_za2threadzd2backendsza2zd2zz__threadz00 = BgL_list2040z00_888; } 
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BFALSE; 
BGl_za2mutexzd2nilza2zd2zz__threadz00 = 
bgl_make_nil_mutex(); 
return ( 
BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00 = 
bgl_make_nil_condvar(), BUNSPEC) ;} 
}



/* dynamic-env? */
BGL_EXPORTED_DEF bool_t BGl_dynamiczd2envzf3z21zz__threadz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/thread.scm 220 */
return 
BGL_DYNAMIC_ENVP(BgL_objz00_1);} 
}



/* _dynamic-env? */
obj_t BGl__dynamiczd2envzf3z21zz__threadz00(obj_t BgL_envz00_2789, obj_t BgL_objz00_2790)
{ AN_OBJECT;
{ /* Llib/thread.scm 220 */
return 
BBOOL(
BGL_DYNAMIC_ENVP(BgL_objz00_2790));} 
}



/* current-dynamic-env */
BGL_EXPORTED_DEF obj_t BGl_currentzd2dynamiczd2envz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 226 */
return 
BGL_CURRENT_DYNAMIC_ENV();} 
}



/* _current-dynamic-env */
obj_t BGl__currentzd2dynamiczd2envz00zz__threadz00(obj_t BgL_envz00_2791)
{ AN_OBJECT;
{ /* Llib/thread.scm 226 */
return 
BGL_CURRENT_DYNAMIC_ENV();} 
}



/* current-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 245 */
return 
BGL_THREAD_BACKEND();} 
}



/* _current-thread-backend */
obj_t BGl__currentzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2792)
{ AN_OBJECT;
{ /* Llib/thread.scm 245 */
return 
BGL_THREAD_BACKEND();} 
}



/* current-thread-backend-set! */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_2)
{ AN_OBJECT;
{ /* Llib/thread.scm 251 */
{ /* Llib/thread.scm 252 */
obj_t BgL_auxz00_4003;
BgL_auxz00_4003 = 
(obj_t)(BgL_tbz00_2); 
BGL_THREAD_BACKEND_SET(BgL_auxz00_4003); } BUNSPEC; 
return 
(obj_t)(BgL_tbz00_2);} 
}



/* _current-thread-backend-set! */
obj_t BGl__currentzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t BgL_envz00_2793, obj_t BgL_tbz00_2794)
{ AN_OBJECT;
{ /* Llib/thread.scm 251 */
{ /* Llib/thread.scm 253 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4007;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2794, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 253 */
BgL_auxz00_4007 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2794)
; }  else 
{ 
obj_t BgL_auxz00_4011;
BgL_auxz00_4011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)9678)), BGl_string3074z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2794); 
FAILURE(BgL_auxz00_4011,BFALSE,BFALSE);} 
return 
BGl_currentzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_auxz00_4007);} } 
}



/* default-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 258 */
{ /* Llib/thread.scm 259 */
obj_t BgL_pairz00_1755;
{ /* Llib/thread.scm 259 */
obj_t BgL_aux2646z00_3096;
BgL_aux2646z00_3096 = BGl_za2threadzd2backendsza2zd2zz__threadz00; 
if(
PAIRP(BgL_aux2646z00_3096))
{ /* Llib/thread.scm 259 */
BgL_pairz00_1755 = BgL_aux2646z00_3096; }  else 
{ 
obj_t BgL_auxz00_4018;
BgL_auxz00_4018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)9952)), BGl_string3076z00zz__threadz00, BGl_string3077z00zz__threadz00, BgL_aux2646z00_3096); 
FAILURE(BgL_auxz00_4018,BFALSE,BFALSE);} } 
return 
CAR(BgL_pairz00_1755);} } 
}



/* _default-thread-backend */
obj_t BGl__defaultzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2795)
{ AN_OBJECT;
{ /* Llib/thread.scm 258 */
return 
BGl_defaultzd2threadzd2backendz00zz__threadz00();} 
}



/* default-thread-backend-set! */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_3)
{ AN_OBJECT;
{ /* Llib/thread.scm 264 */
{ /* Llib/thread.scm 265 */
obj_t BgL_auxz00_4024;
{ /* Llib/thread.scm 265 */
obj_t BgL_aux2648z00_3098;
BgL_aux2648z00_3098 = BGl_za2threadzd2backendsza2zd2zz__threadz00; 
{ /* Llib/thread.scm 265 */
bool_t BgL_testz00_4026;
if(
PAIRP(BgL_aux2648z00_3098))
{ /* Llib/thread.scm 265 */
BgL_testz00_4026 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 265 */
BgL_testz00_4026 = 
NULLP(BgL_aux2648z00_3098)
; } 
if(BgL_testz00_4026)
{ /* Llib/thread.scm 265 */
BgL_auxz00_4024 = BgL_aux2648z00_3098
; }  else 
{ 
obj_t BgL_auxz00_4030;
BgL_auxz00_4030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10273)), BGl_string3078z00zz__threadz00, BGl_string3079z00zz__threadz00, BgL_aux2648z00_3098); 
FAILURE(BgL_auxz00_4030,BFALSE,BFALSE);} } } 
BGl_za2threadzd2backendsza2zd2zz__threadz00 = 
bgl_remq_bang(
(obj_t)(BgL_tbz00_3), BgL_auxz00_4024); } 
return ( 
BGl_za2threadzd2backendsza2zd2zz__threadz00 = 
MAKE_PAIR(
(obj_t)(BgL_tbz00_3), BGl_za2threadzd2backendsza2zd2zz__threadz00), BUNSPEC) ;} 
}



/* _default-thread-backend-set! */
obj_t BGl__defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(obj_t BgL_envz00_2796, obj_t BgL_tbz00_2797)
{ AN_OBJECT;
{ /* Llib/thread.scm 264 */
{ /* Llib/thread.scm 266 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4037;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2797, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 266 */
BgL_auxz00_4037 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2797)
; }  else 
{ 
obj_t BgL_auxz00_4041;
BgL_auxz00_4041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10347)), BGl_string3080z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2797); 
FAILURE(BgL_auxz00_4041,BFALSE,BFALSE);} 
return 
BGl_defaultzd2threadzd2backendzd2setz12zc0zz__threadz00(BgL_auxz00_4037);} } 
}



/* get-thread-backend */
BGL_EXPORTED_DEF obj_t BGl_getzd2threadzd2backendz00zz__threadz00(obj_t BgL_namez00_4)
{ AN_OBJECT;
{ /* Llib/thread.scm 271 */
{ 
obj_t BgL_tbsz00_890;
BgL_tbsz00_890 = BGl_za2threadzd2backendsza2zd2zz__threadz00; 
BgL_zc3anonymousza32041ze3z83_891:
if(
PAIRP(BgL_tbsz00_890))
{ /* Llib/thread.scm 274 */
bool_t BgL_testz00_4048;
{ /* Llib/thread.scm 274 */
obj_t BgL_arg2045z00_895;
{ /* Llib/thread.scm 274 */
BgL_threadzd2backendzd2_bglt BgL_obj1756z00_1758;
{ /* Llib/thread.scm 274 */
obj_t BgL_aux2652z00_3102;
BgL_aux2652z00_3102 = 
CAR(BgL_tbsz00_890); 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2652z00_3102, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 274 */
BgL_obj1756z00_1758 = 
(BgL_threadzd2backendzd2_bglt)(BgL_aux2652z00_3102); }  else 
{ 
obj_t BgL_auxz00_4053;
BgL_auxz00_4053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10707)), BGl_string3081z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_aux2652z00_3102); 
FAILURE(BgL_auxz00_4053,BFALSE,BFALSE);} } 
BgL_arg2045z00_895 = 
(((BgL_threadzd2backendzd2_bglt)CREF(BgL_obj1756z00_1758))->BgL_namez00); } 
BgL_testz00_4048 = 
bigloo_strcmp(BgL_arg2045z00_895, BgL_namez00_4); } 
if(BgL_testz00_4048)
{ /* Llib/thread.scm 274 */
return 
CAR(BgL_tbsz00_890);}  else 
{ 
obj_t BgL_tbsz00_4060;
BgL_tbsz00_4060 = 
CDR(BgL_tbsz00_890); 
BgL_tbsz00_890 = BgL_tbsz00_4060; 
goto BgL_zc3anonymousza32041ze3z83_891;} }  else 
{ /* Llib/thread.scm 273 */
return BFALSE;} } } 
}



/* _get-thread-backend */
obj_t BGl__getzd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2798, obj_t BgL_namez00_2799)
{ AN_OBJECT;
{ /* Llib/thread.scm 271 */
{ /* Llib/thread.scm 273 */
obj_t BgL_auxz00_4062;
if(
STRINGP(BgL_namez00_2799))
{ /* Llib/thread.scm 273 */
BgL_auxz00_4062 = BgL_namez00_2799
; }  else 
{ 
obj_t BgL_auxz00_4065;
BgL_auxz00_4065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10652)), BGl_string3082z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_namez00_2799); 
FAILURE(BgL_auxz00_4065,BFALSE,BFALSE);} 
return 
BGl_getzd2threadzd2backendz00zz__threadz00(BgL_auxz00_4062);} } 
}



/* _make-thread */
obj_t BGl__makezd2threadzd2zz__threadz00(obj_t BgL_envz00_53, obj_t BgL_optz00_52)
{ AN_OBJECT;
{ /* Llib/thread.scm 380 */
{ /* Llib/thread.scm 380 */
obj_t BgL_g1979z00_3555;
BgL_g1979z00_3555 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
{ 

{ /* Llib/thread.scm 380 */
int BgL_aux1981z00_3559;
BgL_aux1981z00_3559 = 
VECTOR_LENGTH(BgL_optz00_52); 
switch( 
(long)(BgL_aux1981z00_3559)) { case ((long)1) : 

{ /* Llib/thread.scm 380 */
obj_t BgL_namez00_3560;
BgL_namez00_3560 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3087z00zz__threadz00); 
{ /* Llib/thread.scm 380 */

{ /* Llib/thread.scm 380 */
obj_t BgL_arg2048z00_3561;
BgL_arg2048z00_3561 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
{ /* Llib/thread.scm 380 */
BgL_threadz00_bglt BgL_res2558z00_3562;
{ /* Llib/thread.scm 380 */
obj_t BgL_bodyz00_3563;
if(
PROCEDUREP(BgL_arg2048z00_3561))
{ /* Llib/thread.scm 380 */
BgL_bodyz00_3563 = BgL_arg2048z00_3561; }  else 
{ 
obj_t BgL_auxz00_4078;
BgL_auxz00_4078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16199)), BGl_string3089z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_arg2048z00_3561); 
FAILURE(BgL_auxz00_4078,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 380 */
obj_t BgL_arg2055z00_3564;
BgL_arg2055z00_3564 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 380 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4083;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2055z00_3564, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 380 */
BgL_auxz00_4083 = 
(BgL_threadzd2backendzd2_bglt)(BgL_arg2055z00_3564)
; }  else 
{ 
obj_t BgL_auxz00_4087;
BgL_auxz00_4087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16199)), BGl_string3089z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_arg2055z00_3564); 
FAILURE(BgL_auxz00_4087,BFALSE,BFALSE);} 
BgL_res2558z00_3562 = 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4083, BgL_bodyz00_3563, BgL_namez00_3560); } } } 
return 
(obj_t)(BgL_res2558z00_3562);} } } } break;case ((long)2) : 

{ /* Llib/thread.scm 380 */
obj_t BgL_namez00_3565;
BgL_namez00_3565 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)1))); 
{ /* Llib/thread.scm 380 */

{ /* Llib/thread.scm 380 */
obj_t BgL_arg2051z00_3566;
BgL_arg2051z00_3566 = 
VECTOR_REF(BgL_optz00_52,
(int)(((long)0))); 
{ /* Llib/thread.scm 380 */
BgL_threadz00_bglt BgL_res2559z00_3567;
{ /* Llib/thread.scm 380 */
obj_t BgL_bodyz00_3568;
if(
PROCEDUREP(BgL_arg2051z00_3566))
{ /* Llib/thread.scm 380 */
BgL_bodyz00_3568 = BgL_arg2051z00_3566; }  else 
{ 
obj_t BgL_auxz00_4099;
BgL_auxz00_4099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16199)), BGl_string3089z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_arg2051z00_3566); 
FAILURE(BgL_auxz00_4099,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 380 */
obj_t BgL_arg2055z00_3569;
BgL_arg2055z00_3569 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 380 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4104;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2055z00_3569, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 380 */
BgL_auxz00_4104 = 
(BgL_threadzd2backendzd2_bglt)(BgL_arg2055z00_3569)
; }  else 
{ 
obj_t BgL_auxz00_4108;
BgL_auxz00_4108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16199)), BGl_string3089z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_arg2055z00_3569); 
FAILURE(BgL_auxz00_4108,BFALSE,BFALSE);} 
BgL_res2559z00_3567 = 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4104, BgL_bodyz00_3568, BgL_namez00_3565); } } } 
return 
(obj_t)(BgL_res2559z00_3567);} } } } break;
default: 
{ /* Llib/thread.scm 380 */
obj_t BgL_arg2052z00_3557;int BgL_arg2054z00_3558;
BgL_arg2052z00_3557 = BGl_symbol3084z00zz__threadz00; 
BgL_arg2054z00_3558 = 
VECTOR_LENGTH(BgL_optz00_52); 
return 
BGl_errorz00zz__errorz00(BgL_arg2052z00_3557, BGl_string3086z00zz__threadz00, 
BINT(BgL_arg2054z00_3558));} } } } } } 
}



/* make-thread */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_makezd2threadzd2zz__threadz00(obj_t BgL_bodyz00_50, obj_t BgL_namez00_51)
{ AN_OBJECT;
{ /* Llib/thread.scm 380 */
{ /* Llib/thread.scm 381 */
obj_t BgL_arg2055z00_3572;
BgL_arg2055z00_3572 = 
BGl_defaultzd2threadzd2backendz00zz__threadz00(); 
{ /* Llib/thread.scm 381 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_4120;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2055z00_3572, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 381 */
BgL_auxz00_4120 = 
(BgL_threadzd2backendzd2_bglt)(BgL_arg2055z00_3572)
; }  else 
{ 
obj_t BgL_auxz00_4124;
BgL_auxz00_4124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16287)), BGl_string3085z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_arg2055z00_3572); 
FAILURE(BgL_auxz00_4124,BFALSE,BFALSE);} 
return 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_4120, BgL_bodyz00_50, BgL_namez00_51);} } } 
}



/* %current-thread */
obj_t BGl_z52currentzd2threadz80zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 392 */
{ /* Llib/thread.scm 393 */
obj_t BgL_tbz00_910;
BgL_tbz00_910 = 
BGL_THREAD_BACKEND(); 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_910, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 395 */
BgL_threadzd2backendzd2_bglt BgL_tbz00_1784;
BgL_tbz00_1784 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_910); 
{ /* Llib/thread.scm 395 */
obj_t BgL_method1949z00_1785;
{ /* Llib/thread.scm 395 */
BgL_objectz00_bglt BgL_objz00_1786;
BgL_objz00_1786 = 
(BgL_objectz00_bglt)(BgL_tbz00_1784); 
{ /* Llib/thread.scm 395 */
long BgL_objzd2classzd2numz00_1787;
BgL_objzd2classzd2numz00_1787 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_1786); 
{ /* Llib/thread.scm 395 */
obj_t BgL_arg2549z00_1788;
BgL_arg2549z00_1788 = 
PROCEDURE_REF(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 395 */
obj_t BgL_arrayz00_1790;int BgL_offsetz00_1791;
if(
VECTORP(BgL_arg2549z00_1788))
{ /* Llib/thread.scm 395 */
BgL_arrayz00_1790 = BgL_arg2549z00_1788; }  else 
{ 
obj_t BgL_auxz00_4139;
BgL_auxz00_4139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16927)), BGl_string3091z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_1788); 
FAILURE(BgL_auxz00_4139,BFALSE,BFALSE);} 
BgL_offsetz00_1791 = 
(int)(BgL_objzd2classzd2numz00_1787); 
{ /* Llib/thread.scm 395 */
long BgL_offsetz00_1792;
BgL_offsetz00_1792 = 
(
(long)(BgL_offsetz00_1791)-OBJECT_TYPE); 
{ /* Llib/thread.scm 395 */
long BgL_modz00_1793;
{ /* Llib/thread.scm 395 */
int BgL_arg2551z00_1794;
BgL_arg2551z00_1794 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 395 */
long BgL_auxz00_4147;
BgL_auxz00_4147 = 
(long)(BgL_arg2551z00_1794); 
BgL_modz00_1793 = 
(BgL_offsetz00_1792/BgL_auxz00_4147); } } 
{ /* Llib/thread.scm 395 */
long BgL_restz00_1795;
{ /* Llib/thread.scm 395 */
int BgL_arg2550z00_1796;
BgL_arg2550z00_1796 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 395 */
long BgL_auxz00_4151;
BgL_auxz00_4151 = 
(long)(BgL_arg2550z00_1796); 
BgL_restz00_1795 = 
(BgL_offsetz00_1792%BgL_auxz00_4151); } } 
{ /* Llib/thread.scm 395 */

{ /* Llib/thread.scm 395 */
obj_t BgL_bucketz00_1797;
BgL_bucketz00_1797 = 
VECTOR_REF(BgL_arrayz00_1790,
(int)(BgL_modz00_1793)); 
{ /* Llib/thread.scm 395 */
obj_t BgL_vectorz00_1808;int BgL_kz00_1809;
if(
VECTORP(BgL_bucketz00_1797))
{ /* Llib/thread.scm 395 */
BgL_vectorz00_1808 = BgL_bucketz00_1797; }  else 
{ 
obj_t BgL_auxz00_4158;
BgL_auxz00_4158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16927)), BGl_string3091z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_1797); 
FAILURE(BgL_auxz00_4158,BFALSE,BFALSE);} 
BgL_kz00_1809 = 
(int)(BgL_restz00_1795); 
{ /* Llib/thread.scm 395 */
obj_t BgL_aux2670z00_3120;
BgL_aux2670z00_3120 = 
VECTOR_REF(BgL_vectorz00_1808,BgL_kz00_1809); 
if(
PROCEDUREP(BgL_aux2670z00_3120))
{ /* Llib/thread.scm 395 */
BgL_method1949z00_1785 = BgL_aux2670z00_3120; }  else 
{ 
obj_t BgL_auxz00_4166;
BgL_auxz00_4166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16927)), BGl_string3091z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2670z00_3120); 
FAILURE(BgL_auxz00_4166,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1949z00_1785, ((long)1)))
{ /* Llib/thread.scm 395 */
return 
PROCEDURE_ENTRY(BgL_method1949z00_1785)(BgL_method1949z00_1785, 
(obj_t)(BgL_tbz00_1784), BEOA);}  else 
{ /* Llib/thread.scm 395 */
FAILURE(BGl_string3093z00zz__threadz00,BGl_list3094z00zz__threadz00,BgL_method1949z00_1785);} } }  else 
{ /* Llib/thread.scm 394 */
return BFALSE;} } } 
}



/* current-thread */
BGL_EXPORTED_DEF obj_t BGl_currentzd2threadzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 400 */
{ /* Llib/thread.scm 401 */
obj_t BgL_thz00_912;
BgL_thz00_912 = 
BGl_z52currentzd2threadz80zz__threadz00(); 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_912, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 403 */
BgL_threadz00_bglt BgL_oz00_1811;
BgL_oz00_1811 = 
(BgL_threadz00_bglt)(BgL_thz00_912); 
{ /* Llib/thread.scm 403 */
obj_t BgL_method1983z00_1812;
{ /* Llib/thread.scm 403 */
BgL_objectz00_bglt BgL_objz00_1813;
BgL_objz00_1813 = 
(BgL_objectz00_bglt)(BgL_oz00_1811); 
{ /* Llib/thread.scm 403 */
long BgL_objzd2classzd2numz00_1814;
BgL_objzd2classzd2numz00_1814 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_1813); 
{ /* Llib/thread.scm 403 */
obj_t BgL_arg2549z00_1815;
BgL_arg2549z00_1815 = 
PROCEDURE_REF(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 403 */
obj_t BgL_arrayz00_1817;int BgL_offsetz00_1818;
if(
VECTORP(BgL_arg2549z00_1815))
{ /* Llib/thread.scm 403 */
BgL_arrayz00_1817 = BgL_arg2549z00_1815; }  else 
{ 
obj_t BgL_auxz00_4186;
BgL_auxz00_4186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17261)), BGl_string3101z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_1815); 
FAILURE(BgL_auxz00_4186,BFALSE,BFALSE);} 
BgL_offsetz00_1818 = 
(int)(BgL_objzd2classzd2numz00_1814); 
{ /* Llib/thread.scm 403 */
long BgL_offsetz00_1819;
BgL_offsetz00_1819 = 
(
(long)(BgL_offsetz00_1818)-OBJECT_TYPE); 
{ /* Llib/thread.scm 403 */
long BgL_modz00_1820;
{ /* Llib/thread.scm 403 */
int BgL_arg2551z00_1821;
BgL_arg2551z00_1821 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 403 */
long BgL_auxz00_4194;
BgL_auxz00_4194 = 
(long)(BgL_arg2551z00_1821); 
BgL_modz00_1820 = 
(BgL_offsetz00_1819/BgL_auxz00_4194); } } 
{ /* Llib/thread.scm 403 */
long BgL_restz00_1822;
{ /* Llib/thread.scm 403 */
int BgL_arg2550z00_1823;
BgL_arg2550z00_1823 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 403 */
long BgL_auxz00_4198;
BgL_auxz00_4198 = 
(long)(BgL_arg2550z00_1823); 
BgL_restz00_1822 = 
(BgL_offsetz00_1819%BgL_auxz00_4198); } } 
{ /* Llib/thread.scm 403 */

{ /* Llib/thread.scm 403 */
obj_t BgL_bucketz00_1824;
BgL_bucketz00_1824 = 
VECTOR_REF(BgL_arrayz00_1817,
(int)(BgL_modz00_1820)); 
{ /* Llib/thread.scm 403 */
obj_t BgL_vectorz00_1835;int BgL_kz00_1836;
if(
VECTORP(BgL_bucketz00_1824))
{ /* Llib/thread.scm 403 */
BgL_vectorz00_1835 = BgL_bucketz00_1824; }  else 
{ 
obj_t BgL_auxz00_4205;
BgL_auxz00_4205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17261)), BGl_string3101z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_1824); 
FAILURE(BgL_auxz00_4205,BFALSE,BFALSE);} 
BgL_kz00_1836 = 
(int)(BgL_restz00_1822); 
{ /* Llib/thread.scm 403 */
obj_t BgL_aux2678z00_3129;
BgL_aux2678z00_3129 = 
VECTOR_REF(BgL_vectorz00_1835,BgL_kz00_1836); 
if(
PROCEDUREP(BgL_aux2678z00_3129))
{ /* Llib/thread.scm 403 */
BgL_method1983z00_1812 = BgL_aux2678z00_3129; }  else 
{ 
obj_t BgL_auxz00_4213;
BgL_auxz00_4213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17261)), BGl_string3101z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2678z00_3129); 
FAILURE(BgL_auxz00_4213,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1983z00_1812, ((long)1)))
{ /* Llib/thread.scm 403 */
return 
PROCEDURE_ENTRY(BgL_method1983z00_1812)(BgL_method1983z00_1812, 
(obj_t)(BgL_oz00_1811), BEOA);}  else 
{ /* Llib/thread.scm 403 */
FAILURE(BGl_string3102z00zz__threadz00,BGl_list3103z00zz__threadz00,BgL_method1983z00_1812);} } }  else 
{ /* Llib/thread.scm 402 */
return BFALSE;} } } 
}



/* _current-thread */
obj_t BGl__currentzd2threadzd2zz__threadz00(obj_t BgL_envz00_2802)
{ AN_OBJECT;
{ /* Llib/thread.scm 400 */
return 
BGl_currentzd2threadzd2zz__threadz00();} 
}



/* thread-sleep! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2sleepz12zc0zz__threadz00(obj_t BgL_objz00_60)
{ AN_OBJECT;
{ /* Llib/thread.scm 429 */
{ /* Llib/thread.scm 430 */
obj_t BgL_arg2058z00_3574;
BgL_arg2058z00_3574 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 430 */
BgL_threadz00_bglt BgL_auxz00_4225;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2058z00_3574, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 430 */
BgL_auxz00_4225 = 
(BgL_threadz00_bglt)(BgL_arg2058z00_3574)
; }  else 
{ 
obj_t BgL_auxz00_4229;
BgL_auxz00_4229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18321)), BGl_string3108z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_arg2058z00_3574); 
FAILURE(BgL_auxz00_4229,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_4225, BgL_objz00_60);} } } 
}



/* _thread-sleep! */
obj_t BGl__threadzd2sleepz12zc0zz__threadz00(obj_t BgL_envz00_2805, obj_t BgL_objz00_2806)
{ AN_OBJECT;
{ /* Llib/thread.scm 429 */
{ /* Llib/thread.scm 430 */
obj_t BgL_arg2058z00_3577;
BgL_arg2058z00_3577 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 430 */
BgL_threadz00_bglt BgL_auxz00_4235;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2058z00_3577, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 430 */
BgL_auxz00_4235 = 
(BgL_threadz00_bglt)(BgL_arg2058z00_3577)
; }  else 
{ 
obj_t BgL_auxz00_4239;
BgL_auxz00_4239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18321)), BGl_string3108z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_arg2058z00_3577); 
FAILURE(BgL_auxz00_4239,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_4235, BgL_objz00_2806);} } } 
}



/* thread-yield! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2yieldz12zc0zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 441 */
{ /* Llib/thread.scm 442 */
obj_t BgL_arg2059z00_3579;
BgL_arg2059z00_3579 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 442 */
BgL_threadz00_bglt BgL_auxz00_4245;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2059z00_3579, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 442 */
BgL_auxz00_4245 = 
(BgL_threadz00_bglt)(BgL_arg2059z00_3579)
; }  else 
{ 
obj_t BgL_auxz00_4249;
BgL_auxz00_4249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18912)), BGl_string3109z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_arg2059z00_3579); 
FAILURE(BgL_auxz00_4249,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_4245);} } } 
}



/* _thread-yield! */
obj_t BGl__threadzd2yieldz12zc0zz__threadz00(obj_t BgL_envz00_2807)
{ AN_OBJECT;
{ /* Llib/thread.scm 441 */
{ /* Llib/thread.scm 442 */
obj_t BgL_arg2059z00_3581;
BgL_arg2059z00_3581 = 
BGl_currentzd2threadzd2zz__threadz00(); 
{ /* Llib/thread.scm 442 */
BgL_threadz00_bglt BgL_auxz00_4255;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_arg2059z00_3581, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 442 */
BgL_auxz00_4255 = 
(BgL_threadz00_bglt)(BgL_arg2059z00_3581)
; }  else 
{ 
obj_t BgL_auxz00_4259;
BgL_auxz00_4259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18912)), BGl_string3109z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_arg2059z00_3581); 
FAILURE(BgL_auxz00_4259,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_4255);} } } 
}



/* thread-parameter */
BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2zz__threadz00(obj_t BgL_idz00_63)
{ AN_OBJECT;
{ /* Llib/thread.scm 447 */
{ /* Llib/thread.scm 448 */
obj_t BgL_cz00_1839;
{ /* Llib/thread.scm 448 */
obj_t BgL_arg2061z00_1840;
BgL_arg2061z00_1840 = 
BGL_PARAMETERS(); 
{ /* Llib/thread.scm 448 */
obj_t BgL_auxz00_4265;
{ /* Llib/thread.scm 448 */
bool_t BgL_testz00_4266;
if(
PAIRP(BgL_arg2061z00_1840))
{ /* Llib/thread.scm 448 */
BgL_testz00_4266 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 448 */
BgL_testz00_4266 = 
NULLP(BgL_arg2061z00_1840)
; } 
if(BgL_testz00_4266)
{ /* Llib/thread.scm 448 */
BgL_auxz00_4265 = BgL_arg2061z00_1840
; }  else 
{ 
obj_t BgL_auxz00_4270;
BgL_auxz00_4270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)19208)), BGl_string3110z00zz__threadz00, BGl_string3079z00zz__threadz00, BgL_arg2061z00_1840); 
FAILURE(BgL_auxz00_4270,BFALSE,BFALSE);} } 
BgL_cz00_1839 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_63, BgL_auxz00_4265); } } 
if(
PAIRP(BgL_cz00_1839))
{ /* Llib/thread.scm 448 */
return 
CDR(BgL_cz00_1839);}  else 
{ /* Llib/thread.scm 448 */
return BFALSE;} } } 
}



/* _thread-parameter */
obj_t BGl__threadzd2parameterzd2zz__threadz00(obj_t BgL_envz00_2808, obj_t BgL_idz00_2809)
{ AN_OBJECT;
{ /* Llib/thread.scm 447 */
{ /* Llib/thread.scm 448 */
obj_t BgL_auxz00_4278;
if(
SYMBOLP(BgL_idz00_2809))
{ /* Llib/thread.scm 448 */
BgL_auxz00_4278 = BgL_idz00_2809
; }  else 
{ 
obj_t BgL_auxz00_4281;
BgL_auxz00_4281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)19208)), BGl_string3111z00zz__threadz00, BGl_string3112z00zz__threadz00, BgL_idz00_2809); 
FAILURE(BgL_auxz00_4281,BFALSE,BFALSE);} 
return 
BGl_threadzd2parameterzd2zz__threadz00(BgL_auxz00_4278);} } 
}



/* thread-parameter-set! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2parameterzd2setz12z12zz__threadz00(obj_t BgL_idz00_64, obj_t BgL_valz00_65)
{ AN_OBJECT;
{ /* Llib/thread.scm 456 */
{ /* Llib/thread.scm 457 */
obj_t BgL_cz00_919;
{ /* Llib/thread.scm 457 */
obj_t BgL_arg2066z00_924;
BgL_arg2066z00_924 = 
BGL_PARAMETERS(); 
{ /* Llib/thread.scm 457 */
obj_t BgL_auxz00_4287;
{ /* Llib/thread.scm 457 */
bool_t BgL_testz00_4288;
if(
PAIRP(BgL_arg2066z00_924))
{ /* Llib/thread.scm 457 */
BgL_testz00_4288 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 457 */
BgL_testz00_4288 = 
NULLP(BgL_arg2066z00_924)
; } 
if(BgL_testz00_4288)
{ /* Llib/thread.scm 457 */
BgL_auxz00_4287 = BgL_arg2066z00_924
; }  else 
{ 
obj_t BgL_auxz00_4292;
BgL_auxz00_4292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)19574)), BGl_string3113z00zz__threadz00, BGl_string3079z00zz__threadz00, BgL_arg2066z00_924); 
FAILURE(BgL_auxz00_4292,BFALSE,BFALSE);} } 
BgL_cz00_919 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_64, BgL_auxz00_4287); } } 
if(
PAIRP(BgL_cz00_919))
{ /* Llib/thread.scm 458 */
return 
SET_CDR(BgL_cz00_919, BgL_valz00_65);}  else 
{ /* Llib/thread.scm 458 */
{ /* Llib/thread.scm 461 */
obj_t BgL_arg2063z00_921;
{ /* Llib/thread.scm 461 */
obj_t BgL_arg2064z00_922;obj_t BgL_arg2065z00_923;
BgL_arg2064z00_922 = 
MAKE_PAIR(BgL_idz00_64, BgL_valz00_65); 
BgL_arg2065z00_923 = 
BGL_PARAMETERS(); 
BgL_arg2063z00_921 = 
MAKE_PAIR(BgL_arg2064z00_922, BgL_arg2065z00_923); } 
BGL_PARAMETERS_SET(BgL_arg2063z00_921); } 
return BgL_valz00_65;} } } 
}



/* _thread-parameter-set! */
obj_t BGl__threadzd2parameterzd2setz12z12zz__threadz00(obj_t BgL_envz00_2810, obj_t BgL_idz00_2811, obj_t BgL_valz00_2812)
{ AN_OBJECT;
{ /* Llib/thread.scm 456 */
{ /* Llib/thread.scm 457 */
obj_t BgL_auxz00_4304;
if(
SYMBOLP(BgL_idz00_2811))
{ /* Llib/thread.scm 457 */
BgL_auxz00_4304 = BgL_idz00_2811
; }  else 
{ 
obj_t BgL_auxz00_4307;
BgL_auxz00_4307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)19537)), BGl_string3114z00zz__threadz00, BGl_string3112z00zz__threadz00, BgL_idz00_2811); 
FAILURE(BgL_auxz00_4307,BFALSE,BFALSE);} 
return 
BGl_threadzd2parameterzd2setz12z12zz__threadz00(BgL_auxz00_4304, BgL_valz00_2812);} } 
}



/* mutex? */
BGL_EXPORTED_DEF bool_t BGl_mutexzf3zf3zz__threadz00(obj_t BgL_objz00_78)
{ AN_OBJECT;
{ /* Llib/thread.scm 531 */
return 
BGL_MUTEXP(BgL_objz00_78);} 
}



/* _mutex? */
obj_t BGl__mutexzf3zf3zz__threadz00(obj_t BgL_envz00_2813, obj_t BgL_objz00_2814)
{ AN_OBJECT;
{ /* Llib/thread.scm 531 */
return 
BBOOL(
BGL_MUTEXP(BgL_objz00_2814));} 
}



/* _make-mutex */
obj_t BGl__makezd2mutexzd2zz__threadz00(obj_t BgL_envz00_81, obj_t BgL_optz00_80)
{ AN_OBJECT;
{ /* Llib/thread.scm 537 */
{ /* Llib/thread.scm 537 */

{ 

{ /* Llib/thread.scm 537 */
int BgL_aux2005z00_3597;
BgL_aux2005z00_3597 = 
VECTOR_LENGTH(BgL_optz00_80); 
switch( 
(long)(BgL_aux2005z00_3597)) { case ((long)0) : 

{ /* Llib/thread.scm 537 */
obj_t BgL_namez00_3598;
BgL_namez00_3598 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3118z00zz__threadz00); 
{ /* Llib/thread.scm 537 */

return 
bgl_make_mutex(BgL_namez00_3598);} } break;case ((long)1) : 

{ /* Llib/thread.scm 537 */
obj_t BgL_namez00_3599;
BgL_namez00_3599 = 
VECTOR_REF(BgL_optz00_80,
(int)(((long)0))); 
{ /* Llib/thread.scm 537 */

return 
bgl_make_mutex(BgL_namez00_3599);} } break;
default: 
{ /* Llib/thread.scm 537 */
obj_t BgL_arg2068z00_3595;int BgL_arg2070z00_3596;
BgL_arg2068z00_3595 = BGl_symbol3115z00zz__threadz00; 
BgL_arg2070z00_3596 = 
VECTOR_LENGTH(BgL_optz00_80); 
return 
BGl_errorz00zz__errorz00(BgL_arg2068z00_3595, BGl_string3117z00zz__threadz00, 
BINT(BgL_arg2070z00_3596));} } } } } } 
}



/* make-mutex */
BGL_EXPORTED_DEF obj_t BGl_makezd2mutexzd2zz__threadz00(obj_t BgL_namez00_79)
{ AN_OBJECT;
{ /* Llib/thread.scm 537 */
return 
bgl_make_mutex(BgL_namez00_79);} 
}



/* mutex-nil */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2nilzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 544 */
return BGl_za2mutexzd2nilza2zd2zz__threadz00;} 
}



/* _mutex-nil */
obj_t BGl__mutexzd2nilzd2zz__threadz00(obj_t BgL_envz00_2815)
{ AN_OBJECT;
{ /* Llib/thread.scm 544 */
return BGl_za2mutexzd2nilza2zd2zz__threadz00;} 
}



/* mutex-name */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2namezd2zz__threadz00(obj_t BgL_objz00_82)
{ AN_OBJECT;
{ /* Llib/thread.scm 549 */
return 
BGL_MUTEX_NAME(BgL_objz00_82);} 
}



/* _mutex-name */
obj_t BGl__mutexzd2namezd2zz__threadz00(obj_t BgL_envz00_2816, obj_t BgL_objz00_2817)
{ AN_OBJECT;
{ /* Llib/thread.scm 549 */
{ /* Llib/thread.scm 550 */
obj_t BgL_objz00_3600;
if(
BGL_MUTEXP(BgL_objz00_2817))
{ /* Llib/thread.scm 550 */
BgL_objz00_3600 = BgL_objz00_2817; }  else 
{ 
obj_t BgL_auxz00_4330;
BgL_auxz00_4330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)23759)), BGl_string3120z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_objz00_2817); 
FAILURE(BgL_auxz00_4330,BFALSE,BFALSE);} 
return 
BGL_MUTEX_NAME(BgL_objz00_3600);} } 
}



/* _mutex-lock! */
obj_t BGl__mutexzd2lockz12zc0zz__threadz00(obj_t BgL_envz00_86, obj_t BgL_optz00_85)
{ AN_OBJECT;
{ /* Llib/thread.scm 555 */
{ /* Llib/thread.scm 555 */
obj_t BgL_g2006z00_3601;
BgL_g2006z00_3601 = 
VECTOR_REF(BgL_optz00_85,
(int)(((long)0))); 
{ 

{ /* Llib/thread.scm 555 */
int BgL_aux2008z00_3605;
BgL_aux2008z00_3605 = 
VECTOR_LENGTH(BgL_optz00_85); 
switch( 
(long)(BgL_aux2008z00_3605)) { case ((long)1) : 

{ /* Llib/thread.scm 555 */

{ /* Llib/thread.scm 555 */
obj_t BgL_arg2072z00_3606;
BgL_arg2072z00_3606 = 
VECTOR_REF(BgL_optz00_85,
(int)(((long)0))); 
{ /* Llib/thread.scm 555 */
obj_t BgL_mz00_3607;
if(
BGL_MUTEXP(BgL_arg2072z00_3606))
{ /* Llib/thread.scm 555 */
BgL_mz00_3607 = BgL_arg2072z00_3606; }  else 
{ 
obj_t BgL_auxz00_4342;
BgL_auxz00_4342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)24001)), BGl_string3123z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_arg2072z00_3606); 
FAILURE(BgL_auxz00_4342,BFALSE,BFALSE);} 
if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 555 */
return 
BBOOL(
bgl_mutex_lock(BgL_mz00_3607));}  else 
{ /* Llib/thread.scm 555 */
return 
BBOOL(
bgl_mutex_timed_lock(BgL_mz00_3607, ((long)0)));} } } } break;case ((long)2) : 

{ /* Llib/thread.scm 555 */
obj_t BgL_timeoutz00_3608;
BgL_timeoutz00_3608 = 
VECTOR_REF(BgL_optz00_85,
(int)(((long)1))); 
{ /* Llib/thread.scm 555 */

{ /* Llib/thread.scm 555 */
obj_t BgL_arg2073z00_3609;
BgL_arg2073z00_3609 = 
VECTOR_REF(BgL_optz00_85,
(int)(((long)0))); 
{ /* Llib/thread.scm 555 */
obj_t BgL_mz00_3610;long BgL_timeoutz00_3611;
if(
BGL_MUTEXP(BgL_arg2073z00_3609))
{ /* Llib/thread.scm 555 */
BgL_mz00_3610 = BgL_arg2073z00_3609; }  else 
{ 
obj_t BgL_auxz00_4358;
BgL_auxz00_4358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)24001)), BGl_string3123z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_arg2073z00_3609); 
FAILURE(BgL_auxz00_4358,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 555 */
obj_t BgL_auxz00_4362;
if(
INTEGERP(BgL_timeoutz00_3608))
{ /* Llib/thread.scm 555 */
BgL_auxz00_4362 = BgL_timeoutz00_3608
; }  else 
{ 
obj_t BgL_auxz00_4365;
BgL_auxz00_4365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)24001)), BGl_string3123z00zz__threadz00, BGl_string3124z00zz__threadz00, BgL_timeoutz00_3608); 
FAILURE(BgL_auxz00_4365,BFALSE,BFALSE);} 
BgL_timeoutz00_3611 = 
(long)CINT(BgL_auxz00_4362); } 
if(
(BgL_timeoutz00_3611==((long)0)))
{ /* Llib/thread.scm 555 */
return 
BBOOL(
bgl_mutex_lock(BgL_mz00_3610));}  else 
{ /* Llib/thread.scm 555 */
return 
BBOOL(
bgl_mutex_timed_lock(BgL_mz00_3610, BgL_timeoutz00_3611));} } } } } break;
default: 
{ /* Llib/thread.scm 555 */
obj_t BgL_arg2076z00_3603;int BgL_arg2078z00_3604;
BgL_arg2076z00_3603 = BGl_symbol3121z00zz__threadz00; 
BgL_arg2078z00_3604 = 
VECTOR_LENGTH(BgL_optz00_85); 
return 
BGl_errorz00zz__errorz00(BgL_arg2076z00_3603, BGl_string3086z00zz__threadz00, 
BINT(BgL_arg2078z00_3604));} } } } } } 
}



/* mutex-lock! */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2lockz12zc0zz__threadz00(obj_t BgL_mz00_83, long BgL_timeoutz00_84)
{ AN_OBJECT;
{ /* Llib/thread.scm 555 */
if(
(BgL_timeoutz00_84==((long)0)))
{ /* Llib/thread.scm 556 */
return 
BBOOL(
bgl_mutex_lock(BgL_mz00_83));}  else 
{ /* Llib/thread.scm 556 */
return 
BBOOL(
bgl_mutex_timed_lock(BgL_mz00_83, BgL_timeoutz00_84));} } 
}



/* mutex-unlock! */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2unlockz12zc0zz__threadz00(obj_t BgL_mz00_87)
{ AN_OBJECT;
{ /* Llib/thread.scm 563 */
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_87));} 
}



/* _mutex-unlock! */
obj_t BGl__mutexzd2unlockz12zc0zz__threadz00(obj_t BgL_envz00_2818, obj_t BgL_mz00_2819)
{ AN_OBJECT;
{ /* Llib/thread.scm 563 */
{ /* Llib/thread.scm 564 */
obj_t BgL_mz00_3612;
if(
BGL_MUTEXP(BgL_mz00_2819))
{ /* Llib/thread.scm 564 */
BgL_mz00_3612 = BgL_mz00_2819; }  else 
{ 
obj_t BgL_auxz00_4391;
BgL_auxz00_4391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)24405)), BGl_string3125z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_mz00_2819); 
FAILURE(BgL_auxz00_4391,BFALSE,BFALSE);} 
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_3612));} } 
}



/* mutex-state */
BGL_EXPORTED_DEF obj_t BGl_mutexzd2statezd2zz__threadz00(obj_t BgL_mutexz00_88)
{ AN_OBJECT;
{ /* Llib/thread.scm 569 */
return 
bgl_mutex_state(BgL_mutexz00_88);} 
}



/* _mutex-state */
obj_t BGl__mutexzd2statezd2zz__threadz00(obj_t BgL_envz00_2820, obj_t BgL_mutexz00_2821)
{ AN_OBJECT;
{ /* Llib/thread.scm 569 */
{ /* Llib/thread.scm 570 */
obj_t BgL_mutexz00_3613;
if(
BGL_MUTEXP(BgL_mutexz00_2821))
{ /* Llib/thread.scm 570 */
BgL_mutexz00_3613 = BgL_mutexz00_2821; }  else 
{ 
obj_t BgL_auxz00_4400;
BgL_auxz00_4400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)24685)), BGl_string3126z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_mutexz00_2821); 
FAILURE(BgL_auxz00_4400,BFALSE,BFALSE);} 
return 
bgl_mutex_state(BgL_mutexz00_3613);} } 
}



/* with-lock */
BGL_EXPORTED_DEF obj_t BGl_withzd2lockzd2zz__threadz00(obj_t BgL_mutexz00_89, obj_t BgL_thunkz00_90)
{ AN_OBJECT;
{ /* Llib/thread.scm 575 */
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_mutexz00_89); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_mutexz00_89, ((long)0)); } } 
{ /* Llib/thread.scm 577 */
obj_t BgL_val1913z00_947;
BgL_val1913z00_947 = 
BGl_zc3exitza32083ze3z83zz__threadz00(BgL_thunkz00_90); 
bgl_mutex_unlock(BgL_mutexz00_89); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1913z00_947)))
{ /* Llib/thread.scm 579 */
obj_t BgL_arg2081z00_949;obj_t BgL_arg2082z00_950;
{ /* Llib/thread.scm 579 */
obj_t BgL_pairz00_1887;
if(
PAIRP(BgL_val1913z00_947))
{ /* Llib/thread.scm 579 */
BgL_pairz00_1887 = BgL_val1913z00_947; }  else 
{ 
obj_t BgL_auxz00_4416;
BgL_auxz00_4416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)25024)), BGl_string3127z00zz__threadz00, BGl_string3077z00zz__threadz00, BgL_val1913z00_947); 
FAILURE(BgL_auxz00_4416,BFALSE,BFALSE);} 
BgL_arg2081z00_949 = 
CAR(BgL_pairz00_1887); } 
BgL_arg2082z00_950 = 
CDR(BgL_val1913z00_947); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2081z00_949, BgL_arg2082z00_950);}  else 
{ /* Llib/thread.scm 579 */
return BgL_val1913z00_947;} } } 
}



/* <exit:2083> */
obj_t BGl_zc3exitza32083ze3z83zz__threadz00(obj_t BgL_thunkz00_3093)
{ AN_OBJECT;
{ /* Llib/thread.scm 579 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1914z00_952;
if( SET_EXIT(BgL_an_exit1914z00_952) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1914z00_952 = 
(void *)jmpbuf; 
{ /* Llib/thread.scm 579 */

PUSH_EXIT(BgL_an_exit1914z00_952, ((long)0)); 
{ /* Llib/thread.scm 578 */
obj_t BgL_val1915z00_953;
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_3093, ((long)0)))
{ /* Llib/thread.scm 578 */
BgL_val1915z00_953 = 
PROCEDURE_ENTRY(BgL_thunkz00_3093)(BgL_thunkz00_3093, BEOA); }  else 
{ /* Llib/thread.scm 578 */
FAILURE(BGl_string3128z00zz__threadz00,BGl_list3129z00zz__threadz00,BgL_thunkz00_3093);} 
POP_EXIT(); 
return BgL_val1915z00_953;} } 
} } 
}



/* _with-lock */
obj_t BGl__withzd2lockzd2zz__threadz00(obj_t BgL_envz00_2822, obj_t BgL_mutexz00_2823, obj_t BgL_thunkz00_2824)
{ AN_OBJECT;
{ /* Llib/thread.scm 575 */
{ /* Llib/thread.scm 579 */
obj_t BgL_auxz00_4439;obj_t BgL_auxz00_4432;
if(
PROCEDUREP(BgL_thunkz00_2824))
{ /* Llib/thread.scm 579 */
BgL_auxz00_4439 = BgL_thunkz00_2824
; }  else 
{ 
obj_t BgL_auxz00_4442;
BgL_auxz00_4442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)25045)), BGl_string3132z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_thunkz00_2824); 
FAILURE(BgL_auxz00_4442,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_mutexz00_2823))
{ /* Llib/thread.scm 579 */
BgL_auxz00_4432 = BgL_mutexz00_2823
; }  else 
{ 
obj_t BgL_auxz00_4435;
BgL_auxz00_4435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)25045)), BGl_string3132z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_mutexz00_2823); 
FAILURE(BgL_auxz00_4435,BFALSE,BFALSE);} 
return 
BGl_withzd2lockzd2zz__threadz00(BgL_auxz00_4432, BgL_auxz00_4439);} } 
}



/* condition-variable? */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezf3z21zz__threadz00(obj_t BgL_objz00_91)
{ AN_OBJECT;
{ /* Llib/thread.scm 584 */
return 
BGL_CONDVARP(BgL_objz00_91);} 
}



/* _condition-variable? */
obj_t BGl__conditionzd2variablezf3z21zz__threadz00(obj_t BgL_envz00_2825, obj_t BgL_objz00_2826)
{ AN_OBJECT;
{ /* Llib/thread.scm 584 */
return 
BBOOL(
BGL_CONDVARP(BgL_objz00_2826));} 
}



/* _make-condition-variable */
obj_t BGl__makezd2conditionzd2variablez00zz__threadz00(obj_t BgL_envz00_94, obj_t BgL_optz00_93)
{ AN_OBJECT;
{ /* Llib/thread.scm 590 */
{ /* Llib/thread.scm 590 */

{ 

{ /* Llib/thread.scm 590 */
int BgL_aux2010z00_3618;
BgL_aux2010z00_3618 = 
VECTOR_LENGTH(BgL_optz00_93); 
switch( 
(long)(BgL_aux2010z00_3618)) { case ((long)0) : 

{ /* Llib/thread.scm 590 */
obj_t BgL_namez00_3619;
BgL_namez00_3619 = 
BGl_gensymz00zz__r4_symbols_6_4z00(BGl_symbol3135z00zz__threadz00); 
{ /* Llib/thread.scm 590 */

return 
bgl_make_condvar(BgL_namez00_3619);} } break;case ((long)1) : 

{ /* Llib/thread.scm 590 */
obj_t BgL_namez00_3620;
BgL_namez00_3620 = 
VECTOR_REF(BgL_optz00_93,
(int)(((long)0))); 
{ /* Llib/thread.scm 590 */

return 
bgl_make_condvar(BgL_namez00_3620);} } break;
default: 
{ /* Llib/thread.scm 590 */
obj_t BgL_arg2085z00_3616;int BgL_arg2089z00_3617;
BgL_arg2085z00_3616 = BGl_symbol3133z00zz__threadz00; 
BgL_arg2089z00_3617 = 
VECTOR_LENGTH(BgL_optz00_93); 
return 
BGl_errorz00zz__errorz00(BgL_arg2085z00_3616, BGl_string3117z00zz__threadz00, 
BINT(BgL_arg2089z00_3617));} } } } } } 
}



/* make-condition-variable */
BGL_EXPORTED_DEF obj_t BGl_makezd2conditionzd2variablez00zz__threadz00(obj_t BgL_namez00_92)
{ AN_OBJECT;
{ /* Llib/thread.scm 590 */
return 
bgl_make_condvar(BgL_namez00_92);} 
}



/* condition-variable-nil */
BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2nilz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 598 */
return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;} 
}



/* _condition-variable-nil */
obj_t BGl__conditionzd2variablezd2nilz00zz__threadz00(obj_t BgL_envz00_2827)
{ AN_OBJECT;
{ /* Llib/thread.scm 598 */
return BGl_za2conditionzd2variablezd2nilza2z00zz__threadz00;} 
}



/* condition-variable-name */
BGL_EXPORTED_DEF obj_t BGl_conditionzd2variablezd2namez00zz__threadz00(obj_t BgL_objz00_95)
{ AN_OBJECT;
{ /* Llib/thread.scm 603 */
return 
BGL_CONDVAR_NAME(BgL_objz00_95);} 
}



/* _condition-variable-name */
obj_t BGl__conditionzd2variablezd2namez00zz__threadz00(obj_t BgL_envz00_2828, obj_t BgL_objz00_2829)
{ AN_OBJECT;
{ /* Llib/thread.scm 603 */
{ /* Llib/thread.scm 604 */
obj_t BgL_objz00_3621;
if(
BGL_CONDVARP(BgL_objz00_2829))
{ /* Llib/thread.scm 604 */
BgL_objz00_3621 = BgL_objz00_2829; }  else 
{ 
obj_t BgL_auxz00_4465;
BgL_auxz00_4465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26280)), BGl_string3137z00zz__threadz00, BGl_string3138z00zz__threadz00, BgL_objz00_2829); 
FAILURE(BgL_auxz00_4465,BFALSE,BFALSE);} 
return 
BGL_CONDVAR_NAME(BgL_objz00_3621);} } 
}



/* _condition-variable-wait! */
obj_t BGl__conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_envz00_100, obj_t BgL_optz00_99)
{ AN_OBJECT;
{ /* Llib/thread.scm 609 */
{ /* Llib/thread.scm 609 */
obj_t BgL_g2011z00_3622;obj_t BgL_g2012z00_3623;
BgL_g2011z00_3622 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)0))); 
BgL_g2012z00_3623 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)1))); 
{ 

{ /* Llib/thread.scm 609 */
int BgL_aux2014z00_3627;
BgL_aux2014z00_3627 = 
VECTOR_LENGTH(BgL_optz00_99); 
switch( 
(long)(BgL_aux2014z00_3627)) { case ((long)2) : 

{ /* Llib/thread.scm 609 */

{ /* Llib/thread.scm 609 */
obj_t BgL_arg2091z00_3628;obj_t BgL_arg2092z00_3629;
BgL_arg2091z00_3628 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)0))); 
BgL_arg2092z00_3629 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)1))); 
{ /* Llib/thread.scm 609 */
bool_t BgL_res2564z00_3630;
{ /* Llib/thread.scm 609 */
obj_t BgL_cz00_3631;obj_t BgL_mz00_3632;
if(
BGL_CONDVARP(BgL_arg2091z00_3628))
{ /* Llib/thread.scm 609 */
BgL_cz00_3631 = BgL_arg2091z00_3628; }  else 
{ 
obj_t BgL_auxz00_4481;
BgL_auxz00_4481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26524)), BGl_string3142z00zz__threadz00, BGl_string3138z00zz__threadz00, BgL_arg2091z00_3628); 
FAILURE(BgL_auxz00_4481,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_arg2092z00_3629))
{ /* Llib/thread.scm 609 */
BgL_mz00_3632 = BgL_arg2092z00_3629; }  else 
{ 
obj_t BgL_auxz00_4487;
BgL_auxz00_4487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26524)), BGl_string3142z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_arg2092z00_3629); 
FAILURE(BgL_auxz00_4487,BFALSE,BFALSE);} 
if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 609 */
BgL_res2564z00_3630 = 
bgl_condvar_wait(BgL_cz00_3631, BgL_mz00_3632); }  else 
{ /* Llib/thread.scm 609 */
BgL_res2564z00_3630 = 
bgl_condvar_timed_wait(BgL_cz00_3631, BgL_mz00_3632, ((long)0)); } } 
return 
BBOOL(BgL_res2564z00_3630);} } } break;case ((long)3) : 

{ /* Llib/thread.scm 609 */
obj_t BgL_timeoutz00_3633;
BgL_timeoutz00_3633 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)2))); 
{ /* Llib/thread.scm 609 */

{ /* Llib/thread.scm 609 */
obj_t BgL_arg2093z00_3634;obj_t BgL_arg2094z00_3635;
BgL_arg2093z00_3634 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)0))); 
BgL_arg2094z00_3635 = 
VECTOR_REF(BgL_optz00_99,
(int)(((long)1))); 
{ /* Llib/thread.scm 609 */
bool_t BgL_res2565z00_3636;
{ /* Llib/thread.scm 609 */
obj_t BgL_cz00_3637;obj_t BgL_mz00_3638;long BgL_timeoutz00_3639;
if(
BGL_CONDVARP(BgL_arg2093z00_3634))
{ /* Llib/thread.scm 609 */
BgL_cz00_3637 = BgL_arg2093z00_3634; }  else 
{ 
obj_t BgL_auxz00_4504;
BgL_auxz00_4504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26524)), BGl_string3142z00zz__threadz00, BGl_string3138z00zz__threadz00, BgL_arg2093z00_3634); 
FAILURE(BgL_auxz00_4504,BFALSE,BFALSE);} 
if(
BGL_MUTEXP(BgL_arg2094z00_3635))
{ /* Llib/thread.scm 609 */
BgL_mz00_3638 = BgL_arg2094z00_3635; }  else 
{ 
obj_t BgL_auxz00_4510;
BgL_auxz00_4510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26524)), BGl_string3142z00zz__threadz00, BGl_string3119z00zz__threadz00, BgL_arg2094z00_3635); 
FAILURE(BgL_auxz00_4510,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 609 */
obj_t BgL_auxz00_4514;
if(
INTEGERP(BgL_timeoutz00_3633))
{ /* Llib/thread.scm 609 */
BgL_auxz00_4514 = BgL_timeoutz00_3633
; }  else 
{ 
obj_t BgL_auxz00_4517;
BgL_auxz00_4517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26524)), BGl_string3142z00zz__threadz00, BGl_string3124z00zz__threadz00, BgL_timeoutz00_3633); 
FAILURE(BgL_auxz00_4517,BFALSE,BFALSE);} 
BgL_timeoutz00_3639 = 
(long)CINT(BgL_auxz00_4514); } 
if(
(BgL_timeoutz00_3639==((long)0)))
{ /* Llib/thread.scm 609 */
BgL_res2565z00_3636 = 
bgl_condvar_wait(BgL_cz00_3637, BgL_mz00_3638); }  else 
{ /* Llib/thread.scm 609 */
BgL_res2565z00_3636 = 
bgl_condvar_timed_wait(BgL_cz00_3637, BgL_mz00_3638, BgL_timeoutz00_3639); } } 
return 
BBOOL(BgL_res2565z00_3636);} } } } break;
default: 
{ /* Llib/thread.scm 609 */
obj_t BgL_arg2095z00_3625;int BgL_arg2097z00_3626;
BgL_arg2095z00_3625 = BGl_symbol3139z00zz__threadz00; 
BgL_arg2097z00_3626 = 
VECTOR_LENGTH(BgL_optz00_99); 
return 
BGl_errorz00zz__errorz00(BgL_arg2095z00_3625, BGl_string3141z00zz__threadz00, 
BINT(BgL_arg2097z00_3626));} } } } } } 
}



/* condition-variable-wait! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2waitz12z12zz__threadz00(obj_t BgL_cz00_96, obj_t BgL_mz00_97, long BgL_timeoutz00_98)
{ AN_OBJECT;
{ /* Llib/thread.scm 609 */
if(
(BgL_timeoutz00_98==((long)0)))
{ /* Llib/thread.scm 610 */
return 
bgl_condvar_wait(BgL_cz00_96, BgL_mz00_97);}  else 
{ /* Llib/thread.scm 610 */
return 
bgl_condvar_timed_wait(BgL_cz00_96, BgL_mz00_97, BgL_timeoutz00_98);} } 
}



/* condition-variable-signal! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2signalz12z12zz__threadz00(obj_t BgL_cz00_101)
{ AN_OBJECT;
{ /* Llib/thread.scm 617 */
return 
bgl_condvar_signal(BgL_cz00_101);} 
}



/* _condition-variable-signal! */
obj_t BGl__conditionzd2variablezd2signalz12z12zz__threadz00(obj_t BgL_envz00_2830, obj_t BgL_cz00_2831)
{ AN_OBJECT;
{ /* Llib/thread.scm 617 */
{ /* Llib/thread.scm 618 */
bool_t BgL_auxz00_4537;
{ /* Llib/thread.scm 618 */
obj_t BgL_cz00_3640;
if(
BGL_CONDVARP(BgL_cz00_2831))
{ /* Llib/thread.scm 618 */
BgL_cz00_3640 = BgL_cz00_2831; }  else 
{ 
obj_t BgL_auxz00_4540;
BgL_auxz00_4540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)26966)), BGl_string3143z00zz__threadz00, BGl_string3138z00zz__threadz00, BgL_cz00_2831); 
FAILURE(BgL_auxz00_4540,BFALSE,BFALSE);} 
BgL_auxz00_4537 = 
bgl_condvar_signal(BgL_cz00_3640); } 
return 
BBOOL(BgL_auxz00_4537);} } 
}



/* condition-variable-broadcast! */
BGL_EXPORTED_DEF bool_t BGl_conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t BgL_cz00_102)
{ AN_OBJECT;
{ /* Llib/thread.scm 623 */
return 
bgl_condvar_broadcast(BgL_cz00_102);} 
}



/* _condition-variable-broadcast! */
obj_t BGl__conditionzd2variablezd2broadcastz12z12zz__threadz00(obj_t BgL_envz00_2832, obj_t BgL_cz00_2833)
{ AN_OBJECT;
{ /* Llib/thread.scm 623 */
{ /* Llib/thread.scm 624 */
bool_t BgL_auxz00_4547;
{ /* Llib/thread.scm 624 */
obj_t BgL_cz00_3641;
if(
BGL_CONDVARP(BgL_cz00_2833))
{ /* Llib/thread.scm 624 */
BgL_cz00_3641 = BgL_cz00_2833; }  else 
{ 
obj_t BgL_auxz00_4550;
BgL_auxz00_4550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)27263)), BGl_string3144z00zz__threadz00, BGl_string3138z00zz__threadz00, BgL_cz00_2833); 
FAILURE(BgL_auxz00_4550,BFALSE,BFALSE);} 
BgL_auxz00_4547 = 
bgl_condvar_broadcast(BgL_cz00_3641); } 
return 
BBOOL(BgL_auxz00_4547);} } 
}



/* object-init */
obj_t BGl_objectzd2initzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 147 */
obj_t BgL_arg2099z00_977;obj_t BgL_arg2100z00_978;obj_t BgL_arg2104z00_982;obj_t BgL_arg2105z00_983;
BgL_arg2099z00_977 = BGl_symbol3145z00zz__threadz00; 
BgL_arg2100z00_978 = BGl_objectz00zz__objectz00; 
{ /* Llib/thread.scm 147 */
obj_t BgL_arg2106z00_984;
BgL_arg2106z00_984 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3146z00zz__threadz00, BGl_threadzd2backendzd2namezd2envzd2zz__threadz00, BUNSPEC, BUNSPEC, ((bool_t)0), BFALSE, 
BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00()); 
{ /* Llib/thread.scm 147 */
obj_t BgL_list2107z00_985;
BgL_list2107z00_985 = 
MAKE_PAIR(BgL_arg2106z00_984, BNIL); 
BgL_arg2104z00_982 = BgL_list2107z00_985; } } 
{ /* Llib/thread.scm 147 */
obj_t BgL_v1937z00_988;
BgL_v1937z00_988 = 
create_vector(
(int)(((long)0))); 
BgL_arg2105z00_983 = BgL_v1937z00_988; } 
BGl_threadzd2backendzd2zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2099z00_977, BgL_arg2100z00_978, ((bool_t)0), BGl_makezd2threadzd2backendzd2envzd2zz__threadz00, BGl_z52allocatezd2threadzd2backendzd2envz80zz__threadz00, BGl_threadzd2backendzd2nilzd2envzd2zz__threadz00, BGl_threadzd2backendzf3zd2envzf3zz__threadz00, ((long)491294473), BgL_arg2104z00_982, BFALSE, BgL_arg2105z00_983); } 
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2110z00_989;obj_t BgL_arg2111z00_990;obj_t BgL_arg2115z00_994;obj_t BgL_arg2116z00_995;
BgL_arg2110z00_989 = BGl_symbol3087z00zz__threadz00; 
BgL_arg2111z00_990 = BGl_objectz00zz__objectz00; 
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2119z00_1000;obj_t BgL_arg2121z00_1001;obj_t BgL_arg2123z00_1002;
BgL_arg2119z00_1000 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3146z00zz__threadz00, BGl_threadzd2namezd2envz00zz__threadz00, BGl_threadzd2namezd2setz12zd2envzc0zz__threadz00, BUNSPEC, ((bool_t)0), BFALSE, BGl_list3149z00zz__threadz00); 
BgL_arg2121z00_1001 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3155z00zz__threadz00, BGl_threadzd2specificzd2envz00zz__threadz00, BGl_threadzd2specificzd2setz12zd2envzc0zz__threadz00, BUNSPEC, ((bool_t)1), BFALSE, 
BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00()); 
BgL_arg2123z00_1002 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3157z00zz__threadz00, BGl_threadzd2cleanupzd2envz00zz__threadz00, BGl_threadzd2cleanupzd2setz12zd2envzc0zz__threadz00, BUNSPEC, ((bool_t)1), BFALSE, 
BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00()); 
{ /* Llib/thread.scm 150 */
obj_t BgL_list2124z00_1003;
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2125z00_1004;
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2126z00_1005;
BgL_arg2126z00_1005 = 
MAKE_PAIR(BgL_arg2123z00_1002, BNIL); 
BgL_arg2125z00_1004 = 
MAKE_PAIR(BgL_arg2121z00_1001, BgL_arg2126z00_1005); } 
BgL_list2124z00_1003 = 
MAKE_PAIR(BgL_arg2119z00_1000, BgL_arg2125z00_1004); } 
BgL_arg2115z00_994 = BgL_list2124z00_1003; } } 
{ /* Llib/thread.scm 150 */
obj_t BgL_v1938z00_1010;
BgL_v1938z00_1010 = 
create_vector(
(int)(((long)2))); 
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2134z00_1012;
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2136z00_1014;
BgL_arg2136z00_1014 = 
MAKE_PAIR(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00, BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00); 
BgL_arg2134z00_1012 = 
MAKE_PAIR(
BINT(((long)1)), BgL_arg2136z00_1014); } 
VECTOR_SET(BgL_v1938z00_1010,
(int)(((long)1)),BgL_arg2134z00_1012); } 
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2138z00_1016;
{ /* Llib/thread.scm 150 */
obj_t BgL_arg2140z00_1018;
BgL_arg2140z00_1018 = 
MAKE_PAIR(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00, BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00); 
BgL_arg2138z00_1016 = 
MAKE_PAIR(
BINT(((long)0)), BgL_arg2140z00_1018); } 
VECTOR_SET(BgL_v1938z00_1010,
(int)(((long)0)),BgL_arg2138z00_1016); } 
BgL_arg2116z00_995 = BgL_v1938z00_1010; } 
BGl_threadz00zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2110z00_989, BgL_arg2111z00_990, ((bool_t)1), BGl_proc3159z00zz__threadz00, BGl_proc3160z00zz__threadz00, BGl_threadzd2nilzd2envz00zz__threadz00, BGl_threadzf3zd2envz21zz__threadz00, ((long)121707757), BgL_arg2115z00_994, BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BgL_arg2116z00_995); } 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2141z00_1021;obj_t BgL_arg2144z00_1022;obj_t BgL_arg2148z00_1026;obj_t BgL_arg2149z00_1027;
BgL_arg2141z00_1021 = BGl_symbol3161z00zz__threadz00; 
BgL_arg2144z00_1022 = BGl_threadz00zz__threadz00; 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2150z00_1028;obj_t BgL_arg2151z00_1029;obj_t BgL_arg2152z00_1030;obj_t BgL_arg2153z00_1031;obj_t BgL_arg2154z00_1032;
BgL_arg2150z00_1028 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3162z00zz__threadz00, BGl_nothreadzd2bodyzd2envz00zz__threadz00, BUNSPEC, BUNSPEC, ((bool_t)0), BFALSE, 
BGl_classzd2fieldzd2nozd2defaultzd2valuez00zz__objectz00()); 
BgL_arg2151z00_1029 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3164z00zz__threadz00, BGl_nothreadzd2z52specificzd2envz52zz__threadz00, BGl_nothreadzd2z52specificzd2setz12zd2envz92zz__threadz00, BUNSPEC, ((bool_t)0), BFALSE, BUNSPEC); 
BgL_arg2152z00_1030 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3166z00zz__threadz00, BGl_nothreadzd2z52cleanupzd2envz52zz__threadz00, BGl_nothreadzd2z52cleanupzd2setz12zd2envz92zz__threadz00, BUNSPEC, ((bool_t)0), BFALSE, BFALSE); 
BgL_arg2153z00_1031 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3168z00zz__threadz00, BGl_nothreadzd2endzd2resultzd2envzd2zz__threadz00, BGl_nothreadzd2endzd2resultzd2setz12zd2envz12zz__threadz00, BUNSPEC, ((bool_t)0), BFALSE, BUNSPEC); 
BgL_arg2154z00_1032 = 
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol3170z00zz__threadz00, BGl_nothreadzd2endzd2exceptionzd2envzd2zz__threadz00, BGl_nothreadzd2endzd2exceptionzd2setz12zd2envz12zz__threadz00, BUNSPEC, ((bool_t)0), BFALSE, BUNSPEC); 
{ /* Llib/thread.scm 156 */
obj_t BgL_list2155z00_1033;
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2156z00_1034;
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2157z00_1035;
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2158z00_1036;
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2159z00_1037;
BgL_arg2159z00_1037 = 
MAKE_PAIR(BgL_arg2154z00_1032, BNIL); 
BgL_arg2158z00_1036 = 
MAKE_PAIR(BgL_arg2153z00_1031, BgL_arg2159z00_1037); } 
BgL_arg2157z00_1035 = 
MAKE_PAIR(BgL_arg2152z00_1030, BgL_arg2158z00_1036); } 
BgL_arg2156z00_1034 = 
MAKE_PAIR(BgL_arg2151z00_1029, BgL_arg2157z00_1035); } 
BgL_list2155z00_1033 = 
MAKE_PAIR(BgL_arg2150z00_1028, BgL_arg2156z00_1034); } 
BgL_arg2148z00_1026 = BgL_list2155z00_1033; } } 
{ /* Llib/thread.scm 156 */
obj_t BgL_v1939z00_1040;
BgL_v1939z00_1040 = 
create_vector(
(int)(((long)0))); 
BgL_arg2149z00_1027 = BgL_v1939z00_1040; } 
BGl_nothreadz00zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2141z00_1021, BgL_arg2144z00_1022, ((bool_t)0), BGl_makezd2nothreadzd2envz00zz__threadz00, BGl_z52allocatezd2nothreadzd2envz52zz__threadz00, BGl_nothreadzd2nilzd2envz00zz__threadz00, BGl_nothreadzf3zd2envz21zz__threadz00, ((long)447745964), BgL_arg2148z00_1026, BFALSE, BgL_arg2149z00_1027); } 
{ /* Llib/thread.scm 145 */
obj_t BgL_arg2162z00_1041;obj_t BgL_arg2163z00_1042;obj_t BgL_arg2168z00_1047;
BgL_arg2162z00_1041 = BGl_symbol3172z00zz__threadz00; 
BgL_arg2163z00_1042 = BGl_threadzd2backendzd2zz__threadz00; 
{ /* Llib/thread.scm 145 */
obj_t BgL_v1940z00_1049;
BgL_v1940z00_1049 = 
create_vector(
(int)(((long)0))); 
BgL_arg2168z00_1047 = BgL_v1940z00_1049; } 
BGl_nothreadzd2backendzd2zz__threadz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2162z00_1041, BgL_arg2163z00_1042, ((bool_t)0), BGl_makezd2nothreadzd2backendzd2envzd2zz__threadz00, BGl_z52allocatezd2nothreadzd2backendzd2envz80zz__threadz00, BGl_nothreadzd2backendzd2nilzd2envzd2zz__threadz00, BGl_nothreadzd2backendzf3zd2envzf3zz__threadz00, ((long)136781531), BNIL, BFALSE, BgL_arg2168z00_1047); } 
BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 = BUNSPEC; 
BGl_z52thezd2nothreadzd2nilz52zz__threadz00 = BUNSPEC; 
BGl_z52thezd2threadzd2nilz52zz__threadz00 = BUNSPEC; 
return ( 
BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 = BUNSPEC, BUNSPEC) ;} 
}



/* <anonymous:2118> */
obj_t BGl_zc3anonymousza32118ze3z83zz__threadz00(obj_t BgL_envz00_2836, obj_t BgL_xz00_2837)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ 
obj_t BgL_xz00_998;
BgL_xz00_998 = BgL_xz00_2837; 
return 
BGl_errorz00zz__errorz00(BGl_symbol3174z00zz__threadz00, BGl_string3176z00zz__threadz00, BGl_symbol3087z00zz__threadz00);} } 
}



/* <anonymous:2117> */
obj_t BGl_zc3anonymousza32117ze3z83zz__threadz00(obj_t BgL_envz00_2838, obj_t BgL_xz00_2839)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ 
obj_t BgL_xz00_996;
BgL_xz00_996 = BgL_xz00_2839; 
return 
BGl_errorz00zz__errorz00(BGl_symbol3087z00zz__threadz00, BGl_string3177z00zz__threadz00, BGl_symbol3087z00zz__threadz00);} } 
}



/* _nothread-backend? */
obj_t BGl__nothreadzd2backendzf3z21zz__threadz00(obj_t BgL_envz00_2915, obj_t BgL_obj1881z00_2916)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
return 
BBOOL(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1881z00_2916, BGl_nothreadzd2backendzd2zz__threadz00));} 
}



/* make-nothread-backend */
BgL_nothreadzd2backendzd2_bglt BGl_makezd2nothreadzd2backendz00zz__threadz00(obj_t BgL_name1867z00_107)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1868z00_1944;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_res2570z00_1949;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1945;
BgL_new1874z00_1945 = 
((BgL_nothreadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1874z00_1945), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 145 */
BgL_objectz00_bglt BgL_auxz00_4608;
BgL_auxz00_4608 = 
(BgL_objectz00_bglt)(BgL_new1874z00_1945); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4608, BFALSE); } 
BgL_res2570z00_1949 = BgL_new1874z00_1945; } 
BgL_new1868z00_1944 = BgL_res2570z00_1949; } 
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_res2571z00_1953;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1950;
BgL_new1871z00_1950 = BgL_new1868z00_1944; 
{ /* Llib/thread.scm 145 */
obj_t BgL_name1870z00_1952;
BgL_name1870z00_1952 = BgL_name1867z00_107; 
((((BgL_nothreadzd2backendzd2_bglt)CREF(BgL_new1871z00_1950))->BgL_namez00) = ((obj_t)BgL_name1870z00_1952), BUNSPEC); 
BgL_res2571z00_1953 = BgL_new1871z00_1950; } } BgL_res2571z00_1953; } 
return BgL_new1868z00_1944;} } 
}



/* _make-nothread-backend */
obj_t BGl__makezd2nothreadzd2backendz00zz__threadz00(obj_t BgL_envz00_2911, obj_t BgL_name1867z00_2912)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_auxz00_4612;
{ /* Llib/thread.scm 145 */
obj_t BgL_auxz00_4613;
if(
STRINGP(BgL_name1867z00_2912))
{ /* Llib/thread.scm 145 */
BgL_auxz00_4613 = BgL_name1867z00_2912
; }  else 
{ 
obj_t BgL_auxz00_4616;
BgL_auxz00_4616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3178z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_name1867z00_2912); 
FAILURE(BgL_auxz00_4616,BFALSE,BFALSE);} 
BgL_auxz00_4612 = 
BGl_makezd2nothreadzd2backendz00zz__threadz00(BgL_auxz00_4613); } 
return 
(obj_t)(BgL_auxz00_4612);} } 
}



/* _%allocate-nothread-backend */
obj_t BGl__z52allocatezd2nothreadzd2backendz52zz__threadz00(obj_t BgL_envz00_2913)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_auxz00_4622;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_res3424z00_3647;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_3645;
BgL_new1874z00_3645 = 
((BgL_nothreadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1874z00_3645), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 145 */
BgL_objectz00_bglt BgL_auxz00_4627;
BgL_auxz00_4627 = 
(BgL_objectz00_bglt)(BgL_new1874z00_3645); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4627, BFALSE); } 
BgL_res3424z00_3647 = BgL_new1874z00_3645; } 
BgL_auxz00_4622 = BgL_res3424z00_3647; } 
return 
(obj_t)(BgL_auxz00_4622);} } 
}



/* nothread-backend-nil */
BgL_nothreadzd2backendzd2_bglt BGl_nothreadzd2backendzd2nilz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
if(
(BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00==BUNSPEC))
{ /* Llib/thread.scm 145 */
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_res2572z00_1963;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1874z00_1959;
BgL_new1874z00_1959 = 
((BgL_nothreadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1874z00_1959), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 145 */
BgL_objectz00_bglt BgL_auxz00_4637;
BgL_auxz00_4637 = 
(BgL_objectz00_bglt)(BgL_new1874z00_1959); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4637, BFALSE); } 
BgL_res2572z00_1963 = BgL_new1874z00_1959; } 
BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00 = 
(obj_t)(BgL_res2572z00_1963); } 
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_res2573z00_1967;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_new1871z00_1964;
{ /* Llib/thread.scm 145 */
obj_t BgL_aux2734z00_3187;
BgL_aux2734z00_3187 = BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2734z00_3187, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 145 */
BgL_new1871z00_1964 = 
(BgL_nothreadzd2backendzd2_bglt)(BgL_aux2734z00_3187); }  else 
{ 
obj_t BgL_auxz00_4644;
BgL_auxz00_4644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3179z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_aux2734z00_3187); 
FAILURE(BgL_auxz00_4644,BFALSE,BFALSE);} } 
{ /* Llib/thread.scm 145 */
obj_t BgL_name1870z00_1966;
BgL_name1870z00_1966 = BGl_string3180z00zz__threadz00; 
((((BgL_nothreadzd2backendzd2_bglt)CREF(BgL_new1871z00_1964))->BgL_namez00) = ((obj_t)BgL_name1870z00_1966), BUNSPEC); 
BgL_res2573z00_1967 = BgL_new1871z00_1964; } } 
(obj_t)(BgL_res2573z00_1967); } }  else 
{ /* Llib/thread.scm 145 */BFALSE; } 
{ /* Llib/thread.scm 145 */
obj_t BgL_aux2736z00_3189;
BgL_aux2736z00_3189 = BGl_z52thezd2nothreadzd2backendzd2nilz80zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2736z00_3189, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 145 */
return 
(BgL_nothreadzd2backendzd2_bglt)(BgL_aux2736z00_3189);}  else 
{ 
obj_t BgL_auxz00_4653;
BgL_auxz00_4653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3179z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_aux2736z00_3189); 
FAILURE(BgL_auxz00_4653,BFALSE,BFALSE);} } } 
}



/* _nothread-backend-nil */
obj_t BGl__nothreadzd2backendzd2nilz00zz__threadz00(obj_t BgL_envz00_2914)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
return 
(obj_t)(
BGl_nothreadzd2backendzd2nilz00zz__threadz00());} 
}



/* nothread? */
BGL_EXPORTED_DEF bool_t BGl_nothreadzf3zf3zz__threadz00(obj_t BgL_obj1865z00_110)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
return 
BGl_iszd2azf3z21zz__objectz00(BgL_obj1865z00_110, BGl_nothreadz00zz__threadz00);} 
}



/* _nothread? */
obj_t BGl__nothreadzf3zf3zz__threadz00(obj_t BgL_envz00_2909, obj_t BgL_obj1865z00_2910)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
return 
BBOOL(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1865z00_2910, BGl_nothreadz00zz__threadz00));} 
}



/* make-nothread */
BGL_EXPORTED_DEF BgL_nothreadz00_bglt BGl_makezd2nothreadzd2zz__threadz00(obj_t BgL_name1816z00_114, obj_t BgL_body1817z00_115, obj_t BgL_z52specific1818z52_116, obj_t BgL_z52cleanup1819z52_117, obj_t BgL_endzd2result1820zd2_118, obj_t BgL_endzd2exception1821zd2_119)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1822z00_1968;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res2574z00_1973;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1838z00_1969;
BgL_new1838z00_1969 = 
((BgL_nothreadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1838z00_1969), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00)); 
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_auxz00_4666;
BgL_auxz00_4666 = 
(BgL_objectz00_bglt)(BgL_new1838z00_1969); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4666, BFALSE); } 
BgL_res2574z00_1973 = BgL_new1838z00_1969; } 
BgL_new1822z00_1968 = BgL_res2574z00_1973; } 
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res2575z00_1987;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1830z00_1974;
BgL_new1830z00_1974 = BgL_new1822z00_1968; 
{ /* Llib/thread.scm 156 */
obj_t BgL_name1824z00_1981;obj_t BgL_body1825z00_1982;obj_t BgL_z52specific1826z52_1983;obj_t BgL_z52cleanup1827z52_1984;obj_t BgL_endzd2result1828zd2_1985;obj_t BgL_endzd2exception1829zd2_1986;
BgL_name1824z00_1981 = BgL_name1816z00_114; 
BgL_body1825z00_1982 = BgL_body1817z00_115; 
BgL_z52specific1826z52_1983 = BgL_z52specific1818z52_116; 
BgL_z52cleanup1827z52_1984 = BgL_z52cleanup1819z52_117; 
BgL_endzd2result1828zd2_1985 = BgL_endzd2result1820zd2_118; 
BgL_endzd2exception1829zd2_1986 = BgL_endzd2exception1821zd2_119; 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_namez00) = ((obj_t)BgL_name1824z00_1981), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_bodyz00) = ((obj_t)BgL_body1825z00_1982), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_z52specificz52) = ((obj_t)BgL_z52specific1826z52_1983), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_z52cleanupz52) = ((obj_t)BgL_z52cleanup1827z52_1984), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_endzd2resultzd2) = ((obj_t)BgL_endzd2result1828zd2_1985), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_1974))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_endzd2exception1829zd2_1986), BUNSPEC); 
BgL_res2575z00_1987 = BgL_new1830z00_1974; } } BgL_res2575z00_1987; } 
{ /* Llib/thread.scm 156 */
BgL_threadz00_bglt BgL_thz00_1988;
BgL_thz00_1988 = 
(BgL_threadz00_bglt)(BgL_new1822z00_1968); 
{ /* Llib/thread.scm 156 */
obj_t BgL_method1961z00_1989;
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_objz00_1990;
BgL_objz00_1990 = 
(BgL_objectz00_bglt)(BgL_thz00_1988); 
{ /* Llib/thread.scm 156 */
long BgL_objzd2classzd2numz00_1991;
BgL_objzd2classzd2numz00_1991 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_1990); 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2549z00_1992;
BgL_arg2549z00_1992 = 
PROCEDURE_REF(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 156 */
obj_t BgL_arrayz00_1994;int BgL_offsetz00_1995;
if(
VECTORP(BgL_arg2549z00_1992))
{ /* Llib/thread.scm 156 */
BgL_arrayz00_1994 = BgL_arg2549z00_1992; }  else 
{ 
obj_t BgL_auxz00_4682;
BgL_auxz00_4682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3181z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_1992); 
FAILURE(BgL_auxz00_4682,BFALSE,BFALSE);} 
BgL_offsetz00_1995 = 
(int)(BgL_objzd2classzd2numz00_1991); 
{ /* Llib/thread.scm 156 */
long BgL_offsetz00_1996;
BgL_offsetz00_1996 = 
(
(long)(BgL_offsetz00_1995)-OBJECT_TYPE); 
{ /* Llib/thread.scm 156 */
long BgL_modz00_1997;
{ /* Llib/thread.scm 156 */
int BgL_arg2551z00_1998;
BgL_arg2551z00_1998 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 156 */
long BgL_auxz00_4690;
BgL_auxz00_4690 = 
(long)(BgL_arg2551z00_1998); 
BgL_modz00_1997 = 
(BgL_offsetz00_1996/BgL_auxz00_4690); } } 
{ /* Llib/thread.scm 156 */
long BgL_restz00_1999;
{ /* Llib/thread.scm 156 */
int BgL_arg2550z00_2000;
BgL_arg2550z00_2000 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 156 */
long BgL_auxz00_4694;
BgL_auxz00_4694 = 
(long)(BgL_arg2550z00_2000); 
BgL_restz00_1999 = 
(BgL_offsetz00_1996%BgL_auxz00_4694); } } 
{ /* Llib/thread.scm 156 */

{ /* Llib/thread.scm 156 */
obj_t BgL_bucketz00_2001;
BgL_bucketz00_2001 = 
VECTOR_REF(BgL_arrayz00_1994,
(int)(BgL_modz00_1997)); 
{ /* Llib/thread.scm 156 */
obj_t BgL_vectorz00_2012;int BgL_kz00_2013;
if(
VECTORP(BgL_bucketz00_2001))
{ /* Llib/thread.scm 156 */
BgL_vectorz00_2012 = BgL_bucketz00_2001; }  else 
{ 
obj_t BgL_auxz00_4701;
BgL_auxz00_4701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3181z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2001); 
FAILURE(BgL_auxz00_4701,BFALSE,BFALSE);} 
BgL_kz00_2013 = 
(int)(BgL_restz00_1999); 
{ /* Llib/thread.scm 156 */
obj_t BgL_aux2742z00_3195;
BgL_aux2742z00_3195 = 
VECTOR_REF(BgL_vectorz00_2012,BgL_kz00_2013); 
if(
PROCEDUREP(BgL_aux2742z00_3195))
{ /* Llib/thread.scm 156 */
BgL_method1961z00_1989 = BgL_aux2742z00_3195; }  else 
{ 
obj_t BgL_auxz00_4709;
BgL_auxz00_4709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3181z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2742z00_3195); 
FAILURE(BgL_auxz00_4709,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1961z00_1989, ((long)1)))
{ /* Llib/thread.scm 156 */
PROCEDURE_ENTRY(BgL_method1961z00_1989)(BgL_method1961z00_1989, 
(obj_t)(BgL_thz00_1988), BEOA); }  else 
{ /* Llib/thread.scm 156 */
FAILURE(BGl_string3182z00zz__threadz00,BGl_list3183z00zz__threadz00,BgL_method1961z00_1989);} } } 
return BgL_new1822z00_1968;} } 
}



/* _make-nothread */
obj_t BGl__makezd2nothreadzd2zz__threadz00(obj_t BgL_envz00_2878, obj_t BgL_name1816z00_2879, obj_t BgL_body1817z00_2880, obj_t BgL_z52specific1818z52_2881, obj_t BgL_z52cleanup1819z52_2882, obj_t BgL_endzd2result1820zd2_2883, obj_t BgL_endzd2exception1821zd2_2884)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_auxz00_4719;
{ /* Llib/thread.scm 156 */
obj_t BgL_auxz00_4720;
if(
PROCEDUREP(BgL_body1817z00_2880))
{ /* Llib/thread.scm 156 */
BgL_auxz00_4720 = BgL_body1817z00_2880
; }  else 
{ 
obj_t BgL_auxz00_4723;
BgL_auxz00_4723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3188z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_body1817z00_2880); 
FAILURE(BgL_auxz00_4723,BFALSE,BFALSE);} 
BgL_auxz00_4719 = 
BGl_makezd2nothreadzd2zz__threadz00(BgL_name1816z00_2879, BgL_auxz00_4720, BgL_z52specific1818z52_2881, BgL_z52cleanup1819z52_2882, BgL_endzd2result1820zd2_2883, BgL_endzd2exception1821zd2_2884); } 
return 
(obj_t)(BgL_auxz00_4719);} } 
}



/* fill-nothread! */
BGL_EXPORTED_DEF BgL_nothreadz00_bglt BGl_fillzd2nothreadz12zc0zz__threadz00(BgL_nothreadz00_bglt BgL_new1830z00_120, obj_t BgL_name1824z00_121, obj_t BgL_body1825z00_122, obj_t BgL_z52specific1826z52_123, obj_t BgL_z52cleanup1827z52_124, obj_t BgL_endzd2result1828zd2_125, obj_t BgL_endzd2exception1829zd2_126)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
obj_t BgL_name1824z00_3651;obj_t BgL_body1825z00_3652;obj_t BgL_z52specific1826z52_3653;obj_t BgL_z52cleanup1827z52_3654;obj_t BgL_endzd2result1828zd2_3655;obj_t BgL_endzd2exception1829zd2_3656;
BgL_name1824z00_3651 = BgL_name1824z00_121; 
BgL_body1825z00_3652 = BgL_body1825z00_122; 
BgL_z52specific1826z52_3653 = BgL_z52specific1826z52_123; 
BgL_z52cleanup1827z52_3654 = BgL_z52cleanup1827z52_124; 
BgL_endzd2result1828zd2_3655 = BgL_endzd2result1828zd2_125; 
BgL_endzd2exception1829zd2_3656 = BgL_endzd2exception1829zd2_126; 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_namez00) = ((obj_t)BgL_name1824z00_3651), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_bodyz00) = ((obj_t)BgL_body1825z00_3652), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_z52specificz52) = ((obj_t)BgL_z52specific1826z52_3653), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_z52cleanupz52) = ((obj_t)BgL_z52cleanup1827z52_3654), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_endzd2resultzd2) = ((obj_t)BgL_endzd2result1828zd2_3655), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_120))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_endzd2exception1829zd2_3656), BUNSPEC); 
return BgL_new1830z00_120;} } 
}



/* _fill-nothread! */
obj_t BGl__fillzd2nothreadz12zc0zz__threadz00(obj_t BgL_envz00_2917, obj_t BgL_new1830z00_2918, obj_t BgL_name1824z00_2919, obj_t BgL_body1825z00_2920, obj_t BgL_z52specific1826z52_2921, obj_t BgL_z52cleanup1827z52_2922, obj_t BgL_endzd2result1828zd2_2923, obj_t BgL_endzd2exception1829zd2_2924)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_auxz00_4735;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res3425z00_3671;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1830z00_3658;obj_t BgL_body1825z00_3660;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_new1830z00_2918, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 156 */
BgL_new1830z00_3658 = 
(BgL_nothreadz00_bglt)(BgL_new1830z00_2918); }  else 
{ 
obj_t BgL_auxz00_4739;
BgL_auxz00_4739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3189z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_new1830z00_2918); 
FAILURE(BgL_auxz00_4739,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_body1825z00_2920))
{ /* Llib/thread.scm 156 */
BgL_body1825z00_3660 = BgL_body1825z00_2920; }  else 
{ 
obj_t BgL_auxz00_4745;
BgL_auxz00_4745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3189z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_body1825z00_2920); 
FAILURE(BgL_auxz00_4745,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 156 */
obj_t BgL_name1824z00_3665;obj_t BgL_body1825z00_3666;obj_t BgL_z52specific1826z52_3667;obj_t BgL_z52cleanup1827z52_3668;obj_t BgL_endzd2result1828zd2_3669;obj_t BgL_endzd2exception1829zd2_3670;
BgL_name1824z00_3665 = BgL_name1824z00_2919; 
BgL_body1825z00_3666 = BgL_body1825z00_3660; 
BgL_z52specific1826z52_3667 = BgL_z52specific1826z52_2921; 
BgL_z52cleanup1827z52_3668 = BgL_z52cleanup1827z52_2922; 
BgL_endzd2result1828zd2_3669 = BgL_endzd2result1828zd2_2923; 
BgL_endzd2exception1829zd2_3670 = BgL_endzd2exception1829zd2_2924; 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_namez00) = ((obj_t)BgL_name1824z00_3665), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_bodyz00) = ((obj_t)BgL_body1825z00_3666), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_z52specificz52) = ((obj_t)BgL_z52specific1826z52_3667), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_z52cleanupz52) = ((obj_t)BgL_z52cleanup1827z52_3668), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_endzd2resultzd2) = ((obj_t)BgL_endzd2result1828zd2_3669), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_3658))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_endzd2exception1829zd2_3670), BUNSPEC); 
BgL_res3425z00_3671 = BgL_new1830z00_3658; } } 
BgL_auxz00_4735 = BgL_res3425z00_3671; } 
return 
(obj_t)(BgL_auxz00_4735);} } 
}



/* %allocate-nothread */
BGL_EXPORTED_DEF BgL_nothreadz00_bglt BGl_z52allocatezd2nothreadz80zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1838z00_3672;
BgL_new1838z00_3672 = 
((BgL_nothreadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1838z00_3672), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00)); 
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_auxz00_4760;
BgL_auxz00_4760 = 
(BgL_objectz00_bglt)(BgL_new1838z00_3672); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4760, BFALSE); } 
return BgL_new1838z00_3672;} } 
}



/* _%allocate-nothread */
obj_t BGl__z52allocatezd2nothreadz80zz__threadz00(obj_t BgL_envz00_2885)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_auxz00_4763;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res3426z00_3676;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1838z00_3674;
BgL_new1838z00_3674 = 
((BgL_nothreadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1838z00_3674), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00)); 
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_auxz00_4768;
BgL_auxz00_4768 = 
(BgL_objectz00_bglt)(BgL_new1838z00_3674); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4768, BFALSE); } 
BgL_res3426z00_3676 = BgL_new1838z00_3674; } 
BgL_auxz00_4763 = BgL_res3426z00_3676; } 
return 
(obj_t)(BgL_auxz00_4763);} } 
}



/* nothread-nil */
BGL_EXPORTED_DEF BgL_nothreadz00_bglt BGl_nothreadzd2nilzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
if(
(BGl_z52thezd2nothreadzd2nilz52zz__threadz00==BUNSPEC))
{ /* Llib/thread.scm 156 */
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res2578z00_2028;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1838z00_2024;
BgL_new1838z00_2024 = 
((BgL_nothreadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1838z00_2024), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00)); 
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_auxz00_4778;
BgL_auxz00_4778 = 
(BgL_objectz00_bglt)(BgL_new1838z00_2024); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4778, BFALSE); } 
BgL_res2578z00_2028 = BgL_new1838z00_2024; } 
BGl_z52thezd2nothreadzd2nilz52zz__threadz00 = 
(obj_t)(BgL_res2578z00_2028); } 
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_res2579z00_2041;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_new1830z00_2029;
{ /* Llib/thread.scm 156 */
obj_t BgL_aux2752z00_3206;
BgL_aux2752z00_3206 = BGl_z52thezd2nothreadzd2nilz52zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2752z00_3206, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 156 */
BgL_new1830z00_2029 = 
(BgL_nothreadz00_bglt)(BgL_aux2752z00_3206); }  else 
{ 
obj_t BgL_auxz00_4785;
BgL_auxz00_4785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3190z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_aux2752z00_3206); 
FAILURE(BgL_auxz00_4785,BFALSE,BFALSE);} } 
{ /* Llib/thread.scm 156 */
obj_t BgL_name1824z00_2035;obj_t BgL_body1825z00_2036;obj_t BgL_z52specific1826z52_2037;obj_t BgL_z52cleanup1827z52_2038;obj_t BgL_endzd2result1828zd2_2039;obj_t BgL_endzd2exception1829zd2_2040;
BgL_name1824z00_2035 = BUNSPEC; 
BgL_body1825z00_2036 = BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00; 
BgL_z52specific1826z52_2037 = BUNSPEC; 
BgL_z52cleanup1827z52_2038 = BUNSPEC; 
BgL_endzd2result1828zd2_2039 = BUNSPEC; 
BgL_endzd2exception1829zd2_2040 = BUNSPEC; 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_namez00) = ((obj_t)BgL_name1824z00_2035), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_bodyz00) = ((obj_t)BgL_body1825z00_2036), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_z52specificz52) = ((obj_t)BgL_z52specific1826z52_2037), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_z52cleanupz52) = ((obj_t)BgL_z52cleanup1827z52_2038), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_endzd2resultzd2) = ((obj_t)BgL_endzd2result1828zd2_2039), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2029))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_endzd2exception1829zd2_2040), BUNSPEC); 
BgL_res2579z00_2041 = BgL_new1830z00_2029; } } 
(obj_t)(BgL_res2579z00_2041); } }  else 
{ /* Llib/thread.scm 156 */BFALSE; } 
{ /* Llib/thread.scm 156 */
obj_t BgL_aux2754z00_3208;
BgL_aux2754z00_3208 = BGl_z52thezd2nothreadzd2nilz52zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2754z00_3208, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 156 */
return 
(BgL_nothreadz00_bglt)(BgL_aux2754z00_3208);}  else 
{ 
obj_t BgL_auxz00_4799;
BgL_auxz00_4799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3190z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_aux2754z00_3208); 
FAILURE(BgL_auxz00_4799,BFALSE,BFALSE);} } } 
}



/* _nothread-nil */
obj_t BGl__nothreadzd2nilzd2zz__threadz00(obj_t BgL_envz00_2908)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
return 
(obj_t)(
BGl_nothreadzd2nilzd2zz__threadz00());} 
}



/* _nothread-body */
obj_t BGl__nothreadzd2bodyzd2zz__threadz00(obj_t BgL_envz00_2886, obj_t BgL_obj1802z00_2887)
{ AN_OBJECT;
{ /* Llib/thread.scm 157 */
{ /* Llib/thread.scm 157 */
BgL_nothreadz00_bglt BgL_obj1802z00_3680;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1802z00_2887, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 157 */
BgL_obj1802z00_3680 = 
(BgL_nothreadz00_bglt)(BgL_obj1802z00_2887); }  else 
{ 
obj_t BgL_auxz00_4808;
BgL_auxz00_4808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5522)), BGl_string3191z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1802z00_2887); 
FAILURE(BgL_auxz00_4808,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1802z00_3680))->BgL_bodyz00);} } 
}



/* _nothread-%specific-set! */
obj_t BGl__nothreadzd2z52specificzd2setz12z40zz__threadz00(obj_t BgL_envz00_2890, obj_t BgL_obj1805z00_2891, obj_t BgL_val1804z00_2892)
{ AN_OBJECT;
{ /* Llib/thread.scm 158 */
{ /* Llib/thread.scm 158 */
BgL_nothreadz00_bglt BgL_obj1805z00_3682;obj_t BgL_val1804z00_3683;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1805z00_2891, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 158 */
BgL_obj1805z00_3682 = 
(BgL_nothreadz00_bglt)(BgL_obj1805z00_2891); }  else 
{ 
obj_t BgL_auxz00_4816;
BgL_auxz00_4816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5558)), BGl_string3192z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1805z00_2891); 
FAILURE(BgL_auxz00_4816,BFALSE,BFALSE);} 
BgL_val1804z00_3683 = BgL_val1804z00_2892; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_obj1805z00_3682))->BgL_z52specificz52) = ((obj_t)BgL_val1804z00_3683), BUNSPEC);} } 
}



/* _nothread-%specific */
obj_t BGl__nothreadzd2z52specificz80zz__threadz00(obj_t BgL_envz00_2888, obj_t BgL_obj1803z00_2889)
{ AN_OBJECT;
{ /* Llib/thread.scm 158 */
{ /* Llib/thread.scm 158 */
BgL_nothreadz00_bglt BgL_obj1803z00_3685;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1803z00_2889, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 158 */
BgL_obj1803z00_3685 = 
(BgL_nothreadz00_bglt)(BgL_obj1803z00_2889); }  else 
{ 
obj_t BgL_auxz00_4824;
BgL_auxz00_4824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5558)), BGl_string3193z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1803z00_2889); 
FAILURE(BgL_auxz00_4824,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1803z00_3685))->BgL_z52specificz52);} } 
}



/* _nothread-%cleanup-set! */
obj_t BGl__nothreadzd2z52cleanupzd2setz12z40zz__threadz00(obj_t BgL_envz00_2895, obj_t BgL_obj1808z00_2896, obj_t BgL_val1807z00_2897)
{ AN_OBJECT;
{ /* Llib/thread.scm 159 */
{ /* Llib/thread.scm 159 */
BgL_nothreadz00_bglt BgL_obj1808z00_3687;obj_t BgL_val1807z00_3688;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1808z00_2896, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 159 */
BgL_obj1808z00_3687 = 
(BgL_nothreadz00_bglt)(BgL_obj1808z00_2896); }  else 
{ 
obj_t BgL_auxz00_4832;
BgL_auxz00_4832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5606)), BGl_string3194z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1808z00_2896); 
FAILURE(BgL_auxz00_4832,BFALSE,BFALSE);} 
BgL_val1807z00_3688 = BgL_val1807z00_2897; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_obj1808z00_3687))->BgL_z52cleanupz52) = ((obj_t)BgL_val1807z00_3688), BUNSPEC);} } 
}



/* _nothread-%cleanup */
obj_t BGl__nothreadzd2z52cleanupz80zz__threadz00(obj_t BgL_envz00_2893, obj_t BgL_obj1806z00_2894)
{ AN_OBJECT;
{ /* Llib/thread.scm 159 */
{ /* Llib/thread.scm 159 */
BgL_nothreadz00_bglt BgL_obj1806z00_3690;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1806z00_2894, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 159 */
BgL_obj1806z00_3690 = 
(BgL_nothreadz00_bglt)(BgL_obj1806z00_2894); }  else 
{ 
obj_t BgL_auxz00_4840;
BgL_auxz00_4840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5606)), BGl_string3195z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1806z00_2894); 
FAILURE(BgL_auxz00_4840,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1806z00_3690))->BgL_z52cleanupz52);} } 
}



/* _nothread-end-result-set! */
obj_t BGl__nothreadzd2endzd2resultzd2setz12zc0zz__threadz00(obj_t BgL_envz00_2900, obj_t BgL_obj1812z00_2901, obj_t BgL_val1810z00_2902)
{ AN_OBJECT;
{ /* Llib/thread.scm 160 */
{ /* Llib/thread.scm 160 */
BgL_nothreadz00_bglt BgL_obj1812z00_3692;obj_t BgL_val1810z00_3693;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2901, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 160 */
BgL_obj1812z00_3692 = 
(BgL_nothreadz00_bglt)(BgL_obj1812z00_2901); }  else 
{ 
obj_t BgL_auxz00_4848;
BgL_auxz00_4848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5643)), BGl_string3196z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1812z00_2901); 
FAILURE(BgL_auxz00_4848,BFALSE,BFALSE);} 
BgL_val1810z00_3693 = BgL_val1810z00_2902; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_obj1812z00_3692))->BgL_endzd2resultzd2) = ((obj_t)BgL_val1810z00_3693), BUNSPEC);} } 
}



/* _nothread-end-result */
obj_t BGl__nothreadzd2endzd2resultz00zz__threadz00(obj_t BgL_envz00_2898, obj_t BgL_obj1809z00_2899)
{ AN_OBJECT;
{ /* Llib/thread.scm 160 */
{ /* Llib/thread.scm 160 */
BgL_nothreadz00_bglt BgL_obj1809z00_3695;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1809z00_2899, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 160 */
BgL_obj1809z00_3695 = 
(BgL_nothreadz00_bglt)(BgL_obj1809z00_2899); }  else 
{ 
obj_t BgL_auxz00_4856;
BgL_auxz00_4856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5643)), BGl_string3197z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1809z00_2899); 
FAILURE(BgL_auxz00_4856,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1809z00_3695))->BgL_endzd2resultzd2);} } 
}



/* _nothread-end-exception-set! */
obj_t BGl__nothreadzd2endzd2exceptionzd2setz12zc0zz__threadz00(obj_t BgL_envz00_2905, obj_t BgL_obj1815z00_2906, obj_t BgL_val1814z00_2907)
{ AN_OBJECT;
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
BgL_nothreadz00_bglt BgL_obj1815z00_3697;obj_t BgL_val1814z00_3698;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1815z00_2906, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 161 */
BgL_obj1815z00_3697 = 
(BgL_nothreadz00_bglt)(BgL_obj1815z00_2906); }  else 
{ 
obj_t BgL_auxz00_4864;
BgL_auxz00_4864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5692)), BGl_string3198z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1815z00_2906); 
FAILURE(BgL_auxz00_4864,BFALSE,BFALSE);} 
BgL_val1814z00_3698 = BgL_val1814z00_2907; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_obj1815z00_3697))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_val1814z00_3698), BUNSPEC);} } 
}



/* _nothread-end-exception */
obj_t BGl__nothreadzd2endzd2exceptionz00zz__threadz00(obj_t BgL_envz00_2903, obj_t BgL_obj1813z00_2904)
{ AN_OBJECT;
{ /* Llib/thread.scm 161 */
{ /* Llib/thread.scm 161 */
BgL_nothreadz00_bglt BgL_obj1813z00_3700;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1813z00_2904, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 161 */
BgL_obj1813z00_3700 = 
(BgL_nothreadz00_bglt)(BgL_obj1813z00_2904); }  else 
{ 
obj_t BgL_auxz00_4872;
BgL_auxz00_4872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5692)), BGl_string3199z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1813z00_2904); 
FAILURE(BgL_auxz00_4872,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1813z00_3700))->BgL_endzd2exceptionzd2);} } 
}



/* thread? */
BGL_EXPORTED_DEF bool_t BGl_threadzf3zf3zz__threadz00(obj_t BgL_obj1786z00_140)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
return 
BGl_iszd2azf3z21zz__objectz00(BgL_obj1786z00_140, BGl_threadz00zz__threadz00);} 
}



/* _thread? */
obj_t BGl__threadzf3zf3zz__threadz00(obj_t BgL_envz00_2874, obj_t BgL_obj1786z00_2875)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
return 
BBOOL(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1786z00_2875, BGl_threadz00zz__threadz00));} 
}



/* fill-thread! */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_fillzd2threadz12zc0zz__threadz00(BgL_threadz00_bglt BgL_new1782z00_141, obj_t BgL_name1781z00_142)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ /* Llib/thread.scm 150 */
obj_t BgL_name1781z00_3702;
BgL_name1781z00_3702 = BgL_name1781z00_142; 
((((BgL_threadz00_bglt)CREF(BgL_new1782z00_141))->BgL_namez00) = ((obj_t)BgL_name1781z00_3702), BUNSPEC); 
return BgL_new1782z00_141;} } 
}



/* _fill-thread! */
obj_t BGl__fillzd2threadz12zc0zz__threadz00(obj_t BgL_envz00_2928, obj_t BgL_new1782z00_2929, obj_t BgL_name1781z00_2930)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_auxz00_4881;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_res3427z00_3707;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_new1782z00_3704;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_new1782z00_2929, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 150 */
BgL_new1782z00_3704 = 
(BgL_threadz00_bglt)(BgL_new1782z00_2929); }  else 
{ 
obj_t BgL_auxz00_4885;
BgL_auxz00_4885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5248)), BGl_string3200z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_new1782z00_2929); 
FAILURE(BgL_auxz00_4885,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 150 */
obj_t BgL_name1781z00_3706;
BgL_name1781z00_3706 = BgL_name1781z00_2930; 
((((BgL_threadz00_bglt)CREF(BgL_new1782z00_3704))->BgL_namez00) = ((obj_t)BgL_name1781z00_3706), BUNSPEC); 
BgL_res3427z00_3707 = BgL_new1782z00_3704; } } 
BgL_auxz00_4881 = BgL_res3427z00_3707; } 
return 
(obj_t)(BgL_auxz00_4881);} } 
}



/* %allocate-thread */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_z52allocatezd2threadz80zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_new1785z00_3708;
BgL_new1785z00_3708 = 
((BgL_threadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1785z00_3708), 
BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00)); 
{ /* Llib/thread.scm 150 */
BgL_objectz00_bglt BgL_auxz00_4895;
BgL_auxz00_4895 = 
(BgL_objectz00_bglt)(BgL_new1785z00_3708); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4895, BFALSE); } 
return BgL_new1785z00_3708;} } 
}



/* _%allocate-thread */
obj_t BGl__z52allocatezd2threadz80zz__threadz00(obj_t BgL_envz00_2931)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_auxz00_4898;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_res3428z00_3712;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_new1785z00_3710;
BgL_new1785z00_3710 = 
((BgL_threadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1785z00_3710), 
BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00)); 
{ /* Llib/thread.scm 150 */
BgL_objectz00_bglt BgL_auxz00_4903;
BgL_auxz00_4903 = 
(BgL_objectz00_bglt)(BgL_new1785z00_3710); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4903, BFALSE); } 
BgL_res3428z00_3712 = BgL_new1785z00_3710; } 
BgL_auxz00_4898 = BgL_res3428z00_3712; } 
return 
(obj_t)(BgL_auxz00_4898);} } 
}



/* thread-nil */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_threadzd2nilzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
if(
(BGl_z52thezd2threadzd2nilz52zz__threadz00==BUNSPEC))
{ /* Llib/thread.scm 150 */
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_res2580z00_2051;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_new1785z00_2047;
BgL_new1785z00_2047 = 
((BgL_threadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1785z00_2047), 
BGl_classzd2numzd2zz__objectz00(BGl_threadz00zz__threadz00)); 
{ /* Llib/thread.scm 150 */
BgL_objectz00_bglt BgL_auxz00_4913;
BgL_auxz00_4913 = 
(BgL_objectz00_bglt)(BgL_new1785z00_2047); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4913, BFALSE); } 
BgL_res2580z00_2051 = BgL_new1785z00_2047; } 
BGl_z52thezd2threadzd2nilz52zz__threadz00 = 
(obj_t)(BgL_res2580z00_2051); } 
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_res2581z00_2055;
{ /* Llib/thread.scm 150 */
BgL_threadz00_bglt BgL_new1782z00_2052;
{ /* Llib/thread.scm 150 */
obj_t BgL_aux2776z00_3230;
BgL_aux2776z00_3230 = BGl_z52thezd2threadzd2nilz52zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2776z00_3230, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 150 */
BgL_new1782z00_2052 = 
(BgL_threadz00_bglt)(BgL_aux2776z00_3230); }  else 
{ 
obj_t BgL_auxz00_4920;
BgL_auxz00_4920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5248)), BGl_string3201z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_aux2776z00_3230); 
FAILURE(BgL_auxz00_4920,BFALSE,BFALSE);} } 
{ /* Llib/thread.scm 150 */
obj_t BgL_name1781z00_2054;
BgL_name1781z00_2054 = BUNSPEC; 
((((BgL_threadz00_bglt)CREF(BgL_new1782z00_2052))->BgL_namez00) = ((obj_t)BgL_name1781z00_2054), BUNSPEC); 
BgL_res2581z00_2055 = BgL_new1782z00_2052; } } 
(obj_t)(BgL_res2581z00_2055); } }  else 
{ /* Llib/thread.scm 150 */BFALSE; } 
{ /* Llib/thread.scm 150 */
obj_t BgL_aux2778z00_3232;
BgL_aux2778z00_3232 = BGl_z52thezd2threadzd2nilz52zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2778z00_3232, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 150 */
return 
(BgL_threadz00_bglt)(BgL_aux2778z00_3232);}  else 
{ 
obj_t BgL_auxz00_4929;
BgL_auxz00_4929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5248)), BGl_string3201z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_aux2778z00_3232); 
FAILURE(BgL_auxz00_4929,BFALSE,BFALSE);} } } 
}



/* _thread-nil */
obj_t BGl__threadzd2nilzd2zz__threadz00(obj_t BgL_envz00_2873)
{ AN_OBJECT;
{ /* Llib/thread.scm 150 */
return 
(obj_t)(
BGl_threadzd2nilzd2zz__threadz00());} 
}



/* _thread-name-set! */
obj_t BGl__threadzd2namezd2setz12z12zz__threadz00(obj_t BgL_envz00_2850, obj_t BgL_obj1774z00_2851, obj_t BgL_val1773z00_2852)
{ AN_OBJECT;
{ /* Llib/thread.scm 152 */
{ /* Llib/thread.scm 152 */
BgL_threadz00_bglt BgL_obj1774z00_3716;obj_t BgL_val1773z00_3717;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1774z00_2851, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 152 */
BgL_obj1774z00_3716 = 
(BgL_threadz00_bglt)(BgL_obj1774z00_2851); }  else 
{ 
obj_t BgL_auxz00_4938;
BgL_auxz00_4938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5308)), BGl_string3202z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1774z00_2851); 
FAILURE(BgL_auxz00_4938,BFALSE,BFALSE);} 
BgL_val1773z00_3717 = BgL_val1773z00_2852; 
return 
((((BgL_threadz00_bglt)CREF(BgL_obj1774z00_3716))->BgL_namez00) = ((obj_t)BgL_val1773z00_3717), BUNSPEC);} } 
}



/* _thread-name */
obj_t BGl__threadzd2namezd2zz__threadz00(obj_t BgL_envz00_2848, obj_t BgL_obj1772z00_2849)
{ AN_OBJECT;
{ /* Llib/thread.scm 152 */
{ /* Llib/thread.scm 152 */
BgL_threadz00_bglt BgL_obj1772z00_3719;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1772z00_2849, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 152 */
BgL_obj1772z00_3719 = 
(BgL_threadz00_bglt)(BgL_obj1772z00_2849); }  else 
{ 
obj_t BgL_auxz00_4946;
BgL_auxz00_4946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5308)), BGl_string3203z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1772z00_2849); 
FAILURE(BgL_auxz00_4946,BFALSE,BFALSE);} 
return 
(((BgL_threadz00_bglt)CREF(BgL_obj1772z00_3719))->BgL_namez00);} } 
}



/* _thread-specific-set! */
obj_t BGl__threadzd2specificzd2setz12z12zz__threadz00(obj_t BgL_envz00_2855, obj_t BgL_obj1777z00_2856, obj_t BgL_val1776z00_2857)
{ AN_OBJECT;
{ /* Llib/thread.scm 153 */
{ /* Llib/thread.scm 153 */
BgL_threadz00_bglt BgL_obj1777z00_3721;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1777z00_2856, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 153 */
BgL_obj1777z00_3721 = 
(BgL_threadz00_bglt)(BgL_obj1777z00_2856); }  else 
{ 
obj_t BgL_auxz00_4954;
BgL_auxz00_4954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5350)), BGl_string3204z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1777z00_2856); 
FAILURE(BgL_auxz00_4954,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2setterz00zz__objectz00(
(BgL_objectz00_bglt)(BgL_obj1777z00_3721), 
(int)(((long)0)), BgL_val1776z00_2857);} } 
}



/* _thread-specific */
obj_t BGl__threadzd2specificzd2zz__threadz00(obj_t BgL_envz00_2853, obj_t BgL_obj1775z00_2854)
{ AN_OBJECT;
{ /* Llib/thread.scm 153 */
{ /* Llib/thread.scm 153 */
BgL_threadz00_bglt BgL_obj1775z00_3724;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1775z00_2854, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 153 */
BgL_obj1775z00_3724 = 
(BgL_threadz00_bglt)(BgL_obj1775z00_2854); }  else 
{ 
obj_t BgL_auxz00_4964;
BgL_auxz00_4964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5350)), BGl_string3205z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1775z00_2854); 
FAILURE(BgL_auxz00_4964,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2getterz00zz__objectz00(
(BgL_objectz00_bglt)(BgL_obj1775z00_3724), 
(int)(((long)0)));} } 
}



/* _thread-cleanup-set! */
obj_t BGl__threadzd2cleanupzd2setz12z12zz__threadz00(obj_t BgL_envz00_2860, obj_t BgL_obj1780z00_2861, obj_t BgL_val1779z00_2862)
{ AN_OBJECT;
{ /* Llib/thread.scm 154 */
{ /* Llib/thread.scm 154 */
BgL_threadz00_bglt BgL_obj1780z00_3726;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1780z00_2861, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 154 */
BgL_obj1780z00_3726 = 
(BgL_threadz00_bglt)(BgL_obj1780z00_2861); }  else 
{ 
obj_t BgL_auxz00_4974;
BgL_auxz00_4974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5422)), BGl_string3206z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1780z00_2861); 
FAILURE(BgL_auxz00_4974,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2setterz00zz__objectz00(
(BgL_objectz00_bglt)(BgL_obj1780z00_3726), 
(int)(((long)1)), BgL_val1779z00_2862);} } 
}



/* _thread-cleanup */
obj_t BGl__threadzd2cleanupzd2zz__threadz00(obj_t BgL_envz00_2858, obj_t BgL_obj1778z00_2859)
{ AN_OBJECT;
{ /* Llib/thread.scm 154 */
{ /* Llib/thread.scm 154 */
BgL_threadz00_bglt BgL_obj1778z00_3729;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1778z00_2859, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 154 */
BgL_obj1778z00_3729 = 
(BgL_threadz00_bglt)(BgL_obj1778z00_2859); }  else 
{ 
obj_t BgL_auxz00_4984;
BgL_auxz00_4984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5422)), BGl_string3207z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_obj1778z00_2859); 
FAILURE(BgL_auxz00_4984,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2getterz00zz__objectz00(
(BgL_objectz00_bglt)(BgL_obj1778z00_3729), 
(int)(((long)1)));} } 
}



/* thread-backend? */
BGL_EXPORTED_DEF bool_t BGl_threadzd2backendzf3z21zz__threadz00(obj_t BgL_obj1771z00_152)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
return 
BGl_iszd2azf3z21zz__objectz00(BgL_obj1771z00_152, BGl_threadzd2backendzd2zz__threadz00);} 
}



/* _thread-backend? */
obj_t BGl__threadzd2backendzf3z21zz__threadz00(obj_t BgL_envz00_2846, obj_t BgL_obj1771z00_2847)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
return 
BBOOL(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1771z00_2847, BGl_threadzd2backendzd2zz__threadz00));} 
}



/* make-thread-backend */
BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt BGl_makezd2threadzd2backendz00zz__threadz00(obj_t BgL_name1757z00_156)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1758z00_2056;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res2582z00_2061;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1764z00_2057;
BgL_new1764z00_2057 = 
((BgL_threadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1764z00_2057), 
BGl_classzd2numzd2zz__objectz00(BGl_threadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 147 */
BgL_objectz00_bglt BgL_auxz00_4998;
BgL_auxz00_4998 = 
(BgL_objectz00_bglt)(BgL_new1764z00_2057); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_4998, BFALSE); } 
BgL_res2582z00_2061 = BgL_new1764z00_2057; } 
BgL_new1758z00_2056 = BgL_res2582z00_2061; } 
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res2583z00_2065;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1761z00_2062;
BgL_new1761z00_2062 = BgL_new1758z00_2056; 
{ /* Llib/thread.scm 147 */
obj_t BgL_name1760z00_2064;
BgL_name1760z00_2064 = BgL_name1757z00_156; 
((((BgL_threadzd2backendzd2_bglt)CREF(BgL_new1761z00_2062))->BgL_namez00) = ((obj_t)BgL_name1760z00_2064), BUNSPEC); 
BgL_res2583z00_2065 = BgL_new1761z00_2062; } } BgL_res2583z00_2065; } 
return BgL_new1758z00_2056;} } 
}



/* _make-thread-backend */
obj_t BGl__makezd2threadzd2backendz00zz__threadz00(obj_t BgL_envz00_2840, obj_t BgL_name1757z00_2841)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5002;
{ /* Llib/thread.scm 147 */
obj_t BgL_auxz00_5003;
if(
STRINGP(BgL_name1757z00_2841))
{ /* Llib/thread.scm 147 */
BgL_auxz00_5003 = BgL_name1757z00_2841
; }  else 
{ 
obj_t BgL_auxz00_5006;
BgL_auxz00_5006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3208z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_name1757z00_2841); 
FAILURE(BgL_auxz00_5006,BFALSE,BFALSE);} 
BgL_auxz00_5002 = 
BGl_makezd2threadzd2backendz00zz__threadz00(BgL_auxz00_5003); } 
return 
(obj_t)(BgL_auxz00_5002);} } 
}



/* fill-thread-backend! */
BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt BGl_fillzd2threadzd2backendz12z12zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_new1761z00_157, obj_t BgL_name1760z00_158)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
obj_t BgL_name1760z00_3731;
BgL_name1760z00_3731 = BgL_name1760z00_158; 
((((BgL_threadzd2backendzd2_bglt)CREF(BgL_new1761z00_157))->BgL_namez00) = ((obj_t)BgL_name1760z00_3731), BUNSPEC); 
return BgL_new1761z00_157;} } 
}



/* _fill-thread-backend! */
obj_t BGl__fillzd2threadzd2backendz12z12zz__threadz00(obj_t BgL_envz00_2932, obj_t BgL_new1761z00_2933, obj_t BgL_name1760z00_2934)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5013;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res3429z00_3736;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1761z00_3733;obj_t BgL_name1760z00_3734;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_new1761z00_2933, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 147 */
BgL_new1761z00_3733 = 
(BgL_threadzd2backendzd2_bglt)(BgL_new1761z00_2933); }  else 
{ 
obj_t BgL_auxz00_5017;
BgL_auxz00_5017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3209z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_new1761z00_2933); 
FAILURE(BgL_auxz00_5017,BFALSE,BFALSE);} 
if(
STRINGP(BgL_name1760z00_2934))
{ /* Llib/thread.scm 147 */
BgL_name1760z00_3734 = BgL_name1760z00_2934; }  else 
{ 
obj_t BgL_auxz00_5023;
BgL_auxz00_5023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3209z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_name1760z00_2934); 
FAILURE(BgL_auxz00_5023,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 147 */
obj_t BgL_name1760z00_3735;
BgL_name1760z00_3735 = BgL_name1760z00_3734; 
((((BgL_threadzd2backendzd2_bglt)CREF(BgL_new1761z00_3733))->BgL_namez00) = ((obj_t)BgL_name1760z00_3735), BUNSPEC); 
BgL_res3429z00_3736 = BgL_new1761z00_3733; } } 
BgL_auxz00_5013 = BgL_res3429z00_3736; } 
return 
(obj_t)(BgL_auxz00_5013);} } 
}



/* %allocate-thread-backend */
BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt BGl_z52allocatezd2threadzd2backendz52zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1764z00_3737;
BgL_new1764z00_3737 = 
((BgL_threadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1764z00_3737), 
BGl_classzd2numzd2zz__objectz00(BGl_threadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 147 */
BgL_objectz00_bglt BgL_auxz00_5033;
BgL_auxz00_5033 = 
(BgL_objectz00_bglt)(BgL_new1764z00_3737); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_5033, BFALSE); } 
return BgL_new1764z00_3737;} } 
}



/* _%allocate-thread-backend */
obj_t BGl__z52allocatezd2threadzd2backendz52zz__threadz00(obj_t BgL_envz00_2842)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5036;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res3430z00_3741;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1764z00_3739;
BgL_new1764z00_3739 = 
((BgL_threadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1764z00_3739), 
BGl_classzd2numzd2zz__objectz00(BGl_threadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 147 */
BgL_objectz00_bglt BgL_auxz00_5041;
BgL_auxz00_5041 = 
(BgL_objectz00_bglt)(BgL_new1764z00_3739); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_5041, BFALSE); } 
BgL_res3430z00_3741 = BgL_new1764z00_3739; } 
BgL_auxz00_5036 = BgL_res3430z00_3741; } 
return 
(obj_t)(BgL_auxz00_5036);} } 
}



/* thread-backend-nil */
BGL_EXPORTED_DEF BgL_threadzd2backendzd2_bglt BGl_threadzd2backendzd2nilz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
if(
(BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00==BUNSPEC))
{ /* Llib/thread.scm 147 */
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res2584z00_2075;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1764z00_2071;
BgL_new1764z00_2071 = 
((BgL_threadzd2backendzd2_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_threadzd2backendzd2_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1764z00_2071), 
BGl_classzd2numzd2zz__objectz00(BGl_threadzd2backendzd2zz__threadz00)); 
{ /* Llib/thread.scm 147 */
BgL_objectz00_bglt BgL_auxz00_5051;
BgL_auxz00_5051 = 
(BgL_objectz00_bglt)(BgL_new1764z00_2071); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_5051, BFALSE); } 
BgL_res2584z00_2075 = BgL_new1764z00_2071; } 
BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00 = 
(obj_t)(BgL_res2584z00_2075); } 
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_res2585z00_2079;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_new1761z00_2076;
{ /* Llib/thread.scm 147 */
obj_t BgL_aux2798z00_3252;
BgL_aux2798z00_3252 = BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2798z00_3252, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 147 */
BgL_new1761z00_2076 = 
(BgL_threadzd2backendzd2_bglt)(BgL_aux2798z00_3252); }  else 
{ 
obj_t BgL_auxz00_5058;
BgL_auxz00_5058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3210z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_aux2798z00_3252); 
FAILURE(BgL_auxz00_5058,BFALSE,BFALSE);} } 
{ /* Llib/thread.scm 147 */
obj_t BgL_name1760z00_2078;
BgL_name1760z00_2078 = BGl_string3180z00zz__threadz00; 
((((BgL_threadzd2backendzd2_bglt)CREF(BgL_new1761z00_2076))->BgL_namez00) = ((obj_t)BgL_name1760z00_2078), BUNSPEC); 
BgL_res2585z00_2079 = BgL_new1761z00_2076; } } 
(obj_t)(BgL_res2585z00_2079); } }  else 
{ /* Llib/thread.scm 147 */BFALSE; } 
{ /* Llib/thread.scm 147 */
obj_t BgL_aux2800z00_3254;
BgL_aux2800z00_3254 = BGl_z52thezd2threadzd2backendzd2nilz80zz__threadz00; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2800z00_3254, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 147 */
return 
(BgL_threadzd2backendzd2_bglt)(BgL_aux2800z00_3254);}  else 
{ 
obj_t BgL_auxz00_5067;
BgL_auxz00_5067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3210z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_aux2800z00_3254); 
FAILURE(BgL_auxz00_5067,BFALSE,BFALSE);} } } 
}



/* _thread-backend-nil */
obj_t BGl__threadzd2backendzd2nilz00zz__threadz00(obj_t BgL_envz00_2845)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
return 
(obj_t)(
BGl_threadzd2backendzd2nilz00zz__threadz00());} 
}



/* _thread-backend-name */
obj_t BGl__threadzd2backendzd2namez00zz__threadz00(obj_t BgL_envz00_2843, obj_t BgL_obj1756z00_2844)
{ AN_OBJECT;
{ /* Llib/thread.scm 148 */
{ /* Llib/thread.scm 148 */
BgL_threadzd2backendzd2_bglt BgL_obj1756z00_3745;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1756z00_2844, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 148 */
BgL_obj1756z00_3745 = 
(BgL_threadzd2backendzd2_bglt)(BgL_obj1756z00_2844); }  else 
{ 
obj_t BgL_auxz00_5076;
BgL_auxz00_5076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5215)), BGl_string3211z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_obj1756z00_2844); 
FAILURE(BgL_auxz00_5076,BFALSE,BFALSE);} 
return 
(((BgL_threadzd2backendzd2_bglt)CREF(BgL_obj1756z00_3745))->BgL_namez00);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BGl_tbzd2makezd2threadzd2defau1945zd2envz00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string3212z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BGl_tbzd2currentzd2threadzd2de1947zd2envz00zz__threadz00, BGl_threadzd2backendzd2zz__threadz00, BGl_string3213z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, BGl_threadzd2initializa7ez12zd2d1960zd2envz67zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3214z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2startz12zd2envz12zz__threadz00, BGl_threadzd2startz12zd2defaul1962zd2envzc0zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3215z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BGl_threadzd2startzd2joinabl1964zd2envzd2zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3216z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2joinz12zd2envz12zz__threadz00, BGl_threadzd2joinz12zd2default1967zd2envzc0zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3217z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2terminatez12zd2envz12zz__threadz00, BGl_threadzd2terminatez12zd2de1969zd2envzc0zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3218z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00, BGl_threadzd2getzd2specificzd21971zd2envz00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3219z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00, BGl_threadzd2setzd2specificz121973zd2envzc0zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3220z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00, BGl_threadzd2getzd2cleanupzd2d1975zd2envz00zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3221z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00, BGl_threadzd2setzd2cleanupz12zd21977zd2envz12zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3222z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, BGl_z52userzd2currentzd2thread1982zd2envz80zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3223z00zz__threadz00); 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, BGl_z52userzd2threadzd2sleepz12zd21984zd2envz40zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3224z00zz__threadz00); 
return 
BGl_registerzd2genericz12zc0zz__objectz00(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, BGl_z52userzd2threadzd2yieldz12zd21986zd2envz40zz__threadz00, BGl_threadz00zz__threadz00, BGl_string3225z00zz__threadz00);} 
}



/* tb-make-thread */
BGL_EXPORTED_DEF BgL_threadz00_bglt BGl_tbzd2makezd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_5, obj_t BgL_bodyz00_6, obj_t BgL_namez00_7)
{ AN_OBJECT;
{ /* Llib/thread.scm 281 */
{ /* Llib/thread.scm 281 */
obj_t BgL_method1946z00_2080;
{ /* Llib/thread.scm 281 */
BgL_objectz00_bglt BgL_objz00_2081;
BgL_objz00_2081 = 
(BgL_objectz00_bglt)(BgL_tbz00_5); 
{ /* Llib/thread.scm 281 */
long BgL_objzd2classzd2numz00_2082;
BgL_objzd2classzd2numz00_2082 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2081); 
{ /* Llib/thread.scm 281 */
obj_t BgL_arg2549z00_2083;
BgL_arg2549z00_2083 = 
PROCEDURE_REF(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 281 */
obj_t BgL_arrayz00_2085;int BgL_offsetz00_2086;
if(
VECTORP(BgL_arg2549z00_2083))
{ /* Llib/thread.scm 281 */
BgL_arrayz00_2085 = BgL_arg2549z00_2083; }  else 
{ 
obj_t BgL_auxz00_5101;
BgL_auxz00_5101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3212z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2083); 
FAILURE(BgL_auxz00_5101,BFALSE,BFALSE);} 
BgL_offsetz00_2086 = 
(int)(BgL_objzd2classzd2numz00_2082); 
{ /* Llib/thread.scm 281 */
long BgL_offsetz00_2087;
BgL_offsetz00_2087 = 
(
(long)(BgL_offsetz00_2086)-OBJECT_TYPE); 
{ /* Llib/thread.scm 281 */
long BgL_modz00_2088;
{ /* Llib/thread.scm 281 */
int BgL_arg2551z00_2089;
BgL_arg2551z00_2089 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 281 */
long BgL_auxz00_5109;
BgL_auxz00_5109 = 
(long)(BgL_arg2551z00_2089); 
BgL_modz00_2088 = 
(BgL_offsetz00_2087/BgL_auxz00_5109); } } 
{ /* Llib/thread.scm 281 */
long BgL_restz00_2090;
{ /* Llib/thread.scm 281 */
int BgL_arg2550z00_2091;
BgL_arg2550z00_2091 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 281 */
long BgL_auxz00_5113;
BgL_auxz00_5113 = 
(long)(BgL_arg2550z00_2091); 
BgL_restz00_2090 = 
(BgL_offsetz00_2087%BgL_auxz00_5113); } } 
{ /* Llib/thread.scm 281 */

{ /* Llib/thread.scm 281 */
obj_t BgL_bucketz00_2092;
BgL_bucketz00_2092 = 
VECTOR_REF(BgL_arrayz00_2085,
(int)(BgL_modz00_2088)); 
{ /* Llib/thread.scm 281 */
obj_t BgL_vectorz00_2103;int BgL_kz00_2104;
if(
VECTORP(BgL_bucketz00_2092))
{ /* Llib/thread.scm 281 */
BgL_vectorz00_2103 = BgL_bucketz00_2092; }  else 
{ 
obj_t BgL_auxz00_5120;
BgL_auxz00_5120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3212z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2092); 
FAILURE(BgL_auxz00_5120,BFALSE,BFALSE);} 
BgL_kz00_2104 = 
(int)(BgL_restz00_2090); 
{ /* Llib/thread.scm 281 */
obj_t BgL_aux2808z00_3262;
BgL_aux2808z00_3262 = 
VECTOR_REF(BgL_vectorz00_2103,BgL_kz00_2104); 
if(
PROCEDUREP(BgL_aux2808z00_3262))
{ /* Llib/thread.scm 281 */
BgL_method1946z00_2080 = BgL_aux2808z00_3262; }  else 
{ 
obj_t BgL_auxz00_5128;
BgL_auxz00_5128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3212z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2808z00_3262); 
FAILURE(BgL_auxz00_5128,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1946z00_2080, ((long)3)))
{ /* Llib/thread.scm 281 */
obj_t BgL_aux2811z00_3265;
BgL_aux2811z00_3265 = 
PROCEDURE_ENTRY(BgL_method1946z00_2080)(BgL_method1946z00_2080, 
(obj_t)(BgL_tbz00_5), BgL_bodyz00_6, BgL_namez00_7, BEOA); 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2811z00_3265, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 281 */
return 
(BgL_threadz00_bglt)(BgL_aux2811z00_3265);}  else 
{ 
obj_t BgL_auxz00_5140;
BgL_auxz00_5140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3212z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_aux2811z00_3265); 
FAILURE(BgL_auxz00_5140,BFALSE,BFALSE);} }  else 
{ /* Llib/thread.scm 281 */
FAILURE(BGl_string3226z00zz__threadz00,BGl_list3227z00zz__threadz00,BgL_method1946z00_2080);} } } 
}



/* _tb-make-thread */
obj_t BGl__tbzd2makezd2threadz00zz__threadz00(obj_t BgL_envz00_2935, obj_t BgL_tbz00_2936, obj_t BgL_bodyz00_2937, obj_t BgL_namez00_2938)
{ AN_OBJECT;
{ /* Llib/thread.scm 281 */
{ /* Llib/thread.scm 281 */
BgL_threadz00_bglt BgL_auxz00_5145;
{ /* Llib/thread.scm 281 */
obj_t BgL_auxz00_5154;BgL_threadzd2backendzd2_bglt BgL_auxz00_5146;
if(
PROCEDUREP(BgL_bodyz00_2937))
{ /* Llib/thread.scm 281 */
BgL_auxz00_5154 = BgL_bodyz00_2937
; }  else 
{ 
obj_t BgL_auxz00_5157;
BgL_auxz00_5157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3230z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_bodyz00_2937); 
FAILURE(BgL_auxz00_5157,BFALSE,BFALSE);} 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2936, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 281 */
BgL_auxz00_5146 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2936)
; }  else 
{ 
obj_t BgL_auxz00_5150;
BgL_auxz00_5150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)10990)), BGl_string3230z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2936); 
FAILURE(BgL_auxz00_5150,BFALSE,BFALSE);} 
BgL_auxz00_5145 = 
BGl_tbzd2makezd2threadz00zz__threadz00(BgL_auxz00_5146, BgL_auxz00_5154, BgL_namez00_2938); } 
return 
(obj_t)(BgL_auxz00_5145);} } 
}



/* tb-make-thread-defau1945 */
obj_t BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_8, obj_t BgL_bodyz00_9, obj_t BgL_namez00_10)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3231z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_tbz00_8));} 
}



/* _tb-make-thread-defau1945 */
obj_t BGl__tbzd2makezd2threadzd2defau1945zd2zz__threadz00(obj_t BgL_envz00_2939, obj_t BgL_tbz00_2940, obj_t BgL_bodyz00_2941, obj_t BgL_namez00_2942)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5165;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2940, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5165 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2940)
; }  else 
{ 
obj_t BgL_auxz00_5169;
BgL_auxz00_5169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3234z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2940); 
FAILURE(BgL_auxz00_5169,BFALSE,BFALSE);} 
return 
BGl_tbzd2makezd2threadzd2defau1945zd2zz__threadz00(BgL_auxz00_5165, BgL_bodyz00_2941, BgL_namez00_2942);} } 
}



/* tb-current-thread */
BGL_EXPORTED_DEF obj_t BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_11)
{ AN_OBJECT;
{ /* Llib/thread.scm 286 */
{ /* Llib/thread.scm 286 */
obj_t BgL_method1949z00_2105;
{ /* Llib/thread.scm 286 */
BgL_objectz00_bglt BgL_objz00_2106;
BgL_objz00_2106 = 
(BgL_objectz00_bglt)(BgL_tbz00_11); 
{ /* Llib/thread.scm 286 */
long BgL_objzd2classzd2numz00_2107;
BgL_objzd2classzd2numz00_2107 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2106); 
{ /* Llib/thread.scm 286 */
obj_t BgL_arg2549z00_2108;
BgL_arg2549z00_2108 = 
PROCEDURE_REF(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 286 */
obj_t BgL_arrayz00_2110;int BgL_offsetz00_2111;
if(
VECTORP(BgL_arg2549z00_2108))
{ /* Llib/thread.scm 286 */
BgL_arrayz00_2110 = BgL_arg2549z00_2108; }  else 
{ 
obj_t BgL_auxz00_5180;
BgL_auxz00_5180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11276)), BGl_string3213z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2108); 
FAILURE(BgL_auxz00_5180,BFALSE,BFALSE);} 
BgL_offsetz00_2111 = 
(int)(BgL_objzd2classzd2numz00_2107); 
{ /* Llib/thread.scm 286 */
long BgL_offsetz00_2112;
BgL_offsetz00_2112 = 
(
(long)(BgL_offsetz00_2111)-OBJECT_TYPE); 
{ /* Llib/thread.scm 286 */
long BgL_modz00_2113;
{ /* Llib/thread.scm 286 */
int BgL_arg2551z00_2114;
BgL_arg2551z00_2114 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 286 */
long BgL_auxz00_5188;
BgL_auxz00_5188 = 
(long)(BgL_arg2551z00_2114); 
BgL_modz00_2113 = 
(BgL_offsetz00_2112/BgL_auxz00_5188); } } 
{ /* Llib/thread.scm 286 */
long BgL_restz00_2115;
{ /* Llib/thread.scm 286 */
int BgL_arg2550z00_2116;
BgL_arg2550z00_2116 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 286 */
long BgL_auxz00_5192;
BgL_auxz00_5192 = 
(long)(BgL_arg2550z00_2116); 
BgL_restz00_2115 = 
(BgL_offsetz00_2112%BgL_auxz00_5192); } } 
{ /* Llib/thread.scm 286 */

{ /* Llib/thread.scm 286 */
obj_t BgL_bucketz00_2117;
BgL_bucketz00_2117 = 
VECTOR_REF(BgL_arrayz00_2110,
(int)(BgL_modz00_2113)); 
{ /* Llib/thread.scm 286 */
obj_t BgL_vectorz00_2128;int BgL_kz00_2129;
if(
VECTORP(BgL_bucketz00_2117))
{ /* Llib/thread.scm 286 */
BgL_vectorz00_2128 = BgL_bucketz00_2117; }  else 
{ 
obj_t BgL_auxz00_5199;
BgL_auxz00_5199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11276)), BGl_string3213z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2117); 
FAILURE(BgL_auxz00_5199,BFALSE,BFALSE);} 
BgL_kz00_2129 = 
(int)(BgL_restz00_2115); 
{ /* Llib/thread.scm 286 */
obj_t BgL_aux2824z00_3279;
BgL_aux2824z00_3279 = 
VECTOR_REF(BgL_vectorz00_2128,BgL_kz00_2129); 
if(
PROCEDUREP(BgL_aux2824z00_3279))
{ /* Llib/thread.scm 286 */
BgL_method1949z00_2105 = BgL_aux2824z00_3279; }  else 
{ 
obj_t BgL_auxz00_5207;
BgL_auxz00_5207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11276)), BGl_string3213z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2824z00_3279); 
FAILURE(BgL_auxz00_5207,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1949z00_2105, ((long)1)))
{ /* Llib/thread.scm 286 */
return 
PROCEDURE_ENTRY(BgL_method1949z00_2105)(BgL_method1949z00_2105, 
(obj_t)(BgL_tbz00_11), BEOA);}  else 
{ /* Llib/thread.scm 286 */
FAILURE(BGl_string3235z00zz__threadz00,BGl_list3094z00zz__threadz00,BgL_method1949z00_2105);} } } 
}



/* _tb-current-thread */
obj_t BGl__tbzd2currentzd2threadz00zz__threadz00(obj_t BgL_envz00_2800, obj_t BgL_tbz00_2801)
{ AN_OBJECT;
{ /* Llib/thread.scm 286 */
{ /* Llib/thread.scm 286 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5217;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2801, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 286 */
BgL_auxz00_5217 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2801)
; }  else 
{ 
obj_t BgL_auxz00_5221;
BgL_auxz00_5221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11276)), BGl_string3236z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2801); 
FAILURE(BgL_auxz00_5221,BFALSE,BFALSE);} 
return 
BGl_tbzd2currentzd2threadz00zz__threadz00(BgL_auxz00_5217);} } 
}



/* tb-current-thread-de1947 */
obj_t BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00(BgL_threadzd2backendzd2_bglt BgL_tbz00_12)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3237z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_tbz00_12));} 
}



/* _tb-current-thread-de1947 */
obj_t BGl__tbzd2currentzd2threadzd2de1947zd2zz__threadz00(obj_t BgL_envz00_2943, obj_t BgL_tbz00_2944)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_5228;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_2944, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5228 = 
(BgL_threadzd2backendzd2_bglt)(BgL_tbz00_2944)
; }  else 
{ 
obj_t BgL_auxz00_5232;
BgL_auxz00_5232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3239z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_tbz00_2944); 
FAILURE(BgL_auxz00_5232,BFALSE,BFALSE);} 
return 
BGl_tbzd2currentzd2threadzd2de1947zd2zz__threadz00(BgL_auxz00_5228);} } 
}



/* thread-initialize! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_threadz00_bglt BgL_thz00_24)
{ AN_OBJECT;
{ /* Llib/thread.scm 334 */
{ /* Llib/thread.scm 334 */
obj_t BgL_method1961z00_2130;
{ /* Llib/thread.scm 334 */
BgL_objectz00_bglt BgL_objz00_2131;
BgL_objz00_2131 = 
(BgL_objectz00_bglt)(BgL_thz00_24); 
{ /* Llib/thread.scm 334 */
long BgL_objzd2classzd2numz00_2132;
BgL_objzd2classzd2numz00_2132 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2131); 
{ /* Llib/thread.scm 334 */
obj_t BgL_arg2549z00_2133;
BgL_arg2549z00_2133 = 
PROCEDURE_REF(BGl_threadzd2initializa7ez12zd2envzb5zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 334 */
obj_t BgL_arrayz00_2135;int BgL_offsetz00_2136;
if(
VECTORP(BgL_arg2549z00_2133))
{ /* Llib/thread.scm 334 */
BgL_arrayz00_2135 = BgL_arg2549z00_2133; }  else 
{ 
obj_t BgL_auxz00_5243;
BgL_auxz00_5243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13720)), BGl_string3214z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2133); 
FAILURE(BgL_auxz00_5243,BFALSE,BFALSE);} 
BgL_offsetz00_2136 = 
(int)(BgL_objzd2classzd2numz00_2132); 
{ /* Llib/thread.scm 334 */
long BgL_offsetz00_2137;
BgL_offsetz00_2137 = 
(
(long)(BgL_offsetz00_2136)-OBJECT_TYPE); 
{ /* Llib/thread.scm 334 */
long BgL_modz00_2138;
{ /* Llib/thread.scm 334 */
int BgL_arg2551z00_2139;
BgL_arg2551z00_2139 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 334 */
long BgL_auxz00_5251;
BgL_auxz00_5251 = 
(long)(BgL_arg2551z00_2139); 
BgL_modz00_2138 = 
(BgL_offsetz00_2137/BgL_auxz00_5251); } } 
{ /* Llib/thread.scm 334 */
long BgL_restz00_2140;
{ /* Llib/thread.scm 334 */
int BgL_arg2550z00_2141;
BgL_arg2550z00_2141 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 334 */
long BgL_auxz00_5255;
BgL_auxz00_5255 = 
(long)(BgL_arg2550z00_2141); 
BgL_restz00_2140 = 
(BgL_offsetz00_2137%BgL_auxz00_5255); } } 
{ /* Llib/thread.scm 334 */

{ /* Llib/thread.scm 334 */
obj_t BgL_bucketz00_2142;
BgL_bucketz00_2142 = 
VECTOR_REF(BgL_arrayz00_2135,
(int)(BgL_modz00_2138)); 
{ /* Llib/thread.scm 334 */
obj_t BgL_vectorz00_2153;int BgL_kz00_2154;
if(
VECTORP(BgL_bucketz00_2142))
{ /* Llib/thread.scm 334 */
BgL_vectorz00_2153 = BgL_bucketz00_2142; }  else 
{ 
obj_t BgL_auxz00_5262;
BgL_auxz00_5262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13720)), BGl_string3214z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2142); 
FAILURE(BgL_auxz00_5262,BFALSE,BFALSE);} 
BgL_kz00_2154 = 
(int)(BgL_restz00_2140); 
{ /* Llib/thread.scm 334 */
obj_t BgL_aux2836z00_3292;
BgL_aux2836z00_3292 = 
VECTOR_REF(BgL_vectorz00_2153,BgL_kz00_2154); 
if(
PROCEDUREP(BgL_aux2836z00_3292))
{ /* Llib/thread.scm 334 */
BgL_method1961z00_2130 = BgL_aux2836z00_3292; }  else 
{ 
obj_t BgL_auxz00_5270;
BgL_auxz00_5270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13720)), BGl_string3214z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2836z00_3292); 
FAILURE(BgL_auxz00_5270,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1961z00_2130, ((long)1)))
{ /* Llib/thread.scm 334 */
return 
PROCEDURE_ENTRY(BgL_method1961z00_2130)(BgL_method1961z00_2130, 
(obj_t)(BgL_thz00_24), BEOA);}  else 
{ /* Llib/thread.scm 334 */
FAILURE(BGl_string3240z00zz__threadz00,BGl_list3183z00zz__threadz00,BgL_method1961z00_2130);} } } 
}



/* _thread-initialize! */
obj_t BGl__threadzd2initializa7ez12z67zz__threadz00(obj_t BgL_envz00_2876, obj_t BgL_thz00_2877)
{ AN_OBJECT;
{ /* Llib/thread.scm 334 */
{ /* Llib/thread.scm 334 */
BgL_threadz00_bglt BgL_auxz00_5280;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2877, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 334 */
BgL_auxz00_5280 = 
(BgL_threadz00_bglt)(BgL_thz00_2877)
; }  else 
{ 
obj_t BgL_auxz00_5284;
BgL_auxz00_5284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13720)), BGl_string3241z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2877); 
FAILURE(BgL_auxz00_5284,BFALSE,BFALSE);} 
return 
BGl_threadzd2initializa7ez12z67zz__threadz00(BgL_auxz00_5280);} } 
}



/* _thread-initialize!-d1960 */
obj_t BGl__threadzd2initializa7ez12zd2d1960zb5zz__threadz00(obj_t BgL_envz00_2945, obj_t BgL_thz00_2946)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5289;
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_thz00_3753;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2946, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_thz00_3753 = 
(BgL_threadz00_bglt)(BgL_thz00_2946); }  else 
{ 
obj_t BgL_auxz00_5293;
BgL_auxz00_5293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3242z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2946); 
FAILURE(BgL_auxz00_5293,BFALSE,BFALSE);} 
BgL_auxz00_5289 = BgL_thz00_3753; } 
return 
(obj_t)(BgL_auxz00_5289);} } 
}



/* thread-start! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2startz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_26, obj_t BgL_scz00_27)
{ AN_OBJECT;
{ /* Llib/thread.scm 340 */
{ /* Llib/thread.scm 340 */
obj_t BgL_method1963z00_2155;
{ /* Llib/thread.scm 340 */
BgL_objectz00_bglt BgL_objz00_2157;
BgL_objz00_2157 = 
(BgL_objectz00_bglt)(BgL_thz00_26); 
{ /* Llib/thread.scm 340 */
long BgL_objzd2classzd2numz00_2158;
BgL_objzd2classzd2numz00_2158 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2157); 
{ /* Llib/thread.scm 340 */
obj_t BgL_arg2549z00_2159;
BgL_arg2549z00_2159 = 
PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 340 */
obj_t BgL_arrayz00_2161;int BgL_offsetz00_2162;
if(
VECTORP(BgL_arg2549z00_2159))
{ /* Llib/thread.scm 340 */
BgL_arrayz00_2161 = BgL_arg2549z00_2159; }  else 
{ 
obj_t BgL_auxz00_5304;
BgL_auxz00_5304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13998)), BGl_string3215z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2159); 
FAILURE(BgL_auxz00_5304,BFALSE,BFALSE);} 
BgL_offsetz00_2162 = 
(int)(BgL_objzd2classzd2numz00_2158); 
{ /* Llib/thread.scm 340 */
long BgL_offsetz00_2163;
BgL_offsetz00_2163 = 
(
(long)(BgL_offsetz00_2162)-OBJECT_TYPE); 
{ /* Llib/thread.scm 340 */
long BgL_modz00_2164;
{ /* Llib/thread.scm 340 */
int BgL_arg2551z00_2165;
BgL_arg2551z00_2165 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 340 */
long BgL_auxz00_5312;
BgL_auxz00_5312 = 
(long)(BgL_arg2551z00_2165); 
BgL_modz00_2164 = 
(BgL_offsetz00_2163/BgL_auxz00_5312); } } 
{ /* Llib/thread.scm 340 */
long BgL_restz00_2166;
{ /* Llib/thread.scm 340 */
int BgL_arg2550z00_2167;
BgL_arg2550z00_2167 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 340 */
long BgL_auxz00_5316;
BgL_auxz00_5316 = 
(long)(BgL_arg2550z00_2167); 
BgL_restz00_2166 = 
(BgL_offsetz00_2163%BgL_auxz00_5316); } } 
{ /* Llib/thread.scm 340 */

{ /* Llib/thread.scm 340 */
obj_t BgL_bucketz00_2168;
BgL_bucketz00_2168 = 
VECTOR_REF(BgL_arrayz00_2161,
(int)(BgL_modz00_2164)); 
{ /* Llib/thread.scm 340 */
obj_t BgL_vectorz00_2179;int BgL_kz00_2180;
if(
VECTORP(BgL_bucketz00_2168))
{ /* Llib/thread.scm 340 */
BgL_vectorz00_2179 = BgL_bucketz00_2168; }  else 
{ 
obj_t BgL_auxz00_5323;
BgL_auxz00_5323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13998)), BGl_string3215z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2168); 
FAILURE(BgL_auxz00_5323,BFALSE,BFALSE);} 
BgL_kz00_2180 = 
(int)(BgL_restz00_2166); 
{ /* Llib/thread.scm 340 */
obj_t BgL_aux2848z00_3305;
BgL_aux2848z00_3305 = 
VECTOR_REF(BgL_vectorz00_2179,BgL_kz00_2180); 
if(
PROCEDUREP(BgL_aux2848z00_3305))
{ /* Llib/thread.scm 340 */
BgL_method1963z00_2155 = BgL_aux2848z00_3305; }  else 
{ 
obj_t BgL_auxz00_5331;
BgL_auxz00_5331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13998)), BGl_string3215z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2848z00_3305); 
FAILURE(BgL_auxz00_5331,BFALSE,BFALSE);} } } } } } } } } } } } 
{ /* Llib/thread.scm 340 */
obj_t BgL_valz00_3308;
{ /* Llib/thread.scm 340 */
obj_t BgL_list2200z00_2156;
BgL_list2200z00_2156 = 
MAKE_PAIR(BgL_scz00_27, BNIL); 
BgL_valz00_3308 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
(obj_t)(BgL_thz00_26), BgL_list2200z00_2156); } 
{ /* Llib/thread.scm 340 */
int BgL_len2850z00_3309;
BgL_len2850z00_3309 = 
(int)(
bgl_list_length(BgL_valz00_3308)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1963z00_2155, BgL_len2850z00_3309))
{ /* Llib/thread.scm 340 */
return 
apply(BgL_method1963z00_2155, BgL_valz00_3308);}  else 
{ /* Llib/thread.scm 340 */
FAILURE(BGl_symbol3243z00zz__threadz00,BGl_string3244z00zz__threadz00,BGl_list3245z00zz__threadz00);} } } } } 
}



/* _thread-start! */
obj_t BGl__threadzd2startz12zc0zz__threadz00(obj_t BgL_envz00_2947, obj_t BgL_thz00_2948, obj_t BgL_scz00_2949)
{ AN_OBJECT;
{ /* Llib/thread.scm 340 */
{ /* Llib/thread.scm 340 */
BgL_threadz00_bglt BgL_auxz00_5345;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2948, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 340 */
BgL_auxz00_5345 = 
(BgL_threadz00_bglt)(BgL_thz00_2948)
; }  else 
{ 
obj_t BgL_auxz00_5349;
BgL_auxz00_5349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13998)), BGl_string3266z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2948); 
FAILURE(BgL_auxz00_5349,BFALSE,BFALSE);} 
return 
BGl_threadzd2startz12zc0zz__threadz00(BgL_auxz00_5345, BgL_scz00_2949);} } 
}



/* thread-start!-defaul1962 */
obj_t BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_28, obj_t BgL_scz00_29)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3267z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_28));} 
}



/* _thread-start!-defaul1962 */
obj_t BGl__threadzd2startz12zd2defaul1962z12zz__threadz00(obj_t BgL_envz00_2950, obj_t BgL_thz00_2951, obj_t BgL_scz00_2952)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5356;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2951, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5356 = 
(BgL_threadz00_bglt)(BgL_thz00_2951)
; }  else 
{ 
obj_t BgL_auxz00_5360;
BgL_auxz00_5360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3269z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2951); 
FAILURE(BgL_auxz00_5360,BFALSE,BFALSE);} 
return 
BGl_threadzd2startz12zd2defaul1962z12zz__threadz00(BgL_auxz00_5356, BgL_scz00_2952);} } 
}



/* thread-start-joinable! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_30)
{ AN_OBJECT;
{ /* Llib/thread.scm 345 */
{ /* Llib/thread.scm 345 */
obj_t BgL_method1966z00_2181;
{ /* Llib/thread.scm 345 */
BgL_objectz00_bglt BgL_objz00_2182;
BgL_objz00_2182 = 
(BgL_objectz00_bglt)(BgL_thz00_30); 
{ /* Llib/thread.scm 345 */
long BgL_objzd2classzd2numz00_2183;
BgL_objzd2classzd2numz00_2183 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2182); 
{ /* Llib/thread.scm 345 */
obj_t BgL_arg2549z00_2184;
BgL_arg2549z00_2184 = 
PROCEDURE_REF(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 345 */
obj_t BgL_arrayz00_2186;int BgL_offsetz00_2187;
if(
VECTORP(BgL_arg2549z00_2184))
{ /* Llib/thread.scm 345 */
BgL_arrayz00_2186 = BgL_arg2549z00_2184; }  else 
{ 
obj_t BgL_auxz00_5371;
BgL_auxz00_5371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14270)), BGl_string3216z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2184); 
FAILURE(BgL_auxz00_5371,BFALSE,BFALSE);} 
BgL_offsetz00_2187 = 
(int)(BgL_objzd2classzd2numz00_2183); 
{ /* Llib/thread.scm 345 */
long BgL_offsetz00_2188;
BgL_offsetz00_2188 = 
(
(long)(BgL_offsetz00_2187)-OBJECT_TYPE); 
{ /* Llib/thread.scm 345 */
long BgL_modz00_2189;
{ /* Llib/thread.scm 345 */
int BgL_arg2551z00_2190;
BgL_arg2551z00_2190 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 345 */
long BgL_auxz00_5379;
BgL_auxz00_5379 = 
(long)(BgL_arg2551z00_2190); 
BgL_modz00_2189 = 
(BgL_offsetz00_2188/BgL_auxz00_5379); } } 
{ /* Llib/thread.scm 345 */
long BgL_restz00_2191;
{ /* Llib/thread.scm 345 */
int BgL_arg2550z00_2192;
BgL_arg2550z00_2192 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 345 */
long BgL_auxz00_5383;
BgL_auxz00_5383 = 
(long)(BgL_arg2550z00_2192); 
BgL_restz00_2191 = 
(BgL_offsetz00_2188%BgL_auxz00_5383); } } 
{ /* Llib/thread.scm 345 */

{ /* Llib/thread.scm 345 */
obj_t BgL_bucketz00_2193;
BgL_bucketz00_2193 = 
VECTOR_REF(BgL_arrayz00_2186,
(int)(BgL_modz00_2189)); 
{ /* Llib/thread.scm 345 */
obj_t BgL_vectorz00_2204;int BgL_kz00_2205;
if(
VECTORP(BgL_bucketz00_2193))
{ /* Llib/thread.scm 345 */
BgL_vectorz00_2204 = BgL_bucketz00_2193; }  else 
{ 
obj_t BgL_auxz00_5390;
BgL_auxz00_5390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14270)), BGl_string3216z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2193); 
FAILURE(BgL_auxz00_5390,BFALSE,BFALSE);} 
BgL_kz00_2205 = 
(int)(BgL_restz00_2191); 
{ /* Llib/thread.scm 345 */
obj_t BgL_aux2860z00_3319;
BgL_aux2860z00_3319 = 
VECTOR_REF(BgL_vectorz00_2204,BgL_kz00_2205); 
if(
PROCEDUREP(BgL_aux2860z00_3319))
{ /* Llib/thread.scm 345 */
BgL_method1966z00_2181 = BgL_aux2860z00_3319; }  else 
{ 
obj_t BgL_auxz00_5398;
BgL_auxz00_5398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14270)), BGl_string3216z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2860z00_3319); 
FAILURE(BgL_auxz00_5398,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1966z00_2181, ((long)1)))
{ /* Llib/thread.scm 345 */
return 
PROCEDURE_ENTRY(BgL_method1966z00_2181)(BgL_method1966z00_2181, 
(obj_t)(BgL_thz00_30), BEOA);}  else 
{ /* Llib/thread.scm 345 */
FAILURE(BGl_string3270z00zz__threadz00,BGl_list3271z00zz__threadz00,BgL_method1966z00_2181);} } } 
}



/* _thread-start-joinable! */
obj_t BGl__threadzd2startzd2joinablez12z12zz__threadz00(obj_t BgL_envz00_2953, obj_t BgL_thz00_2954)
{ AN_OBJECT;
{ /* Llib/thread.scm 345 */
{ /* Llib/thread.scm 345 */
BgL_threadz00_bglt BgL_auxz00_5408;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2954, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 345 */
BgL_auxz00_5408 = 
(BgL_threadz00_bglt)(BgL_thz00_2954)
; }  else 
{ 
obj_t BgL_auxz00_5412;
BgL_auxz00_5412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14270)), BGl_string3274z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2954); 
FAILURE(BgL_auxz00_5412,BFALSE,BFALSE);} 
return 
BGl_threadzd2startzd2joinablez12z12zz__threadz00(BgL_auxz00_5408);} } 
}



/* thread-start-joinabl1964 */
obj_t BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_threadz00_bglt BgL_thz00_31)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3275z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_31));} 
}



/* _thread-start-joinabl1964 */
obj_t BGl__threadzd2startzd2joinabl1964z00zz__threadz00(obj_t BgL_envz00_2955, obj_t BgL_thz00_2956)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5419;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2956, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5419 = 
(BgL_threadz00_bglt)(BgL_thz00_2956)
; }  else 
{ 
obj_t BgL_auxz00_5423;
BgL_auxz00_5423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3277z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2956); 
FAILURE(BgL_auxz00_5423,BFALSE,BFALSE);} 
return 
BGl_threadzd2startzd2joinabl1964z00zz__threadz00(BgL_auxz00_5419);} } 
}



/* thread-join! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2joinz12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_32, obj_t BgL_timeoutz00_33)
{ AN_OBJECT;
{ /* Llib/thread.scm 350 */
{ /* Llib/thread.scm 350 */
obj_t BgL_method1968z00_2206;
{ /* Llib/thread.scm 350 */
BgL_objectz00_bglt BgL_objz00_2208;
BgL_objz00_2208 = 
(BgL_objectz00_bglt)(BgL_thz00_32); 
{ /* Llib/thread.scm 350 */
long BgL_objzd2classzd2numz00_2209;
BgL_objzd2classzd2numz00_2209 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2208); 
{ /* Llib/thread.scm 350 */
obj_t BgL_arg2549z00_2210;
BgL_arg2549z00_2210 = 
PROCEDURE_REF(BGl_threadzd2joinz12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 350 */
obj_t BgL_arrayz00_2212;int BgL_offsetz00_2213;
if(
VECTORP(BgL_arg2549z00_2210))
{ /* Llib/thread.scm 350 */
BgL_arrayz00_2212 = BgL_arg2549z00_2210; }  else 
{ 
obj_t BgL_auxz00_5434;
BgL_auxz00_5434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14546)), BGl_string3217z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2210); 
FAILURE(BgL_auxz00_5434,BFALSE,BFALSE);} 
BgL_offsetz00_2213 = 
(int)(BgL_objzd2classzd2numz00_2209); 
{ /* Llib/thread.scm 350 */
long BgL_offsetz00_2214;
BgL_offsetz00_2214 = 
(
(long)(BgL_offsetz00_2213)-OBJECT_TYPE); 
{ /* Llib/thread.scm 350 */
long BgL_modz00_2215;
{ /* Llib/thread.scm 350 */
int BgL_arg2551z00_2216;
BgL_arg2551z00_2216 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 350 */
long BgL_auxz00_5442;
BgL_auxz00_5442 = 
(long)(BgL_arg2551z00_2216); 
BgL_modz00_2215 = 
(BgL_offsetz00_2214/BgL_auxz00_5442); } } 
{ /* Llib/thread.scm 350 */
long BgL_restz00_2217;
{ /* Llib/thread.scm 350 */
int BgL_arg2550z00_2218;
BgL_arg2550z00_2218 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 350 */
long BgL_auxz00_5446;
BgL_auxz00_5446 = 
(long)(BgL_arg2550z00_2218); 
BgL_restz00_2217 = 
(BgL_offsetz00_2214%BgL_auxz00_5446); } } 
{ /* Llib/thread.scm 350 */

{ /* Llib/thread.scm 350 */
obj_t BgL_bucketz00_2219;
BgL_bucketz00_2219 = 
VECTOR_REF(BgL_arrayz00_2212,
(int)(BgL_modz00_2215)); 
{ /* Llib/thread.scm 350 */
obj_t BgL_vectorz00_2230;int BgL_kz00_2231;
if(
VECTORP(BgL_bucketz00_2219))
{ /* Llib/thread.scm 350 */
BgL_vectorz00_2230 = BgL_bucketz00_2219; }  else 
{ 
obj_t BgL_auxz00_5453;
BgL_auxz00_5453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14546)), BGl_string3217z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2219); 
FAILURE(BgL_auxz00_5453,BFALSE,BFALSE);} 
BgL_kz00_2231 = 
(int)(BgL_restz00_2217); 
{ /* Llib/thread.scm 350 */
obj_t BgL_aux2872z00_3332;
BgL_aux2872z00_3332 = 
VECTOR_REF(BgL_vectorz00_2230,BgL_kz00_2231); 
if(
PROCEDUREP(BgL_aux2872z00_3332))
{ /* Llib/thread.scm 350 */
BgL_method1968z00_2206 = BgL_aux2872z00_3332; }  else 
{ 
obj_t BgL_auxz00_5461;
BgL_auxz00_5461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14546)), BGl_string3217z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2872z00_3332); 
FAILURE(BgL_auxz00_5461,BFALSE,BFALSE);} } } } } } } } } } } } 
{ /* Llib/thread.scm 350 */
obj_t BgL_valz00_3335;
{ /* Llib/thread.scm 350 */
obj_t BgL_list2201z00_2207;
BgL_list2201z00_2207 = 
MAKE_PAIR(BgL_timeoutz00_33, BNIL); 
BgL_valz00_3335 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
(obj_t)(BgL_thz00_32), BgL_list2201z00_2207); } 
{ /* Llib/thread.scm 350 */
int BgL_len2874z00_3336;
BgL_len2874z00_3336 = 
(int)(
bgl_list_length(BgL_valz00_3335)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1968z00_2206, BgL_len2874z00_3336))
{ /* Llib/thread.scm 350 */
return 
apply(BgL_method1968z00_2206, BgL_valz00_3335);}  else 
{ /* Llib/thread.scm 350 */
FAILURE(BGl_symbol3278z00zz__threadz00,BGl_string3244z00zz__threadz00,BGl_list3279z00zz__threadz00);} } } } } 
}



/* _thread-join! */
obj_t BGl__threadzd2joinz12zc0zz__threadz00(obj_t BgL_envz00_2957, obj_t BgL_thz00_2958, obj_t BgL_timeoutz00_2959)
{ AN_OBJECT;
{ /* Llib/thread.scm 350 */
{ /* Llib/thread.scm 350 */
BgL_threadz00_bglt BgL_auxz00_5475;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2958, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 350 */
BgL_auxz00_5475 = 
(BgL_threadz00_bglt)(BgL_thz00_2958)
; }  else 
{ 
obj_t BgL_auxz00_5479;
BgL_auxz00_5479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14546)), BGl_string3291z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2958); 
FAILURE(BgL_auxz00_5479,BFALSE,BFALSE);} 
return 
BGl_threadzd2joinz12zc0zz__threadz00(BgL_auxz00_5475, BgL_timeoutz00_2959);} } 
}



/* thread-join!-default1967 */
obj_t BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_34, obj_t BgL_timeoutz00_35)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3292z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_34));} 
}



/* _thread-join!-default1967 */
obj_t BGl__threadzd2joinz12zd2default1967z12zz__threadz00(obj_t BgL_envz00_2960, obj_t BgL_thz00_2961, obj_t BgL_timeoutz00_2962)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5486;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2961, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5486 = 
(BgL_threadz00_bglt)(BgL_thz00_2961)
; }  else 
{ 
obj_t BgL_auxz00_5490;
BgL_auxz00_5490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3294z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2961); 
FAILURE(BgL_auxz00_5490,BFALSE,BFALSE);} 
return 
BGl_threadzd2joinz12zd2default1967z12zz__threadz00(BgL_auxz00_5486, BgL_timeoutz00_2962);} } 
}



/* thread-terminate! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2terminatez12zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_36)
{ AN_OBJECT;
{ /* Llib/thread.scm 355 */
{ /* Llib/thread.scm 355 */
obj_t BgL_method1970z00_2232;
{ /* Llib/thread.scm 355 */
BgL_objectz00_bglt BgL_objz00_2233;
BgL_objz00_2233 = 
(BgL_objectz00_bglt)(BgL_thz00_36); 
{ /* Llib/thread.scm 355 */
long BgL_objzd2classzd2numz00_2234;
BgL_objzd2classzd2numz00_2234 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2233); 
{ /* Llib/thread.scm 355 */
obj_t BgL_arg2549z00_2235;
BgL_arg2549z00_2235 = 
PROCEDURE_REF(BGl_threadzd2terminatez12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 355 */
obj_t BgL_arrayz00_2237;int BgL_offsetz00_2238;
if(
VECTORP(BgL_arg2549z00_2235))
{ /* Llib/thread.scm 355 */
BgL_arrayz00_2237 = BgL_arg2549z00_2235; }  else 
{ 
obj_t BgL_auxz00_5501;
BgL_auxz00_5501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14822)), BGl_string3218z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2235); 
FAILURE(BgL_auxz00_5501,BFALSE,BFALSE);} 
BgL_offsetz00_2238 = 
(int)(BgL_objzd2classzd2numz00_2234); 
{ /* Llib/thread.scm 355 */
long BgL_offsetz00_2239;
BgL_offsetz00_2239 = 
(
(long)(BgL_offsetz00_2238)-OBJECT_TYPE); 
{ /* Llib/thread.scm 355 */
long BgL_modz00_2240;
{ /* Llib/thread.scm 355 */
int BgL_arg2551z00_2241;
BgL_arg2551z00_2241 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 355 */
long BgL_auxz00_5509;
BgL_auxz00_5509 = 
(long)(BgL_arg2551z00_2241); 
BgL_modz00_2240 = 
(BgL_offsetz00_2239/BgL_auxz00_5509); } } 
{ /* Llib/thread.scm 355 */
long BgL_restz00_2242;
{ /* Llib/thread.scm 355 */
int BgL_arg2550z00_2243;
BgL_arg2550z00_2243 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 355 */
long BgL_auxz00_5513;
BgL_auxz00_5513 = 
(long)(BgL_arg2550z00_2243); 
BgL_restz00_2242 = 
(BgL_offsetz00_2239%BgL_auxz00_5513); } } 
{ /* Llib/thread.scm 355 */

{ /* Llib/thread.scm 355 */
obj_t BgL_bucketz00_2244;
BgL_bucketz00_2244 = 
VECTOR_REF(BgL_arrayz00_2237,
(int)(BgL_modz00_2240)); 
{ /* Llib/thread.scm 355 */
obj_t BgL_vectorz00_2255;int BgL_kz00_2256;
if(
VECTORP(BgL_bucketz00_2244))
{ /* Llib/thread.scm 355 */
BgL_vectorz00_2255 = BgL_bucketz00_2244; }  else 
{ 
obj_t BgL_auxz00_5520;
BgL_auxz00_5520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14822)), BGl_string3218z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2244); 
FAILURE(BgL_auxz00_5520,BFALSE,BFALSE);} 
BgL_kz00_2256 = 
(int)(BgL_restz00_2242); 
{ /* Llib/thread.scm 355 */
obj_t BgL_aux2884z00_3346;
BgL_aux2884z00_3346 = 
VECTOR_REF(BgL_vectorz00_2255,BgL_kz00_2256); 
if(
PROCEDUREP(BgL_aux2884z00_3346))
{ /* Llib/thread.scm 355 */
BgL_method1970z00_2232 = BgL_aux2884z00_3346; }  else 
{ 
obj_t BgL_auxz00_5528;
BgL_auxz00_5528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14822)), BGl_string3218z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2884z00_3346); 
FAILURE(BgL_auxz00_5528,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1970z00_2232, ((long)1)))
{ /* Llib/thread.scm 355 */
return 
PROCEDURE_ENTRY(BgL_method1970z00_2232)(BgL_method1970z00_2232, 
(obj_t)(BgL_thz00_36), BEOA);}  else 
{ /* Llib/thread.scm 355 */
FAILURE(BGl_string3295z00zz__threadz00,BGl_list3296z00zz__threadz00,BgL_method1970z00_2232);} } } 
}



/* _thread-terminate! */
obj_t BGl__threadzd2terminatez12zc0zz__threadz00(obj_t BgL_envz00_2963, obj_t BgL_thz00_2964)
{ AN_OBJECT;
{ /* Llib/thread.scm 355 */
{ /* Llib/thread.scm 355 */
BgL_threadz00_bglt BgL_auxz00_5538;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2964, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 355 */
BgL_auxz00_5538 = 
(BgL_threadz00_bglt)(BgL_thz00_2964)
; }  else 
{ 
obj_t BgL_auxz00_5542;
BgL_auxz00_5542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)14822)), BGl_string3299z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2964); 
FAILURE(BgL_auxz00_5542,BFALSE,BFALSE);} 
return 
BGl_threadzd2terminatez12zc0zz__threadz00(BgL_auxz00_5538);} } 
}



/* thread-terminate!-de1969 */
obj_t BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_37)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3300z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_37));} 
}



/* _thread-terminate!-de1969 */
obj_t BGl__threadzd2terminatez12zd2de1969z12zz__threadz00(obj_t BgL_envz00_2965, obj_t BgL_thz00_2966)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5549;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2966, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5549 = 
(BgL_threadz00_bglt)(BgL_thz00_2966)
; }  else 
{ 
obj_t BgL_auxz00_5553;
BgL_auxz00_5553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3302z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2966); 
FAILURE(BgL_auxz00_5553,BFALSE,BFALSE);} 
return 
BGl_threadzd2terminatez12zd2de1969z12zz__threadz00(BgL_auxz00_5549);} } 
}



/* thread-get-specific */
BGL_EXPORTED_DEF obj_t BGl_threadzd2getzd2specificz00zz__threadz00(BgL_threadz00_bglt BgL_thz00_38)
{ AN_OBJECT;
{ /* Llib/thread.scm 360 */
{ /* Llib/thread.scm 360 */
obj_t BgL_method1972z00_2257;
{ /* Llib/thread.scm 360 */
BgL_objectz00_bglt BgL_objz00_2258;
BgL_objz00_2258 = 
(BgL_objectz00_bglt)(BgL_thz00_38); 
{ /* Llib/thread.scm 360 */
long BgL_objzd2classzd2numz00_2259;
BgL_objzd2classzd2numz00_2259 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2258); 
{ /* Llib/thread.scm 360 */
obj_t BgL_arg2549z00_2260;
BgL_arg2549z00_2260 = 
PROCEDURE_REF(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 360 */
obj_t BgL_arrayz00_2262;int BgL_offsetz00_2263;
if(
VECTORP(BgL_arg2549z00_2260))
{ /* Llib/thread.scm 360 */
BgL_arrayz00_2262 = BgL_arg2549z00_2260; }  else 
{ 
obj_t BgL_auxz00_5564;
BgL_auxz00_5564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15093)), BGl_string3219z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2260); 
FAILURE(BgL_auxz00_5564,BFALSE,BFALSE);} 
BgL_offsetz00_2263 = 
(int)(BgL_objzd2classzd2numz00_2259); 
{ /* Llib/thread.scm 360 */
long BgL_offsetz00_2264;
BgL_offsetz00_2264 = 
(
(long)(BgL_offsetz00_2263)-OBJECT_TYPE); 
{ /* Llib/thread.scm 360 */
long BgL_modz00_2265;
{ /* Llib/thread.scm 360 */
int BgL_arg2551z00_2266;
BgL_arg2551z00_2266 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 360 */
long BgL_auxz00_5572;
BgL_auxz00_5572 = 
(long)(BgL_arg2551z00_2266); 
BgL_modz00_2265 = 
(BgL_offsetz00_2264/BgL_auxz00_5572); } } 
{ /* Llib/thread.scm 360 */
long BgL_restz00_2267;
{ /* Llib/thread.scm 360 */
int BgL_arg2550z00_2268;
BgL_arg2550z00_2268 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 360 */
long BgL_auxz00_5576;
BgL_auxz00_5576 = 
(long)(BgL_arg2550z00_2268); 
BgL_restz00_2267 = 
(BgL_offsetz00_2264%BgL_auxz00_5576); } } 
{ /* Llib/thread.scm 360 */

{ /* Llib/thread.scm 360 */
obj_t BgL_bucketz00_2269;
BgL_bucketz00_2269 = 
VECTOR_REF(BgL_arrayz00_2262,
(int)(BgL_modz00_2265)); 
{ /* Llib/thread.scm 360 */
obj_t BgL_vectorz00_2280;int BgL_kz00_2281;
if(
VECTORP(BgL_bucketz00_2269))
{ /* Llib/thread.scm 360 */
BgL_vectorz00_2280 = BgL_bucketz00_2269; }  else 
{ 
obj_t BgL_auxz00_5583;
BgL_auxz00_5583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15093)), BGl_string3219z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2269); 
FAILURE(BgL_auxz00_5583,BFALSE,BFALSE);} 
BgL_kz00_2281 = 
(int)(BgL_restz00_2267); 
{ /* Llib/thread.scm 360 */
obj_t BgL_aux2896z00_3359;
BgL_aux2896z00_3359 = 
VECTOR_REF(BgL_vectorz00_2280,BgL_kz00_2281); 
if(
PROCEDUREP(BgL_aux2896z00_3359))
{ /* Llib/thread.scm 360 */
BgL_method1972z00_2257 = BgL_aux2896z00_3359; }  else 
{ 
obj_t BgL_auxz00_5591;
BgL_auxz00_5591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15093)), BGl_string3219z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2896z00_3359); 
FAILURE(BgL_auxz00_5591,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1972z00_2257, ((long)1)))
{ /* Llib/thread.scm 360 */
return 
PROCEDURE_ENTRY(BgL_method1972z00_2257)(BgL_method1972z00_2257, 
(obj_t)(BgL_thz00_38), BEOA);}  else 
{ /* Llib/thread.scm 360 */
FAILURE(BGl_string3303z00zz__threadz00,BGl_list3304z00zz__threadz00,BgL_method1972z00_2257);} } } 
}



/* _thread-get-specific */
obj_t BGl__threadzd2getzd2specificz00zz__threadz00(obj_t BgL_envz00_2868, obj_t BgL_thz00_2869)
{ AN_OBJECT;
{ /* Llib/thread.scm 360 */
{ /* Llib/thread.scm 360 */
BgL_threadz00_bglt BgL_auxz00_5601;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2869, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 360 */
BgL_auxz00_5601 = 
(BgL_threadz00_bglt)(BgL_thz00_2869)
; }  else 
{ 
obj_t BgL_auxz00_5605;
BgL_auxz00_5605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15093)), BGl_string3307z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2869); 
FAILURE(BgL_auxz00_5605,BFALSE,BFALSE);} 
return 
BGl_threadzd2getzd2specificz00zz__threadz00(BgL_auxz00_5601);} } 
}



/* thread-get-specific-1971 */
obj_t BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_threadz00_bglt BgL_thz00_39)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3308z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_39));} 
}



/* _thread-get-specific-1971 */
obj_t BGl__threadzd2getzd2specificzd21971zd2zz__threadz00(obj_t BgL_envz00_2967, obj_t BgL_thz00_2968)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5612;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2968, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5612 = 
(BgL_threadz00_bglt)(BgL_thz00_2968)
; }  else 
{ 
obj_t BgL_auxz00_5616;
BgL_auxz00_5616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3310z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2968); 
FAILURE(BgL_auxz00_5616,BFALSE,BFALSE);} 
return 
BGl_threadzd2getzd2specificzd21971zd2zz__threadz00(BgL_auxz00_5612);} } 
}



/* thread-set-specific! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_40, obj_t BgL_vz00_41)
{ AN_OBJECT;
{ /* Llib/thread.scm 365 */
{ /* Llib/thread.scm 365 */
obj_t BgL_method1974z00_2282;
{ /* Llib/thread.scm 365 */
BgL_objectz00_bglt BgL_objz00_2283;
BgL_objz00_2283 = 
(BgL_objectz00_bglt)(BgL_thz00_40); 
{ /* Llib/thread.scm 365 */
long BgL_objzd2classzd2numz00_2284;
BgL_objzd2classzd2numz00_2284 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2283); 
{ /* Llib/thread.scm 365 */
obj_t BgL_arg2549z00_2285;
BgL_arg2549z00_2285 = 
PROCEDURE_REF(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 365 */
obj_t BgL_arrayz00_2287;int BgL_offsetz00_2288;
if(
VECTORP(BgL_arg2549z00_2285))
{ /* Llib/thread.scm 365 */
BgL_arrayz00_2287 = BgL_arg2549z00_2285; }  else 
{ 
obj_t BgL_auxz00_5627;
BgL_auxz00_5627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15366)), BGl_string3220z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2285); 
FAILURE(BgL_auxz00_5627,BFALSE,BFALSE);} 
BgL_offsetz00_2288 = 
(int)(BgL_objzd2classzd2numz00_2284); 
{ /* Llib/thread.scm 365 */
long BgL_offsetz00_2289;
BgL_offsetz00_2289 = 
(
(long)(BgL_offsetz00_2288)-OBJECT_TYPE); 
{ /* Llib/thread.scm 365 */
long BgL_modz00_2290;
{ /* Llib/thread.scm 365 */
int BgL_arg2551z00_2291;
BgL_arg2551z00_2291 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 365 */
long BgL_auxz00_5635;
BgL_auxz00_5635 = 
(long)(BgL_arg2551z00_2291); 
BgL_modz00_2290 = 
(BgL_offsetz00_2289/BgL_auxz00_5635); } } 
{ /* Llib/thread.scm 365 */
long BgL_restz00_2292;
{ /* Llib/thread.scm 365 */
int BgL_arg2550z00_2293;
BgL_arg2550z00_2293 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 365 */
long BgL_auxz00_5639;
BgL_auxz00_5639 = 
(long)(BgL_arg2550z00_2293); 
BgL_restz00_2292 = 
(BgL_offsetz00_2289%BgL_auxz00_5639); } } 
{ /* Llib/thread.scm 365 */

{ /* Llib/thread.scm 365 */
obj_t BgL_bucketz00_2294;
BgL_bucketz00_2294 = 
VECTOR_REF(BgL_arrayz00_2287,
(int)(BgL_modz00_2290)); 
{ /* Llib/thread.scm 365 */
obj_t BgL_vectorz00_2305;int BgL_kz00_2306;
if(
VECTORP(BgL_bucketz00_2294))
{ /* Llib/thread.scm 365 */
BgL_vectorz00_2305 = BgL_bucketz00_2294; }  else 
{ 
obj_t BgL_auxz00_5646;
BgL_auxz00_5646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15366)), BGl_string3220z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2294); 
FAILURE(BgL_auxz00_5646,BFALSE,BFALSE);} 
BgL_kz00_2306 = 
(int)(BgL_restz00_2292); 
{ /* Llib/thread.scm 365 */
obj_t BgL_aux2908z00_3372;
BgL_aux2908z00_3372 = 
VECTOR_REF(BgL_vectorz00_2305,BgL_kz00_2306); 
if(
PROCEDUREP(BgL_aux2908z00_3372))
{ /* Llib/thread.scm 365 */
BgL_method1974z00_2282 = BgL_aux2908z00_3372; }  else 
{ 
obj_t BgL_auxz00_5654;
BgL_auxz00_5654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15366)), BGl_string3220z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2908z00_3372); 
FAILURE(BgL_auxz00_5654,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1974z00_2282, ((long)2)))
{ /* Llib/thread.scm 365 */
return 
PROCEDURE_ENTRY(BgL_method1974z00_2282)(BgL_method1974z00_2282, 
(obj_t)(BgL_thz00_40), BgL_vz00_41, BEOA);}  else 
{ /* Llib/thread.scm 365 */
FAILURE(BGl_string3311z00zz__threadz00,BGl_list3312z00zz__threadz00,BgL_method1974z00_2282);} } } 
}



/* _thread-set-specific! */
obj_t BGl__threadzd2setzd2specificz12z12zz__threadz00(obj_t BgL_envz00_2870, obj_t BgL_thz00_2871, obj_t BgL_vz00_2872)
{ AN_OBJECT;
{ /* Llib/thread.scm 365 */
{ /* Llib/thread.scm 365 */
BgL_threadz00_bglt BgL_auxz00_5664;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2871, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 365 */
BgL_auxz00_5664 = 
(BgL_threadz00_bglt)(BgL_thz00_2871)
; }  else 
{ 
obj_t BgL_auxz00_5668;
BgL_auxz00_5668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15366)), BGl_string3317z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2871); 
FAILURE(BgL_auxz00_5668,BFALSE,BFALSE);} 
return 
BGl_threadzd2setzd2specificz12z12zz__threadz00(BgL_auxz00_5664, BgL_vz00_2872);} } 
}



/* thread-set-specific!1973 */
obj_t BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_42, obj_t BgL_vz00_43)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3318z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_42));} 
}



/* _thread-set-specific!1973 */
obj_t BGl__threadzd2setzd2specificz121973z12zz__threadz00(obj_t BgL_envz00_2969, obj_t BgL_thz00_2970, obj_t BgL_vz00_2971)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5675;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2970, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5675 = 
(BgL_threadz00_bglt)(BgL_thz00_2970)
; }  else 
{ 
obj_t BgL_auxz00_5679;
BgL_auxz00_5679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3320z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2970); 
FAILURE(BgL_auxz00_5679,BFALSE,BFALSE);} 
return 
BGl_threadzd2setzd2specificz121973z12zz__threadz00(BgL_auxz00_5675, BgL_vz00_2971);} } 
}



/* thread-get-cleanup */
BGL_EXPORTED_DEF obj_t BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_threadz00_bglt BgL_thz00_44)
{ AN_OBJECT;
{ /* Llib/thread.scm 370 */
{ /* Llib/thread.scm 370 */
obj_t BgL_method1976z00_2307;
{ /* Llib/thread.scm 370 */
BgL_objectz00_bglt BgL_objz00_2308;
BgL_objz00_2308 = 
(BgL_objectz00_bglt)(BgL_thz00_44); 
{ /* Llib/thread.scm 370 */
long BgL_objzd2classzd2numz00_2309;
BgL_objzd2classzd2numz00_2309 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2308); 
{ /* Llib/thread.scm 370 */
obj_t BgL_arg2549z00_2310;
BgL_arg2549z00_2310 = 
PROCEDURE_REF(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 370 */
obj_t BgL_arrayz00_2312;int BgL_offsetz00_2313;
if(
VECTORP(BgL_arg2549z00_2310))
{ /* Llib/thread.scm 370 */
BgL_arrayz00_2312 = BgL_arg2549z00_2310; }  else 
{ 
obj_t BgL_auxz00_5690;
BgL_auxz00_5690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15647)), BGl_string3221z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2310); 
FAILURE(BgL_auxz00_5690,BFALSE,BFALSE);} 
BgL_offsetz00_2313 = 
(int)(BgL_objzd2classzd2numz00_2309); 
{ /* Llib/thread.scm 370 */
long BgL_offsetz00_2314;
BgL_offsetz00_2314 = 
(
(long)(BgL_offsetz00_2313)-OBJECT_TYPE); 
{ /* Llib/thread.scm 370 */
long BgL_modz00_2315;
{ /* Llib/thread.scm 370 */
int BgL_arg2551z00_2316;
BgL_arg2551z00_2316 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 370 */
long BgL_auxz00_5698;
BgL_auxz00_5698 = 
(long)(BgL_arg2551z00_2316); 
BgL_modz00_2315 = 
(BgL_offsetz00_2314/BgL_auxz00_5698); } } 
{ /* Llib/thread.scm 370 */
long BgL_restz00_2317;
{ /* Llib/thread.scm 370 */
int BgL_arg2550z00_2318;
BgL_arg2550z00_2318 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 370 */
long BgL_auxz00_5702;
BgL_auxz00_5702 = 
(long)(BgL_arg2550z00_2318); 
BgL_restz00_2317 = 
(BgL_offsetz00_2314%BgL_auxz00_5702); } } 
{ /* Llib/thread.scm 370 */

{ /* Llib/thread.scm 370 */
obj_t BgL_bucketz00_2319;
BgL_bucketz00_2319 = 
VECTOR_REF(BgL_arrayz00_2312,
(int)(BgL_modz00_2315)); 
{ /* Llib/thread.scm 370 */
obj_t BgL_vectorz00_2330;int BgL_kz00_2331;
if(
VECTORP(BgL_bucketz00_2319))
{ /* Llib/thread.scm 370 */
BgL_vectorz00_2330 = BgL_bucketz00_2319; }  else 
{ 
obj_t BgL_auxz00_5709;
BgL_auxz00_5709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15647)), BGl_string3221z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2319); 
FAILURE(BgL_auxz00_5709,BFALSE,BFALSE);} 
BgL_kz00_2331 = 
(int)(BgL_restz00_2317); 
{ /* Llib/thread.scm 370 */
obj_t BgL_aux2920z00_3385;
BgL_aux2920z00_3385 = 
VECTOR_REF(BgL_vectorz00_2330,BgL_kz00_2331); 
if(
PROCEDUREP(BgL_aux2920z00_3385))
{ /* Llib/thread.scm 370 */
BgL_method1976z00_2307 = BgL_aux2920z00_3385; }  else 
{ 
obj_t BgL_auxz00_5717;
BgL_auxz00_5717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15647)), BGl_string3221z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2920z00_3385); 
FAILURE(BgL_auxz00_5717,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1976z00_2307, ((long)1)))
{ /* Llib/thread.scm 370 */
return 
PROCEDURE_ENTRY(BgL_method1976z00_2307)(BgL_method1976z00_2307, 
(obj_t)(BgL_thz00_44), BEOA);}  else 
{ /* Llib/thread.scm 370 */
FAILURE(BGl_string3321z00zz__threadz00,BGl_list3322z00zz__threadz00,BgL_method1976z00_2307);} } } 
}



/* _thread-get-cleanup */
obj_t BGl__threadzd2getzd2cleanupz00zz__threadz00(obj_t BgL_envz00_2863, obj_t BgL_thz00_2864)
{ AN_OBJECT;
{ /* Llib/thread.scm 370 */
{ /* Llib/thread.scm 370 */
BgL_threadz00_bglt BgL_auxz00_5727;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2864, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 370 */
BgL_auxz00_5727 = 
(BgL_threadz00_bglt)(BgL_thz00_2864)
; }  else 
{ 
obj_t BgL_auxz00_5731;
BgL_auxz00_5731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15647)), BGl_string3325z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2864); 
FAILURE(BgL_auxz00_5731,BFALSE,BFALSE);} 
return 
BGl_threadzd2getzd2cleanupz00zz__threadz00(BgL_auxz00_5727);} } 
}



/* thread-get-cleanup-d1975 */
obj_t BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_threadz00_bglt BgL_thz00_45)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3326z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_45));} 
}



/* _thread-get-cleanup-d1975 */
obj_t BGl__threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(obj_t BgL_envz00_2972, obj_t BgL_thz00_2973)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5738;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2973, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5738 = 
(BgL_threadz00_bglt)(BgL_thz00_2973)
; }  else 
{ 
obj_t BgL_auxz00_5742;
BgL_auxz00_5742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3328z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2973); 
FAILURE(BgL_auxz00_5742,BFALSE,BFALSE);} 
return 
BGl_threadzd2getzd2cleanupzd2d1975zd2zz__threadz00(BgL_auxz00_5738);} } 
}



/* thread-set-cleanup! */
BGL_EXPORTED_DEF obj_t BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_threadz00_bglt BgL_thz00_46, obj_t BgL_vz00_47)
{ AN_OBJECT;
{ /* Llib/thread.scm 375 */
{ /* Llib/thread.scm 375 */
obj_t BgL_method1978z00_2332;
{ /* Llib/thread.scm 375 */
BgL_objectz00_bglt BgL_objz00_2333;
BgL_objz00_2333 = 
(BgL_objectz00_bglt)(BgL_thz00_46); 
{ /* Llib/thread.scm 375 */
long BgL_objzd2classzd2numz00_2334;
BgL_objzd2classzd2numz00_2334 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2333); 
{ /* Llib/thread.scm 375 */
obj_t BgL_arg2549z00_2335;
BgL_arg2549z00_2335 = 
PROCEDURE_REF(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 375 */
obj_t BgL_arrayz00_2337;int BgL_offsetz00_2338;
if(
VECTORP(BgL_arg2549z00_2335))
{ /* Llib/thread.scm 375 */
BgL_arrayz00_2337 = BgL_arg2549z00_2335; }  else 
{ 
obj_t BgL_auxz00_5753;
BgL_auxz00_5753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15919)), BGl_string3222z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2335); 
FAILURE(BgL_auxz00_5753,BFALSE,BFALSE);} 
BgL_offsetz00_2338 = 
(int)(BgL_objzd2classzd2numz00_2334); 
{ /* Llib/thread.scm 375 */
long BgL_offsetz00_2339;
BgL_offsetz00_2339 = 
(
(long)(BgL_offsetz00_2338)-OBJECT_TYPE); 
{ /* Llib/thread.scm 375 */
long BgL_modz00_2340;
{ /* Llib/thread.scm 375 */
int BgL_arg2551z00_2341;
BgL_arg2551z00_2341 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 375 */
long BgL_auxz00_5761;
BgL_auxz00_5761 = 
(long)(BgL_arg2551z00_2341); 
BgL_modz00_2340 = 
(BgL_offsetz00_2339/BgL_auxz00_5761); } } 
{ /* Llib/thread.scm 375 */
long BgL_restz00_2342;
{ /* Llib/thread.scm 375 */
int BgL_arg2550z00_2343;
BgL_arg2550z00_2343 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 375 */
long BgL_auxz00_5765;
BgL_auxz00_5765 = 
(long)(BgL_arg2550z00_2343); 
BgL_restz00_2342 = 
(BgL_offsetz00_2339%BgL_auxz00_5765); } } 
{ /* Llib/thread.scm 375 */

{ /* Llib/thread.scm 375 */
obj_t BgL_bucketz00_2344;
BgL_bucketz00_2344 = 
VECTOR_REF(BgL_arrayz00_2337,
(int)(BgL_modz00_2340)); 
{ /* Llib/thread.scm 375 */
obj_t BgL_vectorz00_2355;int BgL_kz00_2356;
if(
VECTORP(BgL_bucketz00_2344))
{ /* Llib/thread.scm 375 */
BgL_vectorz00_2355 = BgL_bucketz00_2344; }  else 
{ 
obj_t BgL_auxz00_5772;
BgL_auxz00_5772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15919)), BGl_string3222z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2344); 
FAILURE(BgL_auxz00_5772,BFALSE,BFALSE);} 
BgL_kz00_2356 = 
(int)(BgL_restz00_2342); 
{ /* Llib/thread.scm 375 */
obj_t BgL_aux2932z00_3398;
BgL_aux2932z00_3398 = 
VECTOR_REF(BgL_vectorz00_2355,BgL_kz00_2356); 
if(
PROCEDUREP(BgL_aux2932z00_3398))
{ /* Llib/thread.scm 375 */
BgL_method1978z00_2332 = BgL_aux2932z00_3398; }  else 
{ 
obj_t BgL_auxz00_5780;
BgL_auxz00_5780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15919)), BGl_string3222z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2932z00_3398); 
FAILURE(BgL_auxz00_5780,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1978z00_2332, ((long)2)))
{ /* Llib/thread.scm 375 */
return 
PROCEDURE_ENTRY(BgL_method1978z00_2332)(BgL_method1978z00_2332, 
(obj_t)(BgL_thz00_46), BgL_vz00_47, BEOA);}  else 
{ /* Llib/thread.scm 375 */
FAILURE(BGl_string3329z00zz__threadz00,BGl_list3330z00zz__threadz00,BgL_method1978z00_2332);} } } 
}



/* _thread-set-cleanup! */
obj_t BGl__threadzd2setzd2cleanupz12z12zz__threadz00(obj_t BgL_envz00_2865, obj_t BgL_thz00_2866, obj_t BgL_vz00_2867)
{ AN_OBJECT;
{ /* Llib/thread.scm 375 */
{ /* Llib/thread.scm 375 */
BgL_threadz00_bglt BgL_auxz00_5790;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2866, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 375 */
BgL_auxz00_5790 = 
(BgL_threadz00_bglt)(BgL_thz00_2866)
; }  else 
{ 
obj_t BgL_auxz00_5794;
BgL_auxz00_5794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)15919)), BGl_string3333z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2866); 
FAILURE(BgL_auxz00_5794,BFALSE,BFALSE);} 
return 
BGl_threadzd2setzd2cleanupz12z12zz__threadz00(BgL_auxz00_5790, BgL_vz00_2867);} } 
}



/* thread-set-cleanup!-1977 */
obj_t BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_threadz00_bglt BgL_thz00_48, obj_t BgL_vz00_49)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3334z00zz__threadz00, BGl_string3233z00zz__threadz00, 
(obj_t)(BgL_thz00_48));} 
}



/* _thread-set-cleanup!-1977 */
obj_t BGl__threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(obj_t BgL_envz00_2974, obj_t BgL_thz00_2975, obj_t BgL_vz00_2976)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5801;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_2975, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_auxz00_5801 = 
(BgL_threadz00_bglt)(BgL_thz00_2975)
; }  else 
{ 
obj_t BgL_auxz00_5805;
BgL_auxz00_5805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3336z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_thz00_2975); 
FAILURE(BgL_auxz00_5805,BFALSE,BFALSE);} 
return 
BGl_threadzd2setzd2cleanupz12zd21977zc0zz__threadz00(BgL_auxz00_5801, BgL_vz00_2976);} } 
}



/* %user-current-thread */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_threadz00_bglt BgL_oz00_54)
{ AN_OBJECT;
{ /* Llib/thread.scm 386 */
{ /* Llib/thread.scm 386 */
obj_t BgL_method1983z00_2357;
{ /* Llib/thread.scm 386 */
BgL_objectz00_bglt BgL_objz00_2358;
BgL_objz00_2358 = 
(BgL_objectz00_bglt)(BgL_oz00_54); 
{ /* Llib/thread.scm 386 */
long BgL_objzd2classzd2numz00_2359;
BgL_objzd2classzd2numz00_2359 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2358); 
{ /* Llib/thread.scm 386 */
obj_t BgL_arg2549z00_2360;
BgL_arg2549z00_2360 = 
PROCEDURE_REF(BGl_z52userzd2currentzd2threadzd2envz80zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 386 */
obj_t BgL_arrayz00_2362;int BgL_offsetz00_2363;
if(
VECTORP(BgL_arg2549z00_2360))
{ /* Llib/thread.scm 386 */
BgL_arrayz00_2362 = BgL_arg2549z00_2360; }  else 
{ 
obj_t BgL_auxz00_5816;
BgL_auxz00_5816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16547)), BGl_string3223z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2360); 
FAILURE(BgL_auxz00_5816,BFALSE,BFALSE);} 
BgL_offsetz00_2363 = 
(int)(BgL_objzd2classzd2numz00_2359); 
{ /* Llib/thread.scm 386 */
long BgL_offsetz00_2364;
BgL_offsetz00_2364 = 
(
(long)(BgL_offsetz00_2363)-OBJECT_TYPE); 
{ /* Llib/thread.scm 386 */
long BgL_modz00_2365;
{ /* Llib/thread.scm 386 */
int BgL_arg2551z00_2366;
BgL_arg2551z00_2366 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 386 */
long BgL_auxz00_5824;
BgL_auxz00_5824 = 
(long)(BgL_arg2551z00_2366); 
BgL_modz00_2365 = 
(BgL_offsetz00_2364/BgL_auxz00_5824); } } 
{ /* Llib/thread.scm 386 */
long BgL_restz00_2367;
{ /* Llib/thread.scm 386 */
int BgL_arg2550z00_2368;
BgL_arg2550z00_2368 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 386 */
long BgL_auxz00_5828;
BgL_auxz00_5828 = 
(long)(BgL_arg2550z00_2368); 
BgL_restz00_2367 = 
(BgL_offsetz00_2364%BgL_auxz00_5828); } } 
{ /* Llib/thread.scm 386 */

{ /* Llib/thread.scm 386 */
obj_t BgL_bucketz00_2369;
BgL_bucketz00_2369 = 
VECTOR_REF(BgL_arrayz00_2362,
(int)(BgL_modz00_2365)); 
{ /* Llib/thread.scm 386 */
obj_t BgL_vectorz00_2380;int BgL_kz00_2381;
if(
VECTORP(BgL_bucketz00_2369))
{ /* Llib/thread.scm 386 */
BgL_vectorz00_2380 = BgL_bucketz00_2369; }  else 
{ 
obj_t BgL_auxz00_5835;
BgL_auxz00_5835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16547)), BGl_string3223z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2369); 
FAILURE(BgL_auxz00_5835,BFALSE,BFALSE);} 
BgL_kz00_2381 = 
(int)(BgL_restz00_2367); 
{ /* Llib/thread.scm 386 */
obj_t BgL_aux2944z00_3411;
BgL_aux2944z00_3411 = 
VECTOR_REF(BgL_vectorz00_2380,BgL_kz00_2381); 
if(
PROCEDUREP(BgL_aux2944z00_3411))
{ /* Llib/thread.scm 386 */
BgL_method1983z00_2357 = BgL_aux2944z00_3411; }  else 
{ 
obj_t BgL_auxz00_5843;
BgL_auxz00_5843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16547)), BGl_string3223z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2944z00_3411); 
FAILURE(BgL_auxz00_5843,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1983z00_2357, ((long)1)))
{ /* Llib/thread.scm 386 */
return 
PROCEDURE_ENTRY(BgL_method1983z00_2357)(BgL_method1983z00_2357, 
(obj_t)(BgL_oz00_54), BEOA);}  else 
{ /* Llib/thread.scm 386 */
FAILURE(BGl_string3337z00zz__threadz00,BGl_list3103z00zz__threadz00,BgL_method1983z00_2357);} } } 
}



/* _%user-current-thread */
obj_t BGl__z52userzd2currentzd2threadz52zz__threadz00(obj_t BgL_envz00_2803, obj_t BgL_oz00_2804)
{ AN_OBJECT;
{ /* Llib/thread.scm 386 */
{ /* Llib/thread.scm 386 */
BgL_threadz00_bglt BgL_auxz00_5853;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2804, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 386 */
BgL_auxz00_5853 = 
(BgL_threadz00_bglt)(BgL_oz00_2804)
; }  else 
{ 
obj_t BgL_auxz00_5857;
BgL_auxz00_5857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)16547)), BGl_string3338z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2804); 
FAILURE(BgL_auxz00_5857,BFALSE,BFALSE);} 
return 
BGl_z52userzd2currentzd2threadz52zz__threadz00(BgL_auxz00_5853);} } 
}



/* _%user-current-thread1982 */
obj_t BGl__z52userzd2currentzd2thread1982z52zz__threadz00(obj_t BgL_envz00_2977, obj_t BgL_oz00_2978)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_auxz00_5862;
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_oz00_3772;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2978, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_oz00_3772 = 
(BgL_threadz00_bglt)(BgL_oz00_2978); }  else 
{ 
obj_t BgL_auxz00_5866;
BgL_auxz00_5866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3339z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2978); 
FAILURE(BgL_auxz00_5866,BFALSE,BFALSE);} 
BgL_auxz00_5862 = BgL_oz00_3772; } 
return 
(obj_t)(BgL_auxz00_5862);} } 
}



/* %user-thread-sleep! */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_threadz00_bglt BgL_oz00_56, obj_t BgL_dz00_57)
{ AN_OBJECT;
{ /* Llib/thread.scm 408 */
{ /* Llib/thread.scm 408 */
obj_t BgL_method1985z00_2382;
{ /* Llib/thread.scm 408 */
BgL_objectz00_bglt BgL_objz00_2383;
BgL_objz00_2383 = 
(BgL_objectz00_bglt)(BgL_oz00_56); 
{ /* Llib/thread.scm 408 */
long BgL_objzd2classzd2numz00_2384;
BgL_objzd2classzd2numz00_2384 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2383); 
{ /* Llib/thread.scm 408 */
obj_t BgL_arg2549z00_2385;
BgL_arg2549z00_2385 = 
PROCEDURE_REF(BGl_z52userzd2threadzd2sleepz12zd2envz92zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 408 */
obj_t BgL_arrayz00_2387;int BgL_offsetz00_2388;
if(
VECTORP(BgL_arg2549z00_2385))
{ /* Llib/thread.scm 408 */
BgL_arrayz00_2387 = BgL_arg2549z00_2385; }  else 
{ 
obj_t BgL_auxz00_5877;
BgL_auxz00_5877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17513)), BGl_string3224z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2385); 
FAILURE(BgL_auxz00_5877,BFALSE,BFALSE);} 
BgL_offsetz00_2388 = 
(int)(BgL_objzd2classzd2numz00_2384); 
{ /* Llib/thread.scm 408 */
long BgL_offsetz00_2389;
BgL_offsetz00_2389 = 
(
(long)(BgL_offsetz00_2388)-OBJECT_TYPE); 
{ /* Llib/thread.scm 408 */
long BgL_modz00_2390;
{ /* Llib/thread.scm 408 */
int BgL_arg2551z00_2391;
BgL_arg2551z00_2391 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 408 */
long BgL_auxz00_5885;
BgL_auxz00_5885 = 
(long)(BgL_arg2551z00_2391); 
BgL_modz00_2390 = 
(BgL_offsetz00_2389/BgL_auxz00_5885); } } 
{ /* Llib/thread.scm 408 */
long BgL_restz00_2392;
{ /* Llib/thread.scm 408 */
int BgL_arg2550z00_2393;
BgL_arg2550z00_2393 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 408 */
long BgL_auxz00_5889;
BgL_auxz00_5889 = 
(long)(BgL_arg2550z00_2393); 
BgL_restz00_2392 = 
(BgL_offsetz00_2389%BgL_auxz00_5889); } } 
{ /* Llib/thread.scm 408 */

{ /* Llib/thread.scm 408 */
obj_t BgL_bucketz00_2394;
BgL_bucketz00_2394 = 
VECTOR_REF(BgL_arrayz00_2387,
(int)(BgL_modz00_2390)); 
{ /* Llib/thread.scm 408 */
obj_t BgL_vectorz00_2405;int BgL_kz00_2406;
if(
VECTORP(BgL_bucketz00_2394))
{ /* Llib/thread.scm 408 */
BgL_vectorz00_2405 = BgL_bucketz00_2394; }  else 
{ 
obj_t BgL_auxz00_5896;
BgL_auxz00_5896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17513)), BGl_string3224z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2394); 
FAILURE(BgL_auxz00_5896,BFALSE,BFALSE);} 
BgL_kz00_2406 = 
(int)(BgL_restz00_2392); 
{ /* Llib/thread.scm 408 */
obj_t BgL_aux2956z00_3424;
BgL_aux2956z00_3424 = 
VECTOR_REF(BgL_vectorz00_2405,BgL_kz00_2406); 
if(
PROCEDUREP(BgL_aux2956z00_3424))
{ /* Llib/thread.scm 408 */
BgL_method1985z00_2382 = BgL_aux2956z00_3424; }  else 
{ 
obj_t BgL_auxz00_5904;
BgL_auxz00_5904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17513)), BGl_string3224z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2956z00_3424); 
FAILURE(BgL_auxz00_5904,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1985z00_2382, ((long)2)))
{ /* Llib/thread.scm 408 */
return 
PROCEDURE_ENTRY(BgL_method1985z00_2382)(BgL_method1985z00_2382, 
(obj_t)(BgL_oz00_56), BgL_dz00_57, BEOA);}  else 
{ /* Llib/thread.scm 408 */
FAILURE(BGl_string3340z00zz__threadz00,BGl_list3341z00zz__threadz00,BgL_method1985z00_2382);} } } 
}



/* _%user-thread-sleep! */
obj_t BGl__z52userzd2threadzd2sleepz12z40zz__threadz00(obj_t BgL_envz00_2979, obj_t BgL_oz00_2980, obj_t BgL_dz00_2981)
{ AN_OBJECT;
{ /* Llib/thread.scm 408 */
{ /* Llib/thread.scm 408 */
BgL_threadz00_bglt BgL_auxz00_5914;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2980, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 408 */
BgL_auxz00_5914 = 
(BgL_threadz00_bglt)(BgL_oz00_2980)
; }  else 
{ 
obj_t BgL_auxz00_5918;
BgL_auxz00_5918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17513)), BGl_string3346z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2980); 
FAILURE(BgL_auxz00_5918,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12z40zz__threadz00(BgL_auxz00_5914, BgL_dz00_2981);} } 
}



/* %user-thread-sleep!-1984 */
obj_t BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(BgL_threadz00_bglt BgL_oz00_58, obj_t BgL_dz00_59)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
if(
BGL_DATEP(BgL_dz00_59))
{ /* Llib/thread.scm 411 */
long BgL_cdtz00_1247;
BgL_cdtz00_1247 = 
bgl_date_to_seconds(
bgl_seconds_to_date(
bgl_current_seconds())); 
{ /* Llib/thread.scm 411 */
long BgL_dtz00_1248;
BgL_dtz00_1248 = 
bgl_date_to_seconds(BgL_dz00_59); 
{ /* Llib/thread.scm 412 */
long BgL_az00_1249;
{ /* Llib/thread.scm 413 */
long BgL_res2613z00_2414;
{ /* Llib/thread.scm 413 */
long BgL_auxz00_5929;
BgL_auxz00_5929 = 
(BgL_dtz00_1248-BgL_cdtz00_1247); 
BgL_res2613z00_2414 = 
LONG_TO_ELONG(BgL_auxz00_5929); } 
BgL_az00_1249 = BgL_res2613z00_2414; } 
{ /* Llib/thread.scm 413 */

if(
(BgL_az00_1249>((long)0)))
{ /* Llib/thread.scm 414 */
long BgL_arg2204z00_1251;
{ /* Llib/thread.scm 414 */
long BgL_res2614z00_2418;
{ /* Llib/thread.scm 414 */
long BgL_auxz00_5934;
{ /* Llib/thread.scm 414 */
long BgL_auxz00_5935;
BgL_auxz00_5935 = 
ELONG_TO_LONG(BgL_az00_1249); 
BgL_auxz00_5934 = 
ELONG_TO_LONG(BgL_auxz00_5935); } 
BgL_res2614z00_2418 = 
ELONG_TO_LONG(BgL_auxz00_5934); } 
BgL_arg2204z00_1251 = BgL_res2614z00_2418; } 
bgl_sleep(BgL_arg2204z00_1251); BUNSPEC; 
return 
BINT(BgL_arg2204z00_1251);}  else 
{ /* Llib/thread.scm 414 */
return BFALSE;} } } } }  else 
{ /* Llib/thread.scm 410 */
if(
INTEGERP(BgL_dz00_59))
{ /* Llib/thread.scm 416 */
long BgL_msz00_2421;
BgL_msz00_2421 = 
(long)CINT(BgL_dz00_59); 
bgl_sleep(BgL_msz00_2421); BUNSPEC; 
return 
BINT(BgL_msz00_2421);}  else 
{ /* Llib/thread.scm 415 */
if(
ELONGP(BgL_dz00_59))
{ /* Llib/thread.scm 418 */
long BgL_arg2208z00_1255;
{ /* Llib/thread.scm 418 */
long BgL_res2615z00_2424;
{ /* Llib/thread.scm 418 */
long BgL_xz00_2423;
BgL_xz00_2423 = 
BELONG_TO_LONG(BgL_dz00_59); 
{ /* Llib/thread.scm 418 */
long BgL_auxz00_5949;
{ /* Llib/thread.scm 418 */
long BgL_auxz00_5950;
BgL_auxz00_5950 = 
ELONG_TO_LONG(BgL_xz00_2423); 
BgL_auxz00_5949 = 
ELONG_TO_LONG(BgL_auxz00_5950); } 
BgL_res2615z00_2424 = 
ELONG_TO_LONG(BgL_auxz00_5949); } } 
BgL_arg2208z00_1255 = BgL_res2615z00_2424; } 
bgl_sleep(BgL_arg2208z00_1255); BUNSPEC; 
return 
BINT(BgL_arg2208z00_1255);}  else 
{ /* Llib/thread.scm 417 */
if(
LLONGP(BgL_dz00_59))
{ /* Llib/thread.scm 420 */
long BgL_arg2210z00_1257;
{ /* Llib/thread.scm 420 */
BGL_LONGLONG_T BgL_auxz00_5958;
BgL_auxz00_5958 = 
BLLONG_TO_LLONG(BgL_dz00_59); 
BgL_arg2210z00_1257 = 
LLONG_TO_LONG(BgL_auxz00_5958); } 
bgl_sleep(BgL_arg2210z00_1257); BUNSPEC; 
return 
BINT(BgL_arg2210z00_1257);}  else 
{ /* Llib/thread.scm 421 */
bool_t BgL_testz00_5963;
if(
INTEGERP(BgL_dz00_59))
{ /* Llib/thread.scm 421 */
BgL_testz00_5963 = ((bool_t)1)
; }  else 
{ /* Llib/thread.scm 421 */
BgL_testz00_5963 = 
REALP(BgL_dz00_59)
; } 
if(BgL_testz00_5963)
{ /* Llib/thread.scm 422 */
long BgL_arg2212z00_1259;
{ /* Llib/thread.scm 422 */
long BgL_auxz00_5967;
{ /* Llib/thread.scm 422 */
double BgL_xz00_2432;
{ /* Llib/thread.scm 422 */
obj_t BgL_auxz00_5968;
if(
REALP(BgL_dz00_59))
{ /* Llib/thread.scm 422 */
BgL_auxz00_5968 = BgL_dz00_59
; }  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17944)), BGl_string3347z00zz__threadz00, BGl_string3348z00zz__threadz00, BgL_dz00_59); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} 
BgL_xz00_2432 = 
REAL_TO_DOUBLE(BgL_auxz00_5968); } 
BgL_auxz00_5967 = 
(long)(BgL_xz00_2432); } 
BgL_arg2212z00_1259 = 
(BgL_auxz00_5967*((long)1000)); } 
bgl_sleep(BgL_arg2212z00_1259); BUNSPEC; 
return 
BINT(BgL_arg2212z00_1259);}  else 
{ /* Llib/thread.scm 421 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol3349z00zz__threadz00, BGl_string3350z00zz__threadz00, BgL_dz00_59);} } } } } } 
}



/* _%user-thread-sleep!-1984 */
obj_t BGl__z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(obj_t BgL_envz00_2982, obj_t BgL_oz00_2983, obj_t BgL_dz00_2984)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 410 */
BgL_threadz00_bglt BgL_auxz00_5981;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2983, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 410 */
BgL_auxz00_5981 = 
(BgL_threadz00_bglt)(BgL_oz00_2983)
; }  else 
{ 
obj_t BgL_auxz00_5985;
BgL_auxz00_5985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)17579)), BGl_string3351z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2983); 
FAILURE(BgL_auxz00_5985,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2sleepz12zd21984z92zz__threadz00(BgL_auxz00_5981, BgL_dz00_2984);} } 
}



/* %user-thread-yield! */
BGL_EXPORTED_DEF obj_t BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_threadz00_bglt BgL_oz00_61)
{ AN_OBJECT;
{ /* Llib/thread.scm 435 */
{ /* Llib/thread.scm 435 */
obj_t BgL_method1987z00_2436;
{ /* Llib/thread.scm 435 */
BgL_objectz00_bglt BgL_objz00_2437;
BgL_objz00_2437 = 
(BgL_objectz00_bglt)(BgL_oz00_61); 
{ /* Llib/thread.scm 435 */
long BgL_objzd2classzd2numz00_2438;
BgL_objzd2classzd2numz00_2438 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2437); 
{ /* Llib/thread.scm 435 */
obj_t BgL_arg2549z00_2439;
BgL_arg2549z00_2439 = 
PROCEDURE_REF(BGl_z52userzd2threadzd2yieldz12zd2envz92zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 435 */
obj_t BgL_arrayz00_2441;int BgL_offsetz00_2442;
if(
VECTORP(BgL_arg2549z00_2439))
{ /* Llib/thread.scm 435 */
BgL_arrayz00_2441 = BgL_arg2549z00_2439; }  else 
{ 
obj_t BgL_auxz00_5996;
BgL_auxz00_5996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18567)), BGl_string3225z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2439); 
FAILURE(BgL_auxz00_5996,BFALSE,BFALSE);} 
BgL_offsetz00_2442 = 
(int)(BgL_objzd2classzd2numz00_2438); 
{ /* Llib/thread.scm 435 */
long BgL_offsetz00_2443;
BgL_offsetz00_2443 = 
(
(long)(BgL_offsetz00_2442)-OBJECT_TYPE); 
{ /* Llib/thread.scm 435 */
long BgL_modz00_2444;
{ /* Llib/thread.scm 435 */
int BgL_arg2551z00_2445;
BgL_arg2551z00_2445 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 435 */
long BgL_auxz00_6004;
BgL_auxz00_6004 = 
(long)(BgL_arg2551z00_2445); 
BgL_modz00_2444 = 
(BgL_offsetz00_2443/BgL_auxz00_6004); } } 
{ /* Llib/thread.scm 435 */
long BgL_restz00_2446;
{ /* Llib/thread.scm 435 */
int BgL_arg2550z00_2447;
BgL_arg2550z00_2447 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 435 */
long BgL_auxz00_6008;
BgL_auxz00_6008 = 
(long)(BgL_arg2550z00_2447); 
BgL_restz00_2446 = 
(BgL_offsetz00_2443%BgL_auxz00_6008); } } 
{ /* Llib/thread.scm 435 */

{ /* Llib/thread.scm 435 */
obj_t BgL_bucketz00_2448;
BgL_bucketz00_2448 = 
VECTOR_REF(BgL_arrayz00_2441,
(int)(BgL_modz00_2444)); 
{ /* Llib/thread.scm 435 */
obj_t BgL_vectorz00_2459;int BgL_kz00_2460;
if(
VECTORP(BgL_bucketz00_2448))
{ /* Llib/thread.scm 435 */
BgL_vectorz00_2459 = BgL_bucketz00_2448; }  else 
{ 
obj_t BgL_auxz00_6015;
BgL_auxz00_6015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18567)), BGl_string3225z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2448); 
FAILURE(BgL_auxz00_6015,BFALSE,BFALSE);} 
BgL_kz00_2460 = 
(int)(BgL_restz00_2446); 
{ /* Llib/thread.scm 435 */
obj_t BgL_aux2970z00_3439;
BgL_aux2970z00_3439 = 
VECTOR_REF(BgL_vectorz00_2459,BgL_kz00_2460); 
if(
PROCEDUREP(BgL_aux2970z00_3439))
{ /* Llib/thread.scm 435 */
BgL_method1987z00_2436 = BgL_aux2970z00_3439; }  else 
{ 
obj_t BgL_auxz00_6023;
BgL_auxz00_6023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18567)), BGl_string3225z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2970z00_3439); 
FAILURE(BgL_auxz00_6023,BFALSE,BFALSE);} } } } } } } } } } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1987z00_2436, ((long)1)))
{ /* Llib/thread.scm 435 */
return 
PROCEDURE_ENTRY(BgL_method1987z00_2436)(BgL_method1987z00_2436, 
(obj_t)(BgL_oz00_61), BEOA);}  else 
{ /* Llib/thread.scm 435 */
FAILURE(BGl_string3352z00zz__threadz00,BGl_list3353z00zz__threadz00,BgL_method1987z00_2436);} } } 
}



/* _%user-thread-yield! */
obj_t BGl__z52userzd2threadzd2yieldz12z40zz__threadz00(obj_t BgL_envz00_2985, obj_t BgL_oz00_2986)
{ AN_OBJECT;
{ /* Llib/thread.scm 435 */
{ /* Llib/thread.scm 435 */
BgL_threadz00_bglt BgL_auxz00_6033;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2986, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 435 */
BgL_auxz00_6033 = 
(BgL_threadz00_bglt)(BgL_oz00_2986)
; }  else 
{ 
obj_t BgL_auxz00_6037;
BgL_auxz00_6037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)18567)), BGl_string3356z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2986); 
FAILURE(BgL_auxz00_6037,BFALSE,BFALSE);} 
return 
BGl_z52userzd2threadzd2yieldz12z40zz__threadz00(BgL_auxz00_6033);} } 
}



/* _%user-thread-yield!-1986 */
obj_t BGl__z52userzd2threadzd2yieldz12zd21986z92zz__threadz00(obj_t BgL_envz00_2987, obj_t BgL_oz00_2988)
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
{ /* Llib/thread.scm 17 */
BgL_threadz00_bglt BgL_oz00_3777;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_2988, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 17 */
BgL_oz00_3777 = 
(BgL_threadz00_bglt)(BgL_oz00_2988); }  else 
{ 
obj_t BgL_auxz00_6045;
BgL_auxz00_6045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)1111)), BGl_string3357z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_2988); 
FAILURE(BgL_auxz00_6045,BFALSE,BFALSE);} 
return BUNSPEC;} } 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_tbzd2makezd2threadzd2envzd2zz__threadz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc3358z00zz__threadz00, BGl_string3212z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_tbzd2currentzd2threadzd2envzd2zz__threadz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc3359z00zz__threadz00, BGl_string3213z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc3360z00zz__threadz00, BGl_string3361z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2writezd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc3362z00zz__threadz00, BGl_string3363z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2printzd2envz00zz__objectz00, BGl_threadz00zz__threadz00, BGl_proc3364z00zz__threadz00, BGl_string3365z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2startz12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3366z00zz__threadz00, BGl_string3215z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2startzd2joinablez12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3367z00zz__threadz00, BGl_string3216z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2joinz12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3368z00zz__threadz00, BGl_string3217z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2terminatez12zd2envz12zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3369z00zz__threadz00, BGl_string3218z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2getzd2specificzd2envzd2zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3370z00zz__threadz00, BGl_string3219z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2setzd2specificz12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3371z00zz__threadz00, BGl_string3220z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2getzd2cleanupzd2envzd2zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3372z00zz__threadz00, BGl_string3221z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_threadzd2setzd2cleanupz12zd2envzc0zz__threadz00, BGl_nothreadz00zz__threadz00, BGl_proc3373z00zz__threadz00, BGl_string3222z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc3374z00zz__threadz00, BGl_string3375z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00, BGl_nothreadzd2backendzd2zz__threadz00, BGl_proc3376z00zz__threadz00, BGl_string3377z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_nothreadz00zz__threadz00, BGl_proc3378z00zz__threadz00, BGl_string3375z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00, BGl_nothreadz00zz__threadz00, BGl_proc3379z00zz__threadz00, BGl_string3377z00zz__threadz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_objectzd2ze3structzd2envze3zz__objectz00, BGl_threadzd2backendzd2zz__threadz00, BGl_proc3380z00zz__threadz00, BGl_string3375z00zz__threadz00); 
return 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00, BGl_threadzd2backendzd2zz__threadz00, BGl_proc3381z00zz__threadz00, BGl_string3377z00zz__threadz00);} 
}



/* struct+object->objec2026 */
obj_t BGl_structzb2objectzd2ze3objec2026z83zz__threadz00(obj_t BgL_envz00_3011, obj_t BgL_oz00_3012, obj_t BgL_sz00_3013)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ 
BgL_threadzd2backendzd2_bglt BgL_oz00_1484;obj_t BgL_sz00_1485;
{ /* Llib/thread.scm 147 */
BgL_threadzd2backendzd2_bglt BgL_auxz00_6068;
{ /* Llib/thread.scm 147 */
obj_t BgL_aux2980z00_3450;
BgL_aux2980z00_3450 = BgL_oz00_3012; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2980z00_3450, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 147 */
BgL_oz00_1484 = 
(BgL_threadzd2backendzd2_bglt)(BgL_aux2980z00_3450); }  else 
{ 
obj_t BgL_auxz00_6086;
BgL_auxz00_6086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3382z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_aux2980z00_3450); 
FAILURE(BgL_auxz00_6086,BFALSE,BFALSE);} } 
if(
STRUCTP(BgL_sz00_3013))
{ /* Llib/thread.scm 147 */
BgL_sz00_1485 = BgL_sz00_3013; }  else 
{ 
obj_t BgL_auxz00_6092;
BgL_auxz00_6092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3382z00zz__threadz00, BGl_string3383z00zz__threadz00, BgL_sz00_3013); 
FAILURE(BgL_auxz00_6092,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 147 */
obj_t BgL_arg2336z00_2640;
BgL_arg2336z00_2640 = 
STRUCT_REF(BgL_sz00_1485, 
(int)(((long)0))); 
{ /* Llib/thread.scm 147 */
BgL_objectz00_bglt BgL_auxz00_6071;
BgL_auxz00_6071 = 
(BgL_objectz00_bglt)(BgL_oz00_1484); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_6071, BgL_arg2336z00_2640); } } 
{ /* Llib/thread.scm 147 */
obj_t BgL_v1769z00_2641;
{ /* Llib/thread.scm 147 */
obj_t BgL_aux2978z00_3448;
BgL_aux2978z00_3448 = 
STRUCT_REF(BgL_sz00_1485, 
(int)(((long)1))); 
if(
STRINGP(BgL_aux2978z00_3448))
{ /* Llib/thread.scm 147 */
BgL_v1769z00_2641 = BgL_aux2978z00_3448; }  else 
{ 
obj_t BgL_auxz00_6078;
BgL_auxz00_6078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3382z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_aux2978z00_3448); 
FAILURE(BgL_auxz00_6078,BFALSE,BFALSE);} } 
((((BgL_threadzd2backendzd2_bglt)CREF(BgL_oz00_1484))->BgL_namez00) = ((obj_t)BgL_v1769z00_2641), BUNSPEC); } 
BgL_auxz00_6068 = BgL_oz00_1484; 
return 
(obj_t)(BgL_auxz00_6068);} } } 
}



/* object->struct-threa2024 */
obj_t BGl_objectzd2ze3structzd2threa2024ze3zz__threadz00(obj_t BgL_envz00_3014, obj_t BgL_obj1765z00_3015)
{ AN_OBJECT;
{ /* Llib/thread.scm 147 */
{ 
BgL_threadzd2backendzd2_bglt BgL_obj1765z00_1476;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1765z00_3015, BGl_threadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 147 */
BgL_obj1765z00_1476 = 
(BgL_threadzd2backendzd2_bglt)(BgL_obj1765z00_3015); }  else 
{ 
obj_t BgL_auxz00_6109;
BgL_auxz00_6109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5185)), BGl_string3384z00zz__threadz00, BGl_string3075z00zz__threadz00, BgL_obj1765z00_3015); 
FAILURE(BgL_auxz00_6109,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 147 */
obj_t BgL_res1766z00_1479;
BgL_res1766z00_1479 = 
make_struct(BGl_symbol3145z00zz__threadz00, 
(int)(((long)2)), BUNSPEC); 
{ /* Llib/thread.scm 147 */
int BgL_auxz00_6099;
BgL_auxz00_6099 = 
(int)(((long)0)); 
STRUCT_SET(BgL_res1766z00_1479, BgL_auxz00_6099, BFALSE); } 
{ /* Llib/thread.scm 147 */
obj_t BgL_arg2334z00_1481;
BgL_arg2334z00_1481 = 
(((BgL_threadzd2backendzd2_bglt)CREF(BgL_obj1765z00_1476))->BgL_namez00); 
{ /* Llib/thread.scm 147 */
int BgL_auxz00_6103;
BgL_auxz00_6103 = 
(int)(((long)1)); 
STRUCT_SET(BgL_res1766z00_1479, BgL_auxz00_6103, BgL_arg2334z00_1481); } } 
return BgL_res1766z00_1479;} } } 
}



/* struct+object->objec2022 */
obj_t BGl_structzb2objectzd2ze3objec2022z83zz__threadz00(obj_t BgL_envz00_3016, obj_t BgL_oz00_3017, obj_t BgL_sz00_3018)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ 
BgL_nothreadz00_bglt BgL_oz00_1463;obj_t BgL_sz00_1464;
{ /* Llib/thread.scm 156 */
BgL_nothreadz00_bglt BgL_auxz00_6113;
{ /* Llib/thread.scm 156 */
obj_t BgL_aux2988z00_3458;
BgL_aux2988z00_3458 = BgL_oz00_3017; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2988z00_3458, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 156 */
BgL_oz00_1463 = 
(BgL_nothreadz00_bglt)(BgL_aux2988z00_3458); }  else 
{ 
obj_t BgL_auxz00_6151;
BgL_auxz00_6151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3385z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_aux2988z00_3458); 
FAILURE(BgL_auxz00_6151,BFALSE,BFALSE);} } 
if(
STRUCTP(BgL_sz00_3018))
{ /* Llib/thread.scm 156 */
BgL_sz00_1464 = BgL_sz00_3018; }  else 
{ 
obj_t BgL_auxz00_6157;
BgL_auxz00_6157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3385z00zz__threadz00, BGl_string3383z00zz__threadz00, BgL_sz00_3018); 
FAILURE(BgL_auxz00_6157,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2331z00_1467;
BgL_arg2331z00_1467 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)0))); 
{ /* Llib/thread.scm 156 */
BgL_objectz00_bglt BgL_auxz00_6116;
BgL_auxz00_6116 = 
(BgL_objectz00_bglt)(BgL_oz00_1463); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_6116, BgL_arg2331z00_1467); } } 
{ 
obj_t BgL_auxz00_6119;
BgL_auxz00_6119 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)1))); 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_namez00) = ((obj_t)BgL_auxz00_6119), BUNSPEC); } 
{ /* Llib/thread.scm 156 */
obj_t BgL_v1847z00_1469;
{ /* Llib/thread.scm 156 */
obj_t BgL_aux2986z00_3456;
BgL_aux2986z00_3456 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)4))); 
if(
PROCEDUREP(BgL_aux2986z00_3456))
{ /* Llib/thread.scm 156 */
BgL_v1847z00_1469 = BgL_aux2986z00_3456; }  else 
{ 
obj_t BgL_auxz00_6127;
BgL_auxz00_6127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3385z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux2986z00_3456); 
FAILURE(BgL_auxz00_6127,BFALSE,BFALSE);} } 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_bodyz00) = ((obj_t)BgL_v1847z00_1469), BUNSPEC); } 
{ 
obj_t BgL_auxz00_6132;
BgL_auxz00_6132 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)5))); 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_z52specificz52) = ((obj_t)BgL_auxz00_6132), BUNSPEC); } 
{ 
obj_t BgL_auxz00_6136;
BgL_auxz00_6136 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)6))); 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_z52cleanupz52) = ((obj_t)BgL_auxz00_6136), BUNSPEC); } 
{ 
obj_t BgL_auxz00_6140;
BgL_auxz00_6140 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)7))); 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_endzd2resultzd2) = ((obj_t)BgL_auxz00_6140), BUNSPEC); } 
{ 
obj_t BgL_auxz00_6144;
BgL_auxz00_6144 = 
STRUCT_REF(BgL_sz00_1464, 
(int)(((long)8))); 
((((BgL_nothreadz00_bglt)CREF(BgL_oz00_1463))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_auxz00_6144), BUNSPEC); } 
BgL_auxz00_6113 = BgL_oz00_1463; 
return 
(obj_t)(BgL_auxz00_6113);} } } 
}



/* object->struct-nothr2020 */
obj_t BGl_objectzd2ze3structzd2nothr2020ze3zz__threadz00(obj_t BgL_envz00_3019, obj_t BgL_obj1839z00_3020)
{ AN_OBJECT;
{ /* Llib/thread.scm 156 */
{ 
BgL_nothreadz00_bglt BgL_obj1839z00_1449;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1839z00_3020, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 156 */
BgL_obj1839z00_1449 = 
(BgL_nothreadz00_bglt)(BgL_obj1839z00_3020); }  else 
{ 
obj_t BgL_auxz00_6188;
BgL_auxz00_6188 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5490)), BGl_string3386z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_obj1839z00_3020); 
FAILURE(BgL_auxz00_6188,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 156 */
obj_t BgL_res1840z00_1452;
BgL_res1840z00_1452 = 
make_struct(BGl_symbol3161z00zz__threadz00, 
(int)(((long)7)), BUNSPEC); 
{ /* Llib/thread.scm 156 */
int BgL_auxz00_6164;
BgL_auxz00_6164 = 
(int)(((long)0)); 
STRUCT_SET(BgL_res1840z00_1452, BgL_auxz00_6164, BFALSE); } 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2323z00_1454;
{ 
BgL_threadz00_bglt BgL_auxz00_6167;
BgL_auxz00_6167 = 
(BgL_threadz00_bglt)(BgL_obj1839z00_1449); 
BgL_arg2323z00_1454 = 
(((BgL_threadz00_bglt)CREF(BgL_auxz00_6167))->BgL_namez00); } 
{ /* Llib/thread.scm 156 */
int BgL_auxz00_6170;
BgL_auxz00_6170 = 
(int)(((long)1)); 
STRUCT_SET(BgL_res1840z00_1452, BgL_auxz00_6170, BgL_arg2323z00_1454); } } 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2325z00_1456;
BgL_arg2325z00_1456 = 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1839z00_1449))->BgL_bodyz00); 
{ /* Llib/thread.scm 156 */
int BgL_auxz00_6174;
BgL_auxz00_6174 = 
(int)(((long)4)); 
STRUCT_SET(BgL_res1840z00_1452, BgL_auxz00_6174, BgL_arg2325z00_1456); } } 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2327z00_1458;
BgL_arg2327z00_1458 = 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1839z00_1449))->BgL_z52specificz52); 
{ /* Llib/thread.scm 156 */
int BgL_auxz00_6178;
BgL_auxz00_6178 = 
(int)(((long)5)); 
STRUCT_SET(BgL_res1840z00_1452, BgL_auxz00_6178, BgL_arg2327z00_1458); } } 
{ /* Llib/thread.scm 156 */
obj_t BgL_arg2329z00_1460;
BgL_arg2329z00_1460 = 
(((BgL_nothreadz00_bglt)CREF(BgL_obj1839z00_1449))->BgL_z52cleanupz52); 
{ /* Llib/thread.scm 156 */
int BgL_auxz00_6182;
BgL_auxz00_6182 = 
(int)(((long)6)); 
STRUCT_SET(BgL_res1840z00_1452, BgL_auxz00_6182, BgL_arg2329z00_1460); } } 
return BgL_res1840z00_1452;} } } 
}



/* struct+object->objec2018 */
obj_t BGl_structzb2objectzd2ze3objec2018z83zz__threadz00(obj_t BgL_envz00_3021, obj_t BgL_oz00_3022, obj_t BgL_sz00_3023)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
{ 
BgL_nothreadzd2backendzd2_bglt BgL_oz00_1441;obj_t BgL_sz00_1442;
{ /* Llib/thread.scm 145 */
BgL_nothreadzd2backendzd2_bglt BgL_auxz00_6192;
{ /* Llib/thread.scm 145 */
obj_t BgL_aux2996z00_3466;
BgL_aux2996z00_3466 = BgL_oz00_3022; 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_aux2996z00_3466, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 145 */
BgL_oz00_1441 = 
(BgL_nothreadzd2backendzd2_bglt)(BgL_aux2996z00_3466); }  else 
{ 
obj_t BgL_auxz00_6210;
BgL_auxz00_6210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3387z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_aux2996z00_3466); 
FAILURE(BgL_auxz00_6210,BFALSE,BFALSE);} } 
if(
STRUCTP(BgL_sz00_3023))
{ /* Llib/thread.scm 145 */
BgL_sz00_1442 = BgL_sz00_3023; }  else 
{ 
obj_t BgL_auxz00_6216;
BgL_auxz00_6216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3387z00zz__threadz00, BGl_string3383z00zz__threadz00, BgL_sz00_3023); 
FAILURE(BgL_auxz00_6216,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 145 */
obj_t BgL_arg2320z00_2588;
BgL_arg2320z00_2588 = 
STRUCT_REF(BgL_sz00_1442, 
(int)(((long)0))); 
{ /* Llib/thread.scm 145 */
BgL_objectz00_bglt BgL_auxz00_6195;
BgL_auxz00_6195 = 
(BgL_objectz00_bglt)(BgL_oz00_1441); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_6195, BgL_arg2320z00_2588); } } 
{ /* Llib/thread.scm 145 */
obj_t BgL_v1879z00_2589;
{ /* Llib/thread.scm 145 */
obj_t BgL_aux2994z00_3464;
BgL_aux2994z00_3464 = 
STRUCT_REF(BgL_sz00_1442, 
(int)(((long)1))); 
if(
STRINGP(BgL_aux2994z00_3464))
{ /* Llib/thread.scm 145 */
BgL_v1879z00_2589 = BgL_aux2994z00_3464; }  else 
{ 
obj_t BgL_auxz00_6202;
BgL_auxz00_6202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3387z00zz__threadz00, BGl_string3083z00zz__threadz00, BgL_aux2994z00_3464); 
FAILURE(BgL_auxz00_6202,BFALSE,BFALSE);} } 
((((BgL_nothreadzd2backendzd2_bglt)CREF(BgL_oz00_1441))->BgL_namez00) = ((obj_t)BgL_v1879z00_2589), BUNSPEC); } 
BgL_auxz00_6192 = BgL_oz00_1441; 
return 
(obj_t)(BgL_auxz00_6192);} } } 
}



/* object->struct-nothr2016 */
obj_t BGl_objectzd2ze3structzd2nothr2016ze3zz__threadz00(obj_t BgL_envz00_3024, obj_t BgL_obj1875z00_3025)
{ AN_OBJECT;
{ /* Llib/thread.scm 145 */
{ 
BgL_nothreadzd2backendzd2_bglt BgL_obj1875z00_1433;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_obj1875z00_3025, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 145 */
BgL_obj1875z00_1433 = 
(BgL_nothreadzd2backendzd2_bglt)(BgL_obj1875z00_3025); }  else 
{ 
obj_t BgL_auxz00_6235;
BgL_auxz00_6235 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)5130)), BGl_string3388z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_obj1875z00_3025); 
FAILURE(BgL_auxz00_6235,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 145 */
obj_t BgL_res1876z00_1436;
BgL_res1876z00_1436 = 
make_struct(BGl_symbol3172z00zz__threadz00, 
(int)(((long)2)), BUNSPEC); 
{ /* Llib/thread.scm 145 */
int BgL_auxz00_6223;
BgL_auxz00_6223 = 
(int)(((long)0)); 
STRUCT_SET(BgL_res1876z00_1436, BgL_auxz00_6223, BFALSE); } 
{ /* Llib/thread.scm 145 */
obj_t BgL_arg2318z00_1438;
{ 
BgL_threadzd2backendzd2_bglt BgL_auxz00_6226;
BgL_auxz00_6226 = 
(BgL_threadzd2backendzd2_bglt)(BgL_obj1875z00_1433); 
BgL_arg2318z00_1438 = 
(((BgL_threadzd2backendzd2_bglt)CREF(BgL_auxz00_6226))->BgL_namez00); } 
{ /* Llib/thread.scm 145 */
int BgL_auxz00_6229;
BgL_auxz00_6229 = 
(int)(((long)1)); 
STRUCT_SET(BgL_res1876z00_1436, BgL_auxz00_6229, BgL_arg2318z00_1438); } } 
return BgL_res1876z00_1436;} } } 
}



/* thread-set-cleanup!-2003 */
obj_t BGl_threadzd2setzd2cleanupz12zd22003zc0zz__threadz00(obj_t BgL_envz00_3026, obj_t BgL_thz00_3027, obj_t BgL_vz00_3028)
{ AN_OBJECT;
{ /* Llib/thread.scm 525 */
{ /* Llib/thread.scm 526 */
BgL_nothreadz00_bglt BgL_thz00_3785;obj_t BgL_vz00_3786;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3027, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 526 */
BgL_thz00_3785 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3027); }  else 
{ 
obj_t BgL_auxz00_6242;
BgL_auxz00_6242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)22598)), BGl_string3389z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3027); 
FAILURE(BgL_auxz00_6242,BFALSE,BFALSE);} 
BgL_vz00_3786 = BgL_vz00_3028; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_thz00_3785))->BgL_z52cleanupz52) = ((obj_t)BgL_vz00_3786), BUNSPEC);} } 
}



/* thread-get-cleanup-n2001 */
obj_t BGl_threadzd2getzd2cleanupzd2n2001zd2zz__threadz00(obj_t BgL_envz00_3029, obj_t BgL_thz00_3030)
{ AN_OBJECT;
{ /* Llib/thread.scm 519 */
{ /* Llib/thread.scm 520 */
BgL_nothreadz00_bglt BgL_thz00_3788;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3030, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 520 */
BgL_thz00_3788 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3030); }  else 
{ 
obj_t BgL_auxz00_6250;
BgL_auxz00_6250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)22296)), BGl_string3390z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3030); 
FAILURE(BgL_auxz00_6250,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_3788))->BgL_z52cleanupz52);} } 
}



/* thread-set-specific!1999 */
obj_t BGl_threadzd2setzd2specificz121999z12zz__threadz00(obj_t BgL_envz00_3031, obj_t BgL_thz00_3032, obj_t BgL_vz00_3033)
{ AN_OBJECT;
{ /* Llib/thread.scm 513 */
{ /* Llib/thread.scm 514 */
BgL_nothreadz00_bglt BgL_thz00_3790;obj_t BgL_vz00_3791;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3032, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 514 */
BgL_thz00_3790 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3032); }  else 
{ 
obj_t BgL_auxz00_6258;
BgL_auxz00_6258 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)21989)), BGl_string3391z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3032); 
FAILURE(BgL_auxz00_6258,BFALSE,BFALSE);} 
BgL_vz00_3791 = BgL_vz00_3033; 
return 
((((BgL_nothreadz00_bglt)CREF(BgL_thz00_3790))->BgL_z52specificz52) = ((obj_t)BgL_vz00_3791), BUNSPEC);} } 
}



/* thread-get-specific-1997 */
obj_t BGl_threadzd2getzd2specificzd21997zd2zz__threadz00(obj_t BgL_envz00_3034, obj_t BgL_thz00_3035)
{ AN_OBJECT;
{ /* Llib/thread.scm 507 */
{ /* Llib/thread.scm 508 */
BgL_nothreadz00_bglt BgL_thz00_3793;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3035, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 508 */
BgL_thz00_3793 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3035); }  else 
{ 
obj_t BgL_auxz00_6266;
BgL_auxz00_6266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)21685)), BGl_string3392z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3035); 
FAILURE(BgL_auxz00_6266,BFALSE,BFALSE);} 
return 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_3793))->BgL_z52specificz52);} } 
}



/* thread-terminate!-no1995 */
obj_t BGl_threadzd2terminatez12zd2no1995z12zz__threadz00(obj_t BgL_envz00_3036, obj_t BgL_thz00_3037)
{ AN_OBJECT;
{ /* Llib/thread.scm 499 */
{ 
BgL_nothreadz00_bglt BgL_thz00_1401;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3037, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 500 */
BgL_thz00_1401 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3037); }  else 
{ 
obj_t BgL_auxz00_6293;
BgL_auxz00_6293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)21309)), BGl_string3393z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3037); 
FAILURE(BgL_auxz00_6293,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 501 */
bool_t BgL_testz00_6271;
{ /* Llib/thread.scm 501 */
obj_t BgL_auxz00_6272;
BgL_auxz00_6272 = 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_1401))->BgL_z52cleanupz52); 
BgL_testz00_6271 = 
PROCEDUREP(BgL_auxz00_6272); } 
if(BgL_testz00_6271)
{ /* Llib/thread.scm 501 */
obj_t BgL_fun2309z00_1406;
BgL_fun2309z00_1406 = 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_1401))->BgL_z52cleanupz52); 
{ /* Llib/thread.scm 501 */
obj_t BgL_funz00_3482;
if(
PROCEDUREP(BgL_fun2309z00_1406))
{ /* Llib/thread.scm 501 */
BgL_funz00_3482 = BgL_fun2309z00_1406; }  else 
{ 
obj_t BgL_auxz00_6278;
BgL_auxz00_6278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)21380)), BGl_string3393z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_fun2309z00_1406); 
FAILURE(BgL_auxz00_6278,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3482, ((long)0)))
{ /* Llib/thread.scm 501 */
PROCEDURE_ENTRY(BgL_funz00_3482)(BgL_fun2309z00_1406, BEOA); }  else 
{ /* Llib/thread.scm 501 */
FAILURE(BGl_string3394z00zz__threadz00,BGl_list3395z00zz__threadz00,BgL_funz00_3482);} } }  else 
{ /* Llib/thread.scm 501 */BFALSE; } } 
{ /* Llib/thread.scm 502 */
obj_t BgL_list2311z00_1408;
BgL_list2311z00_1408 = 
MAKE_PAIR(
BINT(((long)0)), BNIL); 
return 
BGl_exitz00zz__errorz00(BgL_list2311z00_1408);} } } 
}



/* thread-join!-nothrea1993 */
obj_t BGl_threadzd2joinz12zd2nothrea1993z12zz__threadz00(obj_t BgL_envz00_3038, obj_t BgL_thz00_3039, obj_t BgL_timeoutz00_3040)
{ AN_OBJECT;
{ /* Llib/thread.scm 490 */
{ 
BgL_nothreadz00_bglt BgL_thz00_1387;obj_t BgL_timeoutz00_1388;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3039, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 491 */
BgL_thz00_1387 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3039); }  else 
{ 
obj_t BgL_auxz00_6306;
BgL_auxz00_6306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20902)), BGl_string3398z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3039); 
FAILURE(BgL_auxz00_6306,BFALSE,BFALSE);} 
BgL_timeoutz00_1388 = BgL_timeoutz00_3040; 
{ /* Llib/thread.scm 491 */
bool_t BgL_testz00_6297;
{ /* Llib/thread.scm 491 */
obj_t BgL_arg2301z00_2563;
BgL_arg2301z00_2563 = 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_1387))->BgL_endzd2exceptionzd2); 
BgL_testz00_6297 = 
BGl_iszd2azf3z21zz__objectz00(BgL_arg2301z00_2563, BGl_z62exceptionz62zz__objectz00); } 
if(BgL_testz00_6297)
{ /* Llib/thread.scm 491 */
obj_t BgL_arg2300z00_2564;
BgL_arg2300z00_2564 = 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_1387))->BgL_endzd2exceptionzd2); 
return 
BGl_raisez00zz__errorz00(BgL_arg2300z00_2564);}  else 
{ /* Llib/thread.scm 491 */
return 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_1387))->BgL_endzd2resultzd2);} } } } 
}



/* thread-start-joinabl1991 */
obj_t BGl_threadzd2startzd2joinabl1991z00zz__threadz00(obj_t BgL_envz00_3041, obj_t BgL_thz00_3042)
{ AN_OBJECT;
{ /* Llib/thread.scm 484 */
{ 
BgL_nothreadz00_bglt BgL_thz00_1381;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3042, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 485 */
BgL_thz00_1381 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3042); }  else 
{ 
obj_t BgL_auxz00_6361;
BgL_auxz00_6361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20603)), BGl_string3399z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3042); 
FAILURE(BgL_auxz00_6361,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 485 */
BgL_threadz00_bglt BgL_thz00_2533;
BgL_thz00_2533 = 
(BgL_threadz00_bglt)(BgL_thz00_1381); 
{ /* Llib/thread.scm 485 */
obj_t BgL_method1963z00_2535;
{ /* Llib/thread.scm 485 */
BgL_objectz00_bglt BgL_objz00_2537;
BgL_objz00_2537 = 
(BgL_objectz00_bglt)(BgL_thz00_2533); 
{ /* Llib/thread.scm 485 */
long BgL_objzd2classzd2numz00_2538;
BgL_objzd2classzd2numz00_2538 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_2537); 
{ /* Llib/thread.scm 485 */
obj_t BgL_arg2549z00_2539;
BgL_arg2549z00_2539 = 
PROCEDURE_REF(BGl_threadzd2startz12zd2envz12zz__threadz00, 
(int)(((long)1))); 
{ /* Llib/thread.scm 485 */
obj_t BgL_arrayz00_2541;int BgL_offsetz00_2542;
if(
VECTORP(BgL_arg2549z00_2539))
{ /* Llib/thread.scm 485 */
BgL_arrayz00_2541 = BgL_arg2549z00_2539; }  else 
{ 
obj_t BgL_auxz00_6317;
BgL_auxz00_6317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20603)), BGl_string3399z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_arg2549z00_2539); 
FAILURE(BgL_auxz00_6317,BFALSE,BFALSE);} 
BgL_offsetz00_2542 = 
(int)(BgL_objzd2classzd2numz00_2538); 
{ /* Llib/thread.scm 485 */
long BgL_offsetz00_2543;
BgL_offsetz00_2543 = 
(
(long)(BgL_offsetz00_2542)-OBJECT_TYPE); 
{ /* Llib/thread.scm 485 */
long BgL_modz00_2544;
{ /* Llib/thread.scm 485 */
int BgL_arg2551z00_2545;
BgL_arg2551z00_2545 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 485 */
long BgL_auxz00_6325;
BgL_auxz00_6325 = 
(long)(BgL_arg2551z00_2545); 
BgL_modz00_2544 = 
(BgL_offsetz00_2543/BgL_auxz00_6325); } } 
{ /* Llib/thread.scm 485 */
long BgL_restz00_2546;
{ /* Llib/thread.scm 485 */
int BgL_arg2550z00_2547;
BgL_arg2550z00_2547 = 
(int)(((long)16)); 
{ /* Llib/thread.scm 485 */
long BgL_auxz00_6329;
BgL_auxz00_6329 = 
(long)(BgL_arg2550z00_2547); 
BgL_restz00_2546 = 
(BgL_offsetz00_2543%BgL_auxz00_6329); } } 
{ /* Llib/thread.scm 485 */

{ /* Llib/thread.scm 485 */
obj_t BgL_bucketz00_2548;
BgL_bucketz00_2548 = 
VECTOR_REF(BgL_arrayz00_2541,
(int)(BgL_modz00_2544)); 
{ /* Llib/thread.scm 485 */
obj_t BgL_vectorz00_2559;int BgL_kz00_2560;
if(
VECTORP(BgL_bucketz00_2548))
{ /* Llib/thread.scm 485 */
BgL_vectorz00_2559 = BgL_bucketz00_2548; }  else 
{ 
obj_t BgL_auxz00_6336;
BgL_auxz00_6336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20603)), BGl_string3399z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_bucketz00_2548); 
FAILURE(BgL_auxz00_6336,BFALSE,BFALSE);} 
BgL_kz00_2560 = 
(int)(BgL_restz00_2546); 
{ /* Llib/thread.scm 485 */
obj_t BgL_aux3022z00_3493;
BgL_aux3022z00_3493 = 
VECTOR_REF(BgL_vectorz00_2559,BgL_kz00_2560); 
if(
PROCEDUREP(BgL_aux3022z00_3493))
{ /* Llib/thread.scm 485 */
BgL_method1963z00_2535 = BgL_aux3022z00_3493; }  else 
{ 
obj_t BgL_auxz00_6344;
BgL_auxz00_6344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20603)), BGl_string3399z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_aux3022z00_3493); 
FAILURE(BgL_auxz00_6344,BFALSE,BFALSE);} } } } } } } } } } } } 
{ /* Llib/thread.scm 485 */
obj_t BgL_valz00_3496;
{ /* Llib/thread.scm 485 */
obj_t BgL_list2200z00_2536;
BgL_list2200z00_2536 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_valz00_3496 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
(obj_t)(BgL_thz00_2533), BgL_list2200z00_2536); } 
{ /* Llib/thread.scm 485 */
int BgL_len3024z00_3497;
BgL_len3024z00_3497 = 
(int)(
bgl_list_length(BgL_valz00_3496)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1963z00_2535, BgL_len3024z00_3497))
{ /* Llib/thread.scm 485 */
return 
apply(BgL_method1963z00_2535, BgL_valz00_3496);}  else 
{ /* Llib/thread.scm 485 */
FAILURE(BGl_symbol3400z00zz__threadz00,BGl_string3244z00zz__threadz00,BGl_list3245z00zz__threadz00);} } } } } } } 
}



/* thread-start!-nothre1989 */
obj_t BGl_threadzd2startz12zd2nothre1989z12zz__threadz00(obj_t BgL_envz00_3043, obj_t BgL_thz00_3044, obj_t BgL_scdz00_3045)
{ AN_OBJECT;
{ /* Llib/thread.scm 468 */
{ 
BgL_nothreadz00_bglt BgL_thz00_1337;obj_t BgL_scdz00_1338;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_thz00_3044, BGl_nothreadz00zz__threadz00))
{ /* Llib/thread.scm 469 */
BgL_thz00_1337 = 
(BgL_nothreadz00_bglt)(BgL_thz00_3044); }  else 
{ 
obj_t BgL_auxz00_6381;
BgL_auxz00_6381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20002)), BGl_string3401z00zz__threadz00, BGl_string3072z00zz__threadz00, BgL_thz00_3044); 
FAILURE(BgL_auxz00_6381,BFALSE,BFALSE);} 
BgL_scdz00_1338 = BgL_scdz00_3045; 
{ /* Llib/thread.scm 469 */
obj_t BgL_threadz00_1341;
BgL_threadz00_1341 = BGl_za2nothreadzd2currentza2zd2zz__threadz00; 
{ /* Llib/thread.scm 470 */
obj_t BgL_val1890z00_1342;
BgL_val1890z00_1342 = 
BGl_zc3exitza32276ze3z83zz__threadz00(BgL_thz00_1337); 
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = BgL_threadz00_1341; 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1890z00_1342)))
{ /* Llib/thread.scm 479 */
obj_t BgL_arg2274z00_1344;obj_t BgL_arg2275z00_1345;
{ /* Llib/thread.scm 479 */
obj_t BgL_pairz00_2530;
if(
PAIRP(BgL_val1890z00_1342))
{ /* Llib/thread.scm 479 */
BgL_pairz00_2530 = BgL_val1890z00_1342; }  else 
{ 
obj_t BgL_auxz00_6371;
BgL_auxz00_6371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20288)), BGl_string3401z00zz__threadz00, BGl_string3077z00zz__threadz00, BgL_val1890z00_1342); 
FAILURE(BgL_auxz00_6371,BFALSE,BFALSE);} 
BgL_arg2274z00_1344 = 
CAR(BgL_pairz00_2530); } 
BgL_arg2275z00_1345 = 
CDR(BgL_val1890z00_1342); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2274z00_1344, BgL_arg2275z00_1345);}  else 
{ /* Llib/thread.scm 479 */
return BgL_val1890z00_1342;} } } } } 
}



/* <exit:2283> */
obj_t BGl_zc3exitza32283ze3z83zz__threadz00(BgL_nothreadz00_bglt BgL_instance1893z00_3089, BgL_nothreadz00_bglt BgL_thz00_3088, obj_t BgL_ohs1895z00_3087, obj_t BgL_an_exitd1899z00_3086, obj_t BgL_err1896z00_3085)
{ AN_OBJECT;
{ /* Llib/thread.scm 473 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1903z00_1366;
if( SET_EXIT(BgL_an_exit1903z00_1366) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1903z00_1366 = 
(void *)jmpbuf; 
{ /* Llib/thread.scm 473 */

PUSH_EXIT(BgL_an_exit1903z00_1366, ((long)0)); 
{ /* Llib/thread.scm 473 */
obj_t BgL_val1904z00_1367;
{ /* Llib/thread.scm 473 */
obj_t BgL_arg2284z00_1368;
{ /* Llib/thread.scm 473 */
obj_t BgL_zc3anonymousza32286ze3z83_3002;
BgL_zc3anonymousza32286ze3z83_3002 = 
make_fx_procedure(BGl_zc3anonymousza32286ze3z83zz__threadz00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32286ze3z83_3002, 
(int)(((long)0)), BgL_err1896z00_3085); 
PROCEDURE_SET(BgL_zc3anonymousza32286ze3z83_3002, 
(int)(((long)1)), BgL_an_exitd1899z00_3086); 
BgL_arg2284z00_1368 = 
MAKE_PAIR(BgL_zc3anonymousza32286ze3z83_3002, BgL_ohs1895z00_3087); } 
BGL_ERROR_HANDLER_SET(BgL_arg2284z00_1368); BUNSPEC; } 
{ /* Llib/thread.scm 477 */
obj_t BgL_arg2289z00_1373;
{ /* Llib/thread.scm 477 */
obj_t BgL_fun2290z00_1374;
BgL_fun2290z00_1374 = 
(((BgL_nothreadz00_bglt)CREF(BgL_thz00_3088))->BgL_bodyz00); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun2290z00_1374, ((long)0)))
{ /* Llib/thread.scm 477 */
BgL_arg2289z00_1373 = 
PROCEDURE_ENTRY(BgL_fun2290z00_1374)(BgL_fun2290z00_1374, BEOA); }  else 
{ /* Llib/thread.scm 477 */
FAILURE(BGl_string3402z00zz__threadz00,BGl_list3403z00zz__threadz00,BgL_fun2290z00_1374);} } 
BgL_val1904z00_1367 = 
((((BgL_nothreadz00_bglt)CREF(BgL_instance1893z00_3089))->BgL_endzd2resultzd2) = ((obj_t)BgL_arg2289z00_1373), BUNSPEC); } 
POP_EXIT(); 
return BgL_val1904z00_1367;} } 
} } 
}



/* <exit:2277> */
obj_t BGl_zc3exitza32277ze3z83zz__threadz00(BgL_nothreadz00_bglt BgL_instance1893z00_3091, BgL_nothreadz00_bglt BgL_thz00_3090)
{ AN_OBJECT;
{ /* Llib/thread.scm 473 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1898z00_1351;
if( SET_EXIT(BgL_an_exit1898z00_1351) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1898z00_1351 = 
(void *)jmpbuf; 
{ /* Llib/thread.scm 473 */

PUSH_EXIT(BgL_an_exit1898z00_1351, ((long)1)); 
{ /* Llib/thread.scm 473 */
obj_t BgL_an_exitd1899z00_1352;
BgL_an_exitd1899z00_1352 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/thread.scm 473 */
obj_t BgL_res1901z00_1355;
{ /* Llib/thread.scm 473 */
obj_t BgL_err1896z00_1356;obj_t BgL_ohs1895z00_1357;
BgL_err1896z00_1356 = 
MAKE_PAIR(BFALSE, BUNSPEC); 
BgL_ohs1895z00_1357 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Llib/thread.scm 473 */
obj_t BgL_val1902z00_1358;
BgL_val1902z00_1358 = 
BGl_zc3exitza32283ze3z83zz__threadz00(BgL_instance1893z00_3091, BgL_thz00_3090, BgL_ohs1895z00_1357, BgL_an_exitd1899z00_1352, BgL_err1896z00_1356); 
BGL_ERROR_HANDLER_SET(BgL_ohs1895z00_1357); BUNSPEC; 
if(
CBOOL(
CAR(BgL_err1896z00_1356)))
{ /* Llib/thread.scm 476 */
obj_t BgL_arg2279z00_1360;
{ /* Llib/thread.scm 476 */
obj_t BgL_ez00_1361;
BgL_ez00_1361 = 
CDR(BgL_err1896z00_1356); 
((((BgL_nothreadz00_bglt)CREF(BgL_instance1893z00_3091))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_ez00_1361), BUNSPEC); 
BgL_arg2279z00_1360 = 
BGl_raisez00zz__errorz00(BgL_ez00_1361); } 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1899z00_1352, BgL_arg2279z00_1360); }  else 
{ /* Llib/thread.scm 473 */BFALSE; } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1902z00_1358)))
{ /* Llib/thread.scm 473 */
obj_t BgL_arg2281z00_1363;obj_t BgL_arg2282z00_1364;
{ /* Llib/thread.scm 473 */
obj_t BgL_pairz00_2528;
if(
PAIRP(BgL_val1902z00_1358))
{ /* Llib/thread.scm 473 */
BgL_pairz00_2528 = BgL_val1902z00_1358; }  else 
{ 
obj_t BgL_auxz00_6425;
BgL_auxz00_6425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20153)), BGl_string3406z00zz__threadz00, BGl_string3077z00zz__threadz00, BgL_val1902z00_1358); 
FAILURE(BgL_auxz00_6425,BFALSE,BFALSE);} 
BgL_arg2281z00_1363 = 
CAR(BgL_pairz00_2528); } 
BgL_arg2282z00_1364 = 
CDR(BgL_val1902z00_1358); 
BgL_res1901z00_1355 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2281z00_1363, BgL_arg2282z00_1364); }  else 
{ /* Llib/thread.scm 473 */
BgL_res1901z00_1355 = BgL_val1902z00_1358; } } } 
POP_EXIT(); 
return BgL_res1901z00_1355;} } } 
} } 
}



/* <exit:2276> */
obj_t BGl_zc3exitza32276ze3z83zz__threadz00(BgL_nothreadz00_bglt BgL_thz00_3092)
{ AN_OBJECT;
{ /* Llib/thread.scm 479 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1891z00_1347;
if( SET_EXIT(BgL_an_exit1891z00_1347) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1891z00_1347 = 
(void *)jmpbuf; 
{ /* Llib/thread.scm 479 */

PUSH_EXIT(BgL_an_exit1891z00_1347, ((long)0)); 
{ /* Llib/thread.scm 471 */
BgL_nothreadz00_bglt BgL_val1892z00_1348;
BGl_za2nothreadzd2currentza2zd2zz__threadz00 = 
(obj_t)(BgL_thz00_3092); 
BGl_zc3exitza32277ze3z83zz__threadz00(BgL_thz00_3092, BgL_thz00_3092); 
BgL_val1892z00_1348 = BgL_thz00_3092; 
POP_EXIT(); 
return 
(obj_t)(BgL_val1892z00_1348);} } 
} } 
}



/* <anonymous:2286> */
obj_t BGl_zc3anonymousza32286ze3z83zz__threadz00(obj_t BgL_envz00_3046, obj_t BgL_ez00_3049)
{ AN_OBJECT;
{ /* Llib/thread.scm 473 */
{ /* Llib/thread.scm 473 */
obj_t BgL_err1896z00_3047;obj_t BgL_an_exitd1899z00_3048;
BgL_err1896z00_3047 = 
PROCEDURE_REF(BgL_envz00_3046, 
(int)(((long)0))); 
BgL_an_exitd1899z00_3048 = 
PROCEDURE_REF(BgL_envz00_3046, 
(int)(((long)1))); 
{ 
obj_t BgL_ez00_1370;
BgL_ez00_1370 = BgL_ez00_3049; 
{ /* Llib/thread.scm 473 */
obj_t BgL_pairz00_2515;
if(
PAIRP(BgL_err1896z00_3047))
{ /* Llib/thread.scm 473 */
BgL_pairz00_2515 = BgL_err1896z00_3047; }  else 
{ 
obj_t BgL_auxz00_6446;
BgL_auxz00_6446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)20153)), BGl_string3407z00zz__threadz00, BGl_string3077z00zz__threadz00, BgL_err1896z00_3047); 
FAILURE(BgL_auxz00_6446,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2515, BTRUE); } 
SET_CDR(BgL_err1896z00_3047, BgL_ez00_1370); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1899z00_3048, BgL_ez00_1370);} } } 
}



/* object-print-thread1959 */
obj_t BGl_objectzd2printzd2thread1959z00zz__threadz00(obj_t BgL_envz00_3050, obj_t BgL_oz00_3051, obj_t BgL_portz00_3052, obj_t BgL_printzd2slotzd2_3053)
{ AN_OBJECT;
{ /* Llib/thread.scm 328 */
{ 
BgL_threadz00_bglt BgL_oz00_1329;obj_t BgL_portz00_1330;obj_t BgL_printzd2slotzd2_1331;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_3051, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 329 */
BgL_oz00_1329 = 
(BgL_threadz00_bglt)(BgL_oz00_3051); }  else 
{ 
obj_t BgL_auxz00_6459;
BgL_auxz00_6459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13474)), BGl_string3408z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_3051); 
FAILURE(BgL_auxz00_6459,BFALSE,BFALSE);} 
BgL_portz00_1330 = BgL_portz00_3052; 
BgL_printzd2slotzd2_1331 = BgL_printzd2slotzd2_3053; 
{ /* Llib/thread.scm 329 */
obj_t BgL_list2270z00_2514;
BgL_list2270z00_2514 = 
MAKE_PAIR(BgL_portz00_1330, BNIL); 
return 
BGl_objectzd2writezd2zz__objectz00(
(BgL_objectz00_bglt)(BgL_oz00_1329), BgL_list2270z00_2514);} } } 
}



/* object-write-thread1957 */
obj_t BGl_objectzd2writezd2thread1957z00zz__threadz00(obj_t BgL_envz00_3054, obj_t BgL_oz00_3055, obj_t BgL_portz00_3056)
{ AN_OBJECT;
{ /* Llib/thread.scm 319 */
{ 
BgL_threadz00_bglt BgL_oz00_1302;obj_t BgL_portz00_1303;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_3055, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 320 */
BgL_oz00_1302 = 
(BgL_threadz00_bglt)(BgL_oz00_3055); }  else 
{ 
obj_t BgL_auxz00_6486;
BgL_auxz00_6486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13010)), BGl_string3409z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_3055); 
FAILURE(BgL_auxz00_6486,BFALSE,BFALSE);} 
BgL_portz00_1303 = BgL_portz00_3056; 
{ /* Llib/thread.scm 320 */
obj_t BgL_arg2248z00_1306;
if(
PAIRP(BgL_portz00_1303))
{ /* Llib/thread.scm 320 */
BgL_arg2248z00_1306 = 
CAR(BgL_portz00_1303); }  else 
{ /* Llib/thread.scm 320 */
obj_t BgL_res2623z00_2504;
{ /* Llib/thread.scm 320 */
obj_t BgL_auxz00_6466;
BgL_auxz00_6466 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2623z00_2504 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_6466); } 
BgL_arg2248z00_1306 = BgL_res2623z00_2504; } 
{ /* Llib/thread.scm 322 */
obj_t BgL_zc3anonymousza32251ze3z83_3005;
BgL_zc3anonymousza32251ze3z83_3005 = 
make_fx_procedure(BGl_zc3anonymousza32251ze3z83zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32251ze3z83_3005, 
(int)(((long)0)), 
(obj_t)(BgL_oz00_1302)); 
{ /* Llib/thread.scm 320 */
obj_t BgL_auxz00_6475;
if(
OUTPUT_PORTP(BgL_arg2248z00_1306))
{ /* Llib/thread.scm 320 */
BgL_auxz00_6475 = BgL_arg2248z00_1306
; }  else 
{ 
obj_t BgL_auxz00_6478;
BgL_auxz00_6478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13059)), BGl_string3409z00zz__threadz00, BGl_string3410z00zz__threadz00, BgL_arg2248z00_1306); 
FAILURE(BgL_auxz00_6478,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6475, BgL_zc3anonymousza32251ze3z83_3005);} } } } } 
}



/* <anonymous:2251> */
obj_t BGl_zc3anonymousza32251ze3z83zz__threadz00(obj_t BgL_envz00_3057)
{ AN_OBJECT;
{ /* Llib/thread.scm 321 */
{ /* Llib/thread.scm 322 */
obj_t BgL_oz00_3058;
BgL_oz00_3058 = 
PROCEDURE_REF(BgL_envz00_3057, 
(int)(((long)0))); 
{ 

{ /* Llib/thread.scm 323 */
obj_t BgL_arg2253z00_1312;obj_t BgL_arg2256z00_1314;
{ /* Llib/thread.scm 323 */
obj_t BgL_arg2264z00_1321;
{ /* Llib/thread.scm 323 */
BgL_objectz00_bglt BgL_objectz00_2505;
if(
BGL_OBJECTP(BgL_oz00_3058))
{ /* Llib/thread.scm 323 */
BgL_objectz00_2505 = 
(BgL_objectz00_bglt)(BgL_oz00_3058); }  else 
{ 
obj_t BgL_auxz00_6495;
BgL_auxz00_6495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13170)), BGl_string3411z00zz__threadz00, BGl_string3412z00zz__threadz00, BgL_oz00_3058); 
FAILURE(BgL_auxz00_6495,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 323 */
long BgL_arg2552z00_2506;
{ /* Llib/thread.scm 323 */
long BgL_arg2553z00_2507;
BgL_arg2553z00_2507 = 
BGL_OBJECT_CLASS_NUM(BgL_objectz00_2505); 
BgL_arg2552z00_2506 = 
(BgL_arg2553z00_2507-OBJECT_TYPE); } 
{ /* Llib/thread.scm 323 */
obj_t BgL_vectorz00_2511;int BgL_kz00_2512;
{ /* Llib/thread.scm 323 */
obj_t BgL_aux3052z00_3526;
BgL_aux3052z00_3526 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3052z00_3526))
{ /* Llib/thread.scm 323 */
BgL_vectorz00_2511 = BgL_aux3052z00_3526; }  else 
{ 
obj_t BgL_auxz00_6503;
BgL_auxz00_6503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13156)), BGl_string3411z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_aux3052z00_3526); 
FAILURE(BgL_auxz00_6503,BFALSE,BFALSE);} } 
BgL_kz00_2512 = 
(int)(BgL_arg2552z00_2506); 
BgL_arg2264z00_1321 = 
VECTOR_REF(BgL_vectorz00_2511,BgL_kz00_2512); } } } 
BgL_arg2253z00_1312 = 
BGl_classzd2namezd2zz__objectz00(BgL_arg2264z00_1321); } 
{ /* Llib/thread.scm 323 */
BgL_threadz00_bglt BgL_obj1772z00_2513;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_3058, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 323 */
BgL_obj1772z00_2513 = 
(BgL_threadz00_bglt)(BgL_oz00_3058); }  else 
{ 
obj_t BgL_auxz00_6513;
BgL_auxz00_6513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)13129)), BGl_string3411z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_3058); 
FAILURE(BgL_auxz00_6513,BFALSE,BFALSE);} 
BgL_arg2256z00_1314 = 
(((BgL_threadz00_bglt)CREF(BgL_obj1772z00_2513))->BgL_namez00); } 
{ /* Llib/thread.scm 323 */
obj_t BgL_list2258z00_1316;
{ /* Llib/thread.scm 323 */
obj_t BgL_arg2259z00_1317;
{ /* Llib/thread.scm 323 */
obj_t BgL_arg2260z00_1318;
{ /* Llib/thread.scm 323 */
obj_t BgL_arg2262z00_1319;
{ /* Llib/thread.scm 323 */
obj_t BgL_arg2263z00_1320;
BgL_arg2263z00_1320 = 
MAKE_PAIR(BGl_string3413z00zz__threadz00, BNIL); 
BgL_arg2262z00_1319 = 
MAKE_PAIR(BgL_arg2256z00_1314, BgL_arg2263z00_1320); } 
BgL_arg2260z00_1318 = 
MAKE_PAIR(BGl_string3414z00zz__threadz00, BgL_arg2262z00_1319); } 
BgL_arg2259z00_1317 = 
MAKE_PAIR(BgL_arg2253z00_1312, BgL_arg2260z00_1318); } 
BgL_list2258z00_1316 = 
MAKE_PAIR(BGl_string3415z00zz__threadz00, BgL_arg2259z00_1317); } 
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2258z00_1316);} } } } } 
}



/* object-display-threa1955 */
obj_t BGl_objectzd2displayzd2threa1955z00zz__threadz00(obj_t BgL_envz00_3059, obj_t BgL_oz00_3060, obj_t BgL_portz00_3061)
{ AN_OBJECT;
{ /* Llib/thread.scm 310 */
{ 
BgL_threadz00_bglt BgL_oz00_1275;obj_t BgL_portz00_1276;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_3060, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 311 */
BgL_oz00_1275 = 
(BgL_threadz00_bglt)(BgL_oz00_3060); }  else 
{ 
obj_t BgL_auxz00_6547;
BgL_auxz00_6547 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12534)), BGl_string3416z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_3060); 
FAILURE(BgL_auxz00_6547,BFALSE,BFALSE);} 
BgL_portz00_1276 = BgL_portz00_3061; 
{ /* Llib/thread.scm 311 */
obj_t BgL_arg2217z00_1279;
if(
PAIRP(BgL_portz00_1276))
{ /* Llib/thread.scm 311 */
BgL_arg2217z00_1279 = 
CAR(BgL_portz00_1276); }  else 
{ /* Llib/thread.scm 311 */
obj_t BgL_res2622z00_2491;
{ /* Llib/thread.scm 311 */
obj_t BgL_auxz00_6527;
BgL_auxz00_6527 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2622z00_2491 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_6527); } 
BgL_arg2217z00_1279 = BgL_res2622z00_2491; } 
{ /* Llib/thread.scm 313 */
obj_t BgL_zc3anonymousza32224ze3z83_3007;
BgL_zc3anonymousza32224ze3z83_3007 = 
make_fx_procedure(BGl_zc3anonymousza32224ze3z83zz__threadz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32224ze3z83_3007, 
(int)(((long)0)), 
(obj_t)(BgL_oz00_1275)); 
{ /* Llib/thread.scm 311 */
obj_t BgL_auxz00_6536;
if(
OUTPUT_PORTP(BgL_arg2217z00_1279))
{ /* Llib/thread.scm 311 */
BgL_auxz00_6536 = BgL_arg2217z00_1279
; }  else 
{ 
obj_t BgL_auxz00_6539;
BgL_auxz00_6539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12583)), BGl_string3416z00zz__threadz00, BGl_string3410z00zz__threadz00, BgL_arg2217z00_1279); 
FAILURE(BgL_auxz00_6539,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6536, BgL_zc3anonymousza32224ze3z83_3007);} } } } } 
}



/* <anonymous:2224> */
obj_t BGl_zc3anonymousza32224ze3z83zz__threadz00(obj_t BgL_envz00_3062)
{ AN_OBJECT;
{ /* Llib/thread.scm 312 */
{ /* Llib/thread.scm 313 */
obj_t BgL_oz00_3063;
BgL_oz00_3063 = 
PROCEDURE_REF(BgL_envz00_3062, 
(int)(((long)0))); 
{ 

{ /* Llib/thread.scm 314 */
obj_t BgL_arg2227z00_1285;obj_t BgL_arg2234z00_1287;
{ /* Llib/thread.scm 314 */
obj_t BgL_arg2242z00_1294;
{ /* Llib/thread.scm 314 */
BgL_objectz00_bglt BgL_objectz00_2492;
if(
BGL_OBJECTP(BgL_oz00_3063))
{ /* Llib/thread.scm 314 */
BgL_objectz00_2492 = 
(BgL_objectz00_bglt)(BgL_oz00_3063); }  else 
{ 
obj_t BgL_auxz00_6556;
BgL_auxz00_6556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12694)), BGl_string3417z00zz__threadz00, BGl_string3412z00zz__threadz00, BgL_oz00_3063); 
FAILURE(BgL_auxz00_6556,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 314 */
long BgL_arg2552z00_2493;
{ /* Llib/thread.scm 314 */
long BgL_arg2553z00_2494;
BgL_arg2553z00_2494 = 
BGL_OBJECT_CLASS_NUM(BgL_objectz00_2492); 
BgL_arg2552z00_2493 = 
(BgL_arg2553z00_2494-OBJECT_TYPE); } 
{ /* Llib/thread.scm 314 */
obj_t BgL_vectorz00_2498;int BgL_kz00_2499;
{ /* Llib/thread.scm 314 */
obj_t BgL_aux3062z00_3536;
BgL_aux3062z00_3536 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3062z00_3536))
{ /* Llib/thread.scm 314 */
BgL_vectorz00_2498 = BgL_aux3062z00_3536; }  else 
{ 
obj_t BgL_auxz00_6564;
BgL_auxz00_6564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12680)), BGl_string3417z00zz__threadz00, BGl_string3092z00zz__threadz00, BgL_aux3062z00_3536); 
FAILURE(BgL_auxz00_6564,BFALSE,BFALSE);} } 
BgL_kz00_2499 = 
(int)(BgL_arg2552z00_2493); 
BgL_arg2242z00_1294 = 
VECTOR_REF(BgL_vectorz00_2498,BgL_kz00_2499); } } } 
BgL_arg2227z00_1285 = 
BGl_classzd2namezd2zz__objectz00(BgL_arg2242z00_1294); } 
{ /* Llib/thread.scm 314 */
BgL_threadz00_bglt BgL_obj1772z00_2500;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_oz00_3063, BGl_threadz00zz__threadz00))
{ /* Llib/thread.scm 314 */
BgL_obj1772z00_2500 = 
(BgL_threadz00_bglt)(BgL_oz00_3063); }  else 
{ 
obj_t BgL_auxz00_6574;
BgL_auxz00_6574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12653)), BGl_string3417z00zz__threadz00, BGl_string3088z00zz__threadz00, BgL_oz00_3063); 
FAILURE(BgL_auxz00_6574,BFALSE,BFALSE);} 
BgL_arg2234z00_1287 = 
(((BgL_threadz00_bglt)CREF(BgL_obj1772z00_2500))->BgL_namez00); } 
{ /* Llib/thread.scm 314 */
obj_t BgL_list2236z00_1289;
{ /* Llib/thread.scm 314 */
obj_t BgL_arg2237z00_1290;
{ /* Llib/thread.scm 314 */
obj_t BgL_arg2238z00_1291;
{ /* Llib/thread.scm 314 */
obj_t BgL_arg2239z00_1292;
{ /* Llib/thread.scm 314 */
obj_t BgL_arg2240z00_1293;
BgL_arg2240z00_1293 = 
MAKE_PAIR(BGl_string3413z00zz__threadz00, BNIL); 
BgL_arg2239z00_1292 = 
MAKE_PAIR(BgL_arg2234z00_1287, BgL_arg2240z00_1293); } 
BgL_arg2238z00_1291 = 
MAKE_PAIR(BGl_string3414z00zz__threadz00, BgL_arg2239z00_1292); } 
BgL_arg2237z00_1290 = 
MAKE_PAIR(BgL_arg2227z00_1285, BgL_arg2238z00_1291); } 
BgL_list2236z00_1289 = 
MAKE_PAIR(BGl_string3415z00zz__threadz00, BgL_arg2237z00_1290); } 
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list2236z00_1289);} } } } } 
}



/* tb-current-thread-no1953 */
obj_t BGl_tbzd2currentzd2threadzd2no1953zd2zz__threadz00(obj_t BgL_envz00_3064, obj_t BgL_tbz00_3065)
{ AN_OBJECT;
{ /* Llib/thread.scm 304 */
{ /* Llib/thread.scm 304 */
BgL_nothreadzd2backendzd2_bglt BgL_tbz00_3806;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_3065, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 304 */
BgL_tbz00_3806 = 
(BgL_nothreadzd2backendzd2_bglt)(BgL_tbz00_3065); }  else 
{ 
obj_t BgL_auxz00_6588;
BgL_auxz00_6588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)12159)), BGl_string3418z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_tbz00_3065); 
FAILURE(BgL_auxz00_6588,BFALSE,BFALSE);} 
return BGl_za2nothreadzd2currentza2zd2zz__threadz00;} } 
}



/* tb-make-thread-nothr1951 */
obj_t BGl_tbzd2makezd2threadzd2nothr1951zd2zz__threadz00(obj_t BgL_envz00_3066, obj_t BgL_tbz00_3067, obj_t BgL_bodyz00_3068, obj_t BgL_namez00_3069)
{ AN_OBJECT;
{ /* Llib/thread.scm 296 */
{ 
BgL_nothreadzd2backendzd2_bglt BgL_tbz00_1263;obj_t BgL_bodyz00_1264;obj_t BgL_namez00_1265;
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_auxz00_6592;
if(
BGl_iszd2azf3z21zz__objectz00(BgL_tbz00_3067, BGl_nothreadzd2backendzd2zz__threadz00))
{ /* Llib/thread.scm 297 */
BgL_tbz00_1263 = 
(BgL_nothreadzd2backendzd2_bglt)(BgL_tbz00_3067); }  else 
{ 
obj_t BgL_auxz00_6617;
BgL_auxz00_6617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11875)), BGl_string3419z00zz__threadz00, BGl_string3173z00zz__threadz00, BgL_tbz00_3067); 
FAILURE(BgL_auxz00_6617,BFALSE,BFALSE);} 
BgL_bodyz00_1264 = BgL_bodyz00_3068; 
BgL_namez00_1265 = BgL_namez00_3069; 
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_res2621z00_2487;
{ /* Llib/thread.scm 297 */
obj_t BgL_body1817z00_2462;
if(
PROCEDUREP(BgL_bodyz00_1264))
{ /* Llib/thread.scm 297 */
BgL_body1817z00_2462 = BgL_bodyz00_1264; }  else 
{ 
obj_t BgL_auxz00_6595;
BgL_auxz00_6595 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3073z00zz__threadz00, 
BINT(((long)11875)), BGl_string3419z00zz__threadz00, BGl_string3090z00zz__threadz00, BgL_bodyz00_1264); 
FAILURE(BgL_auxz00_6595,BFALSE,BFALSE);} 
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_new1822z00_2467;
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_res2619z00_2472;
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_new1838z00_2468;
BgL_new1838z00_2468 = 
((BgL_nothreadz00_bglt)BREF( GC_MALLOC ( sizeof(struct BgL_nothreadz00_bgl) ))); 
BGL_OBJECT_CLASS_NUM_SET(
(BgL_objectz00_bglt)(BgL_new1838z00_2468), 
BGl_classzd2numzd2zz__objectz00(BGl_nothreadz00zz__threadz00)); 
{ /* Llib/thread.scm 297 */
BgL_objectz00_bglt BgL_auxz00_6603;
BgL_auxz00_6603 = 
(BgL_objectz00_bglt)(BgL_new1838z00_2468); 
BGL_OBJECT_WIDENING_SET(BgL_auxz00_6603, BFALSE); } 
BgL_res2619z00_2472 = BgL_new1838z00_2468; } 
BgL_new1822z00_2467 = BgL_res2619z00_2472; } 
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_res2620z00_2486;
{ /* Llib/thread.scm 297 */
BgL_nothreadz00_bglt BgL_new1830z00_2473;
BgL_new1830z00_2473 = BgL_new1822z00_2467; 
{ /* Llib/thread.scm 297 */
obj_t BgL_name1824z00_2480;obj_t BgL_body1825z00_2481;obj_t BgL_z52specific1826z52_2482;obj_t BgL_z52cleanup1827z52_2483;obj_t BgL_endzd2result1828zd2_2484;obj_t BgL_endzd2exception1829zd2_2485;
BgL_name1824z00_2480 = BgL_namez00_1265; 
BgL_body1825z00_2481 = BgL_body1817z00_2462; 
BgL_z52specific1826z52_2482 = BUNSPEC; 
BgL_z52cleanup1827z52_2483 = BFALSE; 
BgL_endzd2result1828zd2_2484 = BUNSPEC; 
BgL_endzd2exception1829zd2_2485 = BUNSPEC; 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_namez00) = ((obj_t)BgL_name1824z00_2480), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_bodyz00) = ((obj_t)BgL_body1825z00_2481), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_z52specificz52) = ((obj_t)BgL_z52specific1826z52_2482), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_z52cleanupz52) = ((obj_t)BgL_z52cleanup1827z52_2483), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_endzd2resultzd2) = ((obj_t)BgL_endzd2result1828zd2_2484), BUNSPEC); 
((((BgL_nothreadz00_bglt)CREF(BgL_new1830z00_2473))->BgL_endzd2exceptionzd2) = ((obj_t)BgL_endzd2exception1829zd2_2485), BUNSPEC); 
BgL_res2620z00_2486 = BgL_new1830z00_2473; } } BgL_res2620z00_2486; } 
BGl_threadzd2initializa7ez12z67zz__threadz00(
(BgL_threadz00_bglt)(BgL_new1822z00_2467)); 
BgL_res2621z00_2487 = BgL_new1822z00_2467; } } 
BgL_auxz00_6592 = BgL_res2621z00_2487; } 
return 
(obj_t)(BgL_auxz00_6592);} } } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__threadz00()
{ AN_OBJECT;
{ /* Llib/thread.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3420z00zz__threadz00)); 
return 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string3420z00zz__threadz00));} 
}

#ifdef __cplusplus
}
#endif
