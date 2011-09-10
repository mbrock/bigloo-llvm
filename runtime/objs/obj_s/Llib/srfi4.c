/*===========================================================================*/
/*   (Llib/srfi4.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/srfi4.scm -indent -o objs/obj_s/Llib/srfi4.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_symbol3059z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3061z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3063z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl_symbol3065z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl__u32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl__u64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t);
static obj_t BGl_symbol3090z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_symbol3101z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3105z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3097z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3109z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3112z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3116z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3121z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3125z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl__f64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_symbol3130z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl_symbol3134z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_symbol3140z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3144z00zz__srfi4z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u32vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_symbol3148z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3152z00zz__srfi4z00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_symbol3156z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3160z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3164z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl__s16vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3168z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3172z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_symbol3176z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3179z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3182z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3185z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_u8vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3188z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3200z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3191z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3203z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3194z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3197z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, unsigned long);
BGL_EXPORTED_DECL long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl__listzd2ze3s64vectorz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL unsigned long BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl_genericzd2initzd2zz__srfi4z00();
BGL_EXPORTED_DECL long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl__u64vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s16vectorz00zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, double);
static obj_t BGl__listzd2ze3u32vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s16vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__u16vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s8vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL short BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t);
static obj_t BGl__s64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl__u8vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__u8vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__srfi4z00();
static obj_t BGl__u8vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL char BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__u32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00();
static obj_t BGl__u8vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3u16vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f32vectorz00zz__srfi4z00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL unsigned char BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t, long, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl__s64vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_f64vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, float);
BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl__u8vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__u16vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
extern long bgl_list_length(obj_t);
static obj_t BGl__f32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s64vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3f64vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3s32vectorz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl__u16vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__s32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__u16vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl__s16vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u16vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__u32vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t);
static obj_t BGl__s16vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__u64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u64vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__u32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s8vectorz00zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s16vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned short BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__listzd2ze3u8vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__f32vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL long BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl__f32vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__f64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s32vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s8vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3u64vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__listzd2ze3s16vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u8vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t);
static obj_t BGl__homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t, long, unsigned short);
static obj_t BGl__u16vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s8vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t);
static obj_t BGl__s8vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t, long, short);
BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, unsigned BGL_LONGLONG_T);
BGL_EXPORTED_DECL float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl__u64vectorzd2refzd2zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_f32vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__s8vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, BGL_LONGLONG_T);
BGL_EXPORTED_DECL obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
static obj_t BGl__f64vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s32vectorzd2lengthzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl__s64vectorzf3zf3zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__listzd2ze3s8vectorz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t, long, char);
static obj_t BGl__f64vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s32vectorz00zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f64vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__s32vectorzd2setz12zc0zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl__s16vectorzd2ze3listz31zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__srfi4z00();
static obj_t BGl__listzd2ze3f32vectorz31zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_symbol3044z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3047z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3049z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3051z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3053z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3055z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_symbol3057z00zz__srfi4z00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__s16vectorza7d2set3268za7, BGl__s16vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__f64vectorza7d2za7e33269z00, BGl__f64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__s32vectorza7d2za7e33270z00, BGl__s32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2envzd2zz__srfi4z00, BgL_bgl__u64vectorza700za7za7_3271za7, va_generic_entry, BGl__u64vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__u64vectorza7d2set3272za7, BGl__u64vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__u8vectorza7d2setza73273z00, BGl__u8vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__f64vectorza7d2ref3274za7, BGl__f64vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__s32vectorza7d2ref3275za7, BGl__s32vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u64vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3u64ve3276z00, BGl__listzd2ze3u64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__u8vectorza7d2leng3277za7, BGl__u8vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s8vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s8vector3278za7, opt_generic_entry, BGl__makezd2s8vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__u16vectorza7d2ref3279za7, BGl__u16vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u8vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u8vector3280za7, opt_generic_entry, BGl__makezd2u8vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2envzd2zz__srfi4z00, BgL_bgl__u32vectorza700za7za7_3281za7, va_generic_entry, BGl__u32vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__f32vectorza7d2len3282za7, BGl__f32vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__s64vectorza7d2za7e33283z00, BGl__s64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__s64vectorza7d2ref3284za7, BGl__s64vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u32vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3u32ve3285z00, BGl__listzd2ze3u32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__u32vectorza7d2len3286za7, BGl__u32vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2envzd2zz__srfi4z00, BgL_bgl__s16vectorza700za7za7_3287za7, va_generic_entry, BGl__s16vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__s16vectorza7d2za7e33288z00, BGl__s16vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__u16vectorza7d2set3289za7, BGl__u16vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__u16vectorza7f3za7f33290z00, BGl__u16vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__f32vectorza7d2set3291za7, BGl__f32vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s64vecto3292za7, opt_generic_entry, BGl__makezd2s64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s16vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3s16ve3293z00, BGl__listzd2ze3s16vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__u32vectorza7d2ref3294za7, BGl__u32vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__s16vectorza7f3za7f33295z00, BGl__s16vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__u64vectorza7f3za7f33296z00, BGl__u64vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_homogeneouszd2vectorzf3zd2envzf3zz__srfi4z00, BgL_bgl__homogeneousza7d2v3297za7, BGl__homogeneouszd2vectorzf3z21zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__u16vectorza7d2len3298za7, BGl__u16vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__s8vectorza7d2za7e3l3299z00, BGl__s8vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__s64vectorza7f3za7f33300z00, BGl__s64vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2envzd2zz__srfi4z00, BgL_bgl__s8vectorza700za7za7__3301za7, va_generic_entry, BGl__s8vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u16vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u16vecto3302za7, opt_generic_entry, BGl__makezd2u16vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__s8vectorza7d2refza73303z00, BGl__s8vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3045z00zz__srfi4z00, BgL_bgl_string3045za700za7za7_3304za7, "homogeneous-vector-info", 23 );
DEFINE_STRING( BGl_string3046z00zz__srfi4z00, BgL_bgl_string3046za700za7za7_3305za7, "Illegal hvector ident", 21 );
DEFINE_STRING( BGl_string3048z00zz__srfi4z00, BgL_bgl_string3048za700za7za7_3306za7, "s8", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2envzd2zz__srfi4z00, BgL_bgl__u8vectorza700za7za7__3307za7, va_generic_entry, BGl__u8vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3050z00zz__srfi4z00, BgL_bgl_string3050za700za7za7_3308za7, "u8", 2 );
DEFINE_STRING( BGl_string3052z00zz__srfi4z00, BgL_bgl_string3052za700za7za7_3309za7, "s16", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__u32vectorza7d2za7e33310z00, BGl__u32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3054z00zz__srfi4z00, BgL_bgl_string3054za700za7za7_3311za7, "u16", 3 );
DEFINE_STRING( BGl_string3056z00zz__srfi4z00, BgL_bgl_string3056za700za7za7_3312za7, "s32", 3 );
DEFINE_STRING( BGl_string3058z00zz__srfi4z00, BgL_bgl_string3058za700za7za7_3313za7, "u32", 3 );
DEFINE_STRING( BGl_string3060z00zz__srfi4z00, BgL_bgl_string3060za700za7za7_3314za7, "s64", 3 );
DEFINE_STRING( BGl_string3062z00zz__srfi4z00, BgL_bgl_string3062za700za7za7_3315za7, "u64", 3 );
DEFINE_STRING( BGl_string3064z00zz__srfi4z00, BgL_bgl_string3064za700za7za7_3316za7, "f32", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2f64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2f64vecto3317za7, opt_generic_entry, BGl__makezd2f64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s32vecto3318za7, opt_generic_entry, BGl__makezd2s32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3066z00zz__srfi4z00, BgL_bgl_string3066za700za7za7_3319za7, "f64", 3 );
DEFINE_STRING( BGl_string3067z00zz__srfi4z00, BgL_bgl_string3067za700za7za7_3320za7, "hvector", 7 );
DEFINE_STRING( BGl_string3068z00zz__srfi4z00, BgL_bgl_string3068za700za7za7_3321za7, "/tmp/bigloo/runtime/Llib/srfi4.scm", 34 );
DEFINE_STRING( BGl_string3070z00zz__srfi4z00, BgL_bgl_string3070za700za7za7_3322za7, "s8vector", 8 );
DEFINE_STRING( BGl_string3069z00zz__srfi4z00, BgL_bgl_string3069za700za7za7_3323za7, "_s8vector-length", 16 );
DEFINE_STRING( BGl_string3071z00zz__srfi4z00, BgL_bgl_string3071za700za7za7_3324za7, "_u8vector-length", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__u64vectorza7d2ref3325za7, BGl__u64vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3072z00zz__srfi4z00, BgL_bgl_string3072za700za7za7_3326za7, "u8vector", 8 );
DEFINE_STRING( BGl_string3073z00zz__srfi4z00, BgL_bgl_string3073za700za7za7_3327za7, "_s16vector-length", 17 );
DEFINE_STRING( BGl_string3074z00zz__srfi4z00, BgL_bgl_string3074za700za7za7_3328za7, "s16vector", 9 );
DEFINE_STRING( BGl_string3075z00zz__srfi4z00, BgL_bgl_string3075za700za7za7_3329za7, "_u16vector-length", 17 );
DEFINE_STRING( BGl_string3076z00zz__srfi4z00, BgL_bgl_string3076za700za7za7_3330za7, "u16vector", 9 );
DEFINE_STRING( BGl_string3077z00zz__srfi4z00, BgL_bgl_string3077za700za7za7_3331za7, "_s32vector-length", 17 );
DEFINE_STRING( BGl_string3078z00zz__srfi4z00, BgL_bgl_string3078za700za7za7_3332za7, "s32vector", 9 );
DEFINE_STRING( BGl_string3080z00zz__srfi4z00, BgL_bgl_string3080za700za7za7_3333za7, "u32vector", 9 );
DEFINE_STRING( BGl_string3079z00zz__srfi4z00, BgL_bgl_string3079za700za7za7_3334za7, "_u32vector-length", 17 );
DEFINE_STRING( BGl_string3081z00zz__srfi4z00, BgL_bgl_string3081za700za7za7_3335za7, "_s64vector-length", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__s8vectorza7f3za7f3za73336za7, BGl__s8vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3082z00zz__srfi4z00, BgL_bgl_string3082za700za7za7_3337za7, "s64vector", 9 );
DEFINE_STRING( BGl_string3083z00zz__srfi4z00, BgL_bgl_string3083za700za7za7_3338za7, "_u64vector-length", 17 );
DEFINE_STRING( BGl_string3084z00zz__srfi4z00, BgL_bgl_string3084za700za7za7_3339za7, "u64vector", 9 );
DEFINE_STRING( BGl_string3085z00zz__srfi4z00, BgL_bgl_string3085za700za7za7_3340za7, "_f32vector-length", 17 );
DEFINE_STRING( BGl_string3086z00zz__srfi4z00, BgL_bgl_string3086za700za7za7_3341za7, "f32vector", 9 );
DEFINE_STRING( BGl_string3087z00zz__srfi4z00, BgL_bgl_string3087za700za7za7_3342za7, "_f64vector-length", 17 );
DEFINE_STRING( BGl_string3088z00zz__srfi4z00, BgL_bgl_string3088za700za7za7_3343za7, "f64vector", 9 );
DEFINE_STRING( BGl_string3100z00zz__srfi4z00, BgL_bgl_string3100za700za7za7_3344za7, "ubyte", 5 );
DEFINE_STRING( BGl_string3089z00zz__srfi4z00, BgL_bgl_string3089za700za7za7_3345za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3091z00zz__srfi4z00, BgL_bgl_string3091za700za7za7_3346za7, "make-s8vector", 13 );
DEFINE_STRING( BGl_string3102z00zz__srfi4z00, BgL_bgl_string3102za700za7za7_3347za7, "make-s16vector", 14 );
DEFINE_STRING( BGl_string3092z00zz__srfi4z00, BgL_bgl_string3092za700za7za7_3348za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3103z00zz__srfi4z00, BgL_bgl_string3103za700za7za7_3349za7, "_make-s16vector", 15 );
DEFINE_STRING( BGl_string3093z00zz__srfi4z00, BgL_bgl_string3093za700za7za7_3350za7, "_make-s8vector", 14 );
DEFINE_STRING( BGl_string3104z00zz__srfi4z00, BgL_bgl_string3104za700za7za7_3351za7, "short", 5 );
DEFINE_STRING( BGl_string3094z00zz__srfi4z00, BgL_bgl_string3094za700za7za7_3352za7, "long", 4 );
DEFINE_STRING( BGl_string3095z00zz__srfi4z00, BgL_bgl_string3095za700za7za7_3353za7, "loop", 4 );
DEFINE_STRING( BGl_string3106z00zz__srfi4z00, BgL_bgl_string3106za700za7za7_3354za7, "make-u16vector", 14 );
DEFINE_STRING( BGl_string3096z00zz__srfi4z00, BgL_bgl_string3096za700za7za7_3355za7, "byte", 4 );
DEFINE_STRING( BGl_string3107z00zz__srfi4z00, BgL_bgl_string3107za700za7za7_3356za7, "_make-u16vector", 15 );
DEFINE_STRING( BGl_string3108z00zz__srfi4z00, BgL_bgl_string3108za700za7za7_3357za7, "ushort", 6 );
DEFINE_STRING( BGl_string3098z00zz__srfi4z00, BgL_bgl_string3098za700za7za7_3358za7, "make-u8vector", 13 );
DEFINE_STRING( BGl_string3110z00zz__srfi4z00, BgL_bgl_string3110za700za7za7_3359za7, "make-s32vector", 14 );
DEFINE_STRING( BGl_string3099z00zz__srfi4z00, BgL_bgl_string3099za700za7za7_3360za7, "_make-u8vector", 14 );
DEFINE_STRING( BGl_string3111z00zz__srfi4z00, BgL_bgl_string3111za700za7za7_3361za7, "_make-s32vector", 15 );
DEFINE_STRING( BGl_string3113z00zz__srfi4z00, BgL_bgl_string3113za700za7za7_3362za7, "make-u32vector", 14 );
DEFINE_STRING( BGl_string3114z00zz__srfi4z00, BgL_bgl_string3114za700za7za7_3363za7, "_make-u32vector", 15 );
DEFINE_STRING( BGl_string3115z00zz__srfi4z00, BgL_bgl_string3115za700za7za7_3364za7, "ulong", 5 );
DEFINE_STRING( BGl_string3117z00zz__srfi4z00, BgL_bgl_string3117za700za7za7_3365za7, "make-s64vector", 14 );
DEFINE_STRING( BGl_string3118z00zz__srfi4z00, BgL_bgl_string3118za700za7za7_3366za7, "_make-s64vector", 15 );
DEFINE_STRING( BGl_string3120z00zz__srfi4z00, BgL_bgl_string3120za700za7za7_3367za7, "llong", 5 );
DEFINE_STRING( BGl_string3122z00zz__srfi4z00, BgL_bgl_string3122za700za7za7_3368za7, "make-u64vector", 14 );
DEFINE_STRING( BGl_string3123z00zz__srfi4z00, BgL_bgl_string3123za700za7za7_3369za7, "_make-u64vector", 15 );
DEFINE_STRING( BGl_string3124z00zz__srfi4z00, BgL_bgl_string3124za700za7za7_3370za7, "ullong", 6 );
DEFINE_STRING( BGl_string3126z00zz__srfi4z00, BgL_bgl_string3126za700za7za7_3371za7, "make-f32vector", 14 );
DEFINE_STRING( BGl_string3127z00zz__srfi4z00, BgL_bgl_string3127za700za7za7_3372za7, "_make-f32vector", 15 );
DEFINE_STRING( BGl_string3129z00zz__srfi4z00, BgL_bgl_string3129za700za7za7_3373za7, "float", 5 );
DEFINE_STRING( BGl_string3131z00zz__srfi4z00, BgL_bgl_string3131za700za7za7_3374za7, "make-f64vector", 14 );
DEFINE_STRING( BGl_string3132z00zz__srfi4z00, BgL_bgl_string3132za700za7za7_3375za7, "_make-f64vector", 15 );
DEFINE_STRING( BGl_string3133z00zz__srfi4z00, BgL_bgl_string3133za700za7za7_3376za7, "double", 6 );
DEFINE_STRING( BGl_string3135z00zz__srfi4z00, BgL_bgl_string3135za700za7za7_3377za7, "$s8vector-ref", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s8vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3s8vec3378z00, BGl__listzd2ze3s8vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3136z00zz__srfi4z00, BgL_bgl_string3136za700za7za7_3379za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string3137z00zz__srfi4z00, BgL_bgl_string3137za700za7za7_3380za7, "]", 1 );
DEFINE_STRING( BGl_string3138z00zz__srfi4z00, BgL_bgl_string3138za700za7za7_3381za7, "s8vector-ref", 12 );
DEFINE_STRING( BGl_string3139z00zz__srfi4z00, BgL_bgl_string3139za700za7za7_3382za7, "_s8vector-ref", 13 );
DEFINE_STRING( BGl_string3141z00zz__srfi4z00, BgL_bgl_string3141za700za7za7_3383za7, "$u8vector-ref", 13 );
DEFINE_STRING( BGl_string3142z00zz__srfi4z00, BgL_bgl_string3142za700za7za7_3384za7, "u8vector-ref", 12 );
DEFINE_STRING( BGl_string3143z00zz__srfi4z00, BgL_bgl_string3143za700za7za7_3385za7, "_u8vector-ref", 13 );
DEFINE_STRING( BGl_string3145z00zz__srfi4z00, BgL_bgl_string3145za700za7za7_3386za7, "$s16vector-ref", 14 );
DEFINE_STRING( BGl_string3146z00zz__srfi4z00, BgL_bgl_string3146za700za7za7_3387za7, "s16vector-ref", 13 );
DEFINE_STRING( BGl_string3147z00zz__srfi4z00, BgL_bgl_string3147za700za7za7_3388za7, "_s16vector-ref", 14 );
DEFINE_STRING( BGl_string3150z00zz__srfi4z00, BgL_bgl_string3150za700za7za7_3389za7, "u16vector-ref", 13 );
DEFINE_STRING( BGl_string3149z00zz__srfi4z00, BgL_bgl_string3149za700za7za7_3390za7, "$u16vector-ref", 14 );
DEFINE_STRING( BGl_string3151z00zz__srfi4z00, BgL_bgl_string3151za700za7za7_3391za7, "_u16vector-ref", 14 );
DEFINE_STRING( BGl_string3153z00zz__srfi4z00, BgL_bgl_string3153za700za7za7_3392za7, "$s32vector-ref", 14 );
DEFINE_STRING( BGl_string3154z00zz__srfi4z00, BgL_bgl_string3154za700za7za7_3393za7, "s32vector-ref", 13 );
DEFINE_STRING( BGl_string3155z00zz__srfi4z00, BgL_bgl_string3155za700za7za7_3394za7, "_s32vector-ref", 14 );
DEFINE_STRING( BGl_string3157z00zz__srfi4z00, BgL_bgl_string3157za700za7za7_3395za7, "$u32vector-ref", 14 );
DEFINE_STRING( BGl_string3158z00zz__srfi4z00, BgL_bgl_string3158za700za7za7_3396za7, "u32vector-ref", 13 );
DEFINE_STRING( BGl_string3159z00zz__srfi4z00, BgL_bgl_string3159za700za7za7_3397za7, "_u32vector-ref", 14 );
DEFINE_STRING( BGl_string3161z00zz__srfi4z00, BgL_bgl_string3161za700za7za7_3398za7, "$s64vector-ref", 14 );
DEFINE_STRING( BGl_string3162z00zz__srfi4z00, BgL_bgl_string3162za700za7za7_3399za7, "s64vector-ref", 13 );
DEFINE_STRING( BGl_string3163z00zz__srfi4z00, BgL_bgl_string3163za700za7za7_3400za7, "_s64vector-ref", 14 );
DEFINE_STRING( BGl_string3165z00zz__srfi4z00, BgL_bgl_string3165za700za7za7_3401za7, "$u64vector-ref", 14 );
DEFINE_STRING( BGl_string3166z00zz__srfi4z00, BgL_bgl_string3166za700za7za7_3402za7, "u64vector-ref", 13 );
DEFINE_STRING( BGl_string3167z00zz__srfi4z00, BgL_bgl_string3167za700za7za7_3403za7, "_u64vector-ref", 14 );
DEFINE_STRING( BGl_string3170z00zz__srfi4z00, BgL_bgl_string3170za700za7za7_3404za7, "f32vector-ref", 13 );
DEFINE_STRING( BGl_string3169z00zz__srfi4z00, BgL_bgl_string3169za700za7za7_3405za7, "$f32vector-ref", 14 );
DEFINE_STRING( BGl_string3171z00zz__srfi4z00, BgL_bgl_string3171za700za7za7_3406za7, "_f32vector-ref", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__f64vectorza7d2set3407za7, BGl__f64vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__s32vectorza7d2set3408za7, BGl__s32vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3173z00zz__srfi4z00, BgL_bgl_string3173za700za7za7_3409za7, "$f64vector-ref", 14 );
DEFINE_STRING( BGl_string3174z00zz__srfi4z00, BgL_bgl_string3174za700za7za7_3410za7, "f64vector-ref", 13 );
DEFINE_STRING( BGl_string3175z00zz__srfi4z00, BgL_bgl_string3175za700za7za7_3411za7, "_f64vector-ref", 14 );
DEFINE_STRING( BGl_string3177z00zz__srfi4z00, BgL_bgl_string3177za700za7za7_3412za7, "$s8vector-set!", 14 );
DEFINE_STRING( BGl_string3178z00zz__srfi4z00, BgL_bgl_string3178za700za7za7_3413za7, "_s8vector-set!", 14 );
DEFINE_STRING( BGl_string3180z00zz__srfi4z00, BgL_bgl_string3180za700za7za7_3414za7, "$u8vector-set!", 14 );
DEFINE_STRING( BGl_string3181z00zz__srfi4z00, BgL_bgl_string3181za700za7za7_3415za7, "_u8vector-set!", 14 );
DEFINE_STRING( BGl_string3183z00zz__srfi4z00, BgL_bgl_string3183za700za7za7_3416za7, "$s16vector-set!", 15 );
DEFINE_STRING( BGl_string3184z00zz__srfi4z00, BgL_bgl_string3184za700za7za7_3417za7, "_s16vector-set!", 15 );
DEFINE_STRING( BGl_string3186z00zz__srfi4z00, BgL_bgl_string3186za700za7za7_3418za7, "$u16vector-set!", 15 );
DEFINE_STRING( BGl_string3187z00zz__srfi4z00, BgL_bgl_string3187za700za7za7_3419za7, "_u16vector-set!", 15 );
DEFINE_STRING( BGl_string3190z00zz__srfi4z00, BgL_bgl_string3190za700za7za7_3420za7, "_s32vector-set!", 15 );
DEFINE_STRING( BGl_string3189z00zz__srfi4z00, BgL_bgl_string3189za700za7za7_3421za7, "$s32vector-set!", 15 );
DEFINE_STRING( BGl_string3201z00zz__srfi4z00, BgL_bgl_string3201za700za7za7_3422za7, "$f32vector-set!", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u8vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3u8vec3423z00, BGl__listzd2ze3u8vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3202z00zz__srfi4z00, BgL_bgl_string3202za700za7za7_3424za7, "_f32vector-set!", 15 );
DEFINE_STRING( BGl_string3192z00zz__srfi4z00, BgL_bgl_string3192za700za7za7_3425za7, "$u32vector-set!", 15 );
DEFINE_STRING( BGl_string3193z00zz__srfi4z00, BgL_bgl_string3193za700za7za7_3426za7, "_u32vector-set!", 15 );
DEFINE_STRING( BGl_string3204z00zz__srfi4z00, BgL_bgl_string3204za700za7za7_3427za7, "$f64vector-set!", 15 );
DEFINE_STRING( BGl_string3205z00zz__srfi4z00, BgL_bgl_string3205za700za7za7_3428za7, "_f64vector-set!", 15 );
DEFINE_STRING( BGl_string3195z00zz__srfi4z00, BgL_bgl_string3195za700za7za7_3429za7, "$s64vector-set!", 15 );
DEFINE_STRING( BGl_string3206z00zz__srfi4z00, BgL_bgl_string3206za700za7za7_3430za7, "s8vector->list", 14 );
DEFINE_STRING( BGl_string3196z00zz__srfi4z00, BgL_bgl_string3196za700za7za7_3431za7, "_s64vector-set!", 15 );
DEFINE_STRING( BGl_string3207z00zz__srfi4z00, BgL_bgl_string3207za700za7za7_3432za7, "_s8vector->list", 15 );
DEFINE_STRING( BGl_string3208z00zz__srfi4z00, BgL_bgl_string3208za700za7za7_3433za7, "u8vector->list", 14 );
DEFINE_STRING( BGl_string3198z00zz__srfi4z00, BgL_bgl_string3198za700za7za7_3434za7, "$u64vector-set!", 15 );
DEFINE_STRING( BGl_string3210z00zz__srfi4z00, BgL_bgl_string3210za700za7za7_3435za7, "s16vector->list", 15 );
DEFINE_STRING( BGl_string3209z00zz__srfi4z00, BgL_bgl_string3209za700za7za7_3436za7, "_u8vector->list", 15 );
DEFINE_STRING( BGl_string3199z00zz__srfi4z00, BgL_bgl_string3199za700za7za7_3437za7, "_u64vector-set!", 15 );
DEFINE_STRING( BGl_string3211z00zz__srfi4z00, BgL_bgl_string3211za700za7za7_3438za7, "_s16vector->list", 16 );
DEFINE_STRING( BGl_string3212z00zz__srfi4z00, BgL_bgl_string3212za700za7za7_3439za7, "u16vector->list", 15 );
DEFINE_STRING( BGl_string3213z00zz__srfi4z00, BgL_bgl_string3213za700za7za7_3440za7, "_u16vector->list", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__f64vectorza7d2len3441za7, BGl__f64vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__s32vectorza7d2len3442za7, BGl__s32vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3214z00zz__srfi4z00, BgL_bgl_string3214za700za7za7_3443za7, "s32vector->list", 15 );
DEFINE_STRING( BGl_string3215z00zz__srfi4z00, BgL_bgl_string3215za700za7za7_3444za7, "_s32vector->list", 16 );
DEFINE_STRING( BGl_string3216z00zz__srfi4z00, BgL_bgl_string3216za700za7za7_3445za7, "u32vector->list", 15 );
DEFINE_STRING( BGl_string3217z00zz__srfi4z00, BgL_bgl_string3217za700za7za7_3446za7, "_u32vector->list", 16 );
DEFINE_STRING( BGl_string3218z00zz__srfi4z00, BgL_bgl_string3218za700za7za7_3447za7, "s64vector->list", 15 );
DEFINE_STRING( BGl_string3220z00zz__srfi4z00, BgL_bgl_string3220za700za7za7_3448za7, "u64vector->list", 15 );
DEFINE_STRING( BGl_string3219z00zz__srfi4z00, BgL_bgl_string3219za700za7za7_3449za7, "_s64vector->list", 16 );
DEFINE_STRING( BGl_string3221z00zz__srfi4z00, BgL_bgl_string3221za700za7za7_3450za7, "_u64vector->list", 16 );
DEFINE_STRING( BGl_string3222z00zz__srfi4z00, BgL_bgl_string3222za700za7za7_3451za7, "f32vector->list", 15 );
DEFINE_STRING( BGl_string3223z00zz__srfi4z00, BgL_bgl_string3223za700za7za7_3452za7, "_f32vector->list", 16 );
DEFINE_STRING( BGl_string3224z00zz__srfi4z00, BgL_bgl_string3224za700za7za7_3453za7, "f64vector->list", 15 );
DEFINE_STRING( BGl_string3225z00zz__srfi4z00, BgL_bgl_string3225za700za7za7_3454za7, "_f64vector->list", 16 );
DEFINE_STRING( BGl_string3226z00zz__srfi4z00, BgL_bgl_string3226za700za7za7_3455za7, "pair", 4 );
DEFINE_STRING( BGl_string3227z00zz__srfi4z00, BgL_bgl_string3227za700za7za7_3456za7, "_list->s8vector", 15 );
DEFINE_STRING( BGl_string3228z00zz__srfi4z00, BgL_bgl_string3228za700za7za7_3457za7, "_list->u8vector", 15 );
DEFINE_STRING( BGl_string3230z00zz__srfi4z00, BgL_bgl_string3230za700za7za7_3458za7, "_list->u16vector", 16 );
DEFINE_STRING( BGl_string3229z00zz__srfi4z00, BgL_bgl_string3229za700za7za7_3459za7, "_list->s16vector", 16 );
DEFINE_STRING( BGl_string3231z00zz__srfi4z00, BgL_bgl_string3231za700za7za7_3460za7, "_list->s32vector", 16 );
DEFINE_STRING( BGl_string3232z00zz__srfi4z00, BgL_bgl_string3232za700za7za7_3461za7, "_list->u32vector", 16 );
DEFINE_STRING( BGl_string3233z00zz__srfi4z00, BgL_bgl_string3233za700za7za7_3462za7, "_list->s64vector", 16 );
DEFINE_STRING( BGl_string3234z00zz__srfi4z00, BgL_bgl_string3234za700za7za7_3463za7, "_list->u64vector", 16 );
DEFINE_STRING( BGl_string3235z00zz__srfi4z00, BgL_bgl_string3235za700za7za7_3464za7, "_list->f32vector", 16 );
DEFINE_STRING( BGl_string3236z00zz__srfi4z00, BgL_bgl_string3236za700za7za7_3465za7, "_list->f64vector", 16 );
DEFINE_STRING( BGl_string3237z00zz__srfi4z00, BgL_bgl_string3237za700za7za7_3466za7, "__srfi4", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__u64vectorza7d2za7e33467z00, BGl__u64vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2f32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2f32vecto3468za7, opt_generic_entry, BGl__makezd2f32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2envzd2zz__srfi4z00, BgL_bgl__s64vectorza700za7za7_3469za7, va_generic_entry, BGl__s64vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__u64vectorza7d2len3470za7, BGl__u64vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__u32vectorza7f3za7f33471z00, BGl__u32vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_REAL( BGl_real3128z00zz__srfi4z00, BgL_bgl_real3128za700za7za7__s3472za7, 0.0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s64vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3s64ve3473z00, BGl__listzd2ze3s64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__u8vectorza7d2za7e3l3474z00, BGl__u8vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__f64vectorza7f3za7f33475z00, BGl__f64vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__s32vectorza7f3za7f33476z00, BGl__s32vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__u16vectorza7d2za7e33477z00, BGl__u16vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__s8vectorza7d2leng3478za7, BGl__s8vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__s16vectorza7d2len3479za7, BGl__s16vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2envzd2zz__srfi4z00, BgL_bgl__u16vectorza700za7za7_3480za7, va_generic_entry, BGl__u16vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_LLONG( BGl_llong3119z00zz__srfi4z00, BgL_bgl_llong3119za700za7za7__3481za7, ((BGL_LONGLONG_T)0) );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2envzd2zz__srfi4z00, BgL_bgl__f64vectorza700za7za7_3482za7, va_generic_entry, BGl__f64vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2envzd2zz__srfi4z00, BgL_bgl__s32vectorza700za7za7_3483za7, va_generic_entry, BGl__s32vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u64vecto3484za7, opt_generic_entry, BGl__makezd2u64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u16vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3u16ve3485z00, BGl__listzd2ze3u16vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__s64vectorza7d2set3486za7, BGl__s64vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3f64vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3f64ve3487z00, BGl__listzd2ze3f64vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s32vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3s32ve3488z00, BGl__listzd2ze3s32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__u8vectorza7d2refza73489z00, BGl__u8vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_homogeneouszd2vectorzd2infozd2envzd2zz__srfi4z00, BgL_bgl__homogeneousza7d2v3490za7, BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__s8vectorza7d2setza73491z00, BGl__s8vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl__u32vectorza7d2set3492za7, BGl__u32vectorzd2setz12zc0zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl__f32vectorza7d2za7e33493z00, BGl__f32vectorzd2ze3listz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2envzd2zz__srfi4z00, BgL_bgl__f32vectorza700za7za7_3494za7, va_generic_entry, BGl__f32vectorz00zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u32vecto3495za7, opt_generic_entry, BGl__makezd2u32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__s16vectorza7d2ref3496za7, BGl__s16vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__u8vectorza7f3za7f3za73497za7, BGl__u8vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl__f32vectorza7d2ref3498za7, BGl__f32vectorzd2refzd2zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3f32vectorzd2envze3zz__srfi4z00, BgL_bgl__listza7d2za7e3f32ve3499z00, BGl__listzd2ze3f32vectorz31zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl__s64vectorza7d2len3500za7, BGl__s64vectorzd2lengthzd2zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl__f32vectorza7f3za7f33501z00, BGl__f32vectorzf3zf3zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s16vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s16vecto3502za7, opt_generic_entry, BGl__makezd2s16vectorzd2zz__srfi4z00, BFALSE, -1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long BgL_checksumz00_3732, char * BgL_fromz00_3733)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__srfi4z00))
{ 
BGl_requirezd2initializa7ationz75zz__srfi4z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__srfi4z00(); 
BGl_importedzd2moduleszd2initz00zz__srfi4z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__srfi4z00()
{ AN_OBJECT;
{ /* Llib/srfi4.scm 15 */
BGl_symbol3044z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3045z00zz__srfi4z00); 
BGl_symbol3047z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3048z00zz__srfi4z00); 
BGl_symbol3049z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3050z00zz__srfi4z00); 
BGl_symbol3051z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3052z00zz__srfi4z00); 
BGl_symbol3053z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3054z00zz__srfi4z00); 
BGl_symbol3055z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3056z00zz__srfi4z00); 
BGl_symbol3057z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3058z00zz__srfi4z00); 
BGl_symbol3059z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3060z00zz__srfi4z00); 
BGl_symbol3061z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3062z00zz__srfi4z00); 
BGl_symbol3063z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3064z00zz__srfi4z00); 
BGl_symbol3065z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3066z00zz__srfi4z00); 
BGl_symbol3090z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3091z00zz__srfi4z00); 
BGl_symbol3097z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3098z00zz__srfi4z00); 
BGl_symbol3101z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3102z00zz__srfi4z00); 
BGl_symbol3105z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3106z00zz__srfi4z00); 
BGl_symbol3109z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3110z00zz__srfi4z00); 
BGl_symbol3112z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3113z00zz__srfi4z00); 
BGl_symbol3116z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3117z00zz__srfi4z00); 
BGl_symbol3121z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3122z00zz__srfi4z00); 
BGl_symbol3125z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3126z00zz__srfi4z00); 
BGl_symbol3130z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3131z00zz__srfi4z00); 
BGl_symbol3134z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3135z00zz__srfi4z00); 
BGl_symbol3140z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3141z00zz__srfi4z00); 
BGl_symbol3144z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3145z00zz__srfi4z00); 
BGl_symbol3148z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3149z00zz__srfi4z00); 
BGl_symbol3152z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3153z00zz__srfi4z00); 
BGl_symbol3156z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3157z00zz__srfi4z00); 
BGl_symbol3160z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3161z00zz__srfi4z00); 
BGl_symbol3164z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3165z00zz__srfi4z00); 
BGl_symbol3168z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3169z00zz__srfi4z00); 
BGl_symbol3172z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3173z00zz__srfi4z00); 
BGl_symbol3176z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3177z00zz__srfi4z00); 
BGl_symbol3179z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3180z00zz__srfi4z00); 
BGl_symbol3182z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3183z00zz__srfi4z00); 
BGl_symbol3185z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3186z00zz__srfi4z00); 
BGl_symbol3188z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3189z00zz__srfi4z00); 
BGl_symbol3191z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3192z00zz__srfi4z00); 
BGl_symbol3194z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3195z00zz__srfi4z00); 
BGl_symbol3197z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3198z00zz__srfi4z00); 
BGl_symbol3200z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3201z00zz__srfi4z00); 
return ( 
BGl_symbol3203z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3204z00zz__srfi4z00), BUNSPEC) ;} 
}



