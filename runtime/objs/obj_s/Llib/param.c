/*===========================================================================*/
/*   (Llib/param.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/param.scm -indent -o objs/obj_s/Llib/param.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_list2246z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t);
static obj_t BGl__bigloozd2debugzd2zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t);
static obj_t BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
BGL_EXPORTED_DECL long bgl_dns_cache_validity_timeout();
static obj_t BGl_requirezd2initializa7ationz75zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL int bgl_debug();
BGL_EXPORTED_DECL int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
BGL_EXPORTED_DECL bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
static obj_t BGl_genericzd2initzd2zz__paramz00();
static obj_t BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t);
static obj_t BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t);
static obj_t BGl__bigloozd2compilerzd2debugz00zz__paramz00(obj_t);
static obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00(obj_t);
static obj_t BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00();
static obj_t BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(obj_t, obj_t);
extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
static obj_t BGl__bigloozd2warningzd2setz12z12zz__paramz00(obj_t, obj_t);
extern obj_t BGl_getenvz00zz__osz00(char *);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2debugza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
static obj_t BGl_cnstzd2initzd2zz__paramz00();
static obj_t BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00(obj_t);
static obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00(obj_t);
static obj_t BGl__bigloozd2initializa7edz12z67zz__paramz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00();
static obj_t BGl__bigloozd2initializa7edzf3z86zz__paramz00(obj_t);
static obj_t BGl_zc3anonymousza31906ze3z83zz__paramz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__paramz00();
static obj_t BGl__bigloozd2warningzd2zz__paramz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(obj_t, obj_t);
static obj_t BGl_symbol2216z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
static obj_t BGl_symbol2218z00zz__paramz00 = BUNSPEC;
static obj_t BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol2224z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol2229z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol2233z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(obj_t, obj_t);
static obj_t BGl_symbol2238z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2loadzd2readerz00zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long);
static obj_t BGl_symbol2247z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol2249z00zz__paramz00 = BUNSPEC;
static obj_t BGl_symbol2258z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t);
static obj_t BGl_toplevelzd2initzd2zz__paramz00();
static obj_t BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int);
BGL_EXPORTED_DECL int BGl_bigloozd2warningzd2zz__paramz00();
static obj_t BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t, obj_t);
static obj_t BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2debugzd2modulez00zz__paramz00();
static obj_t BGl__bigloozd2debugzd2modulez00zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t bgl_dns_enable_cache();
BGL_EXPORTED_DECL obj_t BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t);
extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
BGL_EXPORTED_DECL obj_t bgl_debug_set(int);
static obj_t BGl__bigloozd2loadzd2modulez00zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t, obj_t);
static obj_t BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int);
static obj_t BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(obj_t, obj_t);
static obj_t BGl__bigloozd2casezd2sensitivez00zz__paramz00(obj_t);
static obj_t BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
static obj_t BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl__bigloozd2tracezd2colorz00zz__paramz00(obj_t);
static obj_t BGl_za2bigloozd2warningza2zd2zz__paramz00 = BUNSPEC;
static obj_t BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
static obj_t BGl__bigloozd2libraryzd2pathz00zz__paramz00(obj_t);
static obj_t BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t, obj_t);
static obj_t BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(obj_t, obj_t);
static obj_t BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(obj_t, obj_t);
static obj_t BGl__bigloozd2debugzd2setz12z12zz__paramz00(obj_t, obj_t);
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BUNSPEC;
static obj_t BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
static obj_t BGl_methodzd2initzd2zz__paramz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2extensionzd2handlerzd2envz00zz__paramz00, BgL_bgl__biglooza7d2module2270za7, BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2casezd2sensitivezd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2caseza7d2271z00, BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2envzd2zz__paramz00, BgL_bgl__biglooza7d2dnsza7d22272z00, BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2strictzd2r5rszd2stringszd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2strict2273za7, BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2initializa7edz12zd2envzb5zz__paramz00, BgL_bgl__biglooza7d2initia2274za7, BGl__bigloozd2initializa7edz12z67zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2enablezd2cachezd2envz00zz__paramz00, BgL_bgl__biglooza7d2dnsza7d22275z00, BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2modulezd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2loadza7d2276z00, BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2compilerzd2debugzd2envzd2zz__paramz00, BgL_bgl__biglooza7d2compil2277za7, BGl__bigloozd2compilerzd2debugz00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2dnsza7d22278z00, BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2readerzd2envzd2zz__paramz00, BgL_bgl__biglooza7d2loadza7d2279z00, BGl__bigloozd2loadzd2readerz00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2evalzd2strictzd2modulezd2envz00zz__paramz00, BgL_bgl__biglooza7d2evalza7d2280z00, BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2readerzd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2loadza7d2281z00, BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2debugza72282z00, BGl__bigloozd2debugzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2initializa7edzf3zd2envz54zz__paramz00, BgL_bgl__biglooza7d2initia2283za7, BGl__bigloozd2initializa7edzf3z86zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2colorzd2envzd2zz__paramz00, BgL_bgl__biglooza7d2traceza72284z00, BGl__bigloozd2tracezd2colorz00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2casezd2sensitivezd2envzd2zz__paramz00, BgL_bgl__biglooza7d2caseza7d2285z00, BGl__bigloozd2casezd2sensitivez00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2envz00zz__paramz00, BgL_bgl__biglooza7d2debugza72286z00, BGl__bigloozd2debugzd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2stackzd2depthzd2envz00zz__paramz00, BgL_bgl__biglooza7d2traceza72287z00, BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2warningzd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2warnin2288za7, BGl__bigloozd2warningzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2loadzd2modulezd2envzd2zz__paramz00, BgL_bgl__biglooza7d2loadza7d2289z00, BGl__bigloozd2loadzd2modulez00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2libraryzd2pathzd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2librar2290za7, BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2libraryzd2pathzd2envzd2zz__paramz00, BgL_bgl__biglooza7d2librar2291za7, BGl__bigloozd2libraryzd2pathz00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2compilerzd2debugzd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2compil2292za7, BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2260z00zz__paramz00, BgL_bgl_za7c3anonymousza7a312293z00, BGl_zc3anonymousza31906ze3z83zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2warningzd2envz00zz__paramz00, BgL_bgl__biglooza7d2warnin2294za7, BGl__bigloozd2warningzd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2colorzd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2traceza72295z00, BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2dnszd2enablezd2cachezd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2dnsza7d22296z00, BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2strictzd2r5rszd2stringszd2envz00zz__paramz00, BgL_bgl__biglooza7d2strict2297za7, BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2module2298za7, BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2214z00zz__paramz00, BgL_bgl_string2214za700za7za7_2299za7, "param", 5 );
DEFINE_STRING( BGl_string2215z00zz__paramz00, BgL_bgl_string2215za700za7za7_2300za7, "BIGLOOSTACKDEPTH", 16 );
DEFINE_STRING( BGl_string2217z00zz__paramz00, BgL_bgl_string2217za700za7za7_2301za7, "sensitive", 9 );
DEFINE_STRING( BGl_string2220z00zz__paramz00, BgL_bgl_string2220za700za7za7_2302za7, ".", 1 );
DEFINE_STRING( BGl_string2219z00zz__paramz00, BgL_bgl_string2219za700za7za7_2303za7, "library-directory", 17 );
DEFINE_STRING( BGl_string2221z00zz__paramz00, BgL_bgl_string2221za700za7za7_2304za7, "/tmp/bigloo/runtime/Llib/param.scm", 34 );
DEFINE_STRING( BGl_string2222z00zz__paramz00, BgL_bgl_string2222za700za7za7_2305za7, "bigloo-compiler-debug", 21 );
DEFINE_STRING( BGl_string2223z00zz__paramz00, BgL_bgl_string2223za700za7za7_2306za7, "int", 3 );
DEFINE_STRING( BGl_string2225z00zz__paramz00, BgL_bgl_string2225za700za7za7_2307za7, "bigloo-compiler-debug-set!", 26 );
DEFINE_STRING( BGl_string2226z00zz__paramz00, BgL_bgl_string2226za700za7za7_2308za7, "Illegal debug level", 19 );
DEFINE_STRING( BGl_string2227z00zz__paramz00, BgL_bgl_string2227za700za7za7_2309za7, "_bigloo-compiler-debug-set!", 27 );
DEFINE_STRING( BGl_string2228z00zz__paramz00, BgL_bgl_string2228za700za7za7_2310za7, "bigloo-debug", 12 );
DEFINE_STRING( BGl_string2230z00zz__paramz00, BgL_bgl_string2230za700za7za7_2311za7, "bigloo-debug-set!", 17 );
DEFINE_STRING( BGl_string2231z00zz__paramz00, BgL_bgl_string2231za700za7za7_2312za7, "_bigloo-debug-set!", 18 );
DEFINE_STRING( BGl_string2232z00zz__paramz00, BgL_bgl_string2232za700za7za7_2313za7, "bigloo-debug-module", 19 );
DEFINE_STRING( BGl_string2234z00zz__paramz00, BgL_bgl_string2234za700za7za7_2314za7, "bigloo-debug-module-set!", 24 );
DEFINE_STRING( BGl_string2235z00zz__paramz00, BgL_bgl_string2235za700za7za7_2315za7, "Illegal debug module level", 26 );
DEFINE_STRING( BGl_string2236z00zz__paramz00, BgL_bgl_string2236za700za7za7_2316za7, "_bigloo-debug-module-set!", 25 );
DEFINE_STRING( BGl_string2237z00zz__paramz00, BgL_bgl_string2237za700za7za7_2317za7, "bigloo-warning", 14 );
DEFINE_STRING( BGl_string2240z00zz__paramz00, BgL_bgl_string2240za700za7za7_2318za7, "Illegal warning level", 21 );
DEFINE_STRING( BGl_string2239z00zz__paramz00, BgL_bgl_string2239za700za7za7_2319za7, "bigloo-warning-set!", 19 );
DEFINE_STRING( BGl_string2241z00zz__paramz00, BgL_bgl_string2241za700za7za7_2320za7, "_bigloo-warning-set!", 20 );
DEFINE_STRING( BGl_string2242z00zz__paramz00, BgL_bgl_string2242za700za7za7_2321za7, "bigloo-trace-stack-depth", 24 );
DEFINE_STRING( BGl_string2243z00zz__paramz00, BgL_bgl_string2243za700za7za7_2322za7, "_bigloo-trace-stack-depth-set!", 30 );
DEFINE_STRING( BGl_string2244z00zz__paramz00, BgL_bgl_string2244za700za7za7_2323za7, "bigloo-case-sensitive", 21 );
DEFINE_STRING( BGl_string2245z00zz__paramz00, BgL_bgl_string2245za700za7za7_2324za7, "symbol", 6 );
DEFINE_STRING( BGl_string2248z00zz__paramz00, BgL_bgl_string2248za700za7za7_2325za7, "downcase", 8 );
DEFINE_STRING( BGl_string2250z00zz__paramz00, BgL_bgl_string2250za700za7za7_2326za7, "upcase", 6 );
DEFINE_STRING( BGl_string2251z00zz__paramz00, BgL_bgl_string2251za700za7za7_2327za7, "bigloo-sensitivity-set!", 23 );
DEFINE_STRING( BGl_string2252z00zz__paramz00, BgL_bgl_string2252za700za7za7_2328za7, "Illegal sensitive value", 23 );
DEFINE_STRING( BGl_string2253z00zz__paramz00, BgL_bgl_string2253za700za7za7_2329za7, "_bigloo-case-sensitive-set!", 27 );
DEFINE_STRING( BGl_string2254z00zz__paramz00, BgL_bgl_string2254za700za7za7_2330za7, "bigloo-library-path", 19 );
DEFINE_STRING( BGl_string2255z00zz__paramz00, BgL_bgl_string2255za700za7za7_2331za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2256z00zz__paramz00, BgL_bgl_string2256za700za7za7_2332za7, "every?", 6 );
DEFINE_STRING( BGl_string2257z00zz__paramz00, BgL_bgl_string2257za700za7za7_2333za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string2259z00zz__paramz00, BgL_bgl_string2259za700za7za7_2334za7, "bigloo-library-path-set!", 24 );
DEFINE_STRING( BGl_string2261z00zz__paramz00, BgL_bgl_string2261za700za7za7_2335za7, "Illegal values", 14 );
DEFINE_STRING( BGl_string2262z00zz__paramz00, BgL_bgl_string2262za700za7za7_2336za7, "Illegal list", 12 );
DEFINE_STRING( BGl_string2263z00zz__paramz00, BgL_bgl_string2263za700za7za7_2337za7, "_bigloo-library-path-set!", 25 );
DEFINE_STRING( BGl_string2264z00zz__paramz00, BgL_bgl_string2264za700za7za7_2338za7, "bigloo-dns-cache-validity-timeout", 33 );
DEFINE_STRING( BGl_string2265z00zz__paramz00, BgL_bgl_string2265za700za7za7_2339za7, "long", 4 );
DEFINE_STRING( BGl_string2266z00zz__paramz00, BgL_bgl_string2266za700za7za7_2340za7, "_bigloo-dns-cache-validity-timeout-set!", 39 );
DEFINE_STRING( BGl_string2267z00zz__paramz00, BgL_bgl_string2267za700za7za7_2341za7, "__param", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2modulezd2envzd2zz__paramz00, BgL_bgl__biglooza7d2debugza72342z00, BGl__bigloozd2debugzd2modulez00zz__paramz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2evalzd2strictzd2modulezd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2evalza7d2343z00, BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2tracezd2stackzd2depthzd2setz12zd2envzc0zz__paramz00, BgL_bgl__biglooza7d2traceza72344z00, BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2debugzd2modulezd2setz12zd2envz12zz__paramz00, BgL_bgl__biglooza7d2debugza72345z00, BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long BgL_checksumz00_1653, char * BgL_fromz00_1654)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__paramz00))
{ 
BGl_requirezd2initializa7ationz75zz__paramz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__paramz00(); 
BGl_importedzd2moduleszd2initz00zz__paramz00(); 
BGl_toplevelzd2initzd2zz__paramz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 15 */
BGl_symbol2216z00zz__paramz00 = 
bstring_to_symbol(BGl_string2217z00zz__paramz00); 
BGl_symbol2218z00zz__paramz00 = 
bstring_to_symbol(BGl_string2219z00zz__paramz00); 
BGl_symbol2224z00zz__paramz00 = 
bstring_to_symbol(BGl_string2225z00zz__paramz00); 
BGl_symbol2229z00zz__paramz00 = 
bstring_to_symbol(BGl_string2230z00zz__paramz00); 
BGl_symbol2233z00zz__paramz00 = 
bstring_to_symbol(BGl_string2234z00zz__paramz00); 
BGl_symbol2238z00zz__paramz00 = 
bstring_to_symbol(BGl_string2239z00zz__paramz00); 
BGl_symbol2247z00zz__paramz00 = 
bstring_to_symbol(BGl_string2248z00zz__paramz00); 
BGl_symbol2249z00zz__paramz00 = 
bstring_to_symbol(BGl_string2250z00zz__paramz00); 
BGl_list2246z00zz__paramz00 = 
MAKE_PAIR(BGl_symbol2216z00zz__paramz00, 
MAKE_PAIR(BGl_symbol2247z00zz__paramz00, 
MAKE_PAIR(BGl_symbol2249z00zz__paramz00, BNIL))); 
return ( 
BGl_symbol2258z00zz__paramz00 = 
bstring_to_symbol(BGl_string2259z00zz__paramz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 15 */
BGl_za2parameterzd2mutexza2zd2zz__paramz00 = 
bgl_make_mutex(BGl_string2214z00zz__paramz00); 
BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = BFALSE; 
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BINT(((long)0)); 
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BINT(((long)1)); 
BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = BTRUE; 
{ /* Llib/param.scm 190 */
obj_t BgL_envzd2valuezd2_734;
BgL_envzd2valuezd2_734 = 
BGl_getenvz00zz__osz00(
BSTRING_TO_STRING(BGl_string2215z00zz__paramz00)); 
if(
STRINGP(BgL_envzd2valuezd2_734))
{ /* Llib/param.scm 191 */
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = 
BINT(
BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(BgL_envzd2valuezd2_734, BNIL)); }  else 
{ /* Llib/param.scm 191 */
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = 
BINT(((long)10)); } } 
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BGl_symbol2216z00zz__paramz00; 
BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = BFALSE; 
BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BFALSE; 
BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BFALSE; 
BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BFALSE; 
BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = BTRUE; 
{ /* Llib/param.scm 254 */
obj_t BgL_arg1887z00_738;
BgL_arg1887z00_738 = 
BGl_bigloozd2configzd2zz__configurez00(BGl_symbol2218z00zz__paramz00); 
{ /* Llib/param.scm 254 */
obj_t BgL_list1888z00_739;
{ /* Llib/param.scm 254 */
obj_t BgL_arg1890z00_740;
BgL_arg1890z00_740 = 
MAKE_PAIR(BgL_arg1887z00_738, BNIL); 
BgL_list1888z00_739 = 
MAKE_PAIR(BGl_string2220z00zz__paramz00, BgL_arg1890z00_740); } 
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BgL_list1888z00_739; } } 
BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = BTRUE; 
return ( 
BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 = 
BINT(((long)20)), BUNSPEC) ;} 
}



