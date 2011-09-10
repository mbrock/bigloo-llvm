/*===========================================================================*/
/*   (Llib/os.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/os.scm -indent -o objs/obj_s/Llib/os.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol3063z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_pwdz00zz__osz00();
static obj_t BGl_symbol3065z00zz__osz00 = BUNSPEC;
static obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2javazd2packageza2z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL char * BGl_executablezd2namezd2zz__osz00();
static obj_t BGl_symbol3101z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3097z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3108z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3099z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3112z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3115z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3118z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3121z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
static obj_t BGl_symbol3126z00zz__osz00 = BUNSPEC;
static obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl_symbol3144z00zz__osz00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getpwnamz00zz__osz00(obj_t);
static obj_t BGl_symbol3156z00zz__osz00 = BUNSPEC;
static obj_t BGl__setuidz00zz__osz00(obj_t, obj_t);
extern obj_t get_signal_handler(int);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__getuidz00zz__osz00(obj_t);
extern char * executable_name;
static obj_t BGl_requirezd2initializa7ationz75zz__osz00 = BUNSPEC;
static obj_t BGl__oszd2versionzd2zz__osz00(obj_t);
extern char * bgl_dload_error();
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl__filezd2namezd2canonicaliza7eza7zz__osz00(obj_t, obj_t);
extern char * c_date();
static obj_t BGl_genericzd2initzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern bool_t fexists(char *);
extern void bgl_sleep(long);
static obj_t BGl__executablezd2namezd2zz__osz00(obj_t);
static obj_t BGl__relativezd2filezd2namez00zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2namezd2zz__osz00();
extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2archzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_signalz00zz__osz00(int, obj_t);
extern obj_t bigloo_module_mangle(obj_t, obj_t);
static obj_t BGl__chmodz00zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t);
static obj_t BGl__dynamiczd2unloadzd2zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
static obj_t BGl__findzd2filezf2pathz20zz__osz00(obj_t, obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getenvz00zz__osz00(char *);
static obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_chdirz00zz__osz00(char *);
static obj_t BGl__dirnamez00zz__osz00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00();
static obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_basenamez00zz__osz00(obj_t);
static obj_t BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t, obj_t);
static obj_t BGl__makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
static obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t, obj_t);
static obj_t BGl__makezd2staticzd2libzd2namezd2zz__osz00(obj_t, obj_t, obj_t);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t, obj_t);
static obj_t BGl__getpwnamz00zz__osz00(obj_t, obj_t);
static obj_t BGl__makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
extern obj_t bgl_getpwnam(char *);
static obj_t BGl_importedzd2moduleszd2initz00zz__osz00();
static obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t);
static obj_t BGl__putenvz00zz__osz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__filezd2namezd2ze3listze3zz__osz00(obj_t, obj_t);
static obj_t BGl__systemz00zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2versionzd2zz__osz00();
extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
static obj_t BGl__defaultzd2scriptzd2namez00zz__osz00(obj_t);
static long BGl_popzd2directoryzd2zz__osz00(unsigned char, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl__oszd2charsetzd2zz__osz00(obj_t);
static obj_t BGl__pathzd2separatorzd2zz__osz00(obj_t);
static obj_t BGl__suffixz00zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_setuidz00zz__osz00(int);
BGL_EXPORTED_DECL obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
static obj_t BGl__chdirz00zz__osz00(obj_t, obj_t);
static obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_getuidz00zz__osz00();
extern obj_t command_line;
static obj_t BGl__staticzd2libraryzd2suffixz00zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t c_signal(int, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__osz00();
static obj_t BGl__makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t, obj_t);
extern bool_t bgl_chmod(char *, bool_t, bool_t, bool_t);
static obj_t BGl__prefixz00zz__osz00(obj_t, obj_t);
static obj_t BGl__oszd2tmpzd2zz__osz00(obj_t);
extern obj_t make_string(long, unsigned char);
extern int bgl_setenv(char *, char *);
BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl__systemzd2ze3stringz31zz__osz00(obj_t, obj_t);
static obj_t BGl_list3060z00zz__osz00 = BUNSPEC;
static obj_t BGl__filezd2separatorzd2zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
static obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t);
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BUNSPEC;
static obj_t BGl__basenamez00zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2classzd2zz__osz00();
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__pwdz00zz__osz00(obj_t);
static obj_t BGl__commandzd2linezd2zz__osz00(obj_t);
extern obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pathzd2separatorzd2zz__osz00();
extern obj_t blit_string(obj_t, long, obj_t, long, long);
static obj_t BGl__datez00zz__osz00(obj_t);
extern obj_t string_to_bstring(char *);
BGL_EXPORTED_DECL obj_t BGl_getpwuidz00zz__osz00(int);
BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t);
static obj_t BGl__oszd2namezd2zz__osz00(obj_t);
static obj_t BGl__oszd2archzd2zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_sleepz00zz__osz00(long);
static obj_t BGl__unixzd2pathzd2ze3listze3zz__osz00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__defaultzd2executablezd2namez00zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2charsetzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_commandzd2linezd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2separatorzd2zz__osz00();
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_zc3exitza31946ze3z83zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_putenvz00zz__osz00(char *, char *);
extern obj_t bgl_close_input_port(obj_t);
BGL_EXPORTED_DECL obj_t BGl_systemz00zz__osz00(obj_t);
extern obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dirnamez00zz__osz00(obj_t);
static obj_t BGl__signalz00zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_suffixz00zz__osz00(obj_t);
static obj_t BGl__sharedzd2libraryzd2suffixz00zz__osz00(obj_t);
static obj_t BGl__makezd2filezd2namez00zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t);
extern obj_t BGl_warningz00zz__errorz00(obj_t);
extern int bgl_dunload(obj_t);
static obj_t BGl__sleepz00zz__osz00(obj_t, obj_t);
static obj_t BGl__oszd2classzd2zz__osz00(obj_t);
static obj_t BGl__getenvz00zz__osz00(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_defaultzd2executablezd2namez00zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_prefixz00zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2tmpzd2zz__osz00();
static obj_t BGl__getzd2signalzd2handlerz00zz__osz00(obj_t, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00();
extern int bgl_dload(char *, char *, char *);
extern int bgl_getuid();
static obj_t BGl__getpwuidz00zz__osz00(obj_t, obj_t);
extern obj_t bgl_getpwuid(int);
static obj_t BGl_methodzd2initzd2zz__osz00();
BGL_EXPORTED_DECL char * BGl_datez00zz__osz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2unloadzd2envz00zz__osz00, BgL_bgl__dynamicza7d2unloa3166za7, BGl__dynamiczd2unloadzd2zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00, BgL_bgl__makeza7d2staticza7d3167z00, BGl__makezd2staticzd2libzd2namezd2zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_systemzd2envzd2zz__osz00, BgL_bgl__systemza700za7za7__os3168za7, va_generic_entry, BGl__systemz00zz__osz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpwuidzd2envzd2zz__osz00, BgL_bgl__getpwuidza700za7za7__3169za7, BGl__getpwuidz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2charsetzd2envz00zz__osz00, BgL_bgl__osza7d2charsetza7d23170z00, BGl__oszd2charsetzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_relativezd2filezd2namezd2envzd2zz__osz00, BgL_bgl__relativeza7d2file3171za7, BGl__relativezd2filezd2namez00zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2versionzd2envz00zz__osz00, BgL_bgl__osza7d2versionza7d23172z00, BGl__oszd2versionzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2executablezd2namezd2envzd2zz__osz00, BgL_bgl__defaultza7d2execu3173za7, BGl__defaultzd2executablezd2namez00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2namezd2envz00zz__osz00, BgL_bgl__osza7d2nameza7d2za7za7_3174z00, BGl__oszd2namezd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pwdzd2envzd2zz__osz00, BgL_bgl__pwdza700za7za7__osza7003175z00, BGl__pwdz00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2unixzd2canonicaliza7ezd2envza7zz__osz00, BgL_bgl__fileza7d2nameza7d2u3176z00, BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2archzd2envz00zz__osz00, BgL_bgl__osza7d2archza7d2za7za7_3177z00, BGl__oszd2archzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sharedzd2libraryzd2suffixzd2envzd2zz__osz00, BgL_bgl__sharedza7d2librar3178za7, BGl__sharedzd2libraryzd2suffixz00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2filezf2pathzd2envzf2zz__osz00, BgL_bgl__findza7d2fileza7f2p3179z00, BGl__findzd2filezf2pathz20zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dirnamezd2envzd2zz__osz00, BgL_bgl__dirnameza700za7za7__o3180za7, BGl__dirnamez00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2filezd2pathzd2envzd2zz__osz00, BgL_bgl__makeza7d2fileza7d2p3181z00, va_generic_entry, BGl__makezd2filezd2pathz00zz__osz00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string3061z00zz__osz00, BgL_bgl_string3061za700za7za7_3182za7, ".", 1 );
DEFINE_STRING( BGl_string3062z00zz__osz00, BgL_bgl_string3062za700za7za7_3183za7, "bigloo.foreign", 14 );
DEFINE_STRING( BGl_string3064z00zz__osz00, BgL_bgl_string3064za700za7za7_3184za7, "ignore", 6 );
DEFINE_STRING( BGl_string3066z00zz__osz00, BgL_bgl_string3066za700za7za7_3185za7, "default", 7 );
DEFINE_STRING( BGl_string3067z00zz__osz00, BgL_bgl_string3067za700za7za7_3186za7, "/tmp/bigloo/runtime/Llib/os.scm", 31 );
DEFINE_STRING( BGl_string3068z00zz__osz00, BgL_bgl_string3068za700za7za7_3187za7, "signal", 6 );
DEFINE_STRING( BGl_string3070z00zz__osz00, BgL_bgl_string3070za700za7za7_3188za7, "Illegal signal", 14 );
DEFINE_STRING( BGl_string3069z00zz__osz00, BgL_bgl_string3069za700za7za7_3189za7, "procedure", 9 );
DEFINE_STRING( BGl_string3071z00zz__osz00, BgL_bgl_string3071za700za7za7_3190za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string3072z00zz__osz00, BgL_bgl_string3072za700za7za7_3191za7, "_signal", 7 );
DEFINE_STRING( BGl_string3073z00zz__osz00, BgL_bgl_string3073za700za7za7_3192za7, "int", 3 );
DEFINE_STRING( BGl_string3074z00zz__osz00, BgL_bgl_string3074za700za7za7_3193za7, "_get-signal-handler", 19 );
DEFINE_STRING( BGl_string3075z00zz__osz00, BgL_bgl_string3075za700za7za7_3194za7, "win32", 5 );
DEFINE_STRING( BGl_string3076z00zz__osz00, BgL_bgl_string3076za700za7za7_3195za7, "HOME", 4 );
DEFINE_STRING( BGl_string3077z00zz__osz00, BgL_bgl_string3077za700za7za7_3196za7, "USERPROFILE", 11 );
DEFINE_STRING( BGl_string3078z00zz__osz00, BgL_bgl_string3078za700za7za7_3197za7, "_getenv", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2canonicaliza7ezd2envz75zz__osz00, BgL_bgl__fileza7d2nameza7d2c3198z00, BGl__filezd2namezd2canonicaliza7eza7zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3080z00zz__osz00, BgL_bgl_string3080za700za7za7_3199za7, "_putenv", 7 );
DEFINE_STRING( BGl_string3079z00zz__osz00, BgL_bgl_string3079za700za7za7_3200za7, "string", 6 );
DEFINE_STRING( BGl_string3081z00zz__osz00, BgL_bgl_string3081za700za7za7_3201za7, "system", 6 );
DEFINE_STRING( BGl_string3082z00zz__osz00, BgL_bgl_string3082za700za7za7_3202za7, "pair", 4 );
DEFINE_STRING( BGl_string3083z00zz__osz00, BgL_bgl_string3083za700za7za7_3203za7, "| ", 2 );
DEFINE_STRING( BGl_string3084z00zz__osz00, BgL_bgl_string3084za700za7za7_3204za7, "system->string", 14 );
DEFINE_STRING( BGl_string3085z00zz__osz00, BgL_bgl_string3085za700za7za7_3205za7, "input-port", 10 );
DEFINE_STRING( BGl_string3086z00zz__osz00, BgL_bgl_string3086za700za7za7_3206za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3087z00zz__osz00, BgL_bgl_string3087za700za7za7_3207za7, "_chdir", 6 );
DEFINE_STRING( BGl_string3088z00zz__osz00, BgL_bgl_string3088za700za7za7_3208za7, "mingw", 5 );
DEFINE_STRING( BGl_string3100z00zz__osz00, BgL_bgl_string3100za700za7za7_3209za7, "write", 5 );
DEFINE_STRING( BGl_string3090z00zz__osz00, BgL_bgl_string3090za700za7za7_3210za7, "bstring", 7 );
DEFINE_STRING( BGl_string3089z00zz__osz00, BgL_bgl_string3089za700za7za7_3211za7, "_basename", 9 );
DEFINE_STRING( BGl_string3091z00zz__osz00, BgL_bgl_string3091za700za7za7_3212za7, "_prefix", 7 );
DEFINE_STRING( BGl_string3102z00zz__osz00, BgL_bgl_string3102za700za7za7_3213za7, "execute", 7 );
DEFINE_STRING( BGl_string3092z00zz__osz00, BgL_bgl_string3092za700za7za7_3214za7, "_dirname", 8 );
DEFINE_STRING( BGl_string3103z00zz__osz00, BgL_bgl_string3103za700za7za7_3215za7, "chmod", 5 );
DEFINE_STRING( BGl_string3093z00zz__osz00, BgL_bgl_string3093za700za7za7_3216za7, "loop", 4 );
DEFINE_STRING( BGl_string3104z00zz__osz00, BgL_bgl_string3104za700za7za7_3217za7, "Unknown mode", 12 );
DEFINE_STRING( BGl_string3094z00zz__osz00, BgL_bgl_string3094za700za7za7_3218za7, "uchar", 5 );
DEFINE_STRING( BGl_string3105z00zz__osz00, BgL_bgl_string3105za700za7za7_3219za7, "_chmod", 6 );
DEFINE_STRING( BGl_string3095z00zz__osz00, BgL_bgl_string3095za700za7za7_3220za7, "", 0 );
DEFINE_STRING( BGl_string3106z00zz__osz00, BgL_bgl_string3106za700za7za7_3221za7, "make-file-name", 14 );
DEFINE_STRING( BGl_string3096z00zz__osz00, BgL_bgl_string3096za700za7za7_3222za7, "_suffix", 7 );
DEFINE_STRING( BGl_string3107z00zz__osz00, BgL_bgl_string3107za700za7za7_3223za7, "_make-file-name", 15 );
DEFINE_STRING( BGl_string3098z00zz__osz00, BgL_bgl_string3098za700za7za7_3224za7, "read", 4 );
DEFINE_STRING( BGl_string3110z00zz__osz00, BgL_bgl_string3110za700za7za7_3225za7, "long", 4 );
DEFINE_STRING( BGl_string3109z00zz__osz00, BgL_bgl_string3109za700za7za7_3226za7, "make-file-path", 14 );
DEFINE_STRING( BGl_string3111z00zz__osz00, BgL_bgl_string3111za700za7za7_3227za7, "_make-file-path", 15 );
DEFINE_STRING( BGl_string3113z00zz__osz00, BgL_bgl_string3113za700za7za7_3228za7, "bigloo-c", 8 );
DEFINE_STRING( BGl_string3114z00zz__osz00, BgL_bgl_string3114za700za7za7_3229za7, "lib", 3 );
DEFINE_STRING( BGl_string3116z00zz__osz00, BgL_bgl_string3116za700za7za7_3230za7, "bigloo-jvm", 10 );
DEFINE_STRING( BGl_string3117z00zz__osz00, BgL_bgl_string3117za700za7za7_3231za7, ".zip", 4 );
DEFINE_STRING( BGl_string3120z00zz__osz00, BgL_bgl_string3120za700za7za7_3232za7, ".dll", 4 );
DEFINE_STRING( BGl_string3119z00zz__osz00, BgL_bgl_string3119za700za7za7_3233za7, "bigloo-.net", 11 );
DEFINE_STRING( BGl_string3122z00zz__osz00, BgL_bgl_string3122za700za7za7_3234za7, "make-static-lib-name", 20 );
DEFINE_STRING( BGl_string3123z00zz__osz00, BgL_bgl_string3123za700za7za7_3235za7, "Unknown backend", 15 );
DEFINE_STRING( BGl_string3124z00zz__osz00, BgL_bgl_string3124za700za7za7_3236za7, "_make-static-lib-name", 21 );
DEFINE_STRING( BGl_string3125z00zz__osz00, BgL_bgl_string3125za700za7za7_3237za7, "symbol", 6 );
DEFINE_STRING( BGl_string3127z00zz__osz00, BgL_bgl_string3127za700za7za7_3238za7, "make-shared-lib-name", 20 );
DEFINE_STRING( BGl_string3128z00zz__osz00, BgL_bgl_string3128za700za7za7_3239za7, "_make-shared-lib-name", 21 );
DEFINE_STRING( BGl_string3130z00zz__osz00, BgL_bgl_string3130za700za7za7_3240za7, "_file-name->list", 16 );
DEFINE_STRING( BGl_string3129z00zz__osz00, BgL_bgl_string3129za700za7za7_3241za7, "_find-file/path", 15 );
DEFINE_STRING( BGl_string3131z00zz__osz00, BgL_bgl_string3131za700za7za7_3242za7, "string-set!", 11 );
DEFINE_STRING( BGl_string3132z00zz__osz00, BgL_bgl_string3132za700za7za7_3243za7, "_file-name-canonicalize", 23 );
DEFINE_STRING( BGl_string3133z00zz__osz00, BgL_bgl_string3133za700za7za7_3244za7, "_file-name-canonicalize!", 24 );
DEFINE_STRING( BGl_string3134z00zz__osz00, BgL_bgl_string3134za700za7za7_3245za7, "file-name-unix-canonicalize", 27 );
DEFINE_STRING( BGl_string3135z00zz__osz00, BgL_bgl_string3135za700za7za7_3246za7, "..", 2 );
DEFINE_STRING( BGl_string3136z00zz__osz00, BgL_bgl_string3136za700za7za7_3247za7, "_file-name-unix-canonicalize", 28 );
DEFINE_STRING( BGl_string3137z00zz__osz00, BgL_bgl_string3137za700za7za7_3248za7, "_file-name-unix-canonicalize!", 29 );
DEFINE_STRING( BGl_string3138z00zz__osz00, BgL_bgl_string3138za700za7za7_3249za7, "make-file", 9 );
DEFINE_STRING( BGl_string3140z00zz__osz00, BgL_bgl_string3140za700za7za7_3250za7, "_relative-file-name", 19 );
DEFINE_STRING( BGl_string3139z00zz__osz00, BgL_bgl_string3139za700za7za7_3251za7, "relative-file-name", 18 );
DEFINE_STRING( BGl_string3141z00zz__osz00, BgL_bgl_string3141za700za7za7_3252za7, "_make-static-library-name", 25 );
DEFINE_STRING( BGl_string3142z00zz__osz00, BgL_bgl_string3142za700za7za7_3253za7, "_make-shared-library-name", 25 );
DEFINE_STRING( BGl_string3143z00zz__osz00, BgL_bgl_string3143za700za7za7_3254za7, "_sleep", 6 );
DEFINE_STRING( BGl_string3145z00zz__osz00, BgL_bgl_string3145za700za7za7_3255za7, "dynamic-load", 12 );
DEFINE_STRING( BGl_string3146z00zz__osz00, BgL_bgl_string3146za700za7za7_3256za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3147z00zz__osz00, BgL_bgl_string3147za700za7za7_3257za7, "_dynamic-load", 13 );
DEFINE_STRING( BGl_string3148z00zz__osz00, BgL_bgl_string3148za700za7za7_3258za7, "module-initialization", 21 );
DEFINE_STRING( BGl_string3150z00zz__osz00, BgL_bgl_string3150za700za7za7_3259za7, "dynamic-load: ", 14 );
DEFINE_STRING( BGl_string3149z00zz__osz00, BgL_bgl_string3149za700za7za7_3260za7, "dynamic-load:", 13 );
DEFINE_STRING( BGl_string3151z00zz__osz00, BgL_bgl_string3151za700za7za7_3261za7, "Cannot find library init entry point -- ", 40 );
DEFINE_STRING( BGl_string3152z00zz__osz00, BgL_bgl_string3152za700za7za7_3262za7, "Cannot find library init module", 31 );
DEFINE_STRING( BGl_string3153z00zz__osz00, BgL_bgl_string3153za700za7za7_3263za7, "Cannot find library init entry point", 36 );
DEFINE_STRING( BGl_string3154z00zz__osz00, BgL_bgl_string3154za700za7za7_3264za7, "Not supported on this architecture", 34 );
DEFINE_STRING( BGl_string3155z00zz__osz00, BgL_bgl_string3155za700za7za7_3265za7, "Can't find library", 18 );
DEFINE_STRING( BGl_string3157z00zz__osz00, BgL_bgl_string3157za700za7za7_3266za7, "dynamic-unload", 14 );
DEFINE_STRING( BGl_string3158z00zz__osz00, BgL_bgl_string3158za700za7za7_3267za7, "_dynamic-unload", 15 );
DEFINE_STRING( BGl_string3160z00zz__osz00, BgL_bgl_string3160za700za7za7_3268za7, "_unix-path->list", 16 );
DEFINE_STRING( BGl_string3159z00zz__osz00, BgL_bgl_string3159za700za7za7_3269za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3161z00zz__osz00, BgL_bgl_string3161za700za7za7_3270za7, "_setuid", 7 );
DEFINE_STRING( BGl_string3162z00zz__osz00, BgL_bgl_string3162za700za7za7_3271za7, "_getpwnam", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2scriptzd2namezd2envzd2zz__osz00, BgL_bgl__defaultza7d2scrip3272za7, BGl__defaultzd2scriptzd2namez00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3163z00zz__osz00, BgL_bgl_string3163za700za7za7_3273za7, "_getpwuid", 9 );
DEFINE_STRING( BGl_string3164z00zz__osz00, BgL_bgl_string3164za700za7za7_3274za7, "__os", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2sharedzd2libraryzd2namezd2envz00zz__osz00, BgL_bgl__makeza7d2sharedza7d3275z00, BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2loadzd2envz00zz__osz00, BgL_bgl__dynamicza7d2loadza73276z00, opt_generic_entry, BGl__dynamiczd2loadzd2zz__osz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2unixzd2canonicaliza7ez12zd2envzb5zz__osz00, BgL_bgl__fileza7d2nameza7d2u3277z00, BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2ze3listzd2envz31zz__osz00, BgL_bgl__fileza7d2nameza7d2za73278za7, BGl__filezd2namezd2ze3listze3zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpwnamzd2envzd2zz__osz00, BgL_bgl__getpwnamza700za7za7__3279za7, BGl__getpwnamz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_staticzd2libraryzd2suffixzd2envzd2zz__osz00, BgL_bgl__staticza7d2librar3280za7, BGl__staticzd2libraryzd2suffixz00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_putenvzd2envzd2zz__osz00, BgL_bgl__putenvza700za7za7__os3281za7, BGl__putenvz00zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unixzd2pathzd2ze3listzd2envz31zz__osz00, BgL_bgl__unixza7d2pathza7d2za73282za7, BGl__unixzd2pathzd2ze3listze3zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_prefixzd2envzd2zz__osz00, BgL_bgl__prefixza700za7za7__os3283za7, BGl__prefixz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sleepzd2envzd2zz__osz00, BgL_bgl__sleepza700za7za7__osza73284z00, BGl__sleepz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_chdirzd2envzd2zz__osz00, BgL_bgl__chdirza700za7za7__osza73285z00, BGl__chdirz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_commandzd2linezd2envz00zz__osz00, BgL_bgl__commandza7d2lineza73286z00, BGl__commandzd2linezd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setuidzd2envzd2zz__osz00, BgL_bgl__setuidza700za7za7__os3287za7, BGl__setuidz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_signalzd2envzd2zz__osz00, BgL_bgl__signalza700za7za7__os3288za7, BGl__signalz00zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2envzd2zz__osz00, BgL_bgl__dateza700za7za7__osza703289z00, BGl__datez00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2tmpzd2envz00zz__osz00, BgL_bgl__osza7d2tmpza7d2za7za7__3290z00, BGl__oszd2tmpzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_basenamezd2envzd2zz__osz00, BgL_bgl__basenameza700za7za7__3291za7, BGl__basenamez00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getenvzd2envzd2zz__osz00, BgL_bgl__getenvza700za7za7__os3292za7, BGl__getenvz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2separatorzd2envz00zz__osz00, BgL_bgl__fileza7d2separato3293za7, BGl__filezd2separatorzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2filezd2namezd2envzd2zz__osz00, BgL_bgl__makeza7d2fileza7d2n3294z00, BGl__makezd2filezd2namez00zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2signalzd2handlerzd2envzd2zz__osz00, BgL_bgl__getza7d2signalza7d23295z00, BGl__getzd2signalzd2handlerz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_chmodzd2envzd2zz__osz00, BgL_bgl__chmodza700za7za7__osza73296z00, va_generic_entry, BGl__chmodz00zz__osz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_executablezd2namezd2envz00zz__osz00, BgL_bgl__executableza7d2na3297za7, BGl__executablezd2namezd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getuidzd2envzd2zz__osz00, BgL_bgl__getuidza700za7za7__os3298za7, BGl__getuidz00zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2staticzd2libraryzd2namezd2envz00zz__osz00, BgL_bgl__makeza7d2staticza7d3299z00, BGl__makezd2staticzd2libraryzd2namezd2zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2canonicaliza7ez12zd2envz67zz__osz00, BgL_bgl__fileza7d2nameza7d2c3300z00, BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_systemzd2ze3stringzd2envze3zz__osz00, BgL_bgl__systemza7d2za7e3str3301z00, va_generic_entry, BGl__systemzd2ze3stringz31zz__osz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pathzd2separatorzd2envz00zz__osz00, BgL_bgl__pathza7d2separato3302za7, BGl__pathzd2separatorzd2zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00, BgL_bgl__makeza7d2sharedza7d3303z00, BGl__makezd2sharedzd2libzd2namezd2zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_suffixzd2envzd2zz__osz00, BgL_bgl__suffixza700za7za7__os3304za7, BGl__suffixz00zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2classzd2envz00zz__osz00, BgL_bgl__osza7d2classza7d2za7za73305z00, BGl__oszd2classzd2zz__osz00, 0L, BUNSPEC, 0 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__osz00(long BgL_checksumz00_3313, char * BgL_fromz00_3314)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__osz00))
{ 
BGl_requirezd2initializa7ationz75zz__osz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__osz00(); 
BGl_importedzd2moduleszd2initz00zz__osz00(); 
BGl_toplevelzd2initzd2zz__osz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 18 */
BGl_list3060z00zz__osz00 = 
MAKE_PAIR(BGl_string3061z00zz__osz00, BNIL); 
BGl_symbol3063z00zz__osz00 = 
bstring_to_symbol(BGl_string3064z00zz__osz00); 
BGl_symbol3065z00zz__osz00 = 
bstring_to_symbol(BGl_string3066z00zz__osz00); 
BGl_symbol3097z00zz__osz00 = 
bstring_to_symbol(BGl_string3098z00zz__osz00); 
BGl_symbol3099z00zz__osz00 = 
bstring_to_symbol(BGl_string3100z00zz__osz00); 
BGl_symbol3101z00zz__osz00 = 
bstring_to_symbol(BGl_string3102z00zz__osz00); 
BGl_symbol3108z00zz__osz00 = 
bstring_to_symbol(BGl_string3109z00zz__osz00); 
BGl_symbol3112z00zz__osz00 = 
bstring_to_symbol(BGl_string3113z00zz__osz00); 
BGl_symbol3115z00zz__osz00 = 
bstring_to_symbol(BGl_string3116z00zz__osz00); 
BGl_symbol3118z00zz__osz00 = 
bstring_to_symbol(BGl_string3119z00zz__osz00); 
BGl_symbol3121z00zz__osz00 = 
bstring_to_symbol(BGl_string3122z00zz__osz00); 
BGl_symbol3126z00zz__osz00 = 
bstring_to_symbol(BGl_string3127z00zz__osz00); 
BGl_symbol3144z00zz__osz00 = 
bstring_to_symbol(BGl_string3145z00zz__osz00); 
return ( 
BGl_symbol3156z00zz__osz00 = 
bstring_to_symbol(BGl_string3157z00zz__osz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 18 */
BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BGl_list3060z00zz__osz00; 
return ( 
BGl_za2defaultzd2javazd2packageza2z00zz__osz00 = BGl_string3062z00zz__osz00, BUNSPEC) ;} 
}



