/*===========================================================================*/
/*   (Ieee/port.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/port.scm -indent -o objs/obj_s/Ieee/port.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */
typedef struct BgL_z62iozd2portzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2portzd2errorz62_bglt;

typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

typedef struct BgL_z62httpzd2redirectionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_portz00;
   obj_t BgL_urlz00;
} *BgL_z62httpzd2redirectionzb0_bglt;


extern obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char *, char *);
static obj_t BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32520ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern int bgl_input_fill_string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t bgl_input_port_timeout_set(obj_t, long);
static obj_t BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_procedure(obj_t, obj_t);
static obj_t BGl_zc3exitza32511ze3z83zz__r4_ports_6_10_1z00();
BGL_EXPORTED_DECL obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, long);
static obj_t BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
BGL_EXPORTED_DECL long BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_closez00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t make_string_sans_fill(long);
extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_zc3exitza32517ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern int bgl_output_string(obj_t, obj_t);
static obj_t BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_file_size(char *);
static obj_t BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, char *);
static obj_t BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern int bgl_file_mode(char *);
static obj_t BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00();
static obj_t BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t fexists(char *);
BGL_EXPORTED_DECL int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_symbol3292z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol3310z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol3314z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern int default_io_bufsiz;
static obj_t BGl_symbol3316z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3318z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3326z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3329z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3332z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3338z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3343z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol3347z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__deletezd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_append_output_file(obj_t, obj_t);
static obj_t BGl_symbol3357z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3360z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_parserz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3366z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol3384z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol3390z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3409z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3412z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern BgL_z62iozd2portzd2errorz62_bglt BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3416z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_symbol3418z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char *);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
extern obj_t socket_close(obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
static obj_t BGl_symbol3438z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3440z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3442z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3444z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
BGL_EXPORTED_DECL obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
static obj_t BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol3451z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol3460z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3463z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3482z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3491z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_symbol3502z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3497z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol3508z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern bool_t directoryp(char *);
static obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char *);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char *);
extern obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char *);
static obj_t BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__filezd2gidzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_open_input_resource(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char *);
static obj_t BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_input_port_reopen(obj_t);
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
extern obj_t bgl_output_port_seek(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
extern obj_t bgl_close_output_port(obj_t);
static obj_t BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t close_binary_port(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl__copyzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_open_input_c_string(char *);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl__filezd2uidzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_reopen_input_c_string(obj_t, char *);
static obj_t BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
static obj_t BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern int bgl_file_gid(char *);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_z62httpzd2redirectionzb0zz__httpz00;
extern obj_t get_output_string(obj_t);
BGL_EXPORTED_DECL obj_t BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
static obj_t BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_string(obj_t, int);
static obj_t BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char *, char *);
static obj_t BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_last_modification_time(char *);
static obj_t BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_directory_to_path_list(char *, int, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t string_to_bstring(char *);
static obj_t BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();
extern int bgl_file_uid(char *);
extern obj_t bgl_input_port_seek(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_open_input_string_bang(obj_t);
static obj_t BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_file(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_close_2846z00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_close_2848z00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_close_2850z00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_close_2849z00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL long BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list3313z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t BGl_filezd2separatorzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char *);
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl_flushz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_list3346z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
extern obj_t BGl_dirnamez00zz__osz00(obj_t);
static obj_t BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_output_file(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3437z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_output_procedure(obj_t, obj_t, obj_t, obj_t);
extern bool_t bgl_output_port_timeout_set(obj_t, long);
static obj_t BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_pipe(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_raisez00zz__errorz00(obj_t);
static obj_t BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_flush_2847z00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_flush_2851z00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__portzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__filezd2modezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_output_string(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza32510ze3z83zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t directory_to_list(char *);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
extern bool_t reset_eof(obj_t);
static obj_t BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__renamezd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00();
static obj_t BGl__directoryzf3zf3zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2procedu3542za7, BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2outputzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__callza7d2withza7d2o3543z00, BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23544z00, BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23545z00, opt_generic_entry, BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2modezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2modeza7d2za73546za7, BGl__filezd2modezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3547z00, opt_generic_entry, BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23548z00, BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2inputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__setza7d2inputza7d2p3549z00, BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__closeza7d2outputza73550z00, BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3551z00, BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2gza7ipzd2portzd2envza7zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23552z00, opt_generic_entry, BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__currentza7d2outpu3553za7, BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2outputzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__callza7d2withza7d2o3554z00, BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23555z00, opt_generic_entry, BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3556z00, BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2directoryzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__makeza7d2director3557za7, BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2outputza7d3558z00, BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3559z00, BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2gidzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2gidza7d2za7za73560z00, BGl__filezd2gidzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2lastzd2tokenzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23561z00, BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2outputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__setza7d2outputza7d23562z00, BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2inputza7d23563z00, BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
extern obj_t BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2inputza7d23564z00, BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2bufferzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3565z00, BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2inputzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__callza7d2withza7d2i3566z00, BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__deleteza7d2fileza7d3567z00, BGl__deletezd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2proced3568za7, BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flushzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__flushza7d2outputza73569z00, BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2outputza7d3570z00, BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzd2ze3pathzd2listzd2envz31zz__r4_ports_6_10_1z00, BgL_bgl__directoryza7d2za7e33571z00, BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00, BgL_bgl__za752openza7d2input3572z00, BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2stringza73573z00, BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2gza7ipzf3zd2envz54zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2gza7a7ipza7f3574za7, BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3575z00, BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3576z00, BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23577z00, BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7f33578z00, BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3579z00, BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23580z00, BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__closeza7d2inputza7d3581z00, BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2errorza7d23582z00, BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__currentza7d2input3583za7, BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl__za752openza7d2input3584z00, BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2errorzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__currentza7d2error3585za7, BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2protocolzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23586z00, BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
extern obj_t BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2directoryzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__deleteza7d2direct3587za7, BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2inputzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__callza7d2withza7d2i3588z00, BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__appendza7d2output3589za7, opt_generic_entry, BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2reopenz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23590z00, BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2existszf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2existsza7f3591z00, BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3592z00, opt_generic_entry, BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23593z00, BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2directorieszd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__makeza7d2director3594za7, BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3296z00zz__r4_ports_6_10_1z00, BgL_bgl_za7c3anonymousza7a323595z00, BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2inputza7d23596z00, BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2fillzd2barrierzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23597z00, BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_renamezd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__renameza7d2fileza7d3598z00, BGl__renamezd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_resetzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__resetza7d2outputza73599z00, BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__getza7d2portza7d2bu3600z00, BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23601z00, BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3377z00zz__r4_ports_6_10_1z00, BgL_bgl_flushza700za7za7__r4_p3602za7, BGl_flushz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3378z00zz__r4_ports_6_10_1z00, BgL_bgl_closeza700za7za7__r4_p3603za7, BGl_closez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3397z00zz__r4_ports_6_10_1z00, BgL_bgl_flush_2847za700za7za7_3604za7, BGl_flush_2847z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3398z00zz__r4_ports_6_10_1z00, BgL_bgl_close_2846za700za7za7_3605za7, BGl_close_2846z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3606z00, BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2errorza7d23607z00, BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3466z00zz__r4_ports_6_10_1z00, BgL_bgl_flush_2851za700za7za7_3608za7, BGl_flush_2851z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3467z00zz__r4_ports_6_10_1z00, BgL_bgl_close_2850za700za7za7_3609za7, BGl_close_2850z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3470z00zz__r4_ports_6_10_1z00, BgL_bgl_close_2848za700za7za7_3610za7, BGl_close_2848z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3469z00zz__r4_ports_6_10_1z00, BgL_bgl_close_2849za700za7za7_3611za7, BGl_close_2849z00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3300z00zz__r4_ports_6_10_1z00, BgL_bgl_string3300za700za7za7_3612za7, "gzip:", 5 );
DEFINE_STRING( BGl_string3301z00zz__r4_ports_6_10_1z00, BgL_bgl_string3301za700za7za7_3613za7, "zlib:", 5 );
DEFINE_STRING( BGl_string3302z00zz__r4_ports_6_10_1z00, BgL_bgl_string3302za700za7za7_3614za7, "inflate:", 8 );
DEFINE_STRING( BGl_string3303z00zz__r4_ports_6_10_1z00, BgL_bgl_string3303za700za7za7_3615za7, "/resource/", 10 );
DEFINE_STRING( BGl_string3293z00zz__r4_ports_6_10_1z00, BgL_bgl_string3293za700za7za7_3616za7, "input-port-protocols", 20 );
DEFINE_STRING( BGl_string3304z00zz__r4_ports_6_10_1z00, BgL_bgl_string3304za700za7za7_3617za7, "ftp://", 6 );
DEFINE_STRING( BGl_string3294z00zz__r4_ports_6_10_1z00, BgL_bgl_string3294za700za7za7_3618za7, "file:", 5 );
DEFINE_STRING( BGl_string3305z00zz__r4_ports_6_10_1z00, BgL_bgl_string3305za700za7za7_3619za7, "/tmp/bigloo/runtime/Ieee/port.scm", 33 );
DEFINE_STRING( BGl_string3295z00zz__r4_ports_6_10_1z00, BgL_bgl_string3295za700za7za7_3620za7, "string:", 7 );
DEFINE_STRING( BGl_string3306z00zz__r4_ports_6_10_1z00, BgL_bgl_string3306za700za7za7_3621za7, "<anonymous:2305>", 16 );
DEFINE_STRING( BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_bgl_string3307za700za7za7_3622za7, "bstring", 7 );
DEFINE_STRING( BGl_string3297z00zz__r4_ports_6_10_1z00, BgL_bgl_string3297za700za7za7_3623za7, "| ", 2 );
DEFINE_STRING( BGl_string3308z00zz__r4_ports_6_10_1z00, BgL_bgl_string3308za700za7za7_3624za7, "call-with-input-file", 20 );
DEFINE_STRING( BGl_string3298z00zz__r4_ports_6_10_1z00, BgL_bgl_string3298za700za7za7_3625za7, "pipe:", 5 );
DEFINE_STRING( BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_bgl_string3309za700za7za7_3626za7, "pair", 4 );
DEFINE_STRING( BGl_string3299z00zz__r4_ports_6_10_1z00, BgL_bgl_string3299za700za7za7_3627za7, "http://", 7 );
DEFINE_STRING( BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_bgl_string3311za700za7za7_3628za7, "can't open file", 15 );
DEFINE_STRING( BGl_string3312z00zz__r4_ports_6_10_1z00, BgL_bgl_string3312za700za7za7_3629za7, "<exit:2310>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3315z00zz__r4_ports_6_10_1z00, BgL_bgl_string3315za700za7za7_3630za7, "funcall", 7 );
DEFINE_STRING( BGl_string3317z00zz__r4_ports_6_10_1z00, BgL_bgl_string3317za700za7za7_3631za7, "proc", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closedzd2inputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__closedza7d2inputza73632z00, BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3320z00zz__r4_ports_6_10_1z00, BgL_bgl_string3320za700za7za7_3633za7, "_call-with-input-file", 21 );
DEFINE_STRING( BGl_string3319z00zz__r4_ports_6_10_1z00, BgL_bgl_string3319za700za7za7_3634za7, "port", 4 );
DEFINE_STRING( BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_bgl_string3321za700za7za7_3635za7, "procedure", 9 );
DEFINE_STRING( BGl_string3322z00zz__r4_ports_6_10_1z00, BgL_bgl_string3322za700za7za7_3636za7, "call-with-input-string:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string3323z00zz__r4_ports_6_10_1z00, BgL_bgl_string3323za700za7za7_3637za7, "call-with-input-string", 22 );
DEFINE_STRING( BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_bgl_string3324za700za7za7_3638za7, "input-port", 10 );
DEFINE_STRING( BGl_string3325z00zz__r4_ports_6_10_1z00, BgL_bgl_string3325za700za7za7_3639za7, "_call-with-input-string", 23 );
DEFINE_STRING( BGl_string3327z00zz__r4_ports_6_10_1z00, BgL_bgl_string3327za700za7za7_3640za7, "open-output-file", 16 );
DEFINE_STRING( BGl_string3328z00zz__r4_ports_6_10_1z00, BgL_bgl_string3328za700za7za7_3641za7, "call-with-output-file", 21 );
DEFINE_STRING( BGl_string3330z00zz__r4_ports_6_10_1z00, BgL_bgl_string3330za700za7za7_3642za7, "<exit:2315>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3331z00zz__r4_ports_6_10_1z00, BgL_bgl_string3331za700za7za7_3643za7, "_call-with-output-file", 22 );
DEFINE_STRING( BGl_string3333z00zz__r4_ports_6_10_1z00, BgL_bgl_string3333za700za7za7_3644za7, "append-output-file", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3645z00, opt_generic_entry, BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc3517z00zz__r4_ports_6_10_1z00, BgL_bgl_za7c3anonymousza7a323646z00, BGl_zc3anonymousza32510ze3z83zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3334z00zz__r4_ports_6_10_1z00, BgL_bgl_string3334za700za7za7_3647za7, "call-with-output-string:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3335z00zz__r4_ports_6_10_1z00, BgL_bgl_string3335za700za7za7_3648za7, "call-with-output-string", 23 );
DEFINE_STRING( BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_bgl_string3336za700za7za7_3649za7, "output-port", 11 );
DEFINE_STRING( BGl_string3337z00zz__r4_ports_6_10_1z00, BgL_bgl_string3337za700za7za7_3650za7, "_call-with-output-string", 24 );
DEFINE_STRING( BGl_string3340z00zz__r4_ports_6_10_1z00, BgL_bgl_string3340za700za7za7_3651za7, "Can't reopen port", 17 );
DEFINE_STRING( BGl_string3339z00zz__r4_ports_6_10_1z00, BgL_bgl_string3339za700za7za7_3652za7, "input-port-reopen!", 18 );
DEFINE_STRING( BGl_string3341z00zz__r4_ports_6_10_1z00, BgL_bgl_string3341za700za7za7_3653za7, "_input-port-reopen!", 19 );
DEFINE_STRING( BGl_string3342z00zz__r4_ports_6_10_1z00, BgL_bgl_string3342za700za7za7_3654za7, "with-input-from-file", 20 );
DEFINE_STRING( BGl_string3344z00zz__r4_ports_6_10_1z00, BgL_bgl_string3344za700za7za7_3655za7, "<exit:2324>", 11 );
DEFINE_STRING( BGl_string3345z00zz__r4_ports_6_10_1z00, BgL_bgl_string3345za700za7za7_3656za7, "<exit:2324>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3348z00zz__r4_ports_6_10_1z00, BgL_bgl_string3348za700za7za7_3657za7, "thunk", 5 );
DEFINE_STRING( BGl_string3350z00zz__r4_ports_6_10_1z00, BgL_bgl_string3350za700za7za7_3658za7, "with-input-from-string", 22 );
DEFINE_STRING( BGl_string3349z00zz__r4_ports_6_10_1z00, BgL_bgl_string3349za700za7za7_3659za7, "_with-input-from-file", 21 );
DEFINE_STRING( BGl_string3351z00zz__r4_ports_6_10_1z00, BgL_bgl_string3351za700za7za7_3660za7, "<exit:2328>", 11 );
DEFINE_STRING( BGl_string3352z00zz__r4_ports_6_10_1z00, BgL_bgl_string3352za700za7za7_3661za7, "<exit:2328>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3353z00zz__r4_ports_6_10_1z00, BgL_bgl_string3353za700za7za7_3662za7, "_with-input-from-string", 23 );
DEFINE_STRING( BGl_string3354z00zz__r4_ports_6_10_1z00, BgL_bgl_string3354za700za7za7_3663za7, "with-input-from-port", 20 );
DEFINE_STRING( BGl_string3355z00zz__r4_ports_6_10_1z00, BgL_bgl_string3355za700za7za7_3664za7, "<exit:2332>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3356z00zz__r4_ports_6_10_1z00, BgL_bgl_string3356za700za7za7_3665za7, "_with-input-from-port", 21 );
DEFINE_STRING( BGl_string3358z00zz__r4_ports_6_10_1z00, BgL_bgl_string3358za700za7za7_3666za7, "open-input-procedure", 20 );
DEFINE_STRING( BGl_string3359z00zz__r4_ports_6_10_1z00, BgL_bgl_string3359za700za7za7_3667za7, "with-input-from-procedure", 25 );
DEFINE_STRING( BGl_string3361z00zz__r4_ports_6_10_1z00, BgL_bgl_string3361za700za7za7_3668za7, "can't open procedure", 20 );
DEFINE_STRING( BGl_string3362z00zz__r4_ports_6_10_1z00, BgL_bgl_string3362za700za7za7_3669za7, "<exit:2337>", 11 );
DEFINE_STRING( BGl_string3363z00zz__r4_ports_6_10_1z00, BgL_bgl_string3363za700za7za7_3670za7, "<exit:2337>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3364z00zz__r4_ports_6_10_1z00, BgL_bgl_string3364za700za7za7_3671za7, "_with-input-from-procedure", 26 );
DEFINE_STRING( BGl_string3365z00zz__r4_ports_6_10_1z00, BgL_bgl_string3365za700za7za7_3672za7, "with-output-to-file", 19 );
DEFINE_STRING( BGl_string3367z00zz__r4_ports_6_10_1z00, BgL_bgl_string3367za700za7za7_3673za7, "<exit:2342>", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__portza7f3za7f3za7za7__r3674z00, BGl__portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3368z00zz__r4_ports_6_10_1z00, BgL_bgl_string3368za700za7za7_3675za7, "<exit:2342>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3370z00zz__r4_ports_6_10_1z00, BgL_bgl_string3370za700za7za7_3676za7, "with-output-to-port", 19 );
DEFINE_STRING( BGl_string3369z00zz__r4_ports_6_10_1z00, BgL_bgl_string3369za700za7za7_3677za7, "_with-output-to-file", 20 );
DEFINE_STRING( BGl_string3371z00zz__r4_ports_6_10_1z00, BgL_bgl_string3371za700za7za7_3678za7, "<exit:2346>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3372z00zz__r4_ports_6_10_1z00, BgL_bgl_string3372za700za7za7_3679za7, "_with-output-to-port", 20 );
DEFINE_STRING( BGl_string3373z00zz__r4_ports_6_10_1z00, BgL_bgl_string3373za700za7za7_3680za7, "with-output-to-string", 21 );
DEFINE_STRING( BGl_string3374z00zz__r4_ports_6_10_1z00, BgL_bgl_string3374za700za7za7_3681za7, "<exit:2350>", 11 );
DEFINE_STRING( BGl_string3375z00zz__r4_ports_6_10_1z00, BgL_bgl_string3375za700za7za7_3682za7, "<exit:2350>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3376z00zz__r4_ports_6_10_1z00, BgL_bgl_string3376za700za7za7_3683za7, "_with-output-to-string", 22 );
DEFINE_STRING( BGl_string3380z00zz__r4_ports_6_10_1z00, BgL_bgl_string3380za700za7za7_3684za7, "<exit:2354>", 11 );
DEFINE_STRING( BGl_string3379z00zz__r4_ports_6_10_1z00, BgL_bgl_string3379za700za7za7_3685za7, "with-output-to-procedure", 24 );
DEFINE_STRING( BGl_string3381z00zz__r4_ports_6_10_1z00, BgL_bgl_string3381za700za7za7_3686za7, "<exit:2354>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3382z00zz__r4_ports_6_10_1z00, BgL_bgl_string3382za700za7za7_3687za7, "_with-output-to-procedure", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3688z00, BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3383z00zz__r4_ports_6_10_1z00, BgL_bgl_string3383za700za7za7_3689za7, "with-error-to-string", 20 );
DEFINE_STRING( BGl_string3385z00zz__r4_ports_6_10_1z00, BgL_bgl_string3385za700za7za7_3690za7, "can't open string", 17 );
DEFINE_STRING( BGl_string3386z00zz__r4_ports_6_10_1z00, BgL_bgl_string3386za700za7za7_3691za7, "<exit:2361>", 11 );
DEFINE_STRING( BGl_string3387z00zz__r4_ports_6_10_1z00, BgL_bgl_string3387za700za7za7_3692za7, "<exit:2361>:Wrong number of arguments", 37 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2outputza7d3693z00, BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3388z00zz__r4_ports_6_10_1z00, BgL_bgl_string3388za700za7za7_3694za7, "_with-error-to-string", 21 );
DEFINE_STRING( BGl_string3400z00zz__r4_ports_6_10_1z00, BgL_bgl_string3400za700za7za7_3695za7, "<exit:2374>", 11 );
DEFINE_STRING( BGl_string3389z00zz__r4_ports_6_10_1z00, BgL_bgl_string3389za700za7za7_3696za7, "with-error-to-file", 18 );
DEFINE_STRING( BGl_string3401z00zz__r4_ports_6_10_1z00, BgL_bgl_string3401za700za7za7_3697za7, "<exit:2374>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3391z00zz__r4_ports_6_10_1z00, BgL_bgl_string3391za700za7za7_3698za7, "<exit:2366>", 11 );
DEFINE_STRING( BGl_string3402z00zz__r4_ports_6_10_1z00, BgL_bgl_string3402za700za7za7_3699za7, "_with-error-to-procedure", 24 );
DEFINE_STRING( BGl_string3392z00zz__r4_ports_6_10_1z00, BgL_bgl_string3392za700za7za7_3700za7, "<exit:2366>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3403z00zz__r4_ports_6_10_1z00, BgL_bgl_string3403za700za7za7_3701za7, "Illegal buffer", 14 );
DEFINE_STRING( BGl_string3393z00zz__r4_ports_6_10_1z00, BgL_bgl_string3393za700za7za7_3702za7, "_with-error-to-file", 19 );
DEFINE_STRING( BGl_string3404z00zz__r4_ports_6_10_1z00, BgL_bgl_string3404za700za7za7_3703za7, "get-port-buffer", 15 );
DEFINE_STRING( BGl_string3394z00zz__r4_ports_6_10_1z00, BgL_bgl_string3394za700za7za7_3704za7, "with-error-to-port", 18 );
DEFINE_STRING( BGl_string3405z00zz__r4_ports_6_10_1z00, BgL_bgl_string3405za700za7za7_3705za7, "_get-port-buffer", 16 );
DEFINE_STRING( BGl_string3395z00zz__r4_ports_6_10_1z00, BgL_bgl_string3395za700za7za7_3706za7, "<exit:2370>:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string3406z00zz__r4_ports_6_10_1z00, BgL_bgl_string3406za700za7za7_3707za7, "symbol", 6 );
DEFINE_STRING( BGl_string3396z00zz__r4_ports_6_10_1z00, BgL_bgl_string3396za700za7za7_3708za7, "_with-error-to-port", 19 );
DEFINE_STRING( BGl_string3407z00zz__r4_ports_6_10_1z00, BgL_bgl_string3407za700za7za7_3709za7, "int", 3 );
DEFINE_STRING( BGl_string3408z00zz__r4_ports_6_10_1z00, BgL_bgl_string3408za700za7za7_3710za7, "%open-input-file", 16 );
DEFINE_STRING( BGl_string3410z00zz__r4_ports_6_10_1z00, BgL_bgl_string3410za700za7za7_3711za7, "open-input-pipe", 15 );
DEFINE_STRING( BGl_string3399z00zz__r4_ports_6_10_1z00, BgL_bgl_string3399za700za7za7_3712za7, "with-error-to-procedure", 23 );
DEFINE_STRING( BGl_string3411z00zz__r4_ports_6_10_1z00, BgL_bgl_string3411za700za7za7_3713za7, "%open-input-pipe", 16 );
DEFINE_STRING( BGl_string3413z00zz__r4_ports_6_10_1z00, BgL_bgl_string3413za700za7za7_3714za7, "open-input-file", 15 );
DEFINE_STRING( BGl_string3414z00zz__r4_ports_6_10_1z00, BgL_bgl_string3414za700za7za7_3715za7, "%open-input-resource", 20 );
DEFINE_STRING( BGl_string3415z00zz__r4_ports_6_10_1z00, BgL_bgl_string3415za700za7za7_3716za7, "http", 4 );
DEFINE_STRING( BGl_string3417z00zz__r4_ports_6_10_1z00, BgL_bgl_string3417za700za7za7_3717za7, "get", 3 );
DEFINE_STRING( BGl_string3420z00zz__r4_ports_6_10_1z00, BgL_bgl_string3420za700za7za7_3718za7, "%open-input-http-socket", 23 );
DEFINE_STRING( BGl_string3419z00zz__r4_ports_6_10_1z00, BgL_bgl_string3419za700za7za7_3719za7, "HTTP/1.1", 8 );
DEFINE_STRING( BGl_string3421z00zz__r4_ports_6_10_1z00, BgL_bgl_string3421za700za7za7_3720za7, "socket", 6 );
DEFINE_STRING( BGl_string3422z00zz__r4_ports_6_10_1z00, BgL_bgl_string3422za700za7za7_3721za7, "<exit:2388>", 11 );
DEFINE_STRING( BGl_string3423z00zz__r4_ports_6_10_1z00, BgL_bgl_string3423za700za7za7_3722za7, "parser", 6 );
DEFINE_STRING( BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_bgl_string3424za700za7za7_3723za7, "long", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2string3724za7, BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3425z00zz__r4_ports_6_10_1z00, BgL_bgl_string3425za700za7za7_3725za7, "elong", 5 );
DEFINE_STRING( BGl_string3426z00zz__r4_ports_6_10_1z00, BgL_bgl_string3426za700za7za7_3726za7, "", 0 );
DEFINE_STRING( BGl_string3427z00zz__r4_ports_6_10_1z00, BgL_bgl_string3427za700za7za7_3727za7, "Cannot open URL (~a)", 20 );
DEFINE_STRING( BGl_string3428z00zz__r4_ports_6_10_1z00, BgL_bgl_string3428za700za7za7_3728za7, "case_else2140", 13 );
DEFINE_STRING( BGl_string3430z00zz__r4_ports_6_10_1z00, BgL_bgl_string3430za700za7za7_3729za7, "Cannot open URL", 15 );
DEFINE_STRING( BGl_string3429z00zz__r4_ports_6_10_1z00, BgL_bgl_string3429za700za7za7_3730za7, "Cannot open URL, authentication required", 40 );
DEFINE_STRING( BGl_string3431z00zz__r4_ports_6_10_1z00, BgL_bgl_string3431za700za7za7_3731za7, "<anonymous:2399>", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl__directoryza7f3za7f33732z00, BGl__directoryzf3zf3zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3432z00zz__r4_ports_6_10_1z00, BgL_bgl_string3432za700za7za7_3733za7, "<anonymous:2387>", 16 );
DEFINE_STRING( BGl_string3433z00zz__r4_ports_6_10_1z00, BgL_bgl_string3433za700za7za7_3734za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3434z00zz__r4_ports_6_10_1z00, BgL_bgl_string3434za700za7za7_3735za7, "_open-input-file", 16 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl__za752openza7d2input3736z00, BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3435z00zz__r4_ports_6_10_1z00, BgL_bgl_string3435za700za7za7_3737za7, "loop", 4 );
DEFINE_STRING( BGl_string3436z00zz__r4_ports_6_10_1z00, BgL_bgl_string3436za700za7za7_3738za7, "loop:Wrong number of arguments", 30 );
extern obj_t BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2bufferzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3739z00, BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3439z00zz__r4_ports_6_10_1z00, BgL_bgl_string3439za700za7za7_3740za7, "open", 4 );
DEFINE_STRING( BGl_string3441z00zz__r4_ports_6_10_1z00, BgL_bgl_string3441za700za7za7_3741za7, "arg2431", 7 );
DEFINE_STRING( BGl_string3443z00zz__r4_ports_6_10_1z00, BgL_bgl_string3443za700za7za7_3742za7, "buffer", 6 );
DEFINE_STRING( BGl_string3445z00zz__r4_ports_6_10_1z00, BgL_bgl_string3445za700za7za7_3743za7, "open-input-string", 17 );
DEFINE_STRING( BGl_string3446z00zz__r4_ports_6_10_1z00, BgL_bgl_string3446za700za7za7_3744za7, "_open-input-string", 18 );
DEFINE_STRING( BGl_string3447z00zz__r4_ports_6_10_1z00, BgL_bgl_string3447za700za7za7_3745za7, "Illegal start offset", 20 );
DEFINE_STRING( BGl_string3448z00zz__r4_ports_6_10_1z00, BgL_bgl_string3448za700za7za7_3746za7, "Start offset out of bounds", 26 );
DEFINE_STRING( BGl_string3450z00zz__r4_ports_6_10_1z00, BgL_bgl_string3450za700za7za7_3747za7, "_open-input-procedure", 21 );
DEFINE_STRING( BGl_string3449z00zz__r4_ports_6_10_1z00, BgL_bgl_string3449za700za7za7_3748za7, "_open-input-string!", 19 );
DEFINE_STRING( BGl_string3452z00zz__r4_ports_6_10_1z00, BgL_bgl_string3452za700za7za7_3749za7, "open-input-gzip-port", 20 );
DEFINE_STRING( BGl_string3453z00zz__r4_ports_6_10_1z00, BgL_bgl_string3453za700za7za7_3750za7, "_open-input-gzip-port", 21 );
DEFINE_STRING( BGl_string3454z00zz__r4_ports_6_10_1z00, BgL_bgl_string3454za700za7za7_3751za7, "_open-input-c-string", 20 );
DEFINE_STRING( BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_bgl_string3455za700za7za7_3752za7, "string", 6 );
DEFINE_STRING( BGl_string3456z00zz__r4_ports_6_10_1z00, BgL_bgl_string3456za700za7za7_3753za7, "_reopen-input-c-string", 22 );
DEFINE_STRING( BGl_string3457z00zz__r4_ports_6_10_1z00, BgL_bgl_string3457za700za7za7_3754za7, "_input-port-timeout-set!", 24 );
DEFINE_STRING( BGl_string3458z00zz__r4_ports_6_10_1z00, BgL_bgl_string3458za700za7za7_3755za7, "_open-output-file", 17 );
DEFINE_STRING( BGl_string3459z00zz__r4_ports_6_10_1z00, BgL_bgl_string3459za700za7za7_3756za7, "_append-output-file", 19 );
DEFINE_STRING( BGl_string3461z00zz__r4_ports_6_10_1z00, BgL_bgl_string3461za700za7za7_3757za7, "open-output-string", 18 );
DEFINE_STRING( BGl_string3462z00zz__r4_ports_6_10_1z00, BgL_bgl_string3462za700za7za7_3758za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string3464z00zz__r4_ports_6_10_1z00, BgL_bgl_string3464za700za7za7_3759za7, "open-output-procedure", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reopenzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__reopenza7d2inputza73760z00, BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3465z00zz__r4_ports_6_10_1z00, BgL_bgl_string3465za700za7za7_3761za7, "wrong number of arguments: [1..4] expected, provided", 52 );
DEFINE_STRING( BGl_string3468z00zz__r4_ports_6_10_1z00, BgL_bgl_string3468za700za7za7_3762za7, "_open-output-procedure", 22 );
DEFINE_STRING( BGl_string3471z00zz__r4_ports_6_10_1z00, BgL_bgl_string3471za700za7za7_3763za7, "Illegal flush procedure", 23 );
DEFINE_STRING( BGl_string3472z00zz__r4_ports_6_10_1z00, BgL_bgl_string3472za700za7za7_3764za7, "Illegal close procedure", 23 );
DEFINE_STRING( BGl_string3473z00zz__r4_ports_6_10_1z00, BgL_bgl_string3473za700za7za7_3765za7, "Illegal write procedure", 23 );
DEFINE_STRING( BGl_string3474z00zz__r4_ports_6_10_1z00, BgL_bgl_string3474za700za7za7_3766za7, "_output-port-timeout-set!", 25 );
DEFINE_STRING( BGl_string3475z00zz__r4_ports_6_10_1z00, BgL_bgl_string3475za700za7za7_3767za7, "_closed-input-port?", 19 );
DEFINE_STRING( BGl_string3476z00zz__r4_ports_6_10_1z00, BgL_bgl_string3476za700za7za7_3768za7, "_close-input-port", 17 );
DEFINE_STRING( BGl_string3477z00zz__r4_ports_6_10_1z00, BgL_bgl_string3477za700za7za7_3769za7, "_get-output-string", 18 );
DEFINE_STRING( BGl_string3478z00zz__r4_ports_6_10_1z00, BgL_bgl_string3478za700za7za7_3770za7, "_close-output-port", 18 );
DEFINE_STRING( BGl_string3480z00zz__r4_ports_6_10_1z00, BgL_bgl_string3480za700za7za7_3771za7, "_reset-output-port", 18 );
DEFINE_STRING( BGl_string3479z00zz__r4_ports_6_10_1z00, BgL_bgl_string3479za700za7za7_3772za7, "_flush-output-port", 18 );
DEFINE_STRING( BGl_string3481z00zz__r4_ports_6_10_1z00, BgL_bgl_string3481za700za7za7_3773za7, "_reset-eof", 10 );
DEFINE_STRING( BGl_string3483z00zz__r4_ports_6_10_1z00, BgL_bgl_string3483za700za7za7_3774za7, "set-input-port-position!", 24 );
DEFINE_STRING( BGl_string3484z00zz__r4_ports_6_10_1z00, BgL_bgl_string3484za700za7za7_3775za7, "Can't seek port", 15 );
DEFINE_STRING( BGl_string3485z00zz__r4_ports_6_10_1z00, BgL_bgl_string3485za700za7za7_3776za7, "_set-input-port-position!", 25 );
DEFINE_STRING( BGl_string3486z00zz__r4_ports_6_10_1z00, BgL_bgl_string3486za700za7za7_3777za7, "_input-port-position", 20 );
DEFINE_STRING( BGl_string3487z00zz__r4_ports_6_10_1z00, BgL_bgl_string3487za700za7za7_3778za7, "_input-port-fill-barrier", 24 );
DEFINE_STRING( BGl_string3488z00zz__r4_ports_6_10_1z00, BgL_bgl_string3488za700za7za7_3779za7, "_input-port-fill-barrier-set!", 29 );
DEFINE_STRING( BGl_string3500z00zz__r4_ports_6_10_1z00, BgL_bgl_string3500za700za7za7_3780za7, "_output-port-close-hook-set!", 28 );
DEFINE_STRING( BGl_string3490z00zz__r4_ports_6_10_1z00, BgL_bgl_string3490za700za7za7_3781za7, "_output-port-name", 17 );
DEFINE_STRING( BGl_string3489z00zz__r4_ports_6_10_1z00, BgL_bgl_string3489za700za7za7_3782za7, "_input-port-last-token-position", 31 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl__za752openza7d2input3783z00, BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3501z00zz__r4_ports_6_10_1z00, BgL_bgl_string3501za700za7za7_3784za7, "_output-port-flush-hook", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__getza7d2outputza7d23785z00, BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3492z00zz__r4_ports_6_10_1z00, BgL_bgl_string3492za700za7za7_3786za7, "set-output-port-position!", 25 );
DEFINE_STRING( BGl_string3503z00zz__r4_ports_6_10_1z00, BgL_bgl_string3503za700za7za7_3787za7, "output-port-flush-hook-set!", 27 );
DEFINE_STRING( BGl_string3493z00zz__r4_ports_6_10_1z00, BgL_bgl_string3493za700za7za7_3788za7, "_set-output-port-position!", 26 );
DEFINE_STRING( BGl_string3504z00zz__r4_ports_6_10_1z00, BgL_bgl_string3504za700za7za7_3789za7, "_output-port-flush-hook-set!", 28 );
DEFINE_STRING( BGl_string3494z00zz__r4_ports_6_10_1z00, BgL_bgl_string3494za700za7za7_3790za7, "_output-port-position", 21 );
DEFINE_STRING( BGl_string3505z00zz__r4_ports_6_10_1z00, BgL_bgl_string3505za700za7za7_3791za7, "_output-port-flush-buffer", 25 );
DEFINE_STRING( BGl_string3495z00zz__r4_ports_6_10_1z00, BgL_bgl_string3495za700za7za7_3792za7, "_input-port-name", 16 );
DEFINE_STRING( BGl_string3506z00zz__r4_ports_6_10_1z00, BgL_bgl_string3506za700za7za7_3793za7, "_output-port-flush-buffer-set!", 30 );
DEFINE_STRING( BGl_string3496z00zz__r4_ports_6_10_1z00, BgL_bgl_string3496za700za7za7_3794za7, "_output-port-close-hook", 23 );
DEFINE_STRING( BGl_string3507z00zz__r4_ports_6_10_1z00, BgL_bgl_string3507za700za7za7_3795za7, "_input-port-close-hook", 22 );
DEFINE_STRING( BGl_string3498z00zz__r4_ports_6_10_1z00, BgL_bgl_string3498za700za7za7_3796za7, "output-port-close-hook-set!", 27 );
DEFINE_STRING( BGl_string3510z00zz__r4_ports_6_10_1z00, BgL_bgl_string3510za700za7za7_3797za7, "_input-port-close-hook-set!", 27 );
DEFINE_STRING( BGl_string3509z00zz__r4_ports_6_10_1z00, BgL_bgl_string3509za700za7za7_3798za7, "input-port-close-hook-set!", 26 );
DEFINE_STRING( BGl_string3499z00zz__r4_ports_6_10_1z00, BgL_bgl_string3499za700za7za7_3799za7, "Illegal hook", 12 );
DEFINE_STRING( BGl_string3511z00zz__r4_ports_6_10_1z00, BgL_bgl_string3511za700za7za7_3800za7, "_input-port-buffer", 18 );
DEFINE_STRING( BGl_string3512z00zz__r4_ports_6_10_1z00, BgL_bgl_string3512za700za7za7_3801za7, "_input-port-buffer-set!", 23 );
DEFINE_STRING( BGl_string3513z00zz__r4_ports_6_10_1z00, BgL_bgl_string3513za700za7za7_3802za7, "_output-port-buffer", 19 );
DEFINE_STRING( BGl_string3514z00zz__r4_ports_6_10_1z00, BgL_bgl_string3514za700za7za7_3803za7, "_output-port-buffer-set!", 24 );
DEFINE_STRING( BGl_string3515z00zz__r4_ports_6_10_1z00, BgL_bgl_string3515za700za7za7_3804za7, "_file-exists?", 13 );
DEFINE_STRING( BGl_string3516z00zz__r4_ports_6_10_1z00, BgL_bgl_string3516za700za7za7_3805za7, "file-gzip?", 10 );
DEFINE_STRING( BGl_string3518z00zz__r4_ports_6_10_1z00, BgL_bgl_string3518za700za7za7_3806za7, "<exit:2511>", 11 );
DEFINE_STRING( BGl_string3520z00zz__r4_ports_6_10_1z00, BgL_bgl_string3520za700za7za7_3807za7, "_delete-file", 12 );
DEFINE_STRING( BGl_string3519z00zz__r4_ports_6_10_1z00, BgL_bgl_string3519za700za7za7_3808za7, "<anonymous:2520>", 16 );
DEFINE_STRING( BGl_string3521z00zz__r4_ports_6_10_1z00, BgL_bgl_string3521za700za7za7_3809za7, "_make-directory", 15 );
DEFINE_STRING( BGl_string3522z00zz__r4_ports_6_10_1z00, BgL_bgl_string3522za700za7za7_3810za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3523z00zz__r4_ports_6_10_1z00, BgL_bgl_string3523za700za7za7_3811za7, "make-directories", 16 );
DEFINE_STRING( BGl_string3524z00zz__r4_ports_6_10_1z00, BgL_bgl_string3524za700za7za7_3812za7, "uchar", 5 );
DEFINE_STRING( BGl_string3525z00zz__r4_ports_6_10_1z00, BgL_bgl_string3525za700za7za7_3813za7, "_make-directories", 17 );
DEFINE_STRING( BGl_string3526z00zz__r4_ports_6_10_1z00, BgL_bgl_string3526za700za7za7_3814za7, "_delete-directory", 17 );
DEFINE_STRING( BGl_string3527z00zz__r4_ports_6_10_1z00, BgL_bgl_string3527za700za7za7_3815za7, "_rename-file", 12 );
DEFINE_STRING( BGl_string3528z00zz__r4_ports_6_10_1z00, BgL_bgl_string3528za700za7za7_3816za7, "_copy-file", 10 );
DEFINE_STRING( BGl_string3530z00zz__r4_ports_6_10_1z00, BgL_bgl_string3530za700za7za7_3817za7, "_directory->list", 16 );
DEFINE_STRING( BGl_string3529z00zz__r4_ports_6_10_1z00, BgL_bgl_string3529za700za7za7_3818za7, "_directory?", 11 );
DEFINE_STRING( BGl_string3531z00zz__r4_ports_6_10_1z00, BgL_bgl_string3531za700za7za7_3819za7, "directory->path-list", 20 );
DEFINE_STRING( BGl_string3532z00zz__r4_ports_6_10_1z00, BgL_bgl_string3532za700za7za7_3820za7, "char", 4 );
DEFINE_STRING( BGl_string3533z00zz__r4_ports_6_10_1z00, BgL_bgl_string3533za700za7za7_3821za7, "_directory->path-list", 21 );
DEFINE_STRING( BGl_string3534z00zz__r4_ports_6_10_1z00, BgL_bgl_string3534za700za7za7_3822za7, "_file-modification-time", 23 );
DEFINE_STRING( BGl_string3535z00zz__r4_ports_6_10_1z00, BgL_bgl_string3535za700za7za7_3823za7, "_file-size", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2protocolzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23824z00, BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3536z00zz__r4_ports_6_10_1z00, BgL_bgl_string3536za700za7za7_3825za7, "_file-uid", 9 );
DEFINE_STRING( BGl_string3537z00zz__r4_ports_6_10_1z00, BgL_bgl_string3537za700za7za7_3826za7, "_file-gid", 9 );
DEFINE_STRING( BGl_string3538z00zz__r4_ports_6_10_1z00, BgL_bgl_string3538za700za7za7_3827za7, "_file-mode", 10 );
DEFINE_STRING( BGl_string3539z00zz__r4_ports_6_10_1z00, BgL_bgl_string3539za700za7za7_3828za7, "__r4_ports_6_10_1", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2stringz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23829z00, BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7d3830z00, BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl__outputza7d2portza7f3831z00, BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2outputza7d3832z00, BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2modificationzd2timezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2modifica3833za7, BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_copyzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__copyza7d2fileza7d2za73834za7, BGl__copyzd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23835z00, BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_resetzd2eofzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__resetza7d2eofza7d2za73836za7, BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2inputza7d23837z00, BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2errorza7d23838z00, BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__withza7d2errorza7d23839z00, BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzd2ze3listzd2envze3zz__r4_ports_6_10_1z00, BgL_bgl__directoryza7d2za7e33840z00, BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23841z00, opt_generic_entry, BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2fillzd2barrierzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2portza7d23842z00, BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2uidzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2uidza7d2za7za73843z00, BGl__filezd2uidzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23844z00, BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2siza7ezd2envza7zz__r4_ports_6_10_1z00, BgL_bgl__fileza7d2siza7a7eza773845za7, BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2gza7ipzd2portzf3zd2envz86zz__r4_ports_6_10_1z00, BgL_bgl__inputza7d2gza7a7ipza73846za7, BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long BgL_checksumz00_3383, char * BgL_fromz00_3384)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00(); 
BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 18 */
BGl_symbol3292z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3293z00zz__r4_ports_6_10_1z00); 
BGl_symbol3310z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3308z00zz__r4_ports_6_10_1z00); 
BGl_symbol3314z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3315z00zz__r4_ports_6_10_1z00); 
BGl_symbol3316z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3317z00zz__r4_ports_6_10_1z00); 
BGl_symbol3318z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3319z00zz__r4_ports_6_10_1z00); 
BGl_list3313z00zz__r4_ports_6_10_1z00 = 
MAKE_PAIR(BGl_symbol3314z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3316z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3316z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3318z00zz__r4_ports_6_10_1z00, BNIL)))); 
BGl_symbol3326z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3327z00zz__r4_ports_6_10_1z00); 
BGl_symbol3329z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3328z00zz__r4_ports_6_10_1z00); 
BGl_symbol3332z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3333z00zz__r4_ports_6_10_1z00); 
BGl_symbol3338z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3339z00zz__r4_ports_6_10_1z00); 
BGl_symbol3343z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3342z00zz__r4_ports_6_10_1z00); 
BGl_symbol3347z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3348z00zz__r4_ports_6_10_1z00); 
BGl_list3346z00zz__r4_ports_6_10_1z00 = 
MAKE_PAIR(BGl_symbol3314z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3347z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3347z00zz__r4_ports_6_10_1z00, BNIL))); 
BGl_symbol3357z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3358z00zz__r4_ports_6_10_1z00); 
BGl_symbol3360z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3359z00zz__r4_ports_6_10_1z00); 
BGl_symbol3366z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3365z00zz__r4_ports_6_10_1z00); 
BGl_symbol3384z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3383z00zz__r4_ports_6_10_1z00); 
BGl_symbol3390z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3389z00zz__r4_ports_6_10_1z00); 
BGl_symbol3409z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3410z00zz__r4_ports_6_10_1z00); 
BGl_symbol3412z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3413z00zz__r4_ports_6_10_1z00); 
BGl_symbol3416z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3417z00zz__r4_ports_6_10_1z00); 
BGl_symbol3418z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3415z00zz__r4_ports_6_10_1z00); 
BGl_symbol3438z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3439z00zz__r4_ports_6_10_1z00); 
BGl_symbol3440z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3441z00zz__r4_ports_6_10_1z00); 
BGl_symbol3442z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3443z00zz__r4_ports_6_10_1z00); 
BGl_list3437z00zz__r4_ports_6_10_1z00 = 
MAKE_PAIR(BGl_symbol3314z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3438z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3438z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3440z00zz__r4_ports_6_10_1z00, 
MAKE_PAIR(BGl_symbol3442z00zz__r4_ports_6_10_1z00, BNIL))))); 
BGl_symbol3444z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3445z00zz__r4_ports_6_10_1z00); 
BGl_symbol3451z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3452z00zz__r4_ports_6_10_1z00); 
BGl_symbol3460z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3461z00zz__r4_ports_6_10_1z00); 
BGl_symbol3463z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3464z00zz__r4_ports_6_10_1z00); 
BGl_symbol3482z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3483z00zz__r4_ports_6_10_1z00); 
BGl_symbol3491z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3492z00zz__r4_ports_6_10_1z00); 
BGl_symbol3497z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3498z00zz__r4_ports_6_10_1z00); 
BGl_symbol3502z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3503z00zz__r4_ports_6_10_1z00); 
return ( 
BGl_symbol3508z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string3509z00zz__r4_ports_6_10_1z00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 18 */
BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 = 
bgl_make_mutex(BGl_symbol3292z00zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2278z00_979;obj_t BgL_arg2279z00_980;
BgL_arg2278z00_979 = 
MAKE_PAIR(BGl_string3294z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 764 */
obj_t BgL_arg2280z00_981;obj_t BgL_arg2281z00_982;obj_t BgL_arg2282z00_983;obj_t BgL_arg2283z00_984;obj_t BgL_arg2284z00_985;obj_t BgL_arg2285z00_986;obj_t BgL_arg2286z00_987;obj_t BgL_arg2289z00_988;obj_t BgL_arg2290z00_989;
BgL_arg2280z00_981 = 
MAKE_PAIR(BGl_string3295z00zz__r4_ports_6_10_1z00, BGl_proc3296z00zz__r4_ports_6_10_1z00); 
BgL_arg2281z00_982 = 
MAKE_PAIR(BGl_string3297z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00); 
BgL_arg2282z00_983 = 
MAKE_PAIR(BGl_string3298z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00); 
BgL_arg2283z00_984 = 
MAKE_PAIR(BGl_string3299z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00); 
BgL_arg2284z00_985 = 
MAKE_PAIR(BGl_string3300z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7); 
BgL_arg2285z00_986 = 
MAKE_PAIR(BGl_string3301z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7); 
BgL_arg2286z00_987 = 
MAKE_PAIR(BGl_string3302z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7); 
BgL_arg2289z00_988 = 
MAKE_PAIR(BGl_string3303z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00); 
BgL_arg2290z00_989 = 
MAKE_PAIR(BGl_string3304z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00); 
{ /* Ieee/port.scm 763 */
obj_t BgL_list2292z00_991;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2293z00_992;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2294z00_993;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2295z00_994;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2296z00_995;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2297z00_996;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2300z00_997;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2301z00_998;
{ /* Ieee/port.scm 763 */
obj_t BgL_arg2302z00_999;
BgL_arg2302z00_999 = 
MAKE_PAIR(BNIL, BNIL); 
BgL_arg2301z00_998 = 
MAKE_PAIR(BgL_arg2290z00_989, BgL_arg2302z00_999); } 
BgL_arg2300z00_997 = 
MAKE_PAIR(BgL_arg2289z00_988, BgL_arg2301z00_998); } 
BgL_arg2297z00_996 = 
MAKE_PAIR(BgL_arg2286z00_987, BgL_arg2300z00_997); } 
BgL_arg2296z00_995 = 
MAKE_PAIR(BgL_arg2285z00_986, BgL_arg2297z00_996); } 
BgL_arg2295z00_994 = 
MAKE_PAIR(BgL_arg2284z00_985, BgL_arg2296z00_995); } 
BgL_arg2294z00_993 = 
MAKE_PAIR(BgL_arg2283z00_984, BgL_arg2295z00_994); } 
BgL_arg2293z00_992 = 
MAKE_PAIR(BgL_arg2282z00_983, BgL_arg2294z00_993); } 
BgL_list2292z00_991 = 
MAKE_PAIR(BgL_arg2281z00_982, BgL_arg2293z00_992); } 
BgL_arg2279z00_980 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2280z00_981, BgL_list2292z00_991); } } 
return ( 
BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = 
MAKE_PAIR(BgL_arg2278z00_979, BgL_arg2279z00_980), BUNSPEC) ;} } 
}



