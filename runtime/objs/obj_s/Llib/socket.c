/*===========================================================================*/
/*   (Llib/socket.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/socket.scm -indent -o objs/obj_s/Llib/socket.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t);
static obj_t BGl__socketzd2closezd2zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t bgl_getprotobynumber(long);
static obj_t BGl_toplevelzd2initzd2zz__socketz00();
static obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31930ze3z83zz__socketz00(obj_t, obj_t);
extern obj_t bgl_getsockopt(obj_t, obj_t);
static obj_t BGl__socketzd2optionzd2setz12z12zz__socketz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52socketzd2initz12z92zz__socketz00();
static obj_t BGl__socketzd2downzf3z21zz__socketz00(obj_t, obj_t);
static obj_t BGl__socketzd2optionzd2zz__socketz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_getzd2protocolszd2zz__socketz00();
BGL_EXPORTED_DECL obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t);
extern obj_t bgl_host(obj_t);
static obj_t BGl_symbol2470z00zz__socketz00 = BUNSPEC;
static obj_t BGl__hostinfoz00zz__socketz00(obj_t, obj_t);
static obj_t BGl__socketzd2clientzf3z21zz__socketz00(obj_t, obj_t);
static obj_t BGl_symbol2482z00zz__socketz00 = BUNSPEC;
extern obj_t bgl_hostinfo(obj_t);
extern obj_t socket_local_addr(obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2closezd2zz__socketz00(obj_t);
static obj_t BGl_symbol2489z00zz__socketz00 = BUNSPEC;
static obj_t BGl__hostz00zz__socketz00(obj_t, obj_t);
static obj_t BGl_symbol2491z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2493z00zz__socketz00 = BUNSPEC;
static obj_t BGl__socketzd2hostnamezd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_symbol2508z00zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t make_vector(int, obj_t);
extern obj_t socket_shutdown(obj_t, bool_t);
static obj_t BGl_symbol2517z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2523z00zz__socketz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__socketz00();
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t bgl_make_client_socket(obj_t, int, int, obj_t, obj_t);
static obj_t BGl__socketzf3zf3zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t, obj_t, obj_t);
static obj_t BGl_list2473z00zz__socketz00 = BUNSPEC;
static obj_t BGl_search1868z00zz__socketz00(int, obj_t, obj_t, long);
static obj_t BGl_za2socketzd2mutexza2zd2zz__socketz00 = BUNSPEC;
extern void socket_cleanup();
static obj_t BGl_search1881z00zz__socketz00(int, obj_t, obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_socketzf3zf3zz__socketz00(obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__hostnamez00zz__socketz00(obj_t);
static obj_t BGl_list2504z00zz__socketz00 = BUNSPEC;
static obj_t BGl_list2505z00zz__socketz00 = BUNSPEC;
static obj_t BGl_search1890z00zz__socketz00(int, obj_t, obj_t, long);
static obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_list2499z00zz__socketz00 = BUNSPEC;
static obj_t BGl_list2512z00zz__socketz00 = BUNSPEC;
static obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_make_unix_socket(obj_t, int, obj_t, obj_t);
extern void socket_startup();
BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_keyword2474z00zz__socketz00 = BUNSPEC;
static obj_t BGl__socketzd2outputzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_keyword2476z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2478z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2480z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2500z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2502z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2506z00zz__socketz00 = BUNSPEC;
static obj_t BGl__socketzd2serverzf3z21zz__socketz00(obj_t, obj_t);
static obj_t BGl_keyword2513z00zz__socketz00 = BUNSPEC;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_keyword2515z00zz__socketz00 = BUNSPEC;
extern obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
extern obj_t bgl_getprotoents();
BGL_EXPORTED_DECL obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t);
extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
extern obj_t bgl_getprotobyname(char *);
static obj_t BGl__socketzd2portzd2numberz00zz__socketz00(obj_t, obj_t);
extern obj_t socket_close(obj_t);
static obj_t BGl_cnstzd2initzd2zz__socketz00();
extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_hostinfoz00zz__socketz00(obj_t);
static obj_t BGl__socketzd2localzd2addressz00zz__socketz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__socketz00();
static obj_t BGl__getzd2protocolzd2zz__socketz00(obj_t, obj_t);
extern obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t);
extern obj_t BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(obj_t, obj_t);
extern obj_t bgl_socket_accept(obj_t, bool_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_hostnamez00zz__socketz00();
extern obj_t bgl_make_server_socket(obj_t, int, int);
BGL_EXPORTED_DECL obj_t BGl_hostz00zz__socketz00(obj_t);
extern obj_t bgl_gethostname();
BGL_EXPORTED_DECL obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl__socketzd2hostzd2addressz00zz__socketz00(obj_t, obj_t);
static obj_t BGl__z52socketzd2initz12z92zz__socketz00(obj_t);
static obj_t BGl_za2socketzd2initializa7edza2z75zz__socketz00 = BUNSPEC;
static obj_t BGl__getzd2protocolszd2zz__socketz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__socketz00();
static obj_t BGl__socketzd2inputzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl__makezd2serverzd2socketz00zz__socketz00(obj_t, obj_t);
extern long bgl_socket_accept_many(obj_t, bool_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostinfozd2envzd2zz__socketz00, BgL_bgl__hostinfoza700za7za7__2538za7, BGl__hostinfoz00zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2localzd2addresszd2envzd2zz__socketz00, BgL_bgl__socketza7d2localza72539z00, BGl__socketzd2localzd2addressz00zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzf3zd2envz21zz__socketz00, BgL_bgl__socketza7f3za7f3za7za7_2540z00, BGl__socketzf3zf3zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2460z00zz__socketz00, BgL_bgl_string2460za700za7za7_2541za7, "socket", 6 );
DEFINE_STRING( BGl_string2462z00zz__socketz00, BgL_bgl_string2462za700za7za7_2542za7, "/tmp/bigloo/runtime/Llib/socket.scm", 35 );
DEFINE_STRING( BGl_string2463z00zz__socketz00, BgL_bgl_string2463za700za7za7_2543za7, "_socket-hostname", 16 );
DEFINE_STRING( BGl_string2464z00zz__socketz00, BgL_bgl_string2464za700za7za7_2544za7, "_socket-host-address", 20 );
DEFINE_STRING( BGl_string2465z00zz__socketz00, BgL_bgl_string2465za700za7za7_2545za7, "_socket-local-address", 21 );
DEFINE_STRING( BGl_string2466z00zz__socketz00, BgL_bgl_string2466za700za7za7_2546za7, "_socket-down?", 13 );
DEFINE_STRING( BGl_string2467z00zz__socketz00, BgL_bgl_string2467za700za7za7_2547za7, "_socket-port-number", 19 );
DEFINE_STRING( BGl_string2468z00zz__socketz00, BgL_bgl_string2468za700za7za7_2548za7, "_socket-input", 13 );
DEFINE_STRING( BGl_string2469z00zz__socketz00, BgL_bgl_string2469za700za7za7_2549za7, "_socket-output", 14 );
DEFINE_STRING( BGl_string2471z00zz__socketz00, BgL_bgl_string2471za700za7za7_2550za7, "inet", 4 );
DEFINE_STRING( BGl_string2472z00zz__socketz00, BgL_bgl_string2472za700za7za7_2551za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string2475z00zz__socketz00, BgL_bgl_string2475za700za7za7_2552za7, "domain", 6 );
DEFINE_STRING( BGl_string2477z00zz__socketz00, BgL_bgl_string2477za700za7za7_2553za7, "inbuf", 5 );
DEFINE_STRING( BGl_string2479z00zz__socketz00, BgL_bgl_string2479za700za7za7_2554za7, "outbuf", 6 );
DEFINE_STRING( BGl_string2481z00zz__socketz00, BgL_bgl_string2481za700za7za7_2555za7, "timeout", 7 );
DEFINE_STRING( BGl_string2483z00zz__socketz00, BgL_bgl_string2483za700za7za7_2556za7, "make-client-socket::socket", 26 );
DEFINE_STRING( BGl_string2484z00zz__socketz00, BgL_bgl_string2484za700za7za7_2557za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string2485z00zz__socketz00, BgL_bgl_string2485za700za7za7_2558za7, "_make-client-socket", 19 );
DEFINE_STRING( BGl_string2486z00zz__socketz00, BgL_bgl_string2486za700za7za7_2559za7, "long", 4 );
DEFINE_STRING( BGl_string2487z00zz__socketz00, BgL_bgl_string2487za700za7za7_2560za7, "int", 3 );
DEFINE_STRING( BGl_string2488z00zz__socketz00, BgL_bgl_string2488za700za7za7_2561za7, "bstring", 7 );
DEFINE_STRING( BGl_string2490z00zz__socketz00, BgL_bgl_string2490za700za7za7_2562za7, "make-client-socket", 18 );
DEFINE_STRING( BGl_string2501z00zz__socketz00, BgL_bgl_string2501za700za7za7_2563za7, "backlog", 7 );
DEFINE_STRING( BGl_string2492z00zz__socketz00, BgL_bgl_string2492za700za7za7_2564za7, "unix", 4 );
DEFINE_STRING( BGl_string2503z00zz__socketz00, BgL_bgl_string2503za700za7za7_2565za7, "name", 4 );
DEFINE_STRING( BGl_string2494z00zz__socketz00, BgL_bgl_string2494za700za7za7_2566za7, "local", 5 );
DEFINE_STRING( BGl_string2495z00zz__socketz00, BgL_bgl_string2495za700za7za7_2567za7, "Unknown socket domain", 21 );
DEFINE_STRING( BGl_string2496z00zz__socketz00, BgL_bgl_string2496za700za7za7_2568za7, "wrong number of arguments: [2..6] expected, provided", 52 );
DEFINE_STRING( BGl_string2507z00zz__socketz00, BgL_bgl_string2507za700za7za7_2569za7, "errp", 4 );
DEFINE_STRING( BGl_string2497z00zz__socketz00, BgL_bgl_string2497za700za7za7_2570za7, "make-server-socket", 18 );
DEFINE_STRING( BGl_string2498z00zz__socketz00, BgL_bgl_string2498za700za7za7_2571za7, "pair", 4 );
DEFINE_STRING( BGl_string2510z00zz__socketz00, BgL_bgl_string2510za700za7za7_2572za7, "_socket-accept", 14 );
DEFINE_STRING( BGl_string2509z00zz__socketz00, BgL_bgl_string2509za700za7za7_2573za7, "socket-accept", 13 );
DEFINE_STRING( BGl_string2511z00zz__socketz00, BgL_bgl_string2511za700za7za7_2574za7, "wrong number of arguments: [1..4] expected, provided", 52 );
DEFINE_STRING( BGl_string2514z00zz__socketz00, BgL_bgl_string2514za700za7za7_2575za7, "inbufs", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2hostnamezd2envz00zz__socketz00, BgL_bgl__socketza7d2hostna2576za7, BGl__socketzd2hostnamezd2zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2516z00zz__socketz00, BgL_bgl_string2516za700za7za7_2577za7, "outbufs", 7 );
DEFINE_STRING( BGl_string2518z00zz__socketz00, BgL_bgl_string2518za700za7za7_2578za7, "socket-accept-many", 18 );
DEFINE_STRING( BGl_string2520z00zz__socketz00, BgL_bgl_string2520za700za7za7_2579za7, "vector", 6 );
DEFINE_STRING( BGl_string2519z00zz__socketz00, BgL_bgl_string2519za700za7za7_2580za7, "_socket-accept-many", 19 );
DEFINE_STRING( BGl_string2521z00zz__socketz00, BgL_bgl_string2521za700za7za7_2581za7, "wrong number of arguments: [2..5] expected, provided", 52 );
DEFINE_STRING( BGl_string2522z00zz__socketz00, BgL_bgl_string2522za700za7za7_2582za7, "loop", 4 );
DEFINE_STRING( BGl_string2524z00zz__socketz00, BgL_bgl_string2524za700za7za7_2583za7, "socket-shutdown", 15 );
DEFINE_STRING( BGl_string2525z00zz__socketz00, BgL_bgl_string2525za700za7za7_2584za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostnamezd2envzd2zz__socketz00, BgL_bgl__hostnameza700za7za7__2585za7, BGl__hostnamez00zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2526z00zz__socketz00, BgL_bgl_string2526za700za7za7_2586za7, "_socket-shutdown", 16 );
DEFINE_STRING( BGl_string2527z00zz__socketz00, BgL_bgl_string2527za700za7za7_2587za7, "_socket-close", 13 );
DEFINE_STRING( BGl_string2528z00zz__socketz00, BgL_bgl_string2528za700za7za7_2588za7, "_host", 5 );
DEFINE_STRING( BGl_string2530z00zz__socketz00, BgL_bgl_string2530za700za7za7_2589za7, "get-protocol", 12 );
DEFINE_STRING( BGl_string2529z00zz__socketz00, BgL_bgl_string2529za700za7za7_2590za7, "_hostinfo", 9 );
DEFINE_STRING( BGl_string2531z00zz__socketz00, BgL_bgl_string2531za700za7za7_2591za7, "_socket-option", 14 );
DEFINE_STRING( BGl_string2532z00zz__socketz00, BgL_bgl_string2532za700za7za7_2592za7, "keyword", 7 );
DEFINE_STRING( BGl_string2533z00zz__socketz00, BgL_bgl_string2533za700za7za7_2593za7, "_socket-option-set!", 19 );
DEFINE_STRING( BGl_string2534z00zz__socketz00, BgL_bgl_string2534za700za7za7_2594za7, "__socket", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2hostzd2addresszd2envzd2zz__socketz00, BgL_bgl__socketza7d2hostza7d2595z00, BGl__socketzd2hostzd2addressz00zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2portzd2numberzd2envzd2zz__socketz00, BgL_bgl__socketza7d2portza7d2596z00, BGl__socketzd2portzd2numberz00zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2clientzd2socketzd2envzd2zz__socketz00, BgL_bgl__makeza7d2clientza7d2597z00, opt_generic_entry, BGl__makezd2clientzd2socketz00zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2protocolzd2envz00zz__socketz00, BgL_bgl__getza7d2protocolza72598z00, BGl__getzd2protocolzd2zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2serverzd2socketzd2envzd2zz__socketz00, BgL_bgl__makeza7d2serverza7d2599z00, va_generic_entry, BGl__makezd2serverzd2socketz00zz__socketz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52socketzd2initz12zd2envz40zz__socketz00, BgL_bgl__za752socketza7d2ini2600z00, BGl__z52socketzd2initz12z92zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2serverzf3zd2envzf3zz__socketz00, BgL_bgl__socketza7d2server2601za7, BGl__socketzd2serverzf3z21zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2shutdownzd2envz00zz__socketz00, BgL_bgl__socketza7d2shutdo2602za7, opt_generic_entry, BGl__socketzd2shutdownzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2acceptzd2manyzd2envzd2zz__socketz00, BgL_bgl__socketza7d2accept2603za7, opt_generic_entry, BGl__socketzd2acceptzd2manyz00zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2acceptzd2envz00zz__socketz00, BgL_bgl__socketza7d2accept2604za7, opt_generic_entry, BGl__socketzd2acceptzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2protocolszd2envz00zz__socketz00, BgL_bgl__getza7d2protocols2605za7, BGl__getzd2protocolszd2zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2clientzf3zd2envzf3zz__socketz00, BgL_bgl__socketza7d2client2606za7, BGl__socketzd2clientzf3z21zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2outputzd2envz00zz__socketz00, BgL_bgl__socketza7d2output2607za7, BGl__socketzd2outputzd2zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2closezd2envz00zz__socketz00, BgL_bgl__socketza7d2closeza72608z00, BGl__socketzd2closezd2zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2downzf3zd2envzf3zz__socketz00, BgL_bgl__socketza7d2downza7f2609z00, BGl__socketzd2downzf3z21zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2inputzd2envz00zz__socketz00, BgL_bgl__socketza7d2inputza72610z00, BGl__socketzd2inputzd2zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2461z00zz__socketz00, BgL_bgl_za7c3anonymousza7a312611z00, BGl_zc3anonymousza31930ze3z83zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2optionzd2envz00zz__socketz00, BgL_bgl__socketza7d2option2612za7, BGl__socketzd2optionzd2zz__socketz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2optionzd2setz12zd2envzc0zz__socketz00, BgL_bgl__socketza7d2option2613za7, BGl__socketzd2optionzd2setz12z12zz__socketz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostzd2envzd2zz__socketz00, BgL_bgl__hostza700za7za7__sock2614za7, BGl__hostz00zz__socketz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long BgL_checksumz00_1983, char * BgL_fromz00_1984)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__socketz00))
{ 
BGl_requirezd2initializa7ationz75zz__socketz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__socketz00(); 
BGl_importedzd2moduleszd2initz00zz__socketz00(); 
BGl_toplevelzd2initzd2zz__socketz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 14 */
BGl_symbol2470z00zz__socketz00 = 
bstring_to_symbol(BGl_string2471z00zz__socketz00); 
BGl_keyword2474z00zz__socketz00 = 
bstring_to_keyword(BGl_string2475z00zz__socketz00); 
BGl_keyword2476z00zz__socketz00 = 
bstring_to_keyword(BGl_string2477z00zz__socketz00); 
BGl_keyword2478z00zz__socketz00 = 
bstring_to_keyword(BGl_string2479z00zz__socketz00); 
BGl_keyword2480z00zz__socketz00 = 
bstring_to_keyword(BGl_string2481z00zz__socketz00); 
BGl_list2473z00zz__socketz00 = 
MAKE_PAIR(BGl_keyword2474z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2476z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2478z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2480z00zz__socketz00, BNIL)))); 
BGl_symbol2482z00zz__socketz00 = 
bstring_to_symbol(BGl_string2483z00zz__socketz00); 
BGl_symbol2489z00zz__socketz00 = 
bstring_to_symbol(BGl_string2490z00zz__socketz00); 
BGl_symbol2491z00zz__socketz00 = 
bstring_to_symbol(BGl_string2492z00zz__socketz00); 
BGl_symbol2493z00zz__socketz00 = 
bstring_to_symbol(BGl_string2494z00zz__socketz00); 
BGl_keyword2500z00zz__socketz00 = 
bstring_to_keyword(BGl_string2501z00zz__socketz00); 
BGl_keyword2502z00zz__socketz00 = 
bstring_to_keyword(BGl_string2503z00zz__socketz00); 
BGl_list2499z00zz__socketz00 = 
MAKE_PAIR(BGl_keyword2500z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2502z00zz__socketz00, BNIL)); 
BGl_list2504z00zz__socketz00 = 
MAKE_PAIR(BGl_keyword2502z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2500z00zz__socketz00, BNIL)); 
BGl_keyword2506z00zz__socketz00 = 
bstring_to_keyword(BGl_string2507z00zz__socketz00); 
BGl_list2505z00zz__socketz00 = 
MAKE_PAIR(BGl_keyword2506z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2476z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2478z00zz__socketz00, BNIL))); 
BGl_symbol2508z00zz__socketz00 = 
bstring_to_symbol(BGl_string2509z00zz__socketz00); 
BGl_keyword2513z00zz__socketz00 = 
bstring_to_keyword(BGl_string2514z00zz__socketz00); 
BGl_keyword2515z00zz__socketz00 = 
bstring_to_keyword(BGl_string2516z00zz__socketz00); 
BGl_list2512z00zz__socketz00 = 
MAKE_PAIR(BGl_keyword2506z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2513z00zz__socketz00, 
MAKE_PAIR(BGl_keyword2515z00zz__socketz00, BNIL))); 
BGl_symbol2517z00zz__socketz00 = 
bstring_to_symbol(BGl_string2518z00zz__socketz00); 
return ( 
BGl_symbol2523z00zz__socketz00 = 
bstring_to_symbol(BGl_string2524z00zz__socketz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 14 */
BGl_za2socketzd2initializa7edza2z75zz__socketz00 = BFALSE; 
return ( 
BGl_za2socketzd2mutexza2zd2zz__socketz00 = 
bgl_make_mutex(BGl_string2460z00zz__socketz00), BUNSPEC) ;} 
}