/* default-executable-name */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2executablezd2namez00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 208 */
return 
string_to_bstring(BGL_DEFAULT_A_OUT);} 
}



/* _default-executable-name */
obj_t BGl__defaultzd2executablezd2namez00zz__osz00(obj_t BgL_envz00_2766)
{ AN_OBJECT;
{ /* Llib/os.scm 208 */
return 
BGl_defaultzd2executablezd2namez00zz__osz00();} 
}



/* default-script-name */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2scriptzd2namez00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 209 */
return 
string_to_bstring(BGL_DEFAULT_A_BAT);} 
}



/* _default-script-name */
obj_t BGl__defaultzd2scriptzd2namez00zz__osz00(obj_t BgL_envz00_2767)
{ AN_OBJECT;
{ /* Llib/os.scm 209 */
return 
BGl_defaultzd2scriptzd2namez00zz__osz00();} 
}



/* os-class */
BGL_EXPORTED_DEF obj_t BGl_oszd2classzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 210 */
return 
string_to_bstring(OS_CLASS);} 
}



/* _os-class */
obj_t BGl__oszd2classzd2zz__osz00(obj_t BgL_envz00_2768)
{ AN_OBJECT;
{ /* Llib/os.scm 210 */
return 
BGl_oszd2classzd2zz__osz00();} 
}



/* os-name */
BGL_EXPORTED_DEF obj_t BGl_oszd2namezd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 211 */
return 
string_to_bstring(OS_NAME);} 
}



/* _os-name */
obj_t BGl__oszd2namezd2zz__osz00(obj_t BgL_envz00_2769)
{ AN_OBJECT;
{ /* Llib/os.scm 211 */
return 
BGl_oszd2namezd2zz__osz00();} 
}



/* os-arch */
BGL_EXPORTED_DEF obj_t BGl_oszd2archzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 212 */
return 
string_to_bstring(OS_ARCH);} 
}



/* _os-arch */
obj_t BGl__oszd2archzd2zz__osz00(obj_t BgL_envz00_2770)
{ AN_OBJECT;
{ /* Llib/os.scm 212 */
return 
BGl_oszd2archzd2zz__osz00();} 
}



/* os-version */
BGL_EXPORTED_DEF obj_t BGl_oszd2versionzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 213 */
return 
string_to_bstring(OS_VERSION);} 
}



/* _os-version */
obj_t BGl__oszd2versionzd2zz__osz00(obj_t BgL_envz00_2771)
{ AN_OBJECT;
{ /* Llib/os.scm 213 */
return 
BGl_oszd2versionzd2zz__osz00();} 
}



/* os-tmp */
BGL_EXPORTED_DEF obj_t BGl_oszd2tmpzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 214 */
return 
string_to_bstring(OS_TMP);} 
}



/* _os-tmp */
obj_t BGl__oszd2tmpzd2zz__osz00(obj_t BgL_envz00_2772)
{ AN_OBJECT;
{ /* Llib/os.scm 214 */
return 
BGl_oszd2tmpzd2zz__osz00();} 
}



/* os-charset */
BGL_EXPORTED_DEF obj_t BGl_oszd2charsetzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 215 */
return 
string_to_bstring(OS_CHARSET);} 
}



/* _os-charset */
obj_t BGl__oszd2charsetzd2zz__osz00(obj_t BgL_envz00_2773)
{ AN_OBJECT;
{ /* Llib/os.scm 215 */
return 
BGl_oszd2charsetzd2zz__osz00();} 
}



/* file-separator */
BGL_EXPORTED_DEF obj_t BGl_filezd2separatorzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 216 */
return 
BCHAR(FILE_SEPARATOR);} 
}



/* _file-separator */
obj_t BGl__filezd2separatorzd2zz__osz00(obj_t BgL_envz00_2774)
{ AN_OBJECT;
{ /* Llib/os.scm 216 */
return 
BGl_filezd2separatorzd2zz__osz00();} 
}



/* path-separator */
BGL_EXPORTED_DEF obj_t BGl_pathzd2separatorzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 217 */
return 
BCHAR(PATH_SEPARATOR);} 
}



/* _path-separator */
obj_t BGl__pathzd2separatorzd2zz__osz00(obj_t BgL_envz00_2775)
{ AN_OBJECT;
{ /* Llib/os.scm 217 */
return 
BGl_pathzd2separatorzd2zz__osz00();} 
}



/* static-library-suffix */
BGL_EXPORTED_DEF obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 218 */
return 
string_to_bstring(STATIC_LIB_SUFFIX);} 
}



/* _static-library-suffix */
obj_t BGl__staticzd2libraryzd2suffixz00zz__osz00(obj_t BgL_envz00_2776)
{ AN_OBJECT;
{ /* Llib/os.scm 218 */
return 
BGl_staticzd2libraryzd2suffixz00zz__osz00();} 
}



/* shared-library-suffix */
BGL_EXPORTED_DEF obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 219 */
return 
string_to_bstring(SHARED_LIB_SUFFIX);} 
}



/* _shared-library-suffix */
obj_t BGl__sharedzd2libraryzd2suffixz00zz__osz00(obj_t BgL_envz00_2777)
{ AN_OBJECT;
{ /* Llib/os.scm 219 */
return 
BGl_sharedzd2libraryzd2suffixz00zz__osz00();} 
}



/* command-line */
BGL_EXPORTED_DEF obj_t BGl_commandzd2linezd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 224 */
return command_line;} 
}



/* _command-line */
obj_t BGl__commandzd2linezd2zz__osz00(obj_t BgL_envz00_2778)
{ AN_OBJECT;
{ /* Llib/os.scm 224 */
return command_line;} 
}



/* executable-name */
BGL_EXPORTED_DEF char * BGl_executablezd2namezd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 230 */
return executable_name;} 
}



/* _executable-name */
obj_t BGl__executablezd2namezd2zz__osz00(obj_t BgL_envz00_2779)
{ AN_OBJECT;
{ /* Llib/os.scm 230 */
return 
string_to_bstring(executable_name);} 
}



/* signal */
BGL_EXPORTED_DEF obj_t BGl_signalz00zz__osz00(int BgL_numz00_1, obj_t BgL_procz00_2)
{ AN_OBJECT;
{ /* Llib/os.scm 236 */
if(
(BgL_procz00_2==BGl_symbol3063z00zz__osz00))
{ /* Llib/os.scm 238 */
return 
c_signal(BgL_numz00_1, BTRUE);}  else 
{ /* Llib/os.scm 238 */
if(
(BgL_procz00_2==BGl_symbol3065z00zz__osz00))
{ /* Llib/os.scm 240 */
return 
c_signal(BgL_numz00_1, BFALSE);}  else 
{ /* Llib/os.scm 242 */
bool_t BgL_testz00_3366;
{ /* Llib/os.scm 242 */
int BgL_arg1918z00_799;
{ /* Llib/os.scm 242 */
obj_t BgL_procz00_1811;
if(
PROCEDUREP(BgL_procz00_2))
{ /* Llib/os.scm 242 */
BgL_procz00_1811 = BgL_procz00_2; }  else 
{ 
obj_t BgL_auxz00_3369;
BgL_auxz00_3369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)9310)), BGl_string3068z00zz__osz00, BGl_string3069z00zz__osz00, BgL_procz00_2); 
FAILURE(BgL_auxz00_3369,BFALSE,BFALSE);} 
BgL_arg1918z00_799 = 
PROCEDURE_ARITY(BgL_procz00_1811); } 
BgL_testz00_3366 = 
(
(long)(BgL_arg1918z00_799)==((long)1)); } 
if(BgL_testz00_3366)
{ /* Llib/os.scm 242 */
if(
(
(long)(BgL_numz00_1)<((long)0)))
{ /* Llib/os.scm 244 */
return BUNSPEC;}  else 
{ /* Llib/os.scm 244 */
if(
(
(long)(BgL_numz00_1)>((long)31)))
{ /* Llib/os.scm 246 */
return 
BGl_errorz00zz__errorz00(BGl_string3068z00zz__osz00, BGl_string3070z00zz__osz00, 
BINT(BgL_numz00_1));}  else 
{ /* Llib/os.scm 246 */
return 
c_signal(BgL_numz00_1, BgL_procz00_2);} } }  else 
{ /* Llib/os.scm 242 */
return 
BGl_errorz00zz__errorz00(BGl_string3068z00zz__osz00, BGl_string3071z00zz__osz00, BgL_procz00_2);} } } } 
}



/* _signal */
obj_t BGl__signalz00zz__osz00(obj_t BgL_envz00_2780, obj_t BgL_numz00_2781, obj_t BgL_procz00_2782)
{ AN_OBJECT;
{ /* Llib/os.scm 236 */
{ /* Llib/os.scm 238 */
int BgL_auxz00_3386;
{ /* Llib/os.scm 238 */
obj_t BgL_auxz00_3387;
if(
INTEGERP(BgL_numz00_2781))
{ /* Llib/os.scm 238 */
BgL_auxz00_3387 = BgL_numz00_2781
; }  else 
{ 
obj_t BgL_auxz00_3390;
BgL_auxz00_3390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)9178)), BGl_string3072z00zz__osz00, BGl_string3073z00zz__osz00, BgL_numz00_2781); 
FAILURE(BgL_auxz00_3390,BFALSE,BFALSE);} 
BgL_auxz00_3386 = 
CINT(BgL_auxz00_3387); } 
return 
BGl_signalz00zz__osz00(BgL_auxz00_3386, BgL_procz00_2782);} } 
}



/* get-signal-handler */
BGL_EXPORTED_DEF obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int BgL_numz00_3)
{ AN_OBJECT;
{ /* Llib/os.scm 254 */
{ /* Llib/os.scm 255 */
obj_t BgL_vz00_801;
BgL_vz00_801 = 
get_signal_handler(BgL_numz00_3); 
if(
(BgL_vz00_801==BTRUE))
{ /* Llib/os.scm 257 */
return BGl_symbol3063z00zz__osz00;}  else 
{ /* Llib/os.scm 257 */
if(
(BgL_vz00_801==BFALSE))
{ /* Llib/os.scm 258 */
return BGl_symbol3065z00zz__osz00;}  else 
{ /* Llib/os.scm 258 */
return BgL_vz00_801;} } } } 
}



/* _get-signal-handler */
obj_t BGl__getzd2signalzd2handlerz00zz__osz00(obj_t BgL_envz00_2783, obj_t BgL_numz00_2784)
{ AN_OBJECT;
{ /* Llib/os.scm 254 */
{ /* Llib/os.scm 255 */
int BgL_auxz00_3401;
{ /* Llib/os.scm 255 */
obj_t BgL_auxz00_3402;
if(
INTEGERP(BgL_numz00_2784))
{ /* Llib/os.scm 255 */
BgL_auxz00_3402 = BgL_numz00_2784
; }  else 
{ 
obj_t BgL_auxz00_3405;
BgL_auxz00_3405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)9785)), BGl_string3074z00zz__osz00, BGl_string3073z00zz__osz00, BgL_numz00_2784); 
FAILURE(BgL_auxz00_3405,BFALSE,BFALSE);} 
BgL_auxz00_3401 = 
CINT(BgL_auxz00_3402); } 
return 
BGl_getzd2signalzd2handlerz00zz__osz00(BgL_auxz00_3401);} } 
}



/* getenv */
BGL_EXPORTED_DEF obj_t BGl_getenvz00zz__osz00(char * BgL_stringz00_4)
{ AN_OBJECT;
{ /* Llib/os.scm 264 */
{ /* Llib/os.scm 265 */
bool_t BgL_testz00_3411;
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3075z00zz__osz00))
{ /* Llib/os.scm 265 */
BgL_testz00_3411 = 
bigloo_strcmp(
string_to_bstring(BgL_stringz00_4), BGl_string3076z00zz__osz00)
; }  else 
{ /* Llib/os.scm 265 */
BgL_testz00_3411 = ((bool_t)0)
; } 
if(BgL_testz00_3411)
{ /* Llib/os.scm 265 */
BgL_stringz00_4 = 
BSTRING_TO_STRING(BGl_string3077z00zz__osz00); }  else 
{ /* Llib/os.scm 265 */BFALSE; } } 
if(
(long)getenv(BgL_stringz00_4))
{ /* Llib/os.scm 269 */
char * BgL_resultz00_809;
BgL_resultz00_809 = 
(char *)getenv(BgL_stringz00_4); 
if(
STRING_PTR_NULL(BgL_resultz00_809))
{ /* Llib/os.scm 270 */
return BFALSE;}  else 
{ /* Llib/os.scm 270 */
return 
string_to_bstring(BgL_resultz00_809);} }  else 
{ /* Llib/os.scm 268 */
return BFALSE;} } 
}



/* _getenv */
obj_t BGl__getenvz00zz__osz00(obj_t BgL_envz00_2785, obj_t BgL_stringz00_2786)
{ AN_OBJECT;
{ /* Llib/os.scm 264 */
{ /* Llib/os.scm 273 */
char * BgL_auxz00_3424;
{ /* Llib/os.scm 273 */
obj_t BgL_auxz00_3425;
if(
STRINGP(BgL_stringz00_2786))
{ /* Llib/os.scm 273 */
BgL_auxz00_3425 = BgL_stringz00_2786
; }  else 
{ 
obj_t BgL_auxz00_3428;
BgL_auxz00_3428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)10415)), BGl_string3078z00zz__osz00, BGl_string3079z00zz__osz00, BgL_stringz00_2786); 
FAILURE(BgL_auxz00_3428,BFALSE,BFALSE);} 
BgL_auxz00_3424 = 
BSTRING_TO_STRING(BgL_auxz00_3425); } 
return 
BGl_getenvz00zz__osz00(BgL_auxz00_3424);} } 
}



/* putenv */
BGL_EXPORTED_DEF obj_t BGl_putenvz00zz__osz00(char * BgL_stringz00_5, char * BgL_valz00_6)
{ AN_OBJECT;
{ /* Llib/os.scm 278 */
{ /* Llib/os.scm 279 */
bool_t BgL_testz00_3434;
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3075z00zz__osz00))
{ /* Llib/os.scm 279 */
BgL_testz00_3434 = 
bigloo_strcmp(
string_to_bstring(BgL_stringz00_5), BGl_string3076z00zz__osz00)
; }  else 
{ /* Llib/os.scm 279 */
BgL_testz00_3434 = ((bool_t)0)
; } 
if(BgL_testz00_3434)
{ /* Llib/os.scm 279 */
BgL_stringz00_5 = 
BSTRING_TO_STRING(BGl_string3077z00zz__osz00); }  else 
{ /* Llib/os.scm 279 */BFALSE; } } 
{ /* Llib/os.scm 282 */
int BgL_arg1932z00_815;
BgL_arg1932z00_815 = 
bgl_setenv(BgL_stringz00_5, BgL_valz00_6); 
return 
BBOOL(
(
(long)(BgL_arg1932z00_815)==((long)0)));} } 
}



/* _putenv */
obj_t BGl__putenvz00zz__osz00(obj_t BgL_envz00_2787, obj_t BgL_stringz00_2788, obj_t BgL_valz00_2789)
{ AN_OBJECT;
{ /* Llib/os.scm 278 */
{ /* Llib/os.scm 282 */
char * BgL_auxz00_3454;char * BgL_auxz00_3445;
{ /* Llib/os.scm 282 */
obj_t BgL_auxz00_3455;
if(
STRINGP(BgL_valz00_2789))
{ /* Llib/os.scm 282 */
BgL_auxz00_3455 = BgL_valz00_2789
; }  else 
{ 
obj_t BgL_auxz00_3458;
BgL_auxz00_3458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)10816)), BGl_string3080z00zz__osz00, BGl_string3079z00zz__osz00, BgL_valz00_2789); 
FAILURE(BgL_auxz00_3458,BFALSE,BFALSE);} 
BgL_auxz00_3454 = 
BSTRING_TO_STRING(BgL_auxz00_3455); } 
{ /* Llib/os.scm 282 */
obj_t BgL_auxz00_3446;
if(
STRINGP(BgL_stringz00_2788))
{ /* Llib/os.scm 282 */
BgL_auxz00_3446 = BgL_stringz00_2788
; }  else 
{ 
obj_t BgL_auxz00_3449;
BgL_auxz00_3449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)10816)), BGl_string3080z00zz__osz00, BGl_string3079z00zz__osz00, BgL_stringz00_2788); 
FAILURE(BgL_auxz00_3449,BFALSE,BFALSE);} 
BgL_auxz00_3445 = 
BSTRING_TO_STRING(BgL_auxz00_3446); } 
return 
BGl_putenvz00zz__osz00(BgL_auxz00_3445, BgL_auxz00_3454);} } 
}



/* system */
BGL_EXPORTED_DEF obj_t BGl_systemz00zz__osz00(obj_t BgL_stringsz00_7)
{ AN_OBJECT;
{ /* Llib/os.scm 287 */
if(
NULLP(BgL_stringsz00_7))
{ /* Llib/os.scm 289 */
return BFALSE;}  else 
{ /* Llib/os.scm 291 */
bool_t BgL_testz00_3466;
{ /* Llib/os.scm 291 */
obj_t BgL_auxz00_3467;
{ /* Llib/os.scm 291 */
obj_t BgL_pairz00_1830;
if(
PAIRP(BgL_stringsz00_7))
{ /* Llib/os.scm 291 */
BgL_pairz00_1830 = BgL_stringsz00_7; }  else 
{ 
obj_t BgL_auxz00_3470;
BgL_auxz00_3470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11131)), BGl_string3081z00zz__osz00, BGl_string3082z00zz__osz00, BgL_stringsz00_7); 
FAILURE(BgL_auxz00_3470,BFALSE,BFALSE);} 
BgL_auxz00_3467 = 
CDR(BgL_pairz00_1830); } 
BgL_testz00_3466 = 
NULLP(BgL_auxz00_3467); } 
if(BgL_testz00_3466)
{ /* Llib/os.scm 292 */
obj_t BgL_arg1938z00_819;
{ /* Llib/os.scm 292 */
obj_t BgL_pairz00_1832;
if(
PAIRP(BgL_stringsz00_7))
{ /* Llib/os.scm 292 */
BgL_pairz00_1832 = BgL_stringsz00_7; }  else 
{ 
obj_t BgL_auxz00_3478;
BgL_auxz00_3478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11163)), BGl_string3081z00zz__osz00, BGl_string3082z00zz__osz00, BgL_stringsz00_7); 
FAILURE(BgL_auxz00_3478,BFALSE,BFALSE);} 
BgL_arg1938z00_819 = 
CAR(BgL_pairz00_1832); } 
{ /* Llib/os.scm 292 */
int BgL_auxz00_3483;
{ /* Llib/os.scm 292 */
char * BgL_auxz00_3484;
{ /* Llib/os.scm 292 */
obj_t BgL_auxz00_3485;
if(
STRINGP(BgL_arg1938z00_819))
{ /* Llib/os.scm 292 */
BgL_auxz00_3485 = BgL_arg1938z00_819
; }  else 
{ 
obj_t BgL_auxz00_3488;
BgL_auxz00_3488 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11170)), BGl_string3081z00zz__osz00, BGl_string3079z00zz__osz00, BgL_arg1938z00_819); 
FAILURE(BgL_auxz00_3488,BFALSE,BFALSE);} 
BgL_auxz00_3484 = 
BSTRING_TO_STRING(BgL_auxz00_3485); } 
BgL_auxz00_3483 = 
system(BgL_auxz00_3484); } 
return 
BINT(BgL_auxz00_3483);} }  else 
{ /* Llib/os.scm 294 */
obj_t BgL_arg1940z00_820;
BgL_arg1940z00_820 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_stringsz00_7); 
{ /* Llib/os.scm 294 */
int BgL_auxz00_3496;
{ /* Llib/os.scm 294 */
char * BgL_auxz00_3497;
BgL_auxz00_3497 = 
BSTRING_TO_STRING(BgL_arg1940z00_820); 
BgL_auxz00_3496 = 
system(BgL_auxz00_3497); } 
return 
BINT(BgL_auxz00_3496);} } } } 
}



/* _system */
obj_t BGl__systemz00zz__osz00(obj_t BgL_envz00_2790, obj_t BgL_stringsz00_2791)
{ AN_OBJECT;
{ /* Llib/os.scm 287 */
return 
BGl_systemz00zz__osz00(BgL_stringsz00_2791);} 
}



/* system->string */
BGL_EXPORTED_DEF obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t BgL_stringsz00_8)
{ AN_OBJECT;
{ /* Llib/os.scm 299 */
{ /* Llib/os.scm 300 */
obj_t BgL_pz00_823;
{ /* Llib/os.scm 300 */
obj_t BgL_arg1948z00_831;
{ /* Llib/os.scm 300 */
obj_t BgL_runner1951z00_835;
{ /* Llib/os.scm 300 */
obj_t BgL_list1950z00_834;
BgL_list1950z00_834 = 
MAKE_PAIR(BgL_stringsz00_8, BNIL); 
BgL_runner1951z00_835 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BGl_string3083z00zz__osz00, BgL_list1950z00_834); } 
BgL_arg1948z00_831 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner1951z00_835); } 
{ /* Ieee/port.scm 375 */

BgL_pz00_823 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_arg1948z00_831, BTRUE); } } 
{ /* Llib/os.scm 301 */
obj_t BgL_val1824z00_824;
BgL_val1824z00_824 = 
BGl_zc3exitza31946ze3z83zz__osz00(BgL_pz00_823); 
{ /* Llib/os.scm 303 */
obj_t BgL_portz00_1833;
if(
INPUT_PORTP(BgL_pz00_823))
{ /* Llib/os.scm 303 */
BgL_portz00_1833 = BgL_pz00_823; }  else 
{ 
obj_t BgL_auxz00_3509;
BgL_auxz00_3509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11625)), BGl_string3084z00zz__osz00, BGl_string3085z00zz__osz00, BgL_pz00_823); 
FAILURE(BgL_auxz00_3509,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_1833); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val1824z00_824)))
{ /* Llib/os.scm 303 */
obj_t BgL_arg1944z00_826;obj_t BgL_arg1945z00_827;
{ /* Llib/os.scm 303 */
obj_t BgL_pairz00_1834;
if(
PAIRP(BgL_val1824z00_824))
{ /* Llib/os.scm 303 */
BgL_pairz00_1834 = BgL_val1824z00_824; }  else 
{ 
obj_t BgL_auxz00_3519;
BgL_auxz00_3519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11607)), BGl_string3084z00zz__osz00, BGl_string3082z00zz__osz00, BgL_val1824z00_824); 
FAILURE(BgL_auxz00_3519,BFALSE,BFALSE);} 
BgL_arg1944z00_826 = 
CAR(BgL_pairz00_1834); } 
BgL_arg1945z00_827 = 
CDR(BgL_val1824z00_824); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg1944z00_826, BgL_arg1945z00_827);}  else 
{ /* Llib/os.scm 303 */
return BgL_val1824z00_824;} } } } 
}



/* <exit:1946> */
obj_t BGl_zc3exitza31946ze3z83zz__osz00(obj_t BgL_pz00_2857)
{ AN_OBJECT;
{ /* Llib/os.scm 303 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1825z00_829;
if( SET_EXIT(BgL_an_exit1825z00_829) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit1825z00_829 = 
(void *)jmpbuf; 
{ /* Llib/os.scm 303 */

PUSH_EXIT(BgL_an_exit1825z00_829, ((long)0)); 
{ /* Llib/os.scm 302 */
obj_t BgL_val1826z00_830;
BgL_val1826z00_830 = 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_pz00_2857); 
POP_EXIT(); 
return BgL_val1826z00_830;} } 
} } 
}



/* _system->string */
obj_t BGl__systemzd2ze3stringz31zz__osz00(obj_t BgL_envz00_2792, obj_t BgL_stringsz00_2793)
{ AN_OBJECT;
{ /* Llib/os.scm 299 */
return 
BGl_systemzd2ze3stringz31zz__osz00(BgL_stringsz00_2793);} 
}



/* date */
BGL_EXPORTED_DEF char * BGl_datez00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 308 */
{ /* Llib/os.scm 309 */
char * BgL_dtz00_836;
BgL_dtz00_836 = 
c_date(); 
{ /* Llib/os.scm 309 */
long BgL_lenz00_837;
BgL_lenz00_837 = 
STRING_LENGTH(
string_to_bstring(BgL_dtz00_836)); 
{ /* Llib/os.scm 310 */

{ /* Llib/os.scm 311 */
bool_t BgL_testz00_3535;
{ /* Llib/os.scm 311 */
unsigned char BgL_auxz00_3536;
{ /* Llib/os.scm 311 */
obj_t BgL_stringz00_1839;
BgL_stringz00_1839 = 
string_to_bstring(BgL_dtz00_836); 
{ /* Llib/os.scm 311 */
long BgL_i2615z00_2859;
BgL_i2615z00_2859 = 
(BgL_lenz00_837-((long)1)); 
{ /* Llib/os.scm 311 */
long BgL_l2616z00_2860;
BgL_l2616z00_2860 = 
STRING_LENGTH(BgL_stringz00_1839); 
if(
BOUND_CHECK(BgL_i2615z00_2859, BgL_l2616z00_2860))
{ /* Llib/os.scm 311 */
BgL_auxz00_3536 = 
STRING_REF(BgL_stringz00_1839, BgL_i2615z00_2859)
; }  else 
{ 
obj_t BgL_auxz00_3543;
BgL_auxz00_3543 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)11940)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2615z00_2859), BgL_stringz00_1839); 
FAILURE(BgL_auxz00_3543,BFALSE,BFALSE);} } } } 
BgL_testz00_3535 = 
(BgL_auxz00_3536==((unsigned char)'\n')); } 
if(BgL_testz00_3535)
{ /* Llib/os.scm 312 */
long BgL_arg1954z00_840;
BgL_arg1954z00_840 = 
(BgL_lenz00_837-((long)1)); 
return 
BSTRING_TO_STRING(
BGl_substringz00zz__r4_strings_6_7z00(
string_to_bstring(BgL_dtz00_836), ((long)0), BgL_arg1954z00_840));}  else 
{ /* Llib/os.scm 311 */
return BgL_dtz00_836;} } } } } } 
}