/* homogeneous-vector? */
BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t BgL_xz00_1)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 325 */
return 
BBOOL(
BGL_HVECTORP(BgL_xz00_1));} 
}



/* _homogeneous-vector? */
obj_t BGl__homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t BgL_envz00_2737, obj_t BgL_xz00_2738)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 325 */
return 
BBOOL(
BGL_HVECTORP(BgL_xz00_2738));} 
}



/* s8vector? */
BGL_EXPORTED_DEF bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_2)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 326 */
return 
BGL_S8VECTORP(BgL_xz00_2);} 
}



/* _s8vector? */
obj_t BGl__s8vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2739, obj_t BgL_xz00_2740)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 326 */
return 
BBOOL(
BGL_S8VECTORP(BgL_xz00_2740));} 
}



/* u8vector? */
BGL_EXPORTED_DEF bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_3)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 327 */
return 
BGL_U8VECTORP(BgL_xz00_3);} 
}



/* _u8vector? */
obj_t BGl__u8vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2741, obj_t BgL_xz00_2742)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 327 */
return 
BBOOL(
BGL_U8VECTORP(BgL_xz00_2742));} 
}



/* s16vector? */
BGL_EXPORTED_DEF bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_4)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 328 */
return 
BGL_S16VECTORP(BgL_xz00_4);} 
}



/* _s16vector? */
obj_t BGl__s16vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2743, obj_t BgL_xz00_2744)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 328 */
return 
BBOOL(
BGL_S16VECTORP(BgL_xz00_2744));} 
}



/* u16vector? */
BGL_EXPORTED_DEF bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_5)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 329 */
return 
BGL_U16VECTORP(BgL_xz00_5);} 
}



/* _u16vector? */
obj_t BGl__u16vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2745, obj_t BgL_xz00_2746)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 329 */
return 
BBOOL(
BGL_U16VECTORP(BgL_xz00_2746));} 
}



/* s32vector? */
BGL_EXPORTED_DEF bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_6)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 330 */
return 
BGL_S32VECTORP(BgL_xz00_6);} 
}



/* _s32vector? */
obj_t BGl__s32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2747, obj_t BgL_xz00_2748)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 330 */
return 
BBOOL(
BGL_S32VECTORP(BgL_xz00_2748));} 
}



/* u32vector? */
BGL_EXPORTED_DEF bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_7)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 331 */
return 
BGL_U32VECTORP(BgL_xz00_7);} 
}



/* _u32vector? */
obj_t BGl__u32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2749, obj_t BgL_xz00_2750)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 331 */
return 
BBOOL(
BGL_U32VECTORP(BgL_xz00_2750));} 
}



/* s64vector? */
BGL_EXPORTED_DEF bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_8)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 332 */
return 
BGL_S64VECTORP(BgL_xz00_8);} 
}



/* _s64vector? */
obj_t BGl__s64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2751, obj_t BgL_xz00_2752)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 332 */
return 
BBOOL(
BGL_S64VECTORP(BgL_xz00_2752));} 
}



/* u64vector? */
BGL_EXPORTED_DEF bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_9)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 333 */
return 
BGL_U64VECTORP(BgL_xz00_9);} 
}



/* _u64vector? */
obj_t BGl__u64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2753, obj_t BgL_xz00_2754)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 333 */
return 
BBOOL(
BGL_U64VECTORP(BgL_xz00_2754));} 
}



/* f32vector? */
BGL_EXPORTED_DEF bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_10)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 334 */
return 
BGL_F32VECTORP(BgL_xz00_10);} 
}



/* _f32vector? */
obj_t BGl__f32vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2755, obj_t BgL_xz00_2756)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 334 */
return 
BBOOL(
BGL_F32VECTORP(BgL_xz00_2756));} 
}



/* f64vector? */
BGL_EXPORTED_DEF bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_11)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 335 */
return 
BGL_F64VECTORP(BgL_xz00_11);} 
}



/* _f64vector? */
obj_t BGl__f64vectorzf3zf3zz__srfi4z00(obj_t BgL_envz00_2757, obj_t BgL_xz00_2758)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 335 */
return 
BBOOL(
BGL_F64VECTORP(BgL_xz00_2758));} 
}



/* homogeneous-vector-info */
BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t BgL_oz00_12)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 340 */
if(
BGL_HVECTORP(BgL_oz00_12))
{ 

{ /* Llib/srfi4.scm 342 */
int BgL_aux1828z00_909;
BgL_aux1828z00_909 = 
BGL_HVECTOR_IDENT(BgL_oz00_12); 
switch( 
(long)(BgL_aux1828z00_909)) { case ((long)0) : 

{ /* Llib/srfi4.scm 346 */
obj_t BgL_val0_1891z00_911;
BgL_val0_1891z00_911 = BGl_symbol3047z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 346 */
int BgL_auxz00_3817;
BgL_auxz00_3817 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3817); } 
{ /* Llib/srfi4.scm 346 */
obj_t BgL_auxz00_3822;int BgL_auxz00_3820;
BgL_auxz00_3822 = 
BINT(((long)1)); 
BgL_auxz00_3820 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3820, BgL_auxz00_3822); } 
{ /* Llib/srfi4.scm 346 */
int BgL_auxz00_3825;
BgL_auxz00_3825 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3825, BGl_s8vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 346 */
int BgL_auxz00_3828;
BgL_auxz00_3828 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3828, BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1891z00_911;} break;case ((long)1) : 

{ /* Llib/srfi4.scm 348 */
obj_t BgL_val0_1895z00_915;
BgL_val0_1895z00_915 = BGl_symbol3049z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 348 */
int BgL_auxz00_3831;
BgL_auxz00_3831 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3831); } 
{ /* Llib/srfi4.scm 348 */
obj_t BgL_auxz00_3836;int BgL_auxz00_3834;
BgL_auxz00_3836 = 
BINT(((long)1)); 
BgL_auxz00_3834 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3834, BgL_auxz00_3836); } 
{ /* Llib/srfi4.scm 348 */
int BgL_auxz00_3839;
BgL_auxz00_3839 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3839, BGl_u8vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 348 */
int BgL_auxz00_3842;
BgL_auxz00_3842 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3842, BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1895z00_915;} break;case ((long)2) : 

{ /* Llib/srfi4.scm 350 */
obj_t BgL_val0_1899z00_919;
BgL_val0_1899z00_919 = BGl_symbol3051z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 350 */
int BgL_auxz00_3845;
BgL_auxz00_3845 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3845); } 
{ /* Llib/srfi4.scm 350 */
obj_t BgL_auxz00_3850;int BgL_auxz00_3848;
BgL_auxz00_3850 = 
BINT(((long)2)); 
BgL_auxz00_3848 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3848, BgL_auxz00_3850); } 
{ /* Llib/srfi4.scm 350 */
int BgL_auxz00_3853;
BgL_auxz00_3853 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3853, BGl_s16vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 350 */
int BgL_auxz00_3856;
BgL_auxz00_3856 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3856, BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1899z00_919;} break;case ((long)3) : 

{ /* Llib/srfi4.scm 352 */
obj_t BgL_val0_1903z00_923;
BgL_val0_1903z00_923 = BGl_symbol3053z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 352 */
int BgL_auxz00_3859;
BgL_auxz00_3859 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3859); } 
{ /* Llib/srfi4.scm 352 */
obj_t BgL_auxz00_3864;int BgL_auxz00_3862;
BgL_auxz00_3864 = 
BINT(((long)2)); 
BgL_auxz00_3862 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3862, BgL_auxz00_3864); } 
{ /* Llib/srfi4.scm 352 */
int BgL_auxz00_3867;
BgL_auxz00_3867 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3867, BGl_u16vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 352 */
int BgL_auxz00_3870;
BgL_auxz00_3870 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3870, BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1903z00_923;} break;case ((long)4) : 

{ /* Llib/srfi4.scm 354 */
obj_t BgL_val0_1907z00_927;
BgL_val0_1907z00_927 = BGl_symbol3055z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 354 */
int BgL_auxz00_3873;
BgL_auxz00_3873 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3873); } 
{ /* Llib/srfi4.scm 354 */
obj_t BgL_auxz00_3878;int BgL_auxz00_3876;
BgL_auxz00_3878 = 
BINT(((long)4)); 
BgL_auxz00_3876 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3876, BgL_auxz00_3878); } 
{ /* Llib/srfi4.scm 354 */
int BgL_auxz00_3881;
BgL_auxz00_3881 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3881, BGl_s32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 354 */
int BgL_auxz00_3884;
BgL_auxz00_3884 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3884, BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1907z00_927;} break;case ((long)5) : 

{ /* Llib/srfi4.scm 356 */
obj_t BgL_val0_1911z00_931;
BgL_val0_1911z00_931 = BGl_symbol3057z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 356 */
int BgL_auxz00_3887;
BgL_auxz00_3887 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3887); } 
{ /* Llib/srfi4.scm 356 */
obj_t BgL_auxz00_3892;int BgL_auxz00_3890;
BgL_auxz00_3892 = 
BINT(((long)4)); 
BgL_auxz00_3890 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3890, BgL_auxz00_3892); } 
{ /* Llib/srfi4.scm 356 */
int BgL_auxz00_3895;
BgL_auxz00_3895 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3895, BGl_u32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 356 */
int BgL_auxz00_3898;
BgL_auxz00_3898 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3898, BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1911z00_931;} break;case ((long)6) : 

{ /* Llib/srfi4.scm 358 */
obj_t BgL_val0_1915z00_935;
BgL_val0_1915z00_935 = BGl_symbol3059z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 358 */
int BgL_auxz00_3901;
BgL_auxz00_3901 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3901); } 
{ /* Llib/srfi4.scm 358 */
obj_t BgL_auxz00_3906;int BgL_auxz00_3904;
BgL_auxz00_3906 = 
BINT(((long)8)); 
BgL_auxz00_3904 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3904, BgL_auxz00_3906); } 
{ /* Llib/srfi4.scm 358 */
int BgL_auxz00_3909;
BgL_auxz00_3909 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3909, BGl_s64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 358 */
int BgL_auxz00_3912;
BgL_auxz00_3912 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3912, BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1915z00_935;} break;case ((long)7) : 

{ /* Llib/srfi4.scm 360 */
obj_t BgL_val0_1919z00_939;
BgL_val0_1919z00_939 = BGl_symbol3061z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 360 */
int BgL_auxz00_3915;
BgL_auxz00_3915 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3915); } 
{ /* Llib/srfi4.scm 360 */
obj_t BgL_auxz00_3920;int BgL_auxz00_3918;
BgL_auxz00_3920 = 
BINT(((long)8)); 
BgL_auxz00_3918 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3918, BgL_auxz00_3920); } 
{ /* Llib/srfi4.scm 360 */
int BgL_auxz00_3923;
BgL_auxz00_3923 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3923, BGl_u64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 360 */
int BgL_auxz00_3926;
BgL_auxz00_3926 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3926, BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1919z00_939;} break;case ((long)8) : 

{ /* Llib/srfi4.scm 362 */
obj_t BgL_val0_1923z00_943;
BgL_val0_1923z00_943 = BGl_symbol3063z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 362 */
int BgL_auxz00_3929;
BgL_auxz00_3929 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3929); } 
{ /* Llib/srfi4.scm 362 */
obj_t BgL_auxz00_3934;int BgL_auxz00_3932;
BgL_auxz00_3934 = 
BINT(((long)4)); 
BgL_auxz00_3932 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3932, BgL_auxz00_3934); } 
{ /* Llib/srfi4.scm 362 */
int BgL_auxz00_3937;
BgL_auxz00_3937 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3937, BGl_f32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 362 */
int BgL_auxz00_3940;
BgL_auxz00_3940 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3940, BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1923z00_943;} break;case ((long)9) : 

{ /* Llib/srfi4.scm 364 */
obj_t BgL_val0_1927z00_947;
BgL_val0_1927z00_947 = BGl_symbol3065z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 364 */
int BgL_auxz00_3943;
BgL_auxz00_3943 = 
(int)(((long)4)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_3943); } 
{ /* Llib/srfi4.scm 364 */
obj_t BgL_auxz00_3948;int BgL_auxz00_3946;
BgL_auxz00_3948 = 
BINT(((long)8)); 
BgL_auxz00_3946 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3946, BgL_auxz00_3948); } 
{ /* Llib/srfi4.scm 364 */
int BgL_auxz00_3951;
BgL_auxz00_3951 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3951, BGl_f64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 364 */
int BgL_auxz00_3954;
BgL_auxz00_3954 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_3954, BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00); } 
return BgL_val0_1927z00_947;} break;
default: 
{ /* Llib/srfi4.scm 366 */
obj_t BgL_arg2008z00_951;int BgL_arg2010z00_953;
BgL_arg2008z00_951 = BGl_symbol3044z00zz__srfi4z00; 
BgL_arg2010z00_953 = 
BGL_HVECTOR_IDENT(BgL_oz00_12); 
return 
BGl_errorz00zz__errorz00(BgL_arg2008z00_951, BGl_string3046z00zz__srfi4z00, 
BINT(BgL_arg2010z00_953));} } } }  else 
{ /* Llib/srfi4.scm 341 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol3044z00zz__srfi4z00, BGl_string3067z00zz__srfi4z00, BgL_oz00_12);} } 
}



/* _homogeneous-vector-info */
obj_t BGl__homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t BgL_envz00_2759, obj_t BgL_oz00_2760)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 340 */
return 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_oz00_2760);} 
}



/* s8vector-length */
BGL_EXPORTED_DEF long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_13)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 374 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_13);} 
}



/* _s8vector-length */
obj_t BGl__s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2831, obj_t BgL_xz00_2832)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 374 */
{ /* Llib/srfi4.scm 374 */
long BgL_auxz00_3965;
{ /* Llib/srfi4.scm 374 */
obj_t BgL_xz00_3262;
if(
BGL_S8VECTORP(BgL_xz00_2832))
{ /* Llib/srfi4.scm 374 */
BgL_xz00_3262 = BgL_xz00_2832; }  else 
{ 
obj_t BgL_auxz00_3968;
BgL_auxz00_3968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15171)), BGl_string3069z00zz__srfi4z00, BGl_string3070z00zz__srfi4z00, BgL_xz00_2832); 
FAILURE(BgL_auxz00_3968,BFALSE,BFALSE);} 
BgL_auxz00_3965 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3262); } 
return 
BINT(BgL_auxz00_3965);} } 
}



/* u8vector-length */
BGL_EXPORTED_DEF long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_14)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 375 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_14);} 
}



/* _u8vector-length */
obj_t BGl__u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2833, obj_t BgL_xz00_2834)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 375 */
{ /* Llib/srfi4.scm 375 */
long BgL_auxz00_3975;
{ /* Llib/srfi4.scm 375 */
obj_t BgL_xz00_3263;
if(
BGL_U8VECTORP(BgL_xz00_2834))
{ /* Llib/srfi4.scm 375 */
BgL_xz00_3263 = BgL_xz00_2834; }  else 
{ 
obj_t BgL_auxz00_3978;
BgL_auxz00_3978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15227)), BGl_string3071z00zz__srfi4z00, BGl_string3072z00zz__srfi4z00, BgL_xz00_2834); 
FAILURE(BgL_auxz00_3978,BFALSE,BFALSE);} 
BgL_auxz00_3975 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3263); } 
return 
BINT(BgL_auxz00_3975);} } 
}



/* s16vector-length */
BGL_EXPORTED_DEF long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_15)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 376 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_15);} 
}



/* _s16vector-length */
obj_t BGl__s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2835, obj_t BgL_xz00_2836)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 376 */
{ /* Llib/srfi4.scm 376 */
long BgL_auxz00_3985;
{ /* Llib/srfi4.scm 376 */
obj_t BgL_xz00_3264;
if(
BGL_S16VECTORP(BgL_xz00_2836))
{ /* Llib/srfi4.scm 376 */
BgL_xz00_3264 = BgL_xz00_2836; }  else 
{ 
obj_t BgL_auxz00_3988;
BgL_auxz00_3988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15284)), BGl_string3073z00zz__srfi4z00, BGl_string3074z00zz__srfi4z00, BgL_xz00_2836); 
FAILURE(BgL_auxz00_3988,BFALSE,BFALSE);} 
BgL_auxz00_3985 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3264); } 
return 
BINT(BgL_auxz00_3985);} } 
}



/* u16vector-length */
BGL_EXPORTED_DEF long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_16)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 377 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_16);} 
}



/* _u16vector-length */
obj_t BGl__u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2837, obj_t BgL_xz00_2838)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 377 */
{ /* Llib/srfi4.scm 377 */
long BgL_auxz00_3995;
{ /* Llib/srfi4.scm 377 */
obj_t BgL_xz00_3265;
if(
BGL_U16VECTORP(BgL_xz00_2838))
{ /* Llib/srfi4.scm 377 */
BgL_xz00_3265 = BgL_xz00_2838; }  else 
{ 
obj_t BgL_auxz00_3998;
BgL_auxz00_3998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15341)), BGl_string3075z00zz__srfi4z00, BGl_string3076z00zz__srfi4z00, BgL_xz00_2838); 
FAILURE(BgL_auxz00_3998,BFALSE,BFALSE);} 
BgL_auxz00_3995 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3265); } 
return 
BINT(BgL_auxz00_3995);} } 
}



/* s32vector-length */
BGL_EXPORTED_DEF long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_17)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 378 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_17);} 
}



/* _s32vector-length */
obj_t BGl__s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2839, obj_t BgL_xz00_2840)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 378 */
{ /* Llib/srfi4.scm 378 */
long BgL_auxz00_4005;
{ /* Llib/srfi4.scm 378 */
obj_t BgL_xz00_3266;
if(
BGL_S32VECTORP(BgL_xz00_2840))
{ /* Llib/srfi4.scm 378 */
BgL_xz00_3266 = BgL_xz00_2840; }  else 
{ 
obj_t BgL_auxz00_4008;
BgL_auxz00_4008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15398)), BGl_string3077z00zz__srfi4z00, BGl_string3078z00zz__srfi4z00, BgL_xz00_2840); 
FAILURE(BgL_auxz00_4008,BFALSE,BFALSE);} 
BgL_auxz00_4005 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3266); } 
return 
BINT(BgL_auxz00_4005);} } 
}



/* u32vector-length */
BGL_EXPORTED_DEF long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_18)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 379 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_18);} 
}



/* _u32vector-length */
obj_t BGl__u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2841, obj_t BgL_xz00_2842)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 379 */
{ /* Llib/srfi4.scm 379 */
long BgL_auxz00_4015;
{ /* Llib/srfi4.scm 379 */
obj_t BgL_xz00_3267;
if(
BGL_U32VECTORP(BgL_xz00_2842))
{ /* Llib/srfi4.scm 379 */
BgL_xz00_3267 = BgL_xz00_2842; }  else 
{ 
obj_t BgL_auxz00_4018;
BgL_auxz00_4018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15455)), BGl_string3079z00zz__srfi4z00, BGl_string3080z00zz__srfi4z00, BgL_xz00_2842); 
FAILURE(BgL_auxz00_4018,BFALSE,BFALSE);} 
BgL_auxz00_4015 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3267); } 
return 
BINT(BgL_auxz00_4015);} } 
}



/* s64vector-length */
BGL_EXPORTED_DEF long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_19)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 380 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_19);} 
}



/* _s64vector-length */
obj_t BGl__s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2843, obj_t BgL_xz00_2844)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 380 */
{ /* Llib/srfi4.scm 380 */
long BgL_auxz00_4025;
{ /* Llib/srfi4.scm 380 */
obj_t BgL_xz00_3268;
if(
BGL_S64VECTORP(BgL_xz00_2844))
{ /* Llib/srfi4.scm 380 */
BgL_xz00_3268 = BgL_xz00_2844; }  else 
{ 
obj_t BgL_auxz00_4028;
BgL_auxz00_4028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15512)), BGl_string3081z00zz__srfi4z00, BGl_string3082z00zz__srfi4z00, BgL_xz00_2844); 
FAILURE(BgL_auxz00_4028,BFALSE,BFALSE);} 
BgL_auxz00_4025 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3268); } 
return 
BINT(BgL_auxz00_4025);} } 
}



/* u64vector-length */
BGL_EXPORTED_DEF long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_20)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 381 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_20);} 
}



/* _u64vector-length */
obj_t BGl__u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2845, obj_t BgL_xz00_2846)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 381 */
{ /* Llib/srfi4.scm 381 */
long BgL_auxz00_4035;
{ /* Llib/srfi4.scm 381 */
obj_t BgL_xz00_3269;
if(
BGL_U64VECTORP(BgL_xz00_2846))
{ /* Llib/srfi4.scm 381 */
BgL_xz00_3269 = BgL_xz00_2846; }  else 
{ 
obj_t BgL_auxz00_4038;
BgL_auxz00_4038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15569)), BGl_string3083z00zz__srfi4z00, BGl_string3084z00zz__srfi4z00, BgL_xz00_2846); 
FAILURE(BgL_auxz00_4038,BFALSE,BFALSE);} 
BgL_auxz00_4035 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3269); } 
return 
BINT(BgL_auxz00_4035);} } 
}



/* f32vector-length */
BGL_EXPORTED_DEF long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_21)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 382 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_21);} 
}



/* _f32vector-length */
obj_t BGl__f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2847, obj_t BgL_xz00_2848)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 382 */
{ /* Llib/srfi4.scm 382 */
long BgL_auxz00_4045;
{ /* Llib/srfi4.scm 382 */
obj_t BgL_xz00_3270;
if(
BGL_F32VECTORP(BgL_xz00_2848))
{ /* Llib/srfi4.scm 382 */
BgL_xz00_3270 = BgL_xz00_2848; }  else 
{ 
obj_t BgL_auxz00_4048;
BgL_auxz00_4048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15626)), BGl_string3085z00zz__srfi4z00, BGl_string3086z00zz__srfi4z00, BgL_xz00_2848); 
FAILURE(BgL_auxz00_4048,BFALSE,BFALSE);} 
BgL_auxz00_4045 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3270); } 
return 
BINT(BgL_auxz00_4045);} } 
}



/* f64vector-length */
BGL_EXPORTED_DEF long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_22)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 383 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_22);} 
}



/* _f64vector-length */
obj_t BGl__f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_envz00_2849, obj_t BgL_xz00_2850)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 383 */
{ /* Llib/srfi4.scm 383 */
long BgL_auxz00_4055;
{ /* Llib/srfi4.scm 383 */
obj_t BgL_xz00_3271;
if(
BGL_F64VECTORP(BgL_xz00_2850))
{ /* Llib/srfi4.scm 383 */
BgL_xz00_3271 = BgL_xz00_2850; }  else 
{ 
obj_t BgL_auxz00_4058;
BgL_auxz00_4058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)15683)), BGl_string3087z00zz__srfi4z00, BGl_string3088z00zz__srfi4z00, BgL_xz00_2850); 
FAILURE(BgL_auxz00_4058,BFALSE,BFALSE);} 
BgL_auxz00_4055 = 
BGL_HVECTOR_LENGTH(BgL_xz00_3271); } 
return 
BINT(BgL_auxz00_4055);} } 
}



/* s8vector */
BGL_EXPORTED_DEF obj_t BGl_s8vectorz00zz__srfi4z00(obj_t BgL_xz00_23)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4064;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4065;
if(
PAIRP(BgL_xz00_23))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4065 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4065 = 
NULLP(BgL_xz00_23)
; } 
if(BgL_testz00_4065)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4064 = BgL_xz00_23
; }  else 
{ 
obj_t BgL_auxz00_4069;
BgL_auxz00_4069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3070z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_23); 
FAILURE(BgL_auxz00_4069,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_4064);} } 
}



/* _s8vector */
obj_t BGl__s8vectorz00zz__srfi4z00(obj_t BgL_envz00_2851, obj_t BgL_xz00_2852)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_s8vectorz00zz__srfi4z00(BgL_xz00_2852);} 
}



/* u8vector */
BGL_EXPORTED_DEF obj_t BGl_u8vectorz00zz__srfi4z00(obj_t BgL_xz00_24)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4075;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4076;
if(
PAIRP(BgL_xz00_24))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4076 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4076 = 
NULLP(BgL_xz00_24)
; } 
if(BgL_testz00_4076)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4075 = BgL_xz00_24
; }  else 
{ 
obj_t BgL_auxz00_4080;
BgL_auxz00_4080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3072z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_24); 
FAILURE(BgL_auxz00_4080,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_4075);} } 
}



/* _u8vector */
obj_t BGl__u8vectorz00zz__srfi4z00(obj_t BgL_envz00_2853, obj_t BgL_xz00_2854)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_u8vectorz00zz__srfi4z00(BgL_xz00_2854);} 
}



/* s16vector */
BGL_EXPORTED_DEF obj_t BGl_s16vectorz00zz__srfi4z00(obj_t BgL_xz00_25)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4086;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4087;
if(
PAIRP(BgL_xz00_25))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4087 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4087 = 
NULLP(BgL_xz00_25)
; } 
if(BgL_testz00_4087)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4086 = BgL_xz00_25
; }  else 
{ 
obj_t BgL_auxz00_4091;
BgL_auxz00_4091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3074z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_25); 
FAILURE(BgL_auxz00_4091,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_4086);} } 
}



/* _s16vector */
obj_t BGl__s16vectorz00zz__srfi4z00(obj_t BgL_envz00_2855, obj_t BgL_xz00_2856)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_s16vectorz00zz__srfi4z00(BgL_xz00_2856);} 
}



/* u16vector */
BGL_EXPORTED_DEF obj_t BGl_u16vectorz00zz__srfi4z00(obj_t BgL_xz00_26)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4097;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4098;
if(
PAIRP(BgL_xz00_26))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4098 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4098 = 
NULLP(BgL_xz00_26)
; } 
if(BgL_testz00_4098)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4097 = BgL_xz00_26
; }  else 
{ 
obj_t BgL_auxz00_4102;
BgL_auxz00_4102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3076z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_26); 
FAILURE(BgL_auxz00_4102,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_4097);} } 
}



/* _u16vector */
obj_t BGl__u16vectorz00zz__srfi4z00(obj_t BgL_envz00_2857, obj_t BgL_xz00_2858)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_u16vectorz00zz__srfi4z00(BgL_xz00_2858);} 
}



/* s32vector */
BGL_EXPORTED_DEF obj_t BGl_s32vectorz00zz__srfi4z00(obj_t BgL_xz00_27)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4108;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4109;
if(
PAIRP(BgL_xz00_27))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4109 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4109 = 
NULLP(BgL_xz00_27)
; } 
if(BgL_testz00_4109)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4108 = BgL_xz00_27
; }  else 
{ 
obj_t BgL_auxz00_4113;
BgL_auxz00_4113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3078z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_27); 
FAILURE(BgL_auxz00_4113,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_4108);} } 
}



/* _s32vector */
obj_t BGl__s32vectorz00zz__srfi4z00(obj_t BgL_envz00_2859, obj_t BgL_xz00_2860)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_s32vectorz00zz__srfi4z00(BgL_xz00_2860);} 
}



/* u32vector */
BGL_EXPORTED_DEF obj_t BGl_u32vectorz00zz__srfi4z00(obj_t BgL_xz00_28)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4119;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4120;
if(
PAIRP(BgL_xz00_28))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4120 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4120 = 
NULLP(BgL_xz00_28)
; } 
if(BgL_testz00_4120)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4119 = BgL_xz00_28
; }  else 
{ 
obj_t BgL_auxz00_4124;
BgL_auxz00_4124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3080z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_28); 
FAILURE(BgL_auxz00_4124,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_4119);} } 
}



/* _u32vector */
obj_t BGl__u32vectorz00zz__srfi4z00(obj_t BgL_envz00_2861, obj_t BgL_xz00_2862)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_u32vectorz00zz__srfi4z00(BgL_xz00_2862);} 
}



/* s64vector */
BGL_EXPORTED_DEF obj_t BGl_s64vectorz00zz__srfi4z00(obj_t BgL_xz00_29)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4130;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4131;
if(
PAIRP(BgL_xz00_29))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4131 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4131 = 
NULLP(BgL_xz00_29)
; } 
if(BgL_testz00_4131)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4130 = BgL_xz00_29
; }  else 
{ 
obj_t BgL_auxz00_4135;
BgL_auxz00_4135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3082z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_29); 
FAILURE(BgL_auxz00_4135,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_4130);} } 
}



/* _s64vector */
obj_t BGl__s64vectorz00zz__srfi4z00(obj_t BgL_envz00_2863, obj_t BgL_xz00_2864)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_s64vectorz00zz__srfi4z00(BgL_xz00_2864);} 
}



/* u64vector */
BGL_EXPORTED_DEF obj_t BGl_u64vectorz00zz__srfi4z00(obj_t BgL_xz00_30)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4141;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4142;
if(
PAIRP(BgL_xz00_30))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4142 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4142 = 
NULLP(BgL_xz00_30)
; } 
if(BgL_testz00_4142)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4141 = BgL_xz00_30
; }  else 
{ 
obj_t BgL_auxz00_4146;
BgL_auxz00_4146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3084z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_30); 
FAILURE(BgL_auxz00_4146,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_4141);} } 
}



/* _u64vector */
obj_t BGl__u64vectorz00zz__srfi4z00(obj_t BgL_envz00_2865, obj_t BgL_xz00_2866)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_u64vectorz00zz__srfi4z00(BgL_xz00_2866);} 
}



/* f32vector */
BGL_EXPORTED_DEF obj_t BGl_f32vectorz00zz__srfi4z00(obj_t BgL_xz00_31)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4152;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4153;
if(
PAIRP(BgL_xz00_31))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4153 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4153 = 
NULLP(BgL_xz00_31)
; } 
if(BgL_testz00_4153)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4152 = BgL_xz00_31
; }  else 
{ 
obj_t BgL_auxz00_4157;
BgL_auxz00_4157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3086z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_31); 
FAILURE(BgL_auxz00_4157,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_4152);} } 
}



/* _f32vector */
obj_t BGl__f32vectorz00zz__srfi4z00(obj_t BgL_envz00_2867, obj_t BgL_xz00_2868)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_f32vectorz00zz__srfi4z00(BgL_xz00_2868);} 
}



/* f64vector */
BGL_EXPORTED_DEF obj_t BGl_f64vectorz00zz__srfi4z00(obj_t BgL_xz00_32)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
{ /* Llib/srfi4.scm 394 */
obj_t BgL_auxz00_4163;
{ /* Llib/srfi4.scm 394 */
bool_t BgL_testz00_4164;
if(
PAIRP(BgL_xz00_32))
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4164 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 394 */
BgL_testz00_4164 = 
NULLP(BgL_xz00_32)
; } 
if(BgL_testz00_4164)
{ /* Llib/srfi4.scm 394 */
BgL_auxz00_4163 = BgL_xz00_32
; }  else 
{ 
obj_t BgL_auxz00_4168;
BgL_auxz00_4168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16150)), BGl_string3088z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_32); 
FAILURE(BgL_auxz00_4168,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_4163);} } 
}



/* _f64vector */
obj_t BGl__f64vectorz00zz__srfi4z00(obj_t BgL_envz00_2869, obj_t BgL_xz00_2870)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 394 */
return 
BGl_f64vectorz00zz__srfi4z00(BgL_xz00_2870);} 
}



/* _make-s8vector */
obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t BgL_envz00_36, obj_t BgL_optz00_35)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 414 */
{ /* Llib/srfi4.scm 414 */
obj_t BgL_g1949z00_954;
BgL_g1949z00_954 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 414 */
int BgL_aux1951z00_956;
BgL_aux1951z00_956 = 
VECTOR_LENGTH(BgL_optz00_35); 
switch( 
(long)(BgL_aux1951z00_956)) { case ((long)1) : 

{ /* Llib/srfi4.scm 414 */

{ /* Llib/srfi4.scm 414 */
obj_t BgL_arg2012z00_959;
BgL_arg2012z00_959 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 414 */
long BgL_auxz00_4179;
{ /* Llib/srfi4.scm 414 */
obj_t BgL_auxz00_4180;
if(
INTEGERP(BgL_arg2012z00_959))
{ /* Llib/srfi4.scm 414 */
BgL_auxz00_4180 = BgL_arg2012z00_959
; }  else 
{ 
obj_t BgL_auxz00_4183;
BgL_auxz00_4183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16882)), BGl_string3093z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2012z00_959); 
FAILURE(BgL_auxz00_4183,BFALSE,BFALSE);} 
BgL_auxz00_4179 = 
(long)CINT(BgL_auxz00_4180); } 
return 
BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4179, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 414 */
obj_t BgL_initz00_960;
BgL_initz00_960 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 414 */

{ /* Llib/srfi4.scm 414 */
obj_t BgL_arg2013z00_961;
BgL_arg2013z00_961 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 414 */
long BgL_auxz00_4194;
{ /* Llib/srfi4.scm 414 */
obj_t BgL_auxz00_4195;
if(
INTEGERP(BgL_arg2013z00_961))
{ /* Llib/srfi4.scm 414 */
BgL_auxz00_4195 = BgL_arg2013z00_961
; }  else 
{ 
obj_t BgL_auxz00_4198;
BgL_auxz00_4198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16882)), BGl_string3093z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2013z00_961); 
FAILURE(BgL_auxz00_4198,BFALSE,BFALSE);} 
BgL_auxz00_4194 = 
(long)CINT(BgL_auxz00_4195); } 
return 
BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4194, BgL_initz00_960);} } } } break;
default: 
{ /* Llib/srfi4.scm 414 */
obj_t BgL_arg2015z00_962;int BgL_arg2017z00_964;
BgL_arg2015z00_962 = BGl_symbol3090z00zz__srfi4z00; 
BgL_arg2017z00_964 = 
VECTOR_LENGTH(BgL_optz00_35); 
return 
BGl_errorz00zz__errorz00(BgL_arg2015z00_962, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2017z00_964));} } } } } } 
}