/* %socket-init! */
BGL_EXPORTED_DEF obj_t BGl_z52socketzd2initz12z92zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 178 */
{ /* Llib/socket.scm 179 */
obj_t BgL_g1920z00_786;
BgL_g1920z00_786 = BGl_za2socketzd2mutexza2zd2zz__socketz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1920z00_786); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1920z00_786, ((long)0)); } } } 
if(
CBOOL(BGl_za2socketzd2initializa7edza2z75zz__socketz00))
{ /* Llib/socket.scm 180 */BFALSE; }  else 
{ /* Llib/socket.scm 180 */
BGl_za2socketzd2initializa7edza2z75zz__socketz00 = BTRUE; 
socket_startup(); BUNSPEC; 
BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BGl_proc2461z00zz__socketz00); BUNSPEC; } 
{ /* Llib/socket.scm 190 */
obj_t BgL_mz00_1418;
BgL_mz00_1418 = BGl_za2socketzd2mutexza2zd2zz__socketz00; 
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_1418));} } 
}



/* _%socket-init! */
obj_t BGl__z52socketzd2initz12z92zz__socketz00(obj_t BgL_envz00_1755)
{ AN_OBJECT;
{ /* Llib/socket.scm 178 */
return 
BGl_z52socketzd2initz12z92zz__socketz00();} 
}



/* <anonymous:1930> */
obj_t BGl_zc3anonymousza31930ze3z83zz__socketz00(obj_t BgL_envz00_1756, obj_t BgL_xz00_1757)
{ AN_OBJECT;
{ /* Llib/socket.scm 184 */
{ 
obj_t BgL_xz00_789;
BgL_xz00_789 = BgL_xz00_1757; 
socket_cleanup(); BUNSPEC; 
return BgL_xz00_789;} } 
}



/* socket? */
BGL_EXPORTED_DEF bool_t BGl_socketzf3zf3zz__socketz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/socket.scm 195 */
return 
SOCKETP(BgL_objz00_1);} 
}



/* _socket? */
obj_t BGl__socketzf3zf3zz__socketz00(obj_t BgL_envz00_1758, obj_t BgL_objz00_1759)
{ AN_OBJECT;
{ /* Llib/socket.scm 195 */
return 
BBOOL(
SOCKETP(BgL_objz00_1759));} 
}



/* socket-server? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Llib/socket.scm 201 */
return 
BGL_SOCKET_SERVERP(BgL_objz00_2);} 
}



/* _socket-server? */
obj_t BGl__socketzd2serverzf3z21zz__socketz00(obj_t BgL_envz00_1760, obj_t BgL_objz00_1761)
{ AN_OBJECT;
{ /* Llib/socket.scm 201 */
return 
BBOOL(
BGL_SOCKET_SERVERP(BgL_objz00_1761));} 
}



/* socket-client? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t BgL_objz00_3)
{ AN_OBJECT;
{ /* Llib/socket.scm 207 */
return 
BGL_SOCKET_CLIENTP(BgL_objz00_3);} 
}



/* _socket-client? */
obj_t BGl__socketzd2clientzf3z21zz__socketz00(obj_t BgL_envz00_1762, obj_t BgL_objz00_1763)
{ AN_OBJECT;
{ /* Llib/socket.scm 207 */
return 
BBOOL(
BGL_SOCKET_CLIENTP(BgL_objz00_1763));} 
}



/* socket-hostname */
BGL_EXPORTED_DEF obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t BgL_socketz00_4)
{ AN_OBJECT;
{ /* Llib/socket.scm 213 */
return 
SOCKET_HOSTNAME(BgL_socketz00_4);} 
}



/* _socket-hostname */
obj_t BGl__socketzd2hostnamezd2zz__socketz00(obj_t BgL_envz00_1764, obj_t BgL_socketz00_1765)
{ AN_OBJECT;
{ /* Llib/socket.scm 213 */
{ /* Llib/socket.scm 214 */
obj_t BgL_socketz00_1954;
if(
SOCKETP(BgL_socketz00_1765))
{ /* Llib/socket.scm 214 */
BgL_socketz00_1954 = BgL_socketz00_1765; }  else 
{ 
obj_t BgL_auxz00_2047;
BgL_auxz00_2047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)8747)), BGl_string2463z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1765); 
FAILURE(BgL_auxz00_2047,BFALSE,BFALSE);} 
return 
SOCKET_HOSTNAME(BgL_socketz00_1954);} } 
}



/* socket-host-address */
BGL_EXPORTED_DEF obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t BgL_socketz00_5)
{ AN_OBJECT;
{ /* Llib/socket.scm 219 */
return 
SOCKET_HOSTIP(BgL_socketz00_5);} 
}



/* _socket-host-address */
obj_t BGl__socketzd2hostzd2addressz00zz__socketz00(obj_t BgL_envz00_1766, obj_t BgL_socketz00_1767)
{ AN_OBJECT;
{ /* Llib/socket.scm 219 */
{ /* Llib/socket.scm 220 */
obj_t BgL_socketz00_1955;
if(
SOCKETP(BgL_socketz00_1767))
{ /* Llib/socket.scm 220 */
BgL_socketz00_1955 = BgL_socketz00_1767; }  else 
{ 
obj_t BgL_auxz00_2055;
BgL_auxz00_2055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)9045)), BGl_string2464z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1767); 
FAILURE(BgL_auxz00_2055,BFALSE,BFALSE);} 
return 
SOCKET_HOSTIP(BgL_socketz00_1955);} } 
}



/* socket-local-address */
BGL_EXPORTED_DEF obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t BgL_socketz00_6)
{ AN_OBJECT;
{ /* Llib/socket.scm 225 */
return 
socket_local_addr(BgL_socketz00_6);} 
}



/* _socket-local-address */
obj_t BGl__socketzd2localzd2addressz00zz__socketz00(obj_t BgL_envz00_1768, obj_t BgL_socketz00_1769)
{ AN_OBJECT;
{ /* Llib/socket.scm 225 */
{ /* Llib/socket.scm 226 */
obj_t BgL_socketz00_1956;
if(
SOCKETP(BgL_socketz00_1769))
{ /* Llib/socket.scm 226 */
BgL_socketz00_1956 = BgL_socketz00_1769; }  else 
{ 
obj_t BgL_auxz00_2063;
BgL_auxz00_2063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)9350)), BGl_string2465z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1769); 
FAILURE(BgL_auxz00_2063,BFALSE,BFALSE);} 
return 
socket_local_addr(BgL_socketz00_1956);} } 
}