/* bigloo-strict-r5rs-strings */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 129 */
return 
CBOOL(BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00);} 
}



/* _bigloo-strict-r5rs-strings */
obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2zz__paramz00(obj_t BgL_envz00_1561)
{ AN_OBJECT;
{ /* Llib/param.scm 129 */
return 
BBOOL(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00());} 
}



/* bigloo-strict-r5rs-strings-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t BgL_vz00_1)
{ AN_OBJECT;
{ /* Llib/param.scm 129 */
{ /* Llib/param.scm 129 */
obj_t BgL_g1862z00_1249;
BgL_g1862z00_1249 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 129 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 129 */
bgl_mutex_lock(BgL_g1862z00_1249); }  else 
{ /* Llib/param.scm 129 */
bgl_mutex_timed_lock(BgL_g1862z00_1249, ((long)0)); } } } 
BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = 
BBOOL(BgL_vz00_1); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BBOOL(BgL_vz00_1);} 
}



/* _bigloo-strict-r5rs-strings-set! */
obj_t BGl__bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(obj_t BgL_envz00_1562, obj_t BgL_vz00_1563)
{ AN_OBJECT;
{ /* Llib/param.scm 129 */
return 
BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1563));} 
}



/* bigloo-compiler-debug */
BGL_EXPORTED_DEF int BGl_bigloozd2compilerzd2debugz00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 136 */
{ /* Llib/param.scm 136 */
obj_t BgL_auxz00_1701;
{ /* Llib/param.scm 136 */
obj_t BgL_aux2182z00_1611;
BgL_aux2182z00_1611 = BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00; 
if(
INTEGERP(BgL_aux2182z00_1611))
{ /* Llib/param.scm 136 */
BgL_auxz00_1701 = BgL_aux2182z00_1611
; }  else 
{ 
obj_t BgL_auxz00_1704;
BgL_auxz00_1704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)4764)), BGl_string2222z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_aux2182z00_1611); 
FAILURE(BgL_auxz00_1704,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_1701);} } 
}