/* <anonymous:2305> */
obj_t BGl_zc3anonymousza32305ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2547, obj_t BgL_sz00_2548, obj_t BgL_pz00_2549)
{ AN_OBJECT;
{ /* Ieee/port.scm 764 */
{ 
obj_t BgL_sz00_1002;obj_t BgL_pz00_1003;
BgL_sz00_1002 = BgL_sz00_2548; 
BgL_pz00_1003 = BgL_pz00_2549; 
{ /* Ieee/port.scm 764 */

{ /* Ieee/port.scm 764 */
obj_t BgL_auxz00_3457;
if(
STRINGP(BgL_sz00_1002))
{ /* Ieee/port.scm 764 */
BgL_auxz00_3457 = BgL_sz00_1002
; }  else 
{ 
obj_t BgL_auxz00_3460;
BgL_auxz00_3460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)33133)), BGl_string3306z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_sz00_1002); 
FAILURE(BgL_auxz00_3460,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_3457, 
BINT(((long)0)));} } } } 
}



/* call-with-input-file */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_1, obj_t BgL_procz00_2)
{ AN_OBJECT;
{ /* Ieee/port.scm 450 */
{ /* Ieee/port.scm 451 */
obj_t BgL_portz00_1008;
{ /* Ieee/port.scm 375 */

BgL_portz00_1008 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_1, BTRUE); } 
if(
INPUT_PORTP(BgL_portz00_1008))
{ /* Ieee/port.scm 453 */
obj_t BgL_val2097z00_1010;
BgL_val2097z00_1010 = 
BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(BgL_portz00_1008, BgL_procz00_2); 
bgl_close_input_port(BgL_portz00_1008); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2097z00_1010)))
{ /* Ieee/port.scm 455 */
obj_t BgL_arg2308z00_1012;obj_t BgL_arg2309z00_1013;
{ /* Ieee/port.scm 455 */
obj_t BgL_pairz00_2063;
if(
PAIRP(BgL_val2097z00_1010))
{ /* Ieee/port.scm 455 */
BgL_pairz00_2063 = BgL_val2097z00_1010; }  else 
{ 
obj_t BgL_auxz00_3476;
BgL_auxz00_3476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20154)), BGl_string3308z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2097z00_1010); 
FAILURE(BgL_auxz00_3476,BFALSE,BFALSE);} 
BgL_arg2308z00_1012 = 
CAR(BgL_pairz00_2063); } 
BgL_arg2309z00_1013 = 
CDR(BgL_val2097z00_1010); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2308z00_1012, BgL_arg2309z00_1013);}  else 
{ /* Ieee/port.scm 455 */
return BgL_val2097z00_1010;} }  else 
{ /* Ieee/port.scm 452 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3310z00zz__r4_ports_6_10_1z00, BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_stringz00_1);} } } 
}



/* <exit:2310> */
obj_t BGl_zc3exitza32310ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_portz00_2854, obj_t BgL_procz00_2853)
{ AN_OBJECT;
{ /* Ieee/port.scm 455 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2098z00_1015;
if( SET_EXIT(BgL_an_exit2098z00_1015) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2098z00_1015 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 455 */

PUSH_EXIT(BgL_an_exit2098z00_1015, ((long)0)); 
{ /* Ieee/port.scm 454 */
obj_t BgL_val2099z00_1016;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_2853, ((long)1)))
{ /* Ieee/port.scm 454 */
BgL_val2099z00_1016 = 
PROCEDURE_ENTRY(BgL_procz00_2853)(BgL_procz00_2853, BgL_portz00_2854, BEOA); }  else 
{ /* Ieee/port.scm 454 */
FAILURE(BGl_string3312z00zz__r4_ports_6_10_1z00,BGl_list3313z00zz__r4_ports_6_10_1z00,BgL_procz00_2853);} 
POP_EXIT(); 
return BgL_val2099z00_1016;} } 
} } 
}



/* _call-with-input-file */
obj_t BGl__callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2574, obj_t BgL_stringz00_2575, obj_t BgL_procz00_2576)
{ AN_OBJECT;
{ /* Ieee/port.scm 450 */
{ /* Ieee/port.scm 451 */
obj_t BgL_auxz00_3500;obj_t BgL_auxz00_3493;
if(
PROCEDUREP(BgL_procz00_2576))
{ /* Ieee/port.scm 451 */
BgL_auxz00_3500 = BgL_procz00_2576
; }  else 
{ 
obj_t BgL_auxz00_3503;
BgL_auxz00_3503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20043)), BGl_string3320z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2576); 
FAILURE(BgL_auxz00_3503,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2575))
{ /* Ieee/port.scm 451 */
BgL_auxz00_3493 = BgL_stringz00_2575
; }  else 
{ 
obj_t BgL_auxz00_3496;
BgL_auxz00_3496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20043)), BGl_string3320z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2575); 
FAILURE(BgL_auxz00_3496,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3493, BgL_auxz00_3500);} } 
}



/* call-with-input-string */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_3, obj_t BgL_procz00_4)
{ AN_OBJECT;
{ /* Ieee/port.scm 462 */
{ /* Ieee/port.scm 463 */
obj_t BgL_portz00_2065;
{ /* Ieee/port.scm 463 */

BgL_portz00_2065 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_3, 
BINT(((long)0))); } 
{ /* Ieee/port.scm 463 */
obj_t BgL_resz00_2068;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_4, ((long)1)))
{ /* Ieee/port.scm 463 */
BgL_resz00_2068 = 
PROCEDURE_ENTRY(BgL_procz00_4)(BgL_procz00_4, BgL_portz00_2065, BEOA); }  else 
{ /* Ieee/port.scm 463 */
FAILURE(BGl_string3322z00zz__r4_ports_6_10_1z00,BGl_list3313z00zz__r4_ports_6_10_1z00,BgL_procz00_4);} 
{ /* Ieee/port.scm 463 */
obj_t BgL_portz00_2069;
if(
INPUT_PORTP(BgL_portz00_2065))
{ /* Ieee/port.scm 463 */
BgL_portz00_2069 = BgL_portz00_2065; }  else 
{ 
obj_t BgL_auxz00_3517;
BgL_auxz00_3517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20578)), BGl_string3323z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2065); 
FAILURE(BgL_auxz00_3517,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_2069); } 
return BgL_resz00_2068;} } } 
}



/* _call-with-input-string */
obj_t BGl__callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2577, obj_t BgL_stringz00_2578, obj_t BgL_procz00_2579)
{ AN_OBJECT;
{ /* Ieee/port.scm 462 */
{ /* Ieee/port.scm 463 */
obj_t BgL_auxz00_3529;obj_t BgL_auxz00_3522;
if(
PROCEDUREP(BgL_procz00_2579))
{ /* Ieee/port.scm 463 */
BgL_auxz00_3529 = BgL_procz00_2579
; }  else 
{ 
obj_t BgL_auxz00_3532;
BgL_auxz00_3532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20578)), BGl_string3325z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2579); 
FAILURE(BgL_auxz00_3532,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2578))
{ /* Ieee/port.scm 463 */
BgL_auxz00_3522 = BgL_stringz00_2578
; }  else 
{ 
obj_t BgL_auxz00_3525;
BgL_auxz00_3525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20578)), BGl_string3325z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2578); 
FAILURE(BgL_auxz00_3525,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3522, BgL_auxz00_3529);} } 
}



/* call-with-output-file */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_5, obj_t BgL_procz00_6)
{ AN_OBJECT;
{ /* Ieee/port.scm 472 */
{ /* Ieee/port.scm 473 */
obj_t BgL_portz00_1023;
{ /* Ieee/port.scm 384 */

BgL_portz00_1023 = 
bgl_open_output_file(BgL_stringz00_5, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz)); } 
if(
OUTPUT_PORTP(BgL_portz00_1023))
{ /* Ieee/port.scm 475 */
obj_t BgL_val2100z00_1025;
BgL_val2100z00_1025 = 
BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(BgL_portz00_1023, BgL_procz00_6); 
bgl_close_output_port(BgL_portz00_1023); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2100z00_1025)))
{ /* Ieee/port.scm 477 */
obj_t BgL_arg2313z00_1027;obj_t BgL_arg2314z00_1028;
{ /* Ieee/port.scm 477 */
obj_t BgL_pairz00_2075;
if(
PAIRP(BgL_val2100z00_1025))
{ /* Ieee/port.scm 477 */
BgL_pairz00_2075 = BgL_val2100z00_1025; }  else 
{ 
obj_t BgL_auxz00_3548;
BgL_auxz00_3548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)21110)), BGl_string3328z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2100z00_1025); 
FAILURE(BgL_auxz00_3548,BFALSE,BFALSE);} 
BgL_arg2313z00_1027 = 
CAR(BgL_pairz00_2075); } 
BgL_arg2314z00_1028 = 
CDR(BgL_val2100z00_1025); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2313z00_1027, BgL_arg2314z00_1028);}  else 
{ /* Ieee/port.scm 477 */
return BgL_val2100z00_1025;} }  else 
{ /* Ieee/port.scm 474 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3329z00zz__r4_ports_6_10_1z00, BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_stringz00_5);} } } 
}



/* <exit:2315> */
obj_t BGl_zc3exitza32315ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_portz00_2852, obj_t BgL_procz00_2851)
{ AN_OBJECT;
{ /* Ieee/port.scm 477 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2101z00_1030;
if( SET_EXIT(BgL_an_exit2101z00_1030) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2101z00_1030 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 477 */

PUSH_EXIT(BgL_an_exit2101z00_1030, ((long)0)); 
{ /* Ieee/port.scm 476 */
obj_t BgL_val2102z00_1031;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_2851, ((long)1)))
{ /* Ieee/port.scm 476 */
BgL_val2102z00_1031 = 
PROCEDURE_ENTRY(BgL_procz00_2851)(BgL_procz00_2851, BgL_portz00_2852, BEOA); }  else 
{ /* Ieee/port.scm 476 */
FAILURE(BGl_string3330z00zz__r4_ports_6_10_1z00,BGl_list3313z00zz__r4_ports_6_10_1z00,BgL_procz00_2851);} 
POP_EXIT(); 
return BgL_val2102z00_1031;} } 
} } 
}



/* _call-with-output-file */
obj_t BGl__callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2580, obj_t BgL_stringz00_2581, obj_t BgL_procz00_2582)
{ AN_OBJECT;
{ /* Ieee/port.scm 472 */
{ /* Ieee/port.scm 473 */
obj_t BgL_auxz00_3572;obj_t BgL_auxz00_3565;
if(
PROCEDUREP(BgL_procz00_2582))
{ /* Ieee/port.scm 473 */
BgL_auxz00_3572 = BgL_procz00_2582
; }  else 
{ 
obj_t BgL_auxz00_3575;
BgL_auxz00_3575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20997)), BGl_string3331z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2582); 
FAILURE(BgL_auxz00_3575,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2581))
{ /* Ieee/port.scm 473 */
BgL_auxz00_3565 = BgL_stringz00_2581
; }  else 
{ 
obj_t BgL_auxz00_3568;
BgL_auxz00_3568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)20997)), BGl_string3331z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2581); 
FAILURE(BgL_auxz00_3568,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3565, BgL_auxz00_3572);} } 
}



/* call-with-output-string */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_7)
{ AN_OBJECT;
{ /* Ieee/port.scm 484 */
{ /* Ieee/port.scm 485 */
obj_t BgL_portz00_2077;
{ /* Ieee/port.scm 485 */

{ /* Ieee/port.scm 485 */

BgL_portz00_2077 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_7, ((long)1)))
{ /* Ieee/port.scm 485 */
PROCEDURE_ENTRY(BgL_procz00_7)(BgL_procz00_7, BgL_portz00_2077, BEOA); }  else 
{ /* Ieee/port.scm 485 */
FAILURE(BGl_string3334z00zz__r4_ports_6_10_1z00,BGl_list3313z00zz__r4_ports_6_10_1z00,BgL_procz00_7);} 
{ /* Ieee/port.scm 485 */
obj_t BgL_portz00_2081;
if(
OUTPUT_PORTP(BgL_portz00_2077))
{ /* Ieee/port.scm 485 */
BgL_portz00_2081 = BgL_portz00_2077; }  else 
{ 
obj_t BgL_auxz00_3590;
BgL_auxz00_3590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)21512)), BGl_string3335z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2077); 
FAILURE(BgL_auxz00_3590,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 485 */
obj_t BgL_aux2894z00_2901;
BgL_aux2894z00_2901 = 
bgl_close_output_port(BgL_portz00_2081); 
if(
STRINGP(BgL_aux2894z00_2901))
{ /* Ieee/port.scm 485 */
return BgL_aux2894z00_2901;}  else 
{ 
obj_t BgL_auxz00_3597;
BgL_auxz00_3597 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)21512)), BGl_string3335z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_aux2894z00_2901); 
FAILURE(BgL_auxz00_3597,BFALSE,BFALSE);} } } } } 
}



/* _call-with-output-string */
obj_t BGl__callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2583, obj_t BgL_procz00_2584)
{ AN_OBJECT;
{ /* Ieee/port.scm 484 */
{ /* Ieee/port.scm 485 */
obj_t BgL_auxz00_3601;
if(
PROCEDUREP(BgL_procz00_2584))
{ /* Ieee/port.scm 485 */
BgL_auxz00_3601 = BgL_procz00_2584
; }  else 
{ 
obj_t BgL_auxz00_3604;
BgL_auxz00_3604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)21512)), BGl_string3337z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2584); 
FAILURE(BgL_auxz00_3604,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3601);} } 
}



/* input-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_objz00_8)
{ AN_OBJECT;
{ /* Ieee/port.scm 492 */
return 
BBOOL(
INPUT_PORTP(BgL_objz00_8));} 
}



/* _input-port? */
obj_t BGl__inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2585, obj_t BgL_objz00_2586)
{ AN_OBJECT;
{ /* Ieee/port.scm 492 */
return 
BBOOL(
INPUT_PORTP(BgL_objz00_2586));} 
}



/* input-string-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_9)
{ AN_OBJECT;
{ /* Ieee/port.scm 498 */
return 
BBOOL(
INPUT_STRING_PORTP(BgL_objz00_9));} 
}



/* _input-string-port? */
obj_t BGl__inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2587, obj_t BgL_objz00_2588)
{ AN_OBJECT;
{ /* Ieee/port.scm 498 */
return 
BBOOL(
INPUT_STRING_PORTP(BgL_objz00_2588));} 
}



/* input-procedure-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_10)
{ AN_OBJECT;
{ /* Ieee/port.scm 504 */
return 
BBOOL(
INPUT_PROCEDURE_PORTP(BgL_objz00_10));} 
}



/* _input-procedure-port? */
obj_t BGl__inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2589, obj_t BgL_objz00_2590)
{ AN_OBJECT;
{ /* Ieee/port.scm 504 */
return 
BBOOL(
INPUT_PROCEDURE_PORTP(BgL_objz00_2590));} 
}



/* input-gzip-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t BgL_objz00_11)
{ AN_OBJECT;
{ /* Ieee/port.scm 510 */
return 
BBOOL(
INPUT_GZIP_PORTP(BgL_objz00_11));} 
}



/* _input-gzip-port? */
obj_t BGl__inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2591, obj_t BgL_objz00_2592)
{ AN_OBJECT;
{ /* Ieee/port.scm 510 */
return 
BBOOL(
INPUT_GZIP_PORTP(BgL_objz00_2592));} 
}



/* output-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_objz00_12)
{ AN_OBJECT;
{ /* Ieee/port.scm 516 */
return 
BBOOL(
OUTPUT_PORTP(BgL_objz00_12));} 
}



/* _output-port? */
obj_t BGl__outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2593, obj_t BgL_objz00_2594)
{ AN_OBJECT;
{ /* Ieee/port.scm 516 */
return 
BBOOL(
OUTPUT_PORTP(BgL_objz00_2594));} 
}



/* output-string-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_13)
{ AN_OBJECT;
{ /* Ieee/port.scm 522 */
return 
BBOOL(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_13));} 
}



/* _output-string-port? */
obj_t BGl__outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2595, obj_t BgL_objz00_2596)
{ AN_OBJECT;
{ /* Ieee/port.scm 522 */
return 
BBOOL(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_2596));} 
}



/* output-procedure-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_14)
{ AN_OBJECT;
{ /* Ieee/port.scm 528 */
return 
BBOOL(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_14));} 
}



/* _output-procedure-port? */
obj_t BGl__outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2597, obj_t BgL_objz00_2598)
{ AN_OBJECT;
{ /* Ieee/port.scm 528 */
return 
BBOOL(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_2598));} 
}



/* current-input-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 534 */
{ /* Ieee/port.scm 535 */
obj_t BgL_auxz00_3637;
BgL_auxz00_3637 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_3637);} } 
}



/* _current-input-port */
obj_t BGl__currentzd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2599)
{ AN_OBJECT;
{ /* Ieee/port.scm 534 */
{ /* Ieee/port.scm 535 */
obj_t BgL_auxz00_3640;
BgL_auxz00_3640 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_3640);} } 
}



/* current-output-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 540 */
{ /* Ieee/port.scm 541 */
obj_t BgL_auxz00_3643;
BgL_auxz00_3643 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3643);} } 
}



/* _current-output-port */
obj_t BGl__currentzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2600)
{ AN_OBJECT;
{ /* Ieee/port.scm 540 */
{ /* Ieee/port.scm 541 */
obj_t BgL_auxz00_3646;
BgL_auxz00_3646 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3646);} } 
}



/* current-error-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 546 */
{ /* Ieee/port.scm 547 */
obj_t BgL_auxz00_3649;
BgL_auxz00_3649 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3649);} } 
}



/* _current-error-port */
obj_t BGl__currentzd2errorzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2601)
{ AN_OBJECT;
{ /* Ieee/port.scm 546 */
{ /* Ieee/port.scm 547 */
obj_t BgL_auxz00_3652;
BgL_auxz00_3652 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3652);} } 
}