/* _date */
obj_t BGl__datez00zz__osz00(obj_t BgL_envz00_2794)
{ AN_OBJECT;
{ /* Llib/os.scm 308 */
return 
string_to_bstring(
BGl_datez00zz__osz00());} 
}



/* chdir */
BGL_EXPORTED_DEF bool_t BGl_chdirz00zz__osz00(char * BgL_dirnamez00_9)
{ AN_OBJECT;
{ /* Llib/os.scm 318 */
if(
chdir(BgL_dirnamez00_9))
{ /* Llib/os.scm 319 */
return ((bool_t)0);}  else 
{ /* Llib/os.scm 319 */
return ((bool_t)1);} } 
}



/* _chdir */
obj_t BGl__chdirz00zz__osz00(obj_t BgL_envz00_2795, obj_t BgL_dirnamez00_2796)
{ AN_OBJECT;
{ /* Llib/os.scm 318 */
{ /* Llib/os.scm 319 */
bool_t BgL_auxz00_3557;
{ /* Llib/os.scm 319 */
char * BgL_dirnamez00_3304;
{ /* Llib/os.scm 319 */
obj_t BgL_auxz00_3558;
if(
STRINGP(BgL_dirnamez00_2796))
{ /* Llib/os.scm 319 */
BgL_auxz00_3558 = BgL_dirnamez00_2796
; }  else 
{ 
obj_t BgL_auxz00_3561;
BgL_auxz00_3561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)12277)), BGl_string3087z00zz__osz00, BGl_string3079z00zz__osz00, BgL_dirnamez00_2796); 
FAILURE(BgL_auxz00_3561,BFALSE,BFALSE);} 
BgL_dirnamez00_3304 = 
BSTRING_TO_STRING(BgL_auxz00_3558); } 
if(
chdir(BgL_dirnamez00_3304))
{ /* Llib/os.scm 319 */
BgL_auxz00_3557 = ((bool_t)0)
; }  else 
{ /* Llib/os.scm 319 */
BgL_auxz00_3557 = ((bool_t)1)
; } } 
return 
BBOOL(BgL_auxz00_3557);} } 
}



/* pwd */
BGL_EXPORTED_DEF obj_t BGl_pwdz00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 324 */
{ /* Llib/os.scm 325 */
obj_t BgL_stringz00_844;
BgL_stringz00_844 = 
make_string(((long)1024), ((unsigned char)' ')); 
{ /* Llib/os.scm 326 */
char * BgL_auxz00_3570;
{ /* Llib/os.scm 326 */
int BgL_auxz00_3573;char * BgL_auxz00_3571;
BgL_auxz00_3573 = 
(int)(((long)1024)); 
BgL_auxz00_3571 = 
BSTRING_TO_STRING(BgL_stringz00_844); 
BgL_auxz00_3570 = 
(char *)(long)getcwd(BgL_auxz00_3571, BgL_auxz00_3573); } 
return 
string_to_bstring(BgL_auxz00_3570);} } } 
}



/* _pwd */
obj_t BGl__pwdz00zz__osz00(obj_t BgL_envz00_2797)
{ AN_OBJECT;
{ /* Llib/os.scm 324 */
return 
BGl_pwdz00zz__osz00();} 
}



/* basename */
BGL_EXPORTED_DEF obj_t BGl_basenamez00zz__osz00(obj_t BgL_stringz00_10)
{ AN_OBJECT;
{ /* Llib/os.scm 331 */
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3088z00zz__osz00))
{ /* Llib/os.scm 332 */
return 
BGl_mingwzd2basenamezd2zz__osz00(BgL_stringz00_10);}  else 
{ /* Llib/os.scm 332 */
return 
BGl_defaultzd2basenamezd2zz__osz00(BgL_stringz00_10);} } 
}



/* _basename */
obj_t BGl__basenamez00zz__osz00(obj_t BgL_envz00_2798, obj_t BgL_stringz00_2799)
{ AN_OBJECT;
{ /* Llib/os.scm 331 */
{ /* Llib/os.scm 332 */
obj_t BgL_auxz00_3583;
if(
STRINGP(BgL_stringz00_2799))
{ /* Llib/os.scm 332 */
BgL_auxz00_3583 = BgL_stringz00_2799
; }  else 
{ 
obj_t BgL_auxz00_3586;
BgL_auxz00_3586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)12882)), BGl_string3089z00zz__osz00, BGl_string3090z00zz__osz00, BgL_stringz00_2799); 
FAILURE(BgL_auxz00_3586,BFALSE,BFALSE);} 
return 
BGl_basenamez00zz__osz00(BgL_auxz00_3583);} } 
}



/* mingw-basename */
obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t BgL_stringz00_11)
{ AN_OBJECT;
{ /* Llib/os.scm 339 */
{ /* Llib/os.scm 340 */
long BgL_nz00_849;bool_t BgL_stopz00_850;
BgL_nz00_849 = 
STRING_LENGTH(BgL_stringz00_11); 
BgL_stopz00_850 = ((bool_t)0); 
{ 
long BgL_iz00_853;
BgL_iz00_853 = 
(BgL_nz00_849-((long)1)); 
BgL_zc3anonymousza31963ze3z83_854:
if(
(
BBOOL(BgL_stopz00_850)==BTRUE))
{ /* Llib/os.scm 342 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_11, 
(BgL_iz00_853+((long)2)), BgL_nz00_849);}  else 
{ /* Llib/os.scm 342 */
if(
(BgL_iz00_853<((long)0)))
{ /* Llib/os.scm 345 */
BgL_stopz00_850 = ((bool_t)1); }  else 
{ /* Llib/os.scm 347 */
bool_t BgL__ortest_1828z00_858;
{ /* Llib/os.scm 347 */
unsigned char BgL_auxz00_3599;
{ /* Llib/os.scm 347 */
long BgL_l2620z00_2864;
BgL_l2620z00_2864 = 
STRING_LENGTH(BgL_stringz00_11); 
if(
BOUND_CHECK(BgL_iz00_853, BgL_l2620z00_2864))
{ /* Llib/os.scm 347 */
BgL_auxz00_3599 = 
STRING_REF(BgL_stringz00_11, BgL_iz00_853)
; }  else 
{ 
obj_t BgL_auxz00_3604;
BgL_auxz00_3604 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)13413)), BGl_string3086z00zz__osz00, 
BINT(BgL_iz00_853), BgL_stringz00_11); 
FAILURE(BgL_auxz00_3604,BFALSE,BFALSE);} } 
BgL__ortest_1828z00_858 = 
(BgL_auxz00_3599==((unsigned char)'\\')); } 
if(BgL__ortest_1828z00_858)
{ /* Llib/os.scm 347 */
BgL_stopz00_850 = BgL__ortest_1828z00_858; }  else 
{ /* Llib/os.scm 348 */
unsigned char BgL_auxz00_3611;
{ /* Llib/os.scm 348 */
long BgL_l2624z00_2868;
BgL_l2624z00_2868 = 
STRING_LENGTH(BgL_stringz00_11); 
if(
BOUND_CHECK(BgL_iz00_853, BgL_l2624z00_2868))
{ /* Llib/os.scm 348 */
BgL_auxz00_3611 = 
STRING_REF(BgL_stringz00_11, BgL_iz00_853)
; }  else 
{ 
obj_t BgL_auxz00_3616;
BgL_auxz00_3616 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)13456)), BGl_string3086z00zz__osz00, 
BINT(BgL_iz00_853), BgL_stringz00_11); 
FAILURE(BgL_auxz00_3616,BFALSE,BFALSE);} } 
BgL_stopz00_850 = 
(BgL_auxz00_3611==((unsigned char)'/')); } } 
{ 
long BgL_iz00_3622;
BgL_iz00_3622 = 
(BgL_iz00_853-((long)1)); 
BgL_iz00_853 = BgL_iz00_3622; 
goto BgL_zc3anonymousza31963ze3z83_854;} } } } } 
}



/* default-basename */
obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t BgL_stringz00_12)
{ AN_OBJECT;
{ /* Llib/os.scm 353 */
{ /* Llib/os.scm 354 */
long BgL_lenz00_863;
BgL_lenz00_863 = 
(
STRING_LENGTH(BgL_stringz00_12)-((long)1)); 
{ /* Llib/os.scm 354 */
long BgL_startz00_864;
{ /* Llib/os.scm 355 */
bool_t BgL_testz00_3627;
if(
(BgL_lenz00_863>((long)0)))
{ /* Llib/os.scm 356 */
unsigned char BgL_char2z00_1883;
BgL_char2z00_1883 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 356 */
unsigned char BgL_auxz00_3631;
{ /* Llib/os.scm 356 */
long BgL_l2628z00_2872;
BgL_l2628z00_2872 = 
STRING_LENGTH(BgL_stringz00_12); 
if(
BOUND_CHECK(BgL_lenz00_863, BgL_l2628z00_2872))
{ /* Llib/os.scm 356 */
BgL_auxz00_3631 = 
STRING_REF(BgL_stringz00_12, BgL_lenz00_863)
; }  else 
{ 
obj_t BgL_auxz00_3636;
BgL_auxz00_3636 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)13839)), BGl_string3086z00zz__osz00, 
BINT(BgL_lenz00_863), BgL_stringz00_12); 
FAILURE(BgL_auxz00_3636,BFALSE,BFALSE);} } 
BgL_testz00_3627 = 
(BgL_auxz00_3631==BgL_char2z00_1883); } }  else 
{ /* Llib/os.scm 355 */
BgL_testz00_3627 = ((bool_t)0)
; } 
if(BgL_testz00_3627)
{ /* Llib/os.scm 355 */
BgL_startz00_864 = 
(BgL_lenz00_863-((long)1)); }  else 
{ /* Llib/os.scm 355 */
BgL_startz00_864 = BgL_lenz00_863; } } 
{ /* Llib/os.scm 355 */

{ 
long BgL_indexz00_866;
BgL_indexz00_866 = BgL_startz00_864; 
BgL_zc3anonymousza31970ze3z83_867:
if(
(BgL_indexz00_866==((long)-1)))
{ /* Llib/os.scm 362 */
return BgL_stringz00_12;}  else 
{ /* Llib/os.scm 364 */
bool_t BgL_testz00_3645;
{ /* Llib/os.scm 364 */
unsigned char BgL_char2z00_1891;
BgL_char2z00_1891 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 364 */
unsigned char BgL_auxz00_3647;
{ /* Llib/os.scm 364 */
long BgL_l2632z00_2876;
BgL_l2632z00_2876 = 
STRING_LENGTH(BgL_stringz00_12); 
if(
BOUND_CHECK(BgL_indexz00_866, BgL_l2632z00_2876))
{ /* Llib/os.scm 364 */
BgL_auxz00_3647 = 
STRING_REF(BgL_stringz00_12, BgL_indexz00_866)
; }  else 
{ 
obj_t BgL_auxz00_3652;
BgL_auxz00_3652 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)14016)), BGl_string3086z00zz__osz00, 
BINT(BgL_indexz00_866), BgL_stringz00_12); 
FAILURE(BgL_auxz00_3652,BFALSE,BFALSE);} } 
BgL_testz00_3645 = 
(BgL_auxz00_3647==BgL_char2z00_1891); } } 
if(BgL_testz00_3645)
{ /* Llib/os.scm 364 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_12, 
(BgL_indexz00_866+((long)1)), 
(BgL_startz00_864+((long)1)));}  else 
{ 
long BgL_indexz00_3661;
BgL_indexz00_3661 = 
(BgL_indexz00_866-((long)1)); 
BgL_indexz00_866 = BgL_indexz00_3661; 
goto BgL_zc3anonymousza31970ze3z83_867;} } } } } } } 
}



/* prefix */
BGL_EXPORTED_DEF obj_t BGl_prefixz00zz__osz00(obj_t BgL_stringz00_13)
{ AN_OBJECT;
{ /* Llib/os.scm 372 */
{ /* Llib/os.scm 373 */
long BgL_lenz00_880;
BgL_lenz00_880 = 
(
STRING_LENGTH(BgL_stringz00_13)-((long)1)); 
{ 
long BgL_ez00_882;long BgL_sz00_883;
BgL_ez00_882 = BgL_lenz00_880; 
BgL_sz00_883 = BgL_lenz00_880; 
BgL_zc3anonymousza31982ze3z83_884:
if(
(BgL_sz00_883<=((long)0)))
{ /* Llib/os.scm 377 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_13, ((long)0), 
(((long)1)+BgL_ez00_882));}  else 
{ /* Llib/os.scm 380 */
bool_t BgL_testz00_3669;
{ /* Llib/os.scm 380 */
bool_t BgL_testz00_3670;
{ /* Llib/os.scm 380 */
obj_t BgL_auxz00_3671;
{ /* Llib/os.scm 380 */
long BgL_l2636z00_2880;
BgL_l2636z00_2880 = 
STRING_LENGTH(BgL_stringz00_13); 
if(
BOUND_CHECK(BgL_sz00_883, BgL_l2636z00_2880))
{ /* Llib/os.scm 380 */
BgL_auxz00_3671 = 
BCHAR(
STRING_REF(BgL_stringz00_13, BgL_sz00_883))
; }  else 
{ 
obj_t BgL_auxz00_3677;
BgL_auxz00_3677 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)14637)), BGl_string3086z00zz__osz00, 
BINT(BgL_sz00_883), BgL_stringz00_13); 
FAILURE(BgL_auxz00_3677,BFALSE,BFALSE);} } 
BgL_testz00_3670 = 
(BgL_auxz00_3671==
BCHAR(((unsigned char)'.'))); } 
if(BgL_testz00_3670)
{ /* Llib/os.scm 380 */
BgL_testz00_3669 = 
(BgL_ez00_882==BgL_lenz00_880)
; }  else 
{ /* Llib/os.scm 380 */
BgL_testz00_3669 = ((bool_t)0)
; } } 
if(BgL_testz00_3669)
{ 
long BgL_sz00_3687;long BgL_ez00_3685;
BgL_ez00_3685 = 
(BgL_sz00_883-((long)1)); 
BgL_sz00_3687 = 
(BgL_sz00_883-((long)1)); 
BgL_sz00_883 = BgL_sz00_3687; 
BgL_ez00_882 = BgL_ez00_3685; 
goto BgL_zc3anonymousza31982ze3z83_884;}  else 
{ 
long BgL_sz00_3689;
BgL_sz00_3689 = 
(BgL_sz00_883-((long)1)); 
BgL_sz00_883 = BgL_sz00_3689; 
goto BgL_zc3anonymousza31982ze3z83_884;} } } } } 
}



/* _prefix */
obj_t BGl__prefixz00zz__osz00(obj_t BgL_envz00_2800, obj_t BgL_stringz00_2801)
{ AN_OBJECT;
{ /* Llib/os.scm 372 */
{ /* Llib/os.scm 373 */
obj_t BgL_auxz00_3691;
if(
STRINGP(BgL_stringz00_2801))
{ /* Llib/os.scm 373 */
BgL_auxz00_3691 = BgL_stringz00_2801
; }  else 
{ 
obj_t BgL_auxz00_3694;
BgL_auxz00_3694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)14413)), BGl_string3091z00zz__osz00, BGl_string3090z00zz__osz00, BgL_stringz00_2801); 
FAILURE(BgL_auxz00_3694,BFALSE,BFALSE);} 
return 
BGl_prefixz00zz__osz00(BgL_auxz00_3691);} } 
}



/* dirname */
BGL_EXPORTED_DEF obj_t BGl_dirnamez00zz__osz00(obj_t BgL_stringz00_14)
{ AN_OBJECT;
{ /* Llib/os.scm 388 */
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3088z00zz__osz00))
{ /* Llib/os.scm 389 */
return 
BGl_mingwzd2dirnamezd2zz__osz00(BgL_stringz00_14);}  else 
{ /* Llib/os.scm 389 */
return 
BGl_defaultzd2dirnamezd2zz__osz00(BgL_stringz00_14);} } 
}



/* _dirname */
obj_t BGl__dirnamez00zz__osz00(obj_t BgL_envz00_2802, obj_t BgL_stringz00_2803)
{ AN_OBJECT;
{ /* Llib/os.scm 388 */
{ /* Llib/os.scm 389 */
obj_t BgL_auxz00_3704;
if(
STRINGP(BgL_stringz00_2803))
{ /* Llib/os.scm 389 */
BgL_auxz00_3704 = BgL_stringz00_2803
; }  else 
{ 
obj_t BgL_auxz00_3707;
BgL_auxz00_3707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)15049)), BGl_string3092z00zz__osz00, BGl_string3090z00zz__osz00, BgL_stringz00_2803); 
FAILURE(BgL_auxz00_3707,BFALSE,BFALSE);} 
return 
BGl_dirnamez00zz__osz00(BgL_auxz00_3704);} } 
}



/* mingw-dirname */
obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_15)
{ AN_OBJECT;
{ /* Llib/os.scm 396 */
{ /* Llib/os.scm 397 */
long BgL_nz00_900;bool_t BgL_stopz00_901;
BgL_nz00_900 = 
STRING_LENGTH(BgL_stringz00_15); 
BgL_stopz00_901 = ((bool_t)0); 
{ 
long BgL_iz00_904;
BgL_iz00_904 = 
(BgL_nz00_900-((long)1)); 
BgL_zc3anonymousza31999ze3z83_905:
if(
(
BBOOL(BgL_stopz00_901)==BTRUE))
{ /* Llib/os.scm 399 */
if(
(BgL_iz00_904<((long)0)))
{ /* Llib/os.scm 401 */
return BGl_string3061z00zz__osz00;}  else 
{ /* Llib/os.scm 401 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_15, ((long)0), 
(BgL_iz00_904+((long)1)));} }  else 
{ /* Llib/os.scm 399 */
if(
(BgL_iz00_904<((long)0)))
{ /* Llib/os.scm 404 */
BgL_stopz00_901 = ((bool_t)1); }  else 
{ /* Llib/os.scm 406 */
bool_t BgL__ortest_1830z00_911;
{ /* Llib/os.scm 406 */
unsigned char BgL_auxz00_3722;
{ /* Llib/os.scm 406 */
long BgL_l2640z00_2884;
BgL_l2640z00_2884 = 
STRING_LENGTH(BgL_stringz00_15); 
if(
BOUND_CHECK(BgL_iz00_904, BgL_l2640z00_2884))
{ /* Llib/os.scm 406 */
BgL_auxz00_3722 = 
STRING_REF(BgL_stringz00_15, BgL_iz00_904)
; }  else 
{ 
obj_t BgL_auxz00_3727;
BgL_auxz00_3727 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)15611)), BGl_string3086z00zz__osz00, 
BINT(BgL_iz00_904), BgL_stringz00_15); 
FAILURE(BgL_auxz00_3727,BFALSE,BFALSE);} } 
BgL__ortest_1830z00_911 = 
(BgL_auxz00_3722==((unsigned char)'\\')); } 
if(BgL__ortest_1830z00_911)
{ /* Llib/os.scm 406 */
BgL_stopz00_901 = BgL__ortest_1830z00_911; }  else 
{ /* Llib/os.scm 407 */
unsigned char BgL_auxz00_3734;
{ /* Llib/os.scm 407 */
long BgL_l2644z00_2888;
BgL_l2644z00_2888 = 
STRING_LENGTH(BgL_stringz00_15); 
if(
BOUND_CHECK(BgL_iz00_904, BgL_l2644z00_2888))
{ /* Llib/os.scm 407 */
BgL_auxz00_3734 = 
STRING_REF(BgL_stringz00_15, BgL_iz00_904)
; }  else 
{ 
obj_t BgL_auxz00_3739;
BgL_auxz00_3739 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)15654)), BGl_string3086z00zz__osz00, 
BINT(BgL_iz00_904), BgL_stringz00_15); 
FAILURE(BgL_auxz00_3739,BFALSE,BFALSE);} } 
BgL_stopz00_901 = 
(BgL_auxz00_3734==((unsigned char)'/')); } } 
{ 
long BgL_iz00_3745;
BgL_iz00_3745 = 
(BgL_iz00_904-((long)1)); 
BgL_iz00_904 = BgL_iz00_3745; 
goto BgL_zc3anonymousza31999ze3z83_905;} } } } } 
}



/* default-dirname */
obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_16)
{ AN_OBJECT;
{ /* Llib/os.scm 412 */
{ /* Llib/os.scm 413 */
long BgL_lenz00_916;
BgL_lenz00_916 = 
(
STRING_LENGTH(BgL_stringz00_16)-((long)1)); 
if(
(BgL_lenz00_916==((long)-1)))
{ /* Llib/os.scm 414 */
return BGl_string3061z00zz__osz00;}  else 
{ 
long BgL_readz00_919;
BgL_readz00_919 = BgL_lenz00_916; 
BgL_zc3anonymousza32009ze3z83_920:
if(
(BgL_readz00_919==((long)0)))
{ /* Llib/os.scm 419 */
bool_t BgL_testz00_3754;
{ /* Llib/os.scm 419 */
unsigned char BgL_char2z00_1949;
BgL_char2z00_1949 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 419 */
unsigned char BgL_auxz00_3756;
{ /* Llib/os.scm 419 */
long BgL_l2648z00_2892;
BgL_l2648z00_2892 = 
STRING_LENGTH(BgL_stringz00_16); 
if(
BOUND_CHECK(BgL_readz00_919, BgL_l2648z00_2892))
{ /* Llib/os.scm 419 */
BgL_auxz00_3756 = 
STRING_REF(BgL_stringz00_16, BgL_readz00_919)
; }  else 
{ 
obj_t BgL_auxz00_3761;
BgL_auxz00_3761 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16089)), BGl_string3086z00zz__osz00, 
BINT(BgL_readz00_919), BgL_stringz00_16); 
FAILURE(BgL_auxz00_3761,BFALSE,BFALSE);} } 
BgL_testz00_3754 = 
(BgL_auxz00_3756==BgL_char2z00_1949); } } 
if(BgL_testz00_3754)
{ /* Llib/os.scm 420 */
obj_t BgL_list2012z00_923;
BgL_list2012z00_923 = 
MAKE_PAIR(
BCHAR(FILE_SEPARATOR), BNIL); 
{ /* Llib/os.scm 420 */
obj_t BgL_res2595z00_1956;
{ /* Llib/os.scm 420 */
obj_t BgL_arg2421z00_1953;
BgL_arg2421z00_1953 = 
CAR(BgL_list2012z00_923); 
{ /* Llib/os.scm 420 */
unsigned char BgL_auxz00_3770;
{ /* Llib/os.scm 420 */
obj_t BgL_auxz00_3771;
if(
CHARP(BgL_arg2421z00_1953))
{ /* Llib/os.scm 420 */
BgL_auxz00_3771 = BgL_arg2421z00_1953
; }  else 
{ 
obj_t BgL_auxz00_3774;
BgL_auxz00_3774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16145)), BGl_string3093z00zz__osz00, BGl_string3094z00zz__osz00, BgL_arg2421z00_1953); 
FAILURE(BgL_auxz00_3774,BFALSE,BFALSE);} 
BgL_auxz00_3770 = 
CCHAR(BgL_auxz00_3771); } 
BgL_res2595z00_1956 = 
make_string(((long)1), BgL_auxz00_3770); } } 
return BgL_res2595z00_1956;} }  else 
{ /* Llib/os.scm 419 */
return BGl_string3061z00zz__osz00;} }  else 
{ /* Llib/os.scm 422 */
bool_t BgL_testz00_3780;
{ /* Llib/os.scm 422 */
unsigned char BgL_char2z00_1960;
BgL_char2z00_1960 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 422 */
unsigned char BgL_auxz00_3782;
{ /* Llib/os.scm 422 */
long BgL_l2652z00_2896;
BgL_l2652z00_2896 = 
STRING_LENGTH(BgL_stringz00_16); 
if(
BOUND_CHECK(BgL_readz00_919, BgL_l2652z00_2896))
{ /* Llib/os.scm 422 */
BgL_auxz00_3782 = 
STRING_REF(BgL_stringz00_16, BgL_readz00_919)
; }  else 
{ 
obj_t BgL_auxz00_3787;
BgL_auxz00_3787 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16208)), BGl_string3086z00zz__osz00, 
BINT(BgL_readz00_919), BgL_stringz00_16); 
FAILURE(BgL_auxz00_3787,BFALSE,BFALSE);} } 
BgL_testz00_3780 = 
(BgL_auxz00_3782==BgL_char2z00_1960); } } 
if(BgL_testz00_3780)
{ /* Llib/os.scm 422 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_16, ((long)0), BgL_readz00_919);}  else 
{ 
long BgL_readz00_3794;
BgL_readz00_3794 = 
(BgL_readz00_919-((long)1)); 
BgL_readz00_919 = BgL_readz00_3794; 
goto BgL_zc3anonymousza32009ze3z83_920;} } } } } 
}



/* suffix */
BGL_EXPORTED_DEF obj_t BGl_suffixz00zz__osz00(obj_t BgL_stringz00_17)
{ AN_OBJECT;
{ /* Llib/os.scm 430 */
{ /* Llib/os.scm 431 */
long BgL_lenz00_931;
BgL_lenz00_931 = 
STRING_LENGTH(BgL_stringz00_17); 
{ /* Llib/os.scm 431 */
long BgL_lenzd21zd2_932;
BgL_lenzd21zd2_932 = 
(BgL_lenz00_931-((long)1)); 
{ /* Llib/os.scm 432 */

{ 
long BgL_readz00_934;
BgL_readz00_934 = BgL_lenzd21zd2_932; 
BgL_zc3anonymousza32019ze3z83_935:
if(
(BgL_readz00_934<((long)0)))
{ /* Llib/os.scm 435 */
return BGl_string3095z00zz__osz00;}  else 
{ /* Llib/os.scm 437 */
bool_t BgL_testz00_3800;
{ /* Llib/os.scm 437 */
unsigned char BgL_char2z00_1971;
BgL_char2z00_1971 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 437 */
unsigned char BgL_auxz00_3802;
{ /* Llib/os.scm 437 */
long BgL_l2656z00_2900;
BgL_l2656z00_2900 = 
STRING_LENGTH(BgL_stringz00_17); 
if(
BOUND_CHECK(BgL_readz00_934, BgL_l2656z00_2900))
{ /* Llib/os.scm 437 */
BgL_auxz00_3802 = 
STRING_REF(BgL_stringz00_17, BgL_readz00_934)
; }  else 
{ 
obj_t BgL_auxz00_3807;
BgL_auxz00_3807 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16751)), BGl_string3086z00zz__osz00, 
BINT(BgL_readz00_934), BgL_stringz00_17); 
FAILURE(BgL_auxz00_3807,BFALSE,BFALSE);} } 
BgL_testz00_3800 = 
(BgL_auxz00_3802==BgL_char2z00_1971); } } 
if(BgL_testz00_3800)
{ /* Llib/os.scm 437 */
return BGl_string3095z00zz__osz00;}  else 
{ /* Llib/os.scm 439 */
bool_t BgL_testz00_3813;
{ /* Llib/os.scm 439 */
unsigned char BgL_auxz00_3814;
{ /* Llib/os.scm 439 */
long BgL_l2660z00_2904;
BgL_l2660z00_2904 = 
STRING_LENGTH(BgL_stringz00_17); 
if(
BOUND_CHECK(BgL_readz00_934, BgL_l2660z00_2904))
{ /* Llib/os.scm 439 */
BgL_auxz00_3814 = 
STRING_REF(BgL_stringz00_17, BgL_readz00_934)
; }  else 
{ 
obj_t BgL_auxz00_3819;
BgL_auxz00_3819 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16831)), BGl_string3086z00zz__osz00, 
BINT(BgL_readz00_934), BgL_stringz00_17); 
FAILURE(BgL_auxz00_3819,BFALSE,BFALSE);} } 
BgL_testz00_3813 = 
(BgL_auxz00_3814==((unsigned char)'.')); } 
if(BgL_testz00_3813)
{ /* Llib/os.scm 439 */
if(
(BgL_readz00_934==BgL_lenzd21zd2_932))
{ /* Llib/os.scm 441 */
return BGl_string3095z00zz__osz00;}  else 
{ /* Llib/os.scm 441 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_17, 
(BgL_readz00_934+((long)1)), BgL_lenz00_931);} }  else 
{ 
long BgL_readz00_3829;
BgL_readz00_3829 = 
(BgL_readz00_934-((long)1)); 
BgL_readz00_934 = BgL_readz00_3829; 
goto BgL_zc3anonymousza32019ze3z83_935;} } } } } } } } 
}



/* _suffix */
obj_t BGl__suffixz00zz__osz00(obj_t BgL_envz00_2804, obj_t BgL_stringz00_2805)
{ AN_OBJECT;
{ /* Llib/os.scm 430 */
{ /* Llib/os.scm 431 */
obj_t BgL_auxz00_3831;
if(
STRINGP(BgL_stringz00_2805))
{ /* Llib/os.scm 431 */
BgL_auxz00_3831 = BgL_stringz00_2805
; }  else 
{ 
obj_t BgL_auxz00_3834;
BgL_auxz00_3834 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)16574)), BGl_string3096z00zz__osz00, BGl_string3090z00zz__osz00, BgL_stringz00_2805); 
FAILURE(BgL_auxz00_3834,BFALSE,BFALSE);} 
return 
BGl_suffixz00zz__osz00(BgL_auxz00_3831);} } 
}