/* _bigloo-compiler-debug */
obj_t BGl__bigloozd2compilerzd2debugz00zz__paramz00(obj_t BgL_envz00_1564)
{ AN_OBJECT;
{ /* Llib/param.scm 136 */
return 
BINT(
BGl_bigloozd2compilerzd2debugz00zz__paramz00());} 
}



/* bigloo-compiler-debug-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int BgL_vz00_2)
{ AN_OBJECT;
{ /* Llib/param.scm 136 */
{ /* Llib/param.scm 136 */
obj_t BgL_g1862z00_743;
BgL_g1862z00_743 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_743); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_743, ((long)0)); } } } 
if(
(
(long)(BgL_vz00_2)<((long)0)))
{ /* Llib/param.scm 139 */
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2224z00zz__paramz00, BGl_string2226z00zz__paramz00, 
BINT(BgL_vz00_2)); }  else 
{ /* Llib/param.scm 139 */
BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = 
BINT(BgL_vz00_2); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_2);} 
}



/* _bigloo-compiler-debug-set! */
obj_t BGl__bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(obj_t BgL_envz00_1565, obj_t BgL_vz00_1566)
{ AN_OBJECT;
{ /* Llib/param.scm 136 */
{ /* Llib/param.scm 136 */
int BgL_auxz00_1723;
{ /* Llib/param.scm 136 */
obj_t BgL_auxz00_1724;
if(
INTEGERP(BgL_vz00_1566))
{ /* Llib/param.scm 136 */
BgL_auxz00_1724 = BgL_vz00_1566
; }  else 
{ 
obj_t BgL_auxz00_1727;
BgL_auxz00_1727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)4764)), BGl_string2227z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_vz00_1566); 
FAILURE(BgL_auxz00_1727,BFALSE,BFALSE);} 
BgL_auxz00_1723 = 
CINT(BgL_auxz00_1724); } 
return 
BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(BgL_auxz00_1723);} } 
}