/* input-port-reopen! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_15)
{ AN_OBJECT;
{ /* Ieee/port.scm 552 */
if(
CBOOL(
bgl_input_port_reopen(BgL_portz00_15)))
{ /* Ieee/port.scm 553 */
return BFALSE;}  else 
{ /* Ieee/port.scm 553 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3338z00zz__r4_ports_6_10_1z00, BGl_string3340z00zz__r4_ports_6_10_1z00, BgL_portz00_15);} } 
}



/* _input-port-reopen! */
obj_t BGl__inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2602, obj_t BgL_portz00_2603)
{ AN_OBJECT;
{ /* Ieee/port.scm 552 */
{ /* Ieee/port.scm 553 */
obj_t BgL_portz00_3319;
if(
INPUT_PORTP(BgL_portz00_2603))
{ /* Ieee/port.scm 553 */
BgL_portz00_3319 = BgL_portz00_2603; }  else 
{ 
obj_t BgL_auxz00_3661;
BgL_auxz00_3661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)24838)), BGl_string3341z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2603); 
FAILURE(BgL_auxz00_3661,BFALSE,BFALSE);} 
if(
CBOOL(
bgl_input_port_reopen(BgL_portz00_3319)))
{ /* Ieee/port.scm 553 */
return BFALSE;}  else 
{ /* Ieee/port.scm 553 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3338z00zz__r4_ports_6_10_1z00, BGl_string3340z00zz__r4_ports_6_10_1z00, BgL_portz00_3319);} } } 
}



/* with-input-from-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_16, obj_t BgL_thunkz00_17)
{ AN_OBJECT;
{ /* Ieee/port.scm 560 */
{ /* Ieee/port.scm 561 */
obj_t BgL_portz00_1040;
{ /* Ieee/port.scm 375 */

BgL_portz00_1040 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_16, BTRUE); } 
if(
INPUT_PORTP(BgL_portz00_1040))
{ /* Ieee/port.scm 563 */
obj_t BgL_denvz00_1042;
BgL_denvz00_1042 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 563 */
obj_t BgL_oldzd2inputzd2portz00_1043;
BgL_oldzd2inputzd2portz00_1043 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1042); 
{ /* Ieee/port.scm 564 */

{ /* Ieee/port.scm 565 */
obj_t BgL_val2103z00_1044;
BgL_val2103z00_1044 = 
BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_17, BgL_portz00_1040, BgL_denvz00_1042); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1042, BgL_oldzd2inputzd2portz00_1043); BUNSPEC; 
bgl_close_input_port(BgL_portz00_1040); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2103z00_1044)))
{ /* Ieee/port.scm 571 */
obj_t BgL_arg2322z00_1046;obj_t BgL_arg2323z00_1047;
{ /* Ieee/port.scm 571 */
obj_t BgL_pairz00_2088;
if(
PAIRP(BgL_val2103z00_1044))
{ /* Ieee/port.scm 571 */
BgL_pairz00_2088 = BgL_val2103z00_1044; }  else 
{ 
obj_t BgL_auxz00_3682;
BgL_auxz00_3682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25553)), BGl_string3342z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2103z00_1044); 
FAILURE(BgL_auxz00_3682,BFALSE,BFALSE);} 
BgL_arg2322z00_1046 = 
CAR(BgL_pairz00_2088); } 
BgL_arg2323z00_1047 = 
CDR(BgL_val2103z00_1044); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2322z00_1046, BgL_arg2323z00_1047);}  else 
{ /* Ieee/port.scm 571 */
return BgL_val2103z00_1044;} } } } }  else 
{ /* Ieee/port.scm 562 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3343z00zz__r4_ports_6_10_1z00, BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_stringz00_16);} } } 
}



/* <exit:2324> */
obj_t BGl_zc3exitza32324ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2850, obj_t BgL_portz00_2849, obj_t BgL_denvz00_2848)
{ AN_OBJECT;
{ /* Ieee/port.scm 570 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2104z00_1049;
if( SET_EXIT(BgL_an_exit2104z00_1049) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2104z00_1049 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 570 */

PUSH_EXIT(BgL_an_exit2104z00_1049, ((long)0)); 
{ /* Ieee/port.scm 567 */
obj_t BgL_val2105z00_1050;
{ /* Ieee/port.scm 567 */
obj_t BgL_auxz00_3693;
if(
INPUT_PORTP(BgL_portz00_2849))
{ /* Ieee/port.scm 567 */
BgL_auxz00_3693 = BgL_portz00_2849
; }  else 
{ 
obj_t BgL_auxz00_3696;
BgL_auxz00_3696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25466)), BGl_string3344z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2849); 
FAILURE(BgL_auxz00_3696,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2848, BgL_auxz00_3693); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2850, ((long)0)))
{ /* Ieee/port.scm 568 */
BgL_val2105z00_1050 = 
PROCEDURE_ENTRY(BgL_thunkz00_2850)(BgL_thunkz00_2850, BEOA); }  else 
{ /* Ieee/port.scm 568 */
FAILURE(BGl_string3345z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2850);} 
POP_EXIT(); 
return BgL_val2105z00_1050;} } 
} } 
}



/* _with-input-from-file */
obj_t BGl__withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2604, obj_t BgL_stringz00_2605, obj_t BgL_thunkz00_2606)
{ AN_OBJECT;
{ /* Ieee/port.scm 560 */
{ /* Ieee/port.scm 561 */
obj_t BgL_auxz00_3714;obj_t BgL_auxz00_3707;
if(
PROCEDUREP(BgL_thunkz00_2606))
{ /* Ieee/port.scm 561 */
BgL_auxz00_3714 = BgL_thunkz00_2606
; }  else 
{ 
obj_t BgL_auxz00_3717;
BgL_auxz00_3717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25241)), BGl_string3349z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2606); 
FAILURE(BgL_auxz00_3717,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2605))
{ /* Ieee/port.scm 561 */
BgL_auxz00_3707 = BgL_stringz00_2605
; }  else 
{ 
obj_t BgL_auxz00_3710;
BgL_auxz00_3710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25241)), BGl_string3349z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2605); 
FAILURE(BgL_auxz00_3710,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3707, BgL_auxz00_3714);} } 
}



/* with-input-from-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_18, obj_t BgL_thunkz00_19)
{ AN_OBJECT;
{ /* Ieee/port.scm 578 */
{ /* Ieee/port.scm 579 */
obj_t BgL_portz00_1053;
{ /* Ieee/port.scm 376 */

BgL_portz00_1053 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_18, 
BINT(((long)0))); } 
{ /* Ieee/port.scm 579 */
obj_t BgL_denvz00_1054;
BgL_denvz00_1054 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 580 */
obj_t BgL_oldzd2inputzd2portz00_1055;
BgL_oldzd2inputzd2portz00_1055 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1054); 
{ /* Ieee/port.scm 581 */

{ /* Ieee/port.scm 582 */
obj_t BgL_val2106z00_1056;
BgL_val2106z00_1056 = 
BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_19, BgL_portz00_1053, BgL_denvz00_1054); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1054, BgL_oldzd2inputzd2portz00_1055); BUNSPEC; 
{ /* Ieee/port.scm 588 */
obj_t BgL_portz00_2090;
if(
INPUT_PORTP(BgL_portz00_1053))
{ /* Ieee/port.scm 588 */
BgL_portz00_2090 = BgL_portz00_1053; }  else 
{ 
obj_t BgL_auxz00_3730;
BgL_auxz00_3730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26245)), BGl_string3350z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_1053); 
FAILURE(BgL_auxz00_3730,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_2090); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2106z00_1056)))
{ /* Ieee/port.scm 588 */
obj_t BgL_arg2326z00_1058;obj_t BgL_arg2327z00_1059;
{ /* Ieee/port.scm 588 */
obj_t BgL_pairz00_2091;
if(
PAIRP(BgL_val2106z00_1056))
{ /* Ieee/port.scm 588 */
BgL_pairz00_2091 = BgL_val2106z00_1056; }  else 
{ 
obj_t BgL_auxz00_3740;
BgL_auxz00_3740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26227)), BGl_string3350z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2106z00_1056); 
FAILURE(BgL_auxz00_3740,BFALSE,BFALSE);} 
BgL_arg2326z00_1058 = 
CAR(BgL_pairz00_2091); } 
BgL_arg2327z00_1059 = 
CDR(BgL_val2106z00_1056); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2326z00_1058, BgL_arg2327z00_1059);}  else 
{ /* Ieee/port.scm 588 */
return BgL_val2106z00_1056;} } } } } } } 
}



/* <exit:2328> */
obj_t BGl_zc3exitza32328ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2847, obj_t BgL_portz00_2846, obj_t BgL_denvz00_2845)
{ AN_OBJECT;
{ /* Ieee/port.scm 587 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2107z00_1061;
if( SET_EXIT(BgL_an_exit2107z00_1061) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2107z00_1061 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 587 */

PUSH_EXIT(BgL_an_exit2107z00_1061, ((long)0)); 
{ /* Ieee/port.scm 584 */
obj_t BgL_val2108z00_1062;
{ /* Ieee/port.scm 584 */
obj_t BgL_auxz00_3750;
if(
INPUT_PORTP(BgL_portz00_2846))
{ /* Ieee/port.scm 584 */
BgL_auxz00_3750 = BgL_portz00_2846
; }  else 
{ 
obj_t BgL_auxz00_3753;
BgL_auxz00_3753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26140)), BGl_string3351z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2846); 
FAILURE(BgL_auxz00_3753,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2845, BgL_auxz00_3750); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2847, ((long)0)))
{ /* Ieee/port.scm 585 */
BgL_val2108z00_1062 = 
PROCEDURE_ENTRY(BgL_thunkz00_2847)(BgL_thunkz00_2847, BEOA); }  else 
{ /* Ieee/port.scm 585 */
FAILURE(BGl_string3352z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2847);} 
POP_EXIT(); 
return BgL_val2108z00_1062;} } 
} } 
}



/* _with-input-from-string */
obj_t BGl__withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2607, obj_t BgL_stringz00_2608, obj_t BgL_thunkz00_2609)
{ AN_OBJECT;
{ /* Ieee/port.scm 578 */
{ /* Ieee/port.scm 579 */
obj_t BgL_auxz00_3771;obj_t BgL_auxz00_3764;
if(
PROCEDUREP(BgL_thunkz00_2609))
{ /* Ieee/port.scm 579 */
BgL_auxz00_3771 = BgL_thunkz00_2609
; }  else 
{ 
obj_t BgL_auxz00_3774;
BgL_auxz00_3774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25949)), BGl_string3353z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2609); 
FAILURE(BgL_auxz00_3774,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2608))
{ /* Ieee/port.scm 579 */
BgL_auxz00_3764 = BgL_stringz00_2608
; }  else 
{ 
obj_t BgL_auxz00_3767;
BgL_auxz00_3767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)25949)), BGl_string3353z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2608); 
FAILURE(BgL_auxz00_3767,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3764, BgL_auxz00_3771);} } 
}



/* with-input-from-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_20, obj_t BgL_thunkz00_21)
{ AN_OBJECT;
{ /* Ieee/port.scm 593 */
{ /* Ieee/port.scm 594 */
obj_t BgL_denvz00_1065;
BgL_denvz00_1065 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 594 */
obj_t BgL_oldzd2inputzd2portz00_1066;
BgL_oldzd2inputzd2portz00_1066 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1065); 
{ /* Ieee/port.scm 595 */

{ /* Ieee/port.scm 596 */
obj_t BgL_val2109z00_1067;
BgL_val2109z00_1067 = 
BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_21, BgL_portz00_20, BgL_denvz00_1065); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1065, BgL_oldzd2inputzd2portz00_1066); BUNSPEC; 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2109z00_1067)))
{ /* Ieee/port.scm 600 */
obj_t BgL_arg2330z00_1069;obj_t BgL_arg2331z00_1070;
{ /* Ieee/port.scm 600 */
obj_t BgL_pairz00_2093;
if(
PAIRP(BgL_val2109z00_1067))
{ /* Ieee/port.scm 600 */
BgL_pairz00_2093 = BgL_val2109z00_1067; }  else 
{ 
obj_t BgL_auxz00_3788;
BgL_auxz00_3788 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26699)), BGl_string3354z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2109z00_1067); 
FAILURE(BgL_auxz00_3788,BFALSE,BFALSE);} 
BgL_arg2330z00_1069 = 
CAR(BgL_pairz00_2093); } 
BgL_arg2331z00_1070 = 
CDR(BgL_val2109z00_1067); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2330z00_1069, BgL_arg2331z00_1070);}  else 
{ /* Ieee/port.scm 600 */
return BgL_val2109z00_1067;} } } } } } 
}



/* <exit:2332> */
obj_t BGl_zc3exitza32332ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2844, obj_t BgL_portz00_2843, obj_t BgL_denvz00_2842)
{ AN_OBJECT;
{ /* Ieee/port.scm 600 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2110z00_1072;
if( SET_EXIT(BgL_an_exit2110z00_1072) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2110z00_1072 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 600 */

PUSH_EXIT(BgL_an_exit2110z00_1072, ((long)0)); 
{ /* Ieee/port.scm 598 */
obj_t BgL_val2111z00_1073;
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2842, BgL_portz00_2843); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2844, ((long)0)))
{ /* Ieee/port.scm 599 */
BgL_val2111z00_1073 = 
PROCEDURE_ENTRY(BgL_thunkz00_2844)(BgL_thunkz00_2844, BEOA); }  else 
{ /* Ieee/port.scm 599 */
FAILURE(BGl_string3355z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2844);} 
POP_EXIT(); 
return BgL_val2111z00_1073;} } 
} } 
}



/* _with-input-from-port */
obj_t BGl__withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2610, obj_t BgL_portz00_2611, obj_t BgL_thunkz00_2612)
{ AN_OBJECT;
{ /* Ieee/port.scm 593 */
{ /* Ieee/port.scm 594 */
obj_t BgL_auxz00_3812;obj_t BgL_auxz00_3805;
if(
PROCEDUREP(BgL_thunkz00_2612))
{ /* Ieee/port.scm 594 */
BgL_auxz00_3812 = BgL_thunkz00_2612
; }  else 
{ 
obj_t BgL_auxz00_3815;
BgL_auxz00_3815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26523)), BGl_string3356z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2612); 
FAILURE(BgL_auxz00_3815,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_2611))
{ /* Ieee/port.scm 594 */
BgL_auxz00_3805 = BgL_portz00_2611
; }  else 
{ 
obj_t BgL_auxz00_3808;
BgL_auxz00_3808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)26523)), BGl_string3356z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2611); 
FAILURE(BgL_auxz00_3808,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3805, BgL_auxz00_3812);} } 
}



/* with-input-from-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_22, obj_t BgL_thunkz00_23)
{ AN_OBJECT;
{ /* Ieee/port.scm 605 */
{ /* Ieee/port.scm 606 */
obj_t BgL_portz00_1074;
{ /* Ieee/port.scm 378 */

BgL_portz00_1074 = 
bgl_open_input_procedure(BgL_procz00_22, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3357z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)1024)))); } 
if(
INPUT_PORTP(BgL_portz00_1074))
{ /* Ieee/port.scm 608 */
obj_t BgL_denvz00_1076;
BgL_denvz00_1076 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 608 */
obj_t BgL_oldzd2inputzd2portz00_1077;
BgL_oldzd2inputzd2portz00_1077 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1076); 
{ /* Ieee/port.scm 609 */

{ /* Ieee/port.scm 610 */
obj_t BgL_val2112z00_1078;
BgL_val2112z00_1078 = 
BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_23, BgL_portz00_1074, BgL_denvz00_1076); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1076, BgL_oldzd2inputzd2portz00_1077); BUNSPEC; 
bgl_close_input_port(BgL_portz00_1074); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2112z00_1078)))
{ /* Ieee/port.scm 616 */
obj_t BgL_arg2335z00_1080;obj_t BgL_arg2336z00_1081;
{ /* Ieee/port.scm 616 */
obj_t BgL_pairz00_2100;
if(
PAIRP(BgL_val2112z00_1078))
{ /* Ieee/port.scm 616 */
BgL_pairz00_2100 = BgL_val2112z00_1078; }  else 
{ 
obj_t BgL_auxz00_3835;
BgL_auxz00_3835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27338)), BGl_string3359z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2112z00_1078); 
FAILURE(BgL_auxz00_3835,BFALSE,BFALSE);} 
BgL_arg2335z00_1080 = 
CAR(BgL_pairz00_2100); } 
BgL_arg2336z00_1081 = 
CDR(BgL_val2112z00_1078); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2335z00_1080, BgL_arg2336z00_1081);}  else 
{ /* Ieee/port.scm 616 */
return BgL_val2112z00_1078;} } } } }  else 
{ /* Ieee/port.scm 607 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3360z00zz__r4_ports_6_10_1z00, BGl_string3361z00zz__r4_ports_6_10_1z00, BgL_procz00_22);} } } 
}



/* <exit:2337> */
obj_t BGl_zc3exitza32337ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2841, obj_t BgL_portz00_2840, obj_t BgL_denvz00_2839)
{ AN_OBJECT;
{ /* Ieee/port.scm 615 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2113z00_1083;
if( SET_EXIT(BgL_an_exit2113z00_1083) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2113z00_1083 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 615 */

PUSH_EXIT(BgL_an_exit2113z00_1083, ((long)0)); 
{ /* Ieee/port.scm 612 */
obj_t BgL_val2114z00_1084;
{ /* Ieee/port.scm 612 */
obj_t BgL_auxz00_3846;
if(
INPUT_PORTP(BgL_portz00_2840))
{ /* Ieee/port.scm 612 */
BgL_auxz00_3846 = BgL_portz00_2840
; }  else 
{ 
obj_t BgL_auxz00_3849;
BgL_auxz00_3849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27251)), BGl_string3362z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2840); 
FAILURE(BgL_auxz00_3849,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_2839, BgL_auxz00_3846); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2841, ((long)0)))
{ /* Ieee/port.scm 613 */
BgL_val2114z00_1084 = 
PROCEDURE_ENTRY(BgL_thunkz00_2841)(BgL_thunkz00_2841, BEOA); }  else 
{ /* Ieee/port.scm 613 */
FAILURE(BGl_string3363z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2841);} 
POP_EXIT(); 
return BgL_val2114z00_1084;} } 
} } 
}



/* _with-input-from-procedure */
obj_t BGl__withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2613, obj_t BgL_procz00_2614, obj_t BgL_thunkz00_2615)
{ AN_OBJECT;
{ /* Ieee/port.scm 605 */
{ /* Ieee/port.scm 606 */
obj_t BgL_auxz00_3867;obj_t BgL_auxz00_3860;
if(
PROCEDUREP(BgL_thunkz00_2615))
{ /* Ieee/port.scm 606 */
BgL_auxz00_3867 = BgL_thunkz00_2615
; }  else 
{ 
obj_t BgL_auxz00_3870;
BgL_auxz00_3870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27023)), BGl_string3364z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2615); 
FAILURE(BgL_auxz00_3870,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_2614))
{ /* Ieee/port.scm 606 */
BgL_auxz00_3860 = BgL_procz00_2614
; }  else 
{ 
obj_t BgL_auxz00_3863;
BgL_auxz00_3863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27023)), BGl_string3364z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2614); 
FAILURE(BgL_auxz00_3863,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3860, BgL_auxz00_3867);} } 
}



/* with-output-to-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_24, obj_t BgL_thunkz00_25)
{ AN_OBJECT;
{ /* Ieee/port.scm 622 */
{ /* Ieee/port.scm 623 */
obj_t BgL_portz00_1087;
{ /* Ieee/port.scm 384 */

BgL_portz00_1087 = 
bgl_open_output_file(BgL_stringz00_24, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz)); } 
if(
OUTPUT_PORTP(BgL_portz00_1087))
{ /* Ieee/port.scm 625 */
obj_t BgL_denvz00_1089;
BgL_denvz00_1089 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 625 */
obj_t BgL_oldzd2outputzd2portz00_1090;
BgL_oldzd2outputzd2portz00_1090 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1089); 
{ /* Ieee/port.scm 626 */

{ /* Ieee/port.scm 627 */
obj_t BgL_val2115z00_1091;
BgL_val2115z00_1091 = 
BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_25, BgL_portz00_1087, BgL_denvz00_1089); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1089, BgL_oldzd2outputzd2portz00_1090); BUNSPEC; 
bgl_close_output_port(BgL_portz00_1087); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2115z00_1091)))
{ /* Ieee/port.scm 633 */
obj_t BgL_arg2340z00_1093;obj_t BgL_arg2341z00_1094;
{ /* Ieee/port.scm 633 */
obj_t BgL_pairz00_2107;
if(
PAIRP(BgL_val2115z00_1091))
{ /* Ieee/port.scm 633 */
BgL_pairz00_2107 = BgL_val2115z00_1091; }  else 
{ 
obj_t BgL_auxz00_3889;
BgL_auxz00_3889 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)28022)), BGl_string3365z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2115z00_1091); 
FAILURE(BgL_auxz00_3889,BFALSE,BFALSE);} 
BgL_arg2340z00_1093 = 
CAR(BgL_pairz00_2107); } 
BgL_arg2341z00_1094 = 
CDR(BgL_val2115z00_1091); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2340z00_1093, BgL_arg2341z00_1094);}  else 
{ /* Ieee/port.scm 633 */
return BgL_val2115z00_1091;} } } } }  else 
{ /* Ieee/port.scm 624 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3366z00zz__r4_ports_6_10_1z00, BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_stringz00_24);} } } 
}



/* <exit:2342> */
obj_t BGl_zc3exitza32342ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2838, obj_t BgL_portz00_2837, obj_t BgL_denvz00_2836)
{ AN_OBJECT;
{ /* Ieee/port.scm 632 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2116z00_1096;
if( SET_EXIT(BgL_an_exit2116z00_1096) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2116z00_1096 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 632 */

PUSH_EXIT(BgL_an_exit2116z00_1096, ((long)0)); 
{ /* Ieee/port.scm 629 */
obj_t BgL_val2117z00_1097;
{ /* Ieee/port.scm 629 */
obj_t BgL_auxz00_3900;
if(
OUTPUT_PORTP(BgL_portz00_2837))
{ /* Ieee/port.scm 629 */
BgL_auxz00_3900 = BgL_portz00_2837
; }  else 
{ 
obj_t BgL_auxz00_3903;
BgL_auxz00_3903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27933)), BGl_string3367z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2837); 
FAILURE(BgL_auxz00_3903,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2836, BgL_auxz00_3900); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2838, ((long)0)))
{ /* Ieee/port.scm 630 */
BgL_val2117z00_1097 = 
PROCEDURE_ENTRY(BgL_thunkz00_2838)(BgL_thunkz00_2838, BEOA); }  else 
{ /* Ieee/port.scm 630 */
FAILURE(BGl_string3368z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2838);} 
POP_EXIT(); 
return BgL_val2117z00_1097;} } 
} } 
}



/* _with-output-to-file */
obj_t BGl__withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2616, obj_t BgL_stringz00_2617, obj_t BgL_thunkz00_2618)
{ AN_OBJECT;
{ /* Ieee/port.scm 622 */
{ /* Ieee/port.scm 623 */
obj_t BgL_auxz00_3921;obj_t BgL_auxz00_3914;
if(
PROCEDUREP(BgL_thunkz00_2618))
{ /* Ieee/port.scm 623 */
BgL_auxz00_3921 = BgL_thunkz00_2618
; }  else 
{ 
obj_t BgL_auxz00_3924;
BgL_auxz00_3924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27703)), BGl_string3369z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2618); 
FAILURE(BgL_auxz00_3924,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2617))
{ /* Ieee/port.scm 623 */
BgL_auxz00_3914 = BgL_stringz00_2617
; }  else 
{ 
obj_t BgL_auxz00_3917;
BgL_auxz00_3917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)27703)), BGl_string3369z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2617); 
FAILURE(BgL_auxz00_3917,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_3914, BgL_auxz00_3921);} } 
}



/* with-output-to-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_26, obj_t BgL_thunkz00_27)
{ AN_OBJECT;
{ /* Ieee/port.scm 640 */
{ /* Ieee/port.scm 641 */
obj_t BgL_denvz00_1100;
BgL_denvz00_1100 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 641 */
obj_t BgL_oldzd2outputzd2portz00_1101;
BgL_oldzd2outputzd2portz00_1101 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1100); 
{ /* Ieee/port.scm 642 */

{ /* Ieee/port.scm 643 */
obj_t BgL_val2118z00_1102;
BgL_val2118z00_1102 = 
BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_27, BgL_portz00_26, BgL_denvz00_1100); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1100, BgL_oldzd2outputzd2portz00_1101); BUNSPEC; 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2118z00_1102)))
{ /* Ieee/port.scm 647 */
obj_t BgL_arg2344z00_1104;obj_t BgL_arg2345z00_1105;
{ /* Ieee/port.scm 647 */
obj_t BgL_pairz00_2109;
if(
PAIRP(BgL_val2118z00_1102))
{ /* Ieee/port.scm 647 */
BgL_pairz00_2109 = BgL_val2118z00_1102; }  else 
{ 
obj_t BgL_auxz00_3938;
BgL_auxz00_3938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)28592)), BGl_string3370z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2118z00_1102); 
FAILURE(BgL_auxz00_3938,BFALSE,BFALSE);} 
BgL_arg2344z00_1104 = 
CAR(BgL_pairz00_2109); } 
BgL_arg2345z00_1105 = 
CDR(BgL_val2118z00_1102); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2344z00_1104, BgL_arg2345z00_1105);}  else 
{ /* Ieee/port.scm 647 */
return BgL_val2118z00_1102;} } } } } } 
}



/* <exit:2346> */
obj_t BGl_zc3exitza32346ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2835, obj_t BgL_portz00_2834, obj_t BgL_denvz00_2833)
{ AN_OBJECT;
{ /* Ieee/port.scm 647 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2119z00_1107;
if( SET_EXIT(BgL_an_exit2119z00_1107) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2119z00_1107 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 647 */

PUSH_EXIT(BgL_an_exit2119z00_1107, ((long)0)); 
{ /* Ieee/port.scm 645 */
obj_t BgL_val2120z00_1108;
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2833, BgL_portz00_2834); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2835, ((long)0)))
{ /* Ieee/port.scm 646 */
BgL_val2120z00_1108 = 
PROCEDURE_ENTRY(BgL_thunkz00_2835)(BgL_thunkz00_2835, BEOA); }  else 
{ /* Ieee/port.scm 646 */
FAILURE(BGl_string3371z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2835);} 
POP_EXIT(); 
return BgL_val2120z00_1108;} } 
} } 
}



/* _with-output-to-port */
obj_t BGl__withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2619, obj_t BgL_portz00_2620, obj_t BgL_thunkz00_2621)
{ AN_OBJECT;
{ /* Ieee/port.scm 640 */
{ /* Ieee/port.scm 641 */
obj_t BgL_auxz00_3962;obj_t BgL_auxz00_3955;
if(
PROCEDUREP(BgL_thunkz00_2621))
{ /* Ieee/port.scm 641 */
BgL_auxz00_3962 = BgL_thunkz00_2621
; }  else 
{ 
obj_t BgL_auxz00_3965;
BgL_auxz00_3965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)28413)), BGl_string3372z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2621); 
FAILURE(BgL_auxz00_3965,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_2620))
{ /* Ieee/port.scm 641 */
BgL_auxz00_3955 = BgL_portz00_2620
; }  else 
{ 
obj_t BgL_auxz00_3958;
BgL_auxz00_3958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)28413)), BGl_string3372z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2620); 
FAILURE(BgL_auxz00_3958,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_3955, BgL_auxz00_3962);} } 
}



/* with-output-to-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_28)
{ AN_OBJECT;
{ /* Ieee/port.scm 652 */
{ /* Ieee/port.scm 653 */
obj_t BgL_portz00_1109;
{ /* Ieee/port.scm 653 */

{ /* Ieee/port.scm 386 */

BgL_portz00_1109 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
{ /* Ieee/port.scm 653 */
obj_t BgL_denvz00_1110;
BgL_denvz00_1110 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 654 */
obj_t BgL_oldzd2outputzd2portz00_1111;
BgL_oldzd2outputzd2portz00_1111 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1110); 
{ /* Ieee/port.scm 655 */
obj_t BgL_resz00_1112;
BgL_resz00_1112 = BUNSPEC; 
{ /* Ieee/port.scm 656 */

{ /* Ieee/port.scm 657 */
obj_t BgL_val2121z00_1113;
BgL_val2121z00_1113 = 
BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_28, BgL_portz00_1109, BgL_denvz00_1110); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1110, BgL_oldzd2outputzd2portz00_1111); BUNSPEC; 
{ /* Ieee/port.scm 663 */
obj_t BgL_portz00_2113;
if(
OUTPUT_PORTP(BgL_portz00_1109))
{ /* Ieee/port.scm 663 */
BgL_portz00_2113 = BgL_portz00_1109; }  else 
{ 
obj_t BgL_auxz00_3979;
BgL_auxz00_3979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29237)), BGl_string3373z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_1109); 
FAILURE(BgL_auxz00_3979,BFALSE,BFALSE);} 
BgL_resz00_1112 = 
bgl_close_output_port(BgL_portz00_2113); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2121z00_1113)))
{ /* Ieee/port.scm 663 */
obj_t BgL_arg2348z00_1115;obj_t BgL_arg2349z00_1116;
{ /* Ieee/port.scm 663 */
obj_t BgL_pairz00_2114;
if(
PAIRP(BgL_val2121z00_1113))
{ /* Ieee/port.scm 663 */
BgL_pairz00_2114 = BgL_val2121z00_1113; }  else 
{ 
obj_t BgL_auxz00_3989;
BgL_auxz00_3989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29208)), BGl_string3373z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2121z00_1113); 
FAILURE(BgL_auxz00_3989,BFALSE,BFALSE);} 
BgL_arg2348z00_1115 = 
CAR(BgL_pairz00_2114); } 
BgL_arg2349z00_1116 = 
CDR(BgL_val2121z00_1113); 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2348z00_1115, BgL_arg2349z00_1116); }  else 
{ /* Ieee/port.scm 663 */BgL_val2121z00_1113; } } 
return BgL_resz00_1112;} } } } } } 
}



/* <exit:2350> */
obj_t BGl_zc3exitza32350ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2832, obj_t BgL_portz00_2831, obj_t BgL_denvz00_2830)
{ AN_OBJECT;
{ /* Ieee/port.scm 662 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2122z00_1118;
if( SET_EXIT(BgL_an_exit2122z00_1118) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2122z00_1118 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 662 */

PUSH_EXIT(BgL_an_exit2122z00_1118, ((long)0)); 
{ /* Ieee/port.scm 659 */
obj_t BgL_val2123z00_1119;
{ /* Ieee/port.scm 659 */
obj_t BgL_auxz00_3999;
if(
OUTPUT_PORTP(BgL_portz00_2831))
{ /* Ieee/port.scm 659 */
BgL_auxz00_3999 = BgL_portz00_2831
; }  else 
{ 
obj_t BgL_auxz00_4002;
BgL_auxz00_4002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29119)), BGl_string3374z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2831); 
FAILURE(BgL_auxz00_4002,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2830, BgL_auxz00_3999); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2832, ((long)0)))
{ /* Ieee/port.scm 660 */
BgL_val2123z00_1119 = 
PROCEDURE_ENTRY(BgL_thunkz00_2832)(BgL_thunkz00_2832, BEOA); }  else 
{ /* Ieee/port.scm 660 */
FAILURE(BGl_string3375z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2832);} 
POP_EXIT(); 
return BgL_val2123z00_1119;} } 
} } 
}



/* _with-output-to-string */
obj_t BGl__withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2622, obj_t BgL_thunkz00_2623)
{ AN_OBJECT;
{ /* Ieee/port.scm 652 */
{ /* Ieee/port.scm 653 */
obj_t BgL_auxz00_4013;
if(
PROCEDUREP(BgL_thunkz00_2623))
{ /* Ieee/port.scm 653 */
BgL_auxz00_4013 = BgL_thunkz00_2623
; }  else 
{ 
obj_t BgL_auxz00_4016;
BgL_auxz00_4016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)28909)), BGl_string3376z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2623); 
FAILURE(BgL_auxz00_4016,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4013);} } 
}



/* with-output-to-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_29, obj_t BgL_thunkz00_30)
{ AN_OBJECT;
{ /* Ieee/port.scm 669 */
{ /* Ieee/port.scm 670 */
obj_t BgL_portz00_1121;
{ /* Ieee/port.scm 387 */

BgL_portz00_1121 = 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_procz00_29, BGl_proc3377z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc3378z00zz__r4_ports_6_10_1z00); } 
{ /* Ieee/port.scm 670 */
obj_t BgL_denvz00_1122;
BgL_denvz00_1122 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 671 */
obj_t BgL_oldzd2outputzd2portz00_1123;
BgL_oldzd2outputzd2portz00_1123 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1122); 
{ /* Ieee/port.scm 672 */
obj_t BgL_resz00_1124;
BgL_resz00_1124 = BUNSPEC; 
{ /* Ieee/port.scm 673 */

{ /* Ieee/port.scm 674 */
obj_t BgL_val2124z00_1125;
BgL_val2124z00_1125 = 
BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_30, BgL_portz00_1121, BgL_denvz00_1122); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1122, BgL_oldzd2outputzd2portz00_1123); BUNSPEC; 
{ /* Ieee/port.scm 680 */
obj_t BgL_portz00_2116;
if(
OUTPUT_PORTP(BgL_portz00_1121))
{ /* Ieee/port.scm 680 */
BgL_portz00_2116 = BgL_portz00_1121; }  else 
{ 
obj_t BgL_auxz00_4028;
BgL_auxz00_4028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29866)), BGl_string3379z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_1121); 
FAILURE(BgL_auxz00_4028,BFALSE,BFALSE);} 
BgL_resz00_1124 = 
bgl_close_output_port(BgL_portz00_2116); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2124z00_1125)))
{ /* Ieee/port.scm 680 */
obj_t BgL_arg2352z00_1127;obj_t BgL_arg2353z00_1128;
{ /* Ieee/port.scm 680 */
obj_t BgL_pairz00_2117;
if(
PAIRP(BgL_val2124z00_1125))
{ /* Ieee/port.scm 680 */
BgL_pairz00_2117 = BgL_val2124z00_1125; }  else 
{ 
obj_t BgL_auxz00_4038;
BgL_auxz00_4038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29837)), BGl_string3379z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2124z00_1125); 
FAILURE(BgL_auxz00_4038,BFALSE,BFALSE);} 
BgL_arg2352z00_1127 = 
CAR(BgL_pairz00_2117); } 
BgL_arg2353z00_1128 = 
CDR(BgL_val2124z00_1125); 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2352z00_1127, BgL_arg2353z00_1128); }  else 
{ /* Ieee/port.scm 680 */BgL_val2124z00_1125; } } 
return BgL_resz00_1124;} } } } } } 
}



/* <exit:2354> */
obj_t BGl_zc3exitza32354ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2829, obj_t BgL_portz00_2828, obj_t BgL_denvz00_2827)
{ AN_OBJECT;
{ /* Ieee/port.scm 679 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2125z00_1130;
if( SET_EXIT(BgL_an_exit2125z00_1130) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2125z00_1130 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 679 */

PUSH_EXIT(BgL_an_exit2125z00_1130, ((long)0)); 
{ /* Ieee/port.scm 676 */
obj_t BgL_val2126z00_1131;
{ /* Ieee/port.scm 676 */
obj_t BgL_auxz00_4048;
if(
OUTPUT_PORTP(BgL_portz00_2828))
{ /* Ieee/port.scm 676 */
BgL_auxz00_4048 = BgL_portz00_2828
; }  else 
{ 
obj_t BgL_auxz00_4051;
BgL_auxz00_4051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29748)), BGl_string3380z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2828); 
FAILURE(BgL_auxz00_4051,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_2827, BgL_auxz00_4048); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2829, ((long)0)))
{ /* Ieee/port.scm 677 */
BgL_val2126z00_1131 = 
PROCEDURE_ENTRY(BgL_thunkz00_2829)(BgL_thunkz00_2829, BEOA); }  else 
{ /* Ieee/port.scm 677 */
FAILURE(BGl_string3381z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2829);} 
POP_EXIT(); 
return BgL_val2126z00_1131;} } 
} } 
}