/* make-s8vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long BgL_lenz00_33, obj_t BgL_initz00_34)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 414 */
{ /* Llib/srfi4.scm 414 */
obj_t BgL_vz00_965;
BgL_vz00_965 = 
BGL_ALLOC_S8VECTOR(BgL_lenz00_33); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_34, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 414 */((bool_t)0); }  else 
{ 
long BgL_iz00_968;
BgL_iz00_968 = ((long)0); 
BgL_zc3anonymousza32019ze3z83_969:
if(
(BgL_iz00_968<BgL_lenz00_33))
{ /* Llib/srfi4.scm 414 */
{ /* Llib/srfi4.scm 414 */
char BgL_auxz00_4215;
{ /* Llib/srfi4.scm 414 */
obj_t BgL_auxz00_4216;
if(
INTEGERP(BgL_initz00_34))
{ /* Llib/srfi4.scm 414 */
BgL_auxz00_4216 = BgL_initz00_34
; }  else 
{ 
obj_t BgL_auxz00_4219;
BgL_auxz00_4219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16882)), BGl_string3095z00zz__srfi4z00, BGl_string3096z00zz__srfi4z00, BgL_initz00_34); 
FAILURE(BgL_auxz00_4219,BFALSE,BFALSE);} 
BgL_auxz00_4215 = 
(signed char)CINT(BgL_auxz00_4216); } 
BGL_S8VSET(BgL_vz00_965, BgL_iz00_968, BgL_auxz00_4215); } BUNSPEC; 
{ 
long BgL_iz00_4225;
BgL_iz00_4225 = 
(BgL_iz00_968+((long)1)); 
BgL_iz00_968 = BgL_iz00_4225; 
goto BgL_zc3anonymousza32019ze3z83_969;} }  else 
{ /* Llib/srfi4.scm 414 */((bool_t)0); } } 
return BgL_vz00_965;} } 
}



/* _make-u8vector */
obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t BgL_envz00_40, obj_t BgL_optz00_39)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 415 */
{ /* Llib/srfi4.scm 415 */
obj_t BgL_g1952z00_973;
BgL_g1952z00_973 = 
VECTOR_REF(BgL_optz00_39,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 415 */
int BgL_aux1954z00_975;
BgL_aux1954z00_975 = 
VECTOR_LENGTH(BgL_optz00_39); 
switch( 
(long)(BgL_aux1954z00_975)) { case ((long)1) : 

{ /* Llib/srfi4.scm 415 */

{ /* Llib/srfi4.scm 415 */
obj_t BgL_arg2023z00_978;
BgL_arg2023z00_978 = 
VECTOR_REF(BgL_optz00_39,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 415 */
long BgL_auxz00_4232;
{ /* Llib/srfi4.scm 415 */
obj_t BgL_auxz00_4233;
if(
INTEGERP(BgL_arg2023z00_978))
{ /* Llib/srfi4.scm 415 */
BgL_auxz00_4233 = BgL_arg2023z00_978
; }  else 
{ 
obj_t BgL_auxz00_4236;
BgL_auxz00_4236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16910)), BGl_string3099z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2023z00_978); 
FAILURE(BgL_auxz00_4236,BFALSE,BFALSE);} 
BgL_auxz00_4232 = 
(long)CINT(BgL_auxz00_4233); } 
return 
BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4232, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 415 */
obj_t BgL_initz00_979;
BgL_initz00_979 = 
VECTOR_REF(BgL_optz00_39,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 415 */

{ /* Llib/srfi4.scm 415 */
obj_t BgL_arg2024z00_980;
BgL_arg2024z00_980 = 
VECTOR_REF(BgL_optz00_39,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 415 */
long BgL_auxz00_4247;
{ /* Llib/srfi4.scm 415 */
obj_t BgL_auxz00_4248;
if(
INTEGERP(BgL_arg2024z00_980))
{ /* Llib/srfi4.scm 415 */
BgL_auxz00_4248 = BgL_arg2024z00_980
; }  else 
{ 
obj_t BgL_auxz00_4251;
BgL_auxz00_4251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16910)), BGl_string3099z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2024z00_980); 
FAILURE(BgL_auxz00_4251,BFALSE,BFALSE);} 
BgL_auxz00_4247 = 
(long)CINT(BgL_auxz00_4248); } 
return 
BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4247, BgL_initz00_979);} } } } break;
default: 
{ /* Llib/srfi4.scm 415 */
obj_t BgL_arg2025z00_981;int BgL_arg2028z00_983;
BgL_arg2025z00_981 = BGl_symbol3097z00zz__srfi4z00; 
BgL_arg2028z00_983 = 
VECTOR_LENGTH(BgL_optz00_39); 
return 
BGl_errorz00zz__errorz00(BgL_arg2025z00_981, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2028z00_983));} } } } } } 
}



/* make-u8vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long BgL_lenz00_37, obj_t BgL_initz00_38)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 415 */
{ /* Llib/srfi4.scm 415 */
obj_t BgL_vz00_984;
BgL_vz00_984 = 
BGL_ALLOC_U8VECTOR(BgL_lenz00_37); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_38, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 415 */((bool_t)0); }  else 
{ 
long BgL_iz00_987;
BgL_iz00_987 = ((long)0); 
BgL_zc3anonymousza32030ze3z83_988:
if(
(BgL_iz00_987<BgL_lenz00_37))
{ /* Llib/srfi4.scm 415 */
{ /* Llib/srfi4.scm 415 */
unsigned char BgL_auxz00_4268;
{ /* Llib/srfi4.scm 415 */
obj_t BgL_auxz00_4269;
if(
INTEGERP(BgL_initz00_38))
{ /* Llib/srfi4.scm 415 */
BgL_auxz00_4269 = BgL_initz00_38
; }  else 
{ 
obj_t BgL_auxz00_4272;
BgL_auxz00_4272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16910)), BGl_string3095z00zz__srfi4z00, BGl_string3100z00zz__srfi4z00, BgL_initz00_38); 
FAILURE(BgL_auxz00_4272,BFALSE,BFALSE);} 
BgL_auxz00_4268 = 
(unsigned char)CINT(BgL_auxz00_4269); } 
BGL_U8VSET(BgL_vz00_984, BgL_iz00_987, BgL_auxz00_4268); } BUNSPEC; 
{ 
long BgL_iz00_4278;
BgL_iz00_4278 = 
(BgL_iz00_987+((long)1)); 
BgL_iz00_987 = BgL_iz00_4278; 
goto BgL_zc3anonymousza32030ze3z83_988;} }  else 
{ /* Llib/srfi4.scm 415 */((bool_t)0); } } 
return BgL_vz00_984;} } 
}



/* _make-s16vector */
obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t BgL_envz00_44, obj_t BgL_optz00_43)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 416 */
{ /* Llib/srfi4.scm 416 */
obj_t BgL_g1955z00_992;
BgL_g1955z00_992 = 
VECTOR_REF(BgL_optz00_43,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 416 */
int BgL_aux1957z00_994;
BgL_aux1957z00_994 = 
VECTOR_LENGTH(BgL_optz00_43); 
switch( 
(long)(BgL_aux1957z00_994)) { case ((long)1) : 

{ /* Llib/srfi4.scm 416 */

{ /* Llib/srfi4.scm 416 */
obj_t BgL_arg2036z00_997;
BgL_arg2036z00_997 = 
VECTOR_REF(BgL_optz00_43,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 416 */
long BgL_auxz00_4285;
{ /* Llib/srfi4.scm 416 */
obj_t BgL_auxz00_4286;
if(
INTEGERP(BgL_arg2036z00_997))
{ /* Llib/srfi4.scm 416 */
BgL_auxz00_4286 = BgL_arg2036z00_997
; }  else 
{ 
obj_t BgL_auxz00_4289;
BgL_auxz00_4289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16938)), BGl_string3103z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2036z00_997); 
FAILURE(BgL_auxz00_4289,BFALSE,BFALSE);} 
BgL_auxz00_4285 = 
(long)CINT(BgL_auxz00_4286); } 
return 
BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4285, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 416 */
obj_t BgL_initz00_998;
BgL_initz00_998 = 
VECTOR_REF(BgL_optz00_43,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 416 */

{ /* Llib/srfi4.scm 416 */
obj_t BgL_arg2037z00_999;
BgL_arg2037z00_999 = 
VECTOR_REF(BgL_optz00_43,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 416 */
long BgL_auxz00_4300;
{ /* Llib/srfi4.scm 416 */
obj_t BgL_auxz00_4301;
if(
INTEGERP(BgL_arg2037z00_999))
{ /* Llib/srfi4.scm 416 */
BgL_auxz00_4301 = BgL_arg2037z00_999
; }  else 
{ 
obj_t BgL_auxz00_4304;
BgL_auxz00_4304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16938)), BGl_string3103z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2037z00_999); 
FAILURE(BgL_auxz00_4304,BFALSE,BFALSE);} 
BgL_auxz00_4300 = 
(long)CINT(BgL_auxz00_4301); } 
return 
BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4300, BgL_initz00_998);} } } } break;
default: 
{ /* Llib/srfi4.scm 416 */
obj_t BgL_arg2038z00_1000;int BgL_arg2040z00_1002;
BgL_arg2038z00_1000 = BGl_symbol3101z00zz__srfi4z00; 
BgL_arg2040z00_1002 = 
VECTOR_LENGTH(BgL_optz00_43); 
return 
BGl_errorz00zz__errorz00(BgL_arg2038z00_1000, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2040z00_1002));} } } } } } 
}



/* make-s16vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long BgL_lenz00_41, obj_t BgL_initz00_42)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 416 */
{ /* Llib/srfi4.scm 416 */
obj_t BgL_vz00_1003;
BgL_vz00_1003 = 
BGL_ALLOC_S16VECTOR(BgL_lenz00_41); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_42, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 416 */((bool_t)0); }  else 
{ 
long BgL_iz00_1006;
BgL_iz00_1006 = ((long)0); 
BgL_zc3anonymousza32042ze3z83_1007:
if(
(BgL_iz00_1006<BgL_lenz00_41))
{ /* Llib/srfi4.scm 416 */
{ /* Llib/srfi4.scm 416 */
short BgL_auxz00_4321;
{ /* Llib/srfi4.scm 416 */
obj_t BgL_auxz00_4322;
if(
INTEGERP(BgL_initz00_42))
{ /* Llib/srfi4.scm 416 */
BgL_auxz00_4322 = BgL_initz00_42
; }  else 
{ 
obj_t BgL_auxz00_4325;
BgL_auxz00_4325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16938)), BGl_string3095z00zz__srfi4z00, BGl_string3104z00zz__srfi4z00, BgL_initz00_42); 
FAILURE(BgL_auxz00_4325,BFALSE,BFALSE);} 
BgL_auxz00_4321 = 
(short)CINT(BgL_auxz00_4322); } 
BGL_S16VSET(BgL_vz00_1003, BgL_iz00_1006, BgL_auxz00_4321); } BUNSPEC; 
{ 
long BgL_iz00_4331;
BgL_iz00_4331 = 
(BgL_iz00_1006+((long)1)); 
BgL_iz00_1006 = BgL_iz00_4331; 
goto BgL_zc3anonymousza32042ze3z83_1007;} }  else 
{ /* Llib/srfi4.scm 416 */((bool_t)0); } } 
return BgL_vz00_1003;} } 
}



/* _make-u16vector */
obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t BgL_envz00_48, obj_t BgL_optz00_47)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 417 */
{ /* Llib/srfi4.scm 417 */
obj_t BgL_g1958z00_1011;
BgL_g1958z00_1011 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 417 */
int BgL_aux1960z00_1013;
BgL_aux1960z00_1013 = 
VECTOR_LENGTH(BgL_optz00_47); 
switch( 
(long)(BgL_aux1960z00_1013)) { case ((long)1) : 

{ /* Llib/srfi4.scm 417 */

{ /* Llib/srfi4.scm 417 */
obj_t BgL_arg2046z00_1016;
BgL_arg2046z00_1016 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 417 */
long BgL_auxz00_4338;
{ /* Llib/srfi4.scm 417 */
obj_t BgL_auxz00_4339;
if(
INTEGERP(BgL_arg2046z00_1016))
{ /* Llib/srfi4.scm 417 */
BgL_auxz00_4339 = BgL_arg2046z00_1016
; }  else 
{ 
obj_t BgL_auxz00_4342;
BgL_auxz00_4342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16967)), BGl_string3107z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2046z00_1016); 
FAILURE(BgL_auxz00_4342,BFALSE,BFALSE);} 
BgL_auxz00_4338 = 
(long)CINT(BgL_auxz00_4339); } 
return 
BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4338, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 417 */
obj_t BgL_initz00_1017;
BgL_initz00_1017 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 417 */

{ /* Llib/srfi4.scm 417 */
obj_t BgL_arg2047z00_1018;
BgL_arg2047z00_1018 = 
VECTOR_REF(BgL_optz00_47,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 417 */
long BgL_auxz00_4353;
{ /* Llib/srfi4.scm 417 */
obj_t BgL_auxz00_4354;
if(
INTEGERP(BgL_arg2047z00_1018))
{ /* Llib/srfi4.scm 417 */
BgL_auxz00_4354 = BgL_arg2047z00_1018
; }  else 
{ 
obj_t BgL_auxz00_4357;
BgL_auxz00_4357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16967)), BGl_string3107z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2047z00_1018); 
FAILURE(BgL_auxz00_4357,BFALSE,BFALSE);} 
BgL_auxz00_4353 = 
(long)CINT(BgL_auxz00_4354); } 
return 
BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4353, BgL_initz00_1017);} } } } break;
default: 
{ /* Llib/srfi4.scm 417 */
obj_t BgL_arg2048z00_1019;int BgL_arg2052z00_1021;
BgL_arg2048z00_1019 = BGl_symbol3105z00zz__srfi4z00; 
BgL_arg2052z00_1021 = 
VECTOR_LENGTH(BgL_optz00_47); 
return 
BGl_errorz00zz__errorz00(BgL_arg2048z00_1019, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2052z00_1021));} } } } } } 
}



/* make-u16vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long BgL_lenz00_45, obj_t BgL_initz00_46)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 417 */
{ /* Llib/srfi4.scm 417 */
obj_t BgL_vz00_1022;
BgL_vz00_1022 = 
BGL_ALLOC_U16VECTOR(BgL_lenz00_45); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_46, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 417 */((bool_t)0); }  else 
{ 
long BgL_iz00_1025;
BgL_iz00_1025 = ((long)0); 
BgL_zc3anonymousza32054ze3z83_1026:
if(
(BgL_iz00_1025<BgL_lenz00_45))
{ /* Llib/srfi4.scm 417 */
{ /* Llib/srfi4.scm 417 */
unsigned short BgL_auxz00_4374;
{ /* Llib/srfi4.scm 417 */
obj_t BgL_auxz00_4375;
if(
INTEGERP(BgL_initz00_46))
{ /* Llib/srfi4.scm 417 */
BgL_auxz00_4375 = BgL_initz00_46
; }  else 
{ 
obj_t BgL_auxz00_4378;
BgL_auxz00_4378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16967)), BGl_string3095z00zz__srfi4z00, BGl_string3108z00zz__srfi4z00, BgL_initz00_46); 
FAILURE(BgL_auxz00_4378,BFALSE,BFALSE);} 
BgL_auxz00_4374 = 
(unsigned short)CINT(BgL_auxz00_4375); } 
BGL_U16VSET(BgL_vz00_1022, BgL_iz00_1025, BgL_auxz00_4374); } BUNSPEC; 
{ 
long BgL_iz00_4384;
BgL_iz00_4384 = 
(BgL_iz00_1025+((long)1)); 
BgL_iz00_1025 = BgL_iz00_4384; 
goto BgL_zc3anonymousza32054ze3z83_1026;} }  else 
{ /* Llib/srfi4.scm 417 */((bool_t)0); } } 
return BgL_vz00_1022;} } 
}



/* _make-s32vector */
obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t BgL_envz00_52, obj_t BgL_optz00_51)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 418 */
{ /* Llib/srfi4.scm 418 */
obj_t BgL_g1961z00_1030;
BgL_g1961z00_1030 = 
VECTOR_REF(BgL_optz00_51,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 418 */
int BgL_aux1963z00_1032;
BgL_aux1963z00_1032 = 
VECTOR_LENGTH(BgL_optz00_51); 
switch( 
(long)(BgL_aux1963z00_1032)) { case ((long)1) : 

{ /* Llib/srfi4.scm 418 */

{ /* Llib/srfi4.scm 418 */
obj_t BgL_arg2058z00_1035;
BgL_arg2058z00_1035 = 
VECTOR_REF(BgL_optz00_51,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 418 */
long BgL_auxz00_4391;
{ /* Llib/srfi4.scm 418 */
obj_t BgL_auxz00_4392;
if(
INTEGERP(BgL_arg2058z00_1035))
{ /* Llib/srfi4.scm 418 */
BgL_auxz00_4392 = BgL_arg2058z00_1035
; }  else 
{ 
obj_t BgL_auxz00_4395;
BgL_auxz00_4395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16996)), BGl_string3111z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2058z00_1035); 
FAILURE(BgL_auxz00_4395,BFALSE,BFALSE);} 
BgL_auxz00_4391 = 
(long)CINT(BgL_auxz00_4392); } 
return 
BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4391, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 418 */
obj_t BgL_initz00_1036;
BgL_initz00_1036 = 
VECTOR_REF(BgL_optz00_51,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 418 */

{ /* Llib/srfi4.scm 418 */
obj_t BgL_arg2059z00_1037;
BgL_arg2059z00_1037 = 
VECTOR_REF(BgL_optz00_51,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 418 */
long BgL_auxz00_4406;
{ /* Llib/srfi4.scm 418 */
obj_t BgL_auxz00_4407;
if(
INTEGERP(BgL_arg2059z00_1037))
{ /* Llib/srfi4.scm 418 */
BgL_auxz00_4407 = BgL_arg2059z00_1037
; }  else 
{ 
obj_t BgL_auxz00_4410;
BgL_auxz00_4410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16996)), BGl_string3111z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2059z00_1037); 
FAILURE(BgL_auxz00_4410,BFALSE,BFALSE);} 
BgL_auxz00_4406 = 
(long)CINT(BgL_auxz00_4407); } 
return 
BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4406, BgL_initz00_1036);} } } } break;
default: 
{ /* Llib/srfi4.scm 418 */
obj_t BgL_arg2060z00_1038;int BgL_arg2062z00_1040;
BgL_arg2060z00_1038 = BGl_symbol3109z00zz__srfi4z00; 
BgL_arg2062z00_1040 = 
VECTOR_LENGTH(BgL_optz00_51); 
return 
BGl_errorz00zz__errorz00(BgL_arg2060z00_1038, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2062z00_1040));} } } } } } 
}



/* make-s32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long BgL_lenz00_49, obj_t BgL_initz00_50)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 418 */
{ /* Llib/srfi4.scm 418 */
obj_t BgL_vz00_1041;
BgL_vz00_1041 = 
BGL_ALLOC_S32VECTOR(BgL_lenz00_49); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_50, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 418 */((bool_t)0); }  else 
{ 
long BgL_iz00_1044;
BgL_iz00_1044 = ((long)0); 
BgL_zc3anonymousza32064ze3z83_1045:
if(
(BgL_iz00_1044<BgL_lenz00_49))
{ /* Llib/srfi4.scm 418 */
{ /* Llib/srfi4.scm 418 */
long BgL_auxz00_4427;
{ /* Llib/srfi4.scm 418 */
obj_t BgL_auxz00_4428;
if(
INTEGERP(BgL_initz00_50))
{ /* Llib/srfi4.scm 418 */
BgL_auxz00_4428 = BgL_initz00_50
; }  else 
{ 
obj_t BgL_auxz00_4431;
BgL_auxz00_4431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)16996)), BGl_string3095z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_initz00_50); 
FAILURE(BgL_auxz00_4431,BFALSE,BFALSE);} 
BgL_auxz00_4427 = 
(long)CINT(BgL_auxz00_4428); } 
BGL_S32VSET(BgL_vz00_1041, BgL_iz00_1044, BgL_auxz00_4427); } BUNSPEC; 
{ 
long BgL_iz00_4437;
BgL_iz00_4437 = 
(BgL_iz00_1044+((long)1)); 
BgL_iz00_1044 = BgL_iz00_4437; 
goto BgL_zc3anonymousza32064ze3z83_1045;} }  else 
{ /* Llib/srfi4.scm 418 */((bool_t)0); } } 
return BgL_vz00_1041;} } 
}



/* _make-u32vector */
obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t BgL_envz00_56, obj_t BgL_optz00_55)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 419 */
{ /* Llib/srfi4.scm 419 */
obj_t BgL_g1964z00_1049;
BgL_g1964z00_1049 = 
VECTOR_REF(BgL_optz00_55,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 419 */
int BgL_aux1966z00_1051;
BgL_aux1966z00_1051 = 
VECTOR_LENGTH(BgL_optz00_55); 
switch( 
(long)(BgL_aux1966z00_1051)) { case ((long)1) : 

{ /* Llib/srfi4.scm 419 */

{ /* Llib/srfi4.scm 419 */
obj_t BgL_arg2068z00_1054;
BgL_arg2068z00_1054 = 
VECTOR_REF(BgL_optz00_55,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 419 */
long BgL_auxz00_4444;
{ /* Llib/srfi4.scm 419 */
obj_t BgL_auxz00_4445;
if(
INTEGERP(BgL_arg2068z00_1054))
{ /* Llib/srfi4.scm 419 */
BgL_auxz00_4445 = BgL_arg2068z00_1054
; }  else 
{ 
obj_t BgL_auxz00_4448;
BgL_auxz00_4448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17025)), BGl_string3114z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2068z00_1054); 
FAILURE(BgL_auxz00_4448,BFALSE,BFALSE);} 
BgL_auxz00_4444 = 
(long)CINT(BgL_auxz00_4445); } 
return 
BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4444, 
BINT(((long)0)));} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 419 */
obj_t BgL_initz00_1055;
BgL_initz00_1055 = 
VECTOR_REF(BgL_optz00_55,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 419 */

{ /* Llib/srfi4.scm 419 */
obj_t BgL_arg2069z00_1056;
BgL_arg2069z00_1056 = 
VECTOR_REF(BgL_optz00_55,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 419 */
long BgL_auxz00_4459;
{ /* Llib/srfi4.scm 419 */
obj_t BgL_auxz00_4460;
if(
INTEGERP(BgL_arg2069z00_1056))
{ /* Llib/srfi4.scm 419 */
BgL_auxz00_4460 = BgL_arg2069z00_1056
; }  else 
{ 
obj_t BgL_auxz00_4463;
BgL_auxz00_4463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17025)), BGl_string3114z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2069z00_1056); 
FAILURE(BgL_auxz00_4463,BFALSE,BFALSE);} 
BgL_auxz00_4459 = 
(long)CINT(BgL_auxz00_4460); } 
return 
BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4459, BgL_initz00_1055);} } } } break;
default: 
{ /* Llib/srfi4.scm 419 */
obj_t BgL_arg2070z00_1057;int BgL_arg2073z00_1059;
BgL_arg2070z00_1057 = BGl_symbol3112z00zz__srfi4z00; 
BgL_arg2073z00_1059 = 
VECTOR_LENGTH(BgL_optz00_55); 
return 
BGl_errorz00zz__errorz00(BgL_arg2070z00_1057, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2073z00_1059));} } } } } } 
}



/* make-u32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long BgL_lenz00_53, obj_t BgL_initz00_54)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 419 */
{ /* Llib/srfi4.scm 419 */
obj_t BgL_vz00_1060;
BgL_vz00_1060 = 
BGL_ALLOC_U32VECTOR(BgL_lenz00_53); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_54, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 419 */((bool_t)0); }  else 
{ 
long BgL_iz00_1063;
BgL_iz00_1063 = ((long)0); 
BgL_zc3anonymousza32075ze3z83_1064:
if(
(BgL_iz00_1063<BgL_lenz00_53))
{ /* Llib/srfi4.scm 419 */
{ /* Llib/srfi4.scm 419 */
unsigned long BgL_auxz00_4480;
{ /* Llib/srfi4.scm 419 */
obj_t BgL_auxz00_4481;
if(
INTEGERP(BgL_initz00_54))
{ /* Llib/srfi4.scm 419 */
BgL_auxz00_4481 = BgL_initz00_54
; }  else 
{ 
obj_t BgL_auxz00_4484;
BgL_auxz00_4484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17025)), BGl_string3095z00zz__srfi4z00, BGl_string3115z00zz__srfi4z00, BgL_initz00_54); 
FAILURE(BgL_auxz00_4484,BFALSE,BFALSE);} 
BgL_auxz00_4480 = 
(unsigned long)CINT(BgL_auxz00_4481); } 
BGL_U32VSET(BgL_vz00_1060, BgL_iz00_1063, BgL_auxz00_4480); } BUNSPEC; 
{ 
long BgL_iz00_4490;
BgL_iz00_4490 = 
(BgL_iz00_1063+((long)1)); 
BgL_iz00_1063 = BgL_iz00_4490; 
goto BgL_zc3anonymousza32075ze3z83_1064;} }  else 
{ /* Llib/srfi4.scm 419 */((bool_t)0); } } 
return BgL_vz00_1060;} } 
}



/* _make-s64vector */
obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t BgL_envz00_60, obj_t BgL_optz00_59)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 420 */
{ /* Llib/srfi4.scm 420 */
obj_t BgL_g1967z00_1068;
BgL_g1967z00_1068 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 420 */
int BgL_aux1969z00_1070;
BgL_aux1969z00_1070 = 
VECTOR_LENGTH(BgL_optz00_59); 
switch( 
(long)(BgL_aux1969z00_1070)) { case ((long)1) : 

{ /* Llib/srfi4.scm 420 */

{ /* Llib/srfi4.scm 420 */
obj_t BgL_arg2079z00_1073;
BgL_arg2079z00_1073 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 420 */
long BgL_auxz00_4497;
{ /* Llib/srfi4.scm 420 */
obj_t BgL_auxz00_4498;
if(
INTEGERP(BgL_arg2079z00_1073))
{ /* Llib/srfi4.scm 420 */
BgL_auxz00_4498 = BgL_arg2079z00_1073
; }  else 
{ 
obj_t BgL_auxz00_4501;
BgL_auxz00_4501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17054)), BGl_string3118z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2079z00_1073); 
FAILURE(BgL_auxz00_4501,BFALSE,BFALSE);} 
BgL_auxz00_4497 = 
(long)CINT(BgL_auxz00_4498); } 
return 
BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4497, BGl_llong3119z00zz__srfi4z00);} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 420 */
obj_t BgL_initz00_1074;
BgL_initz00_1074 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 420 */

{ /* Llib/srfi4.scm 420 */
obj_t BgL_arg2080z00_1075;
BgL_arg2080z00_1075 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 420 */
long BgL_auxz00_4511;
{ /* Llib/srfi4.scm 420 */
obj_t BgL_auxz00_4512;
if(
INTEGERP(BgL_arg2080z00_1075))
{ /* Llib/srfi4.scm 420 */
BgL_auxz00_4512 = BgL_arg2080z00_1075
; }  else 
{ 
obj_t BgL_auxz00_4515;
BgL_auxz00_4515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17054)), BGl_string3118z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2080z00_1075); 
FAILURE(BgL_auxz00_4515,BFALSE,BFALSE);} 
BgL_auxz00_4511 = 
(long)CINT(BgL_auxz00_4512); } 
return 
BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4511, BgL_initz00_1074);} } } } break;
default: 
{ /* Llib/srfi4.scm 420 */
obj_t BgL_arg2081z00_1076;int BgL_arg2083z00_1078;
BgL_arg2081z00_1076 = BGl_symbol3116z00zz__srfi4z00; 
BgL_arg2083z00_1078 = 
VECTOR_LENGTH(BgL_optz00_59); 
return 
BGl_errorz00zz__errorz00(BgL_arg2081z00_1076, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2083z00_1078));} } } } } } 
}



/* make-s64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long BgL_lenz00_57, obj_t BgL_initz00_58)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 420 */
{ /* Llib/srfi4.scm 420 */
obj_t BgL_vz00_1079;
BgL_vz00_1079 = 
BGL_ALLOC_S64VECTOR(BgL_lenz00_57); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_58, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 420 */((bool_t)0); }  else 
{ 
long BgL_iz00_1082;
BgL_iz00_1082 = ((long)0); 
BgL_zc3anonymousza32085ze3z83_1083:
if(
(BgL_iz00_1082<BgL_lenz00_57))
{ /* Llib/srfi4.scm 420 */
{ /* Llib/srfi4.scm 420 */
BGL_LONGLONG_T BgL_auxz00_4532;
{ /* Llib/srfi4.scm 420 */
obj_t BgL_auxz00_4533;
if(
LLONGP(BgL_initz00_58))
{ /* Llib/srfi4.scm 420 */
BgL_auxz00_4533 = BgL_initz00_58
; }  else 
{ 
obj_t BgL_auxz00_4536;
BgL_auxz00_4536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17054)), BGl_string3095z00zz__srfi4z00, BGl_string3120z00zz__srfi4z00, BgL_initz00_58); 
FAILURE(BgL_auxz00_4536,BFALSE,BFALSE);} 
BgL_auxz00_4532 = 
BLLONG_TO_LLONG(BgL_auxz00_4533); } 
BGL_S64VSET(BgL_vz00_1079, BgL_iz00_1082, BgL_auxz00_4532); } BUNSPEC; 
{ 
long BgL_iz00_4542;
BgL_iz00_4542 = 
(BgL_iz00_1082+((long)1)); 
BgL_iz00_1082 = BgL_iz00_4542; 
goto BgL_zc3anonymousza32085ze3z83_1083;} }  else 
{ /* Llib/srfi4.scm 420 */((bool_t)0); } } 
return BgL_vz00_1079;} } 
}



/* _make-u64vector */
obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t BgL_envz00_64, obj_t BgL_optz00_63)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 421 */
{ /* Llib/srfi4.scm 421 */
obj_t BgL_g1970z00_1087;
BgL_g1970z00_1087 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 421 */
int BgL_aux1972z00_1089;
BgL_aux1972z00_1089 = 
VECTOR_LENGTH(BgL_optz00_63); 
switch( 
(long)(BgL_aux1972z00_1089)) { case ((long)1) : 

{ /* Llib/srfi4.scm 421 */

{ /* Llib/srfi4.scm 421 */
obj_t BgL_arg2091z00_1092;
BgL_arg2091z00_1092 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 421 */
long BgL_auxz00_4549;
{ /* Llib/srfi4.scm 421 */
obj_t BgL_auxz00_4550;
if(
INTEGERP(BgL_arg2091z00_1092))
{ /* Llib/srfi4.scm 421 */
BgL_auxz00_4550 = BgL_arg2091z00_1092
; }  else 
{ 
obj_t BgL_auxz00_4553;
BgL_auxz00_4553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17085)), BGl_string3123z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2091z00_1092); 
FAILURE(BgL_auxz00_4553,BFALSE,BFALSE);} 
BgL_auxz00_4549 = 
(long)CINT(BgL_auxz00_4550); } 
return 
BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4549, BGl_llong3119z00zz__srfi4z00);} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 421 */
obj_t BgL_initz00_1093;
BgL_initz00_1093 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 421 */

{ /* Llib/srfi4.scm 421 */
obj_t BgL_arg2092z00_1094;
BgL_arg2092z00_1094 = 
VECTOR_REF(BgL_optz00_63,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 421 */
long BgL_auxz00_4563;
{ /* Llib/srfi4.scm 421 */
obj_t BgL_auxz00_4564;
if(
INTEGERP(BgL_arg2092z00_1094))
{ /* Llib/srfi4.scm 421 */
BgL_auxz00_4564 = BgL_arg2092z00_1094
; }  else 
{ 
obj_t BgL_auxz00_4567;
BgL_auxz00_4567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17085)), BGl_string3123z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2092z00_1094); 
FAILURE(BgL_auxz00_4567,BFALSE,BFALSE);} 
BgL_auxz00_4563 = 
(long)CINT(BgL_auxz00_4564); } 
return 
BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4563, BgL_initz00_1093);} } } } break;
default: 
{ /* Llib/srfi4.scm 421 */
obj_t BgL_arg2093z00_1095;int BgL_arg2095z00_1097;
BgL_arg2093z00_1095 = BGl_symbol3121z00zz__srfi4z00; 
BgL_arg2095z00_1097 = 
VECTOR_LENGTH(BgL_optz00_63); 
return 
BGl_errorz00zz__errorz00(BgL_arg2093z00_1095, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2095z00_1097));} } } } } } 
}



/* make-u64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long BgL_lenz00_61, obj_t BgL_initz00_62)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 421 */
{ /* Llib/srfi4.scm 421 */
obj_t BgL_vz00_1098;
BgL_vz00_1098 = 
BGL_ALLOC_U64VECTOR(BgL_lenz00_61); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_62, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 421 */((bool_t)0); }  else 
{ 
long BgL_iz00_1101;
BgL_iz00_1101 = ((long)0); 
BgL_zc3anonymousza32097ze3z83_1102:
if(
(BgL_iz00_1101<BgL_lenz00_61))
{ /* Llib/srfi4.scm 421 */
{ /* Llib/srfi4.scm 421 */
unsigned BGL_LONGLONG_T BgL_auxz00_4584;
{ /* Llib/srfi4.scm 421 */
obj_t BgL_auxz00_4585;
if(
LLONGP(BgL_initz00_62))
{ /* Llib/srfi4.scm 421 */
BgL_auxz00_4585 = BgL_initz00_62
; }  else 
{ 
obj_t BgL_auxz00_4588;
BgL_auxz00_4588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17085)), BGl_string3095z00zz__srfi4z00, BGl_string3124z00zz__srfi4z00, BgL_initz00_62); 
FAILURE(BgL_auxz00_4588,BFALSE,BFALSE);} 
BgL_auxz00_4584 = 
BLLONG_TO_LLONG(BgL_auxz00_4585); } 
BGL_U64VSET(BgL_vz00_1098, BgL_iz00_1101, BgL_auxz00_4584); } BUNSPEC; 
{ 
long BgL_iz00_4594;
BgL_iz00_4594 = 
(BgL_iz00_1101+((long)1)); 
BgL_iz00_1101 = BgL_iz00_4594; 
goto BgL_zc3anonymousza32097ze3z83_1102;} }  else 
{ /* Llib/srfi4.scm 421 */((bool_t)0); } } 
return BgL_vz00_1098;} } 
}