/* chmod */
BGL_EXPORTED_DEF bool_t BGl_chmodz00zz__osz00(obj_t BgL_filez00_18, obj_t BgL_modez00_19)
{ AN_OBJECT;
{ /* Llib/os.scm 451 */
{ 
obj_t BgL_modez00_946;bool_t BgL_readzf3zf3_947;bool_t BgL_writezf3zf3_948;bool_t BgL_execzf3zf3_949;
{ /* Llib/os.scm 452 */
obj_t BgL_auxz00_3839;
BgL_modez00_946 = BgL_modez00_19; 
BgL_readzf3zf3_947 = ((bool_t)0); 
BgL_writezf3zf3_948 = ((bool_t)0); 
BgL_execzf3zf3_949 = ((bool_t)0); 
BgL_zc3anonymousza32029ze3z83_950:
if(
NULLP(BgL_modez00_946))
{ /* Llib/os.scm 457 */
BgL_auxz00_3839 = 
BBOOL(
bgl_chmod(
BSTRING_TO_STRING(BgL_filez00_18), BgL_readzf3zf3_947, BgL_writezf3zf3_948, BgL_execzf3zf3_949))
; }  else 
{ /* Llib/os.scm 459 */
bool_t BgL_testz00_3845;
{ /* Llib/os.scm 459 */
obj_t BgL_auxz00_3846;
{ /* Llib/os.scm 459 */
obj_t BgL_pairz00_1983;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 459 */
BgL_pairz00_1983 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3849;
BgL_auxz00_3849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17494)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3849,BFALSE,BFALSE);} 
BgL_auxz00_3846 = 
CAR(BgL_pairz00_1983); } 
BgL_testz00_3845 = 
INTEGERP(BgL_auxz00_3846); } 
if(BgL_testz00_3845)
{ /* Llib/os.scm 460 */
obj_t BgL_arg2033z00_953;
{ /* Llib/os.scm 460 */
obj_t BgL_pairz00_1985;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 460 */
BgL_pairz00_1985 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3857;
BgL_auxz00_3857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17527)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3857,BFALSE,BFALSE);} 
BgL_arg2033z00_953 = 
CAR(BgL_pairz00_1985); } 
{ /* Llib/os.scm 460 */
bool_t BgL_auxz00_3862;
{ /* Llib/os.scm 460 */
int BgL_auxz00_3865;char * BgL_auxz00_3863;
{ /* Llib/os.scm 460 */
obj_t BgL_auxz00_3866;
if(
INTEGERP(BgL_arg2033z00_953))
{ /* Llib/os.scm 460 */
BgL_auxz00_3866 = BgL_arg2033z00_953
; }  else 
{ 
obj_t BgL_auxz00_3869;
BgL_auxz00_3869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17531)), BGl_string3093z00zz__osz00, BGl_string3073z00zz__osz00, BgL_arg2033z00_953); 
FAILURE(BgL_auxz00_3869,BFALSE,BFALSE);} 
BgL_auxz00_3865 = 
CINT(BgL_auxz00_3866); } 
BgL_auxz00_3863 = 
BSTRING_TO_STRING(BgL_filez00_18); 
BgL_auxz00_3862 = 
chmod(BgL_auxz00_3863, BgL_auxz00_3865); } 
BgL_auxz00_3839 = 
BBOOL(BgL_auxz00_3862); } }  else 
{ /* Llib/os.scm 461 */
bool_t BgL_testz00_3876;
{ /* Llib/os.scm 461 */
obj_t BgL_auxz00_3877;
{ /* Llib/os.scm 461 */
obj_t BgL_pairz00_1986;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 461 */
BgL_pairz00_1986 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3880;
BgL_auxz00_3880 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17548)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3880,BFALSE,BFALSE);} 
BgL_auxz00_3877 = 
CAR(BgL_pairz00_1986); } 
BgL_testz00_3876 = 
(BgL_auxz00_3877==BGl_symbol3097z00zz__osz00); } 
if(BgL_testz00_3876)
{ /* Llib/os.scm 462 */
obj_t BgL_arg2036z00_955;
{ /* Llib/os.scm 462 */
obj_t BgL_pairz00_1987;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 462 */
BgL_pairz00_1987 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3888;
BgL_auxz00_3888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17575)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3888,BFALSE,BFALSE);} 
BgL_arg2036z00_955 = 
CDR(BgL_pairz00_1987); } 
{ 
bool_t BgL_readzf3zf3_3894;obj_t BgL_modez00_3893;
BgL_modez00_3893 = BgL_arg2036z00_955; 
BgL_readzf3zf3_3894 = ((bool_t)1); 
BgL_readzf3zf3_947 = BgL_readzf3zf3_3894; 
BgL_modez00_946 = BgL_modez00_3893; 
goto BgL_zc3anonymousza32029ze3z83_950;} }  else 
{ /* Llib/os.scm 466 */
bool_t BgL_testz00_3895;
{ /* Llib/os.scm 466 */
obj_t BgL_auxz00_3896;
{ /* Llib/os.scm 466 */
obj_t BgL_pairz00_1988;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 466 */
BgL_pairz00_1988 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3899;
BgL_auxz00_3899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17618)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3899,BFALSE,BFALSE);} 
BgL_auxz00_3896 = 
CAR(BgL_pairz00_1988); } 
BgL_testz00_3895 = 
(BgL_auxz00_3896==BGl_symbol3099z00zz__osz00); } 
if(BgL_testz00_3895)
{ /* Llib/os.scm 467 */
obj_t BgL_arg2038z00_957;
{ /* Llib/os.scm 467 */
obj_t BgL_pairz00_1989;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 467 */
BgL_pairz00_1989 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3907;
BgL_auxz00_3907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17646)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3907,BFALSE,BFALSE);} 
BgL_arg2038z00_957 = 
CDR(BgL_pairz00_1989); } 
{ 
bool_t BgL_writezf3zf3_3913;obj_t BgL_modez00_3912;
BgL_modez00_3912 = BgL_arg2038z00_957; 
BgL_writezf3zf3_3913 = ((bool_t)1); 
BgL_writezf3zf3_948 = BgL_writezf3zf3_3913; 
BgL_modez00_946 = BgL_modez00_3912; 
goto BgL_zc3anonymousza32029ze3z83_950;} }  else 
{ /* Llib/os.scm 471 */
bool_t BgL_testz00_3914;
{ /* Llib/os.scm 471 */
obj_t BgL_auxz00_3915;
{ /* Llib/os.scm 471 */
obj_t BgL_pairz00_1990;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 471 */
BgL_pairz00_1990 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3918;
BgL_auxz00_3918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17688)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3918,BFALSE,BFALSE);} 
BgL_auxz00_3915 = 
CAR(BgL_pairz00_1990); } 
BgL_testz00_3914 = 
(BgL_auxz00_3915==BGl_symbol3101z00zz__osz00); } 
if(BgL_testz00_3914)
{ /* Llib/os.scm 472 */
obj_t BgL_arg2040z00_959;
{ /* Llib/os.scm 472 */
obj_t BgL_pairz00_1991;
if(
PAIRP(BgL_modez00_946))
{ /* Llib/os.scm 472 */
BgL_pairz00_1991 = BgL_modez00_946; }  else 
{ 
obj_t BgL_auxz00_3926;
BgL_auxz00_3926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17718)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_modez00_946); 
FAILURE(BgL_auxz00_3926,BFALSE,BFALSE);} 
BgL_arg2040z00_959 = 
CDR(BgL_pairz00_1991); } 
{ 
bool_t BgL_execzf3zf3_3932;obj_t BgL_modez00_3931;
BgL_modez00_3931 = BgL_arg2040z00_959; 
BgL_execzf3zf3_3932 = ((bool_t)1); 
BgL_execzf3zf3_949 = BgL_execzf3zf3_3932; 
BgL_modez00_946 = BgL_modez00_3931; 
goto BgL_zc3anonymousza32029ze3z83_950;} }  else 
{ /* Llib/os.scm 471 */
BgL_auxz00_3839 = 
BGl_errorz00zz__errorz00(BGl_string3103z00zz__osz00, BGl_string3104z00zz__osz00, BgL_modez00_946)
; } } } } } 
return 
CBOOL(BgL_auxz00_3839);} } } 
}



/* _chmod */
obj_t BGl__chmodz00zz__osz00(obj_t BgL_envz00_2806, obj_t BgL_filez00_2807, obj_t BgL_modez00_2808)
{ AN_OBJECT;
{ /* Llib/os.scm 451 */
{ /* Llib/os.scm 457 */
bool_t BgL_auxz00_3935;
{ /* Llib/os.scm 457 */
obj_t BgL_auxz00_3936;
if(
STRINGP(BgL_filez00_2807))
{ /* Llib/os.scm 457 */
BgL_auxz00_3936 = BgL_filez00_2807
; }  else 
{ 
obj_t BgL_auxz00_3939;
BgL_auxz00_3939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)17426)), BGl_string3105z00zz__osz00, BGl_string3090z00zz__osz00, BgL_filez00_2807); 
FAILURE(BgL_auxz00_3939,BFALSE,BFALSE);} 
BgL_auxz00_3935 = 
BGl_chmodz00zz__osz00(BgL_auxz00_3936, BgL_modez00_2808); } 
return 
BBOOL(BgL_auxz00_3935);} } 
}



/* make-file-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t BgL_directoryz00_20, obj_t BgL_filez00_21)
{ AN_OBJECT;
{ /* Llib/os.scm 485 */
{ 
long BgL_ldirz00_979;
{ /* Llib/os.scm 493 */
long BgL_ldirz00_969;
BgL_ldirz00_969 = 
STRING_LENGTH(BgL_directoryz00_20); 
{ /* Llib/os.scm 493 */

if(
(BgL_ldirz00_969==((long)1)))
{ /* Llib/os.scm 496 */
bool_t BgL_testz00_3948;
{ /* Llib/os.scm 496 */
unsigned char BgL_auxz00_3949;
if(
BOUND_CHECK(((long)0), BgL_ldirz00_969))
{ /* Llib/os.scm 496 */
BgL_auxz00_3949 = 
STRING_REF(BgL_directoryz00_20, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_3953;
BgL_auxz00_3953 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18659)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_directoryz00_20); 
FAILURE(BgL_auxz00_3953,BFALSE,BFALSE);} 
BgL_testz00_3948 = 
(BgL_auxz00_3949==((unsigned char)'.')); } 
if(BgL_testz00_3948)
{ /* Llib/os.scm 496 */
return BgL_filez00_21;}  else 
{ /* Llib/os.scm 498 */
bool_t BgL_testz00_3959;
{ /* Llib/os.scm 498 */
unsigned char BgL_char2z00_2002;
BgL_char2z00_2002 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 498 */
unsigned char BgL_auxz00_3961;
{ /* Llib/os.scm 498 */
long BgL_l2668z00_2912;
BgL_l2668z00_2912 = 
STRING_LENGTH(BgL_directoryz00_20); 
if(
BOUND_CHECK(((long)0), BgL_l2668z00_2912))
{ /* Llib/os.scm 498 */
BgL_auxz00_3961 = 
STRING_REF(BgL_directoryz00_20, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_3966;
BgL_auxz00_3966 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18717)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_directoryz00_20); 
FAILURE(BgL_auxz00_3966,BFALSE,BFALSE);} } 
BgL_testz00_3959 = 
(BgL_auxz00_3961==BgL_char2z00_2002); } } 
if(BgL_testz00_3959)
{ /* Llib/os.scm 499 */
long BgL_lfilez00_973;
BgL_lfilez00_973 = 
STRING_LENGTH(BgL_filez00_21); 
{ /* Llib/os.scm 499 */
long BgL_lenz00_974;
BgL_lenz00_974 = 
(BgL_ldirz00_969+BgL_lfilez00_973); 
{ /* Llib/os.scm 500 */
obj_t BgL_strz00_975;
{ /* Llib/os.scm 501 */
obj_t BgL_list2051z00_976;
BgL_list2051z00_976 = 
MAKE_PAIR(
BCHAR(FILE_SEPARATOR), BNIL); 
{ /* Llib/os.scm 501 */
obj_t BgL_res2596z00_2012;
{ /* Llib/os.scm 501 */
obj_t BgL_arg2421z00_2009;
BgL_arg2421z00_2009 = 
CAR(BgL_list2051z00_976); 
{ /* Llib/os.scm 501 */
unsigned char BgL_auxz00_3977;
{ /* Llib/os.scm 501 */
obj_t BgL_auxz00_3978;
if(
CHARP(BgL_arg2421z00_2009))
{ /* Llib/os.scm 501 */
BgL_auxz00_3978 = BgL_arg2421z00_2009
; }  else 
{ 
obj_t BgL_auxz00_3981;
BgL_auxz00_3981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18851)), BGl_string3106z00zz__osz00, BGl_string3094z00zz__osz00, BgL_arg2421z00_2009); 
FAILURE(BgL_auxz00_3981,BFALSE,BFALSE);} 
BgL_auxz00_3977 = 
CCHAR(BgL_auxz00_3978); } 
BgL_res2596z00_2012 = 
make_string(BgL_lenz00_974, BgL_auxz00_3977); } } 
BgL_strz00_975 = BgL_res2596z00_2012; } } 
{ /* Llib/os.scm 501 */

blit_string(BgL_directoryz00_20, ((long)0), BgL_strz00_975, ((long)0), BgL_ldirz00_969); 
blit_string(BgL_filez00_21, ((long)0), BgL_strz00_975, BgL_ldirz00_969, BgL_lfilez00_973); 
return BgL_strz00_975;} } } }  else 
{ /* Llib/os.scm 498 */
BgL_ldirz00_979 = BgL_ldirz00_969; 
BgL_zc3anonymousza32054ze3z83_980:
{ /* Llib/os.scm 487 */
long BgL_lfilez00_981;
BgL_lfilez00_981 = 
STRING_LENGTH(BgL_filez00_21); 
{ /* Llib/os.scm 487 */
long BgL_lenz00_982;
BgL_lenz00_982 = 
(BgL_ldirz00_979+
(BgL_lfilez00_981+((long)1))); 
{ /* Llib/os.scm 488 */
obj_t BgL_strz00_983;
{ /* Llib/os.scm 489 */
obj_t BgL_list2057z00_986;
BgL_list2057z00_986 = 
MAKE_PAIR(
BCHAR(FILE_SEPARATOR), BNIL); 
{ /* Llib/os.scm 489 */
obj_t BgL_res2597z00_2034;
{ /* Llib/os.scm 489 */
obj_t BgL_arg2421z00_2031;
BgL_arg2421z00_2031 = 
CAR(BgL_list2057z00_986); 
{ /* Llib/os.scm 489 */
unsigned char BgL_auxz00_3995;
{ /* Llib/os.scm 489 */
obj_t BgL_auxz00_3996;
if(
CHARP(BgL_arg2421z00_2031))
{ /* Llib/os.scm 489 */
BgL_auxz00_3996 = BgL_arg2421z00_2031
; }  else 
{ 
obj_t BgL_auxz00_3999;
BgL_auxz00_3999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18424)), BGl_string3066z00zz__osz00, BGl_string3094z00zz__osz00, BgL_arg2421z00_2031); 
FAILURE(BgL_auxz00_3999,BFALSE,BFALSE);} 
BgL_auxz00_3995 = 
CCHAR(BgL_auxz00_3996); } 
BgL_res2597z00_2034 = 
make_string(BgL_lenz00_982, BgL_auxz00_3995); } } 
BgL_strz00_983 = BgL_res2597z00_2034; } } 
{ /* Llib/os.scm 489 */

blit_string(BgL_directoryz00_20, ((long)0), BgL_strz00_983, ((long)0), BgL_ldirz00_979); 
blit_string(BgL_filez00_21, ((long)0), BgL_strz00_983, 
(((long)1)+BgL_ldirz00_979), BgL_lfilez00_981); 
return BgL_strz00_983;} } } } } } }  else 
{ 
long BgL_ldirz00_4008;
BgL_ldirz00_4008 = BgL_ldirz00_969; 
BgL_ldirz00_979 = BgL_ldirz00_4008; 
goto BgL_zc3anonymousza32054ze3z83_980;} } } } } 
}



/* _make-file-name */
obj_t BGl__makezd2filezd2namez00zz__osz00(obj_t BgL_envz00_2809, obj_t BgL_directoryz00_2810, obj_t BgL_filez00_2811)
{ AN_OBJECT;
{ /* Llib/os.scm 485 */
{ /* Llib/os.scm 487 */
obj_t BgL_auxz00_4016;obj_t BgL_auxz00_4009;
if(
STRINGP(BgL_filez00_2811))
{ /* Llib/os.scm 487 */
BgL_auxz00_4016 = BgL_filez00_2811
; }  else 
{ 
obj_t BgL_auxz00_4019;
BgL_auxz00_4019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18340)), BGl_string3107z00zz__osz00, BGl_string3090z00zz__osz00, BgL_filez00_2811); 
FAILURE(BgL_auxz00_4019,BFALSE,BFALSE);} 
if(
STRINGP(BgL_directoryz00_2810))
{ /* Llib/os.scm 487 */
BgL_auxz00_4009 = BgL_directoryz00_2810
; }  else 
{ 
obj_t BgL_auxz00_4012;
BgL_auxz00_4012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)18340)), BGl_string3107z00zz__osz00, BGl_string3090z00zz__osz00, BgL_directoryz00_2810); 
FAILURE(BgL_auxz00_4012,BFALSE,BFALSE);} 
return 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_4009, BgL_auxz00_4016);} } 
}



/* make-file-path */
BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t BgL_directoryz00_22, obj_t BgL_filez00_23, obj_t BgL_objz00_24)
{ AN_OBJECT;
{ /* Llib/os.scm 515 */
{ /* Llib/os.scm 516 */
bool_t BgL_testz00_4024;
if(
(
STRING_LENGTH(BgL_directoryz00_22)==((long)0)))
{ /* Llib/os.scm 516 */
BgL_testz00_4024 = 
NULLP(BgL_objz00_24)
; }  else 
{ /* Llib/os.scm 516 */
BgL_testz00_4024 = ((bool_t)0)
; } 
if(BgL_testz00_4024)
{ /* Llib/os.scm 516 */
return BgL_filez00_23;}  else 
{ /* Llib/os.scm 518 */
long BgL_ldirz00_990;
BgL_ldirz00_990 = 
STRING_LENGTH(BgL_directoryz00_22); 
{ /* Llib/os.scm 518 */
long BgL_lfilez00_991;
BgL_lfilez00_991 = 
STRING_LENGTH(BgL_filez00_23); 
{ /* Llib/os.scm 519 */
obj_t BgL_lenz00_992;
{ /* Llib/os.scm 520 */
long BgL_g1831z00_1014;
BgL_g1831z00_1014 = 
(BgL_ldirz00_990+
(((long)1)+BgL_lfilez00_991)); 
{ 
obj_t BgL_objz00_1016;long BgL_lz00_1017;
BgL_objz00_1016 = BgL_objz00_24; 
BgL_lz00_1017 = BgL_g1831z00_1014; 
BgL_zc3anonymousza32075ze3z83_1018:
if(
NULLP(BgL_objz00_1016))
{ /* Llib/os.scm 523 */
BgL_lenz00_992 = 
BINT(BgL_lz00_1017); }  else 
{ /* Llib/os.scm 525 */
bool_t BgL_testz00_4036;
{ /* Llib/os.scm 525 */
obj_t BgL_auxz00_4037;
{ /* Llib/os.scm 525 */
obj_t BgL_pairz00_2058;
if(
PAIRP(BgL_objz00_1016))
{ /* Llib/os.scm 525 */
BgL_pairz00_2058 = BgL_objz00_1016; }  else 
{ 
obj_t BgL_auxz00_4040;
BgL_auxz00_4040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)19846)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_objz00_1016); 
FAILURE(BgL_auxz00_4040,BFALSE,BFALSE);} 
BgL_auxz00_4037 = 
CAR(BgL_pairz00_2058); } 
BgL_testz00_4036 = 
STRINGP(BgL_auxz00_4037); } 
if(BgL_testz00_4036)
{ /* Llib/os.scm 530 */
obj_t BgL_arg2078z00_1021;long BgL_arg2079z00_1022;
{ /* Llib/os.scm 530 */
obj_t BgL_pairz00_2060;
if(
PAIRP(BgL_objz00_1016))
{ /* Llib/os.scm 530 */
BgL_pairz00_2060 = BgL_objz00_1016; }  else 
{ 
obj_t BgL_auxz00_4048;
BgL_auxz00_4048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)19960)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_objz00_1016); 
FAILURE(BgL_auxz00_4048,BFALSE,BFALSE);} 
BgL_arg2078z00_1021 = 
CDR(BgL_pairz00_2060); } 
{ /* Llib/os.scm 530 */
long BgL_auxz00_4053;
{ /* Llib/os.scm 531 */
long BgL_auxz00_4054;
{ /* Llib/os.scm 531 */
obj_t BgL_stringz00_2062;
{ /* Llib/os.scm 531 */
obj_t BgL_pairz00_2061;
BgL_pairz00_2061 = BgL_objz00_1016; 
{ /* Llib/os.scm 531 */
obj_t BgL_aux2910z00_3154;
BgL_aux2910z00_3154 = 
CAR(BgL_pairz00_2061); 
if(
STRINGP(BgL_aux2910z00_3154))
{ /* Llib/os.scm 531 */
BgL_stringz00_2062 = BgL_aux2910z00_3154; }  else 
{ 
obj_t BgL_auxz00_4058;
BgL_auxz00_4058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20004)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_aux2910z00_3154); 
FAILURE(BgL_auxz00_4058,BFALSE,BFALSE);} } } 
BgL_auxz00_4054 = 
STRING_LENGTH(BgL_stringz00_2062); } 
BgL_auxz00_4053 = 
(BgL_auxz00_4054+BgL_lz00_1017); } 
BgL_arg2079z00_1022 = 
(((long)1)+BgL_auxz00_4053); } 
{ 
long BgL_lz00_4066;obj_t BgL_objz00_4065;
BgL_objz00_4065 = BgL_arg2078z00_1021; 
BgL_lz00_4066 = BgL_arg2079z00_1022; 
BgL_lz00_1017 = BgL_lz00_4066; 
BgL_objz00_1016 = BgL_objz00_4065; 
goto BgL_zc3anonymousza32075ze3z83_1018;} }  else 
{ /* Llib/os.scm 526 */
obj_t BgL_arg2084z00_1027;obj_t BgL_arg2086z00_1029;
BgL_arg2084z00_1027 = BGl_symbol3108z00zz__osz00; 
{ /* Llib/os.scm 528 */
obj_t BgL_pairz00_2067;
if(
PAIRP(BgL_objz00_1016))
{ /* Llib/os.scm 528 */
BgL_pairz00_2067 = BgL_objz00_1016; }  else 
{ 
obj_t BgL_auxz00_4069;
BgL_auxz00_4069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)19927)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_objz00_1016); 
FAILURE(BgL_auxz00_4069,BFALSE,BFALSE);} 
BgL_arg2086z00_1029 = 
CAR(BgL_pairz00_2067); } 
BgL_lenz00_992 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg2084z00_1027, BGl_string3079z00zz__osz00, BgL_arg2086z00_1029); } } } } 
{ /* Llib/os.scm 520 */
obj_t BgL_strz00_993;
{ /* Llib/os.scm 533 */
obj_t BgL_list2074z00_1013;
BgL_list2074z00_1013 = 
MAKE_PAIR(
BCHAR(FILE_SEPARATOR), BNIL); 
{ /* Llib/os.scm 533 */
obj_t BgL_res2598z00_2074;
{ /* Llib/os.scm 533 */
long BgL_kz00_2068;
{ /* Llib/os.scm 533 */
obj_t BgL_auxz00_4077;
if(
INTEGERP(BgL_lenz00_992))
{ /* Llib/os.scm 533 */
BgL_auxz00_4077 = BgL_lenz00_992
; }  else 
{ 
obj_t BgL_auxz00_4080;
BgL_auxz00_4080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20047)), BGl_string3109z00zz__osz00, BGl_string3110z00zz__osz00, BgL_lenz00_992); 
FAILURE(BgL_auxz00_4080,BFALSE,BFALSE);} 
BgL_kz00_2068 = 
(long)CINT(BgL_auxz00_4077); } 
{ /* Llib/os.scm 533 */
obj_t BgL_arg2421z00_2071;
BgL_arg2421z00_2071 = 
CAR(BgL_list2074z00_1013); 
{ /* Llib/os.scm 533 */
unsigned char BgL_auxz00_4086;
{ /* Llib/os.scm 533 */
obj_t BgL_auxz00_4087;
if(
CHARP(BgL_arg2421z00_2071))
{ /* Llib/os.scm 533 */
BgL_auxz00_4087 = BgL_arg2421z00_2071
; }  else 
{ 
obj_t BgL_auxz00_4090;
BgL_auxz00_4090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20047)), BGl_string3109z00zz__osz00, BGl_string3094z00zz__osz00, BgL_arg2421z00_2071); 
FAILURE(BgL_auxz00_4090,BFALSE,BFALSE);} 
BgL_auxz00_4086 = 
CCHAR(BgL_auxz00_4087); } 
BgL_res2598z00_2074 = 
make_string(BgL_kz00_2068, BgL_auxz00_4086); } } } 
BgL_strz00_993 = BgL_res2598z00_2074; } } 
{ /* Llib/os.scm 533 */

blit_string(BgL_directoryz00_22, ((long)0), BgL_strz00_993, ((long)0), BgL_ldirz00_990); 
blit_string(BgL_filez00_23, ((long)0), BgL_strz00_993, 
(((long)1)+BgL_ldirz00_990), BgL_lfilez00_991); 
{ /* Llib/os.scm 536 */
long BgL_g1832z00_996;
BgL_g1832z00_996 = 
(((long)1)+
(BgL_ldirz00_990+BgL_lfilez00_991)); 
{ 
obj_t BgL_objz00_998;long BgL_wz00_999;
BgL_objz00_998 = BgL_objz00_24; 
BgL_wz00_999 = BgL_g1832z00_996; 
BgL_zc3anonymousza32062ze3z83_1000:
if(
NULLP(BgL_objz00_998))
{ /* Llib/os.scm 538 */
return BgL_strz00_993;}  else 
{ /* Llib/os.scm 540 */
long BgL_loz00_1002;
{ /* Llib/os.scm 540 */
obj_t BgL_stringz00_2093;
{ /* Llib/os.scm 540 */
obj_t BgL_pairz00_2092;
if(
PAIRP(BgL_objz00_998))
{ /* Llib/os.scm 540 */
BgL_pairz00_2092 = BgL_objz00_998; }  else 
{ 
obj_t BgL_auxz00_4105;
BgL_auxz00_4105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20308)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_objz00_998); 
FAILURE(BgL_auxz00_4105,BFALSE,BFALSE);} 
{ /* Llib/os.scm 540 */
obj_t BgL_aux2922z00_3166;
BgL_aux2922z00_3166 = 
CAR(BgL_pairz00_2092); 
if(
STRINGP(BgL_aux2922z00_3166))
{ /* Llib/os.scm 540 */
BgL_stringz00_2093 = BgL_aux2922z00_3166; }  else 
{ 
obj_t BgL_auxz00_4112;
BgL_auxz00_4112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20303)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_aux2922z00_3166); 
FAILURE(BgL_auxz00_4112,BFALSE,BFALSE);} } } 
BgL_loz00_1002 = 
STRING_LENGTH(BgL_stringz00_2093); } 
{ /* Llib/os.scm 541 */
obj_t BgL_arg2064z00_1003;long BgL_arg2066z00_1005;
BgL_arg2064z00_1003 = 
CAR(BgL_objz00_998); 
BgL_arg2066z00_1005 = 
(((long)1)+BgL_wz00_999); 
{ /* Llib/os.scm 541 */
obj_t BgL_s1z00_2097;
if(
STRINGP(BgL_arg2064z00_1003))
{ /* Llib/os.scm 541 */
BgL_s1z00_2097 = BgL_arg2064z00_1003; }  else 
{ 
obj_t BgL_auxz00_4121;
BgL_auxz00_4121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20347)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2064z00_1003); 
FAILURE(BgL_auxz00_4121,BFALSE,BFALSE);} 
blit_string(BgL_s1z00_2097, ((long)0), BgL_strz00_993, BgL_arg2066z00_1005, BgL_loz00_1002); } } 
{ 
long BgL_wz00_4128;obj_t BgL_objz00_4126;
BgL_objz00_4126 = 
CDR(BgL_objz00_998); 
BgL_wz00_4128 = 
(BgL_wz00_999+
(BgL_loz00_1002+((long)1))); 
BgL_wz00_999 = BgL_wz00_4128; 
BgL_objz00_998 = BgL_objz00_4126; 
goto BgL_zc3anonymousza32062ze3z83_1000;} } } } } } } } } } } 
}