/* socket-down? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t BgL_socketz00_7)
{ AN_OBJECT;
{ /* Llib/socket.scm 231 */
return 
SOCKET_DOWNP(BgL_socketz00_7);} 
}



/* _socket-down? */
obj_t BGl__socketzd2downzf3z21zz__socketz00(obj_t BgL_envz00_1770, obj_t BgL_socketz00_1771)
{ AN_OBJECT;
{ /* Llib/socket.scm 231 */
{ /* Llib/socket.scm 232 */
bool_t BgL_auxz00_2069;
{ /* Llib/socket.scm 232 */
obj_t BgL_socketz00_1957;
if(
SOCKETP(BgL_socketz00_1771))
{ /* Llib/socket.scm 232 */
BgL_socketz00_1957 = BgL_socketz00_1771; }  else 
{ 
obj_t BgL_auxz00_2072;
BgL_auxz00_2072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)9657)), BGl_string2466z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1771); 
FAILURE(BgL_auxz00_2072,BFALSE,BFALSE);} 
BgL_auxz00_2069 = 
SOCKET_DOWNP(BgL_socketz00_1957); } 
return 
BBOOL(BgL_auxz00_2069);} } 
}



/* socket-port-number */
BGL_EXPORTED_DEF obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t BgL_socketz00_8)
{ AN_OBJECT;
{ /* Llib/socket.scm 237 */
return 
BINT(
SOCKET_PORT(BgL_socketz00_8));} 
}



/* _socket-port-number */
obj_t BGl__socketzd2portzd2numberz00zz__socketz00(obj_t BgL_envz00_1772, obj_t BgL_socketz00_1773)
{ AN_OBJECT;
{ /* Llib/socket.scm 237 */
{ /* Llib/socket.scm 238 */
obj_t BgL_socketz00_1958;
if(
SOCKETP(BgL_socketz00_1773))
{ /* Llib/socket.scm 238 */
BgL_socketz00_1958 = BgL_socketz00_1773; }  else 
{ 
obj_t BgL_auxz00_2082;
BgL_auxz00_2082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)9965)), BGl_string2467z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1773); 
FAILURE(BgL_auxz00_2082,BFALSE,BFALSE);} 
return 
BINT(
SOCKET_PORT(BgL_socketz00_1958));} } 
}



/* socket-input */
BGL_EXPORTED_DEF obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t BgL_socketz00_9)
{ AN_OBJECT;
{ /* Llib/socket.scm 243 */
return 
SOCKET_INPUT(BgL_socketz00_9);} 
}



/* _socket-input */
obj_t BGl__socketzd2inputzd2zz__socketz00(obj_t BgL_envz00_1774, obj_t BgL_socketz00_1775)
{ AN_OBJECT;
{ /* Llib/socket.scm 243 */
{ /* Llib/socket.scm 244 */
obj_t BgL_socketz00_1959;
if(
SOCKETP(BgL_socketz00_1775))
{ /* Llib/socket.scm 244 */
BgL_socketz00_1959 = BgL_socketz00_1775; }  else 
{ 
obj_t BgL_auxz00_2091;
BgL_auxz00_2091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10267)), BGl_string2468z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1775); 
FAILURE(BgL_auxz00_2091,BFALSE,BFALSE);} 
return 
SOCKET_INPUT(BgL_socketz00_1959);} } 
}



/* socket-output */
BGL_EXPORTED_DEF obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t BgL_socketz00_10)
{ AN_OBJECT;
{ /* Llib/socket.scm 249 */
return 
SOCKET_OUTPUT(BgL_socketz00_10);} 
}



/* _socket-output */
obj_t BGl__socketzd2outputzd2zz__socketz00(obj_t BgL_envz00_1776, obj_t BgL_socketz00_1777)
{ AN_OBJECT;
{ /* Llib/socket.scm 249 */
{ /* Llib/socket.scm 250 */
obj_t BgL_socketz00_1960;
if(
SOCKETP(BgL_socketz00_1777))
{ /* Llib/socket.scm 250 */
BgL_socketz00_1960 = BgL_socketz00_1777; }  else 
{ 
obj_t BgL_auxz00_2099;
BgL_auxz00_2099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10564)), BGl_string2469z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1777); 
FAILURE(BgL_auxz00_2099,BFALSE,BFALSE);} 
return 
SOCKET_OUTPUT(BgL_socketz00_1960);} } 
}



/* _make-client-socket */
obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t BgL_envz00_18, obj_t BgL_opt1866z00_17)
{ AN_OBJECT;
{ /* Llib/socket.scm 255 */
{ /* Llib/socket.scm 255 */
int BgL_l1867z00_792;
BgL_l1867z00_792 = 
VECTOR_LENGTH(BgL_opt1866z00_17); 
{ /* Llib/socket.scm 255 */
obj_t BgL_g1875z00_796;obj_t BgL_g1876z00_797;
BgL_g1875z00_796 = 
VECTOR_REF(BgL_opt1866z00_17,
(int)(((long)0))); 
BgL_g1876z00_797 = 
VECTOR_REF(BgL_opt1866z00_17,
(int)(((long)1))); 
{ /* Llib/socket.scm 255 */
obj_t BgL_domainz00_798;
BgL_domainz00_798 = BGl_symbol2470z00zz__socketz00; 
{ /* Llib/socket.scm 255 */
obj_t BgL_inbufz00_799;
BgL_inbufz00_799 = BTRUE; 
{ /* Llib/socket.scm 255 */
obj_t BgL_outbufz00_800;
BgL_outbufz00_800 = BTRUE; 
{ /* Llib/socket.scm 255 */
obj_t BgL_timeoutz00_801;
BgL_timeoutz00_801 = 
BINT(((long)0)); 
{ /* Llib/socket.scm 255 */

{ 
long BgL_iz00_802;
BgL_iz00_802 = ((long)2); 
BgL_check1869z00_803:
if(
(BgL_iz00_802==
(long)(BgL_l1867z00_792)))
{ /* Llib/socket.scm 255 */BNIL; }  else 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2113;
{ /* Llib/socket.scm 255 */
obj_t BgL_arg1941z00_810;obj_t BgL_arg1942z00_811;
{ /* Llib/socket.scm 255 */
int BgL_kz00_1423;
BgL_kz00_1423 = 
(int)(BgL_iz00_802); 
{ /* Llib/socket.scm 255 */
int BgL_l2316z00_1805;
BgL_l2316z00_1805 = 
VECTOR_LENGTH(BgL_opt1866z00_17); 
if(
BOUND_CHECK(BgL_kz00_1423, BgL_l2316z00_1805))
{ /* Llib/socket.scm 255 */
BgL_arg1941z00_810 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_kz00_1423); }  else 
{ 
obj_t BgL_auxz00_2119;
BgL_auxz00_2119 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1423), BgL_opt1866z00_17); 
FAILURE(BgL_auxz00_2119,BFALSE,BFALSE);} } } 
BgL_arg1942z00_811 = BGl_list2473z00zz__socketz00; 
BgL_testz00_2113 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1941z00_810, BgL_arg1942z00_811)); } 
if(BgL_testz00_2113)
{ 
long BgL_iz00_2126;
BgL_iz00_2126 = 
(BgL_iz00_802+((long)2)); 
BgL_iz00_802 = BgL_iz00_2126; 
goto BgL_check1869z00_803;}  else 
{ /* Llib/socket.scm 255 */
obj_t BgL_arg1937z00_807;obj_t BgL_arg1940z00_809;
BgL_arg1937z00_807 = BGl_symbol2482z00zz__socketz00; 
{ /* Llib/socket.scm 255 */
int BgL_kz00_1427;
BgL_kz00_1427 = 
(int)(BgL_iz00_802); 
{ /* Llib/socket.scm 255 */
int BgL_l2320z00_1809;
BgL_l2320z00_1809 = 
VECTOR_LENGTH(BgL_opt1866z00_17); 
if(
BOUND_CHECK(BgL_kz00_1427, BgL_l2320z00_1809))
{ /* Llib/socket.scm 255 */
BgL_arg1940z00_809 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_kz00_1427); }  else 
{ 
obj_t BgL_auxz00_2133;
BgL_auxz00_2133 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1427), BgL_opt1866z00_17); 
FAILURE(BgL_auxz00_2133,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg1937z00_807, BGl_string2484z00zz__socketz00, BgL_arg1940z00_809); } } } 
{ /* Llib/socket.scm 255 */
obj_t BgL_index1871z00_812;
BgL_index1871z00_812 = 
BGl_search1868z00zz__socketz00(BgL_l1867z00_792, BgL_opt1866z00_17, BGl_keyword2474z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2140;
{ /* Llib/socket.scm 255 */
long BgL_n1z00_1428;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2141;
if(
INTEGERP(BgL_index1871z00_812))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2141 = BgL_index1871z00_812
; }  else 
{ 
obj_t BgL_auxz00_2144;
BgL_auxz00_2144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1871z00_812); 
FAILURE(BgL_auxz00_2144,BFALSE,BFALSE);} 
BgL_n1z00_1428 = 
(long)CINT(BgL_auxz00_2141); } 
BgL_testz00_2140 = 
(BgL_n1z00_1428>=((long)0)); } 
if(BgL_testz00_2140)
{ 
int BgL_auxz00_2150;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2151;
{ /* Llib/socket.scm 255 */
bool_t BgL_test2363z00_1852;
BgL_test2363z00_1852 = 
INTEGERP(BgL_index1871z00_812); 
if(BgL_test2363z00_1852)
{ /* Llib/socket.scm 255 */
BgL_auxz00_2151 = BgL_index1871z00_812
; }  else 
{ 
obj_t BgL_auxz00_2154;
BgL_auxz00_2154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1871z00_812); 
FAILURE(BgL_auxz00_2154,BFALSE,BFALSE);} } 
BgL_auxz00_2150 = 
CINT(BgL_auxz00_2151); } 
BgL_domainz00_798 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_auxz00_2150); }  else 
{ /* Llib/socket.scm 255 */BFALSE; } } } 
{ /* Llib/socket.scm 255 */
obj_t BgL_index1872z00_814;
BgL_index1872z00_814 = 
BGl_search1868z00zz__socketz00(BgL_l1867z00_792, BgL_opt1866z00_17, BGl_keyword2476z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2161;
{ /* Llib/socket.scm 255 */
long BgL_n1z00_1430;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2162;
if(
INTEGERP(BgL_index1872z00_814))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2162 = BgL_index1872z00_814
; }  else 
{ 
obj_t BgL_auxz00_2165;
BgL_auxz00_2165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1872z00_814); 
FAILURE(BgL_auxz00_2165,BFALSE,BFALSE);} 
BgL_n1z00_1430 = 
(long)CINT(BgL_auxz00_2162); } 
BgL_testz00_2161 = 
(BgL_n1z00_1430>=((long)0)); } 
if(BgL_testz00_2161)
{ 
int BgL_auxz00_2171;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2172;
{ /* Llib/socket.scm 255 */
bool_t BgL_test2367z00_1856;
BgL_test2367z00_1856 = 
INTEGERP(BgL_index1872z00_814); 
if(BgL_test2367z00_1856)
{ /* Llib/socket.scm 255 */
BgL_auxz00_2172 = BgL_index1872z00_814
; }  else 
{ 
obj_t BgL_auxz00_2175;
BgL_auxz00_2175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1872z00_814); 
FAILURE(BgL_auxz00_2175,BFALSE,BFALSE);} } 
BgL_auxz00_2171 = 
CINT(BgL_auxz00_2172); } 
BgL_inbufz00_799 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_auxz00_2171); }  else 
{ /* Llib/socket.scm 255 */BFALSE; } } } 
{ /* Llib/socket.scm 255 */
obj_t BgL_index1873z00_816;
BgL_index1873z00_816 = 
BGl_search1868z00zz__socketz00(BgL_l1867z00_792, BgL_opt1866z00_17, BGl_keyword2478z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2182;
{ /* Llib/socket.scm 255 */
long BgL_n1z00_1432;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2183;
if(
INTEGERP(BgL_index1873z00_816))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2183 = BgL_index1873z00_816
; }  else 
{ 
obj_t BgL_auxz00_2186;
BgL_auxz00_2186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1873z00_816); 
FAILURE(BgL_auxz00_2186,BFALSE,BFALSE);} 
BgL_n1z00_1432 = 
(long)CINT(BgL_auxz00_2183); } 
BgL_testz00_2182 = 
(BgL_n1z00_1432>=((long)0)); } 
if(BgL_testz00_2182)
{ 
int BgL_auxz00_2192;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2193;
{ /* Llib/socket.scm 255 */
bool_t BgL_test2371z00_1860;
BgL_test2371z00_1860 = 
INTEGERP(BgL_index1873z00_816); 
if(BgL_test2371z00_1860)
{ /* Llib/socket.scm 255 */
BgL_auxz00_2193 = BgL_index1873z00_816
; }  else 
{ 
obj_t BgL_auxz00_2196;
BgL_auxz00_2196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1873z00_816); 
FAILURE(BgL_auxz00_2196,BFALSE,BFALSE);} } 
BgL_auxz00_2192 = 
CINT(BgL_auxz00_2193); } 
BgL_outbufz00_800 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_auxz00_2192); }  else 
{ /* Llib/socket.scm 255 */BFALSE; } } } 
{ /* Llib/socket.scm 255 */
obj_t BgL_index1874z00_818;
BgL_index1874z00_818 = 
BGl_search1868z00zz__socketz00(BgL_l1867z00_792, BgL_opt1866z00_17, BGl_keyword2480z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2203;
{ /* Llib/socket.scm 255 */
long BgL_n1z00_1434;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2204;
if(
INTEGERP(BgL_index1874z00_818))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2204 = BgL_index1874z00_818
; }  else 
{ 
obj_t BgL_auxz00_2207;
BgL_auxz00_2207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1874z00_818); 
FAILURE(BgL_auxz00_2207,BFALSE,BFALSE);} 
BgL_n1z00_1434 = 
(long)CINT(BgL_auxz00_2204); } 
BgL_testz00_2203 = 
(BgL_n1z00_1434>=((long)0)); } 
if(BgL_testz00_2203)
{ 
int BgL_auxz00_2213;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2214;
{ /* Llib/socket.scm 255 */
bool_t BgL_test2375z00_1864;
BgL_test2375z00_1864 = 
INTEGERP(BgL_index1874z00_818); 
if(BgL_test2375z00_1864)
{ /* Llib/socket.scm 255 */
BgL_auxz00_2214 = BgL_index1874z00_818
; }  else 
{ 
obj_t BgL_auxz00_2217;
BgL_auxz00_2217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1874z00_818); 
FAILURE(BgL_auxz00_2217,BFALSE,BFALSE);} } 
BgL_auxz00_2213 = 
CINT(BgL_auxz00_2214); } 
BgL_timeoutz00_801 = 
VECTOR_REF(BgL_opt1866z00_17,BgL_auxz00_2213); }  else 
{ /* Llib/socket.scm 255 */BFALSE; } } } 
{ /* Llib/socket.scm 255 */
obj_t BgL_arg1948z00_820;obj_t BgL_arg1949z00_821;
BgL_arg1948z00_820 = 
VECTOR_REF(BgL_opt1866z00_17,
(int)(((long)0))); 
BgL_arg1949z00_821 = 
VECTOR_REF(BgL_opt1866z00_17,
(int)(((long)1))); 
{ /* Llib/socket.scm 255 */
obj_t BgL_domainz00_822;
BgL_domainz00_822 = BgL_domainz00_798; 
{ /* Llib/socket.scm 255 */
obj_t BgL_inbufz00_823;
BgL_inbufz00_823 = BgL_inbufz00_799; 
{ /* Llib/socket.scm 255 */
obj_t BgL_outbufz00_824;
BgL_outbufz00_824 = BgL_outbufz00_800; 
{ /* Llib/socket.scm 255 */
obj_t BgL_timeoutz00_825;
BgL_timeoutz00_825 = BgL_timeoutz00_801; 
{ /* Llib/socket.scm 255 */
obj_t BgL_res2303z00_1450;
{ /* Llib/socket.scm 255 */
obj_t BgL_hostz00_1436;int BgL_portz00_1437;
if(
STRINGP(BgL_arg1948z00_820))
{ /* Llib/socket.scm 255 */
BgL_hostz00_1436 = BgL_arg1948z00_820; }  else 
{ 
obj_t BgL_auxz00_2229;
BgL_auxz00_2229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2488z00zz__socketz00, BgL_arg1948z00_820); 
FAILURE(BgL_auxz00_2229,BFALSE,BFALSE);} 
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2233;
if(
INTEGERP(BgL_arg1949z00_821))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2233 = BgL_arg1949z00_821
; }  else 
{ 
obj_t BgL_auxz00_2236;
BgL_auxz00_2236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_arg1949z00_821); 
FAILURE(BgL_auxz00_2236,BFALSE,BFALSE);} 
BgL_portz00_1437 = 
CINT(BgL_auxz00_2233); } 
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 255 */
obj_t BgL_inbufz00_1442;obj_t BgL_outbufz00_1443;
BgL_inbufz00_1442 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2489z00zz__socketz00, BgL_inbufz00_823, 
(int)(((long)512))); 
BgL_outbufz00_1443 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2489z00zz__socketz00, BgL_outbufz00_824, 
(int)(((long)1024))); 
if(
(BgL_domainz00_822==BGl_symbol2470z00zz__socketz00))
{ /* Llib/socket.scm 255 */
int BgL_auxz00_2248;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2249;
if(
INTEGERP(BgL_timeoutz00_825))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2249 = BgL_timeoutz00_825
; }  else 
{ 
obj_t BgL_auxz00_2252;
BgL_auxz00_2252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_timeoutz00_825); 
FAILURE(BgL_auxz00_2252,BFALSE,BFALSE);} 
BgL_auxz00_2248 = 
CINT(BgL_auxz00_2249); } 
BgL_res2303z00_1450 = 
bgl_make_client_socket(BgL_hostz00_1436, BgL_portz00_1437, BgL_auxz00_2248, BgL_inbufz00_1442, BgL_outbufz00_1443); }  else 
{ /* Llib/socket.scm 255 */
bool_t BgL_testz00_2258;
{ /* Llib/socket.scm 255 */
bool_t BgL__ortest_1825z00_1447;
BgL__ortest_1825z00_1447 = 
(BgL_domainz00_822==BGl_symbol2491z00zz__socketz00); 
if(BgL__ortest_1825z00_1447)
{ /* Llib/socket.scm 255 */
BgL_testz00_2258 = BgL__ortest_1825z00_1447
; }  else 
{ /* Llib/socket.scm 255 */
BgL_testz00_2258 = 
(BgL_domainz00_822==BGl_symbol2493z00zz__socketz00)
; } } 
if(BgL_testz00_2258)
{ /* Llib/socket.scm 255 */
int BgL_auxz00_2262;
{ /* Llib/socket.scm 255 */
obj_t BgL_auxz00_2263;
if(
INTEGERP(BgL_timeoutz00_825))
{ /* Llib/socket.scm 255 */
BgL_auxz00_2263 = BgL_timeoutz00_825
; }  else 
{ 
obj_t BgL_auxz00_2266;
BgL_auxz00_2266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_timeoutz00_825); 
FAILURE(BgL_auxz00_2266,BFALSE,BFALSE);} 
BgL_auxz00_2262 = 
CINT(BgL_auxz00_2263); } 
BgL_res2303z00_1450 = 
bgl_make_unix_socket(BgL_hostz00_1436, BgL_auxz00_2262, BgL_inbufz00_1442, BgL_outbufz00_1443); }  else 
{ /* Llib/socket.scm 255 */
obj_t BgL_aux2384z00_1873;
BgL_aux2384z00_1873 = 
BGl_errorz00zz__errorz00(BGl_symbol2489z00zz__socketz00, BGl_string2495z00zz__socketz00, BgL_domainz00_822); 
if(
SOCKETP(BgL_aux2384z00_1873))
{ /* Llib/socket.scm 255 */
BgL_res2303z00_1450 = BgL_aux2384z00_1873; }  else 
{ 
obj_t BgL_auxz00_2275;
BgL_auxz00_2275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10813)), BGl_string2485z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_aux2384z00_1873); 
FAILURE(BgL_auxz00_2275,BFALSE,BFALSE);} } } } } 
return BgL_res2303z00_1450;} } } } } } } } } } } } } } 
}