/* _make-f32vector */
obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t BgL_envz00_68, obj_t BgL_optz00_67)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 422 */
{ /* Llib/srfi4.scm 422 */
obj_t BgL_g1973z00_1106;
BgL_g1973z00_1106 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 422 */
int BgL_aux1975z00_1108;
BgL_aux1975z00_1108 = 
VECTOR_LENGTH(BgL_optz00_67); 
switch( 
(long)(BgL_aux1975z00_1108)) { case ((long)1) : 

{ /* Llib/srfi4.scm 422 */

{ /* Llib/srfi4.scm 422 */
obj_t BgL_arg2101z00_1111;
BgL_arg2101z00_1111 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 422 */
long BgL_auxz00_4601;
{ /* Llib/srfi4.scm 422 */
obj_t BgL_auxz00_4602;
if(
INTEGERP(BgL_arg2101z00_1111))
{ /* Llib/srfi4.scm 422 */
BgL_auxz00_4602 = BgL_arg2101z00_1111
; }  else 
{ 
obj_t BgL_auxz00_4605;
BgL_auxz00_4605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17116)), BGl_string3127z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2101z00_1111); 
FAILURE(BgL_auxz00_4605,BFALSE,BFALSE);} 
BgL_auxz00_4601 = 
(long)CINT(BgL_auxz00_4602); } 
return 
BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4601, BGl_real3128z00zz__srfi4z00);} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 422 */
obj_t BgL_initz00_1112;
BgL_initz00_1112 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 422 */

{ /* Llib/srfi4.scm 422 */
obj_t BgL_arg2102z00_1113;
BgL_arg2102z00_1113 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 422 */
long BgL_auxz00_4615;
{ /* Llib/srfi4.scm 422 */
obj_t BgL_auxz00_4616;
if(
INTEGERP(BgL_arg2102z00_1113))
{ /* Llib/srfi4.scm 422 */
BgL_auxz00_4616 = BgL_arg2102z00_1113
; }  else 
{ 
obj_t BgL_auxz00_4619;
BgL_auxz00_4619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17116)), BGl_string3127z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2102z00_1113); 
FAILURE(BgL_auxz00_4619,BFALSE,BFALSE);} 
BgL_auxz00_4615 = 
(long)CINT(BgL_auxz00_4616); } 
return 
BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4615, BgL_initz00_1112);} } } } break;
default: 
{ /* Llib/srfi4.scm 422 */
obj_t BgL_arg2103z00_1114;int BgL_arg2105z00_1116;
BgL_arg2103z00_1114 = BGl_symbol3125z00zz__srfi4z00; 
BgL_arg2105z00_1116 = 
VECTOR_LENGTH(BgL_optz00_67); 
return 
BGl_errorz00zz__errorz00(BgL_arg2103z00_1114, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2105z00_1116));} } } } } } 
}



/* make-f32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long BgL_lenz00_65, obj_t BgL_initz00_66)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 422 */
{ /* Llib/srfi4.scm 422 */
obj_t BgL_vz00_1117;
BgL_vz00_1117 = 
BGL_ALLOC_F32VECTOR(BgL_lenz00_65); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_66, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 422 */((bool_t)0); }  else 
{ 
long BgL_iz00_1120;
BgL_iz00_1120 = ((long)0); 
BgL_zc3anonymousza32107ze3z83_1121:
if(
(BgL_iz00_1120<BgL_lenz00_65))
{ /* Llib/srfi4.scm 422 */
{ /* Llib/srfi4.scm 422 */
float BgL_auxz00_4636;
{ /* Llib/srfi4.scm 422 */
obj_t BgL_auxz00_4637;
if(
REALP(BgL_initz00_66))
{ /* Llib/srfi4.scm 422 */
BgL_auxz00_4637 = BgL_initz00_66
; }  else 
{ 
obj_t BgL_auxz00_4640;
BgL_auxz00_4640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17116)), BGl_string3095z00zz__srfi4z00, BGl_string3129z00zz__srfi4z00, BgL_initz00_66); 
FAILURE(BgL_auxz00_4640,BFALSE,BFALSE);} 
BgL_auxz00_4636 = 
REAL_TO_FLOAT(BgL_auxz00_4637); } 
BGL_F32VSET(BgL_vz00_1117, BgL_iz00_1120, BgL_auxz00_4636); } BUNSPEC; 
{ 
long BgL_iz00_4646;
BgL_iz00_4646 = 
(BgL_iz00_1120+((long)1)); 
BgL_iz00_1120 = BgL_iz00_4646; 
goto BgL_zc3anonymousza32107ze3z83_1121;} }  else 
{ /* Llib/srfi4.scm 422 */((bool_t)0); } } 
return BgL_vz00_1117;} } 
}



/* _make-f64vector */
obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t BgL_envz00_72, obj_t BgL_optz00_71)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 423 */
{ /* Llib/srfi4.scm 423 */
obj_t BgL_g1976z00_1125;
BgL_g1976z00_1125 = 
VECTOR_REF(BgL_optz00_71,
(int)(((long)0))); 
{ 

{ /* Llib/srfi4.scm 423 */
int BgL_aux1978z00_1127;
BgL_aux1978z00_1127 = 
VECTOR_LENGTH(BgL_optz00_71); 
switch( 
(long)(BgL_aux1978z00_1127)) { case ((long)1) : 

{ /* Llib/srfi4.scm 423 */

{ /* Llib/srfi4.scm 423 */
obj_t BgL_arg2111z00_1130;
BgL_arg2111z00_1130 = 
VECTOR_REF(BgL_optz00_71,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 423 */
long BgL_auxz00_4653;
{ /* Llib/srfi4.scm 423 */
obj_t BgL_auxz00_4654;
if(
INTEGERP(BgL_arg2111z00_1130))
{ /* Llib/srfi4.scm 423 */
BgL_auxz00_4654 = BgL_arg2111z00_1130
; }  else 
{ 
obj_t BgL_auxz00_4657;
BgL_auxz00_4657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17147)), BGl_string3132z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2111z00_1130); 
FAILURE(BgL_auxz00_4657,BFALSE,BFALSE);} 
BgL_auxz00_4653 = 
(long)CINT(BgL_auxz00_4654); } 
return 
BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4653, BGl_real3128z00zz__srfi4z00);} } } break;case ((long)2) : 

{ /* Llib/srfi4.scm 423 */
obj_t BgL_initz00_1131;
BgL_initz00_1131 = 
VECTOR_REF(BgL_optz00_71,
(int)(((long)1))); 
{ /* Llib/srfi4.scm 423 */

{ /* Llib/srfi4.scm 423 */
obj_t BgL_arg2112z00_1132;
BgL_arg2112z00_1132 = 
VECTOR_REF(BgL_optz00_71,
(int)(((long)0))); 
{ /* Llib/srfi4.scm 423 */
long BgL_auxz00_4667;
{ /* Llib/srfi4.scm 423 */
obj_t BgL_auxz00_4668;
if(
INTEGERP(BgL_arg2112z00_1132))
{ /* Llib/srfi4.scm 423 */
BgL_auxz00_4668 = BgL_arg2112z00_1132
; }  else 
{ 
obj_t BgL_auxz00_4671;
BgL_auxz00_4671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17147)), BGl_string3132z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2112z00_1132); 
FAILURE(BgL_auxz00_4671,BFALSE,BFALSE);} 
BgL_auxz00_4667 = 
(long)CINT(BgL_auxz00_4668); } 
return 
BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4667, BgL_initz00_1131);} } } } break;
default: 
{ /* Llib/srfi4.scm 423 */
obj_t BgL_arg2113z00_1133;int BgL_arg2115z00_1135;
BgL_arg2113z00_1133 = BGl_symbol3130z00zz__srfi4z00; 
BgL_arg2115z00_1135 = 
VECTOR_LENGTH(BgL_optz00_71); 
return 
BGl_errorz00zz__errorz00(BgL_arg2113z00_1133, BGl_string3092z00zz__srfi4z00, 
BINT(BgL_arg2115z00_1135));} } } } } } 
}



/* make-f64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long BgL_lenz00_69, obj_t BgL_initz00_70)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 423 */
{ /* Llib/srfi4.scm 423 */
obj_t BgL_vz00_1136;
BgL_vz00_1136 = 
BGL_ALLOC_F64VECTOR(BgL_lenz00_69); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_initz00_70, 
BINT(((long)0))))
{ /* Llib/srfi4.scm 423 */((bool_t)0); }  else 
{ 
long BgL_iz00_1139;
BgL_iz00_1139 = ((long)0); 
BgL_zc3anonymousza32117ze3z83_1140:
if(
(BgL_iz00_1139<BgL_lenz00_69))
{ /* Llib/srfi4.scm 423 */
{ /* Llib/srfi4.scm 423 */
double BgL_auxz00_4688;
{ /* Llib/srfi4.scm 423 */
obj_t BgL_auxz00_4689;
if(
REALP(BgL_initz00_70))
{ /* Llib/srfi4.scm 423 */
BgL_auxz00_4689 = BgL_initz00_70
; }  else 
{ 
obj_t BgL_auxz00_4692;
BgL_auxz00_4692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17147)), BGl_string3095z00zz__srfi4z00, BGl_string3133z00zz__srfi4z00, BgL_initz00_70); 
FAILURE(BgL_auxz00_4692,BFALSE,BFALSE);} 
BgL_auxz00_4688 = 
REAL_TO_DOUBLE(BgL_auxz00_4689); } 
BGL_F64VSET(BgL_vz00_1136, BgL_iz00_1139, BgL_auxz00_4688); } BUNSPEC; 
{ 
long BgL_iz00_4698;
BgL_iz00_4698 = 
(BgL_iz00_1139+((long)1)); 
BgL_iz00_1139 = BgL_iz00_4698; 
goto BgL_zc3anonymousza32117ze3z83_1140;} }  else 
{ /* Llib/srfi4.scm 423 */((bool_t)0); } } 
return BgL_vz00_1136;} } 
}



/* s8vector-ref */
BGL_EXPORTED_DEF char BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_73, long BgL_kz00_74)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 428 */
{ /* Llib/srfi4.scm 429 */
bool_t BgL_testz00_4700;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2132z00_3322;
BgL_arg2132z00_3322 = 
BGL_HVECTOR_LENGTH(BgL_vz00_73); 
{ /* Llib/srfi4.scm 429 */
int BgL_auxz00_4704;int BgL_auxz00_4702;
BgL_auxz00_4704 = 
(int)(BgL_arg2132z00_3322); 
BgL_auxz00_4702 = 
(int)(BgL_kz00_74); 
BgL_testz00_4700 = 
BOUND_CHECK(BgL_auxz00_4702, BgL_auxz00_4704); } } 
if(BgL_testz00_4700)
{ /* Llib/srfi4.scm 429 */
return 
BGL_S8VREF(BgL_vz00_73, BgL_kz00_74);}  else 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_arg2121z00_3323;obj_t BgL_arg2123z00_3324;
BgL_arg2121z00_3323 = BGl_symbol3134z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_arg2125z00_3325;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2127z00_3326;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2130z00_3327;
BgL_arg2130z00_3327 = 
BGL_HVECTOR_LENGTH(BgL_vz00_73); 
BgL_arg2127z00_3326 = 
(BgL_arg2130z00_3327-((long)1)); } 
{ /* Llib/srfi4.scm 429 */

BgL_arg2125z00_3325 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2127z00_3326, ((long)10)); } } 
BgL_arg2123z00_3324 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2125z00_3325, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_auxz00_4712;
{ /* Llib/srfi4.scm 429 */
obj_t BgL_aux2804z00_3328;
BgL_aux2804z00_3328 = 
BGl_errorz00zz__errorz00(BgL_arg2121z00_3323, BgL_arg2123z00_3324, 
BINT(BgL_kz00_74)); 
if(
INTEGERP(BgL_aux2804z00_3328))
{ /* Llib/srfi4.scm 429 */
BgL_auxz00_4712 = BgL_aux2804z00_3328
; }  else 
{ 
obj_t BgL_auxz00_4717;
BgL_auxz00_4717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17467)), BGl_string3138z00zz__srfi4z00, BGl_string3096z00zz__srfi4z00, BgL_aux2804z00_3328); 
FAILURE(BgL_auxz00_4717,BFALSE,BFALSE);} } 
return 
(signed char)CINT(BgL_auxz00_4712);} } } } 
}



/* _s8vector-ref */
obj_t BGl__s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2761, obj_t BgL_vz00_2762, obj_t BgL_kz00_2763)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 428 */
{ /* Llib/srfi4.scm 429 */
char BgL_auxz00_4722;
{ /* Llib/srfi4.scm 429 */
obj_t BgL_vz00_3329;long BgL_kz00_3330;
if(
BGL_S8VECTORP(BgL_vz00_2762))
{ /* Llib/srfi4.scm 429 */
BgL_vz00_3329 = BgL_vz00_2762; }  else 
{ 
obj_t BgL_auxz00_4725;
BgL_auxz00_4725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17467)), BGl_string3139z00zz__srfi4z00, BGl_string3070z00zz__srfi4z00, BgL_vz00_2762); 
FAILURE(BgL_auxz00_4725,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_auxz00_4729;
if(
INTEGERP(BgL_kz00_2763))
{ /* Llib/srfi4.scm 429 */
BgL_auxz00_4729 = BgL_kz00_2763
; }  else 
{ 
obj_t BgL_auxz00_4732;
BgL_auxz00_4732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17467)), BGl_string3139z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2763); 
FAILURE(BgL_auxz00_4732,BFALSE,BFALSE);} 
BgL_kz00_3330 = 
(long)CINT(BgL_auxz00_4729); } 
{ /* Llib/srfi4.scm 429 */
bool_t BgL_testz00_4737;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2132z00_3331;
BgL_arg2132z00_3331 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3329); 
{ /* Llib/srfi4.scm 429 */
int BgL_auxz00_4741;int BgL_auxz00_4739;
BgL_auxz00_4741 = 
(int)(BgL_arg2132z00_3331); 
BgL_auxz00_4739 = 
(int)(BgL_kz00_3330); 
BgL_testz00_4737 = 
BOUND_CHECK(BgL_auxz00_4739, BgL_auxz00_4741); } } 
if(BgL_testz00_4737)
{ /* Llib/srfi4.scm 429 */
BgL_auxz00_4722 = 
BGL_S8VREF(BgL_vz00_3329, BgL_kz00_3330)
; }  else 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_arg2121z00_3332;obj_t BgL_arg2123z00_3333;
BgL_arg2121z00_3332 = BGl_symbol3134z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_arg2125z00_3334;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2127z00_3335;
{ /* Llib/srfi4.scm 429 */
long BgL_arg2130z00_3336;
BgL_arg2130z00_3336 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3329); 
BgL_arg2127z00_3335 = 
(BgL_arg2130z00_3336-((long)1)); } 
{ /* Llib/srfi4.scm 429 */

BgL_arg2125z00_3334 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2127z00_3335, ((long)10)); } } 
BgL_arg2123z00_3333 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2125z00_3334, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 429 */
obj_t BgL_auxz00_4749;
{ /* Llib/srfi4.scm 429 */
obj_t BgL_aux2804z00_3337;
BgL_aux2804z00_3337 = 
BGl_errorz00zz__errorz00(BgL_arg2121z00_3332, BgL_arg2123z00_3333, 
BINT(BgL_kz00_3330)); 
if(
INTEGERP(BgL_aux2804z00_3337))
{ /* Llib/srfi4.scm 429 */
BgL_auxz00_4749 = BgL_aux2804z00_3337
; }  else 
{ 
obj_t BgL_auxz00_4754;
BgL_auxz00_4754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17467)), BGl_string3138z00zz__srfi4z00, BGl_string3096z00zz__srfi4z00, BgL_aux2804z00_3337); 
FAILURE(BgL_auxz00_4754,BFALSE,BFALSE);} } 
BgL_auxz00_4722 = 
(signed char)CINT(BgL_auxz00_4749); } } } } 
return 
BINT(BgL_auxz00_4722);} } 
}



/* u8vector-ref */
BGL_EXPORTED_DEF unsigned char BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_75, long BgL_kz00_76)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 437 */
{ /* Llib/srfi4.scm 438 */
bool_t BgL_testz00_4760;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2144z00_3338;
BgL_arg2144z00_3338 = 
BGL_HVECTOR_LENGTH(BgL_vz00_75); 
{ /* Llib/srfi4.scm 438 */
int BgL_auxz00_4764;int BgL_auxz00_4762;
BgL_auxz00_4764 = 
(int)(BgL_arg2144z00_3338); 
BgL_auxz00_4762 = 
(int)(BgL_kz00_76); 
BgL_testz00_4760 = 
BOUND_CHECK(BgL_auxz00_4762, BgL_auxz00_4764); } } 
if(BgL_testz00_4760)
{ /* Llib/srfi4.scm 438 */
return 
BGL_U8VREF(BgL_vz00_75, BgL_kz00_76);}  else 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_arg2134z00_3339;obj_t BgL_arg2135z00_3340;
BgL_arg2134z00_3339 = BGl_symbol3140z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_arg2137z00_3341;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2139z00_3342;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2140z00_3343;
BgL_arg2140z00_3343 = 
BGL_HVECTOR_LENGTH(BgL_vz00_75); 
BgL_arg2139z00_3342 = 
(BgL_arg2140z00_3343-((long)1)); } 
{ /* Llib/srfi4.scm 438 */

BgL_arg2137z00_3341 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2139z00_3342, ((long)10)); } } 
BgL_arg2135z00_3340 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2137z00_3341, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_auxz00_4772;
{ /* Llib/srfi4.scm 438 */
obj_t BgL_aux2810z00_3344;
BgL_aux2810z00_3344 = 
BGl_errorz00zz__errorz00(BgL_arg2134z00_3339, BgL_arg2135z00_3340, 
BINT(BgL_kz00_76)); 
if(
INTEGERP(BgL_aux2810z00_3344))
{ /* Llib/srfi4.scm 438 */
BgL_auxz00_4772 = BgL_aux2810z00_3344
; }  else 
{ 
obj_t BgL_auxz00_4777;
BgL_auxz00_4777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17738)), BGl_string3142z00zz__srfi4z00, BGl_string3100z00zz__srfi4z00, BgL_aux2810z00_3344); 
FAILURE(BgL_auxz00_4777,BFALSE,BFALSE);} } 
return 
(unsigned char)CINT(BgL_auxz00_4772);} } } } 
}



/* _u8vector-ref */
obj_t BGl__u8vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2768, obj_t BgL_vz00_2769, obj_t BgL_kz00_2770)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 437 */
{ /* Llib/srfi4.scm 438 */
unsigned char BgL_auxz00_4782;
{ /* Llib/srfi4.scm 438 */
obj_t BgL_vz00_3345;long BgL_kz00_3346;
if(
BGL_U8VECTORP(BgL_vz00_2769))
{ /* Llib/srfi4.scm 438 */
BgL_vz00_3345 = BgL_vz00_2769; }  else 
{ 
obj_t BgL_auxz00_4785;
BgL_auxz00_4785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17738)), BGl_string3143z00zz__srfi4z00, BGl_string3072z00zz__srfi4z00, BgL_vz00_2769); 
FAILURE(BgL_auxz00_4785,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_auxz00_4789;
if(
INTEGERP(BgL_kz00_2770))
{ /* Llib/srfi4.scm 438 */
BgL_auxz00_4789 = BgL_kz00_2770
; }  else 
{ 
obj_t BgL_auxz00_4792;
BgL_auxz00_4792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17738)), BGl_string3143z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2770); 
FAILURE(BgL_auxz00_4792,BFALSE,BFALSE);} 
BgL_kz00_3346 = 
(long)CINT(BgL_auxz00_4789); } 
{ /* Llib/srfi4.scm 438 */
bool_t BgL_testz00_4797;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2144z00_3347;
BgL_arg2144z00_3347 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3345); 
{ /* Llib/srfi4.scm 438 */
int BgL_auxz00_4801;int BgL_auxz00_4799;
BgL_auxz00_4801 = 
(int)(BgL_arg2144z00_3347); 
BgL_auxz00_4799 = 
(int)(BgL_kz00_3346); 
BgL_testz00_4797 = 
BOUND_CHECK(BgL_auxz00_4799, BgL_auxz00_4801); } } 
if(BgL_testz00_4797)
{ /* Llib/srfi4.scm 438 */
BgL_auxz00_4782 = 
BGL_U8VREF(BgL_vz00_3345, BgL_kz00_3346)
; }  else 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_arg2134z00_3348;obj_t BgL_arg2135z00_3349;
BgL_arg2134z00_3348 = BGl_symbol3140z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_arg2137z00_3350;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2139z00_3351;
{ /* Llib/srfi4.scm 438 */
long BgL_arg2140z00_3352;
BgL_arg2140z00_3352 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3345); 
BgL_arg2139z00_3351 = 
(BgL_arg2140z00_3352-((long)1)); } 
{ /* Llib/srfi4.scm 438 */

BgL_arg2137z00_3350 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2139z00_3351, ((long)10)); } } 
BgL_arg2135z00_3349 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2137z00_3350, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 438 */
obj_t BgL_auxz00_4809;
{ /* Llib/srfi4.scm 438 */
obj_t BgL_aux2810z00_3353;
BgL_aux2810z00_3353 = 
BGl_errorz00zz__errorz00(BgL_arg2134z00_3348, BgL_arg2135z00_3349, 
BINT(BgL_kz00_3346)); 
if(
INTEGERP(BgL_aux2810z00_3353))
{ /* Llib/srfi4.scm 438 */
BgL_auxz00_4809 = BgL_aux2810z00_3353
; }  else 
{ 
obj_t BgL_auxz00_4814;
BgL_auxz00_4814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)17738)), BGl_string3142z00zz__srfi4z00, BGl_string3100z00zz__srfi4z00, BgL_aux2810z00_3353); 
FAILURE(BgL_auxz00_4814,BFALSE,BFALSE);} } 
BgL_auxz00_4782 = 
(unsigned char)CINT(BgL_auxz00_4809); } } } } 
return 
BINT(BgL_auxz00_4782);} } 
}



/* s16vector-ref */
BGL_EXPORTED_DEF short BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_77, long BgL_kz00_78)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 446 */
{ /* Llib/srfi4.scm 447 */
bool_t BgL_testz00_4820;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2154z00_3354;
BgL_arg2154z00_3354 = 
BGL_HVECTOR_LENGTH(BgL_vz00_77); 
{ /* Llib/srfi4.scm 447 */
int BgL_auxz00_4824;int BgL_auxz00_4822;
BgL_auxz00_4824 = 
(int)(BgL_arg2154z00_3354); 
BgL_auxz00_4822 = 
(int)(BgL_kz00_78); 
BgL_testz00_4820 = 
BOUND_CHECK(BgL_auxz00_4822, BgL_auxz00_4824); } } 
if(BgL_testz00_4820)
{ /* Llib/srfi4.scm 447 */
return 
BGL_S16VREF(BgL_vz00_77, BgL_kz00_78);}  else 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_arg2146z00_3355;obj_t BgL_arg2147z00_3356;
BgL_arg2146z00_3355 = BGl_symbol3144z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_arg2149z00_3357;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2151z00_3358;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2152z00_3359;
BgL_arg2152z00_3359 = 
BGL_HVECTOR_LENGTH(BgL_vz00_77); 
BgL_arg2151z00_3358 = 
(BgL_arg2152z00_3359-((long)1)); } 
{ /* Llib/srfi4.scm 447 */

BgL_arg2149z00_3357 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2151z00_3358, ((long)10)); } } 
BgL_arg2147z00_3356 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2149z00_3357, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_auxz00_4832;
{ /* Llib/srfi4.scm 447 */
obj_t BgL_aux2816z00_3360;
BgL_aux2816z00_3360 = 
BGl_errorz00zz__errorz00(BgL_arg2146z00_3355, BgL_arg2147z00_3356, 
BINT(BgL_kz00_78)); 
if(
INTEGERP(BgL_aux2816z00_3360))
{ /* Llib/srfi4.scm 447 */
BgL_auxz00_4832 = BgL_aux2816z00_3360
; }  else 
{ 
obj_t BgL_auxz00_4837;
BgL_auxz00_4837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18010)), BGl_string3146z00zz__srfi4z00, BGl_string3104z00zz__srfi4z00, BgL_aux2816z00_3360); 
FAILURE(BgL_auxz00_4837,BFALSE,BFALSE);} } 
return 
(short)CINT(BgL_auxz00_4832);} } } } 
}



/* _s16vector-ref */
obj_t BGl__s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2775, obj_t BgL_vz00_2776, obj_t BgL_kz00_2777)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 446 */
{ /* Llib/srfi4.scm 447 */
short BgL_auxz00_4842;
{ /* Llib/srfi4.scm 447 */
obj_t BgL_vz00_3361;long BgL_kz00_3362;
if(
BGL_S16VECTORP(BgL_vz00_2776))
{ /* Llib/srfi4.scm 447 */
BgL_vz00_3361 = BgL_vz00_2776; }  else 
{ 
obj_t BgL_auxz00_4845;
BgL_auxz00_4845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18010)), BGl_string3147z00zz__srfi4z00, BGl_string3074z00zz__srfi4z00, BgL_vz00_2776); 
FAILURE(BgL_auxz00_4845,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_auxz00_4849;
if(
INTEGERP(BgL_kz00_2777))
{ /* Llib/srfi4.scm 447 */
BgL_auxz00_4849 = BgL_kz00_2777
; }  else 
{ 
obj_t BgL_auxz00_4852;
BgL_auxz00_4852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18010)), BGl_string3147z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2777); 
FAILURE(BgL_auxz00_4852,BFALSE,BFALSE);} 
BgL_kz00_3362 = 
(long)CINT(BgL_auxz00_4849); } 
{ /* Llib/srfi4.scm 447 */
bool_t BgL_testz00_4857;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2154z00_3363;
BgL_arg2154z00_3363 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3361); 
{ /* Llib/srfi4.scm 447 */
int BgL_auxz00_4861;int BgL_auxz00_4859;
BgL_auxz00_4861 = 
(int)(BgL_arg2154z00_3363); 
BgL_auxz00_4859 = 
(int)(BgL_kz00_3362); 
BgL_testz00_4857 = 
BOUND_CHECK(BgL_auxz00_4859, BgL_auxz00_4861); } } 
if(BgL_testz00_4857)
{ /* Llib/srfi4.scm 447 */
BgL_auxz00_4842 = 
BGL_S16VREF(BgL_vz00_3361, BgL_kz00_3362)
; }  else 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_arg2146z00_3364;obj_t BgL_arg2147z00_3365;
BgL_arg2146z00_3364 = BGl_symbol3144z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_arg2149z00_3366;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2151z00_3367;
{ /* Llib/srfi4.scm 447 */
long BgL_arg2152z00_3368;
BgL_arg2152z00_3368 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3361); 
BgL_arg2151z00_3367 = 
(BgL_arg2152z00_3368-((long)1)); } 
{ /* Llib/srfi4.scm 447 */

BgL_arg2149z00_3366 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2151z00_3367, ((long)10)); } } 
BgL_arg2147z00_3365 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2149z00_3366, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 447 */
obj_t BgL_auxz00_4869;
{ /* Llib/srfi4.scm 447 */
obj_t BgL_aux2816z00_3369;
BgL_aux2816z00_3369 = 
BGl_errorz00zz__errorz00(BgL_arg2146z00_3364, BgL_arg2147z00_3365, 
BINT(BgL_kz00_3362)); 
if(
INTEGERP(BgL_aux2816z00_3369))
{ /* Llib/srfi4.scm 447 */
BgL_auxz00_4869 = BgL_aux2816z00_3369
; }  else 
{ 
obj_t BgL_auxz00_4874;
BgL_auxz00_4874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18010)), BGl_string3146z00zz__srfi4z00, BGl_string3104z00zz__srfi4z00, BgL_aux2816z00_3369); 
FAILURE(BgL_auxz00_4874,BFALSE,BFALSE);} } 
BgL_auxz00_4842 = 
(short)CINT(BgL_auxz00_4869); } } } } 
return 
BINT(BgL_auxz00_4842);} } 
}



/* u16vector-ref */
BGL_EXPORTED_DEF unsigned short BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_79, long BgL_kz00_80)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 455 */
{ /* Llib/srfi4.scm 456 */
bool_t BgL_testz00_4880;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2164z00_3370;
BgL_arg2164z00_3370 = 
BGL_HVECTOR_LENGTH(BgL_vz00_79); 
{ /* Llib/srfi4.scm 456 */
int BgL_auxz00_4884;int BgL_auxz00_4882;
BgL_auxz00_4884 = 
(int)(BgL_arg2164z00_3370); 
BgL_auxz00_4882 = 
(int)(BgL_kz00_80); 
BgL_testz00_4880 = 
BOUND_CHECK(BgL_auxz00_4882, BgL_auxz00_4884); } } 
if(BgL_testz00_4880)
{ /* Llib/srfi4.scm 456 */
return 
BGL_U16VREF(BgL_vz00_79, BgL_kz00_80);}  else 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_arg2156z00_3371;obj_t BgL_arg2157z00_3372;
BgL_arg2156z00_3371 = BGl_symbol3148z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_arg2159z00_3373;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2161z00_3374;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2162z00_3375;
BgL_arg2162z00_3375 = 
BGL_HVECTOR_LENGTH(BgL_vz00_79); 
BgL_arg2161z00_3374 = 
(BgL_arg2162z00_3375-((long)1)); } 
{ /* Llib/srfi4.scm 456 */

BgL_arg2159z00_3373 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2161z00_3374, ((long)10)); } } 
BgL_arg2157z00_3372 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2159z00_3373, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_auxz00_4892;
{ /* Llib/srfi4.scm 456 */
obj_t BgL_aux2822z00_3376;
BgL_aux2822z00_3376 = 
BGl_errorz00zz__errorz00(BgL_arg2156z00_3371, BgL_arg2157z00_3372, 
BINT(BgL_kz00_80)); 
if(
INTEGERP(BgL_aux2822z00_3376))
{ /* Llib/srfi4.scm 456 */
BgL_auxz00_4892 = BgL_aux2822z00_3376
; }  else 
{ 
obj_t BgL_auxz00_4897;
BgL_auxz00_4897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18284)), BGl_string3150z00zz__srfi4z00, BGl_string3108z00zz__srfi4z00, BgL_aux2822z00_3376); 
FAILURE(BgL_auxz00_4897,BFALSE,BFALSE);} } 
return 
(unsigned short)CINT(BgL_auxz00_4892);} } } } 
}



/* _u16vector-ref */
obj_t BGl__u16vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2782, obj_t BgL_vz00_2783, obj_t BgL_kz00_2784)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 455 */
{ /* Llib/srfi4.scm 456 */
unsigned short BgL_auxz00_4902;
{ /* Llib/srfi4.scm 456 */
obj_t BgL_vz00_3377;long BgL_kz00_3378;
if(
BGL_U16VECTORP(BgL_vz00_2783))
{ /* Llib/srfi4.scm 456 */
BgL_vz00_3377 = BgL_vz00_2783; }  else 
{ 
obj_t BgL_auxz00_4905;
BgL_auxz00_4905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18284)), BGl_string3151z00zz__srfi4z00, BGl_string3076z00zz__srfi4z00, BgL_vz00_2783); 
FAILURE(BgL_auxz00_4905,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_auxz00_4909;
if(
INTEGERP(BgL_kz00_2784))
{ /* Llib/srfi4.scm 456 */
BgL_auxz00_4909 = BgL_kz00_2784
; }  else 
{ 
obj_t BgL_auxz00_4912;
BgL_auxz00_4912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18284)), BGl_string3151z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2784); 
FAILURE(BgL_auxz00_4912,BFALSE,BFALSE);} 
BgL_kz00_3378 = 
(long)CINT(BgL_auxz00_4909); } 
{ /* Llib/srfi4.scm 456 */
bool_t BgL_testz00_4917;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2164z00_3379;
BgL_arg2164z00_3379 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3377); 
{ /* Llib/srfi4.scm 456 */
int BgL_auxz00_4921;int BgL_auxz00_4919;
BgL_auxz00_4921 = 
(int)(BgL_arg2164z00_3379); 
BgL_auxz00_4919 = 
(int)(BgL_kz00_3378); 
BgL_testz00_4917 = 
BOUND_CHECK(BgL_auxz00_4919, BgL_auxz00_4921); } } 
if(BgL_testz00_4917)
{ /* Llib/srfi4.scm 456 */
BgL_auxz00_4902 = 
BGL_U16VREF(BgL_vz00_3377, BgL_kz00_3378)
; }  else 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_arg2156z00_3380;obj_t BgL_arg2157z00_3381;
BgL_arg2156z00_3380 = BGl_symbol3148z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_arg2159z00_3382;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2161z00_3383;
{ /* Llib/srfi4.scm 456 */
long BgL_arg2162z00_3384;
BgL_arg2162z00_3384 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3377); 
BgL_arg2161z00_3383 = 
(BgL_arg2162z00_3384-((long)1)); } 
{ /* Llib/srfi4.scm 456 */

BgL_arg2159z00_3382 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2161z00_3383, ((long)10)); } } 
BgL_arg2157z00_3381 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2159z00_3382, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 456 */
obj_t BgL_auxz00_4929;
{ /* Llib/srfi4.scm 456 */
obj_t BgL_aux2822z00_3385;
BgL_aux2822z00_3385 = 
BGl_errorz00zz__errorz00(BgL_arg2156z00_3380, BgL_arg2157z00_3381, 
BINT(BgL_kz00_3378)); 
if(
INTEGERP(BgL_aux2822z00_3385))
{ /* Llib/srfi4.scm 456 */
BgL_auxz00_4929 = BgL_aux2822z00_3385
; }  else 
{ 
obj_t BgL_auxz00_4934;
BgL_auxz00_4934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18284)), BGl_string3150z00zz__srfi4z00, BGl_string3108z00zz__srfi4z00, BgL_aux2822z00_3385); 
FAILURE(BgL_auxz00_4934,BFALSE,BFALSE);} } 
BgL_auxz00_4902 = 
(unsigned short)CINT(BgL_auxz00_4929); } } } } 
return 
BINT(BgL_auxz00_4902);} } 
}