/* _make-file-path */
obj_t BGl__makezd2filezd2pathz00zz__osz00(obj_t BgL_envz00_2812, obj_t BgL_directoryz00_2813, obj_t BgL_filez00_2814, obj_t BgL_objz00_2815)
{ AN_OBJECT;
{ /* Llib/os.scm 515 */
{ /* Llib/os.scm 516 */
obj_t BgL_auxz00_4138;obj_t BgL_auxz00_4131;
if(
STRINGP(BgL_filez00_2814))
{ /* Llib/os.scm 516 */
BgL_auxz00_4138 = BgL_filez00_2814
; }  else 
{ 
obj_t BgL_auxz00_4141;
BgL_auxz00_4141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)19559)), BGl_string3111z00zz__osz00, BGl_string3090z00zz__osz00, BgL_filez00_2814); 
FAILURE(BgL_auxz00_4141,BFALSE,BFALSE);} 
if(
STRINGP(BgL_directoryz00_2813))
{ /* Llib/os.scm 516 */
BgL_auxz00_4131 = BgL_directoryz00_2813
; }  else 
{ 
obj_t BgL_auxz00_4134;
BgL_auxz00_4134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)19559)), BGl_string3111z00zz__osz00, BGl_string3090z00zz__osz00, BgL_directoryz00_2813); 
FAILURE(BgL_auxz00_4134,BFALSE,BFALSE);} 
return 
BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_4131, BgL_auxz00_4138, BgL_objz00_2815);} } 
}



/* make-static-lib-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t BgL_libz00_25, obj_t BgL_backendz00_26)
{ AN_OBJECT;
{ /* Llib/os.scm 547 */
if(
(BgL_backendz00_26==BGl_symbol3112z00zz__osz00))
{ /* Llib/os.scm 548 */
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3075z00zz__osz00))
{ /* Llib/os.scm 550 */
return 
string_append_3(BgL_libz00_25, BGl_string3061z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));}  else 
{ /* Llib/os.scm 552 */
obj_t BgL_list2096z00_1039;
{ /* Llib/os.scm 552 */
obj_t BgL_arg2098z00_1041;
{ /* Llib/os.scm 552 */
obj_t BgL_arg2099z00_1042;
{ /* Llib/os.scm 552 */
obj_t BgL_arg2101z00_1044;
BgL_arg2101z00_1044 = 
MAKE_PAIR(
string_to_bstring(STATIC_LIB_SUFFIX), BNIL); 
BgL_arg2099z00_1042 = 
MAKE_PAIR(BGl_string3061z00zz__osz00, BgL_arg2101z00_1044); } 
BgL_arg2098z00_1041 = 
MAKE_PAIR(BgL_libz00_25, BgL_arg2099z00_1042); } 
BgL_list2096z00_1039 = 
MAKE_PAIR(BGl_string3114z00zz__osz00, BgL_arg2098z00_1041); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2096z00_1039);} }  else 
{ /* Llib/os.scm 548 */
if(
(BgL_backendz00_26==BGl_symbol3115z00zz__osz00))
{ /* Llib/os.scm 548 */
return 
string_append(BgL_libz00_25, BGl_string3117z00zz__osz00);}  else 
{ /* Llib/os.scm 548 */
if(
(BgL_backendz00_26==BGl_symbol3118z00zz__osz00))
{ /* Llib/os.scm 548 */
return 
string_append(BgL_libz00_25, BGl_string3120z00zz__osz00);}  else 
{ /* Llib/os.scm 548 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3121z00zz__osz00, BGl_string3123z00zz__osz00, BgL_backendz00_26);} } } } 
}



/* _make-static-lib-name */
obj_t BGl__makezd2staticzd2libzd2namezd2zz__osz00(obj_t BgL_envz00_2816, obj_t BgL_libz00_2817, obj_t BgL_backendz00_2818)
{ AN_OBJECT;
{ /* Llib/os.scm 547 */
{ /* Llib/os.scm 548 */
obj_t BgL_auxz00_4173;obj_t BgL_auxz00_4166;
if(
SYMBOLP(BgL_backendz00_2818))
{ /* Llib/os.scm 548 */
BgL_auxz00_4173 = BgL_backendz00_2818
; }  else 
{ 
obj_t BgL_auxz00_4176;
BgL_auxz00_4176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20686)), BGl_string3124z00zz__osz00, BGl_string3125z00zz__osz00, BgL_backendz00_2818); 
FAILURE(BgL_auxz00_4176,BFALSE,BFALSE);} 
if(
STRINGP(BgL_libz00_2817))
{ /* Llib/os.scm 548 */
BgL_auxz00_4166 = BgL_libz00_2817
; }  else 
{ 
obj_t BgL_auxz00_4169;
BgL_auxz00_4169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)20686)), BGl_string3124z00zz__osz00, BGl_string3090z00zz__osz00, BgL_libz00_2817); 
FAILURE(BgL_auxz00_4169,BFALSE,BFALSE);} 
return 
BGl_makezd2staticzd2libzd2namezd2zz__osz00(BgL_auxz00_4166, BgL_auxz00_4173);} } 
}



/* make-shared-lib-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t BgL_libz00_27, obj_t BgL_backendz00_28)
{ AN_OBJECT;
{ /* Llib/os.scm 563 */
if(
(BgL_backendz00_28==BGl_symbol3112z00zz__osz00))
{ /* Llib/os.scm 564 */
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3075z00zz__osz00))
{ /* Llib/os.scm 566 */
return 
string_append_3(BgL_libz00_27, BGl_string3061z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));}  else 
{ /* Llib/os.scm 568 */
obj_t BgL_list2108z00_1052;
{ /* Llib/os.scm 568 */
obj_t BgL_arg2110z00_1054;
{ /* Llib/os.scm 568 */
obj_t BgL_arg2111z00_1055;
{ /* Llib/os.scm 568 */
obj_t BgL_arg2113z00_1057;
BgL_arg2113z00_1057 = 
MAKE_PAIR(
string_to_bstring(SHARED_LIB_SUFFIX), BNIL); 
BgL_arg2111z00_1055 = 
MAKE_PAIR(BGl_string3061z00zz__osz00, BgL_arg2113z00_1057); } 
BgL_arg2110z00_1054 = 
MAKE_PAIR(BgL_libz00_27, BgL_arg2111z00_1055); } 
BgL_list2108z00_1052 = 
MAKE_PAIR(BGl_string3114z00zz__osz00, BgL_arg2110z00_1054); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2108z00_1052);} }  else 
{ /* Llib/os.scm 564 */
if(
(BgL_backendz00_28==BGl_symbol3115z00zz__osz00))
{ /* Llib/os.scm 564 */
return 
string_append(BgL_libz00_27, BGl_string3117z00zz__osz00);}  else 
{ /* Llib/os.scm 564 */
if(
(BgL_backendz00_28==BGl_symbol3118z00zz__osz00))
{ /* Llib/os.scm 564 */
return 
string_append(BgL_libz00_27, BGl_string3120z00zz__osz00);}  else 
{ /* Llib/os.scm 564 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3126z00zz__osz00, BGl_string3123z00zz__osz00, BgL_backendz00_28);} } } } 
}



/* _make-shared-lib-name */
obj_t BGl__makezd2sharedzd2libzd2namezd2zz__osz00(obj_t BgL_envz00_2819, obj_t BgL_libz00_2820, obj_t BgL_backendz00_2821)
{ AN_OBJECT;
{ /* Llib/os.scm 563 */
{ /* Llib/os.scm 564 */
obj_t BgL_auxz00_4208;obj_t BgL_auxz00_4201;
if(
SYMBOLP(BgL_backendz00_2821))
{ /* Llib/os.scm 564 */
BgL_auxz00_4208 = BgL_backendz00_2821
; }  else 
{ 
obj_t BgL_auxz00_4211;
BgL_auxz00_4211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)21341)), BGl_string3128z00zz__osz00, BGl_string3125z00zz__osz00, BgL_backendz00_2821); 
FAILURE(BgL_auxz00_4211,BFALSE,BFALSE);} 
if(
STRINGP(BgL_libz00_2820))
{ /* Llib/os.scm 564 */
BgL_auxz00_4201 = BgL_libz00_2820
; }  else 
{ 
obj_t BgL_auxz00_4204;
BgL_auxz00_4204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)21341)), BGl_string3128z00zz__osz00, BGl_string3090z00zz__osz00, BgL_libz00_2820); 
FAILURE(BgL_auxz00_4204,BFALSE,BFALSE);} 
return 
BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_auxz00_4201, BgL_auxz00_4208);} } 
}



/* find-file/path */
BGL_EXPORTED_DEF obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t BgL_filezd2namezd2_29, obj_t BgL_pathz00_30)
{ AN_OBJECT;
{ /* Llib/os.scm 579 */
{ 
obj_t BgL_filezd2namezd2_1079;
if(
(
STRING_LENGTH(BgL_filezd2namezd2_29)==((long)0)))
{ /* Llib/os.scm 591 */
return BFALSE;}  else 
{ /* Llib/os.scm 593 */
bool_t BgL_testz00_4219;
{ /* Llib/os.scm 593 */
bool_t BgL_testz00_4220;
{ /* Llib/os.scm 593 */
unsigned char BgL_char2z00_2129;
BgL_char2z00_2129 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 593 */
unsigned char BgL_auxz00_4222;
{ /* Llib/os.scm 593 */
long BgL_l2692z00_2936;
BgL_l2692z00_2936 = 
STRING_LENGTH(BgL_filezd2namezd2_29); 
if(
BOUND_CHECK(((long)0), BgL_l2692z00_2936))
{ /* Llib/os.scm 593 */
BgL_auxz00_4222 = 
STRING_REF(BgL_filezd2namezd2_29, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4227;
BgL_auxz00_4227 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22456)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_filezd2namezd2_29); 
FAILURE(BgL_auxz00_4227,BFALSE,BFALSE);} } 
BgL_testz00_4220 = 
(BgL_auxz00_4222==BgL_char2z00_2129); } } 
if(BgL_testz00_4220)
{ /* Llib/os.scm 593 */
BgL_testz00_4219 = ((bool_t)1)
; }  else 
{ /* Llib/os.scm 593 */
BgL_filezd2namezd2_1079 = BgL_filezd2namezd2_29; 
if(
bigloo_strcmp(
string_to_bstring(OS_CLASS), BGl_string3088z00zz__osz00))
{ /* Llib/os.scm 582 */
bool_t BgL__ortest_1833z00_1082;
{ /* Llib/os.scm 582 */
unsigned char BgL_auxz00_4236;
{ /* Llib/os.scm 582 */
long BgL_l2672z00_2916;
BgL_l2672z00_2916 = 
STRING_LENGTH(BgL_filezd2namezd2_1079); 
if(
BOUND_CHECK(((long)0), BgL_l2672z00_2916))
{ /* Llib/os.scm 582 */
BgL_auxz00_4236 = 
STRING_REF(BgL_filezd2namezd2_1079, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4241;
BgL_auxz00_4241 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22095)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_filezd2namezd2_1079); 
FAILURE(BgL_auxz00_4241,BFALSE,BFALSE);} } 
BgL__ortest_1833z00_1082 = 
(BgL_auxz00_4236==((unsigned char)'/')); } 
if(BgL__ortest_1833z00_1082)
{ /* Llib/os.scm 582 */
BgL_testz00_4219 = BgL__ortest_1833z00_1082
; }  else 
{ /* Llib/os.scm 583 */
bool_t BgL__ortest_1834z00_1083;
{ /* Llib/os.scm 583 */
unsigned char BgL_auxz00_4248;
{ /* Llib/os.scm 583 */
long BgL_l2676z00_2920;
BgL_l2676z00_2920 = 
STRING_LENGTH(BgL_filezd2namezd2_1079); 
if(
BOUND_CHECK(((long)0), BgL_l2676z00_2920))
{ /* Llib/os.scm 583 */
BgL_auxz00_4248 = 
STRING_REF(BgL_filezd2namezd2_1079, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4253;
BgL_auxz00_4253 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22140)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_filezd2namezd2_1079); 
FAILURE(BgL_auxz00_4253,BFALSE,BFALSE);} } 
BgL__ortest_1834z00_1083 = 
(BgL_auxz00_4248==((unsigned char)'\\')); } 
if(BgL__ortest_1834z00_1083)
{ /* Llib/os.scm 583 */
BgL_testz00_4219 = BgL__ortest_1834z00_1083
; }  else 
{ /* Llib/os.scm 583 */
if(
(
STRING_LENGTH(BgL_filezd2namezd2_1079)>((long)2)))
{ /* Llib/os.scm 585 */
bool_t BgL_testz00_4263;
{ /* Llib/os.scm 585 */
unsigned char BgL_auxz00_4264;
{ /* Llib/os.scm 585 */
long BgL_l2680z00_2924;
BgL_l2680z00_2924 = 
STRING_LENGTH(BgL_filezd2namezd2_1079); 
if(
BOUND_CHECK(((long)1), BgL_l2680z00_2924))
{ /* Llib/os.scm 585 */
BgL_auxz00_4264 = 
STRING_REF(BgL_filezd2namezd2_1079, ((long)1))
; }  else 
{ 
obj_t BgL_auxz00_4269;
BgL_auxz00_4269 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22232)), BGl_string3086z00zz__osz00, 
BINT(((long)1)), BgL_filezd2namezd2_1079); 
FAILURE(BgL_auxz00_4269,BFALSE,BFALSE);} } 
BgL_testz00_4263 = 
(BgL_auxz00_4264==((unsigned char)':')); } 
if(BgL_testz00_4263)
{ /* Llib/os.scm 586 */
bool_t BgL__ortest_1836z00_1086;
{ /* Llib/os.scm 586 */
unsigned char BgL_auxz00_4275;
{ /* Llib/os.scm 586 */
long BgL_l2684z00_2928;
BgL_l2684z00_2928 = 
STRING_LENGTH(BgL_filezd2namezd2_1079); 
if(
BOUND_CHECK(((long)2), BgL_l2684z00_2928))
{ /* Llib/os.scm 586 */
BgL_auxz00_4275 = 
STRING_REF(BgL_filezd2namezd2_1079, ((long)2))
; }  else 
{ 
obj_t BgL_auxz00_4280;
BgL_auxz00_4280 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22283)), BGl_string3086z00zz__osz00, 
BINT(((long)2)), BgL_filezd2namezd2_1079); 
FAILURE(BgL_auxz00_4280,BFALSE,BFALSE);} } 
BgL__ortest_1836z00_1086 = 
(BgL_auxz00_4275==((unsigned char)'/')); } 
if(BgL__ortest_1836z00_1086)
{ /* Llib/os.scm 586 */
BgL_testz00_4219 = BgL__ortest_1836z00_1086
; }  else 
{ /* Llib/os.scm 587 */
unsigned char BgL_auxz00_4287;
{ /* Llib/os.scm 587 */
long BgL_l2688z00_2932;
BgL_l2688z00_2932 = 
STRING_LENGTH(BgL_filezd2namezd2_1079); 
if(
BOUND_CHECK(((long)2), BgL_l2688z00_2932))
{ /* Llib/os.scm 587 */
BgL_auxz00_4287 = 
STRING_REF(BgL_filezd2namezd2_1079, ((long)2))
; }  else 
{ 
obj_t BgL_auxz00_4292;
BgL_auxz00_4292 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22327)), BGl_string3086z00zz__osz00, 
BINT(((long)2)), BgL_filezd2namezd2_1079); 
FAILURE(BgL_auxz00_4292,BFALSE,BFALSE);} } 
BgL_testz00_4219 = 
(BgL_auxz00_4287==((unsigned char)'\\')); } }  else 
{ /* Llib/os.scm 585 */
BgL_testz00_4219 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 584 */
BgL_testz00_4219 = ((bool_t)0)
; } } } }  else 
{ /* Llib/os.scm 581 */
BgL_testz00_4219 = ((bool_t)0)
; } } } 
if(BgL_testz00_4219)
{ /* Llib/os.scm 593 */
if(
fexists(
BSTRING_TO_STRING(BgL_filezd2namezd2_29)))
{ /* Llib/os.scm 595 */
return BgL_filezd2namezd2_29;}  else 
{ /* Llib/os.scm 595 */
return BFALSE;} }  else 
{ 
obj_t BgL_pathz00_1067;
BgL_pathz00_1067 = BgL_pathz00_30; 
BgL_zc3anonymousza32121ze3z83_1068:
if(
NULLP(BgL_pathz00_1067))
{ /* Llib/os.scm 600 */
return BFALSE;}  else 
{ /* Llib/os.scm 602 */
obj_t BgL_fnamez00_1070;
{ /* Llib/os.scm 602 */
obj_t BgL_arg2125z00_1073;
{ /* Llib/os.scm 602 */
obj_t BgL_pairz00_2132;
if(
PAIRP(BgL_pathz00_1067))
{ /* Llib/os.scm 602 */
BgL_pairz00_2132 = BgL_pathz00_1067; }  else 
{ 
obj_t BgL_auxz00_4305;
BgL_auxz00_4305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22736)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_pathz00_1067); 
FAILURE(BgL_auxz00_4305,BFALSE,BFALSE);} 
BgL_arg2125z00_1073 = 
CAR(BgL_pairz00_2132); } 
{ /* Llib/os.scm 602 */
obj_t BgL_auxz00_4310;
if(
STRINGP(BgL_arg2125z00_1073))
{ /* Llib/os.scm 602 */
BgL_auxz00_4310 = BgL_arg2125z00_1073
; }  else 
{ 
obj_t BgL_auxz00_4313;
BgL_auxz00_4313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22740)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2125z00_1073); 
FAILURE(BgL_auxz00_4313,BFALSE,BFALSE);} 
BgL_fnamez00_1070 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_4310, BgL_filezd2namezd2_29); } } 
if(
fexists(
BSTRING_TO_STRING(BgL_fnamez00_1070)))
{ /* Llib/os.scm 603 */
return BgL_fnamez00_1070;}  else 
{ 
obj_t BgL_pathz00_4321;
BgL_pathz00_4321 = 
CDR(BgL_pathz00_1067); 
BgL_pathz00_1067 = BgL_pathz00_4321; 
goto BgL_zc3anonymousza32121ze3z83_1068;} } } } } } 
}



/* _find-file/path */
obj_t BGl__findzd2filezf2pathz20zz__osz00(obj_t BgL_envz00_2822, obj_t BgL_filezd2namezd2_2823, obj_t BgL_pathz00_2824)
{ AN_OBJECT;
{ /* Llib/os.scm 579 */
{ /* Llib/os.scm 581 */
obj_t BgL_auxz00_4323;
if(
STRINGP(BgL_filezd2namezd2_2823))
{ /* Llib/os.scm 581 */
BgL_auxz00_4323 = BgL_filezd2namezd2_2823
; }  else 
{ 
obj_t BgL_auxz00_4326;
BgL_auxz00_4326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)22046)), BGl_string3129z00zz__osz00, BGl_string3090z00zz__osz00, BgL_filezd2namezd2_2823); 
FAILURE(BgL_auxz00_4326,BFALSE,BFALSE);} 
return 
BGl_findzd2filezf2pathz20zz__osz00(BgL_auxz00_4323, BgL_pathz00_2824);} } 
}



/* file-name->list */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t BgL_namez00_31)
{ AN_OBJECT;
{ /* Llib/os.scm 610 */
{ /* Llib/os.scm 611 */
long BgL_lenz00_1097;
BgL_lenz00_1097 = 
STRING_LENGTH(BgL_namez00_31); 
{ /* Llib/os.scm 612 */
bool_t BgL_testz00_4332;
if(
(BgL_lenz00_1097==((long)1)))
{ /* Llib/os.scm 612 */
unsigned char BgL_char2z00_2166;
BgL_char2z00_2166 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 612 */
unsigned char BgL_auxz00_4336;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1097))
{ /* Llib/os.scm 612 */
BgL_auxz00_4336 = 
STRING_REF(BgL_namez00_31, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4340;
BgL_auxz00_4340 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)23154)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_namez00_31); 
FAILURE(BgL_auxz00_4340,BFALSE,BFALSE);} 
BgL_testz00_4332 = 
(BgL_auxz00_4336==BgL_char2z00_2166); } }  else 
{ /* Llib/os.scm 612 */
BgL_testz00_4332 = ((bool_t)0)
; } 
if(BgL_testz00_4332)
{ /* Llib/os.scm 613 */
obj_t BgL_list2147z00_1099;
BgL_list2147z00_1099 = 
MAKE_PAIR(BGl_string3095z00zz__osz00, BNIL); 
return BgL_list2147z00_1099;}  else 
{ 
long BgL_startz00_1102;long BgL_stopz00_1103;obj_t BgL_resz00_1104;
BgL_startz00_1102 = ((long)0); 
BgL_stopz00_1103 = ((long)0); 
BgL_resz00_1104 = BNIL; 
BgL_zc3anonymousza32148ze3z83_1105:
if(
(BgL_stopz00_1103==BgL_lenz00_1097))
{ /* Llib/os.scm 619 */
obj_t BgL_arg2150z00_1107;
BgL_arg2150z00_1107 = 
MAKE_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_31, BgL_startz00_1102, BgL_stopz00_1103), BgL_resz00_1104); 
return 
bgl_reverse_bang(BgL_arg2150z00_1107);}  else 
{ /* Llib/os.scm 620 */
bool_t BgL_testz00_4352;
{ /* Llib/os.scm 620 */
unsigned char BgL_char2z00_2174;
BgL_char2z00_2174 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 620 */
unsigned char BgL_auxz00_4354;
{ /* Llib/os.scm 620 */
long BgL_l2700z00_2944;
BgL_l2700z00_2944 = 
STRING_LENGTH(BgL_namez00_31); 
if(
BOUND_CHECK(BgL_stopz00_1103, BgL_l2700z00_2944))
{ /* Llib/os.scm 620 */
BgL_auxz00_4354 = 
STRING_REF(BgL_namez00_31, BgL_stopz00_1103)
; }  else 
{ 
obj_t BgL_auxz00_4359;
BgL_auxz00_4359 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)23359)), BGl_string3086z00zz__osz00, 
BINT(BgL_stopz00_1103), BgL_namez00_31); 
FAILURE(BgL_auxz00_4359,BFALSE,BFALSE);} } 
BgL_testz00_4352 = 
(BgL_auxz00_4354==BgL_char2z00_2174); } } 
if(BgL_testz00_4352)
{ /* Llib/os.scm 621 */
long BgL_arg2153z00_1110;long BgL_arg2154z00_1111;obj_t BgL_arg2155z00_1112;
BgL_arg2153z00_1110 = 
(BgL_stopz00_1103+((long)1)); 
BgL_arg2154z00_1111 = 
(BgL_stopz00_1103+((long)1)); 
BgL_arg2155z00_1112 = 
MAKE_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_31, BgL_startz00_1102, BgL_stopz00_1103), BgL_resz00_1104); 
{ 
obj_t BgL_resz00_4371;long BgL_stopz00_4370;long BgL_startz00_4369;
BgL_startz00_4369 = BgL_arg2153z00_1110; 
BgL_stopz00_4370 = BgL_arg2154z00_1111; 
BgL_resz00_4371 = BgL_arg2155z00_1112; 
BgL_resz00_1104 = BgL_resz00_4371; 
BgL_stopz00_1103 = BgL_stopz00_4370; 
BgL_startz00_1102 = BgL_startz00_4369; 
goto BgL_zc3anonymousza32148ze3z83_1105;} }  else 
{ 
long BgL_stopz00_4372;
BgL_stopz00_4372 = 
(BgL_stopz00_1103+((long)1)); 
BgL_stopz00_1103 = BgL_stopz00_4372; 
goto BgL_zc3anonymousza32148ze3z83_1105;} } } } } } 
}