/* _with-output-to-procedure */
obj_t BGl__withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2626, obj_t BgL_procz00_2627, obj_t BgL_thunkz00_2628)
{ AN_OBJECT;
{ /* Ieee/port.scm 669 */
{ /* Ieee/port.scm 670 */
obj_t BgL_auxz00_4069;obj_t BgL_auxz00_4062;
if(
PROCEDUREP(BgL_thunkz00_2628))
{ /* Ieee/port.scm 670 */
BgL_auxz00_4069 = BgL_thunkz00_2628
; }  else 
{ 
obj_t BgL_auxz00_4072;
BgL_auxz00_4072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29530)), BGl_string3382z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2628); 
FAILURE(BgL_auxz00_4072,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_2627))
{ /* Ieee/port.scm 670 */
BgL_auxz00_4062 = BgL_procz00_2627
; }  else 
{ 
obj_t BgL_auxz00_4065;
BgL_auxz00_4065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)29530)), BGl_string3382z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2627); 
FAILURE(BgL_auxz00_4065,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4062, BgL_auxz00_4069);} } 
}



/* close */
obj_t BGl_closez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2629)
{ AN_OBJECT;
{ /* Ieee/port.scm 387 */
return 
BBOOL(((bool_t)0));} 
}



/* flush */
obj_t BGl_flushz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2630)
{ AN_OBJECT;
{ /* Ieee/port.scm 387 */
return 
BBOOL(((bool_t)0));} 
}



/* with-error-to-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_31)
{ AN_OBJECT;
{ /* Ieee/port.scm 686 */
{ /* Ieee/port.scm 687 */
obj_t BgL_portz00_1140;
{ /* Ieee/port.scm 687 */

{ /* Ieee/port.scm 386 */

BgL_portz00_1140 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
if(
OUTPUT_PORTP(BgL_portz00_1140))
{ /* Ieee/port.scm 689 */
obj_t BgL_denvz00_1142;
BgL_denvz00_1142 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 689 */
obj_t BgL_oldzd2errorzd2portz00_1143;
BgL_oldzd2errorzd2portz00_1143 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1142); 
{ /* Ieee/port.scm 690 */
obj_t BgL_resz00_1144;
BgL_resz00_1144 = BUNSPEC; 
{ /* Ieee/port.scm 691 */

{ /* Ieee/port.scm 692 */
obj_t BgL_val2127z00_1145;
BgL_val2127z00_1145 = 
BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_31, BgL_portz00_1140, BgL_denvz00_1142); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1142, BgL_oldzd2errorzd2portz00_1143); BUNSPEC; 
BgL_resz00_1144 = 
bgl_close_output_port(BgL_portz00_1140); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2127z00_1145)))
{ /* Ieee/port.scm 698 */
obj_t BgL_arg2359z00_1147;obj_t BgL_arg2360z00_1148;
{ /* Ieee/port.scm 698 */
obj_t BgL_pairz00_2123;
if(
PAIRP(BgL_val2127z00_1145))
{ /* Ieee/port.scm 698 */
BgL_pairz00_2123 = BgL_val2127z00_1145; }  else 
{ 
obj_t BgL_auxz00_4094;
BgL_auxz00_4094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)30481)), BGl_string3383z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2127z00_1145); 
FAILURE(BgL_auxz00_4094,BFALSE,BFALSE);} 
BgL_arg2359z00_1147 = 
CAR(BgL_pairz00_2123); } 
BgL_arg2360z00_1148 = 
CDR(BgL_val2127z00_1145); 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2359z00_1147, BgL_arg2360z00_1148); }  else 
{ /* Ieee/port.scm 698 */BgL_val2127z00_1145; } } 
return BgL_resz00_1144;} } } }  else 
{ /* Ieee/port.scm 688 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3384z00zz__r4_ports_6_10_1z00, BGl_string3385z00zz__r4_ports_6_10_1z00, BUNSPEC);} } } 
}



/* <exit:2361> */
obj_t BGl_zc3exitza32361ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2826, obj_t BgL_portz00_2825, obj_t BgL_denvz00_2824)
{ AN_OBJECT;
{ /* Ieee/port.scm 697 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2128z00_1150;
if( SET_EXIT(BgL_an_exit2128z00_1150) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2128z00_1150 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 697 */

PUSH_EXIT(BgL_an_exit2128z00_1150, ((long)0)); 
{ /* Ieee/port.scm 694 */
obj_t BgL_val2129z00_1151;
{ /* Ieee/port.scm 694 */
obj_t BgL_auxz00_4105;
if(
OUTPUT_PORTP(BgL_portz00_2825))
{ /* Ieee/port.scm 694 */
BgL_auxz00_4105 = BgL_portz00_2825
; }  else 
{ 
obj_t BgL_auxz00_4108;
BgL_auxz00_4108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)30394)), BGl_string3386z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2825); 
FAILURE(BgL_auxz00_4108,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2824, BgL_auxz00_4105); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2826, ((long)0)))
{ /* Ieee/port.scm 695 */
BgL_val2129z00_1151 = 
PROCEDURE_ENTRY(BgL_thunkz00_2826)(BgL_thunkz00_2826, BEOA); }  else 
{ /* Ieee/port.scm 695 */
FAILURE(BGl_string3387z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2826);} 
POP_EXIT(); 
return BgL_val2129z00_1151;} } 
} } 
}



/* _with-error-to-string */
obj_t BGl__withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2631, obj_t BgL_thunkz00_2632)
{ AN_OBJECT;
{ /* Ieee/port.scm 686 */
{ /* Ieee/port.scm 687 */
obj_t BgL_auxz00_4119;
if(
PROCEDUREP(BgL_thunkz00_2632))
{ /* Ieee/port.scm 687 */
BgL_auxz00_4119 = BgL_thunkz00_2632
; }  else 
{ 
obj_t BgL_auxz00_4122;
BgL_auxz00_4122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)30150)), BGl_string3388z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2632); 
FAILURE(BgL_auxz00_4122,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4119);} } 
}



/* with-error-to-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_32, obj_t BgL_thunkz00_33)
{ AN_OBJECT;
{ /* Ieee/port.scm 708 */
{ /* Ieee/port.scm 709 */
obj_t BgL_portz00_1153;
{ /* Ieee/port.scm 384 */

BgL_portz00_1153 = 
bgl_open_output_file(BgL_stringz00_32, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz)); } 
if(
OUTPUT_PORTP(BgL_portz00_1153))
{ /* Ieee/port.scm 711 */
obj_t BgL_denvz00_1155;
BgL_denvz00_1155 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 711 */
obj_t BgL_oldzd2outputzd2portz00_1156;
BgL_oldzd2outputzd2portz00_1156 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1155); 
{ /* Ieee/port.scm 712 */

{ /* Ieee/port.scm 713 */
obj_t BgL_val2130z00_1157;
BgL_val2130z00_1157 = 
BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_33, BgL_portz00_1153, BgL_denvz00_1155); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1155, BgL_oldzd2outputzd2portz00_1156); BUNSPEC; 
bgl_close_output_port(BgL_portz00_1153); 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2130z00_1157)))
{ /* Ieee/port.scm 719 */
obj_t BgL_arg2364z00_1159;obj_t BgL_arg2365z00_1160;
{ /* Ieee/port.scm 719 */
obj_t BgL_pairz00_2130;
if(
PAIRP(BgL_val2130z00_1157))
{ /* Ieee/port.scm 719 */
BgL_pairz00_2130 = BgL_val2130z00_1157; }  else 
{ 
obj_t BgL_auxz00_4141;
BgL_auxz00_4141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)31237)), BGl_string3389z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2130z00_1157); 
FAILURE(BgL_auxz00_4141,BFALSE,BFALSE);} 
BgL_arg2364z00_1159 = 
CAR(BgL_pairz00_2130); } 
BgL_arg2365z00_1160 = 
CDR(BgL_val2130z00_1157); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2364z00_1159, BgL_arg2365z00_1160);}  else 
{ /* Ieee/port.scm 719 */
return BgL_val2130z00_1157;} } } } }  else 
{ /* Ieee/port.scm 710 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3390z00zz__r4_ports_6_10_1z00, BGl_string3311z00zz__r4_ports_6_10_1z00, BgL_stringz00_32);} } } 
}



/* <exit:2366> */
obj_t BGl_zc3exitza32366ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2823, obj_t BgL_portz00_2822, obj_t BgL_denvz00_2821)
{ AN_OBJECT;
{ /* Ieee/port.scm 718 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2131z00_1162;
if( SET_EXIT(BgL_an_exit2131z00_1162) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2131z00_1162 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 718 */

PUSH_EXIT(BgL_an_exit2131z00_1162, ((long)0)); 
{ /* Ieee/port.scm 715 */
obj_t BgL_val2132z00_1163;
{ /* Ieee/port.scm 715 */
obj_t BgL_auxz00_4152;
if(
OUTPUT_PORTP(BgL_portz00_2822))
{ /* Ieee/port.scm 715 */
BgL_auxz00_4152 = BgL_portz00_2822
; }  else 
{ 
obj_t BgL_auxz00_4155;
BgL_auxz00_4155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)31149)), BGl_string3391z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2822); 
FAILURE(BgL_auxz00_4155,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2821, BgL_auxz00_4152); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2823, ((long)0)))
{ /* Ieee/port.scm 716 */
BgL_val2132z00_1163 = 
PROCEDURE_ENTRY(BgL_thunkz00_2823)(BgL_thunkz00_2823, BEOA); }  else 
{ /* Ieee/port.scm 716 */
FAILURE(BGl_string3392z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2823);} 
POP_EXIT(); 
return BgL_val2132z00_1163;} } 
} } 
}



/* _with-error-to-file */
obj_t BGl__withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2633, obj_t BgL_stringz00_2634, obj_t BgL_thunkz00_2635)
{ AN_OBJECT;
{ /* Ieee/port.scm 708 */
{ /* Ieee/port.scm 709 */
obj_t BgL_auxz00_4173;obj_t BgL_auxz00_4166;
if(
PROCEDUREP(BgL_thunkz00_2635))
{ /* Ieee/port.scm 709 */
BgL_auxz00_4173 = BgL_thunkz00_2635
; }  else 
{ 
obj_t BgL_auxz00_4176;
BgL_auxz00_4176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)30921)), BGl_string3393z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2635); 
FAILURE(BgL_auxz00_4176,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2634))
{ /* Ieee/port.scm 709 */
BgL_auxz00_4166 = BgL_stringz00_2634
; }  else 
{ 
obj_t BgL_auxz00_4169;
BgL_auxz00_4169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)30921)), BGl_string3393z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2634); 
FAILURE(BgL_auxz00_4169,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4166, BgL_auxz00_4173);} } 
}



/* with-error-to-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_34, obj_t BgL_thunkz00_35)
{ AN_OBJECT;
{ /* Ieee/port.scm 728 */
{ /* Ieee/port.scm 729 */
obj_t BgL_denvz00_1166;
BgL_denvz00_1166 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 729 */
obj_t BgL_oldzd2outputzd2portz00_1167;
BgL_oldzd2outputzd2portz00_1167 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1166); 
{ /* Ieee/port.scm 730 */

{ /* Ieee/port.scm 731 */
obj_t BgL_val2133z00_1168;
BgL_val2133z00_1168 = 
BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_35, BgL_portz00_34, BgL_denvz00_1166); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1166, BgL_oldzd2outputzd2portz00_1167); BUNSPEC; 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2133z00_1168)))
{ /* Ieee/port.scm 735 */
obj_t BgL_arg2368z00_1170;obj_t BgL_arg2369z00_1171;
{ /* Ieee/port.scm 735 */
obj_t BgL_pairz00_2132;
if(
PAIRP(BgL_val2133z00_1168))
{ /* Ieee/port.scm 735 */
BgL_pairz00_2132 = BgL_val2133z00_1168; }  else 
{ 
obj_t BgL_auxz00_4190;
BgL_auxz00_4190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)31821)), BGl_string3394z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2133z00_1168); 
FAILURE(BgL_auxz00_4190,BFALSE,BFALSE);} 
BgL_arg2368z00_1170 = 
CAR(BgL_pairz00_2132); } 
BgL_arg2369z00_1171 = 
CDR(BgL_val2133z00_1168); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2368z00_1170, BgL_arg2369z00_1171);}  else 
{ /* Ieee/port.scm 735 */
return BgL_val2133z00_1168;} } } } } } 
}



/* <exit:2370> */
obj_t BGl_zc3exitza32370ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2820, obj_t BgL_portz00_2819, obj_t BgL_denvz00_2818)
{ AN_OBJECT;
{ /* Ieee/port.scm 735 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2134z00_1173;
if( SET_EXIT(BgL_an_exit2134z00_1173) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2134z00_1173 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 735 */

PUSH_EXIT(BgL_an_exit2134z00_1173, ((long)0)); 
{ /* Ieee/port.scm 733 */
obj_t BgL_val2135z00_1174;
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2818, BgL_portz00_2819); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2820, ((long)0)))
{ /* Ieee/port.scm 734 */
BgL_val2135z00_1174 = 
PROCEDURE_ENTRY(BgL_thunkz00_2820)(BgL_thunkz00_2820, BEOA); }  else 
{ /* Ieee/port.scm 734 */
FAILURE(BGl_string3395z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2820);} 
POP_EXIT(); 
return BgL_val2135z00_1174;} } 
} } 
}



/* _with-error-to-port */
obj_t BGl__withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2636, obj_t BgL_portz00_2637, obj_t BgL_thunkz00_2638)
{ AN_OBJECT;
{ /* Ieee/port.scm 728 */
{ /* Ieee/port.scm 729 */
obj_t BgL_auxz00_4214;obj_t BgL_auxz00_4207;
if(
PROCEDUREP(BgL_thunkz00_2638))
{ /* Ieee/port.scm 729 */
BgL_auxz00_4214 = BgL_thunkz00_2638
; }  else 
{ 
obj_t BgL_auxz00_4217;
BgL_auxz00_4217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)31644)), BGl_string3396z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2638); 
FAILURE(BgL_auxz00_4217,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_2637))
{ /* Ieee/port.scm 729 */
BgL_auxz00_4207 = BgL_portz00_2637
; }  else 
{ 
obj_t BgL_auxz00_4210;
BgL_auxz00_4210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)31644)), BGl_string3396z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2637); 
FAILURE(BgL_auxz00_4210,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4207, BgL_auxz00_4214);} } 
}



/* with-error-to-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_36, obj_t BgL_thunkz00_37)
{ AN_OBJECT;
{ /* Ieee/port.scm 740 */
{ /* Ieee/port.scm 741 */
obj_t BgL_portz00_1175;
{ /* Ieee/port.scm 387 */

BgL_portz00_1175 = 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_procz00_36, BGl_proc3397z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc3398z00zz__r4_ports_6_10_1z00); } 
{ /* Ieee/port.scm 741 */
obj_t BgL_denvz00_1176;
BgL_denvz00_1176 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 742 */
obj_t BgL_oldzd2errorzd2portz00_1177;
BgL_oldzd2errorzd2portz00_1177 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1176); 
{ /* Ieee/port.scm 743 */
obj_t BgL_resz00_1178;
BgL_resz00_1178 = BUNSPEC; 
{ /* Ieee/port.scm 744 */

{ /* Ieee/port.scm 745 */
obj_t BgL_val2136z00_1179;
BgL_val2136z00_1179 = 
BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00(BgL_thunkz00_37, BgL_portz00_1175, BgL_denvz00_1176); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1176, BgL_oldzd2errorzd2portz00_1177); BUNSPEC; 
{ /* Ieee/port.scm 751 */
obj_t BgL_portz00_2134;
if(
OUTPUT_PORTP(BgL_portz00_1175))
{ /* Ieee/port.scm 751 */
BgL_portz00_2134 = BgL_portz00_1175; }  else 
{ 
obj_t BgL_auxz00_4229;
BgL_auxz00_4229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)32475)), BGl_string3399z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_1175); 
FAILURE(BgL_auxz00_4229,BFALSE,BFALSE);} 
BgL_resz00_1178 = 
bgl_close_output_port(BgL_portz00_2134); } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2136z00_1179)))
{ /* Ieee/port.scm 751 */
obj_t BgL_arg2372z00_1181;obj_t BgL_arg2373z00_1182;
{ /* Ieee/port.scm 751 */
obj_t BgL_pairz00_2135;
if(
PAIRP(BgL_val2136z00_1179))
{ /* Ieee/port.scm 751 */
BgL_pairz00_2135 = BgL_val2136z00_1179; }  else 
{ 
obj_t BgL_auxz00_4239;
BgL_auxz00_4239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)32446)), BGl_string3399z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2136z00_1179); 
FAILURE(BgL_auxz00_4239,BFALSE,BFALSE);} 
BgL_arg2372z00_1181 = 
CAR(BgL_pairz00_2135); } 
BgL_arg2373z00_1182 = 
CDR(BgL_val2136z00_1179); 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2372z00_1181, BgL_arg2373z00_1182); }  else 
{ /* Ieee/port.scm 751 */BgL_val2136z00_1179; } } 
return BgL_resz00_1178;} } } } } } 
}



/* <exit:2374> */
obj_t BGl_zc3exitza32374ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_2817, obj_t BgL_portz00_2816, obj_t BgL_denvz00_2815)
{ AN_OBJECT;
{ /* Ieee/port.scm 750 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2137z00_1184;
if( SET_EXIT(BgL_an_exit2137z00_1184) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2137z00_1184 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 750 */

PUSH_EXIT(BgL_an_exit2137z00_1184, ((long)0)); 
{ /* Ieee/port.scm 747 */
obj_t BgL_val2138z00_1185;
{ /* Ieee/port.scm 747 */
obj_t BgL_auxz00_4249;
if(
OUTPUT_PORTP(BgL_portz00_2816))
{ /* Ieee/port.scm 747 */
BgL_auxz00_4249 = BgL_portz00_2816
; }  else 
{ 
obj_t BgL_auxz00_4252;
BgL_auxz00_4252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)32359)), BGl_string3400z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2816); 
FAILURE(BgL_auxz00_4252,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_2815, BgL_auxz00_4249); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_2817, ((long)0)))
{ /* Ieee/port.scm 748 */
BgL_val2138z00_1185 = 
PROCEDURE_ENTRY(BgL_thunkz00_2817)(BgL_thunkz00_2817, BEOA); }  else 
{ /* Ieee/port.scm 748 */
FAILURE(BGl_string3401z00zz__r4_ports_6_10_1z00,BGl_list3346z00zz__r4_ports_6_10_1z00,BgL_thunkz00_2817);} 
POP_EXIT(); 
return BgL_val2138z00_1185;} } 
} } 
}



/* _with-error-to-procedure */
obj_t BGl__withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2641, obj_t BgL_procz00_2642, obj_t BgL_thunkz00_2643)
{ AN_OBJECT;
{ /* Ieee/port.scm 740 */
{ /* Ieee/port.scm 741 */
obj_t BgL_auxz00_4270;obj_t BgL_auxz00_4263;
if(
PROCEDUREP(BgL_thunkz00_2643))
{ /* Ieee/port.scm 741 */
BgL_auxz00_4270 = BgL_thunkz00_2643
; }  else 
{ 
obj_t BgL_auxz00_4273;
BgL_auxz00_4273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)32144)), BGl_string3402z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_thunkz00_2643); 
FAILURE(BgL_auxz00_4273,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_2642))
{ /* Ieee/port.scm 741 */
BgL_auxz00_4263 = BgL_procz00_2642
; }  else 
{ 
obj_t BgL_auxz00_4266;
BgL_auxz00_4266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)32144)), BGl_string3402z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2642); 
FAILURE(BgL_auxz00_4266,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4263, BgL_auxz00_4270);} } 
}



/* close_2846 */
obj_t BGl_close_2846z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2644)
{ AN_OBJECT;
{ /* Ieee/port.scm 387 */
return 
BBOOL(((bool_t)0));} 
}



/* flush_2847 */
obj_t BGl_flush_2847z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2645)
{ AN_OBJECT;
{ /* Ieee/port.scm 387 */
return 
BBOOL(((bool_t)0));} 
}



/* input-port-protocol */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t BgL_prototcolz00_38)
{ AN_OBJECT;
{ /* Ieee/port.scm 787 */
{ /* Ieee/port.scm 788 */
obj_t BgL_g2266z00_1198;
BgL_g2266z00_1198 = BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g2266z00_1198); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g2266z00_1198, ((long)0)); } } } 
{ /* Ieee/port.scm 789 */
obj_t BgL_cellz00_1200;
BgL_cellz00_1200 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_prototcolz00_38, BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00); 
bgl_mutex_unlock(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); 
if(
PAIRP(BgL_cellz00_1200))
{ /* Ieee/port.scm 791 */
return 
CDR(BgL_cellz00_1200);}  else 
{ /* Ieee/port.scm 791 */
return BFALSE;} } } 
}



/* _input-port-protocol */
obj_t BGl__inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2646, obj_t BgL_prototcolz00_2647)
{ AN_OBJECT;
{ /* Ieee/port.scm 787 */
return 
BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(BgL_prototcolz00_2647);} 
}



/* input-port-protocol-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_protocolz00_39, obj_t BgL_openz00_40)
{ AN_OBJECT;
{ /* Ieee/port.scm 798 */
{ /* Ieee/port.scm 799 */
obj_t BgL_g2266z00_1202;
BgL_g2266z00_1202 = BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g2266z00_1202); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g2266z00_1202, ((long)0)); } } } 
{ /* Ieee/port.scm 800 */
obj_t BgL_cz00_1204;
BgL_cz00_1204 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_protocolz00_39, BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00); 
if(
PAIRP(BgL_cz00_1204))
{ /* Ieee/port.scm 801 */
SET_CDR(BgL_cz00_1204, BgL_openz00_40); }  else 
{ /* Ieee/port.scm 804 */
obj_t BgL_arg2380z00_1206;
BgL_arg2380z00_1206 = 
MAKE_PAIR(BgL_protocolz00_39, BgL_openz00_40); 
BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = 
MAKE_PAIR(BgL_arg2380z00_1206, BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00); } } 
bgl_mutex_unlock(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); 
return BgL_openz00_40;} 
}



/* _input-port-protocol-set! */
obj_t BGl__inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2648, obj_t BgL_protocolz00_2649, obj_t BgL_openz00_2650)
{ AN_OBJECT;
{ /* Ieee/port.scm 798 */
return 
BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_protocolz00_2649, BgL_openz00_2650);} 
}



/* get-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_whoz00_41, obj_t BgL_bufinfoz00_42, int BgL_defsiza7za7_43)
{ AN_OBJECT;
{ /* Ieee/port.scm 811 */
if(
(BgL_bufinfoz00_42==BTRUE))
{ /* Ieee/port.scm 813 */
return 
make_string_sans_fill(
(long)(BgL_defsiza7za7_43));}  else 
{ /* Ieee/port.scm 813 */
if(
(BgL_bufinfoz00_42==BFALSE))
{ /* Ieee/port.scm 815 */
return 
make_string_sans_fill(((long)2));}  else 
{ /* Ieee/port.scm 815 */
if(
STRINGP(BgL_bufinfoz00_42))
{ /* Ieee/port.scm 817 */
return BgL_bufinfoz00_42;}  else 
{ /* Ieee/port.scm 817 */
if(
INTEGERP(BgL_bufinfoz00_42))
{ /* Ieee/port.scm 819 */
if(
(
(long)CINT(BgL_bufinfoz00_42)>((long)0)))
{ /* Ieee/port.scm 820 */
return 
make_string_sans_fill(
(long)CINT(BgL_bufinfoz00_42));}  else 
{ /* Ieee/port.scm 820 */
return 
make_string_sans_fill(((long)2));} }  else 
{ /* Ieee/port.scm 824 */
obj_t BgL_aux3042z00_3061;
BgL_aux3042z00_3061 = 
BGl_errorz00zz__errorz00(BgL_whoz00_41, BGl_string3403z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_42); 
if(
STRINGP(BgL_aux3042z00_3061))
{ /* Ieee/port.scm 824 */
return BgL_aux3042z00_3061;}  else 
{ 
obj_t BgL_auxz00_4322;
BgL_auxz00_4322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)35532)), BGl_string3404z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_aux3042z00_3061); 
FAILURE(BgL_auxz00_4322,BFALSE,BFALSE);} } } } } } 
}



/* _get-port-buffer */
obj_t BGl__getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2651, obj_t BgL_whoz00_2652, obj_t BgL_bufinfoz00_2653, obj_t BgL_defsiza7za7_2654)
{ AN_OBJECT;
{ /* Ieee/port.scm 811 */
{ /* Ieee/port.scm 813 */
int BgL_auxz00_4333;obj_t BgL_auxz00_4326;
{ /* Ieee/port.scm 813 */
obj_t BgL_auxz00_4334;
if(
INTEGERP(BgL_defsiza7za7_2654))
{ /* Ieee/port.scm 813 */
BgL_auxz00_4334 = BgL_defsiza7za7_2654
; }  else 
{ 
obj_t BgL_auxz00_4337;
BgL_auxz00_4337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)35242)), BGl_string3405z00zz__r4_ports_6_10_1z00, BGl_string3407z00zz__r4_ports_6_10_1z00, BgL_defsiza7za7_2654); 
FAILURE(BgL_auxz00_4337,BFALSE,BFALSE);} 
BgL_auxz00_4333 = 
CINT(BgL_auxz00_4334); } 
if(
SYMBOLP(BgL_whoz00_2652))
{ /* Ieee/port.scm 813 */
BgL_auxz00_4326 = BgL_whoz00_2652
; }  else 
{ 
obj_t BgL_auxz00_4329;
BgL_auxz00_4329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)35242)), BGl_string3405z00zz__r4_ports_6_10_1z00, BGl_string3406z00zz__r4_ports_6_10_1z00, BgL_whoz00_2652); 
FAILURE(BgL_auxz00_4329,BFALSE,BFALSE);} 
return 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_4326, BgL_bufinfoz00_2653, BgL_auxz00_4333);} } 
}



/* %open-input-file */
obj_t BGl_z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_44, obj_t BgL_bufz00_45)
{ AN_OBJECT;
{ /* Ieee/port.scm 829 */
{ /* Ieee/port.scm 830 */
obj_t BgL_auxz00_4350;obj_t BgL_auxz00_4343;
if(
STRINGP(BgL_bufz00_45))
{ /* Ieee/port.scm 830 */
BgL_auxz00_4350 = BgL_bufz00_45
; }  else 
{ 
obj_t BgL_auxz00_4353;
BgL_auxz00_4353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)35861)), BGl_string3408z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_bufz00_45); 
FAILURE(BgL_auxz00_4353,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_44))
{ /* Ieee/port.scm 830 */
BgL_auxz00_4343 = BgL_stringz00_44
; }  else 
{ 
obj_t BgL_auxz00_4346;
BgL_auxz00_4346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)35854)), BGl_string3408z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_44); 
FAILURE(BgL_auxz00_4346,BFALSE,BFALSE);} 
return 
bgl_open_input_file(BgL_auxz00_4343, BgL_auxz00_4350);} } 
}



/* _%open-input-file */
obj_t BGl__z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2550, obj_t BgL_stringz00_2551, obj_t BgL_bufz00_2552)
{ AN_OBJECT;
{ /* Ieee/port.scm 829 */
return 
BGl_z52openzd2inputzd2filez52zz__r4_ports_6_10_1z00(BgL_stringz00_2551, BgL_bufz00_2552);} 
}



/* _%open-input-pipe */
obj_t BGl__z52openzd2inputzd2pipez52zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2553, obj_t BgL_stringz00_2554, obj_t BgL_bufinfoz00_2555)
{ AN_OBJECT;
{ /* Ieee/port.scm 835 */
{ /* Ieee/port.scm 836 */
obj_t BgL_bufz00_3323;
BgL_bufz00_3323 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3409z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_2555, 
(int)(((long)1024))); 
{ /* Ieee/port.scm 836 */
obj_t BgL_auxz00_4361;
if(
STRINGP(BgL_stringz00_2554))
{ /* Ieee/port.scm 836 */
BgL_auxz00_4361 = BgL_stringz00_2554
; }  else 
{ 
obj_t BgL_auxz00_4364;
BgL_auxz00_4364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)36142)), BGl_string3411z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2554); 
FAILURE(BgL_auxz00_4364,BFALSE,BFALSE);} 
return 
bgl_open_input_pipe(BgL_auxz00_4361, BgL_bufz00_3323);} } } 
}



/* %open-input-resource */
obj_t BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t BgL_filez00_48, obj_t BgL_bufinfoz00_49)
{ AN_OBJECT;
{ /* Ieee/port.scm 842 */
{ /* Ieee/port.scm 843 */
obj_t BgL_bufz00_2159;
BgL_bufz00_2159 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3412z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_49, default_io_bufsiz); 
{ /* Ieee/port.scm 843 */
obj_t BgL_auxz00_4370;
if(
STRINGP(BgL_filez00_48))
{ /* Ieee/port.scm 843 */
BgL_auxz00_4370 = BgL_filez00_48
; }  else 
{ 
obj_t BgL_auxz00_4373;
BgL_auxz00_4373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)36511)), BGl_string3414z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_filez00_48); 
FAILURE(BgL_auxz00_4373,BFALSE,BFALSE);} 
return 
bgl_open_input_resource(BgL_auxz00_4370, BgL_bufz00_2159);} } } 
}



/* _%open-input-resource */
obj_t BGl__z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2568, obj_t BgL_filez00_2569, obj_t BgL_bufinfoz00_2570)
{ AN_OBJECT;
{ /* Ieee/port.scm 842 */
return 
BGl_z52openzd2inputzd2resourcez52zz__r4_ports_6_10_1z00(BgL_filez00_2569, BgL_bufinfoz00_2570);} 
}



/* %open-input-http-socket */
obj_t BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_50, obj_t BgL_bufinfoz00_51)
{ AN_OBJECT;
{ /* Ieee/port.scm 849 */
{ /* Ieee/port.scm 852 */
obj_t BgL_parserz00_2655;
BgL_parserz00_2655 = 
make_fx_procedure(BGl_parserz00zz__r4_ports_6_10_1z00, 
(int)(((long)5)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_parserz00_2655, 
(int)(((long)0)), BgL_stringz00_50); 
{ /* Ieee/port.scm 879 */
obj_t BgL_protocolz00_1215;
BgL_protocolz00_1215 = 
BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_50, BGl_string3415z00zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 881 */
obj_t BgL_loginz00_1216;obj_t BgL_hostz00_1217;obj_t BgL_portz00_1218;obj_t BgL_abspathz00_1219;
{ /* Ieee/port.scm 881 */
int BgL_auxz00_4385;
BgL_auxz00_4385 = 
(int)(((long)1)); 
BgL_loginz00_1216 = 
BGL_MVALUES_VAL(BgL_auxz00_4385); } 
{ /* Ieee/port.scm 881 */
int BgL_auxz00_4388;
BgL_auxz00_4388 = 
(int)(((long)2)); 
BgL_hostz00_1217 = 
BGL_MVALUES_VAL(BgL_auxz00_4388); } 
{ /* Ieee/port.scm 881 */
int BgL_auxz00_4391;
BgL_auxz00_4391 = 
(int)(((long)3)); 
BgL_portz00_1218 = 
BGL_MVALUES_VAL(BgL_auxz00_4391); } 
{ /* Ieee/port.scm 881 */
int BgL_auxz00_4394;
BgL_auxz00_4394 = 
(int)(((long)4)); 
BgL_abspathz00_1219 = 
BGL_MVALUES_VAL(BgL_auxz00_4394); } 
{ /* Ieee/port.scm 881 */
obj_t BgL_sockz00_1220;
{ /* Ieee/port.scm 881 */
obj_t BgL_methodz00_1262;
BgL_methodz00_1262 = BGl_symbol3416z00zz__r4_ports_6_10_1z00; 
BgL_sockz00_1220 = 
BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE, BNIL, BgL_hostz00_1217, BGl_string3419z00zz__r4_ports_6_10_1z00, BFALSE, BgL_loginz00_1216, BgL_methodz00_1262, BFALSE, BFALSE, BgL_abspathz00_1219, BgL_portz00_1218, BGl_symbol3418z00zz__r4_ports_6_10_1z00, BFALSE, BFALSE, 
BINT(((long)0)), BFALSE); } 
{ /* Ieee/port.scm 881 */
obj_t BgL_ipz00_1221;
{ /* Ieee/port.scm 886 */
obj_t BgL_socketz00_2164;
if(
SOCKETP(BgL_sockz00_1220))
{ /* Ieee/port.scm 886 */
BgL_socketz00_2164 = BgL_sockz00_1220; }  else 
{ 
obj_t BgL_auxz00_4401;
BgL_auxz00_4401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38045)), BGl_string3420z00zz__r4_ports_6_10_1z00, BGl_string3421z00zz__r4_ports_6_10_1z00, BgL_sockz00_1220); 
FAILURE(BgL_auxz00_4401,BFALSE,BFALSE);} 
BgL_ipz00_1221 = 
SOCKET_INPUT(BgL_socketz00_2164); } 
{ /* Ieee/port.scm 886 */
obj_t BgL_opz00_1222;
{ /* Ieee/port.scm 887 */
obj_t BgL_socketz00_2165;
if(
SOCKETP(BgL_sockz00_1220))
{ /* Ieee/port.scm 887 */
BgL_socketz00_2165 = BgL_sockz00_1220; }  else 
{ 
obj_t BgL_auxz00_4408;
BgL_auxz00_4408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38077)), BGl_string3420z00zz__r4_ports_6_10_1z00, BGl_string3421z00zz__r4_ports_6_10_1z00, BgL_sockz00_1220); 
FAILURE(BgL_auxz00_4408,BFALSE,BFALSE);} 
BgL_opz00_1222 = 
SOCKET_OUTPUT(BgL_socketz00_2165); } 
{ /* Ieee/port.scm 887 */

{ /* Ieee/port.scm 888 */
obj_t BgL_zc3anonymousza32387ze3z83_2657;
BgL_zc3anonymousza32387ze3z83_2657 = 
make_fx_procedure(BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza32387ze3z83_2657, 
(int)(((long)0)), BgL_sockz00_1220); 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_ipz00_1221, BgL_zc3anonymousza32387ze3z83_2657); } 
return 
BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00(BgL_bufinfoz00_51, BgL_sockz00_1220, BgL_parserz00_2655, BgL_opz00_1222, BgL_ipz00_1221);} } } } } } } } 
}