/* bigloo-debug */
BGL_EXPORTED_DEF int bgl_debug()
{ AN_OBJECT;
{ /* Llib/param.scm 148 */
{ /* Llib/param.scm 148 */
obj_t BgL_auxz00_1733;
{ /* Llib/param.scm 148 */
obj_t BgL_aux2186z00_1615;
BgL_aux2186z00_1615 = BGl_za2bigloozd2debugza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux2186z00_1615))
{ /* Llib/param.scm 148 */
BgL_auxz00_1733 = BgL_aux2186z00_1615
; }  else 
{ 
obj_t BgL_auxz00_1736;
BgL_auxz00_1736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)5317)), BGl_string2228z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_aux2186z00_1615); 
FAILURE(BgL_auxz00_1736,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_1733);} } 
}



/* _bigloo-debug */
obj_t BGl__bigloozd2debugzd2zz__paramz00(obj_t BgL_envz00_1567)
{ AN_OBJECT;
{ /* Llib/param.scm 148 */
return 
BINT(
bgl_debug());} 
}



/* bigloo-debug-set! */
BGL_EXPORTED_DEF obj_t bgl_debug_set(int BgL_vz00_3)
{ AN_OBJECT;
{ /* Llib/param.scm 148 */
{ /* Llib/param.scm 148 */
obj_t BgL_g1862z00_748;
BgL_g1862z00_748 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_748); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_748, ((long)0)); } } } 
if(
(
(long)(BgL_vz00_3)<((long)0)))
{ /* Llib/param.scm 151 */
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2229z00zz__paramz00, BGl_string2226z00zz__paramz00, 
BINT(BgL_vz00_3)); }  else 
{ /* Llib/param.scm 151 */
BGl_za2bigloozd2debugza2zd2zz__paramz00 = 
BINT(BgL_vz00_3); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_3);} 
}



/* _bigloo-debug-set! */
obj_t BGl__bigloozd2debugzd2setz12z12zz__paramz00(obj_t BgL_envz00_1568, obj_t BgL_vz00_1569)
{ AN_OBJECT;
{ /* Llib/param.scm 148 */
{ /* Llib/param.scm 148 */
int BgL_auxz00_1755;
{ /* Llib/param.scm 148 */
obj_t BgL_auxz00_1756;
if(
INTEGERP(BgL_vz00_1569))
{ /* Llib/param.scm 148 */
BgL_auxz00_1756 = BgL_vz00_1569
; }  else 
{ 
obj_t BgL_auxz00_1759;
BgL_auxz00_1759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)5317)), BGl_string2231z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_vz00_1569); 
FAILURE(BgL_auxz00_1759,BFALSE,BFALSE);} 
BgL_auxz00_1755 = 
CINT(BgL_auxz00_1756); } 
return 
bgl_debug_set(BgL_auxz00_1755);} } 
}



/* bigloo-debug-module */
BGL_EXPORTED_DEF int BGl_bigloozd2debugzd2modulez00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 160 */
{ /* Llib/param.scm 160 */
obj_t BgL_auxz00_1765;
{ /* Llib/param.scm 160 */
obj_t BgL_aux2190z00_1619;
BgL_aux2190z00_1619 = BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00; 
if(
INTEGERP(BgL_aux2190z00_1619))
{ /* Llib/param.scm 160 */
BgL_auxz00_1765 = BgL_aux2190z00_1619
; }  else 
{ 
obj_t BgL_auxz00_1768;
BgL_auxz00_1768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)5849)), BGl_string2232z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_aux2190z00_1619); 
FAILURE(BgL_auxz00_1768,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_1765);} } 
}



/* _bigloo-debug-module */
obj_t BGl__bigloozd2debugzd2modulez00zz__paramz00(obj_t BgL_envz00_1570)
{ AN_OBJECT;
{ /* Llib/param.scm 160 */
return 
BINT(
BGl_bigloozd2debugzd2modulez00zz__paramz00());} 
}



/* bigloo-debug-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int BgL_vz00_4)
{ AN_OBJECT;
{ /* Llib/param.scm 160 */
{ /* Llib/param.scm 160 */
obj_t BgL_g1862z00_753;
BgL_g1862z00_753 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_753); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_753, ((long)0)); } } } 
if(
(
(long)(BgL_vz00_4)<((long)0)))
{ /* Llib/param.scm 163 */
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2233z00zz__paramz00, BGl_string2235z00zz__paramz00, 
BINT(BgL_vz00_4)); }  else 
{ /* Llib/param.scm 163 */
BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = 
BINT(BgL_vz00_4); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_4);} 
}