/* search1868 */
obj_t BGl_search1868z00zz__socketz00(int BgL_l1867z00_1802, obj_t BgL_opt1866z00_1801, obj_t BgL_k1z00_793, long BgL_iz00_794)
{ AN_OBJECT;
{ /* Llib/socket.scm 255 */
BGl_search1868z00zz__socketz00:
if(
(BgL_iz00_794==
(long)(BgL_l1867z00_1802)))
{ /* Llib/socket.scm 255 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 255 */
if(
(BgL_iz00_794==
(
(long)(BgL_l1867z00_1802)-((long)1))))
{ /* Llib/socket.scm 255 */
obj_t BgL_arg1952z00_828;int BgL_arg1954z00_830;
BgL_arg1952z00_828 = BGl_symbol2482z00zz__socketz00; 
BgL_arg1954z00_830 = 
VECTOR_LENGTH(BgL_opt1866z00_1801); 
return 
BGl_errorz00zz__errorz00(BgL_arg1952z00_828, BGl_string2496z00zz__socketz00, 
BINT(BgL_arg1954z00_830));}  else 
{ /* Llib/socket.scm 255 */
obj_t BgL_vz00_831;
BgL_vz00_831 = 
VECTOR_REF(BgL_opt1866z00_1801,
(int)(BgL_iz00_794)); 
if(
(BgL_vz00_831==BgL_k1z00_793))
{ /* Llib/socket.scm 255 */
return 
BINT(
(BgL_iz00_794+((long)1)));}  else 
{ 
long BgL_iz00_2296;
BgL_iz00_2296 = 
(BgL_iz00_794+((long)2)); 
BgL_iz00_794 = BgL_iz00_2296; 
goto BGl_search1868z00zz__socketz00;} } } } 
}



/* make-client-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t BgL_hostz00_11, int BgL_portz00_12, obj_t BgL_domainz00_13, obj_t BgL_inbufz00_14, obj_t BgL_outbufz00_15, obj_t BgL_timeoutz00_16)
{ AN_OBJECT;
{ /* Llib/socket.scm 255 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 257 */
obj_t BgL_inbufz00_1461;obj_t BgL_outbufz00_1462;
BgL_inbufz00_1461 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2489z00zz__socketz00, BgL_inbufz00_14, 
(int)(((long)512))); 
BgL_outbufz00_1462 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2489z00zz__socketz00, BgL_outbufz00_15, 
(int)(((long)1024))); 
if(
(BgL_domainz00_13==BGl_symbol2470z00zz__socketz00))
{ /* Llib/socket.scm 257 */
int BgL_auxz00_2305;
{ /* Llib/socket.scm 257 */
obj_t BgL_auxz00_2306;
if(
INTEGERP(BgL_timeoutz00_16))
{ /* Llib/socket.scm 257 */
BgL_auxz00_2306 = BgL_timeoutz00_16
; }  else 
{ 
obj_t BgL_auxz00_2309;
BgL_auxz00_2309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10938)), BGl_string2490z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_timeoutz00_16); 
FAILURE(BgL_auxz00_2309,BFALSE,BFALSE);} 
BgL_auxz00_2305 = 
CINT(BgL_auxz00_2306); } 
return 
bgl_make_client_socket(BgL_hostz00_11, BgL_portz00_12, BgL_auxz00_2305, BgL_inbufz00_1461, BgL_outbufz00_1462);}  else 
{ /* Llib/socket.scm 257 */
bool_t BgL_testz00_2315;
{ /* Llib/socket.scm 257 */
bool_t BgL__ortest_1825z00_1466;
BgL__ortest_1825z00_1466 = 
(BgL_domainz00_13==BGl_symbol2491z00zz__socketz00); 
if(BgL__ortest_1825z00_1466)
{ /* Llib/socket.scm 257 */
BgL_testz00_2315 = BgL__ortest_1825z00_1466
; }  else 
{ /* Llib/socket.scm 257 */
BgL_testz00_2315 = 
(BgL_domainz00_13==BGl_symbol2493z00zz__socketz00)
; } } 
if(BgL_testz00_2315)
{ /* Llib/socket.scm 257 */
int BgL_auxz00_2319;
{ /* Llib/socket.scm 257 */
obj_t BgL_auxz00_2320;
if(
INTEGERP(BgL_timeoutz00_16))
{ /* Llib/socket.scm 257 */
BgL_auxz00_2320 = BgL_timeoutz00_16
; }  else 
{ 
obj_t BgL_auxz00_2323;
BgL_auxz00_2323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10938)), BGl_string2490z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_timeoutz00_16); 
FAILURE(BgL_auxz00_2323,BFALSE,BFALSE);} 
BgL_auxz00_2319 = 
CINT(BgL_auxz00_2320); } 
return 
bgl_make_unix_socket(BgL_hostz00_11, BgL_auxz00_2319, BgL_inbufz00_1461, BgL_outbufz00_1462);}  else 
{ /* Llib/socket.scm 257 */
obj_t BgL_aux2390z00_1879;
BgL_aux2390z00_1879 = 
BGl_errorz00zz__errorz00(BGl_symbol2489z00zz__socketz00, BGl_string2495z00zz__socketz00, BgL_domainz00_13); 
if(
SOCKETP(BgL_aux2390z00_1879))
{ /* Llib/socket.scm 257 */
return BgL_aux2390z00_1879;}  else 
{ 
obj_t BgL_auxz00_2332;
BgL_auxz00_2332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)10938)), BGl_string2490z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_aux2390z00_1879); 
FAILURE(BgL_auxz00_2332,BFALSE,BFALSE);} } } } } 
}