/* <exit:2388> */
obj_t BGl_zc3exitza32388ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_bufinfoz00_2808, obj_t BgL_sockz00_2807, obj_t BgL_parserz00_2806, obj_t BgL_opz00_2805, obj_t BgL_ipz00_2804)
{ AN_OBJECT;
{ /* Ieee/port.scm 889 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2147z00_1228;
if( SET_EXIT(BgL_an_exit2147z00_1228) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2147z00_1228 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 889 */

PUSH_EXIT(BgL_an_exit2147z00_1228, ((long)1)); 
{ /* Ieee/port.scm 889 */
obj_t BgL_an_exitd2148z00_1229;
BgL_an_exitd2148z00_1229 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 889 */
obj_t BgL_res2150z00_1232;
{ /* Ieee/port.scm 889 */
obj_t BgL_err2145z00_1233;obj_t BgL_ohs2144z00_1234;
BgL_err2145z00_1233 = 
MAKE_PAIR(BFALSE, BUNSPEC); 
BgL_ohs2144z00_1234 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Ieee/port.scm 889 */
obj_t BgL_val2151z00_1235;
BgL_val2151z00_1235 = 
BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00(BgL_parserz00_2806, BgL_opz00_2805, BgL_ipz00_2804, BgL_ohs2144z00_1234, BgL_an_exitd2148z00_1229, BgL_err2145z00_1233); 
BGL_ERROR_HANDLER_SET(BgL_ohs2144z00_1234); BUNSPEC; 
if(
CBOOL(
CAR(BgL_err2145z00_1233)))
{ /* Ieee/port.scm 894 */
obj_t BgL_arg2390z00_1237;
{ /* Ieee/port.scm 894 */
obj_t BgL_ez00_1238;
BgL_ez00_1238 = 
CDR(BgL_err2145z00_1233); 
{ /* Ieee/port.scm 891 */
obj_t BgL_socketz00_2174;
if(
SOCKETP(BgL_sockz00_2807))
{ /* Ieee/port.scm 891 */
BgL_socketz00_2174 = BgL_sockz00_2807; }  else 
{ 
obj_t BgL_auxz00_4434;
BgL_auxz00_4434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38208)), BGl_string3422z00zz__r4_ports_6_10_1z00, BGl_string3421z00zz__r4_ports_6_10_1z00, BgL_sockz00_2807); 
FAILURE(BgL_auxz00_4434,BFALSE,BFALSE);} 
socket_close(BgL_socketz00_2174); } 
if(
BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1238, BGl_z62httpzd2redirectionzb0zz__httpz00))
{ /* Ieee/port.scm 893 */
obj_t BgL_arg2392z00_1240;
{ 
BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_4441;
BgL_auxz00_4441 = 
(BgL_z62httpzd2redirectionzb0_bglt)(BgL_ez00_1238); 
BgL_arg2392z00_1240 = 
(((BgL_z62httpzd2redirectionzb0_bglt)CREF(BgL_auxz00_4441))->BgL_urlz00); } 
BgL_arg2390z00_1237 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_arg2392z00_1240, BgL_bufinfoz00_2808); }  else 
{ /* Ieee/port.scm 892 */
BgL_arg2390z00_1237 = 
BGl_raisez00zz__errorz00(BgL_ez00_1238); } } 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2148z00_1229, BgL_arg2390z00_1237); }  else 
{ /* Ieee/port.scm 889 */BFALSE; } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2151z00_1235)))
{ /* Ieee/port.scm 889 */
obj_t BgL_arg2394z00_1242;obj_t BgL_arg2395z00_1243;
{ /* Ieee/port.scm 889 */
obj_t BgL_pairz00_2178;
if(
PAIRP(BgL_val2151z00_1235))
{ /* Ieee/port.scm 889 */
BgL_pairz00_2178 = BgL_val2151z00_1235; }  else 
{ 
obj_t BgL_auxz00_4452;
BgL_auxz00_4452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38155)), BGl_string3422z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2151z00_1235); 
FAILURE(BgL_auxz00_4452,BFALSE,BFALSE);} 
BgL_arg2394z00_1242 = 
CAR(BgL_pairz00_2178); } 
BgL_arg2395z00_1243 = 
CDR(BgL_val2151z00_1235); 
BgL_res2150z00_1232 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2394z00_1242, BgL_arg2395z00_1243); }  else 
{ /* Ieee/port.scm 889 */
BgL_res2150z00_1232 = BgL_val2151z00_1235; } } } 
POP_EXIT(); 
return BgL_res2150z00_1232;} } } 
} } 
}



/* <exit:2396> */
obj_t BGl_zc3exitza32396ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_parserz00_2814, obj_t BgL_opz00_2813, obj_t BgL_ipz00_2812, obj_t BgL_ohs2144z00_2811, obj_t BgL_an_exitd2148z00_2810, obj_t BgL_err2145z00_2809)
{ AN_OBJECT;
{ /* Ieee/port.scm 889 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2152z00_1245;
if( SET_EXIT(BgL_an_exit2152z00_1245) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2152z00_1245 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 889 */

PUSH_EXIT(BgL_an_exit2152z00_1245, ((long)0)); 
{ /* Ieee/port.scm 889 */
obj_t BgL_val2153z00_1246;
{ /* Ieee/port.scm 889 */
obj_t BgL_arg2397z00_1247;
{ /* Ieee/port.scm 889 */
obj_t BgL_zc3anonymousza32399ze3z83_2656;
BgL_zc3anonymousza32399ze3z83_2656 = 
make_fx_procedure(BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32399ze3z83_2656, 
(int)(((long)0)), BgL_err2145z00_2809); 
PROCEDURE_SET(BgL_zc3anonymousza32399ze3z83_2656, 
(int)(((long)1)), BgL_an_exitd2148z00_2810); 
BgL_arg2397z00_1247 = 
MAKE_PAIR(BgL_zc3anonymousza32399ze3z83_2656, BgL_ohs2144z00_2811); } 
BGL_ERROR_HANDLER_SET(BgL_arg2397z00_1247); BUNSPEC; } 
BgL_val2153z00_1246 = 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_ipz00_2812, BgL_opz00_2813, BgL_parserz00_2814); 
POP_EXIT(); 
return BgL_val2153z00_1246;} } 
} } 
}



/* _%open-input-http-socket */
obj_t BGl__z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2556, obj_t BgL_stringz00_2557, obj_t BgL_bufinfoz00_2558)
{ AN_OBJECT;
{ /* Ieee/port.scm 849 */
return 
BGl_z52openzd2inputzd2httpzd2socketz80zz__r4_ports_6_10_1z00(BgL_stringz00_2557, BgL_bufinfoz00_2558);} 
}



/* parser */
obj_t BGl_parserz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2658, obj_t BgL_ipz00_2660, obj_t BgL_statuszd2codezd2_2661, obj_t BgL_headerz00_2662, obj_t BgL_clenz00_2663, obj_t BgL_tencz00_2664)
{ AN_OBJECT;
{ /* Ieee/port.scm 877 */
{ /* Ieee/port.scm 852 */
obj_t BgL_stringz00_2659;
BgL_stringz00_2659 = 
PROCEDURE_REF(BgL_envz00_2658, 
(int)(((long)0))); 
{ 
obj_t BgL_ipz00_1272;obj_t BgL_statuszd2codezd2_1273;obj_t BgL_headerz00_1274;obj_t BgL_clenz00_1275;obj_t BgL_tencz00_1276;
BgL_ipz00_1272 = BgL_ipz00_2660; 
BgL_statuszd2codezd2_1273 = BgL_statuszd2codezd2_2661; 
BgL_headerz00_1274 = BgL_headerz00_2662; 
BgL_clenz00_1275 = BgL_clenz00_2663; 
BgL_tencz00_1276 = BgL_tencz00_2664; 
{ /* Ieee/port.scm 852 */
bool_t BgL_testz00_4477;
{ /* Ieee/port.scm 852 */
bool_t BgL_testz00_4478;
{ /* Ieee/port.scm 852 */
long BgL_n1z00_2180;
{ /* Ieee/port.scm 852 */
obj_t BgL_auxz00_4479;
if(
INTEGERP(BgL_statuszd2codezd2_1273))
{ /* Ieee/port.scm 852 */
BgL_auxz00_4479 = BgL_statuszd2codezd2_1273
; }  else 
{ 
obj_t BgL_auxz00_4482;
BgL_auxz00_4482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)36981)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_statuszd2codezd2_1273); 
FAILURE(BgL_auxz00_4482,BFALSE,BFALSE);} 
BgL_n1z00_2180 = 
(long)CINT(BgL_auxz00_4479); } 
BgL_testz00_4478 = 
(BgL_n1z00_2180>=((long)200)); } 
if(BgL_testz00_4478)
{ /* Ieee/port.scm 852 */
long BgL_n1z00_2182;
{ /* Ieee/port.scm 852 */
obj_t BgL_auxz00_4488;
if(
INTEGERP(BgL_statuszd2codezd2_1273))
{ /* Ieee/port.scm 852 */
BgL_auxz00_4488 = BgL_statuszd2codezd2_1273
; }  else 
{ 
obj_t BgL_auxz00_4491;
BgL_auxz00_4491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37004)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_statuszd2codezd2_1273); 
FAILURE(BgL_auxz00_4491,BFALSE,BFALSE);} 
BgL_n1z00_2182 = 
(long)CINT(BgL_auxz00_4488); } 
BgL_testz00_4477 = 
(BgL_n1z00_2182<=((long)299)); }  else 
{ /* Ieee/port.scm 852 */
BgL_testz00_4477 = ((bool_t)0)
; } } 
if(BgL_testz00_4477)
{ /* Ieee/port.scm 852 */
if(
INPUT_PORTP(BgL_ipz00_1272))
{ /* Ieee/port.scm 870 */
if(
CBOOL(BgL_clenz00_1275))
{ /* Ieee/port.scm 872 */
{ /* Ieee/port.scm 873 */
long BgL_arg2403z00_1280;
{ /* Ieee/port.scm 873 */
long BgL_res2826z00_2186;
{ /* Ieee/port.scm 873 */
long BgL_xz00_2185;
{ /* Ieee/port.scm 873 */
obj_t BgL_auxz00_4501;
if(
ELONGP(BgL_clenz00_1275))
{ /* Ieee/port.scm 873 */
BgL_auxz00_4501 = BgL_clenz00_1275
; }  else 
{ 
obj_t BgL_auxz00_4504;
BgL_auxz00_4504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37707)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3425z00zz__r4_ports_6_10_1z00, BgL_clenz00_1275); 
FAILURE(BgL_auxz00_4504,BFALSE,BFALSE);} 
BgL_xz00_2185 = 
BELONG_TO_LONG(BgL_auxz00_4501); } 
{ /* Ieee/port.scm 873 */
long BgL_auxz00_4509;
{ /* Ieee/port.scm 873 */
long BgL_auxz00_4510;
BgL_auxz00_4510 = 
ELONG_TO_LONG(BgL_xz00_2185); 
BgL_auxz00_4509 = 
ELONG_TO_LONG(BgL_auxz00_4510); } 
BgL_res2826z00_2186 = 
ELONG_TO_LONG(BgL_auxz00_4509); } } 
BgL_arg2403z00_1280 = BgL_res2826z00_2186; } 
{ /* Ieee/port.scm 873 */
obj_t BgL_portz00_2187;
BgL_portz00_2187 = BgL_ipz00_1272; 
INPUT_PORT_FILLBARRIER_SET(BgL_portz00_2187, BgL_arg2403z00_1280); BUNSPEC; BgL_arg2403z00_1280; } } 
{ /* Ieee/port.scm 874 */
long BgL_auxz00_4515;
{ /* Ieee/port.scm 874 */
obj_t BgL_auxz00_4516;
if(
ELONGP(BgL_clenz00_1275))
{ /* Ieee/port.scm 874 */
BgL_auxz00_4516 = BgL_clenz00_1275
; }  else 
{ 
obj_t BgL_auxz00_4519;
BgL_auxz00_4519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37749)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3425z00zz__r4_ports_6_10_1z00, BgL_clenz00_1275); 
FAILURE(BgL_auxz00_4519,BFALSE,BFALSE);} 
BgL_auxz00_4515 = 
BELONG_TO_LONG(BgL_auxz00_4516); } 
BGL_INPUT_PORT_LENGTH_SET(BgL_ipz00_1272, BgL_auxz00_4515); } BUNSPEC; 
return BgL_ipz00_1272;}  else 
{ /* Ieee/port.scm 872 */
return BgL_ipz00_1272;} }  else 
{ /* Ieee/port.scm 376 */

return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BGl_string3426z00zz__r4_ports_6_10_1z00, 
BINT(((long)0)));} }  else 
{ 

if(
INTEGERP(BgL_statuszd2codezd2_1273))
{ /* Ieee/port.scm 853 */
switch( 
(long)CINT(BgL_statuszd2codezd2_1273)) { case ((long)401) : 

{ /* Llib/object.scm 90 */
BgL_z62iozd2portzd2errorz62_bglt BgL_arg2405z00_1286;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2406z00_1287;obj_t BgL_arg2407z00_1288;obj_t BgL_arg2409z00_1290;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2406z00_1287 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2407z00_1288 = BGl_symbol3412z00zz__r4_ports_6_10_1z00; 
{ /* Ieee/port.scm 858 */
obj_t BgL_auxz00_4530;
if(
STRINGP(BgL_stringz00_2659))
{ /* Ieee/port.scm 858 */
BgL_auxz00_4530 = BgL_stringz00_2659
; }  else 
{ 
obj_t BgL_auxz00_4533;
BgL_auxz00_4533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37182)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2659); 
FAILURE(BgL_auxz00_4533,BFALSE,BFALSE);} 
BgL_arg2409z00_1290 = 
string_append(BGl_string3299z00zz__r4_ports_6_10_1z00, BgL_auxz00_4530); } 
BgL_arg2405z00_1286 = 
BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(BFALSE, BFALSE, BgL_arg2406z00_1287, BgL_arg2407z00_1288, BGl_string3429z00zz__r4_ports_6_10_1z00, BgL_arg2409z00_1290); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2405z00_1286));} break;case ((long)404) : 

{ /* Llib/object.scm 90 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_arg2410z00_1292;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2411z00_1293;obj_t BgL_arg2412z00_1294;obj_t BgL_arg2414z00_1296;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2411z00_1293 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2412z00_1294 = BGl_symbol3412z00zz__r4_ports_6_10_1z00; 
{ /* Ieee/port.scm 863 */
obj_t BgL_auxz00_4542;
if(
STRINGP(BgL_stringz00_2659))
{ /* Ieee/port.scm 863 */
BgL_auxz00_4542 = BgL_stringz00_2659
; }  else 
{ 
obj_t BgL_auxz00_4545;
BgL_auxz00_4545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37347)), BGl_string3423z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2659); 
FAILURE(BgL_auxz00_4545,BFALSE,BFALSE);} 
BgL_arg2414z00_1296 = 
string_append(BGl_string3299z00zz__r4_ports_6_10_1z00, BgL_auxz00_4542); } 
BgL_arg2410z00_1292 = 
BGl_makezd2z62iozd2filezd2notzd2foundzd2errorzb0zz__objectz00(BFALSE, BFALSE, BgL_arg2411z00_1293, BgL_arg2412z00_1294, BGl_string3430z00zz__r4_ports_6_10_1z00, BgL_arg2414z00_1296); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2410z00_1292));} break;
default: 
BgL_case_else2140z00_1283:
{ /* Llib/object.scm 90 */
BgL_z62iozd2portzd2errorz62_bglt BgL_arg2415z00_1298;
{ /* Llib/object.scm 90 */
obj_t BgL_arg2416z00_1299;obj_t BgL_arg2417z00_1300;obj_t BgL_arg2418z00_1301;obj_t BgL_arg2419z00_1302;
{ /* Llib/object.scm 90 */

{ /* Llib/object.scm 90 */

BgL_arg2416z00_1299 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
BgL_arg2417z00_1300 = BGl_symbol3412z00zz__r4_ports_6_10_1z00; 
{ /* Ieee/port.scm 867 */
obj_t BgL_list2420z00_1304;
BgL_list2420z00_1304 = 
MAKE_PAIR(BgL_statuszd2codezd2_1273, BNIL); 
BgL_arg2418z00_1301 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3427z00zz__r4_ports_6_10_1z00, BgL_list2420z00_1304); } 
{ /* Ieee/port.scm 868 */
obj_t BgL_auxz00_4556;
if(
STRINGP(BgL_stringz00_2659))
{ /* Ieee/port.scm 868 */
BgL_auxz00_4556 = BgL_stringz00_2659
; }  else 
{ 
obj_t BgL_auxz00_4559;
BgL_auxz00_4559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)37527)), BGl_string3428z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2659); 
FAILURE(BgL_auxz00_4559,BFALSE,BFALSE);} 
BgL_arg2419z00_1302 = 
string_append(BGl_string3299z00zz__r4_ports_6_10_1z00, BgL_auxz00_4556); } 
BgL_arg2415z00_1298 = 
BGl_makezd2z62iozd2portzd2errorzb0zz__objectz00(BFALSE, BFALSE, BgL_arg2416z00_1299, BgL_arg2417z00_1300, BgL_arg2418z00_1301, BgL_arg2419z00_1302); } 
return 
BGl_raisez00zz__errorz00(
(obj_t)(BgL_arg2415z00_1298));} } }  else 
{ /* Ieee/port.scm 853 */
goto BgL_case_else2140z00_1283;} } } } } } 
}



/* <anonymous:2399> */
obj_t BGl_zc3anonymousza32399ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2665, obj_t BgL_ez00_2668)
{ AN_OBJECT;
{ /* Ieee/port.scm 889 */
{ /* Ieee/port.scm 889 */
obj_t BgL_err2145z00_2666;obj_t BgL_an_exitd2148z00_2667;
BgL_err2145z00_2666 = 
PROCEDURE_REF(BgL_envz00_2665, 
(int)(((long)0))); 
BgL_an_exitd2148z00_2667 = 
PROCEDURE_REF(BgL_envz00_2665, 
(int)(((long)1))); 
{ 
obj_t BgL_ez00_1249;
BgL_ez00_1249 = BgL_ez00_2668; 
{ /* Ieee/port.scm 889 */
obj_t BgL_pairz00_2167;
if(
PAIRP(BgL_err2145z00_2666))
{ /* Ieee/port.scm 889 */
BgL_pairz00_2167 = BgL_err2145z00_2666; }  else 
{ 
obj_t BgL_auxz00_4575;
BgL_auxz00_4575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38155)), BGl_string3431z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_err2145z00_2666); 
FAILURE(BgL_auxz00_4575,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2167, BTRUE); } 
SET_CDR(BgL_err2145z00_2666, BgL_ez00_1249); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2148z00_2667, BgL_ez00_1249);} } } 
}



/* <anonymous:2387> */
obj_t BGl_zc3anonymousza32387ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2669, obj_t BgL_ipz00_2671)
{ AN_OBJECT;
{ /* Ieee/port.scm 888 */
{ /* Ieee/port.scm 888 */
obj_t BgL_sockz00_2670;
BgL_sockz00_2670 = 
PROCEDURE_REF(BgL_envz00_2669, 
(int)(((long)0))); 
{ 
obj_t BgL_ipz00_1224;
BgL_ipz00_1224 = BgL_ipz00_2671; 
{ /* Ieee/port.scm 888 */
obj_t BgL_socketz00_2166;
if(
SOCKETP(BgL_sockz00_2670))
{ /* Ieee/port.scm 888 */
BgL_socketz00_2166 = BgL_sockz00_2670; }  else 
{ 
obj_t BgL_auxz00_4586;
BgL_auxz00_4586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)38145)), BGl_string3432z00zz__r4_ports_6_10_1z00, BGl_string3421z00zz__r4_ports_6_10_1z00, BgL_sockz00_2670); 
FAILURE(BgL_auxz00_4586,BFALSE,BFALSE);} 
return 
socket_close(BgL_socketz00_2166);} } } } 
}



/* _open-input-file */
obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_55, obj_t BgL_optz00_54)
{ AN_OBJECT;
{ /* Ieee/port.scm 917 */
{ /* Ieee/port.scm 917 */
obj_t BgL_g2221z00_1307;
BgL_g2221z00_1307 = 
VECTOR_REF(BgL_optz00_54,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 917 */
int BgL_aux2223z00_1309;
BgL_aux2223z00_1309 = 
VECTOR_LENGTH(BgL_optz00_54); 
switch( 
(long)(BgL_aux2223z00_1309)) { case ((long)1) : 

{ /* Ieee/port.scm 917 */

{ /* Ieee/port.scm 917 */
obj_t BgL_arg2423z00_1312;
BgL_arg2423z00_1312 = 
VECTOR_REF(BgL_optz00_54,
(int)(((long)0))); 
{ /* Ieee/port.scm 917 */
obj_t BgL_auxz00_4596;
if(
STRINGP(BgL_arg2423z00_1312))
{ /* Ieee/port.scm 917 */
BgL_auxz00_4596 = BgL_arg2423z00_1312
; }  else 
{ 
obj_t BgL_auxz00_4599;
BgL_auxz00_4599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)39848)), BGl_string3434z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2423z00_1312); 
FAILURE(BgL_auxz00_4599,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_auxz00_4596, BTRUE);} } } break;case ((long)2) : 

{ /* Ieee/port.scm 917 */
obj_t BgL_bufinfoz00_1313;
BgL_bufinfoz00_1313 = 
VECTOR_REF(BgL_optz00_54,
(int)(((long)1))); 
{ /* Ieee/port.scm 917 */

{ /* Ieee/port.scm 917 */
obj_t BgL_arg2424z00_1314;
BgL_arg2424z00_1314 = 
VECTOR_REF(BgL_optz00_54,
(int)(((long)0))); 
{ /* Ieee/port.scm 917 */
obj_t BgL_auxz00_4608;
if(
STRINGP(BgL_arg2424z00_1314))
{ /* Ieee/port.scm 917 */
BgL_auxz00_4608 = BgL_arg2424z00_1314
; }  else 
{ 
obj_t BgL_auxz00_4611;
BgL_auxz00_4611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)39848)), BGl_string3434z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2424z00_1314); 
FAILURE(BgL_auxz00_4611,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_auxz00_4608, BgL_bufinfoz00_1313);} } } } break;
default: 
{ /* Ieee/port.scm 917 */
obj_t BgL_arg2425z00_1315;int BgL_arg2427z00_1317;
BgL_arg2425z00_1315 = BGl_symbol3412z00zz__r4_ports_6_10_1z00; 
BgL_arg2427z00_1317 = 
VECTOR_LENGTH(BgL_optz00_54); 
return 
BGl_errorz00zz__errorz00(BgL_arg2425z00_1315, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2427z00_1317));} } } } } } 
}



/* open-input-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_52, obj_t BgL_bufinfoz00_53)
{ AN_OBJECT;
{ /* Ieee/port.scm 917 */
{ /* Ieee/port.scm 918 */
obj_t BgL_bufferz00_1318;
BgL_bufferz00_1318 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3412z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_53, default_io_bufsiz); 
{ 
obj_t BgL_protosz00_1320;
BgL_protosz00_1320 = BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00; 
BgL_zc3anonymousza32428ze3z83_1321:
if(
NULLP(BgL_protosz00_1320))
{ /* Ieee/port.scm 920 */
return 
bgl_open_input_file(BgL_stringz00_52, BgL_bufferz00_1318);}  else 
{ /* Ieee/port.scm 923 */
obj_t BgL_cellz00_1323;
{ /* Ieee/port.scm 923 */
obj_t BgL_pairz00_2192;
if(
PAIRP(BgL_protosz00_1320))
{ /* Ieee/port.scm 923 */
BgL_pairz00_2192 = BgL_protosz00_1320; }  else 
{ 
obj_t BgL_auxz00_4627;
BgL_auxz00_4627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40143)), BGl_string3435z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_protosz00_1320); 
FAILURE(BgL_auxz00_4627,BFALSE,BFALSE);} 
BgL_cellz00_1323 = 
CAR(BgL_pairz00_2192); } 
{ /* Ieee/port.scm 923 */
obj_t BgL_identz00_1324;
{ /* Ieee/port.scm 924 */
obj_t BgL_pairz00_2193;
if(
PAIRP(BgL_cellz00_1323))
{ /* Ieee/port.scm 924 */
BgL_pairz00_2193 = BgL_cellz00_1323; }  else 
{ 
obj_t BgL_auxz00_4634;
BgL_auxz00_4634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40170)), BGl_string3435z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_cellz00_1323); 
FAILURE(BgL_auxz00_4634,BFALSE,BFALSE);} 
BgL_identz00_1324 = 
CAR(BgL_pairz00_2193); } 
{ /* Ieee/port.scm 924 */
long BgL_lz00_1325;
{ /* Ieee/port.scm 925 */
obj_t BgL_stringz00_2194;
if(
STRINGP(BgL_identz00_1324))
{ /* Ieee/port.scm 925 */
BgL_stringz00_2194 = BgL_identz00_1324; }  else 
{ 
obj_t BgL_auxz00_4641;
BgL_auxz00_4641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40186)), BGl_string3435z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_identz00_1324); 
FAILURE(BgL_auxz00_4641,BFALSE,BFALSE);} 
BgL_lz00_1325 = 
STRING_LENGTH(BgL_stringz00_2194); } 
{ /* Ieee/port.scm 925 */
obj_t BgL_openz00_1326;
BgL_openz00_1326 = 
CDR(BgL_cellz00_1323); 
{ /* Ieee/port.scm 926 */

if(
bigloo_strncmp(BgL_stringz00_52, BgL_identz00_1324, BgL_lz00_1325))
{ /* Ieee/port.scm 929 */
obj_t BgL_arg2431z00_1328;
BgL_arg2431z00_1328 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_52, BgL_lz00_1325, 
STRING_LENGTH(BgL_stringz00_52)); 
{ /* Ieee/port.scm 929 */
obj_t BgL_funz00_3121;
if(
PROCEDUREP(BgL_openz00_1326))
{ /* Ieee/port.scm 929 */
BgL_funz00_3121 = BgL_openz00_1326; }  else 
{ 
obj_t BgL_auxz00_4653;
BgL_auxz00_4653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40316)), BGl_string3435z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_openz00_1326); 
FAILURE(BgL_auxz00_4653,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3121, ((long)2)))
{ /* Ieee/port.scm 929 */
return 
PROCEDURE_ENTRY(BgL_funz00_3121)(BgL_openz00_1326, BgL_arg2431z00_1328, BgL_bufferz00_1318, BEOA);}  else 
{ /* Ieee/port.scm 929 */
FAILURE(BGl_string3436z00zz__r4_ports_6_10_1z00,BGl_list3437z00zz__r4_ports_6_10_1z00,BgL_funz00_3121);} } }  else 
{ 
obj_t BgL_protosz00_4662;
BgL_protosz00_4662 = 
CDR(BgL_protosz00_1320); 
BgL_protosz00_1320 = BgL_protosz00_4662; 
goto BgL_zc3anonymousza32428ze3z83_1321;} } } } } } } } } 
}



/* _open-input-string */
obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_59, obj_t BgL_optz00_58)
{ AN_OBJECT;
{ /* Ieee/port.scm 935 */
{ /* Ieee/port.scm 935 */
obj_t BgL_g2224z00_1332;
BgL_g2224z00_1332 = 
VECTOR_REF(BgL_optz00_58,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 935 */
int BgL_aux2226z00_1334;
BgL_aux2226z00_1334 = 
VECTOR_LENGTH(BgL_optz00_58); 
switch( 
(long)(BgL_aux2226z00_1334)) { case ((long)1) : 

{ /* Ieee/port.scm 935 */

{ /* Ieee/port.scm 935 */
obj_t BgL_arg2436z00_1337;
BgL_arg2436z00_1337 = 
VECTOR_REF(BgL_optz00_58,
(int)(((long)0))); 
{ /* Ieee/port.scm 935 */
obj_t BgL_auxz00_4669;
if(
STRINGP(BgL_arg2436z00_1337))
{ /* Ieee/port.scm 935 */
BgL_auxz00_4669 = BgL_arg2436z00_1337
; }  else 
{ 
obj_t BgL_auxz00_4672;
BgL_auxz00_4672 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40629)), BGl_string3446z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2436z00_1337); 
FAILURE(BgL_auxz00_4672,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_4669, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 935 */
obj_t BgL_startz00_1338;
BgL_startz00_1338 = 
VECTOR_REF(BgL_optz00_58,
(int)(((long)1))); 
{ /* Ieee/port.scm 935 */

{ /* Ieee/port.scm 935 */
obj_t BgL_arg2437z00_1339;
BgL_arg2437z00_1339 = 
VECTOR_REF(BgL_optz00_58,
(int)(((long)0))); 
{ /* Ieee/port.scm 935 */
obj_t BgL_auxz00_4682;
if(
STRINGP(BgL_arg2437z00_1339))
{ /* Ieee/port.scm 935 */
BgL_auxz00_4682 = BgL_arg2437z00_1339
; }  else 
{ 
obj_t BgL_auxz00_4685;
BgL_auxz00_4685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40629)), BGl_string3446z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2437z00_1339); 
FAILURE(BgL_auxz00_4685,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_4682, BgL_startz00_1338);} } } } break;
default: 
{ /* Ieee/port.scm 935 */
obj_t BgL_arg2438z00_1340;int BgL_arg2440z00_1342;
BgL_arg2438z00_1340 = BGl_symbol3444z00zz__r4_ports_6_10_1z00; 
BgL_arg2440z00_1342 = 
VECTOR_LENGTH(BgL_optz00_58); 
return 
BGl_errorz00zz__errorz00(BgL_arg2438z00_1340, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2440z00_1342));} } } } } } 
}



/* open-input-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_56, obj_t BgL_startz00_57)
{ AN_OBJECT;
{ /* Ieee/port.scm 935 */
{ /* Ieee/port.scm 937 */
bool_t BgL_testz00_4695;
{ /* Ieee/port.scm 937 */
long BgL_n1z00_2201;
{ /* Ieee/port.scm 937 */
obj_t BgL_auxz00_4696;
if(
INTEGERP(BgL_startz00_57))
{ /* Ieee/port.scm 937 */
BgL_auxz00_4696 = BgL_startz00_57
; }  else 
{ 
obj_t BgL_auxz00_4699;
BgL_auxz00_4699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40706)), BGl_string3445z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_startz00_57); 
FAILURE(BgL_auxz00_4699,BFALSE,BFALSE);} 
BgL_n1z00_2201 = 
(long)CINT(BgL_auxz00_4696); } 
BgL_testz00_4695 = 
(BgL_n1z00_2201<((long)0)); } 
if(BgL_testz00_4695)
{ /* Ieee/port.scm 937 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3444z00zz__r4_ports_6_10_1z00, BGl_string3447z00zz__r4_ports_6_10_1z00, BgL_startz00_57);}  else 
{ /* Ieee/port.scm 939 */
bool_t BgL_testz00_4706;
{ /* Ieee/port.scm 939 */
long BgL_n1z00_2204;
{ /* Ieee/port.scm 939 */
obj_t BgL_auxz00_4707;
if(
INTEGERP(BgL_startz00_57))
{ /* Ieee/port.scm 939 */
BgL_auxz00_4707 = BgL_startz00_57
; }  else 
{ 
obj_t BgL_auxz00_4710;
BgL_auxz00_4710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40791)), BGl_string3445z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_startz00_57); 
FAILURE(BgL_auxz00_4710,BFALSE,BFALSE);} 
BgL_n1z00_2204 = 
(long)CINT(BgL_auxz00_4707); } 
BgL_testz00_4706 = 
(BgL_n1z00_2204>
STRING_LENGTH(BgL_stringz00_56)); } 
if(BgL_testz00_4706)
{ /* Ieee/port.scm 939 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3444z00zz__r4_ports_6_10_1z00, BGl_string3448z00zz__r4_ports_6_10_1z00, BgL_startz00_57);}  else 
{ /* Ieee/port.scm 942 */
int BgL_auxz00_4718;
{ /* Ieee/port.scm 942 */
obj_t BgL_auxz00_4719;
if(
INTEGERP(BgL_startz00_57))
{ /* Ieee/port.scm 942 */
BgL_auxz00_4719 = BgL_startz00_57
; }  else 
{ 
obj_t BgL_auxz00_4722;
BgL_auxz00_4722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)40937)), BGl_string3445z00zz__r4_ports_6_10_1z00, BGl_string3407z00zz__r4_ports_6_10_1z00, BgL_startz00_57); 
FAILURE(BgL_auxz00_4722,BFALSE,BFALSE);} 
BgL_auxz00_4718 = 
CINT(BgL_auxz00_4719); } 
return 
bgl_open_input_string(BgL_stringz00_56, BgL_auxz00_4718);} } } } 
}



/* open-input-string! */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_60)
{ AN_OBJECT;
{ /* Ieee/port.scm 947 */
return 
bgl_open_input_string_bang(BgL_stringz00_60);} 
}



/* _open-input-string! */
obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2672, obj_t BgL_stringz00_2673)
{ AN_OBJECT;
{ /* Ieee/port.scm 947 */
{ /* Ieee/port.scm 948 */
obj_t BgL_stringz00_3324;
if(
STRINGP(BgL_stringz00_2673))
{ /* Ieee/port.scm 948 */
BgL_stringz00_3324 = BgL_stringz00_2673; }  else 
{ 
obj_t BgL_auxz00_4731;
BgL_auxz00_4731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)41216)), BGl_string3449z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2673); 
FAILURE(BgL_auxz00_4731,BFALSE,BFALSE);} 
return 
bgl_open_input_string_bang(BgL_stringz00_3324);} } 
}