/* _bigloo-debug-module-set! */
obj_t BGl__bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_envz00_1571, obj_t BgL_vz00_1572)
{ AN_OBJECT;
{ /* Llib/param.scm 160 */
{ /* Llib/param.scm 160 */
int BgL_auxz00_1787;
{ /* Llib/param.scm 160 */
obj_t BgL_auxz00_1788;
if(
INTEGERP(BgL_vz00_1572))
{ /* Llib/param.scm 160 */
BgL_auxz00_1788 = BgL_vz00_1572
; }  else 
{ 
obj_t BgL_auxz00_1791;
BgL_auxz00_1791 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)5849)), BGl_string2236z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_vz00_1572); 
FAILURE(BgL_auxz00_1791,BFALSE,BFALSE);} 
BgL_auxz00_1787 = 
CINT(BgL_auxz00_1788); } 
return 
BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(BgL_auxz00_1787);} } 
}



/* bigloo-warning */
BGL_EXPORTED_DEF int BGl_bigloozd2warningzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 172 */
{ /* Llib/param.scm 172 */
obj_t BgL_auxz00_1797;
{ /* Llib/param.scm 172 */
obj_t BgL_aux2194z00_1623;
BgL_aux2194z00_1623 = BGl_za2bigloozd2warningza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux2194z00_1623))
{ /* Llib/param.scm 172 */
BgL_auxz00_1797 = BgL_aux2194z00_1623
; }  else 
{ 
obj_t BgL_auxz00_1800;
BgL_auxz00_1800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)6402)), BGl_string2237z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_aux2194z00_1623); 
FAILURE(BgL_auxz00_1800,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_1797);} } 
}



/* _bigloo-warning */
obj_t BGl__bigloozd2warningzd2zz__paramz00(obj_t BgL_envz00_1573)
{ AN_OBJECT;
{ /* Llib/param.scm 172 */
return 
BINT(
BGl_bigloozd2warningzd2zz__paramz00());} 
}



/* bigloo-warning-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int BgL_vz00_5)
{ AN_OBJECT;
{ /* Llib/param.scm 172 */
{ /* Llib/param.scm 172 */
obj_t BgL_g1862z00_758;
BgL_g1862z00_758 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_758); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_758, ((long)0)); } } } 
if(
(
(long)(BgL_vz00_5)<((long)0)))
{ /* Llib/param.scm 175 */
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2238z00zz__paramz00, BGl_string2240z00zz__paramz00, 
BINT(BgL_vz00_5)); }  else 
{ /* Llib/param.scm 175 */
BGl_za2bigloozd2warningza2zd2zz__paramz00 = 
BINT(BgL_vz00_5); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_5);} 
}



/* _bigloo-warning-set! */
obj_t BGl__bigloozd2warningzd2setz12z12zz__paramz00(obj_t BgL_envz00_1574, obj_t BgL_vz00_1575)
{ AN_OBJECT;
{ /* Llib/param.scm 172 */
{ /* Llib/param.scm 172 */
int BgL_auxz00_1819;
{ /* Llib/param.scm 172 */
obj_t BgL_auxz00_1820;
if(
INTEGERP(BgL_vz00_1575))
{ /* Llib/param.scm 172 */
BgL_auxz00_1820 = BgL_vz00_1575
; }  else 
{ 
obj_t BgL_auxz00_1823;
BgL_auxz00_1823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)6402)), BGl_string2241z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_vz00_1575); 
FAILURE(BgL_auxz00_1823,BFALSE,BFALSE);} 
BgL_auxz00_1819 = 
CINT(BgL_auxz00_1820); } 
return 
BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_auxz00_1819);} } 
}



/* bigloo-trace-color */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 182 */
return 
CBOOL(BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00);} 
}



/* _bigloo-trace-color */
obj_t BGl__bigloozd2tracezd2colorz00zz__paramz00(obj_t BgL_envz00_1576)
{ AN_OBJECT;
{ /* Llib/param.scm 182 */
return 
BBOOL(
BGl_bigloozd2tracezd2colorz00zz__paramz00());} 
}



/* bigloo-trace-color-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t BgL_vz00_6)
{ AN_OBJECT;
{ /* Llib/param.scm 182 */
{ /* Llib/param.scm 182 */
obj_t BgL_g1862z00_1293;
BgL_g1862z00_1293 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 182 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 182 */
bgl_mutex_lock(BgL_g1862z00_1293); }  else 
{ /* Llib/param.scm 182 */
bgl_mutex_timed_lock(BgL_g1862z00_1293, ((long)0)); } } } 
BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = 
BBOOL(BgL_vz00_6); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BBOOL(BgL_vz00_6);} 
}



/* _bigloo-trace-color-set! */
obj_t BGl__bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(obj_t BgL_envz00_1577, obj_t BgL_vz00_1578)
{ AN_OBJECT;
{ /* Llib/param.scm 182 */
return 
BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(
CBOOL(BgL_vz00_1578));} 
}



/* bigloo-trace-stack-depth */
BGL_EXPORTED_DEF int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 189 */
{ /* Llib/param.scm 189 */
obj_t BgL_auxz00_1841;
{ /* Llib/param.scm 189 */
obj_t BgL_aux2198z00_1627;
BgL_aux2198z00_1627 = BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00; 
if(
INTEGERP(BgL_aux2198z00_1627))
{ /* Llib/param.scm 189 */
BgL_auxz00_1841 = BgL_aux2198z00_1627
; }  else 
{ 
obj_t BgL_auxz00_1844;
BgL_auxz00_1844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)7207)), BGl_string2242z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_aux2198z00_1627); 
FAILURE(BgL_auxz00_1844,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_1841);} } 
}



/* _bigloo-trace-stack-depth */
obj_t BGl__bigloozd2tracezd2stackzd2depthzd2zz__paramz00(obj_t BgL_envz00_1579)
{ AN_OBJECT;
{ /* Llib/param.scm 189 */
return 
BINT(
BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());} 
}



/* bigloo-trace-stack-depth-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int BgL_vz00_7)
{ AN_OBJECT;
{ /* Llib/param.scm 189 */
{ /* Llib/param.scm 189 */
obj_t BgL_g1862z00_1301;
BgL_g1862z00_1301 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 189 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 189 */
bgl_mutex_lock(BgL_g1862z00_1301); }  else 
{ /* Llib/param.scm 189 */
bgl_mutex_timed_lock(BgL_g1862z00_1301, ((long)0)); } } } 
BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 = 
BINT(BgL_vz00_7); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_7);} 
}