/* s32vector-ref */
BGL_EXPORTED_DEF long BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_81, long BgL_kz00_82)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 464 */
{ /* Llib/srfi4.scm 465 */
bool_t BgL_testz00_4940;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2174z00_3386;
BgL_arg2174z00_3386 = 
BGL_HVECTOR_LENGTH(BgL_vz00_81); 
{ /* Llib/srfi4.scm 465 */
int BgL_auxz00_4944;int BgL_auxz00_4942;
BgL_auxz00_4944 = 
(int)(BgL_arg2174z00_3386); 
BgL_auxz00_4942 = 
(int)(BgL_kz00_82); 
BgL_testz00_4940 = 
BOUND_CHECK(BgL_auxz00_4942, BgL_auxz00_4944); } } 
if(BgL_testz00_4940)
{ /* Llib/srfi4.scm 465 */
return 
BGL_S32VREF(BgL_vz00_81, BgL_kz00_82);}  else 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_arg2166z00_3387;obj_t BgL_arg2167z00_3388;
BgL_arg2166z00_3387 = BGl_symbol3152z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_arg2169z00_3389;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2171z00_3390;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2172z00_3391;
BgL_arg2172z00_3391 = 
BGL_HVECTOR_LENGTH(BgL_vz00_81); 
BgL_arg2171z00_3390 = 
(BgL_arg2172z00_3391-((long)1)); } 
{ /* Llib/srfi4.scm 465 */

BgL_arg2169z00_3389 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2171z00_3390, ((long)10)); } } 
BgL_arg2167z00_3388 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2169z00_3389, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_auxz00_4952;
{ /* Llib/srfi4.scm 465 */
obj_t BgL_aux2828z00_3392;
BgL_aux2828z00_3392 = 
BGl_errorz00zz__errorz00(BgL_arg2166z00_3387, BgL_arg2167z00_3388, 
BINT(BgL_kz00_82)); 
if(
INTEGERP(BgL_aux2828z00_3392))
{ /* Llib/srfi4.scm 465 */
BgL_auxz00_4952 = BgL_aux2828z00_3392
; }  else 
{ 
obj_t BgL_auxz00_4957;
BgL_auxz00_4957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18558)), BGl_string3154z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_aux2828z00_3392); 
FAILURE(BgL_auxz00_4957,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_4952);} } } } 
}



/* _s32vector-ref */
obj_t BGl__s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2789, obj_t BgL_vz00_2790, obj_t BgL_kz00_2791)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 464 */
{ /* Llib/srfi4.scm 465 */
long BgL_auxz00_4962;
{ /* Llib/srfi4.scm 465 */
obj_t BgL_vz00_3393;long BgL_kz00_3394;
if(
BGL_S32VECTORP(BgL_vz00_2790))
{ /* Llib/srfi4.scm 465 */
BgL_vz00_3393 = BgL_vz00_2790; }  else 
{ 
obj_t BgL_auxz00_4965;
BgL_auxz00_4965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18558)), BGl_string3155z00zz__srfi4z00, BGl_string3078z00zz__srfi4z00, BgL_vz00_2790); 
FAILURE(BgL_auxz00_4965,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_auxz00_4969;
if(
INTEGERP(BgL_kz00_2791))
{ /* Llib/srfi4.scm 465 */
BgL_auxz00_4969 = BgL_kz00_2791
; }  else 
{ 
obj_t BgL_auxz00_4972;
BgL_auxz00_4972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18558)), BGl_string3155z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2791); 
FAILURE(BgL_auxz00_4972,BFALSE,BFALSE);} 
BgL_kz00_3394 = 
(long)CINT(BgL_auxz00_4969); } 
{ /* Llib/srfi4.scm 465 */
bool_t BgL_testz00_4977;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2174z00_3395;
BgL_arg2174z00_3395 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3393); 
{ /* Llib/srfi4.scm 465 */
int BgL_auxz00_4981;int BgL_auxz00_4979;
BgL_auxz00_4981 = 
(int)(BgL_arg2174z00_3395); 
BgL_auxz00_4979 = 
(int)(BgL_kz00_3394); 
BgL_testz00_4977 = 
BOUND_CHECK(BgL_auxz00_4979, BgL_auxz00_4981); } } 
if(BgL_testz00_4977)
{ /* Llib/srfi4.scm 465 */
BgL_auxz00_4962 = 
BGL_S32VREF(BgL_vz00_3393, BgL_kz00_3394)
; }  else 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_arg2166z00_3396;obj_t BgL_arg2167z00_3397;
BgL_arg2166z00_3396 = BGl_symbol3152z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_arg2169z00_3398;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2171z00_3399;
{ /* Llib/srfi4.scm 465 */
long BgL_arg2172z00_3400;
BgL_arg2172z00_3400 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3393); 
BgL_arg2171z00_3399 = 
(BgL_arg2172z00_3400-((long)1)); } 
{ /* Llib/srfi4.scm 465 */

BgL_arg2169z00_3398 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2171z00_3399, ((long)10)); } } 
BgL_arg2167z00_3397 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2169z00_3398, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 465 */
obj_t BgL_auxz00_4989;
{ /* Llib/srfi4.scm 465 */
obj_t BgL_aux2828z00_3401;
BgL_aux2828z00_3401 = 
BGl_errorz00zz__errorz00(BgL_arg2166z00_3396, BgL_arg2167z00_3397, 
BINT(BgL_kz00_3394)); 
if(
INTEGERP(BgL_aux2828z00_3401))
{ /* Llib/srfi4.scm 465 */
BgL_auxz00_4989 = BgL_aux2828z00_3401
; }  else 
{ 
obj_t BgL_auxz00_4994;
BgL_auxz00_4994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18558)), BGl_string3154z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_aux2828z00_3401); 
FAILURE(BgL_auxz00_4994,BFALSE,BFALSE);} } 
BgL_auxz00_4962 = 
(long)CINT(BgL_auxz00_4989); } } } } 
return 
BINT(BgL_auxz00_4962);} } 
}



/* u32vector-ref */
BGL_EXPORTED_DEF unsigned long BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_83, long BgL_kz00_84)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 473 */
{ /* Llib/srfi4.scm 474 */
bool_t BgL_testz00_5000;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2184z00_3402;
BgL_arg2184z00_3402 = 
BGL_HVECTOR_LENGTH(BgL_vz00_83); 
{ /* Llib/srfi4.scm 474 */
int BgL_auxz00_5004;int BgL_auxz00_5002;
BgL_auxz00_5004 = 
(int)(BgL_arg2184z00_3402); 
BgL_auxz00_5002 = 
(int)(BgL_kz00_84); 
BgL_testz00_5000 = 
BOUND_CHECK(BgL_auxz00_5002, BgL_auxz00_5004); } } 
if(BgL_testz00_5000)
{ /* Llib/srfi4.scm 474 */
return 
BGL_U32VREF(BgL_vz00_83, BgL_kz00_84);}  else 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_arg2176z00_3403;obj_t BgL_arg2177z00_3404;
BgL_arg2176z00_3403 = BGl_symbol3156z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_arg2179z00_3405;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2181z00_3406;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2182z00_3407;
BgL_arg2182z00_3407 = 
BGL_HVECTOR_LENGTH(BgL_vz00_83); 
BgL_arg2181z00_3406 = 
(BgL_arg2182z00_3407-((long)1)); } 
{ /* Llib/srfi4.scm 474 */

BgL_arg2179z00_3405 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2181z00_3406, ((long)10)); } } 
BgL_arg2177z00_3404 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2179z00_3405, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_auxz00_5012;
{ /* Llib/srfi4.scm 474 */
obj_t BgL_aux2834z00_3408;
BgL_aux2834z00_3408 = 
BGl_errorz00zz__errorz00(BgL_arg2176z00_3403, BgL_arg2177z00_3404, 
BINT(BgL_kz00_84)); 
if(
INTEGERP(BgL_aux2834z00_3408))
{ /* Llib/srfi4.scm 474 */
BgL_auxz00_5012 = BgL_aux2834z00_3408
; }  else 
{ 
obj_t BgL_auxz00_5017;
BgL_auxz00_5017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18832)), BGl_string3158z00zz__srfi4z00, BGl_string3115z00zz__srfi4z00, BgL_aux2834z00_3408); 
FAILURE(BgL_auxz00_5017,BFALSE,BFALSE);} } 
return 
(unsigned long)CINT(BgL_auxz00_5012);} } } } 
}



/* _u32vector-ref */
obj_t BGl__u32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2796, obj_t BgL_vz00_2797, obj_t BgL_kz00_2798)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 473 */
{ /* Llib/srfi4.scm 474 */
unsigned long BgL_auxz00_5022;
{ /* Llib/srfi4.scm 474 */
obj_t BgL_vz00_3409;long BgL_kz00_3410;
if(
BGL_U32VECTORP(BgL_vz00_2797))
{ /* Llib/srfi4.scm 474 */
BgL_vz00_3409 = BgL_vz00_2797; }  else 
{ 
obj_t BgL_auxz00_5025;
BgL_auxz00_5025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18832)), BGl_string3159z00zz__srfi4z00, BGl_string3080z00zz__srfi4z00, BgL_vz00_2797); 
FAILURE(BgL_auxz00_5025,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_auxz00_5029;
if(
INTEGERP(BgL_kz00_2798))
{ /* Llib/srfi4.scm 474 */
BgL_auxz00_5029 = BgL_kz00_2798
; }  else 
{ 
obj_t BgL_auxz00_5032;
BgL_auxz00_5032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18832)), BGl_string3159z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2798); 
FAILURE(BgL_auxz00_5032,BFALSE,BFALSE);} 
BgL_kz00_3410 = 
(long)CINT(BgL_auxz00_5029); } 
{ /* Llib/srfi4.scm 474 */
bool_t BgL_testz00_5037;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2184z00_3411;
BgL_arg2184z00_3411 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3409); 
{ /* Llib/srfi4.scm 474 */
int BgL_auxz00_5041;int BgL_auxz00_5039;
BgL_auxz00_5041 = 
(int)(BgL_arg2184z00_3411); 
BgL_auxz00_5039 = 
(int)(BgL_kz00_3410); 
BgL_testz00_5037 = 
BOUND_CHECK(BgL_auxz00_5039, BgL_auxz00_5041); } } 
if(BgL_testz00_5037)
{ /* Llib/srfi4.scm 474 */
BgL_auxz00_5022 = 
BGL_U32VREF(BgL_vz00_3409, BgL_kz00_3410)
; }  else 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_arg2176z00_3412;obj_t BgL_arg2177z00_3413;
BgL_arg2176z00_3412 = BGl_symbol3156z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_arg2179z00_3414;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2181z00_3415;
{ /* Llib/srfi4.scm 474 */
long BgL_arg2182z00_3416;
BgL_arg2182z00_3416 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3409); 
BgL_arg2181z00_3415 = 
(BgL_arg2182z00_3416-((long)1)); } 
{ /* Llib/srfi4.scm 474 */

BgL_arg2179z00_3414 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2181z00_3415, ((long)10)); } } 
BgL_arg2177z00_3413 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2179z00_3414, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 474 */
obj_t BgL_auxz00_5049;
{ /* Llib/srfi4.scm 474 */
obj_t BgL_aux2834z00_3417;
BgL_aux2834z00_3417 = 
BGl_errorz00zz__errorz00(BgL_arg2176z00_3412, BgL_arg2177z00_3413, 
BINT(BgL_kz00_3410)); 
if(
INTEGERP(BgL_aux2834z00_3417))
{ /* Llib/srfi4.scm 474 */
BgL_auxz00_5049 = BgL_aux2834z00_3417
; }  else 
{ 
obj_t BgL_auxz00_5054;
BgL_auxz00_5054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)18832)), BGl_string3158z00zz__srfi4z00, BGl_string3115z00zz__srfi4z00, BgL_aux2834z00_3417); 
FAILURE(BgL_auxz00_5054,BFALSE,BFALSE);} } 
BgL_auxz00_5022 = 
(unsigned long)CINT(BgL_auxz00_5049); } } } } 
return 
BINT(BgL_auxz00_5022);} } 
}



/* s64vector-ref */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_85, long BgL_kz00_86)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 482 */
{ /* Llib/srfi4.scm 483 */
bool_t BgL_testz00_5060;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2194z00_3418;
BgL_arg2194z00_3418 = 
BGL_HVECTOR_LENGTH(BgL_vz00_85); 
{ /* Llib/srfi4.scm 483 */
int BgL_auxz00_5064;int BgL_auxz00_5062;
BgL_auxz00_5064 = 
(int)(BgL_arg2194z00_3418); 
BgL_auxz00_5062 = 
(int)(BgL_kz00_86); 
BgL_testz00_5060 = 
BOUND_CHECK(BgL_auxz00_5062, BgL_auxz00_5064); } } 
if(BgL_testz00_5060)
{ /* Llib/srfi4.scm 483 */
return 
BGL_S64VREF(BgL_vz00_85, BgL_kz00_86);}  else 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_arg2186z00_3419;obj_t BgL_arg2187z00_3420;
BgL_arg2186z00_3419 = BGl_symbol3160z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_arg2189z00_3421;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2191z00_3422;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2192z00_3423;
BgL_arg2192z00_3423 = 
BGL_HVECTOR_LENGTH(BgL_vz00_85); 
BgL_arg2191z00_3422 = 
(BgL_arg2192z00_3423-((long)1)); } 
{ /* Llib/srfi4.scm 483 */

BgL_arg2189z00_3421 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2191z00_3422, ((long)10)); } } 
BgL_arg2187z00_3420 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2189z00_3421, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_auxz00_5072;
{ /* Llib/srfi4.scm 483 */
obj_t BgL_aux2840z00_3424;
BgL_aux2840z00_3424 = 
BGl_errorz00zz__errorz00(BgL_arg2186z00_3419, BgL_arg2187z00_3420, 
BINT(BgL_kz00_86)); 
if(
LLONGP(BgL_aux2840z00_3424))
{ /* Llib/srfi4.scm 483 */
BgL_auxz00_5072 = BgL_aux2840z00_3424
; }  else 
{ 
obj_t BgL_auxz00_5077;
BgL_auxz00_5077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19106)), BGl_string3162z00zz__srfi4z00, BGl_string3120z00zz__srfi4z00, BgL_aux2840z00_3424); 
FAILURE(BgL_auxz00_5077,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_5072);} } } } 
}



/* _s64vector-ref */
obj_t BGl__s64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2803, obj_t BgL_vz00_2804, obj_t BgL_kz00_2805)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 482 */
{ /* Llib/srfi4.scm 483 */
BGL_LONGLONG_T BgL_auxz00_5082;
{ /* Llib/srfi4.scm 483 */
obj_t BgL_vz00_3425;long BgL_kz00_3426;
if(
BGL_S64VECTORP(BgL_vz00_2804))
{ /* Llib/srfi4.scm 483 */
BgL_vz00_3425 = BgL_vz00_2804; }  else 
{ 
obj_t BgL_auxz00_5085;
BgL_auxz00_5085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19106)), BGl_string3163z00zz__srfi4z00, BGl_string3082z00zz__srfi4z00, BgL_vz00_2804); 
FAILURE(BgL_auxz00_5085,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_auxz00_5089;
if(
INTEGERP(BgL_kz00_2805))
{ /* Llib/srfi4.scm 483 */
BgL_auxz00_5089 = BgL_kz00_2805
; }  else 
{ 
obj_t BgL_auxz00_5092;
BgL_auxz00_5092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19106)), BGl_string3163z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2805); 
FAILURE(BgL_auxz00_5092,BFALSE,BFALSE);} 
BgL_kz00_3426 = 
(long)CINT(BgL_auxz00_5089); } 
{ /* Llib/srfi4.scm 483 */
bool_t BgL_testz00_5097;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2194z00_3427;
BgL_arg2194z00_3427 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3425); 
{ /* Llib/srfi4.scm 483 */
int BgL_auxz00_5101;int BgL_auxz00_5099;
BgL_auxz00_5101 = 
(int)(BgL_arg2194z00_3427); 
BgL_auxz00_5099 = 
(int)(BgL_kz00_3426); 
BgL_testz00_5097 = 
BOUND_CHECK(BgL_auxz00_5099, BgL_auxz00_5101); } } 
if(BgL_testz00_5097)
{ /* Llib/srfi4.scm 483 */
BgL_auxz00_5082 = 
BGL_S64VREF(BgL_vz00_3425, BgL_kz00_3426)
; }  else 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_arg2186z00_3428;obj_t BgL_arg2187z00_3429;
BgL_arg2186z00_3428 = BGl_symbol3160z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_arg2189z00_3430;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2191z00_3431;
{ /* Llib/srfi4.scm 483 */
long BgL_arg2192z00_3432;
BgL_arg2192z00_3432 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3425); 
BgL_arg2191z00_3431 = 
(BgL_arg2192z00_3432-((long)1)); } 
{ /* Llib/srfi4.scm 483 */

BgL_arg2189z00_3430 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2191z00_3431, ((long)10)); } } 
BgL_arg2187z00_3429 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2189z00_3430, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 483 */
obj_t BgL_auxz00_5109;
{ /* Llib/srfi4.scm 483 */
obj_t BgL_aux2840z00_3433;
BgL_aux2840z00_3433 = 
BGl_errorz00zz__errorz00(BgL_arg2186z00_3428, BgL_arg2187z00_3429, 
BINT(BgL_kz00_3426)); 
if(
LLONGP(BgL_aux2840z00_3433))
{ /* Llib/srfi4.scm 483 */
BgL_auxz00_5109 = BgL_aux2840z00_3433
; }  else 
{ 
obj_t BgL_auxz00_5114;
BgL_auxz00_5114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19106)), BGl_string3162z00zz__srfi4z00, BGl_string3120z00zz__srfi4z00, BgL_aux2840z00_3433); 
FAILURE(BgL_auxz00_5114,BFALSE,BFALSE);} } 
BgL_auxz00_5082 = 
BLLONG_TO_LLONG(BgL_auxz00_5109); } } } } 
return 
make_bllong(BgL_auxz00_5082);} } 
}



/* u64vector-ref */
BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_87, long BgL_kz00_88)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 491 */
{ /* Llib/srfi4.scm 492 */
bool_t BgL_testz00_5120;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2206z00_3434;
BgL_arg2206z00_3434 = 
BGL_HVECTOR_LENGTH(BgL_vz00_87); 
{ /* Llib/srfi4.scm 492 */
int BgL_auxz00_5124;int BgL_auxz00_5122;
BgL_auxz00_5124 = 
(int)(BgL_arg2206z00_3434); 
BgL_auxz00_5122 = 
(int)(BgL_kz00_88); 
BgL_testz00_5120 = 
BOUND_CHECK(BgL_auxz00_5122, BgL_auxz00_5124); } } 
if(BgL_testz00_5120)
{ /* Llib/srfi4.scm 492 */
return 
BGL_U64VREF(BgL_vz00_87, BgL_kz00_88);}  else 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_arg2196z00_3435;obj_t BgL_arg2197z00_3436;
BgL_arg2196z00_3435 = BGl_symbol3164z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_arg2199z00_3437;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2203z00_3438;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2204z00_3439;
BgL_arg2204z00_3439 = 
BGL_HVECTOR_LENGTH(BgL_vz00_87); 
BgL_arg2203z00_3438 = 
(BgL_arg2204z00_3439-((long)1)); } 
{ /* Llib/srfi4.scm 492 */

BgL_arg2199z00_3437 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2203z00_3438, ((long)10)); } } 
BgL_arg2197z00_3436 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2199z00_3437, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_auxz00_5132;
{ /* Llib/srfi4.scm 492 */
obj_t BgL_aux2846z00_3440;
BgL_aux2846z00_3440 = 
BGl_errorz00zz__errorz00(BgL_arg2196z00_3435, BgL_arg2197z00_3436, 
BINT(BgL_kz00_88)); 
if(
LLONGP(BgL_aux2846z00_3440))
{ /* Llib/srfi4.scm 492 */
BgL_auxz00_5132 = BgL_aux2846z00_3440
; }  else 
{ 
obj_t BgL_auxz00_5137;
BgL_auxz00_5137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19380)), BGl_string3166z00zz__srfi4z00, BGl_string3124z00zz__srfi4z00, BgL_aux2846z00_3440); 
FAILURE(BgL_auxz00_5137,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_5132);} } } } 
}



/* _u64vector-ref */
obj_t BGl__u64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2810, obj_t BgL_vz00_2811, obj_t BgL_kz00_2812)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 491 */
{ /* Llib/srfi4.scm 492 */
unsigned BGL_LONGLONG_T BgL_auxz00_5142;
{ /* Llib/srfi4.scm 492 */
obj_t BgL_vz00_3441;long BgL_kz00_3442;
if(
BGL_U64VECTORP(BgL_vz00_2811))
{ /* Llib/srfi4.scm 492 */
BgL_vz00_3441 = BgL_vz00_2811; }  else 
{ 
obj_t BgL_auxz00_5145;
BgL_auxz00_5145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19380)), BGl_string3167z00zz__srfi4z00, BGl_string3084z00zz__srfi4z00, BgL_vz00_2811); 
FAILURE(BgL_auxz00_5145,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_auxz00_5149;
if(
INTEGERP(BgL_kz00_2812))
{ /* Llib/srfi4.scm 492 */
BgL_auxz00_5149 = BgL_kz00_2812
; }  else 
{ 
obj_t BgL_auxz00_5152;
BgL_auxz00_5152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19380)), BGl_string3167z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2812); 
FAILURE(BgL_auxz00_5152,BFALSE,BFALSE);} 
BgL_kz00_3442 = 
(long)CINT(BgL_auxz00_5149); } 
{ /* Llib/srfi4.scm 492 */
bool_t BgL_testz00_5157;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2206z00_3443;
BgL_arg2206z00_3443 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3441); 
{ /* Llib/srfi4.scm 492 */
int BgL_auxz00_5161;int BgL_auxz00_5159;
BgL_auxz00_5161 = 
(int)(BgL_arg2206z00_3443); 
BgL_auxz00_5159 = 
(int)(BgL_kz00_3442); 
BgL_testz00_5157 = 
BOUND_CHECK(BgL_auxz00_5159, BgL_auxz00_5161); } } 
if(BgL_testz00_5157)
{ /* Llib/srfi4.scm 492 */
BgL_auxz00_5142 = 
BGL_U64VREF(BgL_vz00_3441, BgL_kz00_3442)
; }  else 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_arg2196z00_3444;obj_t BgL_arg2197z00_3445;
BgL_arg2196z00_3444 = BGl_symbol3164z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_arg2199z00_3446;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2203z00_3447;
{ /* Llib/srfi4.scm 492 */
long BgL_arg2204z00_3448;
BgL_arg2204z00_3448 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3441); 
BgL_arg2203z00_3447 = 
(BgL_arg2204z00_3448-((long)1)); } 
{ /* Llib/srfi4.scm 492 */

BgL_arg2199z00_3446 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2203z00_3447, ((long)10)); } } 
BgL_arg2197z00_3445 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2199z00_3446, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 492 */
obj_t BgL_auxz00_5169;
{ /* Llib/srfi4.scm 492 */
obj_t BgL_aux2846z00_3449;
BgL_aux2846z00_3449 = 
BGl_errorz00zz__errorz00(BgL_arg2196z00_3444, BgL_arg2197z00_3445, 
BINT(BgL_kz00_3442)); 
if(
LLONGP(BgL_aux2846z00_3449))
{ /* Llib/srfi4.scm 492 */
BgL_auxz00_5169 = BgL_aux2846z00_3449
; }  else 
{ 
obj_t BgL_auxz00_5174;
BgL_auxz00_5174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19380)), BGl_string3166z00zz__srfi4z00, BGl_string3124z00zz__srfi4z00, BgL_aux2846z00_3449); 
FAILURE(BgL_auxz00_5174,BFALSE,BFALSE);} } 
BgL_auxz00_5142 = 
BLLONG_TO_LLONG(BgL_auxz00_5169); } } } } 
return 
make_bllong(BgL_auxz00_5142);} } 
}



/* f32vector-ref */
BGL_EXPORTED_DEF float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_89, long BgL_kz00_90)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 500 */
{ /* Llib/srfi4.scm 501 */
bool_t BgL_testz00_5180;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2217z00_3450;
BgL_arg2217z00_3450 = 
BGL_HVECTOR_LENGTH(BgL_vz00_89); 
{ /* Llib/srfi4.scm 501 */
int BgL_auxz00_5184;int BgL_auxz00_5182;
BgL_auxz00_5184 = 
(int)(BgL_arg2217z00_3450); 
BgL_auxz00_5182 = 
(int)(BgL_kz00_90); 
BgL_testz00_5180 = 
BOUND_CHECK(BgL_auxz00_5182, BgL_auxz00_5184); } } 
if(BgL_testz00_5180)
{ /* Llib/srfi4.scm 501 */
return 
BGL_F32VREF(BgL_vz00_89, BgL_kz00_90);}  else 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_arg2208z00_3451;obj_t BgL_arg2209z00_3452;
BgL_arg2208z00_3451 = BGl_symbol3168z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_arg2211z00_3453;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2213z00_3454;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2214z00_3455;
BgL_arg2214z00_3455 = 
BGL_HVECTOR_LENGTH(BgL_vz00_89); 
BgL_arg2213z00_3454 = 
(BgL_arg2214z00_3455-((long)1)); } 
{ /* Llib/srfi4.scm 501 */

BgL_arg2211z00_3453 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2213z00_3454, ((long)10)); } } 
BgL_arg2209z00_3452 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2211z00_3453, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_auxz00_5192;
{ /* Llib/srfi4.scm 501 */
obj_t BgL_aux2852z00_3456;
BgL_aux2852z00_3456 = 
BGl_errorz00zz__errorz00(BgL_arg2208z00_3451, BgL_arg2209z00_3452, 
BINT(BgL_kz00_90)); 
if(
REALP(BgL_aux2852z00_3456))
{ /* Llib/srfi4.scm 501 */
BgL_auxz00_5192 = BgL_aux2852z00_3456
; }  else 
{ 
obj_t BgL_auxz00_5197;
BgL_auxz00_5197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19862)), BGl_string3170z00zz__srfi4z00, BGl_string3129z00zz__srfi4z00, BgL_aux2852z00_3456); 
FAILURE(BgL_auxz00_5197,BFALSE,BFALSE);} } 
return 
REAL_TO_FLOAT(BgL_auxz00_5192);} } } } 
}



/* _f32vector-ref */
obj_t BGl__f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2817, obj_t BgL_vz00_2818, obj_t BgL_kz00_2819)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 500 */
{ /* Llib/srfi4.scm 501 */
float BgL_auxz00_5202;
{ /* Llib/srfi4.scm 501 */
obj_t BgL_vz00_3457;long BgL_kz00_3458;
if(
BGL_F32VECTORP(BgL_vz00_2818))
{ /* Llib/srfi4.scm 501 */
BgL_vz00_3457 = BgL_vz00_2818; }  else 
{ 
obj_t BgL_auxz00_5205;
BgL_auxz00_5205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19862)), BGl_string3171z00zz__srfi4z00, BGl_string3086z00zz__srfi4z00, BgL_vz00_2818); 
FAILURE(BgL_auxz00_5205,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_auxz00_5209;
if(
INTEGERP(BgL_kz00_2819))
{ /* Llib/srfi4.scm 501 */
BgL_auxz00_5209 = BgL_kz00_2819
; }  else 
{ 
obj_t BgL_auxz00_5212;
BgL_auxz00_5212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19862)), BGl_string3171z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2819); 
FAILURE(BgL_auxz00_5212,BFALSE,BFALSE);} 
BgL_kz00_3458 = 
(long)CINT(BgL_auxz00_5209); } 
{ /* Llib/srfi4.scm 501 */
bool_t BgL_testz00_5217;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2217z00_3459;
BgL_arg2217z00_3459 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3457); 
{ /* Llib/srfi4.scm 501 */
int BgL_auxz00_5221;int BgL_auxz00_5219;
BgL_auxz00_5221 = 
(int)(BgL_arg2217z00_3459); 
BgL_auxz00_5219 = 
(int)(BgL_kz00_3458); 
BgL_testz00_5217 = 
BOUND_CHECK(BgL_auxz00_5219, BgL_auxz00_5221); } } 
if(BgL_testz00_5217)
{ /* Llib/srfi4.scm 501 */
BgL_auxz00_5202 = 
BGL_F32VREF(BgL_vz00_3457, BgL_kz00_3458)
; }  else 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_arg2208z00_3460;obj_t BgL_arg2209z00_3461;
BgL_arg2208z00_3460 = BGl_symbol3168z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_arg2211z00_3462;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2213z00_3463;
{ /* Llib/srfi4.scm 501 */
long BgL_arg2214z00_3464;
BgL_arg2214z00_3464 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3457); 
BgL_arg2213z00_3463 = 
(BgL_arg2214z00_3464-((long)1)); } 
{ /* Llib/srfi4.scm 501 */

BgL_arg2211z00_3462 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2213z00_3463, ((long)10)); } } 
BgL_arg2209z00_3461 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2211z00_3462, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 501 */
obj_t BgL_auxz00_5229;
{ /* Llib/srfi4.scm 501 */
obj_t BgL_aux2852z00_3465;
BgL_aux2852z00_3465 = 
BGl_errorz00zz__errorz00(BgL_arg2208z00_3460, BgL_arg2209z00_3461, 
BINT(BgL_kz00_3458)); 
if(
REALP(BgL_aux2852z00_3465))
{ /* Llib/srfi4.scm 501 */
BgL_auxz00_5229 = BgL_aux2852z00_3465
; }  else 
{ 
obj_t BgL_auxz00_5234;
BgL_auxz00_5234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)19862)), BGl_string3170z00zz__srfi4z00, BGl_string3129z00zz__srfi4z00, BgL_aux2852z00_3465); 
FAILURE(BgL_auxz00_5234,BFALSE,BFALSE);} } 
BgL_auxz00_5202 = 
REAL_TO_FLOAT(BgL_auxz00_5229); } } } } 
return 
FLOAT_TO_REAL(BgL_auxz00_5202);} } 
}



/* f64vector-ref */
BGL_EXPORTED_DEF double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_91, long BgL_kz00_92)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 509 */
{ /* Llib/srfi4.scm 510 */
bool_t BgL_testz00_5240;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2236z00_3466;
BgL_arg2236z00_3466 = 
BGL_HVECTOR_LENGTH(BgL_vz00_91); 
{ /* Llib/srfi4.scm 510 */
int BgL_auxz00_5244;int BgL_auxz00_5242;
BgL_auxz00_5244 = 
(int)(BgL_arg2236z00_3466); 
BgL_auxz00_5242 = 
(int)(BgL_kz00_92); 
BgL_testz00_5240 = 
BOUND_CHECK(BgL_auxz00_5242, BgL_auxz00_5244); } } 
if(BgL_testz00_5240)
{ /* Llib/srfi4.scm 510 */
return 
BGL_F64VREF(BgL_vz00_91, BgL_kz00_92);}  else 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_arg2222z00_3467;obj_t BgL_arg2223z00_3468;
BgL_arg2222z00_3467 = BGl_symbol3172z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_arg2226z00_3469;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2233z00_3470;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2234z00_3471;
BgL_arg2234z00_3471 = 
BGL_HVECTOR_LENGTH(BgL_vz00_91); 
BgL_arg2233z00_3470 = 
(BgL_arg2234z00_3471-((long)1)); } 
{ /* Llib/srfi4.scm 510 */

BgL_arg2226z00_3469 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2233z00_3470, ((long)10)); } } 
BgL_arg2223z00_3468 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2226z00_3469, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_auxz00_5252;
{ /* Llib/srfi4.scm 510 */
obj_t BgL_aux2858z00_3472;
BgL_aux2858z00_3472 = 
BGl_errorz00zz__errorz00(BgL_arg2222z00_3467, BgL_arg2223z00_3468, 
BINT(BgL_kz00_92)); 
if(
REALP(BgL_aux2858z00_3472))
{ /* Llib/srfi4.scm 510 */
BgL_auxz00_5252 = BgL_aux2858z00_3472
; }  else 
{ 
obj_t BgL_auxz00_5257;
BgL_auxz00_5257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20136)), BGl_string3174z00zz__srfi4z00, BGl_string3133z00zz__srfi4z00, BgL_aux2858z00_3472); 
FAILURE(BgL_auxz00_5257,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_5252);} } } } 
}