/* _open-input-procedure */
obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_64, obj_t BgL_optz00_63)
{ AN_OBJECT;
{ /* Ieee/port.scm 953 */
{ /* Ieee/port.scm 953 */
obj_t BgL_g2227z00_1346;
BgL_g2227z00_1346 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 953 */
int BgL_aux2229z00_1348;
BgL_aux2229z00_1348 = 
VECTOR_LENGTH(BgL_optz00_63); 
switch( 
(long)(BgL_aux2229z00_1348)) { case ((long)1) : 

{ /* Ieee/port.scm 953 */

{ /* Ieee/port.scm 953 */
obj_t BgL_arg2445z00_1351;
BgL_arg2445z00_1351 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ /* Ieee/port.scm 953 */
obj_t BgL_procz00_2206;
if(
PROCEDUREP(BgL_arg2445z00_1351))
{ /* Ieee/port.scm 953 */
BgL_procz00_2206 = BgL_arg2445z00_1351; }  else 
{ 
obj_t BgL_auxz00_4743;
BgL_auxz00_4743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)41469)), BGl_string3450z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2445z00_1351); 
FAILURE(BgL_auxz00_4743,BFALSE,BFALSE);} 
return 
bgl_open_input_procedure(BgL_procz00_2206, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3357z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)1024))));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 953 */
obj_t BgL_bufinfoz00_1352;
BgL_bufinfoz00_1352 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)1))); 
{ /* Ieee/port.scm 953 */

{ /* Ieee/port.scm 953 */
obj_t BgL_arg2446z00_1353;
BgL_arg2446z00_1353 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ /* Ieee/port.scm 953 */
obj_t BgL_procz00_2209;
if(
PROCEDUREP(BgL_arg2446z00_1353))
{ /* Ieee/port.scm 953 */
BgL_procz00_2209 = BgL_arg2446z00_1353; }  else 
{ 
obj_t BgL_auxz00_4756;
BgL_auxz00_4756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)41469)), BGl_string3450z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2446z00_1353); 
FAILURE(BgL_auxz00_4756,BFALSE,BFALSE);} 
return 
bgl_open_input_procedure(BgL_procz00_2209, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3357z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1352, 
(int)(((long)1024))));} } } } break;
default: 
{ /* Ieee/port.scm 953 */
obj_t BgL_arg2447z00_1354;int BgL_arg2449z00_1356;
BgL_arg2447z00_1354 = BGl_symbol3357z00zz__r4_ports_6_10_1z00; 
BgL_arg2449z00_1356 = 
VECTOR_LENGTH(BgL_optz00_63); 
return 
BGl_errorz00zz__errorz00(BgL_arg2447z00_1354, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2449z00_1356));} } } } } } 
}



/* open-input-procedure */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_61, obj_t BgL_bufinfoz00_62)
{ AN_OBJECT;
{ /* Ieee/port.scm 953 */
return 
bgl_open_input_procedure(BgL_procz00_61, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3357z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_62, 
(int)(((long)1024))));} 
}



/* _open-input-gzip-port */
obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t BgL_envz00_68, obj_t BgL_optz00_67)
{ AN_OBJECT;
{ /* Ieee/port.scm 960 */
{ /* Ieee/port.scm 960 */
obj_t BgL_g2230z00_1358;
BgL_g2230z00_1358 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 960 */
int BgL_aux2232z00_1360;
BgL_aux2232z00_1360 = 
VECTOR_LENGTH(BgL_optz00_67); 
switch( 
(long)(BgL_aux2232z00_1360)) { case ((long)1) : 

{ /* Ieee/port.scm 960 */

{ /* Ieee/port.scm 960 */
obj_t BgL_arg2451z00_1363;
BgL_arg2451z00_1363 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ /* Ieee/port.scm 960 */
obj_t BgL_inz00_2213;
if(
INPUT_PORTP(BgL_arg2451z00_1363))
{ /* Ieee/port.scm 960 */
BgL_inz00_2213 = BgL_arg2451z00_1363; }  else 
{ 
obj_t BgL_auxz00_4778;
BgL_auxz00_4778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)41862)), BGl_string3453z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_arg2451z00_1363); 
FAILURE(BgL_auxz00_4778,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_2213, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3451z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 960 */
obj_t BgL_bufinfoz00_1364;
BgL_bufinfoz00_1364 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)1))); 
{ /* Ieee/port.scm 960 */

{ /* Ieee/port.scm 960 */
obj_t BgL_arg2452z00_1365;
BgL_arg2452z00_1365 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ /* Ieee/port.scm 960 */
obj_t BgL_inz00_2216;
if(
INPUT_PORTP(BgL_arg2452z00_1365))
{ /* Ieee/port.scm 960 */
BgL_inz00_2216 = BgL_arg2452z00_1365; }  else 
{ 
obj_t BgL_auxz00_4790;
BgL_auxz00_4790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)41862)), BGl_string3453z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_arg2452z00_1365); 
FAILURE(BgL_auxz00_4790,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_2216, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3451z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1364, default_io_bufsiz));} } } } break;
default: 
{ /* Ieee/port.scm 960 */
obj_t BgL_arg2453z00_1366;int BgL_arg2455z00_1368;
BgL_arg2453z00_1366 = BGl_symbol3451z00zz__r4_ports_6_10_1z00; 
BgL_arg2455z00_1368 = 
VECTOR_LENGTH(BgL_optz00_67); 
return 
BGl_errorz00zz__errorz00(BgL_arg2453z00_1366, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2455z00_1368));} } } } } } 
}



/* open-input-gzip-port */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t BgL_inz00_65, obj_t BgL_bufinfoz00_66)
{ AN_OBJECT;
{ /* Ieee/port.scm 960 */
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_65, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3451z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_66, default_io_bufsiz));} 
}



/* open-input-c-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_69)
{ AN_OBJECT;
{ /* Ieee/port.scm 967 */
return 
bgl_open_input_c_string(BgL_stringz00_69);} 
}



/* _open-input-c-string */
obj_t BGl__openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2674, obj_t BgL_stringz00_2675)
{ AN_OBJECT;
{ /* Ieee/port.scm 967 */
{ /* Ieee/port.scm 968 */
char * BgL_stringz00_3325;
{ /* Ieee/port.scm 968 */
obj_t BgL_auxz00_4804;
if(
STRINGP(BgL_stringz00_2675))
{ /* Ieee/port.scm 968 */
BgL_auxz00_4804 = BgL_stringz00_2675
; }  else 
{ 
obj_t BgL_auxz00_4807;
BgL_auxz00_4807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)42319)), BGl_string3454z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2675); 
FAILURE(BgL_auxz00_4807,BFALSE,BFALSE);} 
BgL_stringz00_3325 = 
BSTRING_TO_STRING(BgL_auxz00_4804); } 
return 
bgl_open_input_c_string(BgL_stringz00_3325);} } 
}



/* reopen-input-c-string */
BGL_EXPORTED_DEF obj_t BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_70, char * BgL_stringz00_71)
{ AN_OBJECT;
{ /* Ieee/port.scm 973 */
return 
bgl_reopen_input_c_string(BgL_portz00_70, BgL_stringz00_71);} 
}



/* _reopen-input-c-string */
obj_t BGl__reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2676, obj_t BgL_portz00_2677, obj_t BgL_stringz00_2678)
{ AN_OBJECT;
{ /* Ieee/port.scm 973 */
{ /* Ieee/port.scm 974 */
obj_t BgL_portz00_3326;char * BgL_stringz00_3327;
if(
INPUT_PORTP(BgL_portz00_2677))
{ /* Ieee/port.scm 974 */
BgL_portz00_3326 = BgL_portz00_2677; }  else 
{ 
obj_t BgL_auxz00_4816;
BgL_auxz00_4816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)42639)), BGl_string3456z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2677); 
FAILURE(BgL_auxz00_4816,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 974 */
obj_t BgL_auxz00_4820;
if(
STRINGP(BgL_stringz00_2678))
{ /* Ieee/port.scm 974 */
BgL_auxz00_4820 = BgL_stringz00_2678
; }  else 
{ 
obj_t BgL_auxz00_4823;
BgL_auxz00_4823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)42639)), BGl_string3456z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2678); 
FAILURE(BgL_auxz00_4823,BFALSE,BFALSE);} 
BgL_stringz00_3327 = 
BSTRING_TO_STRING(BgL_auxz00_4820); } 
return 
bgl_reopen_input_c_string(BgL_portz00_3326, BgL_stringz00_3327);} } 
}



/* input-port-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_72, long BgL_timeoutz00_73)
{ AN_OBJECT;
{ /* Ieee/port.scm 979 */
return 
BBOOL(
bgl_input_port_timeout_set(BgL_portz00_72, BgL_timeoutz00_73));} 
}



/* _input-port-timeout-set! */
obj_t BGl__inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2679, obj_t BgL_portz00_2680, obj_t BgL_timeoutz00_2681)
{ AN_OBJECT;
{ /* Ieee/port.scm 979 */
{ /* Ieee/port.scm 980 */
obj_t BgL_portz00_3328;long BgL_timeoutz00_3329;
if(
INPUT_PORTP(BgL_portz00_2680))
{ /* Ieee/port.scm 980 */
BgL_portz00_3328 = BgL_portz00_2680; }  else 
{ 
obj_t BgL_auxz00_4833;
BgL_auxz00_4833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)42975)), BGl_string3457z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2680); 
FAILURE(BgL_auxz00_4833,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 980 */
obj_t BgL_auxz00_4837;
if(
INTEGERP(BgL_timeoutz00_2681))
{ /* Ieee/port.scm 980 */
BgL_auxz00_4837 = BgL_timeoutz00_2681
; }  else 
{ 
obj_t BgL_auxz00_4840;
BgL_auxz00_4840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)42975)), BGl_string3457z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_2681); 
FAILURE(BgL_auxz00_4840,BFALSE,BFALSE);} 
BgL_timeoutz00_3329 = 
(long)CINT(BgL_auxz00_4837); } 
return 
BBOOL(
bgl_input_port_timeout_set(BgL_portz00_3328, BgL_timeoutz00_3329));} } 
}



/* _open-output-file */
obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_77, obj_t BgL_optz00_76)
{ AN_OBJECT;
{ /* Ieee/port.scm 985 */
{ /* Ieee/port.scm 985 */
obj_t BgL_g2233z00_1370;
BgL_g2233z00_1370 = 
VECTOR_REF(BgL_optz00_76,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 985 */
int BgL_aux2235z00_1372;
BgL_aux2235z00_1372 = 
VECTOR_LENGTH(BgL_optz00_76); 
switch( 
(long)(BgL_aux2235z00_1372)) { case ((long)1) : 

{ /* Ieee/port.scm 985 */

{ /* Ieee/port.scm 985 */
obj_t BgL_arg2457z00_1375;
BgL_arg2457z00_1375 = 
VECTOR_REF(BgL_optz00_76,
(int)(((long)0))); 
{ /* Ieee/port.scm 985 */
obj_t BgL_stringz00_2220;
if(
STRINGP(BgL_arg2457z00_1375))
{ /* Ieee/port.scm 985 */
BgL_stringz00_2220 = BgL_arg2457z00_1375; }  else 
{ 
obj_t BgL_auxz00_4854;
BgL_auxz00_4854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)43239)), BGl_string3458z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2457z00_1375); 
FAILURE(BgL_auxz00_4854,BFALSE,BFALSE);} 
return 
bgl_open_output_file(BgL_stringz00_2220, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 985 */
obj_t BgL_bufinfoz00_1376;
BgL_bufinfoz00_1376 = 
VECTOR_REF(BgL_optz00_76,
(int)(((long)1))); 
{ /* Ieee/port.scm 985 */

{ /* Ieee/port.scm 985 */
obj_t BgL_arg2458z00_1377;
BgL_arg2458z00_1377 = 
VECTOR_REF(BgL_optz00_76,
(int)(((long)0))); 
{ /* Ieee/port.scm 985 */
obj_t BgL_stringz00_2223;
if(
STRINGP(BgL_arg2458z00_1377))
{ /* Ieee/port.scm 985 */
BgL_stringz00_2223 = BgL_arg2458z00_1377; }  else 
{ 
obj_t BgL_auxz00_4866;
BgL_auxz00_4866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)43239)), BGl_string3458z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2458z00_1377); 
FAILURE(BgL_auxz00_4866,BFALSE,BFALSE);} 
return 
bgl_open_output_file(BgL_stringz00_2223, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1376, default_io_bufsiz));} } } } break;
default: 
{ /* Ieee/port.scm 985 */
obj_t BgL_arg2459z00_1378;int BgL_arg2461z00_1380;
BgL_arg2459z00_1378 = BGl_symbol3326z00zz__r4_ports_6_10_1z00; 
BgL_arg2461z00_1380 = 
VECTOR_LENGTH(BgL_optz00_76); 
return 
BGl_errorz00zz__errorz00(BgL_arg2459z00_1378, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2461z00_1380));} } } } } } 
}



/* open-output-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_74, obj_t BgL_bufinfoz00_75)
{ AN_OBJECT;
{ /* Ieee/port.scm 985 */
return 
bgl_open_output_file(BgL_stringz00_74, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3326z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_75, default_io_bufsiz));} 
}



/* _append-output-file */
obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_81, obj_t BgL_optz00_80)
{ AN_OBJECT;
{ /* Ieee/port.scm 992 */
{ /* Ieee/port.scm 992 */
obj_t BgL_g2236z00_1382;
BgL_g2236z00_1382 = 
VECTOR_REF(BgL_optz00_80,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 992 */
int BgL_aux2238z00_1384;
BgL_aux2238z00_1384 = 
VECTOR_LENGTH(BgL_optz00_80); 
switch( 
(long)(BgL_aux2238z00_1384)) { case ((long)1) : 

{ /* Ieee/port.scm 992 */

{ /* Ieee/port.scm 992 */
obj_t BgL_arg2465z00_1387;
BgL_arg2465z00_1387 = 
VECTOR_REF(BgL_optz00_80,
(int)(((long)0))); 
{ /* Ieee/port.scm 992 */
obj_t BgL_stringz00_2227;
if(
STRINGP(BgL_arg2465z00_1387))
{ /* Ieee/port.scm 992 */
BgL_stringz00_2227 = BgL_arg2465z00_1387; }  else 
{ 
obj_t BgL_auxz00_4886;
BgL_auxz00_4886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)43639)), BGl_string3459z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2465z00_1387); 
FAILURE(BgL_auxz00_4886,BFALSE,BFALSE);} 
return 
bgl_append_output_file(BgL_stringz00_2227, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BTRUE, default_io_bufsiz));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 992 */
obj_t BgL_bufinfoz00_1388;
BgL_bufinfoz00_1388 = 
VECTOR_REF(BgL_optz00_80,
(int)(((long)1))); 
{ /* Ieee/port.scm 992 */

{ /* Ieee/port.scm 992 */
obj_t BgL_arg2467z00_1389;
BgL_arg2467z00_1389 = 
VECTOR_REF(BgL_optz00_80,
(int)(((long)0))); 
{ /* Ieee/port.scm 992 */
obj_t BgL_stringz00_2230;
if(
STRINGP(BgL_arg2467z00_1389))
{ /* Ieee/port.scm 992 */
BgL_stringz00_2230 = BgL_arg2467z00_1389; }  else 
{ 
obj_t BgL_auxz00_4898;
BgL_auxz00_4898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)43639)), BGl_string3459z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_arg2467z00_1389); 
FAILURE(BgL_auxz00_4898,BFALSE,BFALSE);} 
return 
bgl_append_output_file(BgL_stringz00_2230, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1388, default_io_bufsiz));} } } } break;
default: 
{ /* Ieee/port.scm 992 */
obj_t BgL_arg2469z00_1390;int BgL_arg2471z00_1392;
BgL_arg2469z00_1390 = BGl_symbol3332z00zz__r4_ports_6_10_1z00; 
BgL_arg2471z00_1392 = 
VECTOR_LENGTH(BgL_optz00_80); 
return 
BGl_errorz00zz__errorz00(BgL_arg2469z00_1390, BGl_string3433z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2471z00_1392));} } } } } } 
}



/* append-output-file */
BGL_EXPORTED_DEF obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_78, obj_t BgL_bufinfoz00_79)
{ AN_OBJECT;
{ /* Ieee/port.scm 992 */
return 
bgl_append_output_file(BgL_stringz00_78, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_79, default_io_bufsiz));} 
}



/* _open-output-string */
obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_84, obj_t BgL_optz00_83)
{ AN_OBJECT;
{ /* Ieee/port.scm 999 */
{ /* Ieee/port.scm 999 */

{ 

{ /* Ieee/port.scm 999 */
int BgL_aux2240z00_1395;
BgL_aux2240z00_1395 = 
VECTOR_LENGTH(BgL_optz00_83); 
switch( 
(long)(BgL_aux2240z00_1395)) { case ((long)0) : 

{ /* Ieee/port.scm 999 */

return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128))));} break;case ((long)1) : 

{ /* Ieee/port.scm 999 */
obj_t BgL_bufinfoz00_1398;
BgL_bufinfoz00_1398 = 
VECTOR_REF(BgL_optz00_83,
(int)(((long)0))); 
{ /* Ieee/port.scm 999 */

return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1398, 
(int)(((long)128))));} } break;
default: 
{ /* Ieee/port.scm 999 */
obj_t BgL_arg2476z00_1399;int BgL_arg2478z00_1401;
BgL_arg2476z00_1399 = BGl_symbol3460z00zz__r4_ports_6_10_1z00; 
BgL_arg2478z00_1401 = 
VECTOR_LENGTH(BgL_optz00_83); 
return 
BGl_errorz00zz__errorz00(BgL_arg2476z00_1399, BGl_string3462z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2478z00_1401));} } } } } } 
}



/* open-output-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_bufinfoz00_82)
{ AN_OBJECT;
{ /* Ieee/port.scm 999 */
return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_82, 
(int)(((long)128))));} 
}



/* _open-output-procedure */
obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_90, obj_t BgL_optz00_89)
{ AN_OBJECT;
{ /* Ieee/port.scm 1006 */
{ /* Ieee/port.scm 1006 */
obj_t BgL_g2241z00_1403;
BgL_g2241z00_1403 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)0))); 
{ 

{ /* Ieee/port.scm 1006 */
int BgL_aux2243z00_1405;
BgL_aux2243z00_1405 = 
VECTOR_LENGTH(BgL_optz00_89); 
switch( 
(long)(BgL_aux2243z00_1405)) { case ((long)1) : 

{ /* Ieee/port.scm 1006 */

{ /* Ieee/port.scm 1006 */
obj_t BgL_arg2480z00_1410;
BgL_arg2480z00_1410 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)0))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_auxz00_4933;
if(
PROCEDUREP(BgL_arg2480z00_1410))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4933 = BgL_arg2480z00_1410
; }  else 
{ 
obj_t BgL_auxz00_4936;
BgL_auxz00_4936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2480z00_1410); 
FAILURE(BgL_auxz00_4936,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_4933, BGl_proc3466z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc3467z00zz__r4_ports_6_10_1z00);} } } break;case ((long)2) : 

{ /* Ieee/port.scm 1006 */
obj_t BgL_flushz00_1415;
BgL_flushz00_1415 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)1))); 
{ /* Ieee/port.scm 1006 */

{ /* Ieee/port.scm 1006 */
obj_t BgL_arg2483z00_1418;
BgL_arg2483z00_1418 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)0))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_auxz00_4952;obj_t BgL_auxz00_4945;
if(
PROCEDUREP(BgL_flushz00_1415))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4952 = BgL_flushz00_1415
; }  else 
{ 
obj_t BgL_auxz00_4955;
BgL_auxz00_4955 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_flushz00_1415); 
FAILURE(BgL_auxz00_4955,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_arg2483z00_1418))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4945 = BgL_arg2483z00_1418
; }  else 
{ 
obj_t BgL_auxz00_4948;
BgL_auxz00_4948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2483z00_1418); 
FAILURE(BgL_auxz00_4948,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_4945, BgL_auxz00_4952, BTRUE, BGl_proc3469z00zz__r4_ports_6_10_1z00);} } } } break;case ((long)3) : 

{ /* Ieee/port.scm 1006 */
obj_t BgL_flushz00_1421;
BgL_flushz00_1421 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)1))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_bufinfoz00_1422;
BgL_bufinfoz00_1422 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)2))); 
{ /* Ieee/port.scm 1006 */

{ /* Ieee/port.scm 1006 */
obj_t BgL_arg2485z00_1424;
BgL_arg2485z00_1424 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)0))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_auxz00_4973;obj_t BgL_auxz00_4966;
if(
PROCEDUREP(BgL_flushz00_1421))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4973 = BgL_flushz00_1421
; }  else 
{ 
obj_t BgL_auxz00_4976;
BgL_auxz00_4976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_flushz00_1421); 
FAILURE(BgL_auxz00_4976,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_arg2485z00_1424))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4966 = BgL_arg2485z00_1424
; }  else 
{ 
obj_t BgL_auxz00_4969;
BgL_auxz00_4969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2485z00_1424); 
FAILURE(BgL_auxz00_4969,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_4966, BgL_auxz00_4973, BgL_bufinfoz00_1422, BGl_proc3470z00zz__r4_ports_6_10_1z00);} } } } } break;case ((long)4) : 

{ /* Ieee/port.scm 1006 */
obj_t BgL_flushz00_1427;
BgL_flushz00_1427 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)1))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_bufinfoz00_1428;
BgL_bufinfoz00_1428 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)2))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_closez00_1429;
BgL_closez00_1429 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)3))); 
{ /* Ieee/port.scm 1006 */

{ /* Ieee/port.scm 1006 */
obj_t BgL_arg2487z00_1430;
BgL_arg2487z00_1430 = 
VECTOR_REF(BgL_optz00_89,
(int)(((long)0))); 
{ /* Ieee/port.scm 1006 */
obj_t BgL_auxz00_5003;obj_t BgL_auxz00_4996;obj_t BgL_auxz00_4989;
if(
PROCEDUREP(BgL_closez00_1429))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_5003 = BgL_closez00_1429
; }  else 
{ 
obj_t BgL_auxz00_5006;
BgL_auxz00_5006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_closez00_1429); 
FAILURE(BgL_auxz00_5006,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_flushz00_1427))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4996 = BgL_flushz00_1427
; }  else 
{ 
obj_t BgL_auxz00_4999;
BgL_auxz00_4999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_flushz00_1427); 
FAILURE(BgL_auxz00_4999,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_arg2487z00_1430))
{ /* Ieee/port.scm 1006 */
BgL_auxz00_4989 = BgL_arg2487z00_1430
; }  else 
{ 
obj_t BgL_auxz00_4992;
BgL_auxz00_4992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)44421)), BGl_string3468z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_arg2487z00_1430); 
FAILURE(BgL_auxz00_4992,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_4989, BgL_auxz00_4996, BgL_bufinfoz00_1428, BgL_auxz00_5003);} } } } } } break;
default: 
{ /* Ieee/port.scm 1006 */
obj_t BgL_arg2488z00_1431;int BgL_arg2491z00_1433;
BgL_arg2488z00_1431 = BGl_symbol3463z00zz__r4_ports_6_10_1z00; 
BgL_arg2491z00_1433 = 
VECTOR_LENGTH(BgL_optz00_89); 
return 
BGl_errorz00zz__errorz00(BgL_arg2488z00_1431, BGl_string3465z00zz__r4_ports_6_10_1z00, 
BINT(BgL_arg2491z00_1433));} } } } } } 
}



/* close_2848 */
obj_t BGl_close_2848z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2686)
{ AN_OBJECT;
{ /* Ieee/port.scm 1010 */
return 
BBOOL(((bool_t)0));} 
}



/* close_2849 */
obj_t BGl_close_2849z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2687)
{ AN_OBJECT;
{ /* Ieee/port.scm 1010 */
return 
BBOOL(((bool_t)0));} 
}



/* close_2850 */
obj_t BGl_close_2850z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2688)
{ AN_OBJECT;
{ /* Ieee/port.scm 1010 */
return 
BBOOL(((bool_t)0));} 
}



/* flush_2851 */
obj_t BGl_flush_2851z00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2689)
{ AN_OBJECT;
{ /* Ieee/port.scm 1008 */
return 
BBOOL(((bool_t)0));} 
}



/* open-output-procedure */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_85, obj_t BgL_flushz00_86, obj_t BgL_bufinfoz00_87, obj_t BgL_closez00_88)
{ AN_OBJECT;
{ /* Ieee/port.scm 1006 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_85, 
(int)(((long)1))))
{ /* Ieee/port.scm 1017 */
bool_t BgL_testz00_5023;
if(
PROCEDURE_CORRECT_ARITYP(BgL_flushz00_86, 
(int)(((long)0))))
{ /* Ieee/port.scm 1018 */
BgL_testz00_5023 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1018 */
BgL_testz00_5023 = ((bool_t)1)
; } 
if(BgL_testz00_5023)
{ /* Ieee/port.scm 1017 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3463z00zz__r4_ports_6_10_1z00, BGl_string3471z00zz__r4_ports_6_10_1z00, BgL_flushz00_86);}  else 
{ /* Ieee/port.scm 1023 */
bool_t BgL_testz00_5028;
if(
PROCEDURE_CORRECT_ARITYP(BgL_closez00_88, 
(int)(((long)0))))
{ /* Ieee/port.scm 1024 */
BgL_testz00_5028 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1024 */
BgL_testz00_5028 = ((bool_t)1)
; } 
if(BgL_testz00_5028)
{ /* Ieee/port.scm 1023 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3463z00zz__r4_ports_6_10_1z00, BGl_string3472z00zz__r4_ports_6_10_1z00, BgL_flushz00_86);}  else 
{ /* Ieee/port.scm 1023 */
return 
bgl_open_output_procedure(BgL_procz00_85, BgL_flushz00_86, BgL_closez00_88, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_symbol3332z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_87, 
(int)(((long)128))));} } }  else 
{ /* Ieee/port.scm 1012 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3463z00zz__r4_ports_6_10_1z00, BGl_string3473z00zz__r4_ports_6_10_1z00, BgL_procz00_85);} } 
}



/* output-port-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_91, long BgL_timeoutz00_92)
{ AN_OBJECT;
{ /* Ieee/port.scm 1036 */
return 
BBOOL(
bgl_output_port_timeout_set(BgL_portz00_91, BgL_timeoutz00_92));} 
}



/* _output-port-timeout-set! */
obj_t BGl__outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2690, obj_t BgL_portz00_2691, obj_t BgL_timeoutz00_2692)
{ AN_OBJECT;
{ /* Ieee/port.scm 1036 */
{ /* Ieee/port.scm 1037 */
obj_t BgL_portz00_3330;long BgL_timeoutz00_3331;
if(
OUTPUT_PORTP(BgL_portz00_2691))
{ /* Ieee/port.scm 1037 */
BgL_portz00_3330 = BgL_portz00_2691; }  else 
{ 
obj_t BgL_auxz00_5041;
BgL_auxz00_5041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)45562)), BGl_string3474z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2691); 
FAILURE(BgL_auxz00_5041,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1037 */
obj_t BgL_auxz00_5045;
if(
INTEGERP(BgL_timeoutz00_2692))
{ /* Ieee/port.scm 1037 */
BgL_auxz00_5045 = BgL_timeoutz00_2692
; }  else 
{ 
obj_t BgL_auxz00_5048;
BgL_auxz00_5048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)45562)), BGl_string3474z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_2692); 
FAILURE(BgL_auxz00_5048,BFALSE,BFALSE);} 
BgL_timeoutz00_3331 = 
(long)CINT(BgL_auxz00_5045); } 
return 
BBOOL(
bgl_output_port_timeout_set(BgL_portz00_3330, BgL_timeoutz00_3331));} } 
}



/* closed-input-port? */
BGL_EXPORTED_DEF bool_t BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_93)
{ AN_OBJECT;
{ /* Ieee/port.scm 1042 */
return 
INPUT_PORT_CLOSEP(BgL_portz00_93);} 
}



/* _closed-input-port? */
obj_t BGl__closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2693, obj_t BgL_portz00_2694)
{ AN_OBJECT;
{ /* Ieee/port.scm 1042 */
{ /* Ieee/port.scm 1043 */
bool_t BgL_auxz00_5056;
{ /* Ieee/port.scm 1043 */
obj_t BgL_portz00_3332;
if(
INPUT_PORTP(BgL_portz00_2694))
{ /* Ieee/port.scm 1043 */
BgL_portz00_3332 = BgL_portz00_2694; }  else 
{ 
obj_t BgL_auxz00_5059;
BgL_auxz00_5059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)45871)), BGl_string3475z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2694); 
FAILURE(BgL_auxz00_5059,BFALSE,BFALSE);} 
BgL_auxz00_5056 = 
INPUT_PORT_CLOSEP(BgL_portz00_3332); } 
return 
BBOOL(BgL_auxz00_5056);} } 
}



/* close-input-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_94)
{ AN_OBJECT;
{ /* Ieee/port.scm 1048 */
return 
bgl_close_input_port(BgL_portz00_94);} 
}



/* _close-input-port */
obj_t BGl__closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2695, obj_t BgL_portz00_2696)
{ AN_OBJECT;
{ /* Ieee/port.scm 1048 */
{ /* Ieee/port.scm 1049 */
obj_t BgL_portz00_3333;
if(
INPUT_PORTP(BgL_portz00_2696))
{ /* Ieee/port.scm 1049 */
BgL_portz00_3333 = BgL_portz00_2696; }  else 
{ 
obj_t BgL_auxz00_5068;
BgL_auxz00_5068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)46165)), BGl_string3476z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2696); 
FAILURE(BgL_auxz00_5068,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_3333);} } 
}



/* get-output-string */
BGL_EXPORTED_DEF obj_t BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_95)
{ AN_OBJECT;
{ /* Ieee/port.scm 1054 */
return 
get_output_string(BgL_portz00_95);} 
}



/* _get-output-string */
obj_t BGl__getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2697, obj_t BgL_portz00_2698)
{ AN_OBJECT;
{ /* Ieee/port.scm 1054 */
{ /* Ieee/port.scm 1055 */
obj_t BgL_portz00_3334;
if(
OUTPUT_PORTP(BgL_portz00_2698))
{ /* Ieee/port.scm 1055 */
BgL_portz00_3334 = BgL_portz00_2698; }  else 
{ 
obj_t BgL_auxz00_5076;
BgL_auxz00_5076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)46457)), BGl_string3477z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2698); 
FAILURE(BgL_auxz00_5076,BFALSE,BFALSE);} 
return 
get_output_string(BgL_portz00_3334);} } 
}



/* close-output-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_96)
{ AN_OBJECT;
{ /* Ieee/port.scm 1060 */
return 
bgl_close_output_port(BgL_portz00_96);} 
}



/* _close-output-port */
obj_t BGl__closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2699, obj_t BgL_portz00_2700)
{ AN_OBJECT;
{ /* Ieee/port.scm 1060 */
{ /* Ieee/port.scm 1061 */
obj_t BgL_portz00_3335;
if(
OUTPUT_PORTP(BgL_portz00_2700))
{ /* Ieee/port.scm 1061 */
BgL_portz00_3335 = BgL_portz00_2700; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)46751)), BGl_string3478z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2700); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_3335);} } 
}



/* flush-output-port */
BGL_EXPORTED_DEF obj_t BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_97)
{ AN_OBJECT;
{ /* Ieee/port.scm 1066 */
return 
FLUSH_OUTPUT_PORT(BgL_portz00_97);} 
}



/* _flush-output-port */
obj_t BGl__flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2701, obj_t BgL_portz00_2702)
{ AN_OBJECT;
{ /* Ieee/port.scm 1066 */
{ /* Ieee/port.scm 1067 */
obj_t BgL_portz00_3336;
if(
OUTPUT_PORTP(BgL_portz00_2702))
{ /* Ieee/port.scm 1067 */
BgL_portz00_3336 = BgL_portz00_2702; }  else 
{ 
obj_t BgL_auxz00_5092;
BgL_auxz00_5092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)47045)), BGl_string3479z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2702); 
FAILURE(BgL_auxz00_5092,BFALSE,BFALSE);} 
return 
FLUSH_OUTPUT_PORT(BgL_portz00_3336);} } 
}



/* reset-output-port */
BGL_EXPORTED_DEF obj_t BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_98)
{ AN_OBJECT;
{ /* Ieee/port.scm 1072 */
if(
BGL_OUTPUT_STRING_PORTP(BgL_portz00_98))
{ /* Ieee/port.scm 1073 */
return 
bgl_reset_output_string_port(BgL_portz00_98);}  else 
{ /* Ieee/port.scm 1073 */
return 
FLUSH_OUTPUT_PORT(BgL_portz00_98);} } 
}



/* _reset-output-port */
obj_t BGl__resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2703, obj_t BgL_portz00_2704)
{ AN_OBJECT;
{ /* Ieee/port.scm 1072 */
{ /* Ieee/port.scm 1073 */
obj_t BgL_portz00_3337;
if(
OUTPUT_PORTP(BgL_portz00_2704))
{ /* Ieee/port.scm 1073 */
BgL_portz00_3337 = BgL_portz00_2704; }  else 
{ 
obj_t BgL_auxz00_5103;
BgL_auxz00_5103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)47339)), BGl_string3480z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2704); 
FAILURE(BgL_auxz00_5103,BFALSE,BFALSE);} 
if(
BGL_OUTPUT_STRING_PORTP(BgL_portz00_3337))
{ /* Ieee/port.scm 1073 */
return 
bgl_reset_output_string_port(BgL_portz00_3337);}  else 
{ /* Ieee/port.scm 1073 */
return 
FLUSH_OUTPUT_PORT(BgL_portz00_3337);} } } 
}



/* reset-eof */
BGL_EXPORTED_DEF bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_99)
{ AN_OBJECT;
{ /* Ieee/port.scm 1080 */
return 
reset_eof(BgL_portz00_99);} 
}



/* _reset-eof */
obj_t BGl__resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2705, obj_t BgL_portz00_2706)
{ AN_OBJECT;
{ /* Ieee/port.scm 1080 */
{ /* Ieee/port.scm 1081 */
bool_t BgL_auxz00_5112;
{ /* Ieee/port.scm 1081 */
obj_t BgL_portz00_3338;
if(
INPUT_PORTP(BgL_portz00_2706))
{ /* Ieee/port.scm 1081 */
BgL_portz00_3338 = BgL_portz00_2706; }  else 
{ 
obj_t BgL_auxz00_5115;
BgL_auxz00_5115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)47704)), BGl_string3481z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2706); 
FAILURE(BgL_auxz00_5115,BFALSE,BFALSE);} 
BgL_auxz00_5112 = 
reset_eof(BgL_portz00_3338); } 
return 
BBOOL(BgL_auxz00_5112);} } 
}