/* _bigloo-trace-stack-depth-set! */
obj_t BGl__bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(obj_t BgL_envz00_1580, obj_t BgL_vz00_1581)
{ AN_OBJECT;
{ /* Llib/param.scm 189 */
{ /* Llib/param.scm 189 */
int BgL_auxz00_1858;
{ /* Llib/param.scm 189 */
obj_t BgL_auxz00_1859;
if(
INTEGERP(BgL_vz00_1581))
{ /* Llib/param.scm 189 */
BgL_auxz00_1859 = BgL_vz00_1581
; }  else 
{ 
obj_t BgL_auxz00_1862;
BgL_auxz00_1862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)7207)), BGl_string2243z00zz__paramz00, BGl_string2223z00zz__paramz00, BgL_vz00_1581); 
FAILURE(BgL_auxz00_1862,BFALSE,BFALSE);} 
BgL_auxz00_1858 = 
CINT(BgL_auxz00_1859); } 
return 
BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(BgL_auxz00_1858);} } 
}



/* bigloo-case-sensitive */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 204 */
{ /* Llib/param.scm 204 */
obj_t BgL_aux2202z00_1631;
BgL_aux2202z00_1631 = BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00; 
if(
SYMBOLP(BgL_aux2202z00_1631))
{ /* Llib/param.scm 204 */
return BgL_aux2202z00_1631;}  else 
{ 
obj_t BgL_auxz00_1870;
BgL_auxz00_1870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)8037)), BGl_string2244z00zz__paramz00, BGl_string2245z00zz__paramz00, BgL_aux2202z00_1631); 
FAILURE(BgL_auxz00_1870,BFALSE,BFALSE);} } } 
}



/* _bigloo-case-sensitive */
obj_t BGl__bigloozd2casezd2sensitivez00zz__paramz00(obj_t BgL_envz00_1582)
{ AN_OBJECT;
{ /* Llib/param.scm 204 */
return 
BGl_bigloozd2casezd2sensitivez00zz__paramz00();} 
}



/* bigloo-case-sensitive-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t BgL_vz00_8)
{ AN_OBJECT;
{ /* Llib/param.scm 204 */
{ /* Llib/param.scm 204 */
obj_t BgL_g1862z00_767;
BgL_g1862z00_767 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_767); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_767, ((long)0)); } } } 
if(
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_8, BGl_list2246z00zz__paramz00)))
{ /* Llib/param.scm 208 */
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BgL_vz00_8; }  else 
{ /* Llib/param.scm 208 */
BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_string2251z00zz__paramz00, BGl_string2252z00zz__paramz00, BgL_vz00_8); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return BgL_vz00_8;} 
}



/* _bigloo-case-sensitive-set! */
obj_t BGl__bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t BgL_envz00_1583, obj_t BgL_vz00_1584)
{ AN_OBJECT;
{ /* Llib/param.scm 204 */
{ /* Llib/param.scm 204 */
obj_t BgL_auxz00_1884;
if(
SYMBOLP(BgL_vz00_1584))
{ /* Llib/param.scm 204 */
BgL_auxz00_1884 = BgL_vz00_1584
; }  else 
{ 
obj_t BgL_auxz00_1887;
BgL_auxz00_1887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)8037)), BGl_string2253z00zz__paramz00, BGl_string2245z00zz__paramz00, BgL_vz00_1584); 
FAILURE(BgL_auxz00_1887,BFALSE,BFALSE);} 
return 
BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(BgL_auxz00_1884);} } 
}



/* bigloo-initialized! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 221 */
return ( 
BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = BTRUE, BUNSPEC) ;} 
}



/* _bigloo-initialized! */
obj_t BGl__bigloozd2initializa7edz12z67zz__paramz00(obj_t BgL_envz00_1585)
{ AN_OBJECT;
{ /* Llib/param.scm 221 */
return 
BGl_bigloozd2initializa7edz12z67zz__paramz00();} 
}



/* bigloo-initialized? */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 227 */
return 
CBOOL(BGl_za2bigloozd2initializa7edpza2z75zz__paramz00);} 
}



/* _bigloo-initialized? */
obj_t BGl__bigloozd2initializa7edzf3z86zz__paramz00(obj_t BgL_envz00_1586)
{ AN_OBJECT;
{ /* Llib/param.scm 227 */
return 
BBOOL(
BGl_bigloozd2initializa7edzf3z86zz__paramz00());} 
}



/* bigloo-load-reader */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 233 */
return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;} 
}



/* _bigloo-load-reader */
obj_t BGl__bigloozd2loadzd2readerz00zz__paramz00(obj_t BgL_envz00_1587)
{ AN_OBJECT;
{ /* Llib/param.scm 233 */
return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;} 
}



/* bigloo-load-reader-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t BgL_vz00_9)
{ AN_OBJECT;
{ /* Llib/param.scm 233 */
{ /* Llib/param.scm 233 */
obj_t BgL_g1862z00_1315;
BgL_g1862z00_1315 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 233 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 233 */
bgl_mutex_lock(BgL_g1862z00_1315); }  else 
{ /* Llib/param.scm 233 */
bgl_mutex_timed_lock(BgL_g1862z00_1315, ((long)0)); } } } 
BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BgL_vz00_9; 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return BgL_vz00_9;} 
}



/* _bigloo-load-reader-set! */
obj_t BGl__bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t BgL_envz00_1588, obj_t BgL_vz00_1589)
{ AN_OBJECT;
{ /* Llib/param.scm 233 */
return 
BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(BgL_vz00_1589);} 
}



/* bigloo-load-module */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 238 */
return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;} 
}



/* _bigloo-load-module */
obj_t BGl__bigloozd2loadzd2modulez00zz__paramz00(obj_t BgL_envz00_1590)
{ AN_OBJECT;
{ /* Llib/param.scm 238 */
return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;} 
}



/* bigloo-load-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_vz00_10)
{ AN_OBJECT;
{ /* Llib/param.scm 238 */
{ /* Llib/param.scm 238 */
obj_t BgL_g1862z00_1323;
BgL_g1862z00_1323 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 238 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 238 */
bgl_mutex_lock(BgL_g1862z00_1323); }  else 
{ /* Llib/param.scm 238 */
bgl_mutex_timed_lock(BgL_g1862z00_1323, ((long)0)); } } } 
BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BgL_vz00_10; 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return BgL_vz00_10;} 
}



/* _bigloo-load-module-set! */
obj_t BGl__bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_envz00_1591, obj_t BgL_vz00_1592)
{ AN_OBJECT;
{ /* Llib/param.scm 238 */
return 
BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(BgL_vz00_1592);} 
}



/* bigloo-module-extension-handler */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 243 */
return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;} 
}



/* _bigloo-module-extension-handler */
obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00(obj_t BgL_envz00_1593)
{ AN_OBJECT;
{ /* Llib/param.scm 243 */
return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;} 
}