/* _f64vector-ref */
obj_t BGl__f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_envz00_2824, obj_t BgL_vz00_2825, obj_t BgL_kz00_2826)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 509 */
{ /* Llib/srfi4.scm 510 */
double BgL_auxz00_5262;
{ /* Llib/srfi4.scm 510 */
obj_t BgL_vz00_3473;long BgL_kz00_3474;
if(
BGL_F64VECTORP(BgL_vz00_2825))
{ /* Llib/srfi4.scm 510 */
BgL_vz00_3473 = BgL_vz00_2825; }  else 
{ 
obj_t BgL_auxz00_5265;
BgL_auxz00_5265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20136)), BGl_string3175z00zz__srfi4z00, BGl_string3088z00zz__srfi4z00, BgL_vz00_2825); 
FAILURE(BgL_auxz00_5265,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_auxz00_5269;
if(
INTEGERP(BgL_kz00_2826))
{ /* Llib/srfi4.scm 510 */
BgL_auxz00_5269 = BgL_kz00_2826
; }  else 
{ 
obj_t BgL_auxz00_5272;
BgL_auxz00_5272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20136)), BGl_string3175z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2826); 
FAILURE(BgL_auxz00_5272,BFALSE,BFALSE);} 
BgL_kz00_3474 = 
(long)CINT(BgL_auxz00_5269); } 
{ /* Llib/srfi4.scm 510 */
bool_t BgL_testz00_5277;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2236z00_3475;
BgL_arg2236z00_3475 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3473); 
{ /* Llib/srfi4.scm 510 */
int BgL_auxz00_5281;int BgL_auxz00_5279;
BgL_auxz00_5281 = 
(int)(BgL_arg2236z00_3475); 
BgL_auxz00_5279 = 
(int)(BgL_kz00_3474); 
BgL_testz00_5277 = 
BOUND_CHECK(BgL_auxz00_5279, BgL_auxz00_5281); } } 
if(BgL_testz00_5277)
{ /* Llib/srfi4.scm 510 */
BgL_auxz00_5262 = 
BGL_F64VREF(BgL_vz00_3473, BgL_kz00_3474)
; }  else 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_arg2222z00_3476;obj_t BgL_arg2223z00_3477;
BgL_arg2222z00_3476 = BGl_symbol3172z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_arg2226z00_3478;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2233z00_3479;
{ /* Llib/srfi4.scm 510 */
long BgL_arg2234z00_3480;
BgL_arg2234z00_3480 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3473); 
BgL_arg2233z00_3479 = 
(BgL_arg2234z00_3480-((long)1)); } 
{ /* Llib/srfi4.scm 510 */

BgL_arg2226z00_3478 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2233z00_3479, ((long)10)); } } 
BgL_arg2223z00_3477 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2226z00_3478, BGl_string3137z00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 510 */
obj_t BgL_auxz00_5289;
{ /* Llib/srfi4.scm 510 */
obj_t BgL_aux2858z00_3481;
BgL_aux2858z00_3481 = 
BGl_errorz00zz__errorz00(BgL_arg2222z00_3476, BgL_arg2223z00_3477, 
BINT(BgL_kz00_3474)); 
if(
REALP(BgL_aux2858z00_3481))
{ /* Llib/srfi4.scm 510 */
BgL_auxz00_5289 = BgL_aux2858z00_3481
; }  else 
{ 
obj_t BgL_auxz00_5294;
BgL_auxz00_5294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20136)), BGl_string3174z00zz__srfi4z00, BGl_string3133z00zz__srfi4z00, BgL_aux2858z00_3481); 
FAILURE(BgL_auxz00_5294,BFALSE,BFALSE);} } 
BgL_auxz00_5262 = 
REAL_TO_DOUBLE(BgL_auxz00_5289); } } } } 
return 
DOUBLE_TO_REAL(BgL_auxz00_5262);} } 
}



/* s8vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_93, long BgL_kz00_94, char BgL_valz00_95)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 521 */
{ /* Llib/srfi4.scm 522 */
bool_t BgL_testz00_5300;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2247z00_3482;
BgL_arg2247z00_3482 = 
BGL_HVECTOR_LENGTH(BgL_vz00_93); 
{ /* Llib/srfi4.scm 522 */
int BgL_auxz00_5304;int BgL_auxz00_5302;
BgL_auxz00_5304 = 
(int)(BgL_arg2247z00_3482); 
BgL_auxz00_5302 = 
(int)(BgL_kz00_94); 
BgL_testz00_5300 = 
BOUND_CHECK(BgL_auxz00_5302, BgL_auxz00_5304); } } 
if(BgL_testz00_5300)
{ /* Llib/srfi4.scm 522 */
BGL_S8VSET(BgL_vz00_93, BgL_kz00_94, BgL_valz00_95); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_arg2238z00_3483;obj_t BgL_arg2239z00_3484;
BgL_arg2238z00_3483 = BGl_symbol3176z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_arg2242z00_3485;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2244z00_3486;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2245z00_3487;
BgL_arg2245z00_3487 = 
BGL_HVECTOR_LENGTH(BgL_vz00_93); 
BgL_arg2244z00_3486 = 
(BgL_arg2245z00_3487-((long)1)); } 
{ /* Llib/srfi4.scm 522 */

BgL_arg2242z00_3485 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2244z00_3486, ((long)10)); } } 
BgL_arg2239z00_3484 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2242z00_3485, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2238z00_3483, BgL_arg2239z00_3484, 
BINT(BgL_kz00_94));} } } 
}



/* _s8vector-set! */
obj_t BGl__s8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2764, obj_t BgL_vz00_2765, obj_t BgL_kz00_2766, obj_t BgL_valz00_2767)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 521 */
{ /* Llib/srfi4.scm 522 */
obj_t BgL_vz00_3488;long BgL_kz00_3489;char BgL_valz00_3490;
if(
BGL_S8VECTORP(BgL_vz00_2765))
{ /* Llib/srfi4.scm 522 */
BgL_vz00_3488 = BgL_vz00_2765; }  else 
{ 
obj_t BgL_auxz00_5316;
BgL_auxz00_5316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20636)), BGl_string3178z00zz__srfi4z00, BGl_string3070z00zz__srfi4z00, BgL_vz00_2765); 
FAILURE(BgL_auxz00_5316,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_auxz00_5320;
if(
INTEGERP(BgL_kz00_2766))
{ /* Llib/srfi4.scm 522 */
BgL_auxz00_5320 = BgL_kz00_2766
; }  else 
{ 
obj_t BgL_auxz00_5323;
BgL_auxz00_5323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20636)), BGl_string3178z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2766); 
FAILURE(BgL_auxz00_5323,BFALSE,BFALSE);} 
BgL_kz00_3489 = 
(long)CINT(BgL_auxz00_5320); } 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_auxz00_5328;
if(
INTEGERP(BgL_valz00_2767))
{ /* Llib/srfi4.scm 522 */
BgL_auxz00_5328 = BgL_valz00_2767
; }  else 
{ 
obj_t BgL_auxz00_5331;
BgL_auxz00_5331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20636)), BGl_string3178z00zz__srfi4z00, BGl_string3096z00zz__srfi4z00, BgL_valz00_2767); 
FAILURE(BgL_auxz00_5331,BFALSE,BFALSE);} 
BgL_valz00_3490 = 
(signed char)CINT(BgL_auxz00_5328); } 
{ /* Llib/srfi4.scm 522 */
bool_t BgL_testz00_5336;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2247z00_3491;
BgL_arg2247z00_3491 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3488); 
{ /* Llib/srfi4.scm 522 */
int BgL_auxz00_5340;int BgL_auxz00_5338;
BgL_auxz00_5340 = 
(int)(BgL_arg2247z00_3491); 
BgL_auxz00_5338 = 
(int)(BgL_kz00_3489); 
BgL_testz00_5336 = 
BOUND_CHECK(BgL_auxz00_5338, BgL_auxz00_5340); } } 
if(BgL_testz00_5336)
{ /* Llib/srfi4.scm 522 */
BGL_S8VSET(BgL_vz00_3488, BgL_kz00_3489, BgL_valz00_3490); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_arg2238z00_3492;obj_t BgL_arg2239z00_3493;
BgL_arg2238z00_3492 = BGl_symbol3176z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 522 */
obj_t BgL_arg2242z00_3494;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2244z00_3495;
{ /* Llib/srfi4.scm 522 */
long BgL_arg2245z00_3496;
BgL_arg2245z00_3496 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3488); 
BgL_arg2244z00_3495 = 
(BgL_arg2245z00_3496-((long)1)); } 
{ /* Llib/srfi4.scm 522 */

BgL_arg2242z00_3494 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2244z00_3495, ((long)10)); } } 
BgL_arg2239z00_3493 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2242z00_3494, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2238z00_3492, BgL_arg2239z00_3493, 
BINT(BgL_kz00_3489));} } } } 
}



/* u8vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_96, long BgL_kz00_97, unsigned char BgL_valz00_98)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 529 */
{ /* Llib/srfi4.scm 530 */
bool_t BgL_testz00_5350;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2259z00_3497;
BgL_arg2259z00_3497 = 
BGL_HVECTOR_LENGTH(BgL_vz00_96); 
{ /* Llib/srfi4.scm 530 */
int BgL_auxz00_5354;int BgL_auxz00_5352;
BgL_auxz00_5354 = 
(int)(BgL_arg2259z00_3497); 
BgL_auxz00_5352 = 
(int)(BgL_kz00_97); 
BgL_testz00_5350 = 
BOUND_CHECK(BgL_auxz00_5352, BgL_auxz00_5354); } } 
if(BgL_testz00_5350)
{ /* Llib/srfi4.scm 530 */
BGL_U8VSET(BgL_vz00_96, BgL_kz00_97, BgL_valz00_98); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_arg2249z00_3498;obj_t BgL_arg2250z00_3499;
BgL_arg2249z00_3498 = BGl_symbol3179z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_arg2252z00_3500;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2255z00_3501;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2256z00_3502;
BgL_arg2256z00_3502 = 
BGL_HVECTOR_LENGTH(BgL_vz00_96); 
BgL_arg2255z00_3501 = 
(BgL_arg2256z00_3502-((long)1)); } 
{ /* Llib/srfi4.scm 530 */

BgL_arg2252z00_3500 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2255z00_3501, ((long)10)); } } 
BgL_arg2250z00_3499 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2252z00_3500, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2249z00_3498, BgL_arg2250z00_3499, 
BINT(BgL_kz00_97));} } } 
}



/* _u8vector-set! */
obj_t BGl__u8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2771, obj_t BgL_vz00_2772, obj_t BgL_kz00_2773, obj_t BgL_valz00_2774)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 529 */
{ /* Llib/srfi4.scm 530 */
obj_t BgL_vz00_3503;long BgL_kz00_3504;unsigned char BgL_valz00_3505;
if(
BGL_U8VECTORP(BgL_vz00_2772))
{ /* Llib/srfi4.scm 530 */
BgL_vz00_3503 = BgL_vz00_2772; }  else 
{ 
obj_t BgL_auxz00_5366;
BgL_auxz00_5366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20917)), BGl_string3181z00zz__srfi4z00, BGl_string3072z00zz__srfi4z00, BgL_vz00_2772); 
FAILURE(BgL_auxz00_5366,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_auxz00_5370;
if(
INTEGERP(BgL_kz00_2773))
{ /* Llib/srfi4.scm 530 */
BgL_auxz00_5370 = BgL_kz00_2773
; }  else 
{ 
obj_t BgL_auxz00_5373;
BgL_auxz00_5373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20917)), BGl_string3181z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2773); 
FAILURE(BgL_auxz00_5373,BFALSE,BFALSE);} 
BgL_kz00_3504 = 
(long)CINT(BgL_auxz00_5370); } 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_auxz00_5378;
if(
INTEGERP(BgL_valz00_2774))
{ /* Llib/srfi4.scm 530 */
BgL_auxz00_5378 = BgL_valz00_2774
; }  else 
{ 
obj_t BgL_auxz00_5381;
BgL_auxz00_5381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)20917)), BGl_string3181z00zz__srfi4z00, BGl_string3100z00zz__srfi4z00, BgL_valz00_2774); 
FAILURE(BgL_auxz00_5381,BFALSE,BFALSE);} 
BgL_valz00_3505 = 
(unsigned char)CINT(BgL_auxz00_5378); } 
{ /* Llib/srfi4.scm 530 */
bool_t BgL_testz00_5386;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2259z00_3506;
BgL_arg2259z00_3506 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3503); 
{ /* Llib/srfi4.scm 530 */
int BgL_auxz00_5390;int BgL_auxz00_5388;
BgL_auxz00_5390 = 
(int)(BgL_arg2259z00_3506); 
BgL_auxz00_5388 = 
(int)(BgL_kz00_3504); 
BgL_testz00_5386 = 
BOUND_CHECK(BgL_auxz00_5388, BgL_auxz00_5390); } } 
if(BgL_testz00_5386)
{ /* Llib/srfi4.scm 530 */
BGL_U8VSET(BgL_vz00_3503, BgL_kz00_3504, BgL_valz00_3505); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_arg2249z00_3507;obj_t BgL_arg2250z00_3508;
BgL_arg2249z00_3507 = BGl_symbol3179z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 530 */
obj_t BgL_arg2252z00_3509;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2255z00_3510;
{ /* Llib/srfi4.scm 530 */
long BgL_arg2256z00_3511;
BgL_arg2256z00_3511 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3503); 
BgL_arg2255z00_3510 = 
(BgL_arg2256z00_3511-((long)1)); } 
{ /* Llib/srfi4.scm 530 */

BgL_arg2252z00_3509 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2255z00_3510, ((long)10)); } } 
BgL_arg2250z00_3508 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2252z00_3509, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2249z00_3507, BgL_arg2250z00_3508, 
BINT(BgL_kz00_3504));} } } } 
}



/* s16vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_99, long BgL_kz00_100, short BgL_valz00_101)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 537 */
{ /* Llib/srfi4.scm 538 */
bool_t BgL_testz00_5400;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2270z00_3512;
BgL_arg2270z00_3512 = 
BGL_HVECTOR_LENGTH(BgL_vz00_99); 
{ /* Llib/srfi4.scm 538 */
int BgL_auxz00_5404;int BgL_auxz00_5402;
BgL_auxz00_5404 = 
(int)(BgL_arg2270z00_3512); 
BgL_auxz00_5402 = 
(int)(BgL_kz00_100); 
BgL_testz00_5400 = 
BOUND_CHECK(BgL_auxz00_5402, BgL_auxz00_5404); } } 
if(BgL_testz00_5400)
{ /* Llib/srfi4.scm 538 */
BGL_S16VSET(BgL_vz00_99, BgL_kz00_100, BgL_valz00_101); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_arg2262z00_3513;obj_t BgL_arg2263z00_3514;
BgL_arg2262z00_3513 = BGl_symbol3182z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_arg2265z00_3515;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2267z00_3516;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2268z00_3517;
BgL_arg2268z00_3517 = 
BGL_HVECTOR_LENGTH(BgL_vz00_99); 
BgL_arg2267z00_3516 = 
(BgL_arg2268z00_3517-((long)1)); } 
{ /* Llib/srfi4.scm 538 */

BgL_arg2265z00_3515 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2267z00_3516, ((long)10)); } } 
BgL_arg2263z00_3514 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2265z00_3515, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2262z00_3513, BgL_arg2263z00_3514, 
BINT(BgL_kz00_100));} } } 
}



/* _s16vector-set! */
obj_t BGl__s16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2778, obj_t BgL_vz00_2779, obj_t BgL_kz00_2780, obj_t BgL_valz00_2781)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 537 */
{ /* Llib/srfi4.scm 538 */
obj_t BgL_vz00_3518;long BgL_kz00_3519;short BgL_valz00_3520;
if(
BGL_S16VECTORP(BgL_vz00_2779))
{ /* Llib/srfi4.scm 538 */
BgL_vz00_3518 = BgL_vz00_2779; }  else 
{ 
obj_t BgL_auxz00_5416;
BgL_auxz00_5416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21199)), BGl_string3184z00zz__srfi4z00, BGl_string3074z00zz__srfi4z00, BgL_vz00_2779); 
FAILURE(BgL_auxz00_5416,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_auxz00_5420;
if(
INTEGERP(BgL_kz00_2780))
{ /* Llib/srfi4.scm 538 */
BgL_auxz00_5420 = BgL_kz00_2780
; }  else 
{ 
obj_t BgL_auxz00_5423;
BgL_auxz00_5423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21199)), BGl_string3184z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2780); 
FAILURE(BgL_auxz00_5423,BFALSE,BFALSE);} 
BgL_kz00_3519 = 
(long)CINT(BgL_auxz00_5420); } 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_auxz00_5428;
if(
INTEGERP(BgL_valz00_2781))
{ /* Llib/srfi4.scm 538 */
BgL_auxz00_5428 = BgL_valz00_2781
; }  else 
{ 
obj_t BgL_auxz00_5431;
BgL_auxz00_5431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21199)), BGl_string3184z00zz__srfi4z00, BGl_string3104z00zz__srfi4z00, BgL_valz00_2781); 
FAILURE(BgL_auxz00_5431,BFALSE,BFALSE);} 
BgL_valz00_3520 = 
(short)CINT(BgL_auxz00_5428); } 
{ /* Llib/srfi4.scm 538 */
bool_t BgL_testz00_5436;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2270z00_3521;
BgL_arg2270z00_3521 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3518); 
{ /* Llib/srfi4.scm 538 */
int BgL_auxz00_5440;int BgL_auxz00_5438;
BgL_auxz00_5440 = 
(int)(BgL_arg2270z00_3521); 
BgL_auxz00_5438 = 
(int)(BgL_kz00_3519); 
BgL_testz00_5436 = 
BOUND_CHECK(BgL_auxz00_5438, BgL_auxz00_5440); } } 
if(BgL_testz00_5436)
{ /* Llib/srfi4.scm 538 */
BGL_S16VSET(BgL_vz00_3518, BgL_kz00_3519, BgL_valz00_3520); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_arg2262z00_3522;obj_t BgL_arg2263z00_3523;
BgL_arg2262z00_3522 = BGl_symbol3182z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 538 */
obj_t BgL_arg2265z00_3524;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2267z00_3525;
{ /* Llib/srfi4.scm 538 */
long BgL_arg2268z00_3526;
BgL_arg2268z00_3526 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3518); 
BgL_arg2267z00_3525 = 
(BgL_arg2268z00_3526-((long)1)); } 
{ /* Llib/srfi4.scm 538 */

BgL_arg2265z00_3524 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2267z00_3525, ((long)10)); } } 
BgL_arg2263z00_3523 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2265z00_3524, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2262z00_3522, BgL_arg2263z00_3523, 
BINT(BgL_kz00_3519));} } } } 
}



/* u16vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_102, long BgL_kz00_103, unsigned short BgL_valz00_104)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 545 */
{ /* Llib/srfi4.scm 546 */
bool_t BgL_testz00_5450;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2282z00_3527;
BgL_arg2282z00_3527 = 
BGL_HVECTOR_LENGTH(BgL_vz00_102); 
{ /* Llib/srfi4.scm 546 */
int BgL_auxz00_5454;int BgL_auxz00_5452;
BgL_auxz00_5454 = 
(int)(BgL_arg2282z00_3527); 
BgL_auxz00_5452 = 
(int)(BgL_kz00_103); 
BgL_testz00_5450 = 
BOUND_CHECK(BgL_auxz00_5452, BgL_auxz00_5454); } } 
if(BgL_testz00_5450)
{ /* Llib/srfi4.scm 546 */
BGL_U16VSET(BgL_vz00_102, BgL_kz00_103, BgL_valz00_104); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_arg2272z00_3528;obj_t BgL_arg2274z00_3529;
BgL_arg2272z00_3528 = BGl_symbol3185z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_arg2277z00_3530;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2279z00_3531;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2280z00_3532;
BgL_arg2280z00_3532 = 
BGL_HVECTOR_LENGTH(BgL_vz00_102); 
BgL_arg2279z00_3531 = 
(BgL_arg2280z00_3532-((long)1)); } 
{ /* Llib/srfi4.scm 546 */

BgL_arg2277z00_3530 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2279z00_3531, ((long)10)); } } 
BgL_arg2274z00_3529 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2277z00_3530, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2272z00_3528, BgL_arg2274z00_3529, 
BINT(BgL_kz00_103));} } } 
}



/* _u16vector-set! */
obj_t BGl__u16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2785, obj_t BgL_vz00_2786, obj_t BgL_kz00_2787, obj_t BgL_valz00_2788)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 545 */
{ /* Llib/srfi4.scm 546 */
obj_t BgL_vz00_3533;long BgL_kz00_3534;unsigned short BgL_valz00_3535;
if(
BGL_U16VECTORP(BgL_vz00_2786))
{ /* Llib/srfi4.scm 546 */
BgL_vz00_3533 = BgL_vz00_2786; }  else 
{ 
obj_t BgL_auxz00_5466;
BgL_auxz00_5466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21483)), BGl_string3187z00zz__srfi4z00, BGl_string3076z00zz__srfi4z00, BgL_vz00_2786); 
FAILURE(BgL_auxz00_5466,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_auxz00_5470;
if(
INTEGERP(BgL_kz00_2787))
{ /* Llib/srfi4.scm 546 */
BgL_auxz00_5470 = BgL_kz00_2787
; }  else 
{ 
obj_t BgL_auxz00_5473;
BgL_auxz00_5473 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21483)), BGl_string3187z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2787); 
FAILURE(BgL_auxz00_5473,BFALSE,BFALSE);} 
BgL_kz00_3534 = 
(long)CINT(BgL_auxz00_5470); } 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_auxz00_5478;
if(
INTEGERP(BgL_valz00_2788))
{ /* Llib/srfi4.scm 546 */
BgL_auxz00_5478 = BgL_valz00_2788
; }  else 
{ 
obj_t BgL_auxz00_5481;
BgL_auxz00_5481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21483)), BGl_string3187z00zz__srfi4z00, BGl_string3108z00zz__srfi4z00, BgL_valz00_2788); 
FAILURE(BgL_auxz00_5481,BFALSE,BFALSE);} 
BgL_valz00_3535 = 
(unsigned short)CINT(BgL_auxz00_5478); } 
{ /* Llib/srfi4.scm 546 */
bool_t BgL_testz00_5486;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2282z00_3536;
BgL_arg2282z00_3536 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3533); 
{ /* Llib/srfi4.scm 546 */
int BgL_auxz00_5490;int BgL_auxz00_5488;
BgL_auxz00_5490 = 
(int)(BgL_arg2282z00_3536); 
BgL_auxz00_5488 = 
(int)(BgL_kz00_3534); 
BgL_testz00_5486 = 
BOUND_CHECK(BgL_auxz00_5488, BgL_auxz00_5490); } } 
if(BgL_testz00_5486)
{ /* Llib/srfi4.scm 546 */
BGL_U16VSET(BgL_vz00_3533, BgL_kz00_3534, BgL_valz00_3535); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_arg2272z00_3537;obj_t BgL_arg2274z00_3538;
BgL_arg2272z00_3537 = BGl_symbol3185z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 546 */
obj_t BgL_arg2277z00_3539;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2279z00_3540;
{ /* Llib/srfi4.scm 546 */
long BgL_arg2280z00_3541;
BgL_arg2280z00_3541 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3533); 
BgL_arg2279z00_3540 = 
(BgL_arg2280z00_3541-((long)1)); } 
{ /* Llib/srfi4.scm 546 */

BgL_arg2277z00_3539 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2279z00_3540, ((long)10)); } } 
BgL_arg2274z00_3538 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2277z00_3539, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2272z00_3537, BgL_arg2274z00_3538, 
BINT(BgL_kz00_3534));} } } } 
}



/* s32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_105, long BgL_kz00_106, long BgL_valz00_107)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 553 */
{ /* Llib/srfi4.scm 554 */
bool_t BgL_testz00_5500;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2294z00_3542;
BgL_arg2294z00_3542 = 
BGL_HVECTOR_LENGTH(BgL_vz00_105); 
{ /* Llib/srfi4.scm 554 */
int BgL_auxz00_5504;int BgL_auxz00_5502;
BgL_auxz00_5504 = 
(int)(BgL_arg2294z00_3542); 
BgL_auxz00_5502 = 
(int)(BgL_kz00_106); 
BgL_testz00_5500 = 
BOUND_CHECK(BgL_auxz00_5502, BgL_auxz00_5504); } } 
if(BgL_testz00_5500)
{ /* Llib/srfi4.scm 554 */
BGL_S32VSET(BgL_vz00_105, BgL_kz00_106, BgL_valz00_107); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_arg2284z00_3543;obj_t BgL_arg2285z00_3544;
BgL_arg2284z00_3543 = BGl_symbol3188z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_arg2289z00_3545;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2291z00_3546;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2292z00_3547;
BgL_arg2292z00_3547 = 
BGL_HVECTOR_LENGTH(BgL_vz00_105); 
BgL_arg2291z00_3546 = 
(BgL_arg2292z00_3547-((long)1)); } 
{ /* Llib/srfi4.scm 554 */

BgL_arg2289z00_3545 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2291z00_3546, ((long)10)); } } 
BgL_arg2285z00_3544 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2289z00_3545, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2284z00_3543, BgL_arg2285z00_3544, 
BINT(BgL_kz00_106));} } } 
}



/* _s32vector-set! */
obj_t BGl__s32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2792, obj_t BgL_vz00_2793, obj_t BgL_kz00_2794, obj_t BgL_valz00_2795)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 553 */
{ /* Llib/srfi4.scm 554 */
obj_t BgL_vz00_3548;long BgL_kz00_3549;long BgL_valz00_3550;
if(
BGL_S32VECTORP(BgL_vz00_2793))
{ /* Llib/srfi4.scm 554 */
BgL_vz00_3548 = BgL_vz00_2793; }  else 
{ 
obj_t BgL_auxz00_5516;
BgL_auxz00_5516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21767)), BGl_string3190z00zz__srfi4z00, BGl_string3078z00zz__srfi4z00, BgL_vz00_2793); 
FAILURE(BgL_auxz00_5516,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_auxz00_5520;
if(
INTEGERP(BgL_kz00_2794))
{ /* Llib/srfi4.scm 554 */
BgL_auxz00_5520 = BgL_kz00_2794
; }  else 
{ 
obj_t BgL_auxz00_5523;
BgL_auxz00_5523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21767)), BGl_string3190z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2794); 
FAILURE(BgL_auxz00_5523,BFALSE,BFALSE);} 
BgL_kz00_3549 = 
(long)CINT(BgL_auxz00_5520); } 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_auxz00_5528;
if(
INTEGERP(BgL_valz00_2795))
{ /* Llib/srfi4.scm 554 */
BgL_auxz00_5528 = BgL_valz00_2795
; }  else 
{ 
obj_t BgL_auxz00_5531;
BgL_auxz00_5531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)21767)), BGl_string3190z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_valz00_2795); 
FAILURE(BgL_auxz00_5531,BFALSE,BFALSE);} 
BgL_valz00_3550 = 
(long)CINT(BgL_auxz00_5528); } 
{ /* Llib/srfi4.scm 554 */
bool_t BgL_testz00_5536;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2294z00_3551;
BgL_arg2294z00_3551 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3548); 
{ /* Llib/srfi4.scm 554 */
int BgL_auxz00_5540;int BgL_auxz00_5538;
BgL_auxz00_5540 = 
(int)(BgL_arg2294z00_3551); 
BgL_auxz00_5538 = 
(int)(BgL_kz00_3549); 
BgL_testz00_5536 = 
BOUND_CHECK(BgL_auxz00_5538, BgL_auxz00_5540); } } 
if(BgL_testz00_5536)
{ /* Llib/srfi4.scm 554 */
BGL_S32VSET(BgL_vz00_3548, BgL_kz00_3549, BgL_valz00_3550); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_arg2284z00_3552;obj_t BgL_arg2285z00_3553;
BgL_arg2284z00_3552 = BGl_symbol3188z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 554 */
obj_t BgL_arg2289z00_3554;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2291z00_3555;
{ /* Llib/srfi4.scm 554 */
long BgL_arg2292z00_3556;
BgL_arg2292z00_3556 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3548); 
BgL_arg2291z00_3555 = 
(BgL_arg2292z00_3556-((long)1)); } 
{ /* Llib/srfi4.scm 554 */

BgL_arg2289z00_3554 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2291z00_3555, ((long)10)); } } 
BgL_arg2285z00_3553 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2289z00_3554, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2284z00_3552, BgL_arg2285z00_3553, 
BINT(BgL_kz00_3549));} } } } 
}



/* u32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_108, long BgL_kz00_109, unsigned long BgL_valz00_110)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 561 */
{ /* Llib/srfi4.scm 562 */
bool_t BgL_testz00_5550;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2306z00_3557;
BgL_arg2306z00_3557 = 
BGL_HVECTOR_LENGTH(BgL_vz00_108); 
{ /* Llib/srfi4.scm 562 */
int BgL_auxz00_5554;int BgL_auxz00_5552;
BgL_auxz00_5554 = 
(int)(BgL_arg2306z00_3557); 
BgL_auxz00_5552 = 
(int)(BgL_kz00_109); 
BgL_testz00_5550 = 
BOUND_CHECK(BgL_auxz00_5552, BgL_auxz00_5554); } } 
if(BgL_testz00_5550)
{ /* Llib/srfi4.scm 562 */
BGL_U32VSET(BgL_vz00_108, BgL_kz00_109, BgL_valz00_110); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_arg2296z00_3558;obj_t BgL_arg2297z00_3559;
BgL_arg2296z00_3558 = BGl_symbol3191z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_arg2301z00_3560;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2303z00_3561;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2304z00_3562;
BgL_arg2304z00_3562 = 
BGL_HVECTOR_LENGTH(BgL_vz00_108); 
BgL_arg2303z00_3561 = 
(BgL_arg2304z00_3562-((long)1)); } 
{ /* Llib/srfi4.scm 562 */

BgL_arg2301z00_3560 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2303z00_3561, ((long)10)); } } 
BgL_arg2297z00_3559 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2301z00_3560, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2296z00_3558, BgL_arg2297z00_3559, 
BINT(BgL_kz00_109));} } } 
}



/* _u32vector-set! */
obj_t BGl__u32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2799, obj_t BgL_vz00_2800, obj_t BgL_kz00_2801, obj_t BgL_valz00_2802)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 561 */
{ /* Llib/srfi4.scm 562 */
obj_t BgL_vz00_3563;long BgL_kz00_3564;unsigned long BgL_valz00_3565;
if(
BGL_U32VECTORP(BgL_vz00_2800))
{ /* Llib/srfi4.scm 562 */
BgL_vz00_3563 = BgL_vz00_2800; }  else 
{ 
obj_t BgL_auxz00_5566;
BgL_auxz00_5566 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22051)), BGl_string3193z00zz__srfi4z00, BGl_string3080z00zz__srfi4z00, BgL_vz00_2800); 
FAILURE(BgL_auxz00_5566,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_auxz00_5570;
if(
INTEGERP(BgL_kz00_2801))
{ /* Llib/srfi4.scm 562 */
BgL_auxz00_5570 = BgL_kz00_2801
; }  else 
{ 
obj_t BgL_auxz00_5573;
BgL_auxz00_5573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22051)), BGl_string3193z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2801); 
FAILURE(BgL_auxz00_5573,BFALSE,BFALSE);} 
BgL_kz00_3564 = 
(long)CINT(BgL_auxz00_5570); } 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_auxz00_5578;
if(
INTEGERP(BgL_valz00_2802))
{ /* Llib/srfi4.scm 562 */
BgL_auxz00_5578 = BgL_valz00_2802
; }  else 
{ 
obj_t BgL_auxz00_5581;
BgL_auxz00_5581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22051)), BGl_string3193z00zz__srfi4z00, BGl_string3115z00zz__srfi4z00, BgL_valz00_2802); 
FAILURE(BgL_auxz00_5581,BFALSE,BFALSE);} 
BgL_valz00_3565 = 
(unsigned long)CINT(BgL_auxz00_5578); } 
{ /* Llib/srfi4.scm 562 */
bool_t BgL_testz00_5586;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2306z00_3566;
BgL_arg2306z00_3566 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3563); 
{ /* Llib/srfi4.scm 562 */
int BgL_auxz00_5590;int BgL_auxz00_5588;
BgL_auxz00_5590 = 
(int)(BgL_arg2306z00_3566); 
BgL_auxz00_5588 = 
(int)(BgL_kz00_3564); 
BgL_testz00_5586 = 
BOUND_CHECK(BgL_auxz00_5588, BgL_auxz00_5590); } } 
if(BgL_testz00_5586)
{ /* Llib/srfi4.scm 562 */
BGL_U32VSET(BgL_vz00_3563, BgL_kz00_3564, BgL_valz00_3565); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_arg2296z00_3567;obj_t BgL_arg2297z00_3568;
BgL_arg2296z00_3567 = BGl_symbol3191z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 562 */
obj_t BgL_arg2301z00_3569;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2303z00_3570;
{ /* Llib/srfi4.scm 562 */
long BgL_arg2304z00_3571;
BgL_arg2304z00_3571 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3563); 
BgL_arg2303z00_3570 = 
(BgL_arg2304z00_3571-((long)1)); } 
{ /* Llib/srfi4.scm 562 */

BgL_arg2301z00_3569 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2303z00_3570, ((long)10)); } } 
BgL_arg2297z00_3568 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2301z00_3569, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2296z00_3567, BgL_arg2297z00_3568, 
BINT(BgL_kz00_3564));} } } } 
}



/* s64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_111, long BgL_kz00_112, BGL_LONGLONG_T BgL_valz00_113)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 569 */
{ /* Llib/srfi4.scm 570 */
bool_t BgL_testz00_5600;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2316z00_3572;
BgL_arg2316z00_3572 = 
BGL_HVECTOR_LENGTH(BgL_vz00_111); 
{ /* Llib/srfi4.scm 570 */
int BgL_auxz00_5604;int BgL_auxz00_5602;
BgL_auxz00_5604 = 
(int)(BgL_arg2316z00_3572); 
BgL_auxz00_5602 = 
(int)(BgL_kz00_112); 
BgL_testz00_5600 = 
BOUND_CHECK(BgL_auxz00_5602, BgL_auxz00_5604); } } 
if(BgL_testz00_5600)
{ /* Llib/srfi4.scm 570 */
BGL_S64VSET(BgL_vz00_111, BgL_kz00_112, BgL_valz00_113); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_arg2308z00_3573;obj_t BgL_arg2309z00_3574;
BgL_arg2308z00_3573 = BGl_symbol3194z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_arg2311z00_3575;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2313z00_3576;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2314z00_3577;
BgL_arg2314z00_3577 = 
BGL_HVECTOR_LENGTH(BgL_vz00_111); 
BgL_arg2313z00_3576 = 
(BgL_arg2314z00_3577-((long)1)); } 
{ /* Llib/srfi4.scm 570 */

BgL_arg2311z00_3575 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2313z00_3576, ((long)10)); } } 
BgL_arg2309z00_3574 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2311z00_3575, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2308z00_3573, BgL_arg2309z00_3574, 
BINT(BgL_kz00_112));} } } 
}