/* _file-name->list */
obj_t BGl__filezd2namezd2ze3listze3zz__osz00(obj_t BgL_envz00_2825, obj_t BgL_namez00_2826)
{ AN_OBJECT;
{ /* Llib/os.scm 610 */
{ /* Llib/os.scm 611 */
obj_t BgL_auxz00_4374;
if(
STRINGP(BgL_namez00_2826))
{ /* Llib/os.scm 611 */
BgL_auxz00_4374 = BgL_namez00_2826
; }  else 
{ 
obj_t BgL_auxz00_4377;
BgL_auxz00_4377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)23085)), BGl_string3130z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2826); 
FAILURE(BgL_auxz00_4377,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_auxz00_4374);} } 
}



/* file-name-canonicalize-inner */
obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t BgL_srcz00_32, obj_t BgL_resz00_33, long BgL_indexz00_34)
{ AN_OBJECT;
{ /* Llib/os.scm 630 */
{ /* Llib/os.scm 632 */
long BgL_lenz00_1122;long BgL_iz00_1123;long BgL_jz00_1124;
BgL_lenz00_1122 = 
STRING_LENGTH(BgL_srcz00_32); 
BgL_iz00_1123 = BgL_indexz00_34; 
BgL_jz00_1124 = BgL_indexz00_34; 
{ 

BgL_zc3anonymousza32206ze3z83_1175:
{ /* Llib/os.scm 746 */
bool_t BgL_testz00_4383;
if(
(BgL_iz00_1123<
(BgL_lenz00_1122-((long)3))))
{ /* Llib/os.scm 747 */
bool_t BgL_testz00_4387;
{ /* Llib/os.scm 747 */
unsigned char BgL_auxz00_4388;
{ /* Llib/os.scm 747 */
long BgL_kz00_2357;
BgL_kz00_2357 = BgL_iz00_1123; 
{ /* Llib/os.scm 747 */
long BgL_l2704z00_2948;
BgL_l2704z00_2948 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2357, BgL_l2704z00_2948))
{ /* Llib/os.scm 747 */
BgL_auxz00_4388 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2357)
; }  else 
{ 
obj_t BgL_auxz00_4393;
BgL_auxz00_4393 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26753)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2357), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4393,BFALSE,BFALSE);} } } 
BgL_testz00_4387 = 
(BgL_auxz00_4388==((unsigned char)'.')); } 
if(BgL_testz00_4387)
{ /* Llib/os.scm 748 */
bool_t BgL_testz00_4399;
{ /* Llib/os.scm 748 */
unsigned char BgL_arg2223z00_1190;
{ /* Llib/os.scm 748 */
long BgL_i2707z00_2951;
BgL_i2707z00_2951 = 
(BgL_iz00_1123+((long)1)); 
{ /* Llib/os.scm 748 */
long BgL_l2708z00_2952;
BgL_l2708z00_2952 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_i2707z00_2951, BgL_l2708z00_2952))
{ /* Llib/os.scm 748 */
BgL_arg2223z00_1190 = 
STRING_REF(BgL_srcz00_32, BgL_i2707z00_2951); }  else 
{ 
obj_t BgL_auxz00_4405;
BgL_auxz00_4405 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26789)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2707z00_2951), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4405,BFALSE,BFALSE);} } } 
BgL_testz00_4399 = 
(BgL_arg2223z00_1190==((unsigned char)'.')); } 
if(BgL_testz00_4399)
{ /* Llib/os.scm 749 */
unsigned char BgL_arg2217z00_1188;
{ /* Llib/os.scm 749 */
long BgL_i2711z00_2955;
BgL_i2711z00_2955 = 
(BgL_iz00_1123+((long)2)); 
{ /* Llib/os.scm 749 */
long BgL_l2712z00_2956;
BgL_l2712z00_2956 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_i2711z00_2955, BgL_l2712z00_2956))
{ /* Llib/os.scm 749 */
BgL_arg2217z00_1188 = 
STRING_REF(BgL_srcz00_32, BgL_i2711z00_2955); }  else 
{ 
obj_t BgL_auxz00_4416;
BgL_auxz00_4416 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26833)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2711z00_2955), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4416,BFALSE,BFALSE);} } } 
BgL_testz00_4383 = 
(BgL_arg2217z00_1188==
(unsigned char)(FILE_SEPARATOR)); }  else 
{ /* Llib/os.scm 748 */
BgL_testz00_4383 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 747 */
BgL_testz00_4383 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 746 */
BgL_testz00_4383 = ((bool_t)0)
; } 
if(BgL_testz00_4383)
{ /* Llib/os.scm 746 */
{ /* Llib/os.scm 751 */
long BgL_kz00_2373;
BgL_kz00_2373 = BgL_jz00_1124; 
{ /* Llib/os.scm 751 */
long BgL_l2716z00_2960;
BgL_l2716z00_2960 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2373, BgL_l2716z00_2960))
{ /* Llib/os.scm 751 */
STRING_SET(BgL_resz00_33, BgL_kz00_2373, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_4427;
BgL_auxz00_4427 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26881)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2373), BgL_resz00_33); 
FAILURE(BgL_auxz00_4427,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 752 */
long BgL_arg2208z00_1177;
BgL_arg2208z00_1177 = 
(BgL_jz00_1124+((long)1)); 
{ /* Llib/os.scm 752 */
long BgL_l2720z00_2964;
BgL_l2720z00_2964 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_arg2208z00_1177, BgL_l2720z00_2964))
{ /* Llib/os.scm 752 */
STRING_SET(BgL_resz00_33, BgL_arg2208z00_1177, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_4437;
BgL_auxz00_4437 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26907)), BGl_string3131z00zz__osz00, 
BINT(BgL_arg2208z00_1177), BgL_resz00_33); 
FAILURE(BgL_auxz00_4437,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 753 */
long BgL_arg2209z00_1178;
BgL_arg2209z00_1178 = 
(BgL_jz00_1124+((long)2)); 
{ /* Llib/os.scm 753 */
unsigned char BgL_charz00_2384;
BgL_charz00_2384 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 753 */
long BgL_l2724z00_2968;
BgL_l2724z00_2968 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_arg2209z00_1178, BgL_l2724z00_2968))
{ /* Llib/os.scm 753 */
STRING_SET(BgL_resz00_33, BgL_arg2209z00_1178, BgL_charz00_2384); }  else 
{ 
obj_t BgL_auxz00_4448;
BgL_auxz00_4448 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26941)), BGl_string3131z00zz__osz00, 
BINT(BgL_arg2209z00_1178), BgL_resz00_33); 
FAILURE(BgL_auxz00_4448,BFALSE,BFALSE);} } } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)3)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)3)); 
{ 

BgL_zc3anonymousza32210ze3z83_1180:
if(
(BgL_iz00_1123==BgL_lenz00_1122))
{ /* Llib/os.scm 757 */
return 
bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);}  else 
{ /* Llib/os.scm 759 */
bool_t BgL_testz00_4458;
{ /* Llib/os.scm 759 */
unsigned char BgL_char2z00_2396;
BgL_char2z00_2396 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 759 */
unsigned char BgL_auxz00_4460;
{ /* Llib/os.scm 759 */
long BgL_kz00_2394;
BgL_kz00_2394 = BgL_iz00_1123; 
{ /* Llib/os.scm 759 */
long BgL_l2728z00_2972;
BgL_l2728z00_2972 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2394, BgL_l2728z00_2972))
{ /* Llib/os.scm 759 */
BgL_auxz00_4460 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2394)
; }  else 
{ 
obj_t BgL_auxz00_4465;
BgL_auxz00_4465 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)27104)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2394), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4465,BFALSE,BFALSE);} } } 
BgL_testz00_4458 = 
(BgL_auxz00_4460==BgL_char2z00_2396); } } 
if(BgL_testz00_4458)
{ /* Llib/os.scm 759 */
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
goto BgL_zc3anonymousza32210ze3z83_1180;}  else 
{ /* Llib/os.scm 759 */
goto BgL_zc3anonymousza32206ze3z83_1175;} } } }  else 
{ /* Llib/os.scm 746 */
BgL_zc3anonymousza32173ze3z83_1143:
if(
(BgL_iz00_1123==BgL_lenz00_1122))
{ /* Llib/os.scm 669 */
return 
bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);}  else 
{ /* Llib/os.scm 671 */
unsigned char BgL_cz00_1145;
{ /* Llib/os.scm 671 */
long BgL_kz00_2224;
BgL_kz00_2224 = BgL_iz00_1123; 
{ /* Llib/os.scm 671 */
long BgL_l2732z00_2976;
BgL_l2732z00_2976 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2224, BgL_l2732z00_2976))
{ /* Llib/os.scm 671 */
BgL_cz00_1145 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2224); }  else 
{ 
obj_t BgL_auxz00_4479;
BgL_auxz00_4479 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24727)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2224), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4479,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1145==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 673 */
{ /* Llib/os.scm 675 */
long BgL_kz00_2228;
BgL_kz00_2228 = BgL_jz00_1124; 
{ /* Llib/os.scm 675 */
long BgL_l2736z00_2980;
BgL_l2736z00_2980 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2228, BgL_l2736z00_2980))
{ /* Llib/os.scm 675 */
STRING_SET(BgL_resz00_33, BgL_kz00_2228, BgL_cz00_1145); }  else 
{ 
obj_t BgL_auxz00_4491;
BgL_auxz00_4491 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24809)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2228), BgL_resz00_33); 
FAILURE(BgL_auxz00_4491,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
BgL_zc3anonymousza32163ze3z83_1130:
if(
(BgL_iz00_1123==BgL_lenz00_1122))
{ /* Llib/os.scm 638 */
return 
bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);}  else 
{ /* Llib/os.scm 640 */
bool_t BgL_testz00_4501;
{ /* Llib/os.scm 640 */
unsigned char BgL_char2z00_2189;
BgL_char2z00_2189 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 640 */
unsigned char BgL_auxz00_4503;
{ /* Llib/os.scm 640 */
long BgL_kz00_2187;
BgL_kz00_2187 = BgL_iz00_1123; 
{ /* Llib/os.scm 640 */
long BgL_l2808z00_3052;
BgL_l2808z00_3052 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2187, BgL_l2808z00_3052))
{ /* Llib/os.scm 640 */
BgL_auxz00_4503 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2187)
; }  else 
{ 
obj_t BgL_auxz00_4508;
BgL_auxz00_4508 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24037)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2187), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4508,BFALSE,BFALSE);} } } 
BgL_testz00_4501 = 
(BgL_auxz00_4503==BgL_char2z00_2189); } } 
if(BgL_testz00_4501)
{ /* Llib/os.scm 640 */
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
goto BgL_zc3anonymousza32163ze3z83_1130;}  else 
{ /* Llib/os.scm 640 */
goto BgL_zc3anonymousza32173ze3z83_1143;} } }  else 
{ /* Llib/os.scm 673 */
if(
(BgL_cz00_1145==((unsigned char)'.')))
{ /* Llib/os.scm 679 */
if(
(BgL_iz00_1123==
(BgL_lenz00_1122-((long)1))))
{ /* Llib/os.scm 681 */
if(
(BgL_jz00_1124==((long)0)))
{ /* Llib/os.scm 683 */
{ /* Llib/os.scm 685 */
long BgL_kz00_2243;
BgL_kz00_2243 = BgL_jz00_1124; 
{ /* Llib/os.scm 685 */
long BgL_l2740z00_2984;
BgL_l2740z00_2984 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2243, BgL_l2740z00_2984))
{ /* Llib/os.scm 685 */
STRING_SET(BgL_resz00_33, BgL_kz00_2243, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_4526;
BgL_auxz00_4526 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)25030)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2243), BgL_resz00_33); 
FAILURE(BgL_auxz00_4526,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 686 */
long BgL_auxz00_4531;
BgL_auxz00_4531 = 
(BgL_jz00_1124+((long)1)); 
return 
bgl_string_shrink(BgL_resz00_33, BgL_auxz00_4531);} }  else 
{ /* Llib/os.scm 687 */
long BgL_auxz00_4534;
BgL_auxz00_4534 = 
(BgL_jz00_1124-((long)1)); 
return 
bgl_string_shrink(BgL_resz00_33, BgL_auxz00_4534);} }  else 
{ /* Llib/os.scm 688 */
bool_t BgL_testz00_4537;
{ /* Llib/os.scm 688 */
unsigned char BgL_arg2203z00_1172;
{ /* Llib/os.scm 688 */
long BgL_i2743z00_2987;
BgL_i2743z00_2987 = 
(BgL_iz00_1123+((long)1)); 
{ /* Llib/os.scm 688 */
long BgL_l2744z00_2988;
BgL_l2744z00_2988 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_i2743z00_2987, BgL_l2744z00_2988))
{ /* Llib/os.scm 688 */
BgL_arg2203z00_1172 = 
STRING_REF(BgL_srcz00_32, BgL_i2743z00_2987); }  else 
{ 
obj_t BgL_auxz00_4543;
BgL_auxz00_4543 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)25154)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2743z00_2987), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4543,BFALSE,BFALSE);} } } 
BgL_testz00_4537 = 
(BgL_arg2203z00_1172==
(unsigned char)(FILE_SEPARATOR)); } 
if(BgL_testz00_4537)
{ /* Llib/os.scm 688 */
if(
(BgL_iz00_1123==
(BgL_lenz00_1122-((long)2))))
{ /* Llib/os.scm 689 */
{ /* Llib/os.scm 692 */
long BgL_kz00_2264;
BgL_kz00_2264 = BgL_jz00_1124; 
{ /* Llib/os.scm 692 */
long BgL_l2748z00_2992;
BgL_l2748z00_2992 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2264, BgL_l2748z00_2992))
{ /* Llib/os.scm 692 */
STRING_SET(BgL_resz00_33, BgL_kz00_2264, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_4557;
BgL_auxz00_4557 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)25272)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2264), BgL_resz00_33); 
FAILURE(BgL_auxz00_4557,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 693 */
long BgL_auxz00_4562;
BgL_auxz00_4562 = 
(BgL_jz00_1124+((long)1)); 
return 
bgl_string_shrink(BgL_resz00_33, BgL_auxz00_4562);} }  else 
{ /* Llib/os.scm 689 */
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)2)); 
goto BgL_zc3anonymousza32163ze3z83_1130;} }  else 
{ /* Llib/os.scm 698 */
bool_t BgL_testz00_4566;
{ /* Llib/os.scm 698 */
unsigned char BgL_arg2199z00_1170;
{ /* Llib/os.scm 698 */
long BgL_i2751z00_2995;
BgL_i2751z00_2995 = 
(BgL_iz00_1123+((long)1)); 
{ /* Llib/os.scm 698 */
long BgL_l2752z00_2996;
BgL_l2752z00_2996 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_i2751z00_2995, BgL_l2752z00_2996))
{ /* Llib/os.scm 698 */
BgL_arg2199z00_1170 = 
STRING_REF(BgL_srcz00_32, BgL_i2751z00_2995); }  else 
{ 
obj_t BgL_auxz00_4572;
BgL_auxz00_4572 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)25475)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2751z00_2995), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4572,BFALSE,BFALSE);} } } 
BgL_testz00_4566 = 
(BgL_arg2199z00_1170==((unsigned char)'.')); } 
if(BgL_testz00_4566)
{ /* Llib/os.scm 698 */
if(
(BgL_iz00_1123==
(BgL_lenz00_1122-((long)2))))
{ /* Llib/os.scm 701 */
if(
(BgL_jz00_1124==((long)0)))
{ /* Llib/os.scm 704 */
return 
bgl_string_shrink(BgL_resz00_33, ((long)0));}  else 
{ /* Llib/os.scm 704 */
if(
(BgL_jz00_1124==((long)1)))
{ /* Llib/os.scm 706 */
return 
bgl_string_shrink(BgL_resz00_33, ((long)1));}  else 
{ /* Llib/os.scm 706 */
BgL_jz00_1124 = 
BGl_popzd2directoryzd2zz__osz00(FILE_SEPARATOR, BgL_resz00_33, BgL_jz00_1124); 
if(
(BgL_jz00_1124>((long)1)))
{ /* Llib/os.scm 711 */
long BgL_auxz00_4590;
BgL_auxz00_4590 = 
(BgL_jz00_1124-((long)1)); 
return 
bgl_string_shrink(BgL_resz00_33, BgL_auxz00_4590);}  else 
{ /* Llib/os.scm 710 */
return 
bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);} } } }  else 
{ /* Llib/os.scm 713 */
bool_t BgL_testz00_4594;
{ /* Llib/os.scm 713 */
unsigned char BgL_arg2195z00_1166;
{ /* Llib/os.scm 713 */
long BgL_i2755z00_2999;
BgL_i2755z00_2999 = 
(BgL_iz00_1123+((long)2)); 
{ /* Llib/os.scm 713 */
long BgL_l2756z00_3000;
BgL_l2756z00_3000 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_i2755z00_2999, BgL_l2756z00_3000))
{ /* Llib/os.scm 713 */
BgL_arg2195z00_1166 = 
STRING_REF(BgL_srcz00_32, BgL_i2755z00_2999); }  else 
{ 
obj_t BgL_auxz00_4600;
BgL_auxz00_4600 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)25853)), BGl_string3086z00zz__osz00, 
BINT(BgL_i2755z00_2999), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4600,BFALSE,BFALSE);} } } 
BgL_testz00_4594 = 
(BgL_arg2195z00_1166==
(unsigned char)(FILE_SEPARATOR)); } 
if(BgL_testz00_4594)
{ /* Llib/os.scm 713 */
if(
(BgL_jz00_1124>=((long)2)))
{ /* Llib/os.scm 715 */
BgL_jz00_1124 = 
BGl_popzd2directoryzd2zz__osz00(FILE_SEPARATOR, BgL_resz00_33, BgL_jz00_1124); }  else 
{ /* Llib/os.scm 715 */BFALSE; } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)3)); 
goto BgL_zc3anonymousza32163ze3z83_1130;}  else 
{ /* Llib/os.scm 713 */
{ /* Llib/os.scm 720 */
long BgL_kz00_2309;
BgL_kz00_2309 = BgL_jz00_1124; 
{ /* Llib/os.scm 720 */
long BgL_l2760z00_3004;
BgL_l2760z00_3004 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2309, BgL_l2760z00_3004))
{ /* Llib/os.scm 720 */
STRING_SET(BgL_resz00_33, BgL_kz00_2309, BgL_cz00_1145); }  else 
{ 
obj_t BgL_auxz00_4615;
BgL_auxz00_4615 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26045)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2309), BgL_resz00_33); 
FAILURE(BgL_auxz00_4615,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
{ /* Llib/os.scm 723 */
unsigned char BgL_arg2193z00_1164;
{ /* Llib/os.scm 723 */
long BgL_kz00_2316;
BgL_kz00_2316 = BgL_iz00_1123; 
{ /* Llib/os.scm 723 */
long BgL_l2764z00_3008;
BgL_l2764z00_3008 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2316, BgL_l2764z00_3008))
{ /* Llib/os.scm 723 */
BgL_arg2193z00_1164 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2316); }  else 
{ 
obj_t BgL_auxz00_4626;
BgL_auxz00_4626 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26145)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2316), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4626,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 723 */
long BgL_kz00_2318;
BgL_kz00_2318 = BgL_jz00_1124; 
{ /* Llib/os.scm 723 */
long BgL_l2768z00_3012;
BgL_l2768z00_3012 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2318, BgL_l2768z00_3012))
{ /* Llib/os.scm 723 */
STRING_SET(BgL_resz00_33, BgL_kz00_2318, BgL_arg2193z00_1164); }  else 
{ 
obj_t BgL_auxz00_4635;
BgL_auxz00_4635 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26126)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2318), BgL_resz00_33); 
FAILURE(BgL_auxz00_4635,BFALSE,BFALSE);} } } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
{ /* Llib/os.scm 726 */
unsigned char BgL_arg2194z00_1165;
{ /* Llib/os.scm 726 */
long BgL_kz00_2325;
BgL_kz00_2325 = BgL_iz00_1123; 
{ /* Llib/os.scm 726 */
long BgL_l2772z00_3016;
BgL_l2772z00_3016 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2325, BgL_l2772z00_3016))
{ /* Llib/os.scm 726 */
BgL_arg2194z00_1165 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2325); }  else 
{ 
obj_t BgL_auxz00_4646;
BgL_auxz00_4646 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26243)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2325), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4646,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 726 */
long BgL_kz00_2327;
BgL_kz00_2327 = BgL_jz00_1124; 
{ /* Llib/os.scm 726 */
long BgL_l2776z00_3020;
BgL_l2776z00_3020 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2327, BgL_l2776z00_3020))
{ /* Llib/os.scm 726 */
STRING_SET(BgL_resz00_33, BgL_kz00_2327, BgL_arg2194z00_1165); }  else 
{ 
obj_t BgL_auxz00_4655;
BgL_auxz00_4655 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26224)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2327), BgL_resz00_33); 
FAILURE(BgL_auxz00_4655,BFALSE,BFALSE);} } } } 
BgL_zc3anonymousza32167ze3z83_1134:
if(
(BgL_iz00_1123==BgL_lenz00_1122))
{ /* Llib/os.scm 647 */
return 
bgl_string_shrink(BgL_resz00_33, BgL_jz00_1124);}  else 
{ /* Llib/os.scm 649 */
unsigned char BgL_cz00_1136;
{ /* Llib/os.scm 649 */
long BgL_kz00_2197;
BgL_kz00_2197 = BgL_iz00_1123; 
{ /* Llib/os.scm 649 */
long BgL_l2796z00_3040;
BgL_l2796z00_3040 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2197, BgL_l2796z00_3040))
{ /* Llib/os.scm 649 */
BgL_cz00_1136 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2197); }  else 
{ 
obj_t BgL_auxz00_4667;
BgL_auxz00_4667 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24234)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2197), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4667,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1136==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 651 */
{ /* Llib/os.scm 652 */
long BgL_kz00_2201;
BgL_kz00_2201 = BgL_jz00_1124; 
{ /* Llib/os.scm 652 */
long BgL_l2800z00_3044;
BgL_l2800z00_3044 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2201, BgL_l2800z00_3044))
{ /* Llib/os.scm 652 */
STRING_SET(BgL_resz00_33, BgL_kz00_2201, BgL_cz00_1136); }  else 
{ 
obj_t BgL_auxz00_4679;
BgL_auxz00_4679 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24290)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2201), BgL_resz00_33); 
FAILURE(BgL_auxz00_4679,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
goto BgL_zc3anonymousza32163ze3z83_1130;}  else 
{ /* Llib/os.scm 651 */
{ /* Llib/os.scm 657 */
long BgL_kz00_2208;
BgL_kz00_2208 = BgL_jz00_1124; 
{ /* Llib/os.scm 657 */
long BgL_l2804z00_3048;
BgL_l2804z00_3048 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2208, BgL_l2804z00_3048))
{ /* Llib/os.scm 657 */
STRING_SET(BgL_resz00_33, BgL_kz00_2208, BgL_cz00_1136); }  else 
{ 
obj_t BgL_auxz00_4690;
BgL_auxz00_4690 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)24404)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2208), BgL_resz00_33); 
FAILURE(BgL_auxz00_4690,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
goto BgL_zc3anonymousza32167ze3z83_1134;} } } } }  else 
{ /* Llib/os.scm 698 */
{ /* Llib/os.scm 730 */
long BgL_kz00_2330;
BgL_kz00_2330 = BgL_jz00_1124; 
{ /* Llib/os.scm 730 */
long BgL_l2780z00_3024;
BgL_l2780z00_3024 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2330, BgL_l2780z00_3024))
{ /* Llib/os.scm 730 */
STRING_SET(BgL_resz00_33, BgL_kz00_2330, BgL_cz00_1145); }  else 
{ 
obj_t BgL_auxz00_4701;
BgL_auxz00_4701 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26328)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2330), BgL_resz00_33); 
FAILURE(BgL_auxz00_4701,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
{ /* Llib/os.scm 733 */
unsigned char BgL_arg2198z00_1169;
{ /* Llib/os.scm 733 */
long BgL_kz00_2337;
BgL_kz00_2337 = BgL_iz00_1123; 
{ /* Llib/os.scm 733 */
long BgL_l2784z00_3028;
BgL_l2784z00_3028 = 
STRING_LENGTH(BgL_srcz00_32); 
if(
BOUND_CHECK(BgL_kz00_2337, BgL_l2784z00_3028))
{ /* Llib/os.scm 733 */
BgL_arg2198z00_1169 = 
STRING_REF(BgL_srcz00_32, BgL_kz00_2337); }  else 
{ 
obj_t BgL_auxz00_4712;
BgL_auxz00_4712 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26416)), BGl_string3086z00zz__osz00, 
BINT(BgL_kz00_2337), BgL_srcz00_32); 
FAILURE(BgL_auxz00_4712,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 733 */
long BgL_kz00_2339;
BgL_kz00_2339 = BgL_jz00_1124; 
{ /* Llib/os.scm 733 */
long BgL_l2788z00_3032;
BgL_l2788z00_3032 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2339, BgL_l2788z00_3032))
{ /* Llib/os.scm 733 */
STRING_SET(BgL_resz00_33, BgL_kz00_2339, BgL_arg2198z00_1169); }  else 
{ 
obj_t BgL_auxz00_4721;
BgL_auxz00_4721 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26397)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2339), BgL_resz00_33); 
FAILURE(BgL_auxz00_4721,BFALSE,BFALSE);} } } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
goto BgL_zc3anonymousza32167ze3z83_1134;} } } }  else 
{ /* Llib/os.scm 679 */
{ /* Llib/os.scm 739 */
long BgL_kz00_2346;
BgL_kz00_2346 = BgL_jz00_1124; 
{ /* Llib/os.scm 739 */
long BgL_l2792z00_3036;
BgL_l2792z00_3036 = 
STRING_LENGTH(BgL_resz00_33); 
if(
BOUND_CHECK(BgL_kz00_2346, BgL_l2792z00_3036))
{ /* Llib/os.scm 739 */
STRING_SET(BgL_resz00_33, BgL_kz00_2346, BgL_cz00_1145); }  else 
{ 
obj_t BgL_auxz00_4732;
BgL_auxz00_4732 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)26539)), BGl_string3131z00zz__osz00, 
BINT(BgL_kz00_2346), BgL_resz00_33); 
FAILURE(BgL_auxz00_4732,BFALSE,BFALSE);} } } 
BgL_iz00_1123 = 
(BgL_iz00_1123+((long)1)); 
BgL_jz00_1124 = 
(BgL_jz00_1124+((long)1)); 
goto BgL_zc3anonymousza32167ze3z83_1134;} } } } } } } } 
}



/* pop-directory */
long BGl_popzd2directoryzd2zz__osz00(unsigned char BgL_sepz00_2856, obj_t BgL_resz00_2855, long BgL_jz00_1138)
{ AN_OBJECT;
{ /* Llib/os.scm 666 */
{ /* Llib/os.scm 663 */
obj_t BgL_njz00_1140;
{ /* Llib/os.scm 663 */
long BgL_arg2172z00_1142;
BgL_arg2172z00_1142 = 
(BgL_jz00_1138-((long)2)); 
BgL_njz00_1140 = 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_resz00_2855, 
BCHAR(BgL_sepz00_2856), 
BINT(BgL_arg2172z00_1142)); } 
if(
INTEGERP(BgL_njz00_1140))
{ /* Llib/os.scm 664 */
return 
(
(long)CINT(BgL_njz00_1140)+((long)1));}  else 
{ /* Llib/os.scm 664 */
return ((long)0);} } } 
}