/* make-server-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t BgL_portz00_19)
{ AN_OBJECT;
{ /* Llib/socket.scm 272 */
{ /* Llib/socket.scm 272 */
obj_t BgL_dsssl1877z00_841;
BgL_dsssl1877z00_841 = BgL_portz00_19; 
{ /* Llib/socket.scm 272 */
obj_t BgL_portz00_842;
{ /* Llib/socket.scm 272 */
bool_t BgL_testz00_2336;
if(
NULLP(BgL_dsssl1877z00_841))
{ /* Llib/socket.scm 272 */
BgL_testz00_2336 = ((bool_t)1)
; }  else 
{ /* Llib/socket.scm 272 */
obj_t BgL_auxz00_2339;
{ /* Llib/socket.scm 272 */
obj_t BgL_auxz00_2340;
{ /* Llib/socket.scm 272 */
obj_t BgL_pairz00_1470;
{ /* Llib/socket.scm 272 */
obj_t BgL_aux2392z00_1881;
BgL_aux2392z00_1881 = BgL_dsssl1877z00_841; 
if(
PAIRP(BgL_aux2392z00_1881))
{ /* Llib/socket.scm 272 */
BgL_pairz00_1470 = BgL_aux2392z00_1881; }  else 
{ 
obj_t BgL_auxz00_2343;
BgL_auxz00_2343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11611)), BGl_string2497z00zz__socketz00, BGl_string2498z00zz__socketz00, BgL_aux2392z00_1881); 
FAILURE(BgL_auxz00_2343,BFALSE,BFALSE);} } 
BgL_auxz00_2340 = 
CAR(BgL_pairz00_1470); } 
BgL_auxz00_2339 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2340, BGl_list2499z00zz__socketz00); } 
BgL_testz00_2336 = 
CBOOL(BgL_auxz00_2339); } 
if(BgL_testz00_2336)
{ /* Llib/socket.scm 272 */
BgL_portz00_842 = 
BINT(((long)0)); }  else 
{ /* Llib/socket.scm 272 */
obj_t BgL_tmp1878z00_846;
{ /* Llib/socket.scm 272 */
obj_t BgL_pairz00_1471;
{ /* Llib/socket.scm 272 */
obj_t BgL_aux2394z00_1883;
BgL_aux2394z00_1883 = BgL_dsssl1877z00_841; 
if(
PAIRP(BgL_aux2394z00_1883))
{ /* Llib/socket.scm 272 */
BgL_pairz00_1471 = BgL_aux2394z00_1883; }  else 
{ 
obj_t BgL_auxz00_2353;
BgL_auxz00_2353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11611)), BGl_string2497z00zz__socketz00, BGl_string2498z00zz__socketz00, BgL_aux2394z00_1883); 
FAILURE(BgL_auxz00_2353,BFALSE,BFALSE);} } 
BgL_tmp1878z00_846 = 
CAR(BgL_pairz00_1471); } 
{ /* Llib/socket.scm 272 */
obj_t BgL_pairz00_1472;
{ /* Llib/socket.scm 272 */
obj_t BgL_aux2396z00_1885;
BgL_aux2396z00_1885 = BgL_dsssl1877z00_841; 
if(
PAIRP(BgL_aux2396z00_1885))
{ /* Llib/socket.scm 272 */
BgL_pairz00_1472 = BgL_aux2396z00_1885; }  else 
{ 
obj_t BgL_auxz00_2360;
BgL_auxz00_2360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11611)), BGl_string2497z00zz__socketz00, BGl_string2498z00zz__socketz00, BgL_aux2396z00_1885); 
FAILURE(BgL_auxz00_2360,BFALSE,BFALSE);} } 
BgL_dsssl1877z00_841 = 
CDR(BgL_pairz00_1472); } 
BgL_portz00_842 = BgL_tmp1878z00_846; } } 
BGl_dssslzd2checkzd2keyzd2argsz12zc0zz__dssslz00(BgL_dsssl1877z00_841, BGl_list2504z00zz__socketz00); 
{ /* Llib/socket.scm 272 */
obj_t BgL_namez00_843;
BgL_namez00_843 = 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1877z00_841, BGl_keyword2502z00zz__socketz00, BFALSE); 
{ /* Llib/socket.scm 274 */
obj_t BgL_backlogz00_844;
BgL_backlogz00_844 = 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1877z00_841, BGl_keyword2500z00zz__socketz00, 
BINT(((long)5))); 
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 274 */
int BgL_auxz00_2379;int BgL_auxz00_2370;
{ /* Llib/socket.scm 274 */
obj_t BgL_auxz00_2380;
if(
INTEGERP(BgL_backlogz00_844))
{ /* Llib/socket.scm 274 */
BgL_auxz00_2380 = BgL_backlogz00_844
; }  else 
{ 
obj_t BgL_auxz00_2383;
BgL_auxz00_2383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11749)), BGl_string2497z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_backlogz00_844); 
FAILURE(BgL_auxz00_2383,BFALSE,BFALSE);} 
BgL_auxz00_2379 = 
CINT(BgL_auxz00_2380); } 
{ /* Llib/socket.scm 274 */
obj_t BgL_auxz00_2371;
if(
INTEGERP(BgL_portz00_842))
{ /* Llib/socket.scm 274 */
BgL_auxz00_2371 = BgL_portz00_842
; }  else 
{ 
obj_t BgL_auxz00_2374;
BgL_auxz00_2374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11744)), BGl_string2497z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_portz00_842); 
FAILURE(BgL_auxz00_2374,BFALSE,BFALSE);} 
BgL_auxz00_2370 = 
CINT(BgL_auxz00_2371); } 
return 
bgl_make_server_socket(BgL_namez00_843, BgL_auxz00_2370, BgL_auxz00_2379);} } } } } } 
}



/* _make-server-socket */
obj_t BGl__makezd2serverzd2socketz00zz__socketz00(obj_t BgL_envz00_1778, obj_t BgL_portz00_1779)
{ AN_OBJECT;
{ /* Llib/socket.scm 272 */
return 
BGl_makezd2serverzd2socketz00zz__socketz00(BgL_portz00_1779);} 
}



/* _socket-accept */
obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t BgL_envz00_25, obj_t BgL_opt1879z00_24)
{ AN_OBJECT;
{ /* Llib/socket.scm 279 */
{ /* Llib/socket.scm 279 */
int BgL_l1880z00_850;
BgL_l1880z00_850 = 
VECTOR_LENGTH(BgL_opt1879z00_24); 
{ /* Llib/socket.scm 279 */
obj_t BgL_g1887z00_854;
BgL_g1887z00_854 = 
VECTOR_REF(BgL_opt1879z00_24,
(int)(((long)0))); 
{ /* Llib/socket.scm 279 */
obj_t BgL_errpz00_855;
BgL_errpz00_855 = BTRUE; 
{ /* Llib/socket.scm 279 */
obj_t BgL_inbufz00_856;
BgL_inbufz00_856 = BTRUE; 
{ /* Llib/socket.scm 279 */
obj_t BgL_outbufz00_857;
BgL_outbufz00_857 = BTRUE; 
{ /* Llib/socket.scm 279 */

{ 
long BgL_iz00_858;
BgL_iz00_858 = ((long)1); 
BgL_check1882z00_859:
if(
(BgL_iz00_858==
(long)(BgL_l1880z00_850)))
{ /* Llib/socket.scm 279 */BNIL; }  else 
{ /* Llib/socket.scm 279 */
bool_t BgL_testz00_2396;
{ /* Llib/socket.scm 279 */
obj_t BgL_arg1970z00_866;obj_t BgL_arg1971z00_867;
{ /* Llib/socket.scm 279 */
int BgL_kz00_1477;
BgL_kz00_1477 = 
(int)(BgL_iz00_858); 
{ /* Llib/socket.scm 279 */
int BgL_l2324z00_1813;
BgL_l2324z00_1813 = 
VECTOR_LENGTH(BgL_opt1879z00_24); 
if(
BOUND_CHECK(BgL_kz00_1477, BgL_l2324z00_1813))
{ /* Llib/socket.scm 279 */
BgL_arg1970z00_866 = 
VECTOR_REF(BgL_opt1879z00_24,BgL_kz00_1477); }  else 
{ 
obj_t BgL_auxz00_2402;
BgL_auxz00_2402 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1477), BgL_opt1879z00_24); 
FAILURE(BgL_auxz00_2402,BFALSE,BFALSE);} } } 
BgL_arg1971z00_867 = BGl_list2505z00zz__socketz00; 
BgL_testz00_2396 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1970z00_866, BgL_arg1971z00_867)); } 
if(BgL_testz00_2396)
{ 
long BgL_iz00_2409;
BgL_iz00_2409 = 
(BgL_iz00_858+((long)2)); 
BgL_iz00_858 = BgL_iz00_2409; 
goto BgL_check1882z00_859;}  else 
{ /* Llib/socket.scm 279 */
obj_t BgL_arg1967z00_863;obj_t BgL_arg1969z00_865;
BgL_arg1967z00_863 = BGl_symbol2508z00zz__socketz00; 
{ /* Llib/socket.scm 279 */
int BgL_kz00_1481;
BgL_kz00_1481 = 
(int)(BgL_iz00_858); 
{ /* Llib/socket.scm 279 */
int BgL_l2328z00_1817;
BgL_l2328z00_1817 = 
VECTOR_LENGTH(BgL_opt1879z00_24); 
if(
BOUND_CHECK(BgL_kz00_1481, BgL_l2328z00_1817))
{ /* Llib/socket.scm 279 */
BgL_arg1969z00_865 = 
VECTOR_REF(BgL_opt1879z00_24,BgL_kz00_1481); }  else 
{ 
obj_t BgL_auxz00_2416;
BgL_auxz00_2416 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1481), BgL_opt1879z00_24); 
FAILURE(BgL_auxz00_2416,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg1967z00_863, BGl_string2484z00zz__socketz00, BgL_arg1969z00_865); } } } 
{ /* Llib/socket.scm 279 */
obj_t BgL_index1884z00_868;
BgL_index1884z00_868 = 
BGl_search1881z00zz__socketz00(BgL_l1880z00_850, BgL_opt1879z00_24, BGl_keyword2506z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 279 */
bool_t BgL_testz00_2423;
{ /* Llib/socket.scm 279 */
long BgL_n1z00_1482;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2424;
if(
INTEGERP(BgL_index1884z00_868))
{ /* Llib/socket.scm 279 */
BgL_auxz00_2424 = BgL_index1884z00_868
; }  else 
{ 
obj_t BgL_auxz00_2427;
BgL_auxz00_2427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1884z00_868); 
FAILURE(BgL_auxz00_2427,BFALSE,BFALSE);} 
BgL_n1z00_1482 = 
(long)CINT(BgL_auxz00_2424); } 
BgL_testz00_2423 = 
(BgL_n1z00_1482>=((long)0)); } 
if(BgL_testz00_2423)
{ 
int BgL_auxz00_2433;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2434;
{ /* Llib/socket.scm 279 */
bool_t BgL_test2405z00_1894;
BgL_test2405z00_1894 = 
INTEGERP(BgL_index1884z00_868); 
if(BgL_test2405z00_1894)
{ /* Llib/socket.scm 279 */
BgL_auxz00_2434 = BgL_index1884z00_868
; }  else 
{ 
obj_t BgL_auxz00_2437;
BgL_auxz00_2437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1884z00_868); 
FAILURE(BgL_auxz00_2437,BFALSE,BFALSE);} } 
BgL_auxz00_2433 = 
CINT(BgL_auxz00_2434); } 
BgL_errpz00_855 = 
VECTOR_REF(BgL_opt1879z00_24,BgL_auxz00_2433); }  else 
{ /* Llib/socket.scm 279 */BFALSE; } } } 
{ /* Llib/socket.scm 279 */
obj_t BgL_index1885z00_870;
BgL_index1885z00_870 = 
BGl_search1881z00zz__socketz00(BgL_l1880z00_850, BgL_opt1879z00_24, BGl_keyword2476z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 279 */
bool_t BgL_testz00_2444;
{ /* Llib/socket.scm 279 */
long BgL_n1z00_1484;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2445;
if(
INTEGERP(BgL_index1885z00_870))
{ /* Llib/socket.scm 279 */
BgL_auxz00_2445 = BgL_index1885z00_870
; }  else 
{ 
obj_t BgL_auxz00_2448;
BgL_auxz00_2448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1885z00_870); 
FAILURE(BgL_auxz00_2448,BFALSE,BFALSE);} 
BgL_n1z00_1484 = 
(long)CINT(BgL_auxz00_2445); } 
BgL_testz00_2444 = 
(BgL_n1z00_1484>=((long)0)); } 
if(BgL_testz00_2444)
{ 
int BgL_auxz00_2454;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2455;
{ /* Llib/socket.scm 279 */
bool_t BgL_test2409z00_1898;
BgL_test2409z00_1898 = 
INTEGERP(BgL_index1885z00_870); 
if(BgL_test2409z00_1898)
{ /* Llib/socket.scm 279 */
BgL_auxz00_2455 = BgL_index1885z00_870
; }  else 
{ 
obj_t BgL_auxz00_2458;
BgL_auxz00_2458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1885z00_870); 
FAILURE(BgL_auxz00_2458,BFALSE,BFALSE);} } 
BgL_auxz00_2454 = 
CINT(BgL_auxz00_2455); } 
BgL_inbufz00_856 = 
VECTOR_REF(BgL_opt1879z00_24,BgL_auxz00_2454); }  else 
{ /* Llib/socket.scm 279 */BFALSE; } } } 
{ /* Llib/socket.scm 279 */
obj_t BgL_index1886z00_872;
BgL_index1886z00_872 = 
BGl_search1881z00zz__socketz00(BgL_l1880z00_850, BgL_opt1879z00_24, BGl_keyword2478z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 279 */
bool_t BgL_testz00_2465;
{ /* Llib/socket.scm 279 */
long BgL_n1z00_1486;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2466;
if(
INTEGERP(BgL_index1886z00_872))
{ /* Llib/socket.scm 279 */
BgL_auxz00_2466 = BgL_index1886z00_872
; }  else 
{ 
obj_t BgL_auxz00_2469;
BgL_auxz00_2469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1886z00_872); 
FAILURE(BgL_auxz00_2469,BFALSE,BFALSE);} 
BgL_n1z00_1486 = 
(long)CINT(BgL_auxz00_2466); } 
BgL_testz00_2465 = 
(BgL_n1z00_1486>=((long)0)); } 
if(BgL_testz00_2465)
{ 
int BgL_auxz00_2475;
{ /* Llib/socket.scm 279 */
obj_t BgL_auxz00_2476;
{ /* Llib/socket.scm 279 */
bool_t BgL_test2413z00_1902;
BgL_test2413z00_1902 = 
INTEGERP(BgL_index1886z00_872); 
if(BgL_test2413z00_1902)
{ /* Llib/socket.scm 279 */
BgL_auxz00_2476 = BgL_index1886z00_872
; }  else 
{ 
obj_t BgL_auxz00_2479;
BgL_auxz00_2479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1886z00_872); 
FAILURE(BgL_auxz00_2479,BFALSE,BFALSE);} } 
BgL_auxz00_2475 = 
CINT(BgL_auxz00_2476); } 
BgL_outbufz00_857 = 
VECTOR_REF(BgL_opt1879z00_24,BgL_auxz00_2475); }  else 
{ /* Llib/socket.scm 279 */BFALSE; } } } 
{ /* Llib/socket.scm 279 */
obj_t BgL_arg1975z00_874;
BgL_arg1975z00_874 = 
VECTOR_REF(BgL_opt1879z00_24,
(int)(((long)0))); 
{ /* Llib/socket.scm 279 */
obj_t BgL_errpz00_875;
BgL_errpz00_875 = BgL_errpz00_855; 
{ /* Llib/socket.scm 279 */
obj_t BgL_inbufz00_876;
BgL_inbufz00_876 = BgL_inbufz00_856; 
{ /* Llib/socket.scm 279 */
obj_t BgL_outbufz00_877;
BgL_outbufz00_877 = BgL_outbufz00_857; 
{ /* Llib/socket.scm 279 */
obj_t BgL_socketz00_1488;
if(
SOCKETP(BgL_arg1975z00_874))
{ /* Llib/socket.scm 279 */
BgL_socketz00_1488 = BgL_arg1975z00_874; }  else 
{ 
obj_t BgL_auxz00_2489;
BgL_auxz00_2489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)11982)), BGl_string2510z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_arg1975z00_874); 
FAILURE(BgL_auxz00_2489,BFALSE,BFALSE);} 
return 
bgl_socket_accept(BgL_socketz00_1488, 
CBOOL(BgL_errpz00_875), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2508z00zz__socketz00, BgL_inbufz00_876, 
(int)(((long)512))), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2508z00zz__socketz00, BgL_outbufz00_877, 
(int)(((long)1024))));} } } } } } } } } } } } 
}