/* _s64vector-set! */
obj_t BGl__s64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2806, obj_t BgL_vz00_2807, obj_t BgL_kz00_2808, obj_t BgL_valz00_2809)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 569 */
{ /* Llib/srfi4.scm 570 */
obj_t BgL_vz00_3578;long BgL_kz00_3579;BGL_LONGLONG_T BgL_valz00_3580;
if(
BGL_S64VECTORP(BgL_vz00_2807))
{ /* Llib/srfi4.scm 570 */
BgL_vz00_3578 = BgL_vz00_2807; }  else 
{ 
obj_t BgL_auxz00_5616;
BgL_auxz00_5616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22335)), BGl_string3196z00zz__srfi4z00, BGl_string3082z00zz__srfi4z00, BgL_vz00_2807); 
FAILURE(BgL_auxz00_5616,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_auxz00_5620;
if(
INTEGERP(BgL_kz00_2808))
{ /* Llib/srfi4.scm 570 */
BgL_auxz00_5620 = BgL_kz00_2808
; }  else 
{ 
obj_t BgL_auxz00_5623;
BgL_auxz00_5623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22335)), BGl_string3196z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2808); 
FAILURE(BgL_auxz00_5623,BFALSE,BFALSE);} 
BgL_kz00_3579 = 
(long)CINT(BgL_auxz00_5620); } 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_auxz00_5628;
if(
LLONGP(BgL_valz00_2809))
{ /* Llib/srfi4.scm 570 */
BgL_auxz00_5628 = BgL_valz00_2809
; }  else 
{ 
obj_t BgL_auxz00_5631;
BgL_auxz00_5631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22335)), BGl_string3196z00zz__srfi4z00, BGl_string3120z00zz__srfi4z00, BgL_valz00_2809); 
FAILURE(BgL_auxz00_5631,BFALSE,BFALSE);} 
BgL_valz00_3580 = 
BLLONG_TO_LLONG(BgL_auxz00_5628); } 
{ /* Llib/srfi4.scm 570 */
bool_t BgL_testz00_5636;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2316z00_3581;
BgL_arg2316z00_3581 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3578); 
{ /* Llib/srfi4.scm 570 */
int BgL_auxz00_5640;int BgL_auxz00_5638;
BgL_auxz00_5640 = 
(int)(BgL_arg2316z00_3581); 
BgL_auxz00_5638 = 
(int)(BgL_kz00_3579); 
BgL_testz00_5636 = 
BOUND_CHECK(BgL_auxz00_5638, BgL_auxz00_5640); } } 
if(BgL_testz00_5636)
{ /* Llib/srfi4.scm 570 */
BGL_S64VSET(BgL_vz00_3578, BgL_kz00_3579, BgL_valz00_3580); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_arg2308z00_3582;obj_t BgL_arg2309z00_3583;
BgL_arg2308z00_3582 = BGl_symbol3194z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 570 */
obj_t BgL_arg2311z00_3584;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2313z00_3585;
{ /* Llib/srfi4.scm 570 */
long BgL_arg2314z00_3586;
BgL_arg2314z00_3586 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3578); 
BgL_arg2313z00_3585 = 
(BgL_arg2314z00_3586-((long)1)); } 
{ /* Llib/srfi4.scm 570 */

BgL_arg2311z00_3584 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2313z00_3585, ((long)10)); } } 
BgL_arg2309z00_3583 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2311z00_3584, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2308z00_3582, BgL_arg2309z00_3583, 
BINT(BgL_kz00_3579));} } } } 
}



/* u64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_114, long BgL_kz00_115, unsigned BGL_LONGLONG_T BgL_valz00_116)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 577 */
{ /* Llib/srfi4.scm 578 */
bool_t BgL_testz00_5650;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2326z00_3587;
BgL_arg2326z00_3587 = 
BGL_HVECTOR_LENGTH(BgL_vz00_114); 
{ /* Llib/srfi4.scm 578 */
int BgL_auxz00_5654;int BgL_auxz00_5652;
BgL_auxz00_5654 = 
(int)(BgL_arg2326z00_3587); 
BgL_auxz00_5652 = 
(int)(BgL_kz00_115); 
BgL_testz00_5650 = 
BOUND_CHECK(BgL_auxz00_5652, BgL_auxz00_5654); } } 
if(BgL_testz00_5650)
{ /* Llib/srfi4.scm 578 */
BGL_U64VSET(BgL_vz00_114, BgL_kz00_115, BgL_valz00_116); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_arg2318z00_3588;obj_t BgL_arg2319z00_3589;
BgL_arg2318z00_3588 = BGl_symbol3197z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_arg2321z00_3590;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2323z00_3591;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2324z00_3592;
BgL_arg2324z00_3592 = 
BGL_HVECTOR_LENGTH(BgL_vz00_114); 
BgL_arg2323z00_3591 = 
(BgL_arg2324z00_3592-((long)1)); } 
{ /* Llib/srfi4.scm 578 */

BgL_arg2321z00_3590 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2323z00_3591, ((long)10)); } } 
BgL_arg2319z00_3589 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2321z00_3590, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2318z00_3588, BgL_arg2319z00_3589, 
BINT(BgL_kz00_115));} } } 
}



/* _u64vector-set! */
obj_t BGl__u64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2813, obj_t BgL_vz00_2814, obj_t BgL_kz00_2815, obj_t BgL_valz00_2816)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 577 */
{ /* Llib/srfi4.scm 578 */
obj_t BgL_vz00_3593;long BgL_kz00_3594;unsigned BGL_LONGLONG_T BgL_valz00_3595;
if(
BGL_U64VECTORP(BgL_vz00_2814))
{ /* Llib/srfi4.scm 578 */
BgL_vz00_3593 = BgL_vz00_2814; }  else 
{ 
obj_t BgL_auxz00_5666;
BgL_auxz00_5666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22619)), BGl_string3199z00zz__srfi4z00, BGl_string3084z00zz__srfi4z00, BgL_vz00_2814); 
FAILURE(BgL_auxz00_5666,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_auxz00_5670;
if(
INTEGERP(BgL_kz00_2815))
{ /* Llib/srfi4.scm 578 */
BgL_auxz00_5670 = BgL_kz00_2815
; }  else 
{ 
obj_t BgL_auxz00_5673;
BgL_auxz00_5673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22619)), BGl_string3199z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2815); 
FAILURE(BgL_auxz00_5673,BFALSE,BFALSE);} 
BgL_kz00_3594 = 
(long)CINT(BgL_auxz00_5670); } 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_auxz00_5678;
if(
LLONGP(BgL_valz00_2816))
{ /* Llib/srfi4.scm 578 */
BgL_auxz00_5678 = BgL_valz00_2816
; }  else 
{ 
obj_t BgL_auxz00_5681;
BgL_auxz00_5681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22619)), BGl_string3199z00zz__srfi4z00, BGl_string3124z00zz__srfi4z00, BgL_valz00_2816); 
FAILURE(BgL_auxz00_5681,BFALSE,BFALSE);} 
BgL_valz00_3595 = 
BLLONG_TO_LLONG(BgL_auxz00_5678); } 
{ /* Llib/srfi4.scm 578 */
bool_t BgL_testz00_5686;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2326z00_3596;
BgL_arg2326z00_3596 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3593); 
{ /* Llib/srfi4.scm 578 */
int BgL_auxz00_5690;int BgL_auxz00_5688;
BgL_auxz00_5690 = 
(int)(BgL_arg2326z00_3596); 
BgL_auxz00_5688 = 
(int)(BgL_kz00_3594); 
BgL_testz00_5686 = 
BOUND_CHECK(BgL_auxz00_5688, BgL_auxz00_5690); } } 
if(BgL_testz00_5686)
{ /* Llib/srfi4.scm 578 */
BGL_U64VSET(BgL_vz00_3593, BgL_kz00_3594, BgL_valz00_3595); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_arg2318z00_3597;obj_t BgL_arg2319z00_3598;
BgL_arg2318z00_3597 = BGl_symbol3197z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 578 */
obj_t BgL_arg2321z00_3599;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2323z00_3600;
{ /* Llib/srfi4.scm 578 */
long BgL_arg2324z00_3601;
BgL_arg2324z00_3601 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3593); 
BgL_arg2323z00_3600 = 
(BgL_arg2324z00_3601-((long)1)); } 
{ /* Llib/srfi4.scm 578 */

BgL_arg2321z00_3599 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2323z00_3600, ((long)10)); } } 
BgL_arg2319z00_3598 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2321z00_3599, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2318z00_3597, BgL_arg2319z00_3598, 
BINT(BgL_kz00_3594));} } } } 
}



/* f32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_117, long BgL_kz00_118, float BgL_valz00_119)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 585 */
{ /* Llib/srfi4.scm 586 */
bool_t BgL_testz00_5700;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2336z00_3602;
BgL_arg2336z00_3602 = 
BGL_HVECTOR_LENGTH(BgL_vz00_117); 
{ /* Llib/srfi4.scm 586 */
int BgL_auxz00_5704;int BgL_auxz00_5702;
BgL_auxz00_5704 = 
(int)(BgL_arg2336z00_3602); 
BgL_auxz00_5702 = 
(int)(BgL_kz00_118); 
BgL_testz00_5700 = 
BOUND_CHECK(BgL_auxz00_5702, BgL_auxz00_5704); } } 
if(BgL_testz00_5700)
{ /* Llib/srfi4.scm 586 */
BGL_F32VSET(BgL_vz00_117, BgL_kz00_118, BgL_valz00_119); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_arg2328z00_3603;obj_t BgL_arg2329z00_3604;
BgL_arg2328z00_3603 = BGl_symbol3200z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_arg2331z00_3605;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2333z00_3606;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2334z00_3607;
BgL_arg2334z00_3607 = 
BGL_HVECTOR_LENGTH(BgL_vz00_117); 
BgL_arg2333z00_3606 = 
(BgL_arg2334z00_3607-((long)1)); } 
{ /* Llib/srfi4.scm 586 */

BgL_arg2331z00_3605 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2333z00_3606, ((long)10)); } } 
BgL_arg2329z00_3604 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2331z00_3605, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2328z00_3603, BgL_arg2329z00_3604, 
BINT(BgL_kz00_118));} } } 
}



/* _f32vector-set! */
obj_t BGl__f32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2820, obj_t BgL_vz00_2821, obj_t BgL_kz00_2822, obj_t BgL_valz00_2823)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 585 */
{ /* Llib/srfi4.scm 586 */
obj_t BgL_vz00_3608;long BgL_kz00_3609;float BgL_valz00_3610;
if(
BGL_F32VECTORP(BgL_vz00_2821))
{ /* Llib/srfi4.scm 586 */
BgL_vz00_3608 = BgL_vz00_2821; }  else 
{ 
obj_t BgL_auxz00_5716;
BgL_auxz00_5716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22903)), BGl_string3202z00zz__srfi4z00, BGl_string3086z00zz__srfi4z00, BgL_vz00_2821); 
FAILURE(BgL_auxz00_5716,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_auxz00_5720;
if(
INTEGERP(BgL_kz00_2822))
{ /* Llib/srfi4.scm 586 */
BgL_auxz00_5720 = BgL_kz00_2822
; }  else 
{ 
obj_t BgL_auxz00_5723;
BgL_auxz00_5723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22903)), BGl_string3202z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2822); 
FAILURE(BgL_auxz00_5723,BFALSE,BFALSE);} 
BgL_kz00_3609 = 
(long)CINT(BgL_auxz00_5720); } 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_auxz00_5728;
if(
REALP(BgL_valz00_2823))
{ /* Llib/srfi4.scm 586 */
BgL_auxz00_5728 = BgL_valz00_2823
; }  else 
{ 
obj_t BgL_auxz00_5731;
BgL_auxz00_5731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)22903)), BGl_string3202z00zz__srfi4z00, BGl_string3129z00zz__srfi4z00, BgL_valz00_2823); 
FAILURE(BgL_auxz00_5731,BFALSE,BFALSE);} 
BgL_valz00_3610 = 
REAL_TO_FLOAT(BgL_auxz00_5728); } 
{ /* Llib/srfi4.scm 586 */
bool_t BgL_testz00_5736;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2336z00_3611;
BgL_arg2336z00_3611 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3608); 
{ /* Llib/srfi4.scm 586 */
int BgL_auxz00_5740;int BgL_auxz00_5738;
BgL_auxz00_5740 = 
(int)(BgL_arg2336z00_3611); 
BgL_auxz00_5738 = 
(int)(BgL_kz00_3609); 
BgL_testz00_5736 = 
BOUND_CHECK(BgL_auxz00_5738, BgL_auxz00_5740); } } 
if(BgL_testz00_5736)
{ /* Llib/srfi4.scm 586 */
BGL_F32VSET(BgL_vz00_3608, BgL_kz00_3609, BgL_valz00_3610); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_arg2328z00_3612;obj_t BgL_arg2329z00_3613;
BgL_arg2328z00_3612 = BGl_symbol3200z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 586 */
obj_t BgL_arg2331z00_3614;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2333z00_3615;
{ /* Llib/srfi4.scm 586 */
long BgL_arg2334z00_3616;
BgL_arg2334z00_3616 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3608); 
BgL_arg2333z00_3615 = 
(BgL_arg2334z00_3616-((long)1)); } 
{ /* Llib/srfi4.scm 586 */

BgL_arg2331z00_3614 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2333z00_3615, ((long)10)); } } 
BgL_arg2329z00_3613 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2331z00_3614, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2328z00_3612, BgL_arg2329z00_3613, 
BINT(BgL_kz00_3609));} } } } 
}



/* f64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_120, long BgL_kz00_121, double BgL_valz00_122)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 593 */
{ /* Llib/srfi4.scm 594 */
bool_t BgL_testz00_5750;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2346z00_3617;
BgL_arg2346z00_3617 = 
BGL_HVECTOR_LENGTH(BgL_vz00_120); 
{ /* Llib/srfi4.scm 594 */
int BgL_auxz00_5754;int BgL_auxz00_5752;
BgL_auxz00_5754 = 
(int)(BgL_arg2346z00_3617); 
BgL_auxz00_5752 = 
(int)(BgL_kz00_121); 
BgL_testz00_5750 = 
BOUND_CHECK(BgL_auxz00_5752, BgL_auxz00_5754); } } 
if(BgL_testz00_5750)
{ /* Llib/srfi4.scm 594 */
BGL_F64VSET(BgL_vz00_120, BgL_kz00_121, BgL_valz00_122); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_arg2338z00_3618;obj_t BgL_arg2339z00_3619;
BgL_arg2338z00_3618 = BGl_symbol3203z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_arg2341z00_3620;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2343z00_3621;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2344z00_3622;
BgL_arg2344z00_3622 = 
BGL_HVECTOR_LENGTH(BgL_vz00_120); 
BgL_arg2343z00_3621 = 
(BgL_arg2344z00_3622-((long)1)); } 
{ /* Llib/srfi4.scm 594 */

BgL_arg2341z00_3620 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2343z00_3621, ((long)10)); } } 
BgL_arg2339z00_3619 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2341z00_3620, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2338z00_3618, BgL_arg2339z00_3619, 
BINT(BgL_kz00_121));} } } 
}



/* _f64vector-set! */
obj_t BGl__f64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_envz00_2827, obj_t BgL_vz00_2828, obj_t BgL_kz00_2829, obj_t BgL_valz00_2830)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 593 */
{ /* Llib/srfi4.scm 594 */
obj_t BgL_vz00_3623;long BgL_kz00_3624;double BgL_valz00_3625;
if(
BGL_F64VECTORP(BgL_vz00_2828))
{ /* Llib/srfi4.scm 594 */
BgL_vz00_3623 = BgL_vz00_2828; }  else 
{ 
obj_t BgL_auxz00_5766;
BgL_auxz00_5766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)23187)), BGl_string3205z00zz__srfi4z00, BGl_string3088z00zz__srfi4z00, BgL_vz00_2828); 
FAILURE(BgL_auxz00_5766,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_auxz00_5770;
if(
INTEGERP(BgL_kz00_2829))
{ /* Llib/srfi4.scm 594 */
BgL_auxz00_5770 = BgL_kz00_2829
; }  else 
{ 
obj_t BgL_auxz00_5773;
BgL_auxz00_5773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)23187)), BGl_string3205z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_kz00_2829); 
FAILURE(BgL_auxz00_5773,BFALSE,BFALSE);} 
BgL_kz00_3624 = 
(long)CINT(BgL_auxz00_5770); } 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_auxz00_5778;
if(
REALP(BgL_valz00_2830))
{ /* Llib/srfi4.scm 594 */
BgL_auxz00_5778 = BgL_valz00_2830
; }  else 
{ 
obj_t BgL_auxz00_5781;
BgL_auxz00_5781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)23187)), BGl_string3205z00zz__srfi4z00, BGl_string3133z00zz__srfi4z00, BgL_valz00_2830); 
FAILURE(BgL_auxz00_5781,BFALSE,BFALSE);} 
BgL_valz00_3625 = 
REAL_TO_DOUBLE(BgL_auxz00_5778); } 
{ /* Llib/srfi4.scm 594 */
bool_t BgL_testz00_5786;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2346z00_3626;
BgL_arg2346z00_3626 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3623); 
{ /* Llib/srfi4.scm 594 */
int BgL_auxz00_5790;int BgL_auxz00_5788;
BgL_auxz00_5790 = 
(int)(BgL_arg2346z00_3626); 
BgL_auxz00_5788 = 
(int)(BgL_kz00_3624); 
BgL_testz00_5786 = 
BOUND_CHECK(BgL_auxz00_5788, BgL_auxz00_5790); } } 
if(BgL_testz00_5786)
{ /* Llib/srfi4.scm 594 */
BGL_F64VSET(BgL_vz00_3623, BgL_kz00_3624, BgL_valz00_3625); 
return BUNSPEC;}  else 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_arg2338z00_3627;obj_t BgL_arg2339z00_3628;
BgL_arg2338z00_3627 = BGl_symbol3203z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_arg2341z00_3629;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2343z00_3630;
{ /* Llib/srfi4.scm 594 */
long BgL_arg2344z00_3631;
BgL_arg2344z00_3631 = 
BGL_HVECTOR_LENGTH(BgL_vz00_3623); 
BgL_arg2343z00_3630 = 
(BgL_arg2344z00_3631-((long)1)); } 
{ /* Llib/srfi4.scm 594 */

BgL_arg2341z00_3629 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2343z00_3630, ((long)10)); } } 
BgL_arg2339z00_3628 = 
string_append_3(BGl_string3136z00zz__srfi4z00, BgL_arg2341z00_3629, BGl_string3137z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2338z00_3627, BgL_arg2339z00_3628, 
BINT(BgL_kz00_3624));} } } } 
}



/* s8vector->list */
BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_123)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1848z00_1384;
BgL_g1848z00_1384 = 
BGL_HVECTOR_LENGTH(BgL_xz00_123); 
{ 
long BgL_iz00_1387;obj_t BgL_resz00_1388;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2924z00_3131;
BgL_iz00_1387 = BgL_g1848z00_1384; 
BgL_resz00_1388 = BNIL; 
BgL_zc3anonymousza32347ze3z83_1389:
if(
(BgL_iz00_1387==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2924z00_3131 = BgL_resz00_1388; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1391;
BgL_niz00_1391 = 
(BgL_iz00_1387-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2349z00_1392;
{ /* Llib/srfi4.scm 619 */
char BgL_arg2350z00_1393;
BgL_arg2350z00_1393 = 
BGL_S8VREF(BgL_xz00_123, BgL_niz00_1391); 
BgL_arg2349z00_1392 = 
MAKE_PAIR(
BINT(BgL_arg2350z00_1393), BgL_resz00_1388); } 
{ 
obj_t BgL_resz00_5808;long BgL_iz00_5807;
BgL_iz00_5807 = BgL_niz00_1391; 
BgL_resz00_5808 = BgL_arg2349z00_1392; 
BgL_resz00_1388 = BgL_resz00_5808; 
BgL_iz00_1387 = BgL_iz00_5807; 
goto BgL_zc3anonymousza32347ze3z83_1389;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5809;
if(
PAIRP(BgL_aux2924z00_3131))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5809 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5809 = 
NULLP(BgL_aux2924z00_3131)
; } 
if(BgL_testz00_5809)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2924z00_3131;}  else 
{ 
obj_t BgL_auxz00_5813;
BgL_auxz00_5813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3206z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2924z00_3131); 
FAILURE(BgL_auxz00_5813,BFALSE,BFALSE);} } } } } } 
}



/* _s8vector->list */
obj_t BGl__s8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2871, obj_t BgL_xz00_2872)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5817;
if(
BGL_S8VECTORP(BgL_xz00_2872))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5817 = BgL_xz00_2872
; }  else 
{ 
obj_t BgL_auxz00_5820;
BgL_auxz00_5820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3207z00zz__srfi4z00, BGl_string3070z00zz__srfi4z00, BgL_xz00_2872); 
FAILURE(BgL_auxz00_5820,BFALSE,BFALSE);} 
return 
BGl_s8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5817);} } 
}



/* u8vector->list */
BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_124)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1850z00_1395;
BgL_g1850z00_1395 = 
BGL_HVECTOR_LENGTH(BgL_xz00_124); 
{ 
long BgL_iz00_1398;obj_t BgL_resz00_1399;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2928z00_3135;
BgL_iz00_1398 = BgL_g1850z00_1395; 
BgL_resz00_1399 = BNIL; 
BgL_zc3anonymousza32351ze3z83_1400:
if(
(BgL_iz00_1398==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2928z00_3135 = BgL_resz00_1399; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1402;
BgL_niz00_1402 = 
(BgL_iz00_1398-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2353z00_1403;
{ /* Llib/srfi4.scm 619 */
unsigned char BgL_arg2354z00_1404;
BgL_arg2354z00_1404 = 
BGL_U8VREF(BgL_xz00_124, BgL_niz00_1402); 
BgL_arg2353z00_1403 = 
MAKE_PAIR(
BINT(BgL_arg2354z00_1404), BgL_resz00_1399); } 
{ 
obj_t BgL_resz00_5833;long BgL_iz00_5832;
BgL_iz00_5832 = BgL_niz00_1402; 
BgL_resz00_5833 = BgL_arg2353z00_1403; 
BgL_resz00_1399 = BgL_resz00_5833; 
BgL_iz00_1398 = BgL_iz00_5832; 
goto BgL_zc3anonymousza32351ze3z83_1400;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5834;
if(
PAIRP(BgL_aux2928z00_3135))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5834 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5834 = 
NULLP(BgL_aux2928z00_3135)
; } 
if(BgL_testz00_5834)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2928z00_3135;}  else 
{ 
obj_t BgL_auxz00_5838;
BgL_auxz00_5838 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3208z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2928z00_3135); 
FAILURE(BgL_auxz00_5838,BFALSE,BFALSE);} } } } } } 
}



/* _u8vector->list */
obj_t BGl__u8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2873, obj_t BgL_xz00_2874)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5842;
if(
BGL_U8VECTORP(BgL_xz00_2874))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5842 = BgL_xz00_2874
; }  else 
{ 
obj_t BgL_auxz00_5845;
BgL_auxz00_5845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3209z00zz__srfi4z00, BGl_string3072z00zz__srfi4z00, BgL_xz00_2874); 
FAILURE(BgL_auxz00_5845,BFALSE,BFALSE);} 
return 
BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5842);} } 
}



/* s16vector->list */
BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_125)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1852z00_1406;
BgL_g1852z00_1406 = 
BGL_HVECTOR_LENGTH(BgL_xz00_125); 
{ 
long BgL_iz00_1409;obj_t BgL_resz00_1410;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2932z00_3139;
BgL_iz00_1409 = BgL_g1852z00_1406; 
BgL_resz00_1410 = BNIL; 
BgL_zc3anonymousza32355ze3z83_1411:
if(
(BgL_iz00_1409==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2932z00_3139 = BgL_resz00_1410; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1413;
BgL_niz00_1413 = 
(BgL_iz00_1409-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2357z00_1414;
{ /* Llib/srfi4.scm 619 */
short BgL_arg2358z00_1415;
BgL_arg2358z00_1415 = 
BGL_S16VREF(BgL_xz00_125, BgL_niz00_1413); 
BgL_arg2357z00_1414 = 
MAKE_PAIR(
BINT(BgL_arg2358z00_1415), BgL_resz00_1410); } 
{ 
obj_t BgL_resz00_5858;long BgL_iz00_5857;
BgL_iz00_5857 = BgL_niz00_1413; 
BgL_resz00_5858 = BgL_arg2357z00_1414; 
BgL_resz00_1410 = BgL_resz00_5858; 
BgL_iz00_1409 = BgL_iz00_5857; 
goto BgL_zc3anonymousza32355ze3z83_1411;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5859;
if(
PAIRP(BgL_aux2932z00_3139))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5859 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5859 = 
NULLP(BgL_aux2932z00_3139)
; } 
if(BgL_testz00_5859)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2932z00_3139;}  else 
{ 
obj_t BgL_auxz00_5863;
BgL_auxz00_5863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3210z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2932z00_3139); 
FAILURE(BgL_auxz00_5863,BFALSE,BFALSE);} } } } } } 
}



/* _s16vector->list */
obj_t BGl__s16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2875, obj_t BgL_xz00_2876)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5867;
if(
BGL_S16VECTORP(BgL_xz00_2876))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5867 = BgL_xz00_2876
; }  else 
{ 
obj_t BgL_auxz00_5870;
BgL_auxz00_5870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3211z00zz__srfi4z00, BGl_string3074z00zz__srfi4z00, BgL_xz00_2876); 
FAILURE(BgL_auxz00_5870,BFALSE,BFALSE);} 
return 
BGl_s16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5867);} } 
}



/* u16vector->list */
BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_126)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1854z00_1417;
BgL_g1854z00_1417 = 
BGL_HVECTOR_LENGTH(BgL_xz00_126); 
{ 
long BgL_iz00_1420;obj_t BgL_resz00_1421;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2936z00_3143;
BgL_iz00_1420 = BgL_g1854z00_1417; 
BgL_resz00_1421 = BNIL; 
BgL_zc3anonymousza32359ze3z83_1422:
if(
(BgL_iz00_1420==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2936z00_3143 = BgL_resz00_1421; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1424;
BgL_niz00_1424 = 
(BgL_iz00_1420-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2361z00_1425;
{ /* Llib/srfi4.scm 619 */
unsigned short BgL_arg2362z00_1426;
BgL_arg2362z00_1426 = 
BGL_U16VREF(BgL_xz00_126, BgL_niz00_1424); 
BgL_arg2361z00_1425 = 
MAKE_PAIR(
BINT(BgL_arg2362z00_1426), BgL_resz00_1421); } 
{ 
obj_t BgL_resz00_5883;long BgL_iz00_5882;
BgL_iz00_5882 = BgL_niz00_1424; 
BgL_resz00_5883 = BgL_arg2361z00_1425; 
BgL_resz00_1421 = BgL_resz00_5883; 
BgL_iz00_1420 = BgL_iz00_5882; 
goto BgL_zc3anonymousza32359ze3z83_1422;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5884;
if(
PAIRP(BgL_aux2936z00_3143))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5884 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5884 = 
NULLP(BgL_aux2936z00_3143)
; } 
if(BgL_testz00_5884)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2936z00_3143;}  else 
{ 
obj_t BgL_auxz00_5888;
BgL_auxz00_5888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3212z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2936z00_3143); 
FAILURE(BgL_auxz00_5888,BFALSE,BFALSE);} } } } } } 
}



/* _u16vector->list */
obj_t BGl__u16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2877, obj_t BgL_xz00_2878)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5892;
if(
BGL_U16VECTORP(BgL_xz00_2878))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5892 = BgL_xz00_2878
; }  else 
{ 
obj_t BgL_auxz00_5895;
BgL_auxz00_5895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3213z00zz__srfi4z00, BGl_string3076z00zz__srfi4z00, BgL_xz00_2878); 
FAILURE(BgL_auxz00_5895,BFALSE,BFALSE);} 
return 
BGl_u16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5892);} } 
}



/* s32vector->list */
BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_127)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1856z00_1428;
BgL_g1856z00_1428 = 
BGL_HVECTOR_LENGTH(BgL_xz00_127); 
{ 
long BgL_iz00_1431;obj_t BgL_resz00_1432;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2940z00_3147;
BgL_iz00_1431 = BgL_g1856z00_1428; 
BgL_resz00_1432 = BNIL; 
BgL_zc3anonymousza32363ze3z83_1433:
if(
(BgL_iz00_1431==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2940z00_3147 = BgL_resz00_1432; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1435;
BgL_niz00_1435 = 
(BgL_iz00_1431-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2365z00_1436;
{ /* Llib/srfi4.scm 619 */
long BgL_arg2366z00_1437;
BgL_arg2366z00_1437 = 
BGL_S32VREF(BgL_xz00_127, BgL_niz00_1435); 
BgL_arg2365z00_1436 = 
MAKE_PAIR(
BINT(BgL_arg2366z00_1437), BgL_resz00_1432); } 
{ 
obj_t BgL_resz00_5908;long BgL_iz00_5907;
BgL_iz00_5907 = BgL_niz00_1435; 
BgL_resz00_5908 = BgL_arg2365z00_1436; 
BgL_resz00_1432 = BgL_resz00_5908; 
BgL_iz00_1431 = BgL_iz00_5907; 
goto BgL_zc3anonymousza32363ze3z83_1433;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5909;
if(
PAIRP(BgL_aux2940z00_3147))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5909 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5909 = 
NULLP(BgL_aux2940z00_3147)
; } 
if(BgL_testz00_5909)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2940z00_3147;}  else 
{ 
obj_t BgL_auxz00_5913;
BgL_auxz00_5913 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3214z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2940z00_3147); 
FAILURE(BgL_auxz00_5913,BFALSE,BFALSE);} } } } } } 
}



/* _s32vector->list */
obj_t BGl__s32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2879, obj_t BgL_xz00_2880)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5917;
if(
BGL_S32VECTORP(BgL_xz00_2880))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5917 = BgL_xz00_2880
; }  else 
{ 
obj_t BgL_auxz00_5920;
BgL_auxz00_5920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3215z00zz__srfi4z00, BGl_string3078z00zz__srfi4z00, BgL_xz00_2880); 
FAILURE(BgL_auxz00_5920,BFALSE,BFALSE);} 
return 
BGl_s32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5917);} } 
}



/* u32vector->list */
BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_128)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1858z00_1439;
BgL_g1858z00_1439 = 
BGL_HVECTOR_LENGTH(BgL_xz00_128); 
{ 
long BgL_iz00_1442;obj_t BgL_resz00_1443;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2944z00_3151;
BgL_iz00_1442 = BgL_g1858z00_1439; 
BgL_resz00_1443 = BNIL; 
BgL_zc3anonymousza32367ze3z83_1444:
if(
(BgL_iz00_1442==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2944z00_3151 = BgL_resz00_1443; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1446;
BgL_niz00_1446 = 
(BgL_iz00_1442-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2369z00_1447;
{ /* Llib/srfi4.scm 619 */
unsigned long BgL_arg2370z00_1448;
BgL_arg2370z00_1448 = 
BGL_U32VREF(BgL_xz00_128, BgL_niz00_1446); 
BgL_arg2369z00_1447 = 
MAKE_PAIR(
BINT(BgL_arg2370z00_1448), BgL_resz00_1443); } 
{ 
obj_t BgL_resz00_5933;long BgL_iz00_5932;
BgL_iz00_5932 = BgL_niz00_1446; 
BgL_resz00_5933 = BgL_arg2369z00_1447; 
BgL_resz00_1443 = BgL_resz00_5933; 
BgL_iz00_1442 = BgL_iz00_5932; 
goto BgL_zc3anonymousza32367ze3z83_1444;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5934;
if(
PAIRP(BgL_aux2944z00_3151))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5934 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5934 = 
NULLP(BgL_aux2944z00_3151)
; } 
if(BgL_testz00_5934)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2944z00_3151;}  else 
{ 
obj_t BgL_auxz00_5938;
BgL_auxz00_5938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3216z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2944z00_3151); 
FAILURE(BgL_auxz00_5938,BFALSE,BFALSE);} } } } } } 
}



/* _u32vector->list */
obj_t BGl__u32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2881, obj_t BgL_xz00_2882)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5942;
if(
BGL_U32VECTORP(BgL_xz00_2882))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5942 = BgL_xz00_2882
; }  else 
{ 
obj_t BgL_auxz00_5945;
BgL_auxz00_5945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3217z00zz__srfi4z00, BGl_string3080z00zz__srfi4z00, BgL_xz00_2882); 
FAILURE(BgL_auxz00_5945,BFALSE,BFALSE);} 
return 
BGl_u32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5942);} } 
}



/* s64vector->list */
BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_129)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1860z00_1450;
BgL_g1860z00_1450 = 
BGL_HVECTOR_LENGTH(BgL_xz00_129); 
{ 
long BgL_iz00_1453;obj_t BgL_resz00_1454;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2948z00_3155;
BgL_iz00_1453 = BgL_g1860z00_1450; 
BgL_resz00_1454 = BNIL; 
BgL_zc3anonymousza32371ze3z83_1455:
if(
(BgL_iz00_1453==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2948z00_3155 = BgL_resz00_1454; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1457;
BgL_niz00_1457 = 
(BgL_iz00_1453-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2373z00_1458;
{ /* Llib/srfi4.scm 619 */
BGL_LONGLONG_T BgL_arg2374z00_1459;
BgL_arg2374z00_1459 = 
BGL_S64VREF(BgL_xz00_129, BgL_niz00_1457); 
BgL_arg2373z00_1458 = 
MAKE_PAIR(
make_bllong(BgL_arg2374z00_1459), BgL_resz00_1454); } 
{ 
obj_t BgL_resz00_5958;long BgL_iz00_5957;
BgL_iz00_5957 = BgL_niz00_1457; 
BgL_resz00_5958 = BgL_arg2373z00_1458; 
BgL_resz00_1454 = BgL_resz00_5958; 
BgL_iz00_1453 = BgL_iz00_5957; 
goto BgL_zc3anonymousza32371ze3z83_1455;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5959;
if(
PAIRP(BgL_aux2948z00_3155))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5959 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5959 = 
NULLP(BgL_aux2948z00_3155)
; } 
if(BgL_testz00_5959)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2948z00_3155;}  else 
{ 
obj_t BgL_auxz00_5963;
BgL_auxz00_5963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3218z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2948z00_3155); 
FAILURE(BgL_auxz00_5963,BFALSE,BFALSE);} } } } } } 
}



/* _s64vector->list */
obj_t BGl__s64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2883, obj_t BgL_xz00_2884)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5967;
if(
BGL_S64VECTORP(BgL_xz00_2884))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5967 = BgL_xz00_2884
; }  else 
{ 
obj_t BgL_auxz00_5970;
BgL_auxz00_5970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3219z00zz__srfi4z00, BGl_string3082z00zz__srfi4z00, BgL_xz00_2884); 
FAILURE(BgL_auxz00_5970,BFALSE,BFALSE);} 
return 
BGl_s64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5967);} } 
}