/* set-input-port-position! */
BGL_EXPORTED_DEF obj_t BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_100, long BgL_posz00_101)
{ AN_OBJECT;
{ /* Ieee/port.scm 1086 */
if(
CBOOL(
bgl_input_port_seek(BgL_portz00_100, BgL_posz00_101)))
{ /* Ieee/port.scm 1087 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1087 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3482z00zz__r4_ports_6_10_1z00, BGl_string3484z00zz__r4_ports_6_10_1z00, BgL_portz00_100);} } 
}



/* _set-input-port-position! */
obj_t BGl__setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2707, obj_t BgL_portz00_2708, obj_t BgL_posz00_2709)
{ AN_OBJECT;
{ /* Ieee/port.scm 1086 */
{ /* Ieee/port.scm 1087 */
obj_t BgL_portz00_3339;long BgL_posz00_3340;
if(
INPUT_PORTP(BgL_portz00_2708))
{ /* Ieee/port.scm 1087 */
BgL_portz00_3339 = BgL_portz00_2708; }  else 
{ 
obj_t BgL_auxz00_5127;
BgL_auxz00_5127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)48019)), BGl_string3485z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2708); 
FAILURE(BgL_auxz00_5127,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1087 */
obj_t BgL_auxz00_5131;
if(
INTEGERP(BgL_posz00_2709))
{ /* Ieee/port.scm 1087 */
BgL_auxz00_5131 = BgL_posz00_2709
; }  else 
{ 
obj_t BgL_auxz00_5134;
BgL_auxz00_5134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)48019)), BGl_string3485z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_posz00_2709); 
FAILURE(BgL_auxz00_5134,BFALSE,BFALSE);} 
BgL_posz00_3340 = 
(long)CINT(BgL_auxz00_5131); } 
if(
CBOOL(
bgl_input_port_seek(BgL_portz00_3339, BgL_posz00_3340)))
{ /* Ieee/port.scm 1087 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1087 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3482z00zz__r4_ports_6_10_1z00, BGl_string3484z00zz__r4_ports_6_10_1z00, BgL_portz00_3339);} } } 
}



/* input-port-position */
BGL_EXPORTED_DEF long BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_102)
{ AN_OBJECT;
{ /* Ieee/port.scm 1096 */
return 
INPUT_PORT_FILEPOS(BgL_portz00_102);} 
}



/* _input-port-position */
obj_t BGl__inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2710, obj_t BgL_portz00_2711)
{ AN_OBJECT;
{ /* Ieee/port.scm 1096 */
{ /* Ieee/port.scm 1097 */
long BgL_auxz00_5144;
{ /* Ieee/port.scm 1097 */
obj_t BgL_portz00_3341;
if(
INPUT_PORTP(BgL_portz00_2711))
{ /* Ieee/port.scm 1097 */
BgL_portz00_3341 = BgL_portz00_2711; }  else 
{ 
obj_t BgL_auxz00_5147;
BgL_auxz00_5147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)48449)), BGl_string3486z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2711); 
FAILURE(BgL_auxz00_5147,BFALSE,BFALSE);} 
BgL_auxz00_5144 = 
INPUT_PORT_FILEPOS(BgL_portz00_3341); } 
return 
BINT(BgL_auxz00_5144);} } 
}



/* input-port-fill-barrier */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_103)
{ AN_OBJECT;
{ /* Ieee/port.scm 1102 */
return 
BINT(
INPUT_PORT_FILLBARRIER(BgL_portz00_103));} 
}



/* _input-port-fill-barrier */
obj_t BGl__inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2712, obj_t BgL_portz00_2713)
{ AN_OBJECT;
{ /* Ieee/port.scm 1102 */
{ /* Ieee/port.scm 1103 */
obj_t BgL_portz00_3342;
if(
INPUT_PORTP(BgL_portz00_2713))
{ /* Ieee/port.scm 1103 */
BgL_portz00_3342 = BgL_portz00_2713; }  else 
{ 
obj_t BgL_auxz00_5157;
BgL_auxz00_5157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)48763)), BGl_string3487z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2713); 
FAILURE(BgL_auxz00_5157,BFALSE,BFALSE);} 
return 
BINT(
INPUT_PORT_FILLBARRIER(BgL_portz00_3342));} } 
}



/* input-port-fill-barrier-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_104, long BgL_posz00_105)
{ AN_OBJECT;
{ /* Ieee/port.scm 1108 */
INPUT_PORT_FILLBARRIER_SET(BgL_portz00_104, BgL_posz00_105); BUNSPEC; 
return 
BINT(BgL_posz00_105);} 
}



/* _input-port-fill-barrier-set! */
obj_t BGl__inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2714, obj_t BgL_portz00_2715, obj_t BgL_posz00_2716)
{ AN_OBJECT;
{ /* Ieee/port.scm 1108 */
{ /* Ieee/port.scm 1110 */
obj_t BgL_portz00_3343;long BgL_posz00_3344;
if(
INPUT_PORTP(BgL_portz00_2715))
{ /* Ieee/port.scm 1110 */
BgL_portz00_3343 = BgL_portz00_2715; }  else 
{ 
obj_t BgL_auxz00_5167;
BgL_auxz00_5167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)49142)), BGl_string3488z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2715); 
FAILURE(BgL_auxz00_5167,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1110 */
obj_t BgL_auxz00_5171;
if(
INTEGERP(BgL_posz00_2716))
{ /* Ieee/port.scm 1110 */
BgL_auxz00_5171 = BgL_posz00_2716
; }  else 
{ 
obj_t BgL_auxz00_5174;
BgL_auxz00_5174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)49142)), BGl_string3488z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_posz00_2716); 
FAILURE(BgL_auxz00_5174,BFALSE,BFALSE);} 
BgL_posz00_3344 = 
(long)CINT(BgL_auxz00_5171); } 
INPUT_PORT_FILLBARRIER_SET(BgL_portz00_3343, BgL_posz00_3344); BUNSPEC; 
return 
BINT(BgL_posz00_3344);} } 
}



/* input-port-last-token-position */
BGL_EXPORTED_DEF long BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_106)
{ AN_OBJECT;
{ /* Ieee/port.scm 1115 */
{ /* Ieee/port.scm 1116 */
long BgL_auxz00_5181;
BgL_auxz00_5181 = 
INPUT_PORT_TOKENPOS(BgL_portz00_106); 
return 
ELONG_TO_LONG(BgL_auxz00_5181);} } 
}



/* _input-port-last-token-position */
obj_t BGl__inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2717, obj_t BgL_portz00_2718)
{ AN_OBJECT;
{ /* Ieee/port.scm 1115 */
{ /* Ieee/port.scm 1116 */
long BgL_auxz00_5184;
{ /* Ieee/port.scm 1116 */
long BgL_res3540z00_3346;
{ /* Ieee/port.scm 1116 */
obj_t BgL_portz00_3345;
if(
INPUT_PORTP(BgL_portz00_2718))
{ /* Ieee/port.scm 1116 */
BgL_portz00_3345 = BgL_portz00_2718; }  else 
{ 
obj_t BgL_auxz00_5187;
BgL_auxz00_5187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)49429)), BGl_string3489z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2718); 
FAILURE(BgL_auxz00_5187,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1116 */
long BgL_auxz00_5191;
BgL_auxz00_5191 = 
INPUT_PORT_TOKENPOS(BgL_portz00_3345); 
BgL_res3540z00_3346 = 
ELONG_TO_LONG(BgL_auxz00_5191); } } 
BgL_auxz00_5184 = BgL_res3540z00_3346; } 
return 
BINT(BgL_auxz00_5184);} } 
}



/* output-port-name */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_107)
{ AN_OBJECT;
{ /* Ieee/port.scm 1121 */
return 
OUTPUT_PORT_NAME(BgL_portz00_107);} 
}



/* _output-port-name */
obj_t BGl__outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2719, obj_t BgL_portz00_2720)
{ AN_OBJECT;
{ /* Ieee/port.scm 1121 */
{ /* Ieee/port.scm 1122 */
obj_t BgL_portz00_3347;
if(
OUTPUT_PORTP(BgL_portz00_2720))
{ /* Ieee/port.scm 1122 */
BgL_portz00_3347 = BgL_portz00_2720; }  else 
{ 
obj_t BgL_auxz00_5198;
BgL_auxz00_5198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)49735)), BGl_string3490z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2720); 
FAILURE(BgL_auxz00_5198,BFALSE,BFALSE);} 
return 
OUTPUT_PORT_NAME(BgL_portz00_3347);} } 
}



/* set-output-port-position! */
BGL_EXPORTED_DEF obj_t BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_108, long BgL_posz00_109)
{ AN_OBJECT;
{ /* Ieee/port.scm 1127 */
if(
CBOOL(
bgl_output_port_seek(BgL_portz00_108, BgL_posz00_109)))
{ /* Ieee/port.scm 1128 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1128 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3491z00zz__r4_ports_6_10_1z00, BGl_string3484z00zz__r4_ports_6_10_1z00, BgL_portz00_108);} } 
}



/* _set-output-port-position! */
obj_t BGl__setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2721, obj_t BgL_portz00_2722, obj_t BgL_posz00_2723)
{ AN_OBJECT;
{ /* Ieee/port.scm 1127 */
{ /* Ieee/port.scm 1128 */
obj_t BgL_portz00_3348;long BgL_posz00_3349;
if(
OUTPUT_PORTP(BgL_portz00_2722))
{ /* Ieee/port.scm 1128 */
BgL_portz00_3348 = BgL_portz00_2722; }  else 
{ 
obj_t BgL_auxz00_5209;
BgL_auxz00_5209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)50059)), BGl_string3493z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2722); 
FAILURE(BgL_auxz00_5209,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1128 */
obj_t BgL_auxz00_5213;
if(
INTEGERP(BgL_posz00_2723))
{ /* Ieee/port.scm 1128 */
BgL_auxz00_5213 = BgL_posz00_2723
; }  else 
{ 
obj_t BgL_auxz00_5216;
BgL_auxz00_5216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)50059)), BGl_string3493z00zz__r4_ports_6_10_1z00, BGl_string3424z00zz__r4_ports_6_10_1z00, BgL_posz00_2723); 
FAILURE(BgL_auxz00_5216,BFALSE,BFALSE);} 
BgL_posz00_3349 = 
(long)CINT(BgL_auxz00_5213); } 
if(
CBOOL(
bgl_output_port_seek(BgL_portz00_3348, BgL_posz00_3349)))
{ /* Ieee/port.scm 1128 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1128 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3491z00zz__r4_ports_6_10_1z00, BGl_string3484z00zz__r4_ports_6_10_1z00, BgL_portz00_3348);} } } 
}



/* output-port-position */
BGL_EXPORTED_DEF long BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_110)
{ AN_OBJECT;
{ /* Ieee/port.scm 1137 */
return 
BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_110);} 
}



/* _output-port-position */
obj_t BGl__outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2724, obj_t BgL_portz00_2725)
{ AN_OBJECT;
{ /* Ieee/port.scm 1137 */
{ /* Ieee/port.scm 1138 */
long BgL_auxz00_5226;
{ /* Ieee/port.scm 1138 */
obj_t BgL_portz00_3350;
if(
OUTPUT_PORTP(BgL_portz00_2725))
{ /* Ieee/port.scm 1138 */
BgL_portz00_3350 = BgL_portz00_2725; }  else 
{ 
obj_t BgL_auxz00_5229;
BgL_auxz00_5229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)50492)), BGl_string3494z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2725); 
FAILURE(BgL_auxz00_5229,BFALSE,BFALSE);} 
BgL_auxz00_5226 = 
BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_3350); } 
return 
BINT(BgL_auxz00_5226);} } 
}



/* input-port-name */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_111)
{ AN_OBJECT;
{ /* Ieee/port.scm 1143 */
return 
INPUT_PORT_NAME(BgL_portz00_111);} 
}



/* _input-port-name */
obj_t BGl__inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2726, obj_t BgL_portz00_2727)
{ AN_OBJECT;
{ /* Ieee/port.scm 1143 */
{ /* Ieee/port.scm 1144 */
obj_t BgL_portz00_3351;
if(
INPUT_PORTP(BgL_portz00_2727))
{ /* Ieee/port.scm 1144 */
BgL_portz00_3351 = BgL_portz00_2727; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)50787)), BGl_string3495z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2727); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
return 
INPUT_PORT_NAME(BgL_portz00_3351);} } 
}



/* output-port-close-hook */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_112)
{ AN_OBJECT;
{ /* Ieee/port.scm 1149 */
return 
PORT_CHOOK(BgL_portz00_112);} 
}



/* _output-port-close-hook */
obj_t BGl__outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2728, obj_t BgL_portz00_2729)
{ AN_OBJECT;
{ /* Ieee/port.scm 1149 */
{ /* Ieee/port.scm 1150 */
obj_t BgL_portz00_3352;
if(
OUTPUT_PORTP(BgL_portz00_2729))
{ /* Ieee/port.scm 1150 */
BgL_portz00_3352 = BgL_portz00_2729; }  else 
{ 
obj_t BgL_auxz00_5246;
BgL_auxz00_5246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)51084)), BGl_string3496z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2729); 
FAILURE(BgL_auxz00_5246,BFALSE,BFALSE);} 
return 
PORT_CHOOK(BgL_portz00_3352);} } 
}



/* output-port-close-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_113, obj_t BgL_procz00_114)
{ AN_OBJECT;
{ /* Ieee/port.scm 1155 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_114, 
(int)(((long)1))))
{ /* Ieee/port.scm 1156 */
PORT_CHOOK_SET(BgL_portz00_113, BgL_procz00_114); BUNSPEC; 
return BgL_procz00_114;}  else 
{ /* Ieee/port.scm 1156 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3497z00zz__r4_ports_6_10_1z00, BGl_string3499z00zz__r4_ports_6_10_1z00, BgL_procz00_114);} } 
}



/* _output-port-close-hook-set! */
obj_t BGl__outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2730, obj_t BgL_portz00_2731, obj_t BgL_procz00_2732)
{ AN_OBJECT;
{ /* Ieee/port.scm 1155 */
{ /* Ieee/port.scm 1156 */
obj_t BgL_auxz00_5263;obj_t BgL_auxz00_5256;
if(
PROCEDUREP(BgL_procz00_2732))
{ /* Ieee/port.scm 1156 */
BgL_auxz00_5263 = BgL_procz00_2732
; }  else 
{ 
obj_t BgL_auxz00_5266;
BgL_auxz00_5266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)51386)), BGl_string3500z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2732); 
FAILURE(BgL_auxz00_5266,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_2731))
{ /* Ieee/port.scm 1156 */
BgL_auxz00_5256 = BgL_portz00_2731
; }  else 
{ 
obj_t BgL_auxz00_5259;
BgL_auxz00_5259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)51386)), BGl_string3500z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2731); 
FAILURE(BgL_auxz00_5259,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5256, BgL_auxz00_5263);} } 
}



/* output-port-flush-hook */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_115)
{ AN_OBJECT;
{ /* Ieee/port.scm 1168 */
return 
BGL_OUTPUT_PORT_FHOOK(BgL_portz00_115);} 
}



/* _output-port-flush-hook */
obj_t BGl__outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2733, obj_t BgL_portz00_2734)
{ AN_OBJECT;
{ /* Ieee/port.scm 1168 */
{ /* Ieee/port.scm 1169 */
obj_t BgL_portz00_3353;
if(
OUTPUT_PORTP(BgL_portz00_2734))
{ /* Ieee/port.scm 1169 */
BgL_portz00_3353 = BgL_portz00_2734; }  else 
{ 
obj_t BgL_auxz00_5274;
BgL_auxz00_5274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)51889)), BGl_string3501z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2734); 
FAILURE(BgL_auxz00_5274,BFALSE,BFALSE);} 
return 
BGL_OUTPUT_PORT_FHOOK(BgL_portz00_3353);} } 
}



/* output-port-flush-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_116, obj_t BgL_procz00_117)
{ AN_OBJECT;
{ /* Ieee/port.scm 1174 */
{ /* Ieee/port.scm 1175 */
bool_t BgL_testz00_5279;
if(
PROCEDUREP(BgL_procz00_117))
{ /* Ieee/port.scm 1175 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_117, 
(int)(((long)2))))
{ /* Ieee/port.scm 1175 */
BgL_testz00_5279 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1175 */
BgL_testz00_5279 = ((bool_t)1)
; } }  else 
{ /* Ieee/port.scm 1175 */
BgL_testz00_5279 = ((bool_t)0)
; } 
if(BgL_testz00_5279)
{ /* Ieee/port.scm 1175 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3502z00zz__r4_ports_6_10_1z00, BGl_string3499z00zz__r4_ports_6_10_1z00, BgL_procz00_117);}  else 
{ /* Ieee/port.scm 1175 */
BGL_OUTPUT_PORT_FHOOK_SET(BgL_portz00_116, BgL_procz00_117); BUNSPEC; 
return BgL_procz00_117;} } } 
}



/* _output-port-flush-hook-set! */
obj_t BGl__outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2735, obj_t BgL_portz00_2736, obj_t BgL_procz00_2737)
{ AN_OBJECT;
{ /* Ieee/port.scm 1174 */
{ /* Ieee/port.scm 1175 */
obj_t BgL_auxz00_5287;
if(
OUTPUT_PORTP(BgL_portz00_2736))
{ /* Ieee/port.scm 1175 */
BgL_auxz00_5287 = BgL_portz00_2736
; }  else 
{ 
obj_t BgL_auxz00_5290;
BgL_auxz00_5290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)52190)), BGl_string3504z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2736); 
FAILURE(BgL_auxz00_5290,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5287, BgL_procz00_2737);} } 
}



/* output-port-flush-buffer */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_118)
{ AN_OBJECT;
{ /* Ieee/port.scm 1187 */
return 
BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_118);} 
}



/* _output-port-flush-buffer */
obj_t BGl__outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2738, obj_t BgL_portz00_2739)
{ AN_OBJECT;
{ /* Ieee/port.scm 1187 */
{ /* Ieee/port.scm 1188 */
obj_t BgL_portz00_3354;
if(
OUTPUT_PORTP(BgL_portz00_2739))
{ /* Ieee/port.scm 1188 */
BgL_portz00_3354 = BgL_portz00_2739; }  else 
{ 
obj_t BgL_auxz00_5298;
BgL_auxz00_5298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)52694)), BGl_string3505z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2739); 
FAILURE(BgL_auxz00_5298,BFALSE,BFALSE);} 
return 
BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_3354);} } 
}



/* output-port-flush-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_119, obj_t BgL_bufz00_120)
{ AN_OBJECT;
{ /* Ieee/port.scm 1193 */
BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_119, BgL_bufz00_120); BUNSPEC; 
return BgL_bufz00_120;} 
}



/* _output-port-flush-buffer-set! */
obj_t BGl__outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2740, obj_t BgL_portz00_2741, obj_t BgL_bufz00_2742)
{ AN_OBJECT;
{ /* Ieee/port.scm 1193 */
{ /* Ieee/port.scm 1195 */
obj_t BgL_portz00_3355;
if(
OUTPUT_PORTP(BgL_portz00_2741))
{ /* Ieee/port.scm 1195 */
BgL_portz00_3355 = BgL_portz00_2741; }  else 
{ 
obj_t BgL_auxz00_5306;
BgL_auxz00_5306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)53047)), BGl_string3506z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2741); 
FAILURE(BgL_auxz00_5306,BFALSE,BFALSE);} 
BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_3355, BgL_bufz00_2742); BUNSPEC; 
return BgL_bufz00_2742;} } 
}



/* input-port-close-hook */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_121)
{ AN_OBJECT;
{ /* Ieee/port.scm 1200 */
return 
PORT_CHOOK(BgL_portz00_121);} 
}



/* _input-port-close-hook */
obj_t BGl__inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2743, obj_t BgL_portz00_2744)
{ AN_OBJECT;
{ /* Ieee/port.scm 1200 */
{ /* Ieee/port.scm 1201 */
obj_t BgL_portz00_3357;
if(
INPUT_PORTP(BgL_portz00_2744))
{ /* Ieee/port.scm 1201 */
BgL_portz00_3357 = BgL_portz00_2744; }  else 
{ 
obj_t BgL_auxz00_5314;
BgL_auxz00_5314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)53322)), BGl_string3507z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2744); 
FAILURE(BgL_auxz00_5314,BFALSE,BFALSE);} 
return 
PORT_CHOOK(BgL_portz00_3357);} } 
}



/* input-port-close-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_122, obj_t BgL_procz00_123)
{ AN_OBJECT;
{ /* Ieee/port.scm 1206 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_123, 
(int)(((long)1))))
{ /* Ieee/port.scm 1207 */
PORT_CHOOK_SET(BgL_portz00_122, BgL_procz00_123); BUNSPEC; 
return BgL_procz00_123;}  else 
{ /* Ieee/port.scm 1207 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol3508z00zz__r4_ports_6_10_1z00, BGl_string3499z00zz__r4_ports_6_10_1z00, BgL_procz00_123);} } 
}



/* _input-port-close-hook-set! */
obj_t BGl__inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2745, obj_t BgL_portz00_2746, obj_t BgL_procz00_2747)
{ AN_OBJECT;
{ /* Ieee/port.scm 1206 */
{ /* Ieee/port.scm 1207 */
obj_t BgL_auxz00_5331;obj_t BgL_auxz00_5324;
if(
PROCEDUREP(BgL_procz00_2747))
{ /* Ieee/port.scm 1207 */
BgL_auxz00_5331 = BgL_procz00_2747
; }  else 
{ 
obj_t BgL_auxz00_5334;
BgL_auxz00_5334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)53622)), BGl_string3510z00zz__r4_ports_6_10_1z00, BGl_string3321z00zz__r4_ports_6_10_1z00, BgL_procz00_2747); 
FAILURE(BgL_auxz00_5334,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_2746))
{ /* Ieee/port.scm 1207 */
BgL_auxz00_5324 = BgL_portz00_2746
; }  else 
{ 
obj_t BgL_auxz00_5327;
BgL_auxz00_5327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)53622)), BGl_string3510z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2746); 
FAILURE(BgL_auxz00_5327,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5324, BgL_auxz00_5331);} } 
}



/* input-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_124)
{ AN_OBJECT;
{ /* Ieee/port.scm 1219 */
return 
BGL_INPUT_PORT_BUFFER(BgL_portz00_124);} 
}



/* _input-port-buffer */
obj_t BGl__inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2748, obj_t BgL_portz00_2749)
{ AN_OBJECT;
{ /* Ieee/port.scm 1219 */
{ /* Ieee/port.scm 1220 */
obj_t BgL_portz00_3358;
if(
INPUT_PORTP(BgL_portz00_2749))
{ /* Ieee/port.scm 1220 */
BgL_portz00_3358 = BgL_portz00_2749; }  else 
{ 
obj_t BgL_auxz00_5342;
BgL_auxz00_5342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)54118)), BGl_string3511z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2749); 
FAILURE(BgL_auxz00_5342,BFALSE,BFALSE);} 
return 
BGL_INPUT_PORT_BUFFER(BgL_portz00_3358);} } 
}



/* input-port-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_125, obj_t BgL_bufferz00_126)
{ AN_OBJECT;
{ /* Ieee/port.scm 1225 */
bgl_input_port_buffer_set(BgL_portz00_125, BgL_bufferz00_126); BUNSPEC; 
return BgL_portz00_125;} 
}



/* _input-port-buffer-set! */
obj_t BGl__inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2750, obj_t BgL_portz00_2751, obj_t BgL_bufferz00_2752)
{ AN_OBJECT;
{ /* Ieee/port.scm 1225 */
{ /* Ieee/port.scm 1226 */
obj_t BgL_portz00_3359;obj_t BgL_bufferz00_3360;
if(
INPUT_PORTP(BgL_portz00_2751))
{ /* Ieee/port.scm 1226 */
BgL_portz00_3359 = BgL_portz00_2751; }  else 
{ 
obj_t BgL_auxz00_5350;
BgL_auxz00_5350 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)54468)), BGl_string3512z00zz__r4_ports_6_10_1z00, BGl_string3324z00zz__r4_ports_6_10_1z00, BgL_portz00_2751); 
FAILURE(BgL_auxz00_5350,BFALSE,BFALSE);} 
if(
STRINGP(BgL_bufferz00_2752))
{ /* Ieee/port.scm 1226 */
BgL_bufferz00_3360 = BgL_bufferz00_2752; }  else 
{ 
obj_t BgL_auxz00_5356;
BgL_auxz00_5356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)54468)), BGl_string3512z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_bufferz00_2752); 
FAILURE(BgL_auxz00_5356,BFALSE,BFALSE);} 
bgl_input_port_buffer_set(BgL_portz00_3359, BgL_bufferz00_3360); BUNSPEC; 
return BgL_portz00_3359;} } 
}



/* output-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_127)
{ AN_OBJECT;
{ /* Ieee/port.scm 1231 */
return 
BGL_OUTPUT_PORT_BUFFER(BgL_portz00_127);} 
}



/* _output-port-buffer */
obj_t BGl__outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2753, obj_t BgL_portz00_2754)
{ AN_OBJECT;
{ /* Ieee/port.scm 1231 */
{ /* Ieee/port.scm 1232 */
obj_t BgL_portz00_3361;
if(
OUTPUT_PORTP(BgL_portz00_2754))
{ /* Ieee/port.scm 1232 */
BgL_portz00_3361 = BgL_portz00_2754; }  else 
{ 
obj_t BgL_auxz00_5364;
BgL_auxz00_5364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)54742)), BGl_string3513z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2754); 
FAILURE(BgL_auxz00_5364,BFALSE,BFALSE);} 
return 
BGL_OUTPUT_PORT_BUFFER(BgL_portz00_3361);} } 
}



/* output-port-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_128, obj_t BgL_bufferz00_129)
{ AN_OBJECT;
{ /* Ieee/port.scm 1237 */
bgl_output_port_buffer_set(BgL_portz00_128, BgL_bufferz00_129); BUNSPEC; 
return BgL_portz00_128;} 
}



/* _output-port-buffer-set! */
obj_t BGl__outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2755, obj_t BgL_portz00_2756, obj_t BgL_bufferz00_2757)
{ AN_OBJECT;
{ /* Ieee/port.scm 1237 */
{ /* Ieee/port.scm 1238 */
obj_t BgL_portz00_3362;obj_t BgL_bufferz00_3363;
if(
OUTPUT_PORTP(BgL_portz00_2756))
{ /* Ieee/port.scm 1238 */
BgL_portz00_3362 = BgL_portz00_2756; }  else 
{ 
obj_t BgL_auxz00_5372;
BgL_auxz00_5372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55095)), BGl_string3514z00zz__r4_ports_6_10_1z00, BGl_string3336z00zz__r4_ports_6_10_1z00, BgL_portz00_2756); 
FAILURE(BgL_auxz00_5372,BFALSE,BFALSE);} 
if(
STRINGP(BgL_bufferz00_2757))
{ /* Ieee/port.scm 1238 */
BgL_bufferz00_3363 = BgL_bufferz00_2757; }  else 
{ 
obj_t BgL_auxz00_5378;
BgL_auxz00_5378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55095)), BGl_string3514z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_bufferz00_2757); 
FAILURE(BgL_auxz00_5378,BFALSE,BFALSE);} 
bgl_output_port_buffer_set(BgL_portz00_3362, BgL_bufferz00_3363); BUNSPEC; 
return BgL_portz00_3362;} } 
}



/* file-exists? */
BGL_EXPORTED_DEF bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char * BgL_namez00_130)
{ AN_OBJECT;
{ /* Ieee/port.scm 1243 */
return 
fexists(BgL_namez00_130);} 
}



/* _file-exists? */
obj_t BGl__filezd2existszf3z21zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2758, obj_t BgL_namez00_2759)
{ AN_OBJECT;
{ /* Ieee/port.scm 1243 */
{ /* Ieee/port.scm 1244 */
bool_t BgL_auxz00_5384;
{ /* Ieee/port.scm 1244 */
char * BgL_namez00_3364;
{ /* Ieee/port.scm 1244 */
obj_t BgL_auxz00_5385;
if(
STRINGP(BgL_namez00_2759))
{ /* Ieee/port.scm 1244 */
BgL_auxz00_5385 = BgL_namez00_2759
; }  else 
{ 
obj_t BgL_auxz00_5388;
BgL_auxz00_5388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55363)), BGl_string3515z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_namez00_2759); 
FAILURE(BgL_auxz00_5388,BFALSE,BFALSE);} 
BgL_namez00_3364 = 
BSTRING_TO_STRING(BgL_auxz00_5385); } 
BgL_auxz00_5384 = 
fexists(BgL_namez00_3364); } 
return 
BBOOL(BgL_auxz00_5384);} } 
}



/* file-gzip? */
BGL_EXPORTED_DEF obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t BgL_namez00_131)
{ AN_OBJECT;
{ /* Ieee/port.scm 1249 */
{ /* Ieee/port.scm 1250 */
bool_t BgL_testz00_5395;
{ /* Ieee/port.scm 1250 */
char * BgL_namez00_2248;
{ /* Ieee/port.scm 1250 */
obj_t BgL_auxz00_5396;
if(
STRINGP(BgL_namez00_131))
{ /* Ieee/port.scm 1250 */
BgL_auxz00_5396 = BgL_namez00_131
; }  else 
{ 
obj_t BgL_auxz00_5399;
BgL_auxz00_5399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55656)), BGl_string3516z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_namez00_131); 
FAILURE(BgL_auxz00_5399,BFALSE,BFALSE);} 
BgL_namez00_2248 = 
BSTRING_TO_STRING(BgL_auxz00_5396); } 
BgL_testz00_5395 = 
fexists(BgL_namez00_2248); } 
if(BgL_testz00_5395)
{ /* Ieee/port.scm 1251 */
obj_t BgL_auxz00_5405;
if(
STRINGP(BgL_namez00_131))
{ /* Ieee/port.scm 1251 */
BgL_auxz00_5405 = BgL_namez00_131
; }  else 
{ 
obj_t BgL_auxz00_5408;
BgL_auxz00_5408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55663)), BGl_string3516z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_namez00_131); 
FAILURE(BgL_auxz00_5408,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_5405, BGl_proc3517z00zz__r4_ports_6_10_1z00);}  else 
{ /* Ieee/port.scm 1250 */
return BFALSE;} } } 
}



/* _file-gzip? */
obj_t BGl__filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2762, obj_t BgL_namez00_2763)
{ AN_OBJECT;
{ /* Ieee/port.scm 1249 */
return 
BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(BgL_namez00_2763);} 
}



/* <anonymous:2510> */
obj_t BGl_zc3anonymousza32510ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2764)
{ AN_OBJECT;
{ /* Ieee/port.scm 1252 */
return 
BGl_zc3exitza32511ze3z83zz__r4_ports_6_10_1z00();} 
}



/* <exit:2511> */
obj_t BGl_zc3exitza32511ze3z83zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 1253 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2166z00_1456;
if( SET_EXIT(BgL_an_exit2166z00_1456) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2166z00_1456 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 1253 */

PUSH_EXIT(BgL_an_exit2166z00_1456, ((long)1)); 
{ /* Ieee/port.scm 1253 */
obj_t BgL_an_exitd2167z00_1457;
BgL_an_exitd2167z00_1457 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 1253 */
obj_t BgL_res2169z00_1460;
{ /* Ieee/port.scm 1253 */
obj_t BgL_err2164z00_1461;obj_t BgL_ohs2163z00_1462;
BgL_err2164z00_1461 = 
MAKE_PAIR(BFALSE, BUNSPEC); 
BgL_ohs2163z00_1462 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Ieee/port.scm 1253 */
obj_t BgL_val2170z00_1463;
BgL_val2170z00_1463 = 
BGl_zc3exitza32517ze3z83zz__r4_ports_6_10_1z00(BgL_ohs2163z00_1462, BgL_an_exitd2167z00_1457, BgL_err2164z00_1461); 
BGL_ERROR_HANDLER_SET(BgL_ohs2163z00_1462); BUNSPEC; 
if(
CBOOL(
CAR(BgL_err2164z00_1461)))
{ /* Ieee/port.scm 1253 */
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2167z00_1457, BFALSE); }  else 
{ /* Ieee/port.scm 1253 */BFALSE; } 
if(
CBOOL(
BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val2170z00_1463)))
{ /* Ieee/port.scm 1253 */
obj_t BgL_arg2515z00_1468;obj_t BgL_arg2516z00_1469;
{ /* Ieee/port.scm 1253 */
obj_t BgL_pairz00_2259;
if(
PAIRP(BgL_val2170z00_1463))
{ /* Ieee/port.scm 1253 */
BgL_pairz00_2259 = BgL_val2170z00_1463; }  else 
{ 
obj_t BgL_auxz00_5432;
BgL_auxz00_5432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55712)), BGl_string3518z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_val2170z00_1463); 
FAILURE(BgL_auxz00_5432,BFALSE,BFALSE);} 
BgL_arg2515z00_1468 = 
CAR(BgL_pairz00_2259); } 
BgL_arg2516z00_1469 = 
CDR(BgL_val2170z00_1463); 
BgL_res2169z00_1460 = 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2515z00_1468, BgL_arg2516z00_1469); }  else 
{ /* Ieee/port.scm 1253 */
BgL_res2169z00_1460 = BgL_val2170z00_1463; } } } 
POP_EXIT(); 
return BgL_res2169z00_1460;} } } 
} } 
}



/* <exit:2517> */
obj_t BGl_zc3exitza32517ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_ohs2163z00_2803, obj_t BgL_an_exitd2167z00_2802, obj_t BgL_err2164z00_2801)
{ AN_OBJECT;
{ /* Ieee/port.scm 1253 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit2171z00_1471;
if( SET_EXIT(BgL_an_exit2171z00_1471) ) { 
return 
BGL_EXIT_VALUE();
} else {
BgL_an_exit2171z00_1471 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 1253 */

PUSH_EXIT(BgL_an_exit2171z00_1471, ((long)0)); 
{ /* Ieee/port.scm 1253 */
obj_t BgL_val2172z00_1472;
{ /* Ieee/port.scm 1253 */
obj_t BgL_arg2518z00_1473;
{ /* Ieee/port.scm 1253 */
obj_t BgL_zc3anonymousza32520ze3z83_2760;
BgL_zc3anonymousza32520ze3z83_2760 = 
make_fx_procedure(BGl_zc3anonymousza32520ze3z83zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza32520ze3z83_2760, 
(int)(((long)0)), BgL_err2164z00_2801); 
PROCEDURE_SET(BgL_zc3anonymousza32520ze3z83_2760, 
(int)(((long)1)), BgL_an_exitd2167z00_2802); 
BgL_arg2518z00_1473 = 
MAKE_PAIR(BgL_zc3anonymousza32520ze3z83_2760, BgL_ohs2163z00_2803); } 
BGL_ERROR_HANDLER_SET(BgL_arg2518z00_1473); BUNSPEC; } 
{ /* Ieee/port.scm 1256 */
obj_t BgL_arg2521z00_1478;
{ /* Ieee/port.scm 1256 */
obj_t BgL_res2827z00_2255;
{ /* Ieee/port.scm 1256 */
obj_t BgL_auxz00_5452;
BgL_auxz00_5452 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2827z00_2255 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_5452); } 
BgL_arg2521z00_1478 = BgL_res2827z00_2255; } 
BgL_val2172z00_1472 = 
BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_arg2521z00_1478); } 
POP_EXIT(); 
return BgL_val2172z00_1472;} } 
} } 
}