/* file-name-canonicalize */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t BgL_namez00_35)
{ AN_OBJECT;
{ /* Llib/os.scm 771 */
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_35, 
make_string(
STRING_LENGTH(BgL_namez00_35), ((unsigned char)' ')), ((long)0));} 
}



/* _file-name-canonicalize */
obj_t BGl__filezd2namezd2canonicaliza7eza7zz__osz00(obj_t BgL_envz00_2827, obj_t BgL_namez00_2828)
{ AN_OBJECT;
{ /* Llib/os.scm 771 */
{ /* Llib/os.scm 772 */
obj_t BgL_auxz00_4750;
if(
STRINGP(BgL_namez00_2828))
{ /* Llib/os.scm 772 */
BgL_auxz00_4750 = BgL_namez00_2828
; }  else 
{ 
obj_t BgL_auxz00_4753;
BgL_auxz00_4753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)27573)), BGl_string3132z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2828); 
FAILURE(BgL_auxz00_4753,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7eza7zz__osz00(BgL_auxz00_4750);} } 
}



/* file-name-canonicalize! */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t BgL_namez00_36)
{ AN_OBJECT;
{ /* Llib/os.scm 777 */
{ /* Llib/os.scm 778 */
long BgL_lenz00_1203;
BgL_lenz00_1203 = 
STRING_LENGTH(BgL_namez00_36); 
{ 
long BgL_iz00_1206;long BgL_sz00_1207;
BgL_iz00_1206 = ((long)0); 
BgL_sz00_1207 = ((long)0); 
BgL_zc3anonymousza32237ze3z83_1208:
if(
(BgL_iz00_1206==BgL_lenz00_1203))
{ /* Llib/os.scm 782 */
return BgL_namez00_36;}  else 
{ /* Llib/os.scm 784 */
unsigned char BgL_cz00_1210;
{ /* Llib/os.scm 784 */
long BgL_l2812z00_3056;
BgL_l2812z00_3056 = 
STRING_LENGTH(BgL_namez00_36); 
if(
BOUND_CHECK(BgL_iz00_1206, BgL_l2812z00_3056))
{ /* Llib/os.scm 784 */
BgL_cz00_1210 = 
STRING_REF(BgL_namez00_36, BgL_iz00_1206); }  else 
{ 
obj_t BgL_auxz00_4765;
BgL_auxz00_4765 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)28000)), BGl_string3086z00zz__osz00, 
BINT(BgL_iz00_1206), BgL_namez00_36); 
FAILURE(BgL_auxz00_4765,BFALSE,BFALSE);} } 
if(
(BgL_cz00_1210==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 786 */
if(
(BgL_sz00_1207==
(BgL_iz00_1206-((long)1))))
{ /* Llib/os.scm 788 */
obj_t BgL_resz00_1213;
BgL_resz00_1213 = 
make_string(BgL_lenz00_1203, ((unsigned char)' ')); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_namez00_36, ((long)0), BgL_resz00_1213, ((long)0), BgL_iz00_1206); 
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_36, BgL_resz00_1213, BgL_sz00_1207);}  else 
{ 
long BgL_sz00_4781;long BgL_iz00_4779;
BgL_iz00_4779 = 
(BgL_iz00_1206+((long)1)); 
BgL_sz00_4781 = BgL_iz00_1206; 
BgL_sz00_1207 = BgL_sz00_4781; 
BgL_iz00_1206 = BgL_iz00_4779; 
goto BgL_zc3anonymousza32237ze3z83_1208;} }  else 
{ /* Llib/os.scm 792 */
bool_t BgL_testz00_4782;
if(
(BgL_cz00_1210==((unsigned char)'.')))
{ /* Llib/os.scm 792 */
BgL_testz00_4782 = 
(BgL_sz00_1207>=((long)0))
; }  else 
{ /* Llib/os.scm 792 */
BgL_testz00_4782 = ((bool_t)0)
; } 
if(BgL_testz00_4782)
{ /* Llib/os.scm 793 */
obj_t BgL_resz00_1218;
BgL_resz00_1218 = 
make_string(BgL_lenz00_1203, ((unsigned char)' ')); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_namez00_36, ((long)0), BgL_resz00_1218, ((long)0), BgL_iz00_1206); 
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_36, BgL_resz00_1218, BgL_sz00_1207);}  else 
{ 
long BgL_sz00_4791;long BgL_iz00_4789;
BgL_iz00_4789 = 
(BgL_iz00_1206+((long)1)); 
BgL_sz00_4791 = ((long)-1); 
BgL_sz00_1207 = BgL_sz00_4791; 
BgL_iz00_1206 = BgL_iz00_4789; 
goto BgL_zc3anonymousza32237ze3z83_1208;} } } } } } 
}



/* _file-name-canonicalize! */
obj_t BGl__filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t BgL_envz00_2829, obj_t BgL_namez00_2830)
{ AN_OBJECT;
{ /* Llib/os.scm 777 */
{ /* Llib/os.scm 778 */
obj_t BgL_auxz00_4792;
if(
STRINGP(BgL_namez00_2830))
{ /* Llib/os.scm 778 */
BgL_auxz00_4792 = BgL_namez00_2830
; }  else 
{ 
obj_t BgL_auxz00_4795;
BgL_auxz00_4795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)27864)), BGl_string3133z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2830); 
FAILURE(BgL_auxz00_4795,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_4792);} } 
}



/* file-name-unix-canonicalize */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t BgL_namez00_37)
{ AN_OBJECT;
{ /* Llib/os.scm 802 */
{ /* Llib/os.scm 803 */
long BgL_lenz00_1224;
BgL_lenz00_1224 = 
STRING_LENGTH(BgL_namez00_37); 
if(
(BgL_lenz00_1224==((long)0)))
{ /* Llib/os.scm 805 */
return BgL_namez00_37;}  else 
{ /* Llib/os.scm 807 */
bool_t BgL_testz00_4803;
{ /* Llib/os.scm 807 */
unsigned char BgL_auxz00_4804;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1224))
{ /* Llib/os.scm 807 */
BgL_auxz00_4804 = 
STRING_REF(BgL_namez00_37, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4808;
BgL_auxz00_4808 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)28792)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_namez00_37); 
FAILURE(BgL_auxz00_4808,BFALSE,BFALSE);} 
BgL_testz00_4803 = 
(BgL_auxz00_4804==((unsigned char)'~')); } 
if(BgL_testz00_4803)
{ /* Llib/os.scm 807 */
if(
(BgL_lenz00_1224==((long)1)))
{ /* Llib/os.scm 811 */
obj_t BgL_arg2252z00_1228;
BgL_arg2252z00_1228 = 
BGl_getenvz00zz__osz00(
BSTRING_TO_STRING(BGl_string3076z00zz__osz00)); 
{ /* Llib/os.scm 811 */
obj_t BgL_auxz00_4818;
if(
STRINGP(BgL_arg2252z00_1228))
{ /* Llib/os.scm 811 */
BgL_auxz00_4818 = BgL_arg2252z00_1228
; }  else 
{ 
obj_t BgL_auxz00_4821;
BgL_auxz00_4821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)28925)), BGl_string3134z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2252z00_1228); 
FAILURE(BgL_auxz00_4821,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_4818);} }  else 
{ /* Llib/os.scm 812 */
bool_t BgL_testz00_4826;
{ /* Llib/os.scm 812 */
unsigned char BgL_char2z00_2456;
BgL_char2z00_2456 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 812 */
unsigned char BgL_auxz00_4828;
{ /* Llib/os.scm 812 */
long BgL_l2820z00_3064;
BgL_l2820z00_3064 = 
STRING_LENGTH(BgL_namez00_37); 
if(
BOUND_CHECK(((long)1), BgL_l2820z00_3064))
{ /* Llib/os.scm 812 */
BgL_auxz00_4828 = 
STRING_REF(BgL_namez00_37, ((long)1))
; }  else 
{ 
obj_t BgL_auxz00_4833;
BgL_auxz00_4833 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)28944)), BGl_string3086z00zz__osz00, 
BINT(((long)1)), BgL_namez00_37); 
FAILURE(BgL_auxz00_4833,BFALSE,BFALSE);} } 
BgL_testz00_4826 = 
(BgL_auxz00_4828==BgL_char2z00_2456); } } 
if(BgL_testz00_4826)
{ /* Llib/os.scm 815 */
obj_t BgL_arg2255z00_1230;
{ /* Llib/os.scm 815 */
obj_t BgL_arg2256z00_1231;obj_t BgL_arg2257z00_1232;
BgL_arg2256z00_1231 = 
BGl_getenvz00zz__osz00(
BSTRING_TO_STRING(BGl_string3076z00zz__osz00)); 
BgL_arg2257z00_1232 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_37, ((long)1), BgL_lenz00_1224); 
{ /* Llib/os.scm 815 */
obj_t BgL_auxz00_4842;
if(
STRINGP(BgL_arg2256z00_1231))
{ /* Llib/os.scm 815 */
BgL_auxz00_4842 = BgL_arg2256z00_1231
; }  else 
{ 
obj_t BgL_auxz00_4845;
BgL_auxz00_4845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)29056)), BGl_string3134z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2256z00_1231); 
FAILURE(BgL_auxz00_4845,BFALSE,BFALSE);} 
BgL_arg2255z00_1230 = 
string_append(BgL_auxz00_4842, BgL_arg2257z00_1232); } } 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_arg2255z00_1230);}  else 
{ /* Llib/os.scm 819 */
obj_t BgL_arg2259z00_1233;
{ /* Llib/os.scm 819 */
obj_t BgL_arg2260z00_1234;obj_t BgL_arg2263z00_1236;
BgL_arg2260z00_1234 = 
BGl_getenvz00zz__osz00(
BSTRING_TO_STRING(BGl_string3076z00zz__osz00)); 
BgL_arg2263z00_1236 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_37, ((long)1), BgL_lenz00_1224); 
{ /* Llib/os.scm 819 */
obj_t BgL_list2264z00_1237;
BgL_list2264z00_1237 = 
MAKE_PAIR(BgL_arg2263z00_1236, BNIL); 
{ /* Llib/os.scm 819 */
obj_t BgL_auxz00_4855;
if(
STRINGP(BgL_arg2260z00_1234))
{ /* Llib/os.scm 819 */
BgL_auxz00_4855 = BgL_arg2260z00_1234
; }  else 
{ 
obj_t BgL_auxz00_4858;
BgL_auxz00_4858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)29201)), BGl_string3134z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2260z00_1234); 
FAILURE(BgL_auxz00_4858,BFALSE,BFALSE);} 
BgL_arg2259z00_1233 = 
BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_4855, BGl_string3135z00zz__osz00, BgL_list2264z00_1237); } } } 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_arg2259z00_1233);} } }  else 
{ /* Llib/os.scm 807 */
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_37, 
make_string(
STRING_LENGTH(BgL_namez00_37), ((unsigned char)' ')), ((long)0));} } } } 
}



/* _file-name-unix-canonicalize */
obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t BgL_envz00_2831, obj_t BgL_namez00_2832)
{ AN_OBJECT;
{ /* Llib/os.scm 802 */
{ /* Llib/os.scm 803 */
obj_t BgL_auxz00_4867;
if(
STRINGP(BgL_namez00_2832))
{ /* Llib/os.scm 803 */
BgL_auxz00_4867 = BgL_namez00_2832
; }  else 
{ 
obj_t BgL_auxz00_4870;
BgL_auxz00_4870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)28711)), BGl_string3136z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2832); 
FAILURE(BgL_auxz00_4870,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_auxz00_4867);} } 
}



/* file-name-unix-canonicalize! */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t BgL_namez00_38)
{ AN_OBJECT;
{ /* Llib/os.scm 826 */
{ /* Llib/os.scm 827 */
long BgL_lenz00_1241;
BgL_lenz00_1241 = 
STRING_LENGTH(BgL_namez00_38); 
if(
(BgL_lenz00_1241==((long)0)))
{ /* Llib/os.scm 829 */
return BgL_namez00_38;}  else 
{ /* Llib/os.scm 831 */
bool_t BgL_testz00_4878;
{ /* Llib/os.scm 831 */
unsigned char BgL_auxz00_4879;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1241))
{ /* Llib/os.scm 831 */
BgL_auxz00_4879 = 
STRING_REF(BgL_namez00_38, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_4883;
BgL_auxz00_4883 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)29668)), BGl_string3086z00zz__osz00, 
BINT(((long)0)), BgL_namez00_38); 
FAILURE(BgL_auxz00_4883,BFALSE,BFALSE);} 
BgL_testz00_4878 = 
(BgL_auxz00_4879==((unsigned char)'~')); } 
if(BgL_testz00_4878)
{ /* Llib/os.scm 831 */
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_namez00_38);}  else 
{ /* Llib/os.scm 831 */
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_namez00_38);} } } } 
}



/* _file-name-unix-canonicalize! */
obj_t BGl__filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t BgL_envz00_2833, obj_t BgL_namez00_2834)
{ AN_OBJECT;
{ /* Llib/os.scm 826 */
{ /* Llib/os.scm 827 */
obj_t BgL_auxz00_4891;
if(
STRINGP(BgL_namez00_2834))
{ /* Llib/os.scm 827 */
BgL_auxz00_4891 = BgL_namez00_2834
; }  else 
{ 
obj_t BgL_auxz00_4894;
BgL_auxz00_4894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)29587)), BGl_string3137z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2834); 
FAILURE(BgL_auxz00_4894,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(BgL_auxz00_4891);} } 
}



/* relative-file-name */
BGL_EXPORTED_DEF obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t BgL_namez00_39, obj_t BgL_basez00_40)
{ AN_OBJECT;
{ /* Llib/os.scm 839 */
{ 
obj_t BgL_fz00_1260;
{ /* Llib/os.scm 848 */
obj_t BgL_g1838z00_1246;obj_t BgL_g1839z00_1247;
BgL_g1838z00_1246 = 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_namez00_39); 
BgL_g1839z00_1247 = 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_basez00_40); 
{ 
obj_t BgL_fz00_1249;obj_t BgL_bz00_1250;
{ /* Llib/os.scm 848 */
obj_t BgL_aux3024z00_3268;
BgL_fz00_1249 = BgL_g1838z00_1246; 
BgL_bz00_1250 = BgL_g1839z00_1247; 
BgL_zc3anonymousza32271ze3z83_1251:
if(
NULLP(BgL_fz00_1249))
{ /* Llib/os.scm 851 */
BgL_aux3024z00_3268 = BGl_string3095z00zz__osz00; }  else 
{ /* Llib/os.scm 851 */
if(
NULLP(BgL_bz00_1250))
{ /* Llib/os.scm 853 */
BgL_fz00_1260 = BgL_fz00_1249; 
BgL_zc3anonymousza32280ze3z83_1261:
{ /* Llib/os.scm 842 */
bool_t BgL_testz00_4905;
{ /* Llib/os.scm 842 */
obj_t BgL_auxz00_4906;
{ /* Llib/os.scm 842 */
obj_t BgL_pairz00_2486;
if(
PAIRP(BgL_fz00_1260))
{ /* Llib/os.scm 842 */
BgL_pairz00_2486 = BgL_fz00_1260; }  else 
{ 
obj_t BgL_auxz00_4909;
BgL_auxz00_4909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30092)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_fz00_1260); 
FAILURE(BgL_auxz00_4909,BFALSE,BFALSE);} 
BgL_auxz00_4906 = 
CDR(BgL_pairz00_2486); } 
BgL_testz00_4905 = 
NULLP(BgL_auxz00_4906); } 
if(BgL_testz00_4905)
{ /* Llib/os.scm 843 */
obj_t BgL_pairz00_2488;
if(
PAIRP(BgL_fz00_1260))
{ /* Llib/os.scm 843 */
BgL_pairz00_2488 = BgL_fz00_1260; }  else 
{ 
obj_t BgL_auxz00_4917;
BgL_auxz00_4917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30104)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_fz00_1260); 
FAILURE(BgL_auxz00_4917,BFALSE,BFALSE);} 
BgL_aux3024z00_3268 = 
CAR(BgL_pairz00_2488); }  else 
{ /* Llib/os.scm 844 */
bool_t BgL_testz00_4922;
{ /* Llib/os.scm 844 */
obj_t BgL_auxz00_4923;
{ /* Llib/os.scm 844 */
obj_t BgL_pairz00_2489;
if(
PAIRP(BgL_fz00_1260))
{ /* Llib/os.scm 844 */
BgL_pairz00_2489 = BgL_fz00_1260; }  else 
{ 
obj_t BgL_auxz00_4926;
BgL_auxz00_4926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30124)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_fz00_1260); 
FAILURE(BgL_auxz00_4926,BFALSE,BFALSE);} 
{ /* Llib/os.scm 844 */
obj_t BgL_pairz00_2492;
{ /* Llib/os.scm 844 */
obj_t BgL_aux2988z00_3232;
BgL_aux2988z00_3232 = 
CDR(BgL_pairz00_2489); 
if(
PAIRP(BgL_aux2988z00_3232))
{ /* Llib/os.scm 844 */
BgL_pairz00_2492 = BgL_aux2988z00_3232; }  else 
{ 
obj_t BgL_auxz00_4933;
BgL_auxz00_4933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30118)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux2988z00_3232); 
FAILURE(BgL_auxz00_4933,BFALSE,BFALSE);} } 
BgL_auxz00_4923 = 
CDR(BgL_pairz00_2492); } } 
BgL_testz00_4922 = 
NULLP(BgL_auxz00_4923); } 
if(BgL_testz00_4922)
{ /* Llib/os.scm 845 */
obj_t BgL_arg2283z00_1264;obj_t BgL_arg2284z00_1265;
{ /* Llib/os.scm 845 */
obj_t BgL_pairz00_2494;
if(
PAIRP(BgL_fz00_1260))
{ /* Llib/os.scm 845 */
BgL_pairz00_2494 = BgL_fz00_1260; }  else 
{ 
obj_t BgL_auxz00_4941;
BgL_auxz00_4941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30152)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_fz00_1260); 
FAILURE(BgL_auxz00_4941,BFALSE,BFALSE);} 
BgL_arg2283z00_1264 = 
CAR(BgL_pairz00_2494); } 
{ /* Llib/os.scm 845 */
obj_t BgL_pairz00_2495;
BgL_pairz00_2495 = BgL_fz00_1260; 
{ /* Llib/os.scm 845 */
obj_t BgL_pairz00_2498;
{ /* Llib/os.scm 845 */
obj_t BgL_aux2994z00_3238;
BgL_aux2994z00_3238 = 
CDR(BgL_pairz00_2495); 
if(
PAIRP(BgL_aux2994z00_3238))
{ /* Llib/os.scm 845 */
BgL_pairz00_2498 = BgL_aux2994z00_3238; }  else 
{ 
obj_t BgL_auxz00_4949;
BgL_auxz00_4949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30155)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux2994z00_3238); 
FAILURE(BgL_auxz00_4949,BFALSE,BFALSE);} } 
BgL_arg2284z00_1265 = 
CAR(BgL_pairz00_2498); } } 
{ /* Llib/os.scm 845 */
obj_t BgL_auxz00_4961;obj_t BgL_auxz00_4954;
if(
STRINGP(BgL_arg2284z00_1265))
{ /* Llib/os.scm 845 */
BgL_auxz00_4961 = BgL_arg2284z00_1265
; }  else 
{ 
obj_t BgL_auxz00_4964;
BgL_auxz00_4964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30162)), BGl_string3138z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2284z00_1265); 
FAILURE(BgL_auxz00_4964,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg2283z00_1264))
{ /* Llib/os.scm 845 */
BgL_auxz00_4954 = BgL_arg2283z00_1264
; }  else 
{ 
obj_t BgL_auxz00_4957;
BgL_auxz00_4957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30153)), BGl_string3138z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2283z00_1264); 
FAILURE(BgL_auxz00_4957,BFALSE,BFALSE);} 
BgL_aux3024z00_3268 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_4954, BgL_auxz00_4961); } }  else 
{ /* Llib/os.scm 847 */
obj_t BgL_runner2287z00_1268;
BgL_runner2287z00_1268 = BgL_fz00_1260; 
{ /* Llib/os.scm 847 */
obj_t BgL_aux2285z00_1266;
{ /* Llib/os.scm 847 */
obj_t BgL_pairz00_2499;
{ /* Llib/os.scm 847 */
obj_t BgL_aux3000z00_3244;
BgL_aux3000z00_3244 = BgL_runner2287z00_1268; 
if(
PAIRP(BgL_aux3000z00_3244))
{ /* Llib/os.scm 847 */
BgL_pairz00_2499 = BgL_aux3000z00_3244; }  else 
{ 
obj_t BgL_auxz00_4971;
BgL_auxz00_4971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux3000z00_3244); 
FAILURE(BgL_auxz00_4971,BFALSE,BFALSE);} } 
{ /* Llib/os.scm 847 */
obj_t BgL_aux3002z00_3246;
BgL_aux3002z00_3246 = 
CAR(BgL_pairz00_2499); 
if(
STRINGP(BgL_aux3002z00_3246))
{ /* Llib/os.scm 847 */
BgL_aux2285z00_1266 = BgL_aux3002z00_3246; }  else 
{ 
obj_t BgL_auxz00_4978;
BgL_auxz00_4978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3090z00zz__osz00, BgL_aux3002z00_3246); 
FAILURE(BgL_auxz00_4978,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 847 */
obj_t BgL_pairz00_2500;
{ /* Llib/os.scm 847 */
obj_t BgL_aux3004z00_3248;
BgL_aux3004z00_3248 = BgL_runner2287z00_1268; 
if(
PAIRP(BgL_aux3004z00_3248))
{ /* Llib/os.scm 847 */
BgL_pairz00_2500 = BgL_aux3004z00_3248; }  else 
{ 
obj_t BgL_auxz00_4984;
BgL_auxz00_4984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux3004z00_3248); 
FAILURE(BgL_auxz00_4984,BFALSE,BFALSE);} } 
BgL_runner2287z00_1268 = 
CDR(BgL_pairz00_2500); } 
{ /* Llib/os.scm 847 */
obj_t BgL_aux2286z00_1267;
{ /* Llib/os.scm 847 */
obj_t BgL_pairz00_2501;
{ /* Llib/os.scm 847 */
obj_t BgL_aux3006z00_3250;
BgL_aux3006z00_3250 = BgL_runner2287z00_1268; 
if(
PAIRP(BgL_aux3006z00_3250))
{ /* Llib/os.scm 847 */
BgL_pairz00_2501 = BgL_aux3006z00_3250; }  else 
{ 
obj_t BgL_auxz00_4991;
BgL_auxz00_4991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux3006z00_3250); 
FAILURE(BgL_auxz00_4991,BFALSE,BFALSE);} } 
{ /* Llib/os.scm 847 */
obj_t BgL_aux3008z00_3252;
BgL_aux3008z00_3252 = 
CAR(BgL_pairz00_2501); 
if(
STRINGP(BgL_aux3008z00_3252))
{ /* Llib/os.scm 847 */
BgL_aux2286z00_1267 = BgL_aux3008z00_3252; }  else 
{ 
obj_t BgL_auxz00_4998;
BgL_auxz00_4998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3090z00zz__osz00, BgL_aux3008z00_3252); 
FAILURE(BgL_auxz00_4998,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 847 */
obj_t BgL_pairz00_2502;
{ /* Llib/os.scm 847 */
obj_t BgL_aux3010z00_3254;
BgL_aux3010z00_3254 = BgL_runner2287z00_1268; 
if(
PAIRP(BgL_aux3010z00_3254))
{ /* Llib/os.scm 847 */
BgL_pairz00_2502 = BgL_aux3010z00_3254; }  else 
{ 
obj_t BgL_auxz00_5004;
BgL_auxz00_5004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30177)), BGl_string3138z00zz__osz00, BGl_string3082z00zz__osz00, BgL_aux3010z00_3254); 
FAILURE(BgL_auxz00_5004,BFALSE,BFALSE);} } 
BgL_runner2287z00_1268 = 
CDR(BgL_pairz00_2502); } 
BgL_aux3024z00_3268 = 
BGl_makezd2filezd2pathz00zz__osz00(BgL_aux2285z00_1266, BgL_aux2286z00_1267, BgL_runner2287z00_1268); } } } } } }  else 
{ /* Llib/os.scm 855 */
bool_t BgL_testz00_5010;
{ /* Llib/os.scm 855 */
obj_t BgL_arg2278z00_1257;obj_t BgL_arg2279z00_1258;
{ /* Llib/os.scm 855 */
obj_t BgL_pairz00_2480;
if(
PAIRP(BgL_fz00_1249))
{ /* Llib/os.scm 855 */
BgL_pairz00_2480 = BgL_fz00_1249; }  else 
{ 
obj_t BgL_auxz00_5013;
BgL_auxz00_5013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30367)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_fz00_1249); 
FAILURE(BgL_auxz00_5013,BFALSE,BFALSE);} 
BgL_arg2278z00_1257 = 
CAR(BgL_pairz00_2480); } 
{ /* Llib/os.scm 855 */
obj_t BgL_pairz00_2481;
if(
PAIRP(BgL_bz00_1250))
{ /* Llib/os.scm 855 */
BgL_pairz00_2481 = BgL_bz00_1250; }  else 
{ 
obj_t BgL_auxz00_5020;
BgL_auxz00_5020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30375)), BGl_string3093z00zz__osz00, BGl_string3082z00zz__osz00, BgL_bz00_1250); 
FAILURE(BgL_auxz00_5020,BFALSE,BFALSE);} 
BgL_arg2279z00_1258 = 
CAR(BgL_pairz00_2481); } 
{ /* Llib/os.scm 855 */
obj_t BgL_string1z00_2482;obj_t BgL_string2z00_2483;
if(
STRINGP(BgL_arg2278z00_1257))
{ /* Llib/os.scm 855 */
BgL_string1z00_2482 = BgL_arg2278z00_1257; }  else 
{ 
obj_t BgL_auxz00_5027;
BgL_auxz00_5027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30368)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2278z00_1257); 
FAILURE(BgL_auxz00_5027,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg2279z00_1258))
{ /* Llib/os.scm 855 */
BgL_string2z00_2483 = BgL_arg2279z00_1258; }  else 
{ 
obj_t BgL_auxz00_5033;
BgL_auxz00_5033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30376)), BGl_string3093z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2279z00_1258); 
FAILURE(BgL_auxz00_5033,BFALSE,BFALSE);} 
BgL_testz00_5010 = 
bigloo_strcmp(BgL_string1z00_2482, BgL_string2z00_2483); } } 
if(BgL_testz00_5010)
{ 
obj_t BgL_bz00_5040;obj_t BgL_fz00_5038;
BgL_fz00_5038 = 
CDR(BgL_fz00_1249); 
BgL_bz00_5040 = 
CDR(BgL_bz00_1250); 
BgL_bz00_1250 = BgL_bz00_5040; 
BgL_fz00_1249 = BgL_fz00_5038; 
goto BgL_zc3anonymousza32271ze3z83_1251;}  else 
{ 
obj_t BgL_fz00_5042;
BgL_fz00_5042 = BgL_fz00_1249; 
BgL_fz00_1260 = BgL_fz00_5042; 
goto BgL_zc3anonymousza32280ze3z83_1261;} } } 
if(
STRINGP(BgL_aux3024z00_3268))
{ /* Llib/os.scm 848 */
return BgL_aux3024z00_3268;}  else 
{ 
obj_t BgL_auxz00_5045;
BgL_auxz00_5045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30208)), BGl_string3139z00zz__osz00, BGl_string3090z00zz__osz00, BgL_aux3024z00_3268); 
FAILURE(BgL_auxz00_5045,BFALSE,BFALSE);} } } } } } 
}