/* search1881 */
obj_t BGl_search1881z00zz__socketz00(int BgL_l1880z00_1800, obj_t BgL_opt1879z00_1799, obj_t BgL_k1z00_851, long BgL_iz00_852)
{ AN_OBJECT;
{ /* Llib/socket.scm 279 */
BGl_search1881z00zz__socketz00:
if(
(BgL_iz00_852==
(long)(BgL_l1880z00_1800)))
{ /* Llib/socket.scm 279 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 279 */
if(
(BgL_iz00_852==
(
(long)(BgL_l1880z00_1800)-((long)1))))
{ /* Llib/socket.scm 279 */
obj_t BgL_arg1979z00_880;int BgL_arg1981z00_882;
BgL_arg1979z00_880 = BGl_symbol2508z00zz__socketz00; 
BgL_arg1981z00_882 = 
VECTOR_LENGTH(BgL_opt1879z00_1799); 
return 
BGl_errorz00zz__errorz00(BgL_arg1979z00_880, BGl_string2511z00zz__socketz00, 
BINT(BgL_arg1981z00_882));}  else 
{ /* Llib/socket.scm 279 */
obj_t BgL_vz00_883;
BgL_vz00_883 = 
VECTOR_REF(BgL_opt1879z00_1799,
(int)(BgL_iz00_852)); 
if(
(BgL_vz00_883==BgL_k1z00_851))
{ /* Llib/socket.scm 279 */
return 
BINT(
(BgL_iz00_852+((long)1)));}  else 
{ 
long BgL_iz00_2516;
BgL_iz00_2516 = 
(BgL_iz00_852+((long)2)); 
BgL_iz00_852 = BgL_iz00_2516; 
goto BGl_search1881z00zz__socketz00;} } } } 
}



/* socket-accept */
BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t BgL_socketz00_20, obj_t BgL_errpz00_21, obj_t BgL_inbufz00_22, obj_t BgL_outbufz00_23)
{ AN_OBJECT;
{ /* Llib/socket.scm 279 */
return 
bgl_socket_accept(BgL_socketz00_20, 
CBOOL(BgL_errpz00_21), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2508z00zz__socketz00, BgL_inbufz00_22, 
(int)(((long)512))), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2508z00zz__socketz00, BgL_outbufz00_23, 
(int)(((long)1024))));} 
}



/* _socket-accept-many */
obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_envz00_32, obj_t BgL_opt1888z00_31)
{ AN_OBJECT;
{ /* Llib/socket.scm 290 */
{ /* Llib/socket.scm 290 */
int BgL_l1889z00_889;
BgL_l1889z00_889 = 
VECTOR_LENGTH(BgL_opt1888z00_31); 
{ /* Llib/socket.scm 290 */
obj_t BgL_g1896z00_893;obj_t BgL_g1897z00_894;
BgL_g1896z00_893 = 
VECTOR_REF(BgL_opt1888z00_31,
(int)(((long)0))); 
BgL_g1897z00_894 = 
VECTOR_REF(BgL_opt1888z00_31,
(int)(((long)1))); 
{ /* Llib/socket.scm 290 */
obj_t BgL_errpz00_895;
BgL_errpz00_895 = BTRUE; 
{ /* Llib/socket.scm 290 */
obj_t BgL_inbufsz00_896;
BgL_inbufsz00_896 = BTRUE; 
{ /* Llib/socket.scm 290 */
obj_t BgL_outbufsz00_897;
BgL_outbufsz00_897 = BTRUE; 
{ /* Llib/socket.scm 290 */

{ 
long BgL_iz00_898;
BgL_iz00_898 = ((long)2); 
BgL_check1891z00_899:
if(
(BgL_iz00_898==
(long)(BgL_l1889z00_889)))
{ /* Llib/socket.scm 290 */BNIL; }  else 
{ /* Llib/socket.scm 290 */
bool_t BgL_testz00_2532;
{ /* Llib/socket.scm 290 */
obj_t BgL_arg1991z00_906;obj_t BgL_arg1992z00_907;
{ /* Llib/socket.scm 290 */
int BgL_kz00_1510;
BgL_kz00_1510 = 
(int)(BgL_iz00_898); 
{ /* Llib/socket.scm 290 */
int BgL_l2332z00_1821;
BgL_l2332z00_1821 = 
VECTOR_LENGTH(BgL_opt1888z00_31); 
if(
BOUND_CHECK(BgL_kz00_1510, BgL_l2332z00_1821))
{ /* Llib/socket.scm 290 */
BgL_arg1991z00_906 = 
VECTOR_REF(BgL_opt1888z00_31,BgL_kz00_1510); }  else 
{ 
obj_t BgL_auxz00_2538;
BgL_auxz00_2538 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1510), BgL_opt1888z00_31); 
FAILURE(BgL_auxz00_2538,BFALSE,BFALSE);} } } 
BgL_arg1992z00_907 = BGl_list2512z00zz__socketz00; 
BgL_testz00_2532 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1991z00_906, BgL_arg1992z00_907)); } 
if(BgL_testz00_2532)
{ 
long BgL_iz00_2545;
BgL_iz00_2545 = 
(BgL_iz00_898+((long)2)); 
BgL_iz00_898 = BgL_iz00_2545; 
goto BgL_check1891z00_899;}  else 
{ /* Llib/socket.scm 290 */
obj_t BgL_arg1988z00_903;obj_t BgL_arg1990z00_905;
BgL_arg1988z00_903 = BGl_symbol2517z00zz__socketz00; 
{ /* Llib/socket.scm 290 */
int BgL_kz00_1514;
BgL_kz00_1514 = 
(int)(BgL_iz00_898); 
{ /* Llib/socket.scm 290 */
int BgL_l2336z00_1825;
BgL_l2336z00_1825 = 
VECTOR_LENGTH(BgL_opt1888z00_31); 
if(
BOUND_CHECK(BgL_kz00_1514, BgL_l2336z00_1825))
{ /* Llib/socket.scm 290 */
BgL_arg1990z00_905 = 
VECTOR_REF(BgL_opt1888z00_31,BgL_kz00_1514); }  else 
{ 
obj_t BgL_auxz00_2552;
BgL_auxz00_2552 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1514), BgL_opt1888z00_31); 
FAILURE(BgL_auxz00_2552,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg1988z00_903, BGl_string2484z00zz__socketz00, BgL_arg1990z00_905); } } } 
{ /* Llib/socket.scm 290 */
obj_t BgL_index1893z00_908;
BgL_index1893z00_908 = 
BGl_search1890z00zz__socketz00(BgL_l1889z00_889, BgL_opt1888z00_31, BGl_keyword2506z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 290 */
bool_t BgL_testz00_2559;
{ /* Llib/socket.scm 290 */
long BgL_n1z00_1515;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2560;
if(
INTEGERP(BgL_index1893z00_908))
{ /* Llib/socket.scm 290 */
BgL_auxz00_2560 = BgL_index1893z00_908
; }  else 
{ 
obj_t BgL_auxz00_2563;
BgL_auxz00_2563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1893z00_908); 
FAILURE(BgL_auxz00_2563,BFALSE,BFALSE);} 
BgL_n1z00_1515 = 
(long)CINT(BgL_auxz00_2560); } 
BgL_testz00_2559 = 
(BgL_n1z00_1515>=((long)0)); } 
if(BgL_testz00_2559)
{ 
int BgL_auxz00_2569;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2570;
{ /* Llib/socket.scm 290 */
bool_t BgL_test2419z00_1908;
BgL_test2419z00_1908 = 
INTEGERP(BgL_index1893z00_908); 
if(BgL_test2419z00_1908)
{ /* Llib/socket.scm 290 */
BgL_auxz00_2570 = BgL_index1893z00_908
; }  else 
{ 
obj_t BgL_auxz00_2573;
BgL_auxz00_2573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1893z00_908); 
FAILURE(BgL_auxz00_2573,BFALSE,BFALSE);} } 
BgL_auxz00_2569 = 
CINT(BgL_auxz00_2570); } 
BgL_errpz00_895 = 
VECTOR_REF(BgL_opt1888z00_31,BgL_auxz00_2569); }  else 
{ /* Llib/socket.scm 290 */BFALSE; } } } 
{ /* Llib/socket.scm 290 */
obj_t BgL_index1894z00_910;
BgL_index1894z00_910 = 
BGl_search1890z00zz__socketz00(BgL_l1889z00_889, BgL_opt1888z00_31, BGl_keyword2513z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 290 */
bool_t BgL_testz00_2580;
{ /* Llib/socket.scm 290 */
long BgL_n1z00_1517;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2581;
if(
INTEGERP(BgL_index1894z00_910))
{ /* Llib/socket.scm 290 */
BgL_auxz00_2581 = BgL_index1894z00_910
; }  else 
{ 
obj_t BgL_auxz00_2584;
BgL_auxz00_2584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1894z00_910); 
FAILURE(BgL_auxz00_2584,BFALSE,BFALSE);} 
BgL_n1z00_1517 = 
(long)CINT(BgL_auxz00_2581); } 
BgL_testz00_2580 = 
(BgL_n1z00_1517>=((long)0)); } 
if(BgL_testz00_2580)
{ 
int BgL_auxz00_2590;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2591;
{ /* Llib/socket.scm 290 */
bool_t BgL_test2423z00_1912;
BgL_test2423z00_1912 = 
INTEGERP(BgL_index1894z00_910); 
if(BgL_test2423z00_1912)
{ /* Llib/socket.scm 290 */
BgL_auxz00_2591 = BgL_index1894z00_910
; }  else 
{ 
obj_t BgL_auxz00_2594;
BgL_auxz00_2594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1894z00_910); 
FAILURE(BgL_auxz00_2594,BFALSE,BFALSE);} } 
BgL_auxz00_2590 = 
CINT(BgL_auxz00_2591); } 
BgL_inbufsz00_896 = 
VECTOR_REF(BgL_opt1888z00_31,BgL_auxz00_2590); }  else 
{ /* Llib/socket.scm 290 */BFALSE; } } } 
{ /* Llib/socket.scm 290 */
obj_t BgL_index1895z00_912;
BgL_index1895z00_912 = 
BGl_search1890z00zz__socketz00(BgL_l1889z00_889, BgL_opt1888z00_31, BGl_keyword2515z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 290 */
bool_t BgL_testz00_2601;
{ /* Llib/socket.scm 290 */
long BgL_n1z00_1519;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2602;
if(
INTEGERP(BgL_index1895z00_912))
{ /* Llib/socket.scm 290 */
BgL_auxz00_2602 = BgL_index1895z00_912
; }  else 
{ 
obj_t BgL_auxz00_2605;
BgL_auxz00_2605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_index1895z00_912); 
FAILURE(BgL_auxz00_2605,BFALSE,BFALSE);} 
BgL_n1z00_1519 = 
(long)CINT(BgL_auxz00_2602); } 
BgL_testz00_2601 = 
(BgL_n1z00_1519>=((long)0)); } 
if(BgL_testz00_2601)
{ 
int BgL_auxz00_2611;
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2612;
{ /* Llib/socket.scm 290 */
bool_t BgL_test2427z00_1916;
BgL_test2427z00_1916 = 
INTEGERP(BgL_index1895z00_912); 
if(BgL_test2427z00_1916)
{ /* Llib/socket.scm 290 */
BgL_auxz00_2612 = BgL_index1895z00_912
; }  else 
{ 
obj_t BgL_auxz00_2615;
BgL_auxz00_2615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2487z00zz__socketz00, BgL_index1895z00_912); 
FAILURE(BgL_auxz00_2615,BFALSE,BFALSE);} } 
BgL_auxz00_2611 = 
CINT(BgL_auxz00_2612); } 
BgL_outbufsz00_897 = 
VECTOR_REF(BgL_opt1888z00_31,BgL_auxz00_2611); }  else 
{ /* Llib/socket.scm 290 */BFALSE; } } } 
{ /* Llib/socket.scm 290 */
obj_t BgL_arg1996z00_914;obj_t BgL_arg1998z00_915;
BgL_arg1996z00_914 = 
VECTOR_REF(BgL_opt1888z00_31,
(int)(((long)0))); 
BgL_arg1998z00_915 = 
VECTOR_REF(BgL_opt1888z00_31,
(int)(((long)1))); 
{ /* Llib/socket.scm 290 */
obj_t BgL_errpz00_916;
BgL_errpz00_916 = BgL_errpz00_895; 
{ /* Llib/socket.scm 290 */
obj_t BgL_inbufsz00_917;
BgL_inbufsz00_917 = BgL_inbufsz00_896; 
{ /* Llib/socket.scm 290 */
obj_t BgL_outbufsz00_918;
BgL_outbufsz00_918 = BgL_outbufsz00_897; 
{ /* Llib/socket.scm 290 */
obj_t BgL_auxz00_2632;obj_t BgL_auxz00_2625;
if(
VECTORP(BgL_arg1998z00_915))
{ /* Llib/socket.scm 290 */
BgL_auxz00_2632 = BgL_arg1998z00_915
; }  else 
{ 
obj_t BgL_auxz00_2635;
BgL_auxz00_2635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2520z00zz__socketz00, BgL_arg1998z00_915); 
FAILURE(BgL_auxz00_2635,BFALSE,BFALSE);} 
if(
SOCKETP(BgL_arg1996z00_914))
{ /* Llib/socket.scm 290 */
BgL_auxz00_2625 = BgL_arg1996z00_914
; }  else 
{ 
obj_t BgL_auxz00_2628;
BgL_auxz00_2628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12672)), BGl_string2519z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_arg1996z00_914); 
FAILURE(BgL_auxz00_2628,BFALSE,BFALSE);} 
return 
BGl_socketzd2acceptzd2manyz00zz__socketz00(BgL_auxz00_2625, BgL_auxz00_2632, BgL_errpz00_916, BgL_inbufsz00_917, BgL_outbufsz00_918);} } } } } } } } } } } } 
}



