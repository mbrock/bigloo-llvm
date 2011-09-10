/*===========================================================================*/
/*   (Ieee/string.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/string.scm -indent -o objs/obj_s/Ieee/string.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3691z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t, unsigned char);
extern obj_t c_substring(obj_t, long, long);
static obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
extern bool_t bigloo_strncmp_ci(obj_t, obj_t, long);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, long, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzc3zf3z30zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl__stringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, unsigned char);
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl__stringzd2cutzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringze3zf3z10zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern bool_t bigloo_strncmp_ci_at(obj_t, obj_t, long, long);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2refzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2copyzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t make_string_sans_fill(long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, long);
static obj_t BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t, obj_t);
extern bool_t string_ge(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL int BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, long, obj_t);
extern bool_t string_gt(obj_t, obj_t);
static obj_t BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
static obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long, obj_t);
extern obj_t blit_string(obj_t, long, obj_t, long, long);
extern bool_t string_le(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern bool_t string_lt(obj_t, obj_t);
static obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t string_for_read(obj_t);
extern bool_t strcicmp(obj_t, obj_t);
static obj_t BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t, obj_t, bool_t);
static obj_t BGl__substringzd2urzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
extern bool_t bigloo_strcmp_ci_at(obj_t, obj_t, long);
extern obj_t bgl_escape_scheme_string(char *, long, long);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
extern obj_t bgl_escape_C_string(char *, long, long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t, long, obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, long);
static obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t, long, unsigned char);
extern bool_t bigloo_strncmp_at(obj_t, obj_t, long, long);
BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t, unsigned char);
static obj_t BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl__listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t, int, long);
BGL_EXPORTED_DECL obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t, int);
static obj_t BGl__stringz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3530z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
static obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3535z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t, long);
static obj_t BGl_symbol3548z00zz__r4_strings_6_7z00 = BUNSPEC;
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3556z00zz__r4_strings_6_7z00 = BUNSPEC;
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3560z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol3601z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3593z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3603z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3599z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3613z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__substringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t, long, obj_t, long);
static obj_t BGl__stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3618z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
extern bool_t string_cige(obj_t, obj_t);
static obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol3622z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3625z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3628z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3632z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t string_cigt(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3643z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3646z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3648z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3651z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3653z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3656z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3658z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3661z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3663z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3666z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol3668z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL unsigned char BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, long);
static obj_t BGl_symbol3671z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t string_cile(obj_t, obj_t);
static obj_t BGl_symbol3673z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3681z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
static obj_t BGl_symbol3683z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
static obj_t BGl__stringzd2appendzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol3686z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_list3598z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t string_cilt(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2aszd2readzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2asza7d2r3705z00, BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2containszd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2contai3706za7, opt_generic_entry, BGl__stringzd2containszd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3stringzd2envze3zz__r4_strings_6_7z00, BgL_bgl__listza7d2za7e3strin3707z00, BGl__listzd2ze3stringz31zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2compare3zd2cizd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2compar3708za7, BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2downcasezd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2downca3709za7, BGl__stringzd2downcasezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix3710za7, opt_generic_entry, BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2internzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2hexza7d23711z00, BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2shrinkz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2shrink3712za7, BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2naturalzd2compare3zd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2natura3713za7, BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2setz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2setza7123714z00, BGl__stringzd2setz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2cizf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix3715za7, opt_generic_entry, BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00, BgL_bgl__stringza7d3za7f3za7203716za7, BGl__stringzd3zf3z20zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00, BgL_bgl__substringza7d2ciza73717z00, BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizc3zf3zd2envz30zz__r4_strings_6_7z00, BgL_bgl__stringza7d2ciza7c3za73718za7, BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2lengthzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix3719za7, opt_generic_entry, BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2refzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2refza7d23720z00, BGl__stringzd2refzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2skipzd2rightzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2skipza7d3721z00, opt_generic_entry, BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2forzd2readzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2forza7d23722z00, BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_escapezd2Czd2stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__escapeza7d2cza7d2st3723z00, BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2capitaliza7ezd2envza7zz__r4_strings_6_7z00, BgL_bgl__stringza7d2capita3724za7, BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2naturalzd2compare3zd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2natura3725za7, BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_blitzd2stringzd2urz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl__blitza7d2stringza7d3726z00, BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2setzd2urz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl__stringza7d2setza7d23727z00, BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2splitzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2splitza73728z00, va_generic_entry, BGl__stringzd2splitzd2zz__r4_strings_6_7z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_emptyzd2stringzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__emptyza7d2stringza73729z00, BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2upcasez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2upcase3730za7, BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cutzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2cutza7d23731z00, va_generic_entry, BGl__stringzd2cutzd2zz__r4_strings_6_7z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2copyzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2copyza7d3732z00, BGl__stringzd2copyzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_blitzd2stringz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__blitza7d2stringza713733z00, BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2fillz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2fillza713734z00, BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2replacezd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2replac3735za7, BGl__stringzd2replacezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd3zf3zd2envzf2zz__r4_strings_6_7z00, BgL_bgl__substringza7d3za7f33736z00, BGl__substringzd3zf3z20zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringze3zf3zd2envzc2zz__r4_strings_6_7z00, BgL_bgl__stringza7e3za7f3za7103737za7, BGl__stringze3zf3z10zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2compare3zd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2compar3738za7, BGl__stringzd2compare3zd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2capitaliza7ez12zd2envzb5zz__r4_strings_6_7z00, BgL_bgl__stringza7d2capita3739za7, BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00, BgL_bgl__stringza7d2ciza7d3za73740za7, BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_escapezd2schemezd2stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__escapeza7d2scheme3741za7, BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2upcasezd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2upcase3742za7, BGl__stringzd2upcasezd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix3743za7, opt_generic_entry, BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2length3744za7, BGl__stringzd2lengthzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3listzd2envze3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2za7e3lis3745z00, BGl__stringzd2ze3listz31zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2deletezd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2delete3746za7, opt_generic_entry, BGl__stringzd2deletezd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringze3zd3zf3zd2envz11zz__r4_strings_6_7z00, BgL_bgl__stringza7e3za7d3za7f33747za7, BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2atzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__substringza7d2atza73748z00, opt_generic_entry, BGl__substringzd2atzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix3749za7, opt_generic_entry, BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2replacez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2replac3750za7, BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3511z00zz__r4_strings_6_7z00, BgL_bgl_string3511za700za7za7_3751za7, "/tmp/bigloo/runtime/Ieee/string.scm", 35 );
DEFINE_STRING( BGl_string3512z00zz__r4_strings_6_7z00, BgL_bgl_string3512za700za7za7_3752za7, "_string-null?", 13 );
DEFINE_STRING( BGl_string3513z00zz__r4_strings_6_7z00, BgL_bgl_string3513za700za7za7_3753za7, "bstring", 7 );
DEFINE_STRING( BGl_string3514z00zz__r4_strings_6_7z00, BgL_bgl_string3514za700za7za7_3754za7, "make-string", 11 );
DEFINE_STRING( BGl_string3515z00zz__r4_strings_6_7z00, BgL_bgl_string3515za700za7za7_3755za7, "pair", 4 );
DEFINE_STRING( BGl_string3516z00zz__r4_strings_6_7z00, BgL_bgl_string3516za700za7za7_3756za7, "uchar", 5 );
DEFINE_STRING( BGl_string3517z00zz__r4_strings_6_7z00, BgL_bgl_string3517za700za7za7_3757za7, "_make-string", 12 );
DEFINE_STRING( BGl_string3518z00zz__r4_strings_6_7z00, BgL_bgl_string3518za700za7za7_3758za7, "long", 4 );
DEFINE_STRING( BGl_string3519z00zz__r4_strings_6_7z00, BgL_bgl_string3519za700za7za7_3759za7, "string", 6 );
DEFINE_STRING( BGl_string3520z00zz__r4_strings_6_7z00, BgL_bgl_string3520za700za7za7_3760za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3521z00zz__r4_strings_6_7z00, BgL_bgl_string3521za700za7za7_3761za7, "_string-length", 14 );
DEFINE_STRING( BGl_string3522z00zz__r4_strings_6_7z00, BgL_bgl_string3522za700za7za7_3762za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3523z00zz__r4_strings_6_7z00, BgL_bgl_string3523za700za7za7_3763za7, "_string-ref", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzc3zd3zf3zd2envz31zz__r4_strings_6_7z00, BgL_bgl__stringza7c3za7d3za7f33764za7, BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3524z00zz__r4_strings_6_7z00, BgL_bgl_string3524za700za7za7_3765za7, "string-set!", 11 );
DEFINE_STRING( BGl_string3525z00zz__r4_strings_6_7z00, BgL_bgl_string3525za700za7za7_3766za7, "_string-set!", 12 );
DEFINE_STRING( BGl_string3526z00zz__r4_strings_6_7z00, BgL_bgl_string3526za700za7za7_3767za7, "_string-ref-ur", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2stringzd2envz00zz__r4_strings_6_7z00, BgL_bgl__makeza7d2stringza7d3768z00, va_generic_entry, BGl__makezd2stringzd2zz__r4_strings_6_7z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3527z00zz__r4_strings_6_7z00, BgL_bgl_string3527za700za7za7_3769za7, "_string-set-ur!", 15 );
DEFINE_STRING( BGl_string3528z00zz__r4_strings_6_7z00, BgL_bgl_string3528za700za7za7_3770za7, "_string=?", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2containszd2cizd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2contai3771za7, opt_generic_entry, BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3529z00zz__r4_strings_6_7z00, BgL_bgl_string3529za700za7za7_3772za7, "_substring=?", 12 );
DEFINE_STRING( BGl_string3531z00zz__r4_strings_6_7z00, BgL_bgl_string3531za700za7za7_3773za7, "substring-at?", 13 );
DEFINE_STRING( BGl_string3532z00zz__r4_strings_6_7z00, BgL_bgl_string3532za700za7za7_3774za7, "wrong number of arguments: [3..4] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2indexzd2rightzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2indexza73775z00, opt_generic_entry, BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3533z00zz__r4_strings_6_7z00, BgL_bgl_string3533za700za7za7_3776za7, "_substring-at?", 14 );
DEFINE_STRING( BGl_string3534z00zz__r4_strings_6_7z00, BgL_bgl_string3534za700za7za7_3777za7, "_substring-ci=?", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2downcasez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl__stringza7d2downca3778za7, BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3536z00zz__r4_strings_6_7z00, BgL_bgl_string3536za700za7za7_3779za7, "substring-ci-at?", 16 );
DEFINE_STRING( BGl_string3537z00zz__r4_strings_6_7z00, BgL_bgl_string3537za700za7za7_3780za7, "_substring-ci-at?", 17 );
DEFINE_STRING( BGl_string3538z00zz__r4_strings_6_7z00, BgL_bgl_string3538za700za7za7_3781za7, "_empty-string?", 14 );
DEFINE_STRING( BGl_string3539z00zz__r4_strings_6_7z00, BgL_bgl_string3539za700za7za7_3782za7, "_string-ci=?", 12 );
DEFINE_STRING( BGl_string3540z00zz__r4_strings_6_7z00, BgL_bgl_string3540za700za7za7_3783za7, "_string<?", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__stringza7f3za7f3za7za7_3784z00, BGl__stringzf3zf3zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3541z00zz__r4_strings_6_7z00, BgL_bgl_string3541za700za7za7_3785za7, "_string>?", 9 );
DEFINE_STRING( BGl_string3542z00zz__r4_strings_6_7z00, BgL_bgl_string3542za700za7za7_3786za7, "_string<=?", 10 );
DEFINE_STRING( BGl_string3543z00zz__r4_strings_6_7z00, BgL_bgl_string3543za700za7za7_3787za7, "_string>=?", 10 );
DEFINE_STRING( BGl_string3544z00zz__r4_strings_6_7z00, BgL_bgl_string3544za700za7za7_3788za7, "_string-ci<?", 12 );
DEFINE_STRING( BGl_string3545z00zz__r4_strings_6_7z00, BgL_bgl_string3545za700za7za7_3789za7, "_string-ci>?", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2skipzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2skipza7d3790z00, opt_generic_entry, BGl__stringzd2skipzd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3546z00zz__r4_strings_6_7z00, BgL_bgl_string3546za700za7za7_3791za7, "_string-ci<=?", 13 );
DEFINE_STRING( BGl_string3547z00zz__r4_strings_6_7z00, BgL_bgl_string3547za700za7za7_3792za7, "_string-ci>=?", 13 );
DEFINE_STRING( BGl_string3549z00zz__r4_strings_6_7z00, BgL_bgl_string3549za700za7za7_3793za7, "substring", 9 );
DEFINE_STRING( BGl_string3550z00zz__r4_strings_6_7z00, BgL_bgl_string3550za700za7za7_3794za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3551z00zz__r4_strings_6_7z00, BgL_bgl_string3551za700za7za7_3795za7, "_substring", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2lengthzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix3796za7, opt_generic_entry, BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3552z00zz__r4_strings_6_7z00, BgL_bgl_string3552za700za7za7_3797za7, "Illegal start index \"", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix3798za7, opt_generic_entry, BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3553z00zz__r4_strings_6_7z00, BgL_bgl_string3553za700za7za7_3799za7, "\"", 1 );
DEFINE_STRING( BGl_string3554z00zz__r4_strings_6_7z00, BgL_bgl_string3554za700za7za7_3800za7, "Illegal end index \"", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2cizd2atzf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__substringza7d2ciza73801z00, opt_generic_entry, BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3555z00zz__r4_strings_6_7z00, BgL_bgl_string3555za700za7za7_3802za7, "_substring-ur", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2append3803za7, va_generic_entry, BGl__stringzd2appendzd2zz__r4_strings_6_7z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3557z00zz__r4_strings_6_7z00, BgL_bgl_string3557za700za7za7_3804za7, "string-contains", 15 );
DEFINE_STRING( BGl_string3558z00zz__r4_strings_6_7z00, BgL_bgl_string3558za700za7za7_3805za7, "_string-contains", 16 );
DEFINE_STRING( BGl_string3559z00zz__r4_strings_6_7z00, BgL_bgl_string3559za700za7za7_3806za7, "int", 3 );
DEFINE_STRING( BGl_string3561z00zz__r4_strings_6_7z00, BgL_bgl_string3561za700za7za7_3807za7, "string-contains-ci", 18 );
DEFINE_STRING( BGl_string3562z00zz__r4_strings_6_7z00, BgL_bgl_string3562za700za7za7_3808za7, "_string-contains-ci", 19 );
DEFINE_STRING( BGl_string3563z00zz__r4_strings_6_7z00, BgL_bgl_string3563za700za7za7_3809za7, "_string-compare3", 16 );
DEFINE_STRING( BGl_string3564z00zz__r4_strings_6_7z00, BgL_bgl_string3564za700za7za7_3810za7, "_string-compare3-ci", 19 );
DEFINE_STRING( BGl_string3565z00zz__r4_strings_6_7z00, BgL_bgl_string3565za700za7za7_3811za7, "", 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2refzd2urzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2refza7d23812z00, BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3566z00zz__r4_strings_6_7z00, BgL_bgl_string3566za700za7za7_3813za7, "string-append", 13 );
DEFINE_STRING( BGl_string3567z00zz__r4_strings_6_7z00, BgL_bgl_string3567za700za7za7_3814za7, "loop", 4 );
DEFINE_STRING( BGl_string3568z00zz__r4_strings_6_7z00, BgL_bgl_string3568za700za7za7_3815za7, "_list->string", 13 );
DEFINE_STRING( BGl_string3569z00zz__r4_strings_6_7z00, BgL_bgl_string3569za700za7za7_3816za7, "string->list", 12 );
DEFINE_STRING( BGl_string3570z00zz__r4_strings_6_7z00, BgL_bgl_string3570za700za7za7_3817za7, "_string->list", 13 );
DEFINE_STRING( BGl_string3571z00zz__r4_strings_6_7z00, BgL_bgl_string3571za700za7za7_3818za7, "_string-copy", 12 );
DEFINE_STRING( BGl_string3572z00zz__r4_strings_6_7z00, BgL_bgl_string3572za700za7za7_3819za7, "_string-fill!", 13 );
DEFINE_STRING( BGl_string3573z00zz__r4_strings_6_7z00, BgL_bgl_string3573za700za7za7_3820za7, "_string-upcase", 14 );
DEFINE_STRING( BGl_string3574z00zz__r4_strings_6_7z00, BgL_bgl_string3574za700za7za7_3821za7, "_string-downcase", 16 );
DEFINE_STRING( BGl_string3575z00zz__r4_strings_6_7z00, BgL_bgl_string3575za700za7za7_3822za7, "_string-upcase!", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2nullzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2nullza7f3823z00, BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3576z00zz__r4_strings_6_7z00, BgL_bgl_string3576za700za7za7_3824za7, "_string-downcase!", 17 );
DEFINE_STRING( BGl_string3577z00zz__r4_strings_6_7z00, BgL_bgl_string3577za700za7za7_3825za7, "_string-capitalize!", 19 );
DEFINE_STRING( BGl_string3578z00zz__r4_strings_6_7z00, BgL_bgl_string3578za700za7za7_3826za7, "_string-capitalize", 18 );
DEFINE_STRING( BGl_string3579z00zz__r4_strings_6_7z00, BgL_bgl_string3579za700za7za7_3827za7, "_string-for-read", 16 );
DEFINE_STRING( BGl_string3580z00zz__r4_strings_6_7z00, BgL_bgl_string3580za700za7za7_3828za7, "_escape-C-string", 16 );
DEFINE_STRING( BGl_string3581z00zz__r4_strings_6_7z00, BgL_bgl_string3581za700za7za7_3829za7, "_escape-scheme-string", 21 );
DEFINE_STRING( BGl_string3582z00zz__r4_strings_6_7z00, BgL_bgl_string3582za700za7za7_3830za7, "_string-as-read", 15 );
DEFINE_STRING( BGl_string3583z00zz__r4_strings_6_7z00, BgL_bgl_string3583za700za7za7_3831za7, "_blit-string-ur!", 16 );
DEFINE_STRING( BGl_string3584z00zz__r4_strings_6_7z00, BgL_bgl_string3584za700za7za7_3832za7, "]", 1 );
DEFINE_STRING( BGl_string3585z00zz__r4_strings_6_7z00, BgL_bgl_string3585za700za7za7_3833za7, "] [dest:", 8 );
DEFINE_STRING( BGl_string3586z00zz__r4_strings_6_7z00, BgL_bgl_string3586za700za7za7_3834za7, "[src:", 5 );
DEFINE_STRING( BGl_string3587z00zz__r4_strings_6_7z00, BgL_bgl_string3587za700za7za7_3835za7, "blit-string!:Index and length out of range", 42 );
DEFINE_STRING( BGl_string3588z00zz__r4_strings_6_7z00, BgL_bgl_string3588za700za7za7_3836za7, "_blit-string!", 13 );
DEFINE_STRING( BGl_string3589z00zz__r4_strings_6_7z00, BgL_bgl_string3589za700za7za7_3837za7, "_string-shrink!", 15 );
DEFINE_STRING( BGl_string3590z00zz__r4_strings_6_7z00, BgL_bgl_string3590za700za7za7_3838za7, "_string-replace", 15 );
DEFINE_STRING( BGl_string3600z00zz__r4_strings_6_7z00, BgL_bgl_string3600za700za7za7_3839za7, "funcall", 7 );
DEFINE_STRING( BGl_string3591z00zz__r4_strings_6_7z00, BgL_bgl_string3591za700za7za7_3840za7, "char", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2externzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2hexza7d23841z00, BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3592z00zz__r4_strings_6_7z00, BgL_bgl_string3592za700za7za7_3842za7, "_string-replace!", 16 );
DEFINE_STRING( BGl_string3602z00zz__r4_strings_6_7z00, BgL_bgl_string3602za700za7za7_3843za7, "pred", 4 );
DEFINE_STRING( BGl_string3594z00zz__r4_strings_6_7z00, BgL_bgl_string3594za700za7za7_3844za7, "string-delete", 13 );
DEFINE_STRING( BGl_string3604z00zz__r4_strings_6_7z00, BgL_bgl_string3604za700za7za7_3845za7, "cc", 2 );
DEFINE_STRING( BGl_string3595z00zz__r4_strings_6_7z00, BgL_bgl_string3595za700za7za7_3846za7, "wrong number of arguments: [2..4] expected, provided", 52 );
DEFINE_STRING( BGl_string3605z00zz__r4_strings_6_7z00, BgL_bgl_string3605za700za7za7_3847za7, "start index out of range", 24 );
DEFINE_STRING( BGl_string3596z00zz__r4_strings_6_7z00, BgL_bgl_string3596za700za7za7_3848za7, "_string-delete", 14 );
DEFINE_STRING( BGl_string3606z00zz__r4_strings_6_7z00, BgL_bgl_string3606za700za7za7_3849za7, "end index out of range", 22 );
DEFINE_STRING( BGl_string3597z00zz__r4_strings_6_7z00, BgL_bgl_string3597za700za7za7_3850za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3607z00zz__r4_strings_6_7z00, BgL_bgl_string3607za700za7za7_3851za7, "Illegal indices", 15 );
DEFINE_STRING( BGl_string3608z00zz__r4_strings_6_7z00, BgL_bgl_string3608za700za7za7_3852za7, "Illegal char/charset/predicate", 30 );
DEFINE_STRING( BGl_string3609z00zz__r4_strings_6_7z00, BgL_bgl_string3609za700za7za7_3853za7, "delim?", 6 );
DEFINE_STRING( BGl_string3610z00zz__r4_strings_6_7z00, BgL_bgl_string3610za700za7za7_3854za7, " \t\n", 3 );
DEFINE_STRING( BGl_string3611z00zz__r4_strings_6_7z00, BgL_bgl_string3611za700za7za7_3855za7, "_string-split", 13 );
DEFINE_STRING( BGl_string3612z00zz__r4_strings_6_7z00, BgL_bgl_string3612za700za7za7_3856za7, "_string-cut", 11 );
DEFINE_STRING( BGl_string3614z00zz__r4_strings_6_7z00, BgL_bgl_string3614za700za7za7_3857za7, "string-index", 12 );
DEFINE_STRING( BGl_string3615z00zz__r4_strings_6_7z00, BgL_bgl_string3615za700za7za7_3858za7, "_string-index", 13 );
DEFINE_STRING( BGl_string3616z00zz__r4_strings_6_7z00, BgL_bgl_string3616za700za7za7_3859za7, "liip", 4 );
DEFINE_STRING( BGl_string3617z00zz__r4_strings_6_7z00, BgL_bgl_string3617za700za7za7_3860za7, "Illegal regset", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2indexzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2indexza73861z00, opt_generic_entry, BGl__stringzd2indexzd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3619z00zz__r4_strings_6_7z00, BgL_bgl_string3619za700za7za7_3862za7, "string-index-right", 18 );
DEFINE_STRING( BGl_string3620z00zz__r4_strings_6_7z00, BgL_bgl_string3620za700za7za7_3863za7, "_string-index-right", 19 );
DEFINE_STRING( BGl_string3621z00zz__r4_strings_6_7z00, BgL_bgl_string3621za700za7za7_3864za7, "index out of bound", 18 );
DEFINE_STRING( BGl_string3623z00zz__r4_strings_6_7z00, BgL_bgl_string3623za700za7za7_3865za7, "string-skip", 11 );
DEFINE_STRING( BGl_string3624z00zz__r4_strings_6_7z00, BgL_bgl_string3624za700za7za7_3866za7, "_string-skip", 12 );
DEFINE_STRING( BGl_string3626z00zz__r4_strings_6_7z00, BgL_bgl_string3626za700za7za7_3867za7, "string-skip-right", 17 );
DEFINE_STRING( BGl_string3627z00zz__r4_strings_6_7z00, BgL_bgl_string3627za700za7za7_3868za7, "_string-skip-right", 18 );
DEFINE_STRING( BGl_string3629z00zz__r4_strings_6_7z00, BgL_bgl_string3629za700za7za7_3869za7, "string-prefix-length::int", 25 );
DEFINE_STRING( BGl_string3630z00zz__r4_strings_6_7z00, BgL_bgl_string3630za700za7za7_3870za7, "wrong number of arguments: [2..6] expected, provided", 52 );
DEFINE_STRING( BGl_string3631z00zz__r4_strings_6_7z00, BgL_bgl_string3631za700za7za7_3871za7, "_string-prefix-length", 21 );
DEFINE_STRING( BGl_string3633z00zz__r4_strings_6_7z00, BgL_bgl_string3633za700za7za7_3872za7, "string-prefix-length", 20 );
DEFINE_STRING( BGl_string3634z00zz__r4_strings_6_7z00, BgL_bgl_string3634za700za7za7_3873za7, "Index negative end index `", 26 );
DEFINE_STRING( BGl_string3635z00zz__r4_strings_6_7z00, BgL_bgl_string3635za700za7za7_3874za7, "end1", 4 );
DEFINE_STRING( BGl_string3636z00zz__r4_strings_6_7z00, BgL_bgl_string3636za700za7za7_3875za7, "'", 1 );
DEFINE_STRING( BGl_string3637z00zz__r4_strings_6_7z00, BgL_bgl_string3637za700za7za7_3876za7, "Too large end index `", 21 );
DEFINE_STRING( BGl_string3638z00zz__r4_strings_6_7z00, BgL_bgl_string3638za700za7za7_3877za7, "end2", 4 );
DEFINE_STRING( BGl_string3639z00zz__r4_strings_6_7z00, BgL_bgl_string3639za700za7za7_3878za7, "Index negative start index `", 28 );
DEFINE_STRING( BGl_string3640z00zz__r4_strings_6_7z00, BgL_bgl_string3640za700za7za7_3879za7, "start1", 6 );
DEFINE_STRING( BGl_string3641z00zz__r4_strings_6_7z00, BgL_bgl_string3641za700za7za7_3880za7, "Too large start index `", 23 );
DEFINE_STRING( BGl_string3642z00zz__r4_strings_6_7z00, BgL_bgl_string3642za700za7za7_3881za7, "start2", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzc3zf3zd2envze2zz__r4_strings_6_7z00, BgL_bgl__stringza7c3za7f3za7303882za7, BGl__stringzc3zf3z30zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cize3zd3zf3zd2envzc3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2ciza7e3za73883za7, BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3644z00zz__r4_strings_6_7z00, BgL_bgl_string3644za700za7za7_3884za7, "string-prefix-length-ci::int", 28 );
DEFINE_STRING( BGl_string3645z00zz__r4_strings_6_7z00, BgL_bgl_string3645za700za7za7_3885za7, "_string-prefix-length-ci", 24 );
DEFINE_STRING( BGl_string3647z00zz__r4_strings_6_7z00, BgL_bgl_string3647za700za7za7_3886za7, "string-prefix-length-ci", 23 );
DEFINE_STRING( BGl_string3650z00zz__r4_strings_6_7z00, BgL_bgl_string3650za700za7za7_3887za7, "_string-suffix-length", 21 );
DEFINE_STRING( BGl_string3649z00zz__r4_strings_6_7z00, BgL_bgl_string3649za700za7za7_3888za7, "string-suffix-length::int", 25 );
DEFINE_STRING( BGl_string3652z00zz__r4_strings_6_7z00, BgL_bgl_string3652za700za7za7_3889za7, "string-suffix-length", 20 );
DEFINE_STRING( BGl_string3654z00zz__r4_strings_6_7z00, BgL_bgl_string3654za700za7za7_3890za7, "string-suffix-length-ci::int", 28 );
DEFINE_STRING( BGl_string3655z00zz__r4_strings_6_7z00, BgL_bgl_string3655za700za7za7_3891za7, "_string-suffix-length-ci", 24 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cize3zf3zd2envz10zz__r4_strings_6_7z00, BgL_bgl__stringza7d2ciza7e3za73892za7, BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3657z00zz__r4_strings_6_7z00, BgL_bgl_string3657za700za7za7_3893za7, "string-suffix-length-ci", 23 );
DEFINE_STRING( BGl_string3660z00zz__r4_strings_6_7z00, BgL_bgl_string3660za700za7za7_3894za7, "_string-prefix?", 15 );
DEFINE_STRING( BGl_string3659z00zz__r4_strings_6_7z00, BgL_bgl_string3659za700za7za7_3895za7, "string-prefix?::bool", 20 );
DEFINE_STRING( BGl_string3662z00zz__r4_strings_6_7z00, BgL_bgl_string3662za700za7za7_3896za7, "string-prefix?", 14 );
DEFINE_STRING( BGl_string3664z00zz__r4_strings_6_7z00, BgL_bgl_string3664za700za7za7_3897za7, "string-prefix-ci?::bool", 23 );
DEFINE_STRING( BGl_string3665z00zz__r4_strings_6_7z00, BgL_bgl_string3665za700za7za7_3898za7, "_string-prefix-ci?", 18 );
DEFINE_STRING( BGl_string3667z00zz__r4_strings_6_7z00, BgL_bgl_string3667za700za7za7_3899za7, "string-prefix-ci?", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza700za7za7__r43900za7, va_generic_entry, BGl__stringz00zz__r4_strings_6_7z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3670z00zz__r4_strings_6_7z00, BgL_bgl_string3670za700za7za7_3901za7, "_string-suffix?", 15 );
DEFINE_STRING( BGl_string3669z00zz__r4_strings_6_7z00, BgL_bgl_string3669za700za7za7_3902za7, "string-suffix?::bool", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__substringza700za7za7_3903za7, opt_generic_entry, BGl__substringz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3672z00zz__r4_strings_6_7z00, BgL_bgl_string3672za700za7za7_3904za7, "string-suffix?", 14 );
DEFINE_STRING( BGl_string3674z00zz__r4_strings_6_7z00, BgL_bgl_string3674za700za7za7_3905za7, "string-suffix-ci?::bool", 23 );
DEFINE_STRING( BGl_string3675z00zz__r4_strings_6_7z00, BgL_bgl_string3675za700za7za7_3906za7, "_string-suffix-ci?", 18 );
DEFINE_STRING( BGl_string3676z00zz__r4_strings_6_7z00, BgL_bgl_string3676za700za7za7_3907za7, "string-suffix-ci?", 17 );
DEFINE_STRING( BGl_string3677z00zz__r4_strings_6_7z00, BgL_bgl_string3677za700za7za7_3908za7, "string-natural-compare3", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizc3zd3zf3zd2envze3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2ciza7c3za73909za7, BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3678z00zz__r4_strings_6_7z00, BgL_bgl_string3678za700za7za7_3910za7, "_string-natural-compare3", 24 );
DEFINE_STRING( BGl_string3680z00zz__r4_strings_6_7z00, BgL_bgl_string3680za700za7za7_3911za7, "_string-natural-compare3-ci", 27 );
DEFINE_STRING( BGl_string3679z00zz__r4_strings_6_7z00, BgL_bgl_string3679za700za7za7_3912za7, "string-natural-compare3-ci", 26 );
DEFINE_STRING( BGl_string3682z00zz__r4_strings_6_7z00, BgL_bgl_string3682za700za7za7_3913za7, "an-awful-hack", 13 );
DEFINE_STRING( BGl_string3684z00zz__r4_strings_6_7z00, BgL_bgl_string3684za700za7za7_3914za7, "hex-string->string", 18 );
DEFINE_STRING( BGl_string3685z00zz__r4_strings_6_7z00, BgL_bgl_string3685za700za7za7_3915za7, "Illegal string (illegal character)", 34 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2internz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl__stringza7d2hexza7d23916z00, BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3687z00zz__r4_strings_6_7z00, BgL_bgl_string3687za700za7za7_3917za7, "string-hex", 10 );
DEFINE_STRING( BGl_string3688z00zz__r4_strings_6_7z00, BgL_bgl_string3688za700za7za7_3918za7, "Illegal string (length is odd)", 30 );
DEFINE_STRING( BGl_string3690z00zz__r4_strings_6_7z00, BgL_bgl_string3690za700za7za7_3919za7, "_string-hex-intern", 18 );
DEFINE_STRING( BGl_string3689z00zz__r4_strings_6_7z00, BgL_bgl_string3689za700za7za7_3920za7, "string-hex-intern", 17 );
DEFINE_STRING( BGl_string3692z00zz__r4_strings_6_7z00, BgL_bgl_string3692za700za7za7_3921za7, "string-hex-intern!", 18 );
DEFINE_STRING( BGl_string3693z00zz__r4_strings_6_7z00, BgL_bgl_string3693za700za7za7_3922za7, "_string-hex-intern!", 19 );
DEFINE_STRING( BGl_string3694z00zz__r4_strings_6_7z00, BgL_bgl_string3694za700za7za7_3923za7, "0123456789abcdef", 16 );
DEFINE_STRING( BGl_string3695z00zz__r4_strings_6_7z00, BgL_bgl_string3695za700za7za7_3924za7, "_string-hex-extern", 18 );
DEFINE_STRING( BGl_string3696z00zz__r4_strings_6_7z00, BgL_bgl_string3696za700za7za7_3925za7, "__r4_strings_6_7", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2cizf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix3926za7, opt_generic_entry, BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2urzd2envz00zz__r4_strings_6_7z00, BgL_bgl__substringza7d2urza73927z00, BGl__substringzd2urzd2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long BgL_checksumz00_5498, char * BgL_fromz00_5499)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_strings_6_7z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00()
{ AN_OBJECT;
{ /* Ieee/string.scm 18 */
BGl_symbol3530z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3531z00zz__r4_strings_6_7z00); 
BGl_symbol3535z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3536z00zz__r4_strings_6_7z00); 
BGl_symbol3548z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3549z00zz__r4_strings_6_7z00); 
BGl_symbol3556z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3557z00zz__r4_strings_6_7z00); 
BGl_symbol3560z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3561z00zz__r4_strings_6_7z00); 
BGl_symbol3593z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3594z00zz__r4_strings_6_7z00); 
BGl_symbol3599z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3600z00zz__r4_strings_6_7z00); 
BGl_symbol3601z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3602z00zz__r4_strings_6_7z00); 
BGl_symbol3603z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3604z00zz__r4_strings_6_7z00); 
BGl_list3598z00zz__r4_strings_6_7z00 = 
MAKE_PAIR(BGl_symbol3599z00zz__r4_strings_6_7z00, 
MAKE_PAIR(BGl_symbol3601z00zz__r4_strings_6_7z00, 
MAKE_PAIR(BGl_symbol3601z00zz__r4_strings_6_7z00, 
MAKE_PAIR(BGl_symbol3603z00zz__r4_strings_6_7z00, BNIL)))); 
BGl_symbol3613z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3614z00zz__r4_strings_6_7z00); 
BGl_symbol3618z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3619z00zz__r4_strings_6_7z00); 
BGl_symbol3622z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3623z00zz__r4_strings_6_7z00); 
BGl_symbol3625z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3626z00zz__r4_strings_6_7z00); 
BGl_symbol3628z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3629z00zz__r4_strings_6_7z00); 
BGl_symbol3632z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3633z00zz__r4_strings_6_7z00); 
BGl_symbol3643z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3644z00zz__r4_strings_6_7z00); 
BGl_symbol3646z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3647z00zz__r4_strings_6_7z00); 
BGl_symbol3648z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3649z00zz__r4_strings_6_7z00); 
BGl_symbol3651z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3652z00zz__r4_strings_6_7z00); 
BGl_symbol3653z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3654z00zz__r4_strings_6_7z00); 
BGl_symbol3656z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3657z00zz__r4_strings_6_7z00); 
BGl_symbol3658z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3659z00zz__r4_strings_6_7z00); 
BGl_symbol3661z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3662z00zz__r4_strings_6_7z00); 
BGl_symbol3663z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3664z00zz__r4_strings_6_7z00); 
BGl_symbol3666z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3667z00zz__r4_strings_6_7z00); 
BGl_symbol3668z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3669z00zz__r4_strings_6_7z00); 
BGl_symbol3671z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3672z00zz__r4_strings_6_7z00); 
BGl_symbol3673z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3674z00zz__r4_strings_6_7z00); 
BGl_symbol3681z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3682z00zz__r4_strings_6_7z00); 
BGl_symbol3683z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3684z00zz__r4_strings_6_7z00); 
BGl_symbol3686z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3687z00zz__r4_strings_6_7z00); 
return ( 
BGl_symbol3691z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string3692z00zz__r4_strings_6_7z00), BUNSPEC) ;} 
}



/* string? */
BGL_EXPORTED_DEF bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/string.scm 274 */
return 
STRINGP(BgL_objz00_1);} 
}



/* _string? */
obj_t BGl__stringzf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_3903, obj_t BgL_objz00_3904)
{ AN_OBJECT;
{ /* Ieee/string.scm 274 */
return 
BBOOL(
STRINGP(BgL_objz00_3904));} 
}



/* string-null? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t BgL_strz00_2)
{ AN_OBJECT;
{ /* Ieee/string.scm 280 */
return 
(
STRING_LENGTH(BgL_strz00_2)==((long)0));} 
}



/* _string-null? */
obj_t BGl__stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_3905, obj_t BgL_strz00_3906)
{ AN_OBJECT;
{ /* Ieee/string.scm 280 */
{ /* Ieee/string.scm 281 */
bool_t BgL_auxz00_5546;
{ /* Ieee/string.scm 281 */
obj_t BgL_strz00_5346;
if(
STRINGP(BgL_strz00_3906))
{ /* Ieee/string.scm 281 */
BgL_strz00_5346 = BgL_strz00_3906; }  else 
{ 
obj_t BgL_auxz00_5549;
BgL_auxz00_5549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13393)), BGl_string3512z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_3906); 
FAILURE(BgL_auxz00_5549,BFALSE,BFALSE);} 
BgL_auxz00_5546 = 
(
STRING_LENGTH(BgL_strz00_5346)==((long)0)); } 
return 
BBOOL(BgL_auxz00_5546);} } 
}



/* make-string */
BGL_EXPORTED_DEF obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long BgL_kz00_3, obj_t BgL_charz00_4)
{ AN_OBJECT;
{ /* Ieee/string.scm 286 */
if(
NULLP(BgL_charz00_4))
{ /* Ieee/string.scm 287 */
return 
make_string(BgL_kz00_3, ((unsigned char)' '));}  else 
{ /* Ieee/string.scm 287 */
obj_t BgL_arg1240z00_5347;
{ /* Ieee/string.scm 287 */
obj_t BgL_pairz00_5348;
if(
PAIRP(BgL_charz00_4))
{ /* Ieee/string.scm 287 */
BgL_pairz00_5348 = BgL_charz00_4; }  else 
{ 
obj_t BgL_auxz00_5561;
BgL_auxz00_5561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13681)), BGl_string3514z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_charz00_4); 
FAILURE(BgL_auxz00_5561,BFALSE,BFALSE);} 
BgL_arg1240z00_5347 = 
CAR(BgL_pairz00_5348); } 
{ /* Ieee/string.scm 287 */
unsigned char BgL_auxz00_5566;
{ /* Ieee/string.scm 287 */
obj_t BgL_auxz00_5567;
if(
CHARP(BgL_arg1240z00_5347))
{ /* Ieee/string.scm 287 */
BgL_auxz00_5567 = BgL_arg1240z00_5347
; }  else 
{ 
obj_t BgL_auxz00_5570;
BgL_auxz00_5570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13681)), BGl_string3514z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_5347); 
FAILURE(BgL_auxz00_5570,BFALSE,BFALSE);} 
BgL_auxz00_5566 = 
CCHAR(BgL_auxz00_5567); } 
return 
make_string(BgL_kz00_3, BgL_auxz00_5566);} } } 
}



/* _make-string */
obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3907, obj_t BgL_kz00_3908, obj_t BgL_charz00_3909)
{ AN_OBJECT;
{ /* Ieee/string.scm 286 */
{ /* Ieee/string.scm 287 */
long BgL_kz00_5349;
{ /* Ieee/string.scm 287 */
obj_t BgL_auxz00_5576;
if(
INTEGERP(BgL_kz00_3908))
{ /* Ieee/string.scm 287 */
BgL_auxz00_5576 = BgL_kz00_3908
; }  else 
{ 
obj_t BgL_auxz00_5579;
BgL_auxz00_5579 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13681)), BGl_string3517z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_kz00_3908); 
FAILURE(BgL_auxz00_5579,BFALSE,BFALSE);} 
BgL_kz00_5349 = 
(long)CINT(BgL_auxz00_5576); } 
if(
NULLP(BgL_charz00_3909))
{ /* Ieee/string.scm 287 */
return 
make_string(BgL_kz00_5349, ((unsigned char)' '));}  else 
{ /* Ieee/string.scm 287 */
obj_t BgL_arg1240z00_5351;
{ /* Ieee/string.scm 287 */
obj_t BgL_pairz00_5352;
if(
PAIRP(BgL_charz00_3909))
{ /* Ieee/string.scm 287 */
BgL_pairz00_5352 = BgL_charz00_3909; }  else 
{ 
obj_t BgL_auxz00_5589;
BgL_auxz00_5589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13681)), BGl_string3514z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_charz00_3909); 
FAILURE(BgL_auxz00_5589,BFALSE,BFALSE);} 
BgL_arg1240z00_5351 = 
CAR(BgL_pairz00_5352); } 
{ /* Ieee/string.scm 287 */
unsigned char BgL_auxz00_5594;
{ /* Ieee/string.scm 287 */
obj_t BgL_auxz00_5595;
if(
CHARP(BgL_arg1240z00_5351))
{ /* Ieee/string.scm 287 */
BgL_auxz00_5595 = BgL_arg1240z00_5351
; }  else 
{ 
obj_t BgL_auxz00_5598;
BgL_auxz00_5598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)13681)), BGl_string3514z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_5351); 
FAILURE(BgL_auxz00_5598,BFALSE,BFALSE);} 
BgL_auxz00_5594 = 
CCHAR(BgL_auxz00_5595); } 
return 
make_string(BgL_kz00_5349, BgL_auxz00_5594);} } } } 
}



/* string */
BGL_EXPORTED_DEF obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t BgL_charsz00_5)
{ AN_OBJECT;
{ /* Ieee/string.scm 294 */
{ /* Ieee/string.scm 295 */
obj_t BgL_auxz00_5604;
{ /* Ieee/string.scm 295 */
bool_t BgL_testz00_5605;
if(
PAIRP(BgL_charsz00_5))
{ /* Ieee/string.scm 295 */
BgL_testz00_5605 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 295 */
BgL_testz00_5605 = 
NULLP(BgL_charsz00_5)
; } 
if(BgL_testz00_5605)
{ /* Ieee/string.scm 295 */
BgL_auxz00_5604 = BgL_charsz00_5
; }  else 
{ 
obj_t BgL_auxz00_5609;
BgL_auxz00_5609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14040)), BGl_string3519z00zz__r4_strings_6_7z00, BGl_string3520z00zz__r4_strings_6_7z00, BgL_charsz00_5); 
FAILURE(BgL_auxz00_5609,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5604);} } 
}



/* _string */
obj_t BGl__stringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_3910, obj_t BgL_charsz00_3911)
{ AN_OBJECT;
{ /* Ieee/string.scm 294 */
{ /* Ieee/string.scm 295 */
obj_t BgL_auxz00_5614;
{ /* Ieee/string.scm 295 */
bool_t BgL_testz00_5615;
if(
PAIRP(BgL_charsz00_3911))
{ /* Ieee/string.scm 295 */
BgL_testz00_5615 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 295 */
BgL_testz00_5615 = 
NULLP(BgL_charsz00_3911)
; } 
if(BgL_testz00_5615)
{ /* Ieee/string.scm 295 */
BgL_auxz00_5614 = BgL_charsz00_3911
; }  else 
{ 
obj_t BgL_auxz00_5619;
BgL_auxz00_5619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14040)), BGl_string3519z00zz__r4_strings_6_7z00, BGl_string3520z00zz__r4_strings_6_7z00, BgL_charsz00_3911); 
FAILURE(BgL_auxz00_5619,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_5614);} } 
}



/* string-length */
BGL_EXPORTED_DEF long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_6)
{ AN_OBJECT;
{ /* Ieee/string.scm 300 */
return 
STRING_LENGTH(BgL_stringz00_6);} 
}



/* _string-length */
obj_t BGl__stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3912, obj_t BgL_stringz00_3913)
{ AN_OBJECT;
{ /* Ieee/string.scm 300 */
{ /* Ieee/string.scm 301 */
long BgL_auxz00_5625;
{ /* Ieee/string.scm 301 */
obj_t BgL_stringz00_5364;
if(
STRINGP(BgL_stringz00_3913))
{ /* Ieee/string.scm 301 */
BgL_stringz00_5364 = BgL_stringz00_3913; }  else 
{ 
obj_t BgL_auxz00_5628;
BgL_auxz00_5628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14312)), BGl_string3521z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3913); 
FAILURE(BgL_auxz00_5628,BFALSE,BFALSE);} 
BgL_auxz00_5625 = 
STRING_LENGTH(BgL_stringz00_5364); } 
return 
BINT(BgL_auxz00_5625);} } 
}



/* string-ref */
BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_7, long BgL_kz00_8)
{ AN_OBJECT;
{ /* Ieee/string.scm 306 */
{ /* Ieee/string.scm 307 */
long BgL_l2219z00_5365;
BgL_l2219z00_5365 = 
STRING_LENGTH(BgL_stringz00_7); 
if(
BOUND_CHECK(BgL_kz00_8, BgL_l2219z00_5365))
{ /* Ieee/string.scm 307 */
return 
STRING_REF(BgL_stringz00_7, BgL_kz00_8);}  else 
{ 
obj_t BgL_auxz00_5638;
BgL_auxz00_5638 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14600)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_8), BgL_stringz00_7); 
FAILURE(BgL_auxz00_5638,BFALSE,BFALSE);} } } 
}



/* _string-ref */
obj_t BGl__stringzd2refzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3914, obj_t BgL_stringz00_3915, obj_t BgL_kz00_3916)
{ AN_OBJECT;
{ /* Ieee/string.scm 306 */
{ /* Ieee/string.scm 307 */
unsigned char BgL_auxz00_5643;
{ /* Ieee/string.scm 307 */
unsigned char BgL_res3699z00_5369;
{ /* Ieee/string.scm 307 */
obj_t BgL_stringz00_5366;long BgL_kz00_5367;
if(
STRINGP(BgL_stringz00_3915))
{ /* Ieee/string.scm 307 */
BgL_stringz00_5366 = BgL_stringz00_3915; }  else 
{ 
obj_t BgL_auxz00_5646;
BgL_auxz00_5646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14600)), BGl_string3523z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3915); 
FAILURE(BgL_auxz00_5646,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 307 */
obj_t BgL_auxz00_5650;
if(
INTEGERP(BgL_kz00_3916))
{ /* Ieee/string.scm 307 */
BgL_auxz00_5650 = BgL_kz00_3916
; }  else 
{ 
obj_t BgL_auxz00_5653;
BgL_auxz00_5653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14600)), BGl_string3523z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_kz00_3916); 
FAILURE(BgL_auxz00_5653,BFALSE,BFALSE);} 
BgL_kz00_5367 = 
(long)CINT(BgL_auxz00_5650); } 
{ /* Ieee/string.scm 307 */
long BgL_l2219z00_5368;
BgL_l2219z00_5368 = 
STRING_LENGTH(BgL_stringz00_5366); 
if(
BOUND_CHECK(BgL_kz00_5367, BgL_l2219z00_5368))
{ /* Ieee/string.scm 307 */
BgL_res3699z00_5369 = 
STRING_REF(BgL_stringz00_5366, BgL_kz00_5367); }  else 
{ 
obj_t BgL_auxz00_5662;
BgL_auxz00_5662 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14600)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_5367), BgL_stringz00_5366); 
FAILURE(BgL_auxz00_5662,BFALSE,BFALSE);} } } 
BgL_auxz00_5643 = BgL_res3699z00_5369; } 
return 
BCHAR(BgL_auxz00_5643);} } 
}



/* string-set! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_9, long BgL_kz00_10, unsigned char BgL_charz00_11)
{ AN_OBJECT;
{ /* Ieee/string.scm 312 */
{ /* Ieee/string.scm 313 */
long BgL_l2223z00_5370;
BgL_l2223z00_5370 = 
STRING_LENGTH(BgL_stringz00_9); 
if(
BOUND_CHECK(BgL_kz00_10, BgL_l2223z00_5370))
{ /* Ieee/string.scm 313 */
return 
STRING_SET(BgL_stringz00_9, BgL_kz00_10, BgL_charz00_11);}  else 
{ 
obj_t BgL_auxz00_5672;
BgL_auxz00_5672 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14894)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_10), BgL_stringz00_9); 
FAILURE(BgL_auxz00_5672,BFALSE,BFALSE);} } } 
}



/* _string-set! */
obj_t BGl__stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_3917, obj_t BgL_stringz00_3918, obj_t BgL_kz00_3919, obj_t BgL_charz00_3920)
{ AN_OBJECT;
{ /* Ieee/string.scm 312 */
{ /* Ieee/string.scm 313 */
obj_t BgL_stringz00_5371;long BgL_kz00_5372;unsigned char BgL_charz00_5373;
if(
STRINGP(BgL_stringz00_3918))
{ /* Ieee/string.scm 313 */
BgL_stringz00_5371 = BgL_stringz00_3918; }  else 
{ 
obj_t BgL_auxz00_5679;
BgL_auxz00_5679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14894)), BGl_string3525z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3918); 
FAILURE(BgL_auxz00_5679,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 313 */
obj_t BgL_auxz00_5683;
if(
INTEGERP(BgL_kz00_3919))
{ /* Ieee/string.scm 313 */
BgL_auxz00_5683 = BgL_kz00_3919
; }  else 
{ 
obj_t BgL_auxz00_5686;
BgL_auxz00_5686 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14894)), BGl_string3525z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_kz00_3919); 
FAILURE(BgL_auxz00_5686,BFALSE,BFALSE);} 
BgL_kz00_5372 = 
(long)CINT(BgL_auxz00_5683); } 
{ /* Ieee/string.scm 313 */
obj_t BgL_auxz00_5691;
if(
CHARP(BgL_charz00_3920))
{ /* Ieee/string.scm 313 */
BgL_auxz00_5691 = BgL_charz00_3920
; }  else 
{ 
obj_t BgL_auxz00_5694;
BgL_auxz00_5694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14894)), BGl_string3525z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_charz00_3920); 
FAILURE(BgL_auxz00_5694,BFALSE,BFALSE);} 
BgL_charz00_5373 = 
CCHAR(BgL_auxz00_5691); } 
{ /* Ieee/string.scm 313 */
long BgL_l2223z00_5374;
BgL_l2223z00_5374 = 
STRING_LENGTH(BgL_stringz00_5371); 
if(
BOUND_CHECK(BgL_kz00_5372, BgL_l2223z00_5374))
{ /* Ieee/string.scm 313 */
return 
STRING_SET(BgL_stringz00_5371, BgL_kz00_5372, BgL_charz00_5373);}  else 
{ 
obj_t BgL_auxz00_5703;
BgL_auxz00_5703 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)14894)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_5372), BgL_stringz00_5371); 
FAILURE(BgL_auxz00_5703,BFALSE,BFALSE);} } } } 
}



/* string-ref-ur */
BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_12, long BgL_kz00_13)
{ AN_OBJECT;
{ /* Ieee/string.scm 318 */
{ /* Ieee/string.scm 319 */
long BgL_l2227z00_5375;
BgL_l2227z00_5375 = 
STRING_LENGTH(BgL_stringz00_12); 
if(
BOUND_CHECK(BgL_kz00_13, BgL_l2227z00_5375))
{ /* Ieee/string.scm 319 */
return 
STRING_REF(BgL_stringz00_12, BgL_kz00_13);}  else 
{ 
obj_t BgL_auxz00_5712;
BgL_auxz00_5712 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15190)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_13), BgL_stringz00_12); 
FAILURE(BgL_auxz00_5712,BFALSE,BFALSE);} } } 
}



/* _string-ref-ur */
obj_t BGl__stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_envz00_3921, obj_t BgL_stringz00_3922, obj_t BgL_kz00_3923)
{ AN_OBJECT;
{ /* Ieee/string.scm 318 */
{ /* Ieee/string.scm 319 */
unsigned char BgL_auxz00_5717;
{ /* Ieee/string.scm 319 */
unsigned char BgL_res3700z00_5379;
{ /* Ieee/string.scm 319 */
obj_t BgL_stringz00_5376;long BgL_kz00_5377;
if(
STRINGP(BgL_stringz00_3922))
{ /* Ieee/string.scm 319 */
BgL_stringz00_5376 = BgL_stringz00_3922; }  else 
{ 
obj_t BgL_auxz00_5720;
BgL_auxz00_5720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15190)), BGl_string3526z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3922); 
FAILURE(BgL_auxz00_5720,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 319 */
obj_t BgL_auxz00_5724;
if(
INTEGERP(BgL_kz00_3923))
{ /* Ieee/string.scm 319 */
BgL_auxz00_5724 = BgL_kz00_3923
; }  else 
{ 
obj_t BgL_auxz00_5727;
BgL_auxz00_5727 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15190)), BGl_string3526z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_kz00_3923); 
FAILURE(BgL_auxz00_5727,BFALSE,BFALSE);} 
BgL_kz00_5377 = 
(long)CINT(BgL_auxz00_5724); } 
{ /* Ieee/string.scm 319 */
long BgL_l2227z00_5378;
BgL_l2227z00_5378 = 
STRING_LENGTH(BgL_stringz00_5376); 
if(
BOUND_CHECK(BgL_kz00_5377, BgL_l2227z00_5378))
{ /* Ieee/string.scm 319 */
BgL_res3700z00_5379 = 
STRING_REF(BgL_stringz00_5376, BgL_kz00_5377); }  else 
{ 
obj_t BgL_auxz00_5736;
BgL_auxz00_5736 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15190)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_5377), BgL_stringz00_5376); 
FAILURE(BgL_auxz00_5736,BFALSE,BFALSE);} } } 
BgL_auxz00_5717 = BgL_res3700z00_5379; } 
return 
BCHAR(BgL_auxz00_5717);} } 
}



/* string-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_stringz00_14, long BgL_kz00_15, unsigned char BgL_charz00_16)
{ AN_OBJECT;
{ /* Ieee/string.scm 324 */
{ /* Ieee/string.scm 325 */
long BgL_l2231z00_5380;
BgL_l2231z00_5380 = 
STRING_LENGTH(BgL_stringz00_14); 
if(
BOUND_CHECK(BgL_kz00_15, BgL_l2231z00_5380))
{ /* Ieee/string.scm 325 */
return 
STRING_SET(BgL_stringz00_14, BgL_kz00_15, BgL_charz00_16);}  else 
{ 
obj_t BgL_auxz00_5746;
BgL_auxz00_5746 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15487)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_15), BgL_stringz00_14); 
FAILURE(BgL_auxz00_5746,BFALSE,BFALSE);} } } 
}



/* _string-set-ur! */
obj_t BGl__stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_envz00_3924, obj_t BgL_stringz00_3925, obj_t BgL_kz00_3926, obj_t BgL_charz00_3927)
{ AN_OBJECT;
{ /* Ieee/string.scm 324 */
{ /* Ieee/string.scm 325 */
obj_t BgL_stringz00_5381;long BgL_kz00_5382;unsigned char BgL_charz00_5383;
if(
STRINGP(BgL_stringz00_3925))
{ /* Ieee/string.scm 325 */
BgL_stringz00_5381 = BgL_stringz00_3925; }  else 
{ 
obj_t BgL_auxz00_5753;
BgL_auxz00_5753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15487)), BGl_string3527z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3925); 
FAILURE(BgL_auxz00_5753,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 325 */
obj_t BgL_auxz00_5757;
if(
INTEGERP(BgL_kz00_3926))
{ /* Ieee/string.scm 325 */
BgL_auxz00_5757 = BgL_kz00_3926
; }  else 
{ 
obj_t BgL_auxz00_5760;
BgL_auxz00_5760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15487)), BGl_string3527z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_kz00_3926); 
FAILURE(BgL_auxz00_5760,BFALSE,BFALSE);} 
BgL_kz00_5382 = 
(long)CINT(BgL_auxz00_5757); } 
{ /* Ieee/string.scm 325 */
obj_t BgL_auxz00_5765;
if(
CHARP(BgL_charz00_3927))
{ /* Ieee/string.scm 325 */
BgL_auxz00_5765 = BgL_charz00_3927
; }  else 
{ 
obj_t BgL_auxz00_5768;
BgL_auxz00_5768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15487)), BGl_string3527z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_charz00_3927); 
FAILURE(BgL_auxz00_5768,BFALSE,BFALSE);} 
BgL_charz00_5383 = 
CCHAR(BgL_auxz00_5765); } 
{ /* Ieee/string.scm 325 */
long BgL_l2231z00_5384;
BgL_l2231z00_5384 = 
STRING_LENGTH(BgL_stringz00_5381); 
if(
BOUND_CHECK(BgL_kz00_5382, BgL_l2231z00_5384))
{ /* Ieee/string.scm 325 */
return 
STRING_SET(BgL_stringz00_5381, BgL_kz00_5382, BgL_charz00_5383);}  else 
{ 
obj_t BgL_auxz00_5777;
BgL_auxz00_5777 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15487)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_5382), BgL_stringz00_5381); 
FAILURE(BgL_auxz00_5777,BFALSE,BFALSE);} } } } 
}



/* string=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_string1z00_17, obj_t BgL_string2z00_18)
{ AN_OBJECT;
{ /* Ieee/string.scm 330 */
return 
bigloo_strcmp(BgL_string1z00_17, BgL_string2z00_18);} 
}



/* _string=? */
obj_t BGl__stringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_envz00_3928, obj_t BgL_string1z00_3929, obj_t BgL_string2z00_3930)
{ AN_OBJECT;
{ /* Ieee/string.scm 330 */
{ /* Ieee/string.scm 331 */
bool_t BgL_auxz00_5783;
{ /* Ieee/string.scm 331 */
obj_t BgL_string1z00_5385;obj_t BgL_string2z00_5386;
if(
STRINGP(BgL_string1z00_3929))
{ /* Ieee/string.scm 331 */
BgL_string1z00_5385 = BgL_string1z00_3929; }  else 
{ 
obj_t BgL_auxz00_5786;
BgL_auxz00_5786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15785)), BGl_string3528z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3929); 
FAILURE(BgL_auxz00_5786,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3930))
{ /* Ieee/string.scm 331 */
BgL_string2z00_5386 = BgL_string2z00_3930; }  else 
{ 
obj_t BgL_auxz00_5792;
BgL_auxz00_5792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)15785)), BGl_string3528z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3930); 
FAILURE(BgL_auxz00_5792,BFALSE,BFALSE);} 
BgL_auxz00_5783 = 
bigloo_strcmp(BgL_string1z00_5385, BgL_string2z00_5386); } 
return 
BBOOL(BgL_auxz00_5783);} } 
}



/* substring=? */
BGL_EXPORTED_DEF bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_string1z00_19, obj_t BgL_string2z00_20, long BgL_lenz00_21)
{ AN_OBJECT;
{ /* Ieee/string.scm 336 */
return 
bigloo_strncmp(BgL_string1z00_19, BgL_string2z00_20, BgL_lenz00_21);} 
}



/* _substring=? */
obj_t BGl__substringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_envz00_3931, obj_t BgL_string1z00_3932, obj_t BgL_string2z00_3933, obj_t BgL_lenz00_3934)
{ AN_OBJECT;
{ /* Ieee/string.scm 336 */
{ /* Ieee/string.scm 337 */
bool_t BgL_auxz00_5799;
{ /* Ieee/string.scm 337 */
obj_t BgL_string1z00_5387;obj_t BgL_string2z00_5388;long BgL_lenz00_5389;
if(
STRINGP(BgL_string1z00_3932))
{ /* Ieee/string.scm 337 */
BgL_string1z00_5387 = BgL_string1z00_3932; }  else 
{ 
obj_t BgL_auxz00_5802;
BgL_auxz00_5802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16089)), BGl_string3529z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3932); 
FAILURE(BgL_auxz00_5802,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3933))
{ /* Ieee/string.scm 337 */
BgL_string2z00_5388 = BgL_string2z00_3933; }  else 
{ 
obj_t BgL_auxz00_5808;
BgL_auxz00_5808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16089)), BGl_string3529z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3933); 
FAILURE(BgL_auxz00_5808,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 337 */
obj_t BgL_auxz00_5812;
if(
INTEGERP(BgL_lenz00_3934))
{ /* Ieee/string.scm 337 */
BgL_auxz00_5812 = BgL_lenz00_3934
; }  else 
{ 
obj_t BgL_auxz00_5815;
BgL_auxz00_5815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16089)), BGl_string3529z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_3934); 
FAILURE(BgL_auxz00_5815,BFALSE,BFALSE);} 
BgL_lenz00_5389 = 
(long)CINT(BgL_auxz00_5812); } 
BgL_auxz00_5799 = 
bigloo_strncmp(BgL_string1z00_5387, BgL_string2z00_5388, BgL_lenz00_5389); } 
return 
BBOOL(BgL_auxz00_5799);} } 
}



/* _substring-at? */
obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_27, obj_t BgL_optz00_26)
{ AN_OBJECT;
{ /* Ieee/string.scm 342 */
{ /* Ieee/string.scm 342 */
obj_t BgL_g1155z00_5390;obj_t BgL_g1157z00_5391;obj_t BgL_g1158z00_5392;
BgL_g1155z00_5390 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)0))); 
BgL_g1157z00_5391 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)1))); 
BgL_g1158z00_5392 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)2))); 
{ 

{ /* Ieee/string.scm 342 */
int BgL_aux1160z00_5396;
BgL_aux1160z00_5396 = 
VECTOR_LENGTH(BgL_optz00_26); 
switch( 
(long)(BgL_aux1160z00_5396)) { case ((long)3) : 

{ /* Ieee/string.scm 342 */

{ /* Ieee/string.scm 342 */
obj_t BgL_arg1242z00_5397;obj_t BgL_arg1243z00_5398;obj_t BgL_arg1244z00_5399;
BgL_arg1242z00_5397 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)0))); 
BgL_arg1243z00_5398 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)1))); 
BgL_arg1244z00_5399 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)2))); 
{ /* Ieee/string.scm 342 */
bool_t BgL_res2200z00_5400;
{ /* Ieee/string.scm 342 */
obj_t BgL_string1z00_5401;obj_t BgL_string2z00_5402;long BgL_offz00_5403;obj_t BgL_lenz00_5404;
if(
STRINGP(BgL_arg1242z00_5397))
{ /* Ieee/string.scm 342 */
BgL_string1z00_5401 = BgL_arg1242z00_5397; }  else 
{ 
obj_t BgL_auxz00_5837;
BgL_auxz00_5837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1242z00_5397); 
FAILURE(BgL_auxz00_5837,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1243z00_5398))
{ /* Ieee/string.scm 342 */
BgL_string2z00_5402 = BgL_arg1243z00_5398; }  else 
{ 
obj_t BgL_auxz00_5843;
BgL_auxz00_5843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1243z00_5398); 
FAILURE(BgL_auxz00_5843,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5847;
if(
INTEGERP(BgL_arg1244z00_5399))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5847 = BgL_arg1244z00_5399
; }  else 
{ 
obj_t BgL_auxz00_5850;
BgL_auxz00_5850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1244z00_5399); 
FAILURE(BgL_auxz00_5850,BFALSE,BFALSE);} 
BgL_offz00_5403 = 
(long)CINT(BgL_auxz00_5847); } 
BgL_lenz00_5404 = 
BINT(((long)-1)); 
{ /* Ieee/string.scm 342 */
bool_t BgL_testz00_5856;
{ /* Ieee/string.scm 342 */
long BgL_n1z00_5405;
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5857;
if(
INTEGERP(BgL_lenz00_5404))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5857 = BgL_lenz00_5404
; }  else 
{ 
obj_t BgL_auxz00_5860;
BgL_auxz00_5860 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5404); 
FAILURE(BgL_auxz00_5860,BFALSE,BFALSE);} 
BgL_n1z00_5405 = 
(long)CINT(BgL_auxz00_5857); } 
BgL_testz00_5856 = 
(BgL_n1z00_5405==((long)-1)); } 
if(BgL_testz00_5856)
{ /* Ieee/string.scm 342 */
BgL_res2200z00_5400 = 
bigloo_strcmp_at(BgL_string1z00_5401, BgL_string2z00_5402, BgL_offz00_5403); }  else 
{ /* Ieee/string.scm 342 */
long BgL_auxz00_5867;
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5868;
if(
INTEGERP(BgL_lenz00_5404))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5868 = BgL_lenz00_5404
; }  else 
{ 
obj_t BgL_auxz00_5871;
BgL_auxz00_5871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5404); 
FAILURE(BgL_auxz00_5871,BFALSE,BFALSE);} 
BgL_auxz00_5867 = 
(long)CINT(BgL_auxz00_5868); } 
BgL_res2200z00_5400 = 
bigloo_strncmp_at(BgL_string1z00_5401, BgL_string2z00_5402, BgL_offz00_5403, BgL_auxz00_5867); } } } 
return 
BBOOL(BgL_res2200z00_5400);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 342 */
obj_t BgL_lenz00_5406;
BgL_lenz00_5406 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)3))); 
{ /* Ieee/string.scm 342 */

{ /* Ieee/string.scm 342 */
obj_t BgL_arg1245z00_5407;obj_t BgL_arg1246z00_5408;obj_t BgL_arg1247z00_5409;
BgL_arg1245z00_5407 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)0))); 
BgL_arg1246z00_5408 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)1))); 
BgL_arg1247z00_5409 = 
VECTOR_REF(BgL_optz00_26,
(int)(((long)2))); 
{ /* Ieee/string.scm 342 */
bool_t BgL_res2201z00_5410;
{ /* Ieee/string.scm 342 */
obj_t BgL_string1z00_5411;obj_t BgL_string2z00_5412;long BgL_offz00_5413;
if(
STRINGP(BgL_arg1245z00_5407))
{ /* Ieee/string.scm 342 */
BgL_string1z00_5411 = BgL_arg1245z00_5407; }  else 
{ 
obj_t BgL_auxz00_5888;
BgL_auxz00_5888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1245z00_5407); 
FAILURE(BgL_auxz00_5888,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1246z00_5408))
{ /* Ieee/string.scm 342 */
BgL_string2z00_5412 = BgL_arg1246z00_5408; }  else 
{ 
obj_t BgL_auxz00_5894;
BgL_auxz00_5894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1246z00_5408); 
FAILURE(BgL_auxz00_5894,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5898;
if(
INTEGERP(BgL_arg1247z00_5409))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5898 = BgL_arg1247z00_5409
; }  else 
{ 
obj_t BgL_auxz00_5901;
BgL_auxz00_5901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1247z00_5409); 
FAILURE(BgL_auxz00_5901,BFALSE,BFALSE);} 
BgL_offz00_5413 = 
(long)CINT(BgL_auxz00_5898); } 
{ /* Ieee/string.scm 342 */
bool_t BgL_testz00_5906;
{ /* Ieee/string.scm 342 */
long BgL_n1z00_5414;
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5907;
if(
INTEGERP(BgL_lenz00_5406))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5907 = BgL_lenz00_5406
; }  else 
{ 
obj_t BgL_auxz00_5910;
BgL_auxz00_5910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5406); 
FAILURE(BgL_auxz00_5910,BFALSE,BFALSE);} 
BgL_n1z00_5414 = 
(long)CINT(BgL_auxz00_5907); } 
BgL_testz00_5906 = 
(BgL_n1z00_5414==((long)-1)); } 
if(BgL_testz00_5906)
{ /* Ieee/string.scm 342 */
BgL_res2201z00_5410 = 
bigloo_strcmp_at(BgL_string1z00_5411, BgL_string2z00_5412, BgL_offz00_5413); }  else 
{ /* Ieee/string.scm 342 */
long BgL_auxz00_5917;
{ /* Ieee/string.scm 342 */
obj_t BgL_auxz00_5918;
if(
INTEGERP(BgL_lenz00_5406))
{ /* Ieee/string.scm 342 */
BgL_auxz00_5918 = BgL_lenz00_5406
; }  else 
{ 
obj_t BgL_auxz00_5921;
BgL_auxz00_5921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16348)), BGl_string3533z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5406); 
FAILURE(BgL_auxz00_5921,BFALSE,BFALSE);} 
BgL_auxz00_5917 = 
(long)CINT(BgL_auxz00_5918); } 
BgL_res2201z00_5410 = 
bigloo_strncmp_at(BgL_string1z00_5411, BgL_string2z00_5412, BgL_offz00_5413, BgL_auxz00_5917); } } } 
return 
BBOOL(BgL_res2201z00_5410);} } } } break;
default: 
{ /* Ieee/string.scm 342 */
obj_t BgL_arg1248z00_5394;int BgL_arg1250z00_5395;
BgL_arg1248z00_5394 = BGl_symbol3530z00zz__r4_strings_6_7z00; 
BgL_arg1250z00_5395 = 
VECTOR_LENGTH(BgL_optz00_26); 
return 
BGl_errorz00zz__errorz00(BgL_arg1248z00_5394, BGl_string3532z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1250z00_5395));} } } } } } 
}



/* substring-at? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_string1z00_22, obj_t BgL_string2z00_23, long BgL_offz00_24, obj_t BgL_lenz00_25)
{ AN_OBJECT;
{ /* Ieee/string.scm 342 */
{ /* Ieee/string.scm 343 */
bool_t BgL_testz00_5933;
{ /* Ieee/string.scm 343 */
long BgL_n1z00_5415;
{ /* Ieee/string.scm 343 */
obj_t BgL_auxz00_5934;
if(
INTEGERP(BgL_lenz00_25))
{ /* Ieee/string.scm 343 */
BgL_auxz00_5934 = BgL_lenz00_25
; }  else 
{ 
obj_t BgL_auxz00_5937;
BgL_auxz00_5937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16431)), BGl_string3531z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_25); 
FAILURE(BgL_auxz00_5937,BFALSE,BFALSE);} 
BgL_n1z00_5415 = 
(long)CINT(BgL_auxz00_5934); } 
BgL_testz00_5933 = 
(BgL_n1z00_5415==((long)-1)); } 
if(BgL_testz00_5933)
{ /* Ieee/string.scm 343 */
return 
bigloo_strcmp_at(BgL_string1z00_22, BgL_string2z00_23, BgL_offz00_24);}  else 
{ /* Ieee/string.scm 343 */
long BgL_auxz00_5944;
{ /* Ieee/string.scm 343 */
obj_t BgL_auxz00_5945;
if(
INTEGERP(BgL_lenz00_25))
{ /* Ieee/string.scm 343 */
BgL_auxz00_5945 = BgL_lenz00_25
; }  else 
{ 
obj_t BgL_auxz00_5948;
BgL_auxz00_5948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16422)), BGl_string3531z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_25); 
FAILURE(BgL_auxz00_5948,BFALSE,BFALSE);} 
BgL_auxz00_5944 = 
(long)CINT(BgL_auxz00_5945); } 
return 
bigloo_strncmp_at(BgL_string1z00_22, BgL_string2z00_23, BgL_offz00_24, BgL_auxz00_5944);} } } 
}



/* substring-ci=? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_string1z00_28, obj_t BgL_string2z00_29, long BgL_lenz00_30)
{ AN_OBJECT;
{ /* Ieee/string.scm 350 */
return 
bigloo_strncmp_ci(BgL_string1z00_28, BgL_string2z00_29, BgL_lenz00_30);} 
}



/* _substring-ci=? */
obj_t BGl__substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_envz00_3935, obj_t BgL_string1z00_3936, obj_t BgL_string2z00_3937, obj_t BgL_lenz00_3938)
{ AN_OBJECT;
{ /* Ieee/string.scm 350 */
{ /* Ieee/string.scm 351 */
bool_t BgL_auxz00_5955;
{ /* Ieee/string.scm 351 */
obj_t BgL_string1z00_5416;obj_t BgL_string2z00_5417;long BgL_lenz00_5418;
if(
STRINGP(BgL_string1z00_3936))
{ /* Ieee/string.scm 351 */
BgL_string1z00_5416 = BgL_string1z00_3936; }  else 
{ 
obj_t BgL_auxz00_5958;
BgL_auxz00_5958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16808)), BGl_string3534z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3936); 
FAILURE(BgL_auxz00_5958,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3937))
{ /* Ieee/string.scm 351 */
BgL_string2z00_5417 = BgL_string2z00_3937; }  else 
{ 
obj_t BgL_auxz00_5964;
BgL_auxz00_5964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16808)), BGl_string3534z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3937); 
FAILURE(BgL_auxz00_5964,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 351 */
obj_t BgL_auxz00_5968;
if(
INTEGERP(BgL_lenz00_3938))
{ /* Ieee/string.scm 351 */
BgL_auxz00_5968 = BgL_lenz00_3938
; }  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)16808)), BGl_string3534z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_3938); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} 
BgL_lenz00_5418 = 
(long)CINT(BgL_auxz00_5968); } 
BgL_auxz00_5955 = 
bigloo_strncmp_ci(BgL_string1z00_5416, BgL_string2z00_5417, BgL_lenz00_5418); } 
return 
BBOOL(BgL_auxz00_5955);} } 
}



/* _substring-ci-at? */
obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_36, obj_t BgL_optz00_35)
{ AN_OBJECT;
{ /* Ieee/string.scm 356 */
{ /* Ieee/string.scm 356 */
obj_t BgL_g1161z00_5419;obj_t BgL_g1162z00_5420;obj_t BgL_g1163z00_5421;
BgL_g1161z00_5419 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
BgL_g1162z00_5420 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)1))); 
BgL_g1163z00_5421 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)2))); 
{ 

{ /* Ieee/string.scm 356 */
int BgL_aux1165z00_5425;
BgL_aux1165z00_5425 = 
VECTOR_LENGTH(BgL_optz00_35); 
switch( 
(long)(BgL_aux1165z00_5425)) { case ((long)3) : 

{ /* Ieee/string.scm 356 */

{ /* Ieee/string.scm 356 */
obj_t BgL_arg1253z00_5426;obj_t BgL_arg1254z00_5427;obj_t BgL_arg1255z00_5428;
BgL_arg1253z00_5426 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
BgL_arg1254z00_5427 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)1))); 
BgL_arg1255z00_5428 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)2))); 
{ /* Ieee/string.scm 356 */
bool_t BgL_res2202z00_5429;
{ /* Ieee/string.scm 356 */
obj_t BgL_string1z00_5430;obj_t BgL_string2z00_5431;long BgL_offz00_5432;obj_t BgL_lenz00_5433;
if(
STRINGP(BgL_arg1253z00_5426))
{ /* Ieee/string.scm 356 */
BgL_string1z00_5430 = BgL_arg1253z00_5426; }  else 
{ 
obj_t BgL_auxz00_5993;
BgL_auxz00_5993 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1253z00_5426); 
FAILURE(BgL_auxz00_5993,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1254z00_5427))
{ /* Ieee/string.scm 356 */
BgL_string2z00_5431 = BgL_arg1254z00_5427; }  else 
{ 
obj_t BgL_auxz00_5999;
BgL_auxz00_5999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1254z00_5427); 
FAILURE(BgL_auxz00_5999,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6003;
if(
INTEGERP(BgL_arg1255z00_5428))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6003 = BgL_arg1255z00_5428
; }  else 
{ 
obj_t BgL_auxz00_6006;
BgL_auxz00_6006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1255z00_5428); 
FAILURE(BgL_auxz00_6006,BFALSE,BFALSE);} 
BgL_offz00_5432 = 
(long)CINT(BgL_auxz00_6003); } 
BgL_lenz00_5433 = 
BINT(((long)-1)); 
{ /* Ieee/string.scm 356 */
bool_t BgL_testz00_6012;
{ /* Ieee/string.scm 356 */
long BgL_n1z00_5434;
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6013;
if(
INTEGERP(BgL_lenz00_5433))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6013 = BgL_lenz00_5433
; }  else 
{ 
obj_t BgL_auxz00_6016;
BgL_auxz00_6016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5433); 
FAILURE(BgL_auxz00_6016,BFALSE,BFALSE);} 
BgL_n1z00_5434 = 
(long)CINT(BgL_auxz00_6013); } 
BgL_testz00_6012 = 
(BgL_n1z00_5434==((long)-1)); } 
if(BgL_testz00_6012)
{ /* Ieee/string.scm 356 */
BgL_res2202z00_5429 = 
bigloo_strcmp_ci_at(BgL_string1z00_5430, BgL_string2z00_5431, BgL_offz00_5432); }  else 
{ /* Ieee/string.scm 356 */
long BgL_auxz00_6023;
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6024;
if(
INTEGERP(BgL_lenz00_5433))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6024 = BgL_lenz00_5433
; }  else 
{ 
obj_t BgL_auxz00_6027;
BgL_auxz00_6027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5433); 
FAILURE(BgL_auxz00_6027,BFALSE,BFALSE);} 
BgL_auxz00_6023 = 
(long)CINT(BgL_auxz00_6024); } 
BgL_res2202z00_5429 = 
bigloo_strncmp_ci_at(BgL_string1z00_5430, BgL_string2z00_5431, BgL_offz00_5432, BgL_auxz00_6023); } } } 
return 
BBOOL(BgL_res2202z00_5429);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 356 */
obj_t BgL_lenz00_5435;
BgL_lenz00_5435 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)3))); 
{ /* Ieee/string.scm 356 */

{ /* Ieee/string.scm 356 */
obj_t BgL_arg1256z00_5436;obj_t BgL_arg1257z00_5437;obj_t BgL_arg1258z00_5438;
BgL_arg1256z00_5436 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)0))); 
BgL_arg1257z00_5437 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)1))); 
BgL_arg1258z00_5438 = 
VECTOR_REF(BgL_optz00_35,
(int)(((long)2))); 
{ /* Ieee/string.scm 356 */
bool_t BgL_res2203z00_5439;
{ /* Ieee/string.scm 356 */
obj_t BgL_string1z00_5440;obj_t BgL_string2z00_5441;long BgL_offz00_5442;
if(
STRINGP(BgL_arg1256z00_5436))
{ /* Ieee/string.scm 356 */
BgL_string1z00_5440 = BgL_arg1256z00_5436; }  else 
{ 
obj_t BgL_auxz00_6044;
BgL_auxz00_6044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1256z00_5436); 
FAILURE(BgL_auxz00_6044,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1257z00_5437))
{ /* Ieee/string.scm 356 */
BgL_string2z00_5441 = BgL_arg1257z00_5437; }  else 
{ 
obj_t BgL_auxz00_6050;
BgL_auxz00_6050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1257z00_5437); 
FAILURE(BgL_auxz00_6050,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6054;
if(
INTEGERP(BgL_arg1258z00_5438))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6054 = BgL_arg1258z00_5438
; }  else 
{ 
obj_t BgL_auxz00_6057;
BgL_auxz00_6057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1258z00_5438); 
FAILURE(BgL_auxz00_6057,BFALSE,BFALSE);} 
BgL_offz00_5442 = 
(long)CINT(BgL_auxz00_6054); } 
{ /* Ieee/string.scm 356 */
bool_t BgL_testz00_6062;
{ /* Ieee/string.scm 356 */
long BgL_n1z00_5443;
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6063;
if(
INTEGERP(BgL_lenz00_5435))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6063 = BgL_lenz00_5435
; }  else 
{ 
obj_t BgL_auxz00_6066;
BgL_auxz00_6066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5435); 
FAILURE(BgL_auxz00_6066,BFALSE,BFALSE);} 
BgL_n1z00_5443 = 
(long)CINT(BgL_auxz00_6063); } 
BgL_testz00_6062 = 
(BgL_n1z00_5443==((long)-1)); } 
if(BgL_testz00_6062)
{ /* Ieee/string.scm 356 */
BgL_res2203z00_5439 = 
bigloo_strcmp_ci_at(BgL_string1z00_5440, BgL_string2z00_5441, BgL_offz00_5442); }  else 
{ /* Ieee/string.scm 356 */
long BgL_auxz00_6073;
{ /* Ieee/string.scm 356 */
obj_t BgL_auxz00_6074;
if(
INTEGERP(BgL_lenz00_5435))
{ /* Ieee/string.scm 356 */
BgL_auxz00_6074 = BgL_lenz00_5435
; }  else 
{ 
obj_t BgL_auxz00_6077;
BgL_auxz00_6077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17070)), BGl_string3537z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_5435); 
FAILURE(BgL_auxz00_6077,BFALSE,BFALSE);} 
BgL_auxz00_6073 = 
(long)CINT(BgL_auxz00_6074); } 
BgL_res2203z00_5439 = 
bigloo_strncmp_ci_at(BgL_string1z00_5440, BgL_string2z00_5441, BgL_offz00_5442, BgL_auxz00_6073); } } } 
return 
BBOOL(BgL_res2203z00_5439);} } } } break;
default: 
{ /* Ieee/string.scm 356 */
obj_t BgL_arg1259z00_5423;int BgL_arg1261z00_5424;
BgL_arg1259z00_5423 = BGl_symbol3535z00zz__r4_strings_6_7z00; 
BgL_arg1261z00_5424 = 
VECTOR_LENGTH(BgL_optz00_35); 
return 
BGl_errorz00zz__errorz00(BgL_arg1259z00_5423, BGl_string3532z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1261z00_5424));} } } } } } 
}



/* substring-ci-at? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_string1z00_31, obj_t BgL_string2z00_32, long BgL_offz00_33, obj_t BgL_lenz00_34)
{ AN_OBJECT;
{ /* Ieee/string.scm 356 */
{ /* Ieee/string.scm 357 */
bool_t BgL_testz00_6089;
{ /* Ieee/string.scm 357 */
long BgL_n1z00_5444;
{ /* Ieee/string.scm 357 */
obj_t BgL_auxz00_6090;
if(
INTEGERP(BgL_lenz00_34))
{ /* Ieee/string.scm 357 */
BgL_auxz00_6090 = BgL_lenz00_34
; }  else 
{ 
obj_t BgL_auxz00_6093;
BgL_auxz00_6093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17156)), BGl_string3536z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_34); 
FAILURE(BgL_auxz00_6093,BFALSE,BFALSE);} 
BgL_n1z00_5444 = 
(long)CINT(BgL_auxz00_6090); } 
BgL_testz00_6089 = 
(BgL_n1z00_5444==((long)-1)); } 
if(BgL_testz00_6089)
{ /* Ieee/string.scm 357 */
return 
bigloo_strcmp_ci_at(BgL_string1z00_31, BgL_string2z00_32, BgL_offz00_33);}  else 
{ /* Ieee/string.scm 357 */
long BgL_auxz00_6100;
{ /* Ieee/string.scm 357 */
obj_t BgL_auxz00_6101;
if(
INTEGERP(BgL_lenz00_34))
{ /* Ieee/string.scm 357 */
BgL_auxz00_6101 = BgL_lenz00_34
; }  else 
{ 
obj_t BgL_auxz00_6104;
BgL_auxz00_6104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17147)), BGl_string3536z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lenz00_34); 
FAILURE(BgL_auxz00_6104,BFALSE,BFALSE);} 
BgL_auxz00_6100 = 
(long)CINT(BgL_auxz00_6101); } 
return 
bigloo_strncmp_ci_at(BgL_string1z00_31, BgL_string2z00_32, BgL_offz00_33, BgL_auxz00_6100);} } } 
}



/* empty-string? */
BGL_EXPORTED_DEF bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t BgL_stringz00_37)
{ AN_OBJECT;
{ /* Ieee/string.scm 364 */
return 
(
STRING_LENGTH(BgL_stringz00_37)==((long)0));} 
}



/* _empty-string? */
obj_t BGl__emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_3939, obj_t BgL_stringz00_3940)
{ AN_OBJECT;
{ /* Ieee/string.scm 364 */
{ /* Ieee/string.scm 365 */
bool_t BgL_auxz00_6112;
{ /* Ieee/string.scm 365 */
obj_t BgL_stringz00_5445;
if(
STRINGP(BgL_stringz00_3940))
{ /* Ieee/string.scm 365 */
BgL_stringz00_5445 = BgL_stringz00_3940; }  else 
{ 
obj_t BgL_auxz00_6115;
BgL_auxz00_6115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17530)), BGl_string3538z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3940); 
FAILURE(BgL_auxz00_6115,BFALSE,BFALSE);} 
BgL_auxz00_6112 = 
(
STRING_LENGTH(BgL_stringz00_5445)==((long)0)); } 
return 
BBOOL(BgL_auxz00_6112);} } 
}



/* string-ci=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_string1z00_38, obj_t BgL_string2z00_39)
{ AN_OBJECT;
{ /* Ieee/string.scm 370 */
return 
strcicmp(BgL_string1z00_38, BgL_string2z00_39);} 
}



/* _string-ci=? */
obj_t BGl__stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_envz00_3941, obj_t BgL_string1z00_3942, obj_t BgL_string2z00_3943)
{ AN_OBJECT;
{ /* Ieee/string.scm 370 */
{ /* Ieee/string.scm 371 */
bool_t BgL_auxz00_6123;
{ /* Ieee/string.scm 371 */
obj_t BgL_string1z00_5446;obj_t BgL_string2z00_5447;
if(
STRINGP(BgL_string1z00_3942))
{ /* Ieee/string.scm 371 */
BgL_string1z00_5446 = BgL_string1z00_3942; }  else 
{ 
obj_t BgL_auxz00_6126;
BgL_auxz00_6126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17828)), BGl_string3539z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3942); 
FAILURE(BgL_auxz00_6126,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3943))
{ /* Ieee/string.scm 371 */
BgL_string2z00_5447 = BgL_string2z00_3943; }  else 
{ 
obj_t BgL_auxz00_6132;
BgL_auxz00_6132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)17828)), BGl_string3539z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3943); 
FAILURE(BgL_auxz00_6132,BFALSE,BFALSE);} 
BgL_auxz00_6123 = 
strcicmp(BgL_string1z00_5446, BgL_string2z00_5447); } 
return 
BBOOL(BgL_auxz00_6123);} } 
}



/* string<? */
BGL_EXPORTED_DEF bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t BgL_string1z00_40, obj_t BgL_string2z00_41)
{ AN_OBJECT;
{ /* Ieee/string.scm 376 */
return 
string_lt(BgL_string1z00_40, BgL_string2z00_41);} 
}



/* _string<? */
obj_t BGl__stringzc3zf3z30zz__r4_strings_6_7z00(obj_t BgL_envz00_3944, obj_t BgL_string1z00_3945, obj_t BgL_string2z00_3946)
{ AN_OBJECT;
{ /* Ieee/string.scm 376 */
{ /* Ieee/string.scm 377 */
bool_t BgL_auxz00_6139;
{ /* Ieee/string.scm 377 */
obj_t BgL_string1z00_5448;obj_t BgL_string2z00_5449;
if(
STRINGP(BgL_string1z00_3945))
{ /* Ieee/string.scm 377 */
BgL_string1z00_5448 = BgL_string1z00_3945; }  else 
{ 
obj_t BgL_auxz00_6142;
BgL_auxz00_6142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18125)), BGl_string3540z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3945); 
FAILURE(BgL_auxz00_6142,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3946))
{ /* Ieee/string.scm 377 */
BgL_string2z00_5449 = BgL_string2z00_3946; }  else 
{ 
obj_t BgL_auxz00_6148;
BgL_auxz00_6148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18125)), BGl_string3540z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3946); 
FAILURE(BgL_auxz00_6148,BFALSE,BFALSE);} 
BgL_auxz00_6139 = 
string_lt(BgL_string1z00_5448, BgL_string2z00_5449); } 
return 
BBOOL(BgL_auxz00_6139);} } 
}



/* string>? */
BGL_EXPORTED_DEF bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t BgL_string1z00_42, obj_t BgL_string2z00_43)
{ AN_OBJECT;
{ /* Ieee/string.scm 382 */
return 
string_gt(BgL_string1z00_42, BgL_string2z00_43);} 
}



/* _string>? */
obj_t BGl__stringze3zf3z10zz__r4_strings_6_7z00(obj_t BgL_envz00_3947, obj_t BgL_string1z00_3948, obj_t BgL_string2z00_3949)
{ AN_OBJECT;
{ /* Ieee/string.scm 382 */
{ /* Ieee/string.scm 383 */
bool_t BgL_auxz00_6155;
{ /* Ieee/string.scm 383 */
obj_t BgL_string1z00_5450;obj_t BgL_string2z00_5451;
if(
STRINGP(BgL_string1z00_3948))
{ /* Ieee/string.scm 383 */
BgL_string1z00_5450 = BgL_string1z00_3948; }  else 
{ 
obj_t BgL_auxz00_6158;
BgL_auxz00_6158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18423)), BGl_string3541z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3948); 
FAILURE(BgL_auxz00_6158,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3949))
{ /* Ieee/string.scm 383 */
BgL_string2z00_5451 = BgL_string2z00_3949; }  else 
{ 
obj_t BgL_auxz00_6164;
BgL_auxz00_6164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18423)), BGl_string3541z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3949); 
FAILURE(BgL_auxz00_6164,BFALSE,BFALSE);} 
BgL_auxz00_6155 = 
string_gt(BgL_string1z00_5450, BgL_string2z00_5451); } 
return 
BBOOL(BgL_auxz00_6155);} } 
}



/* string<=? */
BGL_EXPORTED_DEF bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t BgL_string1z00_44, obj_t BgL_string2z00_45)
{ AN_OBJECT;
{ /* Ieee/string.scm 388 */
return 
string_le(BgL_string1z00_44, BgL_string2z00_45);} 
}



/* _string<=? */
obj_t BGl__stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t BgL_envz00_3950, obj_t BgL_string1z00_3951, obj_t BgL_string2z00_3952)
{ AN_OBJECT;
{ /* Ieee/string.scm 388 */
{ /* Ieee/string.scm 389 */
bool_t BgL_auxz00_6171;
{ /* Ieee/string.scm 389 */
obj_t BgL_string1z00_5452;obj_t BgL_string2z00_5453;
if(
STRINGP(BgL_string1z00_3951))
{ /* Ieee/string.scm 389 */
BgL_string1z00_5452 = BgL_string1z00_3951; }  else 
{ 
obj_t BgL_auxz00_6174;
BgL_auxz00_6174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18722)), BGl_string3542z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3951); 
FAILURE(BgL_auxz00_6174,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3952))
{ /* Ieee/string.scm 389 */
BgL_string2z00_5453 = BgL_string2z00_3952; }  else 
{ 
obj_t BgL_auxz00_6180;
BgL_auxz00_6180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)18722)), BGl_string3542z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3952); 
FAILURE(BgL_auxz00_6180,BFALSE,BFALSE);} 
BgL_auxz00_6171 = 
string_le(BgL_string1z00_5452, BgL_string2z00_5453); } 
return 
BBOOL(BgL_auxz00_6171);} } 
}



/* string>=? */
BGL_EXPORTED_DEF bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t BgL_string1z00_46, obj_t BgL_string2z00_47)
{ AN_OBJECT;
{ /* Ieee/string.scm 394 */
return 
string_ge(BgL_string1z00_46, BgL_string2z00_47);} 
}



/* _string>=? */
obj_t BGl__stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t BgL_envz00_3953, obj_t BgL_string1z00_3954, obj_t BgL_string2z00_3955)
{ AN_OBJECT;
{ /* Ieee/string.scm 394 */
{ /* Ieee/string.scm 395 */
bool_t BgL_auxz00_6187;
{ /* Ieee/string.scm 395 */
obj_t BgL_string1z00_5454;obj_t BgL_string2z00_5455;
if(
STRINGP(BgL_string1z00_3954))
{ /* Ieee/string.scm 395 */
BgL_string1z00_5454 = BgL_string1z00_3954; }  else 
{ 
obj_t BgL_auxz00_6190;
BgL_auxz00_6190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19021)), BGl_string3543z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3954); 
FAILURE(BgL_auxz00_6190,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3955))
{ /* Ieee/string.scm 395 */
BgL_string2z00_5455 = BgL_string2z00_3955; }  else 
{ 
obj_t BgL_auxz00_6196;
BgL_auxz00_6196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19021)), BGl_string3543z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3955); 
FAILURE(BgL_auxz00_6196,BFALSE,BFALSE);} 
BgL_auxz00_6187 = 
string_ge(BgL_string1z00_5454, BgL_string2z00_5455); } 
return 
BBOOL(BgL_auxz00_6187);} } 
}



/* string-ci<? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t BgL_string1z00_48, obj_t BgL_string2z00_49)
{ AN_OBJECT;
{ /* Ieee/string.scm 400 */
return 
string_cilt(BgL_string1z00_48, BgL_string2z00_49);} 
}



/* _string-ci<? */
obj_t BGl__stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t BgL_envz00_3956, obj_t BgL_string1z00_3957, obj_t BgL_string2z00_3958)
{ AN_OBJECT;
{ /* Ieee/string.scm 400 */
{ /* Ieee/string.scm 401 */
bool_t BgL_auxz00_6203;
{ /* Ieee/string.scm 401 */
obj_t BgL_string1z00_5456;obj_t BgL_string2z00_5457;
if(
STRINGP(BgL_string1z00_3957))
{ /* Ieee/string.scm 401 */
BgL_string1z00_5456 = BgL_string1z00_3957; }  else 
{ 
obj_t BgL_auxz00_6206;
BgL_auxz00_6206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19322)), BGl_string3544z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3957); 
FAILURE(BgL_auxz00_6206,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3958))
{ /* Ieee/string.scm 401 */
BgL_string2z00_5457 = BgL_string2z00_3958; }  else 
{ 
obj_t BgL_auxz00_6212;
BgL_auxz00_6212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19322)), BGl_string3544z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3958); 
FAILURE(BgL_auxz00_6212,BFALSE,BFALSE);} 
BgL_auxz00_6203 = 
string_cilt(BgL_string1z00_5456, BgL_string2z00_5457); } 
return 
BBOOL(BgL_auxz00_6203);} } 
}



/* string-ci>? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t BgL_string1z00_50, obj_t BgL_string2z00_51)
{ AN_OBJECT;
{ /* Ieee/string.scm 406 */
return 
string_cigt(BgL_string1z00_50, BgL_string2z00_51);} 
}



/* _string-ci>? */
obj_t BGl__stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t BgL_envz00_3959, obj_t BgL_string1z00_3960, obj_t BgL_string2z00_3961)
{ AN_OBJECT;
{ /* Ieee/string.scm 406 */
{ /* Ieee/string.scm 407 */
bool_t BgL_auxz00_6219;
{ /* Ieee/string.scm 407 */
obj_t BgL_string1z00_5458;obj_t BgL_string2z00_5459;
if(
STRINGP(BgL_string1z00_3960))
{ /* Ieee/string.scm 407 */
BgL_string1z00_5458 = BgL_string1z00_3960; }  else 
{ 
obj_t BgL_auxz00_6222;
BgL_auxz00_6222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19625)), BGl_string3545z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3960); 
FAILURE(BgL_auxz00_6222,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3961))
{ /* Ieee/string.scm 407 */
BgL_string2z00_5459 = BgL_string2z00_3961; }  else 
{ 
obj_t BgL_auxz00_6228;
BgL_auxz00_6228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19625)), BGl_string3545z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3961); 
FAILURE(BgL_auxz00_6228,BFALSE,BFALSE);} 
BgL_auxz00_6219 = 
string_cigt(BgL_string1z00_5458, BgL_string2z00_5459); } 
return 
BBOOL(BgL_auxz00_6219);} } 
}



/* string-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t BgL_string1z00_52, obj_t BgL_string2z00_53)
{ AN_OBJECT;
{ /* Ieee/string.scm 412 */
return 
string_cile(BgL_string1z00_52, BgL_string2z00_53);} 
}



/* _string-ci<=? */
obj_t BGl__stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t BgL_envz00_3962, obj_t BgL_string1z00_3963, obj_t BgL_string2z00_3964)
{ AN_OBJECT;
{ /* Ieee/string.scm 412 */
{ /* Ieee/string.scm 413 */
bool_t BgL_auxz00_6235;
{ /* Ieee/string.scm 413 */
obj_t BgL_string1z00_5460;obj_t BgL_string2z00_5461;
if(
STRINGP(BgL_string1z00_3963))
{ /* Ieee/string.scm 413 */
BgL_string1z00_5460 = BgL_string1z00_3963; }  else 
{ 
obj_t BgL_auxz00_6238;
BgL_auxz00_6238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19929)), BGl_string3546z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3963); 
FAILURE(BgL_auxz00_6238,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3964))
{ /* Ieee/string.scm 413 */
BgL_string2z00_5461 = BgL_string2z00_3964; }  else 
{ 
obj_t BgL_auxz00_6244;
BgL_auxz00_6244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)19929)), BGl_string3546z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3964); 
FAILURE(BgL_auxz00_6244,BFALSE,BFALSE);} 
BgL_auxz00_6235 = 
string_cile(BgL_string1z00_5460, BgL_string2z00_5461); } 
return 
BBOOL(BgL_auxz00_6235);} } 
}



/* string-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t BgL_string1z00_54, obj_t BgL_string2z00_55)
{ AN_OBJECT;
{ /* Ieee/string.scm 418 */
return 
string_cige(BgL_string1z00_54, BgL_string2z00_55);} 
}



/* _string-ci>=? */
obj_t BGl__stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t BgL_envz00_3965, obj_t BgL_string1z00_3966, obj_t BgL_string2z00_3967)
{ AN_OBJECT;
{ /* Ieee/string.scm 418 */
{ /* Ieee/string.scm 419 */
bool_t BgL_auxz00_6251;
{ /* Ieee/string.scm 419 */
obj_t BgL_string1z00_5462;obj_t BgL_string2z00_5463;
if(
STRINGP(BgL_string1z00_3966))
{ /* Ieee/string.scm 419 */
BgL_string1z00_5462 = BgL_string1z00_3966; }  else 
{ 
obj_t BgL_auxz00_6254;
BgL_auxz00_6254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20233)), BGl_string3547z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string1z00_3966); 
FAILURE(BgL_auxz00_6254,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string2z00_3967))
{ /* Ieee/string.scm 419 */
BgL_string2z00_5463 = BgL_string2z00_3967; }  else 
{ 
obj_t BgL_auxz00_6260;
BgL_auxz00_6260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20233)), BGl_string3547z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_string2z00_3967); 
FAILURE(BgL_auxz00_6260,BFALSE,BFALSE);} 
BgL_auxz00_6251 = 
string_cige(BgL_string1z00_5462, BgL_string2z00_5463); } 
return 
BBOOL(BgL_auxz00_6251);} } 
}



/* _substring */
obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_60, obj_t BgL_optz00_59)
{ AN_OBJECT;
{ /* Ieee/string.scm 424 */
{ /* Ieee/string.scm 424 */
obj_t BgL_stringz00_621;obj_t BgL_g1166z00_622;
BgL_stringz00_621 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
BgL_g1166z00_622 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 424 */
int BgL_aux1168z00_624;
BgL_aux1168z00_624 = 
VECTOR_LENGTH(BgL_optz00_59); 
switch( 
(long)(BgL_aux1168z00_624)) { case ((long)2) : 

{ /* Ieee/string.scm 424 */
long BgL_endz00_626;
{ /* Ieee/string.scm 424 */
obj_t BgL_stringz00_2215;
if(
STRINGP(BgL_stringz00_621))
{ /* Ieee/string.scm 424 */
BgL_stringz00_2215 = BgL_stringz00_621; }  else 
{ 
obj_t BgL_auxz00_6273;
BgL_auxz00_6273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20542)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_621); 
FAILURE(BgL_auxz00_6273,BFALSE,BFALSE);} 
BgL_endz00_626 = 
STRING_LENGTH(BgL_stringz00_2215); } 
{ /* Ieee/string.scm 424 */

{ /* Ieee/string.scm 424 */
obj_t BgL_arg1266z00_627;obj_t BgL_arg1267z00_628;
BgL_arg1266z00_627 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
BgL_arg1267z00_628 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)1))); 
{ /* Ieee/string.scm 424 */
long BgL_auxz00_6289;obj_t BgL_auxz00_6282;
{ /* Ieee/string.scm 424 */
obj_t BgL_auxz00_6290;
if(
INTEGERP(BgL_arg1267z00_628))
{ /* Ieee/string.scm 424 */
BgL_auxz00_6290 = BgL_arg1267z00_628
; }  else 
{ 
obj_t BgL_auxz00_6293;
BgL_auxz00_6293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20488)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1267z00_628); 
FAILURE(BgL_auxz00_6293,BFALSE,BFALSE);} 
BgL_auxz00_6289 = 
(long)CINT(BgL_auxz00_6290); } 
if(
STRINGP(BgL_arg1266z00_627))
{ /* Ieee/string.scm 424 */
BgL_auxz00_6282 = BgL_arg1266z00_627
; }  else 
{ 
obj_t BgL_auxz00_6285;
BgL_auxz00_6285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20488)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1266z00_627); 
FAILURE(BgL_auxz00_6285,BFALSE,BFALSE);} 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_6282, BgL_auxz00_6289, BgL_endz00_626);} } } } break;case ((long)3) : 

{ /* Ieee/string.scm 424 */
obj_t BgL_endz00_629;
BgL_endz00_629 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)2))); 
{ /* Ieee/string.scm 424 */

{ /* Ieee/string.scm 424 */
obj_t BgL_arg1268z00_630;obj_t BgL_arg1269z00_631;
BgL_arg1268z00_630 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)0))); 
BgL_arg1269z00_631 = 
VECTOR_REF(BgL_optz00_59,
(int)(((long)1))); 
{ /* Ieee/string.scm 424 */
long BgL_auxz00_6321;long BgL_auxz00_6312;obj_t BgL_auxz00_6305;
{ /* Ieee/string.scm 424 */
obj_t BgL_auxz00_6322;
if(
INTEGERP(BgL_endz00_629))
{ /* Ieee/string.scm 424 */
BgL_auxz00_6322 = BgL_endz00_629
; }  else 
{ 
obj_t BgL_auxz00_6325;
BgL_auxz00_6325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20488)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_endz00_629); 
FAILURE(BgL_auxz00_6325,BFALSE,BFALSE);} 
BgL_auxz00_6321 = 
(long)CINT(BgL_auxz00_6322); } 
{ /* Ieee/string.scm 424 */
obj_t BgL_auxz00_6313;
if(
INTEGERP(BgL_arg1269z00_631))
{ /* Ieee/string.scm 424 */
BgL_auxz00_6313 = BgL_arg1269z00_631
; }  else 
{ 
obj_t BgL_auxz00_6316;
BgL_auxz00_6316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20488)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_arg1269z00_631); 
FAILURE(BgL_auxz00_6316,BFALSE,BFALSE);} 
BgL_auxz00_6312 = 
(long)CINT(BgL_auxz00_6313); } 
if(
STRINGP(BgL_arg1268z00_630))
{ /* Ieee/string.scm 424 */
BgL_auxz00_6305 = BgL_arg1268z00_630
; }  else 
{ 
obj_t BgL_auxz00_6308;
BgL_auxz00_6308 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20488)), BGl_string3551z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1268z00_630); 
FAILURE(BgL_auxz00_6308,BFALSE,BFALSE);} 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_6305, BgL_auxz00_6312, BgL_auxz00_6321);} } } } break;
default: 
{ /* Ieee/string.scm 424 */
obj_t BgL_arg1270z00_632;int BgL_arg1273z00_634;
BgL_arg1270z00_632 = BGl_symbol3548z00zz__r4_strings_6_7z00; 
BgL_arg1273z00_634 = 
VECTOR_LENGTH(BgL_optz00_59); 
return 
BGl_errorz00zz__errorz00(BgL_arg1270z00_632, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1273z00_634));} } } } } } 
}



/* substring */
BGL_EXPORTED_DEF obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_56, long BgL_startz00_57, long BgL_endz00_58)
{ AN_OBJECT;
{ /* Ieee/string.scm 424 */
{ /* Ieee/string.scm 425 */
long BgL_lenz00_635;
BgL_lenz00_635 = 
STRING_LENGTH(BgL_stringz00_56); 
{ /* Ieee/string.scm 427 */
bool_t BgL_testz00_6337;
if(
(BgL_startz00_57<((long)0)))
{ /* Ieee/string.scm 427 */
BgL_testz00_6337 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 427 */
BgL_testz00_6337 = 
(BgL_startz00_57>BgL_lenz00_635)
; } 
if(BgL_testz00_6337)
{ /* Ieee/string.scm 428 */
obj_t BgL_arg1276z00_638;
BgL_arg1276z00_638 = 
string_append_3(BGl_string3552z00zz__r4_strings_6_7z00, BgL_stringz00_56, BGl_string3553z00zz__r4_strings_6_7z00); 
{ /* Ieee/string.scm 428 */
obj_t BgL_aux2779z00_4612;
BgL_aux2779z00_4612 = 
BGl_errorz00zz__errorz00(BGl_string3549z00zz__r4_strings_6_7z00, BgL_arg1276z00_638, 
BINT(BgL_startz00_57)); 
if(
STRINGP(BgL_aux2779z00_4612))
{ /* Ieee/string.scm 428 */
return BgL_aux2779z00_4612;}  else 
{ 
obj_t BgL_auxz00_6346;
BgL_auxz00_6346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20659)), BGl_string3549z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2779z00_4612); 
FAILURE(BgL_auxz00_6346,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 427 */
if(
(BgL_endz00_58<((long)0)))
{ /* Ieee/string.scm 431 */
return 
c_substring(BgL_stringz00_56, BgL_startz00_57, BgL_lenz00_635);}  else 
{ /* Ieee/string.scm 433 */
bool_t BgL_testz00_6353;
if(
(BgL_endz00_58<BgL_startz00_57))
{ /* Ieee/string.scm 433 */
BgL_testz00_6353 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 433 */
BgL_testz00_6353 = 
(BgL_endz00_58>BgL_lenz00_635)
; } 
if(BgL_testz00_6353)
{ /* Ieee/string.scm 434 */
obj_t BgL_arg1280z00_642;
BgL_arg1280z00_642 = 
string_append_3(BGl_string3554z00zz__r4_strings_6_7z00, BgL_stringz00_56, BGl_string3553z00zz__r4_strings_6_7z00); 
{ /* Ieee/string.scm 434 */
obj_t BgL_aux2781z00_4614;
BgL_aux2781z00_4614 = 
BGl_errorz00zz__errorz00(BGl_string3549z00zz__r4_strings_6_7z00, BgL_arg1280z00_642, 
BINT(BgL_endz00_58)); 
if(
STRINGP(BgL_aux2781z00_4614))
{ /* Ieee/string.scm 434 */
return BgL_aux2781z00_4614;}  else 
{ 
obj_t BgL_auxz00_6362;
BgL_auxz00_6362 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)20835)), BGl_string3549z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2781z00_4614); 
FAILURE(BgL_auxz00_6362,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 433 */
return 
c_substring(BgL_stringz00_56, BgL_startz00_57, BgL_endz00_58);} } } } } } 
}



/* substring-ur */
BGL_EXPORTED_DEF obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_61, long BgL_startz00_62, long BgL_endz00_63)
{ AN_OBJECT;
{ /* Ieee/string.scm 443 */
return 
c_substring(BgL_stringz00_61, BgL_startz00_62, BgL_endz00_63);} 
}



/* _substring-ur */
obj_t BGl__substringzd2urzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3968, obj_t BgL_stringz00_3969, obj_t BgL_startz00_3970, obj_t BgL_endz00_3971)
{ AN_OBJECT;
{ /* Ieee/string.scm 443 */
{ /* Ieee/string.scm 444 */
obj_t BgL_stringz00_5464;long BgL_startz00_5465;long BgL_endz00_5466;
if(
STRINGP(BgL_stringz00_3969))
{ /* Ieee/string.scm 444 */
BgL_stringz00_5464 = BgL_stringz00_3969; }  else 
{ 
obj_t BgL_auxz00_6370;
BgL_auxz00_6370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21235)), BGl_string3555z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3969); 
FAILURE(BgL_auxz00_6370,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 444 */
obj_t BgL_auxz00_6374;
if(
INTEGERP(BgL_startz00_3970))
{ /* Ieee/string.scm 444 */
BgL_auxz00_6374 = BgL_startz00_3970
; }  else 
{ 
obj_t BgL_auxz00_6377;
BgL_auxz00_6377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21235)), BGl_string3555z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_startz00_3970); 
FAILURE(BgL_auxz00_6377,BFALSE,BFALSE);} 
BgL_startz00_5465 = 
(long)CINT(BgL_auxz00_6374); } 
{ /* Ieee/string.scm 444 */
obj_t BgL_auxz00_6382;
if(
INTEGERP(BgL_endz00_3971))
{ /* Ieee/string.scm 444 */
BgL_auxz00_6382 = BgL_endz00_3971
; }  else 
{ 
obj_t BgL_auxz00_6385;
BgL_auxz00_6385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21235)), BGl_string3555z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_endz00_3971); 
FAILURE(BgL_auxz00_6385,BFALSE,BFALSE);} 
BgL_endz00_5466 = 
(long)CINT(BgL_auxz00_6382); } 
return 
c_substring(BgL_stringz00_5464, BgL_startz00_5465, BgL_endz00_5466);} } 
}



/* _string-contains */
obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_envz00_68, obj_t BgL_optz00_67)
{ AN_OBJECT;
{ /* Ieee/string.scm 449 */
{ /* Ieee/string.scm 449 */
obj_t BgL_g1169z00_645;obj_t BgL_g1170z00_646;
BgL_g1169z00_645 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
BgL_g1170z00_646 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 449 */
int BgL_aux1172z00_648;
BgL_aux1172z00_648 = 
VECTOR_LENGTH(BgL_optz00_67); 
switch( 
(long)(BgL_aux1172z00_648)) { case ((long)2) : 

{ /* Ieee/string.scm 449 */

{ /* Ieee/string.scm 449 */
obj_t BgL_arg1284z00_651;obj_t BgL_arg1285z00_652;
BgL_arg1284z00_651 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
BgL_arg1285z00_652 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)1))); 
{ /* Ieee/string.scm 449 */
obj_t BgL_auxz00_6407;obj_t BgL_auxz00_6400;
if(
STRINGP(BgL_arg1285z00_652))
{ /* Ieee/string.scm 449 */
BgL_auxz00_6407 = BgL_arg1285z00_652
; }  else 
{ 
obj_t BgL_auxz00_6410;
BgL_auxz00_6410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21489)), BGl_string3558z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1285z00_652); 
FAILURE(BgL_auxz00_6410,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1284z00_651))
{ /* Ieee/string.scm 449 */
BgL_auxz00_6400 = BgL_arg1284z00_651
; }  else 
{ 
obj_t BgL_auxz00_6403;
BgL_auxz00_6403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21489)), BGl_string3558z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1284z00_651); 
FAILURE(BgL_auxz00_6403,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2zz__r4_strings_6_7z00(BgL_auxz00_6400, BgL_auxz00_6407, 
(int)(((long)0)));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 449 */
obj_t BgL_startz00_653;
BgL_startz00_653 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)2))); 
{ /* Ieee/string.scm 449 */

{ /* Ieee/string.scm 449 */
obj_t BgL_arg1286z00_654;obj_t BgL_arg1287z00_655;
BgL_arg1286z00_654 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)0))); 
BgL_arg1287z00_655 = 
VECTOR_REF(BgL_optz00_67,
(int)(((long)1))); 
{ /* Ieee/string.scm 449 */
int BgL_auxz00_6436;obj_t BgL_auxz00_6429;obj_t BgL_auxz00_6422;
{ /* Ieee/string.scm 449 */
obj_t BgL_auxz00_6437;
if(
INTEGERP(BgL_startz00_653))
{ /* Ieee/string.scm 449 */
BgL_auxz00_6437 = BgL_startz00_653
; }  else 
{ 
obj_t BgL_auxz00_6440;
BgL_auxz00_6440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21489)), BGl_string3558z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_startz00_653); 
FAILURE(BgL_auxz00_6440,BFALSE,BFALSE);} 
BgL_auxz00_6436 = 
CINT(BgL_auxz00_6437); } 
if(
STRINGP(BgL_arg1287z00_655))
{ /* Ieee/string.scm 449 */
BgL_auxz00_6429 = BgL_arg1287z00_655
; }  else 
{ 
obj_t BgL_auxz00_6432;
BgL_auxz00_6432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21489)), BGl_string3558z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1287z00_655); 
FAILURE(BgL_auxz00_6432,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1286z00_654))
{ /* Ieee/string.scm 449 */
BgL_auxz00_6422 = BgL_arg1286z00_654
; }  else 
{ 
obj_t BgL_auxz00_6425;
BgL_auxz00_6425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)21489)), BGl_string3558z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1286z00_654); 
FAILURE(BgL_auxz00_6425,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2zz__r4_strings_6_7z00(BgL_auxz00_6422, BgL_auxz00_6429, BgL_auxz00_6436);} } } } break;
default: 
{ /* Ieee/string.scm 449 */
obj_t BgL_arg1288z00_656;int BgL_arg1290z00_658;
BgL_arg1288z00_656 = BGl_symbol3556z00zz__r4_strings_6_7z00; 
BgL_arg1290z00_658 = 
VECTOR_LENGTH(BgL_optz00_67); 
return 
BGl_errorz00zz__errorz00(BgL_arg1288z00_656, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1290z00_658));} } } } } } 
}



/* string-contains */
BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_64, obj_t BgL_s2z00_65, int BgL_startz00_66)
{ AN_OBJECT;
{ /* Ieee/string.scm 449 */
{ /* Ieee/string.scm 450 */
long BgL_l1z00_659;long BgL_l2z00_660;long BgL_i0z00_661;
BgL_l1z00_659 = 
STRING_LENGTH(BgL_s1z00_64); 
BgL_l2z00_660 = 
STRING_LENGTH(BgL_s2z00_65); 
if(
(
(long)(BgL_startz00_66)<((long)0)))
{ /* Ieee/string.scm 452 */
BgL_i0z00_661 = ((long)0); }  else 
{ /* Ieee/string.scm 452 */
BgL_i0z00_661 = 
(long)(BgL_startz00_66); } 
if(
(BgL_l1z00_659<
(BgL_i0z00_661+BgL_l2z00_660)))
{ /* Ieee/string.scm 453 */
return BFALSE;}  else 
{ /* Ieee/string.scm 455 */
long BgL_stopz00_663;
BgL_stopz00_663 = 
(BgL_l1z00_659-BgL_l2z00_660); 
{ 
long BgL_iz00_665;
BgL_iz00_665 = BgL_i0z00_661; 
BgL_zc3anonymousza31292ze3z83_666:
if(
bigloo_strcmp_at(BgL_s1z00_64, BgL_s2z00_65, BgL_iz00_665))
{ /* Ieee/string.scm 458 */
return 
BINT(BgL_iz00_665);}  else 
{ /* Ieee/string.scm 458 */
if(
(BgL_iz00_665==BgL_stopz00_663))
{ /* Ieee/string.scm 460 */
return BFALSE;}  else 
{ 
long BgL_iz00_6466;
BgL_iz00_6466 = 
(BgL_iz00_665+((long)1)); 
BgL_iz00_665 = BgL_iz00_6466; 
goto BgL_zc3anonymousza31292ze3z83_666;} } } } } } 
}



/* _string-contains-ci */
obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_envz00_73, obj_t BgL_optz00_72)
{ AN_OBJECT;
{ /* Ieee/string.scm 468 */
{ /* Ieee/string.scm 468 */
obj_t BgL_g1173z00_673;obj_t BgL_g1174z00_674;
BgL_g1173z00_673 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)0))); 
BgL_g1174z00_674 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 468 */
int BgL_aux1176z00_676;
BgL_aux1176z00_676 = 
VECTOR_LENGTH(BgL_optz00_72); 
switch( 
(long)(BgL_aux1176z00_676)) { case ((long)2) : 

{ /* Ieee/string.scm 468 */

{ /* Ieee/string.scm 468 */
obj_t BgL_arg1299z00_679;obj_t BgL_arg1300z00_680;
BgL_arg1299z00_679 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)0))); 
BgL_arg1300z00_680 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)1))); 
{ /* Ieee/string.scm 468 */
obj_t BgL_auxz00_6484;obj_t BgL_auxz00_6477;
if(
STRINGP(BgL_arg1300z00_680))
{ /* Ieee/string.scm 468 */
BgL_auxz00_6484 = BgL_arg1300z00_680
; }  else 
{ 
obj_t BgL_auxz00_6487;
BgL_auxz00_6487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)22072)), BGl_string3562z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1300z00_680); 
FAILURE(BgL_auxz00_6487,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1299z00_679))
{ /* Ieee/string.scm 468 */
BgL_auxz00_6477 = BgL_arg1299z00_679
; }  else 
{ 
obj_t BgL_auxz00_6480;
BgL_auxz00_6480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)22072)), BGl_string3562z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1299z00_679); 
FAILURE(BgL_auxz00_6480,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_6477, BgL_auxz00_6484, 
(int)(((long)0)));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 468 */
obj_t BgL_startz00_681;
BgL_startz00_681 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)2))); 
{ /* Ieee/string.scm 468 */

{ /* Ieee/string.scm 468 */
obj_t BgL_arg1301z00_682;obj_t BgL_arg1302z00_683;
BgL_arg1301z00_682 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)0))); 
BgL_arg1302z00_683 = 
VECTOR_REF(BgL_optz00_72,
(int)(((long)1))); 
{ /* Ieee/string.scm 468 */
int BgL_auxz00_6513;obj_t BgL_auxz00_6506;obj_t BgL_auxz00_6499;
{ /* Ieee/string.scm 468 */
obj_t BgL_auxz00_6514;
if(
INTEGERP(BgL_startz00_681))
{ /* Ieee/string.scm 468 */
BgL_auxz00_6514 = BgL_startz00_681
; }  else 
{ 
obj_t BgL_auxz00_6517;
BgL_auxz00_6517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)22072)), BGl_string3562z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_startz00_681); 
FAILURE(BgL_auxz00_6517,BFALSE,BFALSE);} 
BgL_auxz00_6513 = 
CINT(BgL_auxz00_6514); } 
if(
STRINGP(BgL_arg1302z00_683))
{ /* Ieee/string.scm 468 */
BgL_auxz00_6506 = BgL_arg1302z00_683
; }  else 
{ 
obj_t BgL_auxz00_6509;
BgL_auxz00_6509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)22072)), BGl_string3562z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1302z00_683); 
FAILURE(BgL_auxz00_6509,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1301z00_682))
{ /* Ieee/string.scm 468 */
BgL_auxz00_6499 = BgL_arg1301z00_682
; }  else 
{ 
obj_t BgL_auxz00_6502;
BgL_auxz00_6502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)22072)), BGl_string3562z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1301z00_682); 
FAILURE(BgL_auxz00_6502,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_6499, BgL_auxz00_6506, BgL_auxz00_6513);} } } } break;
default: 
{ /* Ieee/string.scm 468 */
obj_t BgL_arg1303z00_684;int BgL_arg1305z00_686;
BgL_arg1303z00_684 = BGl_symbol3560z00zz__r4_strings_6_7z00; 
BgL_arg1305z00_686 = 
VECTOR_LENGTH(BgL_optz00_72); 
return 
BGl_errorz00zz__errorz00(BgL_arg1303z00_684, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1305z00_686));} } } } } } 
}



/* string-contains-ci */
BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_69, obj_t BgL_s2z00_70, int BgL_startz00_71)
{ AN_OBJECT;
{ /* Ieee/string.scm 468 */
{ /* Ieee/string.scm 469 */
long BgL_l1z00_687;long BgL_l2z00_688;long BgL_i0z00_689;
BgL_l1z00_687 = 
STRING_LENGTH(BgL_s1z00_69); 
BgL_l2z00_688 = 
STRING_LENGTH(BgL_s2z00_70); 
if(
(
(long)(BgL_startz00_71)<((long)0)))
{ /* Ieee/string.scm 471 */
BgL_i0z00_689 = ((long)0); }  else 
{ /* Ieee/string.scm 471 */
BgL_i0z00_689 = 
(long)(BgL_startz00_71); } 
if(
(BgL_l1z00_687<
(BgL_i0z00_689+BgL_l2z00_688)))
{ /* Ieee/string.scm 472 */
return BFALSE;}  else 
{ /* Ieee/string.scm 474 */
long BgL_stopz00_691;
BgL_stopz00_691 = 
(BgL_l1z00_687-BgL_l2z00_688); 
{ 
long BgL_iz00_693;
BgL_iz00_693 = BgL_i0z00_689; 
BgL_zc3anonymousza31307ze3z83_694:
if(
bigloo_strcmp_ci_at(BgL_s1z00_69, BgL_s2z00_70, BgL_iz00_693))
{ /* Ieee/string.scm 477 */
return 
BINT(BgL_iz00_693);}  else 
{ /* Ieee/string.scm 477 */
if(
(BgL_iz00_693==BgL_stopz00_691))
{ /* Ieee/string.scm 479 */
return BFALSE;}  else 
{ 
long BgL_iz00_6543;
BgL_iz00_6543 = 
(BgL_iz00_693+((long)1)); 
BgL_iz00_693 = BgL_iz00_6543; 
goto BgL_zc3anonymousza31307ze3z83_694;} } } } } } 
}



/* string-compare3 */
BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t BgL_az00_74, obj_t BgL_bz00_75)
{ AN_OBJECT;
{ /* Ieee/string.scm 491 */
{ /* Ieee/string.scm 492 */
long BgL_alz00_701;
BgL_alz00_701 = 
STRING_LENGTH(BgL_az00_74); 
{ /* Ieee/string.scm 492 */
long BgL_blz00_702;
BgL_blz00_702 = 
STRING_LENGTH(BgL_bz00_75); 
{ /* Ieee/string.scm 493 */
long BgL_lz00_703;
if(
(BgL_alz00_701<BgL_blz00_702))
{ /* Ieee/string.scm 494 */
BgL_lz00_703 = BgL_alz00_701; }  else 
{ /* Ieee/string.scm 494 */
BgL_lz00_703 = BgL_blz00_702; } 
{ /* Ieee/string.scm 494 */

{ 
long BgL_rz00_705;
BgL_rz00_705 = ((long)0); 
BgL_zc3anonymousza31313ze3z83_706:
if(
(BgL_rz00_705==BgL_lz00_703))
{ /* Ieee/string.scm 496 */
return 
(BgL_alz00_701-BgL_blz00_702);}  else 
{ /* Ieee/string.scm 498 */
long BgL_cz00_708;
{ /* Ieee/string.scm 498 */
long BgL_auxz00_6564;long BgL_auxz00_6552;
{ /* Ieee/string.scm 499 */
unsigned char BgL_auxz00_6565;
{ /* Ieee/string.scm 499 */
long BgL_l2239z00_4072;
BgL_l2239z00_4072 = 
STRING_LENGTH(BgL_bz00_75); 
if(
BOUND_CHECK(BgL_rz00_705, BgL_l2239z00_4072))
{ /* Ieee/string.scm 499 */
BgL_auxz00_6565 = 
STRING_REF(BgL_bz00_75, BgL_rz00_705)
; }  else 
{ 
obj_t BgL_auxz00_6570;
BgL_auxz00_6570 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23270)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_rz00_705), BgL_bz00_75); 
FAILURE(BgL_auxz00_6570,BFALSE,BFALSE);} } 
BgL_auxz00_6564 = 
(BgL_auxz00_6565); } 
{ /* Ieee/string.scm 498 */
unsigned char BgL_auxz00_6553;
{ /* Ieee/string.scm 498 */
long BgL_l2235z00_4068;
BgL_l2235z00_4068 = 
STRING_LENGTH(BgL_az00_74); 
if(
BOUND_CHECK(BgL_rz00_705, BgL_l2235z00_4068))
{ /* Ieee/string.scm 498 */
BgL_auxz00_6553 = 
STRING_REF(BgL_az00_74, BgL_rz00_705)
; }  else 
{ 
obj_t BgL_auxz00_6558;
BgL_auxz00_6558 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23209)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_rz00_705), BgL_az00_74); 
FAILURE(BgL_auxz00_6558,BFALSE,BFALSE);} } 
BgL_auxz00_6552 = 
(BgL_auxz00_6553); } 
BgL_cz00_708 = 
(BgL_auxz00_6552-BgL_auxz00_6564); } 
if(
(BgL_cz00_708==((long)0)))
{ 
long BgL_rz00_6579;
BgL_rz00_6579 = 
(BgL_rz00_705+((long)1)); 
BgL_rz00_705 = BgL_rz00_6579; 
goto BgL_zc3anonymousza31313ze3z83_706;}  else 
{ /* Ieee/string.scm 500 */
return BgL_cz00_708;} } } } } } } } 
}



/* _string-compare3 */
obj_t BGl__stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3972, obj_t BgL_az00_3973, obj_t BgL_bz00_3974)
{ AN_OBJECT;
{ /* Ieee/string.scm 491 */
{ /* Ieee/string.scm 492 */
long BgL_auxz00_6581;
{ /* Ieee/string.scm 492 */
obj_t BgL_auxz00_6589;obj_t BgL_auxz00_6582;
if(
STRINGP(BgL_bz00_3974))
{ /* Ieee/string.scm 492 */
BgL_auxz00_6589 = BgL_bz00_3974
; }  else 
{ 
obj_t BgL_auxz00_6592;
BgL_auxz00_6592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23013)), BGl_string3563z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_bz00_3974); 
FAILURE(BgL_auxz00_6592,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_3973))
{ /* Ieee/string.scm 492 */
BgL_auxz00_6582 = BgL_az00_3973
; }  else 
{ 
obj_t BgL_auxz00_6585;
BgL_auxz00_6585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23013)), BGl_string3563z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_az00_3973); 
FAILURE(BgL_auxz00_6585,BFALSE,BFALSE);} 
BgL_auxz00_6581 = 
BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(BgL_auxz00_6582, BgL_auxz00_6589); } 
return 
BINT(BgL_auxz00_6581);} } 
}



/* string-compare3-ci */
BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t BgL_az00_76, obj_t BgL_bz00_77)
{ AN_OBJECT;
{ /* Ieee/string.scm 507 */
{ /* Ieee/string.scm 508 */
long BgL_alz00_719;
BgL_alz00_719 = 
STRING_LENGTH(BgL_az00_76); 
{ /* Ieee/string.scm 508 */
long BgL_blz00_720;
BgL_blz00_720 = 
STRING_LENGTH(BgL_bz00_77); 
{ /* Ieee/string.scm 509 */
long BgL_lz00_721;
if(
(BgL_alz00_719<BgL_blz00_720))
{ /* Ieee/string.scm 510 */
BgL_lz00_721 = BgL_alz00_719; }  else 
{ /* Ieee/string.scm 510 */
BgL_lz00_721 = BgL_blz00_720; } 
{ /* Ieee/string.scm 510 */

{ 
long BgL_rz00_723;
BgL_rz00_723 = ((long)0); 
BgL_zc3anonymousza31322ze3z83_724:
if(
(BgL_rz00_723==BgL_lz00_721))
{ /* Ieee/string.scm 512 */
return 
(BgL_alz00_719-BgL_blz00_720);}  else 
{ /* Ieee/string.scm 514 */
long BgL_cz00_726;
{ /* Ieee/string.scm 514 */
long BgL_auxz00_6619;long BgL_auxz00_6605;
{ /* Ieee/string.scm 515 */
unsigned char BgL_auxz00_6620;
{ /* Ieee/string.scm 515 */
unsigned char BgL_auxz00_6621;
{ /* Ieee/string.scm 515 */
long BgL_l2247z00_4080;
BgL_l2247z00_4080 = 
STRING_LENGTH(BgL_bz00_77); 
if(
BOUND_CHECK(BgL_rz00_723, BgL_l2247z00_4080))
{ /* Ieee/string.scm 515 */
BgL_auxz00_6621 = 
STRING_REF(BgL_bz00_77, BgL_rz00_723)
; }  else 
{ 
obj_t BgL_auxz00_6626;
BgL_auxz00_6626 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23953)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_rz00_723), BgL_bz00_77); 
FAILURE(BgL_auxz00_6626,BFALSE,BFALSE);} } 
BgL_auxz00_6620 = 
tolower(BgL_auxz00_6621); } 
BgL_auxz00_6619 = 
(BgL_auxz00_6620); } 
{ /* Ieee/string.scm 514 */
unsigned char BgL_auxz00_6606;
{ /* Ieee/string.scm 514 */
unsigned char BgL_auxz00_6607;
{ /* Ieee/string.scm 514 */
long BgL_l2243z00_4076;
BgL_l2243z00_4076 = 
STRING_LENGTH(BgL_az00_76); 
if(
BOUND_CHECK(BgL_rz00_723, BgL_l2243z00_4076))
{ /* Ieee/string.scm 514 */
BgL_auxz00_6607 = 
STRING_REF(BgL_az00_76, BgL_rz00_723)
; }  else 
{ 
obj_t BgL_auxz00_6612;
BgL_auxz00_6612 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23876)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_rz00_723), BgL_az00_76); 
FAILURE(BgL_auxz00_6612,BFALSE,BFALSE);} } 
BgL_auxz00_6606 = 
tolower(BgL_auxz00_6607); } 
BgL_auxz00_6605 = 
(BgL_auxz00_6606); } 
BgL_cz00_726 = 
(BgL_auxz00_6605-BgL_auxz00_6619); } 
if(
(BgL_cz00_726==((long)0)))
{ 
long BgL_rz00_6636;
BgL_rz00_6636 = 
(BgL_rz00_723+((long)1)); 
BgL_rz00_723 = BgL_rz00_6636; 
goto BgL_zc3anonymousza31322ze3z83_724;}  else 
{ /* Ieee/string.scm 516 */
return BgL_cz00_726;} } } } } } } } 
}



/* _string-compare3-ci */
obj_t BGl__stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t BgL_envz00_3975, obj_t BgL_az00_3976, obj_t BgL_bz00_3977)
{ AN_OBJECT;
{ /* Ieee/string.scm 507 */
{ /* Ieee/string.scm 508 */
long BgL_auxz00_6638;
{ /* Ieee/string.scm 508 */
obj_t BgL_auxz00_6646;obj_t BgL_auxz00_6639;
if(
STRINGP(BgL_bz00_3977))
{ /* Ieee/string.scm 508 */
BgL_auxz00_6646 = BgL_bz00_3977
; }  else 
{ 
obj_t BgL_auxz00_6649;
BgL_auxz00_6649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23665)), BGl_string3564z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_bz00_3977); 
FAILURE(BgL_auxz00_6649,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_3976))
{ /* Ieee/string.scm 508 */
BgL_auxz00_6639 = BgL_az00_3976
; }  else 
{ 
obj_t BgL_auxz00_6642;
BgL_auxz00_6642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)23665)), BGl_string3564z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_az00_3976); 
FAILURE(BgL_auxz00_6642,BFALSE,BFALSE);} 
BgL_auxz00_6638 = 
BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_6639, BgL_auxz00_6646); } 
return 
BINT(BgL_auxz00_6638);} } 
}



/* string-append */
BGL_EXPORTED_DEF obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t BgL_listz00_78)
{ AN_OBJECT;
{ /* Ieee/string.scm 527 */
if(
NULLP(BgL_listz00_78))
{ /* Ieee/string.scm 528 */
return BGl_string3565z00zz__r4_strings_6_7z00;}  else 
{ /* Ieee/string.scm 530 */
long BgL_lenz00_740;
{ 
obj_t BgL_listz00_2299;long BgL_resz00_2300;
BgL_listz00_2299 = BgL_listz00_78; 
BgL_resz00_2300 = ((long)0); 
BgL_stringzd2appendzd2_2298:
if(
NULLP(BgL_listz00_2299))
{ /* Ieee/string.scm 530 */
BgL_lenz00_740 = BgL_resz00_2300; }  else 
{ 
long BgL_resz00_6667;obj_t BgL_listz00_6659;
{ /* Ieee/string.scm 530 */
obj_t BgL_pairz00_2312;
if(
PAIRP(BgL_listz00_2299))
{ /* Ieee/string.scm 530 */
BgL_pairz00_2312 = BgL_listz00_2299; }  else 
{ 
obj_t BgL_auxz00_6662;
BgL_auxz00_6662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)24666)), BGl_string3566z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_listz00_2299); 
FAILURE(BgL_auxz00_6662,BFALSE,BFALSE);} 
BgL_listz00_6659 = 
CDR(BgL_pairz00_2312); } 
{ /* Ieee/string.scm 530 */
long BgL_auxz00_6668;
{ /* Ieee/string.scm 530 */
obj_t BgL_stringz00_2314;
{ /* Ieee/string.scm 530 */
obj_t BgL_pairz00_2313;
if(
PAIRP(BgL_listz00_2299))
{ /* Ieee/string.scm 530 */
BgL_pairz00_2313 = BgL_listz00_2299; }  else 
{ 
obj_t BgL_auxz00_6671;
BgL_auxz00_6671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)24666)), BGl_string3566z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_listz00_2299); 
FAILURE(BgL_auxz00_6671,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 530 */
obj_t BgL_aux2821z00_4654;
BgL_aux2821z00_4654 = 
CAR(BgL_pairz00_2313); 
if(
STRINGP(BgL_aux2821z00_4654))
{ /* Ieee/string.scm 530 */
BgL_stringz00_2314 = BgL_aux2821z00_4654; }  else 
{ 
obj_t BgL_auxz00_6678;
BgL_auxz00_6678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)24666)), BGl_string3566z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2821z00_4654); 
FAILURE(BgL_auxz00_6678,BFALSE,BFALSE);} } } 
BgL_auxz00_6668 = 
STRING_LENGTH(BgL_stringz00_2314); } 
BgL_resz00_6667 = 
(BgL_resz00_2300+BgL_auxz00_6668); } 
BgL_resz00_2300 = BgL_resz00_6667; 
BgL_listz00_2299 = BgL_listz00_6659; 
goto BgL_stringzd2appendzd2_2298;} } 
{ /* Ieee/string.scm 530 */
obj_t BgL_resz00_741;
BgL_resz00_741 = 
make_string_sans_fill(BgL_lenz00_740); 
{ /* Ieee/string.scm 537 */

{ 
obj_t BgL_listz00_743;long BgL_wz00_744;
BgL_listz00_743 = BgL_listz00_78; 
BgL_wz00_744 = ((long)0); 
BgL_zc3anonymousza31336ze3z83_745:
if(
NULLP(BgL_listz00_743))
{ /* Ieee/string.scm 540 */
return BgL_resz00_741;}  else 
{ /* Ieee/string.scm 542 */
obj_t BgL_sz00_747;
{ /* Ieee/string.scm 542 */
obj_t BgL_pairz00_2342;
if(
PAIRP(BgL_listz00_743))
{ /* Ieee/string.scm 542 */
BgL_pairz00_2342 = BgL_listz00_743; }  else 
{ 
obj_t BgL_auxz00_6689;
BgL_auxz00_6689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)24985)), BGl_string3566z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_listz00_743); 
FAILURE(BgL_auxz00_6689,BFALSE,BFALSE);} 
BgL_sz00_747 = 
CAR(BgL_pairz00_2342); } 
{ /* Ieee/string.scm 542 */
long BgL_lz00_748;
{ /* Ieee/string.scm 543 */
obj_t BgL_stringz00_2343;
if(
STRINGP(BgL_sz00_747))
{ /* Ieee/string.scm 543 */
BgL_stringz00_2343 = BgL_sz00_747; }  else 
{ 
obj_t BgL_auxz00_6696;
BgL_auxz00_6696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)24998)), BGl_string3566z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_sz00_747); 
FAILURE(BgL_auxz00_6696,BFALSE,BFALSE);} 
BgL_lz00_748 = 
STRING_LENGTH(BgL_stringz00_2343); } 
{ /* Ieee/string.scm 543 */

blit_string(BgL_sz00_747, ((long)0), BgL_resz00_741, BgL_wz00_744, BgL_lz00_748); 
{ 
long BgL_wz00_6704;obj_t BgL_listz00_6702;
BgL_listz00_6702 = 
CDR(BgL_listz00_743); 
BgL_wz00_6704 = 
(BgL_wz00_744+BgL_lz00_748); 
BgL_wz00_744 = BgL_wz00_6704; 
BgL_listz00_743 = BgL_listz00_6702; 
goto BgL_zc3anonymousza31336ze3z83_745;} } } } } } } } } 
}



/* _string-append */
obj_t BGl__stringzd2appendzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3978, obj_t BgL_listz00_3979)
{ AN_OBJECT;
{ /* Ieee/string.scm 527 */
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_listz00_3979);} 
}



/* list->string */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t BgL_listz00_79)
{ AN_OBJECT;
{ /* Ieee/string.scm 550 */
{ /* Ieee/string.scm 551 */
long BgL_lenz00_762;
BgL_lenz00_762 = 
bgl_list_length(BgL_listz00_79); 
{ /* Ieee/string.scm 551 */
obj_t BgL_stringz00_763;
BgL_stringz00_763 = 
make_string_sans_fill(BgL_lenz00_762); 
{ /* Ieee/string.scm 552 */

{ 
long BgL_iz00_765;obj_t BgL_lz00_766;
BgL_iz00_765 = ((long)0); 
BgL_lz00_766 = BgL_listz00_79; 
BgL_zc3anonymousza31346ze3z83_767:
if(
(BgL_iz00_765==BgL_lenz00_762))
{ /* Ieee/string.scm 555 */
return BgL_stringz00_763;}  else 
{ /* Ieee/string.scm 555 */
{ /* Ieee/string.scm 558 */
obj_t BgL_arg1348z00_769;
{ /* Ieee/string.scm 558 */
obj_t BgL_pairz00_2354;
if(
PAIRP(BgL_lz00_766))
{ /* Ieee/string.scm 558 */
BgL_pairz00_2354 = BgL_lz00_766; }  else 
{ 
obj_t BgL_auxz00_6713;
BgL_auxz00_6713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25540)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3515z00zz__r4_strings_6_7z00, BgL_lz00_766); 
FAILURE(BgL_auxz00_6713,BFALSE,BFALSE);} 
BgL_arg1348z00_769 = 
CAR(BgL_pairz00_2354); } 
{ /* Ieee/string.scm 558 */
unsigned char BgL_charz00_2357;
{ /* Ieee/string.scm 558 */
obj_t BgL_auxz00_6718;
if(
CHARP(BgL_arg1348z00_769))
{ /* Ieee/string.scm 558 */
BgL_auxz00_6718 = BgL_arg1348z00_769
; }  else 
{ 
obj_t BgL_auxz00_6721;
BgL_auxz00_6721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25541)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1348z00_769); 
FAILURE(BgL_auxz00_6721,BFALSE,BFALSE);} 
BgL_charz00_2357 = 
CCHAR(BgL_auxz00_6718); } 
{ /* Ieee/string.scm 558 */
long BgL_l2251z00_4084;
BgL_l2251z00_4084 = 
STRING_LENGTH(BgL_stringz00_763); 
if(
BOUND_CHECK(BgL_iz00_765, BgL_l2251z00_4084))
{ /* Ieee/string.scm 558 */
STRING_SET(BgL_stringz00_763, BgL_iz00_765, BgL_charz00_2357); }  else 
{ 
obj_t BgL_auxz00_6730;
BgL_auxz00_6730 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25510)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_765), BgL_stringz00_763); 
FAILURE(BgL_auxz00_6730,BFALSE,BFALSE);} } } } 
{ 
obj_t BgL_lz00_6737;long BgL_iz00_6735;
BgL_iz00_6735 = 
(BgL_iz00_765+((long)1)); 
BgL_lz00_6737 = 
CDR(BgL_lz00_766); 
BgL_lz00_766 = BgL_lz00_6737; 
BgL_iz00_765 = BgL_iz00_6735; 
goto BgL_zc3anonymousza31346ze3z83_767;} } } } } } } 
}



/* _list->string */
obj_t BGl__listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t BgL_envz00_3980, obj_t BgL_listz00_3981)
{ AN_OBJECT;
{ /* Ieee/string.scm 550 */
{ /* Ieee/string.scm 551 */
obj_t BgL_auxz00_6739;
{ /* Ieee/string.scm 551 */
bool_t BgL_testz00_6740;
if(
PAIRP(BgL_listz00_3981))
{ /* Ieee/string.scm 551 */
BgL_testz00_6740 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 551 */
BgL_testz00_6740 = 
NULLP(BgL_listz00_3981)
; } 
if(BgL_testz00_6740)
{ /* Ieee/string.scm 551 */
BgL_auxz00_6739 = BgL_listz00_3981
; }  else 
{ 
obj_t BgL_auxz00_6744;
BgL_auxz00_6744 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25358)), BGl_string3568z00zz__r4_strings_6_7z00, BGl_string3520z00zz__r4_strings_6_7z00, BgL_listz00_3981); 
FAILURE(BgL_auxz00_6744,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_6739);} } 
}



/* string->list */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t BgL_stringz00_80)
{ AN_OBJECT;
{ /* Ieee/string.scm 564 */
{ /* Ieee/string.scm 565 */
long BgL_lenz00_773;
BgL_lenz00_773 = 
STRING_LENGTH(BgL_stringz00_80); 
{ /* Ieee/string.scm 566 */
long BgL_g1101z00_774;
BgL_g1101z00_774 = 
(BgL_lenz00_773-((long)1)); 
{ 
long BgL_iz00_777;obj_t BgL_resz00_778;
{ /* Ieee/string.scm 566 */
obj_t BgL_aux2839z00_4672;
BgL_iz00_777 = BgL_g1101z00_774; 
BgL_resz00_778 = BNIL; 
BgL_zc3anonymousza31355ze3z83_779:
if(
(BgL_iz00_777==((long)-1)))
{ /* Ieee/string.scm 568 */
BgL_aux2839z00_4672 = BgL_resz00_778; }  else 
{ /* Ieee/string.scm 570 */
long BgL_arg1357z00_781;obj_t BgL_arg1358z00_782;
BgL_arg1357z00_781 = 
(BgL_iz00_777-((long)1)); 
{ /* Ieee/string.scm 571 */
unsigned char BgL_arg1359z00_783;
{ /* Ieee/string.scm 571 */
long BgL_l2255z00_4088;
BgL_l2255z00_4088 = 
STRING_LENGTH(BgL_stringz00_80); 
if(
BOUND_CHECK(BgL_iz00_777, BgL_l2255z00_4088))
{ /* Ieee/string.scm 571 */
BgL_arg1359z00_783 = 
STRING_REF(BgL_stringz00_80, BgL_iz00_777); }  else 
{ 
obj_t BgL_auxz00_6758;
BgL_auxz00_6758 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25977)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_777), BgL_stringz00_80); 
FAILURE(BgL_auxz00_6758,BFALSE,BFALSE);} } 
BgL_arg1358z00_782 = 
MAKE_PAIR(
BCHAR(BgL_arg1359z00_783), BgL_resz00_778); } 
{ 
obj_t BgL_resz00_6766;long BgL_iz00_6765;
BgL_iz00_6765 = BgL_arg1357z00_781; 
BgL_resz00_6766 = BgL_arg1358z00_782; 
BgL_resz00_778 = BgL_resz00_6766; 
BgL_iz00_777 = BgL_iz00_6765; 
goto BgL_zc3anonymousza31355ze3z83_779;} } 
{ /* Ieee/string.scm 566 */
bool_t BgL_testz00_6767;
if(
PAIRP(BgL_aux2839z00_4672))
{ /* Ieee/string.scm 566 */
BgL_testz00_6767 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 566 */
BgL_testz00_6767 = 
NULLP(BgL_aux2839z00_4672)
; } 
if(BgL_testz00_6767)
{ /* Ieee/string.scm 566 */
return BgL_aux2839z00_4672;}  else 
{ 
obj_t BgL_auxz00_6771;
BgL_auxz00_6771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25874)), BGl_string3569z00zz__r4_strings_6_7z00, BGl_string3520z00zz__r4_strings_6_7z00, BgL_aux2839z00_4672); 
FAILURE(BgL_auxz00_6771,BFALSE,BFALSE);} } } } } } } 
}



/* _string->list */
obj_t BGl__stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t BgL_envz00_3982, obj_t BgL_stringz00_3983)
{ AN_OBJECT;
{ /* Ieee/string.scm 564 */
{ /* Ieee/string.scm 565 */
obj_t BgL_auxz00_6775;
if(
STRINGP(BgL_stringz00_3983))
{ /* Ieee/string.scm 565 */
BgL_auxz00_6775 = BgL_stringz00_3983
; }  else 
{ 
obj_t BgL_auxz00_6778;
BgL_auxz00_6778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)25832)), BGl_string3570z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3983); 
FAILURE(BgL_auxz00_6778,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_auxz00_6775);} } 
}



/* string-copy */
BGL_EXPORTED_DEF obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_81)
{ AN_OBJECT;
{ /* Ieee/string.scm 576 */
{ /* Ieee/string.scm 577 */
long BgL_lenz00_785;
BgL_lenz00_785 = 
STRING_LENGTH(BgL_stringz00_81); 
{ /* Ieee/string.scm 577 */
obj_t BgL_newz00_786;
BgL_newz00_786 = 
make_string_sans_fill(BgL_lenz00_785); 
{ /* Ieee/string.scm 578 */

{ /* Ieee/string.scm 579 */
long BgL_g1103z00_787;
BgL_g1103z00_787 = 
(BgL_lenz00_785-((long)1)); 
{ 
long BgL_iz00_789;
BgL_iz00_789 = BgL_g1103z00_787; 
BgL_zc3anonymousza31360ze3z83_790:
if(
(BgL_iz00_789==((long)-1)))
{ /* Ieee/string.scm 580 */
return BgL_newz00_786;}  else 
{ /* Ieee/string.scm 580 */
{ /* Ieee/string.scm 583 */
unsigned char BgL_arg1367z00_792;
{ /* Ieee/string.scm 583 */
long BgL_l2259z00_4092;
BgL_l2259z00_4092 = 
STRING_LENGTH(BgL_stringz00_81); 
if(
BOUND_CHECK(BgL_iz00_789, BgL_l2259z00_4092))
{ /* Ieee/string.scm 583 */
BgL_arg1367z00_792 = 
STRING_REF(BgL_stringz00_81, BgL_iz00_789); }  else 
{ 
obj_t BgL_auxz00_6792;
BgL_auxz00_6792 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26438)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_789), BgL_stringz00_81); 
FAILURE(BgL_auxz00_6792,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 583 */
long BgL_l2263z00_4096;
BgL_l2263z00_4096 = 
STRING_LENGTH(BgL_newz00_786); 
if(
BOUND_CHECK(BgL_iz00_789, BgL_l2263z00_4096))
{ /* Ieee/string.scm 583 */
STRING_SET(BgL_newz00_786, BgL_iz00_789, BgL_arg1367z00_792); }  else 
{ 
obj_t BgL_auxz00_6801;
BgL_auxz00_6801 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26416)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_789), BgL_newz00_786); 
FAILURE(BgL_auxz00_6801,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_6806;
BgL_iz00_6806 = 
(BgL_iz00_789-((long)1)); 
BgL_iz00_789 = BgL_iz00_6806; 
goto BgL_zc3anonymousza31360ze3z83_790;} } } } } } } } 
}



/* _string-copy */
obj_t BGl__stringzd2copyzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3984, obj_t BgL_stringz00_3985)
{ AN_OBJECT;
{ /* Ieee/string.scm 576 */
{ /* Ieee/string.scm 577 */
obj_t BgL_auxz00_6808;
if(
STRINGP(BgL_stringz00_3985))
{ /* Ieee/string.scm 577 */
BgL_auxz00_6808 = BgL_stringz00_3985
; }  else 
{ 
obj_t BgL_auxz00_6811;
BgL_auxz00_6811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26267)), BGl_string3571z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3985); 
FAILURE(BgL_auxz00_6811,BFALSE,BFALSE);} 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_auxz00_6808);} } 
}



/* string-fill! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_82, unsigned char BgL_charz00_83)
{ AN_OBJECT;
{ /* Ieee/string.scm 589 */
{ /* Ieee/string.scm 590 */
long BgL_lenz00_795;
BgL_lenz00_795 = 
STRING_LENGTH(BgL_stringz00_82); 
{ 
long BgL_iz00_797;
BgL_iz00_797 = ((long)0); 
BgL_zc3anonymousza31369ze3z83_798:
if(
(BgL_iz00_797==BgL_lenz00_795))
{ /* Ieee/string.scm 592 */
return BUNSPEC;}  else 
{ /* Ieee/string.scm 592 */
{ /* Ieee/string.scm 595 */
long BgL_l2267z00_4100;
BgL_l2267z00_4100 = 
STRING_LENGTH(BgL_stringz00_82); 
if(
BOUND_CHECK(BgL_iz00_797, BgL_l2267z00_4100))
{ /* Ieee/string.scm 595 */
STRING_SET(BgL_stringz00_82, BgL_iz00_797, BgL_charz00_83); }  else 
{ 
obj_t BgL_auxz00_6823;
BgL_auxz00_6823 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26861)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_797), BgL_stringz00_82); 
FAILURE(BgL_auxz00_6823,BFALSE,BFALSE);} } 
{ 
long BgL_iz00_6828;
BgL_iz00_6828 = 
(BgL_iz00_797+((long)1)); 
BgL_iz00_797 = BgL_iz00_6828; 
goto BgL_zc3anonymousza31369ze3z83_798;} } } } } 
}



/* _string-fill! */
obj_t BGl__stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_3986, obj_t BgL_stringz00_3987, obj_t BgL_charz00_3988)
{ AN_OBJECT;
{ /* Ieee/string.scm 589 */
{ /* Ieee/string.scm 590 */
unsigned char BgL_auxz00_6837;obj_t BgL_auxz00_6830;
{ /* Ieee/string.scm 590 */
obj_t BgL_auxz00_6838;
if(
CHARP(BgL_charz00_3988))
{ /* Ieee/string.scm 590 */
BgL_auxz00_6838 = BgL_charz00_3988
; }  else 
{ 
obj_t BgL_auxz00_6841;
BgL_auxz00_6841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26749)), BGl_string3572z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_charz00_3988); 
FAILURE(BgL_auxz00_6841,BFALSE,BFALSE);} 
BgL_auxz00_6837 = 
CCHAR(BgL_auxz00_6838); } 
if(
STRINGP(BgL_stringz00_3987))
{ /* Ieee/string.scm 590 */
BgL_auxz00_6830 = BgL_stringz00_3987
; }  else 
{ 
obj_t BgL_auxz00_6833;
BgL_auxz00_6833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)26749)), BGl_string3572z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3987); 
FAILURE(BgL_auxz00_6833,BFALSE,BFALSE);} 
return 
BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_auxz00_6830, BgL_auxz00_6837);} } 
}



/* string-upcase */
BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_84)
{ AN_OBJECT;
{ /* Ieee/string.scm 601 */
{ /* Ieee/string.scm 602 */
long BgL_lenz00_802;
BgL_lenz00_802 = 
STRING_LENGTH(BgL_stringz00_84); 
{ /* Ieee/string.scm 602 */
obj_t BgL_resz00_803;
BgL_resz00_803 = 
make_string_sans_fill(BgL_lenz00_802); 
{ /* Ieee/string.scm 603 */

{ 
long BgL_iz00_805;
BgL_iz00_805 = ((long)0); 
BgL_zc3anonymousza31372ze3z83_806:
if(
(BgL_iz00_805==BgL_lenz00_802))
{ /* Ieee/string.scm 605 */
return BgL_resz00_803;}  else 
{ /* Ieee/string.scm 605 */
{ /* Ieee/string.scm 608 */
unsigned char BgL_arg1374z00_808;
{ /* Ieee/string.scm 608 */
unsigned char BgL_auxz00_6851;
{ /* Ieee/string.scm 608 */
long BgL_l2271z00_4104;
BgL_l2271z00_4104 = 
STRING_LENGTH(BgL_stringz00_84); 
if(
BOUND_CHECK(BgL_iz00_805, BgL_l2271z00_4104))
{ /* Ieee/string.scm 608 */
BgL_auxz00_6851 = 
STRING_REF(BgL_stringz00_84, BgL_iz00_805)
; }  else 
{ 
obj_t BgL_auxz00_6856;
BgL_auxz00_6856 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27348)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_805), BgL_stringz00_84); 
FAILURE(BgL_auxz00_6856,BFALSE,BFALSE);} } 
BgL_arg1374z00_808 = 
toupper(BgL_auxz00_6851); } 
{ /* Ieee/string.scm 608 */
long BgL_l2275z00_4108;
BgL_l2275z00_4108 = 
STRING_LENGTH(BgL_resz00_803); 
if(
BOUND_CHECK(BgL_iz00_805, BgL_l2275z00_4108))
{ /* Ieee/string.scm 608 */
STRING_SET(BgL_resz00_803, BgL_iz00_805, BgL_arg1374z00_808); }  else 
{ 
obj_t BgL_auxz00_6866;
BgL_auxz00_6866 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27313)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_805), BgL_resz00_803); 
FAILURE(BgL_auxz00_6866,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_6871;
BgL_iz00_6871 = 
(BgL_iz00_805+((long)1)); 
BgL_iz00_805 = BgL_iz00_6871; 
goto BgL_zc3anonymousza31372ze3z83_806;} } } } } } } 
}



/* _string-upcase */
obj_t BGl__stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3989, obj_t BgL_stringz00_3990)
{ AN_OBJECT;
{ /* Ieee/string.scm 601 */
{ /* Ieee/string.scm 602 */
obj_t BgL_auxz00_6873;
if(
STRINGP(BgL_stringz00_3990))
{ /* Ieee/string.scm 602 */
BgL_auxz00_6873 = BgL_stringz00_3990
; }  else 
{ 
obj_t BgL_auxz00_6876;
BgL_auxz00_6876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27173)), BGl_string3573z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3990); 
FAILURE(BgL_auxz00_6876,BFALSE,BFALSE);} 
return 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_auxz00_6873);} } 
}



/* string-downcase */
BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_85)
{ AN_OBJECT;
{ /* Ieee/string.scm 614 */
{ /* Ieee/string.scm 615 */
long BgL_lenz00_812;
BgL_lenz00_812 = 
STRING_LENGTH(BgL_stringz00_85); 
{ /* Ieee/string.scm 615 */
obj_t BgL_resz00_813;
BgL_resz00_813 = 
make_string_sans_fill(BgL_lenz00_812); 
{ /* Ieee/string.scm 616 */

{ 
long BgL_iz00_815;
BgL_iz00_815 = ((long)0); 
BgL_zc3anonymousza31377ze3z83_816:
if(
(BgL_iz00_815==BgL_lenz00_812))
{ /* Ieee/string.scm 618 */
return BgL_resz00_813;}  else 
{ /* Ieee/string.scm 618 */
{ /* Ieee/string.scm 621 */
unsigned char BgL_arg1379z00_818;
{ /* Ieee/string.scm 621 */
unsigned char BgL_auxz00_6885;
{ /* Ieee/string.scm 621 */
long BgL_l2279z00_4112;
BgL_l2279z00_4112 = 
STRING_LENGTH(BgL_stringz00_85); 
if(
BOUND_CHECK(BgL_iz00_815, BgL_l2279z00_4112))
{ /* Ieee/string.scm 621 */
BgL_auxz00_6885 = 
STRING_REF(BgL_stringz00_85, BgL_iz00_815)
; }  else 
{ 
obj_t BgL_auxz00_6890;
BgL_auxz00_6890 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27835)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_815), BgL_stringz00_85); 
FAILURE(BgL_auxz00_6890,BFALSE,BFALSE);} } 
BgL_arg1379z00_818 = 
tolower(BgL_auxz00_6885); } 
{ /* Ieee/string.scm 621 */
long BgL_l2283z00_4116;
BgL_l2283z00_4116 = 
STRING_LENGTH(BgL_resz00_813); 
if(
BOUND_CHECK(BgL_iz00_815, BgL_l2283z00_4116))
{ /* Ieee/string.scm 621 */
STRING_SET(BgL_resz00_813, BgL_iz00_815, BgL_arg1379z00_818); }  else 
{ 
obj_t BgL_auxz00_6900;
BgL_auxz00_6900 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27798)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_815), BgL_resz00_813); 
FAILURE(BgL_auxz00_6900,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_6905;
BgL_iz00_6905 = 
(BgL_iz00_815+((long)1)); 
BgL_iz00_815 = BgL_iz00_6905; 
goto BgL_zc3anonymousza31377ze3z83_816;} } } } } } } 
}



/* _string-downcase */
obj_t BGl__stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_3991, obj_t BgL_stringz00_3992)
{ AN_OBJECT;
{ /* Ieee/string.scm 614 */
{ /* Ieee/string.scm 615 */
obj_t BgL_auxz00_6907;
if(
STRINGP(BgL_stringz00_3992))
{ /* Ieee/string.scm 615 */
BgL_auxz00_6907 = BgL_stringz00_3992
; }  else 
{ 
obj_t BgL_auxz00_6910;
BgL_auxz00_6910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)27658)), BGl_string3574z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3992); 
FAILURE(BgL_auxz00_6910,BFALSE,BFALSE);} 
return 
BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_auxz00_6907);} } 
}



/* string-upcase! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_86)
{ AN_OBJECT;
{ /* Ieee/string.scm 627 */
{ /* Ieee/string.scm 628 */
long BgL_lenz00_822;
BgL_lenz00_822 = 
STRING_LENGTH(BgL_stringz00_86); 
{ 
long BgL_iz00_824;
BgL_iz00_824 = ((long)0); 
BgL_zc3anonymousza31382ze3z83_825:
if(
(BgL_iz00_824==BgL_lenz00_822))
{ /* Ieee/string.scm 630 */
return BgL_stringz00_86;}  else 
{ /* Ieee/string.scm 630 */
{ /* Ieee/string.scm 633 */
unsigned char BgL_arg1384z00_827;
{ /* Ieee/string.scm 633 */
unsigned char BgL_auxz00_6918;
{ /* Ieee/string.scm 633 */
long BgL_l2287z00_4120;
BgL_l2287z00_4120 = 
STRING_LENGTH(BgL_stringz00_86); 
if(
BOUND_CHECK(BgL_iz00_824, BgL_l2287z00_4120))
{ /* Ieee/string.scm 633 */
BgL_auxz00_6918 = 
STRING_REF(BgL_stringz00_86, BgL_iz00_824)
; }  else 
{ 
obj_t BgL_auxz00_6923;
BgL_auxz00_6923 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28288)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_824), BgL_stringz00_86); 
FAILURE(BgL_auxz00_6923,BFALSE,BFALSE);} } 
BgL_arg1384z00_827 = 
toupper(BgL_auxz00_6918); } 
{ /* Ieee/string.scm 633 */
long BgL_l2291z00_4124;
BgL_l2291z00_4124 = 
STRING_LENGTH(BgL_stringz00_86); 
if(
BOUND_CHECK(BgL_iz00_824, BgL_l2291z00_4124))
{ /* Ieee/string.scm 633 */
STRING_SET(BgL_stringz00_86, BgL_iz00_824, BgL_arg1384z00_827); }  else 
{ 
obj_t BgL_auxz00_6933;
BgL_auxz00_6933 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28250)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_824), BgL_stringz00_86); 
FAILURE(BgL_auxz00_6933,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_6938;
BgL_iz00_6938 = 
(BgL_iz00_824+((long)1)); 
BgL_iz00_824 = BgL_iz00_6938; 
goto BgL_zc3anonymousza31382ze3z83_825;} } } } } 
}



/* _string-upcase! */
obj_t BGl__stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_3993, obj_t BgL_stringz00_3994)
{ AN_OBJECT;
{ /* Ieee/string.scm 627 */
{ /* Ieee/string.scm 628 */
obj_t BgL_auxz00_6940;
if(
STRINGP(BgL_stringz00_3994))
{ /* Ieee/string.scm 628 */
BgL_auxz00_6940 = BgL_stringz00_3994
; }  else 
{ 
obj_t BgL_auxz00_6943;
BgL_auxz00_6943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28144)), BGl_string3575z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3994); 
FAILURE(BgL_auxz00_6943,BFALSE,BFALSE);} 
return 
BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_6940);} } 
}



/* string-downcase! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_87)
{ AN_OBJECT;
{ /* Ieee/string.scm 639 */
{ /* Ieee/string.scm 640 */
long BgL_lenz00_831;
BgL_lenz00_831 = 
STRING_LENGTH(BgL_stringz00_87); 
{ 
long BgL_iz00_833;
BgL_iz00_833 = ((long)0); 
BgL_zc3anonymousza31387ze3z83_834:
if(
(BgL_iz00_833==BgL_lenz00_831))
{ /* Ieee/string.scm 642 */
return BgL_stringz00_87;}  else 
{ /* Ieee/string.scm 642 */
{ /* Ieee/string.scm 645 */
unsigned char BgL_arg1389z00_836;
{ /* Ieee/string.scm 645 */
unsigned char BgL_auxz00_6951;
{ /* Ieee/string.scm 645 */
long BgL_l2295z00_4128;
BgL_l2295z00_4128 = 
STRING_LENGTH(BgL_stringz00_87); 
if(
BOUND_CHECK(BgL_iz00_833, BgL_l2295z00_4128))
{ /* Ieee/string.scm 645 */
BgL_auxz00_6951 = 
STRING_REF(BgL_stringz00_87, BgL_iz00_833)
; }  else 
{ 
obj_t BgL_auxz00_6956;
BgL_auxz00_6956 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28745)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_833), BgL_stringz00_87); 
FAILURE(BgL_auxz00_6956,BFALSE,BFALSE);} } 
BgL_arg1389z00_836 = 
tolower(BgL_auxz00_6951); } 
{ /* Ieee/string.scm 645 */
long BgL_l2299z00_4132;
BgL_l2299z00_4132 = 
STRING_LENGTH(BgL_stringz00_87); 
if(
BOUND_CHECK(BgL_iz00_833, BgL_l2299z00_4132))
{ /* Ieee/string.scm 645 */
STRING_SET(BgL_stringz00_87, BgL_iz00_833, BgL_arg1389z00_836); }  else 
{ 
obj_t BgL_auxz00_6966;
BgL_auxz00_6966 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28705)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_833), BgL_stringz00_87); 
FAILURE(BgL_auxz00_6966,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_6971;
BgL_iz00_6971 = 
(BgL_iz00_833+((long)1)); 
BgL_iz00_833 = BgL_iz00_6971; 
goto BgL_zc3anonymousza31387ze3z83_834;} } } } } 
}



/* _string-downcase! */
obj_t BGl__stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_3995, obj_t BgL_stringz00_3996)
{ AN_OBJECT;
{ /* Ieee/string.scm 639 */
{ /* Ieee/string.scm 640 */
obj_t BgL_auxz00_6973;
if(
STRINGP(BgL_stringz00_3996))
{ /* Ieee/string.scm 640 */
BgL_auxz00_6973 = BgL_stringz00_3996
; }  else 
{ 
obj_t BgL_auxz00_6976;
BgL_auxz00_6976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)28599)), BGl_string3576z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3996); 
FAILURE(BgL_auxz00_6976,BFALSE,BFALSE);} 
return 
BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_6973);} } 
}



/* string-capitalize! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t BgL_stringz00_88)
{ AN_OBJECT;
{ /* Ieee/string.scm 655 */
{ /* Ieee/string.scm 656 */
bool_t BgL_nonzd2firstzd2alphaz00_840;long BgL_stringzd2lenzd2_841;
BgL_nonzd2firstzd2alphaz00_840 = ((bool_t)0); 
BgL_stringzd2lenzd2_841 = 
STRING_LENGTH(BgL_stringz00_88); 
{ 
long BgL_iz00_843;
BgL_iz00_843 = ((long)0); 
BgL_zc3anonymousza31392ze3z83_844:
if(
(BgL_iz00_843==BgL_stringzd2lenzd2_841))
{ /* Ieee/string.scm 658 */
return BgL_stringz00_88;}  else 
{ /* Ieee/string.scm 658 */
{ /* Ieee/string.scm 660 */
unsigned char BgL_cz00_846;
{ /* Ieee/string.scm 660 */
long BgL_l2303z00_4136;
BgL_l2303z00_4136 = 
STRING_LENGTH(BgL_stringz00_88); 
if(
BOUND_CHECK(BgL_iz00_843, BgL_l2303z00_4136))
{ /* Ieee/string.scm 660 */
BgL_cz00_846 = 
STRING_REF(BgL_stringz00_88, BgL_iz00_843); }  else 
{ 
obj_t BgL_auxz00_6988;
BgL_auxz00_6988 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)29501)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_843), BgL_stringz00_88); 
FAILURE(BgL_auxz00_6988,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 661 */
bool_t BgL_testz00_6993;
if(
isalpha(BgL_cz00_846))
{ /* Ieee/string.scm 661 */
BgL_testz00_6993 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 661 */
BgL_testz00_6993 = 
(
(BgL_cz00_846)>((long)127))
; } 
if(BgL_testz00_6993)
{ /* Ieee/string.scm 661 */
if(BgL_nonzd2firstzd2alphaz00_840)
{ /* Ieee/string.scm 663 */
unsigned char BgL_arg1395z00_848;
BgL_arg1395z00_848 = 
tolower(BgL_cz00_846); 
{ /* Ieee/string.scm 663 */
long BgL_l2307z00_4140;
BgL_l2307z00_4140 = 
STRING_LENGTH(BgL_stringz00_88); 
if(
BOUND_CHECK(BgL_iz00_843, BgL_l2307z00_4140))
{ /* Ieee/string.scm 663 */
STRING_SET(BgL_stringz00_88, BgL_iz00_843, BgL_arg1395z00_848); }  else 
{ 
obj_t BgL_auxz00_7004;
BgL_auxz00_7004 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)29619)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_843), BgL_stringz00_88); 
FAILURE(BgL_auxz00_7004,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 662 */
BgL_nonzd2firstzd2alphaz00_840 = ((bool_t)1); 
{ /* Ieee/string.scm 666 */
unsigned char BgL_arg1396z00_849;
BgL_arg1396z00_849 = 
toupper(BgL_cz00_846); 
{ /* Ieee/string.scm 666 */
long BgL_l2311z00_4144;
BgL_l2311z00_4144 = 
STRING_LENGTH(BgL_stringz00_88); 
if(
BOUND_CHECK(BgL_iz00_843, BgL_l2311z00_4144))
{ /* Ieee/string.scm 666 */
STRING_SET(BgL_stringz00_88, BgL_iz00_843, BgL_arg1396z00_849); }  else 
{ 
obj_t BgL_auxz00_7014;
BgL_auxz00_7014 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)29720)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_843), BgL_stringz00_88); 
FAILURE(BgL_auxz00_7014,BFALSE,BFALSE);} } } } }  else 
{ /* Ieee/string.scm 661 */
BgL_nonzd2firstzd2alphaz00_840 = ((bool_t)0); } } } 
{ 
long BgL_iz00_7019;
BgL_iz00_7019 = 
(BgL_iz00_843+((long)1)); 
BgL_iz00_843 = BgL_iz00_7019; 
goto BgL_zc3anonymousza31392ze3z83_844;} } } } } 
}



/* _string-capitalize! */
obj_t BGl__stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t BgL_envz00_3997, obj_t BgL_stringz00_3998)
{ AN_OBJECT;
{ /* Ieee/string.scm 655 */
{ /* Ieee/string.scm 656 */
obj_t BgL_auxz00_7021;
if(
STRINGP(BgL_stringz00_3998))
{ /* Ieee/string.scm 656 */
BgL_auxz00_7021 = BgL_stringz00_3998
; }  else 
{ 
obj_t BgL_auxz00_7024;
BgL_auxz00_7024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)29354)), BGl_string3577z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_3998); 
FAILURE(BgL_auxz00_7024,BFALSE,BFALSE);} 
return 
BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(BgL_auxz00_7021);} } 
}



/* string-capitalize */
BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t BgL_stringz00_89)
{ AN_OBJECT;
{ /* Ieee/string.scm 672 */
return 
BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_89));} 
}



/* _string-capitalize */
obj_t BGl__stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t BgL_envz00_3999, obj_t BgL_stringz00_4000)
{ AN_OBJECT;
{ /* Ieee/string.scm 672 */
{ /* Ieee/string.scm 673 */
obj_t BgL_auxz00_7031;
if(
STRINGP(BgL_stringz00_4000))
{ /* Ieee/string.scm 673 */
BgL_auxz00_7031 = BgL_stringz00_4000
; }  else 
{ 
obj_t BgL_auxz00_7034;
BgL_auxz00_7034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)30078)), BGl_string3578z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_4000); 
FAILURE(BgL_auxz00_7034,BFALSE,BFALSE);} 
return 
BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(BgL_auxz00_7031);} } 
}



/* string-for-read */
BGL_EXPORTED_DEF obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_90)
{ AN_OBJECT;
{ /* Ieee/string.scm 678 */
return 
string_for_read(BgL_stringz00_90);} 
}



/* _string-for-read */
obj_t BGl__stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4001, obj_t BgL_stringz00_4002)
{ AN_OBJECT;
{ /* Ieee/string.scm 678 */
{ /* Ieee/string.scm 679 */
obj_t BgL_stringz00_5477;
if(
STRINGP(BgL_stringz00_4002))
{ /* Ieee/string.scm 679 */
BgL_stringz00_5477 = BgL_stringz00_4002; }  else 
{ 
obj_t BgL_auxz00_7042;
BgL_auxz00_7042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)30367)), BGl_string3579z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_4002); 
FAILURE(BgL_auxz00_7042,BFALSE,BFALSE);} 
return 
string_for_read(BgL_stringz00_5477);} } 
}



/* escape-C-string */
BGL_EXPORTED_DEF obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_91)
{ AN_OBJECT;
{ /* Ieee/string.scm 686 */
{ /* Ieee/string.scm 687 */
obj_t BgL_arg1402z00_5478;
{ /* Ieee/string.scm 687 */
long BgL_endz00_5479;
BgL_endz00_5479 = 
STRING_LENGTH(BgL_strz00_91); 
{ /* Ieee/string.scm 687 */

BgL_arg1402z00_5478 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_91, ((long)1), BgL_endz00_5479); } } 
return 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_arg1402z00_5478), ((long)0), 
STRING_LENGTH(BgL_arg1402z00_5478));} } 
}



/* _escape-C-string */
obj_t BGl__escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4003, obj_t BgL_strz00_4004)
{ AN_OBJECT;
{ /* Ieee/string.scm 686 */
{ /* Ieee/string.scm 687 */
obj_t BgL_res3703z00_5483;
{ /* Ieee/string.scm 687 */
obj_t BgL_strz00_5480;
if(
STRINGP(BgL_strz00_4004))
{ /* Ieee/string.scm 687 */
BgL_strz00_5480 = BgL_strz00_4004; }  else 
{ 
obj_t BgL_auxz00_7054;
BgL_auxz00_7054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)30821)), BGl_string3580z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4004); 
FAILURE(BgL_auxz00_7054,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 687 */
obj_t BgL_arg1402z00_5481;
{ /* Ieee/string.scm 687 */
long BgL_endz00_5482;
BgL_endz00_5482 = 
STRING_LENGTH(BgL_strz00_5480); 
{ /* Ieee/string.scm 687 */

BgL_arg1402z00_5481 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_5480, ((long)1), BgL_endz00_5482); } } 
BgL_res3703z00_5483 = 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_arg1402z00_5481), ((long)0), 
STRING_LENGTH(BgL_arg1402z00_5481)); } } 
return BgL_res3703z00_5483;} } 
}



/* escape-scheme-string */
BGL_EXPORTED_DEF obj_t BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_92)
{ AN_OBJECT;
{ /* Ieee/string.scm 694 */
return 
bgl_escape_scheme_string(
BSTRING_TO_STRING(BgL_strz00_92), ((long)0), 
STRING_LENGTH(BgL_strz00_92));} 
}



/* _escape-scheme-string */
obj_t BGl__escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4005, obj_t BgL_strz00_4006)
{ AN_OBJECT;
{ /* Ieee/string.scm 694 */
{ /* Ieee/string.scm 695 */
obj_t BgL_strz00_5484;
if(
STRINGP(BgL_strz00_4006))
{ /* Ieee/string.scm 695 */
BgL_strz00_5484 = BgL_strz00_4006; }  else 
{ 
obj_t BgL_auxz00_7068;
BgL_auxz00_7068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31257)), BGl_string3581z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4006); 
FAILURE(BgL_auxz00_7068,BFALSE,BFALSE);} 
return 
bgl_escape_scheme_string(
BSTRING_TO_STRING(BgL_strz00_5484), ((long)0), 
STRING_LENGTH(BgL_strz00_5484));} } 
}



/* string-as-read */
BGL_EXPORTED_DEF obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t BgL_strz00_93)
{ AN_OBJECT;
{ /* Ieee/string.scm 700 */
return 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_strz00_93), ((long)0), 
STRING_LENGTH(BgL_strz00_93));} 
}



/* _string-as-read */
obj_t BGl__stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4007, obj_t BgL_strz00_4008)
{ AN_OBJECT;
{ /* Ieee/string.scm 700 */
{ /* Ieee/string.scm 701 */
obj_t BgL_strz00_5485;
if(
STRINGP(BgL_strz00_4008))
{ /* Ieee/string.scm 701 */
BgL_strz00_5485 = BgL_strz00_4008; }  else 
{ 
obj_t BgL_auxz00_7080;
BgL_auxz00_7080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31570)), BGl_string3582z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4008); 
FAILURE(BgL_auxz00_7080,BFALSE,BFALSE);} 
return 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_strz00_5485), ((long)0), 
STRING_LENGTH(BgL_strz00_5485));} } 
}



/* blit-string-ur! */
BGL_EXPORTED_DEF obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_s1z00_94, long BgL_o1z00_95, obj_t BgL_s2z00_96, long BgL_o2z00_97, long BgL_lz00_98)
{ AN_OBJECT;
{ /* Ieee/string.scm 706 */
return 
blit_string(BgL_s1z00_94, BgL_o1z00_95, BgL_s2z00_96, BgL_o2z00_97, BgL_lz00_98);} 
}



/* _blit-string-ur! */
obj_t BGl__blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_envz00_4009, obj_t BgL_s1z00_4010, obj_t BgL_o1z00_4011, obj_t BgL_s2z00_4012, obj_t BgL_o2z00_4013, obj_t BgL_lz00_4014)
{ AN_OBJECT;
{ /* Ieee/string.scm 706 */
{ /* Ieee/string.scm 707 */
obj_t BgL_s1z00_5486;long BgL_o1z00_5487;obj_t BgL_s2z00_5488;long BgL_o2z00_5489;long BgL_lz00_5490;
if(
STRINGP(BgL_s1z00_4010))
{ /* Ieee/string.scm 707 */
BgL_s1z00_5486 = BgL_s1z00_4010; }  else 
{ 
obj_t BgL_auxz00_7090;
BgL_auxz00_7090 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31889)), BGl_string3583z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_s1z00_4010); 
FAILURE(BgL_auxz00_7090,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 707 */
obj_t BgL_auxz00_7094;
if(
INTEGERP(BgL_o1z00_4011))
{ /* Ieee/string.scm 707 */
BgL_auxz00_7094 = BgL_o1z00_4011
; }  else 
{ 
obj_t BgL_auxz00_7097;
BgL_auxz00_7097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31889)), BGl_string3583z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_o1z00_4011); 
FAILURE(BgL_auxz00_7097,BFALSE,BFALSE);} 
BgL_o1z00_5487 = 
(long)CINT(BgL_auxz00_7094); } 
if(
STRINGP(BgL_s2z00_4012))
{ /* Ieee/string.scm 707 */
BgL_s2z00_5488 = BgL_s2z00_4012; }  else 
{ 
obj_t BgL_auxz00_7104;
BgL_auxz00_7104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31889)), BGl_string3583z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_s2z00_4012); 
FAILURE(BgL_auxz00_7104,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 707 */
obj_t BgL_auxz00_7108;
if(
INTEGERP(BgL_o2z00_4013))
{ /* Ieee/string.scm 707 */
BgL_auxz00_7108 = BgL_o2z00_4013
; }  else 
{ 
obj_t BgL_auxz00_7111;
BgL_auxz00_7111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31889)), BGl_string3583z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_o2z00_4013); 
FAILURE(BgL_auxz00_7111,BFALSE,BFALSE);} 
BgL_o2z00_5489 = 
(long)CINT(BgL_auxz00_7108); } 
{ /* Ieee/string.scm 707 */
obj_t BgL_auxz00_7116;
if(
INTEGERP(BgL_lz00_4014))
{ /* Ieee/string.scm 707 */
BgL_auxz00_7116 = BgL_lz00_4014
; }  else 
{ 
obj_t BgL_auxz00_7119;
BgL_auxz00_7119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)31889)), BGl_string3583z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lz00_4014); 
FAILURE(BgL_auxz00_7119,BFALSE,BFALSE);} 
BgL_lz00_5490 = 
(long)CINT(BgL_auxz00_7116); } 
return 
blit_string(BgL_s1z00_5486, BgL_o1z00_5487, BgL_s2z00_5488, BgL_o2z00_5489, BgL_lz00_5490);} } 
}



/* blit-string! */
BGL_EXPORTED_DEF obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t BgL_s1z00_99, long BgL_o1z00_100, obj_t BgL_s2z00_101, long BgL_o2z00_102, long BgL_lz00_103)
{ AN_OBJECT;
{ /* Ieee/string.scm 712 */
{ /* Ieee/string.scm 713 */
bool_t BgL_testz00_7125;
{ /* Ieee/string.scm 713 */
bool_t BgL_testz00_7126;
{ /* Ieee/string.scm 713 */
long BgL_auxz00_7129;long BgL_auxz00_7127;
BgL_auxz00_7129 = 
(
STRING_LENGTH(BgL_s1z00_99)+((long)1)); 
BgL_auxz00_7127 = 
(BgL_lz00_103+BgL_o1z00_100); 
BgL_testz00_7126 = 
BOUND_CHECK(BgL_auxz00_7127, BgL_auxz00_7129); } 
if(BgL_testz00_7126)
{ /* Ieee/string.scm 714 */
long BgL_auxz00_7135;long BgL_auxz00_7133;
BgL_auxz00_7135 = 
(
STRING_LENGTH(BgL_s2z00_101)+((long)1)); 
BgL_auxz00_7133 = 
(BgL_lz00_103+BgL_o2z00_102); 
BgL_testz00_7125 = 
BOUND_CHECK(BgL_auxz00_7133, BgL_auxz00_7135); }  else 
{ /* Ieee/string.scm 713 */
BgL_testz00_7125 = ((bool_t)0)
; } } 
if(BgL_testz00_7125)
{ /* Ieee/string.scm 713 */
return 
blit_string(BgL_s1z00_99, BgL_o1z00_100, BgL_s2z00_101, BgL_o2z00_102, BgL_lz00_103);}  else 
{ /* Ieee/string.scm 716 */
obj_t BgL_arg1409z00_866;obj_t BgL_arg1410z00_867;
{ /* Ieee/string.scm 717 */
obj_t BgL_list1411z00_868;
{ /* Ieee/string.scm 717 */
obj_t BgL_arg1413z00_870;
{ /* Ieee/string.scm 717 */
obj_t BgL_arg1414z00_871;
{ /* Ieee/string.scm 717 */
obj_t BgL_arg1416z00_873;
{ /* Ieee/string.scm 717 */
obj_t BgL_arg1417z00_874;
BgL_arg1417z00_874 = 
MAKE_PAIR(BGl_string3584z00zz__r4_strings_6_7z00, BNIL); 
BgL_arg1416z00_873 = 
MAKE_PAIR(BgL_s2z00_101, BgL_arg1417z00_874); } 
BgL_arg1414z00_871 = 
MAKE_PAIR(BGl_string3585z00zz__r4_strings_6_7z00, BgL_arg1416z00_873); } 
BgL_arg1413z00_870 = 
MAKE_PAIR(BgL_s1z00_99, BgL_arg1414z00_871); } 
BgL_list1411z00_868 = 
MAKE_PAIR(BGl_string3586z00zz__r4_strings_6_7z00, BgL_arg1413z00_870); } 
BgL_arg1409z00_866 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1411z00_868); } 
{ /* Ieee/string.scm 718 */
long BgL_arg1418z00_875;long BgL_arg1419z00_876;
BgL_arg1418z00_875 = 
STRING_LENGTH(BgL_s1z00_99); 
BgL_arg1419z00_876 = 
STRING_LENGTH(BgL_s2z00_101); 
{ /* Ieee/string.scm 718 */
obj_t BgL_list1420z00_877;
{ /* Ieee/string.scm 718 */
obj_t BgL_arg1421z00_878;
{ /* Ieee/string.scm 718 */
obj_t BgL_arg1422z00_879;
{ /* Ieee/string.scm 718 */
obj_t BgL_arg1423z00_880;
{ /* Ieee/string.scm 718 */
obj_t BgL_arg1424z00_881;
BgL_arg1424z00_881 = 
MAKE_PAIR(
BINT(BgL_lz00_103), BNIL); 
BgL_arg1423z00_880 = 
MAKE_PAIR(
BINT(BgL_o2z00_102), BgL_arg1424z00_881); } 
BgL_arg1422z00_879 = 
MAKE_PAIR(
BINT(BgL_arg1419z00_876), BgL_arg1423z00_880); } 
BgL_arg1421z00_878 = 
MAKE_PAIR(
BINT(BgL_o1z00_100), BgL_arg1422z00_879); } 
BgL_list1420z00_877 = 
MAKE_PAIR(
BINT(BgL_arg1418z00_875), BgL_arg1421z00_878); } 
BgL_arg1410z00_867 = BgL_list1420z00_877; } } 
return 
BGl_errorz00zz__errorz00(BGl_string3587z00zz__r4_strings_6_7z00, BgL_arg1409z00_866, BgL_arg1410z00_867);} } } 
}



/* _blit-string! */
obj_t BGl__blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4015, obj_t BgL_s1z00_4016, obj_t BgL_o1z00_4017, obj_t BgL_s2z00_4018, obj_t BgL_o2z00_4019, obj_t BgL_lz00_4020)
{ AN_OBJECT;
{ /* Ieee/string.scm 712 */
{ /* Ieee/string.scm 713 */
long BgL_auxz00_7191;long BgL_auxz00_7182;obj_t BgL_auxz00_7175;long BgL_auxz00_7166;obj_t BgL_auxz00_7159;
{ /* Ieee/string.scm 713 */
obj_t BgL_auxz00_7192;
if(
INTEGERP(BgL_lz00_4020))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7192 = BgL_lz00_4020
; }  else 
{ 
obj_t BgL_auxz00_7195;
BgL_auxz00_7195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32182)), BGl_string3588z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lz00_4020); 
FAILURE(BgL_auxz00_7195,BFALSE,BFALSE);} 
BgL_auxz00_7191 = 
(long)CINT(BgL_auxz00_7192); } 
{ /* Ieee/string.scm 713 */
obj_t BgL_auxz00_7183;
if(
INTEGERP(BgL_o2z00_4019))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7183 = BgL_o2z00_4019
; }  else 
{ 
obj_t BgL_auxz00_7186;
BgL_auxz00_7186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32182)), BGl_string3588z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_o2z00_4019); 
FAILURE(BgL_auxz00_7186,BFALSE,BFALSE);} 
BgL_auxz00_7182 = 
(long)CINT(BgL_auxz00_7183); } 
if(
STRINGP(BgL_s2z00_4018))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7175 = BgL_s2z00_4018
; }  else 
{ 
obj_t BgL_auxz00_7178;
BgL_auxz00_7178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32182)), BGl_string3588z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_s2z00_4018); 
FAILURE(BgL_auxz00_7178,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 713 */
obj_t BgL_auxz00_7167;
if(
INTEGERP(BgL_o1z00_4017))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7167 = BgL_o1z00_4017
; }  else 
{ 
obj_t BgL_auxz00_7170;
BgL_auxz00_7170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32182)), BGl_string3588z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_o1z00_4017); 
FAILURE(BgL_auxz00_7170,BFALSE,BFALSE);} 
BgL_auxz00_7166 = 
(long)CINT(BgL_auxz00_7167); } 
if(
STRINGP(BgL_s1z00_4016))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7159 = BgL_s1z00_4016
; }  else 
{ 
obj_t BgL_auxz00_7162;
BgL_auxz00_7162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32182)), BGl_string3588z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_s1z00_4016); 
FAILURE(BgL_auxz00_7162,BFALSE,BFALSE);} 
return 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7159, BgL_auxz00_7166, BgL_auxz00_7175, BgL_auxz00_7182, BgL_auxz00_7191);} } 
}



/* string-shrink! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t BgL_sz00_104, long BgL_lz00_105)
{ AN_OBJECT;
{ /* Ieee/string.scm 723 */
return 
bgl_string_shrink(BgL_sz00_104, BgL_lz00_105);} 
}



/* _string-shrink! */
obj_t BGl__stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4021, obj_t BgL_sz00_4022, obj_t BgL_lz00_4023)
{ AN_OBJECT;
{ /* Ieee/string.scm 723 */
{ /* Ieee/string.scm 724 */
obj_t BgL_sz00_5491;long BgL_lz00_5492;
if(
STRINGP(BgL_sz00_4022))
{ /* Ieee/string.scm 724 */
BgL_sz00_5491 = BgL_sz00_4022; }  else 
{ 
obj_t BgL_auxz00_7204;
BgL_auxz00_7204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32791)), BGl_string3589z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_sz00_4022); 
FAILURE(BgL_auxz00_7204,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 724 */
obj_t BgL_auxz00_7208;
if(
INTEGERP(BgL_lz00_4023))
{ /* Ieee/string.scm 724 */
BgL_auxz00_7208 = BgL_lz00_4023
; }  else 
{ 
obj_t BgL_auxz00_7211;
BgL_auxz00_7211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)32791)), BGl_string3589z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_lz00_4023); 
FAILURE(BgL_auxz00_7211,BFALSE,BFALSE);} 
BgL_lz00_5492 = 
(long)CINT(BgL_auxz00_7208); } 
return 
bgl_string_shrink(BgL_sz00_5491, BgL_lz00_5492);} } 
}



/* string-replace */
BGL_EXPORTED_DEF obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t BgL_strz00_106, unsigned char BgL_c1z00_107, unsigned char BgL_c2z00_108)
{ AN_OBJECT;
{ /* Ieee/string.scm 729 */
{ /* Ieee/string.scm 730 */
long BgL_lenz00_891;
BgL_lenz00_891 = 
STRING_LENGTH(BgL_strz00_106); 
{ /* Ieee/string.scm 730 */
obj_t BgL_newz00_892;
BgL_newz00_892 = 
make_string(BgL_lenz00_891, ((unsigned char)' ')); 
{ /* Ieee/string.scm 731 */

{ 
long BgL_iz00_894;
BgL_iz00_894 = ((long)0); 
BgL_zc3anonymousza31434ze3z83_895:
if(
(BgL_iz00_894==BgL_lenz00_891))
{ /* Ieee/string.scm 733 */
return BgL_newz00_892;}  else 
{ /* Ieee/string.scm 735 */
unsigned char BgL_cz00_897;
{ /* Ieee/string.scm 735 */
long BgL_l2315z00_4148;
BgL_l2315z00_4148 = 
STRING_LENGTH(BgL_strz00_106); 
if(
BOUND_CHECK(BgL_iz00_894, BgL_l2315z00_4148))
{ /* Ieee/string.scm 735 */
BgL_cz00_897 = 
STRING_REF(BgL_strz00_106, BgL_iz00_894); }  else 
{ 
obj_t BgL_auxz00_7225;
BgL_auxz00_7225 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33203)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_894), BgL_strz00_106); 
FAILURE(BgL_auxz00_7225,BFALSE,BFALSE);} } 
if(
(BgL_cz00_897==
(unsigned char)(BgL_c1z00_107)))
{ /* Ieee/string.scm 737 */
unsigned char BgL_charz00_2500;
BgL_charz00_2500 = 
(unsigned char)(BgL_c2z00_108); 
{ /* Ieee/string.scm 737 */
long BgL_l2319z00_4152;
BgL_l2319z00_4152 = 
STRING_LENGTH(BgL_newz00_892); 
if(
BOUND_CHECK(BgL_iz00_894, BgL_l2319z00_4152))
{ /* Ieee/string.scm 737 */
STRING_SET(BgL_newz00_892, BgL_iz00_894, BgL_charz00_2500); }  else 
{ 
obj_t BgL_auxz00_7238;
BgL_auxz00_7238 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33253)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_894), BgL_newz00_892); 
FAILURE(BgL_auxz00_7238,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 738 */
long BgL_l2323z00_4156;
BgL_l2323z00_4156 = 
STRING_LENGTH(BgL_newz00_892); 
if(
BOUND_CHECK(BgL_iz00_894, BgL_l2323z00_4156))
{ /* Ieee/string.scm 738 */
STRING_SET(BgL_newz00_892, BgL_iz00_894, BgL_cz00_897); }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33285)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_894), BgL_newz00_892); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} } 
{ 
long BgL_iz00_7252;
BgL_iz00_7252 = 
(BgL_iz00_894+((long)1)); 
BgL_iz00_894 = BgL_iz00_7252; 
goto BgL_zc3anonymousza31434ze3z83_895;} } } } } } } 
}



/* _string-replace */
obj_t BGl__stringzd2replacezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4024, obj_t BgL_strz00_4025, obj_t BgL_c1z00_4026, obj_t BgL_c2z00_4027)
{ AN_OBJECT;
{ /* Ieee/string.scm 729 */
{ /* Ieee/string.scm 730 */
unsigned char BgL_auxz00_7270;unsigned char BgL_auxz00_7261;obj_t BgL_auxz00_7254;
{ /* Ieee/string.scm 730 */
obj_t BgL_auxz00_7271;
if(
CHARP(BgL_c2z00_4027))
{ /* Ieee/string.scm 730 */
BgL_auxz00_7271 = BgL_c2z00_4027
; }  else 
{ 
obj_t BgL_auxz00_7274;
BgL_auxz00_7274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33075)), BGl_string3590z00zz__r4_strings_6_7z00, BGl_string3591z00zz__r4_strings_6_7z00, BgL_c2z00_4027); 
FAILURE(BgL_auxz00_7274,BFALSE,BFALSE);} 
BgL_auxz00_7270 = 
CCHAR(BgL_auxz00_7271); } 
{ /* Ieee/string.scm 730 */
obj_t BgL_auxz00_7262;
if(
CHARP(BgL_c1z00_4026))
{ /* Ieee/string.scm 730 */
BgL_auxz00_7262 = BgL_c1z00_4026
; }  else 
{ 
obj_t BgL_auxz00_7265;
BgL_auxz00_7265 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33075)), BGl_string3590z00zz__r4_strings_6_7z00, BGl_string3591z00zz__r4_strings_6_7z00, BgL_c1z00_4026); 
FAILURE(BgL_auxz00_7265,BFALSE,BFALSE);} 
BgL_auxz00_7261 = 
CCHAR(BgL_auxz00_7262); } 
if(
STRINGP(BgL_strz00_4025))
{ /* Ieee/string.scm 730 */
BgL_auxz00_7254 = BgL_strz00_4025
; }  else 
{ 
obj_t BgL_auxz00_7257;
BgL_auxz00_7257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33075)), BGl_string3590z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4025); 
FAILURE(BgL_auxz00_7257,BFALSE,BFALSE);} 
return 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_auxz00_7254, BgL_auxz00_7261, BgL_auxz00_7270);} } 
}



/* string-replace! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t BgL_strz00_109, unsigned char BgL_c1z00_110, unsigned char BgL_c2z00_111)
{ AN_OBJECT;
{ /* Ieee/string.scm 744 */
{ /* Ieee/string.scm 745 */
long BgL_lenz00_902;
BgL_lenz00_902 = 
STRING_LENGTH(BgL_strz00_109); 
{ 
long BgL_iz00_904;
BgL_iz00_904 = ((long)0); 
BgL_zc3anonymousza31439ze3z83_905:
if(
(BgL_iz00_904==BgL_lenz00_902))
{ /* Ieee/string.scm 748 */
return BgL_strz00_109;}  else 
{ /* Ieee/string.scm 750 */
bool_t BgL_testz00_7283;
{ /* Ieee/string.scm 750 */
unsigned char BgL_char2z00_2512;
BgL_char2z00_2512 = 
(unsigned char)(BgL_c1z00_110); 
{ /* Ieee/string.scm 750 */
unsigned char BgL_auxz00_7285;
{ /* Ieee/string.scm 750 */
long BgL_l2327z00_4160;
BgL_l2327z00_4160 = 
STRING_LENGTH(BgL_strz00_109); 
if(
BOUND_CHECK(BgL_iz00_904, BgL_l2327z00_4160))
{ /* Ieee/string.scm 750 */
BgL_auxz00_7285 = 
STRING_REF(BgL_strz00_109, BgL_iz00_904)
; }  else 
{ 
obj_t BgL_auxz00_7290;
BgL_auxz00_7290 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33705)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_904), BgL_strz00_109); 
FAILURE(BgL_auxz00_7290,BFALSE,BFALSE);} } 
BgL_testz00_7283 = 
(BgL_auxz00_7285==BgL_char2z00_2512); } } 
if(BgL_testz00_7283)
{ /* Ieee/string.scm 750 */
{ /* Ieee/string.scm 751 */
unsigned char BgL_charz00_2515;
BgL_charz00_2515 = 
(unsigned char)(BgL_c2z00_111); 
{ /* Ieee/string.scm 751 */
long BgL_l2331z00_4164;
BgL_l2331z00_4164 = 
STRING_LENGTH(BgL_strz00_109); 
if(
BOUND_CHECK(BgL_iz00_904, BgL_l2331z00_4164))
{ /* Ieee/string.scm 751 */
STRING_SET(BgL_strz00_109, BgL_iz00_904, BgL_charz00_2515); }  else 
{ 
obj_t BgL_auxz00_7301;
BgL_auxz00_7301 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33737)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_904), BgL_strz00_109); 
FAILURE(BgL_auxz00_7301,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7306;
BgL_iz00_7306 = 
(BgL_iz00_904+((long)1)); 
BgL_iz00_904 = BgL_iz00_7306; 
goto BgL_zc3anonymousza31439ze3z83_905;} }  else 
{ 
long BgL_iz00_7308;
BgL_iz00_7308 = 
(BgL_iz00_904+((long)1)); 
BgL_iz00_904 = BgL_iz00_7308; 
goto BgL_zc3anonymousza31439ze3z83_905;} } } } } 
}



/* _string-replace! */
obj_t BGl__stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t BgL_envz00_4028, obj_t BgL_strz00_4029, obj_t BgL_c1z00_4030, obj_t BgL_c2z00_4031)
{ AN_OBJECT;
{ /* Ieee/string.scm 744 */
{ /* Ieee/string.scm 745 */
unsigned char BgL_auxz00_7326;unsigned char BgL_auxz00_7317;obj_t BgL_auxz00_7310;
{ /* Ieee/string.scm 745 */
obj_t BgL_auxz00_7327;
if(
CHARP(BgL_c2z00_4031))
{ /* Ieee/string.scm 745 */
BgL_auxz00_7327 = BgL_c2z00_4031
; }  else 
{ 
obj_t BgL_auxz00_7330;
BgL_auxz00_7330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33597)), BGl_string3592z00zz__r4_strings_6_7z00, BGl_string3591z00zz__r4_strings_6_7z00, BgL_c2z00_4031); 
FAILURE(BgL_auxz00_7330,BFALSE,BFALSE);} 
BgL_auxz00_7326 = 
CCHAR(BgL_auxz00_7327); } 
{ /* Ieee/string.scm 745 */
obj_t BgL_auxz00_7318;
if(
CHARP(BgL_c1z00_4030))
{ /* Ieee/string.scm 745 */
BgL_auxz00_7318 = BgL_c1z00_4030
; }  else 
{ 
obj_t BgL_auxz00_7321;
BgL_auxz00_7321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33597)), BGl_string3592z00zz__r4_strings_6_7z00, BGl_string3591z00zz__r4_strings_6_7z00, BgL_c1z00_4030); 
FAILURE(BgL_auxz00_7321,BFALSE,BFALSE);} 
BgL_auxz00_7317 = 
CCHAR(BgL_auxz00_7318); } 
if(
STRINGP(BgL_strz00_4029))
{ /* Ieee/string.scm 745 */
BgL_auxz00_7310 = BgL_strz00_4029
; }  else 
{ 
obj_t BgL_auxz00_7313;
BgL_auxz00_7313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)33597)), BGl_string3592z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4029); 
FAILURE(BgL_auxz00_7313,BFALSE,BFALSE);} 
return 
BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(BgL_auxz00_7310, BgL_auxz00_7317, BgL_auxz00_7326);} } 
}



/* _string-delete */
obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_envz00_117, obj_t BgL_optz00_116)
{ AN_OBJECT;
{ /* Ieee/string.scm 759 */
{ /* Ieee/string.scm 759 */
obj_t BgL_stringz00_912;obj_t BgL_g1177z00_913;
BgL_stringz00_912 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)0))); 
BgL_g1177z00_913 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 759 */
int BgL_aux1179z00_915;
BgL_aux1179z00_915 = 
VECTOR_LENGTH(BgL_optz00_116); 
switch( 
(long)(BgL_aux1179z00_915)) { case ((long)2) : 

{ /* Ieee/string.scm 759 */
long BgL_endz00_918;
{ /* Ieee/string.scm 759 */
obj_t BgL_stringz00_2520;
if(
STRINGP(BgL_stringz00_912))
{ /* Ieee/string.scm 759 */
BgL_stringz00_2520 = BgL_stringz00_912; }  else 
{ 
obj_t BgL_auxz00_7343;
BgL_auxz00_7343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34120)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_912); 
FAILURE(BgL_auxz00_7343,BFALSE,BFALSE);} 
BgL_endz00_918 = 
STRING_LENGTH(BgL_stringz00_2520); } 
{ /* Ieee/string.scm 759 */

{ /* Ieee/string.scm 759 */
obj_t BgL_arg1446z00_919;obj_t BgL_arg1447z00_920;
BgL_arg1446z00_919 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)0))); 
BgL_arg1447z00_920 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)1))); 
{ /* Ieee/string.scm 759 */
obj_t BgL_auxz00_7352;
if(
STRINGP(BgL_arg1446z00_919))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7352 = BgL_arg1446z00_919
; }  else 
{ 
obj_t BgL_auxz00_7355;
BgL_auxz00_7355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1446z00_919); 
FAILURE(BgL_auxz00_7355,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_7352, BgL_arg1447z00_920, 
(int)(((long)0)), BgL_endz00_918);} } } } break;case ((long)3) : 

{ /* Ieee/string.scm 759 */
obj_t BgL_startz00_921;
BgL_startz00_921 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)2))); 
{ /* Ieee/string.scm 759 */
long BgL_endz00_922;
{ /* Ieee/string.scm 759 */
obj_t BgL_stringz00_2521;
if(
STRINGP(BgL_stringz00_912))
{ /* Ieee/string.scm 759 */
BgL_stringz00_2521 = BgL_stringz00_912; }  else 
{ 
obj_t BgL_auxz00_7365;
BgL_auxz00_7365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34120)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_912); 
FAILURE(BgL_auxz00_7365,BFALSE,BFALSE);} 
BgL_endz00_922 = 
STRING_LENGTH(BgL_stringz00_2521); } 
{ /* Ieee/string.scm 759 */

{ /* Ieee/string.scm 759 */
obj_t BgL_arg1448z00_923;obj_t BgL_arg1449z00_924;
BgL_arg1448z00_923 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)0))); 
BgL_arg1449z00_924 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)1))); 
{ /* Ieee/string.scm 759 */
int BgL_auxz00_7381;obj_t BgL_auxz00_7374;
{ /* Ieee/string.scm 759 */
obj_t BgL_auxz00_7382;
if(
INTEGERP(BgL_startz00_921))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7382 = BgL_startz00_921
; }  else 
{ 
obj_t BgL_auxz00_7385;
BgL_auxz00_7385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_startz00_921); 
FAILURE(BgL_auxz00_7385,BFALSE,BFALSE);} 
BgL_auxz00_7381 = 
CINT(BgL_auxz00_7382); } 
if(
STRINGP(BgL_arg1448z00_923))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7374 = BgL_arg1448z00_923
; }  else 
{ 
obj_t BgL_auxz00_7377;
BgL_auxz00_7377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1448z00_923); 
FAILURE(BgL_auxz00_7377,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_7374, BgL_arg1449z00_924, BgL_auxz00_7381, BgL_endz00_922);} } } } } break;case ((long)4) : 

{ /* Ieee/string.scm 759 */
obj_t BgL_startz00_925;
BgL_startz00_925 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)2))); 
{ /* Ieee/string.scm 759 */
obj_t BgL_endz00_926;
BgL_endz00_926 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)3))); 
{ /* Ieee/string.scm 759 */

{ /* Ieee/string.scm 759 */
obj_t BgL_arg1450z00_927;obj_t BgL_arg1451z00_928;
BgL_arg1450z00_927 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)0))); 
BgL_arg1451z00_928 = 
VECTOR_REF(BgL_optz00_116,
(int)(((long)1))); 
{ /* Ieee/string.scm 759 */
long BgL_auxz00_7415;int BgL_auxz00_7406;obj_t BgL_auxz00_7399;
{ /* Ieee/string.scm 759 */
obj_t BgL_auxz00_7416;
if(
INTEGERP(BgL_endz00_926))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7416 = BgL_endz00_926
; }  else 
{ 
obj_t BgL_auxz00_7419;
BgL_auxz00_7419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_endz00_926); 
FAILURE(BgL_auxz00_7419,BFALSE,BFALSE);} 
BgL_auxz00_7415 = 
(long)CINT(BgL_auxz00_7416); } 
{ /* Ieee/string.scm 759 */
obj_t BgL_auxz00_7407;
if(
INTEGERP(BgL_startz00_925))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7407 = BgL_startz00_925
; }  else 
{ 
obj_t BgL_auxz00_7410;
BgL_auxz00_7410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_startz00_925); 
FAILURE(BgL_auxz00_7410,BFALSE,BFALSE);} 
BgL_auxz00_7406 = 
CINT(BgL_auxz00_7407); } 
if(
STRINGP(BgL_arg1450z00_927))
{ /* Ieee/string.scm 759 */
BgL_auxz00_7399 = BgL_arg1450z00_927
; }  else 
{ 
obj_t BgL_auxz00_7402;
BgL_auxz00_7402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34049)), BGl_string3596z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1450z00_927); 
FAILURE(BgL_auxz00_7402,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_7399, BgL_arg1451z00_928, BgL_auxz00_7406, BgL_auxz00_7415);} } } } } break;
default: 
{ /* Ieee/string.scm 759 */
obj_t BgL_arg1452z00_929;int BgL_arg1454z00_931;
BgL_arg1452z00_929 = BGl_symbol3593z00zz__r4_strings_6_7z00; 
BgL_arg1454z00_931 = 
VECTOR_LENGTH(BgL_optz00_116); 
return 
BGl_errorz00zz__errorz00(BgL_arg1452z00_929, BGl_string3595z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1454z00_931));} } } } } } 
}



/* string-delete */
BGL_EXPORTED_DEF obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_112, obj_t BgL_objz00_113, int BgL_startz00_114, long BgL_endz00_115)
{ AN_OBJECT;
{ /* Ieee/string.scm 759 */
{ 
obj_t BgL_newz00_980;obj_t BgL_predz00_981;int BgL_startz00_982;long BgL_endz00_983;obj_t BgL_newz00_964;obj_t BgL_lz00_965;int BgL_startz00_966;long BgL_endz00_967;obj_t BgL_newz00_948;obj_t BgL_cz00_949;int BgL_startz00_950;long BgL_endz00_951;
if(
(
(long)(BgL_startz00_114)<((long)0)))
{ /* Ieee/string.scm 799 */
obj_t BgL_aux2927z00_4761;
BgL_aux2927z00_4761 = 
BGl_errorz00zz__errorz00(BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3605z00zz__r4_strings_6_7z00, 
BINT(BgL_startz00_114)); 
if(
STRINGP(BgL_aux2927z00_4761))
{ /* Ieee/string.scm 799 */
return BgL_aux2927z00_4761;}  else 
{ 
obj_t BgL_auxz00_7437;
BgL_auxz00_7437 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)35114)), BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2927z00_4761); 
FAILURE(BgL_auxz00_7437,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 798 */
if(
(BgL_endz00_115>
STRING_LENGTH(BgL_stringz00_112)))
{ /* Ieee/string.scm 801 */
obj_t BgL_aux2929z00_4763;
BgL_aux2929z00_4763 = 
BGl_errorz00zz__errorz00(BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3606z00zz__r4_strings_6_7z00, 
BINT(BgL_endz00_115)); 
if(
STRINGP(BgL_aux2929z00_4763))
{ /* Ieee/string.scm 801 */
return BgL_aux2929z00_4763;}  else 
{ 
obj_t BgL_auxz00_7448;
BgL_auxz00_7448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)35219)), BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2929z00_4763); 
FAILURE(BgL_auxz00_7448,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 800 */
if(
(BgL_endz00_115<
(long)(BgL_startz00_114)))
{ /* Ieee/string.scm 803 */
obj_t BgL_arg1460z00_940;
BgL_arg1460z00_940 = 
MAKE_PAIR(
BINT(BgL_startz00_114), 
BINT(BgL_endz00_115)); 
{ /* Ieee/string.scm 803 */
obj_t BgL_aux2931z00_4765;
BgL_aux2931z00_4765 = 
BGl_errorz00zz__errorz00(BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3607z00zz__r4_strings_6_7z00, BgL_arg1460z00_940); 
if(
STRINGP(BgL_aux2931z00_4765))
{ /* Ieee/string.scm 803 */
return BgL_aux2931z00_4765;}  else 
{ 
obj_t BgL_auxz00_7461;
BgL_auxz00_7461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)35303)), BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2931z00_4765); 
FAILURE(BgL_auxz00_7461,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 805 */
obj_t BgL_newz00_942;
BgL_newz00_942 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_112); 
{ /* Ieee/string.scm 806 */

if(
CHARP(BgL_objz00_113))
{ /* Ieee/string.scm 808 */
BgL_newz00_948 = BgL_newz00_942; 
BgL_cz00_949 = BgL_objz00_113; 
BgL_startz00_950 = BgL_startz00_114; 
BgL_endz00_951 = BgL_endz00_115; 
{ 
int BgL_iz00_954;long BgL_jz00_955;
BgL_iz00_954 = BgL_startz00_950; 
BgL_jz00_955 = ((long)0); 
BgL_zc3anonymousza31467ze3z83_956:
if(
(
(long)(BgL_iz00_954)==BgL_endz00_951))
{ /* Ieee/string.scm 764 */
return 
bgl_string_shrink(BgL_newz00_948, BgL_jz00_955);}  else 
{ /* Ieee/string.scm 766 */
unsigned char BgL_ccz00_958;
{ /* Ieee/string.scm 766 */
long BgL_kz00_2539;
BgL_kz00_2539 = 
(long)(BgL_iz00_954); 
{ /* Ieee/string.scm 766 */
long BgL_l2335z00_4168;
BgL_l2335z00_4168 = 
STRING_LENGTH(BgL_stringz00_112); 
if(
BOUND_CHECK(BgL_kz00_2539, BgL_l2335z00_4168))
{ /* Ieee/string.scm 766 */
BgL_ccz00_958 = 
STRING_REF(BgL_stringz00_112, BgL_kz00_2539); }  else 
{ 
obj_t BgL_auxz00_7477;
BgL_auxz00_7477 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34297)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2539), BgL_stringz00_112); 
FAILURE(BgL_auxz00_7477,BFALSE,BFALSE);} } } 
if(
(BgL_ccz00_958==
CCHAR(BgL_cz00_949)))
{ /* Ieee/string.scm 768 */
long BgL_arg1470z00_960;
BgL_arg1470z00_960 = 
(
(long)(BgL_iz00_954)+((long)1)); 
{ 
int BgL_iz00_7487;
BgL_iz00_7487 = 
(int)(BgL_arg1470z00_960); 
BgL_iz00_954 = BgL_iz00_7487; 
goto BgL_zc3anonymousza31467ze3z83_956;} }  else 
{ /* Ieee/string.scm 767 */
{ /* Ieee/string.scm 770 */
long BgL_l2339z00_4172;
BgL_l2339z00_4172 = 
STRING_LENGTH(BgL_newz00_948); 
if(
BOUND_CHECK(BgL_jz00_955, BgL_l2339z00_4172))
{ /* Ieee/string.scm 770 */
STRING_SET(BgL_newz00_948, BgL_jz00_955, BgL_ccz00_958); }  else 
{ 
obj_t BgL_auxz00_7493;
BgL_auxz00_7493 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34388)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_955), BgL_newz00_948); 
FAILURE(BgL_auxz00_7493,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 771 */
long BgL_arg1471z00_961;long BgL_arg1472z00_962;
BgL_arg1471z00_961 = 
(
(long)(BgL_iz00_954)+((long)1)); 
BgL_arg1472z00_962 = 
(BgL_jz00_955+((long)1)); 
{ 
long BgL_jz00_7503;int BgL_iz00_7501;
BgL_iz00_7501 = 
(int)(BgL_arg1471z00_961); 
BgL_jz00_7503 = BgL_arg1472z00_962; 
BgL_jz00_955 = BgL_jz00_7503; 
BgL_iz00_954 = BgL_iz00_7501; 
goto BgL_zc3anonymousza31467ze3z83_956;} } } } } }  else 
{ /* Ieee/string.scm 808 */
if(
STRINGP(BgL_objz00_113))
{ /* Ieee/string.scm 810 */
BgL_newz00_964 = BgL_newz00_942; 
BgL_lz00_965 = 
BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_objz00_113); 
BgL_startz00_966 = BgL_startz00_114; 
BgL_endz00_967 = BgL_endz00_115; 
{ 
int BgL_iz00_970;long BgL_jz00_971;
BgL_iz00_970 = BgL_startz00_966; 
BgL_jz00_971 = ((long)0); 
BgL_zc3anonymousza31474ze3z83_972:
if(
(
(long)(BgL_iz00_970)==BgL_endz00_967))
{ /* Ieee/string.scm 776 */
return 
bgl_string_shrink(BgL_newz00_964, BgL_jz00_971);}  else 
{ /* Ieee/string.scm 778 */
unsigned char BgL_ccz00_974;
{ /* Ieee/string.scm 778 */
long BgL_kz00_2556;
BgL_kz00_2556 = 
(long)(BgL_iz00_970); 
{ /* Ieee/string.scm 778 */
long BgL_l2343z00_4176;
BgL_l2343z00_4176 = 
STRING_LENGTH(BgL_stringz00_112); 
if(
BOUND_CHECK(BgL_kz00_2556, BgL_l2343z00_4176))
{ /* Ieee/string.scm 778 */
BgL_ccz00_974 = 
STRING_REF(BgL_stringz00_112, BgL_kz00_2556); }  else 
{ 
obj_t BgL_auxz00_7515;
BgL_auxz00_7515 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34607)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2556), BgL_stringz00_112); 
FAILURE(BgL_auxz00_7515,BFALSE,BFALSE);} } } 
if(
CBOOL(
BGl_memvz00zz__r4_pairs_and_lists_6_3z00(
BCHAR(BgL_ccz00_974), BgL_lz00_965)))
{ /* Ieee/string.scm 780 */
long BgL_arg1477z00_976;
BgL_arg1477z00_976 = 
(
(long)(BgL_iz00_970)+((long)1)); 
{ 
int BgL_iz00_7526;
BgL_iz00_7526 = 
(int)(BgL_arg1477z00_976); 
BgL_iz00_970 = BgL_iz00_7526; 
goto BgL_zc3anonymousza31474ze3z83_972;} }  else 
{ /* Ieee/string.scm 779 */
{ /* Ieee/string.scm 782 */
long BgL_l2347z00_4180;
BgL_l2347z00_4180 = 
STRING_LENGTH(BgL_newz00_964); 
if(
BOUND_CHECK(BgL_jz00_971, BgL_l2347z00_4180))
{ /* Ieee/string.scm 782 */
STRING_SET(BgL_newz00_964, BgL_jz00_971, BgL_ccz00_974); }  else 
{ 
obj_t BgL_auxz00_7532;
BgL_auxz00_7532 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34696)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_971), BgL_newz00_964); 
FAILURE(BgL_auxz00_7532,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 783 */
long BgL_arg1478z00_977;long BgL_arg1479z00_978;
BgL_arg1478z00_977 = 
(
(long)(BgL_iz00_970)+((long)1)); 
BgL_arg1479z00_978 = 
(BgL_jz00_971+((long)1)); 
{ 
long BgL_jz00_7542;int BgL_iz00_7540;
BgL_iz00_7540 = 
(int)(BgL_arg1478z00_977); 
BgL_jz00_7542 = BgL_arg1479z00_978; 
BgL_jz00_971 = BgL_jz00_7542; 
BgL_iz00_970 = BgL_iz00_7540; 
goto BgL_zc3anonymousza31474ze3z83_972;} } } } } }  else 
{ /* Ieee/string.scm 810 */
if(
PROCEDUREP(BgL_objz00_113))
{ /* Ieee/string.scm 812 */
BgL_newz00_980 = BgL_newz00_942; 
BgL_predz00_981 = BgL_objz00_113; 
BgL_startz00_982 = BgL_startz00_114; 
BgL_endz00_983 = BgL_endz00_115; 
{ 
int BgL_iz00_986;long BgL_jz00_987;
BgL_iz00_986 = BgL_startz00_982; 
BgL_jz00_987 = ((long)0); 
BgL_zc3anonymousza31481ze3z83_988:
if(
(
(long)(BgL_iz00_986)==BgL_endz00_983))
{ /* Ieee/string.scm 788 */
return 
bgl_string_shrink(BgL_newz00_980, BgL_jz00_987);}  else 
{ /* Ieee/string.scm 790 */
unsigned char BgL_ccz00_990;
{ /* Ieee/string.scm 790 */
long BgL_kz00_2571;
BgL_kz00_2571 = 
(long)(BgL_iz00_986); 
{ /* Ieee/string.scm 790 */
long BgL_l2351z00_4184;
BgL_l2351z00_4184 = 
STRING_LENGTH(BgL_stringz00_112); 
if(
BOUND_CHECK(BgL_kz00_2571, BgL_l2351z00_4184))
{ /* Ieee/string.scm 790 */
BgL_ccz00_990 = 
STRING_REF(BgL_stringz00_112, BgL_kz00_2571); }  else 
{ 
obj_t BgL_auxz00_7555;
BgL_auxz00_7555 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)34921)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2571), BgL_stringz00_112); 
FAILURE(BgL_auxz00_7555,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 791 */
bool_t BgL_testz00_7560;
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_981, ((long)1)))
{ /* Ieee/string.scm 791 */
BgL_testz00_7560 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_981)(BgL_predz00_981, 
BCHAR(BgL_ccz00_990), BEOA))
; }  else 
{ /* Ieee/string.scm 791 */
FAILURE(BGl_string3597z00zz__r4_strings_6_7z00,BGl_list3598z00zz__r4_strings_6_7z00,BgL_predz00_981);} 
if(BgL_testz00_7560)
{ /* Ieee/string.scm 792 */
long BgL_arg1484z00_992;
BgL_arg1484z00_992 = 
(
(long)(BgL_iz00_986)+((long)1)); 
{ 
int BgL_iz00_7570;
BgL_iz00_7570 = 
(int)(BgL_arg1484z00_992); 
BgL_iz00_986 = BgL_iz00_7570; 
goto BgL_zc3anonymousza31481ze3z83_988;} }  else 
{ /* Ieee/string.scm 791 */
{ /* Ieee/string.scm 794 */
long BgL_l2355z00_4188;
BgL_l2355z00_4188 = 
STRING_LENGTH(BgL_newz00_980); 
if(
BOUND_CHECK(BgL_jz00_987, BgL_l2355z00_4188))
{ /* Ieee/string.scm 794 */
STRING_SET(BgL_newz00_980, BgL_jz00_987, BgL_ccz00_990); }  else 
{ 
obj_t BgL_auxz00_7576;
BgL_auxz00_7576 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)35008)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_987), BgL_newz00_980); 
FAILURE(BgL_auxz00_7576,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 795 */
long BgL_arg1485z00_993;long BgL_arg1486z00_994;
BgL_arg1485z00_993 = 
(
(long)(BgL_iz00_986)+((long)1)); 
BgL_arg1486z00_994 = 
(BgL_jz00_987+((long)1)); 
{ 
long BgL_jz00_7586;int BgL_iz00_7584;
BgL_iz00_7584 = 
(int)(BgL_arg1485z00_993); 
BgL_jz00_7586 = BgL_arg1486z00_994; 
BgL_jz00_987 = BgL_jz00_7586; 
BgL_iz00_986 = BgL_iz00_7584; 
goto BgL_zc3anonymousza31481ze3z83_988;} } } } } } }  else 
{ /* Ieee/string.scm 815 */
obj_t BgL_aux2933z00_4767;
BgL_aux2933z00_4767 = 
BGl_errorz00zz__errorz00(BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3608z00zz__r4_strings_6_7z00, BgL_objz00_113); 
if(
STRINGP(BgL_aux2933z00_4767))
{ /* Ieee/string.scm 815 */
return BgL_aux2933z00_4767;}  else 
{ 
obj_t BgL_auxz00_7590;
BgL_auxz00_7590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)35701)), BGl_string3594z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux2933z00_4767); 
FAILURE(BgL_auxz00_7590,BFALSE,BFALSE);} } } } } } } } } } 
}



/* delim? */
bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t BgL_delimsz00_118, unsigned char BgL_charz00_119)
{ AN_OBJECT;
{ /* Ieee/string.scm 820 */
{ /* Ieee/string.scm 821 */
long BgL_lenz00_999;
{ /* Ieee/string.scm 821 */
obj_t BgL_stringz00_2581;
if(
STRINGP(BgL_delimsz00_118))
{ /* Ieee/string.scm 821 */
BgL_stringz00_2581 = BgL_delimsz00_118; }  else 
{ 
obj_t BgL_auxz00_7596;
BgL_auxz00_7596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)36034)), BGl_string3609z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_delimsz00_118); 
FAILURE(BgL_auxz00_7596,BFALSE,BFALSE);} 
BgL_lenz00_999 = 
STRING_LENGTH(BgL_stringz00_2581); } 
{ 
long BgL_iz00_1001;
BgL_iz00_1001 = ((long)0); 
BgL_zc3anonymousza31487ze3z83_1002:
if(
(BgL_iz00_1001==BgL_lenz00_999))
{ /* Ieee/string.scm 824 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 826 */
bool_t BgL_testz00_7603;
{ /* Ieee/string.scm 826 */
unsigned char BgL_auxz00_7604;
{ /* Ieee/string.scm 826 */
obj_t BgL_stringz00_2584;
BgL_stringz00_2584 = BgL_delimsz00_118; 
{ /* Ieee/string.scm 826 */
long BgL_l2359z00_4192;
BgL_l2359z00_4192 = 
STRING_LENGTH(BgL_stringz00_2584); 
if(
BOUND_CHECK(BgL_iz00_1001, BgL_l2359z00_4192))
{ /* Ieee/string.scm 826 */
BgL_auxz00_7604 = 
STRING_REF(BgL_stringz00_2584, BgL_iz00_1001)
; }  else 
{ 
obj_t BgL_auxz00_7609;
BgL_auxz00_7609 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)36138)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1001), BgL_stringz00_2584); 
FAILURE(BgL_auxz00_7609,BFALSE,BFALSE);} } } 
BgL_testz00_7603 = 
(BgL_charz00_119==BgL_auxz00_7604); } 
if(BgL_testz00_7603)
{ /* Ieee/string.scm 826 */
return ((bool_t)1);}  else 
{ 
long BgL_iz00_7615;
BgL_iz00_7615 = 
(BgL_iz00_1001+((long)1)); 
BgL_iz00_1001 = BgL_iz00_7615; 
goto BgL_zc3anonymousza31487ze3z83_1002;} } } } } 
}



/* string-split */
BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_128, obj_t BgL_delimitersz00_129)
{ AN_OBJECT;
{ /* Ieee/string.scm 858 */
{ /* Ieee/string.scm 859 */
obj_t BgL_dz00_1016;
if(
PAIRP(BgL_delimitersz00_129))
{ /* Ieee/string.scm 859 */
BgL_dz00_1016 = 
CAR(BgL_delimitersz00_129); }  else 
{ /* Ieee/string.scm 859 */
BgL_dz00_1016 = BGl_string3610z00zz__r4_strings_6_7z00; } 
{ /* Ieee/string.scm 859 */
long BgL_lenz00_1017;
BgL_lenz00_1017 = 
STRING_LENGTH(BgL_stringz00_128); 
{ /* Ieee/string.scm 862 */
long BgL_iz00_1018;
{ 
long BgL_iz00_2642;
BgL_iz00_2642 = ((long)0); 
BgL_skipzd2separatorzd2_2641:
if(
(BgL_iz00_2642==BgL_lenz00_1017))
{ /* Ieee/string.scm 863 */
BgL_iz00_1018 = BgL_lenz00_1017; }  else 
{ /* Ieee/string.scm 863 */
bool_t BgL_testz00_7623;
{ /* Ieee/string.scm 863 */
unsigned char BgL_auxz00_7624;
{ /* Ieee/string.scm 863 */
long BgL_l2363z00_4196;
BgL_l2363z00_4196 = 
STRING_LENGTH(BgL_stringz00_128); 
if(
BOUND_CHECK(BgL_iz00_2642, BgL_l2363z00_4196))
{ /* Ieee/string.scm 863 */
BgL_auxz00_7624 = 
STRING_REF(BgL_stringz00_128, BgL_iz00_2642)
; }  else 
{ 
obj_t BgL_auxz00_7629;
BgL_auxz00_7629 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)37460)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_2642), BgL_stringz00_128); 
FAILURE(BgL_auxz00_7629,BFALSE,BFALSE);} } 
BgL_testz00_7623 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1016, BgL_auxz00_7624); } 
if(BgL_testz00_7623)
{ 
long BgL_iz00_7635;
BgL_iz00_7635 = 
(BgL_iz00_2642+((long)1)); 
BgL_iz00_2642 = BgL_iz00_7635; 
goto BgL_skipzd2separatorzd2_2641;}  else 
{ /* Ieee/string.scm 863 */
BgL_iz00_1018 = BgL_iz00_2642; } } } 
{ /* Ieee/string.scm 863 */

{ 
long BgL_iz00_1021;obj_t BgL_resz00_1022;
BgL_iz00_1021 = BgL_iz00_1018; 
BgL_resz00_1022 = BNIL; 
BgL_zc3anonymousza31500ze3z83_1023:
if(
(BgL_iz00_1021==BgL_lenz00_1017))
{ /* Ieee/string.scm 867 */
obj_t BgL_auxz00_7639;
{ /* Ieee/string.scm 867 */
bool_t BgL_testz00_7640;
if(
PAIRP(BgL_resz00_1022))
{ /* Ieee/string.scm 867 */
BgL_testz00_7640 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 867 */
BgL_testz00_7640 = 
NULLP(BgL_resz00_1022)
; } 
if(BgL_testz00_7640)
{ /* Ieee/string.scm 867 */
BgL_auxz00_7639 = BgL_resz00_1022
; }  else 
{ 
obj_t BgL_auxz00_7644;
BgL_auxz00_7644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)37565)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3520z00zz__r4_strings_6_7z00, BgL_resz00_1022); 
FAILURE(BgL_auxz00_7644,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_7639);}  else 
{ /* Ieee/string.scm 868 */
long BgL_ez00_1025;
{ /* Ieee/string.scm 868 */
long BgL_arg1506z00_1031;
BgL_arg1506z00_1031 = 
(BgL_iz00_1021+((long)1)); 
{ 
long BgL_iz00_2658;
BgL_iz00_2658 = BgL_arg1506z00_1031; 
BgL_skipzd2nonzd2separatorz00_2657:
if(
(BgL_iz00_2658==BgL_lenz00_1017))
{ /* Ieee/string.scm 868 */
BgL_ez00_1025 = BgL_lenz00_1017; }  else 
{ /* Ieee/string.scm 868 */
bool_t BgL_testz00_7652;
{ /* Ieee/string.scm 868 */
unsigned char BgL_auxz00_7653;
{ /* Ieee/string.scm 868 */
long BgL_l2367z00_4200;
BgL_l2367z00_4200 = 
STRING_LENGTH(BgL_stringz00_128); 
if(
BOUND_CHECK(BgL_iz00_2658, BgL_l2367z00_4200))
{ /* Ieee/string.scm 868 */
BgL_auxz00_7653 = 
STRING_REF(BgL_stringz00_128, BgL_iz00_2658)
; }  else 
{ 
obj_t BgL_auxz00_7658;
BgL_auxz00_7658 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)37586)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_2658), BgL_stringz00_128); 
FAILURE(BgL_auxz00_7658,BFALSE,BFALSE);} } 
BgL_testz00_7652 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1016, BgL_auxz00_7653); } 
if(BgL_testz00_7652)
{ /* Ieee/string.scm 868 */
BgL_ez00_1025 = BgL_iz00_2658; }  else 
{ 
long BgL_iz00_7664;
BgL_iz00_7664 = 
(BgL_iz00_2658+((long)1)); 
BgL_iz00_2658 = BgL_iz00_7664; 
goto BgL_skipzd2nonzd2separatorz00_2657;} } } } 
{ /* Ieee/string.scm 868 */
obj_t BgL_nresz00_1026;
BgL_nresz00_1026 = 
MAKE_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_128, BgL_iz00_1021, BgL_ez00_1025), BgL_resz00_1022); 
{ /* Ieee/string.scm 869 */

if(
(BgL_ez00_1025==BgL_lenz00_1017))
{ /* Ieee/string.scm 870 */
return 
bgl_reverse_bang(BgL_nresz00_1026);}  else 
{ /* Ieee/string.scm 872 */
long BgL_arg1503z00_1028;
{ /* Ieee/string.scm 872 */
long BgL_arg1504z00_1029;
BgL_arg1504z00_1029 = 
(BgL_ez00_1025+((long)1)); 
{ 
long BgL_iz00_2674;
BgL_iz00_2674 = BgL_arg1504z00_1029; 
BgL_skipzd2separatorzd2_2673:
if(
(BgL_iz00_2674==BgL_lenz00_1017))
{ /* Ieee/string.scm 872 */
BgL_arg1503z00_1028 = BgL_lenz00_1017; }  else 
{ /* Ieee/string.scm 872 */
bool_t BgL_testz00_7674;
{ /* Ieee/string.scm 872 */
unsigned char BgL_auxz00_7675;
{ /* Ieee/string.scm 872 */
long BgL_l2371z00_4204;
BgL_l2371z00_4204 = 
STRING_LENGTH(BgL_stringz00_128); 
if(
BOUND_CHECK(BgL_iz00_2674, BgL_l2371z00_4204))
{ /* Ieee/string.scm 872 */
BgL_auxz00_7675 = 
STRING_REF(BgL_stringz00_128, BgL_iz00_2674)
; }  else 
{ 
obj_t BgL_auxz00_7680;
BgL_auxz00_7680 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)37731)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_2674), BgL_stringz00_128); 
FAILURE(BgL_auxz00_7680,BFALSE,BFALSE);} } 
BgL_testz00_7674 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1016, BgL_auxz00_7675); } 
if(BgL_testz00_7674)
{ 
long BgL_iz00_7686;
BgL_iz00_7686 = 
(BgL_iz00_2674+((long)1)); 
BgL_iz00_2674 = BgL_iz00_7686; 
goto BgL_skipzd2separatorzd2_2673;}  else 
{ /* Ieee/string.scm 872 */
BgL_arg1503z00_1028 = BgL_iz00_2674; } } } } 
{ 
obj_t BgL_resz00_7689;long BgL_iz00_7688;
BgL_iz00_7688 = BgL_arg1503z00_1028; 
BgL_resz00_7689 = BgL_nresz00_1026; 
BgL_resz00_1022 = BgL_resz00_7689; 
BgL_iz00_1021 = BgL_iz00_7688; 
goto BgL_zc3anonymousza31500ze3z83_1023;} } } } } } } } } } } 
}



/* _string-split */
obj_t BGl__stringzd2splitzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4032, obj_t BgL_stringz00_4033, obj_t BgL_delimitersz00_4034)
{ AN_OBJECT;
{ /* Ieee/string.scm 858 */
{ /* Ieee/string.scm 859 */
obj_t BgL_auxz00_7690;
if(
STRINGP(BgL_stringz00_4033))
{ /* Ieee/string.scm 859 */
BgL_auxz00_7690 = BgL_stringz00_4033
; }  else 
{ 
obj_t BgL_auxz00_7693;
BgL_auxz00_7693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)37356)), BGl_string3611z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_4033); 
FAILURE(BgL_auxz00_7693,BFALSE,BFALSE);} 
return 
BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_auxz00_7690, BgL_delimitersz00_4034);} } 
}



/* string-cut */
BGL_EXPORTED_DEF obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_130, obj_t BgL_delimitersz00_131)
{ AN_OBJECT;
{ /* Ieee/string.scm 878 */
{ /* Ieee/string.scm 879 */
obj_t BgL_dz00_1034;
if(
PAIRP(BgL_delimitersz00_131))
{ /* Ieee/string.scm 879 */
BgL_dz00_1034 = 
CAR(BgL_delimitersz00_131); }  else 
{ /* Ieee/string.scm 879 */
BgL_dz00_1034 = BGl_string3610z00zz__r4_strings_6_7z00; } 
{ /* Ieee/string.scm 879 */
long BgL_lenz00_1035;
BgL_lenz00_1035 = 
STRING_LENGTH(BgL_stringz00_130); 
{ /* Ieee/string.scm 882 */

{ 
long BgL_iz00_1038;obj_t BgL_resz00_1039;
BgL_iz00_1038 = ((long)0); 
BgL_resz00_1039 = BNIL; 
BgL_zc3anonymousza31508ze3z83_1040:
if(
(BgL_iz00_1038>=BgL_lenz00_1035))
{ /* Ieee/string.scm 886 */
obj_t BgL_arg1510z00_1042;
BgL_arg1510z00_1042 = 
MAKE_PAIR(BGl_string3565z00zz__r4_strings_6_7z00, BgL_resz00_1039); 
return 
bgl_reverse_bang(BgL_arg1510z00_1042);}  else 
{ /* Ieee/string.scm 887 */
long BgL_ez00_1043;
{ 
long BgL_iz00_2691;
BgL_iz00_2691 = BgL_iz00_1038; 
BgL_skipzd2nonzd2separatorz00_2690:
if(
(BgL_iz00_2691==BgL_lenz00_1035))
{ /* Ieee/string.scm 887 */
BgL_ez00_1043 = BgL_lenz00_1035; }  else 
{ /* Ieee/string.scm 887 */
bool_t BgL_testz00_7708;
{ /* Ieee/string.scm 887 */
unsigned char BgL_auxz00_7709;
{ /* Ieee/string.scm 887 */
long BgL_l2375z00_4208;
BgL_l2375z00_4208 = 
STRING_LENGTH(BgL_stringz00_130); 
if(
BOUND_CHECK(BgL_iz00_2691, BgL_l2375z00_4208))
{ /* Ieee/string.scm 887 */
BgL_auxz00_7709 = 
STRING_REF(BgL_stringz00_130, BgL_iz00_2691)
; }  else 
{ 
obj_t BgL_auxz00_7714;
BgL_auxz00_7714 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38257)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_2691), BgL_stringz00_130); 
FAILURE(BgL_auxz00_7714,BFALSE,BFALSE);} } 
BgL_testz00_7708 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1034, BgL_auxz00_7709); } 
if(BgL_testz00_7708)
{ /* Ieee/string.scm 887 */
BgL_ez00_1043 = BgL_iz00_2691; }  else 
{ 
long BgL_iz00_7720;
BgL_iz00_7720 = 
(BgL_iz00_2691+((long)1)); 
BgL_iz00_2691 = BgL_iz00_7720; 
goto BgL_skipzd2nonzd2separatorz00_2690;} } } 
{ /* Ieee/string.scm 887 */
obj_t BgL_sz00_1044;
BgL_sz00_1044 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_130, BgL_iz00_1038, BgL_ez00_1043); 
{ /* Ieee/string.scm 888 */
obj_t BgL_nrz00_1045;
BgL_nrz00_1045 = 
MAKE_PAIR(BgL_sz00_1044, BgL_resz00_1039); 
{ /* Ieee/string.scm 889 */

if(
(BgL_ez00_1043==BgL_lenz00_1035))
{ /* Ieee/string.scm 890 */
return 
bgl_reverse_bang(BgL_nrz00_1045);}  else 
{ 
obj_t BgL_resz00_7729;long BgL_iz00_7727;
BgL_iz00_7727 = 
(BgL_ez00_1043+((long)1)); 
BgL_resz00_7729 = BgL_nrz00_1045; 
BgL_resz00_1039 = BgL_resz00_7729; 
BgL_iz00_1038 = BgL_iz00_7727; 
goto BgL_zc3anonymousza31508ze3z83_1040;} } } } } } } } } } 
}



/* _string-cut */
obj_t BGl__stringzd2cutzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4035, obj_t BgL_stringz00_4036, obj_t BgL_delimitersz00_4037)
{ AN_OBJECT;
{ /* Ieee/string.scm 878 */
{ /* Ieee/string.scm 879 */
obj_t BgL_auxz00_7730;
if(
STRINGP(BgL_stringz00_4036))
{ /* Ieee/string.scm 879 */
BgL_auxz00_7730 = BgL_stringz00_4036
; }  else 
{ 
obj_t BgL_auxz00_7733;
BgL_auxz00_7733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38055)), BGl_string3612z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_stringz00_4036); 
FAILURE(BgL_auxz00_7733,BFALSE,BFALSE);} 
return 
BGl_stringzd2cutzd2zz__r4_strings_6_7z00(BgL_auxz00_7730, BgL_delimitersz00_4037);} } 
}



/* _string-index */
obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_136, obj_t BgL_optz00_135)
{ AN_OBJECT;
{ /* Ieee/string.scm 897 */
{ /* Ieee/string.scm 897 */
obj_t BgL_g1181z00_1050;obj_t BgL_g1182z00_1051;
BgL_g1181z00_1050 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)0))); 
BgL_g1182z00_1051 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 897 */
int BgL_aux1184z00_1053;
BgL_aux1184z00_1053 = 
VECTOR_LENGTH(BgL_optz00_135); 
switch( 
(long)(BgL_aux1184z00_1053)) { case ((long)2) : 

{ /* Ieee/string.scm 897 */

{ /* Ieee/string.scm 897 */
obj_t BgL_arg1515z00_1056;obj_t BgL_arg1516z00_1057;
BgL_arg1515z00_1056 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)0))); 
BgL_arg1516z00_1057 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)1))); 
{ /* Ieee/string.scm 897 */
obj_t BgL_auxz00_7747;
if(
STRINGP(BgL_arg1515z00_1056))
{ /* Ieee/string.scm 897 */
BgL_auxz00_7747 = BgL_arg1515z00_1056
; }  else 
{ 
obj_t BgL_auxz00_7750;
BgL_auxz00_7750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38645)), BGl_string3615z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1515z00_1056); 
FAILURE(BgL_auxz00_7750,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_7747, BgL_arg1516z00_1057, 
BINT(((long)0)));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 897 */
obj_t BgL_startz00_1058;
BgL_startz00_1058 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)2))); 
{ /* Ieee/string.scm 897 */

{ /* Ieee/string.scm 897 */
obj_t BgL_arg1517z00_1059;obj_t BgL_arg1518z00_1060;
BgL_arg1517z00_1059 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)0))); 
BgL_arg1518z00_1060 = 
VECTOR_REF(BgL_optz00_135,
(int)(((long)1))); 
{ /* Ieee/string.scm 897 */
obj_t BgL_auxz00_7762;
if(
STRINGP(BgL_arg1517z00_1059))
{ /* Ieee/string.scm 897 */
BgL_auxz00_7762 = BgL_arg1517z00_1059
; }  else 
{ 
obj_t BgL_auxz00_7765;
BgL_auxz00_7765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38645)), BGl_string3615z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1517z00_1059); 
FAILURE(BgL_auxz00_7765,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_7762, BgL_arg1518z00_1060, BgL_startz00_1058);} } } } break;
default: 
{ /* Ieee/string.scm 897 */
obj_t BgL_arg1519z00_1061;int BgL_arg1521z00_1063;
BgL_arg1519z00_1061 = BGl_symbol3613z00zz__r4_strings_6_7z00; 
BgL_arg1521z00_1063 = 
VECTOR_LENGTH(BgL_optz00_135); 
return 
BGl_errorz00zz__errorz00(BgL_arg1519z00_1061, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1521z00_1063));} } } } } } 
}



/* string-index */
BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_132, obj_t BgL_rsz00_133, obj_t BgL_startz00_134)
{ AN_OBJECT;
{ /* Ieee/string.scm 897 */
{ 
obj_t BgL_sz00_1115;obj_t BgL_cz00_1116;
if(
CHARP(BgL_rsz00_133))
{ /* Ieee/string.scm 909 */
BgL_sz00_1115 = BgL_stringz00_132; 
BgL_cz00_1116 = BgL_rsz00_133; 
BgL_zc3anonymousza31555ze3z83_1117:
{ /* Ieee/string.scm 899 */
long BgL_lenz00_1118;
BgL_lenz00_1118 = 
STRING_LENGTH(BgL_sz00_1115); 
{ 
obj_t BgL_iz00_1120;
BgL_iz00_1120 = BgL_startz00_134; 
BgL_zc3anonymousza31556ze3z83_1121:
{ /* Ieee/string.scm 902 */
bool_t BgL_testz00_7778;
{ /* Ieee/string.scm 902 */
long BgL_n1z00_2765;
{ /* Ieee/string.scm 902 */
obj_t BgL_auxz00_7779;
if(
INTEGERP(BgL_iz00_1120))
{ /* Ieee/string.scm 902 */
BgL_auxz00_7779 = BgL_iz00_1120
; }  else 
{ 
obj_t BgL_auxz00_7782;
BgL_auxz00_7782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38821)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1120); 
FAILURE(BgL_auxz00_7782,BFALSE,BFALSE);} 
BgL_n1z00_2765 = 
(long)CINT(BgL_auxz00_7779); } 
BgL_testz00_7778 = 
(BgL_n1z00_2765>=BgL_lenz00_1118); } 
if(BgL_testz00_7778)
{ /* Ieee/string.scm 902 */
return BFALSE;}  else 
{ /* Ieee/string.scm 904 */
bool_t BgL_testz00_7788;
{ /* Ieee/string.scm 904 */
unsigned char BgL_char2z00_2770;
{ /* Ieee/string.scm 904 */
obj_t BgL_auxz00_7789;
if(
CHARP(BgL_cz00_1116))
{ /* Ieee/string.scm 904 */
BgL_auxz00_7789 = BgL_cz00_1116
; }  else 
{ 
obj_t BgL_auxz00_7792;
BgL_auxz00_7792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38871)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_cz00_1116); 
FAILURE(BgL_auxz00_7792,BFALSE,BFALSE);} 
BgL_char2z00_2770 = 
CCHAR(BgL_auxz00_7789); } 
{ /* Ieee/string.scm 904 */
unsigned char BgL_auxz00_7797;
{ /* Ieee/string.scm 904 */
long BgL_kz00_2768;
{ /* Ieee/string.scm 904 */
obj_t BgL_auxz00_7798;
if(
INTEGERP(BgL_iz00_1120))
{ /* Ieee/string.scm 904 */
BgL_auxz00_7798 = BgL_iz00_1120
; }  else 
{ 
obj_t BgL_auxz00_7801;
BgL_auxz00_7801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38868)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1120); 
FAILURE(BgL_auxz00_7801,BFALSE,BFALSE);} 
BgL_kz00_2768 = 
(long)CINT(BgL_auxz00_7798); } 
{ /* Ieee/string.scm 904 */
long BgL_l2379z00_4212;
BgL_l2379z00_4212 = 
STRING_LENGTH(BgL_sz00_1115); 
if(
BOUND_CHECK(BgL_kz00_2768, BgL_l2379z00_4212))
{ /* Ieee/string.scm 904 */
BgL_auxz00_7797 = 
STRING_REF(BgL_sz00_1115, BgL_kz00_2768)
; }  else 
{ 
obj_t BgL_auxz00_7810;
BgL_auxz00_7810 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38851)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2768), BgL_sz00_1115); 
FAILURE(BgL_auxz00_7810,BFALSE,BFALSE);} } } 
BgL_testz00_7788 = 
(BgL_auxz00_7797==BgL_char2z00_2770); } } 
if(BgL_testz00_7788)
{ /* Ieee/string.scm 904 */
return BgL_iz00_1120;}  else 
{ 
obj_t BgL_iz00_7816;
{ /* Ieee/string.scm 907 */
long BgL_za71za7_2771;
{ /* Ieee/string.scm 907 */
obj_t BgL_auxz00_7817;
if(
INTEGERP(BgL_iz00_1120))
{ /* Ieee/string.scm 907 */
BgL_auxz00_7817 = BgL_iz00_1120
; }  else 
{ 
obj_t BgL_auxz00_7820;
BgL_auxz00_7820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)38901)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1120); 
FAILURE(BgL_auxz00_7820,BFALSE,BFALSE);} 
BgL_za71za7_2771 = 
(long)CINT(BgL_auxz00_7817); } 
BgL_iz00_7816 = 
BINT(
(BgL_za71za7_2771+((long)1))); } 
BgL_iz00_1120 = BgL_iz00_7816; 
goto BgL_zc3anonymousza31556ze3z83_1121;} } } } } }  else 
{ /* Ieee/string.scm 909 */
if(
STRINGP(BgL_rsz00_133))
{ /* Ieee/string.scm 911 */
if(
(
STRING_LENGTH(BgL_rsz00_133)==((long)1)))
{ 
obj_t BgL_cz00_7833;obj_t BgL_sz00_7832;
BgL_sz00_7832 = BgL_stringz00_132; 
{ /* Ieee/string.scm 914 */
obj_t BgL_s2381z00_4214;
BgL_s2381z00_4214 = BgL_rsz00_133; 
{ /* Ieee/string.scm 914 */
long BgL_l2383z00_4216;
BgL_l2383z00_4216 = 
STRING_LENGTH(BgL_s2381z00_4214); 
if(
BOUND_CHECK(((long)0), BgL_l2383z00_4216))
{ /* Ieee/string.scm 914 */
BgL_cz00_7833 = 
BCHAR(
STRING_REF(BgL_s2381z00_4214, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_7839;
BgL_auxz00_7839 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39125)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(((long)0)), BgL_s2381z00_4214); 
FAILURE(BgL_auxz00_7839,BFALSE,BFALSE);} } } 
BgL_cz00_1116 = BgL_cz00_7833; 
BgL_sz00_1115 = BgL_sz00_7832; 
goto BgL_zc3anonymousza31555ze3z83_1117;}  else 
{ /* Ieee/string.scm 913 */
if(
(
STRING_LENGTH(BgL_rsz00_133)<=((long)10)))
{ /* Ieee/string.scm 916 */
long BgL_lenz00_1070;long BgL_lenjz00_1071;
BgL_lenz00_1070 = 
STRING_LENGTH(BgL_stringz00_132); 
BgL_lenjz00_1071 = 
STRING_LENGTH(BgL_rsz00_133); 
{ 
obj_t BgL_iz00_1073;
BgL_iz00_1073 = BgL_startz00_134; 
BgL_zc3anonymousza31527ze3z83_1074:
{ /* Ieee/string.scm 919 */
bool_t BgL_testz00_7849;
{ /* Ieee/string.scm 919 */
long BgL_n1z00_2718;
{ /* Ieee/string.scm 919 */
obj_t BgL_auxz00_7850;
if(
INTEGERP(BgL_iz00_1073))
{ /* Ieee/string.scm 919 */
BgL_auxz00_7850 = BgL_iz00_1073
; }  else 
{ 
obj_t BgL_auxz00_7853;
BgL_auxz00_7853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39297)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1073); 
FAILURE(BgL_auxz00_7853,BFALSE,BFALSE);} 
BgL_n1z00_2718 = 
(long)CINT(BgL_auxz00_7850); } 
BgL_testz00_7849 = 
(BgL_n1z00_2718>=BgL_lenz00_1070); } 
if(BgL_testz00_7849)
{ /* Ieee/string.scm 919 */
return BFALSE;}  else 
{ /* Ieee/string.scm 921 */
unsigned char BgL_cz00_1076;
{ /* Ieee/string.scm 921 */
long BgL_kz00_2721;
{ /* Ieee/string.scm 921 */
obj_t BgL_auxz00_7859;
if(
INTEGERP(BgL_iz00_1073))
{ /* Ieee/string.scm 921 */
BgL_auxz00_7859 = BgL_iz00_1073
; }  else 
{ 
obj_t BgL_auxz00_7862;
BgL_auxz00_7862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39341)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1073); 
FAILURE(BgL_auxz00_7862,BFALSE,BFALSE);} 
BgL_kz00_2721 = 
(long)CINT(BgL_auxz00_7859); } 
{ /* Ieee/string.scm 921 */
long BgL_l2387z00_4220;
BgL_l2387z00_4220 = 
STRING_LENGTH(BgL_stringz00_132); 
if(
BOUND_CHECK(BgL_kz00_2721, BgL_l2387z00_4220))
{ /* Ieee/string.scm 921 */
BgL_cz00_1076 = 
STRING_REF(BgL_stringz00_132, BgL_kz00_2721); }  else 
{ 
obj_t BgL_auxz00_7871;
BgL_auxz00_7871 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39322)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2721), BgL_stringz00_132); 
FAILURE(BgL_auxz00_7871,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1078;
BgL_jz00_1078 = ((long)0); 
BgL_zc3anonymousza31529ze3z83_1079:
if(
(BgL_jz00_1078==BgL_lenjz00_1071))
{ 
obj_t BgL_iz00_7878;
{ /* Ieee/string.scm 924 */
long BgL_za71za7_2724;
{ /* Ieee/string.scm 924 */
obj_t BgL_auxz00_7879;
if(
INTEGERP(BgL_iz00_1073))
{ /* Ieee/string.scm 924 */
BgL_auxz00_7879 = BgL_iz00_1073
; }  else 
{ 
obj_t BgL_auxz00_7882;
BgL_auxz00_7882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39408)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1073); 
FAILURE(BgL_auxz00_7882,BFALSE,BFALSE);} 
BgL_za71za7_2724 = 
(long)CINT(BgL_auxz00_7879); } 
BgL_iz00_7878 = 
BINT(
(BgL_za71za7_2724+((long)1))); } 
BgL_iz00_1073 = BgL_iz00_7878; 
goto BgL_zc3anonymousza31527ze3z83_1074;}  else 
{ /* Ieee/string.scm 925 */
bool_t BgL_testz00_7889;
{ /* Ieee/string.scm 925 */
unsigned char BgL_auxz00_7890;
{ /* Ieee/string.scm 925 */
obj_t BgL_s2389z00_4222;
BgL_s2389z00_4222 = BgL_rsz00_133; 
{ /* Ieee/string.scm 925 */
long BgL_l2391z00_4224;
BgL_l2391z00_4224 = 
STRING_LENGTH(BgL_s2389z00_4222); 
if(
BOUND_CHECK(BgL_jz00_1078, BgL_l2391z00_4224))
{ /* Ieee/string.scm 925 */
BgL_auxz00_7890 = 
STRING_REF(BgL_s2389z00_4222, BgL_jz00_1078)
; }  else 
{ 
obj_t BgL_auxz00_7895;
BgL_auxz00_7895 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39439)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1078), BgL_s2389z00_4222); 
FAILURE(BgL_auxz00_7895,BFALSE,BFALSE);} } } 
BgL_testz00_7889 = 
(BgL_cz00_1076==BgL_auxz00_7890); } 
if(BgL_testz00_7889)
{ /* Ieee/string.scm 925 */
return BgL_iz00_1073;}  else 
{ 
long BgL_jz00_7901;
BgL_jz00_7901 = 
(BgL_jz00_1078+((long)1)); 
BgL_jz00_1078 = BgL_jz00_7901; 
goto BgL_zc3anonymousza31529ze3z83_1079;} } } } } } }  else 
{ /* Ieee/string.scm 929 */
obj_t BgL_tz00_1087;long BgL_lenz00_1088;
{ /* Ieee/string.scm 929 */
obj_t BgL_list1549z00_1110;
BgL_list1549z00_1110 = 
MAKE_PAIR(
BCHAR(((unsigned char)'n')), BNIL); 
{ /* Ieee/string.scm 929 */
obj_t BgL_res2207z00_2738;
{ /* Ieee/string.scm 929 */
obj_t BgL_arg1240z00_2735;
BgL_arg1240z00_2735 = 
CAR(BgL_list1549z00_1110); 
{ /* Ieee/string.scm 929 */
unsigned char BgL_auxz00_7906;
{ /* Ieee/string.scm 929 */
obj_t BgL_auxz00_7907;
if(
CHARP(BgL_arg1240z00_2735))
{ /* Ieee/string.scm 929 */
BgL_auxz00_7907 = BgL_arg1240z00_2735
; }  else 
{ 
obj_t BgL_auxz00_7910;
BgL_auxz00_7910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39536)), BGl_string3614z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_2735); 
FAILURE(BgL_auxz00_7910,BFALSE,BFALSE);} 
BgL_auxz00_7906 = 
CCHAR(BgL_auxz00_7907); } 
BgL_res2207z00_2738 = 
make_string(((long)256), BgL_auxz00_7906); } } 
BgL_tz00_1087 = BgL_res2207z00_2738; } } 
BgL_lenz00_1088 = 
STRING_LENGTH(BgL_stringz00_132); 
{ /* Ieee/string.scm 931 */
long BgL_g1109z00_1089;
BgL_g1109z00_1089 = 
(
STRING_LENGTH(BgL_rsz00_133)-((long)1)); 
{ 
long BgL_iz00_1091;
BgL_iz00_1091 = BgL_g1109z00_1089; 
BgL_zc3anonymousza31535ze3z83_1092:
if(
(BgL_iz00_1091==((long)-1)))
{ 
obj_t BgL_iz00_1095;
BgL_iz00_1095 = BgL_startz00_134; 
BgL_zc3anonymousza31537ze3z83_1096:
{ /* Ieee/string.scm 935 */
bool_t BgL_testz00_7921;
{ /* Ieee/string.scm 935 */
long BgL_n1z00_2745;
{ /* Ieee/string.scm 935 */
obj_t BgL_auxz00_7922;
if(
INTEGERP(BgL_iz00_1095))
{ /* Ieee/string.scm 935 */
BgL_auxz00_7922 = BgL_iz00_1095
; }  else 
{ 
obj_t BgL_auxz00_7925;
BgL_auxz00_7925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39715)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1095); 
FAILURE(BgL_auxz00_7925,BFALSE,BFALSE);} 
BgL_n1z00_2745 = 
(long)CINT(BgL_auxz00_7922); } 
BgL_testz00_7921 = 
(BgL_n1z00_2745>=BgL_lenz00_1088); } 
if(BgL_testz00_7921)
{ /* Ieee/string.scm 935 */
return BFALSE;}  else 
{ /* Ieee/string.scm 937 */
bool_t BgL_testz00_7931;
{ /* Ieee/string.scm 937 */
unsigned char BgL_auxz00_7932;
{ /* Ieee/string.scm 938 */
long BgL_i2398z00_4231;
{ /* Ieee/string.scm 938 */
unsigned char BgL_auxz00_7933;
{ /* Ieee/string.scm 938 */
long BgL_kz00_2748;
{ /* Ieee/string.scm 938 */
obj_t BgL_auxz00_7934;
if(
INTEGERP(BgL_iz00_1095))
{ /* Ieee/string.scm 938 */
BgL_auxz00_7934 = BgL_iz00_1095
; }  else 
{ 
obj_t BgL_auxz00_7937;
BgL_auxz00_7937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39803)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1095); 
FAILURE(BgL_auxz00_7937,BFALSE,BFALSE);} 
BgL_kz00_2748 = 
(long)CINT(BgL_auxz00_7934); } 
{ /* Ieee/string.scm 938 */
long BgL_l2395z00_4228;
BgL_l2395z00_4228 = 
STRING_LENGTH(BgL_stringz00_132); 
if(
BOUND_CHECK(BgL_kz00_2748, BgL_l2395z00_4228))
{ /* Ieee/string.scm 938 */
BgL_auxz00_7933 = 
STRING_REF(BgL_stringz00_132, BgL_kz00_2748)
; }  else 
{ 
obj_t BgL_auxz00_7946;
BgL_auxz00_7946 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39781)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2748), BgL_stringz00_132); 
FAILURE(BgL_auxz00_7946,BFALSE,BFALSE);} } } 
BgL_i2398z00_4231 = 
(BgL_auxz00_7933); } 
{ /* Ieee/string.scm 937 */
long BgL_l2399z00_4232;
BgL_l2399z00_4232 = 
STRING_LENGTH(BgL_tz00_1087); 
if(
BOUND_CHECK(BgL_i2398z00_4231, BgL_l2399z00_4232))
{ /* Ieee/string.scm 937 */
BgL_auxz00_7932 = 
STRING_REF(BgL_tz00_1087, BgL_i2398z00_4231)
; }  else 
{ 
obj_t BgL_auxz00_7956;
BgL_auxz00_7956 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39747)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2398z00_4231), BgL_tz00_1087); 
FAILURE(BgL_auxz00_7956,BFALSE,BFALSE);} } } 
BgL_testz00_7931 = 
(BgL_auxz00_7932==((unsigned char)'y')); } 
if(BgL_testz00_7931)
{ /* Ieee/string.scm 937 */
return BgL_iz00_1095;}  else 
{ 
obj_t BgL_iz00_7962;
{ /* Ieee/string.scm 942 */
long BgL_za71za7_2754;
{ /* Ieee/string.scm 942 */
obj_t BgL_auxz00_7963;
if(
INTEGERP(BgL_iz00_1095))
{ /* Ieee/string.scm 942 */
BgL_auxz00_7963 = BgL_iz00_1095
; }  else 
{ 
obj_t BgL_auxz00_7966;
BgL_auxz00_7966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39847)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1095); 
FAILURE(BgL_auxz00_7966,BFALSE,BFALSE);} 
BgL_za71za7_2754 = 
(long)CINT(BgL_auxz00_7963); } 
BgL_iz00_7962 = 
BINT(
(BgL_za71za7_2754+((long)1))); } 
BgL_iz00_1095 = BgL_iz00_7962; 
goto BgL_zc3anonymousza31537ze3z83_1096;} } } }  else 
{ /* Ieee/string.scm 932 */
{ /* Ieee/string.scm 944 */
long BgL_arg1544z00_1104;
{ /* Ieee/string.scm 944 */
unsigned char BgL_auxz00_7973;
{ /* Ieee/string.scm 944 */
obj_t BgL_s2401z00_4234;
BgL_s2401z00_4234 = BgL_rsz00_133; 
{ /* Ieee/string.scm 944 */
long BgL_l2403z00_4236;
BgL_l2403z00_4236 = 
STRING_LENGTH(BgL_s2401z00_4234); 
if(
BOUND_CHECK(BgL_iz00_1091, BgL_l2403z00_4236))
{ /* Ieee/string.scm 944 */
BgL_auxz00_7973 = 
STRING_REF(BgL_s2401z00_4234, BgL_iz00_1091)
; }  else 
{ 
obj_t BgL_auxz00_7978;
BgL_auxz00_7978 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39910)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1091), BgL_s2401z00_4234); 
FAILURE(BgL_auxz00_7978,BFALSE,BFALSE);} } } 
BgL_arg1544z00_1104 = 
(BgL_auxz00_7973); } 
{ /* Ieee/string.scm 944 */
long BgL_l2407z00_4240;
BgL_l2407z00_4240 = 
STRING_LENGTH(BgL_tz00_1087); 
if(
BOUND_CHECK(BgL_arg1544z00_1104, BgL_l2407z00_4240))
{ /* Ieee/string.scm 944 */
STRING_SET(BgL_tz00_1087, BgL_arg1544z00_1104, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_7988;
BgL_auxz00_7988 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)39877)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1544z00_1104), BgL_tz00_1087); 
FAILURE(BgL_auxz00_7988,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7993;
BgL_iz00_7993 = 
(BgL_iz00_1091-((long)1)); 
BgL_iz00_1091 = BgL_iz00_7993; 
goto BgL_zc3anonymousza31535ze3z83_1092;} } } } } } }  else 
{ /* Ieee/string.scm 911 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3613z00zz__r4_strings_6_7z00, BGl_string3617z00zz__r4_strings_6_7z00, BgL_rsz00_133);} } } } 
}



/* _string-index-right */
obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_envz00_141, obj_t BgL_optz00_140)
{ AN_OBJECT;
{ /* Ieee/string.scm 950 */
{ /* Ieee/string.scm 950 */
obj_t BgL_sz00_1128;obj_t BgL_g1185z00_1129;
BgL_sz00_1128 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)0))); 
BgL_g1185z00_1129 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 950 */
int BgL_aux1187z00_1131;
BgL_aux1187z00_1131 = 
VECTOR_LENGTH(BgL_optz00_140); 
switch( 
(long)(BgL_aux1187z00_1131)) { case ((long)2) : 

{ /* Ieee/string.scm 950 */
long BgL_startz00_1133;
{ /* Ieee/string.scm 950 */
long BgL_auxz00_8001;
{ /* Ieee/string.scm 950 */
obj_t BgL_stringz00_2773;
if(
STRINGP(BgL_sz00_1128))
{ /* Ieee/string.scm 950 */
BgL_stringz00_2773 = BgL_sz00_1128; }  else 
{ 
obj_t BgL_auxz00_8004;
BgL_auxz00_8004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40246)), BGl_string3620z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_sz00_1128); 
FAILURE(BgL_auxz00_8004,BFALSE,BFALSE);} 
BgL_auxz00_8001 = 
STRING_LENGTH(BgL_stringz00_2773); } 
BgL_startz00_1133 = 
(BgL_auxz00_8001-((long)1)); } 
{ /* Ieee/string.scm 950 */

{ /* Ieee/string.scm 950 */
obj_t BgL_arg1562z00_1134;obj_t BgL_arg1563z00_1135;
BgL_arg1562z00_1134 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)0))); 
BgL_arg1563z00_1135 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)1))); 
{ /* Ieee/string.scm 950 */
obj_t BgL_auxz00_8014;
if(
STRINGP(BgL_arg1562z00_1134))
{ /* Ieee/string.scm 950 */
BgL_auxz00_8014 = BgL_arg1562z00_1134
; }  else 
{ 
obj_t BgL_auxz00_8017;
BgL_auxz00_8017 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40190)), BGl_string3620z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1562z00_1134); 
FAILURE(BgL_auxz00_8017,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8014, BgL_arg1563z00_1135, 
BINT(BgL_startz00_1133));} } } } break;case ((long)3) : 

{ /* Ieee/string.scm 950 */
obj_t BgL_startz00_1138;
BgL_startz00_1138 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)2))); 
{ /* Ieee/string.scm 950 */

{ /* Ieee/string.scm 950 */
obj_t BgL_arg1566z00_1139;obj_t BgL_arg1567z00_1140;
BgL_arg1566z00_1139 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)0))); 
BgL_arg1567z00_1140 = 
VECTOR_REF(BgL_optz00_140,
(int)(((long)1))); 
{ /* Ieee/string.scm 950 */
obj_t BgL_auxz00_8029;
if(
STRINGP(BgL_arg1566z00_1139))
{ /* Ieee/string.scm 950 */
BgL_auxz00_8029 = BgL_arg1566z00_1139
; }  else 
{ 
obj_t BgL_auxz00_8032;
BgL_auxz00_8032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40190)), BGl_string3620z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1566z00_1139); 
FAILURE(BgL_auxz00_8032,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8029, BgL_arg1567z00_1140, BgL_startz00_1138);} } } } break;
default: 
{ /* Ieee/string.scm 950 */
obj_t BgL_arg1568z00_1141;int BgL_arg1571z00_1143;
BgL_arg1568z00_1141 = BGl_symbol3618z00zz__r4_strings_6_7z00; 
BgL_arg1571z00_1143 = 
VECTOR_LENGTH(BgL_optz00_140); 
return 
BGl_errorz00zz__errorz00(BgL_arg1568z00_1141, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1571z00_1143));} } } } } } 
}



/* string-index-right */
BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_137, obj_t BgL_rsz00_138, obj_t BgL_startz00_139)
{ AN_OBJECT;
{ /* Ieee/string.scm 950 */
{ 
obj_t BgL_sz00_1197;obj_t BgL_cz00_1198;
{ /* Ieee/string.scm 961 */
bool_t BgL_testz00_8042;
{ /* Ieee/string.scm 961 */
long BgL_n1z00_2777;
{ /* Ieee/string.scm 961 */
obj_t BgL_auxz00_8043;
if(
INTEGERP(BgL_startz00_139))
{ /* Ieee/string.scm 961 */
BgL_auxz00_8043 = BgL_startz00_139
; }  else 
{ 
obj_t BgL_auxz00_8046;
BgL_auxz00_8046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40471)), BGl_string3619z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_startz00_139); 
FAILURE(BgL_auxz00_8046,BFALSE,BFALSE);} 
BgL_n1z00_2777 = 
(long)CINT(BgL_auxz00_8043); } 
BgL_testz00_8042 = 
(BgL_n1z00_2777>
STRING_LENGTH(BgL_sz00_137)); } 
if(BgL_testz00_8042)
{ /* Ieee/string.scm 961 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3613z00zz__r4_strings_6_7z00, BGl_string3621z00zz__r4_strings_6_7z00, BgL_startz00_139);}  else 
{ /* Ieee/string.scm 961 */
if(
CHARP(BgL_rsz00_138))
{ /* Ieee/string.scm 963 */
BgL_sz00_1197 = BgL_sz00_137; 
BgL_cz00_1198 = BgL_rsz00_138; 
BgL_zc3anonymousza31609ze3z83_1199:
{ 
obj_t BgL_iz00_1201;
BgL_iz00_1201 = BgL_startz00_139; 
BgL_zc3anonymousza31610ze3z83_1202:
{ /* Ieee/string.scm 954 */
bool_t BgL_testz00_8056;
{ /* Ieee/string.scm 954 */
long BgL_n1z00_2837;
{ /* Ieee/string.scm 954 */
obj_t BgL_auxz00_8057;
if(
INTEGERP(BgL_iz00_1201))
{ /* Ieee/string.scm 954 */
BgL_auxz00_8057 = BgL_iz00_1201
; }  else 
{ 
obj_t BgL_auxz00_8060;
BgL_auxz00_8060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40351)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1201); 
FAILURE(BgL_auxz00_8060,BFALSE,BFALSE);} 
BgL_n1z00_2837 = 
(long)CINT(BgL_auxz00_8057); } 
BgL_testz00_8056 = 
(BgL_n1z00_2837<((long)0)); } 
if(BgL_testz00_8056)
{ /* Ieee/string.scm 954 */
return BFALSE;}  else 
{ /* Ieee/string.scm 956 */
bool_t BgL_testz00_8066;
{ /* Ieee/string.scm 956 */
unsigned char BgL_char2z00_2842;
{ /* Ieee/string.scm 956 */
obj_t BgL_auxz00_8067;
if(
CHARP(BgL_cz00_1198))
{ /* Ieee/string.scm 956 */
BgL_auxz00_8067 = BgL_cz00_1198
; }  else 
{ 
obj_t BgL_auxz00_8070;
BgL_auxz00_8070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40400)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_cz00_1198); 
FAILURE(BgL_auxz00_8070,BFALSE,BFALSE);} 
BgL_char2z00_2842 = 
CCHAR(BgL_auxz00_8067); } 
{ /* Ieee/string.scm 956 */
unsigned char BgL_auxz00_8075;
{ /* Ieee/string.scm 956 */
long BgL_kz00_2840;
{ /* Ieee/string.scm 956 */
obj_t BgL_auxz00_8076;
if(
INTEGERP(BgL_iz00_1201))
{ /* Ieee/string.scm 956 */
BgL_auxz00_8076 = BgL_iz00_1201
; }  else 
{ 
obj_t BgL_auxz00_8079;
BgL_auxz00_8079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40397)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1201); 
FAILURE(BgL_auxz00_8079,BFALSE,BFALSE);} 
BgL_kz00_2840 = 
(long)CINT(BgL_auxz00_8076); } 
{ /* Ieee/string.scm 956 */
long BgL_l2411z00_4244;
BgL_l2411z00_4244 = 
STRING_LENGTH(BgL_sz00_1197); 
if(
BOUND_CHECK(BgL_kz00_2840, BgL_l2411z00_4244))
{ /* Ieee/string.scm 956 */
BgL_auxz00_8075 = 
STRING_REF(BgL_sz00_1197, BgL_kz00_2840)
; }  else 
{ 
obj_t BgL_auxz00_8088;
BgL_auxz00_8088 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40380)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2840), BgL_sz00_1197); 
FAILURE(BgL_auxz00_8088,BFALSE,BFALSE);} } } 
BgL_testz00_8066 = 
(BgL_auxz00_8075==BgL_char2z00_2842); } } 
if(BgL_testz00_8066)
{ /* Ieee/string.scm 956 */
return BgL_iz00_1201;}  else 
{ 
obj_t BgL_iz00_8094;
{ /* Ieee/string.scm 959 */
long BgL_za71za7_2843;
{ /* Ieee/string.scm 959 */
obj_t BgL_auxz00_8095;
if(
INTEGERP(BgL_iz00_1201))
{ /* Ieee/string.scm 959 */
BgL_auxz00_8095 = BgL_iz00_1201
; }  else 
{ 
obj_t BgL_auxz00_8098;
BgL_auxz00_8098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40435)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1201); 
FAILURE(BgL_auxz00_8098,BFALSE,BFALSE);} 
BgL_za71za7_2843 = 
(long)CINT(BgL_auxz00_8095); } 
BgL_iz00_8094 = 
BINT(
(BgL_za71za7_2843-((long)1))); } 
BgL_iz00_1201 = BgL_iz00_8094; 
goto BgL_zc3anonymousza31610ze3z83_1202;} } } } }  else 
{ /* Ieee/string.scm 963 */
if(
STRINGP(BgL_rsz00_138))
{ /* Ieee/string.scm 965 */
if(
(
STRING_LENGTH(BgL_rsz00_138)==((long)1)))
{ 
obj_t BgL_cz00_8111;obj_t BgL_sz00_8110;
BgL_sz00_8110 = BgL_sz00_137; 
{ /* Ieee/string.scm 968 */
obj_t BgL_s2413z00_4246;
BgL_s2413z00_4246 = BgL_rsz00_138; 
{ /* Ieee/string.scm 968 */
long BgL_l2415z00_4248;
BgL_l2415z00_4248 = 
STRING_LENGTH(BgL_s2413z00_4246); 
if(
BOUND_CHECK(((long)0), BgL_l2415z00_4248))
{ /* Ieee/string.scm 968 */
BgL_cz00_8111 = 
BCHAR(
STRING_REF(BgL_s2413z00_4246, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_8117;
BgL_auxz00_8117 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40748)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(((long)0)), BgL_s2413z00_4246); 
FAILURE(BgL_auxz00_8117,BFALSE,BFALSE);} } } 
BgL_cz00_1198 = BgL_cz00_8111; 
BgL_sz00_1197 = BgL_sz00_8110; 
goto BgL_zc3anonymousza31609ze3z83_1199;}  else 
{ /* Ieee/string.scm 967 */
if(
(
STRING_LENGTH(BgL_rsz00_138)<=((long)10)))
{ /* Ieee/string.scm 970 */
long BgL_lenjz00_1152;
BgL_lenjz00_1152 = 
STRING_LENGTH(BgL_rsz00_138); 
{ 
obj_t BgL_iz00_1154;
BgL_iz00_1154 = BgL_startz00_139; 
BgL_zc3anonymousza31578ze3z83_1155:
{ /* Ieee/string.scm 973 */
bool_t BgL_testz00_8126;
{ /* Ieee/string.scm 973 */
long BgL_n1z00_2791;
{ /* Ieee/string.scm 973 */
obj_t BgL_auxz00_8127;
if(
INTEGERP(BgL_iz00_1154))
{ /* Ieee/string.scm 973 */
BgL_auxz00_8127 = BgL_iz00_1154
; }  else 
{ 
obj_t BgL_auxz00_8130;
BgL_auxz00_8130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40914)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1154); 
FAILURE(BgL_auxz00_8130,BFALSE,BFALSE);} 
BgL_n1z00_2791 = 
(long)CINT(BgL_auxz00_8127); } 
BgL_testz00_8126 = 
(BgL_n1z00_2791<((long)0)); } 
if(BgL_testz00_8126)
{ /* Ieee/string.scm 973 */
return BFALSE;}  else 
{ /* Ieee/string.scm 975 */
unsigned char BgL_cz00_1157;
{ /* Ieee/string.scm 975 */
long BgL_kz00_2794;
{ /* Ieee/string.scm 975 */
obj_t BgL_auxz00_8136;
if(
INTEGERP(BgL_iz00_1154))
{ /* Ieee/string.scm 975 */
BgL_auxz00_8136 = BgL_iz00_1154
; }  else 
{ 
obj_t BgL_auxz00_8139;
BgL_auxz00_8139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40951)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1154); 
FAILURE(BgL_auxz00_8139,BFALSE,BFALSE);} 
BgL_kz00_2794 = 
(long)CINT(BgL_auxz00_8136); } 
{ /* Ieee/string.scm 975 */
long BgL_l2419z00_4252;
BgL_l2419z00_4252 = 
STRING_LENGTH(BgL_sz00_137); 
if(
BOUND_CHECK(BgL_kz00_2794, BgL_l2419z00_4252))
{ /* Ieee/string.scm 975 */
BgL_cz00_1157 = 
STRING_REF(BgL_sz00_137, BgL_kz00_2794); }  else 
{ 
obj_t BgL_auxz00_8148;
BgL_auxz00_8148 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)40937)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2794), BgL_sz00_137); 
FAILURE(BgL_auxz00_8148,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1159;
BgL_jz00_1159 = ((long)0); 
BgL_zc3anonymousza31580ze3z83_1160:
if(
(BgL_jz00_1159==BgL_lenjz00_1152))
{ 
obj_t BgL_iz00_8155;
{ /* Ieee/string.scm 978 */
long BgL_za71za7_2797;
{ /* Ieee/string.scm 978 */
obj_t BgL_auxz00_8156;
if(
INTEGERP(BgL_iz00_1154))
{ /* Ieee/string.scm 978 */
BgL_auxz00_8156 = BgL_iz00_1154
; }  else 
{ 
obj_t BgL_auxz00_8159;
BgL_auxz00_8159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41018)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1154); 
FAILURE(BgL_auxz00_8159,BFALSE,BFALSE);} 
BgL_za71za7_2797 = 
(long)CINT(BgL_auxz00_8156); } 
BgL_iz00_8155 = 
BINT(
(BgL_za71za7_2797-((long)1))); } 
BgL_iz00_1154 = BgL_iz00_8155; 
goto BgL_zc3anonymousza31578ze3z83_1155;}  else 
{ /* Ieee/string.scm 979 */
bool_t BgL_testz00_8166;
{ /* Ieee/string.scm 979 */
unsigned char BgL_auxz00_8167;
{ /* Ieee/string.scm 979 */
obj_t BgL_s2421z00_4254;
BgL_s2421z00_4254 = BgL_rsz00_138; 
{ /* Ieee/string.scm 979 */
long BgL_l2423z00_4256;
BgL_l2423z00_4256 = 
STRING_LENGTH(BgL_s2421z00_4254); 
if(
BOUND_CHECK(BgL_jz00_1159, BgL_l2423z00_4256))
{ /* Ieee/string.scm 979 */
BgL_auxz00_8167 = 
STRING_REF(BgL_s2421z00_4254, BgL_jz00_1159)
; }  else 
{ 
obj_t BgL_auxz00_8172;
BgL_auxz00_8172 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41049)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1159), BgL_s2421z00_4254); 
FAILURE(BgL_auxz00_8172,BFALSE,BFALSE);} } } 
BgL_testz00_8166 = 
(BgL_cz00_1157==BgL_auxz00_8167); } 
if(BgL_testz00_8166)
{ /* Ieee/string.scm 979 */
return BgL_iz00_1154;}  else 
{ 
long BgL_jz00_8178;
BgL_jz00_8178 = 
(BgL_jz00_1159+((long)1)); 
BgL_jz00_1159 = BgL_jz00_8178; 
goto BgL_zc3anonymousza31580ze3z83_1160;} } } } } } }  else 
{ /* Ieee/string.scm 983 */
obj_t BgL_tz00_1168;
{ /* Ieee/string.scm 983 */
obj_t BgL_list1603z00_1191;
BgL_list1603z00_1191 = 
MAKE_PAIR(
BCHAR(((unsigned char)'n')), BNIL); 
{ /* Ieee/string.scm 983 */
obj_t BgL_res2208z00_2811;
{ /* Ieee/string.scm 983 */
obj_t BgL_arg1240z00_2808;
BgL_arg1240z00_2808 = 
CAR(BgL_list1603z00_1191); 
{ /* Ieee/string.scm 983 */
unsigned char BgL_auxz00_8183;
{ /* Ieee/string.scm 983 */
obj_t BgL_auxz00_8184;
if(
CHARP(BgL_arg1240z00_2808))
{ /* Ieee/string.scm 983 */
BgL_auxz00_8184 = BgL_arg1240z00_2808
; }  else 
{ 
obj_t BgL_auxz00_8187;
BgL_auxz00_8187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41146)), BGl_string3619z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_2808); 
FAILURE(BgL_auxz00_8187,BFALSE,BFALSE);} 
BgL_auxz00_8183 = 
CCHAR(BgL_auxz00_8184); } 
BgL_res2208z00_2811 = 
make_string(((long)256), BgL_auxz00_8183); } } 
BgL_tz00_1168 = BgL_res2208z00_2811; } } 
{ /* Ieee/string.scm 985 */
long BgL_g1111z00_1170;
BgL_g1111z00_1170 = 
(
STRING_LENGTH(BgL_rsz00_138)-((long)1)); 
{ 
long BgL_iz00_1172;
BgL_iz00_1172 = BgL_g1111z00_1170; 
BgL_zc3anonymousza31586ze3z83_1173:
if(
(BgL_iz00_1172==((long)-1)))
{ 
obj_t BgL_iz00_1176;
BgL_iz00_1176 = BgL_startz00_139; 
BgL_zc3anonymousza31588ze3z83_1177:
{ /* Ieee/string.scm 989 */
bool_t BgL_testz00_8197;
{ /* Ieee/string.scm 989 */
long BgL_n1z00_2818;
{ /* Ieee/string.scm 989 */
obj_t BgL_auxz00_8198;
if(
INTEGERP(BgL_iz00_1176))
{ /* Ieee/string.scm 989 */
BgL_auxz00_8198 = BgL_iz00_1176
; }  else 
{ 
obj_t BgL_auxz00_8201;
BgL_auxz00_8201 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41319)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1176); 
FAILURE(BgL_auxz00_8201,BFALSE,BFALSE);} 
BgL_n1z00_2818 = 
(long)CINT(BgL_auxz00_8198); } 
BgL_testz00_8197 = 
(BgL_n1z00_2818<((long)0)); } 
if(BgL_testz00_8197)
{ /* Ieee/string.scm 989 */
return BFALSE;}  else 
{ /* Ieee/string.scm 991 */
bool_t BgL_testz00_8207;
{ /* Ieee/string.scm 991 */
unsigned char BgL_auxz00_8208;
{ /* Ieee/string.scm 992 */
long BgL_i2430z00_4263;
{ /* Ieee/string.scm 992 */
unsigned char BgL_auxz00_8209;
{ /* Ieee/string.scm 992 */
long BgL_kz00_2821;
{ /* Ieee/string.scm 992 */
obj_t BgL_auxz00_8210;
if(
INTEGERP(BgL_iz00_1176))
{ /* Ieee/string.scm 992 */
BgL_auxz00_8210 = BgL_iz00_1176
; }  else 
{ 
obj_t BgL_auxz00_8213;
BgL_auxz00_8213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41400)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1176); 
FAILURE(BgL_auxz00_8213,BFALSE,BFALSE);} 
BgL_kz00_2821 = 
(long)CINT(BgL_auxz00_8210); } 
{ /* Ieee/string.scm 992 */
long BgL_l2427z00_4260;
BgL_l2427z00_4260 = 
STRING_LENGTH(BgL_sz00_137); 
if(
BOUND_CHECK(BgL_kz00_2821, BgL_l2427z00_4260))
{ /* Ieee/string.scm 992 */
BgL_auxz00_8209 = 
STRING_REF(BgL_sz00_137, BgL_kz00_2821)
; }  else 
{ 
obj_t BgL_auxz00_8222;
BgL_auxz00_8222 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41383)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2821), BgL_sz00_137); 
FAILURE(BgL_auxz00_8222,BFALSE,BFALSE);} } } 
BgL_i2430z00_4263 = 
(BgL_auxz00_8209); } 
{ /* Ieee/string.scm 991 */
long BgL_l2431z00_4264;
BgL_l2431z00_4264 = 
STRING_LENGTH(BgL_tz00_1168); 
if(
BOUND_CHECK(BgL_i2430z00_4263, BgL_l2431z00_4264))
{ /* Ieee/string.scm 991 */
BgL_auxz00_8208 = 
STRING_REF(BgL_tz00_1168, BgL_i2430z00_4263)
; }  else 
{ 
obj_t BgL_auxz00_8232;
BgL_auxz00_8232 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41349)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2430z00_4263), BgL_tz00_1168); 
FAILURE(BgL_auxz00_8232,BFALSE,BFALSE);} } } 
BgL_testz00_8207 = 
(BgL_auxz00_8208==((unsigned char)'y')); } 
if(BgL_testz00_8207)
{ /* Ieee/string.scm 991 */
return BgL_iz00_1176;}  else 
{ 
obj_t BgL_iz00_8238;
{ /* Ieee/string.scm 996 */
long BgL_za71za7_2827;
{ /* Ieee/string.scm 996 */
obj_t BgL_auxz00_8239;
if(
INTEGERP(BgL_iz00_1176))
{ /* Ieee/string.scm 996 */
BgL_auxz00_8239 = BgL_iz00_1176
; }  else 
{ 
obj_t BgL_auxz00_8242;
BgL_auxz00_8242 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41444)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1176); 
FAILURE(BgL_auxz00_8242,BFALSE,BFALSE);} 
BgL_za71za7_2827 = 
(long)CINT(BgL_auxz00_8239); } 
BgL_iz00_8238 = 
BINT(
(BgL_za71za7_2827-((long)1))); } 
BgL_iz00_1176 = BgL_iz00_8238; 
goto BgL_zc3anonymousza31588ze3z83_1177;} } } }  else 
{ /* Ieee/string.scm 986 */
{ /* Ieee/string.scm 998 */
long BgL_arg1598z00_1185;
{ /* Ieee/string.scm 998 */
unsigned char BgL_auxz00_8249;
{ /* Ieee/string.scm 998 */
obj_t BgL_s2433z00_4266;
BgL_s2433z00_4266 = BgL_rsz00_138; 
{ /* Ieee/string.scm 998 */
long BgL_l2435z00_4268;
BgL_l2435z00_4268 = 
STRING_LENGTH(BgL_s2433z00_4266); 
if(
BOUND_CHECK(BgL_iz00_1172, BgL_l2435z00_4268))
{ /* Ieee/string.scm 998 */
BgL_auxz00_8249 = 
STRING_REF(BgL_s2433z00_4266, BgL_iz00_1172)
; }  else 
{ 
obj_t BgL_auxz00_8254;
BgL_auxz00_8254 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41507)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1172), BgL_s2433z00_4266); 
FAILURE(BgL_auxz00_8254,BFALSE,BFALSE);} } } 
BgL_arg1598z00_1185 = 
(BgL_auxz00_8249); } 
{ /* Ieee/string.scm 998 */
long BgL_l2439z00_4272;
BgL_l2439z00_4272 = 
STRING_LENGTH(BgL_tz00_1168); 
if(
BOUND_CHECK(BgL_arg1598z00_1185, BgL_l2439z00_4272))
{ /* Ieee/string.scm 998 */
STRING_SET(BgL_tz00_1168, BgL_arg1598z00_1185, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_8264;
BgL_auxz00_8264 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41474)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1598z00_1185), BgL_tz00_1168); 
FAILURE(BgL_auxz00_8264,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8269;
BgL_iz00_8269 = 
(BgL_iz00_1172-((long)1)); 
BgL_iz00_1172 = BgL_iz00_8269; 
goto BgL_zc3anonymousza31586ze3z83_1173;} } } } } } }  else 
{ /* Ieee/string.scm 965 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3618z00zz__r4_strings_6_7z00, BGl_string3617z00zz__r4_strings_6_7z00, BgL_rsz00_138);} } } } } } 
}



/* _string-skip */
obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_envz00_146, obj_t BgL_optz00_145)
{ AN_OBJECT;
{ /* Ieee/string.scm 1004 */
{ /* Ieee/string.scm 1004 */
obj_t BgL_g1188z00_1209;obj_t BgL_g1189z00_1210;
BgL_g1188z00_1209 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)0))); 
BgL_g1189z00_1210 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1004 */
int BgL_aux1191z00_1212;
BgL_aux1191z00_1212 = 
VECTOR_LENGTH(BgL_optz00_145); 
switch( 
(long)(BgL_aux1191z00_1212)) { case ((long)2) : 

{ /* Ieee/string.scm 1004 */

{ /* Ieee/string.scm 1004 */
obj_t BgL_arg1616z00_1215;obj_t BgL_arg1618z00_1216;
BgL_arg1616z00_1215 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)0))); 
BgL_arg1618z00_1216 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)1))); 
{ /* Ieee/string.scm 1004 */
obj_t BgL_auxz00_8281;
if(
STRINGP(BgL_arg1616z00_1215))
{ /* Ieee/string.scm 1004 */
BgL_auxz00_8281 = BgL_arg1616z00_1215
; }  else 
{ 
obj_t BgL_auxz00_8284;
BgL_auxz00_8284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41787)), BGl_string3624z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1616z00_1215); 
FAILURE(BgL_auxz00_8284,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_8281, BgL_arg1618z00_1216, 
BINT(((long)0)));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1004 */
obj_t BgL_startz00_1217;
BgL_startz00_1217 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)2))); 
{ /* Ieee/string.scm 1004 */

{ /* Ieee/string.scm 1004 */
obj_t BgL_arg1621z00_1218;obj_t BgL_arg1622z00_1219;
BgL_arg1621z00_1218 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)0))); 
BgL_arg1622z00_1219 = 
VECTOR_REF(BgL_optz00_145,
(int)(((long)1))); 
{ /* Ieee/string.scm 1004 */
obj_t BgL_auxz00_8296;
if(
STRINGP(BgL_arg1621z00_1218))
{ /* Ieee/string.scm 1004 */
BgL_auxz00_8296 = BgL_arg1621z00_1218
; }  else 
{ 
obj_t BgL_auxz00_8299;
BgL_auxz00_8299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41787)), BGl_string3624z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1621z00_1218); 
FAILURE(BgL_auxz00_8299,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_8296, BgL_arg1622z00_1219, BgL_startz00_1217);} } } } break;
default: 
{ /* Ieee/string.scm 1004 */
obj_t BgL_arg1623z00_1220;int BgL_arg1625z00_1222;
BgL_arg1623z00_1220 = BGl_symbol3622z00zz__r4_strings_6_7z00; 
BgL_arg1625z00_1222 = 
VECTOR_LENGTH(BgL_optz00_145); 
return 
BGl_errorz00zz__errorz00(BgL_arg1623z00_1220, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1625z00_1222));} } } } } } 
}



/* string-skip */
BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_142, obj_t BgL_rsz00_143, obj_t BgL_startz00_144)
{ AN_OBJECT;
{ /* Ieee/string.scm 1004 */
{ 
obj_t BgL_sz00_1274;obj_t BgL_cz00_1275;
if(
CHARP(BgL_rsz00_143))
{ /* Ieee/string.scm 1016 */
BgL_sz00_1274 = BgL_stringz00_142; 
BgL_cz00_1275 = BgL_rsz00_143; 
BgL_zc3anonymousza31667ze3z83_1276:
{ /* Ieee/string.scm 1006 */
long BgL_lenz00_1277;
BgL_lenz00_1277 = 
STRING_LENGTH(BgL_sz00_1274); 
{ 
obj_t BgL_iz00_1279;
BgL_iz00_1279 = BgL_startz00_144; 
BgL_zc3anonymousza31668ze3z83_1280:
{ /* Ieee/string.scm 1009 */
bool_t BgL_testz00_8312;
{ /* Ieee/string.scm 1009 */
long BgL_n1z00_2904;
{ /* Ieee/string.scm 1009 */
obj_t BgL_auxz00_8313;
if(
INTEGERP(BgL_iz00_1279))
{ /* Ieee/string.scm 1009 */
BgL_auxz00_8313 = BgL_iz00_1279
; }  else 
{ 
obj_t BgL_auxz00_8316;
BgL_auxz00_8316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41961)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1279); 
FAILURE(BgL_auxz00_8316,BFALSE,BFALSE);} 
BgL_n1z00_2904 = 
(long)CINT(BgL_auxz00_8313); } 
BgL_testz00_8312 = 
(BgL_n1z00_2904>=BgL_lenz00_1277); } 
if(BgL_testz00_8312)
{ /* Ieee/string.scm 1009 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1011 */
bool_t BgL_testz00_8322;
{ /* Ieee/string.scm 1011 */
unsigned char BgL_char2z00_2909;
{ /* Ieee/string.scm 1011 */
obj_t BgL_auxz00_8323;
if(
CHARP(BgL_cz00_1275))
{ /* Ieee/string.scm 1011 */
BgL_auxz00_8323 = BgL_cz00_1275
; }  else 
{ 
obj_t BgL_auxz00_8326;
BgL_auxz00_8326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42011)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_cz00_1275); 
FAILURE(BgL_auxz00_8326,BFALSE,BFALSE);} 
BgL_char2z00_2909 = 
CCHAR(BgL_auxz00_8323); } 
{ /* Ieee/string.scm 1011 */
unsigned char BgL_auxz00_8331;
{ /* Ieee/string.scm 1011 */
long BgL_kz00_2907;
{ /* Ieee/string.scm 1011 */
obj_t BgL_auxz00_8332;
if(
INTEGERP(BgL_iz00_1279))
{ /* Ieee/string.scm 1011 */
BgL_auxz00_8332 = BgL_iz00_1279
; }  else 
{ 
obj_t BgL_auxz00_8335;
BgL_auxz00_8335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42008)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1279); 
FAILURE(BgL_auxz00_8335,BFALSE,BFALSE);} 
BgL_kz00_2907 = 
(long)CINT(BgL_auxz00_8332); } 
{ /* Ieee/string.scm 1011 */
long BgL_l2443z00_4276;
BgL_l2443z00_4276 = 
STRING_LENGTH(BgL_sz00_1274); 
if(
BOUND_CHECK(BgL_kz00_2907, BgL_l2443z00_4276))
{ /* Ieee/string.scm 1011 */
BgL_auxz00_8331 = 
STRING_REF(BgL_sz00_1274, BgL_kz00_2907)
; }  else 
{ 
obj_t BgL_auxz00_8344;
BgL_auxz00_8344 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)41991)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2907), BgL_sz00_1274); 
FAILURE(BgL_auxz00_8344,BFALSE,BFALSE);} } } 
BgL_testz00_8322 = 
(BgL_auxz00_8331==BgL_char2z00_2909); } } 
if(BgL_testz00_8322)
{ 
obj_t BgL_iz00_8350;
{ /* Ieee/string.scm 1012 */
long BgL_za71za7_2910;
{ /* Ieee/string.scm 1012 */
obj_t BgL_auxz00_8351;
if(
INTEGERP(BgL_iz00_1279))
{ /* Ieee/string.scm 1012 */
BgL_auxz00_8351 = BgL_iz00_1279
; }  else 
{ 
obj_t BgL_auxz00_8354;
BgL_auxz00_8354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42022)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1279); 
FAILURE(BgL_auxz00_8354,BFALSE,BFALSE);} 
BgL_za71za7_2910 = 
(long)CINT(BgL_auxz00_8351); } 
BgL_iz00_8350 = 
BINT(
(BgL_za71za7_2910+((long)1))); } 
BgL_iz00_1279 = BgL_iz00_8350; 
goto BgL_zc3anonymousza31668ze3z83_1280;}  else 
{ /* Ieee/string.scm 1011 */
return BgL_iz00_1279;} } } } } }  else 
{ /* Ieee/string.scm 1016 */
if(
STRINGP(BgL_rsz00_143))
{ /* Ieee/string.scm 1018 */
if(
(
STRING_LENGTH(BgL_rsz00_143)==((long)1)))
{ 
obj_t BgL_cz00_8367;obj_t BgL_sz00_8366;
BgL_sz00_8366 = BgL_stringz00_142; 
{ /* Ieee/string.scm 1021 */
obj_t BgL_s2445z00_4278;
BgL_s2445z00_4278 = BgL_rsz00_143; 
{ /* Ieee/string.scm 1021 */
long BgL_l2447z00_4280;
BgL_l2447z00_4280 = 
STRING_LENGTH(BgL_s2445z00_4278); 
if(
BOUND_CHECK(((long)0), BgL_l2447z00_4280))
{ /* Ieee/string.scm 1021 */
BgL_cz00_8367 = 
BCHAR(
STRING_REF(BgL_s2445z00_4278, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_8373;
BgL_auxz00_8373 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42262)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(((long)0)), BgL_s2445z00_4278); 
FAILURE(BgL_auxz00_8373,BFALSE,BFALSE);} } } 
BgL_cz00_1275 = BgL_cz00_8367; 
BgL_sz00_1274 = BgL_sz00_8366; 
goto BgL_zc3anonymousza31667ze3z83_1276;}  else 
{ /* Ieee/string.scm 1020 */
if(
(
STRING_LENGTH(BgL_rsz00_143)<=((long)10)))
{ /* Ieee/string.scm 1023 */
long BgL_lenz00_1229;long BgL_lenjz00_1230;
BgL_lenz00_1229 = 
STRING_LENGTH(BgL_stringz00_142); 
BgL_lenjz00_1230 = 
STRING_LENGTH(BgL_rsz00_143); 
{ 
obj_t BgL_iz00_1232;
BgL_iz00_1232 = BgL_startz00_144; 
BgL_zc3anonymousza31632ze3z83_1233:
{ /* Ieee/string.scm 1026 */
bool_t BgL_testz00_8383;
{ /* Ieee/string.scm 1026 */
long BgL_n1z00_2857;
{ /* Ieee/string.scm 1026 */
obj_t BgL_auxz00_8384;
if(
INTEGERP(BgL_iz00_1232))
{ /* Ieee/string.scm 1026 */
BgL_auxz00_8384 = BgL_iz00_1232
; }  else 
{ 
obj_t BgL_auxz00_8387;
BgL_auxz00_8387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42434)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1232); 
FAILURE(BgL_auxz00_8387,BFALSE,BFALSE);} 
BgL_n1z00_2857 = 
(long)CINT(BgL_auxz00_8384); } 
BgL_testz00_8383 = 
(BgL_n1z00_2857>=BgL_lenz00_1229); } 
if(BgL_testz00_8383)
{ /* Ieee/string.scm 1026 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1028 */
unsigned char BgL_cz00_1235;
{ /* Ieee/string.scm 1028 */
long BgL_kz00_2860;
{ /* Ieee/string.scm 1028 */
obj_t BgL_auxz00_8393;
if(
INTEGERP(BgL_iz00_1232))
{ /* Ieee/string.scm 1028 */
BgL_auxz00_8393 = BgL_iz00_1232
; }  else 
{ 
obj_t BgL_auxz00_8396;
BgL_auxz00_8396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42478)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1232); 
FAILURE(BgL_auxz00_8396,BFALSE,BFALSE);} 
BgL_kz00_2860 = 
(long)CINT(BgL_auxz00_8393); } 
{ /* Ieee/string.scm 1028 */
long BgL_l2451z00_4284;
BgL_l2451z00_4284 = 
STRING_LENGTH(BgL_stringz00_142); 
if(
BOUND_CHECK(BgL_kz00_2860, BgL_l2451z00_4284))
{ /* Ieee/string.scm 1028 */
BgL_cz00_1235 = 
STRING_REF(BgL_stringz00_142, BgL_kz00_2860); }  else 
{ 
obj_t BgL_auxz00_8405;
BgL_auxz00_8405 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42459)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2860), BgL_stringz00_142); 
FAILURE(BgL_auxz00_8405,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1237;
BgL_jz00_1237 = ((long)0); 
BgL_zc3anonymousza31634ze3z83_1238:
if(
(BgL_jz00_1237==BgL_lenjz00_1230))
{ /* Ieee/string.scm 1030 */
return BgL_iz00_1232;}  else 
{ /* Ieee/string.scm 1032 */
bool_t BgL_testz00_8412;
{ /* Ieee/string.scm 1032 */
unsigned char BgL_auxz00_8413;
{ /* Ieee/string.scm 1032 */
obj_t BgL_s2453z00_4286;
BgL_s2453z00_4286 = BgL_rsz00_143; 
{ /* Ieee/string.scm 1032 */
long BgL_l2455z00_4288;
BgL_l2455z00_4288 = 
STRING_LENGTH(BgL_s2453z00_4286); 
if(
BOUND_CHECK(BgL_jz00_1237, BgL_l2455z00_4288))
{ /* Ieee/string.scm 1032 */
BgL_auxz00_8413 = 
STRING_REF(BgL_s2453z00_4286, BgL_jz00_1237)
; }  else 
{ 
obj_t BgL_auxz00_8418;
BgL_auxz00_8418 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42561)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1237), BgL_s2453z00_4286); 
FAILURE(BgL_auxz00_8418,BFALSE,BFALSE);} } } 
BgL_testz00_8412 = 
(BgL_cz00_1235==BgL_auxz00_8413); } 
if(BgL_testz00_8412)
{ 
obj_t BgL_iz00_8424;
{ /* Ieee/string.scm 1033 */
long BgL_za71za7_2867;
{ /* Ieee/string.scm 1033 */
obj_t BgL_auxz00_8425;
if(
INTEGERP(BgL_iz00_1232))
{ /* Ieee/string.scm 1033 */
BgL_auxz00_8425 = BgL_iz00_1232
; }  else 
{ 
obj_t BgL_auxz00_8428;
BgL_auxz00_8428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42599)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1232); 
FAILURE(BgL_auxz00_8428,BFALSE,BFALSE);} 
BgL_za71za7_2867 = 
(long)CINT(BgL_auxz00_8425); } 
BgL_iz00_8424 = 
BINT(
(BgL_za71za7_2867+((long)1))); } 
BgL_iz00_1232 = BgL_iz00_8424; 
goto BgL_zc3anonymousza31632ze3z83_1233;}  else 
{ 
long BgL_jz00_8435;
BgL_jz00_8435 = 
(BgL_jz00_1237+((long)1)); 
BgL_jz00_1237 = BgL_jz00_8435; 
goto BgL_zc3anonymousza31634ze3z83_1238;} } } } } } }  else 
{ /* Ieee/string.scm 1036 */
obj_t BgL_tz00_1246;long BgL_lenz00_1247;
{ /* Ieee/string.scm 1036 */
obj_t BgL_list1660z00_1269;
BgL_list1660z00_1269 = 
MAKE_PAIR(
BCHAR(((unsigned char)'n')), BNIL); 
{ /* Ieee/string.scm 1036 */
obj_t BgL_res2209z00_2877;
{ /* Ieee/string.scm 1036 */
obj_t BgL_arg1240z00_2874;
BgL_arg1240z00_2874 = 
CAR(BgL_list1660z00_1269); 
{ /* Ieee/string.scm 1036 */
unsigned char BgL_auxz00_8440;
{ /* Ieee/string.scm 1036 */
obj_t BgL_auxz00_8441;
if(
CHARP(BgL_arg1240z00_2874))
{ /* Ieee/string.scm 1036 */
BgL_auxz00_8441 = BgL_arg1240z00_2874
; }  else 
{ 
obj_t BgL_auxz00_8444;
BgL_auxz00_8444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42673)), BGl_string3623z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_2874); 
FAILURE(BgL_auxz00_8444,BFALSE,BFALSE);} 
BgL_auxz00_8440 = 
CCHAR(BgL_auxz00_8441); } 
BgL_res2209z00_2877 = 
make_string(((long)256), BgL_auxz00_8440); } } 
BgL_tz00_1246 = BgL_res2209z00_2877; } } 
BgL_lenz00_1247 = 
STRING_LENGTH(BgL_stringz00_142); 
{ /* Ieee/string.scm 1038 */
long BgL_g1113z00_1248;
BgL_g1113z00_1248 = 
(
STRING_LENGTH(BgL_rsz00_143)-((long)1)); 
{ 
long BgL_iz00_1250;
BgL_iz00_1250 = BgL_g1113z00_1248; 
BgL_zc3anonymousza31641ze3z83_1251:
if(
(BgL_iz00_1250==((long)-1)))
{ 
obj_t BgL_iz00_1254;
BgL_iz00_1254 = BgL_startz00_144; 
BgL_zc3anonymousza31643ze3z83_1255:
{ /* Ieee/string.scm 1042 */
bool_t BgL_testz00_8455;
{ /* Ieee/string.scm 1042 */
long BgL_n1z00_2884;
{ /* Ieee/string.scm 1042 */
obj_t BgL_auxz00_8456;
if(
INTEGERP(BgL_iz00_1254))
{ /* Ieee/string.scm 1042 */
BgL_auxz00_8456 = BgL_iz00_1254
; }  else 
{ 
obj_t BgL_auxz00_8459;
BgL_auxz00_8459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42852)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1254); 
FAILURE(BgL_auxz00_8459,BFALSE,BFALSE);} 
BgL_n1z00_2884 = 
(long)CINT(BgL_auxz00_8456); } 
BgL_testz00_8455 = 
(BgL_n1z00_2884>=BgL_lenz00_1247); } 
if(BgL_testz00_8455)
{ /* Ieee/string.scm 1042 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1044 */
bool_t BgL_testz00_8465;
{ /* Ieee/string.scm 1044 */
unsigned char BgL_auxz00_8466;
{ /* Ieee/string.scm 1045 */
long BgL_i2462z00_4295;
{ /* Ieee/string.scm 1045 */
unsigned char BgL_auxz00_8467;
{ /* Ieee/string.scm 1045 */
long BgL_kz00_2887;
{ /* Ieee/string.scm 1045 */
obj_t BgL_auxz00_8468;
if(
INTEGERP(BgL_iz00_1254))
{ /* Ieee/string.scm 1045 */
BgL_auxz00_8468 = BgL_iz00_1254
; }  else 
{ 
obj_t BgL_auxz00_8471;
BgL_auxz00_8471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42940)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1254); 
FAILURE(BgL_auxz00_8471,BFALSE,BFALSE);} 
BgL_kz00_2887 = 
(long)CINT(BgL_auxz00_8468); } 
{ /* Ieee/string.scm 1045 */
long BgL_l2459z00_4292;
BgL_l2459z00_4292 = 
STRING_LENGTH(BgL_stringz00_142); 
if(
BOUND_CHECK(BgL_kz00_2887, BgL_l2459z00_4292))
{ /* Ieee/string.scm 1045 */
BgL_auxz00_8467 = 
STRING_REF(BgL_stringz00_142, BgL_kz00_2887)
; }  else 
{ 
obj_t BgL_auxz00_8480;
BgL_auxz00_8480 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42918)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2887), BgL_stringz00_142); 
FAILURE(BgL_auxz00_8480,BFALSE,BFALSE);} } } 
BgL_i2462z00_4295 = 
(BgL_auxz00_8467); } 
{ /* Ieee/string.scm 1044 */
long BgL_l2463z00_4296;
BgL_l2463z00_4296 = 
STRING_LENGTH(BgL_tz00_1246); 
if(
BOUND_CHECK(BgL_i2462z00_4295, BgL_l2463z00_4296))
{ /* Ieee/string.scm 1044 */
BgL_auxz00_8466 = 
STRING_REF(BgL_tz00_1246, BgL_i2462z00_4295)
; }  else 
{ 
obj_t BgL_auxz00_8490;
BgL_auxz00_8490 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42884)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2462z00_4295), BgL_tz00_1246); 
FAILURE(BgL_auxz00_8490,BFALSE,BFALSE);} } } 
BgL_testz00_8465 = 
(BgL_auxz00_8466==((unsigned char)'y')); } 
if(BgL_testz00_8465)
{ 
obj_t BgL_iz00_8496;
{ /* Ieee/string.scm 1047 */
long BgL_za71za7_2893;
{ /* Ieee/string.scm 1047 */
obj_t BgL_auxz00_8497;
if(
INTEGERP(BgL_iz00_1254))
{ /* Ieee/string.scm 1047 */
BgL_auxz00_8497 = BgL_iz00_1254
; }  else 
{ 
obj_t BgL_auxz00_8500;
BgL_auxz00_8500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)42963)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1254); 
FAILURE(BgL_auxz00_8500,BFALSE,BFALSE);} 
BgL_za71za7_2893 = 
(long)CINT(BgL_auxz00_8497); } 
BgL_iz00_8496 = 
BINT(
(BgL_za71za7_2893+((long)1))); } 
BgL_iz00_1254 = BgL_iz00_8496; 
goto BgL_zc3anonymousza31643ze3z83_1255;}  else 
{ /* Ieee/string.scm 1044 */
return BgL_iz00_1254;} } } }  else 
{ /* Ieee/string.scm 1039 */
{ /* Ieee/string.scm 1051 */
long BgL_arg1653z00_1263;
{ /* Ieee/string.scm 1051 */
unsigned char BgL_auxz00_8507;
{ /* Ieee/string.scm 1051 */
obj_t BgL_s2465z00_4298;
BgL_s2465z00_4298 = BgL_rsz00_143; 
{ /* Ieee/string.scm 1051 */
long BgL_l2467z00_4300;
BgL_l2467z00_4300 = 
STRING_LENGTH(BgL_s2465z00_4298); 
if(
BOUND_CHECK(BgL_iz00_1250, BgL_l2467z00_4300))
{ /* Ieee/string.scm 1051 */
BgL_auxz00_8507 = 
STRING_REF(BgL_s2465z00_4298, BgL_iz00_1250)
; }  else 
{ 
obj_t BgL_auxz00_8512;
BgL_auxz00_8512 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43047)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1250), BgL_s2465z00_4298); 
FAILURE(BgL_auxz00_8512,BFALSE,BFALSE);} } } 
BgL_arg1653z00_1263 = 
(BgL_auxz00_8507); } 
{ /* Ieee/string.scm 1051 */
long BgL_l2471z00_4304;
BgL_l2471z00_4304 = 
STRING_LENGTH(BgL_tz00_1246); 
if(
BOUND_CHECK(BgL_arg1653z00_1263, BgL_l2471z00_4304))
{ /* Ieee/string.scm 1051 */
STRING_SET(BgL_tz00_1246, BgL_arg1653z00_1263, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_8522;
BgL_auxz00_8522 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43014)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1653z00_1263), BgL_tz00_1246); 
FAILURE(BgL_auxz00_8522,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8527;
BgL_iz00_8527 = 
(BgL_iz00_1250-((long)1)); 
BgL_iz00_1250 = BgL_iz00_8527; 
goto BgL_zc3anonymousza31641ze3z83_1251;} } } } } } }  else 
{ /* Ieee/string.scm 1018 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3622z00zz__r4_strings_6_7z00, BGl_string3617z00zz__r4_strings_6_7z00, BgL_rsz00_143);} } } } 
}



/* _string-skip-right */
obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_envz00_151, obj_t BgL_optz00_150)
{ AN_OBJECT;
{ /* Ieee/string.scm 1057 */
{ /* Ieee/string.scm 1057 */
obj_t BgL_sz00_1287;obj_t BgL_g1192z00_1288;
BgL_sz00_1287 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)0))); 
BgL_g1192z00_1288 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1057 */
int BgL_aux1194z00_1290;
BgL_aux1194z00_1290 = 
VECTOR_LENGTH(BgL_optz00_150); 
switch( 
(long)(BgL_aux1194z00_1290)) { case ((long)2) : 

{ /* Ieee/string.scm 1057 */
long BgL_startz00_1292;
{ /* Ieee/string.scm 1057 */
long BgL_auxz00_8535;
{ /* Ieee/string.scm 1057 */
obj_t BgL_stringz00_2912;
if(
STRINGP(BgL_sz00_1287))
{ /* Ieee/string.scm 1057 */
BgL_stringz00_2912 = BgL_sz00_1287; }  else 
{ 
obj_t BgL_auxz00_8538;
BgL_auxz00_8538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43382)), BGl_string3627z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_sz00_1287); 
FAILURE(BgL_auxz00_8538,BFALSE,BFALSE);} 
BgL_auxz00_8535 = 
STRING_LENGTH(BgL_stringz00_2912); } 
BgL_startz00_1292 = 
(BgL_auxz00_8535-((long)1)); } 
{ /* Ieee/string.scm 1057 */

{ /* Ieee/string.scm 1057 */
obj_t BgL_arg1675z00_1293;obj_t BgL_arg1676z00_1294;
BgL_arg1675z00_1293 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)0))); 
BgL_arg1676z00_1294 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)1))); 
{ /* Ieee/string.scm 1057 */
obj_t BgL_auxz00_8548;
if(
STRINGP(BgL_arg1675z00_1293))
{ /* Ieee/string.scm 1057 */
BgL_auxz00_8548 = BgL_arg1675z00_1293
; }  else 
{ 
obj_t BgL_auxz00_8551;
BgL_auxz00_8551 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43327)), BGl_string3627z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1675z00_1293); 
FAILURE(BgL_auxz00_8551,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8548, BgL_arg1676z00_1294, 
BINT(BgL_startz00_1292));} } } } break;case ((long)3) : 

{ /* Ieee/string.scm 1057 */
obj_t BgL_startz00_1297;
BgL_startz00_1297 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)2))); 
{ /* Ieee/string.scm 1057 */

{ /* Ieee/string.scm 1057 */
obj_t BgL_arg1680z00_1298;obj_t BgL_arg1684z00_1299;
BgL_arg1680z00_1298 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)0))); 
BgL_arg1684z00_1299 = 
VECTOR_REF(BgL_optz00_150,
(int)(((long)1))); 
{ /* Ieee/string.scm 1057 */
obj_t BgL_auxz00_8563;
if(
STRINGP(BgL_arg1680z00_1298))
{ /* Ieee/string.scm 1057 */
BgL_auxz00_8563 = BgL_arg1680z00_1298
; }  else 
{ 
obj_t BgL_auxz00_8566;
BgL_auxz00_8566 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43327)), BGl_string3627z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1680z00_1298); 
FAILURE(BgL_auxz00_8566,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8563, BgL_arg1684z00_1299, BgL_startz00_1297);} } } } break;
default: 
{ /* Ieee/string.scm 1057 */
obj_t BgL_arg1685z00_1300;int BgL_arg1689z00_1302;
BgL_arg1685z00_1300 = BGl_symbol3625z00zz__r4_strings_6_7z00; 
BgL_arg1689z00_1302 = 
VECTOR_LENGTH(BgL_optz00_150); 
return 
BGl_errorz00zz__errorz00(BgL_arg1685z00_1300, BGl_string3550z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1689z00_1302));} } } } } } 
}



/* string-skip-right */
BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_147, obj_t BgL_rsz00_148, obj_t BgL_startz00_149)
{ AN_OBJECT;
{ /* Ieee/string.scm 1057 */
{ 
obj_t BgL_sz00_1356;obj_t BgL_cz00_1357;
{ /* Ieee/string.scm 1068 */
bool_t BgL_testz00_8576;
{ /* Ieee/string.scm 1068 */
long BgL_n1z00_2916;
{ /* Ieee/string.scm 1068 */
obj_t BgL_auxz00_8577;
if(
INTEGERP(BgL_startz00_149))
{ /* Ieee/string.scm 1068 */
BgL_auxz00_8577 = BgL_startz00_149
; }  else 
{ 
obj_t BgL_auxz00_8580;
BgL_auxz00_8580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43606)), BGl_string3626z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_startz00_149); 
FAILURE(BgL_auxz00_8580,BFALSE,BFALSE);} 
BgL_n1z00_2916 = 
(long)CINT(BgL_auxz00_8577); } 
BgL_testz00_8576 = 
(BgL_n1z00_2916>
STRING_LENGTH(BgL_sz00_147)); } 
if(BgL_testz00_8576)
{ /* Ieee/string.scm 1068 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3613z00zz__r4_strings_6_7z00, BGl_string3621z00zz__r4_strings_6_7z00, BgL_startz00_149);}  else 
{ /* Ieee/string.scm 1068 */
if(
CHARP(BgL_rsz00_148))
{ /* Ieee/string.scm 1070 */
BgL_sz00_1356 = BgL_sz00_147; 
BgL_cz00_1357 = BgL_rsz00_148; 
BgL_zc3anonymousza31734ze3z83_1358:
{ 
obj_t BgL_iz00_1360;
BgL_iz00_1360 = BgL_startz00_149; 
BgL_zc3anonymousza31735ze3z83_1361:
{ /* Ieee/string.scm 1061 */
bool_t BgL_testz00_8590;
{ /* Ieee/string.scm 1061 */
long BgL_n1z00_2976;
{ /* Ieee/string.scm 1061 */
obj_t BgL_auxz00_8591;
if(
INTEGERP(BgL_iz00_1360))
{ /* Ieee/string.scm 1061 */
BgL_auxz00_8591 = BgL_iz00_1360
; }  else 
{ 
obj_t BgL_auxz00_8594;
BgL_auxz00_8594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43486)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1360); 
FAILURE(BgL_auxz00_8594,BFALSE,BFALSE);} 
BgL_n1z00_2976 = 
(long)CINT(BgL_auxz00_8591); } 
BgL_testz00_8590 = 
(BgL_n1z00_2976<((long)0)); } 
if(BgL_testz00_8590)
{ /* Ieee/string.scm 1061 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1063 */
bool_t BgL_testz00_8600;
{ /* Ieee/string.scm 1063 */
unsigned char BgL_char2z00_2981;
{ /* Ieee/string.scm 1063 */
obj_t BgL_auxz00_8601;
if(
CHARP(BgL_cz00_1357))
{ /* Ieee/string.scm 1063 */
BgL_auxz00_8601 = BgL_cz00_1357
; }  else 
{ 
obj_t BgL_auxz00_8604;
BgL_auxz00_8604 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43535)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_cz00_1357); 
FAILURE(BgL_auxz00_8604,BFALSE,BFALSE);} 
BgL_char2z00_2981 = 
CCHAR(BgL_auxz00_8601); } 
{ /* Ieee/string.scm 1063 */
unsigned char BgL_auxz00_8609;
{ /* Ieee/string.scm 1063 */
long BgL_kz00_2979;
{ /* Ieee/string.scm 1063 */
obj_t BgL_auxz00_8610;
if(
INTEGERP(BgL_iz00_1360))
{ /* Ieee/string.scm 1063 */
BgL_auxz00_8610 = BgL_iz00_1360
; }  else 
{ 
obj_t BgL_auxz00_8613;
BgL_auxz00_8613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43532)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1360); 
FAILURE(BgL_auxz00_8613,BFALSE,BFALSE);} 
BgL_kz00_2979 = 
(long)CINT(BgL_auxz00_8610); } 
{ /* Ieee/string.scm 1063 */
long BgL_l2475z00_4308;
BgL_l2475z00_4308 = 
STRING_LENGTH(BgL_sz00_1356); 
if(
BOUND_CHECK(BgL_kz00_2979, BgL_l2475z00_4308))
{ /* Ieee/string.scm 1063 */
BgL_auxz00_8609 = 
STRING_REF(BgL_sz00_1356, BgL_kz00_2979)
; }  else 
{ 
obj_t BgL_auxz00_8622;
BgL_auxz00_8622 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43515)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2979), BgL_sz00_1356); 
FAILURE(BgL_auxz00_8622,BFALSE,BFALSE);} } } 
BgL_testz00_8600 = 
(BgL_auxz00_8609==BgL_char2z00_2981); } } 
if(BgL_testz00_8600)
{ 
obj_t BgL_iz00_8628;
{ /* Ieee/string.scm 1064 */
long BgL_za71za7_2982;
{ /* Ieee/string.scm 1064 */
obj_t BgL_auxz00_8629;
if(
INTEGERP(BgL_iz00_1360))
{ /* Ieee/string.scm 1064 */
BgL_auxz00_8629 = BgL_iz00_1360
; }  else 
{ 
obj_t BgL_auxz00_8632;
BgL_auxz00_8632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43550)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1360); 
FAILURE(BgL_auxz00_8632,BFALSE,BFALSE);} 
BgL_za71za7_2982 = 
(long)CINT(BgL_auxz00_8629); } 
BgL_iz00_8628 = 
BINT(
(BgL_za71za7_2982-((long)1))); } 
BgL_iz00_1360 = BgL_iz00_8628; 
goto BgL_zc3anonymousza31735ze3z83_1361;}  else 
{ /* Ieee/string.scm 1063 */
return BgL_iz00_1360;} } } } }  else 
{ /* Ieee/string.scm 1070 */
if(
STRINGP(BgL_rsz00_148))
{ /* Ieee/string.scm 1072 */
if(
(
STRING_LENGTH(BgL_rsz00_148)==((long)1)))
{ 
obj_t BgL_cz00_8645;obj_t BgL_sz00_8644;
BgL_sz00_8644 = BgL_sz00_147; 
{ /* Ieee/string.scm 1075 */
obj_t BgL_s2477z00_4310;
BgL_s2477z00_4310 = BgL_rsz00_148; 
{ /* Ieee/string.scm 1075 */
long BgL_l2479z00_4312;
BgL_l2479z00_4312 = 
STRING_LENGTH(BgL_s2477z00_4310); 
if(
BOUND_CHECK(((long)0), BgL_l2479z00_4312))
{ /* Ieee/string.scm 1075 */
BgL_cz00_8645 = 
BCHAR(
STRING_REF(BgL_s2477z00_4310, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_8651;
BgL_auxz00_8651 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)43881)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(((long)0)), BgL_s2477z00_4310); 
FAILURE(BgL_auxz00_8651,BFALSE,BFALSE);} } } 
BgL_cz00_1357 = BgL_cz00_8645; 
BgL_sz00_1356 = BgL_sz00_8644; 
goto BgL_zc3anonymousza31734ze3z83_1358;}  else 
{ /* Ieee/string.scm 1074 */
if(
(
STRING_LENGTH(BgL_rsz00_148)<=((long)10)))
{ /* Ieee/string.scm 1077 */
long BgL_lenjz00_1311;
BgL_lenjz00_1311 = 
STRING_LENGTH(BgL_rsz00_148); 
{ 
obj_t BgL_iz00_1313;
BgL_iz00_1313 = BgL_startz00_149; 
BgL_zc3anonymousza31696ze3z83_1314:
{ /* Ieee/string.scm 1080 */
bool_t BgL_testz00_8660;
{ /* Ieee/string.scm 1080 */
long BgL_n1z00_2930;
{ /* Ieee/string.scm 1080 */
obj_t BgL_auxz00_8661;
if(
INTEGERP(BgL_iz00_1313))
{ /* Ieee/string.scm 1080 */
BgL_auxz00_8661 = BgL_iz00_1313
; }  else 
{ 
obj_t BgL_auxz00_8664;
BgL_auxz00_8664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44047)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1313); 
FAILURE(BgL_auxz00_8664,BFALSE,BFALSE);} 
BgL_n1z00_2930 = 
(long)CINT(BgL_auxz00_8661); } 
BgL_testz00_8660 = 
(BgL_n1z00_2930<((long)0)); } 
if(BgL_testz00_8660)
{ /* Ieee/string.scm 1080 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1082 */
unsigned char BgL_cz00_1316;
{ /* Ieee/string.scm 1082 */
long BgL_kz00_2933;
{ /* Ieee/string.scm 1082 */
obj_t BgL_auxz00_8670;
if(
INTEGERP(BgL_iz00_1313))
{ /* Ieee/string.scm 1082 */
BgL_auxz00_8670 = BgL_iz00_1313
; }  else 
{ 
obj_t BgL_auxz00_8673;
BgL_auxz00_8673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44084)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1313); 
FAILURE(BgL_auxz00_8673,BFALSE,BFALSE);} 
BgL_kz00_2933 = 
(long)CINT(BgL_auxz00_8670); } 
{ /* Ieee/string.scm 1082 */
long BgL_l2483z00_4316;
BgL_l2483z00_4316 = 
STRING_LENGTH(BgL_sz00_147); 
if(
BOUND_CHECK(BgL_kz00_2933, BgL_l2483z00_4316))
{ /* Ieee/string.scm 1082 */
BgL_cz00_1316 = 
STRING_REF(BgL_sz00_147, BgL_kz00_2933); }  else 
{ 
obj_t BgL_auxz00_8682;
BgL_auxz00_8682 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44070)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2933), BgL_sz00_147); 
FAILURE(BgL_auxz00_8682,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1318;
BgL_jz00_1318 = ((long)0); 
BgL_zc3anonymousza31698ze3z83_1319:
if(
(BgL_jz00_1318==BgL_lenjz00_1311))
{ /* Ieee/string.scm 1084 */
return BgL_iz00_1313;}  else 
{ /* Ieee/string.scm 1086 */
bool_t BgL_testz00_8689;
{ /* Ieee/string.scm 1086 */
unsigned char BgL_auxz00_8690;
{ /* Ieee/string.scm 1086 */
obj_t BgL_s2485z00_4318;
BgL_s2485z00_4318 = BgL_rsz00_148; 
{ /* Ieee/string.scm 1086 */
long BgL_l2487z00_4320;
BgL_l2487z00_4320 = 
STRING_LENGTH(BgL_s2485z00_4318); 
if(
BOUND_CHECK(BgL_jz00_1318, BgL_l2487z00_4320))
{ /* Ieee/string.scm 1086 */
BgL_auxz00_8690 = 
STRING_REF(BgL_s2485z00_4318, BgL_jz00_1318)
; }  else 
{ 
obj_t BgL_auxz00_8695;
BgL_auxz00_8695 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44167)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1318), BgL_s2485z00_4318); 
FAILURE(BgL_auxz00_8695,BFALSE,BFALSE);} } } 
BgL_testz00_8689 = 
(BgL_cz00_1316==BgL_auxz00_8690); } 
if(BgL_testz00_8689)
{ 
obj_t BgL_iz00_8701;
{ /* Ieee/string.scm 1087 */
long BgL_za71za7_2940;
{ /* Ieee/string.scm 1087 */
obj_t BgL_auxz00_8702;
if(
INTEGERP(BgL_iz00_1313))
{ /* Ieee/string.scm 1087 */
BgL_auxz00_8702 = BgL_iz00_1313
; }  else 
{ 
obj_t BgL_auxz00_8705;
BgL_auxz00_8705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44205)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1313); 
FAILURE(BgL_auxz00_8705,BFALSE,BFALSE);} 
BgL_za71za7_2940 = 
(long)CINT(BgL_auxz00_8702); } 
BgL_iz00_8701 = 
BINT(
(BgL_za71za7_2940-((long)1))); } 
BgL_iz00_1313 = BgL_iz00_8701; 
goto BgL_zc3anonymousza31696ze3z83_1314;}  else 
{ 
long BgL_jz00_8712;
BgL_jz00_8712 = 
(BgL_jz00_1318+((long)1)); 
BgL_jz00_1318 = BgL_jz00_8712; 
goto BgL_zc3anonymousza31698ze3z83_1319;} } } } } } }  else 
{ /* Ieee/string.scm 1090 */
obj_t BgL_tz00_1327;
{ /* Ieee/string.scm 1090 */
obj_t BgL_list1725z00_1350;
BgL_list1725z00_1350 = 
MAKE_PAIR(
BCHAR(((unsigned char)'n')), BNIL); 
{ /* Ieee/string.scm 1090 */
obj_t BgL_res2210z00_2950;
{ /* Ieee/string.scm 1090 */
obj_t BgL_arg1240z00_2947;
BgL_arg1240z00_2947 = 
CAR(BgL_list1725z00_1350); 
{ /* Ieee/string.scm 1090 */
unsigned char BgL_auxz00_8717;
{ /* Ieee/string.scm 1090 */
obj_t BgL_auxz00_8718;
if(
CHARP(BgL_arg1240z00_2947))
{ /* Ieee/string.scm 1090 */
BgL_auxz00_8718 = BgL_arg1240z00_2947
; }  else 
{ 
obj_t BgL_auxz00_8721;
BgL_auxz00_8721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44279)), BGl_string3626z00zz__r4_strings_6_7z00, BGl_string3516z00zz__r4_strings_6_7z00, BgL_arg1240z00_2947); 
FAILURE(BgL_auxz00_8721,BFALSE,BFALSE);} 
BgL_auxz00_8717 = 
CCHAR(BgL_auxz00_8718); } 
BgL_res2210z00_2950 = 
make_string(((long)256), BgL_auxz00_8717); } } 
BgL_tz00_1327 = BgL_res2210z00_2950; } } 
{ /* Ieee/string.scm 1092 */
long BgL_g1115z00_1329;
BgL_g1115z00_1329 = 
(
STRING_LENGTH(BgL_rsz00_148)-((long)1)); 
{ 
long BgL_iz00_1331;
BgL_iz00_1331 = BgL_g1115z00_1329; 
BgL_zc3anonymousza31704ze3z83_1332:
if(
(BgL_iz00_1331==((long)-1)))
{ 
obj_t BgL_iz00_1335;
BgL_iz00_1335 = BgL_startz00_149; 
BgL_zc3anonymousza31706ze3z83_1336:
{ /* Ieee/string.scm 1096 */
bool_t BgL_testz00_8731;
{ /* Ieee/string.scm 1096 */
long BgL_n1z00_2957;
{ /* Ieee/string.scm 1096 */
obj_t BgL_auxz00_8732;
if(
INTEGERP(BgL_iz00_1335))
{ /* Ieee/string.scm 1096 */
BgL_auxz00_8732 = BgL_iz00_1335
; }  else 
{ 
obj_t BgL_auxz00_8735;
BgL_auxz00_8735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44452)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1335); 
FAILURE(BgL_auxz00_8735,BFALSE,BFALSE);} 
BgL_n1z00_2957 = 
(long)CINT(BgL_auxz00_8732); } 
BgL_testz00_8731 = 
(BgL_n1z00_2957<((long)0)); } 
if(BgL_testz00_8731)
{ /* Ieee/string.scm 1096 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1098 */
bool_t BgL_testz00_8741;
{ /* Ieee/string.scm 1098 */
unsigned char BgL_auxz00_8742;
{ /* Ieee/string.scm 1099 */
long BgL_i2494z00_4327;
{ /* Ieee/string.scm 1099 */
unsigned char BgL_auxz00_8743;
{ /* Ieee/string.scm 1099 */
long BgL_kz00_2960;
{ /* Ieee/string.scm 1099 */
obj_t BgL_auxz00_8744;
if(
INTEGERP(BgL_iz00_1335))
{ /* Ieee/string.scm 1099 */
BgL_auxz00_8744 = BgL_iz00_1335
; }  else 
{ 
obj_t BgL_auxz00_8747;
BgL_auxz00_8747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44533)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1335); 
FAILURE(BgL_auxz00_8747,BFALSE,BFALSE);} 
BgL_kz00_2960 = 
(long)CINT(BgL_auxz00_8744); } 
{ /* Ieee/string.scm 1099 */
long BgL_l2491z00_4324;
BgL_l2491z00_4324 = 
STRING_LENGTH(BgL_sz00_147); 
if(
BOUND_CHECK(BgL_kz00_2960, BgL_l2491z00_4324))
{ /* Ieee/string.scm 1099 */
BgL_auxz00_8743 = 
STRING_REF(BgL_sz00_147, BgL_kz00_2960)
; }  else 
{ 
obj_t BgL_auxz00_8756;
BgL_auxz00_8756 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44516)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_2960), BgL_sz00_147); 
FAILURE(BgL_auxz00_8756,BFALSE,BFALSE);} } } 
BgL_i2494z00_4327 = 
(BgL_auxz00_8743); } 
{ /* Ieee/string.scm 1098 */
long BgL_l2495z00_4328;
BgL_l2495z00_4328 = 
STRING_LENGTH(BgL_tz00_1327); 
if(
BOUND_CHECK(BgL_i2494z00_4327, BgL_l2495z00_4328))
{ /* Ieee/string.scm 1098 */
BgL_auxz00_8742 = 
STRING_REF(BgL_tz00_1327, BgL_i2494z00_4327)
; }  else 
{ 
obj_t BgL_auxz00_8766;
BgL_auxz00_8766 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44482)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2494z00_4327), BgL_tz00_1327); 
FAILURE(BgL_auxz00_8766,BFALSE,BFALSE);} } } 
BgL_testz00_8741 = 
(BgL_auxz00_8742==((unsigned char)'y')); } 
if(BgL_testz00_8741)
{ 
obj_t BgL_iz00_8772;
{ /* Ieee/string.scm 1101 */
long BgL_za71za7_2966;
{ /* Ieee/string.scm 1101 */
obj_t BgL_auxz00_8773;
if(
INTEGERP(BgL_iz00_1335))
{ /* Ieee/string.scm 1101 */
BgL_auxz00_8773 = BgL_iz00_1335
; }  else 
{ 
obj_t BgL_auxz00_8776;
BgL_auxz00_8776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44556)), BGl_string3616z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_iz00_1335); 
FAILURE(BgL_auxz00_8776,BFALSE,BFALSE);} 
BgL_za71za7_2966 = 
(long)CINT(BgL_auxz00_8773); } 
BgL_iz00_8772 = 
BINT(
(BgL_za71za7_2966-((long)1))); } 
BgL_iz00_1335 = BgL_iz00_8772; 
goto BgL_zc3anonymousza31706ze3z83_1336;}  else 
{ /* Ieee/string.scm 1098 */
return BgL_iz00_1335;} } } }  else 
{ /* Ieee/string.scm 1093 */
{ /* Ieee/string.scm 1105 */
long BgL_arg1714z00_1344;
{ /* Ieee/string.scm 1105 */
unsigned char BgL_auxz00_8783;
{ /* Ieee/string.scm 1105 */
obj_t BgL_s2497z00_4330;
BgL_s2497z00_4330 = BgL_rsz00_148; 
{ /* Ieee/string.scm 1105 */
long BgL_l2499z00_4332;
BgL_l2499z00_4332 = 
STRING_LENGTH(BgL_s2497z00_4330); 
if(
BOUND_CHECK(BgL_iz00_1331, BgL_l2499z00_4332))
{ /* Ieee/string.scm 1105 */
BgL_auxz00_8783 = 
STRING_REF(BgL_s2497z00_4330, BgL_iz00_1331)
; }  else 
{ 
obj_t BgL_auxz00_8788;
BgL_auxz00_8788 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44640)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1331), BgL_s2497z00_4330); 
FAILURE(BgL_auxz00_8788,BFALSE,BFALSE);} } } 
BgL_arg1714z00_1344 = 
(BgL_auxz00_8783); } 
{ /* Ieee/string.scm 1105 */
long BgL_l2503z00_4336;
BgL_l2503z00_4336 = 
STRING_LENGTH(BgL_tz00_1327); 
if(
BOUND_CHECK(BgL_arg1714z00_1344, BgL_l2503z00_4336))
{ /* Ieee/string.scm 1105 */
STRING_SET(BgL_tz00_1327, BgL_arg1714z00_1344, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_8798;
BgL_auxz00_8798 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)44607)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1714z00_1344), BgL_tz00_1327); 
FAILURE(BgL_auxz00_8798,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8803;
BgL_iz00_8803 = 
(BgL_iz00_1331-((long)1)); 
BgL_iz00_1331 = BgL_iz00_8803; 
goto BgL_zc3anonymousza31704ze3z83_1332;} } } } } } }  else 
{ /* Ieee/string.scm 1072 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3618z00zz__r4_strings_6_7z00, BGl_string3617z00zz__r4_strings_6_7z00, BgL_rsz00_148);} } } } } } 
}



/* _string-prefix-length */
obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_envz00_169, obj_t BgL_optz00_168)
{ AN_OBJECT;
{ /* Ieee/string.scm 1139 */
{ /* Ieee/string.scm 1139 */
obj_t BgL_s1z00_1376;obj_t BgL_s2z00_1377;
BgL_s1z00_1376 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_s2z00_1377 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1139 */
int BgL_aux1196z00_1379;
BgL_aux1196z00_1379 = 
VECTOR_LENGTH(BgL_optz00_168); 
switch( 
(long)(BgL_aux1196z00_1379)) { case ((long)2) : 

{ /* Ieee/string.scm 1139 */

{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1749z00_1385;obj_t BgL_arg1750z00_1386;
BgL_arg1749z00_1385 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_arg1750z00_1386 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ /* Ieee/string.scm 1139 */
int BgL_auxz00_8815;
{ /* Ieee/string.scm 1139 */
obj_t BgL_auxz00_8823;obj_t BgL_auxz00_8816;
if(
STRINGP(BgL_arg1750z00_1386))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8823 = BgL_arg1750z00_1386
; }  else 
{ 
obj_t BgL_auxz00_8826;
BgL_auxz00_8826 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1750z00_1386); 
FAILURE(BgL_auxz00_8826,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1749z00_1385))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8816 = BgL_arg1749z00_1385
; }  else 
{ 
obj_t BgL_auxz00_8819;
BgL_auxz00_8819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1749z00_1385); 
FAILURE(BgL_auxz00_8819,BFALSE,BFALSE);} 
BgL_auxz00_8815 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_8816, BgL_auxz00_8823, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_8815);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1139 */
obj_t BgL_start1z00_1387;
BgL_start1z00_1387 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)2))); 
{ /* Ieee/string.scm 1139 */

{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1751z00_1391;obj_t BgL_arg1753z00_1392;
BgL_arg1751z00_1391 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_arg1753z00_1392 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ /* Ieee/string.scm 1139 */
int BgL_auxz00_8838;
{ /* Ieee/string.scm 1139 */
obj_t BgL_auxz00_8846;obj_t BgL_auxz00_8839;
if(
STRINGP(BgL_arg1753z00_1392))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8846 = BgL_arg1753z00_1392
; }  else 
{ 
obj_t BgL_auxz00_8849;
BgL_auxz00_8849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1753z00_1392); 
FAILURE(BgL_auxz00_8849,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1751z00_1391))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8839 = BgL_arg1751z00_1391
; }  else 
{ 
obj_t BgL_auxz00_8842;
BgL_auxz00_8842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1751z00_1391); 
FAILURE(BgL_auxz00_8842,BFALSE,BFALSE);} 
BgL_auxz00_8838 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_8839, BgL_auxz00_8846, BgL_start1z00_1387, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_8838);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1139 */
obj_t BgL_start1z00_1393;
BgL_start1z00_1393 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)2))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_end1z00_1394;
BgL_end1z00_1394 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)3))); 
{ /* Ieee/string.scm 1139 */

{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1754z00_1397;obj_t BgL_arg1755z00_1398;
BgL_arg1754z00_1397 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_arg1755z00_1398 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ /* Ieee/string.scm 1139 */
int BgL_auxz00_8863;
{ /* Ieee/string.scm 1139 */
obj_t BgL_auxz00_8871;obj_t BgL_auxz00_8864;
if(
STRINGP(BgL_arg1755z00_1398))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8871 = BgL_arg1755z00_1398
; }  else 
{ 
obj_t BgL_auxz00_8874;
BgL_auxz00_8874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1755z00_1398); 
FAILURE(BgL_auxz00_8874,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1754z00_1397))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8864 = BgL_arg1754z00_1397
; }  else 
{ 
obj_t BgL_auxz00_8867;
BgL_auxz00_8867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1754z00_1397); 
FAILURE(BgL_auxz00_8867,BFALSE,BFALSE);} 
BgL_auxz00_8863 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_8864, BgL_auxz00_8871, BgL_start1z00_1393, BgL_end1z00_1394, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_8863);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1139 */
obj_t BgL_start1z00_1399;
BgL_start1z00_1399 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)2))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_end1z00_1400;
BgL_end1z00_1400 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)3))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_start2z00_1401;
BgL_start2z00_1401 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)4))); 
{ /* Ieee/string.scm 1139 */

{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1756z00_1403;obj_t BgL_arg1757z00_1404;
BgL_arg1756z00_1403 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_arg1757z00_1404 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ /* Ieee/string.scm 1139 */
int BgL_auxz00_8890;
{ /* Ieee/string.scm 1139 */
obj_t BgL_auxz00_8898;obj_t BgL_auxz00_8891;
if(
STRINGP(BgL_arg1757z00_1404))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8898 = BgL_arg1757z00_1404
; }  else 
{ 
obj_t BgL_auxz00_8901;
BgL_auxz00_8901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1757z00_1404); 
FAILURE(BgL_auxz00_8901,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1756z00_1403))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8891 = BgL_arg1756z00_1403
; }  else 
{ 
obj_t BgL_auxz00_8894;
BgL_auxz00_8894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1756z00_1403); 
FAILURE(BgL_auxz00_8894,BFALSE,BFALSE);} 
BgL_auxz00_8890 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_8891, BgL_auxz00_8898, BgL_start1z00_1399, BgL_end1z00_1400, BgL_start2z00_1401, BFALSE); } 
return 
BINT(BgL_auxz00_8890);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1139 */
obj_t BgL_start1z00_1405;
BgL_start1z00_1405 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)2))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_end1z00_1406;
BgL_end1z00_1406 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)3))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_start2z00_1407;
BgL_start2z00_1407 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)4))); 
{ /* Ieee/string.scm 1139 */
obj_t BgL_end2z00_1408;
BgL_end2z00_1408 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)5))); 
{ /* Ieee/string.scm 1139 */

{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1758z00_1409;obj_t BgL_arg1764z00_1410;
BgL_arg1758z00_1409 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)0))); 
BgL_arg1764z00_1410 = 
VECTOR_REF(BgL_optz00_168,
(int)(((long)1))); 
{ /* Ieee/string.scm 1139 */
int BgL_auxz00_8919;
{ /* Ieee/string.scm 1139 */
obj_t BgL_auxz00_8927;obj_t BgL_auxz00_8920;
if(
STRINGP(BgL_arg1764z00_1410))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8927 = BgL_arg1764z00_1410
; }  else 
{ 
obj_t BgL_auxz00_8930;
BgL_auxz00_8930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1764z00_1410); 
FAILURE(BgL_auxz00_8930,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1758z00_1409))
{ /* Ieee/string.scm 1139 */
BgL_auxz00_8920 = BgL_arg1758z00_1409
; }  else 
{ 
obj_t BgL_auxz00_8923;
BgL_auxz00_8923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)45958)), BGl_string3631z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1758z00_1409); 
FAILURE(BgL_auxz00_8923,BFALSE,BFALSE);} 
BgL_auxz00_8919 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_8920, BgL_auxz00_8927, BgL_start1z00_1405, BgL_end1z00_1406, BgL_start2z00_1407, BgL_end2z00_1408); } 
return 
BINT(BgL_auxz00_8919);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1139 */
obj_t BgL_arg1767z00_1411;int BgL_arg1769z00_1413;
BgL_arg1767z00_1411 = BGl_symbol3628z00zz__r4_strings_6_7z00; 
BgL_arg1769z00_1413 = 
VECTOR_LENGTH(BgL_optz00_168); 
return 
BGl_errorz00zz__errorz00(BgL_arg1767z00_1411, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1769z00_1413));} } } } } } 
}



/* string-prefix-length */
BGL_EXPORTED_DEF int BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_162, obj_t BgL_s2z00_163, obj_t BgL_start1z00_164, obj_t BgL_end1z00_165, obj_t BgL_start2z00_166, obj_t BgL_end2z00_167)
{ AN_OBJECT;
{ /* Ieee/string.scm 1139 */
{ /* Ieee/string.scm 1141 */
long BgL_l1z00_1414;
BgL_l1z00_1414 = 
STRING_LENGTH(BgL_s1z00_162); 
{ /* Ieee/string.scm 1141 */
long BgL_l2z00_1415;
BgL_l2z00_1415 = 
STRING_LENGTH(BgL_s2z00_163); 
{ /* Ieee/string.scm 1142 */
obj_t BgL_e1z00_1416;
{ /* Ieee/string.scm 1143 */
obj_t BgL_procz00_3002;
BgL_procz00_3002 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_165))
{ /* Ieee/string.scm 1143 */
bool_t BgL_testz00_8945;
{ /* Ieee/string.scm 1143 */
long BgL_n1z00_3011;
{ /* Ieee/string.scm 1143 */
obj_t BgL_auxz00_8946;
if(
INTEGERP(BgL_end1z00_165))
{ /* Ieee/string.scm 1143 */
BgL_auxz00_8946 = BgL_end1z00_165
; }  else 
{ 
obj_t BgL_auxz00_8949;
BgL_auxz00_8949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46128)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_165); 
FAILURE(BgL_auxz00_8949,BFALSE,BFALSE);} 
BgL_n1z00_3011 = 
(long)CINT(BgL_auxz00_8946); } 
BgL_testz00_8945 = 
(BgL_n1z00_3011<=((long)0)); } 
if(BgL_testz00_8945)
{ /* Ieee/string.scm 1143 */
BgL_e1z00_1416 = 
BGl_errorz00zz__errorz00(BgL_procz00_3002, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_165); }  else 
{ /* Ieee/string.scm 1143 */
bool_t BgL_testz00_8957;
{ /* Ieee/string.scm 1143 */
long BgL_n1z00_3013;
{ /* Ieee/string.scm 1143 */
obj_t BgL_auxz00_8958;
if(
INTEGERP(BgL_end1z00_165))
{ /* Ieee/string.scm 1143 */
BgL_auxz00_8958 = BgL_end1z00_165
; }  else 
{ 
obj_t BgL_auxz00_8961;
BgL_auxz00_8961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46128)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_165); 
FAILURE(BgL_auxz00_8961,BFALSE,BFALSE);} 
BgL_n1z00_3013 = 
(long)CINT(BgL_auxz00_8958); } 
BgL_testz00_8957 = 
(BgL_n1z00_3013>BgL_l1z00_1414); } 
if(BgL_testz00_8957)
{ /* Ieee/string.scm 1143 */
BgL_e1z00_1416 = 
BGl_errorz00zz__errorz00(BgL_procz00_3002, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_165); }  else 
{ /* Ieee/string.scm 1143 */
BgL_e1z00_1416 = BgL_end1z00_165; } } }  else 
{ /* Ieee/string.scm 1143 */
BgL_e1z00_1416 = 
BINT(BgL_l1z00_1414); } } 
{ /* Ieee/string.scm 1143 */
obj_t BgL_e2z00_1417;
{ /* Ieee/string.scm 1144 */
obj_t BgL_procz00_3015;
BgL_procz00_3015 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_167))
{ /* Ieee/string.scm 1144 */
bool_t BgL_testz00_8972;
{ /* Ieee/string.scm 1144 */
long BgL_n1z00_3024;
{ /* Ieee/string.scm 1144 */
obj_t BgL_auxz00_8973;
if(
INTEGERP(BgL_end2z00_167))
{ /* Ieee/string.scm 1144 */
BgL_auxz00_8973 = BgL_end2z00_167
; }  else 
{ 
obj_t BgL_auxz00_8976;
BgL_auxz00_8976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46193)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_167); 
FAILURE(BgL_auxz00_8976,BFALSE,BFALSE);} 
BgL_n1z00_3024 = 
(long)CINT(BgL_auxz00_8973); } 
BgL_testz00_8972 = 
(BgL_n1z00_3024<=((long)0)); } 
if(BgL_testz00_8972)
{ /* Ieee/string.scm 1144 */
BgL_e2z00_1417 = 
BGl_errorz00zz__errorz00(BgL_procz00_3015, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_167); }  else 
{ /* Ieee/string.scm 1144 */
bool_t BgL_testz00_8984;
{ /* Ieee/string.scm 1144 */
long BgL_n1z00_3026;
{ /* Ieee/string.scm 1144 */
obj_t BgL_auxz00_8985;
if(
INTEGERP(BgL_end2z00_167))
{ /* Ieee/string.scm 1144 */
BgL_auxz00_8985 = BgL_end2z00_167
; }  else 
{ 
obj_t BgL_auxz00_8988;
BgL_auxz00_8988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46193)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_167); 
FAILURE(BgL_auxz00_8988,BFALSE,BFALSE);} 
BgL_n1z00_3026 = 
(long)CINT(BgL_auxz00_8985); } 
BgL_testz00_8984 = 
(BgL_n1z00_3026>BgL_l2z00_1415); } 
if(BgL_testz00_8984)
{ /* Ieee/string.scm 1144 */
BgL_e2z00_1417 = 
BGl_errorz00zz__errorz00(BgL_procz00_3015, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_167); }  else 
{ /* Ieee/string.scm 1144 */
BgL_e2z00_1417 = BgL_end2z00_167; } } }  else 
{ /* Ieee/string.scm 1144 */
BgL_e2z00_1417 = 
BINT(BgL_l2z00_1415); } } 
{ /* Ieee/string.scm 1144 */
obj_t BgL_b1z00_1418;
{ /* Ieee/string.scm 1145 */
obj_t BgL_procz00_3028;
BgL_procz00_3028 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_164))
{ /* Ieee/string.scm 1145 */
bool_t BgL_testz00_8999;
{ /* Ieee/string.scm 1145 */
long BgL_n1z00_3037;
{ /* Ieee/string.scm 1145 */
obj_t BgL_auxz00_9000;
if(
INTEGERP(BgL_start1z00_164))
{ /* Ieee/string.scm 1145 */
BgL_auxz00_9000 = BgL_start1z00_164
; }  else 
{ 
obj_t BgL_auxz00_9003;
BgL_auxz00_9003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46258)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_164); 
FAILURE(BgL_auxz00_9003,BFALSE,BFALSE);} 
BgL_n1z00_3037 = 
(long)CINT(BgL_auxz00_9000); } 
BgL_testz00_8999 = 
(BgL_n1z00_3037<((long)0)); } 
if(BgL_testz00_8999)
{ /* Ieee/string.scm 1145 */
BgL_b1z00_1418 = 
BGl_errorz00zz__errorz00(BgL_procz00_3028, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_164); }  else 
{ /* Ieee/string.scm 1145 */
bool_t BgL_testz00_9011;
{ /* Ieee/string.scm 1145 */
long BgL_n1z00_3039;
{ /* Ieee/string.scm 1145 */
obj_t BgL_auxz00_9012;
if(
INTEGERP(BgL_start1z00_164))
{ /* Ieee/string.scm 1145 */
BgL_auxz00_9012 = BgL_start1z00_164
; }  else 
{ 
obj_t BgL_auxz00_9015;
BgL_auxz00_9015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46258)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_164); 
FAILURE(BgL_auxz00_9015,BFALSE,BFALSE);} 
BgL_n1z00_3039 = 
(long)CINT(BgL_auxz00_9012); } 
BgL_testz00_9011 = 
(BgL_n1z00_3039>=BgL_l1z00_1414); } 
if(BgL_testz00_9011)
{ /* Ieee/string.scm 1145 */
BgL_b1z00_1418 = 
BGl_errorz00zz__errorz00(BgL_procz00_3028, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_164); }  else 
{ /* Ieee/string.scm 1145 */
BgL_b1z00_1418 = BgL_start1z00_164; } } }  else 
{ /* Ieee/string.scm 1145 */
BgL_b1z00_1418 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1145 */
obj_t BgL_b2z00_1419;
{ /* Ieee/string.scm 1146 */
obj_t BgL_procz00_3041;
BgL_procz00_3041 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_166))
{ /* Ieee/string.scm 1146 */
bool_t BgL_testz00_9026;
{ /* Ieee/string.scm 1146 */
long BgL_n1z00_3050;
{ /* Ieee/string.scm 1146 */
obj_t BgL_auxz00_9027;
if(
INTEGERP(BgL_start2z00_166))
{ /* Ieee/string.scm 1146 */
BgL_auxz00_9027 = BgL_start2z00_166
; }  else 
{ 
obj_t BgL_auxz00_9030;
BgL_auxz00_9030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46328)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_166); 
FAILURE(BgL_auxz00_9030,BFALSE,BFALSE);} 
BgL_n1z00_3050 = 
(long)CINT(BgL_auxz00_9027); } 
BgL_testz00_9026 = 
(BgL_n1z00_3050<((long)0)); } 
if(BgL_testz00_9026)
{ /* Ieee/string.scm 1146 */
BgL_b2z00_1419 = 
BGl_errorz00zz__errorz00(BgL_procz00_3041, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_166); }  else 
{ /* Ieee/string.scm 1146 */
bool_t BgL_testz00_9038;
{ /* Ieee/string.scm 1146 */
long BgL_n1z00_3052;
{ /* Ieee/string.scm 1146 */
obj_t BgL_auxz00_9039;
if(
INTEGERP(BgL_start2z00_166))
{ /* Ieee/string.scm 1146 */
BgL_auxz00_9039 = BgL_start2z00_166
; }  else 
{ 
obj_t BgL_auxz00_9042;
BgL_auxz00_9042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46328)), BGl_string3633z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_166); 
FAILURE(BgL_auxz00_9042,BFALSE,BFALSE);} 
BgL_n1z00_3052 = 
(long)CINT(BgL_auxz00_9039); } 
BgL_testz00_9038 = 
(BgL_n1z00_3052>=BgL_l2z00_1415); } 
if(BgL_testz00_9038)
{ /* Ieee/string.scm 1146 */
BgL_b2z00_1419 = 
BGl_errorz00zz__errorz00(BgL_procz00_3041, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_166); }  else 
{ /* Ieee/string.scm 1146 */
BgL_b2z00_1419 = BgL_start2z00_166; } } }  else 
{ /* Ieee/string.scm 1146 */
BgL_b2z00_1419 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1146 */

{ 
obj_t BgL_i1z00_1421;obj_t BgL_i2z00_1422;
{ /* Ieee/string.scm 1147 */
long BgL_auxz00_9051;
BgL_i1z00_1421 = BgL_b1z00_1418; 
BgL_i2z00_1422 = BgL_b2z00_1419; 
BgL_zc3anonymousza31770ze3z83_1423:
{ /* Ieee/string.scm 1150 */
bool_t BgL_testz00_9052;
{ /* Ieee/string.scm 1150 */
bool_t BgL_testz00_9053;
{ /* Ieee/string.scm 1150 */
long BgL_n1z00_3054;long BgL_n2z00_3055;
{ /* Ieee/string.scm 1150 */
obj_t BgL_auxz00_9054;
if(
INTEGERP(BgL_i1z00_1421))
{ /* Ieee/string.scm 1150 */
BgL_auxz00_9054 = BgL_i1z00_1421
; }  else 
{ 
obj_t BgL_auxz00_9057;
BgL_auxz00_9057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46452)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1421); 
FAILURE(BgL_auxz00_9057,BFALSE,BFALSE);} 
BgL_n1z00_3054 = 
(long)CINT(BgL_auxz00_9054); } 
{ /* Ieee/string.scm 1150 */
obj_t BgL_auxz00_9062;
if(
INTEGERP(BgL_e1z00_1416))
{ /* Ieee/string.scm 1150 */
BgL_auxz00_9062 = BgL_e1z00_1416
; }  else 
{ 
obj_t BgL_auxz00_9065;
BgL_auxz00_9065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46455)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1416); 
FAILURE(BgL_auxz00_9065,BFALSE,BFALSE);} 
BgL_n2z00_3055 = 
(long)CINT(BgL_auxz00_9062); } 
BgL_testz00_9053 = 
(BgL_n1z00_3054==BgL_n2z00_3055); } 
if(BgL_testz00_9053)
{ /* Ieee/string.scm 1150 */
BgL_testz00_9052 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1150 */
long BgL_n1z00_3056;long BgL_n2z00_3057;
{ /* Ieee/string.scm 1150 */
obj_t BgL_auxz00_9071;
if(
INTEGERP(BgL_i2z00_1422))
{ /* Ieee/string.scm 1150 */
BgL_auxz00_9071 = BgL_i2z00_1422
; }  else 
{ 
obj_t BgL_auxz00_9074;
BgL_auxz00_9074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46464)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1422); 
FAILURE(BgL_auxz00_9074,BFALSE,BFALSE);} 
BgL_n1z00_3056 = 
(long)CINT(BgL_auxz00_9071); } 
{ /* Ieee/string.scm 1150 */
obj_t BgL_auxz00_9079;
if(
INTEGERP(BgL_e2z00_1417))
{ /* Ieee/string.scm 1150 */
BgL_auxz00_9079 = BgL_e2z00_1417
; }  else 
{ 
obj_t BgL_auxz00_9082;
BgL_auxz00_9082 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46467)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1417); 
FAILURE(BgL_auxz00_9082,BFALSE,BFALSE);} 
BgL_n2z00_3057 = 
(long)CINT(BgL_auxz00_9079); } 
BgL_testz00_9052 = 
(BgL_n1z00_3056==BgL_n2z00_3057); } } 
if(BgL_testz00_9052)
{ /* Ieee/string.scm 1151 */
long BgL_za71za7_3058;long BgL_za72za7_3059;
{ /* Ieee/string.scm 1151 */
obj_t BgL_auxz00_9088;
if(
INTEGERP(BgL_i1z00_1421))
{ /* Ieee/string.scm 1151 */
BgL_auxz00_9088 = BgL_i1z00_1421
; }  else 
{ 
obj_t BgL_auxz00_9091;
BgL_auxz00_9091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46478)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1421); 
FAILURE(BgL_auxz00_9091,BFALSE,BFALSE);} 
BgL_za71za7_3058 = 
(long)CINT(BgL_auxz00_9088); } 
{ /* Ieee/string.scm 1151 */
obj_t BgL_auxz00_9096;
if(
INTEGERP(BgL_b1z00_1418))
{ /* Ieee/string.scm 1151 */
BgL_auxz00_9096 = BgL_b1z00_1418
; }  else 
{ 
obj_t BgL_auxz00_9099;
BgL_auxz00_9099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46478)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1418); 
FAILURE(BgL_auxz00_9099,BFALSE,BFALSE);} 
BgL_za72za7_3059 = 
(long)CINT(BgL_auxz00_9096); } 
BgL_auxz00_9051 = 
(BgL_za71za7_3058-BgL_za72za7_3059); }  else 
{ /* Ieee/string.scm 1152 */
bool_t BgL_testz00_9105;
{ /* Ieee/string.scm 1152 */
unsigned char BgL_auxz00_9124;unsigned char BgL_auxz00_9106;
{ /* Ieee/string.scm 1152 */
long BgL_kz00_3063;
{ /* Ieee/string.scm 1152 */
obj_t BgL_auxz00_9125;
if(
INTEGERP(BgL_i2z00_1422))
{ /* Ieee/string.scm 1152 */
BgL_auxz00_9125 = BgL_i2z00_1422
; }  else 
{ 
obj_t BgL_auxz00_9128;
BgL_auxz00_9128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46539)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1422); 
FAILURE(BgL_auxz00_9128,BFALSE,BFALSE);} 
BgL_kz00_3063 = 
(long)CINT(BgL_auxz00_9125); } 
{ /* Ieee/string.scm 1152 */
long BgL_l2511z00_4344;
BgL_l2511z00_4344 = 
STRING_LENGTH(BgL_s2z00_163); 
if(
BOUND_CHECK(BgL_kz00_3063, BgL_l2511z00_4344))
{ /* Ieee/string.scm 1152 */
BgL_auxz00_9124 = 
STRING_REF(BgL_s2z00_163, BgL_kz00_3063)
; }  else 
{ 
obj_t BgL_auxz00_9137;
BgL_auxz00_9137 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46524)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3063), BgL_s2z00_163); 
FAILURE(BgL_auxz00_9137,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1152 */
long BgL_kz00_3061;
{ /* Ieee/string.scm 1152 */
obj_t BgL_auxz00_9107;
if(
INTEGERP(BgL_i1z00_1421))
{ /* Ieee/string.scm 1152 */
BgL_auxz00_9107 = BgL_i1z00_1421
; }  else 
{ 
obj_t BgL_auxz00_9110;
BgL_auxz00_9110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46520)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1421); 
FAILURE(BgL_auxz00_9110,BFALSE,BFALSE);} 
BgL_kz00_3061 = 
(long)CINT(BgL_auxz00_9107); } 
{ /* Ieee/string.scm 1152 */
long BgL_l2507z00_4340;
BgL_l2507z00_4340 = 
STRING_LENGTH(BgL_s1z00_162); 
if(
BOUND_CHECK(BgL_kz00_3061, BgL_l2507z00_4340))
{ /* Ieee/string.scm 1152 */
BgL_auxz00_9106 = 
STRING_REF(BgL_s1z00_162, BgL_kz00_3061)
; }  else 
{ 
obj_t BgL_auxz00_9119;
BgL_auxz00_9119 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46505)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3061), BgL_s1z00_162); 
FAILURE(BgL_auxz00_9119,BFALSE,BFALSE);} } } 
BgL_testz00_9105 = 
(BgL_auxz00_9106==BgL_auxz00_9124); } 
if(BgL_testz00_9105)
{ 
obj_t BgL_i2z00_9154;obj_t BgL_i1z00_9143;
{ /* Ieee/string.scm 1153 */
long BgL_za71za7_3066;
{ /* Ieee/string.scm 1153 */
obj_t BgL_auxz00_9144;
if(
INTEGERP(BgL_i1z00_1421))
{ /* Ieee/string.scm 1153 */
BgL_auxz00_9144 = BgL_i1z00_1421
; }  else 
{ 
obj_t BgL_auxz00_9147;
BgL_auxz00_9147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46556)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1421); 
FAILURE(BgL_auxz00_9147,BFALSE,BFALSE);} 
BgL_za71za7_3066 = 
(long)CINT(BgL_auxz00_9144); } 
BgL_i1z00_9143 = 
BINT(
(BgL_za71za7_3066+((long)1))); } 
{ /* Ieee/string.scm 1153 */
long BgL_za71za7_3068;
{ /* Ieee/string.scm 1153 */
obj_t BgL_auxz00_9155;
if(
INTEGERP(BgL_i2z00_1422))
{ /* Ieee/string.scm 1153 */
BgL_auxz00_9155 = BgL_i2z00_1422
; }  else 
{ 
obj_t BgL_auxz00_9158;
BgL_auxz00_9158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46567)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1422); 
FAILURE(BgL_auxz00_9158,BFALSE,BFALSE);} 
BgL_za71za7_3068 = 
(long)CINT(BgL_auxz00_9155); } 
BgL_i2z00_9154 = 
BINT(
(BgL_za71za7_3068+((long)1))); } 
BgL_i2z00_1422 = BgL_i2z00_9154; 
BgL_i1z00_1421 = BgL_i1z00_9143; 
goto BgL_zc3anonymousza31770ze3z83_1423;}  else 
{ /* Ieee/string.scm 1155 */
long BgL_za71za7_3070;long BgL_za72za7_3071;
{ /* Ieee/string.scm 1155 */
obj_t BgL_auxz00_9165;
if(
INTEGERP(BgL_i1z00_1421))
{ /* Ieee/string.scm 1155 */
BgL_auxz00_9165 = BgL_i1z00_1421
; }  else 
{ 
obj_t BgL_auxz00_9168;
BgL_auxz00_9168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46597)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1421); 
FAILURE(BgL_auxz00_9168,BFALSE,BFALSE);} 
BgL_za71za7_3070 = 
(long)CINT(BgL_auxz00_9165); } 
{ /* Ieee/string.scm 1155 */
obj_t BgL_auxz00_9173;
if(
INTEGERP(BgL_b1z00_1418))
{ /* Ieee/string.scm 1155 */
BgL_auxz00_9173 = BgL_b1z00_1418
; }  else 
{ 
obj_t BgL_auxz00_9176;
BgL_auxz00_9176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46597)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1418); 
FAILURE(BgL_auxz00_9176,BFALSE,BFALSE);} 
BgL_za72za7_3071 = 
(long)CINT(BgL_auxz00_9173); } 
BgL_auxz00_9051 = 
(BgL_za71za7_3070-BgL_za72za7_3071); } } } 
return 
(int)(BgL_auxz00_9051);} } } } } } } } } } 
}



/* _string-prefix-length-ci */
obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_envz00_177, obj_t BgL_optz00_176)
{ AN_OBJECT;
{ /* Ieee/string.scm 1160 */
{ /* Ieee/string.scm 1160 */
obj_t BgL_s1z00_1432;obj_t BgL_s2z00_1433;
BgL_s1z00_1432 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_s2z00_1433 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1160 */
int BgL_aux1198z00_1435;
BgL_aux1198z00_1435 = 
VECTOR_LENGTH(BgL_optz00_176); 
switch( 
(long)(BgL_aux1198z00_1435)) { case ((long)2) : 

{ /* Ieee/string.scm 1160 */

{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1782z00_1441;obj_t BgL_arg1783z00_1442;
BgL_arg1782z00_1441 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_arg1783z00_1442 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ /* Ieee/string.scm 1160 */
int BgL_auxz00_9192;
{ /* Ieee/string.scm 1160 */
obj_t BgL_auxz00_9200;obj_t BgL_auxz00_9193;
if(
STRINGP(BgL_arg1783z00_1442))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9200 = BgL_arg1783z00_1442
; }  else 
{ 
obj_t BgL_auxz00_9203;
BgL_auxz00_9203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1783z00_1442); 
FAILURE(BgL_auxz00_9203,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1782z00_1441))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9193 = BgL_arg1782z00_1441
; }  else 
{ 
obj_t BgL_auxz00_9196;
BgL_auxz00_9196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1782z00_1441); 
FAILURE(BgL_auxz00_9196,BFALSE,BFALSE);} 
BgL_auxz00_9192 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9193, BgL_auxz00_9200, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9192);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1160 */
obj_t BgL_start1z00_1443;
BgL_start1z00_1443 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)2))); 
{ /* Ieee/string.scm 1160 */

{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1784z00_1447;obj_t BgL_arg1785z00_1448;
BgL_arg1784z00_1447 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_arg1785z00_1448 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ /* Ieee/string.scm 1160 */
int BgL_auxz00_9215;
{ /* Ieee/string.scm 1160 */
obj_t BgL_auxz00_9223;obj_t BgL_auxz00_9216;
if(
STRINGP(BgL_arg1785z00_1448))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9223 = BgL_arg1785z00_1448
; }  else 
{ 
obj_t BgL_auxz00_9226;
BgL_auxz00_9226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1785z00_1448); 
FAILURE(BgL_auxz00_9226,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1784z00_1447))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9216 = BgL_arg1784z00_1447
; }  else 
{ 
obj_t BgL_auxz00_9219;
BgL_auxz00_9219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1784z00_1447); 
FAILURE(BgL_auxz00_9219,BFALSE,BFALSE);} 
BgL_auxz00_9215 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9216, BgL_auxz00_9223, BgL_start1z00_1443, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9215);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1160 */
obj_t BgL_start1z00_1449;
BgL_start1z00_1449 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)2))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_end1z00_1450;
BgL_end1z00_1450 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)3))); 
{ /* Ieee/string.scm 1160 */

{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1786z00_1453;obj_t BgL_arg1787z00_1454;
BgL_arg1786z00_1453 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_arg1787z00_1454 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ /* Ieee/string.scm 1160 */
int BgL_auxz00_9240;
{ /* Ieee/string.scm 1160 */
obj_t BgL_auxz00_9248;obj_t BgL_auxz00_9241;
if(
STRINGP(BgL_arg1787z00_1454))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9248 = BgL_arg1787z00_1454
; }  else 
{ 
obj_t BgL_auxz00_9251;
BgL_auxz00_9251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1787z00_1454); 
FAILURE(BgL_auxz00_9251,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1786z00_1453))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9241 = BgL_arg1786z00_1453
; }  else 
{ 
obj_t BgL_auxz00_9244;
BgL_auxz00_9244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1786z00_1453); 
FAILURE(BgL_auxz00_9244,BFALSE,BFALSE);} 
BgL_auxz00_9240 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9241, BgL_auxz00_9248, BgL_start1z00_1449, BgL_end1z00_1450, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9240);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1160 */
obj_t BgL_start1z00_1455;
BgL_start1z00_1455 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)2))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_end1z00_1456;
BgL_end1z00_1456 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)3))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_start2z00_1457;
BgL_start2z00_1457 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)4))); 
{ /* Ieee/string.scm 1160 */

{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1789z00_1459;obj_t BgL_arg1790z00_1460;
BgL_arg1789z00_1459 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_arg1790z00_1460 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ /* Ieee/string.scm 1160 */
int BgL_auxz00_9267;
{ /* Ieee/string.scm 1160 */
obj_t BgL_auxz00_9275;obj_t BgL_auxz00_9268;
if(
STRINGP(BgL_arg1790z00_1460))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9275 = BgL_arg1790z00_1460
; }  else 
{ 
obj_t BgL_auxz00_9278;
BgL_auxz00_9278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1790z00_1460); 
FAILURE(BgL_auxz00_9278,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1789z00_1459))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9268 = BgL_arg1789z00_1459
; }  else 
{ 
obj_t BgL_auxz00_9271;
BgL_auxz00_9271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1789z00_1459); 
FAILURE(BgL_auxz00_9271,BFALSE,BFALSE);} 
BgL_auxz00_9267 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9268, BgL_auxz00_9275, BgL_start1z00_1455, BgL_end1z00_1456, BgL_start2z00_1457, BFALSE); } 
return 
BINT(BgL_auxz00_9267);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1160 */
obj_t BgL_start1z00_1461;
BgL_start1z00_1461 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)2))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_end1z00_1462;
BgL_end1z00_1462 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)3))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_start2z00_1463;
BgL_start2z00_1463 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)4))); 
{ /* Ieee/string.scm 1160 */
obj_t BgL_end2z00_1464;
BgL_end2z00_1464 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)5))); 
{ /* Ieee/string.scm 1160 */

{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1791z00_1465;obj_t BgL_arg1792z00_1466;
BgL_arg1791z00_1465 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)0))); 
BgL_arg1792z00_1466 = 
VECTOR_REF(BgL_optz00_176,
(int)(((long)1))); 
{ /* Ieee/string.scm 1160 */
int BgL_auxz00_9296;
{ /* Ieee/string.scm 1160 */
obj_t BgL_auxz00_9304;obj_t BgL_auxz00_9297;
if(
STRINGP(BgL_arg1792z00_1466))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9304 = BgL_arg1792z00_1466
; }  else 
{ 
obj_t BgL_auxz00_9307;
BgL_auxz00_9307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1792z00_1466); 
FAILURE(BgL_auxz00_9307,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1791z00_1465))
{ /* Ieee/string.scm 1160 */
BgL_auxz00_9297 = BgL_arg1791z00_1465
; }  else 
{ 
obj_t BgL_auxz00_9300;
BgL_auxz00_9300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)46839)), BGl_string3645z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1791z00_1465); 
FAILURE(BgL_auxz00_9300,BFALSE,BFALSE);} 
BgL_auxz00_9296 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9297, BgL_auxz00_9304, BgL_start1z00_1461, BgL_end1z00_1462, BgL_start2z00_1463, BgL_end2z00_1464); } 
return 
BINT(BgL_auxz00_9296);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1160 */
obj_t BgL_arg1793z00_1467;int BgL_arg1795z00_1469;
BgL_arg1793z00_1467 = BGl_symbol3643z00zz__r4_strings_6_7z00; 
BgL_arg1795z00_1469 = 
VECTOR_LENGTH(BgL_optz00_176); 
return 
BGl_errorz00zz__errorz00(BgL_arg1793z00_1467, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1795z00_1469));} } } } } } 
}



/* string-prefix-length-ci */
BGL_EXPORTED_DEF int BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_170, obj_t BgL_s2z00_171, obj_t BgL_start1z00_172, obj_t BgL_end1z00_173, obj_t BgL_start2z00_174, obj_t BgL_end2z00_175)
{ AN_OBJECT;
{ /* Ieee/string.scm 1160 */
{ /* Ieee/string.scm 1162 */
long BgL_l1z00_1470;
BgL_l1z00_1470 = 
STRING_LENGTH(BgL_s1z00_170); 
{ /* Ieee/string.scm 1162 */
long BgL_l2z00_1471;
BgL_l2z00_1471 = 
STRING_LENGTH(BgL_s2z00_171); 
{ /* Ieee/string.scm 1163 */
obj_t BgL_e1z00_1472;
{ /* Ieee/string.scm 1164 */
obj_t BgL_procz00_3074;
BgL_procz00_3074 = BGl_symbol3646z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_173))
{ /* Ieee/string.scm 1164 */
bool_t BgL_testz00_9322;
{ /* Ieee/string.scm 1164 */
long BgL_n1z00_3083;
{ /* Ieee/string.scm 1164 */
obj_t BgL_auxz00_9323;
if(
INTEGERP(BgL_end1z00_173))
{ /* Ieee/string.scm 1164 */
BgL_auxz00_9323 = BgL_end1z00_173
; }  else 
{ 
obj_t BgL_auxz00_9326;
BgL_auxz00_9326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47015)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_173); 
FAILURE(BgL_auxz00_9326,BFALSE,BFALSE);} 
BgL_n1z00_3083 = 
(long)CINT(BgL_auxz00_9323); } 
BgL_testz00_9322 = 
(BgL_n1z00_3083<=((long)0)); } 
if(BgL_testz00_9322)
{ /* Ieee/string.scm 1164 */
BgL_e1z00_1472 = 
BGl_errorz00zz__errorz00(BgL_procz00_3074, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_173); }  else 
{ /* Ieee/string.scm 1164 */
bool_t BgL_testz00_9334;
{ /* Ieee/string.scm 1164 */
long BgL_n1z00_3085;
{ /* Ieee/string.scm 1164 */
obj_t BgL_auxz00_9335;
if(
INTEGERP(BgL_end1z00_173))
{ /* Ieee/string.scm 1164 */
BgL_auxz00_9335 = BgL_end1z00_173
; }  else 
{ 
obj_t BgL_auxz00_9338;
BgL_auxz00_9338 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47015)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_173); 
FAILURE(BgL_auxz00_9338,BFALSE,BFALSE);} 
BgL_n1z00_3085 = 
(long)CINT(BgL_auxz00_9335); } 
BgL_testz00_9334 = 
(BgL_n1z00_3085>BgL_l1z00_1470); } 
if(BgL_testz00_9334)
{ /* Ieee/string.scm 1164 */
BgL_e1z00_1472 = 
BGl_errorz00zz__errorz00(BgL_procz00_3074, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_173); }  else 
{ /* Ieee/string.scm 1164 */
BgL_e1z00_1472 = BgL_end1z00_173; } } }  else 
{ /* Ieee/string.scm 1164 */
BgL_e1z00_1472 = 
BINT(BgL_l1z00_1470); } } 
{ /* Ieee/string.scm 1164 */
obj_t BgL_e2z00_1473;
{ /* Ieee/string.scm 1165 */
obj_t BgL_procz00_3087;
BgL_procz00_3087 = BGl_symbol3646z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_175))
{ /* Ieee/string.scm 1165 */
bool_t BgL_testz00_9349;
{ /* Ieee/string.scm 1165 */
long BgL_n1z00_3096;
{ /* Ieee/string.scm 1165 */
obj_t BgL_auxz00_9350;
if(
INTEGERP(BgL_end2z00_175))
{ /* Ieee/string.scm 1165 */
BgL_auxz00_9350 = BgL_end2z00_175
; }  else 
{ 
obj_t BgL_auxz00_9353;
BgL_auxz00_9353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47083)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_175); 
FAILURE(BgL_auxz00_9353,BFALSE,BFALSE);} 
BgL_n1z00_3096 = 
(long)CINT(BgL_auxz00_9350); } 
BgL_testz00_9349 = 
(BgL_n1z00_3096<=((long)0)); } 
if(BgL_testz00_9349)
{ /* Ieee/string.scm 1165 */
BgL_e2z00_1473 = 
BGl_errorz00zz__errorz00(BgL_procz00_3087, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_175); }  else 
{ /* Ieee/string.scm 1165 */
bool_t BgL_testz00_9361;
{ /* Ieee/string.scm 1165 */
long BgL_n1z00_3098;
{ /* Ieee/string.scm 1165 */
obj_t BgL_auxz00_9362;
if(
INTEGERP(BgL_end2z00_175))
{ /* Ieee/string.scm 1165 */
BgL_auxz00_9362 = BgL_end2z00_175
; }  else 
{ 
obj_t BgL_auxz00_9365;
BgL_auxz00_9365 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47083)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_175); 
FAILURE(BgL_auxz00_9365,BFALSE,BFALSE);} 
BgL_n1z00_3098 = 
(long)CINT(BgL_auxz00_9362); } 
BgL_testz00_9361 = 
(BgL_n1z00_3098>BgL_l2z00_1471); } 
if(BgL_testz00_9361)
{ /* Ieee/string.scm 1165 */
BgL_e2z00_1473 = 
BGl_errorz00zz__errorz00(BgL_procz00_3087, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_175); }  else 
{ /* Ieee/string.scm 1165 */
BgL_e2z00_1473 = BgL_end2z00_175; } } }  else 
{ /* Ieee/string.scm 1165 */
BgL_e2z00_1473 = 
BINT(BgL_l2z00_1471); } } 
{ /* Ieee/string.scm 1165 */
obj_t BgL_b1z00_1474;
{ /* Ieee/string.scm 1166 */
obj_t BgL_procz00_3100;
BgL_procz00_3100 = BGl_symbol3646z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_172))
{ /* Ieee/string.scm 1166 */
bool_t BgL_testz00_9376;
{ /* Ieee/string.scm 1166 */
long BgL_n1z00_3109;
{ /* Ieee/string.scm 1166 */
obj_t BgL_auxz00_9377;
if(
INTEGERP(BgL_start1z00_172))
{ /* Ieee/string.scm 1166 */
BgL_auxz00_9377 = BgL_start1z00_172
; }  else 
{ 
obj_t BgL_auxz00_9380;
BgL_auxz00_9380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47151)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_172); 
FAILURE(BgL_auxz00_9380,BFALSE,BFALSE);} 
BgL_n1z00_3109 = 
(long)CINT(BgL_auxz00_9377); } 
BgL_testz00_9376 = 
(BgL_n1z00_3109<((long)0)); } 
if(BgL_testz00_9376)
{ /* Ieee/string.scm 1166 */
BgL_b1z00_1474 = 
BGl_errorz00zz__errorz00(BgL_procz00_3100, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_172); }  else 
{ /* Ieee/string.scm 1166 */
bool_t BgL_testz00_9388;
{ /* Ieee/string.scm 1166 */
long BgL_n1z00_3111;
{ /* Ieee/string.scm 1166 */
obj_t BgL_auxz00_9389;
if(
INTEGERP(BgL_start1z00_172))
{ /* Ieee/string.scm 1166 */
BgL_auxz00_9389 = BgL_start1z00_172
; }  else 
{ 
obj_t BgL_auxz00_9392;
BgL_auxz00_9392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47151)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_172); 
FAILURE(BgL_auxz00_9392,BFALSE,BFALSE);} 
BgL_n1z00_3111 = 
(long)CINT(BgL_auxz00_9389); } 
BgL_testz00_9388 = 
(BgL_n1z00_3111>=BgL_l1z00_1470); } 
if(BgL_testz00_9388)
{ /* Ieee/string.scm 1166 */
BgL_b1z00_1474 = 
BGl_errorz00zz__errorz00(BgL_procz00_3100, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_172); }  else 
{ /* Ieee/string.scm 1166 */
BgL_b1z00_1474 = BgL_start1z00_172; } } }  else 
{ /* Ieee/string.scm 1166 */
BgL_b1z00_1474 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1166 */
obj_t BgL_b2z00_1475;
{ /* Ieee/string.scm 1167 */
obj_t BgL_procz00_3113;
BgL_procz00_3113 = BGl_symbol3646z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_174))
{ /* Ieee/string.scm 1167 */
bool_t BgL_testz00_9403;
{ /* Ieee/string.scm 1167 */
long BgL_n1z00_3122;
{ /* Ieee/string.scm 1167 */
obj_t BgL_auxz00_9404;
if(
INTEGERP(BgL_start2z00_174))
{ /* Ieee/string.scm 1167 */
BgL_auxz00_9404 = BgL_start2z00_174
; }  else 
{ 
obj_t BgL_auxz00_9407;
BgL_auxz00_9407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47224)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_174); 
FAILURE(BgL_auxz00_9407,BFALSE,BFALSE);} 
BgL_n1z00_3122 = 
(long)CINT(BgL_auxz00_9404); } 
BgL_testz00_9403 = 
(BgL_n1z00_3122<((long)0)); } 
if(BgL_testz00_9403)
{ /* Ieee/string.scm 1167 */
BgL_b2z00_1475 = 
BGl_errorz00zz__errorz00(BgL_procz00_3113, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_174); }  else 
{ /* Ieee/string.scm 1167 */
bool_t BgL_testz00_9415;
{ /* Ieee/string.scm 1167 */
long BgL_n1z00_3124;
{ /* Ieee/string.scm 1167 */
obj_t BgL_auxz00_9416;
if(
INTEGERP(BgL_start2z00_174))
{ /* Ieee/string.scm 1167 */
BgL_auxz00_9416 = BgL_start2z00_174
; }  else 
{ 
obj_t BgL_auxz00_9419;
BgL_auxz00_9419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47224)), BGl_string3647z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_174); 
FAILURE(BgL_auxz00_9419,BFALSE,BFALSE);} 
BgL_n1z00_3124 = 
(long)CINT(BgL_auxz00_9416); } 
BgL_testz00_9415 = 
(BgL_n1z00_3124>=BgL_l2z00_1471); } 
if(BgL_testz00_9415)
{ /* Ieee/string.scm 1167 */
BgL_b2z00_1475 = 
BGl_errorz00zz__errorz00(BgL_procz00_3113, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_174); }  else 
{ /* Ieee/string.scm 1167 */
BgL_b2z00_1475 = BgL_start2z00_174; } } }  else 
{ /* Ieee/string.scm 1167 */
BgL_b2z00_1475 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1167 */

{ 
obj_t BgL_i1z00_1477;obj_t BgL_i2z00_1478;
{ /* Ieee/string.scm 1168 */
long BgL_auxz00_9428;
BgL_i1z00_1477 = BgL_b1z00_1474; 
BgL_i2z00_1478 = BgL_b2z00_1475; 
BgL_zc3anonymousza31796ze3z83_1479:
{ /* Ieee/string.scm 1171 */
bool_t BgL_testz00_9429;
{ /* Ieee/string.scm 1171 */
bool_t BgL_testz00_9430;
{ /* Ieee/string.scm 1171 */
long BgL_n1z00_3126;long BgL_n2z00_3127;
{ /* Ieee/string.scm 1171 */
obj_t BgL_auxz00_9431;
if(
INTEGERP(BgL_i1z00_1477))
{ /* Ieee/string.scm 1171 */
BgL_auxz00_9431 = BgL_i1z00_1477
; }  else 
{ 
obj_t BgL_auxz00_9434;
BgL_auxz00_9434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47351)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1477); 
FAILURE(BgL_auxz00_9434,BFALSE,BFALSE);} 
BgL_n1z00_3126 = 
(long)CINT(BgL_auxz00_9431); } 
{ /* Ieee/string.scm 1171 */
obj_t BgL_auxz00_9439;
if(
INTEGERP(BgL_e1z00_1472))
{ /* Ieee/string.scm 1171 */
BgL_auxz00_9439 = BgL_e1z00_1472
; }  else 
{ 
obj_t BgL_auxz00_9442;
BgL_auxz00_9442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47354)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1472); 
FAILURE(BgL_auxz00_9442,BFALSE,BFALSE);} 
BgL_n2z00_3127 = 
(long)CINT(BgL_auxz00_9439); } 
BgL_testz00_9430 = 
(BgL_n1z00_3126==BgL_n2z00_3127); } 
if(BgL_testz00_9430)
{ /* Ieee/string.scm 1171 */
BgL_testz00_9429 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1171 */
long BgL_n1z00_3128;long BgL_n2z00_3129;
{ /* Ieee/string.scm 1171 */
obj_t BgL_auxz00_9448;
if(
INTEGERP(BgL_i2z00_1478))
{ /* Ieee/string.scm 1171 */
BgL_auxz00_9448 = BgL_i2z00_1478
; }  else 
{ 
obj_t BgL_auxz00_9451;
BgL_auxz00_9451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47363)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1478); 
FAILURE(BgL_auxz00_9451,BFALSE,BFALSE);} 
BgL_n1z00_3128 = 
(long)CINT(BgL_auxz00_9448); } 
{ /* Ieee/string.scm 1171 */
obj_t BgL_auxz00_9456;
if(
INTEGERP(BgL_e2z00_1473))
{ /* Ieee/string.scm 1171 */
BgL_auxz00_9456 = BgL_e2z00_1473
; }  else 
{ 
obj_t BgL_auxz00_9459;
BgL_auxz00_9459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47366)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1473); 
FAILURE(BgL_auxz00_9459,BFALSE,BFALSE);} 
BgL_n2z00_3129 = 
(long)CINT(BgL_auxz00_9456); } 
BgL_testz00_9429 = 
(BgL_n1z00_3128==BgL_n2z00_3129); } } 
if(BgL_testz00_9429)
{ /* Ieee/string.scm 1172 */
long BgL_za71za7_3130;long BgL_za72za7_3131;
{ /* Ieee/string.scm 1172 */
obj_t BgL_auxz00_9465;
if(
INTEGERP(BgL_i1z00_1477))
{ /* Ieee/string.scm 1172 */
BgL_auxz00_9465 = BgL_i1z00_1477
; }  else 
{ 
obj_t BgL_auxz00_9468;
BgL_auxz00_9468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47377)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1477); 
FAILURE(BgL_auxz00_9468,BFALSE,BFALSE);} 
BgL_za71za7_3130 = 
(long)CINT(BgL_auxz00_9465); } 
{ /* Ieee/string.scm 1172 */
obj_t BgL_auxz00_9473;
if(
INTEGERP(BgL_b1z00_1474))
{ /* Ieee/string.scm 1172 */
BgL_auxz00_9473 = BgL_b1z00_1474
; }  else 
{ 
obj_t BgL_auxz00_9476;
BgL_auxz00_9476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47377)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1474); 
FAILURE(BgL_auxz00_9476,BFALSE,BFALSE);} 
BgL_za72za7_3131 = 
(long)CINT(BgL_auxz00_9473); } 
BgL_auxz00_9428 = 
(BgL_za71za7_3130-BgL_za72za7_3131); }  else 
{ /* Ieee/string.scm 1173 */
bool_t BgL_testz00_9482;
{ /* Ieee/string.scm 1173 */
unsigned char BgL_auxz00_9503;unsigned char BgL_auxz00_9483;
{ /* Ieee/string.scm 1173 */
unsigned char BgL_auxz00_9504;
{ /* Ieee/string.scm 1173 */
long BgL_kz00_3135;
{ /* Ieee/string.scm 1173 */
obj_t BgL_auxz00_9505;
if(
INTEGERP(BgL_i2z00_1478))
{ /* Ieee/string.scm 1173 */
BgL_auxz00_9505 = BgL_i2z00_1478
; }  else 
{ 
obj_t BgL_auxz00_9508;
BgL_auxz00_9508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47441)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1478); 
FAILURE(BgL_auxz00_9508,BFALSE,BFALSE);} 
BgL_kz00_3135 = 
(long)CINT(BgL_auxz00_9505); } 
{ /* Ieee/string.scm 1173 */
long BgL_l2519z00_4352;
BgL_l2519z00_4352 = 
STRING_LENGTH(BgL_s2z00_171); 
if(
BOUND_CHECK(BgL_kz00_3135, BgL_l2519z00_4352))
{ /* Ieee/string.scm 1173 */
BgL_auxz00_9504 = 
STRING_REF(BgL_s2z00_171, BgL_kz00_3135)
; }  else 
{ 
obj_t BgL_auxz00_9517;
BgL_auxz00_9517 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47426)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3135), BgL_s2z00_171); 
FAILURE(BgL_auxz00_9517,BFALSE,BFALSE);} } } 
BgL_auxz00_9503 = 
toupper(BgL_auxz00_9504); } 
{ /* Ieee/string.scm 1173 */
unsigned char BgL_auxz00_9484;
{ /* Ieee/string.scm 1173 */
long BgL_kz00_3133;
{ /* Ieee/string.scm 1173 */
obj_t BgL_auxz00_9485;
if(
INTEGERP(BgL_i1z00_1477))
{ /* Ieee/string.scm 1173 */
BgL_auxz00_9485 = BgL_i1z00_1477
; }  else 
{ 
obj_t BgL_auxz00_9488;
BgL_auxz00_9488 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47422)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1477); 
FAILURE(BgL_auxz00_9488,BFALSE,BFALSE);} 
BgL_kz00_3133 = 
(long)CINT(BgL_auxz00_9485); } 
{ /* Ieee/string.scm 1173 */
long BgL_l2515z00_4348;
BgL_l2515z00_4348 = 
STRING_LENGTH(BgL_s1z00_170); 
if(
BOUND_CHECK(BgL_kz00_3133, BgL_l2515z00_4348))
{ /* Ieee/string.scm 1173 */
BgL_auxz00_9484 = 
STRING_REF(BgL_s1z00_170, BgL_kz00_3133)
; }  else 
{ 
obj_t BgL_auxz00_9497;
BgL_auxz00_9497 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47407)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3133), BgL_s1z00_170); 
FAILURE(BgL_auxz00_9497,BFALSE,BFALSE);} } } 
BgL_auxz00_9483 = 
toupper(BgL_auxz00_9484); } 
BgL_testz00_9482 = 
(BgL_auxz00_9483==BgL_auxz00_9503); } 
if(BgL_testz00_9482)
{ 
obj_t BgL_i2z00_9535;obj_t BgL_i1z00_9524;
{ /* Ieee/string.scm 1174 */
long BgL_za71za7_3145;
{ /* Ieee/string.scm 1174 */
obj_t BgL_auxz00_9525;
if(
INTEGERP(BgL_i1z00_1477))
{ /* Ieee/string.scm 1174 */
BgL_auxz00_9525 = BgL_i1z00_1477
; }  else 
{ 
obj_t BgL_auxz00_9528;
BgL_auxz00_9528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47458)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1477); 
FAILURE(BgL_auxz00_9528,BFALSE,BFALSE);} 
BgL_za71za7_3145 = 
(long)CINT(BgL_auxz00_9525); } 
BgL_i1z00_9524 = 
BINT(
(BgL_za71za7_3145+((long)1))); } 
{ /* Ieee/string.scm 1174 */
long BgL_za71za7_3147;
{ /* Ieee/string.scm 1174 */
obj_t BgL_auxz00_9536;
if(
INTEGERP(BgL_i2z00_1478))
{ /* Ieee/string.scm 1174 */
BgL_auxz00_9536 = BgL_i2z00_1478
; }  else 
{ 
obj_t BgL_auxz00_9539;
BgL_auxz00_9539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47469)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1478); 
FAILURE(BgL_auxz00_9539,BFALSE,BFALSE);} 
BgL_za71za7_3147 = 
(long)CINT(BgL_auxz00_9536); } 
BgL_i2z00_9535 = 
BINT(
(BgL_za71za7_3147+((long)1))); } 
BgL_i2z00_1478 = BgL_i2z00_9535; 
BgL_i1z00_1477 = BgL_i1z00_9524; 
goto BgL_zc3anonymousza31796ze3z83_1479;}  else 
{ /* Ieee/string.scm 1176 */
long BgL_za71za7_3149;long BgL_za72za7_3150;
{ /* Ieee/string.scm 1176 */
obj_t BgL_auxz00_9546;
if(
INTEGERP(BgL_i1z00_1477))
{ /* Ieee/string.scm 1176 */
BgL_auxz00_9546 = BgL_i1z00_1477
; }  else 
{ 
obj_t BgL_auxz00_9549;
BgL_auxz00_9549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47499)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1477); 
FAILURE(BgL_auxz00_9549,BFALSE,BFALSE);} 
BgL_za71za7_3149 = 
(long)CINT(BgL_auxz00_9546); } 
{ /* Ieee/string.scm 1176 */
obj_t BgL_auxz00_9554;
if(
INTEGERP(BgL_b1z00_1474))
{ /* Ieee/string.scm 1176 */
BgL_auxz00_9554 = BgL_b1z00_1474
; }  else 
{ 
obj_t BgL_auxz00_9557;
BgL_auxz00_9557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47499)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1474); 
FAILURE(BgL_auxz00_9557,BFALSE,BFALSE);} 
BgL_za72za7_3150 = 
(long)CINT(BgL_auxz00_9554); } 
BgL_auxz00_9428 = 
(BgL_za71za7_3149-BgL_za72za7_3150); } } } 
return 
(int)(BgL_auxz00_9428);} } } } } } } } } } 
}



/* _string-suffix-length */
obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_envz00_185, obj_t BgL_optz00_184)
{ AN_OBJECT;
{ /* Ieee/string.scm 1181 */
{ /* Ieee/string.scm 1181 */
obj_t BgL_s1z00_1488;obj_t BgL_s2z00_1489;
BgL_s1z00_1488 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_s2z00_1489 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1181 */
int BgL_aux1200z00_1491;
BgL_aux1200z00_1491 = 
VECTOR_LENGTH(BgL_optz00_184); 
switch( 
(long)(BgL_aux1200z00_1491)) { case ((long)2) : 

{ /* Ieee/string.scm 1181 */

{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1806z00_1497;obj_t BgL_arg1807z00_1498;
BgL_arg1806z00_1497 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_arg1807z00_1498 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ /* Ieee/string.scm 1181 */
int BgL_auxz00_9573;
{ /* Ieee/string.scm 1181 */
obj_t BgL_auxz00_9581;obj_t BgL_auxz00_9574;
if(
STRINGP(BgL_arg1807z00_1498))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9581 = BgL_arg1807z00_1498
; }  else 
{ 
obj_t BgL_auxz00_9584;
BgL_auxz00_9584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1807z00_1498); 
FAILURE(BgL_auxz00_9584,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1806z00_1497))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9574 = BgL_arg1806z00_1497
; }  else 
{ 
obj_t BgL_auxz00_9577;
BgL_auxz00_9577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1806z00_1497); 
FAILURE(BgL_auxz00_9577,BFALSE,BFALSE);} 
BgL_auxz00_9573 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9574, BgL_auxz00_9581, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9573);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1181 */
obj_t BgL_start1z00_1499;
BgL_start1z00_1499 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)2))); 
{ /* Ieee/string.scm 1181 */

{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1809z00_1503;obj_t BgL_arg1810z00_1504;
BgL_arg1809z00_1503 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_arg1810z00_1504 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ /* Ieee/string.scm 1181 */
int BgL_auxz00_9596;
{ /* Ieee/string.scm 1181 */
obj_t BgL_auxz00_9604;obj_t BgL_auxz00_9597;
if(
STRINGP(BgL_arg1810z00_1504))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9604 = BgL_arg1810z00_1504
; }  else 
{ 
obj_t BgL_auxz00_9607;
BgL_auxz00_9607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1810z00_1504); 
FAILURE(BgL_auxz00_9607,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1809z00_1503))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9597 = BgL_arg1809z00_1503
; }  else 
{ 
obj_t BgL_auxz00_9600;
BgL_auxz00_9600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1809z00_1503); 
FAILURE(BgL_auxz00_9600,BFALSE,BFALSE);} 
BgL_auxz00_9596 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9597, BgL_auxz00_9604, BgL_start1z00_1499, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9596);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1181 */
obj_t BgL_start1z00_1505;
BgL_start1z00_1505 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)2))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_end1z00_1506;
BgL_end1z00_1506 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)3))); 
{ /* Ieee/string.scm 1181 */

{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1811z00_1509;obj_t BgL_arg1812z00_1510;
BgL_arg1811z00_1509 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_arg1812z00_1510 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ /* Ieee/string.scm 1181 */
int BgL_auxz00_9621;
{ /* Ieee/string.scm 1181 */
obj_t BgL_auxz00_9629;obj_t BgL_auxz00_9622;
if(
STRINGP(BgL_arg1812z00_1510))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9629 = BgL_arg1812z00_1510
; }  else 
{ 
obj_t BgL_auxz00_9632;
BgL_auxz00_9632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1812z00_1510); 
FAILURE(BgL_auxz00_9632,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1811z00_1509))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9622 = BgL_arg1811z00_1509
; }  else 
{ 
obj_t BgL_auxz00_9625;
BgL_auxz00_9625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1811z00_1509); 
FAILURE(BgL_auxz00_9625,BFALSE,BFALSE);} 
BgL_auxz00_9621 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9622, BgL_auxz00_9629, BgL_start1z00_1505, BgL_end1z00_1506, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9621);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1181 */
obj_t BgL_start1z00_1511;
BgL_start1z00_1511 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)2))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_end1z00_1512;
BgL_end1z00_1512 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)3))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_start2z00_1513;
BgL_start2z00_1513 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)4))); 
{ /* Ieee/string.scm 1181 */

{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1813z00_1515;obj_t BgL_arg1815z00_1516;
BgL_arg1813z00_1515 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_arg1815z00_1516 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ /* Ieee/string.scm 1181 */
int BgL_auxz00_9648;
{ /* Ieee/string.scm 1181 */
obj_t BgL_auxz00_9656;obj_t BgL_auxz00_9649;
if(
STRINGP(BgL_arg1815z00_1516))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9656 = BgL_arg1815z00_1516
; }  else 
{ 
obj_t BgL_auxz00_9659;
BgL_auxz00_9659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1815z00_1516); 
FAILURE(BgL_auxz00_9659,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1813z00_1515))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9649 = BgL_arg1813z00_1515
; }  else 
{ 
obj_t BgL_auxz00_9652;
BgL_auxz00_9652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1813z00_1515); 
FAILURE(BgL_auxz00_9652,BFALSE,BFALSE);} 
BgL_auxz00_9648 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9649, BgL_auxz00_9656, BgL_start1z00_1511, BgL_end1z00_1512, BgL_start2z00_1513, BFALSE); } 
return 
BINT(BgL_auxz00_9648);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1181 */
obj_t BgL_start1z00_1517;
BgL_start1z00_1517 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)2))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_end1z00_1518;
BgL_end1z00_1518 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)3))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_start2z00_1519;
BgL_start2z00_1519 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)4))); 
{ /* Ieee/string.scm 1181 */
obj_t BgL_end2z00_1520;
BgL_end2z00_1520 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)5))); 
{ /* Ieee/string.scm 1181 */

{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1816z00_1521;obj_t BgL_arg1817z00_1522;
BgL_arg1816z00_1521 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)0))); 
BgL_arg1817z00_1522 = 
VECTOR_REF(BgL_optz00_184,
(int)(((long)1))); 
{ /* Ieee/string.scm 1181 */
int BgL_auxz00_9677;
{ /* Ieee/string.scm 1181 */
obj_t BgL_auxz00_9685;obj_t BgL_auxz00_9678;
if(
STRINGP(BgL_arg1817z00_1522))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9685 = BgL_arg1817z00_1522
; }  else 
{ 
obj_t BgL_auxz00_9688;
BgL_auxz00_9688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1817z00_1522); 
FAILURE(BgL_auxz00_9688,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1816z00_1521))
{ /* Ieee/string.scm 1181 */
BgL_auxz00_9678 = BgL_arg1816z00_1521
; }  else 
{ 
obj_t BgL_auxz00_9681;
BgL_auxz00_9681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47741)), BGl_string3650z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1816z00_1521); 
FAILURE(BgL_auxz00_9681,BFALSE,BFALSE);} 
BgL_auxz00_9677 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9678, BgL_auxz00_9685, BgL_start1z00_1517, BgL_end1z00_1518, BgL_start2z00_1519, BgL_end2z00_1520); } 
return 
BINT(BgL_auxz00_9677);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1181 */
obj_t BgL_arg1818z00_1523;int BgL_arg1820z00_1525;
BgL_arg1818z00_1523 = BGl_symbol3648z00zz__r4_strings_6_7z00; 
BgL_arg1820z00_1525 = 
VECTOR_LENGTH(BgL_optz00_184); 
return 
BGl_errorz00zz__errorz00(BgL_arg1818z00_1523, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1820z00_1525));} } } } } } 
}



/* string-suffix-length */
BGL_EXPORTED_DEF int BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_178, obj_t BgL_s2z00_179, obj_t BgL_start1z00_180, obj_t BgL_end1z00_181, obj_t BgL_start2z00_182, obj_t BgL_end2z00_183)
{ AN_OBJECT;
{ /* Ieee/string.scm 1181 */
{ /* Ieee/string.scm 1183 */
long BgL_l1z00_1526;
BgL_l1z00_1526 = 
STRING_LENGTH(BgL_s1z00_178); 
{ /* Ieee/string.scm 1183 */
long BgL_l2z00_1527;
BgL_l2z00_1527 = 
STRING_LENGTH(BgL_s2z00_179); 
{ /* Ieee/string.scm 1184 */
obj_t BgL_b1z00_1528;
{ /* Ieee/string.scm 1185 */
obj_t BgL_procz00_3153;
BgL_procz00_3153 = BGl_symbol3651z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_181))
{ /* Ieee/string.scm 1185 */
bool_t BgL_testz00_9703;
{ /* Ieee/string.scm 1185 */
long BgL_n1z00_3162;
{ /* Ieee/string.scm 1185 */
obj_t BgL_auxz00_9704;
if(
INTEGERP(BgL_end1z00_181))
{ /* Ieee/string.scm 1185 */
BgL_auxz00_9704 = BgL_end1z00_181
; }  else 
{ 
obj_t BgL_auxz00_9707;
BgL_auxz00_9707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47911)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_181); 
FAILURE(BgL_auxz00_9707,BFALSE,BFALSE);} 
BgL_n1z00_3162 = 
(long)CINT(BgL_auxz00_9704); } 
BgL_testz00_9703 = 
(BgL_n1z00_3162<=((long)0)); } 
if(BgL_testz00_9703)
{ /* Ieee/string.scm 1185 */
BgL_b1z00_1528 = 
BGl_errorz00zz__errorz00(BgL_procz00_3153, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_181); }  else 
{ /* Ieee/string.scm 1185 */
bool_t BgL_testz00_9715;
{ /* Ieee/string.scm 1185 */
long BgL_n1z00_3164;
{ /* Ieee/string.scm 1185 */
obj_t BgL_auxz00_9716;
if(
INTEGERP(BgL_end1z00_181))
{ /* Ieee/string.scm 1185 */
BgL_auxz00_9716 = BgL_end1z00_181
; }  else 
{ 
obj_t BgL_auxz00_9719;
BgL_auxz00_9719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47911)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_181); 
FAILURE(BgL_auxz00_9719,BFALSE,BFALSE);} 
BgL_n1z00_3164 = 
(long)CINT(BgL_auxz00_9716); } 
BgL_testz00_9715 = 
(BgL_n1z00_3164>BgL_l1z00_1526); } 
if(BgL_testz00_9715)
{ /* Ieee/string.scm 1185 */
BgL_b1z00_1528 = 
BGl_errorz00zz__errorz00(BgL_procz00_3153, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_181); }  else 
{ /* Ieee/string.scm 1185 */
BgL_b1z00_1528 = BgL_end1z00_181; } } }  else 
{ /* Ieee/string.scm 1185 */
BgL_b1z00_1528 = 
BINT(BgL_l1z00_1526); } } 
{ /* Ieee/string.scm 1185 */
obj_t BgL_b2z00_1529;
{ /* Ieee/string.scm 1186 */
obj_t BgL_procz00_3166;
BgL_procz00_3166 = BGl_symbol3651z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_183))
{ /* Ieee/string.scm 1186 */
bool_t BgL_testz00_9730;
{ /* Ieee/string.scm 1186 */
long BgL_n1z00_3175;
{ /* Ieee/string.scm 1186 */
obj_t BgL_auxz00_9731;
if(
INTEGERP(BgL_end2z00_183))
{ /* Ieee/string.scm 1186 */
BgL_auxz00_9731 = BgL_end2z00_183
; }  else 
{ 
obj_t BgL_auxz00_9734;
BgL_auxz00_9734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47976)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_183); 
FAILURE(BgL_auxz00_9734,BFALSE,BFALSE);} 
BgL_n1z00_3175 = 
(long)CINT(BgL_auxz00_9731); } 
BgL_testz00_9730 = 
(BgL_n1z00_3175<=((long)0)); } 
if(BgL_testz00_9730)
{ /* Ieee/string.scm 1186 */
BgL_b2z00_1529 = 
BGl_errorz00zz__errorz00(BgL_procz00_3166, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_183); }  else 
{ /* Ieee/string.scm 1186 */
bool_t BgL_testz00_9742;
{ /* Ieee/string.scm 1186 */
long BgL_n1z00_3177;
{ /* Ieee/string.scm 1186 */
obj_t BgL_auxz00_9743;
if(
INTEGERP(BgL_end2z00_183))
{ /* Ieee/string.scm 1186 */
BgL_auxz00_9743 = BgL_end2z00_183
; }  else 
{ 
obj_t BgL_auxz00_9746;
BgL_auxz00_9746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)47976)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_183); 
FAILURE(BgL_auxz00_9746,BFALSE,BFALSE);} 
BgL_n1z00_3177 = 
(long)CINT(BgL_auxz00_9743); } 
BgL_testz00_9742 = 
(BgL_n1z00_3177>BgL_l2z00_1527); } 
if(BgL_testz00_9742)
{ /* Ieee/string.scm 1186 */
BgL_b2z00_1529 = 
BGl_errorz00zz__errorz00(BgL_procz00_3166, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_183); }  else 
{ /* Ieee/string.scm 1186 */
BgL_b2z00_1529 = BgL_end2z00_183; } } }  else 
{ /* Ieee/string.scm 1186 */
BgL_b2z00_1529 = 
BINT(BgL_l2z00_1527); } } 
{ /* Ieee/string.scm 1186 */
obj_t BgL_e1z00_1530;
{ /* Ieee/string.scm 1187 */
obj_t BgL_procz00_3179;
BgL_procz00_3179 = BGl_symbol3651z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_180))
{ /* Ieee/string.scm 1187 */
bool_t BgL_testz00_9757;
{ /* Ieee/string.scm 1187 */
long BgL_n1z00_3188;
{ /* Ieee/string.scm 1187 */
obj_t BgL_auxz00_9758;
if(
INTEGERP(BgL_start1z00_180))
{ /* Ieee/string.scm 1187 */
BgL_auxz00_9758 = BgL_start1z00_180
; }  else 
{ 
obj_t BgL_auxz00_9761;
BgL_auxz00_9761 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48041)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_180); 
FAILURE(BgL_auxz00_9761,BFALSE,BFALSE);} 
BgL_n1z00_3188 = 
(long)CINT(BgL_auxz00_9758); } 
BgL_testz00_9757 = 
(BgL_n1z00_3188<((long)0)); } 
if(BgL_testz00_9757)
{ /* Ieee/string.scm 1187 */
BgL_e1z00_1530 = 
BGl_errorz00zz__errorz00(BgL_procz00_3179, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_180); }  else 
{ /* Ieee/string.scm 1187 */
bool_t BgL_testz00_9769;
{ /* Ieee/string.scm 1187 */
long BgL_n1z00_3190;
{ /* Ieee/string.scm 1187 */
obj_t BgL_auxz00_9770;
if(
INTEGERP(BgL_start1z00_180))
{ /* Ieee/string.scm 1187 */
BgL_auxz00_9770 = BgL_start1z00_180
; }  else 
{ 
obj_t BgL_auxz00_9773;
BgL_auxz00_9773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48041)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_180); 
FAILURE(BgL_auxz00_9773,BFALSE,BFALSE);} 
BgL_n1z00_3190 = 
(long)CINT(BgL_auxz00_9770); } 
BgL_testz00_9769 = 
(BgL_n1z00_3190>=BgL_l1z00_1526); } 
if(BgL_testz00_9769)
{ /* Ieee/string.scm 1187 */
BgL_e1z00_1530 = 
BGl_errorz00zz__errorz00(BgL_procz00_3179, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_180); }  else 
{ /* Ieee/string.scm 1187 */
BgL_e1z00_1530 = BgL_start1z00_180; } } }  else 
{ /* Ieee/string.scm 1187 */
BgL_e1z00_1530 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1187 */
obj_t BgL_e2z00_1531;
{ /* Ieee/string.scm 1188 */
obj_t BgL_procz00_3192;
BgL_procz00_3192 = BGl_symbol3651z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_182))
{ /* Ieee/string.scm 1188 */
bool_t BgL_testz00_9784;
{ /* Ieee/string.scm 1188 */
long BgL_n1z00_3201;
{ /* Ieee/string.scm 1188 */
obj_t BgL_auxz00_9785;
if(
INTEGERP(BgL_start2z00_182))
{ /* Ieee/string.scm 1188 */
BgL_auxz00_9785 = BgL_start2z00_182
; }  else 
{ 
obj_t BgL_auxz00_9788;
BgL_auxz00_9788 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48111)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_182); 
FAILURE(BgL_auxz00_9788,BFALSE,BFALSE);} 
BgL_n1z00_3201 = 
(long)CINT(BgL_auxz00_9785); } 
BgL_testz00_9784 = 
(BgL_n1z00_3201<((long)0)); } 
if(BgL_testz00_9784)
{ /* Ieee/string.scm 1188 */
BgL_e2z00_1531 = 
BGl_errorz00zz__errorz00(BgL_procz00_3192, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_182); }  else 
{ /* Ieee/string.scm 1188 */
bool_t BgL_testz00_9796;
{ /* Ieee/string.scm 1188 */
long BgL_n1z00_3203;
{ /* Ieee/string.scm 1188 */
obj_t BgL_auxz00_9797;
if(
INTEGERP(BgL_start2z00_182))
{ /* Ieee/string.scm 1188 */
BgL_auxz00_9797 = BgL_start2z00_182
; }  else 
{ 
obj_t BgL_auxz00_9800;
BgL_auxz00_9800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48111)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_182); 
FAILURE(BgL_auxz00_9800,BFALSE,BFALSE);} 
BgL_n1z00_3203 = 
(long)CINT(BgL_auxz00_9797); } 
BgL_testz00_9796 = 
(BgL_n1z00_3203>=BgL_l2z00_1527); } 
if(BgL_testz00_9796)
{ /* Ieee/string.scm 1188 */
BgL_e2z00_1531 = 
BGl_errorz00zz__errorz00(BgL_procz00_3192, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_182); }  else 
{ /* Ieee/string.scm 1188 */
BgL_e2z00_1531 = BgL_start2z00_182; } } }  else 
{ /* Ieee/string.scm 1188 */
BgL_e2z00_1531 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1188 */

{ 
long BgL_i1z00_1535;long BgL_i2z00_1536;
{ /* Ieee/string.scm 1189 */
long BgL_auxz00_9809;
{ /* Ieee/string.scm 1189 */
long BgL_za71za7_3205;
{ /* Ieee/string.scm 1189 */
obj_t BgL_auxz00_9876;
if(
INTEGERP(BgL_b1z00_1528))
{ /* Ieee/string.scm 1189 */
BgL_auxz00_9876 = BgL_b1z00_1528
; }  else 
{ 
obj_t BgL_auxz00_9879;
BgL_auxz00_9879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48196)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1528); 
FAILURE(BgL_auxz00_9879,BFALSE,BFALSE);} 
BgL_za71za7_3205 = 
(long)CINT(BgL_auxz00_9876); } 
BgL_i1z00_1535 = 
(BgL_za71za7_3205-((long)1)); } 
{ /* Ieee/string.scm 1190 */
long BgL_za71za7_3207;
{ /* Ieee/string.scm 1190 */
obj_t BgL_auxz00_9885;
if(
INTEGERP(BgL_b2z00_1529))
{ /* Ieee/string.scm 1190 */
BgL_auxz00_9885 = BgL_b2z00_1529
; }  else 
{ 
obj_t BgL_auxz00_9888;
BgL_auxz00_9888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48215)), BGl_string3652z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b2z00_1529); 
FAILURE(BgL_auxz00_9888,BFALSE,BFALSE);} 
BgL_za71za7_3207 = 
(long)CINT(BgL_auxz00_9885); } 
BgL_i2z00_1536 = 
(BgL_za71za7_3207-((long)1)); } 
BgL_zc3anonymousza31821ze3z83_1537:
{ /* Ieee/string.scm 1192 */
bool_t BgL_testz00_9810;
{ /* Ieee/string.scm 1192 */
bool_t BgL_testz00_9811;
{ /* Ieee/string.scm 1192 */
long BgL_n2z00_3210;
{ /* Ieee/string.scm 1192 */
obj_t BgL_auxz00_9812;
if(
INTEGERP(BgL_e1z00_1530))
{ /* Ieee/string.scm 1192 */
BgL_auxz00_9812 = BgL_e1z00_1530
; }  else 
{ 
obj_t BgL_auxz00_9815;
BgL_auxz00_9815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48254)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1530); 
FAILURE(BgL_auxz00_9815,BFALSE,BFALSE);} 
BgL_n2z00_3210 = 
(long)CINT(BgL_auxz00_9812); } 
BgL_testz00_9811 = 
(BgL_i1z00_1535<BgL_n2z00_3210); } 
if(BgL_testz00_9811)
{ /* Ieee/string.scm 1192 */
BgL_testz00_9810 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1192 */
long BgL_n2z00_3212;
{ /* Ieee/string.scm 1192 */
obj_t BgL_auxz00_9821;
if(
INTEGERP(BgL_e2z00_1531))
{ /* Ieee/string.scm 1192 */
BgL_auxz00_9821 = BgL_e2z00_1531
; }  else 
{ 
obj_t BgL_auxz00_9824;
BgL_auxz00_9824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48266)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1531); 
FAILURE(BgL_auxz00_9824,BFALSE,BFALSE);} 
BgL_n2z00_3212 = 
(long)CINT(BgL_auxz00_9821); } 
BgL_testz00_9810 = 
(BgL_i2z00_1536<BgL_n2z00_3212); } } 
if(BgL_testz00_9810)
{ /* Ieee/string.scm 1193 */
long BgL_za71za7_3215;
{ /* Ieee/string.scm 1193 */
obj_t BgL_auxz00_9830;
if(
INTEGERP(BgL_b1z00_1528))
{ /* Ieee/string.scm 1193 */
BgL_auxz00_9830 = BgL_b1z00_1528
; }  else 
{ 
obj_t BgL_auxz00_9833;
BgL_auxz00_9833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48277)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1528); 
FAILURE(BgL_auxz00_9833,BFALSE,BFALSE);} 
BgL_za71za7_3215 = 
(long)CINT(BgL_auxz00_9830); } 
BgL_auxz00_9809 = 
(BgL_za71za7_3215-
(BgL_i1z00_1535+((long)1))); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_testz00_9840;
{ /* Ieee/string.scm 1194 */
unsigned char BgL_auxz00_9851;unsigned char BgL_auxz00_9841;
{ /* Ieee/string.scm 1194 */
long BgL_l2527z00_4360;
BgL_l2527z00_4360 = 
STRING_LENGTH(BgL_s2z00_179); 
if(
BOUND_CHECK(BgL_i2z00_1536, BgL_l2527z00_4360))
{ /* Ieee/string.scm 1194 */
BgL_auxz00_9851 = 
STRING_REF(BgL_s2z00_179, BgL_i2z00_1536)
; }  else 
{ 
obj_t BgL_auxz00_9856;
BgL_auxz00_9856 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48331)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2z00_1536), BgL_s2z00_179); 
FAILURE(BgL_auxz00_9856,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 1194 */
long BgL_l2523z00_4356;
BgL_l2523z00_4356 = 
STRING_LENGTH(BgL_s1z00_178); 
if(
BOUND_CHECK(BgL_i1z00_1535, BgL_l2523z00_4356))
{ /* Ieee/string.scm 1194 */
BgL_auxz00_9841 = 
STRING_REF(BgL_s1z00_178, BgL_i1z00_1535)
; }  else 
{ 
obj_t BgL_auxz00_9846;
BgL_auxz00_9846 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48312)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i1z00_1535), BgL_s1z00_178); 
FAILURE(BgL_auxz00_9846,BFALSE,BFALSE);} } 
BgL_testz00_9840 = 
(BgL_auxz00_9841==BgL_auxz00_9851); } 
if(BgL_testz00_9840)
{ 
long BgL_i2z00_9864;long BgL_i1z00_9862;
BgL_i1z00_9862 = 
(BgL_i1z00_1535-((long)1)); 
BgL_i2z00_9864 = 
(BgL_i2z00_1536-((long)1)); 
BgL_i2z00_1536 = BgL_i2z00_9864; 
BgL_i1z00_1535 = BgL_i1z00_9862; 
goto BgL_zc3anonymousza31821ze3z83_1537;}  else 
{ /* Ieee/string.scm 1197 */
long BgL_za71za7_3229;
{ /* Ieee/string.scm 1197 */
obj_t BgL_auxz00_9866;
if(
INTEGERP(BgL_b1z00_1528))
{ /* Ieee/string.scm 1197 */
BgL_auxz00_9866 = BgL_b1z00_1528
; }  else 
{ 
obj_t BgL_auxz00_9869;
BgL_auxz00_9869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48404)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1528); 
FAILURE(BgL_auxz00_9869,BFALSE,BFALSE);} 
BgL_za71za7_3229 = 
(long)CINT(BgL_auxz00_9866); } 
BgL_auxz00_9809 = 
(BgL_za71za7_3229-
(BgL_i1z00_1535+((long)1))); } } } 
return 
(int)(BgL_auxz00_9809);} } } } } } } } } } 
}



/* _string-suffix-length-ci */
obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_envz00_193, obj_t BgL_optz00_192)
{ AN_OBJECT;
{ /* Ieee/string.scm 1202 */
{ /* Ieee/string.scm 1202 */
obj_t BgL_s1z00_1548;obj_t BgL_s2z00_1549;
BgL_s1z00_1548 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_s2z00_1549 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1202 */
int BgL_aux1202z00_1551;
BgL_aux1202z00_1551 = 
VECTOR_LENGTH(BgL_optz00_192); 
switch( 
(long)(BgL_aux1202z00_1551)) { case ((long)2) : 

{ /* Ieee/string.scm 1202 */

{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1832z00_1557;obj_t BgL_arg1834z00_1558;
BgL_arg1832z00_1557 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_arg1834z00_1558 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ /* Ieee/string.scm 1202 */
int BgL_auxz00_9904;
{ /* Ieee/string.scm 1202 */
obj_t BgL_auxz00_9912;obj_t BgL_auxz00_9905;
if(
STRINGP(BgL_arg1834z00_1558))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9912 = BgL_arg1834z00_1558
; }  else 
{ 
obj_t BgL_auxz00_9915;
BgL_auxz00_9915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1834z00_1558); 
FAILURE(BgL_auxz00_9915,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1832z00_1557))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9905 = BgL_arg1832z00_1557
; }  else 
{ 
obj_t BgL_auxz00_9908;
BgL_auxz00_9908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1832z00_1557); 
FAILURE(BgL_auxz00_9908,BFALSE,BFALSE);} 
BgL_auxz00_9904 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9905, BgL_auxz00_9912, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9904);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1202 */
obj_t BgL_start1z00_1559;
BgL_start1z00_1559 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)2))); 
{ /* Ieee/string.scm 1202 */

{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1835z00_1563;obj_t BgL_arg1836z00_1564;
BgL_arg1835z00_1563 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_arg1836z00_1564 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ /* Ieee/string.scm 1202 */
int BgL_auxz00_9927;
{ /* Ieee/string.scm 1202 */
obj_t BgL_auxz00_9935;obj_t BgL_auxz00_9928;
if(
STRINGP(BgL_arg1836z00_1564))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9935 = BgL_arg1836z00_1564
; }  else 
{ 
obj_t BgL_auxz00_9938;
BgL_auxz00_9938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1836z00_1564); 
FAILURE(BgL_auxz00_9938,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1835z00_1563))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9928 = BgL_arg1835z00_1563
; }  else 
{ 
obj_t BgL_auxz00_9931;
BgL_auxz00_9931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1835z00_1563); 
FAILURE(BgL_auxz00_9931,BFALSE,BFALSE);} 
BgL_auxz00_9927 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9928, BgL_auxz00_9935, BgL_start1z00_1559, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9927);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1202 */
obj_t BgL_start1z00_1565;
BgL_start1z00_1565 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)2))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_end1z00_1566;
BgL_end1z00_1566 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)3))); 
{ /* Ieee/string.scm 1202 */

{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1837z00_1569;obj_t BgL_arg1839z00_1570;
BgL_arg1837z00_1569 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_arg1839z00_1570 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ /* Ieee/string.scm 1202 */
int BgL_auxz00_9952;
{ /* Ieee/string.scm 1202 */
obj_t BgL_auxz00_9960;obj_t BgL_auxz00_9953;
if(
STRINGP(BgL_arg1839z00_1570))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9960 = BgL_arg1839z00_1570
; }  else 
{ 
obj_t BgL_auxz00_9963;
BgL_auxz00_9963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1839z00_1570); 
FAILURE(BgL_auxz00_9963,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1837z00_1569))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9953 = BgL_arg1837z00_1569
; }  else 
{ 
obj_t BgL_auxz00_9956;
BgL_auxz00_9956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1837z00_1569); 
FAILURE(BgL_auxz00_9956,BFALSE,BFALSE);} 
BgL_auxz00_9952 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9953, BgL_auxz00_9960, BgL_start1z00_1565, BgL_end1z00_1566, BFALSE, BFALSE); } 
return 
BINT(BgL_auxz00_9952);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1202 */
obj_t BgL_start1z00_1571;
BgL_start1z00_1571 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)2))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_end1z00_1572;
BgL_end1z00_1572 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)3))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_start2z00_1573;
BgL_start2z00_1573 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)4))); 
{ /* Ieee/string.scm 1202 */

{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1840z00_1575;obj_t BgL_arg1841z00_1576;
BgL_arg1840z00_1575 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_arg1841z00_1576 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ /* Ieee/string.scm 1202 */
int BgL_auxz00_9979;
{ /* Ieee/string.scm 1202 */
obj_t BgL_auxz00_9987;obj_t BgL_auxz00_9980;
if(
STRINGP(BgL_arg1841z00_1576))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9987 = BgL_arg1841z00_1576
; }  else 
{ 
obj_t BgL_auxz00_9990;
BgL_auxz00_9990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1841z00_1576); 
FAILURE(BgL_auxz00_9990,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1840z00_1575))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_9980 = BgL_arg1840z00_1575
; }  else 
{ 
obj_t BgL_auxz00_9983;
BgL_auxz00_9983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1840z00_1575); 
FAILURE(BgL_auxz00_9983,BFALSE,BFALSE);} 
BgL_auxz00_9979 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9980, BgL_auxz00_9987, BgL_start1z00_1571, BgL_end1z00_1572, BgL_start2z00_1573, BFALSE); } 
return 
BINT(BgL_auxz00_9979);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1202 */
obj_t BgL_start1z00_1577;
BgL_start1z00_1577 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)2))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_end1z00_1578;
BgL_end1z00_1578 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)3))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_start2z00_1579;
BgL_start2z00_1579 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)4))); 
{ /* Ieee/string.scm 1202 */
obj_t BgL_end2z00_1580;
BgL_end2z00_1580 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)5))); 
{ /* Ieee/string.scm 1202 */

{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1842z00_1581;obj_t BgL_arg1845z00_1582;
BgL_arg1842z00_1581 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)0))); 
BgL_arg1845z00_1582 = 
VECTOR_REF(BgL_optz00_192,
(int)(((long)1))); 
{ /* Ieee/string.scm 1202 */
int BgL_auxz00_10008;
{ /* Ieee/string.scm 1202 */
obj_t BgL_auxz00_10016;obj_t BgL_auxz00_10009;
if(
STRINGP(BgL_arg1845z00_1582))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_10016 = BgL_arg1845z00_1582
; }  else 
{ 
obj_t BgL_auxz00_10019;
BgL_auxz00_10019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1845z00_1582); 
FAILURE(BgL_auxz00_10019,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1842z00_1581))
{ /* Ieee/string.scm 1202 */
BgL_auxz00_10009 = BgL_arg1842z00_1581
; }  else 
{ 
obj_t BgL_auxz00_10012;
BgL_auxz00_10012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48652)), BGl_string3655z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1842z00_1581); 
FAILURE(BgL_auxz00_10012,BFALSE,BFALSE);} 
BgL_auxz00_10008 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10009, BgL_auxz00_10016, BgL_start1z00_1577, BgL_end1z00_1578, BgL_start2z00_1579, BgL_end2z00_1580); } 
return 
BINT(BgL_auxz00_10008);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1202 */
obj_t BgL_arg1846z00_1583;int BgL_arg1848z00_1585;
BgL_arg1846z00_1583 = BGl_symbol3653z00zz__r4_strings_6_7z00; 
BgL_arg1848z00_1585 = 
VECTOR_LENGTH(BgL_optz00_192); 
return 
BGl_errorz00zz__errorz00(BgL_arg1846z00_1583, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1848z00_1585));} } } } } } 
}



/* string-suffix-length-ci */
BGL_EXPORTED_DEF int BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_186, obj_t BgL_s2z00_187, obj_t BgL_start1z00_188, obj_t BgL_end1z00_189, obj_t BgL_start2z00_190, obj_t BgL_end2z00_191)
{ AN_OBJECT;
{ /* Ieee/string.scm 1202 */
{ /* Ieee/string.scm 1204 */
long BgL_l1z00_1586;
BgL_l1z00_1586 = 
STRING_LENGTH(BgL_s1z00_186); 
{ /* Ieee/string.scm 1204 */
long BgL_l2z00_1587;
BgL_l2z00_1587 = 
STRING_LENGTH(BgL_s2z00_187); 
{ /* Ieee/string.scm 1205 */
obj_t BgL_b1z00_1588;
{ /* Ieee/string.scm 1206 */
obj_t BgL_procz00_3233;
BgL_procz00_3233 = BGl_symbol3656z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_189))
{ /* Ieee/string.scm 1206 */
bool_t BgL_testz00_10034;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3242;
{ /* Ieee/string.scm 1206 */
obj_t BgL_auxz00_10035;
if(
INTEGERP(BgL_end1z00_189))
{ /* Ieee/string.scm 1206 */
BgL_auxz00_10035 = BgL_end1z00_189
; }  else 
{ 
obj_t BgL_auxz00_10038;
BgL_auxz00_10038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48828)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_189); 
FAILURE(BgL_auxz00_10038,BFALSE,BFALSE);} 
BgL_n1z00_3242 = 
(long)CINT(BgL_auxz00_10035); } 
BgL_testz00_10034 = 
(BgL_n1z00_3242<=((long)0)); } 
if(BgL_testz00_10034)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1588 = 
BGl_errorz00zz__errorz00(BgL_procz00_3233, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_189); }  else 
{ /* Ieee/string.scm 1206 */
bool_t BgL_testz00_10046;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3244;
{ /* Ieee/string.scm 1206 */
obj_t BgL_auxz00_10047;
if(
INTEGERP(BgL_end1z00_189))
{ /* Ieee/string.scm 1206 */
BgL_auxz00_10047 = BgL_end1z00_189
; }  else 
{ 
obj_t BgL_auxz00_10050;
BgL_auxz00_10050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48828)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_189); 
FAILURE(BgL_auxz00_10050,BFALSE,BFALSE);} 
BgL_n1z00_3244 = 
(long)CINT(BgL_auxz00_10047); } 
BgL_testz00_10046 = 
(BgL_n1z00_3244>BgL_l1z00_1586); } 
if(BgL_testz00_10046)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1588 = 
BGl_errorz00zz__errorz00(BgL_procz00_3233, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_189); }  else 
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1588 = BgL_end1z00_189; } } }  else 
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1588 = 
BINT(BgL_l1z00_1586); } } 
{ /* Ieee/string.scm 1206 */
obj_t BgL_b2z00_1589;
{ /* Ieee/string.scm 1207 */
obj_t BgL_procz00_3246;
BgL_procz00_3246 = BGl_symbol3656z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_191))
{ /* Ieee/string.scm 1207 */
bool_t BgL_testz00_10061;
{ /* Ieee/string.scm 1207 */
long BgL_n1z00_3255;
{ /* Ieee/string.scm 1207 */
obj_t BgL_auxz00_10062;
if(
INTEGERP(BgL_end2z00_191))
{ /* Ieee/string.scm 1207 */
BgL_auxz00_10062 = BgL_end2z00_191
; }  else 
{ 
obj_t BgL_auxz00_10065;
BgL_auxz00_10065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48896)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_191); 
FAILURE(BgL_auxz00_10065,BFALSE,BFALSE);} 
BgL_n1z00_3255 = 
(long)CINT(BgL_auxz00_10062); } 
BgL_testz00_10061 = 
(BgL_n1z00_3255<=((long)0)); } 
if(BgL_testz00_10061)
{ /* Ieee/string.scm 1207 */
BgL_b2z00_1589 = 
BGl_errorz00zz__errorz00(BgL_procz00_3246, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_191); }  else 
{ /* Ieee/string.scm 1207 */
bool_t BgL_testz00_10073;
{ /* Ieee/string.scm 1207 */
long BgL_n1z00_3257;
{ /* Ieee/string.scm 1207 */
obj_t BgL_auxz00_10074;
if(
INTEGERP(BgL_end2z00_191))
{ /* Ieee/string.scm 1207 */
BgL_auxz00_10074 = BgL_end2z00_191
; }  else 
{ 
obj_t BgL_auxz00_10077;
BgL_auxz00_10077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48896)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_191); 
FAILURE(BgL_auxz00_10077,BFALSE,BFALSE);} 
BgL_n1z00_3257 = 
(long)CINT(BgL_auxz00_10074); } 
BgL_testz00_10073 = 
(BgL_n1z00_3257>BgL_l2z00_1587); } 
if(BgL_testz00_10073)
{ /* Ieee/string.scm 1207 */
BgL_b2z00_1589 = 
BGl_errorz00zz__errorz00(BgL_procz00_3246, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_191); }  else 
{ /* Ieee/string.scm 1207 */
BgL_b2z00_1589 = BgL_end2z00_191; } } }  else 
{ /* Ieee/string.scm 1207 */
BgL_b2z00_1589 = 
BINT(BgL_l2z00_1587); } } 
{ /* Ieee/string.scm 1207 */
obj_t BgL_e1z00_1590;
{ /* Ieee/string.scm 1208 */
obj_t BgL_procz00_3259;
BgL_procz00_3259 = BGl_symbol3656z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_188))
{ /* Ieee/string.scm 1208 */
bool_t BgL_testz00_10088;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3268;
{ /* Ieee/string.scm 1208 */
obj_t BgL_auxz00_10089;
if(
INTEGERP(BgL_start1z00_188))
{ /* Ieee/string.scm 1208 */
BgL_auxz00_10089 = BgL_start1z00_188
; }  else 
{ 
obj_t BgL_auxz00_10092;
BgL_auxz00_10092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48964)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_188); 
FAILURE(BgL_auxz00_10092,BFALSE,BFALSE);} 
BgL_n1z00_3268 = 
(long)CINT(BgL_auxz00_10089); } 
BgL_testz00_10088 = 
(BgL_n1z00_3268<((long)0)); } 
if(BgL_testz00_10088)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1590 = 
BGl_errorz00zz__errorz00(BgL_procz00_3259, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_188); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_testz00_10100;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3270;
{ /* Ieee/string.scm 1208 */
obj_t BgL_auxz00_10101;
if(
INTEGERP(BgL_start1z00_188))
{ /* Ieee/string.scm 1208 */
BgL_auxz00_10101 = BgL_start1z00_188
; }  else 
{ 
obj_t BgL_auxz00_10104;
BgL_auxz00_10104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)48964)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_188); 
FAILURE(BgL_auxz00_10104,BFALSE,BFALSE);} 
BgL_n1z00_3270 = 
(long)CINT(BgL_auxz00_10101); } 
BgL_testz00_10100 = 
(BgL_n1z00_3270>=BgL_l1z00_1586); } 
if(BgL_testz00_10100)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1590 = 
BGl_errorz00zz__errorz00(BgL_procz00_3259, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_188); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1590 = BgL_start1z00_188; } } }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1590 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1208 */
obj_t BgL_e2z00_1591;
{ /* Ieee/string.scm 1209 */
obj_t BgL_procz00_3272;
BgL_procz00_3272 = BGl_symbol3656z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_190))
{ /* Ieee/string.scm 1209 */
bool_t BgL_testz00_10115;
{ /* Ieee/string.scm 1209 */
long BgL_n1z00_3281;
{ /* Ieee/string.scm 1209 */
obj_t BgL_auxz00_10116;
if(
INTEGERP(BgL_start2z00_190))
{ /* Ieee/string.scm 1209 */
BgL_auxz00_10116 = BgL_start2z00_190
; }  else 
{ 
obj_t BgL_auxz00_10119;
BgL_auxz00_10119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49037)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_190); 
FAILURE(BgL_auxz00_10119,BFALSE,BFALSE);} 
BgL_n1z00_3281 = 
(long)CINT(BgL_auxz00_10116); } 
BgL_testz00_10115 = 
(BgL_n1z00_3281<((long)0)); } 
if(BgL_testz00_10115)
{ /* Ieee/string.scm 1209 */
BgL_e2z00_1591 = 
BGl_errorz00zz__errorz00(BgL_procz00_3272, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_190); }  else 
{ /* Ieee/string.scm 1209 */
bool_t BgL_testz00_10127;
{ /* Ieee/string.scm 1209 */
long BgL_n1z00_3283;
{ /* Ieee/string.scm 1209 */
obj_t BgL_auxz00_10128;
if(
INTEGERP(BgL_start2z00_190))
{ /* Ieee/string.scm 1209 */
BgL_auxz00_10128 = BgL_start2z00_190
; }  else 
{ 
obj_t BgL_auxz00_10131;
BgL_auxz00_10131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49037)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_190); 
FAILURE(BgL_auxz00_10131,BFALSE,BFALSE);} 
BgL_n1z00_3283 = 
(long)CINT(BgL_auxz00_10128); } 
BgL_testz00_10127 = 
(BgL_n1z00_3283>=BgL_l2z00_1587); } 
if(BgL_testz00_10127)
{ /* Ieee/string.scm 1209 */
BgL_e2z00_1591 = 
BGl_errorz00zz__errorz00(BgL_procz00_3272, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_190); }  else 
{ /* Ieee/string.scm 1209 */
BgL_e2z00_1591 = BgL_start2z00_190; } } }  else 
{ /* Ieee/string.scm 1209 */
BgL_e2z00_1591 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1209 */

{ 
long BgL_i1z00_1595;long BgL_i2z00_1596;
{ /* Ieee/string.scm 1210 */
long BgL_auxz00_10140;
{ /* Ieee/string.scm 1210 */
long BgL_za71za7_3285;
{ /* Ieee/string.scm 1210 */
obj_t BgL_auxz00_10211;
if(
INTEGERP(BgL_b1z00_1588))
{ /* Ieee/string.scm 1210 */
BgL_auxz00_10211 = BgL_b1z00_1588
; }  else 
{ 
obj_t BgL_auxz00_10214;
BgL_auxz00_10214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49125)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1588); 
FAILURE(BgL_auxz00_10214,BFALSE,BFALSE);} 
BgL_za71za7_3285 = 
(long)CINT(BgL_auxz00_10211); } 
BgL_i1z00_1595 = 
(BgL_za71za7_3285-((long)1)); } 
{ /* Ieee/string.scm 1211 */
long BgL_za71za7_3287;
{ /* Ieee/string.scm 1211 */
obj_t BgL_auxz00_10220;
if(
INTEGERP(BgL_b2z00_1589))
{ /* Ieee/string.scm 1211 */
BgL_auxz00_10220 = BgL_b2z00_1589
; }  else 
{ 
obj_t BgL_auxz00_10223;
BgL_auxz00_10223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49144)), BGl_string3657z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b2z00_1589); 
FAILURE(BgL_auxz00_10223,BFALSE,BFALSE);} 
BgL_za71za7_3287 = 
(long)CINT(BgL_auxz00_10220); } 
BgL_i2z00_1596 = 
(BgL_za71za7_3287-((long)1)); } 
BgL_zc3anonymousza31849ze3z83_1597:
{ /* Ieee/string.scm 1213 */
bool_t BgL_testz00_10141;
{ /* Ieee/string.scm 1213 */
bool_t BgL_testz00_10142;
{ /* Ieee/string.scm 1213 */
long BgL_n2z00_3290;
{ /* Ieee/string.scm 1213 */
obj_t BgL_auxz00_10143;
if(
INTEGERP(BgL_e1z00_1590))
{ /* Ieee/string.scm 1213 */
BgL_auxz00_10143 = BgL_e1z00_1590
; }  else 
{ 
obj_t BgL_auxz00_10146;
BgL_auxz00_10146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49183)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1590); 
FAILURE(BgL_auxz00_10146,BFALSE,BFALSE);} 
BgL_n2z00_3290 = 
(long)CINT(BgL_auxz00_10143); } 
BgL_testz00_10142 = 
(BgL_i1z00_1595<BgL_n2z00_3290); } 
if(BgL_testz00_10142)
{ /* Ieee/string.scm 1213 */
BgL_testz00_10141 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1213 */
long BgL_n2z00_3292;
{ /* Ieee/string.scm 1213 */
obj_t BgL_auxz00_10152;
if(
INTEGERP(BgL_e2z00_1591))
{ /* Ieee/string.scm 1213 */
BgL_auxz00_10152 = BgL_e2z00_1591
; }  else 
{ 
obj_t BgL_auxz00_10155;
BgL_auxz00_10155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49195)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1591); 
FAILURE(BgL_auxz00_10155,BFALSE,BFALSE);} 
BgL_n2z00_3292 = 
(long)CINT(BgL_auxz00_10152); } 
BgL_testz00_10141 = 
(BgL_i2z00_1596<BgL_n2z00_3292); } } 
if(BgL_testz00_10141)
{ /* Ieee/string.scm 1214 */
long BgL_za71za7_3295;
{ /* Ieee/string.scm 1214 */
obj_t BgL_auxz00_10161;
if(
INTEGERP(BgL_b1z00_1588))
{ /* Ieee/string.scm 1214 */
BgL_auxz00_10161 = BgL_b1z00_1588
; }  else 
{ 
obj_t BgL_auxz00_10164;
BgL_auxz00_10164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49206)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1588); 
FAILURE(BgL_auxz00_10164,BFALSE,BFALSE);} 
BgL_za71za7_3295 = 
(long)CINT(BgL_auxz00_10161); } 
BgL_auxz00_10140 = 
(BgL_za71za7_3295-
(BgL_i1z00_1595+((long)1))); }  else 
{ /* Ieee/string.scm 1215 */
bool_t BgL_testz00_10171;
{ /* Ieee/string.scm 1215 */
unsigned char BgL_auxz00_10184;unsigned char BgL_auxz00_10172;
{ /* Ieee/string.scm 1215 */
unsigned char BgL_auxz00_10185;
{ /* Ieee/string.scm 1215 */
long BgL_l2535z00_4368;
BgL_l2535z00_4368 = 
STRING_LENGTH(BgL_s2z00_187); 
if(
BOUND_CHECK(BgL_i2z00_1596, BgL_l2535z00_4368))
{ /* Ieee/string.scm 1215 */
BgL_auxz00_10185 = 
STRING_REF(BgL_s2z00_187, BgL_i2z00_1596)
; }  else 
{ 
obj_t BgL_auxz00_10190;
BgL_auxz00_10190 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49263)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2z00_1596), BgL_s2z00_187); 
FAILURE(BgL_auxz00_10190,BFALSE,BFALSE);} } 
BgL_auxz00_10184 = 
toupper(BgL_auxz00_10185); } 
{ /* Ieee/string.scm 1215 */
unsigned char BgL_auxz00_10173;
{ /* Ieee/string.scm 1215 */
long BgL_l2531z00_4364;
BgL_l2531z00_4364 = 
STRING_LENGTH(BgL_s1z00_186); 
if(
BOUND_CHECK(BgL_i1z00_1595, BgL_l2531z00_4364))
{ /* Ieee/string.scm 1215 */
BgL_auxz00_10173 = 
STRING_REF(BgL_s1z00_186, BgL_i1z00_1595)
; }  else 
{ 
obj_t BgL_auxz00_10178;
BgL_auxz00_10178 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49244)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i1z00_1595), BgL_s1z00_186); 
FAILURE(BgL_auxz00_10178,BFALSE,BFALSE);} } 
BgL_auxz00_10172 = 
toupper(BgL_auxz00_10173); } 
BgL_testz00_10171 = 
(BgL_auxz00_10172==BgL_auxz00_10184); } 
if(BgL_testz00_10171)
{ 
long BgL_i2z00_10199;long BgL_i1z00_10197;
BgL_i1z00_10197 = 
(BgL_i1z00_1595-((long)1)); 
BgL_i2z00_10199 = 
(BgL_i2z00_1596-((long)1)); 
BgL_i2z00_1596 = BgL_i2z00_10199; 
BgL_i1z00_1595 = BgL_i1z00_10197; 
goto BgL_zc3anonymousza31849ze3z83_1597;}  else 
{ /* Ieee/string.scm 1218 */
long BgL_za71za7_3316;
{ /* Ieee/string.scm 1218 */
obj_t BgL_auxz00_10201;
if(
INTEGERP(BgL_b1z00_1588))
{ /* Ieee/string.scm 1218 */
BgL_auxz00_10201 = BgL_b1z00_1588
; }  else 
{ 
obj_t BgL_auxz00_10204;
BgL_auxz00_10204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49336)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1588); 
FAILURE(BgL_auxz00_10204,BFALSE,BFALSE);} 
BgL_za71za7_3316 = 
(long)CINT(BgL_auxz00_10201); } 
BgL_auxz00_10140 = 
(BgL_za71za7_3316-
(BgL_i1z00_1595+((long)1))); } } } 
return 
(int)(BgL_auxz00_10140);} } } } } } } } } } 
}



/* _string-prefix? */
obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_201, obj_t BgL_optz00_200)
{ AN_OBJECT;
{ /* Ieee/string.scm 1223 */
{ /* Ieee/string.scm 1223 */
obj_t BgL_s1z00_1608;obj_t BgL_s2z00_1609;
BgL_s1z00_1608 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_s2z00_1609 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1223 */
int BgL_aux1204z00_1611;
BgL_aux1204z00_1611 = 
VECTOR_LENGTH(BgL_optz00_200); 
switch( 
(long)(BgL_aux1204z00_1611)) { case ((long)2) : 

{ /* Ieee/string.scm 1223 */

{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1860z00_1617;obj_t BgL_arg1861z00_1618;
BgL_arg1860z00_1617 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_arg1861z00_1618 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ /* Ieee/string.scm 1223 */
bool_t BgL_auxz00_10239;
{ /* Ieee/string.scm 1223 */
obj_t BgL_auxz00_10247;obj_t BgL_auxz00_10240;
if(
STRINGP(BgL_arg1861z00_1618))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10247 = BgL_arg1861z00_1618
; }  else 
{ 
obj_t BgL_auxz00_10250;
BgL_auxz00_10250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1861z00_1618); 
FAILURE(BgL_auxz00_10250,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1860z00_1617))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10240 = BgL_arg1860z00_1617
; }  else 
{ 
obj_t BgL_auxz00_10243;
BgL_auxz00_10243 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1860z00_1617); 
FAILURE(BgL_auxz00_10243,BFALSE,BFALSE);} 
BgL_auxz00_10239 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10240, BgL_auxz00_10247, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10239);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1223 */
obj_t BgL_start1z00_1619;
BgL_start1z00_1619 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)2))); 
{ /* Ieee/string.scm 1223 */

{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1862z00_1623;obj_t BgL_arg1863z00_1624;
BgL_arg1862z00_1623 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_arg1863z00_1624 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ /* Ieee/string.scm 1223 */
bool_t BgL_auxz00_10262;
{ /* Ieee/string.scm 1223 */
obj_t BgL_auxz00_10270;obj_t BgL_auxz00_10263;
if(
STRINGP(BgL_arg1863z00_1624))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10270 = BgL_arg1863z00_1624
; }  else 
{ 
obj_t BgL_auxz00_10273;
BgL_auxz00_10273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1863z00_1624); 
FAILURE(BgL_auxz00_10273,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1862z00_1623))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10263 = BgL_arg1862z00_1623
; }  else 
{ 
obj_t BgL_auxz00_10266;
BgL_auxz00_10266 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1862z00_1623); 
FAILURE(BgL_auxz00_10266,BFALSE,BFALSE);} 
BgL_auxz00_10262 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10263, BgL_auxz00_10270, BgL_start1z00_1619, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10262);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1223 */
obj_t BgL_start1z00_1625;
BgL_start1z00_1625 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)2))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_end1z00_1626;
BgL_end1z00_1626 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)3))); 
{ /* Ieee/string.scm 1223 */

{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1864z00_1629;obj_t BgL_arg1865z00_1630;
BgL_arg1864z00_1629 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_arg1865z00_1630 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ /* Ieee/string.scm 1223 */
bool_t BgL_auxz00_10287;
{ /* Ieee/string.scm 1223 */
obj_t BgL_auxz00_10295;obj_t BgL_auxz00_10288;
if(
STRINGP(BgL_arg1865z00_1630))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10295 = BgL_arg1865z00_1630
; }  else 
{ 
obj_t BgL_auxz00_10298;
BgL_auxz00_10298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1865z00_1630); 
FAILURE(BgL_auxz00_10298,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1864z00_1629))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10288 = BgL_arg1864z00_1629
; }  else 
{ 
obj_t BgL_auxz00_10291;
BgL_auxz00_10291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1864z00_1629); 
FAILURE(BgL_auxz00_10291,BFALSE,BFALSE);} 
BgL_auxz00_10287 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10288, BgL_auxz00_10295, BgL_start1z00_1625, BgL_end1z00_1626, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10287);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1223 */
obj_t BgL_start1z00_1631;
BgL_start1z00_1631 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)2))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_end1z00_1632;
BgL_end1z00_1632 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)3))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_start2z00_1633;
BgL_start2z00_1633 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)4))); 
{ /* Ieee/string.scm 1223 */

{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1866z00_1635;obj_t BgL_arg1867z00_1636;
BgL_arg1866z00_1635 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_arg1867z00_1636 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ /* Ieee/string.scm 1223 */
bool_t BgL_auxz00_10314;
{ /* Ieee/string.scm 1223 */
obj_t BgL_auxz00_10322;obj_t BgL_auxz00_10315;
if(
STRINGP(BgL_arg1867z00_1636))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10322 = BgL_arg1867z00_1636
; }  else 
{ 
obj_t BgL_auxz00_10325;
BgL_auxz00_10325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1867z00_1636); 
FAILURE(BgL_auxz00_10325,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1866z00_1635))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10315 = BgL_arg1866z00_1635
; }  else 
{ 
obj_t BgL_auxz00_10318;
BgL_auxz00_10318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1866z00_1635); 
FAILURE(BgL_auxz00_10318,BFALSE,BFALSE);} 
BgL_auxz00_10314 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10315, BgL_auxz00_10322, BgL_start1z00_1631, BgL_end1z00_1632, BgL_start2z00_1633, BFALSE); } 
return 
BBOOL(BgL_auxz00_10314);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1223 */
obj_t BgL_start1z00_1637;
BgL_start1z00_1637 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)2))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_end1z00_1638;
BgL_end1z00_1638 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)3))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_start2z00_1639;
BgL_start2z00_1639 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)4))); 
{ /* Ieee/string.scm 1223 */
obj_t BgL_end2z00_1640;
BgL_end2z00_1640 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)5))); 
{ /* Ieee/string.scm 1223 */

{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1868z00_1641;obj_t BgL_arg1869z00_1642;
BgL_arg1868z00_1641 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)0))); 
BgL_arg1869z00_1642 = 
VECTOR_REF(BgL_optz00_200,
(int)(((long)1))); 
{ /* Ieee/string.scm 1223 */
bool_t BgL_auxz00_10343;
{ /* Ieee/string.scm 1223 */
obj_t BgL_auxz00_10351;obj_t BgL_auxz00_10344;
if(
STRINGP(BgL_arg1869z00_1642))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10351 = BgL_arg1869z00_1642
; }  else 
{ 
obj_t BgL_auxz00_10354;
BgL_auxz00_10354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1869z00_1642); 
FAILURE(BgL_auxz00_10354,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1868z00_1641))
{ /* Ieee/string.scm 1223 */
BgL_auxz00_10344 = BgL_arg1868z00_1641
; }  else 
{ 
obj_t BgL_auxz00_10347;
BgL_auxz00_10347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49584)), BGl_string3660z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1868z00_1641); 
FAILURE(BgL_auxz00_10347,BFALSE,BFALSE);} 
BgL_auxz00_10343 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10344, BgL_auxz00_10351, BgL_start1z00_1637, BgL_end1z00_1638, BgL_start2z00_1639, BgL_end2z00_1640); } 
return 
BBOOL(BgL_auxz00_10343);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1223 */
obj_t BgL_arg1870z00_1643;int BgL_arg1872z00_1645;
BgL_arg1870z00_1643 = BGl_symbol3658z00zz__r4_strings_6_7z00; 
BgL_arg1872z00_1645 = 
VECTOR_LENGTH(BgL_optz00_200); 
return 
BGl_errorz00zz__errorz00(BgL_arg1870z00_1643, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1872z00_1645));} } } } } } 
}



/* string-prefix? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t BgL_s1z00_194, obj_t BgL_s2z00_195, obj_t BgL_start1z00_196, obj_t BgL_end1z00_197, obj_t BgL_start2z00_198, obj_t BgL_end2z00_199)
{ AN_OBJECT;
{ /* Ieee/string.scm 1223 */
{ /* Ieee/string.scm 1225 */
long BgL_l1z00_1646;
BgL_l1z00_1646 = 
STRING_LENGTH(BgL_s1z00_194); 
{ /* Ieee/string.scm 1225 */
long BgL_l2z00_1647;
BgL_l2z00_1647 = 
STRING_LENGTH(BgL_s2z00_195); 
{ /* Ieee/string.scm 1226 */
obj_t BgL_e1z00_1648;
{ /* Ieee/string.scm 1227 */
obj_t BgL_procz00_3320;
BgL_procz00_3320 = BGl_symbol3661z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_197))
{ /* Ieee/string.scm 1227 */
bool_t BgL_testz00_10369;
{ /* Ieee/string.scm 1227 */
long BgL_n1z00_3329;
{ /* Ieee/string.scm 1227 */
obj_t BgL_auxz00_10370;
if(
INTEGERP(BgL_end1z00_197))
{ /* Ieee/string.scm 1227 */
BgL_auxz00_10370 = BgL_end1z00_197
; }  else 
{ 
obj_t BgL_auxz00_10373;
BgL_auxz00_10373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49751)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_197); 
FAILURE(BgL_auxz00_10373,BFALSE,BFALSE);} 
BgL_n1z00_3329 = 
(long)CINT(BgL_auxz00_10370); } 
BgL_testz00_10369 = 
(BgL_n1z00_3329<=((long)0)); } 
if(BgL_testz00_10369)
{ /* Ieee/string.scm 1227 */
BgL_e1z00_1648 = 
BGl_errorz00zz__errorz00(BgL_procz00_3320, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_197); }  else 
{ /* Ieee/string.scm 1227 */
bool_t BgL_testz00_10381;
{ /* Ieee/string.scm 1227 */
long BgL_n1z00_3331;
{ /* Ieee/string.scm 1227 */
obj_t BgL_auxz00_10382;
if(
INTEGERP(BgL_end1z00_197))
{ /* Ieee/string.scm 1227 */
BgL_auxz00_10382 = BgL_end1z00_197
; }  else 
{ 
obj_t BgL_auxz00_10385;
BgL_auxz00_10385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49751)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_197); 
FAILURE(BgL_auxz00_10385,BFALSE,BFALSE);} 
BgL_n1z00_3331 = 
(long)CINT(BgL_auxz00_10382); } 
BgL_testz00_10381 = 
(BgL_n1z00_3331>BgL_l1z00_1646); } 
if(BgL_testz00_10381)
{ /* Ieee/string.scm 1227 */
BgL_e1z00_1648 = 
BGl_errorz00zz__errorz00(BgL_procz00_3320, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_197); }  else 
{ /* Ieee/string.scm 1227 */
BgL_e1z00_1648 = BgL_end1z00_197; } } }  else 
{ /* Ieee/string.scm 1227 */
BgL_e1z00_1648 = 
BINT(BgL_l1z00_1646); } } 
{ /* Ieee/string.scm 1227 */
obj_t BgL_e2z00_1649;
{ /* Ieee/string.scm 1228 */
obj_t BgL_procz00_3333;
BgL_procz00_3333 = BGl_symbol3661z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_199))
{ /* Ieee/string.scm 1228 */
bool_t BgL_testz00_10396;
{ /* Ieee/string.scm 1228 */
long BgL_n1z00_3342;
{ /* Ieee/string.scm 1228 */
obj_t BgL_auxz00_10397;
if(
INTEGERP(BgL_end2z00_199))
{ /* Ieee/string.scm 1228 */
BgL_auxz00_10397 = BgL_end2z00_199
; }  else 
{ 
obj_t BgL_auxz00_10400;
BgL_auxz00_10400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49810)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_199); 
FAILURE(BgL_auxz00_10400,BFALSE,BFALSE);} 
BgL_n1z00_3342 = 
(long)CINT(BgL_auxz00_10397); } 
BgL_testz00_10396 = 
(BgL_n1z00_3342<=((long)0)); } 
if(BgL_testz00_10396)
{ /* Ieee/string.scm 1228 */
BgL_e2z00_1649 = 
BGl_errorz00zz__errorz00(BgL_procz00_3333, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_199); }  else 
{ /* Ieee/string.scm 1228 */
bool_t BgL_testz00_10408;
{ /* Ieee/string.scm 1228 */
long BgL_n1z00_3344;
{ /* Ieee/string.scm 1228 */
obj_t BgL_auxz00_10409;
if(
INTEGERP(BgL_end2z00_199))
{ /* Ieee/string.scm 1228 */
BgL_auxz00_10409 = BgL_end2z00_199
; }  else 
{ 
obj_t BgL_auxz00_10412;
BgL_auxz00_10412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49810)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_199); 
FAILURE(BgL_auxz00_10412,BFALSE,BFALSE);} 
BgL_n1z00_3344 = 
(long)CINT(BgL_auxz00_10409); } 
BgL_testz00_10408 = 
(BgL_n1z00_3344>BgL_l2z00_1647); } 
if(BgL_testz00_10408)
{ /* Ieee/string.scm 1228 */
BgL_e2z00_1649 = 
BGl_errorz00zz__errorz00(BgL_procz00_3333, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_199); }  else 
{ /* Ieee/string.scm 1228 */
BgL_e2z00_1649 = BgL_end2z00_199; } } }  else 
{ /* Ieee/string.scm 1228 */
BgL_e2z00_1649 = 
BINT(BgL_l2z00_1647); } } 
{ /* Ieee/string.scm 1228 */
obj_t BgL_b1z00_1650;
{ /* Ieee/string.scm 1229 */
obj_t BgL_procz00_3346;
BgL_procz00_3346 = BGl_symbol3661z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_196))
{ /* Ieee/string.scm 1229 */
bool_t BgL_testz00_10423;
{ /* Ieee/string.scm 1229 */
long BgL_n1z00_3355;
{ /* Ieee/string.scm 1229 */
obj_t BgL_auxz00_10424;
if(
INTEGERP(BgL_start1z00_196))
{ /* Ieee/string.scm 1229 */
BgL_auxz00_10424 = BgL_start1z00_196
; }  else 
{ 
obj_t BgL_auxz00_10427;
BgL_auxz00_10427 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49869)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_196); 
FAILURE(BgL_auxz00_10427,BFALSE,BFALSE);} 
BgL_n1z00_3355 = 
(long)CINT(BgL_auxz00_10424); } 
BgL_testz00_10423 = 
(BgL_n1z00_3355<((long)0)); } 
if(BgL_testz00_10423)
{ /* Ieee/string.scm 1229 */
BgL_b1z00_1650 = 
BGl_errorz00zz__errorz00(BgL_procz00_3346, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_196); }  else 
{ /* Ieee/string.scm 1229 */
bool_t BgL_testz00_10435;
{ /* Ieee/string.scm 1229 */
long BgL_n1z00_3357;
{ /* Ieee/string.scm 1229 */
obj_t BgL_auxz00_10436;
if(
INTEGERP(BgL_start1z00_196))
{ /* Ieee/string.scm 1229 */
BgL_auxz00_10436 = BgL_start1z00_196
; }  else 
{ 
obj_t BgL_auxz00_10439;
BgL_auxz00_10439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49869)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_196); 
FAILURE(BgL_auxz00_10439,BFALSE,BFALSE);} 
BgL_n1z00_3357 = 
(long)CINT(BgL_auxz00_10436); } 
BgL_testz00_10435 = 
(BgL_n1z00_3357>=BgL_l1z00_1646); } 
if(BgL_testz00_10435)
{ /* Ieee/string.scm 1229 */
BgL_b1z00_1650 = 
BGl_errorz00zz__errorz00(BgL_procz00_3346, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_196); }  else 
{ /* Ieee/string.scm 1229 */
BgL_b1z00_1650 = BgL_start1z00_196; } } }  else 
{ /* Ieee/string.scm 1229 */
BgL_b1z00_1650 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1229 */
obj_t BgL_b2z00_1651;
{ /* Ieee/string.scm 1230 */
obj_t BgL_procz00_3359;
BgL_procz00_3359 = BGl_symbol3661z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_198))
{ /* Ieee/string.scm 1230 */
bool_t BgL_testz00_10450;
{ /* Ieee/string.scm 1230 */
long BgL_n1z00_3368;
{ /* Ieee/string.scm 1230 */
obj_t BgL_auxz00_10451;
if(
INTEGERP(BgL_start2z00_198))
{ /* Ieee/string.scm 1230 */
BgL_auxz00_10451 = BgL_start2z00_198
; }  else 
{ 
obj_t BgL_auxz00_10454;
BgL_auxz00_10454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49933)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_198); 
FAILURE(BgL_auxz00_10454,BFALSE,BFALSE);} 
BgL_n1z00_3368 = 
(long)CINT(BgL_auxz00_10451); } 
BgL_testz00_10450 = 
(BgL_n1z00_3368<((long)0)); } 
if(BgL_testz00_10450)
{ /* Ieee/string.scm 1230 */
BgL_b2z00_1651 = 
BGl_errorz00zz__errorz00(BgL_procz00_3359, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_198); }  else 
{ /* Ieee/string.scm 1230 */
bool_t BgL_testz00_10462;
{ /* Ieee/string.scm 1230 */
long BgL_n1z00_3370;
{ /* Ieee/string.scm 1230 */
obj_t BgL_auxz00_10463;
if(
INTEGERP(BgL_start2z00_198))
{ /* Ieee/string.scm 1230 */
BgL_auxz00_10463 = BgL_start2z00_198
; }  else 
{ 
obj_t BgL_auxz00_10466;
BgL_auxz00_10466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)49933)), BGl_string3662z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_198); 
FAILURE(BgL_auxz00_10466,BFALSE,BFALSE);} 
BgL_n1z00_3370 = 
(long)CINT(BgL_auxz00_10463); } 
BgL_testz00_10462 = 
(BgL_n1z00_3370>=BgL_l2z00_1647); } 
if(BgL_testz00_10462)
{ /* Ieee/string.scm 1230 */
BgL_b2z00_1651 = 
BGl_errorz00zz__errorz00(BgL_procz00_3359, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_198); }  else 
{ /* Ieee/string.scm 1230 */
BgL_b2z00_1651 = BgL_start2z00_198; } } }  else 
{ /* Ieee/string.scm 1230 */
BgL_b2z00_1651 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1230 */

{ 
obj_t BgL_i1z00_1653;obj_t BgL_i2z00_1654;
BgL_i1z00_1653 = BgL_b1z00_1650; 
BgL_i2z00_1654 = BgL_b2z00_1651; 
BgL_zc3anonymousza31873ze3z83_1655:
{ /* Ieee/string.scm 1234 */
bool_t BgL_testz00_10475;
{ /* Ieee/string.scm 1234 */
long BgL_n1z00_3372;long BgL_n2z00_3373;
{ /* Ieee/string.scm 1234 */
obj_t BgL_auxz00_10476;
if(
INTEGERP(BgL_i1z00_1653))
{ /* Ieee/string.scm 1234 */
BgL_auxz00_10476 = BgL_i1z00_1653
; }  else 
{ 
obj_t BgL_auxz00_10479;
BgL_auxz00_10479 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50047)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1653); 
FAILURE(BgL_auxz00_10479,BFALSE,BFALSE);} 
BgL_n1z00_3372 = 
(long)CINT(BgL_auxz00_10476); } 
{ /* Ieee/string.scm 1234 */
obj_t BgL_auxz00_10484;
if(
INTEGERP(BgL_e1z00_1648))
{ /* Ieee/string.scm 1234 */
BgL_auxz00_10484 = BgL_e1z00_1648
; }  else 
{ 
obj_t BgL_auxz00_10487;
BgL_auxz00_10487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50050)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1648); 
FAILURE(BgL_auxz00_10487,BFALSE,BFALSE);} 
BgL_n2z00_3373 = 
(long)CINT(BgL_auxz00_10484); } 
BgL_testz00_10475 = 
(BgL_n1z00_3372==BgL_n2z00_3373); } 
if(BgL_testz00_10475)
{ /* Ieee/string.scm 1234 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1236 */
bool_t BgL_testz00_10493;
{ /* Ieee/string.scm 1236 */
long BgL_n1z00_3374;long BgL_n2z00_3375;
{ /* Ieee/string.scm 1236 */
obj_t BgL_auxz00_10494;
if(
INTEGERP(BgL_i2z00_1654))
{ /* Ieee/string.scm 1236 */
BgL_auxz00_10494 = BgL_i2z00_1654
; }  else 
{ 
obj_t BgL_auxz00_10497;
BgL_auxz00_10497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50075)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1654); 
FAILURE(BgL_auxz00_10497,BFALSE,BFALSE);} 
BgL_n1z00_3374 = 
(long)CINT(BgL_auxz00_10494); } 
{ /* Ieee/string.scm 1236 */
obj_t BgL_auxz00_10502;
if(
INTEGERP(BgL_e2z00_1649))
{ /* Ieee/string.scm 1236 */
BgL_auxz00_10502 = BgL_e2z00_1649
; }  else 
{ 
obj_t BgL_auxz00_10505;
BgL_auxz00_10505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50078)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1649); 
FAILURE(BgL_auxz00_10505,BFALSE,BFALSE);} 
BgL_n2z00_3375 = 
(long)CINT(BgL_auxz00_10502); } 
BgL_testz00_10493 = 
(BgL_n1z00_3374==BgL_n2z00_3375); } 
if(BgL_testz00_10493)
{ /* Ieee/string.scm 1236 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1238 */
bool_t BgL_testz00_10511;
{ /* Ieee/string.scm 1238 */
unsigned char BgL_auxz00_10530;unsigned char BgL_auxz00_10512;
{ /* Ieee/string.scm 1238 */
long BgL_kz00_3379;
{ /* Ieee/string.scm 1238 */
obj_t BgL_auxz00_10531;
if(
INTEGERP(BgL_i2z00_1654))
{ /* Ieee/string.scm 1238 */
BgL_auxz00_10531 = BgL_i2z00_1654
; }  else 
{ 
obj_t BgL_auxz00_10534;
BgL_auxz00_10534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50140)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1654); 
FAILURE(BgL_auxz00_10534,BFALSE,BFALSE);} 
BgL_kz00_3379 = 
(long)CINT(BgL_auxz00_10531); } 
{ /* Ieee/string.scm 1238 */
long BgL_l2543z00_4376;
BgL_l2543z00_4376 = 
STRING_LENGTH(BgL_s2z00_195); 
if(
BOUND_CHECK(BgL_kz00_3379, BgL_l2543z00_4376))
{ /* Ieee/string.scm 1238 */
BgL_auxz00_10530 = 
STRING_REF(BgL_s2z00_195, BgL_kz00_3379)
; }  else 
{ 
obj_t BgL_auxz00_10543;
BgL_auxz00_10543 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50125)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3379), BgL_s2z00_195); 
FAILURE(BgL_auxz00_10543,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1238 */
long BgL_kz00_3377;
{ /* Ieee/string.scm 1238 */
obj_t BgL_auxz00_10513;
if(
INTEGERP(BgL_i1z00_1653))
{ /* Ieee/string.scm 1238 */
BgL_auxz00_10513 = BgL_i1z00_1653
; }  else 
{ 
obj_t BgL_auxz00_10516;
BgL_auxz00_10516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50121)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1653); 
FAILURE(BgL_auxz00_10516,BFALSE,BFALSE);} 
BgL_kz00_3377 = 
(long)CINT(BgL_auxz00_10513); } 
{ /* Ieee/string.scm 1238 */
long BgL_l2539z00_4372;
BgL_l2539z00_4372 = 
STRING_LENGTH(BgL_s1z00_194); 
if(
BOUND_CHECK(BgL_kz00_3377, BgL_l2539z00_4372))
{ /* Ieee/string.scm 1238 */
BgL_auxz00_10512 = 
STRING_REF(BgL_s1z00_194, BgL_kz00_3377)
; }  else 
{ 
obj_t BgL_auxz00_10525;
BgL_auxz00_10525 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50106)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3377), BgL_s1z00_194); 
FAILURE(BgL_auxz00_10525,BFALSE,BFALSE);} } } 
BgL_testz00_10511 = 
(BgL_auxz00_10512==BgL_auxz00_10530); } 
if(BgL_testz00_10511)
{ 
obj_t BgL_i2z00_10560;obj_t BgL_i1z00_10549;
{ /* Ieee/string.scm 1239 */
long BgL_za71za7_3382;
{ /* Ieee/string.scm 1239 */
obj_t BgL_auxz00_10550;
if(
INTEGERP(BgL_i1z00_1653))
{ /* Ieee/string.scm 1239 */
BgL_auxz00_10550 = BgL_i1z00_1653
; }  else 
{ 
obj_t BgL_auxz00_10553;
BgL_auxz00_10553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50157)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1653); 
FAILURE(BgL_auxz00_10553,BFALSE,BFALSE);} 
BgL_za71za7_3382 = 
(long)CINT(BgL_auxz00_10550); } 
BgL_i1z00_10549 = 
BINT(
(BgL_za71za7_3382+((long)1))); } 
{ /* Ieee/string.scm 1239 */
long BgL_za71za7_3384;
{ /* Ieee/string.scm 1239 */
obj_t BgL_auxz00_10561;
if(
INTEGERP(BgL_i2z00_1654))
{ /* Ieee/string.scm 1239 */
BgL_auxz00_10561 = BgL_i2z00_1654
; }  else 
{ 
obj_t BgL_auxz00_10564;
BgL_auxz00_10564 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50168)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1654); 
FAILURE(BgL_auxz00_10564,BFALSE,BFALSE);} 
BgL_za71za7_3384 = 
(long)CINT(BgL_auxz00_10561); } 
BgL_i2z00_10560 = 
BINT(
(BgL_za71za7_3384+((long)1))); } 
BgL_i2z00_1654 = BgL_i2z00_10560; 
BgL_i1z00_1653 = BgL_i1z00_10549; 
goto BgL_zc3anonymousza31873ze3z83_1655;}  else 
{ /* Ieee/string.scm 1238 */
return ((bool_t)0);} } } } } } } } } } } } } 
}



/* _string-prefix-ci? */
obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_209, obj_t BgL_optz00_208)
{ AN_OBJECT;
{ /* Ieee/string.scm 1246 */
{ /* Ieee/string.scm 1246 */
obj_t BgL_s1z00_1664;obj_t BgL_s2z00_1665;
BgL_s1z00_1664 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_s2z00_1665 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1246 */
int BgL_aux1206z00_1667;
BgL_aux1206z00_1667 = 
VECTOR_LENGTH(BgL_optz00_208); 
switch( 
(long)(BgL_aux1206z00_1667)) { case ((long)2) : 

{ /* Ieee/string.scm 1246 */

{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1882z00_1673;obj_t BgL_arg1883z00_1674;
BgL_arg1882z00_1673 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_arg1883z00_1674 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ /* Ieee/string.scm 1246 */
bool_t BgL_auxz00_10580;
{ /* Ieee/string.scm 1246 */
obj_t BgL_auxz00_10588;obj_t BgL_auxz00_10581;
if(
STRINGP(BgL_arg1883z00_1674))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10588 = BgL_arg1883z00_1674
; }  else 
{ 
obj_t BgL_auxz00_10591;
BgL_auxz00_10591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1883z00_1674); 
FAILURE(BgL_auxz00_10591,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1882z00_1673))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10581 = BgL_arg1882z00_1673
; }  else 
{ 
obj_t BgL_auxz00_10584;
BgL_auxz00_10584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1882z00_1673); 
FAILURE(BgL_auxz00_10584,BFALSE,BFALSE);} 
BgL_auxz00_10580 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_10581, BgL_auxz00_10588, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10580);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1246 */
obj_t BgL_start1z00_1675;
BgL_start1z00_1675 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)2))); 
{ /* Ieee/string.scm 1246 */

{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1884z00_1679;obj_t BgL_arg1886z00_1680;
BgL_arg1884z00_1679 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_arg1886z00_1680 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ /* Ieee/string.scm 1246 */
bool_t BgL_auxz00_10603;
{ /* Ieee/string.scm 1246 */
obj_t BgL_auxz00_10611;obj_t BgL_auxz00_10604;
if(
STRINGP(BgL_arg1886z00_1680))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10611 = BgL_arg1886z00_1680
; }  else 
{ 
obj_t BgL_auxz00_10614;
BgL_auxz00_10614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1886z00_1680); 
FAILURE(BgL_auxz00_10614,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1884z00_1679))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10604 = BgL_arg1884z00_1679
; }  else 
{ 
obj_t BgL_auxz00_10607;
BgL_auxz00_10607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1884z00_1679); 
FAILURE(BgL_auxz00_10607,BFALSE,BFALSE);} 
BgL_auxz00_10603 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_10604, BgL_auxz00_10611, BgL_start1z00_1675, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10603);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1246 */
obj_t BgL_start1z00_1681;
BgL_start1z00_1681 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)2))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_end1z00_1682;
BgL_end1z00_1682 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)3))); 
{ /* Ieee/string.scm 1246 */

{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1887z00_1685;obj_t BgL_arg1888z00_1686;
BgL_arg1887z00_1685 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_arg1888z00_1686 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ /* Ieee/string.scm 1246 */
bool_t BgL_auxz00_10628;
{ /* Ieee/string.scm 1246 */
obj_t BgL_auxz00_10636;obj_t BgL_auxz00_10629;
if(
STRINGP(BgL_arg1888z00_1686))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10636 = BgL_arg1888z00_1686
; }  else 
{ 
obj_t BgL_auxz00_10639;
BgL_auxz00_10639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1888z00_1686); 
FAILURE(BgL_auxz00_10639,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1887z00_1685))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10629 = BgL_arg1887z00_1685
; }  else 
{ 
obj_t BgL_auxz00_10632;
BgL_auxz00_10632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1887z00_1685); 
FAILURE(BgL_auxz00_10632,BFALSE,BFALSE);} 
BgL_auxz00_10628 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_10629, BgL_auxz00_10636, BgL_start1z00_1681, BgL_end1z00_1682, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10628);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1246 */
obj_t BgL_start1z00_1687;
BgL_start1z00_1687 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)2))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_end1z00_1688;
BgL_end1z00_1688 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)3))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_start2z00_1689;
BgL_start2z00_1689 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)4))); 
{ /* Ieee/string.scm 1246 */

{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1890z00_1691;obj_t BgL_arg1892z00_1692;
BgL_arg1890z00_1691 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_arg1892z00_1692 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ /* Ieee/string.scm 1246 */
bool_t BgL_auxz00_10655;
{ /* Ieee/string.scm 1246 */
obj_t BgL_auxz00_10663;obj_t BgL_auxz00_10656;
if(
STRINGP(BgL_arg1892z00_1692))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10663 = BgL_arg1892z00_1692
; }  else 
{ 
obj_t BgL_auxz00_10666;
BgL_auxz00_10666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1892z00_1692); 
FAILURE(BgL_auxz00_10666,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1890z00_1691))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10656 = BgL_arg1890z00_1691
; }  else 
{ 
obj_t BgL_auxz00_10659;
BgL_auxz00_10659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1890z00_1691); 
FAILURE(BgL_auxz00_10659,BFALSE,BFALSE);} 
BgL_auxz00_10655 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_10656, BgL_auxz00_10663, BgL_start1z00_1687, BgL_end1z00_1688, BgL_start2z00_1689, BFALSE); } 
return 
BBOOL(BgL_auxz00_10655);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1246 */
obj_t BgL_start1z00_1693;
BgL_start1z00_1693 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)2))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_end1z00_1694;
BgL_end1z00_1694 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)3))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_start2z00_1695;
BgL_start2z00_1695 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)4))); 
{ /* Ieee/string.scm 1246 */
obj_t BgL_end2z00_1696;
BgL_end2z00_1696 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)5))); 
{ /* Ieee/string.scm 1246 */

{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1893z00_1697;obj_t BgL_arg1894z00_1698;
BgL_arg1893z00_1697 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)0))); 
BgL_arg1894z00_1698 = 
VECTOR_REF(BgL_optz00_208,
(int)(((long)1))); 
{ /* Ieee/string.scm 1246 */
bool_t BgL_auxz00_10684;
{ /* Ieee/string.scm 1246 */
obj_t BgL_auxz00_10692;obj_t BgL_auxz00_10685;
if(
STRINGP(BgL_arg1894z00_1698))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10692 = BgL_arg1894z00_1698
; }  else 
{ 
obj_t BgL_auxz00_10695;
BgL_auxz00_10695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1894z00_1698); 
FAILURE(BgL_auxz00_10695,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1893z00_1697))
{ /* Ieee/string.scm 1246 */
BgL_auxz00_10685 = BgL_arg1893z00_1697
; }  else 
{ 
obj_t BgL_auxz00_10688;
BgL_auxz00_10688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50429)), BGl_string3665z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1893z00_1697); 
FAILURE(BgL_auxz00_10688,BFALSE,BFALSE);} 
BgL_auxz00_10684 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_10685, BgL_auxz00_10692, BgL_start1z00_1693, BgL_end1z00_1694, BgL_start2z00_1695, BgL_end2z00_1696); } 
return 
BBOOL(BgL_auxz00_10684);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1246 */
obj_t BgL_arg1895z00_1699;int BgL_arg1898z00_1701;
BgL_arg1895z00_1699 = BGl_symbol3663z00zz__r4_strings_6_7z00; 
BgL_arg1898z00_1701 = 
VECTOR_LENGTH(BgL_optz00_208); 
return 
BGl_errorz00zz__errorz00(BgL_arg1895z00_1699, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1898z00_1701));} } } } } } 
}



/* string-prefix-ci? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_202, obj_t BgL_s2z00_203, obj_t BgL_start1z00_204, obj_t BgL_end1z00_205, obj_t BgL_start2z00_206, obj_t BgL_end2z00_207)
{ AN_OBJECT;
{ /* Ieee/string.scm 1246 */
{ /* Ieee/string.scm 1248 */
long BgL_l1z00_1702;
BgL_l1z00_1702 = 
STRING_LENGTH(BgL_s1z00_202); 
{ /* Ieee/string.scm 1248 */
long BgL_l2z00_1703;
BgL_l2z00_1703 = 
STRING_LENGTH(BgL_s2z00_203); 
{ /* Ieee/string.scm 1249 */
obj_t BgL_e1z00_1704;
{ /* Ieee/string.scm 1250 */
obj_t BgL_procz00_3388;
BgL_procz00_3388 = BGl_symbol3666z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_205))
{ /* Ieee/string.scm 1250 */
bool_t BgL_testz00_10710;
{ /* Ieee/string.scm 1250 */
long BgL_n1z00_3397;
{ /* Ieee/string.scm 1250 */
obj_t BgL_auxz00_10711;
if(
INTEGERP(BgL_end1z00_205))
{ /* Ieee/string.scm 1250 */
BgL_auxz00_10711 = BgL_end1z00_205
; }  else 
{ 
obj_t BgL_auxz00_10714;
BgL_auxz00_10714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50595)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_205); 
FAILURE(BgL_auxz00_10714,BFALSE,BFALSE);} 
BgL_n1z00_3397 = 
(long)CINT(BgL_auxz00_10711); } 
BgL_testz00_10710 = 
(BgL_n1z00_3397<=((long)0)); } 
if(BgL_testz00_10710)
{ /* Ieee/string.scm 1250 */
BgL_e1z00_1704 = 
BGl_errorz00zz__errorz00(BgL_procz00_3388, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_205); }  else 
{ /* Ieee/string.scm 1250 */
bool_t BgL_testz00_10722;
{ /* Ieee/string.scm 1250 */
long BgL_n1z00_3399;
{ /* Ieee/string.scm 1250 */
obj_t BgL_auxz00_10723;
if(
INTEGERP(BgL_end1z00_205))
{ /* Ieee/string.scm 1250 */
BgL_auxz00_10723 = BgL_end1z00_205
; }  else 
{ 
obj_t BgL_auxz00_10726;
BgL_auxz00_10726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50595)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_205); 
FAILURE(BgL_auxz00_10726,BFALSE,BFALSE);} 
BgL_n1z00_3399 = 
(long)CINT(BgL_auxz00_10723); } 
BgL_testz00_10722 = 
(BgL_n1z00_3399>BgL_l1z00_1702); } 
if(BgL_testz00_10722)
{ /* Ieee/string.scm 1250 */
BgL_e1z00_1704 = 
BGl_errorz00zz__errorz00(BgL_procz00_3388, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_205); }  else 
{ /* Ieee/string.scm 1250 */
BgL_e1z00_1704 = BgL_end1z00_205; } } }  else 
{ /* Ieee/string.scm 1250 */
BgL_e1z00_1704 = 
BINT(BgL_l1z00_1702); } } 
{ /* Ieee/string.scm 1250 */
obj_t BgL_e2z00_1705;
{ /* Ieee/string.scm 1251 */
obj_t BgL_procz00_3401;
BgL_procz00_3401 = BGl_symbol3666z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_207))
{ /* Ieee/string.scm 1251 */
bool_t BgL_testz00_10737;
{ /* Ieee/string.scm 1251 */
long BgL_n1z00_3410;
{ /* Ieee/string.scm 1251 */
obj_t BgL_auxz00_10738;
if(
INTEGERP(BgL_end2z00_207))
{ /* Ieee/string.scm 1251 */
BgL_auxz00_10738 = BgL_end2z00_207
; }  else 
{ 
obj_t BgL_auxz00_10741;
BgL_auxz00_10741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50657)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_207); 
FAILURE(BgL_auxz00_10741,BFALSE,BFALSE);} 
BgL_n1z00_3410 = 
(long)CINT(BgL_auxz00_10738); } 
BgL_testz00_10737 = 
(BgL_n1z00_3410<=((long)0)); } 
if(BgL_testz00_10737)
{ /* Ieee/string.scm 1251 */
BgL_e2z00_1705 = 
BGl_errorz00zz__errorz00(BgL_procz00_3401, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_207); }  else 
{ /* Ieee/string.scm 1251 */
bool_t BgL_testz00_10749;
{ /* Ieee/string.scm 1251 */
long BgL_n1z00_3412;
{ /* Ieee/string.scm 1251 */
obj_t BgL_auxz00_10750;
if(
INTEGERP(BgL_end2z00_207))
{ /* Ieee/string.scm 1251 */
BgL_auxz00_10750 = BgL_end2z00_207
; }  else 
{ 
obj_t BgL_auxz00_10753;
BgL_auxz00_10753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50657)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_207); 
FAILURE(BgL_auxz00_10753,BFALSE,BFALSE);} 
BgL_n1z00_3412 = 
(long)CINT(BgL_auxz00_10750); } 
BgL_testz00_10749 = 
(BgL_n1z00_3412>BgL_l2z00_1703); } 
if(BgL_testz00_10749)
{ /* Ieee/string.scm 1251 */
BgL_e2z00_1705 = 
BGl_errorz00zz__errorz00(BgL_procz00_3401, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_207); }  else 
{ /* Ieee/string.scm 1251 */
BgL_e2z00_1705 = BgL_end2z00_207; } } }  else 
{ /* Ieee/string.scm 1251 */
BgL_e2z00_1705 = 
BINT(BgL_l2z00_1703); } } 
{ /* Ieee/string.scm 1251 */
obj_t BgL_b1z00_1706;
{ /* Ieee/string.scm 1252 */
obj_t BgL_procz00_3414;
BgL_procz00_3414 = BGl_symbol3666z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_204))
{ /* Ieee/string.scm 1252 */
bool_t BgL_testz00_10764;
{ /* Ieee/string.scm 1252 */
long BgL_n1z00_3423;
{ /* Ieee/string.scm 1252 */
obj_t BgL_auxz00_10765;
if(
INTEGERP(BgL_start1z00_204))
{ /* Ieee/string.scm 1252 */
BgL_auxz00_10765 = BgL_start1z00_204
; }  else 
{ 
obj_t BgL_auxz00_10768;
BgL_auxz00_10768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50719)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_204); 
FAILURE(BgL_auxz00_10768,BFALSE,BFALSE);} 
BgL_n1z00_3423 = 
(long)CINT(BgL_auxz00_10765); } 
BgL_testz00_10764 = 
(BgL_n1z00_3423<((long)0)); } 
if(BgL_testz00_10764)
{ /* Ieee/string.scm 1252 */
BgL_b1z00_1706 = 
BGl_errorz00zz__errorz00(BgL_procz00_3414, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_204); }  else 
{ /* Ieee/string.scm 1252 */
bool_t BgL_testz00_10776;
{ /* Ieee/string.scm 1252 */
long BgL_n1z00_3425;
{ /* Ieee/string.scm 1252 */
obj_t BgL_auxz00_10777;
if(
INTEGERP(BgL_start1z00_204))
{ /* Ieee/string.scm 1252 */
BgL_auxz00_10777 = BgL_start1z00_204
; }  else 
{ 
obj_t BgL_auxz00_10780;
BgL_auxz00_10780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50719)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_204); 
FAILURE(BgL_auxz00_10780,BFALSE,BFALSE);} 
BgL_n1z00_3425 = 
(long)CINT(BgL_auxz00_10777); } 
BgL_testz00_10776 = 
(BgL_n1z00_3425>=BgL_l1z00_1702); } 
if(BgL_testz00_10776)
{ /* Ieee/string.scm 1252 */
BgL_b1z00_1706 = 
BGl_errorz00zz__errorz00(BgL_procz00_3414, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_204); }  else 
{ /* Ieee/string.scm 1252 */
BgL_b1z00_1706 = BgL_start1z00_204; } } }  else 
{ /* Ieee/string.scm 1252 */
BgL_b1z00_1706 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1252 */
obj_t BgL_b2z00_1707;
{ /* Ieee/string.scm 1253 */
obj_t BgL_procz00_3427;
BgL_procz00_3427 = BGl_symbol3666z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_206))
{ /* Ieee/string.scm 1253 */
bool_t BgL_testz00_10791;
{ /* Ieee/string.scm 1253 */
long BgL_n1z00_3436;
{ /* Ieee/string.scm 1253 */
obj_t BgL_auxz00_10792;
if(
INTEGERP(BgL_start2z00_206))
{ /* Ieee/string.scm 1253 */
BgL_auxz00_10792 = BgL_start2z00_206
; }  else 
{ 
obj_t BgL_auxz00_10795;
BgL_auxz00_10795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50786)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_206); 
FAILURE(BgL_auxz00_10795,BFALSE,BFALSE);} 
BgL_n1z00_3436 = 
(long)CINT(BgL_auxz00_10792); } 
BgL_testz00_10791 = 
(BgL_n1z00_3436<((long)0)); } 
if(BgL_testz00_10791)
{ /* Ieee/string.scm 1253 */
BgL_b2z00_1707 = 
BGl_errorz00zz__errorz00(BgL_procz00_3427, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_206); }  else 
{ /* Ieee/string.scm 1253 */
bool_t BgL_testz00_10803;
{ /* Ieee/string.scm 1253 */
long BgL_n1z00_3438;
{ /* Ieee/string.scm 1253 */
obj_t BgL_auxz00_10804;
if(
INTEGERP(BgL_start2z00_206))
{ /* Ieee/string.scm 1253 */
BgL_auxz00_10804 = BgL_start2z00_206
; }  else 
{ 
obj_t BgL_auxz00_10807;
BgL_auxz00_10807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50786)), BGl_string3667z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_206); 
FAILURE(BgL_auxz00_10807,BFALSE,BFALSE);} 
BgL_n1z00_3438 = 
(long)CINT(BgL_auxz00_10804); } 
BgL_testz00_10803 = 
(BgL_n1z00_3438>=BgL_l2z00_1703); } 
if(BgL_testz00_10803)
{ /* Ieee/string.scm 1253 */
BgL_b2z00_1707 = 
BGl_errorz00zz__errorz00(BgL_procz00_3427, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_206); }  else 
{ /* Ieee/string.scm 1253 */
BgL_b2z00_1707 = BgL_start2z00_206; } } }  else 
{ /* Ieee/string.scm 1253 */
BgL_b2z00_1707 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1253 */

{ 
obj_t BgL_i1z00_1709;obj_t BgL_i2z00_1710;
BgL_i1z00_1709 = BgL_b1z00_1706; 
BgL_i2z00_1710 = BgL_b2z00_1707; 
BgL_zc3anonymousza31899ze3z83_1711:
{ /* Ieee/string.scm 1257 */
bool_t BgL_testz00_10816;
{ /* Ieee/string.scm 1257 */
long BgL_n1z00_3440;long BgL_n2z00_3441;
{ /* Ieee/string.scm 1257 */
obj_t BgL_auxz00_10817;
if(
INTEGERP(BgL_i1z00_1709))
{ /* Ieee/string.scm 1257 */
BgL_auxz00_10817 = BgL_i1z00_1709
; }  else 
{ 
obj_t BgL_auxz00_10820;
BgL_auxz00_10820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50903)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1709); 
FAILURE(BgL_auxz00_10820,BFALSE,BFALSE);} 
BgL_n1z00_3440 = 
(long)CINT(BgL_auxz00_10817); } 
{ /* Ieee/string.scm 1257 */
obj_t BgL_auxz00_10825;
if(
INTEGERP(BgL_e1z00_1704))
{ /* Ieee/string.scm 1257 */
BgL_auxz00_10825 = BgL_e1z00_1704
; }  else 
{ 
obj_t BgL_auxz00_10828;
BgL_auxz00_10828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50906)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1704); 
FAILURE(BgL_auxz00_10828,BFALSE,BFALSE);} 
BgL_n2z00_3441 = 
(long)CINT(BgL_auxz00_10825); } 
BgL_testz00_10816 = 
(BgL_n1z00_3440==BgL_n2z00_3441); } 
if(BgL_testz00_10816)
{ /* Ieee/string.scm 1257 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1259 */
bool_t BgL_testz00_10834;
{ /* Ieee/string.scm 1259 */
long BgL_n1z00_3442;long BgL_n2z00_3443;
{ /* Ieee/string.scm 1259 */
obj_t BgL_auxz00_10835;
if(
INTEGERP(BgL_i2z00_1710))
{ /* Ieee/string.scm 1259 */
BgL_auxz00_10835 = BgL_i2z00_1710
; }  else 
{ 
obj_t BgL_auxz00_10838;
BgL_auxz00_10838 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50931)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1710); 
FAILURE(BgL_auxz00_10838,BFALSE,BFALSE);} 
BgL_n1z00_3442 = 
(long)CINT(BgL_auxz00_10835); } 
{ /* Ieee/string.scm 1259 */
obj_t BgL_auxz00_10843;
if(
INTEGERP(BgL_e2z00_1705))
{ /* Ieee/string.scm 1259 */
BgL_auxz00_10843 = BgL_e2z00_1705
; }  else 
{ 
obj_t BgL_auxz00_10846;
BgL_auxz00_10846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50934)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1705); 
FAILURE(BgL_auxz00_10846,BFALSE,BFALSE);} 
BgL_n2z00_3443 = 
(long)CINT(BgL_auxz00_10843); } 
BgL_testz00_10834 = 
(BgL_n1z00_3442==BgL_n2z00_3443); } 
if(BgL_testz00_10834)
{ /* Ieee/string.scm 1259 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1261 */
bool_t BgL_testz00_10852;
{ /* Ieee/string.scm 1261 */
unsigned char BgL_auxz00_10873;unsigned char BgL_auxz00_10853;
{ /* Ieee/string.scm 1261 */
unsigned char BgL_auxz00_10874;
{ /* Ieee/string.scm 1261 */
long BgL_kz00_3447;
{ /* Ieee/string.scm 1261 */
obj_t BgL_auxz00_10875;
if(
INTEGERP(BgL_i2z00_1710))
{ /* Ieee/string.scm 1261 */
BgL_auxz00_10875 = BgL_i2z00_1710
; }  else 
{ 
obj_t BgL_auxz00_10878;
BgL_auxz00_10878 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50999)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1710); 
FAILURE(BgL_auxz00_10878,BFALSE,BFALSE);} 
BgL_kz00_3447 = 
(long)CINT(BgL_auxz00_10875); } 
{ /* Ieee/string.scm 1261 */
long BgL_l2551z00_4384;
BgL_l2551z00_4384 = 
STRING_LENGTH(BgL_s2z00_203); 
if(
BOUND_CHECK(BgL_kz00_3447, BgL_l2551z00_4384))
{ /* Ieee/string.scm 1261 */
BgL_auxz00_10874 = 
STRING_REF(BgL_s2z00_203, BgL_kz00_3447)
; }  else 
{ 
obj_t BgL_auxz00_10887;
BgL_auxz00_10887 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50984)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3447), BgL_s2z00_203); 
FAILURE(BgL_auxz00_10887,BFALSE,BFALSE);} } } 
BgL_auxz00_10873 = 
toupper(BgL_auxz00_10874); } 
{ /* Ieee/string.scm 1261 */
unsigned char BgL_auxz00_10854;
{ /* Ieee/string.scm 1261 */
long BgL_kz00_3445;
{ /* Ieee/string.scm 1261 */
obj_t BgL_auxz00_10855;
if(
INTEGERP(BgL_i1z00_1709))
{ /* Ieee/string.scm 1261 */
BgL_auxz00_10855 = BgL_i1z00_1709
; }  else 
{ 
obj_t BgL_auxz00_10858;
BgL_auxz00_10858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50980)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1709); 
FAILURE(BgL_auxz00_10858,BFALSE,BFALSE);} 
BgL_kz00_3445 = 
(long)CINT(BgL_auxz00_10855); } 
{ /* Ieee/string.scm 1261 */
long BgL_l2547z00_4380;
BgL_l2547z00_4380 = 
STRING_LENGTH(BgL_s1z00_202); 
if(
BOUND_CHECK(BgL_kz00_3445, BgL_l2547z00_4380))
{ /* Ieee/string.scm 1261 */
BgL_auxz00_10854 = 
STRING_REF(BgL_s1z00_202, BgL_kz00_3445)
; }  else 
{ 
obj_t BgL_auxz00_10867;
BgL_auxz00_10867 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)50965)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_kz00_3445), BgL_s1z00_202); 
FAILURE(BgL_auxz00_10867,BFALSE,BFALSE);} } } 
BgL_auxz00_10853 = 
toupper(BgL_auxz00_10854); } 
BgL_testz00_10852 = 
(BgL_auxz00_10853==BgL_auxz00_10873); } 
if(BgL_testz00_10852)
{ 
obj_t BgL_i2z00_10905;obj_t BgL_i1z00_10894;
{ /* Ieee/string.scm 1262 */
long BgL_za71za7_3457;
{ /* Ieee/string.scm 1262 */
obj_t BgL_auxz00_10895;
if(
INTEGERP(BgL_i1z00_1709))
{ /* Ieee/string.scm 1262 */
BgL_auxz00_10895 = BgL_i1z00_1709
; }  else 
{ 
obj_t BgL_auxz00_10898;
BgL_auxz00_10898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51016)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i1z00_1709); 
FAILURE(BgL_auxz00_10898,BFALSE,BFALSE);} 
BgL_za71za7_3457 = 
(long)CINT(BgL_auxz00_10895); } 
BgL_i1z00_10894 = 
BINT(
(BgL_za71za7_3457+((long)1))); } 
{ /* Ieee/string.scm 1262 */
long BgL_za71za7_3459;
{ /* Ieee/string.scm 1262 */
obj_t BgL_auxz00_10906;
if(
INTEGERP(BgL_i2z00_1710))
{ /* Ieee/string.scm 1262 */
BgL_auxz00_10906 = BgL_i2z00_1710
; }  else 
{ 
obj_t BgL_auxz00_10909;
BgL_auxz00_10909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51027)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_i2z00_1710); 
FAILURE(BgL_auxz00_10909,BFALSE,BFALSE);} 
BgL_za71za7_3459 = 
(long)CINT(BgL_auxz00_10906); } 
BgL_i2z00_10905 = 
BINT(
(BgL_za71za7_3459+((long)1))); } 
BgL_i2z00_1710 = BgL_i2z00_10905; 
BgL_i1z00_1709 = BgL_i1z00_10894; 
goto BgL_zc3anonymousza31899ze3z83_1711;}  else 
{ /* Ieee/string.scm 1261 */
return ((bool_t)0);} } } } } } } } } } } } } 
}



/* _string-suffix? */
obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t BgL_envz00_217, obj_t BgL_optz00_216)
{ AN_OBJECT;
{ /* Ieee/string.scm 1269 */
{ /* Ieee/string.scm 1269 */
obj_t BgL_s1z00_1720;obj_t BgL_s2z00_1721;
BgL_s1z00_1720 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_s2z00_1721 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1269 */
int BgL_aux1208z00_1723;
BgL_aux1208z00_1723 = 
VECTOR_LENGTH(BgL_optz00_216); 
switch( 
(long)(BgL_aux1208z00_1723)) { case ((long)2) : 

{ /* Ieee/string.scm 1269 */

{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1908z00_1729;obj_t BgL_arg1909z00_1730;
BgL_arg1908z00_1729 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_arg1909z00_1730 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ /* Ieee/string.scm 1269 */
bool_t BgL_auxz00_10925;
{ /* Ieee/string.scm 1269 */
obj_t BgL_auxz00_10933;obj_t BgL_auxz00_10926;
if(
STRINGP(BgL_arg1909z00_1730))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10933 = BgL_arg1909z00_1730
; }  else 
{ 
obj_t BgL_auxz00_10936;
BgL_auxz00_10936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1909z00_1730); 
FAILURE(BgL_auxz00_10936,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1908z00_1729))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10926 = BgL_arg1908z00_1729
; }  else 
{ 
obj_t BgL_auxz00_10929;
BgL_auxz00_10929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1908z00_1729); 
FAILURE(BgL_auxz00_10929,BFALSE,BFALSE);} 
BgL_auxz00_10925 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10926, BgL_auxz00_10933, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10925);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1269 */
obj_t BgL_start1z00_1731;
BgL_start1z00_1731 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)2))); 
{ /* Ieee/string.scm 1269 */

{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1910z00_1735;obj_t BgL_arg1911z00_1736;
BgL_arg1910z00_1735 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_arg1911z00_1736 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ /* Ieee/string.scm 1269 */
bool_t BgL_auxz00_10948;
{ /* Ieee/string.scm 1269 */
obj_t BgL_auxz00_10956;obj_t BgL_auxz00_10949;
if(
STRINGP(BgL_arg1911z00_1736))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10956 = BgL_arg1911z00_1736
; }  else 
{ 
obj_t BgL_auxz00_10959;
BgL_auxz00_10959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1911z00_1736); 
FAILURE(BgL_auxz00_10959,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1910z00_1735))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10949 = BgL_arg1910z00_1735
; }  else 
{ 
obj_t BgL_auxz00_10952;
BgL_auxz00_10952 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1910z00_1735); 
FAILURE(BgL_auxz00_10952,BFALSE,BFALSE);} 
BgL_auxz00_10948 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10949, BgL_auxz00_10956, BgL_start1z00_1731, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10948);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1269 */
obj_t BgL_start1z00_1737;
BgL_start1z00_1737 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)2))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_end1z00_1738;
BgL_end1z00_1738 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)3))); 
{ /* Ieee/string.scm 1269 */

{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1912z00_1741;obj_t BgL_arg1914z00_1742;
BgL_arg1912z00_1741 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_arg1914z00_1742 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ /* Ieee/string.scm 1269 */
bool_t BgL_auxz00_10973;
{ /* Ieee/string.scm 1269 */
obj_t BgL_auxz00_10981;obj_t BgL_auxz00_10974;
if(
STRINGP(BgL_arg1914z00_1742))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10981 = BgL_arg1914z00_1742
; }  else 
{ 
obj_t BgL_auxz00_10984;
BgL_auxz00_10984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1914z00_1742); 
FAILURE(BgL_auxz00_10984,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1912z00_1741))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_10974 = BgL_arg1912z00_1741
; }  else 
{ 
obj_t BgL_auxz00_10977;
BgL_auxz00_10977 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1912z00_1741); 
FAILURE(BgL_auxz00_10977,BFALSE,BFALSE);} 
BgL_auxz00_10973 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10974, BgL_auxz00_10981, BgL_start1z00_1737, BgL_end1z00_1738, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_10973);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1269 */
obj_t BgL_start1z00_1743;
BgL_start1z00_1743 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)2))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_end1z00_1744;
BgL_end1z00_1744 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)3))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_start2z00_1745;
BgL_start2z00_1745 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)4))); 
{ /* Ieee/string.scm 1269 */

{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1915z00_1747;obj_t BgL_arg1916z00_1748;
BgL_arg1915z00_1747 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_arg1916z00_1748 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ /* Ieee/string.scm 1269 */
bool_t BgL_auxz00_11000;
{ /* Ieee/string.scm 1269 */
obj_t BgL_auxz00_11008;obj_t BgL_auxz00_11001;
if(
STRINGP(BgL_arg1916z00_1748))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_11008 = BgL_arg1916z00_1748
; }  else 
{ 
obj_t BgL_auxz00_11011;
BgL_auxz00_11011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1916z00_1748); 
FAILURE(BgL_auxz00_11011,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1915z00_1747))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_11001 = BgL_arg1915z00_1747
; }  else 
{ 
obj_t BgL_auxz00_11004;
BgL_auxz00_11004 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1915z00_1747); 
FAILURE(BgL_auxz00_11004,BFALSE,BFALSE);} 
BgL_auxz00_11000 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11001, BgL_auxz00_11008, BgL_start1z00_1743, BgL_end1z00_1744, BgL_start2z00_1745, BFALSE); } 
return 
BBOOL(BgL_auxz00_11000);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1269 */
obj_t BgL_start1z00_1749;
BgL_start1z00_1749 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)2))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_end1z00_1750;
BgL_end1z00_1750 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)3))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_start2z00_1751;
BgL_start2z00_1751 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)4))); 
{ /* Ieee/string.scm 1269 */
obj_t BgL_end2z00_1752;
BgL_end2z00_1752 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)5))); 
{ /* Ieee/string.scm 1269 */

{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1918z00_1753;obj_t BgL_arg1919z00_1754;
BgL_arg1918z00_1753 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)0))); 
BgL_arg1919z00_1754 = 
VECTOR_REF(BgL_optz00_216,
(int)(((long)1))); 
{ /* Ieee/string.scm 1269 */
bool_t BgL_auxz00_11029;
{ /* Ieee/string.scm 1269 */
obj_t BgL_auxz00_11037;obj_t BgL_auxz00_11030;
if(
STRINGP(BgL_arg1919z00_1754))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_11037 = BgL_arg1919z00_1754
; }  else 
{ 
obj_t BgL_auxz00_11040;
BgL_auxz00_11040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1919z00_1754); 
FAILURE(BgL_auxz00_11040,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1918z00_1753))
{ /* Ieee/string.scm 1269 */
BgL_auxz00_11030 = BgL_arg1918z00_1753
; }  else 
{ 
obj_t BgL_auxz00_11033;
BgL_auxz00_11033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51288)), BGl_string3670z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1918z00_1753); 
FAILURE(BgL_auxz00_11033,BFALSE,BFALSE);} 
BgL_auxz00_11029 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11030, BgL_auxz00_11037, BgL_start1z00_1749, BgL_end1z00_1750, BgL_start2z00_1751, BgL_end2z00_1752); } 
return 
BBOOL(BgL_auxz00_11029);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1269 */
obj_t BgL_arg1920z00_1755;int BgL_arg1922z00_1757;
BgL_arg1920z00_1755 = BGl_symbol3668z00zz__r4_strings_6_7z00; 
BgL_arg1922z00_1757 = 
VECTOR_LENGTH(BgL_optz00_216); 
return 
BGl_errorz00zz__errorz00(BgL_arg1920z00_1755, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1922z00_1757));} } } } } } 
}



/* string-suffix? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t BgL_s1z00_210, obj_t BgL_s2z00_211, obj_t BgL_start1z00_212, obj_t BgL_end1z00_213, obj_t BgL_start2z00_214, obj_t BgL_end2z00_215)
{ AN_OBJECT;
{ /* Ieee/string.scm 1269 */
{ /* Ieee/string.scm 1271 */
long BgL_l1z00_1758;
BgL_l1z00_1758 = 
STRING_LENGTH(BgL_s1z00_210); 
{ /* Ieee/string.scm 1271 */
long BgL_l2z00_1759;
BgL_l2z00_1759 = 
STRING_LENGTH(BgL_s2z00_211); 
{ /* Ieee/string.scm 1272 */
obj_t BgL_b1z00_1760;
{ /* Ieee/string.scm 1273 */
obj_t BgL_procz00_3463;
BgL_procz00_3463 = BGl_symbol3671z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_213))
{ /* Ieee/string.scm 1273 */
bool_t BgL_testz00_11055;
{ /* Ieee/string.scm 1273 */
long BgL_n1z00_3472;
{ /* Ieee/string.scm 1273 */
obj_t BgL_auxz00_11056;
if(
INTEGERP(BgL_end1z00_213))
{ /* Ieee/string.scm 1273 */
BgL_auxz00_11056 = BgL_end1z00_213
; }  else 
{ 
obj_t BgL_auxz00_11059;
BgL_auxz00_11059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51455)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_213); 
FAILURE(BgL_auxz00_11059,BFALSE,BFALSE);} 
BgL_n1z00_3472 = 
(long)CINT(BgL_auxz00_11056); } 
BgL_testz00_11055 = 
(BgL_n1z00_3472<=((long)0)); } 
if(BgL_testz00_11055)
{ /* Ieee/string.scm 1273 */
BgL_b1z00_1760 = 
BGl_errorz00zz__errorz00(BgL_procz00_3463, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_213); }  else 
{ /* Ieee/string.scm 1273 */
bool_t BgL_testz00_11067;
{ /* Ieee/string.scm 1273 */
long BgL_n1z00_3474;
{ /* Ieee/string.scm 1273 */
obj_t BgL_auxz00_11068;
if(
INTEGERP(BgL_end1z00_213))
{ /* Ieee/string.scm 1273 */
BgL_auxz00_11068 = BgL_end1z00_213
; }  else 
{ 
obj_t BgL_auxz00_11071;
BgL_auxz00_11071 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51455)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_213); 
FAILURE(BgL_auxz00_11071,BFALSE,BFALSE);} 
BgL_n1z00_3474 = 
(long)CINT(BgL_auxz00_11068); } 
BgL_testz00_11067 = 
(BgL_n1z00_3474>BgL_l1z00_1758); } 
if(BgL_testz00_11067)
{ /* Ieee/string.scm 1273 */
BgL_b1z00_1760 = 
BGl_errorz00zz__errorz00(BgL_procz00_3463, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_213); }  else 
{ /* Ieee/string.scm 1273 */
BgL_b1z00_1760 = BgL_end1z00_213; } } }  else 
{ /* Ieee/string.scm 1273 */
BgL_b1z00_1760 = 
BINT(BgL_l1z00_1758); } } 
{ /* Ieee/string.scm 1273 */
obj_t BgL_b2z00_1761;
{ /* Ieee/string.scm 1274 */
obj_t BgL_procz00_3476;
BgL_procz00_3476 = BGl_symbol3671z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_215))
{ /* Ieee/string.scm 1274 */
bool_t BgL_testz00_11082;
{ /* Ieee/string.scm 1274 */
long BgL_n1z00_3485;
{ /* Ieee/string.scm 1274 */
obj_t BgL_auxz00_11083;
if(
INTEGERP(BgL_end2z00_215))
{ /* Ieee/string.scm 1274 */
BgL_auxz00_11083 = BgL_end2z00_215
; }  else 
{ 
obj_t BgL_auxz00_11086;
BgL_auxz00_11086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51514)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_215); 
FAILURE(BgL_auxz00_11086,BFALSE,BFALSE);} 
BgL_n1z00_3485 = 
(long)CINT(BgL_auxz00_11083); } 
BgL_testz00_11082 = 
(BgL_n1z00_3485<=((long)0)); } 
if(BgL_testz00_11082)
{ /* Ieee/string.scm 1274 */
BgL_b2z00_1761 = 
BGl_errorz00zz__errorz00(BgL_procz00_3476, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_215); }  else 
{ /* Ieee/string.scm 1274 */
bool_t BgL_testz00_11094;
{ /* Ieee/string.scm 1274 */
long BgL_n1z00_3487;
{ /* Ieee/string.scm 1274 */
obj_t BgL_auxz00_11095;
if(
INTEGERP(BgL_end2z00_215))
{ /* Ieee/string.scm 1274 */
BgL_auxz00_11095 = BgL_end2z00_215
; }  else 
{ 
obj_t BgL_auxz00_11098;
BgL_auxz00_11098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51514)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_215); 
FAILURE(BgL_auxz00_11098,BFALSE,BFALSE);} 
BgL_n1z00_3487 = 
(long)CINT(BgL_auxz00_11095); } 
BgL_testz00_11094 = 
(BgL_n1z00_3487>BgL_l2z00_1759); } 
if(BgL_testz00_11094)
{ /* Ieee/string.scm 1274 */
BgL_b2z00_1761 = 
BGl_errorz00zz__errorz00(BgL_procz00_3476, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_215); }  else 
{ /* Ieee/string.scm 1274 */
BgL_b2z00_1761 = BgL_end2z00_215; } } }  else 
{ /* Ieee/string.scm 1274 */
BgL_b2z00_1761 = 
BINT(BgL_l2z00_1759); } } 
{ /* Ieee/string.scm 1274 */
obj_t BgL_e1z00_1762;
{ /* Ieee/string.scm 1275 */
obj_t BgL_procz00_3489;
BgL_procz00_3489 = BGl_symbol3671z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_212))
{ /* Ieee/string.scm 1275 */
bool_t BgL_testz00_11109;
{ /* Ieee/string.scm 1275 */
long BgL_n1z00_3498;
{ /* Ieee/string.scm 1275 */
obj_t BgL_auxz00_11110;
if(
INTEGERP(BgL_start1z00_212))
{ /* Ieee/string.scm 1275 */
BgL_auxz00_11110 = BgL_start1z00_212
; }  else 
{ 
obj_t BgL_auxz00_11113;
BgL_auxz00_11113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51573)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_212); 
FAILURE(BgL_auxz00_11113,BFALSE,BFALSE);} 
BgL_n1z00_3498 = 
(long)CINT(BgL_auxz00_11110); } 
BgL_testz00_11109 = 
(BgL_n1z00_3498<((long)0)); } 
if(BgL_testz00_11109)
{ /* Ieee/string.scm 1275 */
BgL_e1z00_1762 = 
BGl_errorz00zz__errorz00(BgL_procz00_3489, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_212); }  else 
{ /* Ieee/string.scm 1275 */
bool_t BgL_testz00_11121;
{ /* Ieee/string.scm 1275 */
long BgL_n1z00_3500;
{ /* Ieee/string.scm 1275 */
obj_t BgL_auxz00_11122;
if(
INTEGERP(BgL_start1z00_212))
{ /* Ieee/string.scm 1275 */
BgL_auxz00_11122 = BgL_start1z00_212
; }  else 
{ 
obj_t BgL_auxz00_11125;
BgL_auxz00_11125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51573)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_212); 
FAILURE(BgL_auxz00_11125,BFALSE,BFALSE);} 
BgL_n1z00_3500 = 
(long)CINT(BgL_auxz00_11122); } 
BgL_testz00_11121 = 
(BgL_n1z00_3500>=BgL_l1z00_1758); } 
if(BgL_testz00_11121)
{ /* Ieee/string.scm 1275 */
BgL_e1z00_1762 = 
BGl_errorz00zz__errorz00(BgL_procz00_3489, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_212); }  else 
{ /* Ieee/string.scm 1275 */
BgL_e1z00_1762 = BgL_start1z00_212; } } }  else 
{ /* Ieee/string.scm 1275 */
BgL_e1z00_1762 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1275 */
obj_t BgL_e2z00_1763;
{ /* Ieee/string.scm 1276 */
obj_t BgL_procz00_3502;
BgL_procz00_3502 = BGl_symbol3671z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_214))
{ /* Ieee/string.scm 1276 */
bool_t BgL_testz00_11136;
{ /* Ieee/string.scm 1276 */
long BgL_n1z00_3511;
{ /* Ieee/string.scm 1276 */
obj_t BgL_auxz00_11137;
if(
INTEGERP(BgL_start2z00_214))
{ /* Ieee/string.scm 1276 */
BgL_auxz00_11137 = BgL_start2z00_214
; }  else 
{ 
obj_t BgL_auxz00_11140;
BgL_auxz00_11140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51637)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_214); 
FAILURE(BgL_auxz00_11140,BFALSE,BFALSE);} 
BgL_n1z00_3511 = 
(long)CINT(BgL_auxz00_11137); } 
BgL_testz00_11136 = 
(BgL_n1z00_3511<((long)0)); } 
if(BgL_testz00_11136)
{ /* Ieee/string.scm 1276 */
BgL_e2z00_1763 = 
BGl_errorz00zz__errorz00(BgL_procz00_3502, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_214); }  else 
{ /* Ieee/string.scm 1276 */
bool_t BgL_testz00_11148;
{ /* Ieee/string.scm 1276 */
long BgL_n1z00_3513;
{ /* Ieee/string.scm 1276 */
obj_t BgL_auxz00_11149;
if(
INTEGERP(BgL_start2z00_214))
{ /* Ieee/string.scm 1276 */
BgL_auxz00_11149 = BgL_start2z00_214
; }  else 
{ 
obj_t BgL_auxz00_11152;
BgL_auxz00_11152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51637)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_214); 
FAILURE(BgL_auxz00_11152,BFALSE,BFALSE);} 
BgL_n1z00_3513 = 
(long)CINT(BgL_auxz00_11149); } 
BgL_testz00_11148 = 
(BgL_n1z00_3513>=BgL_l2z00_1759); } 
if(BgL_testz00_11148)
{ /* Ieee/string.scm 1276 */
BgL_e2z00_1763 = 
BGl_errorz00zz__errorz00(BgL_procz00_3502, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_214); }  else 
{ /* Ieee/string.scm 1276 */
BgL_e2z00_1763 = BgL_start2z00_214; } } }  else 
{ /* Ieee/string.scm 1276 */
BgL_e2z00_1763 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1276 */

{ 
long BgL_i1z00_1767;long BgL_i2z00_1768;
{ /* Ieee/string.scm 1277 */
long BgL_za71za7_3515;
{ /* Ieee/string.scm 1277 */
obj_t BgL_auxz00_11207;
if(
INTEGERP(BgL_b1z00_1760))
{ /* Ieee/string.scm 1277 */
BgL_auxz00_11207 = BgL_b1z00_1760
; }  else 
{ 
obj_t BgL_auxz00_11210;
BgL_auxz00_11210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51716)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1760); 
FAILURE(BgL_auxz00_11210,BFALSE,BFALSE);} 
BgL_za71za7_3515 = 
(long)CINT(BgL_auxz00_11207); } 
BgL_i1z00_1767 = 
(BgL_za71za7_3515-((long)1)); } 
{ /* Ieee/string.scm 1278 */
long BgL_za71za7_3517;
{ /* Ieee/string.scm 1278 */
obj_t BgL_auxz00_11216;
if(
INTEGERP(BgL_b2z00_1761))
{ /* Ieee/string.scm 1278 */
BgL_auxz00_11216 = BgL_b2z00_1761
; }  else 
{ 
obj_t BgL_auxz00_11219;
BgL_auxz00_11219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51735)), BGl_string3672z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b2z00_1761); 
FAILURE(BgL_auxz00_11219,BFALSE,BFALSE);} 
BgL_za71za7_3517 = 
(long)CINT(BgL_auxz00_11216); } 
BgL_i2z00_1768 = 
(BgL_za71za7_3517-((long)1)); } 
BgL_zc3anonymousza31923ze3z83_1769:
{ /* Ieee/string.scm 1280 */
bool_t BgL_testz00_11161;
{ /* Ieee/string.scm 1280 */
long BgL_n2z00_3520;
{ /* Ieee/string.scm 1280 */
obj_t BgL_auxz00_11162;
if(
INTEGERP(BgL_e1z00_1762))
{ /* Ieee/string.scm 1280 */
BgL_auxz00_11162 = BgL_e1z00_1762
; }  else 
{ 
obj_t BgL_auxz00_11165;
BgL_auxz00_11165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51770)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1762); 
FAILURE(BgL_auxz00_11165,BFALSE,BFALSE);} 
BgL_n2z00_3520 = 
(long)CINT(BgL_auxz00_11162); } 
BgL_testz00_11161 = 
(BgL_i1z00_1767<BgL_n2z00_3520); } 
if(BgL_testz00_11161)
{ /* Ieee/string.scm 1280 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1282 */
bool_t BgL_testz00_11171;
{ /* Ieee/string.scm 1282 */
long BgL_n2z00_3522;
{ /* Ieee/string.scm 1282 */
obj_t BgL_auxz00_11172;
if(
INTEGERP(BgL_e2z00_1763))
{ /* Ieee/string.scm 1282 */
BgL_auxz00_11172 = BgL_e2z00_1763
; }  else 
{ 
obj_t BgL_auxz00_11175;
BgL_auxz00_11175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51798)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1763); 
FAILURE(BgL_auxz00_11175,BFALSE,BFALSE);} 
BgL_n2z00_3522 = 
(long)CINT(BgL_auxz00_11172); } 
BgL_testz00_11171 = 
(BgL_i2z00_1768<BgL_n2z00_3522); } 
if(BgL_testz00_11171)
{ /* Ieee/string.scm 1282 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1284 */
bool_t BgL_testz00_11181;
{ /* Ieee/string.scm 1284 */
unsigned char BgL_auxz00_11192;unsigned char BgL_auxz00_11182;
{ /* Ieee/string.scm 1284 */
long BgL_l2559z00_4392;
BgL_l2559z00_4392 = 
STRING_LENGTH(BgL_s2z00_211); 
if(
BOUND_CHECK(BgL_i2z00_1768, BgL_l2559z00_4392))
{ /* Ieee/string.scm 1284 */
BgL_auxz00_11192 = 
STRING_REF(BgL_s2z00_211, BgL_i2z00_1768)
; }  else 
{ 
obj_t BgL_auxz00_11197;
BgL_auxz00_11197 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51845)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2z00_1768), BgL_s2z00_211); 
FAILURE(BgL_auxz00_11197,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 1284 */
long BgL_l2555z00_4388;
BgL_l2555z00_4388 = 
STRING_LENGTH(BgL_s1z00_210); 
if(
BOUND_CHECK(BgL_i1z00_1767, BgL_l2555z00_4388))
{ /* Ieee/string.scm 1284 */
BgL_auxz00_11182 = 
STRING_REF(BgL_s1z00_210, BgL_i1z00_1767)
; }  else 
{ 
obj_t BgL_auxz00_11187;
BgL_auxz00_11187 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)51826)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i1z00_1767), BgL_s1z00_210); 
FAILURE(BgL_auxz00_11187,BFALSE,BFALSE);} } 
BgL_testz00_11181 = 
(BgL_auxz00_11182==BgL_auxz00_11192); } 
if(BgL_testz00_11181)
{ 
long BgL_i2z00_11205;long BgL_i1z00_11203;
BgL_i1z00_11203 = 
(BgL_i1z00_1767-((long)1)); 
BgL_i2z00_11205 = 
(BgL_i2z00_1768-((long)1)); 
BgL_i2z00_1768 = BgL_i2z00_11205; 
BgL_i1z00_1767 = BgL_i1z00_11203; 
goto BgL_zc3anonymousza31923ze3z83_1769;}  else 
{ /* Ieee/string.scm 1284 */
return ((bool_t)0);} } } } } } } } } } } } } 
}



/* _string-suffix-ci? */
obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_envz00_225, obj_t BgL_optz00_224)
{ AN_OBJECT;
{ /* Ieee/string.scm 1292 */
{ /* Ieee/string.scm 1292 */
obj_t BgL_s1z00_1778;obj_t BgL_s2z00_1779;
BgL_s1z00_1778 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_s2z00_1779 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ 

{ /* Ieee/string.scm 1292 */
int BgL_aux1210z00_1781;
BgL_aux1210z00_1781 = 
VECTOR_LENGTH(BgL_optz00_224); 
switch( 
(long)(BgL_aux1210z00_1781)) { case ((long)2) : 

{ /* Ieee/string.scm 1292 */

{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1935z00_1787;obj_t BgL_arg1937z00_1788;
BgL_arg1935z00_1787 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_arg1937z00_1788 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ /* Ieee/string.scm 1292 */
bool_t BgL_auxz00_11234;
{ /* Ieee/string.scm 1292 */
obj_t BgL_auxz00_11242;obj_t BgL_auxz00_11235;
if(
STRINGP(BgL_arg1937z00_1788))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11242 = BgL_arg1937z00_1788
; }  else 
{ 
obj_t BgL_auxz00_11245;
BgL_auxz00_11245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1937z00_1788); 
FAILURE(BgL_auxz00_11245,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1935z00_1787))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11235 = BgL_arg1935z00_1787
; }  else 
{ 
obj_t BgL_auxz00_11238;
BgL_auxz00_11238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1935z00_1787); 
FAILURE(BgL_auxz00_11238,BFALSE,BFALSE);} 
BgL_auxz00_11234 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11235, BgL_auxz00_11242, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_11234);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1292 */
obj_t BgL_start1z00_1789;
BgL_start1z00_1789 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)2))); 
{ /* Ieee/string.scm 1292 */

{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1938z00_1793;obj_t BgL_arg1940z00_1794;
BgL_arg1938z00_1793 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_arg1940z00_1794 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ /* Ieee/string.scm 1292 */
bool_t BgL_auxz00_11257;
{ /* Ieee/string.scm 1292 */
obj_t BgL_auxz00_11265;obj_t BgL_auxz00_11258;
if(
STRINGP(BgL_arg1940z00_1794))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11265 = BgL_arg1940z00_1794
; }  else 
{ 
obj_t BgL_auxz00_11268;
BgL_auxz00_11268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1940z00_1794); 
FAILURE(BgL_auxz00_11268,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1938z00_1793))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11258 = BgL_arg1938z00_1793
; }  else 
{ 
obj_t BgL_auxz00_11261;
BgL_auxz00_11261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1938z00_1793); 
FAILURE(BgL_auxz00_11261,BFALSE,BFALSE);} 
BgL_auxz00_11257 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11258, BgL_auxz00_11265, BgL_start1z00_1789, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_11257);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 1292 */
obj_t BgL_start1z00_1795;
BgL_start1z00_1795 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)2))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_end1z00_1796;
BgL_end1z00_1796 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)3))); 
{ /* Ieee/string.scm 1292 */

{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1941z00_1799;obj_t BgL_arg1942z00_1800;
BgL_arg1941z00_1799 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_arg1942z00_1800 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ /* Ieee/string.scm 1292 */
bool_t BgL_auxz00_11282;
{ /* Ieee/string.scm 1292 */
obj_t BgL_auxz00_11290;obj_t BgL_auxz00_11283;
if(
STRINGP(BgL_arg1942z00_1800))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11290 = BgL_arg1942z00_1800
; }  else 
{ 
obj_t BgL_auxz00_11293;
BgL_auxz00_11293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1942z00_1800); 
FAILURE(BgL_auxz00_11293,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1941z00_1799))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11283 = BgL_arg1941z00_1799
; }  else 
{ 
obj_t BgL_auxz00_11286;
BgL_auxz00_11286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1941z00_1799); 
FAILURE(BgL_auxz00_11286,BFALSE,BFALSE);} 
BgL_auxz00_11282 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11283, BgL_auxz00_11290, BgL_start1z00_1795, BgL_end1z00_1796, BFALSE, BFALSE); } 
return 
BBOOL(BgL_auxz00_11282);} } } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1292 */
obj_t BgL_start1z00_1801;
BgL_start1z00_1801 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)2))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_end1z00_1802;
BgL_end1z00_1802 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)3))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_start2z00_1803;
BgL_start2z00_1803 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)4))); 
{ /* Ieee/string.scm 1292 */

{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1943z00_1805;obj_t BgL_arg1944z00_1806;
BgL_arg1943z00_1805 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_arg1944z00_1806 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ /* Ieee/string.scm 1292 */
bool_t BgL_auxz00_11309;
{ /* Ieee/string.scm 1292 */
obj_t BgL_auxz00_11317;obj_t BgL_auxz00_11310;
if(
STRINGP(BgL_arg1944z00_1806))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11317 = BgL_arg1944z00_1806
; }  else 
{ 
obj_t BgL_auxz00_11320;
BgL_auxz00_11320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1944z00_1806); 
FAILURE(BgL_auxz00_11320,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1943z00_1805))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11310 = BgL_arg1943z00_1805
; }  else 
{ 
obj_t BgL_auxz00_11313;
BgL_auxz00_11313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1943z00_1805); 
FAILURE(BgL_auxz00_11313,BFALSE,BFALSE);} 
BgL_auxz00_11309 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11310, BgL_auxz00_11317, BgL_start1z00_1801, BgL_end1z00_1802, BgL_start2z00_1803, BFALSE); } 
return 
BBOOL(BgL_auxz00_11309);} } } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1292 */
obj_t BgL_start1z00_1807;
BgL_start1z00_1807 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)2))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_end1z00_1808;
BgL_end1z00_1808 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)3))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_start2z00_1809;
BgL_start2z00_1809 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)4))); 
{ /* Ieee/string.scm 1292 */
obj_t BgL_end2z00_1810;
BgL_end2z00_1810 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)5))); 
{ /* Ieee/string.scm 1292 */

{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1945z00_1811;obj_t BgL_arg1946z00_1812;
BgL_arg1945z00_1811 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)0))); 
BgL_arg1946z00_1812 = 
VECTOR_REF(BgL_optz00_224,
(int)(((long)1))); 
{ /* Ieee/string.scm 1292 */
bool_t BgL_auxz00_11338;
{ /* Ieee/string.scm 1292 */
obj_t BgL_auxz00_11346;obj_t BgL_auxz00_11339;
if(
STRINGP(BgL_arg1946z00_1812))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11346 = BgL_arg1946z00_1812
; }  else 
{ 
obj_t BgL_auxz00_11349;
BgL_auxz00_11349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1946z00_1812); 
FAILURE(BgL_auxz00_11349,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1945z00_1811))
{ /* Ieee/string.scm 1292 */
BgL_auxz00_11339 = BgL_arg1945z00_1811
; }  else 
{ 
obj_t BgL_auxz00_11342;
BgL_auxz00_11342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52149)), BGl_string3675z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_arg1945z00_1811); 
FAILURE(BgL_auxz00_11342,BFALSE,BFALSE);} 
BgL_auxz00_11338 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11339, BgL_auxz00_11346, BgL_start1z00_1807, BgL_end1z00_1808, BgL_start2z00_1809, BgL_end2z00_1810); } 
return 
BBOOL(BgL_auxz00_11338);} } } } } } } break;
default: 
{ /* Ieee/string.scm 1292 */
obj_t BgL_arg1948z00_1813;int BgL_arg1950z00_1815;
BgL_arg1948z00_1813 = BGl_symbol3673z00zz__r4_strings_6_7z00; 
BgL_arg1950z00_1815 = 
VECTOR_LENGTH(BgL_optz00_224); 
return 
BGl_errorz00zz__errorz00(BgL_arg1948z00_1813, BGl_string3630z00zz__r4_strings_6_7z00, 
BINT(BgL_arg1950z00_1815));} } } } } } 
}



/* string-suffix-ci? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_218, obj_t BgL_s2z00_219, obj_t BgL_start1z00_220, obj_t BgL_end1z00_221, obj_t BgL_start2z00_222, obj_t BgL_end2z00_223)
{ AN_OBJECT;
{ /* Ieee/string.scm 1292 */
{ /* Ieee/string.scm 1294 */
long BgL_l1z00_1816;
BgL_l1z00_1816 = 
STRING_LENGTH(BgL_s1z00_218); 
{ /* Ieee/string.scm 1294 */
long BgL_l2z00_1817;
BgL_l2z00_1817 = 
STRING_LENGTH(BgL_s2z00_219); 
{ /* Ieee/string.scm 1295 */
obj_t BgL_b1z00_1818;
{ /* Ieee/string.scm 1296 */
obj_t BgL_procz00_3535;
BgL_procz00_3535 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_221))
{ /* Ieee/string.scm 1296 */
bool_t BgL_testz00_11364;
{ /* Ieee/string.scm 1296 */
long BgL_n1z00_3544;
{ /* Ieee/string.scm 1296 */
obj_t BgL_auxz00_11365;
if(
INTEGERP(BgL_end1z00_221))
{ /* Ieee/string.scm 1296 */
BgL_auxz00_11365 = BgL_end1z00_221
; }  else 
{ 
obj_t BgL_auxz00_11368;
BgL_auxz00_11368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52315)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_221); 
FAILURE(BgL_auxz00_11368,BFALSE,BFALSE);} 
BgL_n1z00_3544 = 
(long)CINT(BgL_auxz00_11365); } 
BgL_testz00_11364 = 
(BgL_n1z00_3544<=((long)0)); } 
if(BgL_testz00_11364)
{ /* Ieee/string.scm 1296 */
BgL_b1z00_1818 = 
BGl_errorz00zz__errorz00(BgL_procz00_3535, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_221); }  else 
{ /* Ieee/string.scm 1296 */
bool_t BgL_testz00_11376;
{ /* Ieee/string.scm 1296 */
long BgL_n1z00_3546;
{ /* Ieee/string.scm 1296 */
obj_t BgL_auxz00_11377;
if(
INTEGERP(BgL_end1z00_221))
{ /* Ieee/string.scm 1296 */
BgL_auxz00_11377 = BgL_end1z00_221
; }  else 
{ 
obj_t BgL_auxz00_11380;
BgL_auxz00_11380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52315)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end1z00_221); 
FAILURE(BgL_auxz00_11380,BFALSE,BFALSE);} 
BgL_n1z00_3546 = 
(long)CINT(BgL_auxz00_11377); } 
BgL_testz00_11376 = 
(BgL_n1z00_3546>BgL_l1z00_1816); } 
if(BgL_testz00_11376)
{ /* Ieee/string.scm 1296 */
BgL_b1z00_1818 = 
BGl_errorz00zz__errorz00(BgL_procz00_3535, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3635z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end1z00_221); }  else 
{ /* Ieee/string.scm 1296 */
BgL_b1z00_1818 = BgL_end1z00_221; } } }  else 
{ /* Ieee/string.scm 1296 */
BgL_b1z00_1818 = 
BINT(BgL_l1z00_1816); } } 
{ /* Ieee/string.scm 1296 */
obj_t BgL_b2z00_1819;
{ /* Ieee/string.scm 1297 */
obj_t BgL_procz00_3548;
BgL_procz00_3548 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_223))
{ /* Ieee/string.scm 1297 */
bool_t BgL_testz00_11391;
{ /* Ieee/string.scm 1297 */
long BgL_n1z00_3557;
{ /* Ieee/string.scm 1297 */
obj_t BgL_auxz00_11392;
if(
INTEGERP(BgL_end2z00_223))
{ /* Ieee/string.scm 1297 */
BgL_auxz00_11392 = BgL_end2z00_223
; }  else 
{ 
obj_t BgL_auxz00_11395;
BgL_auxz00_11395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52380)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_223); 
FAILURE(BgL_auxz00_11395,BFALSE,BFALSE);} 
BgL_n1z00_3557 = 
(long)CINT(BgL_auxz00_11392); } 
BgL_testz00_11391 = 
(BgL_n1z00_3557<=((long)0)); } 
if(BgL_testz00_11391)
{ /* Ieee/string.scm 1297 */
BgL_b2z00_1819 = 
BGl_errorz00zz__errorz00(BgL_procz00_3548, 
string_append_3(BGl_string3634z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_223); }  else 
{ /* Ieee/string.scm 1297 */
bool_t BgL_testz00_11403;
{ /* Ieee/string.scm 1297 */
long BgL_n1z00_3559;
{ /* Ieee/string.scm 1297 */
obj_t BgL_auxz00_11404;
if(
INTEGERP(BgL_end2z00_223))
{ /* Ieee/string.scm 1297 */
BgL_auxz00_11404 = BgL_end2z00_223
; }  else 
{ 
obj_t BgL_auxz00_11407;
BgL_auxz00_11407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52380)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_end2z00_223); 
FAILURE(BgL_auxz00_11407,BFALSE,BFALSE);} 
BgL_n1z00_3559 = 
(long)CINT(BgL_auxz00_11404); } 
BgL_testz00_11403 = 
(BgL_n1z00_3559>BgL_l2z00_1817); } 
if(BgL_testz00_11403)
{ /* Ieee/string.scm 1297 */
BgL_b2z00_1819 = 
BGl_errorz00zz__errorz00(BgL_procz00_3548, 
string_append_3(BGl_string3637z00zz__r4_strings_6_7z00, BGl_string3638z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_end2z00_223); }  else 
{ /* Ieee/string.scm 1297 */
BgL_b2z00_1819 = BgL_end2z00_223; } } }  else 
{ /* Ieee/string.scm 1297 */
BgL_b2z00_1819 = 
BINT(BgL_l2z00_1817); } } 
{ /* Ieee/string.scm 1297 */
obj_t BgL_e1z00_1820;
{ /* Ieee/string.scm 1298 */
obj_t BgL_procz00_3561;
BgL_procz00_3561 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_220))
{ /* Ieee/string.scm 1298 */
bool_t BgL_testz00_11418;
{ /* Ieee/string.scm 1298 */
long BgL_n1z00_3570;
{ /* Ieee/string.scm 1298 */
obj_t BgL_auxz00_11419;
if(
INTEGERP(BgL_start1z00_220))
{ /* Ieee/string.scm 1298 */
BgL_auxz00_11419 = BgL_start1z00_220
; }  else 
{ 
obj_t BgL_auxz00_11422;
BgL_auxz00_11422 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52445)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_220); 
FAILURE(BgL_auxz00_11422,BFALSE,BFALSE);} 
BgL_n1z00_3570 = 
(long)CINT(BgL_auxz00_11419); } 
BgL_testz00_11418 = 
(BgL_n1z00_3570<((long)0)); } 
if(BgL_testz00_11418)
{ /* Ieee/string.scm 1298 */
BgL_e1z00_1820 = 
BGl_errorz00zz__errorz00(BgL_procz00_3561, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_220); }  else 
{ /* Ieee/string.scm 1298 */
bool_t BgL_testz00_11430;
{ /* Ieee/string.scm 1298 */
long BgL_n1z00_3572;
{ /* Ieee/string.scm 1298 */
obj_t BgL_auxz00_11431;
if(
INTEGERP(BgL_start1z00_220))
{ /* Ieee/string.scm 1298 */
BgL_auxz00_11431 = BgL_start1z00_220
; }  else 
{ 
obj_t BgL_auxz00_11434;
BgL_auxz00_11434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52445)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start1z00_220); 
FAILURE(BgL_auxz00_11434,BFALSE,BFALSE);} 
BgL_n1z00_3572 = 
(long)CINT(BgL_auxz00_11431); } 
BgL_testz00_11430 = 
(BgL_n1z00_3572>=BgL_l1z00_1816); } 
if(BgL_testz00_11430)
{ /* Ieee/string.scm 1298 */
BgL_e1z00_1820 = 
BGl_errorz00zz__errorz00(BgL_procz00_3561, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3640z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start1z00_220); }  else 
{ /* Ieee/string.scm 1298 */
BgL_e1z00_1820 = BgL_start1z00_220; } } }  else 
{ /* Ieee/string.scm 1298 */
BgL_e1z00_1820 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1298 */
obj_t BgL_e2z00_1821;
{ /* Ieee/string.scm 1299 */
obj_t BgL_procz00_3574;
BgL_procz00_3574 = BGl_symbol3632z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_222))
{ /* Ieee/string.scm 1299 */
bool_t BgL_testz00_11445;
{ /* Ieee/string.scm 1299 */
long BgL_n1z00_3583;
{ /* Ieee/string.scm 1299 */
obj_t BgL_auxz00_11446;
if(
INTEGERP(BgL_start2z00_222))
{ /* Ieee/string.scm 1299 */
BgL_auxz00_11446 = BgL_start2z00_222
; }  else 
{ 
obj_t BgL_auxz00_11449;
BgL_auxz00_11449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52515)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_222); 
FAILURE(BgL_auxz00_11449,BFALSE,BFALSE);} 
BgL_n1z00_3583 = 
(long)CINT(BgL_auxz00_11446); } 
BgL_testz00_11445 = 
(BgL_n1z00_3583<((long)0)); } 
if(BgL_testz00_11445)
{ /* Ieee/string.scm 1299 */
BgL_e2z00_1821 = 
BGl_errorz00zz__errorz00(BgL_procz00_3574, 
string_append_3(BGl_string3639z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_222); }  else 
{ /* Ieee/string.scm 1299 */
bool_t BgL_testz00_11457;
{ /* Ieee/string.scm 1299 */
long BgL_n1z00_3585;
{ /* Ieee/string.scm 1299 */
obj_t BgL_auxz00_11458;
if(
INTEGERP(BgL_start2z00_222))
{ /* Ieee/string.scm 1299 */
BgL_auxz00_11458 = BgL_start2z00_222
; }  else 
{ 
obj_t BgL_auxz00_11461;
BgL_auxz00_11461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52515)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_start2z00_222); 
FAILURE(BgL_auxz00_11461,BFALSE,BFALSE);} 
BgL_n1z00_3585 = 
(long)CINT(BgL_auxz00_11458); } 
BgL_testz00_11457 = 
(BgL_n1z00_3585>=BgL_l2z00_1817); } 
if(BgL_testz00_11457)
{ /* Ieee/string.scm 1299 */
BgL_e2z00_1821 = 
BGl_errorz00zz__errorz00(BgL_procz00_3574, 
string_append_3(BGl_string3641z00zz__r4_strings_6_7z00, BGl_string3642z00zz__r4_strings_6_7z00, BGl_string3636z00zz__r4_strings_6_7z00), BgL_start2z00_222); }  else 
{ /* Ieee/string.scm 1299 */
BgL_e2z00_1821 = BgL_start2z00_222; } } }  else 
{ /* Ieee/string.scm 1299 */
BgL_e2z00_1821 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1299 */

{ 
long BgL_i1z00_1825;long BgL_i2z00_1826;
{ /* Ieee/string.scm 1300 */
long BgL_za71za7_3587;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_11520;
if(
INTEGERP(BgL_b1z00_1818))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_11520 = BgL_b1z00_1818
; }  else 
{ 
obj_t BgL_auxz00_11523;
BgL_auxz00_11523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52600)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b1z00_1818); 
FAILURE(BgL_auxz00_11523,BFALSE,BFALSE);} 
BgL_za71za7_3587 = 
(long)CINT(BgL_auxz00_11520); } 
BgL_i1z00_1825 = 
(BgL_za71za7_3587-((long)1)); } 
{ /* Ieee/string.scm 1301 */
long BgL_za71za7_3589;
{ /* Ieee/string.scm 1301 */
obj_t BgL_auxz00_11529;
if(
INTEGERP(BgL_b2z00_1819))
{ /* Ieee/string.scm 1301 */
BgL_auxz00_11529 = BgL_b2z00_1819
; }  else 
{ 
obj_t BgL_auxz00_11532;
BgL_auxz00_11532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52619)), BGl_string3676z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_b2z00_1819); 
FAILURE(BgL_auxz00_11532,BFALSE,BFALSE);} 
BgL_za71za7_3589 = 
(long)CINT(BgL_auxz00_11529); } 
BgL_i2z00_1826 = 
(BgL_za71za7_3589-((long)1)); } 
BgL_zc3anonymousza31951ze3z83_1827:
{ /* Ieee/string.scm 1303 */
bool_t BgL_testz00_11470;
{ /* Ieee/string.scm 1303 */
long BgL_n2z00_3592;
{ /* Ieee/string.scm 1303 */
obj_t BgL_auxz00_11471;
if(
INTEGERP(BgL_e1z00_1820))
{ /* Ieee/string.scm 1303 */
BgL_auxz00_11471 = BgL_e1z00_1820
; }  else 
{ 
obj_t BgL_auxz00_11474;
BgL_auxz00_11474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52654)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e1z00_1820); 
FAILURE(BgL_auxz00_11474,BFALSE,BFALSE);} 
BgL_n2z00_3592 = 
(long)CINT(BgL_auxz00_11471); } 
BgL_testz00_11470 = 
(BgL_i1z00_1825<BgL_n2z00_3592); } 
if(BgL_testz00_11470)
{ /* Ieee/string.scm 1303 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1305 */
bool_t BgL_testz00_11480;
{ /* Ieee/string.scm 1305 */
long BgL_n2z00_3594;
{ /* Ieee/string.scm 1305 */
obj_t BgL_auxz00_11481;
if(
INTEGERP(BgL_e2z00_1821))
{ /* Ieee/string.scm 1305 */
BgL_auxz00_11481 = BgL_e2z00_1821
; }  else 
{ 
obj_t BgL_auxz00_11484;
BgL_auxz00_11484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52682)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_e2z00_1821); 
FAILURE(BgL_auxz00_11484,BFALSE,BFALSE);} 
BgL_n2z00_3594 = 
(long)CINT(BgL_auxz00_11481); } 
BgL_testz00_11480 = 
(BgL_i2z00_1826<BgL_n2z00_3594); } 
if(BgL_testz00_11480)
{ /* Ieee/string.scm 1305 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1307 */
bool_t BgL_testz00_11490;
{ /* Ieee/string.scm 1307 */
unsigned char BgL_auxz00_11503;unsigned char BgL_auxz00_11491;
{ /* Ieee/string.scm 1307 */
unsigned char BgL_auxz00_11504;
{ /* Ieee/string.scm 1307 */
long BgL_l2567z00_4400;
BgL_l2567z00_4400 = 
STRING_LENGTH(BgL_s2z00_219); 
if(
BOUND_CHECK(BgL_i2z00_1826, BgL_l2567z00_4400))
{ /* Ieee/string.scm 1307 */
BgL_auxz00_11504 = 
STRING_REF(BgL_s2z00_219, BgL_i2z00_1826)
; }  else 
{ 
obj_t BgL_auxz00_11509;
BgL_auxz00_11509 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52732)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i2z00_1826), BgL_s2z00_219); 
FAILURE(BgL_auxz00_11509,BFALSE,BFALSE);} } 
BgL_auxz00_11503 = 
toupper(BgL_auxz00_11504); } 
{ /* Ieee/string.scm 1307 */
unsigned char BgL_auxz00_11492;
{ /* Ieee/string.scm 1307 */
long BgL_l2563z00_4396;
BgL_l2563z00_4396 = 
STRING_LENGTH(BgL_s1z00_218); 
if(
BOUND_CHECK(BgL_i1z00_1825, BgL_l2563z00_4396))
{ /* Ieee/string.scm 1307 */
BgL_auxz00_11492 = 
STRING_REF(BgL_s1z00_218, BgL_i1z00_1825)
; }  else 
{ 
obj_t BgL_auxz00_11497;
BgL_auxz00_11497 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)52713)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_i1z00_1825), BgL_s1z00_218); 
FAILURE(BgL_auxz00_11497,BFALSE,BFALSE);} } 
BgL_auxz00_11491 = 
toupper(BgL_auxz00_11492); } 
BgL_testz00_11490 = 
(BgL_auxz00_11491==BgL_auxz00_11503); } 
if(BgL_testz00_11490)
{ 
long BgL_i2z00_11518;long BgL_i1z00_11516;
BgL_i1z00_11516 = 
(BgL_i1z00_1825-((long)1)); 
BgL_i2z00_11518 = 
(BgL_i2z00_1826-((long)1)); 
BgL_i2z00_1826 = BgL_i2z00_11518; 
BgL_i1z00_1825 = BgL_i1z00_11516; 
goto BgL_zc3anonymousza31951ze3z83_1827;}  else 
{ /* Ieee/string.scm 1307 */
return ((bool_t)0);} } } } } } } } } } } } } 
}



/* string-natural-compare3 */
BGL_EXPORTED_DEF int BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_az00_226, obj_t BgL_bz00_227)
{ AN_OBJECT;
{ /* Ieee/string.scm 1315 */
{ /* Ieee/string.scm 1316 */
obj_t BgL_auxz00_11538;
{ /* Ieee/string.scm 1316 */
obj_t BgL_aux3473z00_5307;
BgL_aux3473z00_5307 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_226, BgL_bz00_227, ((bool_t)0)); 
if(
INTEGERP(BgL_aux3473z00_5307))
{ /* Ieee/string.scm 1316 */
BgL_auxz00_11538 = BgL_aux3473z00_5307
; }  else 
{ 
obj_t BgL_auxz00_11542;
BgL_auxz00_11542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53077)), BGl_string3677z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_aux3473z00_5307); 
FAILURE(BgL_auxz00_11542,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_11538);} } 
}



/* _string-natural-compare3 */
obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_envz00_4038, obj_t BgL_az00_4039, obj_t BgL_bz00_4040)
{ AN_OBJECT;
{ /* Ieee/string.scm 1315 */
{ /* Ieee/string.scm 1316 */
int BgL_auxz00_11547;
{ /* Ieee/string.scm 1316 */
obj_t BgL_auxz00_11555;obj_t BgL_auxz00_11548;
if(
STRINGP(BgL_bz00_4040))
{ /* Ieee/string.scm 1316 */
BgL_auxz00_11555 = BgL_bz00_4040
; }  else 
{ 
obj_t BgL_auxz00_11558;
BgL_auxz00_11558 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53077)), BGl_string3678z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_bz00_4040); 
FAILURE(BgL_auxz00_11558,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_4039))
{ /* Ieee/string.scm 1316 */
BgL_auxz00_11548 = BgL_az00_4039
; }  else 
{ 
obj_t BgL_auxz00_11551;
BgL_auxz00_11551 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53077)), BGl_string3678z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_az00_4039); 
FAILURE(BgL_auxz00_11551,BFALSE,BFALSE);} 
BgL_auxz00_11547 = 
BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(BgL_auxz00_11548, BgL_auxz00_11555); } 
return 
BINT(BgL_auxz00_11547);} } 
}



/* string-natural-compare3-ci */
BGL_EXPORTED_DEF int BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t BgL_az00_228, obj_t BgL_bz00_229)
{ AN_OBJECT;
{ /* Ieee/string.scm 1321 */
{ /* Ieee/string.scm 1322 */
obj_t BgL_auxz00_11564;
{ /* Ieee/string.scm 1322 */
obj_t BgL_aux3479z00_5313;
BgL_aux3479z00_5313 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_228, BgL_bz00_229, ((bool_t)1)); 
if(
INTEGERP(BgL_aux3479z00_5313))
{ /* Ieee/string.scm 1322 */
BgL_auxz00_11564 = BgL_aux3479z00_5313
; }  else 
{ 
obj_t BgL_auxz00_11568;
BgL_auxz00_11568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53364)), BGl_string3679z00zz__r4_strings_6_7z00, BGl_string3559z00zz__r4_strings_6_7z00, BgL_aux3479z00_5313); 
FAILURE(BgL_auxz00_11568,BFALSE,BFALSE);} } 
return 
CINT(BgL_auxz00_11564);} } 
}



/* _string-natural-compare3-ci */
obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t BgL_envz00_4041, obj_t BgL_az00_4042, obj_t BgL_bz00_4043)
{ AN_OBJECT;
{ /* Ieee/string.scm 1321 */
{ /* Ieee/string.scm 1322 */
int BgL_auxz00_11573;
{ /* Ieee/string.scm 1322 */
obj_t BgL_auxz00_11581;obj_t BgL_auxz00_11574;
if(
STRINGP(BgL_bz00_4043))
{ /* Ieee/string.scm 1322 */
BgL_auxz00_11581 = BgL_bz00_4043
; }  else 
{ 
obj_t BgL_auxz00_11584;
BgL_auxz00_11584 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53364)), BGl_string3680z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_bz00_4043); 
FAILURE(BgL_auxz00_11584,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_4042))
{ /* Ieee/string.scm 1322 */
BgL_auxz00_11574 = BgL_az00_4042
; }  else 
{ 
obj_t BgL_auxz00_11577;
BgL_auxz00_11577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53364)), BGl_string3680z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_az00_4042); 
FAILURE(BgL_auxz00_11577,BFALSE,BFALSE);} 
BgL_auxz00_11573 = 
BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_11574, BgL_auxz00_11581); } 
return 
BINT(BgL_auxz00_11573);} } 
}



/* strnatcmp */
obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t BgL_az00_230, obj_t BgL_bz00_231, bool_t BgL_foldcasez00_232)
{ AN_OBJECT;
{ /* Ieee/string.scm 1327 */
{ 
long BgL_iaz00_1837;long BgL_ibz00_1838;
BgL_iaz00_1837 = ((long)0); 
BgL_ibz00_1838 = ((long)0); 
BgL_zc3anonymousza31959ze3z83_1839:
{ /* Ieee/string.scm 1330 */
unsigned char BgL_caz00_1840;unsigned char BgL_cbz00_1841;
{ /* Ieee/string.scm 1330 */
long BgL_iz00_3613;
BgL_iz00_3613 = BgL_iaz00_1837; 
if(
(BgL_iz00_3613>=
STRING_LENGTH(BgL_az00_230)))
{ /* Ieee/string.scm 1330 */
BgL_caz00_1840 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1330 */
long BgL_l2571z00_4404;
BgL_l2571z00_4404 = 
STRING_LENGTH(BgL_az00_230); 
if(
BOUND_CHECK(BgL_iz00_3613, BgL_l2571z00_4404))
{ /* Ieee/string.scm 1330 */
BgL_caz00_1840 = 
STRING_REF(BgL_az00_230, BgL_iz00_3613); }  else 
{ 
obj_t BgL_auxz00_11597;
BgL_auxz00_11597 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53692)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3613), BgL_az00_230); 
FAILURE(BgL_auxz00_11597,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1331 */
long BgL_iz00_3622;
BgL_iz00_3622 = BgL_ibz00_1838; 
if(
(BgL_iz00_3622>=
STRING_LENGTH(BgL_bz00_231)))
{ /* Ieee/string.scm 1331 */
BgL_cbz00_1841 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1331 */
long BgL_l2575z00_4408;
BgL_l2575z00_4408 = 
STRING_LENGTH(BgL_bz00_231); 
if(
BOUND_CHECK(BgL_iz00_3622, BgL_l2575z00_4408))
{ /* Ieee/string.scm 1331 */
BgL_cbz00_1841 = 
STRING_REF(BgL_bz00_231, BgL_iz00_3622); }  else 
{ 
obj_t BgL_auxz00_11609;
BgL_auxz00_11609 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53717)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3622), BgL_bz00_231); 
FAILURE(BgL_auxz00_11609,BFALSE,BFALSE);} } } 
{ 

if(
isspace(BgL_caz00_1840))
{ /* Ieee/string.scm 1333 */
BgL_iaz00_1837 = 
(BgL_iaz00_1837+((long)1)); 
{ /* Ieee/string.scm 1335 */
long BgL_iz00_3634;
BgL_iz00_3634 = BgL_iaz00_1837; 
if(
(BgL_iz00_3634>=
STRING_LENGTH(BgL_az00_230)))
{ /* Ieee/string.scm 1335 */
BgL_caz00_1840 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1335 */
long BgL_l2579z00_4412;
BgL_l2579z00_4412 = 
STRING_LENGTH(BgL_az00_230); 
if(
BOUND_CHECK(BgL_iz00_3634, BgL_l2579z00_4412))
{ /* Ieee/string.scm 1335 */
BgL_caz00_1840 = 
STRING_REF(BgL_az00_230, BgL_iz00_3634); }  else 
{ 
obj_t BgL_auxz00_11624;
BgL_auxz00_11624 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53829)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3634), BgL_az00_230); 
FAILURE(BgL_auxz00_11624,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/string.scm 1333 */BFALSE; } } 
{ 

if(
isspace(BgL_cbz00_1841))
{ /* Ieee/string.scm 1337 */
BgL_ibz00_1838 = 
(BgL_ibz00_1838+((long)1)); 
{ /* Ieee/string.scm 1339 */
long BgL_iz00_3646;
BgL_iz00_3646 = BgL_ibz00_1838; 
if(
(BgL_iz00_3646>=
STRING_LENGTH(BgL_bz00_231)))
{ /* Ieee/string.scm 1339 */
BgL_cbz00_1841 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1339 */
long BgL_l2583z00_4416;
BgL_l2583z00_4416 = 
STRING_LENGTH(BgL_bz00_231); 
if(
BOUND_CHECK(BgL_iz00_3646, BgL_l2583z00_4416))
{ /* Ieee/string.scm 1339 */
BgL_cbz00_1841 = 
STRING_REF(BgL_bz00_231, BgL_iz00_3646); }  else 
{ 
obj_t BgL_auxz00_11639;
BgL_auxz00_11639 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)53942)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3646), BgL_bz00_231); 
FAILURE(BgL_auxz00_11639,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/string.scm 1337 */BFALSE; } } 
{ /* Ieee/string.scm 1341 */
bool_t BgL_testz00_11644;
if(
isdigit(BgL_caz00_1840))
{ /* Ieee/string.scm 1341 */
BgL_testz00_11644 = 
isdigit(BgL_cbz00_1841)
; }  else 
{ /* Ieee/string.scm 1341 */
BgL_testz00_11644 = ((bool_t)0)
; } 
if(BgL_testz00_11644)
{ /* Ieee/string.scm 1342 */
bool_t BgL_testz00_11648;
if(
(BgL_caz00_1840==((unsigned char)'0')))
{ /* Ieee/string.scm 1342 */
BgL_testz00_11648 = 
(BgL_cbz00_1841==((unsigned char)'0'))
; }  else 
{ /* Ieee/string.scm 1342 */
BgL_testz00_11648 = ((bool_t)0)
; } 
if(BgL_testz00_11648)
{ 
long BgL_ibz00_11654;long BgL_iaz00_11652;
BgL_iaz00_11652 = 
(BgL_iaz00_1837+((long)1)); 
BgL_ibz00_11654 = 
(BgL_ibz00_1838+((long)1)); 
BgL_ibz00_1838 = BgL_ibz00_11654; 
BgL_iaz00_1837 = BgL_iaz00_11652; 
goto BgL_zc3anonymousza31959ze3z83_1839;}  else 
{ /* Ieee/string.scm 1344 */
obj_t BgL_resultz00_1854;
{ /* Ieee/string.scm 1344 */
bool_t BgL_testz00_11656;
if(
(BgL_caz00_1840==((unsigned char)'0')))
{ /* Ieee/string.scm 1344 */
BgL_testz00_11656 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1344 */
BgL_testz00_11656 = 
(BgL_cbz00_1841==((unsigned char)'0'))
; } 
if(BgL_testz00_11656)
{ /* Ieee/string.scm 1344 */
BgL_resultz00_1854 = 
BGl_comparezd2leftzd2zz__r4_strings_6_7z00(BgL_az00_230, BgL_iaz00_1837, BgL_bz00_231, BgL_ibz00_1838); }  else 
{ /* Ieee/string.scm 1344 */
BgL_resultz00_1854 = 
BGl_comparezd2rightzd2zz__r4_strings_6_7z00(BgL_az00_230, BgL_iaz00_1837, BgL_bz00_231, BgL_ibz00_1838); } } 
if(
INTEGERP(BgL_resultz00_1854))
{ 
long BgL_ibz00_11667;long BgL_iaz00_11664;
BgL_iaz00_11664 = 
(BgL_iaz00_1837+
(long)CINT(BgL_resultz00_1854)); 
BgL_ibz00_11667 = 
(BgL_ibz00_1838+
(long)CINT(BgL_resultz00_1854)); 
BgL_ibz00_1838 = BgL_ibz00_11667; 
BgL_iaz00_1837 = BgL_iaz00_11664; 
goto BgL_zc3anonymousza31959ze3z83_1839;}  else 
{ /* Ieee/string.scm 1348 */
if(
CBOOL(BgL_resultz00_1854))
{ /* Ieee/string.scm 1350 */
return 
BINT(((long)1));}  else 
{ /* Ieee/string.scm 1350 */
return 
BINT(((long)-1));} } } }  else 
{ /* Ieee/string.scm 1354 */
bool_t BgL_testz00_11674;
if(
(BgL_caz00_1840==((unsigned char)'\000')))
{ /* Ieee/string.scm 1354 */
BgL_testz00_11674 = 
(BgL_cbz00_1841==((unsigned char)'\000'))
; }  else 
{ /* Ieee/string.scm 1354 */
BgL_testz00_11674 = ((bool_t)0)
; } 
if(BgL_testz00_11674)
{ /* Ieee/string.scm 1354 */
return 
BINT(((long)0));}  else 
{ /* Ieee/string.scm 1356 */
bool_t BgL_testz00_11679;
if(BgL_foldcasez00_232)
{ /* Ieee/string.scm 1356 */
BgL_caz00_1840 = 
toupper(BgL_caz00_1840); 
BgL_cbz00_1841 = 
toupper(BgL_cbz00_1841); 
BgL_testz00_11679 = ((bool_t)0); }  else 
{ /* Ieee/string.scm 1356 */
BgL_testz00_11679 = ((bool_t)0)
; } 
if(BgL_testz00_11679)
{ /* Ieee/string.scm 1356 */
return BGl_symbol3681z00zz__r4_strings_6_7z00;}  else 
{ /* Ieee/string.scm 1356 */
if(
(BgL_caz00_1840<BgL_cbz00_1841))
{ /* Ieee/string.scm 1361 */
return 
BINT(((long)-1));}  else 
{ /* Ieee/string.scm 1361 */
if(
(BgL_caz00_1840>BgL_cbz00_1841))
{ /* Ieee/string.scm 1363 */
return 
BINT(((long)1));}  else 
{ 
long BgL_ibz00_11691;long BgL_iaz00_11689;
BgL_iaz00_11689 = 
(BgL_iaz00_1837+((long)1)); 
BgL_ibz00_11691 = 
(BgL_ibz00_1838+((long)1)); 
BgL_ibz00_1838 = BgL_ibz00_11691; 
BgL_iaz00_1837 = BgL_iaz00_11689; 
goto BgL_zc3anonymousza31959ze3z83_1839;} } } } } } } } } 
}



/* compare-right */
obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t BgL_az00_233, long BgL_iaz00_234, obj_t BgL_bz00_235, long BgL_ibz00_236)
{ AN_OBJECT;
{ /* Ieee/string.scm 1371 */
{ 
obj_t BgL_biasz00_1871;long BgL_iz00_1872;
BgL_biasz00_1871 = BUNSPEC; 
BgL_iz00_1872 = ((long)0); 
BgL_zc3anonymousza31983ze3z83_1873:
{ /* Ieee/string.scm 1374 */
unsigned char BgL_caz00_1874;unsigned char BgL_cbz00_1875;
{ /* Ieee/string.scm 1374 */
long BgL_iz00_3690;
BgL_iz00_3690 = 
(BgL_iz00_1872+BgL_iaz00_234); 
if(
(BgL_iz00_3690>=
STRING_LENGTH(BgL_az00_233)))
{ /* Ieee/string.scm 1374 */
BgL_caz00_1874 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1374 */
long BgL_l2587z00_4420;
BgL_l2587z00_4420 = 
STRING_LENGTH(BgL_az00_233); 
if(
BOUND_CHECK(BgL_iz00_3690, BgL_l2587z00_4420))
{ /* Ieee/string.scm 1374 */
BgL_caz00_1874 = 
STRING_REF(BgL_az00_233, BgL_iz00_3690); }  else 
{ 
obj_t BgL_auxz00_11701;
BgL_auxz00_11701 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)54967)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3690), BgL_az00_233); 
FAILURE(BgL_auxz00_11701,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1375 */
long BgL_iz00_3701;
BgL_iz00_3701 = 
(BgL_iz00_1872+BgL_ibz00_236); 
if(
(BgL_iz00_3701>=
STRING_LENGTH(BgL_bz00_235)))
{ /* Ieee/string.scm 1375 */
BgL_cbz00_1875 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1375 */
long BgL_l2591z00_4424;
BgL_l2591z00_4424 = 
STRING_LENGTH(BgL_bz00_235); 
if(
BOUND_CHECK(BgL_iz00_3701, BgL_l2591z00_4424))
{ /* Ieee/string.scm 1375 */
BgL_cbz00_1875 = 
STRING_REF(BgL_bz00_235, BgL_iz00_3701); }  else 
{ 
obj_t BgL_auxz00_11714;
BgL_auxz00_11714 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)55000)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3701), BgL_bz00_235); 
FAILURE(BgL_auxz00_11714,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1377 */
bool_t BgL_testz00_11719;
if(
isdigit(BgL_caz00_1874))
{ /* Ieee/string.scm 1377 */
BgL_testz00_11719 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1377 */
if(
isdigit(BgL_cbz00_1875))
{ /* Ieee/string.scm 1377 */
BgL_testz00_11719 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1377 */
BgL_testz00_11719 = ((bool_t)1)
; } } 
if(BgL_testz00_11719)
{ /* Ieee/string.scm 1377 */
if(
(BgL_biasz00_1871==BUNSPEC))
{ /* Ieee/string.scm 1378 */
return 
BINT(BgL_iz00_1872);}  else 
{ /* Ieee/string.scm 1378 */
return BgL_biasz00_1871;} }  else 
{ /* Ieee/string.scm 1377 */
if(
isdigit(BgL_caz00_1874))
{ /* Ieee/string.scm 1379 */
if(
isdigit(BgL_cbz00_1875))
{ /* Ieee/string.scm 1381 */
if(
(BgL_caz00_1874<BgL_cbz00_1875))
{ 
long BgL_iz00_11736;obj_t BgL_biasz00_11733;
if(
(BgL_biasz00_1871==BUNSPEC))
{ /* Ieee/string.scm 1384 */
BgL_biasz00_11733 = BFALSE; }  else 
{ /* Ieee/string.scm 1384 */
BgL_biasz00_11733 = BgL_biasz00_1871; } 
BgL_iz00_11736 = 
(BgL_iz00_1872+((long)1)); 
BgL_iz00_1872 = BgL_iz00_11736; 
BgL_biasz00_1871 = BgL_biasz00_11733; 
goto BgL_zc3anonymousza31983ze3z83_1873;}  else 
{ /* Ieee/string.scm 1383 */
if(
(BgL_caz00_1874>BgL_cbz00_1875))
{ 
long BgL_iz00_11743;obj_t BgL_biasz00_11740;
if(
(BgL_biasz00_1871==BUNSPEC))
{ /* Ieee/string.scm 1386 */
BgL_biasz00_11740 = BTRUE; }  else 
{ /* Ieee/string.scm 1386 */
BgL_biasz00_11740 = BgL_biasz00_1871; } 
BgL_iz00_11743 = 
(BgL_iz00_1872+((long)1)); 
BgL_iz00_1872 = BgL_iz00_11743; 
BgL_biasz00_1871 = BgL_biasz00_11740; 
goto BgL_zc3anonymousza31983ze3z83_1873;}  else 
{ /* Ieee/string.scm 1387 */
bool_t BgL_testz00_11745;
if(
(BgL_caz00_1874==((unsigned char)'\000')))
{ /* Ieee/string.scm 1387 */
BgL_testz00_11745 = 
(BgL_cbz00_1875==((unsigned char)'\000'))
; }  else 
{ /* Ieee/string.scm 1387 */
BgL_testz00_11745 = ((bool_t)0)
; } 
if(BgL_testz00_11745)
{ /* Ieee/string.scm 1387 */
if(
(BgL_biasz00_1871==BUNSPEC))
{ /* Ieee/string.scm 1388 */
return 
BINT(BgL_iz00_1872);}  else 
{ /* Ieee/string.scm 1388 */
return BgL_biasz00_1871;} }  else 
{ 
long BgL_iz00_11752;
BgL_iz00_11752 = 
(BgL_iz00_1872+((long)1)); 
BgL_iz00_1872 = BgL_iz00_11752; 
goto BgL_zc3anonymousza31983ze3z83_1873;} } } }  else 
{ /* Ieee/string.scm 1381 */
return BTRUE;} }  else 
{ /* Ieee/string.scm 1379 */
return BFALSE;} } } } } } 
}



/* compare-left */
obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t BgL_az00_237, long BgL_iaz00_238, obj_t BgL_bz00_239, long BgL_ibz00_240)
{ AN_OBJECT;
{ /* Ieee/string.scm 1395 */
{ 
long BgL_iz00_1898;
BgL_iz00_1898 = ((long)0); 
BgL_zc3anonymousza32004ze3z83_1899:
{ /* Ieee/string.scm 1397 */
unsigned char BgL_caz00_1900;unsigned char BgL_cbz00_1901;
{ /* Ieee/string.scm 1397 */
long BgL_iz00_3730;
BgL_iz00_3730 = 
(BgL_iaz00_238+BgL_iz00_1898); 
if(
(BgL_iz00_3730>=
STRING_LENGTH(BgL_az00_237)))
{ /* Ieee/string.scm 1397 */
BgL_caz00_1900 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1397 */
long BgL_l2595z00_4428;
BgL_l2595z00_4428 = 
STRING_LENGTH(BgL_az00_237); 
if(
BOUND_CHECK(BgL_iz00_3730, BgL_l2595z00_4428))
{ /* Ieee/string.scm 1397 */
BgL_caz00_1900 = 
STRING_REF(BgL_az00_237, BgL_iz00_3730); }  else 
{ 
obj_t BgL_auxz00_11762;
BgL_auxz00_11762 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)55812)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3730), BgL_az00_237); 
FAILURE(BgL_auxz00_11762,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1398 */
long BgL_iz00_3741;
BgL_iz00_3741 = 
(BgL_ibz00_240+BgL_iz00_1898); 
if(
(BgL_iz00_3741>=
STRING_LENGTH(BgL_bz00_239)))
{ /* Ieee/string.scm 1398 */
BgL_cbz00_1901 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1398 */
long BgL_l2599z00_4432;
BgL_l2599z00_4432 = 
STRING_LENGTH(BgL_bz00_239); 
if(
BOUND_CHECK(BgL_iz00_3741, BgL_l2599z00_4432))
{ /* Ieee/string.scm 1398 */
BgL_cbz00_1901 = 
STRING_REF(BgL_bz00_239, BgL_iz00_3741); }  else 
{ 
obj_t BgL_auxz00_11775;
BgL_auxz00_11775 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)55845)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_3741), BgL_bz00_239); 
FAILURE(BgL_auxz00_11775,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1400 */
bool_t BgL_testz00_11780;
if(
isdigit(BgL_caz00_1900))
{ /* Ieee/string.scm 1400 */
BgL_testz00_11780 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1400 */
if(
isdigit(BgL_cbz00_1901))
{ /* Ieee/string.scm 1400 */
BgL_testz00_11780 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1400 */
BgL_testz00_11780 = ((bool_t)1)
; } } 
if(BgL_testz00_11780)
{ /* Ieee/string.scm 1400 */
return 
BINT(BgL_iz00_1898);}  else 
{ /* Ieee/string.scm 1400 */
if(
isdigit(BgL_caz00_1900))
{ /* Ieee/string.scm 1402 */
if(
isdigit(BgL_cbz00_1901))
{ /* Ieee/string.scm 1404 */
if(
(BgL_caz00_1900<BgL_cbz00_1901))
{ /* Ieee/string.scm 1406 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1406 */
if(
(BgL_caz00_1900>BgL_cbz00_1901))
{ /* Ieee/string.scm 1408 */
return BTRUE;}  else 
{ 
long BgL_iz00_11794;
BgL_iz00_11794 = 
(BgL_iz00_1898+((long)1)); 
BgL_iz00_1898 = BgL_iz00_11794; 
goto BgL_zc3anonymousza32004ze3z83_1899;} } }  else 
{ /* Ieee/string.scm 1404 */
return BTRUE;} }  else 
{ /* Ieee/string.scm 1402 */
return BFALSE;} } } } } } 
}



/* hex-string-ref */
obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t BgL_strz00_243, long BgL_iz00_244)
{ AN_OBJECT;
{ /* Ieee/string.scm 1424 */
{ /* Ieee/string.scm 1425 */
unsigned char BgL_nz00_1915;
{ /* Ieee/string.scm 1425 */
long BgL_l2603z00_4436;
BgL_l2603z00_4436 = 
STRING_LENGTH(BgL_strz00_243); 
if(
BOUND_CHECK(BgL_iz00_244, BgL_l2603z00_4436))
{ /* Ieee/string.scm 1425 */
BgL_nz00_1915 = 
STRING_REF(BgL_strz00_243, BgL_iz00_244); }  else 
{ 
obj_t BgL_auxz00_11800;
BgL_auxz00_11800 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)56725)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_244), BgL_strz00_243); 
FAILURE(BgL_auxz00_11800,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 1427 */
bool_t BgL_testz00_11805;
if(
(BgL_nz00_1915>=((unsigned char)'0')))
{ /* Ieee/string.scm 1427 */
BgL_testz00_11805 = 
(BgL_nz00_1915<=((unsigned char)'9'))
; }  else 
{ /* Ieee/string.scm 1427 */
BgL_testz00_11805 = ((bool_t)0)
; } 
if(BgL_testz00_11805)
{ /* Ieee/string.scm 1427 */
return 
BINT(
(
(BgL_nz00_1915)-((long)48)));}  else 
{ /* Ieee/string.scm 1429 */
bool_t BgL_testz00_11812;
if(
(BgL_nz00_1915>=((unsigned char)'a')))
{ /* Ieee/string.scm 1429 */
BgL_testz00_11812 = 
(BgL_nz00_1915<=((unsigned char)'f'))
; }  else 
{ /* Ieee/string.scm 1429 */
BgL_testz00_11812 = ((bool_t)0)
; } 
if(BgL_testz00_11812)
{ /* Ieee/string.scm 1429 */
return 
BINT(
(((long)10)+
(
(BgL_nz00_1915)-((long)97))));}  else 
{ /* Ieee/string.scm 1431 */
bool_t BgL_testz00_11820;
if(
(BgL_nz00_1915>=((unsigned char)'A')))
{ /* Ieee/string.scm 1431 */
BgL_testz00_11820 = 
(BgL_nz00_1915<=((unsigned char)'F'))
; }  else 
{ /* Ieee/string.scm 1431 */
BgL_testz00_11820 = ((bool_t)0)
; } 
if(BgL_testz00_11820)
{ /* Ieee/string.scm 1431 */
return 
BINT(
(((long)10)+
(
(BgL_nz00_1915)-((long)65))));}  else 
{ /* Ieee/string.scm 1431 */
return 
BGl_errorz00zz__errorz00(BGl_symbol3683z00zz__r4_strings_6_7z00, BGl_string3685z00zz__r4_strings_6_7z00, BgL_strz00_243);} } } } } } 
}



/* string-hex-intern */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t BgL_strz00_245)
{ AN_OBJECT;
{ /* Ieee/string.scm 1441 */
{ /* Ieee/string.scm 1442 */
long BgL_lenz00_1932;
BgL_lenz00_1932 = 
STRING_LENGTH(BgL_strz00_245); 
if(
ODDP_FX(BgL_lenz00_1932))
{ /* Ieee/string.scm 1444 */
obj_t BgL_aux3485z00_5319;
BgL_aux3485z00_5319 = 
BGl_errorz00zz__errorz00(BGl_symbol3686z00zz__r4_strings_6_7z00, BGl_string3688z00zz__r4_strings_6_7z00, BgL_strz00_245); 
if(
STRINGP(BgL_aux3485z00_5319))
{ /* Ieee/string.scm 1444 */
return BgL_aux3485z00_5319;}  else 
{ 
obj_t BgL_auxz00_11835;
BgL_auxz00_11835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)57453)), BGl_string3689z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux3485z00_5319); 
FAILURE(BgL_auxz00_11835,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 1445 */
obj_t BgL_resz00_1934;
BgL_resz00_1934 = 
make_string(
(BgL_lenz00_1932/((long)2)), ((unsigned char)' ')); 
{ 
long BgL_iz00_1936;long BgL_jz00_1937;
BgL_iz00_1936 = ((long)0); 
BgL_jz00_1937 = ((long)0); 
BgL_zc3anonymousza32038ze3z83_1938:
if(
(BgL_iz00_1936==BgL_lenz00_1932))
{ /* Ieee/string.scm 1448 */
return BgL_resz00_1934;}  else 
{ /* Ieee/string.scm 1450 */
obj_t BgL_c1z00_1940;
BgL_c1z00_1940 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_245, BgL_iz00_1936); 
{ /* Ieee/string.scm 1450 */
obj_t BgL_c2z00_1941;
BgL_c2z00_1941 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_245, 
(BgL_iz00_1936+((long)1))); 
{ /* Ieee/string.scm 1451 */
long BgL_cz00_1942;
{ /* Ieee/string.scm 1452 */
long BgL_za72za7_3811;
{ /* Ieee/string.scm 1452 */
obj_t BgL_auxz00_11846;
if(
INTEGERP(BgL_c2z00_1941))
{ /* Ieee/string.scm 1452 */
BgL_auxz00_11846 = BgL_c2z00_1941
; }  else 
{ 
obj_t BgL_auxz00_11849;
BgL_auxz00_11849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)57705)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_c2z00_1941); 
FAILURE(BgL_auxz00_11849,BFALSE,BFALSE);} 
BgL_za72za7_3811 = 
(long)CINT(BgL_auxz00_11846); } 
{ /* Ieee/string.scm 1452 */
long BgL_auxz00_11854;
{ /* Ieee/string.scm 1452 */
long BgL_za71za7_3808;
{ /* Ieee/string.scm 1452 */
obj_t BgL_auxz00_11855;
if(
INTEGERP(BgL_c1z00_1940))
{ /* Ieee/string.scm 1452 */
BgL_auxz00_11855 = BgL_c1z00_1940
; }  else 
{ 
obj_t BgL_auxz00_11858;
BgL_auxz00_11858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)57715)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_c1z00_1940); 
FAILURE(BgL_auxz00_11858,BFALSE,BFALSE);} 
BgL_za71za7_3808 = 
(long)CINT(BgL_auxz00_11855); } 
BgL_auxz00_11854 = 
(BgL_za71za7_3808*((long)16)); } 
BgL_cz00_1942 = 
(BgL_auxz00_11854+BgL_za72za7_3811); } } 
{ /* Ieee/string.scm 1452 */

{ /* Ieee/string.scm 1453 */
unsigned char BgL_arg2040z00_1943;
BgL_arg2040z00_1943 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_1942); 
{ /* Ieee/string.scm 1453 */
long BgL_l2607z00_4440;
BgL_l2607z00_4440 = 
STRING_LENGTH(BgL_resz00_1934); 
if(
BOUND_CHECK(BgL_jz00_1937, BgL_l2607z00_4440))
{ /* Ieee/string.scm 1453 */
STRING_SET(BgL_resz00_1934, BgL_jz00_1937, BgL_arg2040z00_1943); }  else 
{ 
obj_t BgL_auxz00_11870;
BgL_auxz00_11870 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)57737)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1937), BgL_resz00_1934); 
FAILURE(BgL_auxz00_11870,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_11877;long BgL_iz00_11875;
BgL_iz00_11875 = 
(BgL_iz00_1936+((long)2)); 
BgL_jz00_11877 = 
(BgL_jz00_1937+((long)1)); 
BgL_jz00_1937 = BgL_jz00_11877; 
BgL_iz00_1936 = BgL_iz00_11875; 
goto BgL_zc3anonymousza32038ze3z83_1938;} } } } } } } } } 
}



/* _string-hex-intern */
obj_t BGl__stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4044, obj_t BgL_strz00_4045)
{ AN_OBJECT;
{ /* Ieee/string.scm 1441 */
{ /* Ieee/string.scm 1442 */
obj_t BgL_auxz00_11879;
if(
STRINGP(BgL_strz00_4045))
{ /* Ieee/string.scm 1442 */
BgL_auxz00_11879 = BgL_strz00_4045
; }  else 
{ 
obj_t BgL_auxz00_11882;
BgL_auxz00_11882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)57394)), BGl_string3690z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4045); 
FAILURE(BgL_auxz00_11882,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(BgL_auxz00_11879);} } 
}



/* string-hex-intern! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t BgL_strz00_246)
{ AN_OBJECT;
{ /* Ieee/string.scm 1459 */
{ /* Ieee/string.scm 1460 */
long BgL_lenz00_1951;
BgL_lenz00_1951 = 
STRING_LENGTH(BgL_strz00_246); 
if(
ODDP_FX(BgL_lenz00_1951))
{ /* Ieee/string.scm 1462 */
obj_t BgL_aux3497z00_5331;
BgL_aux3497z00_5331 = 
BGl_errorz00zz__errorz00(BGl_symbol3691z00zz__r4_strings_6_7z00, BGl_string3688z00zz__r4_strings_6_7z00, BgL_strz00_246); 
if(
STRINGP(BgL_aux3497z00_5331))
{ /* Ieee/string.scm 1462 */
return BgL_aux3497z00_5331;}  else 
{ 
obj_t BgL_auxz00_11893;
BgL_auxz00_11893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58136)), BGl_string3692z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_aux3497z00_5331); 
FAILURE(BgL_auxz00_11893,BFALSE,BFALSE);} }  else 
{ 
long BgL_iz00_1954;long BgL_jz00_1955;
BgL_iz00_1954 = ((long)0); 
BgL_jz00_1955 = ((long)0); 
BgL_zc3anonymousza32048ze3z83_1956:
if(
(BgL_iz00_1954==BgL_lenz00_1951))
{ /* Ieee/string.scm 1466 */
long BgL_auxz00_11899;
BgL_auxz00_11899 = 
(BgL_lenz00_1951/((long)2)); 
return 
bgl_string_shrink(BgL_strz00_246, BgL_auxz00_11899);}  else 
{ /* Ieee/string.scm 1467 */
obj_t BgL_c1z00_1959;
BgL_c1z00_1959 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_246, BgL_iz00_1954); 
{ /* Ieee/string.scm 1467 */
obj_t BgL_c2z00_1960;
BgL_c2z00_1960 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_246, 
(BgL_iz00_1954+((long)1))); 
{ /* Ieee/string.scm 1468 */
long BgL_cz00_1961;
{ /* Ieee/string.scm 1469 */
long BgL_za72za7_3832;
{ /* Ieee/string.scm 1469 */
obj_t BgL_auxz00_11905;
if(
INTEGERP(BgL_c2z00_1960))
{ /* Ieee/string.scm 1469 */
BgL_auxz00_11905 = BgL_c2z00_1960
; }  else 
{ 
obj_t BgL_auxz00_11908;
BgL_auxz00_11908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58376)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_c2z00_1960); 
FAILURE(BgL_auxz00_11908,BFALSE,BFALSE);} 
BgL_za72za7_3832 = 
(long)CINT(BgL_auxz00_11905); } 
{ /* Ieee/string.scm 1469 */
long BgL_auxz00_11913;
{ /* Ieee/string.scm 1469 */
long BgL_za71za7_3829;
{ /* Ieee/string.scm 1469 */
obj_t BgL_auxz00_11914;
if(
INTEGERP(BgL_c1z00_1959))
{ /* Ieee/string.scm 1469 */
BgL_auxz00_11914 = BgL_c1z00_1959
; }  else 
{ 
obj_t BgL_auxz00_11917;
BgL_auxz00_11917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58386)), BGl_string3567z00zz__r4_strings_6_7z00, BGl_string3518z00zz__r4_strings_6_7z00, BgL_c1z00_1959); 
FAILURE(BgL_auxz00_11917,BFALSE,BFALSE);} 
BgL_za71za7_3829 = 
(long)CINT(BgL_auxz00_11914); } 
BgL_auxz00_11913 = 
(BgL_za71za7_3829*((long)16)); } 
BgL_cz00_1961 = 
(BgL_auxz00_11913+BgL_za72za7_3832); } } 
{ /* Ieee/string.scm 1469 */

{ /* Ieee/string.scm 1470 */
unsigned char BgL_arg2052z00_1962;
BgL_arg2052z00_1962 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_1961); 
{ /* Ieee/string.scm 1470 */
long BgL_l2611z00_4444;
BgL_l2611z00_4444 = 
STRING_LENGTH(BgL_strz00_246); 
if(
BOUND_CHECK(BgL_jz00_1955, BgL_l2611z00_4444))
{ /* Ieee/string.scm 1470 */
STRING_SET(BgL_strz00_246, BgL_jz00_1955, BgL_arg2052z00_1962); }  else 
{ 
obj_t BgL_auxz00_11929;
BgL_auxz00_11929 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58405)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1955), BgL_strz00_246); 
FAILURE(BgL_auxz00_11929,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_11936;long BgL_iz00_11934;
BgL_iz00_11934 = 
(BgL_iz00_1954+((long)2)); 
BgL_jz00_11936 = 
(BgL_jz00_1955+((long)1)); 
BgL_jz00_1955 = BgL_jz00_11936; 
BgL_iz00_1954 = BgL_iz00_11934; 
goto BgL_zc3anonymousza32048ze3z83_1956;} } } } } } } } 
}



/* _string-hex-intern! */
obj_t BGl__stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t BgL_envz00_4046, obj_t BgL_strz00_4047)
{ AN_OBJECT;
{ /* Ieee/string.scm 1459 */
{ /* Ieee/string.scm 1460 */
obj_t BgL_auxz00_11938;
if(
STRINGP(BgL_strz00_4047))
{ /* Ieee/string.scm 1460 */
BgL_auxz00_11938 = BgL_strz00_4047
; }  else 
{ 
obj_t BgL_auxz00_11941;
BgL_auxz00_11941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58077)), BGl_string3693z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4047); 
FAILURE(BgL_auxz00_11941,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(BgL_auxz00_11938);} } 
}



/* string-hex-extern */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t BgL_strz00_247)
{ AN_OBJECT;
{ /* Ieee/string.scm 1476 */
{ /* Ieee/string.scm 1479 */
long BgL_lenz00_1969;
BgL_lenz00_1969 = 
STRING_LENGTH(BgL_strz00_247); 
{ /* Ieee/string.scm 1479 */
obj_t BgL_resz00_1970;
BgL_resz00_1970 = 
make_string(
(((long)2)*BgL_lenz00_1969), ((unsigned char)' ')); 
{ /* Ieee/string.scm 1480 */

{ 
long BgL_iz00_1972;long BgL_jz00_1973;
BgL_iz00_1972 = ((long)0); 
BgL_jz00_1973 = ((long)0); 
BgL_zc3anonymousza32057ze3z83_1974:
if(
(BgL_iz00_1972==BgL_lenz00_1969))
{ /* Ieee/string.scm 1483 */
return BgL_resz00_1970;}  else 
{ /* Ieee/string.scm 1485 */
long BgL_nz00_1976;
{ /* Ieee/string.scm 1485 */
unsigned char BgL_auxz00_11951;
{ /* Ieee/string.scm 1485 */
long BgL_l2615z00_4448;
BgL_l2615z00_4448 = 
STRING_LENGTH(BgL_strz00_247); 
if(
BOUND_CHECK(BgL_iz00_1972, BgL_l2615z00_4448))
{ /* Ieee/string.scm 1485 */
BgL_auxz00_11951 = 
STRING_REF(BgL_strz00_247, BgL_iz00_1972)
; }  else 
{ 
obj_t BgL_auxz00_11956;
BgL_auxz00_11956 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58970)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_iz00_1972), BgL_strz00_247); 
FAILURE(BgL_auxz00_11956,BFALSE,BFALSE);} } 
BgL_nz00_1976 = 
(BgL_auxz00_11951); } 
{ /* Ieee/string.scm 1485 */
long BgL_d0z00_1977;
BgL_d0z00_1977 = 
(BgL_nz00_1976%((long)16)); 
{ /* Ieee/string.scm 1486 */
long BgL_d1z00_1978;
BgL_d1z00_1978 = 
(BgL_nz00_1976/((long)16)); 
{ /* Ieee/string.scm 1487 */

{ /* Ieee/string.scm 1488 */
unsigned char BgL_arg2059z00_1979;
if(
BOUND_CHECK(BgL_d1z00_1978, ((long)16)))
{ /* Ieee/string.scm 1488 */
BgL_arg2059z00_1979 = 
STRING_REF(BGl_string3694z00zz__r4_strings_6_7z00, BgL_d1z00_1978); }  else 
{ 
obj_t BgL_auxz00_11967;
BgL_auxz00_11967 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)59065)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_d1z00_1978), BGl_string3694z00zz__r4_strings_6_7z00); 
FAILURE(BgL_auxz00_11967,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1488 */
long BgL_l2623z00_4456;
BgL_l2623z00_4456 = 
STRING_LENGTH(BgL_resz00_1970); 
if(
BOUND_CHECK(BgL_jz00_1973, BgL_l2623z00_4456))
{ /* Ieee/string.scm 1488 */
STRING_SET(BgL_resz00_1970, BgL_jz00_1973, BgL_arg2059z00_1979); }  else 
{ 
obj_t BgL_auxz00_11976;
BgL_auxz00_11976 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)59046)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_jz00_1973), BgL_resz00_1970); 
FAILURE(BgL_auxz00_11976,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1489 */
long BgL_arg2060z00_1980;unsigned char BgL_arg2061z00_1981;
BgL_arg2060z00_1980 = 
(BgL_jz00_1973+((long)1)); 
if(
BOUND_CHECK(BgL_d0z00_1977, ((long)16)))
{ /* Ieee/string.scm 1489 */
BgL_arg2061z00_1981 = 
STRING_REF(BGl_string3694z00zz__r4_strings_6_7z00, BgL_d0z00_1977); }  else 
{ 
obj_t BgL_auxz00_11985;
BgL_auxz00_11985 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)59113)), BGl_string3522z00zz__r4_strings_6_7z00, 
BINT(BgL_d0z00_1977), BGl_string3694z00zz__r4_strings_6_7z00); 
FAILURE(BgL_auxz00_11985,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1489 */
long BgL_l2631z00_4464;
BgL_l2631z00_4464 = 
STRING_LENGTH(BgL_resz00_1970); 
if(
BOUND_CHECK(BgL_arg2060z00_1980, BgL_l2631z00_4464))
{ /* Ieee/string.scm 1489 */
STRING_SET(BgL_resz00_1970, BgL_arg2060z00_1980, BgL_arg2061z00_1981); }  else 
{ 
obj_t BgL_auxz00_11994;
BgL_auxz00_11994 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)59086)), BGl_string3524z00zz__r4_strings_6_7z00, 
BINT(BgL_arg2060z00_1980), BgL_resz00_1970); 
FAILURE(BgL_auxz00_11994,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_12001;long BgL_iz00_11999;
BgL_iz00_11999 = 
(BgL_iz00_1972+((long)1)); 
BgL_jz00_12001 = 
(BgL_jz00_1973+((long)2)); 
BgL_jz00_1973 = BgL_jz00_12001; 
BgL_iz00_1972 = BgL_iz00_11999; 
goto BgL_zc3anonymousza32057ze3z83_1974;} } } } } } } } } } 
}



/* _string-hex-extern */
obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t BgL_envz00_4048, obj_t BgL_strz00_4049)
{ AN_OBJECT;
{ /* Ieee/string.scm 1476 */
{ /* Ieee/string.scm 1479 */
obj_t BgL_auxz00_12003;
if(
STRINGP(BgL_strz00_4049))
{ /* Ieee/string.scm 1479 */
BgL_auxz00_12003 = BgL_strz00_4049
; }  else 
{ 
obj_t BgL_auxz00_12006;
BgL_auxz00_12006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3511z00zz__r4_strings_6_7z00, 
BINT(((long)58809)), BGl_string3695z00zz__r4_strings_6_7z00, BGl_string3513z00zz__r4_strings_6_7z00, BgL_strz00_4049); 
FAILURE(BgL_auxz00_12006,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(BgL_auxz00_12003);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00()
{ AN_OBJECT;
{ /* Ieee/string.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3696z00zz__r4_strings_6_7z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3696z00zz__r4_strings_6_7z00));} 
}

#ifdef __cplusplus
}
#endif