/* _relative-file-name */
obj_t BGl__relativezd2filezd2namez00zz__osz00(obj_t BgL_envz00_2835, obj_t BgL_namez00_2836, obj_t BgL_basez00_2837)
{ AN_OBJECT;
{ /* Llib/os.scm 839 */
{ /* Llib/os.scm 842 */
obj_t BgL_auxz00_5056;obj_t BgL_auxz00_5049;
if(
STRINGP(BgL_basez00_2837))
{ /* Llib/os.scm 842 */
BgL_auxz00_5056 = BgL_basez00_2837
; }  else 
{ 
obj_t BgL_auxz00_5059;
BgL_auxz00_5059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30080)), BGl_string3140z00zz__osz00, BGl_string3090z00zz__osz00, BgL_basez00_2837); 
FAILURE(BgL_auxz00_5059,BFALSE,BFALSE);} 
if(
STRINGP(BgL_namez00_2836))
{ /* Llib/os.scm 842 */
BgL_auxz00_5049 = BgL_namez00_2836
; }  else 
{ 
obj_t BgL_auxz00_5052;
BgL_auxz00_5052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30080)), BGl_string3140z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2836); 
FAILURE(BgL_auxz00_5052,BFALSE,BFALSE);} 
return 
BGl_relativezd2filezd2namez00zz__osz00(BgL_auxz00_5049, BgL_auxz00_5056);} } 
}



/* make-static-library-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t BgL_libnamez00_41)
{ AN_OBJECT;
{ /* Llib/os.scm 865 */
return 
string_append_3(BgL_libnamez00_41, BGl_string3061z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));} 
}



/* _make-static-library-name */
obj_t BGl__makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t BgL_envz00_2838, obj_t BgL_libnamez00_2839)
{ AN_OBJECT;
{ /* Llib/os.scm 865 */
{ /* Llib/os.scm 866 */
obj_t BgL_auxz00_5066;
if(
STRINGP(BgL_libnamez00_2839))
{ /* Llib/os.scm 866 */
BgL_auxz00_5066 = BgL_libnamez00_2839
; }  else 
{ 
obj_t BgL_auxz00_5069;
BgL_auxz00_5069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)30862)), BGl_string3141z00zz__osz00, BGl_string3090z00zz__osz00, BgL_libnamez00_2839); 
FAILURE(BgL_auxz00_5069,BFALSE,BFALSE);} 
return 
BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(BgL_auxz00_5066);} } 
}



/* make-shared-library-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t BgL_libnamez00_42)
{ AN_OBJECT;
{ /* Llib/os.scm 873 */
return 
string_append_3(BgL_libnamez00_42, BGl_string3061z00zz__osz00, 
string_to_bstring(SHARED_LIB_SUFFIX));} 
}



/* _make-shared-library-name */
obj_t BGl__makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t BgL_envz00_2840, obj_t BgL_libnamez00_2841)
{ AN_OBJECT;
{ /* Llib/os.scm 873 */
{ /* Llib/os.scm 874 */
obj_t BgL_auxz00_5076;
if(
STRINGP(BgL_libnamez00_2841))
{ /* Llib/os.scm 874 */
BgL_auxz00_5076 = BgL_libnamez00_2841
; }  else 
{ 
obj_t BgL_auxz00_5079;
BgL_auxz00_5079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)31347)), BGl_string3142z00zz__osz00, BGl_string3090z00zz__osz00, BgL_libnamez00_2841); 
FAILURE(BgL_auxz00_5079,BFALSE,BFALSE);} 
return 
BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(BgL_auxz00_5076);} } 
}



/* sleep */
BGL_EXPORTED_DEF obj_t BGl_sleepz00zz__osz00(long BgL_msz00_43)
{ AN_OBJECT;
{ /* Llib/os.scm 879 */
bgl_sleep(BgL_msz00_43); BUNSPEC; 
return 
BINT(BgL_msz00_43);} 
}



/* _sleep */
obj_t BGl__sleepz00zz__osz00(obj_t BgL_envz00_2842, obj_t BgL_msz00_2843)
{ AN_OBJECT;
{ /* Llib/os.scm 879 */
{ /* Llib/os.scm 881 */
long BgL_msz00_3305;
{ /* Llib/os.scm 881 */
obj_t BgL_auxz00_5086;
if(
INTEGERP(BgL_msz00_2843))
{ /* Llib/os.scm 881 */
BgL_auxz00_5086 = BgL_msz00_2843
; }  else 
{ 
obj_t BgL_auxz00_5089;
BgL_auxz00_5089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)31674)), BGl_string3143z00zz__osz00, BGl_string3110z00zz__osz00, BgL_msz00_2843); 
FAILURE(BgL_auxz00_5089,BFALSE,BFALSE);} 
BgL_msz00_3305 = 
(long)CINT(BgL_auxz00_5086); } 
bgl_sleep(BgL_msz00_3305); BUNSPEC; 
return 
BINT(BgL_msz00_3305);} } 
}



/* _dynamic-load */
obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t BgL_envz00_48, obj_t BgL_optz00_47)
{ AN_OBJECT;
{ /* Llib/os.scm 900 */
{ /* Llib/os.scm 900 */
obj_t BgL_g1879z00_1272;
BgL_g1879z00_1272 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ 

{ /* Llib/os.scm 900 */
int BgL_aux1881z00_1274;
BgL_aux1881z00_1274 = 
VECTOR_LENGTH(BgL_optz00_47); 
switch( 
(long)(BgL_aux1881z00_1274)) { case ((long)1) : 

{ /* Llib/os.scm 900 */

{ /* Llib/os.scm 900 */
obj_t BgL_arg2292z00_1278;
BgL_arg2292z00_1278 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ /* Llib/os.scm 900 */
obj_t BgL_auxz00_5101;
if(
STRINGP(BgL_arg2292z00_1278))
{ /* Llib/os.scm 900 */
BgL_auxz00_5101 = BgL_arg2292z00_1278
; }  else 
{ 
obj_t BgL_auxz00_5104;
BgL_auxz00_5104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)32728)), BGl_string3147z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2292z00_1278); 
FAILURE(BgL_auxz00_5104,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5101, 
string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);} } } break;case ((long)2) : 

{ /* Llib/os.scm 900 */
obj_t BgL_initz00_1279;
BgL_initz00_1279 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)1))); 
{ /* Llib/os.scm 900 */

{ /* Llib/os.scm 900 */
obj_t BgL_arg2293z00_1281;
BgL_arg2293z00_1281 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ /* Llib/os.scm 900 */
obj_t BgL_auxz00_5114;
if(
STRINGP(BgL_arg2293z00_1281))
{ /* Llib/os.scm 900 */
BgL_auxz00_5114 = BgL_arg2293z00_1281
; }  else 
{ 
obj_t BgL_auxz00_5117;
BgL_auxz00_5117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)32728)), BGl_string3147z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2293z00_1281); 
FAILURE(BgL_auxz00_5117,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5114, BgL_initz00_1279, BFALSE);} } } } break;case ((long)3) : 

{ /* Llib/os.scm 900 */
obj_t BgL_initz00_1282;
BgL_initz00_1282 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)1))); 
{ /* Llib/os.scm 900 */
obj_t BgL_modulez00_1283;
BgL_modulez00_1283 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)2))); 
{ /* Llib/os.scm 900 */

{ /* Llib/os.scm 900 */
obj_t BgL_arg2294z00_1284;
BgL_arg2294z00_1284 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ /* Llib/os.scm 900 */
obj_t BgL_auxz00_5128;
if(
STRINGP(BgL_arg2294z00_1284))
{ /* Llib/os.scm 900 */
BgL_auxz00_5128 = BgL_arg2294z00_1284
; }  else 
{ 
obj_t BgL_auxz00_5131;
BgL_auxz00_5131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)32728)), BGl_string3147z00zz__osz00, BGl_string3090z00zz__osz00, BgL_arg2294z00_1284); 
FAILURE(BgL_auxz00_5131,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5128, BgL_initz00_1282, BgL_modulez00_1283);} } } } } break;
default: 
{ /* Llib/os.scm 900 */
obj_t BgL_arg2295z00_1285;int BgL_arg2297z00_1287;
BgL_arg2295z00_1285 = BGl_symbol3144z00zz__osz00; 
BgL_arg2297z00_1287 = 
VECTOR_LENGTH(BgL_optz00_47); 
return 
BGl_errorz00zz__errorz00(BgL_arg2295z00_1285, BGl_string3146z00zz__osz00, 
BINT(BgL_arg2297z00_1287));} } } } } } 
}



/* dynamic-load */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t BgL_libz00_44, obj_t BgL_initz00_45, obj_t BgL_modulez00_46)
{ AN_OBJECT;
{ /* Llib/os.scm 900 */
{ /* Llib/os.scm 905 */
obj_t BgL_flibz00_1290;obj_t BgL_modz00_1291;
BgL_flibz00_1290 = 
BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_44, BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00); 
if(
CBOOL(BgL_modulez00_46))
{ /* Llib/os.scm 915 */
obj_t BgL_arg2310z00_1307;
{ /* Llib/os.scm 916 */
obj_t BgL_symbolz00_2503;
if(
SYMBOLP(BgL_modulez00_46))
{ /* Llib/os.scm 916 */
BgL_symbolz00_2503 = BgL_modulez00_46; }  else 
{ 
obj_t BgL_auxz00_5146;
BgL_auxz00_5146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)33266)), BGl_string3145z00zz__osz00, BGl_string3125z00zz__osz00, BgL_modulez00_46); 
FAILURE(BgL_auxz00_5146,BFALSE,BFALSE);} 
BgL_arg2310z00_1307 = 
SYMBOL_TO_STRING(BgL_symbolz00_2503); } 
BgL_modz00_1291 = 
bigloo_module_mangle(BGl_string3148z00zz__osz00, BgL_arg2310z00_1307); }  else 
{ /* Llib/os.scm 912 */
BgL_modz00_1291 = BGl_string3095z00zz__osz00; } 
if(
STRINGP(BgL_flibz00_1290))
{ /* Llib/os.scm 922 */
obj_t BgL_initz00_1293;
if(
CBOOL(BgL_initz00_45))
{ /* Llib/os.scm 922 */
BgL_initz00_1293 = BgL_initz00_45; }  else 
{ /* Llib/os.scm 922 */
BgL_initz00_1293 = BGl_string3095z00zz__osz00; } 
{ /* Llib/os.scm 923 */
int BgL_aux1842z00_1295;
{ /* Llib/os.scm 923 */
char * BgL_auxz00_5156;
{ /* Llib/os.scm 923 */
obj_t BgL_auxz00_5158;
if(
STRINGP(BgL_initz00_1293))
{ /* Llib/os.scm 923 */
BgL_auxz00_5158 = BgL_initz00_1293
; }  else 
{ 
obj_t BgL_auxz00_5161;
BgL_auxz00_5161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)33447)), BGl_string3145z00zz__osz00, BGl_string3079z00zz__osz00, BgL_initz00_1293); 
FAILURE(BgL_auxz00_5161,BFALSE,BFALSE);} 
BgL_auxz00_5156 = 
BSTRING_TO_STRING(BgL_auxz00_5158); } 
BgL_aux1842z00_1295 = 
bgl_dload(
BSTRING_TO_STRING(BgL_flibz00_1290), BgL_auxz00_5156, 
BSTRING_TO_STRING(BgL_modz00_1291)); } 
switch( 
(long)(BgL_aux1842z00_1295)) { case ((long)0) : 

return BgL_flibz00_1290;break;case ((long)1) : 

{ /* Llib/os.scm 927 */
char * BgL_arg2300z00_1297;
BgL_arg2300z00_1297 = 
bgl_dload_error(); 
{ /* Llib/os.scm 927 */
obj_t BgL_procz00_2505;obj_t BgL_objz00_2507;
BgL_procz00_2505 = BgL_flibz00_1290; 
BgL_objz00_2507 = BgL_flibz00_1290; 
return 
BGl_errorz00zz__errorz00(
string_append(BGl_string3149z00zz__osz00, BgL_procz00_2505), 
string_to_bstring(BgL_arg2300z00_1297), BgL_objz00_2507);} } break;case ((long)2) : 

{ /* Llib/os.scm 930 */
bool_t BgL_testz00_5172;
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_initz00_1293, 
string_to_bstring(BGL_DYNAMIC_LOAD_INIT)))
{ /* Llib/os.scm 930 */
if(
CBOOL(BgL_modulez00_46))
{ /* Llib/os.scm 930 */
BgL_testz00_5172 = ((bool_t)0)
; }  else 
{ /* Llib/os.scm 930 */
BgL_testz00_5172 = ((bool_t)1)
; } }  else 
{ /* Llib/os.scm 930 */
BgL_testz00_5172 = ((bool_t)0)
; } 
if(BgL_testz00_5172)
{ /* Llib/os.scm 931 */
obj_t BgL_arg2302z00_1299;
BgL_arg2302z00_1299 = 
string_append(BGl_string3150z00zz__osz00, BgL_flibz00_1290); 
{ /* Llib/os.scm 931 */
obj_t BgL_list2304z00_1301;
{ /* Llib/os.scm 931 */
obj_t BgL_arg2305z00_1302;
{ /* Llib/os.scm 931 */
obj_t BgL_arg2306z00_1303;
BgL_arg2306z00_1303 = 
MAKE_PAIR(BgL_initz00_1293, BNIL); 
BgL_arg2305z00_1302 = 
MAKE_PAIR(BGl_string3151z00zz__osz00, BgL_arg2306z00_1303); } 
BgL_list2304z00_1301 = 
MAKE_PAIR(BgL_arg2302z00_1299, BgL_arg2305z00_1302); } 
return 
BGl_warningz00zz__errorz00(BgL_list2304z00_1301);} }  else 
{ /* Llib/os.scm 934 */
bool_t BgL_testz00_5183;
{ /* Llib/os.scm 934 */
obj_t BgL_string1z00_2509;
if(
STRINGP(BgL_initz00_1293))
{ /* Llib/os.scm 934 */
BgL_string1z00_2509 = BgL_initz00_1293; }  else 
{ 
obj_t BgL_auxz00_5186;
BgL_auxz00_5186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)33731)), BGl_string3145z00zz__osz00, BGl_string3090z00zz__osz00, BgL_initz00_1293); 
FAILURE(BgL_auxz00_5186,BFALSE,BFALSE);} 
BgL_testz00_5183 = 
bigloo_strcmp(BgL_string1z00_2509, BGl_string3095z00zz__osz00); } 
if(BgL_testz00_5183)
{ /* Llib/os.scm 935 */
obj_t BgL_procz00_2511;
BgL_procz00_2511 = BgL_flibz00_1290; 
return 
BGl_errorz00zz__errorz00(
string_append(BGl_string3149z00zz__osz00, BgL_procz00_2511), BGl_string3152z00zz__osz00, BgL_modulez00_46);}  else 
{ /* Llib/os.scm 939 */
obj_t BgL_procz00_2515;
BgL_procz00_2515 = BgL_flibz00_1290; 
return 
BGl_errorz00zz__errorz00(
string_append(BGl_string3149z00zz__osz00, BgL_procz00_2515), BGl_string3153z00zz__osz00, BgL_initz00_1293);} } } break;case ((long)3) : 

return 
BGl_errorz00zz__errorz00(BGl_string3149z00zz__osz00, BGl_string3154z00zz__osz00, BgL_flibz00_1290);break;
default: 
return BUNSPEC;} } }  else 
{ /* Llib/os.scm 920 */
return 
BGl_errorz00zz__errorz00(BGl_string3149z00zz__osz00, BGl_string3155z00zz__osz00, BgL_libz00_44);} } } 
}



/* dynamic-unload */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t BgL_libz00_49)
{ AN_OBJECT;
{ /* Llib/os.scm 948 */
{ /* Llib/os.scm 949 */
obj_t BgL_flibz00_1318;
BgL_flibz00_1318 = 
BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_49, BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00); 
if(
STRINGP(BgL_flibz00_1318))
{ /* Llib/os.scm 958 */
int BgL_arg2315z00_1320;
BgL_arg2315z00_1320 = 
bgl_dunload(BgL_flibz00_1318); 
return 
BBOOL(
(
(long)(BgL_arg2315z00_1320)==((long)0)));}  else 
{ /* Llib/os.scm 956 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3156z00zz__osz00, BGl_string3155z00zz__osz00, BgL_libz00_49);} } } 
}



/* _dynamic-unload */
obj_t BGl__dynamiczd2unloadzd2zz__osz00(obj_t BgL_envz00_2844, obj_t BgL_libz00_2845)
{ AN_OBJECT;
{ /* Llib/os.scm 948 */
{ /* Llib/os.scm 949 */
obj_t BgL_auxz00_5207;
if(
STRINGP(BgL_libz00_2845))
{ /* Llib/os.scm 949 */
BgL_auxz00_5207 = BgL_libz00_2845
; }  else 
{ 
obj_t BgL_auxz00_5210;
BgL_auxz00_5210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)34246)), BGl_string3158z00zz__osz00, BGl_string3090z00zz__osz00, BgL_libz00_2845); 
FAILURE(BgL_auxz00_5210,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2unloadzd2zz__osz00(BgL_auxz00_5207);} } 
}



/* unix-path->list */
BGL_EXPORTED_DEF obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t BgL_strz00_50)
{ AN_OBJECT;
{ /* Llib/os.scm 963 */
{ /* Llib/os.scm 964 */
long BgL_stopz00_1322;
BgL_stopz00_1322 = 
STRING_LENGTH(BgL_strz00_50); 
{ 
long BgL_markz00_1326;long BgL_rz00_1327;obj_t BgL_resz00_1328;
BgL_markz00_1326 = ((long)0); 
BgL_rz00_1327 = ((long)0); 
BgL_resz00_1328 = BNIL; 
BgL_zc3anonymousza32317ze3z83_1329:
if(
(BgL_stopz00_1322==BgL_rz00_1327))
{ /* Llib/os.scm 971 */
obj_t BgL_resz00_1331;
if(
(BgL_markz00_1326<BgL_rz00_1327))
{ /* Llib/os.scm 971 */
BgL_resz00_1331 = 
MAKE_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_50, BgL_markz00_1326, BgL_rz00_1327), BgL_resz00_1328); }  else 
{ /* Llib/os.scm 971 */
BgL_resz00_1331 = BgL_resz00_1328; } 
{ /* Llib/os.scm 974 */
obj_t BgL_auxz00_5222;
{ /* Llib/os.scm 974 */
bool_t BgL_testz00_5223;
if(
PAIRP(BgL_resz00_1331))
{ /* Llib/os.scm 974 */
BgL_testz00_5223 = ((bool_t)1)
; }  else 
{ /* Llib/os.scm 974 */
BgL_testz00_5223 = 
NULLP(BgL_resz00_1331)
; } 
if(BgL_testz00_5223)
{ /* Llib/os.scm 974 */
BgL_auxz00_5222 = BgL_resz00_1331
; }  else 
{ 
obj_t BgL_auxz00_5227;
BgL_auxz00_5227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)35026)), BGl_string3093z00zz__osz00, BGl_string3159z00zz__osz00, BgL_resz00_1331); 
FAILURE(BgL_auxz00_5227,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_5222);} }  else 
{ /* Llib/os.scm 975 */
bool_t BgL_testz00_5232;
{ /* Llib/os.scm 975 */
unsigned char BgL_char2z00_2535;
BgL_char2z00_2535 = 
(unsigned char)(PATH_SEPARATOR); 
{ /* Llib/os.scm 975 */
unsigned char BgL_auxz00_5234;
{ /* Llib/os.scm 975 */
long BgL_l2828z00_3072;
BgL_l2828z00_3072 = 
STRING_LENGTH(BgL_strz00_50); 
if(
BOUND_CHECK(BgL_rz00_1327, BgL_l2828z00_3072))
{ /* Llib/os.scm 975 */
BgL_auxz00_5234 = 
STRING_REF(BgL_strz00_50, BgL_rz00_1327)
; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)35047)), BGl_string3086z00zz__osz00, 
BINT(BgL_rz00_1327), BgL_strz00_50); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} } 
BgL_testz00_5232 = 
(BgL_auxz00_5234==BgL_char2z00_2535); } } 
if(BgL_testz00_5232)
{ /* Llib/os.scm 975 */
if(
(BgL_markz00_1326<BgL_rz00_1327))
{ /* Llib/os.scm 977 */
long BgL_arg2323z00_1336;long BgL_arg2324z00_1337;obj_t BgL_arg2325z00_1338;
BgL_arg2323z00_1336 = 
(((long)1)+BgL_rz00_1327); 
BgL_arg2324z00_1337 = 
(((long)1)+BgL_rz00_1327); 
BgL_arg2325z00_1338 = 
MAKE_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_50, BgL_markz00_1326, BgL_rz00_1327), BgL_resz00_1328); 
{ 
obj_t BgL_resz00_5253;long BgL_rz00_5252;long BgL_markz00_5251;
BgL_markz00_5251 = BgL_arg2323z00_1336; 
BgL_rz00_5252 = BgL_arg2324z00_1337; 
BgL_resz00_5253 = BgL_arg2325z00_1338; 
BgL_resz00_1328 = BgL_resz00_5253; 
BgL_rz00_1327 = BgL_rz00_5252; 
BgL_markz00_1326 = BgL_markz00_5251; 
goto BgL_zc3anonymousza32317ze3z83_1329;} }  else 
{ 
long BgL_rz00_5256;long BgL_markz00_5254;
BgL_markz00_5254 = 
(((long)1)+BgL_rz00_1327); 
BgL_rz00_5256 = 
(((long)1)+BgL_rz00_1327); 
BgL_rz00_1327 = BgL_rz00_5256; 
BgL_markz00_1326 = BgL_markz00_5254; 
goto BgL_zc3anonymousza32317ze3z83_1329;} }  else 
{ 
long BgL_rz00_5258;
BgL_rz00_5258 = 
(((long)1)+BgL_rz00_1327); 
BgL_rz00_1327 = BgL_rz00_5258; 
goto BgL_zc3anonymousza32317ze3z83_1329;} } } } } 
}



/* _unix-path->list */
obj_t BGl__unixzd2pathzd2ze3listze3zz__osz00(obj_t BgL_envz00_2846, obj_t BgL_strz00_2847)
{ AN_OBJECT;
{ /* Llib/os.scm 963 */
{ /* Llib/os.scm 964 */
obj_t BgL_auxz00_5260;
if(
STRINGP(BgL_strz00_2847))
{ /* Llib/os.scm 964 */
BgL_auxz00_5260 = BgL_strz00_2847
; }  else 
{ 
obj_t BgL_auxz00_5263;
BgL_auxz00_5263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)34790)), BGl_string3160z00zz__osz00, BGl_string3090z00zz__osz00, BgL_strz00_2847); 
FAILURE(BgL_auxz00_5263,BFALSE,BFALSE);} 
return 
BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_auxz00_5260);} } 
}



/* getuid */
BGL_EXPORTED_DEF int BGl_getuidz00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 985 */
return 
bgl_getuid();} 
}



/* _getuid */
obj_t BGl__getuidz00zz__osz00(obj_t BgL_envz00_2848)
{ AN_OBJECT;
{ /* Llib/os.scm 985 */
return 
BINT(
bgl_getuid());} 
}



/* setuid */
BGL_EXPORTED_DEF obj_t BGl_setuidz00zz__osz00(int BgL_uidz00_51)
{ AN_OBJECT;
{ /* Llib/os.scm 995 */
return 
BINT(
bgl_getuid());} 
}



/* _setuid */
obj_t BGl__setuidz00zz__osz00(obj_t BgL_envz00_2849, obj_t BgL_uidz00_2850)
{ AN_OBJECT;
{ /* Llib/os.scm 995 */
{ /* Llib/os.scm 998 */
int BgL_uidz00_3311;
{ /* Llib/os.scm 998 */
obj_t BgL_auxz00_5273;
if(
INTEGERP(BgL_uidz00_2850))
{ /* Llib/os.scm 998 */
BgL_auxz00_5273 = BgL_uidz00_2850
; }  else 
{ 
obj_t BgL_auxz00_5276;
BgL_auxz00_5276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)35845)), BGl_string3161z00zz__osz00, BGl_string3073z00zz__osz00, BgL_uidz00_2850); 
FAILURE(BgL_auxz00_5276,BFALSE,BFALSE);} 
BgL_uidz00_3311 = 
CINT(BgL_auxz00_5273); } 
return 
BINT(
bgl_getuid());} } 
}



/* getpwnam */
BGL_EXPORTED_DEF obj_t BGl_getpwnamz00zz__osz00(obj_t BgL_namez00_52)
{ AN_OBJECT;
{ /* Llib/os.scm 1005 */
return 
bgl_getpwnam(
BSTRING_TO_STRING(BgL_namez00_52));} 
}



/* _getpwnam */
obj_t BGl__getpwnamz00zz__osz00(obj_t BgL_envz00_2851, obj_t BgL_namez00_2852)
{ AN_OBJECT;
{ /* Llib/os.scm 1005 */
{ /* Llib/os.scm 1008 */
obj_t BgL_auxz00_5285;
if(
STRINGP(BgL_namez00_2852))
{ /* Llib/os.scm 1008 */
BgL_auxz00_5285 = BgL_namez00_2852
; }  else 
{ 
obj_t BgL_auxz00_5288;
BgL_auxz00_5288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)36210)), BGl_string3162z00zz__osz00, BGl_string3090z00zz__osz00, BgL_namez00_2852); 
FAILURE(BgL_auxz00_5288,BFALSE,BFALSE);} 
return 
BGl_getpwnamz00zz__osz00(BgL_auxz00_5285);} } 
}



/* getpwuid */
BGL_EXPORTED_DEF obj_t BGl_getpwuidz00zz__osz00(int BgL_uidz00_53)
{ AN_OBJECT;
{ /* Llib/os.scm 1015 */
return 
bgl_getpwuid(BgL_uidz00_53);} 
}



/* _getpwuid */
obj_t BGl__getpwuidz00zz__osz00(obj_t BgL_envz00_2853, obj_t BgL_uidz00_2854)
{ AN_OBJECT;
{ /* Llib/os.scm 1015 */
{ /* Llib/os.scm 1018 */
int BgL_uidz00_3312;
{ /* Llib/os.scm 1018 */
obj_t BgL_auxz00_5294;
if(
INTEGERP(BgL_uidz00_2854))
{ /* Llib/os.scm 1018 */
BgL_auxz00_5294 = BgL_uidz00_2854
; }  else 
{ 
obj_t BgL_auxz00_5297;
BgL_auxz00_5297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3067z00zz__osz00, 
BINT(((long)36538)), BGl_string3163z00zz__osz00, BGl_string3073z00zz__osz00, BgL_uidz00_2854); 
FAILURE(BgL_auxz00_5297,BFALSE,BFALSE);} 
BgL_uidz00_3312 = 
CINT(BgL_auxz00_5294); } 
return 
bgl_getpwuid(BgL_uidz00_3312);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 18 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 18 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__osz00()
{ AN_OBJECT;
{ /* Llib/os.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3164z00zz__osz00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3164z00zz__osz00));} 
}

#ifdef __cplusplus
}
#endif