/* search1890 */
obj_t BGl_search1890z00zz__socketz00(int BgL_l1889z00_1798, obj_t BgL_opt1888z00_1797, obj_t BgL_k1z00_890, long BgL_iz00_891)
{ AN_OBJECT;
{ /* Llib/socket.scm 290 */
BGl_search1890z00zz__socketz00:
if(
(BgL_iz00_891==
(long)(BgL_l1889z00_1798)))
{ /* Llib/socket.scm 290 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 290 */
if(
(BgL_iz00_891==
(
(long)(BgL_l1889z00_1798)-((long)1))))
{ /* Llib/socket.scm 290 */
obj_t BgL_arg2001z00_921;int BgL_arg2003z00_923;
BgL_arg2001z00_921 = BGl_symbol2517z00zz__socketz00; 
BgL_arg2003z00_923 = 
VECTOR_LENGTH(BgL_opt1888z00_1797); 
return 
BGl_errorz00zz__errorz00(BgL_arg2001z00_921, BGl_string2521z00zz__socketz00, 
BINT(BgL_arg2003z00_923));}  else 
{ /* Llib/socket.scm 290 */
obj_t BgL_vz00_924;
BgL_vz00_924 = 
VECTOR_REF(BgL_opt1888z00_1797,
(int)(BgL_iz00_891)); 
if(
(BgL_vz00_924==BgL_k1z00_890))
{ /* Llib/socket.scm 290 */
return 
BINT(
(BgL_iz00_891+((long)1)));}  else 
{ 
long BgL_iz00_2657;
BgL_iz00_2657 = 
(BgL_iz00_891+((long)2)); 
BgL_iz00_891 = BgL_iz00_2657; 
goto BGl_search1890z00zz__socketz00;} } } } 
}



/* socket-accept-many */
BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_socketz00_26, obj_t BgL_resultz00_27, obj_t BgL_errpz00_28, obj_t BgL_inbufsz00_29, obj_t BgL_outbufsz00_30)
{ AN_OBJECT;
{ /* Llib/socket.scm 290 */
if(
VECTORP(BgL_inbufsz00_29))
{ /* Llib/socket.scm 291 */((bool_t)0); }  else 
{ /* Llib/socket.scm 291 */
{ /* Llib/socket.scm 292 */
int BgL_arg2008z00_929;
BgL_arg2008z00_929 = 
VECTOR_LENGTH(BgL_resultz00_27); 
BgL_inbufsz00_29 = 
make_vector(BgL_arg2008z00_929, BUNSPEC); } 
{ 
long BgL_iz00_932;
BgL_iz00_932 = ((long)0); 
BgL_zc3anonymousza32010ze3z83_933:
{ /* Llib/socket.scm 294 */
bool_t BgL_testz00_2663;
{ /* Llib/socket.scm 294 */
int BgL_arg2013z00_937;
BgL_arg2013z00_937 = 
VECTOR_LENGTH(BgL_resultz00_27); 
BgL_testz00_2663 = 
(BgL_iz00_932<
(long)(BgL_arg2013z00_937)); } 
if(BgL_testz00_2663)
{ /* Llib/socket.scm 295 */
obj_t BgL_bufz00_935;
BgL_bufz00_935 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2517z00zz__socketz00, BTRUE, 
(int)(((long)512))); 
{ /* Llib/socket.scm 296 */
obj_t BgL_vectorz00_1537;int BgL_kz00_1538;
{ /* Llib/socket.scm 296 */
obj_t BgL_aux2432z00_1922;
BgL_aux2432z00_1922 = BgL_inbufsz00_29; 
if(
VECTORP(BgL_aux2432z00_1922))
{ /* Llib/socket.scm 296 */
BgL_vectorz00_1537 = BgL_aux2432z00_1922; }  else 
{ 
obj_t BgL_auxz00_2671;
BgL_auxz00_2671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12996)), BGl_string2522z00zz__socketz00, BGl_string2520z00zz__socketz00, BgL_aux2432z00_1922); 
FAILURE(BgL_auxz00_2671,BFALSE,BFALSE);} } 
BgL_kz00_1538 = 
(int)(BgL_iz00_932); 
{ /* Llib/socket.scm 296 */
int BgL_l2340z00_1829;
BgL_l2340z00_1829 = 
VECTOR_LENGTH(BgL_vectorz00_1537); 
if(
BOUND_CHECK(BgL_kz00_1538, BgL_l2340z00_1829))
{ /* Llib/socket.scm 296 */
VECTOR_SET(BgL_vectorz00_1537,BgL_kz00_1538,BgL_bufz00_935); }  else 
{ 
obj_t BgL_auxz00_2680;
BgL_auxz00_2680 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)12983)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1538), BgL_vectorz00_1537); 
FAILURE(BgL_auxz00_2680,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_2685;
BgL_iz00_2685 = 
(BgL_iz00_932+((long)1)); 
BgL_iz00_932 = BgL_iz00_2685; 
goto BgL_zc3anonymousza32010ze3z83_933;} }  else 
{ /* Llib/socket.scm 294 */((bool_t)0); } } } } 
if(
VECTORP(BgL_outbufsz00_30))
{ /* Llib/socket.scm 298 */((bool_t)0); }  else 
{ /* Llib/socket.scm 298 */
{ /* Llib/socket.scm 299 */
int BgL_arg2015z00_940;
BgL_arg2015z00_940 = 
VECTOR_LENGTH(BgL_resultz00_27); 
BgL_outbufsz00_30 = 
make_vector(BgL_arg2015z00_940, BUNSPEC); } 
{ 
long BgL_iz00_943;
BgL_iz00_943 = ((long)0); 
BgL_zc3anonymousza32017ze3z83_944:
{ /* Llib/socket.scm 301 */
bool_t BgL_testz00_2691;
{ /* Llib/socket.scm 301 */
int BgL_arg2021z00_948;
BgL_arg2021z00_948 = 
VECTOR_LENGTH(BgL_resultz00_27); 
BgL_testz00_2691 = 
(BgL_iz00_943<
(long)(BgL_arg2021z00_948)); } 
if(BgL_testz00_2691)
{ /* Llib/socket.scm 302 */
obj_t BgL_bufz00_946;
BgL_bufz00_946 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol2517z00zz__socketz00, BTRUE, 
(int)(((long)512))); 
{ /* Llib/socket.scm 303 */
obj_t BgL_vectorz00_1548;int BgL_kz00_1549;
{ /* Llib/socket.scm 303 */
obj_t BgL_aux2434z00_1925;
BgL_aux2434z00_1925 = BgL_outbufsz00_30; 
if(
VECTORP(BgL_aux2434z00_1925))
{ /* Llib/socket.scm 303 */
BgL_vectorz00_1548 = BgL_aux2434z00_1925; }  else 
{ 
obj_t BgL_auxz00_2699;
BgL_auxz00_2699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13273)), BGl_string2522z00zz__socketz00, BGl_string2520z00zz__socketz00, BgL_aux2434z00_1925); 
FAILURE(BgL_auxz00_2699,BFALSE,BFALSE);} } 
BgL_kz00_1549 = 
(int)(BgL_iz00_943); 
{ /* Llib/socket.scm 303 */
int BgL_l2344z00_1833;
BgL_l2344z00_1833 = 
VECTOR_LENGTH(BgL_vectorz00_1548); 
if(
BOUND_CHECK(BgL_kz00_1549, BgL_l2344z00_1833))
{ /* Llib/socket.scm 303 */
VECTOR_SET(BgL_vectorz00_1548,BgL_kz00_1549,BgL_bufz00_946); }  else 
{ 
obj_t BgL_auxz00_2708;
BgL_auxz00_2708 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13260)), BGl_string2472z00zz__socketz00, 
BINT(BgL_kz00_1549), BgL_vectorz00_1548); 
FAILURE(BgL_auxz00_2708,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_2713;
BgL_iz00_2713 = 
(BgL_iz00_943+((long)1)); 
BgL_iz00_943 = BgL_iz00_2713; 
goto BgL_zc3anonymousza32017ze3z83_944;} }  else 
{ /* Llib/socket.scm 301 */((bool_t)0); } } } } 
{ /* Llib/socket.scm 307 */
long BgL_auxz00_2715;
{ /* Llib/socket.scm 307 */
obj_t BgL_auxz00_2724;obj_t BgL_auxz00_2716;
{ /* Llib/socket.scm 307 */
obj_t BgL_aux2438z00_1929;
BgL_aux2438z00_1929 = BgL_outbufsz00_30; 
if(
VECTORP(BgL_aux2438z00_1929))
{ /* Llib/socket.scm 307 */
BgL_auxz00_2724 = BgL_aux2438z00_1929
; }  else 
{ 
obj_t BgL_auxz00_2727;
BgL_auxz00_2727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13396)), BGl_string2518z00zz__socketz00, BGl_string2520z00zz__socketz00, BgL_aux2438z00_1929); 
FAILURE(BgL_auxz00_2727,BFALSE,BFALSE);} } 
{ /* Llib/socket.scm 307 */
obj_t BgL_aux2436z00_1927;
BgL_aux2436z00_1927 = BgL_inbufsz00_29; 
if(
VECTORP(BgL_aux2436z00_1927))
{ /* Llib/socket.scm 307 */
BgL_auxz00_2716 = BgL_aux2436z00_1927
; }  else 
{ 
obj_t BgL_auxz00_2720;
BgL_auxz00_2720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13389)), BGl_string2518z00zz__socketz00, BGl_string2520z00zz__socketz00, BgL_aux2436z00_1927); 
FAILURE(BgL_auxz00_2720,BFALSE,BFALSE);} } 
BgL_auxz00_2715 = 
bgl_socket_accept_many(BgL_socketz00_26, 
CBOOL(BgL_errpz00_28), BgL_auxz00_2716, BgL_auxz00_2724, BgL_resultz00_27); } 
return 
BINT(BgL_auxz00_2715);} } 
}