/* bigloo-module-extension-handler-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t BgL_vz00_11)
{ AN_OBJECT;
{ /* Llib/param.scm 243 */
{ /* Llib/param.scm 243 */
obj_t BgL_g1862z00_1331;
BgL_g1862z00_1331 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 243 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 243 */
bgl_mutex_lock(BgL_g1862z00_1331); }  else 
{ /* Llib/param.scm 243 */
bgl_mutex_timed_lock(BgL_g1862z00_1331, ((long)0)); } } } 
BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BgL_vz00_11; 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return BgL_vz00_11;} 
}



/* _bigloo-module-extension-handler-set! */
obj_t BGl__bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t BgL_envz00_1594, obj_t BgL_vz00_1595)
{ AN_OBJECT;
{ /* Llib/param.scm 243 */
return 
BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(BgL_vz00_1595);} 
}



/* bigloo-eval-strict-module */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 248 */
return 
CBOOL(BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00);} 
}



/* _bigloo-eval-strict-module */
obj_t BGl__bigloozd2evalzd2strictzd2modulezd2zz__paramz00(obj_t BgL_envz00_1596)
{ AN_OBJECT;
{ /* Llib/param.scm 248 */
return 
BBOOL(
BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00());} 
}



/* bigloo-eval-strict-module-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t BgL_vz00_12)
{ AN_OBJECT;
{ /* Llib/param.scm 248 */
{ /* Llib/param.scm 248 */
obj_t BgL_g1862z00_1339;
BgL_g1862z00_1339 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 248 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 248 */
bgl_mutex_lock(BgL_g1862z00_1339); }  else 
{ /* Llib/param.scm 248 */
bgl_mutex_timed_lock(BgL_g1862z00_1339, ((long)0)); } } } 
BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = 
BBOOL(BgL_vz00_12); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BBOOL(BgL_vz00_12);} 
}



/* _bigloo-eval-strict-module-set! */
obj_t BGl__bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(obj_t BgL_envz00_1597, obj_t BgL_vz00_1598)
{ AN_OBJECT;
{ /* Llib/param.scm 248 */
return 
BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1598));} 
}



/* bigloo-library-path */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 253 */
{ /* Llib/param.scm 253 */
obj_t BgL_aux2206z00_1635;
BgL_aux2206z00_1635 = BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00; 
{ /* Llib/param.scm 253 */
bool_t BgL_testz00_1926;
if(
PAIRP(BgL_aux2206z00_1635))
{ /* Llib/param.scm 253 */
BgL_testz00_1926 = ((bool_t)1)
; }  else 
{ /* Llib/param.scm 253 */
BgL_testz00_1926 = 
NULLP(BgL_aux2206z00_1635)
; } 
if(BgL_testz00_1926)
{ /* Llib/param.scm 253 */
return BgL_aux2206z00_1635;}  else 
{ 
obj_t BgL_auxz00_1930;
BgL_auxz00_1930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)10375)), BGl_string2254z00zz__paramz00, BGl_string2255z00zz__paramz00, BgL_aux2206z00_1635); 
FAILURE(BgL_auxz00_1930,BFALSE,BFALSE);} } } } 
}



/* _bigloo-library-path */
obj_t BGl__bigloozd2libraryzd2pathz00zz__paramz00(obj_t BgL_envz00_1599)
{ AN_OBJECT;
{ /* Llib/param.scm 253 */
return 
BGl_bigloozd2libraryzd2pathz00zz__paramz00();} 
}



/* bigloo-library-path-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t BgL_vz00_13)
{ AN_OBJECT;
{ /* Llib/param.scm 253 */
{ /* Llib/param.scm 253 */
obj_t BgL_g1862z00_779;
BgL_g1862z00_779 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1862z00_779); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1862z00_779, ((long)0)); } } } 
if(
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_13))
{ /* Llib/param.scm 259 */
bool_t BgL_testz00_1941;
{ 
obj_t BgL_l1846z00_793;
{ /* Llib/param.scm 259 */
obj_t BgL_auxz00_1942;
BgL_l1846z00_793 = BgL_vz00_13; 
BgL_zc3anonymousza31908ze3z83_794:
if(
NULLP(BgL_l1846z00_793))
{ /* Llib/param.scm 259 */
BgL_auxz00_1942 = BTRUE
; }  else 
{ /* Llib/param.scm 259 */
if(
PAIRP(BgL_l1846z00_793))
{ /* Llib/param.scm 259 */
bool_t BgL_testz00_1947;
{ /* Llib/param.scm 259 */
obj_t BgL_auxz00_1948;
BgL_auxz00_1948 = 
CAR(BgL_l1846z00_793); 
BgL_testz00_1947 = 
STRINGP(BgL_auxz00_1948); } 
if(BgL_testz00_1947)
{ 
obj_t BgL_l1846z00_1951;
BgL_l1846z00_1951 = 
CDR(BgL_l1846z00_793); 
BgL_l1846z00_793 = BgL_l1846z00_1951; 
goto BgL_zc3anonymousza31908ze3z83_794;}  else 
{ /* Llib/param.scm 259 */
BgL_auxz00_1942 = BFALSE
; } }  else 
{ /* Llib/param.scm 259 */
BgL_auxz00_1942 = 
BGl_errorz00zz__errorz00(BGl_string2256z00zz__paramz00, BGl_string2257z00zz__paramz00, BgL_l1846z00_793)
; } } 
BgL_testz00_1941 = 
CBOOL(BgL_auxz00_1942); } } 
if(BgL_testz00_1941)
{ /* Llib/param.scm 259 */
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BgL_vz00_13; }  else 
{ /* Llib/param.scm 259 */
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2258z00zz__paramz00, BGl_string2261z00zz__paramz00, 
BGl_filterz00zz__r4_control_features_6_9z00(BGl_proc2260z00zz__paramz00, BgL_vz00_13)); } }  else 
{ /* Llib/param.scm 257 */
BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = 
BGl_errorz00zz__errorz00(BGl_symbol2258z00zz__paramz00, BGl_string2262z00zz__paramz00, BgL_vz00_13); } 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return BgL_vz00_13;} 
}