/* u64vector->list */
BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_130)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1862z00_1461;
BgL_g1862z00_1461 = 
BGL_HVECTOR_LENGTH(BgL_xz00_130); 
{ 
long BgL_iz00_1464;obj_t BgL_resz00_1465;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2952z00_3159;
BgL_iz00_1464 = BgL_g1862z00_1461; 
BgL_resz00_1465 = BNIL; 
BgL_zc3anonymousza32375ze3z83_1466:
if(
(BgL_iz00_1464==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2952z00_3159 = BgL_resz00_1465; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1468;
BgL_niz00_1468 = 
(BgL_iz00_1464-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2377z00_1469;
{ /* Llib/srfi4.scm 619 */
unsigned BGL_LONGLONG_T BgL_arg2378z00_1470;
BgL_arg2378z00_1470 = 
BGL_U64VREF(BgL_xz00_130, BgL_niz00_1468); 
BgL_arg2377z00_1469 = 
MAKE_PAIR(
make_bllong(BgL_arg2378z00_1470), BgL_resz00_1465); } 
{ 
obj_t BgL_resz00_5983;long BgL_iz00_5982;
BgL_iz00_5982 = BgL_niz00_1468; 
BgL_resz00_5983 = BgL_arg2377z00_1469; 
BgL_resz00_1465 = BgL_resz00_5983; 
BgL_iz00_1464 = BgL_iz00_5982; 
goto BgL_zc3anonymousza32375ze3z83_1466;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_5984;
if(
PAIRP(BgL_aux2952z00_3159))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5984 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_5984 = 
NULLP(BgL_aux2952z00_3159)
; } 
if(BgL_testz00_5984)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2952z00_3159;}  else 
{ 
obj_t BgL_auxz00_5988;
BgL_auxz00_5988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3220z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2952z00_3159); 
FAILURE(BgL_auxz00_5988,BFALSE,BFALSE);} } } } } } 
}



/* _u64vector->list */
obj_t BGl__u64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2885, obj_t BgL_xz00_2886)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_5992;
if(
BGL_U64VECTORP(BgL_xz00_2886))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_5992 = BgL_xz00_2886
; }  else 
{ 
obj_t BgL_auxz00_5995;
BgL_auxz00_5995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3221z00zz__srfi4z00, BGl_string3084z00zz__srfi4z00, BgL_xz00_2886); 
FAILURE(BgL_auxz00_5995,BFALSE,BFALSE);} 
return 
BGl_u64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5992);} } 
}



/* f32vector->list */
BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_131)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1864z00_1472;
BgL_g1864z00_1472 = 
BGL_HVECTOR_LENGTH(BgL_xz00_131); 
{ 
long BgL_iz00_1475;obj_t BgL_resz00_1476;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2956z00_3163;
BgL_iz00_1475 = BgL_g1864z00_1472; 
BgL_resz00_1476 = BNIL; 
BgL_zc3anonymousza32379ze3z83_1477:
if(
(BgL_iz00_1475==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2956z00_3163 = BgL_resz00_1476; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1479;
BgL_niz00_1479 = 
(BgL_iz00_1475-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2381z00_1480;
{ /* Llib/srfi4.scm 619 */
float BgL_arg2382z00_1481;
BgL_arg2382z00_1481 = 
BGL_F32VREF(BgL_xz00_131, BgL_niz00_1479); 
BgL_arg2381z00_1480 = 
MAKE_PAIR(
FLOAT_TO_REAL(BgL_arg2382z00_1481), BgL_resz00_1476); } 
{ 
obj_t BgL_resz00_6008;long BgL_iz00_6007;
BgL_iz00_6007 = BgL_niz00_1479; 
BgL_resz00_6008 = BgL_arg2381z00_1480; 
BgL_resz00_1476 = BgL_resz00_6008; 
BgL_iz00_1475 = BgL_iz00_6007; 
goto BgL_zc3anonymousza32379ze3z83_1477;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_6009;
if(
PAIRP(BgL_aux2956z00_3163))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_6009 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_6009 = 
NULLP(BgL_aux2956z00_3163)
; } 
if(BgL_testz00_6009)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2956z00_3163;}  else 
{ 
obj_t BgL_auxz00_6013;
BgL_auxz00_6013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3222z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2956z00_3163); 
FAILURE(BgL_auxz00_6013,BFALSE,BFALSE);} } } } } } 
}



/* _f32vector->list */
obj_t BGl__f32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2887, obj_t BgL_xz00_2888)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_6017;
if(
BGL_F32VECTORP(BgL_xz00_2888))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_6017 = BgL_xz00_2888
; }  else 
{ 
obj_t BgL_auxz00_6020;
BgL_auxz00_6020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3223z00zz__srfi4z00, BGl_string3086z00zz__srfi4z00, BgL_xz00_2888); 
FAILURE(BgL_auxz00_6020,BFALSE,BFALSE);} 
return 
BGl_f32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6017);} } 
}



/* f64vector->list */
BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_132)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_g1866z00_1483;
BgL_g1866z00_1483 = 
BGL_HVECTOR_LENGTH(BgL_xz00_132); 
{ 
long BgL_iz00_1486;obj_t BgL_resz00_1487;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_aux2960z00_3167;
BgL_iz00_1486 = BgL_g1866z00_1483; 
BgL_resz00_1487 = BNIL; 
BgL_zc3anonymousza32383ze3z83_1488:
if(
(BgL_iz00_1486==((long)0)))
{ /* Llib/srfi4.scm 619 */
BgL_aux2960z00_3167 = BgL_resz00_1487; }  else 
{ /* Llib/srfi4.scm 619 */
long BgL_niz00_1490;
BgL_niz00_1490 = 
(BgL_iz00_1486-((long)1)); 
{ /* Llib/srfi4.scm 619 */
obj_t BgL_arg2385z00_1491;
{ /* Llib/srfi4.scm 619 */
double BgL_arg2386z00_1492;
BgL_arg2386z00_1492 = 
BGL_F64VREF(BgL_xz00_132, BgL_niz00_1490); 
BgL_arg2385z00_1491 = 
MAKE_PAIR(
DOUBLE_TO_REAL(BgL_arg2386z00_1492), BgL_resz00_1487); } 
{ 
obj_t BgL_resz00_6033;long BgL_iz00_6032;
BgL_iz00_6032 = BgL_niz00_1490; 
BgL_resz00_6033 = BgL_arg2385z00_1491; 
BgL_resz00_1487 = BgL_resz00_6033; 
BgL_iz00_1486 = BgL_iz00_6032; 
goto BgL_zc3anonymousza32383ze3z83_1488;} } } 
{ /* Llib/srfi4.scm 619 */
bool_t BgL_testz00_6034;
if(
PAIRP(BgL_aux2960z00_3167))
{ /* Llib/srfi4.scm 619 */
BgL_testz00_6034 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 619 */
BgL_testz00_6034 = 
NULLP(BgL_aux2960z00_3167)
; } 
if(BgL_testz00_6034)
{ /* Llib/srfi4.scm 619 */
return BgL_aux2960z00_3167;}  else 
{ 
obj_t BgL_auxz00_6038;
BgL_auxz00_6038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3224z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_aux2960z00_3167); 
FAILURE(BgL_auxz00_6038,BFALSE,BFALSE);} } } } } } 
}



/* _f64vector->list */
obj_t BGl__f64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_envz00_2889, obj_t BgL_xz00_2890)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_6042;
if(
BGL_F64VECTORP(BgL_xz00_2890))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_6042 = BgL_xz00_2890
; }  else 
{ 
obj_t BgL_auxz00_6045;
BgL_auxz00_6045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24065)), BGl_string3225z00zz__srfi4z00, BGl_string3088z00zz__srfi4z00, BgL_xz00_2890); 
FAILURE(BgL_auxz00_6045,BFALSE,BFALSE);} 
return 
BGl_f64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6042);} } 
}



/* list->s8vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t BgL_xz00_133)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1494;
BgL_lenz00_1494 = 
bgl_list_length(BgL_xz00_133); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1495;
BgL_vecz00_1495 = 
BGL_ALLOC_S8VECTOR(BgL_lenz00_1494); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1497;obj_t BgL_lz00_1498;
BgL_iz00_1497 = ((long)0); 
BgL_lz00_1498 = BgL_xz00_133; 
BgL_zc3anonymousza32387ze3z83_1499:
if(
(BgL_iz00_1497==BgL_lenz00_1494))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1495;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2389z00_1501;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2494;
if(
PAIRP(BgL_lz00_1498))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2494 = BgL_lz00_1498; }  else 
{ 
obj_t BgL_auxz00_6056;
BgL_auxz00_6056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1498); 
FAILURE(BgL_auxz00_6056,BFALSE,BFALSE);} 
BgL_arg2389z00_1501 = 
CAR(BgL_pairz00_2494); } 
{ /* Llib/srfi4.scm 641 */
char BgL_auxz00_6061;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6062;
if(
INTEGERP(BgL_arg2389z00_1501))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6062 = BgL_arg2389z00_1501
; }  else 
{ 
obj_t BgL_auxz00_6065;
BgL_auxz00_6065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3096z00zz__srfi4z00, BgL_arg2389z00_1501); 
FAILURE(BgL_auxz00_6065,BFALSE,BFALSE);} 
BgL_auxz00_6061 = 
(signed char)CINT(BgL_auxz00_6062); } 
BGL_S8VSET(BgL_vecz00_1495, BgL_iz00_1497, BgL_auxz00_6061); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6073;long BgL_iz00_6071;
BgL_iz00_6071 = 
(BgL_iz00_1497+((long)1)); 
BgL_lz00_6073 = 
CDR(BgL_lz00_1498); 
BgL_lz00_1498 = BgL_lz00_6073; 
BgL_iz00_1497 = BgL_iz00_6071; 
goto BgL_zc3anonymousza32387ze3z83_1499;} } } } } } } 
}



/* _list->s8vector */
obj_t BGl__listzd2ze3s8vectorz31zz__srfi4z00(obj_t BgL_envz00_2891, obj_t BgL_xz00_2892)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6075;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6076;
if(
PAIRP(BgL_xz00_2892))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6076 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6076 = 
NULLP(BgL_xz00_2892)
; } 
if(BgL_testz00_6076)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6075 = BgL_xz00_2892
; }  else 
{ 
obj_t BgL_auxz00_6080;
BgL_auxz00_6080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3227z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2892); 
FAILURE(BgL_auxz00_6080,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_6075);} } 
}



/* list->u8vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t BgL_xz00_134)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1505;
BgL_lenz00_1505 = 
bgl_list_length(BgL_xz00_134); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1506;
BgL_vecz00_1506 = 
BGL_ALLOC_U8VECTOR(BgL_lenz00_1505); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1508;obj_t BgL_lz00_1509;
BgL_iz00_1508 = ((long)0); 
BgL_lz00_1509 = BgL_xz00_134; 
BgL_zc3anonymousza32392ze3z83_1510:
if(
(BgL_iz00_1508==BgL_lenz00_1505))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1506;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2394z00_1512;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2500;
if(
PAIRP(BgL_lz00_1509))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2500 = BgL_lz00_1509; }  else 
{ 
obj_t BgL_auxz00_6091;
BgL_auxz00_6091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1509); 
FAILURE(BgL_auxz00_6091,BFALSE,BFALSE);} 
BgL_arg2394z00_1512 = 
CAR(BgL_pairz00_2500); } 
{ /* Llib/srfi4.scm 641 */
unsigned char BgL_auxz00_6096;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6097;
if(
INTEGERP(BgL_arg2394z00_1512))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6097 = BgL_arg2394z00_1512
; }  else 
{ 
obj_t BgL_auxz00_6100;
BgL_auxz00_6100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3100z00zz__srfi4z00, BgL_arg2394z00_1512); 
FAILURE(BgL_auxz00_6100,BFALSE,BFALSE);} 
BgL_auxz00_6096 = 
(unsigned char)CINT(BgL_auxz00_6097); } 
BGL_U8VSET(BgL_vecz00_1506, BgL_iz00_1508, BgL_auxz00_6096); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6108;long BgL_iz00_6106;
BgL_iz00_6106 = 
(BgL_iz00_1508+((long)1)); 
BgL_lz00_6108 = 
CDR(BgL_lz00_1509); 
BgL_lz00_1509 = BgL_lz00_6108; 
BgL_iz00_1508 = BgL_iz00_6106; 
goto BgL_zc3anonymousza32392ze3z83_1510;} } } } } } } 
}



/* _list->u8vector */
obj_t BGl__listzd2ze3u8vectorz31zz__srfi4z00(obj_t BgL_envz00_2893, obj_t BgL_xz00_2894)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6110;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6111;
if(
PAIRP(BgL_xz00_2894))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6111 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6111 = 
NULLP(BgL_xz00_2894)
; } 
if(BgL_testz00_6111)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6110 = BgL_xz00_2894
; }  else 
{ 
obj_t BgL_auxz00_6115;
BgL_auxz00_6115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3228z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2894); 
FAILURE(BgL_auxz00_6115,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_6110);} } 
}



/* list->s16vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t BgL_xz00_135)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1516;
BgL_lenz00_1516 = 
bgl_list_length(BgL_xz00_135); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1517;
BgL_vecz00_1517 = 
BGL_ALLOC_S16VECTOR(BgL_lenz00_1516); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1519;obj_t BgL_lz00_1520;
BgL_iz00_1519 = ((long)0); 
BgL_lz00_1520 = BgL_xz00_135; 
BgL_zc3anonymousza32397ze3z83_1521:
if(
(BgL_iz00_1519==BgL_lenz00_1516))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1517;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2399z00_1523;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2506;
if(
PAIRP(BgL_lz00_1520))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2506 = BgL_lz00_1520; }  else 
{ 
obj_t BgL_auxz00_6126;
BgL_auxz00_6126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1520); 
FAILURE(BgL_auxz00_6126,BFALSE,BFALSE);} 
BgL_arg2399z00_1523 = 
CAR(BgL_pairz00_2506); } 
{ /* Llib/srfi4.scm 641 */
short BgL_auxz00_6131;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6132;
if(
INTEGERP(BgL_arg2399z00_1523))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6132 = BgL_arg2399z00_1523
; }  else 
{ 
obj_t BgL_auxz00_6135;
BgL_auxz00_6135 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3104z00zz__srfi4z00, BgL_arg2399z00_1523); 
FAILURE(BgL_auxz00_6135,BFALSE,BFALSE);} 
BgL_auxz00_6131 = 
(short)CINT(BgL_auxz00_6132); } 
BGL_S16VSET(BgL_vecz00_1517, BgL_iz00_1519, BgL_auxz00_6131); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6143;long BgL_iz00_6141;
BgL_iz00_6141 = 
(BgL_iz00_1519+((long)1)); 
BgL_lz00_6143 = 
CDR(BgL_lz00_1520); 
BgL_lz00_1520 = BgL_lz00_6143; 
BgL_iz00_1519 = BgL_iz00_6141; 
goto BgL_zc3anonymousza32397ze3z83_1521;} } } } } } } 
}



/* _list->s16vector */
obj_t BGl__listzd2ze3s16vectorz31zz__srfi4z00(obj_t BgL_envz00_2895, obj_t BgL_xz00_2896)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6145;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6146;
if(
PAIRP(BgL_xz00_2896))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6146 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6146 = 
NULLP(BgL_xz00_2896)
; } 
if(BgL_testz00_6146)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6145 = BgL_xz00_2896
; }  else 
{ 
obj_t BgL_auxz00_6150;
BgL_auxz00_6150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3229z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2896); 
FAILURE(BgL_auxz00_6150,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_6145);} } 
}



/* list->u16vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t BgL_xz00_136)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1527;
BgL_lenz00_1527 = 
bgl_list_length(BgL_xz00_136); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1528;
BgL_vecz00_1528 = 
BGL_ALLOC_U16VECTOR(BgL_lenz00_1527); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1530;obj_t BgL_lz00_1531;
BgL_iz00_1530 = ((long)0); 
BgL_lz00_1531 = BgL_xz00_136; 
BgL_zc3anonymousza32402ze3z83_1532:
if(
(BgL_iz00_1530==BgL_lenz00_1527))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1528;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2404z00_1534;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2512;
if(
PAIRP(BgL_lz00_1531))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2512 = BgL_lz00_1531; }  else 
{ 
obj_t BgL_auxz00_6161;
BgL_auxz00_6161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1531); 
FAILURE(BgL_auxz00_6161,BFALSE,BFALSE);} 
BgL_arg2404z00_1534 = 
CAR(BgL_pairz00_2512); } 
{ /* Llib/srfi4.scm 641 */
unsigned short BgL_auxz00_6166;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6167;
if(
INTEGERP(BgL_arg2404z00_1534))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6167 = BgL_arg2404z00_1534
; }  else 
{ 
obj_t BgL_auxz00_6170;
BgL_auxz00_6170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3108z00zz__srfi4z00, BgL_arg2404z00_1534); 
FAILURE(BgL_auxz00_6170,BFALSE,BFALSE);} 
BgL_auxz00_6166 = 
(unsigned short)CINT(BgL_auxz00_6167); } 
BGL_U16VSET(BgL_vecz00_1528, BgL_iz00_1530, BgL_auxz00_6166); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6178;long BgL_iz00_6176;
BgL_iz00_6176 = 
(BgL_iz00_1530+((long)1)); 
BgL_lz00_6178 = 
CDR(BgL_lz00_1531); 
BgL_lz00_1531 = BgL_lz00_6178; 
BgL_iz00_1530 = BgL_iz00_6176; 
goto BgL_zc3anonymousza32402ze3z83_1532;} } } } } } } 
}



/* _list->u16vector */
obj_t BGl__listzd2ze3u16vectorz31zz__srfi4z00(obj_t BgL_envz00_2897, obj_t BgL_xz00_2898)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6180;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6181;
if(
PAIRP(BgL_xz00_2898))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6181 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6181 = 
NULLP(BgL_xz00_2898)
; } 
if(BgL_testz00_6181)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6180 = BgL_xz00_2898
; }  else 
{ 
obj_t BgL_auxz00_6185;
BgL_auxz00_6185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3230z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2898); 
FAILURE(BgL_auxz00_6185,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_6180);} } 
}



/* list->s32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t BgL_xz00_137)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1538;
BgL_lenz00_1538 = 
bgl_list_length(BgL_xz00_137); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1539;
BgL_vecz00_1539 = 
BGL_ALLOC_S32VECTOR(BgL_lenz00_1538); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1541;obj_t BgL_lz00_1542;
BgL_iz00_1541 = ((long)0); 
BgL_lz00_1542 = BgL_xz00_137; 
BgL_zc3anonymousza32407ze3z83_1543:
if(
(BgL_iz00_1541==BgL_lenz00_1538))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1539;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2409z00_1545;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2518;
if(
PAIRP(BgL_lz00_1542))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2518 = BgL_lz00_1542; }  else 
{ 
obj_t BgL_auxz00_6196;
BgL_auxz00_6196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1542); 
FAILURE(BgL_auxz00_6196,BFALSE,BFALSE);} 
BgL_arg2409z00_1545 = 
CAR(BgL_pairz00_2518); } 
{ /* Llib/srfi4.scm 641 */
long BgL_auxz00_6201;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6202;
if(
INTEGERP(BgL_arg2409z00_1545))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6202 = BgL_arg2409z00_1545
; }  else 
{ 
obj_t BgL_auxz00_6205;
BgL_auxz00_6205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3094z00zz__srfi4z00, BgL_arg2409z00_1545); 
FAILURE(BgL_auxz00_6205,BFALSE,BFALSE);} 
BgL_auxz00_6201 = 
(long)CINT(BgL_auxz00_6202); } 
BGL_S32VSET(BgL_vecz00_1539, BgL_iz00_1541, BgL_auxz00_6201); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6213;long BgL_iz00_6211;
BgL_iz00_6211 = 
(BgL_iz00_1541+((long)1)); 
BgL_lz00_6213 = 
CDR(BgL_lz00_1542); 
BgL_lz00_1542 = BgL_lz00_6213; 
BgL_iz00_1541 = BgL_iz00_6211; 
goto BgL_zc3anonymousza32407ze3z83_1543;} } } } } } } 
}



/* _list->s32vector */
obj_t BGl__listzd2ze3s32vectorz31zz__srfi4z00(obj_t BgL_envz00_2899, obj_t BgL_xz00_2900)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6215;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6216;
if(
PAIRP(BgL_xz00_2900))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6216 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6216 = 
NULLP(BgL_xz00_2900)
; } 
if(BgL_testz00_6216)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6215 = BgL_xz00_2900
; }  else 
{ 
obj_t BgL_auxz00_6220;
BgL_auxz00_6220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3231z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2900); 
FAILURE(BgL_auxz00_6220,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_6215);} } 
}



/* list->u32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t BgL_xz00_138)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1549;
BgL_lenz00_1549 = 
bgl_list_length(BgL_xz00_138); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1550;
BgL_vecz00_1550 = 
BGL_ALLOC_U32VECTOR(BgL_lenz00_1549); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1552;obj_t BgL_lz00_1553;
BgL_iz00_1552 = ((long)0); 
BgL_lz00_1553 = BgL_xz00_138; 
BgL_zc3anonymousza32412ze3z83_1554:
if(
(BgL_iz00_1552==BgL_lenz00_1549))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1550;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2414z00_1556;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2524;
if(
PAIRP(BgL_lz00_1553))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2524 = BgL_lz00_1553; }  else 
{ 
obj_t BgL_auxz00_6231;
BgL_auxz00_6231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1553); 
FAILURE(BgL_auxz00_6231,BFALSE,BFALSE);} 
BgL_arg2414z00_1556 = 
CAR(BgL_pairz00_2524); } 
{ /* Llib/srfi4.scm 641 */
unsigned long BgL_auxz00_6236;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6237;
if(
INTEGERP(BgL_arg2414z00_1556))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6237 = BgL_arg2414z00_1556
; }  else 
{ 
obj_t BgL_auxz00_6240;
BgL_auxz00_6240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3115z00zz__srfi4z00, BgL_arg2414z00_1556); 
FAILURE(BgL_auxz00_6240,BFALSE,BFALSE);} 
BgL_auxz00_6236 = 
(unsigned long)CINT(BgL_auxz00_6237); } 
BGL_U32VSET(BgL_vecz00_1550, BgL_iz00_1552, BgL_auxz00_6236); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6248;long BgL_iz00_6246;
BgL_iz00_6246 = 
(BgL_iz00_1552+((long)1)); 
BgL_lz00_6248 = 
CDR(BgL_lz00_1553); 
BgL_lz00_1553 = BgL_lz00_6248; 
BgL_iz00_1552 = BgL_iz00_6246; 
goto BgL_zc3anonymousza32412ze3z83_1554;} } } } } } } 
}



/* _list->u32vector */
obj_t BGl__listzd2ze3u32vectorz31zz__srfi4z00(obj_t BgL_envz00_2901, obj_t BgL_xz00_2902)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6250;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6251;
if(
PAIRP(BgL_xz00_2902))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6251 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6251 = 
NULLP(BgL_xz00_2902)
; } 
if(BgL_testz00_6251)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6250 = BgL_xz00_2902
; }  else 
{ 
obj_t BgL_auxz00_6255;
BgL_auxz00_6255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3232z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2902); 
FAILURE(BgL_auxz00_6255,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_6250);} } 
}



/* list->s64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t BgL_xz00_139)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1560;
BgL_lenz00_1560 = 
bgl_list_length(BgL_xz00_139); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1561;
BgL_vecz00_1561 = 
BGL_ALLOC_S64VECTOR(BgL_lenz00_1560); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1563;obj_t BgL_lz00_1564;
BgL_iz00_1563 = ((long)0); 
BgL_lz00_1564 = BgL_xz00_139; 
BgL_zc3anonymousza32417ze3z83_1565:
if(
(BgL_iz00_1563==BgL_lenz00_1560))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1561;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2419z00_1567;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2530;
if(
PAIRP(BgL_lz00_1564))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2530 = BgL_lz00_1564; }  else 
{ 
obj_t BgL_auxz00_6266;
BgL_auxz00_6266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1564); 
FAILURE(BgL_auxz00_6266,BFALSE,BFALSE);} 
BgL_arg2419z00_1567 = 
CAR(BgL_pairz00_2530); } 
{ /* Llib/srfi4.scm 641 */
BGL_LONGLONG_T BgL_auxz00_6271;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6272;
if(
LLONGP(BgL_arg2419z00_1567))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6272 = BgL_arg2419z00_1567
; }  else 
{ 
obj_t BgL_auxz00_6275;
BgL_auxz00_6275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3120z00zz__srfi4z00, BgL_arg2419z00_1567); 
FAILURE(BgL_auxz00_6275,BFALSE,BFALSE);} 
BgL_auxz00_6271 = 
BLLONG_TO_LLONG(BgL_auxz00_6272); } 
BGL_S64VSET(BgL_vecz00_1561, BgL_iz00_1563, BgL_auxz00_6271); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6283;long BgL_iz00_6281;
BgL_iz00_6281 = 
(BgL_iz00_1563+((long)1)); 
BgL_lz00_6283 = 
CDR(BgL_lz00_1564); 
BgL_lz00_1564 = BgL_lz00_6283; 
BgL_iz00_1563 = BgL_iz00_6281; 
goto BgL_zc3anonymousza32417ze3z83_1565;} } } } } } } 
}



/* _list->s64vector */
obj_t BGl__listzd2ze3s64vectorz31zz__srfi4z00(obj_t BgL_envz00_2903, obj_t BgL_xz00_2904)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6285;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6286;
if(
PAIRP(BgL_xz00_2904))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6286 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6286 = 
NULLP(BgL_xz00_2904)
; } 
if(BgL_testz00_6286)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6285 = BgL_xz00_2904
; }  else 
{ 
obj_t BgL_auxz00_6290;
BgL_auxz00_6290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3233z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2904); 
FAILURE(BgL_auxz00_6290,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_6285);} } 
}



/* list->u64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t BgL_xz00_140)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1571;
BgL_lenz00_1571 = 
bgl_list_length(BgL_xz00_140); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1572;
BgL_vecz00_1572 = 
BGL_ALLOC_U64VECTOR(BgL_lenz00_1571); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1574;obj_t BgL_lz00_1575;
BgL_iz00_1574 = ((long)0); 
BgL_lz00_1575 = BgL_xz00_140; 
BgL_zc3anonymousza32422ze3z83_1576:
if(
(BgL_iz00_1574==BgL_lenz00_1571))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1572;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2424z00_1578;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2536;
if(
PAIRP(BgL_lz00_1575))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2536 = BgL_lz00_1575; }  else 
{ 
obj_t BgL_auxz00_6301;
BgL_auxz00_6301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1575); 
FAILURE(BgL_auxz00_6301,BFALSE,BFALSE);} 
BgL_arg2424z00_1578 = 
CAR(BgL_pairz00_2536); } 
{ /* Llib/srfi4.scm 641 */
unsigned BGL_LONGLONG_T BgL_auxz00_6306;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6307;
if(
LLONGP(BgL_arg2424z00_1578))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6307 = BgL_arg2424z00_1578
; }  else 
{ 
obj_t BgL_auxz00_6310;
BgL_auxz00_6310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3124z00zz__srfi4z00, BgL_arg2424z00_1578); 
FAILURE(BgL_auxz00_6310,BFALSE,BFALSE);} 
BgL_auxz00_6306 = 
BLLONG_TO_LLONG(BgL_auxz00_6307); } 
BGL_U64VSET(BgL_vecz00_1572, BgL_iz00_1574, BgL_auxz00_6306); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6318;long BgL_iz00_6316;
BgL_iz00_6316 = 
(BgL_iz00_1574+((long)1)); 
BgL_lz00_6318 = 
CDR(BgL_lz00_1575); 
BgL_lz00_1575 = BgL_lz00_6318; 
BgL_iz00_1574 = BgL_iz00_6316; 
goto BgL_zc3anonymousza32422ze3z83_1576;} } } } } } } 
}



/* _list->u64vector */
obj_t BGl__listzd2ze3u64vectorz31zz__srfi4z00(obj_t BgL_envz00_2905, obj_t BgL_xz00_2906)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6320;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6321;
if(
PAIRP(BgL_xz00_2906))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6321 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6321 = 
NULLP(BgL_xz00_2906)
; } 
if(BgL_testz00_6321)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6320 = BgL_xz00_2906
; }  else 
{ 
obj_t BgL_auxz00_6325;
BgL_auxz00_6325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3234z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2906); 
FAILURE(BgL_auxz00_6325,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_6320);} } 
}



/* list->f32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t BgL_xz00_141)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1582;
BgL_lenz00_1582 = 
bgl_list_length(BgL_xz00_141); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1583;
BgL_vecz00_1583 = 
BGL_ALLOC_F32VECTOR(BgL_lenz00_1582); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1585;obj_t BgL_lz00_1586;
BgL_iz00_1585 = ((long)0); 
BgL_lz00_1586 = BgL_xz00_141; 
BgL_zc3anonymousza32427ze3z83_1587:
if(
(BgL_iz00_1585==BgL_lenz00_1582))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1583;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2429z00_1589;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2542;
if(
PAIRP(BgL_lz00_1586))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2542 = BgL_lz00_1586; }  else 
{ 
obj_t BgL_auxz00_6336;
BgL_auxz00_6336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1586); 
FAILURE(BgL_auxz00_6336,BFALSE,BFALSE);} 
BgL_arg2429z00_1589 = 
CAR(BgL_pairz00_2542); } 
{ /* Llib/srfi4.scm 641 */
float BgL_auxz00_6341;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6342;
if(
REALP(BgL_arg2429z00_1589))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6342 = BgL_arg2429z00_1589
; }  else 
{ 
obj_t BgL_auxz00_6345;
BgL_auxz00_6345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3129z00zz__srfi4z00, BgL_arg2429z00_1589); 
FAILURE(BgL_auxz00_6345,BFALSE,BFALSE);} 
BgL_auxz00_6341 = 
REAL_TO_FLOAT(BgL_auxz00_6342); } 
BGL_F32VSET(BgL_vecz00_1583, BgL_iz00_1585, BgL_auxz00_6341); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6353;long BgL_iz00_6351;
BgL_iz00_6351 = 
(BgL_iz00_1585+((long)1)); 
BgL_lz00_6353 = 
CDR(BgL_lz00_1586); 
BgL_lz00_1586 = BgL_lz00_6353; 
BgL_iz00_1585 = BgL_iz00_6351; 
goto BgL_zc3anonymousza32427ze3z83_1587;} } } } } } } 
}



/* _list->f32vector */
obj_t BGl__listzd2ze3f32vectorz31zz__srfi4z00(obj_t BgL_envz00_2907, obj_t BgL_xz00_2908)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6355;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6356;
if(
PAIRP(BgL_xz00_2908))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6356 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6356 = 
NULLP(BgL_xz00_2908)
; } 
if(BgL_testz00_6356)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6355 = BgL_xz00_2908
; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3235z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2908); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_6355);} } 
}



/* list->f64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t BgL_xz00_142)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
long BgL_lenz00_1593;
BgL_lenz00_1593 = 
bgl_list_length(BgL_xz00_142); 
{ /* Llib/srfi4.scm 641 */
obj_t BgL_vecz00_1594;
BgL_vecz00_1594 = 
BGL_ALLOC_F64VECTOR(BgL_lenz00_1593); 
{ /* Llib/srfi4.scm 641 */

{ 
long BgL_iz00_1596;obj_t BgL_lz00_1597;
BgL_iz00_1596 = ((long)0); 
BgL_lz00_1597 = BgL_xz00_142; 
BgL_zc3anonymousza32432ze3z83_1598:
if(
(BgL_iz00_1596==BgL_lenz00_1593))
{ /* Llib/srfi4.scm 641 */
return BgL_vecz00_1594;}  else 
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_arg2434z00_1600;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_pairz00_2548;
if(
PAIRP(BgL_lz00_1597))
{ /* Llib/srfi4.scm 641 */
BgL_pairz00_2548 = BgL_lz00_1597; }  else 
{ 
obj_t BgL_auxz00_6371;
BgL_auxz00_6371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3226z00zz__srfi4z00, BgL_lz00_1597); 
FAILURE(BgL_auxz00_6371,BFALSE,BFALSE);} 
BgL_arg2434z00_1600 = 
CAR(BgL_pairz00_2548); } 
{ /* Llib/srfi4.scm 641 */
double BgL_auxz00_6376;
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6377;
if(
REALP(BgL_arg2434z00_1600))
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6377 = BgL_arg2434z00_1600
; }  else 
{ 
obj_t BgL_auxz00_6380;
BgL_auxz00_6380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3095z00zz__srfi4z00, BGl_string3133z00zz__srfi4z00, BgL_arg2434z00_1600); 
FAILURE(BgL_auxz00_6380,BFALSE,BFALSE);} 
BgL_auxz00_6376 = 
REAL_TO_DOUBLE(BgL_auxz00_6377); } 
BGL_F64VSET(BgL_vecz00_1594, BgL_iz00_1596, BgL_auxz00_6376); } BUNSPEC; } 
{ 
obj_t BgL_lz00_6388;long BgL_iz00_6386;
BgL_iz00_6386 = 
(BgL_iz00_1596+((long)1)); 
BgL_lz00_6388 = 
CDR(BgL_lz00_1597); 
BgL_lz00_1597 = BgL_lz00_6388; 
BgL_iz00_1596 = BgL_iz00_6386; 
goto BgL_zc3anonymousza32432ze3z83_1598;} } } } } } } 
}



/* _list->f64vector */
obj_t BGl__listzd2ze3f64vectorz31zz__srfi4z00(obj_t BgL_envz00_2909, obj_t BgL_xz00_2910)
{ AN_OBJECT;
{ /* Llib/srfi4.scm 641 */
{ /* Llib/srfi4.scm 641 */
obj_t BgL_auxz00_6390;
{ /* Llib/srfi4.scm 641 */
bool_t BgL_testz00_6391;
if(
PAIRP(BgL_xz00_2910))
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6391 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 641 */
BgL_testz00_6391 = 
NULLP(BgL_xz00_2910)
; } 
if(BgL_testz00_6391)
{ /* Llib/srfi4.scm 641 */
BgL_auxz00_6390 = BgL_xz00_2910
; }  else 
{ 
obj_t BgL_auxz00_6395;
BgL_auxz00_6395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3068z00zz__srfi4z00, 
BINT(((long)24808)), BGl_string3236z00zz__srfi4z00, BGl_string3089z00zz__srfi4z00, BgL_xz00_2910); 
FAILURE(BgL_auxz00_6395,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_6390);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__srfi4z00()
{ AN_OBJECT;
{ /* Llib/srfi4.scm 15 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__srfi4z00()
{ AN_OBJECT;
{ /* Llib/srfi4.scm 15 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00()
{ AN_OBJECT;
{ /* Llib/srfi4.scm 15 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3237z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)81619416), 
BSTRING_TO_STRING(BGl_string3237z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)32372471), 
BSTRING_TO_STRING(BGl_string3237z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3237z00zz__srfi4z00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)504082187), 
BSTRING_TO_STRING(BGl_string3237z00zz__srfi4z00));} 
}

#ifdef __cplusplus
}
#endif