/* <anonymous:2520> */
obj_t BGl_zc3anonymousza32520ze3z83zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2765, obj_t BgL_ez00_2768)
{ AN_OBJECT;
{ /* Ieee/port.scm 1253 */
{ /* Ieee/port.scm 1253 */
obj_t BgL_err2164z00_2766;obj_t BgL_an_exitd2167z00_2767;
BgL_err2164z00_2766 = 
PROCEDURE_REF(BgL_envz00_2765, 
(int)(((long)0))); 
BgL_an_exitd2167z00_2767 = 
PROCEDURE_REF(BgL_envz00_2765, 
(int)(((long)1))); 
{ 
obj_t BgL_ez00_1475;
BgL_ez00_1475 = BgL_ez00_2768; 
{ /* Ieee/port.scm 1253 */
obj_t BgL_pairz00_2249;
if(
PAIRP(BgL_err2164z00_2766))
{ /* Ieee/port.scm 1253 */
BgL_pairz00_2249 = BgL_err2164z00_2766; }  else 
{ 
obj_t BgL_auxz00_5463;
BgL_auxz00_5463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)55712)), BGl_string3519z00zz__r4_ports_6_10_1z00, BGl_string3309z00zz__r4_ports_6_10_1z00, BgL_err2164z00_2766); 
FAILURE(BgL_auxz00_5463,BFALSE,BFALSE);} 
SET_CAR(BgL_pairz00_2249, BTRUE); } 
SET_CDR(BgL_err2164z00_2766, BgL_ez00_1475); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd2167z00_2767, BgL_ez00_1475);} } } 
}



/* delete-file */
BGL_EXPORTED_DEF obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_132)
{ AN_OBJECT;
{ /* Ieee/port.scm 1261 */
if(
unlink(BgL_stringz00_132))
{ /* Ieee/port.scm 1262 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1262 */
return BTRUE;} } 
}



/* _delete-file */
obj_t BGl__deletezd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2769, obj_t BgL_stringz00_2770)
{ AN_OBJECT;
{ /* Ieee/port.scm 1261 */
{ /* Ieee/port.scm 1262 */
char * BgL_stringz00_3365;
{ /* Ieee/port.scm 1262 */
obj_t BgL_auxz00_5472;
if(
STRINGP(BgL_stringz00_2770))
{ /* Ieee/port.scm 1262 */
BgL_auxz00_5472 = BgL_stringz00_2770
; }  else 
{ 
obj_t BgL_auxz00_5475;
BgL_auxz00_5475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)56067)), BGl_string3520z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2770); 
FAILURE(BgL_auxz00_5475,BFALSE,BFALSE);} 
BgL_stringz00_3365 = 
BSTRING_TO_STRING(BgL_auxz00_5472); } 
if(
unlink(BgL_stringz00_3365))
{ /* Ieee/port.scm 1262 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1262 */
return BTRUE;} } } 
}



/* make-directory */
BGL_EXPORTED_DEF bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_133)
{ AN_OBJECT;
{ /* Ieee/port.scm 1267 */
return 
!BGL_MKDIR(BgL_stringz00_133, ((long)511));} 
}



/* _make-directory */
obj_t BGl__makezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2771, obj_t BgL_stringz00_2772)
{ AN_OBJECT;
{ /* Ieee/port.scm 1267 */
{ /* Ieee/port.scm 1268 */
bool_t BgL_auxz00_5483;
{ /* Ieee/port.scm 1268 */
char * BgL_stringz00_3366;
{ /* Ieee/port.scm 1268 */
obj_t BgL_auxz00_5484;
if(
STRINGP(BgL_stringz00_2772))
{ /* Ieee/port.scm 1268 */
BgL_auxz00_5484 = BgL_stringz00_2772
; }  else 
{ 
obj_t BgL_auxz00_5487;
BgL_auxz00_5487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)56362)), BGl_string3521z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2772); 
FAILURE(BgL_auxz00_5487,BFALSE,BFALSE);} 
BgL_stringz00_3366 = 
BSTRING_TO_STRING(BgL_auxz00_5484); } 
BgL_auxz00_5483 = 
!BGL_MKDIR(BgL_stringz00_3366, ((long)511)); } 
return 
BBOOL(BgL_auxz00_5483);} } 
}



/* make-directories */
BGL_EXPORTED_DEF bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_134)
{ AN_OBJECT;
{ /* Ieee/port.scm 1273 */
{ /* Ieee/port.scm 1274 */
bool_t BgL__ortest_2173z00_1481;
BgL__ortest_2173z00_1481 = 
directoryp(
BSTRING_TO_STRING(BgL_stringz00_134)); 
if(BgL__ortest_2173z00_1481)
{ /* Ieee/port.scm 1274 */
return BgL__ortest_2173z00_1481;}  else 
{ /* Ieee/port.scm 1275 */
bool_t BgL__ortest_2174z00_1482;
{ /* Ieee/port.scm 1275 */
char * BgL_auxz00_5497;
BgL_auxz00_5497 = 
BSTRING_TO_STRING(BgL_stringz00_134); 
BgL__ortest_2174z00_1482 = 
!BGL_MKDIR(BgL_auxz00_5497, ((long)511)); } 
if(BgL__ortest_2174z00_1482)
{ /* Ieee/port.scm 1275 */
return BgL__ortest_2174z00_1482;}  else 
{ /* Ieee/port.scm 1276 */
obj_t BgL_dnamez00_1483;
BgL_dnamez00_1483 = 
BGl_dirnamez00zz__osz00(BgL_stringz00_134); 
{ /* Ieee/port.scm 1277 */
bool_t BgL_testz00_5502;
if(
(
STRING_LENGTH(BgL_dnamez00_1483)==((long)0)))
{ /* Ieee/port.scm 1277 */
BgL_testz00_5502 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 1277 */
BgL_testz00_5502 = 
fexists(
BSTRING_TO_STRING(BgL_dnamez00_1483))
; } 
if(BgL_testz00_5502)
{ /* Ieee/port.scm 1277 */
return ((bool_t)0);}  else 
{ /* Ieee/port.scm 1279 */
bool_t BgL_auxz00_1485;
BgL_auxz00_1485 = 
BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_dnamez00_1483); 
{ /* Ieee/port.scm 1280 */
bool_t BgL_testz00_5509;
{ /* Ieee/port.scm 1280 */
unsigned char BgL_arg2525z00_1487;obj_t BgL_arg2526z00_1488;
{ /* Ieee/port.scm 1280 */
long BgL_i2853z00_2856;
BgL_i2853z00_2856 = 
(
STRING_LENGTH(BgL_stringz00_134)-((long)1)); 
{ /* Ieee/port.scm 1280 */
long BgL_l2854z00_2857;
BgL_l2854z00_2857 = 
STRING_LENGTH(BgL_stringz00_134); 
if(
BOUND_CHECK(BgL_i2853z00_2856, BgL_l2854z00_2857))
{ /* Ieee/port.scm 1280 */
BgL_arg2525z00_1487 = 
STRING_REF(BgL_stringz00_134, BgL_i2853z00_2856); }  else 
{ 
obj_t BgL_auxz00_5516;
BgL_auxz00_5516 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)56873)), BGl_string3522z00zz__r4_ports_6_10_1z00, 
BINT(BgL_i2853z00_2856), BgL_stringz00_134); 
FAILURE(BgL_auxz00_5516,BFALSE,BFALSE);} } } 
BgL_arg2526z00_1488 = 
BGl_filezd2separatorzd2zz__osz00(); 
{ /* Ieee/port.scm 1280 */
unsigned char BgL_char2z00_2274;
{ /* Ieee/port.scm 1281 */
obj_t BgL_auxz00_5522;
if(
CHARP(BgL_arg2526z00_1488))
{ /* Ieee/port.scm 1281 */
BgL_auxz00_5522 = BgL_arg2526z00_1488
; }  else 
{ 
obj_t BgL_auxz00_5525;
BgL_auxz00_5525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)56947)), BGl_string3523z00zz__r4_ports_6_10_1z00, BGl_string3524z00zz__r4_ports_6_10_1z00, BgL_arg2526z00_1488); 
FAILURE(BgL_auxz00_5525,BFALSE,BFALSE);} 
BgL_char2z00_2274 = 
CCHAR(BgL_auxz00_5522); } 
BgL_testz00_5509 = 
(BgL_arg2525z00_1487==BgL_char2z00_2274); } } 
if(BgL_testz00_5509)
{ /* Ieee/port.scm 1280 */
return BgL_auxz00_1485;}  else 
{ /* Ieee/port.scm 1283 */
char * BgL_auxz00_5531;
BgL_auxz00_5531 = 
BSTRING_TO_STRING(BgL_stringz00_134); 
return 
!BGL_MKDIR(BgL_auxz00_5531, ((long)511));} } } } } } } } 
}



/* _make-directories */
obj_t BGl__makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2773, obj_t BgL_stringz00_2774)
{ AN_OBJECT;
{ /* Ieee/port.scm 1273 */
{ /* Ieee/port.scm 1274 */
bool_t BgL_auxz00_5534;
{ /* Ieee/port.scm 1274 */
obj_t BgL_auxz00_5535;
if(
STRINGP(BgL_stringz00_2774))
{ /* Ieee/port.scm 1274 */
BgL_auxz00_5535 = BgL_stringz00_2774
; }  else 
{ 
obj_t BgL_auxz00_5538;
BgL_auxz00_5538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)56650)), BGl_string3525z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_stringz00_2774); 
FAILURE(BgL_auxz00_5538,BFALSE,BFALSE);} 
BgL_auxz00_5534 = 
BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_auxz00_5535); } 
return 
BBOOL(BgL_auxz00_5534);} } 
}



/* delete-directory */
BGL_EXPORTED_DEF obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_135)
{ AN_OBJECT;
{ /* Ieee/port.scm 1288 */
if(
rmdir(BgL_stringz00_135))
{ /* Ieee/port.scm 1289 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1289 */
return BTRUE;} } 
}



/* _delete-directory */
obj_t BGl__deletezd2directoryzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2775, obj_t BgL_stringz00_2776)
{ AN_OBJECT;
{ /* Ieee/port.scm 1288 */
{ /* Ieee/port.scm 1289 */
char * BgL_stringz00_3367;
{ /* Ieee/port.scm 1289 */
obj_t BgL_auxz00_5546;
if(
STRINGP(BgL_stringz00_2776))
{ /* Ieee/port.scm 1289 */
BgL_auxz00_5546 = BgL_stringz00_2776
; }  else 
{ 
obj_t BgL_auxz00_5549;
BgL_auxz00_5549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)57271)), BGl_string3526z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2776); 
FAILURE(BgL_auxz00_5549,BFALSE,BFALSE);} 
BgL_stringz00_3367 = 
BSTRING_TO_STRING(BgL_auxz00_5546); } 
if(
rmdir(BgL_stringz00_3367))
{ /* Ieee/port.scm 1289 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1289 */
return BTRUE;} } } 
}



/* rename-file */
BGL_EXPORTED_DEF obj_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char * BgL_string1z00_136, char * BgL_string2z00_137)
{ AN_OBJECT;
{ /* Ieee/port.scm 1294 */
{ /* Ieee/port.scm 1295 */
bool_t BgL_testz00_5556;
{ /* Ieee/port.scm 1295 */
int BgL_arg2535z00_3368;
BgL_arg2535z00_3368 = 
rename(BgL_string1z00_136, BgL_string2z00_137); 
BgL_testz00_5556 = 
(
BINT(BgL_arg2535z00_3368)==
BINT(((long)0))); } 
if(BgL_testz00_5556)
{ /* Ieee/port.scm 1295 */
return BTRUE;}  else 
{ /* Ieee/port.scm 1295 */
return BFALSE;} } } 
}



/* _rename-file */
obj_t BGl__renamezd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2777, obj_t BgL_string1z00_2778, obj_t BgL_string2z00_2779)
{ AN_OBJECT;
{ /* Ieee/port.scm 1294 */
{ /* Ieee/port.scm 1295 */
char * BgL_string1z00_3369;char * BgL_string2z00_3370;
{ /* Ieee/port.scm 1295 */
obj_t BgL_auxz00_5561;
if(
STRINGP(BgL_string1z00_2778))
{ /* Ieee/port.scm 1295 */
BgL_auxz00_5561 = BgL_string1z00_2778
; }  else 
{ 
obj_t BgL_auxz00_5564;
BgL_auxz00_5564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)57586)), BGl_string3527z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_string1z00_2778); 
FAILURE(BgL_auxz00_5564,BFALSE,BFALSE);} 
BgL_string1z00_3369 = 
BSTRING_TO_STRING(BgL_auxz00_5561); } 
{ /* Ieee/port.scm 1295 */
obj_t BgL_auxz00_5569;
if(
STRINGP(BgL_string2z00_2779))
{ /* Ieee/port.scm 1295 */
BgL_auxz00_5569 = BgL_string2z00_2779
; }  else 
{ 
obj_t BgL_auxz00_5572;
BgL_auxz00_5572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)57586)), BGl_string3527z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_string2z00_2779); 
FAILURE(BgL_auxz00_5572,BFALSE,BFALSE);} 
BgL_string2z00_3370 = 
BSTRING_TO_STRING(BgL_auxz00_5569); } 
{ /* Ieee/port.scm 1295 */
bool_t BgL_testz00_5577;
{ /* Ieee/port.scm 1295 */
int BgL_arg2535z00_3371;
BgL_arg2535z00_3371 = 
rename(BgL_string1z00_3369, BgL_string2z00_3370); 
BgL_testz00_5577 = 
(
BINT(BgL_arg2535z00_3371)==
BINT(((long)0))); } 
if(BgL_testz00_5577)
{ /* Ieee/port.scm 1295 */
return BTRUE;}  else 
{ /* Ieee/port.scm 1295 */
return BFALSE;} } } } 
}



/* copy-file */
BGL_EXPORTED_DEF obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char * BgL_string1z00_138, char * BgL_string2z00_139)
{ AN_OBJECT;
{ /* Ieee/port.scm 1302 */
{ /* Ieee/port.scm 1303 */
obj_t BgL_piz00_1499;obj_t BgL_poz00_1500;
BgL_piz00_1499 = 
BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(
string_to_bstring(BgL_string1z00_138)); 
BgL_poz00_1500 = 
BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(
string_to_bstring(BgL_string2z00_139)); 
if(
BINARY_PORTP(BgL_piz00_1499))
{ /* Ieee/port.scm 1306 */
if(
BINARY_PORTP(BgL_poz00_1500))
{ /* Ieee/port.scm 1313 */
obj_t BgL_sz00_1503;
BgL_sz00_1503 = 
make_string(((long)1024), ((unsigned char)' ')); 
{ /* Ieee/port.scm 1314 */
int BgL_g2175z00_1504;
BgL_g2175z00_1504 = 
bgl_input_fill_string(BgL_piz00_1499, BgL_sz00_1503); 
{ 
int BgL_lz00_1506;
{ /* Ieee/port.scm 1314 */
bool_t BgL_auxz00_5592;
BgL_lz00_1506 = BgL_g2175z00_1504; 
BgL_zc3anonymousza32539ze3z83_1507:
if(
(
(long)(BgL_lz00_1506)==((long)1024)))
{ /* Ieee/port.scm 1315 */
bgl_output_string(BgL_poz00_1500, BgL_sz00_1503); 
{ 
int BgL_lz00_5597;
BgL_lz00_5597 = 
bgl_input_fill_string(BgL_piz00_1499, BgL_sz00_1503); 
BgL_lz00_1506 = BgL_lz00_5597; 
goto BgL_zc3anonymousza32539ze3z83_1507;} }  else 
{ /* Ieee/port.scm 1315 */
{ /* Ieee/port.scm 1320 */
obj_t BgL_arg2542z00_1510;
{ /* Ieee/port.scm 1320 */
long BgL_auxz00_5599;
BgL_auxz00_5599 = 
(long)(BgL_lz00_1506); 
BgL_arg2542z00_1510 = 
bgl_string_shrink(BgL_sz00_1503, BgL_auxz00_5599); } 
bgl_output_string(BgL_poz00_1500, BgL_arg2542z00_1510); } 
close_binary_port(BgL_piz00_1499); 
close_binary_port(BgL_poz00_1500); 
BgL_auxz00_5592 = ((bool_t)1); } 
return 
BBOOL(BgL_auxz00_5592);} } } }  else 
{ /* Ieee/port.scm 1309 */
close_binary_port(BgL_piz00_1499); 
return BFALSE;} }  else 
{ /* Ieee/port.scm 1306 */
if(
BINARY_PORTP(BgL_poz00_1500))
{ /* Ieee/port.scm 1307 */
close_binary_port(BgL_poz00_1500); }  else 
{ /* Ieee/port.scm 1307 */BFALSE; } 
return BFALSE;} } } 
}



/* _copy-file */
obj_t BGl__copyzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2780, obj_t BgL_string1z00_2781, obj_t BgL_string2z00_2782)
{ AN_OBJECT;
{ /* Ieee/port.scm 1302 */
{ /* Ieee/port.scm 1303 */
char * BgL_auxz00_5619;char * BgL_auxz00_5610;
{ /* Ieee/port.scm 1303 */
obj_t BgL_auxz00_5620;
if(
STRINGP(BgL_string2z00_2782))
{ /* Ieee/port.scm 1303 */
BgL_auxz00_5620 = BgL_string2z00_2782
; }  else 
{ 
obj_t BgL_auxz00_5623;
BgL_auxz00_5623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)57905)), BGl_string3528z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_string2z00_2782); 
FAILURE(BgL_auxz00_5623,BFALSE,BFALSE);} 
BgL_auxz00_5619 = 
BSTRING_TO_STRING(BgL_auxz00_5620); } 
{ /* Ieee/port.scm 1303 */
obj_t BgL_auxz00_5611;
if(
STRINGP(BgL_string1z00_2781))
{ /* Ieee/port.scm 1303 */
BgL_auxz00_5611 = BgL_string1z00_2781
; }  else 
{ 
obj_t BgL_auxz00_5614;
BgL_auxz00_5614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)57905)), BGl_string3528z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_string1z00_2781); 
FAILURE(BgL_auxz00_5614,BFALSE,BFALSE);} 
BgL_auxz00_5610 = 
BSTRING_TO_STRING(BgL_auxz00_5611); } 
return 
BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_5610, BgL_auxz00_5619);} } 
}



/* port? */
BGL_EXPORTED_DEF bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_140)
{ AN_OBJECT;
{ /* Ieee/port.scm 1328 */
{ /* Ieee/port.scm 1329 */
bool_t BgL__ortest_2176z00_3372;
BgL__ortest_2176z00_3372 = 
OUTPUT_PORTP(BgL_objz00_140); 
if(BgL__ortest_2176z00_3372)
{ /* Ieee/port.scm 1329 */
return BgL__ortest_2176z00_3372;}  else 
{ /* Ieee/port.scm 1329 */
return 
INPUT_PORTP(BgL_objz00_140);} } } 
}



/* _port? */
obj_t BGl__portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2783, obj_t BgL_objz00_2784)
{ AN_OBJECT;
{ /* Ieee/port.scm 1328 */
{ /* Ieee/port.scm 1329 */
bool_t BgL_auxz00_5632;
{ /* Ieee/port.scm 1329 */
bool_t BgL__ortest_2176z00_3374;
BgL__ortest_2176z00_3374 = 
OUTPUT_PORTP(BgL_objz00_2784); 
if(BgL__ortest_2176z00_3374)
{ /* Ieee/port.scm 1329 */
BgL_auxz00_5632 = BgL__ortest_2176z00_3374
; }  else 
{ /* Ieee/port.scm 1329 */
BgL_auxz00_5632 = 
INPUT_PORTP(BgL_objz00_2784)
; } } 
return 
BBOOL(BgL_auxz00_5632);} } 
}



/* directory? */
BGL_EXPORTED_DEF bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char * BgL_stringz00_141)
{ AN_OBJECT;
{ /* Ieee/port.scm 1334 */
return 
directoryp(BgL_stringz00_141);} 
}



/* _directory? */
obj_t BGl__directoryzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2785, obj_t BgL_stringz00_2786)
{ AN_OBJECT;
{ /* Ieee/port.scm 1334 */
{ /* Ieee/port.scm 1335 */
bool_t BgL_auxz00_5638;
{ /* Ieee/port.scm 1335 */
char * BgL_stringz00_3376;
{ /* Ieee/port.scm 1335 */
obj_t BgL_auxz00_5639;
if(
STRINGP(BgL_stringz00_2786))
{ /* Ieee/port.scm 1335 */
BgL_auxz00_5639 = BgL_stringz00_2786
; }  else 
{ 
obj_t BgL_auxz00_5642;
BgL_auxz00_5642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59043)), BGl_string3529z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2786); 
FAILURE(BgL_auxz00_5642,BFALSE,BFALSE);} 
BgL_stringz00_3376 = 
BSTRING_TO_STRING(BgL_auxz00_5639); } 
BgL_auxz00_5638 = 
directoryp(BgL_stringz00_3376); } 
return 
BBOOL(BgL_auxz00_5638);} } 
}



/* directory->list */
BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char * BgL_stringz00_142)
{ AN_OBJECT;
{ /* Ieee/port.scm 1340 */
return 
directory_to_list(BgL_stringz00_142);} 
}



/* _directory->list */
obj_t BGl__directoryzd2ze3listz31zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2787, obj_t BgL_stringz00_2788)
{ AN_OBJECT;
{ /* Ieee/port.scm 1340 */
{ /* Ieee/port.scm 1341 */
char * BgL_stringz00_3377;
{ /* Ieee/port.scm 1341 */
obj_t BgL_auxz00_5650;
if(
STRINGP(BgL_stringz00_2788))
{ /* Ieee/port.scm 1341 */
BgL_auxz00_5650 = BgL_stringz00_2788
; }  else 
{ 
obj_t BgL_auxz00_5653;
BgL_auxz00_5653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59331)), BGl_string3530z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_stringz00_2788); 
FAILURE(BgL_auxz00_5653,BFALSE,BFALSE);} 
BgL_stringz00_3377 = 
BSTRING_TO_STRING(BgL_auxz00_5650); } 
return 
directory_to_list(BgL_stringz00_3377);} } 
}



/* directory->path-list */
BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t BgL_dirz00_143)
{ AN_OBJECT;
{ /* Ieee/port.scm 1346 */
{ /* Ieee/port.scm 1347 */
long BgL_lz00_1515;
BgL_lz00_1515 = 
STRING_LENGTH(BgL_dirz00_143); 
if(
(BgL_lz00_1515==((long)0)))
{ /* Ieee/port.scm 1349 */
return BNIL;}  else 
{ /* Ieee/port.scm 1351 */
bool_t BgL_testz00_5662;
{ /* Ieee/port.scm 1351 */
unsigned char BgL_arg2550z00_1521;obj_t BgL_arg2551z00_1522;
{ /* Ieee/port.scm 1351 */
long BgL_i2857z00_2860;
BgL_i2857z00_2860 = 
(BgL_lz00_1515-((long)1)); 
if(
BOUND_CHECK(BgL_i2857z00_2860, BgL_lz00_1515))
{ /* Ieee/port.scm 1351 */
BgL_arg2550z00_1521 = 
STRING_REF(BgL_dirz00_143, BgL_i2857z00_2860); }  else 
{ 
obj_t BgL_auxz00_5667;
BgL_auxz00_5667 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59694)), BGl_string3522z00zz__r4_ports_6_10_1z00, 
BINT(BgL_i2857z00_2860), BgL_dirz00_143); 
FAILURE(BgL_auxz00_5667,BFALSE,BFALSE);} } 
BgL_arg2551z00_1522 = 
BGl_filezd2separatorzd2zz__osz00(); 
{ /* Ieee/port.scm 1351 */
unsigned char BgL_char2z00_2317;
{ /* Ieee/port.scm 1351 */
obj_t BgL_auxz00_5673;
if(
CHARP(BgL_arg2551z00_1522))
{ /* Ieee/port.scm 1351 */
BgL_auxz00_5673 = BgL_arg2551z00_1522
; }  else 
{ 
obj_t BgL_auxz00_5676;
BgL_auxz00_5676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59736)), BGl_string3531z00zz__r4_ports_6_10_1z00, BGl_string3524z00zz__r4_ports_6_10_1z00, BgL_arg2551z00_1522); 
FAILURE(BgL_auxz00_5676,BFALSE,BFALSE);} 
BgL_char2z00_2317 = 
CCHAR(BgL_auxz00_5673); } 
BgL_testz00_5662 = 
(BgL_arg2550z00_1521==BgL_char2z00_2317); } } 
if(BgL_testz00_5662)
{ /* Ieee/port.scm 1354 */
long BgL_arg2547z00_1518;obj_t BgL_arg2548z00_1519;
BgL_arg2547z00_1518 = 
(BgL_lz00_1515-((long)1)); 
BgL_arg2548z00_1519 = 
BGl_filezd2separatorzd2zz__osz00(); 
{ /* Ieee/port.scm 1354 */
unsigned char BgL_auxz00_5684;
{ /* Ieee/port.scm 1354 */
obj_t BgL_auxz00_5687;
if(
CHARP(BgL_arg2548z00_1519))
{ /* Ieee/port.scm 1354 */
BgL_auxz00_5687 = BgL_arg2548z00_1519
; }  else 
{ 
obj_t BgL_auxz00_5690;
BgL_auxz00_5690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59830)), BGl_string3531z00zz__r4_ports_6_10_1z00, BGl_string3532z00zz__r4_ports_6_10_1z00, BgL_arg2548z00_1519); 
FAILURE(BgL_auxz00_5690,BFALSE,BFALSE);} 
BgL_auxz00_5684 = 
CCHAR(BgL_auxz00_5687); } 
return 
bgl_directory_to_path_list(
BSTRING_TO_STRING(BgL_dirz00_143), 
(int)(BgL_arg2547z00_1518), BgL_auxz00_5684);} }  else 
{ /* Ieee/port.scm 1361 */
obj_t BgL_arg2549z00_1520;
BgL_arg2549z00_1520 = 
BGl_filezd2separatorzd2zz__osz00(); 
{ /* Ieee/port.scm 1361 */
unsigned char BgL_auxz00_5697;
{ /* Ieee/port.scm 1361 */
obj_t BgL_auxz00_5700;
if(
CHARP(BgL_arg2549z00_1520))
{ /* Ieee/port.scm 1361 */
BgL_auxz00_5700 = BgL_arg2549z00_1520
; }  else 
{ 
obj_t BgL_auxz00_5703;
BgL_auxz00_5703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)60017)), BGl_string3531z00zz__r4_ports_6_10_1z00, BGl_string3532z00zz__r4_ports_6_10_1z00, BgL_arg2549z00_1520); 
FAILURE(BgL_auxz00_5703,BFALSE,BFALSE);} 
BgL_auxz00_5697 = 
CCHAR(BgL_auxz00_5700); } 
return 
bgl_directory_to_path_list(
BSTRING_TO_STRING(BgL_dirz00_143), 
(int)(BgL_lz00_1515), BgL_auxz00_5697);} } } } } 
}



/* _directory->path-list */
obj_t BGl__directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2789, obj_t BgL_dirz00_2790)
{ AN_OBJECT;
{ /* Ieee/port.scm 1346 */
{ /* Ieee/port.scm 1347 */
obj_t BgL_auxz00_5709;
if(
STRINGP(BgL_dirz00_2790))
{ /* Ieee/port.scm 1347 */
BgL_auxz00_5709 = BgL_dirz00_2790
; }  else 
{ 
obj_t BgL_auxz00_5712;
BgL_auxz00_5712 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)59619)), BGl_string3533z00zz__r4_ports_6_10_1z00, BGl_string3307z00zz__r4_ports_6_10_1z00, BgL_dirz00_2790); 
FAILURE(BgL_auxz00_5712,BFALSE,BFALSE);} 
return 
BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(BgL_auxz00_5709);} } 
}



/* file-modification-time */
BGL_EXPORTED_DEF long BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char * BgL_filez00_144)
{ AN_OBJECT;
{ /* Ieee/port.scm 1369 */
return 
bgl_last_modification_time(BgL_filez00_144);} 
}



/* _file-modification-time */
obj_t BGl__filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2791, obj_t BgL_filez00_2792)
{ AN_OBJECT;
{ /* Ieee/port.scm 1369 */
{ /* Ieee/port.scm 1370 */
long BgL_auxz00_5718;
{ /* Ieee/port.scm 1370 */
char * BgL_filez00_3378;
{ /* Ieee/port.scm 1370 */
obj_t BgL_auxz00_5719;
if(
STRINGP(BgL_filez00_2792))
{ /* Ieee/port.scm 1370 */
BgL_auxz00_5719 = BgL_filez00_2792
; }  else 
{ 
obj_t BgL_auxz00_5722;
BgL_auxz00_5722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)60385)), BGl_string3534z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_filez00_2792); 
FAILURE(BgL_auxz00_5722,BFALSE,BFALSE);} 
BgL_filez00_3378 = 
BSTRING_TO_STRING(BgL_auxz00_5719); } 
BgL_auxz00_5718 = 
bgl_last_modification_time(BgL_filez00_3378); } 
return 
make_belong(BgL_auxz00_5718);} } 
}



/* file-size */
BGL_EXPORTED_DEF long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char * BgL_filez00_145)
{ AN_OBJECT;
{ /* Ieee/port.scm 1375 */
return 
bgl_file_size(BgL_filez00_145);} 
}



/* _file-size */
obj_t BGl__filezd2siza7ez75zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2793, obj_t BgL_filez00_2794)
{ AN_OBJECT;
{ /* Ieee/port.scm 1375 */
{ /* Ieee/port.scm 1376 */
long BgL_auxz00_5730;
{ /* Ieee/port.scm 1376 */
char * BgL_filez00_3379;
{ /* Ieee/port.scm 1376 */
obj_t BgL_auxz00_5731;
if(
STRINGP(BgL_filez00_2794))
{ /* Ieee/port.scm 1376 */
BgL_auxz00_5731 = BgL_filez00_2794
; }  else 
{ 
obj_t BgL_auxz00_5734;
BgL_auxz00_5734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)60664)), BGl_string3535z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_filez00_2794); 
FAILURE(BgL_auxz00_5734,BFALSE,BFALSE);} 
BgL_filez00_3379 = 
BSTRING_TO_STRING(BgL_auxz00_5731); } 
BgL_auxz00_5730 = 
bgl_file_size(BgL_filez00_3379); } 
return 
make_belong(BgL_auxz00_5730);} } 
}



/* file-uid */
BGL_EXPORTED_DEF int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char * BgL_filez00_146)
{ AN_OBJECT;
{ /* Ieee/port.scm 1381 */
return 
bgl_file_uid(BgL_filez00_146);} 
}



/* _file-uid */
obj_t BGl__filezd2uidzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2795, obj_t BgL_filez00_2796)
{ AN_OBJECT;
{ /* Ieee/port.scm 1381 */
{ /* Ieee/port.scm 1382 */
int BgL_auxz00_5742;
{ /* Ieee/port.scm 1382 */
char * BgL_filez00_3380;
{ /* Ieee/port.scm 1382 */
obj_t BgL_auxz00_5743;
if(
STRINGP(BgL_filez00_2796))
{ /* Ieee/port.scm 1382 */
BgL_auxz00_5743 = BgL_filez00_2796
; }  else 
{ 
obj_t BgL_auxz00_5746;
BgL_auxz00_5746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)60934)), BGl_string3536z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_filez00_2796); 
FAILURE(BgL_auxz00_5746,BFALSE,BFALSE);} 
BgL_filez00_3380 = 
BSTRING_TO_STRING(BgL_auxz00_5743); } 
BgL_auxz00_5742 = 
bgl_file_uid(BgL_filez00_3380); } 
return 
BINT(BgL_auxz00_5742);} } 
}



/* file-gid */
BGL_EXPORTED_DEF int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char * BgL_filez00_147)
{ AN_OBJECT;
{ /* Ieee/port.scm 1387 */
return 
bgl_file_gid(BgL_filez00_147);} 
}



/* _file-gid */
obj_t BGl__filezd2gidzd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2797, obj_t BgL_filez00_2798)
{ AN_OBJECT;
{ /* Ieee/port.scm 1387 */
{ /* Ieee/port.scm 1388 */
int BgL_auxz00_5754;
{ /* Ieee/port.scm 1388 */
char * BgL_filez00_3381;
{ /* Ieee/port.scm 1388 */
obj_t BgL_auxz00_5755;
if(
STRINGP(BgL_filez00_2798))
{ /* Ieee/port.scm 1388 */
BgL_auxz00_5755 = BgL_filez00_2798
; }  else 
{ 
obj_t BgL_auxz00_5758;
BgL_auxz00_5758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)61203)), BGl_string3537z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_filez00_2798); 
FAILURE(BgL_auxz00_5758,BFALSE,BFALSE);} 
BgL_filez00_3381 = 
BSTRING_TO_STRING(BgL_auxz00_5755); } 
BgL_auxz00_5754 = 
bgl_file_gid(BgL_filez00_3381); } 
return 
BINT(BgL_auxz00_5754);} } 
}



/* file-mode */
BGL_EXPORTED_DEF int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char * BgL_filez00_148)
{ AN_OBJECT;
{ /* Ieee/port.scm 1393 */
return 
bgl_file_mode(BgL_filez00_148);} 
}



/* _file-mode */
obj_t BGl__filezd2modezd2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_2799, obj_t BgL_filez00_2800)
{ AN_OBJECT;
{ /* Ieee/port.scm 1393 */
{ /* Ieee/port.scm 1394 */
int BgL_auxz00_5766;
{ /* Ieee/port.scm 1394 */
char * BgL_filez00_3382;
{ /* Ieee/port.scm 1394 */
obj_t BgL_auxz00_5767;
if(
STRINGP(BgL_filez00_2800))
{ /* Ieee/port.scm 1394 */
BgL_auxz00_5767 = BgL_filez00_2800
; }  else 
{ 
obj_t BgL_auxz00_5770;
BgL_auxz00_5770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3305z00zz__r4_ports_6_10_1z00, 
BINT(((long)61473)), BGl_string3538z00zz__r4_ports_6_10_1z00, BGl_string3455z00zz__r4_ports_6_10_1z00, BgL_filez00_2800); 
FAILURE(BgL_auxz00_5770,BFALSE,BFALSE);} 
BgL_filez00_3382 = 
BSTRING_TO_STRING(BgL_auxz00_5767); } 
BgL_auxz00_5766 = 
bgl_file_mode(BgL_filez00_3382); } 
return 
BINT(BgL_auxz00_5766);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 18 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 18 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00()
{ AN_OBJECT;
{ /* Ieee/port.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long)28131980), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long)23251724), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__urlz00(((long)26833903), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__httpz00(((long)420279834), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00)); 
return 
BGl_modulezd2initializa7ationz75zz__ftpz00(((long)111023090), 
BSTRING_TO_STRING(BGl_string3539z00zz__r4_ports_6_10_1z00));} 
}

#ifdef __cplusplus
}
#endif