/* _bigloo-library-path-set! */
obj_t BGl__bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t BgL_envz00_1601, obj_t BgL_vz00_1602)
{ AN_OBJECT;
{ /* Llib/param.scm 253 */
{ /* Llib/param.scm 253 */
obj_t BgL_auxz00_1959;
{ /* Llib/param.scm 253 */
bool_t BgL_testz00_1960;
if(
PAIRP(BgL_vz00_1602))
{ /* Llib/param.scm 253 */
BgL_testz00_1960 = ((bool_t)1)
; }  else 
{ /* Llib/param.scm 253 */
BgL_testz00_1960 = 
NULLP(BgL_vz00_1602)
; } 
if(BgL_testz00_1960)
{ /* Llib/param.scm 253 */
BgL_auxz00_1959 = BgL_vz00_1602
; }  else 
{ 
obj_t BgL_auxz00_1964;
BgL_auxz00_1964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)10375)), BGl_string2263z00zz__paramz00, BGl_string2255z00zz__paramz00, BgL_vz00_1602); 
FAILURE(BgL_auxz00_1964,BFALSE,BFALSE);} } 
return 
BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(BgL_auxz00_1959);} } 
}



/* <anonymous:1906> */
obj_t BGl_zc3anonymousza31906ze3z83zz__paramz00(obj_t BgL_envz00_1603, obj_t BgL_sz00_1604)
{ AN_OBJECT;
{ /* Llib/param.scm 262 */
{ 
obj_t BgL_sz00_788;
{ /* Llib/param.scm 262 */
bool_t BgL_auxz00_1969;
BgL_sz00_788 = BgL_sz00_1604; 
if(
STRINGP(BgL_sz00_788))
{ /* Llib/param.scm 262 */
BgL_auxz00_1969 = ((bool_t)0)
; }  else 
{ /* Llib/param.scm 262 */
BgL_auxz00_1969 = ((bool_t)1)
; } 
return 
BBOOL(BgL_auxz00_1969);} } } 
}



/* bigloo-dns-enable-cache */
BGL_EXPORTED_DEF bool_t bgl_dns_enable_cache()
{ AN_OBJECT;
{ /* Llib/param.scm 269 */
return 
CBOOL(BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00);} 
}



/* _bigloo-dns-enable-cache */
obj_t BGl__bigloozd2dnszd2enablezd2cachezd2zz__paramz00(obj_t BgL_envz00_1605)
{ AN_OBJECT;
{ /* Llib/param.scm 269 */
return 
BBOOL(
bgl_dns_enable_cache());} 
}



/* bigloo-dns-enable-cache-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t BgL_vz00_14)
{ AN_OBJECT;
{ /* Llib/param.scm 269 */
{ /* Llib/param.scm 269 */
obj_t BgL_g1862z00_1360;
BgL_g1862z00_1360 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 269 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 269 */
bgl_mutex_lock(BgL_g1862z00_1360); }  else 
{ /* Llib/param.scm 269 */
bgl_mutex_timed_lock(BgL_g1862z00_1360, ((long)0)); } } } 
BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = 
BBOOL(BgL_vz00_14); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BBOOL(BgL_vz00_14);} 
}



/* _bigloo-dns-enable-cache-set! */
obj_t BGl__bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(obj_t BgL_envz00_1606, obj_t BgL_vz00_1607)
{ AN_OBJECT;
{ /* Llib/param.scm 269 */
return 
BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(
CBOOL(BgL_vz00_1607));} 
}



/* bigloo-dns-cache-validity-timeout */
BGL_EXPORTED_DEF long bgl_dns_cache_validity_timeout()
{ AN_OBJECT;
{ /* Llib/param.scm 274 */
{ /* Llib/param.scm 274 */
obj_t BgL_auxz00_1985;
{ /* Llib/param.scm 274 */
obj_t BgL_aux2210z00_1639;
BgL_aux2210z00_1639 = BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00; 
if(
INTEGERP(BgL_aux2210z00_1639))
{ /* Llib/param.scm 274 */
BgL_auxz00_1985 = BgL_aux2210z00_1639
; }  else 
{ 
obj_t BgL_auxz00_1988;
BgL_auxz00_1988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)11215)), BGl_string2264z00zz__paramz00, BGl_string2265z00zz__paramz00, BgL_aux2210z00_1639); 
FAILURE(BgL_auxz00_1988,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_1985);} } 
}



/* _bigloo-dns-cache-validity-timeout */
obj_t BGl__bigloozd2dnszd2cachezd2validityzd2timeoutz00zz__paramz00(obj_t BgL_envz00_1608)
{ AN_OBJECT;
{ /* Llib/param.scm 274 */
return 
BINT(
bgl_dns_cache_validity_timeout());} 
}



/* bigloo-dns-cache-validity-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long BgL_vz00_15)
{ AN_OBJECT;
{ /* Llib/param.scm 274 */
{ /* Llib/param.scm 274 */
obj_t BgL_g1862z00_1368;
BgL_g1862z00_1368 = BGl_za2parameterzd2mutexza2zd2zz__paramz00; 
{ /* Llib/param.scm 274 */

if(
(((long)0)==((long)0)))
{ /* Llib/param.scm 274 */
bgl_mutex_lock(BgL_g1862z00_1368); }  else 
{ /* Llib/param.scm 274 */
bgl_mutex_timed_lock(BgL_g1862z00_1368, ((long)0)); } } } 
BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 = 
BINT(BgL_vz00_15); 
bgl_mutex_unlock(BGl_za2parameterzd2mutexza2zd2zz__paramz00); 
return 
BINT(BgL_vz00_15);} 
}



/* _bigloo-dns-cache-validity-timeout-set! */
obj_t BGl__bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(obj_t BgL_envz00_1609, obj_t BgL_vz00_1610)
{ AN_OBJECT;
{ /* Llib/param.scm 274 */
{ /* Llib/param.scm 274 */
long BgL_auxz00_2002;
{ /* Llib/param.scm 274 */
obj_t BgL_auxz00_2003;
if(
INTEGERP(BgL_vz00_1610))
{ /* Llib/param.scm 274 */
BgL_auxz00_2003 = BgL_vz00_1610
; }  else 
{ 
obj_t BgL_auxz00_2006;
BgL_auxz00_2006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2221z00zz__paramz00, 
BINT(((long)11215)), BGl_string2266z00zz__paramz00, BGl_string2265z00zz__paramz00, BgL_vz00_1610); 
FAILURE(BgL_auxz00_2006,BFALSE,BFALSE);} 
BgL_auxz00_2002 = 
(long)CINT(BgL_auxz00_2003); } 
return 
BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(BgL_auxz00_2002);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 15 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 15 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__paramz00()
{ AN_OBJECT;
{ /* Llib/param.scm 15 */
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2267z00zz__paramz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2267z00zz__paramz00)); 
return 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)306671391), 
BSTRING_TO_STRING(BGl_string2267z00zz__paramz00));} 
}

#ifdef __cplusplus
}
#endif