/* _socket-shutdown */
obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t BgL_envz00_36, obj_t BgL_optz00_35)
{ AN_OBJECT;
{ /* Llib/socket.scm 318 */
{ /* Llib/socket.scm 318 */
obj_t BgL_g1898z00_1961;
BgL_g1898z00_1961 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ 

{ /* Llib/socket.scm 318 */
int BgL_aux1900z00_1965;
BgL_aux1900z00_1965 = 
VECTOR_LENGTH(BgL_optz00_35); 
switch( 
(long)(BgL_aux1900z00_1965)) { case ((long)1) : 

{ /* Llib/socket.scm 318 */

{ /* Llib/socket.scm 318 */
obj_t BgL_arg2023z00_1966;
BgL_arg2023z00_1966 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ /* Llib/socket.scm 318 */
obj_t BgL_socketz00_1967;
if(
SOCKETP(BgL_arg2023z00_1966))
{ /* Llib/socket.scm 318 */
BgL_socketz00_1967 = BgL_arg2023z00_1966; }  else 
{ 
obj_t BgL_auxz00_2740;
BgL_auxz00_2740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13804)), BGl_string2526z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_arg2023z00_1966); 
FAILURE(BgL_auxz00_2740,BFALSE,BFALSE);} 
return 
socket_shutdown(BgL_socketz00_1967, 
CBOOL(BTRUE));} } } break;case ((long)2) : 

{ /* Llib/socket.scm 318 */
obj_t BgL_closez00_1969;
BgL_closez00_1969 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)1))); 
{ /* Llib/socket.scm 318 */

{ /* Llib/socket.scm 318 */
obj_t BgL_arg2024z00_1970;
BgL_arg2024z00_1970 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ /* Llib/socket.scm 318 */
obj_t BgL_socketz00_1971;
if(
SOCKETP(BgL_arg2024z00_1970))
{ /* Llib/socket.scm 318 */
BgL_socketz00_1971 = BgL_arg2024z00_1970; }  else 
{ 
obj_t BgL_auxz00_2752;
BgL_auxz00_2752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)13804)), BGl_string2526z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_arg2024z00_1970); 
FAILURE(BgL_auxz00_2752,BFALSE,BFALSE);} 
return 
socket_shutdown(BgL_socketz00_1971, 
CBOOL(BgL_closez00_1969));} } } } break;
default: 
{ /* Llib/socket.scm 318 */
obj_t BgL_arg2025z00_1963;int BgL_arg2028z00_1964;
BgL_arg2025z00_1963 = BGl_symbol2523z00zz__socketz00; 
BgL_arg2028z00_1964 = 
VECTOR_LENGTH(BgL_optz00_35); 
return 
BGl_errorz00zz__errorz00(BgL_arg2025z00_1963, BGl_string2525z00zz__socketz00, 
BINT(BgL_arg2028z00_1964));} } } } } } 
}



/* socket-shutdown */
BGL_EXPORTED_DEF obj_t BGl_socketzd2shutdownzd2zz__socketz00(obj_t BgL_socketz00_33, obj_t BgL_closez00_34)
{ AN_OBJECT;
{ /* Llib/socket.scm 318 */
return 
socket_shutdown(BgL_socketz00_33, 
CBOOL(BgL_closez00_34));} 
}



/* socket-close */
BGL_EXPORTED_DEF obj_t BGl_socketzd2closezd2zz__socketz00(obj_t BgL_socketz00_37)
{ AN_OBJECT;
{ /* Llib/socket.scm 324 */
return 
socket_close(BgL_socketz00_37);} 
}



/* _socket-close */
obj_t BGl__socketzd2closezd2zz__socketz00(obj_t BgL_envz00_1780, obj_t BgL_socketz00_1781)
{ AN_OBJECT;
{ /* Llib/socket.scm 324 */
{ /* Llib/socket.scm 325 */
obj_t BgL_socketz00_1972;
if(
SOCKETP(BgL_socketz00_1781))
{ /* Llib/socket.scm 325 */
BgL_socketz00_1972 = BgL_socketz00_1781; }  else 
{ 
obj_t BgL_auxz00_2768;
BgL_auxz00_2768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)14182)), BGl_string2527z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1781); 
FAILURE(BgL_auxz00_2768,BFALSE,BFALSE);} 
return 
socket_close(BgL_socketz00_1972);} } 
}



/* host */
BGL_EXPORTED_DEF obj_t BGl_hostz00zz__socketz00(obj_t BgL_hostnamez00_38)
{ AN_OBJECT;
{ /* Llib/socket.scm 330 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_host(BgL_hostnamez00_38);} 
}



/* _host */
obj_t BGl__hostz00zz__socketz00(obj_t BgL_envz00_1782, obj_t BgL_hostnamez00_1783)
{ AN_OBJECT;
{ /* Llib/socket.scm 330 */
{ /* Llib/socket.scm 333 */
obj_t BgL_res2535z00_1974;
{ /* Llib/socket.scm 333 */
obj_t BgL_hostnamez00_1973;
if(
STRINGP(BgL_hostnamez00_1783))
{ /* Llib/socket.scm 333 */
BgL_hostnamez00_1973 = BgL_hostnamez00_1783; }  else 
{ 
obj_t BgL_auxz00_2777;
BgL_auxz00_2777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)14515)), BGl_string2528z00zz__socketz00, BGl_string2488z00zz__socketz00, BgL_hostnamez00_1783); 
FAILURE(BgL_auxz00_2777,BFALSE,BFALSE);} 
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res2535z00_1974 = 
bgl_host(BgL_hostnamez00_1973); } 
return BgL_res2535z00_1974;} } 
}



/* hostinfo */
BGL_EXPORTED_DEF obj_t BGl_hostinfoz00zz__socketz00(obj_t BgL_hostnamez00_39)
{ AN_OBJECT;
{ /* Llib/socket.scm 338 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_hostinfo(BgL_hostnamez00_39);} 
}



/* _hostinfo */
obj_t BGl__hostinfoz00zz__socketz00(obj_t BgL_envz00_1784, obj_t BgL_hostnamez00_1785)
{ AN_OBJECT;
{ /* Llib/socket.scm 338 */
{ /* Llib/socket.scm 341 */
obj_t BgL_res2536z00_1976;
{ /* Llib/socket.scm 341 */
obj_t BgL_hostnamez00_1975;
if(
STRINGP(BgL_hostnamez00_1785))
{ /* Llib/socket.scm 341 */
BgL_hostnamez00_1975 = BgL_hostnamez00_1785; }  else 
{ 
obj_t BgL_auxz00_2787;
BgL_auxz00_2787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)14834)), BGl_string2529z00zz__socketz00, BGl_string2488z00zz__socketz00, BgL_hostnamez00_1785); 
FAILURE(BgL_auxz00_2787,BFALSE,BFALSE);} 
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res2536z00_1976 = 
bgl_hostinfo(BgL_hostnamez00_1975); } 
return BgL_res2536z00_1976;} } 
}



/* hostname */
BGL_EXPORTED_DEF obj_t BGl_hostnamez00zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 346 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_gethostname();} 
}



/* _hostname */
obj_t BGl__hostnamez00zz__socketz00(obj_t BgL_envz00_1786)
{ AN_OBJECT;
{ /* Llib/socket.scm 346 */
{ /* Llib/socket.scm 349 */
obj_t BgL_res2537z00_1977;
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res2537z00_1977 = 
bgl_gethostname(); 
return BgL_res2537z00_1977;} } 
}



/* get-protocols */
BGL_EXPORTED_DEF obj_t BGl_getzd2protocolszd2zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 354 */
return 
bgl_getprotoents();} 
}



/* _get-protocols */
obj_t BGl__getzd2protocolszd2zz__socketz00(obj_t BgL_envz00_1787)
{ AN_OBJECT;
{ /* Llib/socket.scm 354 */
return 
bgl_getprotoents();} 
}



/* get-protocol */
BGL_EXPORTED_DEF obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t BgL_protocolz00_40)
{ AN_OBJECT;
{ /* Llib/socket.scm 360 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_protocolz00_40))
{ /* Llib/socket.scm 363 */
long BgL_auxz00_2801;
{ /* Llib/socket.scm 363 */
obj_t BgL_auxz00_2802;
if(
INTEGERP(BgL_protocolz00_40))
{ /* Llib/socket.scm 363 */
BgL_auxz00_2802 = BgL_protocolz00_40
; }  else 
{ 
obj_t BgL_auxz00_2805;
BgL_auxz00_2805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)15733)), BGl_string2530z00zz__socketz00, BGl_string2486z00zz__socketz00, BgL_protocolz00_40); 
FAILURE(BgL_auxz00_2805,BFALSE,BFALSE);} 
BgL_auxz00_2801 = 
(long)CINT(BgL_auxz00_2802); } 
return 
bgl_getprotobynumber(BgL_auxz00_2801);}  else 
{ /* Llib/socket.scm 362 */
if(
STRINGP(BgL_protocolz00_40))
{ /* Llib/socket.scm 364 */
return 
bgl_getprotobyname(
BSTRING_TO_STRING(BgL_protocolz00_40));}  else 
{ /* Llib/socket.scm 364 */
return BFALSE;} } } 
}



/* _get-protocol */
obj_t BGl__getzd2protocolzd2zz__socketz00(obj_t BgL_envz00_1788, obj_t BgL_protocolz00_1789)
{ AN_OBJECT;
{ /* Llib/socket.scm 360 */
return 
BGl_getzd2protocolzd2zz__socketz00(BgL_protocolz00_1789);} 
}



/* socket-option */
BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t BgL_socketz00_41, obj_t BgL_optionz00_42)
{ AN_OBJECT;
{ /* Llib/socket.scm 372 */
return 
bgl_getsockopt(BgL_socketz00_41, BgL_optionz00_42);} 
}



/* _socket-option */
obj_t BGl__socketzd2optionzd2zz__socketz00(obj_t BgL_envz00_1790, obj_t BgL_socketz00_1791, obj_t BgL_optionz00_1792)
{ AN_OBJECT;
{ /* Llib/socket.scm 372 */
{ /* Llib/socket.scm 373 */
obj_t BgL_socketz00_1978;obj_t BgL_optionz00_1979;
if(
SOCKETP(BgL_socketz00_1791))
{ /* Llib/socket.scm 373 */
BgL_socketz00_1978 = BgL_socketz00_1791; }  else 
{ 
obj_t BgL_auxz00_2819;
BgL_auxz00_2819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)16101)), BGl_string2531z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1791); 
FAILURE(BgL_auxz00_2819,BFALSE,BFALSE);} 
if(
KEYWORDP(BgL_optionz00_1792))
{ /* Llib/socket.scm 373 */
BgL_optionz00_1979 = BgL_optionz00_1792; }  else 
{ 
obj_t BgL_auxz00_2825;
BgL_auxz00_2825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)16101)), BGl_string2531z00zz__socketz00, BGl_string2532z00zz__socketz00, BgL_optionz00_1792); 
FAILURE(BgL_auxz00_2825,BFALSE,BFALSE);} 
return 
bgl_getsockopt(BgL_socketz00_1978, BgL_optionz00_1979);} } 
}



/* socket-option-set! */
BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t BgL_socketz00_43, obj_t BgL_optionz00_44, obj_t BgL_valz00_45)
{ AN_OBJECT;
{ /* Llib/socket.scm 378 */
return 
bgl_setsockopt(BgL_socketz00_43, BgL_optionz00_44, BgL_valz00_45);} 
}



/* _socket-option-set! */
obj_t BGl__socketzd2optionzd2setz12z12zz__socketz00(obj_t BgL_envz00_1793, obj_t BgL_socketz00_1794, obj_t BgL_optionz00_1795, obj_t BgL_valz00_1796)
{ AN_OBJECT;
{ /* Llib/socket.scm 378 */
{ /* Llib/socket.scm 379 */
obj_t BgL_socketz00_1980;obj_t BgL_optionz00_1981;
if(
SOCKETP(BgL_socketz00_1794))
{ /* Llib/socket.scm 379 */
BgL_socketz00_1980 = BgL_socketz00_1794; }  else 
{ 
obj_t BgL_auxz00_2833;
BgL_auxz00_2833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)16410)), BGl_string2533z00zz__socketz00, BGl_string2460z00zz__socketz00, BgL_socketz00_1794); 
FAILURE(BgL_auxz00_2833,BFALSE,BFALSE);} 
if(
KEYWORDP(BgL_optionz00_1795))
{ /* Llib/socket.scm 379 */
BgL_optionz00_1981 = BgL_optionz00_1795; }  else 
{ 
obj_t BgL_auxz00_2839;
BgL_auxz00_2839 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2462z00zz__socketz00, 
BINT(((long)16410)), BGl_string2533z00zz__socketz00, BGl_string2532z00zz__socketz00, BgL_optionz00_1795); 
FAILURE(BgL_auxz00_2839,BFALSE,BFALSE);} 
return 
bgl_setsockopt(BgL_socketz00_1980, BgL_optionz00_1981, BgL_valz00_1796);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__socketz00()
{ AN_OBJECT;
{ /* Llib/socket.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2534z00zz__socketz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2534z00zz__socketz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2534z00zz__socketz00));} 
}

#ifdef __cplusplus
}
#endif
