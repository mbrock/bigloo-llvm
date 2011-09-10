/*===========================================================================*/
/*   (Llib/unicode.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/unicode.scm -indent -o objs/obj_s/Llib/unicode.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t, obj_t, long, obj_t);
static obj_t BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t, obj_t);
static obj_t BGl_symbol2986z00zz__unicodez00 = BUNSPEC;
static obj_t BGl__cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
static obj_t BGl__utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_string_ge(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t);
extern bool_t ucs2_string_gt(obj_t, obj_t);
static long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t, long);
static obj_t BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_string_le(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
extern bool_t ucs2_strcmp(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t, obj_t);
static obj_t BGl__utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t, obj_t);
extern bool_t ucs2_string_lt(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t, obj_t);
extern obj_t make_string_sans_fill(long);
static obj_t BGl_requirezd2initializa7ationz75zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t, obj_t);
extern obj_t ucs2_string_to_utf8_string(obj_t);
static obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t);
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl_vector2899z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t, int, int);
static obj_t BGl__inversezd2utf8zd2tablez00zz__unicodez00(obj_t, obj_t);
extern obj_t string_for_read(obj_t);
static obj_t BGl_makezd2tablezd2entryz00zz__unicodez00(obj_t, long);
static long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t, long, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_strcicmp(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t);
static obj_t BGl_loopz72z72z00zz__unicodez00(obj_t);
static obj_t BGl__ucs2zd2stringzd2appendz00zz__unicodez00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__unicodez00();
BGL_EXPORTED_DECL obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t);
static obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t, obj_t, long, obj_t);
static obj_t BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t);
static obj_t BGl__ucs2zd2stringzd2copyz00zz__unicodez00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00();
static obj_t BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t);
static obj_t BGl__ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t, obj_t);
static obj_t BGl__cp1252zd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
static obj_t BGl__utf8zd2ze3cp1252z31zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t, int, ucs2_t);
BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
extern obj_t ucs2_string_append(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_addzd2tablezd2entryz00zz__unicodez00(obj_t, obj_t, long);
static obj_t BGl_8bitszd2invzd2zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2872z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2873z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2874z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2875z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2876z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_list2877z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2878z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2880z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2879z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2881z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2882z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2883z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2884z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2885z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2886z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2887z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2888z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2900z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2890z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2889z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2891z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2892z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2893z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2894z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2895z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__unicodez00();
static obj_t BGl_list2896z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2897z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_list2898z00zz__unicodez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t, int, int);
static obj_t BGl__utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t, obj_t);
extern long bgl_list_length(obj_t);
extern obj_t make_string(long, unsigned char);
extern obj_t make_ucs2_string(int, ucs2_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, int, ucs2_t);
static obj_t BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int, ucs2_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t, ucs2_t);
static obj_t BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
extern bool_t ucs2_string_cige(obj_t, obj_t);
extern ucs2_t ucs2_tolower(ucs2_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t);
extern bool_t ucs2_string_cigt(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t);
static obj_t BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t, obj_t);
extern bool_t ucs2_string_cile(obj_t, obj_t);
static obj_t BGl__subucs2zd2stringzd2urz00zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern bool_t ucs2_string_cilt(obj_t, obj_t);
static obj_t BGl_loopz00zz__unicodez00(long, long, obj_t, long);
static obj_t BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t, obj_t);
static obj_t BGl_cp1252zd2invzd2zz__unicodez00 = BUNSPEC;
static obj_t BGl__utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t, int);
static obj_t BGl__8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2refz00zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t);
static obj_t BGl_cp1252z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_loopz72z72zz__unicodez00(obj_t, obj_t);
static obj_t BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t, obj_t, obj_t);
extern obj_t utf8_string_to_ucs2_string(obj_t);
extern obj_t c_ucs2_string_copy(obj_t);
BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t);
static obj_t BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t, obj_t);
static obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl__8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t, obj_t);
extern ucs2_t ucs2_toupper(ucs2_t);
static obj_t BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2929z00zz__unicodez00 = BUNSPEC;
static obj_t BGl__ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t);
static obj_t BGl_methodzd2initzd2zz__unicodez00();
extern obj_t c_subucs2_string(obj_t, int, int);
static obj_t BGl_symbol2938z00zz__unicodez00 = BUNSPEC;
static obj_t BGl_symbol2943z00zz__unicodez00 = BUNSPEC;
static obj_t BGl__subucs2zd2stringzd2zz__unicodez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
static obj_t BGl__ucs2zd2stringzd2zz__unicodez00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2setz12zd2envzc0zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3013z00, BGl__ucs2zd2stringzd2setz12z12zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizc3zf3zd2envze2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3014z00, BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_isozd2latinzd2ze3utf8zd2envz31zz__unicodez00, BgL_bgl__isoza7d2latinza7d2za73015za7, BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_isozd2latinzd2ze3utf8z12zd2envz23zz__unicodez00, BgL_bgl__isoza7d2latinza7d2za73016za7, BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzf3zd2envzf3zz__unicodez00, BgL_bgl__utf8za7d2stringza7f3017z00, BGl__utf8zd2stringzf3z21zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2copyzd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3018z00, BGl__ucs2zd2stringzd2copyz00zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inversezd2utf8zd2tablezd2envzd2zz__unicodez00, BgL_bgl__inverseza7d2utf8za73019z00, BGl__inversezd2utf8zd2tablez00zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd3zf3zd2envz20zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3020z00, BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2ze3listzd2envz31zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3021z00, BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cp1252zd2ze3utf8z12zd2envzf1zz__unicodez00, BgL_bgl__cp1252za7d2za7e3utf3022z00, BGl__cp1252zd2ze3utf8z12z23zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3cp1252z12zd2envzf1zz__unicodez00, BgL_bgl__utf8za7d2za7e3cp1253023z00, BGl__utf8zd2ze3cp1252z12z23zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze38bitsz12zd2envzf1zz__unicodez00, BgL_bgl__utf8za7d2za7e38bits3024z00, BGl__utf8zd2ze38bitsz12z23zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cize3zf3zd2envzc2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3025z00, BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2lengthzd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3026z00, BGl__ucs2zd2stringzd2lengthz00zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3ucs2zd2stringzd2envz31zz__unicodez00, BgL_bgl__listza7d2za7e3ucs2za73027za7, BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3000z00zz__unicodez00, BgL_bgl_string3000za700za7za7_3028za7, "table-ref-len", 13 );
DEFINE_STRING( BGl_string3001z00zz__unicodez00, BgL_bgl_string3001za700za7za7_3029za7, "_8bits->utf8", 12 );
DEFINE_STRING( BGl_string2901z00zz__unicodez00, BgL_bgl_string2901za700za7za7_3030za7, "\342\202\254", 3 );
DEFINE_STRING( BGl_string3002z00zz__unicodez00, BgL_bgl_string3002za700za7za7_3031za7, "_8bits->utf8!", 13 );
DEFINE_STRING( BGl_string2902z00zz__unicodez00, BgL_bgl_string2902za700za7za7_3032za7, "", 0 );
DEFINE_STRING( BGl_string3003z00zz__unicodez00, BgL_bgl_string3003za700za7za7_3033za7, "_iso-latin->utf8", 16 );
DEFINE_STRING( BGl_string2903z00zz__unicodez00, BgL_bgl_string2903za700za7za7_3034za7, "\342\200\232", 3 );
DEFINE_STRING( BGl_string3004z00zz__unicodez00, BgL_bgl_string3004za700za7za7_3035za7, "_iso-latin->utf8!", 17 );
DEFINE_STRING( BGl_string2904z00zz__unicodez00, BgL_bgl_string2904za700za7za7_3036za7, "\306\222", 2 );
DEFINE_STRING( BGl_string3005z00zz__unicodez00, BgL_bgl_string3005za700za7za7_3037za7, "_cp1252->utf8", 13 );
DEFINE_STRING( BGl_string2905z00zz__unicodez00, BgL_bgl_string2905za700za7za7_3038za7, "\342\200\236", 3 );
DEFINE_STRING( BGl_string3006z00zz__unicodez00, BgL_bgl_string3006za700za7za7_3039za7, "_cp1252->utf8!", 14 );
DEFINE_STRING( BGl_string2906z00zz__unicodez00, BgL_bgl_string2906za700za7za7_3040za7, "\342\200\246", 3 );
DEFINE_STRING( BGl_string3007z00zz__unicodez00, BgL_bgl_string3007za700za7za7_3041za7, "__unicode", 9 );
DEFINE_STRING( BGl_string2907z00zz__unicodez00, BgL_bgl_string2907za700za7za7_3042za7, "\342\200\240", 3 );
DEFINE_STRING( BGl_string2908z00zz__unicodez00, BgL_bgl_string2908za700za7za7_3043za7, "\342\200\241", 3 );
DEFINE_STRING( BGl_string2910z00zz__unicodez00, BgL_bgl_string2910za700za7za7_3044za7, "\342\200\260", 3 );
DEFINE_STRING( BGl_string2909z00zz__unicodez00, BgL_bgl_string2909za700za7za7_3045za7, "\313\206", 2 );
DEFINE_STRING( BGl_string2911z00zz__unicodez00, BgL_bgl_string2911za700za7za7_3046za7, "\305\240", 2 );
DEFINE_STRING( BGl_string2912z00zz__unicodez00, BgL_bgl_string2912za700za7za7_3047za7, "\342\200\271", 3 );
DEFINE_STRING( BGl_string2913z00zz__unicodez00, BgL_bgl_string2913za700za7za7_3048za7, "\305\222", 2 );
DEFINE_STRING( BGl_string2914z00zz__unicodez00, BgL_bgl_string2914za700za7za7_3049za7, "\305\275", 2 );
DEFINE_STRING( BGl_string2915z00zz__unicodez00, BgL_bgl_string2915za700za7za7_3050za7, "\342\200\230", 3 );
DEFINE_STRING( BGl_string2916z00zz__unicodez00, BgL_bgl_string2916za700za7za7_3051za7, "\342\200\231", 3 );
DEFINE_STRING( BGl_string2917z00zz__unicodez00, BgL_bgl_string2917za700za7za7_3052za7, "\342\200\234", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_8bitszd2ze3utf8zd2envze3zz__unicodez00, BgL_bgl__8bitsza7d2za7e3utf83053z00, BGl__8bitszd2ze3utf8z31zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2918z00zz__unicodez00, BgL_bgl_string2918za700za7za7_3054za7, "\342\200\235", 3 );
DEFINE_STRING( BGl_string2920z00zz__unicodez00, BgL_bgl_string2920za700za7za7_3055za7, "\342\200\223", 3 );
DEFINE_STRING( BGl_string2919z00zz__unicodez00, BgL_bgl_string2919za700za7za7_3056za7, "\342\200\242", 3 );
DEFINE_STRING( BGl_string2921z00zz__unicodez00, BgL_bgl_string2921za700za7za7_3057za7, "\342\200\224", 3 );
DEFINE_STRING( BGl_string2922z00zz__unicodez00, BgL_bgl_string2922za700za7za7_3058za7, "\313\234", 2 );
DEFINE_STRING( BGl_string2923z00zz__unicodez00, BgL_bgl_string2923za700za7za7_3059za7, "\342\204\242", 3 );
DEFINE_STRING( BGl_string2924z00zz__unicodez00, BgL_bgl_string2924za700za7za7_3060za7, "\305\241", 2 );
DEFINE_STRING( BGl_string2925z00zz__unicodez00, BgL_bgl_string2925za700za7za7_3061za7, "\342\200\272", 3 );
DEFINE_STRING( BGl_string2926z00zz__unicodez00, BgL_bgl_string2926za700za7za7_3062za7, "\305\223", 2 );
DEFINE_STRING( BGl_string2927z00zz__unicodez00, BgL_bgl_string2927za700za7za7_3063za7, "\305\276", 2 );
DEFINE_STRING( BGl_string2928z00zz__unicodez00, BgL_bgl_string2928za700za7za7_3064za7, "\305\270", 2 );
DEFINE_STRING( BGl_string2930z00zz__unicodez00, BgL_bgl_string2930za700za7za7_3065za7, "make-ucs2-string", 16 );
DEFINE_STRING( BGl_string2931z00zz__unicodez00, BgL_bgl_string2931za700za7za7_3066za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2932z00zz__unicodez00, BgL_bgl_string2932za700za7za7_3067za7, "/tmp/bigloo/runtime/Llib/unicode.scm", 36 );
DEFINE_STRING( BGl_string2933z00zz__unicodez00, BgL_bgl_string2933za700za7za7_3068za7, "_make-ucs2-string", 17 );
DEFINE_STRING( BGl_string2934z00zz__unicodez00, BgL_bgl_string2934za700za7za7_3069za7, "int", 3 );
DEFINE_STRING( BGl_string2935z00zz__unicodez00, BgL_bgl_string2935za700za7za7_3070za7, "ucs2", 4 );
DEFINE_STRING( BGl_string2936z00zz__unicodez00, BgL_bgl_string2936za700za7za7_3071za7, "_ucs2-string-length", 19 );
DEFINE_STRING( BGl_string2937z00zz__unicodez00, BgL_bgl_string2937za700za7za7_3072za7, "ucs2string", 10 );
DEFINE_STRING( BGl_string2940z00zz__unicodez00, BgL_bgl_string2940za700za7za7_3073za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string2939z00zz__unicodez00, BgL_bgl_string2939za700za7za7_3074za7, "ucs2-string-ref", 15 );
DEFINE_STRING( BGl_string2941z00zz__unicodez00, BgL_bgl_string2941za700za7za7_3075za7, "]", 1 );
DEFINE_STRING( BGl_string2942z00zz__unicodez00, BgL_bgl_string2942za700za7za7_3076za7, "_ucs2-string-ref", 16 );
DEFINE_STRING( BGl_string2944z00zz__unicodez00, BgL_bgl_string2944za700za7za7_3077za7, "ucs2-string-set!", 16 );
DEFINE_STRING( BGl_string2945z00zz__unicodez00, BgL_bgl_string2945za700za7za7_3078za7, "_ucs2-string-set!", 17 );
DEFINE_STRING( BGl_string2946z00zz__unicodez00, BgL_bgl_string2946za700za7za7_3079za7, "_ucs2-string-ref-ur", 19 );
DEFINE_STRING( BGl_string2947z00zz__unicodez00, BgL_bgl_string2947za700za7za7_3080za7, "_ucs2-string-set-ur!", 20 );
DEFINE_STRING( BGl_string2948z00zz__unicodez00, BgL_bgl_string2948za700za7za7_3081za7, "_ucs2-string=?", 14 );
DEFINE_STRING( BGl_string2950z00zz__unicodez00, BgL_bgl_string2950za700za7za7_3082za7, "_ucs2-string<?", 14 );
DEFINE_STRING( BGl_string2949z00zz__unicodez00, BgL_bgl_string2949za700za7za7_3083za7, "_ucs2-string-ci=?", 17 );
DEFINE_STRING( BGl_string2951z00zz__unicodez00, BgL_bgl_string2951za700za7za7_3084za7, "_ucs2-string>?", 14 );
DEFINE_STRING( BGl_string2952z00zz__unicodez00, BgL_bgl_string2952za700za7za7_3085za7, "_ucs2-string<=?", 15 );
DEFINE_STRING( BGl_string2953z00zz__unicodez00, BgL_bgl_string2953za700za7za7_3086za7, "_ucs2-string>=?", 15 );
DEFINE_STRING( BGl_string2954z00zz__unicodez00, BgL_bgl_string2954za700za7za7_3087za7, "_ucs2-string-ci<?", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_8bitszd2ze3utf8z12zd2envzf1zz__unicodez00, BgL_bgl__8bitsza7d2za7e3utf83088z00, BGl__8bitszd2ze3utf8z12z23zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2955z00zz__unicodez00, BgL_bgl_string2955za700za7za7_3089za7, "_ucs2-string-ci>?", 17 );
DEFINE_STRING( BGl_string2956z00zz__unicodez00, BgL_bgl_string2956za700za7za7_3090za7, "_ucs2-string-ci<=?", 18 );
DEFINE_STRING( BGl_string2957z00zz__unicodez00, BgL_bgl_string2957za700za7za7_3091za7, "_ucs2-string-ci>=?", 18 );
DEFINE_STRING( BGl_string2958z00zz__unicodez00, BgL_bgl_string2958za700za7za7_3092za7, "subucs2-string", 14 );
DEFINE_STRING( BGl_string2960z00zz__unicodez00, BgL_bgl_string2960za700za7za7_3093za7, "_subucs2-string", 15 );
DEFINE_STRING( BGl_string2959z00zz__unicodez00, BgL_bgl_string2959za700za7za7_3094za7, "Illegal index", 13 );
DEFINE_STRING( BGl_string2961z00zz__unicodez00, BgL_bgl_string2961za700za7za7_3095za7, "_subucs2-string-ur", 18 );
DEFINE_STRING( BGl_string2962z00zz__unicodez00, BgL_bgl_string2962za700za7za7_3096za7, "ucs2-string-append", 18 );
DEFINE_STRING( BGl_string2963z00zz__unicodez00, BgL_bgl_string2963za700za7za7_3097za7, "loop''", 6 );
DEFINE_STRING( BGl_string2964z00zz__unicodez00, BgL_bgl_string2964za700za7za7_3098za7, "pair", 4 );
DEFINE_STRING( BGl_string2965z00zz__unicodez00, BgL_bgl_string2965za700za7za7_3099za7, "list->ucs2-string", 17 );
DEFINE_STRING( BGl_string2966z00zz__unicodez00, BgL_bgl_string2966za700za7za7_3100za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2967z00zz__unicodez00, BgL_bgl_string2967za700za7za7_3101za7, "loop", 4 );
DEFINE_STRING( BGl_string2968z00zz__unicodez00, BgL_bgl_string2968za700za7za7_3102za7, "_ucs2-string->list", 18 );
DEFINE_STRING( BGl_string2970z00zz__unicodez00, BgL_bgl_string2970za700za7za7_3103za7, "_ucs2-string-fill!", 18 );
DEFINE_STRING( BGl_string2969z00zz__unicodez00, BgL_bgl_string2969za700za7za7_3104za7, "_ucs2-string-copy", 17 );
DEFINE_STRING( BGl_string2971z00zz__unicodez00, BgL_bgl_string2971za700za7za7_3105za7, "_ucs2-string-upcase", 19 );
DEFINE_STRING( BGl_string2972z00zz__unicodez00, BgL_bgl_string2972za700za7za7_3106za7, "_ucs2-string-downcase", 21 );
DEFINE_STRING( BGl_string2973z00zz__unicodez00, BgL_bgl_string2973za700za7za7_3107za7, "_ucs2-string-upcase!", 20 );
DEFINE_STRING( BGl_string2974z00zz__unicodez00, BgL_bgl_string2974za700za7za7_3108za7, "_ucs2-string-downcase!", 22 );
DEFINE_STRING( BGl_string2975z00zz__unicodez00, BgL_bgl_string2975za700za7za7_3109za7, "_ucs2-string->utf8-string", 25 );
DEFINE_STRING( BGl_string2976z00zz__unicodez00, BgL_bgl_string2976za700za7za7_3110za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string2977z00zz__unicodez00, BgL_bgl_string2977za700za7za7_3111za7, "bstring", 7 );
DEFINE_STRING( BGl_string2978z00zz__unicodez00, BgL_bgl_string2978za700za7za7_3112za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2980z00zz__unicodez00, BgL_bgl_string2980za700za7za7_3113za7, "loop'", 5 );
DEFINE_STRING( BGl_string2979z00zz__unicodez00, BgL_bgl_string2979za700za7za7_3114za7, "make-table-entry", 16 );
DEFINE_STRING( BGl_string2981z00zz__unicodez00, BgL_bgl_string2981za700za7za7_3115za7, "add-table-entry", 15 );
DEFINE_STRING( BGl_string2982z00zz__unicodez00, BgL_bgl_string2982za700za7za7_3116za7, "_inverse-utf8-table", 19 );
DEFINE_STRING( BGl_string2983z00zz__unicodez00, BgL_bgl_string2983za700za7za7_3117za7, "vector", 6 );
DEFINE_STRING( BGl_string2984z00zz__unicodez00, BgL_bgl_string2984za700za7za7_3118za7, "_utf8-string->ucs2-string", 25 );
DEFINE_STRING( BGl_string2985z00zz__unicodez00, BgL_bgl_string2985za700za7za7_3119za7, "_utf8-string?", 13 );
DEFINE_STRING( BGl_string2987z00zz__unicodez00, BgL_bgl_string2987za700za7za7_3120za7, "utf8->8bits", 11 );
DEFINE_STRING( BGl_string2988z00zz__unicodez00, BgL_bgl_string2988za700za7za7_3121za7, "String too short", 16 );
DEFINE_STRING( BGl_string2990z00zz__unicodez00, BgL_bgl_string2990za700za7za7_3122za7, "string-set!", 11 );
DEFINE_STRING( BGl_string2989z00zz__unicodez00, BgL_bgl_string2989za700za7za7_3123za7, "Illegal string", 14 );
DEFINE_STRING( BGl_string2991z00zz__unicodez00, BgL_bgl_string2991za700za7za7_3124za7, "liip", 4 );
DEFINE_STRING( BGl_string2992z00zz__unicodez00, BgL_bgl_string2992za700za7za7_3125za7, "uchar", 5 );
DEFINE_STRING( BGl_string2993z00zz__unicodez00, BgL_bgl_string2993za700za7za7_3126za7, "_utf8->8bits", 12 );
DEFINE_STRING( BGl_string2994z00zz__unicodez00, BgL_bgl_string2994za700za7za7_3127za7, "utf8->8bits!", 12 );
DEFINE_STRING( BGl_string2995z00zz__unicodez00, BgL_bgl_string2995za700za7za7_3128za7, "_utf8->8bits!", 13 );
DEFINE_STRING( BGl_string2996z00zz__unicodez00, BgL_bgl_string2996za700za7za7_3129za7, "_utf8->iso-latin", 16 );
DEFINE_STRING( BGl_string2997z00zz__unicodez00, BgL_bgl_string2997za700za7za7_3130za7, "_utf8->iso-latin!", 17 );
DEFINE_STRING( BGl_string2998z00zz__unicodez00, BgL_bgl_string2998za700za7za7_3131za7, "_utf8->cp1252", 13 );
DEFINE_STRING( BGl_string2999z00zz__unicodez00, BgL_bgl_string2999za700za7za7_3132za7, "_utf8->cp1252!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subucs2zd2stringzd2envz00zz__unicodez00, BgL_bgl__subucs2za7d2strin3133za7, BGl__subucs2zd2stringzd2zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cp1252zd2ze3utf8zd2envze3zz__unicodez00, BgL_bgl__cp1252za7d2za7e3utf3134z00, BGl__cp1252zd2ze3utf8z31zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3cp1252zd2envze3zz__unicodez00, BgL_bgl__utf8za7d2za7e3cp1253135z00, BGl__utf8zd2ze3cp1252z31zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2setzd2urz12zd2envz12zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3136z00, BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2upcasez12zd2envzc0zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3137z00, BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzc3zf3zd2envz30zz__unicodez00, BgL_bgl__ucs2za7d2stringza7c3138z00, BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringze3zd3zf3zd2envzc3zz__unicodez00, BgL_bgl__ucs2za7d2stringza7e3139z00, BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinz12zd2envz23zz__unicodez00, BgL_bgl__utf8za7d2za7e3isoza7d3140za7, BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2downcasez12zd2envzc0zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3141z00, BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzc3zd3zf3zd2envze3zz__unicodez00, BgL_bgl__ucs2za7d2stringza7c3142z00, BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2ze3utf8zd2stringzd2envze3zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3143z00, BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2envz00zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3144z00, va_generic_entry, BGl__ucs2zd2stringzd2zz__unicodez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2fillz12zd2envzc0zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3145z00, BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2refzd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3146z00, BGl__ucs2zd2stringzd2refz00zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizd3zf3zd2envzf2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3147z00, BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze38bitszd2envze3zz__unicodez00, BgL_bgl__utf8za7d2za7e38bits3148z00, BGl__utf8zd2ze38bitsz31zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2ze3isozd2latinzd2envz31zz__unicodez00, BgL_bgl__utf8za7d2za7e3isoza7d3149za7, BGl__utf8zd2ze3isozd2latinze3zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2downcasezd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3150z00, BGl__ucs2zd2stringzd2downcasez00zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_utf8zd2stringzd2ze3ucs2zd2stringzd2envze3zz__unicodez00, BgL_bgl__utf8za7d2stringza7d3151z00, BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2ucs2zd2stringzd2envzd2zz__unicodez00, BgL_bgl__makeza7d2ucs2za7d2s3152z00, opt_generic_entry, BGl__makezd2ucs2zd2stringz00zz__unicodez00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cize3zd3zf3zd2envz11zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3153z00, BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2upcasezd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3154z00, BGl__ucs2zd2stringzd2upcasez00zz__unicodez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringze3zf3zd2envz10zz__unicodez00, BgL_bgl__ucs2za7d2stringza7e3155z00, BGl__ucs2zd2stringze3zf3zc2zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2cizc3zd3zf3zd2envz31zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3156z00, BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2appendzd2envzd2zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3157z00, va_generic_entry, BGl__ucs2zd2stringzd2appendz00zz__unicodez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzd2refzd2urzd2envz00zz__unicodez00, BgL_bgl__ucs2za7d2stringza7d3158z00, BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_subucs2zd2stringzd2urzd2envzd2zz__unicodez00, BgL_bgl__subucs2za7d2strin3159za7, BGl__subucs2zd2stringzd2urz00zz__unicodez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2stringzf3zd2envzf3zz__unicodez00, BgL_bgl__ucs2za7d2stringza7f3160z00, BGl__ucs2zd2stringzf3z21zz__unicodez00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long BgL_checksumz00_3416, char * BgL_fromz00_3417)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__unicodez00))
{ 
BGl_requirezd2initializa7ationz75zz__unicodez00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__unicodez00(); 
BGl_importedzd2moduleszd2initz00zz__unicodez00(); 
BGl_toplevelzd2initzd2zz__unicodez00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__unicodez00()
{ AN_OBJECT;
{ /* Llib/unicode.scm 14 */
BGl_list2875z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)144)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2876z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)145)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2877z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)146)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2878z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)147)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2879z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)148)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2880z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)149)), 
BCHAR(((unsigned char)'-'))); 
BGl_list2881z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)152)), 
BCHAR(((unsigned char)'`'))); 
BGl_list2882z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)153)), 
BCHAR(((unsigned char)'\''))); 
BGl_list2883z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)154)), 
BCHAR(((unsigned char)','))); 
BGl_list2884z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)155)), 
BCHAR(((unsigned char)'`'))); 
BGl_list2885z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)164)), 
BCHAR(((unsigned char)'.'))); 
BGl_list2886z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)167)), 
BCHAR(((unsigned char)'.'))); 
BGl_list2887z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)178)), 
BCHAR(((unsigned char)'\''))); 
BGl_list2888z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)179)), 
BCHAR(((unsigned char)'"'))); 
BGl_list2889z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)181)), 
BCHAR(((unsigned char)'`'))); 
BGl_list2890z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)187)), 
BCHAR(((unsigned char)'"'))); 
BGl_list2891z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)184)), 
BCHAR(((unsigned char)'^'))); 
BGl_list2892z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)185)), 
BCHAR(((unsigned char)'<'))); 
BGl_list2893z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)186)), 
BCHAR(((unsigned char)'>'))); 
BGl_list2874z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)128)), 
MAKE_PAIR(BGl_list2875z00zz__unicodez00, 
MAKE_PAIR(BGl_list2876z00zz__unicodez00, 
MAKE_PAIR(BGl_list2877z00zz__unicodez00, 
MAKE_PAIR(BGl_list2878z00zz__unicodez00, 
MAKE_PAIR(BGl_list2879z00zz__unicodez00, 
MAKE_PAIR(BGl_list2880z00zz__unicodez00, 
MAKE_PAIR(BGl_list2881z00zz__unicodez00, 
MAKE_PAIR(BGl_list2882z00zz__unicodez00, 
MAKE_PAIR(BGl_list2883z00zz__unicodez00, 
MAKE_PAIR(BGl_list2884z00zz__unicodez00, 
MAKE_PAIR(BGl_list2885z00zz__unicodez00, 
MAKE_PAIR(BGl_list2886z00zz__unicodez00, 
MAKE_PAIR(BGl_list2887z00zz__unicodez00, 
MAKE_PAIR(BGl_list2888z00zz__unicodez00, 
MAKE_PAIR(BGl_list2889z00zz__unicodez00, 
MAKE_PAIR(BGl_list2890z00zz__unicodez00, 
MAKE_PAIR(BGl_list2891z00zz__unicodez00, 
MAKE_PAIR(BGl_list2892z00zz__unicodez00, 
MAKE_PAIR(BGl_list2893z00zz__unicodez00, BNIL)))))))))))))))))))); 
BGl_list2895z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)131)), 
BCHAR(((unsigned char)'*'))); 
BGl_list2894z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)129)), 
MAKE_PAIR(BGl_list2895z00zz__unicodez00, BNIL)); 
BGl_list2897z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)141)), 
BCHAR(((unsigned char)'('))); 
BGl_list2898z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)142)), 
BCHAR(((unsigned char)')'))); 
BGl_list2896z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)130)), 
MAKE_PAIR(BGl_list2897z00zz__unicodez00, 
MAKE_PAIR(BGl_list2898z00zz__unicodez00, BNIL))); 
BGl_list2873z00zz__unicodez00 = 
MAKE_PAIR(
BINT(((long)226)), 
MAKE_PAIR(BGl_list2874z00zz__unicodez00, 
MAKE_PAIR(BGl_list2894z00zz__unicodez00, 
MAKE_PAIR(BGl_list2896z00zz__unicodez00, BNIL)))); 
BGl_list2872z00zz__unicodez00 = 
MAKE_PAIR(BGl_list2873z00zz__unicodez00, BNIL); 
BGl_list2900z00zz__unicodez00 = 
MAKE_PAIR(BGl_string2901z00zz__unicodez00, 
MAKE_PAIR(BGl_string2902z00zz__unicodez00, 
MAKE_PAIR(BGl_string2903z00zz__unicodez00, 
MAKE_PAIR(BGl_string2904z00zz__unicodez00, 
MAKE_PAIR(BGl_string2905z00zz__unicodez00, 
MAKE_PAIR(BGl_string2906z00zz__unicodez00, 
MAKE_PAIR(BGl_string2907z00zz__unicodez00, 
MAKE_PAIR(BGl_string2908z00zz__unicodez00, 
MAKE_PAIR(BGl_string2909z00zz__unicodez00, 
MAKE_PAIR(BGl_string2910z00zz__unicodez00, 
MAKE_PAIR(BGl_string2911z00zz__unicodez00, 
MAKE_PAIR(BGl_string2912z00zz__unicodez00, 
MAKE_PAIR(BGl_string2913z00zz__unicodez00, 
MAKE_PAIR(BGl_string2902z00zz__unicodez00, 
MAKE_PAIR(BGl_string2914z00zz__unicodez00, 
MAKE_PAIR(BGl_string2902z00zz__unicodez00, 
MAKE_PAIR(BGl_string2902z00zz__unicodez00, 
MAKE_PAIR(BGl_string2915z00zz__unicodez00, 
MAKE_PAIR(BGl_string2916z00zz__unicodez00, 
MAKE_PAIR(BGl_string2917z00zz__unicodez00, 
MAKE_PAIR(BGl_string2918z00zz__unicodez00, 
MAKE_PAIR(BGl_string2919z00zz__unicodez00, 
MAKE_PAIR(BGl_string2920z00zz__unicodez00, 
MAKE_PAIR(BGl_string2921z00zz__unicodez00, 
MAKE_PAIR(BGl_string2922z00zz__unicodez00, 
MAKE_PAIR(BGl_string2923z00zz__unicodez00, 
MAKE_PAIR(BGl_string2924z00zz__unicodez00, 
MAKE_PAIR(BGl_string2925z00zz__unicodez00, 
MAKE_PAIR(BGl_string2926z00zz__unicodez00, 
MAKE_PAIR(BGl_string2902z00zz__unicodez00, 
MAKE_PAIR(BGl_string2927z00zz__unicodez00, 
MAKE_PAIR(BGl_string2928z00zz__unicodez00, BNIL)))))))))))))))))))))))))))))))); 
BGl_vector2899z00zz__unicodez00 = 
BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BGl_list2900z00zz__unicodez00); 
BGl_symbol2929z00zz__unicodez00 = 
bstring_to_symbol(BGl_string2930z00zz__unicodez00); 
BGl_symbol2938z00zz__unicodez00 = 
bstring_to_symbol(BGl_string2939z00zz__unicodez00); 
BGl_symbol2943z00zz__unicodez00 = 
bstring_to_symbol(BGl_string2944z00zz__unicodez00); 
return ( 
BGl_symbol2986z00zz__unicodez00 = 
bstring_to_symbol(BGl_string2987z00zz__unicodez00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__unicodez00()
{ AN_OBJECT;
{ /* Llib/unicode.scm 14 */
BGl_8bitszd2invzd2zz__unicodez00 = BGl_list2872z00zz__unicodez00; 
BGl_cp1252z00zz__unicodez00 = BGl_vector2899z00zz__unicodez00; 
return ( 
BGl_cp1252zd2invzd2zz__unicodez00 = BFALSE, BUNSPEC) ;} 
}



/* ucs2-string? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/unicode.scm 201 */
return 
UCS2_STRINGP(BgL_objz00_1);} 
}



/* _ucs2-string? */
obj_t BGl__ucs2zd2stringzf3z21zz__unicodez00(obj_t BgL_envz00_2846, obj_t BgL_objz00_2847)
{ AN_OBJECT;
{ /* Llib/unicode.scm 201 */
return 
BBOOL(
UCS2_STRINGP(BgL_objz00_2847));} 
}



/* _make-ucs2-string */
obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t BgL_envz00_5, obj_t BgL_optz00_4)
{ AN_OBJECT;
{ /* Llib/unicode.scm 207 */
{ /* Llib/unicode.scm 207 */
obj_t BgL_g1861z00_3320;
BgL_g1861z00_3320 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ 

{ /* Llib/unicode.scm 207 */
int BgL_aux1863z00_3324;
BgL_aux1863z00_3324 = 
VECTOR_LENGTH(BgL_optz00_4); 
switch( 
(long)(BgL_aux1863z00_3324)) { case ((long)1) : 

{ /* Llib/unicode.scm 207 */
ucs2_t BgL_fillerz00_3325;
{ /* Llib/unicode.scm 207 */
int BgL_auxz00_3567;
BgL_auxz00_3567 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_3325 = 
INT_TO_UCS2(BgL_auxz00_3567); } 
{ /* Llib/unicode.scm 207 */

{ /* Llib/unicode.scm 207 */
obj_t BgL_arg1892z00_3326;
BgL_arg1892z00_3326 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ /* Llib/unicode.scm 207 */
int BgL_kz00_3327;
{ /* Llib/unicode.scm 207 */
obj_t BgL_auxz00_3575;
if(
INTEGERP(BgL_arg1892z00_3326))
{ /* Llib/unicode.scm 207 */
BgL_auxz00_3575 = BgL_arg1892z00_3326
; }  else 
{ 
obj_t BgL_auxz00_3578;
BgL_auxz00_3578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)8902)), BGl_string2933z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_arg1892z00_3326); 
FAILURE(BgL_auxz00_3578,BFALSE,BFALSE);} 
BgL_kz00_3327 = 
CINT(BgL_auxz00_3575); } 
return 
make_ucs2_string(BgL_kz00_3327, BgL_fillerz00_3325);} } } } break;case ((long)2) : 

{ /* Llib/unicode.scm 207 */
obj_t BgL_fillerz00_3328;
BgL_fillerz00_3328 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)1))); 
{ /* Llib/unicode.scm 207 */

{ /* Llib/unicode.scm 207 */
obj_t BgL_arg1893z00_3329;
BgL_arg1893z00_3329 = 
VECTOR_REF(BgL_optz00_4,
(int)(((long)0))); 
{ /* Llib/unicode.scm 207 */
int BgL_kz00_3330;ucs2_t BgL_fillerz00_3331;
{ /* Llib/unicode.scm 207 */
obj_t BgL_auxz00_3588;
if(
INTEGERP(BgL_arg1893z00_3329))
{ /* Llib/unicode.scm 207 */
BgL_auxz00_3588 = BgL_arg1893z00_3329
; }  else 
{ 
obj_t BgL_auxz00_3591;
BgL_auxz00_3591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)8902)), BGl_string2933z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_arg1893z00_3329); 
FAILURE(BgL_auxz00_3591,BFALSE,BFALSE);} 
BgL_kz00_3330 = 
CINT(BgL_auxz00_3588); } 
{ /* Llib/unicode.scm 207 */
obj_t BgL_auxz00_3596;
if(
UCS2P(BgL_fillerz00_3328))
{ /* Llib/unicode.scm 207 */
BgL_auxz00_3596 = BgL_fillerz00_3328
; }  else 
{ 
obj_t BgL_auxz00_3599;
BgL_auxz00_3599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)8902)), BGl_string2933z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_fillerz00_3328); 
FAILURE(BgL_auxz00_3599,BFALSE,BFALSE);} 
BgL_fillerz00_3331 = 
CUCS2(BgL_auxz00_3596); } 
return 
make_ucs2_string(BgL_kz00_3330, BgL_fillerz00_3331);} } } } break;
default: 
{ /* Llib/unicode.scm 207 */
obj_t BgL_arg1894z00_3322;int BgL_arg1896z00_3323;
BgL_arg1894z00_3322 = BGl_symbol2929z00zz__unicodez00; 
BgL_arg1896z00_3323 = 
VECTOR_LENGTH(BgL_optz00_4); 
return 
BGl_errorz00zz__errorz00(BgL_arg1894z00_3322, BGl_string2931z00zz__unicodez00, 
BINT(BgL_arg1896z00_3323));} } } } } } 
}



/* make-ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int BgL_kz00_2, ucs2_t BgL_fillerz00_3)
{ AN_OBJECT;
{ /* Llib/unicode.scm 207 */
return 
make_ucs2_string(BgL_kz00_2, BgL_fillerz00_3);} 
}



/* ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t BgL_ucs2sz00_6)
{ AN_OBJECT;
{ /* Llib/unicode.scm 214 */
return 
BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_6);} 
}



/* _ucs2-string */
obj_t BGl__ucs2zd2stringzd2zz__unicodez00(obj_t BgL_envz00_2848, obj_t BgL_ucs2sz00_2849)
{ AN_OBJECT;
{ /* Llib/unicode.scm 214 */
return 
BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_2849);} 
}



/* ucs2-string-length */
BGL_EXPORTED_DEF int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_7)
{ AN_OBJECT;
{ /* Llib/unicode.scm 220 */
return 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_7);} 
}



/* _ucs2-string-length */
obj_t BGl__ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t BgL_envz00_2850, obj_t BgL_ucs2zd2stringzd2_2851)
{ AN_OBJECT;
{ /* Llib/unicode.scm 220 */
{ /* Llib/unicode.scm 221 */
int BgL_auxz00_3614;
{ /* Llib/unicode.scm 221 */
obj_t BgL_ucs2zd2stringzd2_3333;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2851))
{ /* Llib/unicode.scm 221 */
BgL_ucs2zd2stringzd2_3333 = BgL_ucs2zd2stringzd2_2851; }  else 
{ 
obj_t BgL_auxz00_3617;
BgL_auxz00_3617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)9589)), BGl_string2936z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2851); 
FAILURE(BgL_auxz00_3617,BFALSE,BFALSE);} 
BgL_auxz00_3614 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3333); } 
return 
BINT(BgL_auxz00_3614);} } 
}



/* ucs2-string-ref */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_8, int BgL_kz00_9)
{ AN_OBJECT;
{ /* Llib/unicode.scm 226 */
{ /* Llib/unicode.scm 227 */
bool_t BgL_testz00_3623;
{ /* Llib/unicode.scm 227 */
long BgL_auxz00_3626;long BgL_auxz00_3624;
BgL_auxz00_3626 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_8)); 
BgL_auxz00_3624 = 
(long)(BgL_kz00_9); 
BgL_testz00_3623 = 
BOUND_CHECK(BgL_auxz00_3624, BgL_auxz00_3626); } 
if(BgL_testz00_3623)
{ /* Llib/unicode.scm 227 */
return 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_8, BgL_kz00_9);}  else 
{ /* Llib/unicode.scm 227 */
obj_t BgL_arg1898z00_3334;obj_t BgL_arg1899z00_3335;
BgL_arg1898z00_3334 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 227 */
obj_t BgL_arg1901z00_3336;
{ /* Llib/unicode.scm 227 */

BgL_arg1901z00_3336 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_8))-((long)1)), ((long)10)); } 
BgL_arg1899z00_3335 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_3336, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 227 */
obj_t BgL_auxz00_3636;
{ /* Llib/unicode.scm 227 */
obj_t BgL_aux2656z00_3337;
BgL_aux2656z00_3337 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_3334, BgL_arg1899z00_3335, 
BINT(BgL_kz00_9)); 
if(
UCS2P(BgL_aux2656z00_3337))
{ /* Llib/unicode.scm 227 */
BgL_auxz00_3636 = BgL_aux2656z00_3337
; }  else 
{ 
obj_t BgL_auxz00_3641;
BgL_auxz00_3641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)9926)), BGl_string2939z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2656z00_3337); 
FAILURE(BgL_auxz00_3641,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_auxz00_3636);} } } } 
}



/* _ucs2-string-ref */
obj_t BGl__ucs2zd2stringzd2refz00zz__unicodez00(obj_t BgL_envz00_2852, obj_t BgL_ucs2zd2stringzd2_2853, obj_t BgL_kz00_2854)
{ AN_OBJECT;
{ /* Llib/unicode.scm 226 */
{ /* Llib/unicode.scm 227 */
ucs2_t BgL_auxz00_3646;
{ /* Llib/unicode.scm 227 */
obj_t BgL_ucs2zd2stringzd2_3338;int BgL_kz00_3339;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2853))
{ /* Llib/unicode.scm 227 */
BgL_ucs2zd2stringzd2_3338 = BgL_ucs2zd2stringzd2_2853; }  else 
{ 
obj_t BgL_auxz00_3649;
BgL_auxz00_3649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)9926)), BGl_string2942z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2853); 
FAILURE(BgL_auxz00_3649,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 227 */
obj_t BgL_auxz00_3653;
if(
INTEGERP(BgL_kz00_2854))
{ /* Llib/unicode.scm 227 */
BgL_auxz00_3653 = BgL_kz00_2854
; }  else 
{ 
obj_t BgL_auxz00_3656;
BgL_auxz00_3656 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)9926)), BGl_string2942z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_kz00_2854); 
FAILURE(BgL_auxz00_3656,BFALSE,BFALSE);} 
BgL_kz00_3339 = 
CINT(BgL_auxz00_3653); } 
{ /* Llib/unicode.scm 227 */
bool_t BgL_testz00_3661;
{ /* Llib/unicode.scm 227 */
long BgL_auxz00_3664;long BgL_auxz00_3662;
BgL_auxz00_3664 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3338)); 
BgL_auxz00_3662 = 
(long)(BgL_kz00_3339); 
BgL_testz00_3661 = 
BOUND_CHECK(BgL_auxz00_3662, BgL_auxz00_3664); } 
if(BgL_testz00_3661)
{ /* Llib/unicode.scm 227 */
BgL_auxz00_3646 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_3338, BgL_kz00_3339)
; }  else 
{ /* Llib/unicode.scm 227 */
obj_t BgL_arg1898z00_3340;obj_t BgL_arg1899z00_3341;
BgL_arg1898z00_3340 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 227 */
obj_t BgL_arg1901z00_3342;
{ /* Llib/unicode.scm 227 */

BgL_arg1901z00_3342 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3338))-((long)1)), ((long)10)); } 
BgL_arg1899z00_3341 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_3342, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 227 */
obj_t BgL_auxz00_3674;
{ /* Llib/unicode.scm 227 */
obj_t BgL_aux2656z00_3343;
BgL_aux2656z00_3343 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_3340, BgL_arg1899z00_3341, 
BINT(BgL_kz00_3339)); 
if(
UCS2P(BgL_aux2656z00_3343))
{ /* Llib/unicode.scm 227 */
BgL_auxz00_3674 = BgL_aux2656z00_3343
; }  else 
{ 
obj_t BgL_auxz00_3679;
BgL_auxz00_3679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)9926)), BGl_string2939z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2656z00_3343); 
FAILURE(BgL_auxz00_3679,BFALSE,BFALSE);} } 
BgL_auxz00_3646 = 
CUCS2(BgL_auxz00_3674); } } } } 
return 
BUCS2(BgL_auxz00_3646);} } 
}



/* ucs2-string-set! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_10, int BgL_kz00_11, ucs2_t BgL_ucs2z00_12)
{ AN_OBJECT;
{ /* Llib/unicode.scm 239 */
{ /* Llib/unicode.scm 240 */
bool_t BgL_testz00_3685;
{ /* Llib/unicode.scm 240 */
long BgL_auxz00_3688;long BgL_auxz00_3686;
BgL_auxz00_3688 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10)); 
BgL_auxz00_3686 = 
(long)(BgL_kz00_11); 
BgL_testz00_3685 = 
BOUND_CHECK(BgL_auxz00_3686, BgL_auxz00_3688); } 
if(BgL_testz00_3685)
{ /* Llib/unicode.scm 240 */
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_10, BgL_kz00_11, BgL_ucs2z00_12);}  else 
{ /* Llib/unicode.scm 240 */
obj_t BgL_arg1909z00_3344;obj_t BgL_arg1910z00_3345;
BgL_arg1909z00_3344 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 240 */
obj_t BgL_arg1912z00_3346;
{ /* Llib/unicode.scm 240 */

BgL_arg1912z00_3346 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10))-((long)1)), ((long)10)); } 
BgL_arg1910z00_3345 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_3346, BGl_string2941z00zz__unicodez00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1909z00_3344, BgL_arg1910z00_3345, 
BINT(BgL_kz00_11));} } } 
}



/* _ucs2-string-set! */
obj_t BGl__ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t BgL_envz00_2855, obj_t BgL_ucs2zd2stringzd2_2856, obj_t BgL_kz00_2857, obj_t BgL_ucs2z00_2858)
{ AN_OBJECT;
{ /* Llib/unicode.scm 239 */
{ /* Llib/unicode.scm 240 */
obj_t BgL_ucs2zd2stringzd2_3347;int BgL_kz00_3348;ucs2_t BgL_ucs2z00_3349;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2856))
{ /* Llib/unicode.scm 240 */
BgL_ucs2zd2stringzd2_3347 = BgL_ucs2zd2stringzd2_2856; }  else 
{ 
obj_t BgL_auxz00_3702;
BgL_auxz00_3702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)10489)), BGl_string2945z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2856); 
FAILURE(BgL_auxz00_3702,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 240 */
obj_t BgL_auxz00_3706;
if(
INTEGERP(BgL_kz00_2857))
{ /* Llib/unicode.scm 240 */
BgL_auxz00_3706 = BgL_kz00_2857
; }  else 
{ 
obj_t BgL_auxz00_3709;
BgL_auxz00_3709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)10489)), BGl_string2945z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_kz00_2857); 
FAILURE(BgL_auxz00_3709,BFALSE,BFALSE);} 
BgL_kz00_3348 = 
CINT(BgL_auxz00_3706); } 
{ /* Llib/unicode.scm 240 */
obj_t BgL_auxz00_3714;
if(
UCS2P(BgL_ucs2z00_2858))
{ /* Llib/unicode.scm 240 */
BgL_auxz00_3714 = BgL_ucs2z00_2858
; }  else 
{ 
obj_t BgL_auxz00_3717;
BgL_auxz00_3717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)10489)), BGl_string2945z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_ucs2z00_2858); 
FAILURE(BgL_auxz00_3717,BFALSE,BFALSE);} 
BgL_ucs2z00_3349 = 
CUCS2(BgL_auxz00_3714); } 
{ /* Llib/unicode.scm 240 */
bool_t BgL_testz00_3722;
{ /* Llib/unicode.scm 240 */
long BgL_auxz00_3725;long BgL_auxz00_3723;
BgL_auxz00_3725 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3347)); 
BgL_auxz00_3723 = 
(long)(BgL_kz00_3348); 
BgL_testz00_3722 = 
BOUND_CHECK(BgL_auxz00_3723, BgL_auxz00_3725); } 
if(BgL_testz00_3722)
{ /* Llib/unicode.scm 240 */
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_3347, BgL_kz00_3348, BgL_ucs2z00_3349);}  else 
{ /* Llib/unicode.scm 240 */
obj_t BgL_arg1909z00_3350;obj_t BgL_arg1910z00_3351;
BgL_arg1909z00_3350 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 240 */
obj_t BgL_arg1912z00_3352;
{ /* Llib/unicode.scm 240 */

BgL_arg1912z00_3352 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3347))-((long)1)), ((long)10)); } 
BgL_arg1910z00_3351 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_3352, BGl_string2941z00zz__unicodez00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1909z00_3350, BgL_arg1910z00_3351, 
BINT(BgL_kz00_3348));} } } } 
}



/* ucs2-string-ref-ur */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_13, int BgL_kz00_14)
{ AN_OBJECT;
{ /* Llib/unicode.scm 252 */
return 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_13, BgL_kz00_14);} 
}



/* _ucs2-string-ref-ur */
obj_t BGl__ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t BgL_envz00_2859, obj_t BgL_ucs2zd2stringzd2_2860, obj_t BgL_kz00_2861)
{ AN_OBJECT;
{ /* Llib/unicode.scm 252 */
{ /* Llib/unicode.scm 253 */
ucs2_t BgL_auxz00_3738;
{ /* Llib/unicode.scm 253 */
obj_t BgL_ucs2zd2stringzd2_3353;int BgL_kz00_3354;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2860))
{ /* Llib/unicode.scm 253 */
BgL_ucs2zd2stringzd2_3353 = BgL_ucs2zd2stringzd2_2860; }  else 
{ 
obj_t BgL_auxz00_3741;
BgL_auxz00_3741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11027)), BGl_string2946z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2860); 
FAILURE(BgL_auxz00_3741,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 253 */
obj_t BgL_auxz00_3745;
if(
INTEGERP(BgL_kz00_2861))
{ /* Llib/unicode.scm 253 */
BgL_auxz00_3745 = BgL_kz00_2861
; }  else 
{ 
obj_t BgL_auxz00_3748;
BgL_auxz00_3748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11027)), BGl_string2946z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_kz00_2861); 
FAILURE(BgL_auxz00_3748,BFALSE,BFALSE);} 
BgL_kz00_3354 = 
CINT(BgL_auxz00_3745); } 
BgL_auxz00_3738 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_3353, BgL_kz00_3354); } 
return 
BUCS2(BgL_auxz00_3738);} } 
}



/* ucs2-string-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_15, int BgL_kz00_16, ucs2_t BgL_ucs2z00_17)
{ AN_OBJECT;
{ /* Llib/unicode.scm 258 */
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_15, BgL_kz00_16, BgL_ucs2z00_17);} 
}



/* _ucs2-string-set-ur! */
obj_t BGl__ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t BgL_envz00_2862, obj_t BgL_ucs2zd2stringzd2_2863, obj_t BgL_kz00_2864, obj_t BgL_ucs2z00_2865)
{ AN_OBJECT;
{ /* Llib/unicode.scm 258 */
{ /* Llib/unicode.scm 259 */
obj_t BgL_ucs2zd2stringzd2_3355;int BgL_kz00_3356;ucs2_t BgL_ucs2z00_3357;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2863))
{ /* Llib/unicode.scm 259 */
BgL_ucs2zd2stringzd2_3355 = BgL_ucs2zd2stringzd2_2863; }  else 
{ 
obj_t BgL_auxz00_3758;
BgL_auxz00_3758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11345)), BGl_string2947z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2863); 
FAILURE(BgL_auxz00_3758,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 259 */
obj_t BgL_auxz00_3762;
if(
INTEGERP(BgL_kz00_2864))
{ /* Llib/unicode.scm 259 */
BgL_auxz00_3762 = BgL_kz00_2864
; }  else 
{ 
obj_t BgL_auxz00_3765;
BgL_auxz00_3765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11345)), BGl_string2947z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_kz00_2864); 
FAILURE(BgL_auxz00_3765,BFALSE,BFALSE);} 
BgL_kz00_3356 = 
CINT(BgL_auxz00_3762); } 
{ /* Llib/unicode.scm 259 */
obj_t BgL_auxz00_3770;
if(
UCS2P(BgL_ucs2z00_2865))
{ /* Llib/unicode.scm 259 */
BgL_auxz00_3770 = BgL_ucs2z00_2865
; }  else 
{ 
obj_t BgL_auxz00_3773;
BgL_auxz00_3773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11345)), BGl_string2947z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_ucs2z00_2865); 
FAILURE(BgL_auxz00_3773,BFALSE,BFALSE);} 
BgL_ucs2z00_3357 = 
CUCS2(BgL_auxz00_3770); } 
return 
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_3355, BgL_kz00_3356, BgL_ucs2z00_3357);} } 
}



/* ucs2-string=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_18, obj_t BgL_ucs2zd2string2zd2_19)
{ AN_OBJECT;
{ /* Llib/unicode.scm 264 */
return 
ucs2_strcmp(BgL_ucs2zd2string1zd2_18, BgL_ucs2zd2string2zd2_19);} 
}



/* _ucs2-string=? */
obj_t BGl__ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t BgL_envz00_2866, obj_t BgL_ucs2zd2string1zd2_2867, obj_t BgL_ucs2zd2string2zd2_2868)
{ AN_OBJECT;
{ /* Llib/unicode.scm 264 */
{ /* Llib/unicode.scm 265 */
bool_t BgL_auxz00_3780;
{ /* Llib/unicode.scm 265 */
obj_t BgL_ucs2zd2string1zd2_3358;obj_t BgL_ucs2zd2string2zd2_3359;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2867))
{ /* Llib/unicode.scm 265 */
BgL_ucs2zd2string1zd2_3358 = BgL_ucs2zd2string1zd2_2867; }  else 
{ 
obj_t BgL_auxz00_3783;
BgL_auxz00_3783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11669)), BGl_string2948z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2867); 
FAILURE(BgL_auxz00_3783,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2868))
{ /* Llib/unicode.scm 265 */
BgL_ucs2zd2string2zd2_3359 = BgL_ucs2zd2string2zd2_2868; }  else 
{ 
obj_t BgL_auxz00_3789;
BgL_auxz00_3789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)11669)), BGl_string2948z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2868); 
FAILURE(BgL_auxz00_3789,BFALSE,BFALSE);} 
BgL_auxz00_3780 = 
ucs2_strcmp(BgL_ucs2zd2string1zd2_3358, BgL_ucs2zd2string2zd2_3359); } 
return 
BBOOL(BgL_auxz00_3780);} } 
}



/* ucs2-string-ci=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_20, obj_t BgL_ucs2zd2string2zd2_21)
{ AN_OBJECT;
{ /* Llib/unicode.scm 270 */
return 
ucs2_strcicmp(BgL_ucs2zd2string1zd2_20, BgL_ucs2zd2string2zd2_21);} 
}



/* _ucs2-string-ci=? */
obj_t BGl__ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t BgL_envz00_2869, obj_t BgL_ucs2zd2string1zd2_2870, obj_t BgL_ucs2zd2string2zd2_2871)
{ AN_OBJECT;
{ /* Llib/unicode.scm 270 */
{ /* Llib/unicode.scm 271 */
bool_t BgL_auxz00_3796;
{ /* Llib/unicode.scm 271 */
obj_t BgL_ucs2zd2string1zd2_3360;obj_t BgL_ucs2zd2string2zd2_3361;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2870))
{ /* Llib/unicode.scm 271 */
BgL_ucs2zd2string1zd2_3360 = BgL_ucs2zd2string1zd2_2870; }  else 
{ 
obj_t BgL_auxz00_3799;
BgL_auxz00_3799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12000)), BGl_string2949z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2870); 
FAILURE(BgL_auxz00_3799,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2871))
{ /* Llib/unicode.scm 271 */
BgL_ucs2zd2string2zd2_3361 = BgL_ucs2zd2string2zd2_2871; }  else 
{ 
obj_t BgL_auxz00_3805;
BgL_auxz00_3805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12000)), BGl_string2949z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2871); 
FAILURE(BgL_auxz00_3805,BFALSE,BFALSE);} 
BgL_auxz00_3796 = 
ucs2_strcicmp(BgL_ucs2zd2string1zd2_3360, BgL_ucs2zd2string2zd2_3361); } 
return 
BBOOL(BgL_auxz00_3796);} } 
}



/* ucs2-string<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_22, obj_t BgL_ucs2zd2string2zd2_23)
{ AN_OBJECT;
{ /* Llib/unicode.scm 276 */
return 
ucs2_string_lt(BgL_ucs2zd2string1zd2_22, BgL_ucs2zd2string2zd2_23);} 
}



/* _ucs2-string<? */
obj_t BGl__ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t BgL_envz00_2872, obj_t BgL_ucs2zd2string1zd2_2873, obj_t BgL_ucs2zd2string2zd2_2874)
{ AN_OBJECT;
{ /* Llib/unicode.scm 276 */
{ /* Llib/unicode.scm 277 */
bool_t BgL_auxz00_3812;
{ /* Llib/unicode.scm 277 */
obj_t BgL_ucs2zd2string1zd2_3362;obj_t BgL_ucs2zd2string2zd2_3363;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2873))
{ /* Llib/unicode.scm 277 */
BgL_ucs2zd2string1zd2_3362 = BgL_ucs2zd2string1zd2_2873; }  else 
{ 
obj_t BgL_auxz00_3815;
BgL_auxz00_3815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12326)), BGl_string2950z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2873); 
FAILURE(BgL_auxz00_3815,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2874))
{ /* Llib/unicode.scm 277 */
BgL_ucs2zd2string2zd2_3363 = BgL_ucs2zd2string2zd2_2874; }  else 
{ 
obj_t BgL_auxz00_3821;
BgL_auxz00_3821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12326)), BGl_string2950z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2874); 
FAILURE(BgL_auxz00_3821,BFALSE,BFALSE);} 
BgL_auxz00_3812 = 
ucs2_string_lt(BgL_ucs2zd2string1zd2_3362, BgL_ucs2zd2string2zd2_3363); } 
return 
BBOOL(BgL_auxz00_3812);} } 
}



/* ucs2-string>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_24, obj_t BgL_ucs2zd2string2zd2_25)
{ AN_OBJECT;
{ /* Llib/unicode.scm 282 */
return 
ucs2_string_gt(BgL_ucs2zd2string1zd2_24, BgL_ucs2zd2string2zd2_25);} 
}



/* _ucs2-string>? */
obj_t BGl__ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t BgL_envz00_2875, obj_t BgL_ucs2zd2string1zd2_2876, obj_t BgL_ucs2zd2string2zd2_2877)
{ AN_OBJECT;
{ /* Llib/unicode.scm 282 */
{ /* Llib/unicode.scm 283 */
bool_t BgL_auxz00_3828;
{ /* Llib/unicode.scm 283 */
obj_t BgL_ucs2zd2string1zd2_3364;obj_t BgL_ucs2zd2string2zd2_3365;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2876))
{ /* Llib/unicode.scm 283 */
BgL_ucs2zd2string1zd2_3364 = BgL_ucs2zd2string1zd2_2876; }  else 
{ 
obj_t BgL_auxz00_3831;
BgL_auxz00_3831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12653)), BGl_string2951z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2876); 
FAILURE(BgL_auxz00_3831,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2877))
{ /* Llib/unicode.scm 283 */
BgL_ucs2zd2string2zd2_3365 = BgL_ucs2zd2string2zd2_2877; }  else 
{ 
obj_t BgL_auxz00_3837;
BgL_auxz00_3837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12653)), BGl_string2951z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2877); 
FAILURE(BgL_auxz00_3837,BFALSE,BFALSE);} 
BgL_auxz00_3828 = 
ucs2_string_gt(BgL_ucs2zd2string1zd2_3364, BgL_ucs2zd2string2zd2_3365); } 
return 
BBOOL(BgL_auxz00_3828);} } 
}



/* ucs2-string<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_26, obj_t BgL_ucs2zd2string2zd2_27)
{ AN_OBJECT;
{ /* Llib/unicode.scm 288 */
return 
ucs2_string_le(BgL_ucs2zd2string1zd2_26, BgL_ucs2zd2string2zd2_27);} 
}



/* _ucs2-string<=? */
obj_t BGl__ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t BgL_envz00_2878, obj_t BgL_ucs2zd2string1zd2_2879, obj_t BgL_ucs2zd2string2zd2_2880)
{ AN_OBJECT;
{ /* Llib/unicode.scm 288 */
{ /* Llib/unicode.scm 289 */
bool_t BgL_auxz00_3844;
{ /* Llib/unicode.scm 289 */
obj_t BgL_ucs2zd2string1zd2_3366;obj_t BgL_ucs2zd2string2zd2_3367;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2879))
{ /* Llib/unicode.scm 289 */
BgL_ucs2zd2string1zd2_3366 = BgL_ucs2zd2string1zd2_2879; }  else 
{ 
obj_t BgL_auxz00_3847;
BgL_auxz00_3847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12981)), BGl_string2952z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2879); 
FAILURE(BgL_auxz00_3847,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2880))
{ /* Llib/unicode.scm 289 */
BgL_ucs2zd2string2zd2_3367 = BgL_ucs2zd2string2zd2_2880; }  else 
{ 
obj_t BgL_auxz00_3853;
BgL_auxz00_3853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)12981)), BGl_string2952z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2880); 
FAILURE(BgL_auxz00_3853,BFALSE,BFALSE);} 
BgL_auxz00_3844 = 
ucs2_string_le(BgL_ucs2zd2string1zd2_3366, BgL_ucs2zd2string2zd2_3367); } 
return 
BBOOL(BgL_auxz00_3844);} } 
}



/* ucs2-string>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_28, obj_t BgL_ucs2zd2string2zd2_29)
{ AN_OBJECT;
{ /* Llib/unicode.scm 294 */
return 
ucs2_string_ge(BgL_ucs2zd2string1zd2_28, BgL_ucs2zd2string2zd2_29);} 
}



/* _ucs2-string>=? */
obj_t BGl__ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t BgL_envz00_2881, obj_t BgL_ucs2zd2string1zd2_2882, obj_t BgL_ucs2zd2string2zd2_2883)
{ AN_OBJECT;
{ /* Llib/unicode.scm 294 */
{ /* Llib/unicode.scm 295 */
bool_t BgL_auxz00_3860;
{ /* Llib/unicode.scm 295 */
obj_t BgL_ucs2zd2string1zd2_3368;obj_t BgL_ucs2zd2string2zd2_3369;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2882))
{ /* Llib/unicode.scm 295 */
BgL_ucs2zd2string1zd2_3368 = BgL_ucs2zd2string1zd2_2882; }  else 
{ 
obj_t BgL_auxz00_3863;
BgL_auxz00_3863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13309)), BGl_string2953z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2882); 
FAILURE(BgL_auxz00_3863,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2883))
{ /* Llib/unicode.scm 295 */
BgL_ucs2zd2string2zd2_3369 = BgL_ucs2zd2string2zd2_2883; }  else 
{ 
obj_t BgL_auxz00_3869;
BgL_auxz00_3869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13309)), BGl_string2953z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2883); 
FAILURE(BgL_auxz00_3869,BFALSE,BFALSE);} 
BgL_auxz00_3860 = 
ucs2_string_ge(BgL_ucs2zd2string1zd2_3368, BgL_ucs2zd2string2zd2_3369); } 
return 
BBOOL(BgL_auxz00_3860);} } 
}



/* ucs2-string-ci<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_30, obj_t BgL_ucs2zd2string2zd2_31)
{ AN_OBJECT;
{ /* Llib/unicode.scm 300 */
return 
ucs2_string_cilt(BgL_ucs2zd2string1zd2_30, BgL_ucs2zd2string2zd2_31);} 
}



/* _ucs2-string-ci<? */
obj_t BGl__ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t BgL_envz00_2884, obj_t BgL_ucs2zd2string1zd2_2885, obj_t BgL_ucs2zd2string2zd2_2886)
{ AN_OBJECT;
{ /* Llib/unicode.scm 300 */
{ /* Llib/unicode.scm 301 */
bool_t BgL_auxz00_3876;
{ /* Llib/unicode.scm 301 */
obj_t BgL_ucs2zd2string1zd2_3370;obj_t BgL_ucs2zd2string2zd2_3371;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2885))
{ /* Llib/unicode.scm 301 */
BgL_ucs2zd2string1zd2_3370 = BgL_ucs2zd2string1zd2_2885; }  else 
{ 
obj_t BgL_auxz00_3879;
BgL_auxz00_3879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13639)), BGl_string2954z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2885); 
FAILURE(BgL_auxz00_3879,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2886))
{ /* Llib/unicode.scm 301 */
BgL_ucs2zd2string2zd2_3371 = BgL_ucs2zd2string2zd2_2886; }  else 
{ 
obj_t BgL_auxz00_3885;
BgL_auxz00_3885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13639)), BGl_string2954z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2886); 
FAILURE(BgL_auxz00_3885,BFALSE,BFALSE);} 
BgL_auxz00_3876 = 
ucs2_string_cilt(BgL_ucs2zd2string1zd2_3370, BgL_ucs2zd2string2zd2_3371); } 
return 
BBOOL(BgL_auxz00_3876);} } 
}



/* ucs2-string-ci>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_32, obj_t BgL_ucs2zd2string2zd2_33)
{ AN_OBJECT;
{ /* Llib/unicode.scm 306 */
return 
ucs2_string_cigt(BgL_ucs2zd2string1zd2_32, BgL_ucs2zd2string2zd2_33);} 
}



/* _ucs2-string-ci>? */
obj_t BGl__ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t BgL_envz00_2887, obj_t BgL_ucs2zd2string1zd2_2888, obj_t BgL_ucs2zd2string2zd2_2889)
{ AN_OBJECT;
{ /* Llib/unicode.scm 306 */
{ /* Llib/unicode.scm 307 */
bool_t BgL_auxz00_3892;
{ /* Llib/unicode.scm 307 */
obj_t BgL_ucs2zd2string1zd2_3372;obj_t BgL_ucs2zd2string2zd2_3373;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2888))
{ /* Llib/unicode.scm 307 */
BgL_ucs2zd2string1zd2_3372 = BgL_ucs2zd2string1zd2_2888; }  else 
{ 
obj_t BgL_auxz00_3895;
BgL_auxz00_3895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13971)), BGl_string2955z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2888); 
FAILURE(BgL_auxz00_3895,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2889))
{ /* Llib/unicode.scm 307 */
BgL_ucs2zd2string2zd2_3373 = BgL_ucs2zd2string2zd2_2889; }  else 
{ 
obj_t BgL_auxz00_3901;
BgL_auxz00_3901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)13971)), BGl_string2955z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2889); 
FAILURE(BgL_auxz00_3901,BFALSE,BFALSE);} 
BgL_auxz00_3892 = 
ucs2_string_cigt(BgL_ucs2zd2string1zd2_3372, BgL_ucs2zd2string2zd2_3373); } 
return 
BBOOL(BgL_auxz00_3892);} } 
}



/* ucs2-string-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_34, obj_t BgL_ucs2zd2string2zd2_35)
{ AN_OBJECT;
{ /* Llib/unicode.scm 312 */
return 
ucs2_string_cile(BgL_ucs2zd2string1zd2_34, BgL_ucs2zd2string2zd2_35);} 
}



/* _ucs2-string-ci<=? */
obj_t BGl__ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t BgL_envz00_2890, obj_t BgL_ucs2zd2string1zd2_2891, obj_t BgL_ucs2zd2string2zd2_2892)
{ AN_OBJECT;
{ /* Llib/unicode.scm 312 */
{ /* Llib/unicode.scm 313 */
bool_t BgL_auxz00_3908;
{ /* Llib/unicode.scm 313 */
obj_t BgL_ucs2zd2string1zd2_3374;obj_t BgL_ucs2zd2string2zd2_3375;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2891))
{ /* Llib/unicode.scm 313 */
BgL_ucs2zd2string1zd2_3374 = BgL_ucs2zd2string1zd2_2891; }  else 
{ 
obj_t BgL_auxz00_3911;
BgL_auxz00_3911 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)14304)), BGl_string2956z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2891); 
FAILURE(BgL_auxz00_3911,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2892))
{ /* Llib/unicode.scm 313 */
BgL_ucs2zd2string2zd2_3375 = BgL_ucs2zd2string2zd2_2892; }  else 
{ 
obj_t BgL_auxz00_3917;
BgL_auxz00_3917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)14304)), BGl_string2956z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2892); 
FAILURE(BgL_auxz00_3917,BFALSE,BFALSE);} 
BgL_auxz00_3908 = 
ucs2_string_cile(BgL_ucs2zd2string1zd2_3374, BgL_ucs2zd2string2zd2_3375); } 
return 
BBOOL(BgL_auxz00_3908);} } 
}



/* ucs2-string-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t BgL_ucs2zd2string1zd2_36, obj_t BgL_ucs2zd2string2zd2_37)
{ AN_OBJECT;
{ /* Llib/unicode.scm 318 */
return 
ucs2_string_cige(BgL_ucs2zd2string1zd2_36, BgL_ucs2zd2string2zd2_37);} 
}



/* _ucs2-string-ci>=? */
obj_t BGl__ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t BgL_envz00_2893, obj_t BgL_ucs2zd2string1zd2_2894, obj_t BgL_ucs2zd2string2zd2_2895)
{ AN_OBJECT;
{ /* Llib/unicode.scm 318 */
{ /* Llib/unicode.scm 319 */
bool_t BgL_auxz00_3924;
{ /* Llib/unicode.scm 319 */
obj_t BgL_ucs2zd2string1zd2_3376;obj_t BgL_ucs2zd2string2zd2_3377;
if(
UCS2_STRINGP(BgL_ucs2zd2string1zd2_2894))
{ /* Llib/unicode.scm 319 */
BgL_ucs2zd2string1zd2_3376 = BgL_ucs2zd2string1zd2_2894; }  else 
{ 
obj_t BgL_auxz00_3927;
BgL_auxz00_3927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)14637)), BGl_string2957z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string1zd2_2894); 
FAILURE(BgL_auxz00_3927,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_ucs2zd2string2zd2_2895))
{ /* Llib/unicode.scm 319 */
BgL_ucs2zd2string2zd2_3377 = BgL_ucs2zd2string2zd2_2895; }  else 
{ 
obj_t BgL_auxz00_3933;
BgL_auxz00_3933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)14637)), BGl_string2957z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2string2zd2_2895); 
FAILURE(BgL_auxz00_3933,BFALSE,BFALSE);} 
BgL_auxz00_3924 = 
ucs2_string_cige(BgL_ucs2zd2string1zd2_3376, BgL_ucs2zd2string2zd2_3377); } 
return 
BBOOL(BgL_auxz00_3924);} } 
}



/* subucs2-string */
BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_38, int BgL_startz00_39, int BgL_endz00_40)
{ AN_OBJECT;
{ /* Llib/unicode.scm 324 */
{ /* Llib/unicode.scm 326 */
bool_t BgL_testz00_3939;
if(
(
(long)(BgL_endz00_40)>=
(long)(BgL_startz00_39)))
{ /* Llib/unicode.scm 326 */
bool_t BgL_testz00_3944;
{ /* Llib/unicode.scm 326 */
long BgL_auxz00_3947;long BgL_auxz00_3945;
BgL_auxz00_3947 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_38))+((long)1)); 
BgL_auxz00_3945 = 
(long)(BgL_startz00_39); 
BgL_testz00_3944 = 
BOUND_CHECK(BgL_auxz00_3945, BgL_auxz00_3947); } 
if(BgL_testz00_3944)
{ /* Llib/unicode.scm 326 */
long BgL_auxz00_3954;long BgL_auxz00_3952;
BgL_auxz00_3954 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_38))+((long)1)); 
BgL_auxz00_3952 = 
(long)(BgL_endz00_40); 
BgL_testz00_3939 = 
BOUND_CHECK(BgL_auxz00_3952, BgL_auxz00_3954); }  else 
{ /* Llib/unicode.scm 326 */
BgL_testz00_3939 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 326 */
BgL_testz00_3939 = ((bool_t)0)
; } 
if(BgL_testz00_3939)
{ /* Llib/unicode.scm 326 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_38, BgL_startz00_39, BgL_endz00_40);}  else 
{ /* Llib/unicode.scm 326 */
obj_t BgL_arg1923z00_3378;
BgL_arg1923z00_3378 = 
MAKE_PAIR(
BINT(BgL_startz00_39), 
BINT(BgL_endz00_40)); 
{ /* Llib/unicode.scm 326 */
obj_t BgL_aux2718z00_3379;
BgL_aux2718z00_3379 = 
BGl_errorz00zz__errorz00(BGl_string2958z00zz__unicodez00, BGl_string2959z00zz__unicodez00, BgL_arg1923z00_3378); 
if(
UCS2_STRINGP(BgL_aux2718z00_3379))
{ /* Llib/unicode.scm 326 */
return BgL_aux2718z00_3379;}  else 
{ 
obj_t BgL_auxz00_3966;
BgL_auxz00_3966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15014)), BGl_string2958z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_aux2718z00_3379); 
FAILURE(BgL_auxz00_3966,BFALSE,BFALSE);} } } } } 
}



/* _subucs2-string */
obj_t BGl__subucs2zd2stringzd2zz__unicodez00(obj_t BgL_envz00_2896, obj_t BgL_ucs2zd2stringzd2_2897, obj_t BgL_startz00_2898, obj_t BgL_endz00_2899)
{ AN_OBJECT;
{ /* Llib/unicode.scm 324 */
{ /* Llib/unicode.scm 326 */
obj_t BgL_ucs2zd2stringzd2_3380;int BgL_startz00_3381;int BgL_endz00_3382;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2897))
{ /* Llib/unicode.scm 326 */
BgL_ucs2zd2stringzd2_3380 = BgL_ucs2zd2stringzd2_2897; }  else 
{ 
obj_t BgL_auxz00_3972;
BgL_auxz00_3972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15014)), BGl_string2960z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2897); 
FAILURE(BgL_auxz00_3972,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 326 */
obj_t BgL_auxz00_3976;
if(
INTEGERP(BgL_startz00_2898))
{ /* Llib/unicode.scm 326 */
BgL_auxz00_3976 = BgL_startz00_2898
; }  else 
{ 
obj_t BgL_auxz00_3979;
BgL_auxz00_3979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15014)), BGl_string2960z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_startz00_2898); 
FAILURE(BgL_auxz00_3979,BFALSE,BFALSE);} 
BgL_startz00_3381 = 
CINT(BgL_auxz00_3976); } 
{ /* Llib/unicode.scm 326 */
obj_t BgL_auxz00_3984;
if(
INTEGERP(BgL_endz00_2899))
{ /* Llib/unicode.scm 326 */
BgL_auxz00_3984 = BgL_endz00_2899
; }  else 
{ 
obj_t BgL_auxz00_3987;
BgL_auxz00_3987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15014)), BGl_string2960z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_endz00_2899); 
FAILURE(BgL_auxz00_3987,BFALSE,BFALSE);} 
BgL_endz00_3382 = 
CINT(BgL_auxz00_3984); } 
{ /* Llib/unicode.scm 326 */
bool_t BgL_testz00_3992;
if(
(
(long)(BgL_endz00_3382)>=
(long)(BgL_startz00_3381)))
{ /* Llib/unicode.scm 326 */
bool_t BgL_testz00_3997;
{ /* Llib/unicode.scm 326 */
long BgL_auxz00_4000;long BgL_auxz00_3998;
BgL_auxz00_4000 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3380))+((long)1)); 
BgL_auxz00_3998 = 
(long)(BgL_startz00_3381); 
BgL_testz00_3997 = 
BOUND_CHECK(BgL_auxz00_3998, BgL_auxz00_4000); } 
if(BgL_testz00_3997)
{ /* Llib/unicode.scm 326 */
long BgL_auxz00_4007;long BgL_auxz00_4005;
BgL_auxz00_4007 = 
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_3380))+((long)1)); 
BgL_auxz00_4005 = 
(long)(BgL_endz00_3382); 
BgL_testz00_3992 = 
BOUND_CHECK(BgL_auxz00_4005, BgL_auxz00_4007); }  else 
{ /* Llib/unicode.scm 326 */
BgL_testz00_3992 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 326 */
BgL_testz00_3992 = ((bool_t)0)
; } 
if(BgL_testz00_3992)
{ /* Llib/unicode.scm 326 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_3380, BgL_startz00_3381, BgL_endz00_3382);}  else 
{ /* Llib/unicode.scm 326 */
obj_t BgL_arg1923z00_3383;
BgL_arg1923z00_3383 = 
MAKE_PAIR(
BINT(BgL_startz00_3381), 
BINT(BgL_endz00_3382)); 
{ /* Llib/unicode.scm 326 */
obj_t BgL_aux2718z00_3384;
BgL_aux2718z00_3384 = 
BGl_errorz00zz__errorz00(BGl_string2958z00zz__unicodez00, BGl_string2959z00zz__unicodez00, BgL_arg1923z00_3383); 
if(
UCS2_STRINGP(BgL_aux2718z00_3384))
{ /* Llib/unicode.scm 326 */
return BgL_aux2718z00_3384;}  else 
{ 
obj_t BgL_auxz00_4019;
BgL_auxz00_4019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15014)), BGl_string2958z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_aux2718z00_3384); 
FAILURE(BgL_auxz00_4019,BFALSE,BFALSE);} } } } } } 
}



/* subucs2-string-ur */
BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_41, int BgL_startz00_42, int BgL_endz00_43)
{ AN_OBJECT;
{ /* Llib/unicode.scm 339 */
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_41, BgL_startz00_42, BgL_endz00_43);} 
}



/* _subucs2-string-ur */
obj_t BGl__subucs2zd2stringzd2urz00zz__unicodez00(obj_t BgL_envz00_2900, obj_t BgL_ucs2zd2stringzd2_2901, obj_t BgL_startz00_2902, obj_t BgL_endz00_2903)
{ AN_OBJECT;
{ /* Llib/unicode.scm 339 */
{ /* Llib/unicode.scm 340 */
obj_t BgL_ucs2zd2stringzd2_3385;int BgL_startz00_3386;int BgL_endz00_3387;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2901))
{ /* Llib/unicode.scm 340 */
BgL_ucs2zd2stringzd2_3385 = BgL_ucs2zd2stringzd2_2901; }  else 
{ 
obj_t BgL_auxz00_4026;
BgL_auxz00_4026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15625)), BGl_string2961z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2901); 
FAILURE(BgL_auxz00_4026,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 340 */
obj_t BgL_auxz00_4030;
if(
INTEGERP(BgL_startz00_2902))
{ /* Llib/unicode.scm 340 */
BgL_auxz00_4030 = BgL_startz00_2902
; }  else 
{ 
obj_t BgL_auxz00_4033;
BgL_auxz00_4033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15625)), BGl_string2961z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_startz00_2902); 
FAILURE(BgL_auxz00_4033,BFALSE,BFALSE);} 
BgL_startz00_3386 = 
CINT(BgL_auxz00_4030); } 
{ /* Llib/unicode.scm 340 */
obj_t BgL_auxz00_4038;
if(
INTEGERP(BgL_endz00_2903))
{ /* Llib/unicode.scm 340 */
BgL_auxz00_4038 = BgL_endz00_2903
; }  else 
{ 
obj_t BgL_auxz00_4041;
BgL_auxz00_4041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15625)), BGl_string2961z00zz__unicodez00, BGl_string2934z00zz__unicodez00, BgL_endz00_2903); 
FAILURE(BgL_auxz00_4041,BFALSE,BFALSE);} 
BgL_endz00_3387 = 
CINT(BgL_auxz00_4038); } 
return 
c_subucs2_string(BgL_ucs2zd2stringzd2_3385, BgL_startz00_3386, BgL_endz00_3387);} } 
}



/* ucs2-string-append */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t BgL_listz00_44)
{ AN_OBJECT;
{ /* Llib/unicode.scm 345 */
if(
NULLP(BgL_listz00_44))
{ /* Llib/unicode.scm 135 */
ucs2_t BgL_fillerz00_929;
{ /* Llib/unicode.scm 135 */
int BgL_auxz00_4049;
BgL_auxz00_4049 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_929 = 
INT_TO_UCS2(BgL_auxz00_4049); } 
{ /* Llib/unicode.scm 135 */

return 
make_ucs2_string(
(int)(((long)0)), BgL_fillerz00_929);} }  else 
{ /* Llib/unicode.scm 348 */
obj_t BgL_aux2732z00_3178;
BgL_aux2732z00_3178 = 
BGl_loopz72z72z00zz__unicodez00(BgL_listz00_44); 
if(
UCS2_STRINGP(BgL_aux2732z00_3178))
{ /* Llib/unicode.scm 348 */
return BgL_aux2732z00_3178;}  else 
{ 
obj_t BgL_auxz00_4060;
BgL_auxz00_4060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)15981)), BGl_string2962z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_aux2732z00_3178); 
FAILURE(BgL_auxz00_4060,BFALSE,BFALSE);} } } 
}



/* loop'' */
obj_t BGl_loopz72z72z00zz__unicodez00(obj_t BgL_listz00_931)
{ AN_OBJECT;
{ /* Llib/unicode.scm 348 */
{ /* Llib/unicode.scm 349 */
bool_t BgL_testz00_4064;
{ /* Llib/unicode.scm 349 */
obj_t BgL_auxz00_4065;
{ /* Llib/unicode.scm 349 */
obj_t BgL_pairz00_1877;
if(
PAIRP(BgL_listz00_931))
{ /* Llib/unicode.scm 349 */
BgL_pairz00_1877 = BgL_listz00_931; }  else 
{ 
obj_t BgL_auxz00_4068;
BgL_auxz00_4068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16024)), BGl_string2963z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_listz00_931); 
FAILURE(BgL_auxz00_4068,BFALSE,BFALSE);} 
BgL_auxz00_4065 = 
CDR(BgL_pairz00_1877); } 
BgL_testz00_4064 = 
NULLP(BgL_auxz00_4065); } 
if(BgL_testz00_4064)
{ /* Llib/unicode.scm 350 */
obj_t BgL_pairz00_1879;
if(
PAIRP(BgL_listz00_931))
{ /* Llib/unicode.scm 350 */
BgL_pairz00_1879 = BgL_listz00_931; }  else 
{ 
obj_t BgL_auxz00_4076;
BgL_auxz00_4076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16043)), BGl_string2963z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_listz00_931); 
FAILURE(BgL_auxz00_4076,BFALSE,BFALSE);} 
return 
CAR(BgL_pairz00_1879);}  else 
{ /* Llib/unicode.scm 351 */
obj_t BgL_arg1937z00_934;obj_t BgL_arg1938z00_935;
{ /* Llib/unicode.scm 351 */
obj_t BgL_pairz00_1880;
if(
PAIRP(BgL_listz00_931))
{ /* Llib/unicode.scm 351 */
BgL_pairz00_1880 = BgL_listz00_931; }  else 
{ 
obj_t BgL_auxz00_4083;
BgL_auxz00_4083 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16083)), BGl_string2963z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_listz00_931); 
FAILURE(BgL_auxz00_4083,BFALSE,BFALSE);} 
BgL_arg1937z00_934 = 
CAR(BgL_pairz00_1880); } 
BgL_arg1938z00_935 = 
BGl_loopz72z72z00zz__unicodez00(
CDR(BgL_listz00_931)); 
{ /* Llib/unicode.scm 351 */
obj_t BgL_auxz00_4097;obj_t BgL_auxz00_4090;
if(
UCS2_STRINGP(BgL_arg1938z00_935))
{ /* Llib/unicode.scm 351 */
BgL_auxz00_4097 = BgL_arg1938z00_935
; }  else 
{ 
obj_t BgL_auxz00_4100;
BgL_auxz00_4100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16105)), BGl_string2963z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_arg1938z00_935); 
FAILURE(BgL_auxz00_4100,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_arg1937z00_934))
{ /* Llib/unicode.scm 351 */
BgL_auxz00_4090 = BgL_arg1937z00_934
; }  else 
{ 
obj_t BgL_auxz00_4093;
BgL_auxz00_4093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16087)), BGl_string2963z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_arg1937z00_934); 
FAILURE(BgL_auxz00_4093,BFALSE,BFALSE);} 
return 
ucs2_string_append(BgL_auxz00_4090, BgL_auxz00_4097);} } } } 
}



/* _ucs2-string-append */
obj_t BGl__ucs2zd2stringzd2appendz00zz__unicodez00(obj_t BgL_envz00_2904, obj_t BgL_listz00_2905)
{ AN_OBJECT;
{ /* Llib/unicode.scm 345 */
return 
BGl_ucs2zd2stringzd2appendz00zz__unicodez00(BgL_listz00_2905);} 
}



/* list->ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t BgL_listz00_45)
{ AN_OBJECT;
{ /* Llib/unicode.scm 356 */
{ /* Llib/unicode.scm 357 */
long BgL_lenz00_939;
{ /* Llib/unicode.scm 357 */
obj_t BgL_auxz00_4106;
{ /* Llib/unicode.scm 357 */
bool_t BgL_testz00_4107;
if(
PAIRP(BgL_listz00_45))
{ /* Llib/unicode.scm 357 */
BgL_testz00_4107 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 357 */
BgL_testz00_4107 = 
NULLP(BgL_listz00_45)
; } 
if(BgL_testz00_4107)
{ /* Llib/unicode.scm 357 */
BgL_auxz00_4106 = BgL_listz00_45
; }  else 
{ 
obj_t BgL_auxz00_4111;
BgL_auxz00_4111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16394)), BGl_string2965z00zz__unicodez00, BGl_string2966z00zz__unicodez00, BgL_listz00_45); 
FAILURE(BgL_auxz00_4111,BFALSE,BFALSE);} } 
BgL_lenz00_939 = 
bgl_list_length(BgL_auxz00_4106); } 
{ /* Llib/unicode.scm 357 */
obj_t BgL_ucs2zd2stringzd2_940;
{ /* Llib/unicode.scm 135 */
ucs2_t BgL_fillerz00_951;
{ /* Llib/unicode.scm 135 */
int BgL_auxz00_4116;
BgL_auxz00_4116 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_951 = 
INT_TO_UCS2(BgL_auxz00_4116); } 
{ /* Llib/unicode.scm 135 */

BgL_ucs2zd2stringzd2_940 = 
make_ucs2_string(
(int)(BgL_lenz00_939), BgL_fillerz00_951); } } 
{ /* Llib/unicode.scm 358 */

{ 
long BgL_iz00_942;obj_t BgL_lz00_943;
BgL_iz00_942 = ((long)0); 
BgL_lz00_943 = BgL_listz00_45; 
BgL_zc3anonymousza31942ze3z83_944:
if(
(BgL_iz00_942==BgL_lenz00_939))
{ /* Llib/unicode.scm 361 */
return BgL_ucs2zd2stringzd2_940;}  else 
{ /* Llib/unicode.scm 361 */
{ /* Llib/unicode.scm 364 */
obj_t BgL_arg1944z00_946;
{ /* Llib/unicode.scm 364 */
obj_t BgL_pairz00_1891;
if(
PAIRP(BgL_lz00_943))
{ /* Llib/unicode.scm 364 */
BgL_pairz00_1891 = BgL_lz00_943; }  else 
{ 
obj_t BgL_auxz00_4128;
BgL_auxz00_4128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16566)), BGl_string2967z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_lz00_943); 
FAILURE(BgL_auxz00_4128,BFALSE,BFALSE);} 
BgL_arg1944z00_946 = 
CAR(BgL_pairz00_1891); } 
{ /* Llib/unicode.scm 364 */
int BgL_kz00_1893;ucs2_t BgL_ucs2z00_1894;
BgL_kz00_1893 = 
(int)(BgL_iz00_942); 
{ /* Llib/unicode.scm 364 */
obj_t BgL_auxz00_4134;
if(
UCS2P(BgL_arg1944z00_946))
{ /* Llib/unicode.scm 364 */
BgL_auxz00_4134 = BgL_arg1944z00_946
; }  else 
{ 
obj_t BgL_auxz00_4137;
BgL_auxz00_4137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16567)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_arg1944z00_946); 
FAILURE(BgL_auxz00_4137,BFALSE,BFALSE);} 
BgL_ucs2z00_1894 = 
CUCS2(BgL_auxz00_4134); } 
{ /* Llib/unicode.scm 364 */
bool_t BgL_testz00_4142;
{ /* Llib/unicode.scm 364 */
long BgL_auxz00_4145;long BgL_auxz00_4143;
BgL_auxz00_4145 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_940)); 
BgL_auxz00_4143 = 
(long)(BgL_kz00_1893); 
BgL_testz00_4142 = 
BOUND_CHECK(BgL_auxz00_4143, BgL_auxz00_4145); } 
if(BgL_testz00_4142)
{ /* Llib/unicode.scm 364 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_940, BgL_kz00_1893, BgL_ucs2z00_1894); }  else 
{ /* Llib/unicode.scm 364 */
obj_t BgL_arg1909z00_1897;obj_t BgL_arg1910z00_1898;
BgL_arg1909z00_1897 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 364 */
obj_t BgL_arg1912z00_1900;
{ /* Llib/unicode.scm 364 */

BgL_arg1912z00_1900 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_940))-((long)1)), ((long)10)); } 
BgL_arg1910z00_1898 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_1900, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_1897, BgL_arg1910z00_1898, 
BINT(BgL_kz00_1893)); } } } } 
{ 
obj_t BgL_lz00_4159;long BgL_iz00_4157;
BgL_iz00_4157 = 
(BgL_iz00_942+((long)1)); 
BgL_lz00_4159 = 
CDR(BgL_lz00_943); 
BgL_lz00_943 = BgL_lz00_4159; 
BgL_iz00_942 = BgL_iz00_4157; 
goto BgL_zc3anonymousza31942ze3z83_944;} } } } } } } 
}



/* _list->ucs2-string */
obj_t BGl__listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t BgL_envz00_2906, obj_t BgL_listz00_2907)
{ AN_OBJECT;
{ /* Llib/unicode.scm 356 */
return 
BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_listz00_2907);} 
}



/* ucs2-string->list */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_46)
{ AN_OBJECT;
{ /* Llib/unicode.scm 370 */
{ /* Llib/unicode.scm 371 */
int BgL_lenz00_952;
BgL_lenz00_952 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46); 
{ 
long BgL_iz00_955;obj_t BgL_accz00_956;
BgL_iz00_955 = ((long)0); 
BgL_accz00_956 = BNIL; 
BgL_zc3anonymousza31947ze3z83_957:
if(
(BgL_iz00_955==
(long)(BgL_lenz00_952)))
{ /* Llib/unicode.scm 375 */
obj_t BgL_auxz00_4166;
{ /* Llib/unicode.scm 375 */
bool_t BgL_testz00_4167;
if(
PAIRP(BgL_accz00_956))
{ /* Llib/unicode.scm 375 */
BgL_testz00_4167 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 375 */
BgL_testz00_4167 = 
NULLP(BgL_accz00_956)
; } 
if(BgL_testz00_4167)
{ /* Llib/unicode.scm 375 */
BgL_auxz00_4166 = BgL_accz00_956
; }  else 
{ 
obj_t BgL_auxz00_4171;
BgL_auxz00_4171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16987)), BGl_string2967z00zz__unicodez00, BGl_string2966z00zz__unicodez00, BgL_accz00_956); 
FAILURE(BgL_auxz00_4171,BFALSE,BFALSE);} } 
return 
bgl_reverse_bang(BgL_auxz00_4166);}  else 
{ /* Llib/unicode.scm 376 */
long BgL_arg1949z00_959;obj_t BgL_arg1950z00_960;
BgL_arg1949z00_959 = 
(BgL_iz00_955+((long)1)); 
{ /* Llib/unicode.scm 377 */
ucs2_t BgL_arg1951z00_961;
{ /* Llib/unicode.scm 377 */
ucs2_t BgL_res2498z00_1937;
{ /* Llib/unicode.scm 377 */
int BgL_kz00_1920;
BgL_kz00_1920 = 
(int)(BgL_iz00_955); 
{ /* Llib/unicode.scm 377 */
bool_t BgL_testz00_4178;
{ /* Llib/unicode.scm 377 */
long BgL_auxz00_4181;long BgL_auxz00_4179;
BgL_auxz00_4181 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46)); 
BgL_auxz00_4179 = 
(long)(BgL_kz00_1920); 
BgL_testz00_4178 = 
BOUND_CHECK(BgL_auxz00_4179, BgL_auxz00_4181); } 
if(BgL_testz00_4178)
{ /* Llib/unicode.scm 377 */
BgL_res2498z00_1937 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_46, BgL_kz00_1920); }  else 
{ /* Llib/unicode.scm 377 */
obj_t BgL_arg1898z00_1923;obj_t BgL_arg1899z00_1924;
BgL_arg1898z00_1923 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 377 */
obj_t BgL_arg1901z00_1926;
{ /* Llib/unicode.scm 377 */

BgL_arg1901z00_1926 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46))-((long)1)), ((long)10)); } 
BgL_arg1899z00_1924 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_1926, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 377 */
obj_t BgL_auxz00_4191;
{ /* Llib/unicode.scm 377 */
obj_t BgL_aux2756z00_3202;
BgL_aux2756z00_3202 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_1923, BgL_arg1899z00_1924, 
BINT(BgL_kz00_1920)); 
if(
UCS2P(BgL_aux2756z00_3202))
{ /* Llib/unicode.scm 377 */
BgL_auxz00_4191 = BgL_aux2756z00_3202
; }  else 
{ 
obj_t BgL_auxz00_4196;
BgL_auxz00_4196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)17025)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2756z00_3202); 
FAILURE(BgL_auxz00_4196,BFALSE,BFALSE);} } 
BgL_res2498z00_1937 = 
CUCS2(BgL_auxz00_4191); } } } } 
BgL_arg1951z00_961 = BgL_res2498z00_1937; } 
BgL_arg1950z00_960 = 
MAKE_PAIR(
BUCS2(BgL_arg1951z00_961), BgL_accz00_956); } 
{ 
obj_t BgL_accz00_4204;long BgL_iz00_4203;
BgL_iz00_4203 = BgL_arg1949z00_959; 
BgL_accz00_4204 = BgL_arg1950z00_960; 
BgL_accz00_956 = BgL_accz00_4204; 
BgL_iz00_955 = BgL_iz00_4203; 
goto BgL_zc3anonymousza31947ze3z83_957;} } } } } 
}



/* _ucs2-string->list */
obj_t BGl__ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t BgL_envz00_2908, obj_t BgL_ucs2zd2stringzd2_2909)
{ AN_OBJECT;
{ /* Llib/unicode.scm 370 */
{ /* Llib/unicode.scm 371 */
obj_t BgL_auxz00_4205;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2909))
{ /* Llib/unicode.scm 371 */
BgL_auxz00_4205 = BgL_ucs2zd2stringzd2_2909
; }  else 
{ 
obj_t BgL_auxz00_4208;
BgL_auxz00_4208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)16868)), BGl_string2968z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2909); 
FAILURE(BgL_auxz00_4208,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(BgL_auxz00_4205);} } 
}



/* ucs2-string-copy */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_47)
{ AN_OBJECT;
{ /* Llib/unicode.scm 383 */
return 
c_ucs2_string_copy(BgL_ucs2zd2stringzd2_47);} 
}



/* _ucs2-string-copy */
obj_t BGl__ucs2zd2stringzd2copyz00zz__unicodez00(obj_t BgL_envz00_2910, obj_t BgL_ucs2zd2stringzd2_2911)
{ AN_OBJECT;
{ /* Llib/unicode.scm 383 */
{ /* Llib/unicode.scm 384 */
obj_t BgL_ucs2zd2stringzd2_3398;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2911))
{ /* Llib/unicode.scm 384 */
BgL_ucs2zd2stringzd2_3398 = BgL_ucs2zd2stringzd2_2911; }  else 
{ 
obj_t BgL_auxz00_4216;
BgL_auxz00_4216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)17343)), BGl_string2969z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2911); 
FAILURE(BgL_auxz00_4216,BFALSE,BFALSE);} 
return 
c_ucs2_string_copy(BgL_ucs2zd2stringzd2_3398);} } 
}



/* ucs2-string-fill! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_48, ucs2_t BgL_ucs2z00_49)
{ AN_OBJECT;
{ /* Llib/unicode.scm 389 */
{ /* Llib/unicode.scm 390 */
int BgL_lenz00_963;
BgL_lenz00_963 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_48); 
{ 
long BgL_iz00_965;
BgL_iz00_965 = ((long)0); 
BgL_zc3anonymousza31952ze3z83_966:
if(
(BgL_iz00_965==
(long)(BgL_lenz00_963)))
{ /* Llib/unicode.scm 392 */
return BgL_ucs2zd2stringzd2_48;}  else 
{ /* Llib/unicode.scm 392 */
{ /* Llib/unicode.scm 395 */
int BgL_kz00_1942;
BgL_kz00_1942 = 
(int)(BgL_iz00_965); 
{ /* Llib/unicode.scm 395 */
bool_t BgL_testz00_4226;
{ /* Llib/unicode.scm 395 */
long BgL_auxz00_4229;long BgL_auxz00_4227;
BgL_auxz00_4229 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_48)); 
BgL_auxz00_4227 = 
(long)(BgL_kz00_1942); 
BgL_testz00_4226 = 
BOUND_CHECK(BgL_auxz00_4227, BgL_auxz00_4229); } 
if(BgL_testz00_4226)
{ /* Llib/unicode.scm 395 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_48, BgL_kz00_1942, BgL_ucs2z00_49); }  else 
{ /* Llib/unicode.scm 395 */
obj_t BgL_arg1909z00_1946;obj_t BgL_arg1910z00_1947;
BgL_arg1909z00_1946 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 395 */
obj_t BgL_arg1912z00_1949;
{ /* Llib/unicode.scm 395 */

BgL_arg1912z00_1949 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_48))-((long)1)), ((long)10)); } 
BgL_arg1910z00_1947 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_1949, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_1946, BgL_arg1910z00_1947, 
BINT(BgL_kz00_1942)); } } } 
{ 
long BgL_iz00_4241;
BgL_iz00_4241 = 
(BgL_iz00_965+((long)1)); 
BgL_iz00_965 = BgL_iz00_4241; 
goto BgL_zc3anonymousza31952ze3z83_966;} } } } } 
}



/* _ucs2-string-fill! */
obj_t BGl__ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t BgL_envz00_2912, obj_t BgL_ucs2zd2stringzd2_2913, obj_t BgL_ucs2z00_2914)
{ AN_OBJECT;
{ /* Llib/unicode.scm 389 */
{ /* Llib/unicode.scm 390 */
ucs2_t BgL_auxz00_4250;obj_t BgL_auxz00_4243;
{ /* Llib/unicode.scm 390 */
obj_t BgL_auxz00_4251;
if(
UCS2P(BgL_ucs2z00_2914))
{ /* Llib/unicode.scm 390 */
BgL_auxz00_4251 = BgL_ucs2z00_2914
; }  else 
{ 
obj_t BgL_auxz00_4254;
BgL_auxz00_4254 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)17648)), BGl_string2970z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_ucs2z00_2914); 
FAILURE(BgL_auxz00_4254,BFALSE,BFALSE);} 
BgL_auxz00_4250 = 
CUCS2(BgL_auxz00_4251); } 
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2913))
{ /* Llib/unicode.scm 390 */
BgL_auxz00_4243 = BgL_ucs2zd2stringzd2_2913
; }  else 
{ 
obj_t BgL_auxz00_4246;
BgL_auxz00_4246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)17648)), BGl_string2970z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2913); 
FAILURE(BgL_auxz00_4246,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(BgL_auxz00_4243, BgL_auxz00_4250);} } 
}



/* ucs2-string-upcase */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_50)
{ AN_OBJECT;
{ /* Llib/unicode.scm 401 */
{ /* Llib/unicode.scm 402 */
int BgL_lenz00_970;
BgL_lenz00_970 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_50); 
{ /* Llib/unicode.scm 402 */
obj_t BgL_resz00_971;
{ /* Llib/unicode.scm 135 */
ucs2_t BgL_fillerz00_981;
{ /* Llib/unicode.scm 135 */
int BgL_auxz00_4261;
BgL_auxz00_4261 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_981 = 
INT_TO_UCS2(BgL_auxz00_4261); } 
{ /* Llib/unicode.scm 135 */

BgL_resz00_971 = 
make_ucs2_string(BgL_lenz00_970, BgL_fillerz00_981); } } 
{ /* Llib/unicode.scm 403 */

{ 
long BgL_iz00_973;
BgL_iz00_973 = ((long)0); 
BgL_zc3anonymousza31955ze3z83_974:
if(
(BgL_iz00_973==
(long)(BgL_lenz00_970)))
{ /* Llib/unicode.scm 405 */
return BgL_resz00_971;}  else 
{ /* Llib/unicode.scm 405 */
{ /* Llib/unicode.scm 410 */
ucs2_t BgL_arg1957z00_976;
{ /* Llib/unicode.scm 410 */
ucs2_t BgL_arg1958z00_977;
{ /* Llib/unicode.scm 410 */
ucs2_t BgL_res2500z00_1990;
{ /* Llib/unicode.scm 410 */
int BgL_kz00_1973;
BgL_kz00_1973 = 
(int)(BgL_iz00_973); 
{ /* Llib/unicode.scm 410 */
bool_t BgL_testz00_4272;
{ /* Llib/unicode.scm 410 */
long BgL_auxz00_4275;long BgL_auxz00_4273;
BgL_auxz00_4275 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_50)); 
BgL_auxz00_4273 = 
(long)(BgL_kz00_1973); 
BgL_testz00_4272 = 
BOUND_CHECK(BgL_auxz00_4273, BgL_auxz00_4275); } 
if(BgL_testz00_4272)
{ /* Llib/unicode.scm 410 */
BgL_res2500z00_1990 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_50, BgL_kz00_1973); }  else 
{ /* Llib/unicode.scm 410 */
obj_t BgL_arg1898z00_1976;obj_t BgL_arg1899z00_1977;
BgL_arg1898z00_1976 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 410 */
obj_t BgL_arg1901z00_1979;
{ /* Llib/unicode.scm 410 */

BgL_arg1901z00_1979 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_50))-((long)1)), ((long)10)); } 
BgL_arg1899z00_1977 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_1979, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 410 */
obj_t BgL_auxz00_4285;
{ /* Llib/unicode.scm 410 */
obj_t BgL_aux2766z00_3212;
BgL_aux2766z00_3212 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_1976, BgL_arg1899z00_1977, 
BINT(BgL_kz00_1973)); 
if(
UCS2P(BgL_aux2766z00_3212))
{ /* Llib/unicode.scm 410 */
BgL_auxz00_4285 = BgL_aux2766z00_3212
; }  else 
{ 
obj_t BgL_auxz00_4290;
BgL_auxz00_4290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)18293)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2766z00_3212); 
FAILURE(BgL_auxz00_4290,BFALSE,BFALSE);} } 
BgL_res2500z00_1990 = 
CUCS2(BgL_auxz00_4285); } } } } 
BgL_arg1958z00_977 = BgL_res2500z00_1990; } 
BgL_arg1957z00_976 = 
ucs2_toupper(BgL_arg1958z00_977); } 
{ /* Llib/unicode.scm 408 */
int BgL_kz00_1993;
BgL_kz00_1993 = 
(int)(BgL_iz00_973); 
{ /* Llib/unicode.scm 408 */
bool_t BgL_testz00_4297;
{ /* Llib/unicode.scm 408 */
long BgL_auxz00_4300;long BgL_auxz00_4298;
BgL_auxz00_4300 = 
(long)(
UCS2_STRING_LENGTH(BgL_resz00_971)); 
BgL_auxz00_4298 = 
(long)(BgL_kz00_1993); 
BgL_testz00_4297 = 
BOUND_CHECK(BgL_auxz00_4298, BgL_auxz00_4300); } 
if(BgL_testz00_4297)
{ /* Llib/unicode.scm 408 */
UCS2_STRING_SET(BgL_resz00_971, BgL_kz00_1993, BgL_arg1957z00_976); }  else 
{ /* Llib/unicode.scm 408 */
obj_t BgL_arg1909z00_1997;obj_t BgL_arg1910z00_1998;
BgL_arg1909z00_1997 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 408 */
obj_t BgL_arg1912z00_2000;
{ /* Llib/unicode.scm 408 */

BgL_arg1912z00_2000 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_resz00_971))-((long)1)), ((long)10)); } 
BgL_arg1910z00_1998 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_2000, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_1997, BgL_arg1910z00_1998, 
BINT(BgL_kz00_1993)); } } } } 
{ 
long BgL_iz00_4312;
BgL_iz00_4312 = 
(BgL_iz00_973+((long)1)); 
BgL_iz00_973 = BgL_iz00_4312; 
goto BgL_zc3anonymousza31955ze3z83_974;} } } } } } } 
}



/* _ucs2-string-upcase */
obj_t BGl__ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t BgL_envz00_2915, obj_t BgL_ucs2zd2stringzd2_2916)
{ AN_OBJECT;
{ /* Llib/unicode.scm 401 */
{ /* Llib/unicode.scm 402 */
obj_t BgL_auxz00_4314;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2916))
{ /* Llib/unicode.scm 402 */
BgL_auxz00_4314 = BgL_ucs2zd2stringzd2_2916
; }  else 
{ 
obj_t BgL_auxz00_4317;
BgL_auxz00_4317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)18098)), BGl_string2971z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2916); 
FAILURE(BgL_auxz00_4317,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(BgL_auxz00_4314);} } 
}



/* ucs2-string-downcase */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_51)
{ AN_OBJECT;
{ /* Llib/unicode.scm 417 */
{ /* Llib/unicode.scm 418 */
int BgL_lenz00_982;
BgL_lenz00_982 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_51); 
{ /* Llib/unicode.scm 418 */
obj_t BgL_resz00_983;
{ /* Llib/unicode.scm 135 */
ucs2_t BgL_fillerz00_993;
{ /* Llib/unicode.scm 135 */
int BgL_auxz00_4323;
BgL_auxz00_4323 = 
(int)(
(
(unsigned char)(
(char)(((unsigned char)' '))))); 
BgL_fillerz00_993 = 
INT_TO_UCS2(BgL_auxz00_4323); } 
{ /* Llib/unicode.scm 135 */

BgL_resz00_983 = 
make_ucs2_string(BgL_lenz00_982, BgL_fillerz00_993); } } 
{ /* Llib/unicode.scm 419 */

{ 
long BgL_iz00_985;
BgL_iz00_985 = ((long)0); 
BgL_zc3anonymousza31960ze3z83_986:
if(
(BgL_iz00_985==
(long)(BgL_lenz00_982)))
{ /* Llib/unicode.scm 421 */
return BgL_resz00_983;}  else 
{ /* Llib/unicode.scm 421 */
{ /* Llib/unicode.scm 426 */
ucs2_t BgL_arg1962z00_988;
{ /* Llib/unicode.scm 426 */
ucs2_t BgL_arg1963z00_989;
{ /* Llib/unicode.scm 426 */
ucs2_t BgL_res2502z00_2041;
{ /* Llib/unicode.scm 426 */
int BgL_kz00_2024;
BgL_kz00_2024 = 
(int)(BgL_iz00_985); 
{ /* Llib/unicode.scm 426 */
bool_t BgL_testz00_4334;
{ /* Llib/unicode.scm 426 */
long BgL_auxz00_4337;long BgL_auxz00_4335;
BgL_auxz00_4337 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_51)); 
BgL_auxz00_4335 = 
(long)(BgL_kz00_2024); 
BgL_testz00_4334 = 
BOUND_CHECK(BgL_auxz00_4335, BgL_auxz00_4337); } 
if(BgL_testz00_4334)
{ /* Llib/unicode.scm 426 */
BgL_res2502z00_2041 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_51, BgL_kz00_2024); }  else 
{ /* Llib/unicode.scm 426 */
obj_t BgL_arg1898z00_2027;obj_t BgL_arg1899z00_2028;
BgL_arg1898z00_2027 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 426 */
obj_t BgL_arg1901z00_2030;
{ /* Llib/unicode.scm 426 */

BgL_arg1901z00_2030 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_51))-((long)1)), ((long)10)); } 
BgL_arg1899z00_2028 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_2030, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 426 */
obj_t BgL_auxz00_4347;
{ /* Llib/unicode.scm 426 */
obj_t BgL_aux2770z00_3216;
BgL_aux2770z00_3216 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_2027, BgL_arg1899z00_2028, 
BINT(BgL_kz00_2024)); 
if(
UCS2P(BgL_aux2770z00_3216))
{ /* Llib/unicode.scm 426 */
BgL_auxz00_4347 = BgL_aux2770z00_3216
; }  else 
{ 
obj_t BgL_auxz00_4352;
BgL_auxz00_4352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)18825)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2770z00_3216); 
FAILURE(BgL_auxz00_4352,BFALSE,BFALSE);} } 
BgL_res2502z00_2041 = 
CUCS2(BgL_auxz00_4347); } } } } 
BgL_arg1963z00_989 = BgL_res2502z00_2041; } 
BgL_arg1962z00_988 = 
ucs2_tolower(BgL_arg1963z00_989); } 
{ /* Llib/unicode.scm 424 */
int BgL_kz00_2044;
BgL_kz00_2044 = 
(int)(BgL_iz00_985); 
{ /* Llib/unicode.scm 424 */
bool_t BgL_testz00_4359;
{ /* Llib/unicode.scm 424 */
long BgL_auxz00_4362;long BgL_auxz00_4360;
BgL_auxz00_4362 = 
(long)(
UCS2_STRING_LENGTH(BgL_resz00_983)); 
BgL_auxz00_4360 = 
(long)(BgL_kz00_2044); 
BgL_testz00_4359 = 
BOUND_CHECK(BgL_auxz00_4360, BgL_auxz00_4362); } 
if(BgL_testz00_4359)
{ /* Llib/unicode.scm 424 */
UCS2_STRING_SET(BgL_resz00_983, BgL_kz00_2044, BgL_arg1962z00_988); }  else 
{ /* Llib/unicode.scm 424 */
obj_t BgL_arg1909z00_2048;obj_t BgL_arg1910z00_2049;
BgL_arg1909z00_2048 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 424 */
obj_t BgL_arg1912z00_2051;
{ /* Llib/unicode.scm 424 */

BgL_arg1912z00_2051 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_resz00_983))-((long)1)), ((long)10)); } 
BgL_arg1910z00_2049 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_2051, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_2048, BgL_arg1910z00_2049, 
BINT(BgL_kz00_2044)); } } } } 
{ 
long BgL_iz00_4374;
BgL_iz00_4374 = 
(BgL_iz00_985+((long)1)); 
BgL_iz00_985 = BgL_iz00_4374; 
goto BgL_zc3anonymousza31960ze3z83_986;} } } } } } } 
}



/* _ucs2-string-downcase */
obj_t BGl__ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t BgL_envz00_2917, obj_t BgL_ucs2zd2stringzd2_2918)
{ AN_OBJECT;
{ /* Llib/unicode.scm 417 */
{ /* Llib/unicode.scm 418 */
obj_t BgL_auxz00_4376;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2918))
{ /* Llib/unicode.scm 418 */
BgL_auxz00_4376 = BgL_ucs2zd2stringzd2_2918
; }  else 
{ 
obj_t BgL_auxz00_4379;
BgL_auxz00_4379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)18628)), BGl_string2972z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2918); 
FAILURE(BgL_auxz00_4379,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(BgL_auxz00_4376);} } 
}



/* ucs2-string-upcase! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_52)
{ AN_OBJECT;
{ /* Llib/unicode.scm 433 */
{ /* Llib/unicode.scm 434 */
int BgL_lenz00_994;
BgL_lenz00_994 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52); 
{ /* Llib/unicode.scm 435 */

{ 
long BgL_iz00_997;
BgL_iz00_997 = ((long)0); 
BgL_zc3anonymousza31966ze3z83_998:
if(
(BgL_iz00_997==
(long)(BgL_lenz00_994)))
{ /* Llib/unicode.scm 437 */
return BgL_ucs2zd2stringzd2_52;}  else 
{ /* Llib/unicode.scm 437 */
{ /* Llib/unicode.scm 442 */
ucs2_t BgL_arg1968z00_1000;
{ /* Llib/unicode.scm 442 */
ucs2_t BgL_arg1969z00_1001;
{ /* Llib/unicode.scm 442 */
ucs2_t BgL_res2503z00_2085;
{ /* Llib/unicode.scm 442 */
int BgL_kz00_2068;
BgL_kz00_2068 = 
(int)(BgL_iz00_997); 
{ /* Llib/unicode.scm 442 */
bool_t BgL_testz00_4389;
{ /* Llib/unicode.scm 442 */
long BgL_auxz00_4392;long BgL_auxz00_4390;
BgL_auxz00_4392 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52)); 
BgL_auxz00_4390 = 
(long)(BgL_kz00_2068); 
BgL_testz00_4389 = 
BOUND_CHECK(BgL_auxz00_4390, BgL_auxz00_4392); } 
if(BgL_testz00_4389)
{ /* Llib/unicode.scm 442 */
BgL_res2503z00_2085 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_52, BgL_kz00_2068); }  else 
{ /* Llib/unicode.scm 442 */
obj_t BgL_arg1898z00_2071;obj_t BgL_arg1899z00_2072;
BgL_arg1898z00_2071 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 442 */
obj_t BgL_arg1901z00_2074;
{ /* Llib/unicode.scm 442 */

BgL_arg1901z00_2074 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52))-((long)1)), ((long)10)); } 
BgL_arg1899z00_2072 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_2074, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 442 */
obj_t BgL_auxz00_4402;
{ /* Llib/unicode.scm 442 */
obj_t BgL_aux2774z00_3220;
BgL_aux2774z00_3220 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_2071, BgL_arg1899z00_2072, 
BINT(BgL_kz00_2068)); 
if(
UCS2P(BgL_aux2774z00_3220))
{ /* Llib/unicode.scm 442 */
BgL_auxz00_4402 = BgL_aux2774z00_3220
; }  else 
{ 
obj_t BgL_auxz00_4407;
BgL_auxz00_4407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)19345)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2774z00_3220); 
FAILURE(BgL_auxz00_4407,BFALSE,BFALSE);} } 
BgL_res2503z00_2085 = 
CUCS2(BgL_auxz00_4402); } } } } 
BgL_arg1969z00_1001 = BgL_res2503z00_2085; } 
BgL_arg1968z00_1000 = 
ucs2_toupper(BgL_arg1969z00_1001); } 
{ /* Llib/unicode.scm 440 */
int BgL_kz00_2088;
BgL_kz00_2088 = 
(int)(BgL_iz00_997); 
{ /* Llib/unicode.scm 440 */
bool_t BgL_testz00_4414;
{ /* Llib/unicode.scm 440 */
long BgL_auxz00_4417;long BgL_auxz00_4415;
BgL_auxz00_4417 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52)); 
BgL_auxz00_4415 = 
(long)(BgL_kz00_2088); 
BgL_testz00_4414 = 
BOUND_CHECK(BgL_auxz00_4415, BgL_auxz00_4417); } 
if(BgL_testz00_4414)
{ /* Llib/unicode.scm 440 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_52, BgL_kz00_2088, BgL_arg1968z00_1000); }  else 
{ /* Llib/unicode.scm 440 */
obj_t BgL_arg1909z00_2092;obj_t BgL_arg1910z00_2093;
BgL_arg1909z00_2092 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 440 */
obj_t BgL_arg1912z00_2095;
{ /* Llib/unicode.scm 440 */

BgL_arg1912z00_2095 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_52))-((long)1)), ((long)10)); } 
BgL_arg1910z00_2093 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_2095, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_2092, BgL_arg1910z00_2093, 
BINT(BgL_kz00_2088)); } } } } 
{ 
long BgL_iz00_4429;
BgL_iz00_4429 = 
(BgL_iz00_997+((long)1)); 
BgL_iz00_997 = BgL_iz00_4429; 
goto BgL_zc3anonymousza31966ze3z83_998;} } } } } } 
}



/* _ucs2-string-upcase! */
obj_t BGl__ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t BgL_envz00_2919, obj_t BgL_ucs2zd2stringzd2_2920)
{ AN_OBJECT;
{ /* Llib/unicode.scm 433 */
{ /* Llib/unicode.scm 434 */
obj_t BgL_auxz00_4431;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2920))
{ /* Llib/unicode.scm 434 */
BgL_auxz00_4431 = BgL_ucs2zd2stringzd2_2920
; }  else 
{ 
obj_t BgL_auxz00_4434;
BgL_auxz00_4434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)19161)), BGl_string2973z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2920); 
FAILURE(BgL_auxz00_4434,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(BgL_auxz00_4431);} } 
}



/* ucs2-string-downcase! */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t BgL_ucs2zd2stringzd2_53)
{ AN_OBJECT;
{ /* Llib/unicode.scm 449 */
{ /* Llib/unicode.scm 450 */
int BgL_lenz00_1004;
BgL_lenz00_1004 = 
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53); 
{ /* Llib/unicode.scm 451 */

{ 
long BgL_iz00_1007;
BgL_iz00_1007 = ((long)0); 
BgL_zc3anonymousza31971ze3z83_1008:
if(
(BgL_iz00_1007==
(long)(BgL_lenz00_1004)))
{ /* Llib/unicode.scm 453 */
return BgL_ucs2zd2stringzd2_53;}  else 
{ /* Llib/unicode.scm 453 */
{ /* Llib/unicode.scm 458 */
ucs2_t BgL_arg1973z00_1010;
{ /* Llib/unicode.scm 458 */
ucs2_t BgL_arg1974z00_1011;
{ /* Llib/unicode.scm 458 */
ucs2_t BgL_res2504z00_2129;
{ /* Llib/unicode.scm 458 */
int BgL_kz00_2112;
BgL_kz00_2112 = 
(int)(BgL_iz00_1007); 
{ /* Llib/unicode.scm 458 */
bool_t BgL_testz00_4444;
{ /* Llib/unicode.scm 458 */
long BgL_auxz00_4447;long BgL_auxz00_4445;
BgL_auxz00_4447 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53)); 
BgL_auxz00_4445 = 
(long)(BgL_kz00_2112); 
BgL_testz00_4444 = 
BOUND_CHECK(BgL_auxz00_4445, BgL_auxz00_4447); } 
if(BgL_testz00_4444)
{ /* Llib/unicode.scm 458 */
BgL_res2504z00_2129 = 
UCS2_STRING_REF(BgL_ucs2zd2stringzd2_53, BgL_kz00_2112); }  else 
{ /* Llib/unicode.scm 458 */
obj_t BgL_arg1898z00_2115;obj_t BgL_arg1899z00_2116;
BgL_arg1898z00_2115 = BGl_symbol2938z00zz__unicodez00; 
{ /* Llib/unicode.scm 458 */
obj_t BgL_arg1901z00_2118;
{ /* Llib/unicode.scm 458 */

BgL_arg1901z00_2118 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53))-((long)1)), ((long)10)); } 
BgL_arg1899z00_2116 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1901z00_2118, BGl_string2941z00zz__unicodez00); } 
{ /* Llib/unicode.scm 458 */
obj_t BgL_auxz00_4457;
{ /* Llib/unicode.scm 458 */
obj_t BgL_aux2778z00_3224;
BgL_aux2778z00_3224 = 
BGl_errorz00zz__errorz00(BgL_arg1898z00_2115, BgL_arg1899z00_2116, 
BINT(BgL_kz00_2112)); 
if(
UCS2P(BgL_aux2778z00_3224))
{ /* Llib/unicode.scm 458 */
BgL_auxz00_4457 = BgL_aux2778z00_3224
; }  else 
{ 
obj_t BgL_auxz00_4462;
BgL_auxz00_4462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)19867)), BGl_string2967z00zz__unicodez00, BGl_string2935z00zz__unicodez00, BgL_aux2778z00_3224); 
FAILURE(BgL_auxz00_4462,BFALSE,BFALSE);} } 
BgL_res2504z00_2129 = 
CUCS2(BgL_auxz00_4457); } } } } 
BgL_arg1974z00_1011 = BgL_res2504z00_2129; } 
BgL_arg1973z00_1010 = 
ucs2_tolower(BgL_arg1974z00_1011); } 
{ /* Llib/unicode.scm 456 */
int BgL_kz00_2132;
BgL_kz00_2132 = 
(int)(BgL_iz00_1007); 
{ /* Llib/unicode.scm 456 */
bool_t BgL_testz00_4469;
{ /* Llib/unicode.scm 456 */
long BgL_auxz00_4472;long BgL_auxz00_4470;
BgL_auxz00_4472 = 
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53)); 
BgL_auxz00_4470 = 
(long)(BgL_kz00_2132); 
BgL_testz00_4469 = 
BOUND_CHECK(BgL_auxz00_4470, BgL_auxz00_4472); } 
if(BgL_testz00_4469)
{ /* Llib/unicode.scm 456 */
UCS2_STRING_SET(BgL_ucs2zd2stringzd2_53, BgL_kz00_2132, BgL_arg1973z00_1010); }  else 
{ /* Llib/unicode.scm 456 */
obj_t BgL_arg1909z00_2136;obj_t BgL_arg1910z00_2137;
BgL_arg1909z00_2136 = BGl_symbol2943z00zz__unicodez00; 
{ /* Llib/unicode.scm 456 */
obj_t BgL_arg1912z00_2139;
{ /* Llib/unicode.scm 456 */

BgL_arg1912z00_2139 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(
(long)(
UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_53))-((long)1)), ((long)10)); } 
BgL_arg1910z00_2137 = 
string_append_3(BGl_string2940z00zz__unicodez00, BgL_arg1912z00_2139, BGl_string2941z00zz__unicodez00); } 
BGl_errorz00zz__errorz00(BgL_arg1909z00_2136, BgL_arg1910z00_2137, 
BINT(BgL_kz00_2132)); } } } } 
{ 
long BgL_iz00_4484;
BgL_iz00_4484 = 
(BgL_iz00_1007+((long)1)); 
BgL_iz00_1007 = BgL_iz00_4484; 
goto BgL_zc3anonymousza31971ze3z83_1008;} } } } } } 
}



/* _ucs2-string-downcase! */
obj_t BGl__ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t BgL_envz00_2921, obj_t BgL_ucs2zd2stringzd2_2922)
{ AN_OBJECT;
{ /* Llib/unicode.scm 449 */
{ /* Llib/unicode.scm 450 */
obj_t BgL_auxz00_4486;
if(
UCS2_STRINGP(BgL_ucs2zd2stringzd2_2922))
{ /* Llib/unicode.scm 450 */
BgL_auxz00_4486 = BgL_ucs2zd2stringzd2_2922
; }  else 
{ 
obj_t BgL_auxz00_4489;
BgL_auxz00_4489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)19681)), BGl_string2974z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2zd2stringzd2_2922); 
FAILURE(BgL_auxz00_4489,BFALSE,BFALSE);} 
return 
BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(BgL_auxz00_4486);} } 
}



/* ucs2-string->utf8-string */
BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t BgL_ucs2z00_54)
{ AN_OBJECT;
{ /* Llib/unicode.scm 465 */
return 
ucs2_string_to_utf8_string(BgL_ucs2z00_54);} 
}



/* _ucs2-string->utf8-string */
obj_t BGl__ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t BgL_envz00_2923, obj_t BgL_ucs2z00_2924)
{ AN_OBJECT;
{ /* Llib/unicode.scm 465 */
{ /* Llib/unicode.scm 466 */
obj_t BgL_ucs2z00_3399;
if(
UCS2_STRINGP(BgL_ucs2z00_2924))
{ /* Llib/unicode.scm 466 */
BgL_ucs2z00_3399 = BgL_ucs2z00_2924; }  else 
{ 
obj_t BgL_auxz00_4497;
BgL_auxz00_4497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)20214)), BGl_string2975z00zz__unicodez00, BGl_string2937z00zz__unicodez00, BgL_ucs2z00_2924); 
FAILURE(BgL_auxz00_4497,BFALSE,BFALSE);} 
return 
ucs2_string_to_utf8_string(BgL_ucs2z00_3399);} } 
}



/* inverse-utf8-table */
BGL_EXPORTED_DEF obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t BgL_tablez00_55)
{ AN_OBJECT;
{ /* Llib/unicode.scm 538 */
{ /* Llib/unicode.scm 560 */
int BgL_lenz00_1016;
BgL_lenz00_1016 = 
VECTOR_LENGTH(BgL_tablez00_55); 
{ 
long BgL_iz00_1019;obj_t BgL_resz00_1020;
BgL_iz00_1019 = ((long)0); 
BgL_resz00_1020 = BNIL; 
BgL_zc3anonymousza31976ze3z83_1021:
if(
(BgL_iz00_1019==
(long)(BgL_lenz00_1016)))
{ /* Llib/unicode.scm 563 */
return BgL_resz00_1020;}  else 
{ /* Llib/unicode.scm 565 */
obj_t BgL_sz00_1023;
{ /* Llib/unicode.scm 565 */
int BgL_kz00_2156;
BgL_kz00_2156 = 
(int)(BgL_iz00_1019); 
{ /* Llib/unicode.scm 565 */
int BgL_l2518z00_2964;
BgL_l2518z00_2964 = 
VECTOR_LENGTH(BgL_tablez00_55); 
if(
BOUND_CHECK(BgL_kz00_2156, BgL_l2518z00_2964))
{ /* Llib/unicode.scm 565 */
BgL_sz00_1023 = 
VECTOR_REF(BgL_tablez00_55,BgL_kz00_2156); }  else 
{ 
obj_t BgL_auxz00_4511;
BgL_auxz00_4511 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)23020)), BGl_string2976z00zz__unicodez00, 
BINT(BgL_kz00_2156), BgL_tablez00_55); 
FAILURE(BgL_auxz00_4511,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 566 */
bool_t BgL_testz00_4516;
{ /* Llib/unicode.scm 566 */
long BgL_auxz00_4517;
{ /* Llib/unicode.scm 566 */
obj_t BgL_stringz00_2157;
if(
STRINGP(BgL_sz00_1023))
{ /* Llib/unicode.scm 566 */
BgL_stringz00_2157 = BgL_sz00_1023; }  else 
{ 
obj_t BgL_auxz00_4520;
BgL_auxz00_4520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)23054)), BGl_string2967z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_sz00_1023); 
FAILURE(BgL_auxz00_4520,BFALSE,BFALSE);} 
BgL_auxz00_4517 = 
STRING_LENGTH(BgL_stringz00_2157); } 
BgL_testz00_4516 = 
(BgL_auxz00_4517>((long)0)); } 
if(BgL_testz00_4516)
{ 
obj_t BgL_resz00_4528;long BgL_iz00_4526;
BgL_iz00_4526 = 
(BgL_iz00_1019+((long)1)); 
BgL_resz00_4528 = 
BGl_addzd2tablezd2entryz00zz__unicodez00(BgL_resz00_1020, BgL_sz00_1023, 
(((long)128)+BgL_iz00_1019)); 
BgL_resz00_1020 = BgL_resz00_4528; 
BgL_iz00_1019 = BgL_iz00_4526; 
goto BgL_zc3anonymousza31976ze3z83_1021;}  else 
{ 
long BgL_iz00_4531;
BgL_iz00_4531 = 
(BgL_iz00_1019+((long)1)); 
BgL_iz00_1019 = BgL_iz00_4531; 
goto BgL_zc3anonymousza31976ze3z83_1021;} } } } } } 
}



/* loop */
obj_t BGl_loopz00zz__unicodez00(long BgL_lenz00_2961, long BgL_charz00_2960, obj_t BgL_sz00_2959, long BgL_iz00_1037)
{ AN_OBJECT;
{ /* Llib/unicode.scm 542 */
if(
(BgL_lenz00_2961==BgL_iz00_1037))
{ /* Llib/unicode.scm 543 */
return 
BCHAR(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_charz00_2960));}  else 
{ /* Llib/unicode.scm 545 */
obj_t BgL_arg1988z00_1040;
{ /* Llib/unicode.scm 545 */
long BgL_arg1990z00_1042;obj_t BgL_arg1991z00_1043;
{ /* Llib/unicode.scm 545 */
unsigned char BgL_auxz00_4537;
{ /* Llib/unicode.scm 545 */
obj_t BgL_stringz00_2169;
if(
STRINGP(BgL_sz00_2959))
{ /* Llib/unicode.scm 545 */
BgL_stringz00_2169 = BgL_sz00_2959; }  else 
{ 
obj_t BgL_auxz00_4540;
BgL_auxz00_4540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22556)), BGl_string2967z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_sz00_2959); 
FAILURE(BgL_auxz00_4540,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 545 */
long BgL_l2522z00_2968;
BgL_l2522z00_2968 = 
STRING_LENGTH(BgL_stringz00_2169); 
if(
BOUND_CHECK(BgL_iz00_1037, BgL_l2522z00_2968))
{ /* Llib/unicode.scm 545 */
BgL_auxz00_4537 = 
STRING_REF(BgL_stringz00_2169, BgL_iz00_1037)
; }  else 
{ 
obj_t BgL_auxz00_4548;
BgL_auxz00_4548 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22544)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_iz00_1037), BgL_stringz00_2169); 
FAILURE(BgL_auxz00_4548,BFALSE,BFALSE);} } } 
BgL_arg1990z00_1042 = 
(BgL_auxz00_4537); } 
BgL_arg1991z00_1043 = 
BGl_loopz00zz__unicodez00(BgL_lenz00_2961, BgL_charz00_2960, BgL_sz00_2959, 
(BgL_iz00_1037+((long)1))); 
BgL_arg1988z00_1040 = 
MAKE_PAIR(
BINT(BgL_arg1990z00_1042), BgL_arg1991z00_1043); } 
{ /* Llib/unicode.scm 545 */
obj_t BgL_list1989z00_1041;
BgL_list1989z00_1041 = 
MAKE_PAIR(BgL_arg1988z00_1040, BNIL); 
return BgL_list1989z00_1041;} } } 
}



/* make-table-entry */
obj_t BGl_makezd2tablezd2entryz00zz__unicodez00(obj_t BgL_sz00_1032, long BgL_charz00_1033)
{ AN_OBJECT;
{ /* Llib/unicode.scm 545 */
{ /* Llib/unicode.scm 541 */
long BgL_lenz00_1035;
{ /* Llib/unicode.scm 541 */
obj_t BgL_stringz00_2166;
if(
STRINGP(BgL_sz00_1032))
{ /* Llib/unicode.scm 541 */
BgL_stringz00_2166 = BgL_sz00_1032; }  else 
{ 
obj_t BgL_auxz00_4561;
BgL_auxz00_4561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22431)), BGl_string2979z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_sz00_1032); 
FAILURE(BgL_auxz00_4561,BFALSE,BFALSE);} 
BgL_lenz00_1035 = 
STRING_LENGTH(BgL_stringz00_2166); } 
return 
BGl_loopz00zz__unicodez00(BgL_lenz00_1035, BgL_charz00_1033, BgL_sz00_1032, ((long)0));} } 
}



/* loop' */
obj_t BGl_loopz72z72zz__unicodez00(obj_t BgL_ez00_1053, obj_t BgL_tablez00_1054)
{ AN_OBJECT;
{ /* Llib/unicode.scm 548 */
if(
NULLP(BgL_ez00_1053))
{ /* Llib/unicode.scm 550 */
return BgL_tablez00_1054;}  else 
{ /* Llib/unicode.scm 552 */
obj_t BgL_nz00_1057;
{ /* Llib/unicode.scm 552 */
obj_t BgL_pairz00_2178;
if(
PAIRP(BgL_ez00_1053))
{ /* Llib/unicode.scm 552 */
BgL_pairz00_2178 = BgL_ez00_1053; }  else 
{ 
obj_t BgL_auxz00_4571;
BgL_auxz00_4571 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22751)), BGl_string2980z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_ez00_1053); 
FAILURE(BgL_auxz00_4571,BFALSE,BFALSE);} 
BgL_nz00_1057 = 
CAR(BgL_pairz00_2178); } 
{ /* Llib/unicode.scm 552 */
obj_t BgL_oz00_1058;
{ /* Llib/unicode.scm 553 */
obj_t BgL_auxz00_4576;
{ /* Llib/unicode.scm 553 */
bool_t BgL_testz00_4577;
if(
PAIRP(BgL_tablez00_1054))
{ /* Llib/unicode.scm 553 */
BgL_testz00_4577 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 553 */
BgL_testz00_4577 = 
NULLP(BgL_tablez00_1054)
; } 
if(BgL_testz00_4577)
{ /* Llib/unicode.scm 553 */
BgL_auxz00_4576 = BgL_tablez00_1054
; }  else 
{ 
obj_t BgL_auxz00_4581;
BgL_auxz00_4581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22772)), BGl_string2980z00zz__unicodez00, BGl_string2966z00zz__unicodez00, BgL_tablez00_1054); 
FAILURE(BgL_auxz00_4581,BFALSE,BFALSE);} } 
BgL_oz00_1058 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_1057, BgL_auxz00_4576); } 
{ /* Llib/unicode.scm 553 */

if(
CBOOL(BgL_oz00_1058))
{ /* Llib/unicode.scm 555 */
obj_t BgL_stz00_1059;
{ /* Llib/unicode.scm 555 */
obj_t BgL_pairz00_2179;
if(
PAIRP(BgL_oz00_1058))
{ /* Llib/unicode.scm 555 */
BgL_pairz00_2179 = BgL_oz00_1058; }  else 
{ 
obj_t BgL_auxz00_4590;
BgL_auxz00_4590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22810)), BGl_string2980z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_oz00_1058); 
FAILURE(BgL_auxz00_4590,BFALSE,BFALSE);} 
BgL_stz00_1059 = 
CDR(BgL_pairz00_2179); } 
{ /* Llib/unicode.scm 556 */
obj_t BgL_arg1998z00_1060;
{ /* Llib/unicode.scm 556 */
obj_t BgL_arg1999z00_1061;
{ /* Llib/unicode.scm 556 */
obj_t BgL_pairz00_2180;
BgL_pairz00_2180 = BgL_ez00_1053; 
{ /* Llib/unicode.scm 556 */
obj_t BgL_pairz00_2183;
{ /* Llib/unicode.scm 556 */
obj_t BgL_aux2798z00_3244;
BgL_aux2798z00_3244 = 
CDR(BgL_pairz00_2180); 
if(
PAIRP(BgL_aux2798z00_3244))
{ /* Llib/unicode.scm 556 */
BgL_pairz00_2183 = BgL_aux2798z00_3244; }  else 
{ 
obj_t BgL_auxz00_4598;
BgL_auxz00_4598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22842)), BGl_string2980z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_aux2798z00_3244); 
FAILURE(BgL_auxz00_4598,BFALSE,BFALSE);} } 
BgL_arg1999z00_1061 = 
CAR(BgL_pairz00_2183); } } 
BgL_arg1998z00_1060 = 
BGl_loopz72z72zz__unicodez00(BgL_arg1999z00_1061, BgL_stz00_1059); } 
SET_CDR(BgL_oz00_1058, BgL_arg1998z00_1060); } 
return BgL_tablez00_1054;}  else 
{ /* Llib/unicode.scm 554 */
return 
MAKE_PAIR(BgL_ez00_1053, BgL_tablez00_1054);} } } } } 
}



/* add-table-entry */
obj_t BGl_addzd2tablezd2entryz00zz__unicodez00(obj_t BgL_tablez00_1047, obj_t BgL_sz00_1048, long BgL_charz00_1049)
{ AN_OBJECT;
{ /* Llib/unicode.scm 558 */
{ /* Llib/unicode.scm 548 */
obj_t BgL_g1827z00_1051;
{ /* Llib/unicode.scm 548 */
obj_t BgL_arg2000z00_1063;
BgL_arg2000z00_1063 = 
BGl_makezd2tablezd2entryz00zz__unicodez00(BgL_sz00_1048, BgL_charz00_1049); 
{ /* Llib/unicode.scm 548 */
obj_t BgL_pairz00_2176;
if(
PAIRP(BgL_arg2000z00_1063))
{ /* Llib/unicode.scm 548 */
BgL_pairz00_2176 = BgL_arg2000z00_1063; }  else 
{ 
obj_t BgL_auxz00_4609;
BgL_auxz00_4609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22680)), BGl_string2981z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_arg2000z00_1063); 
FAILURE(BgL_auxz00_4609,BFALSE,BFALSE);} 
BgL_g1827z00_1051 = 
CAR(BgL_pairz00_2176); } } 
return 
BGl_loopz72z72zz__unicodez00(BgL_g1827z00_1051, BgL_tablez00_1047);} } 
}



/* _inverse-utf8-table */
obj_t BGl__inversezd2utf8zd2tablez00zz__unicodez00(obj_t BgL_envz00_2925, obj_t BgL_tablez00_2926)
{ AN_OBJECT;
{ /* Llib/unicode.scm 538 */
{ /* Llib/unicode.scm 541 */
obj_t BgL_auxz00_4615;
if(
VECTORP(BgL_tablez00_2926))
{ /* Llib/unicode.scm 541 */
BgL_auxz00_4615 = BgL_tablez00_2926
; }  else 
{ 
obj_t BgL_auxz00_4618;
BgL_auxz00_4618 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)22420)), BGl_string2982z00zz__unicodez00, BGl_string2983z00zz__unicodez00, BgL_tablez00_2926); 
FAILURE(BgL_auxz00_4618,BFALSE,BFALSE);} 
return 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BgL_auxz00_4615);} } 
}



/* utf8-string->ucs2-string */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t BgL_utf8z00_56)
{ AN_OBJECT;
{ /* Llib/unicode.scm 573 */
return 
utf8_string_to_ucs2_string(BgL_utf8z00_56);} 
}



/* _utf8-string->ucs2-string */
obj_t BGl__utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t BgL_envz00_2927, obj_t BgL_utf8z00_2928)
{ AN_OBJECT;
{ /* Llib/unicode.scm 573 */
{ /* Llib/unicode.scm 574 */
obj_t BgL_utf8z00_3405;
if(
STRINGP(BgL_utf8z00_2928))
{ /* Llib/unicode.scm 574 */
BgL_utf8z00_3405 = BgL_utf8z00_2928; }  else 
{ 
obj_t BgL_auxz00_4626;
BgL_auxz00_4626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)23441)), BGl_string2984z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_utf8z00_2928); 
FAILURE(BgL_auxz00_4626,BFALSE,BFALSE);} 
return 
utf8_string_to_ucs2_string(BgL_utf8z00_3405);} } 
}



/* utf8->8bits-length */
long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t BgL_strz00_57, long BgL_lenz00_58)
{ AN_OBJECT;
{ /* Llib/unicode.scm 579 */
{ 
long BgL_siza7eza7_1067;long BgL_iz00_1068;
BgL_siza7eza7_1067 = ((long)0); 
BgL_iz00_1068 = ((long)0); 
BgL_zc3anonymousza32001ze3z83_1069:
if(
(BgL_iz00_1068>=BgL_lenz00_58))
{ /* Llib/unicode.scm 582 */
return BgL_siza7eza7_1067;}  else 
{ /* Llib/unicode.scm 584 */
long BgL_cz00_1071;
{ /* Llib/unicode.scm 584 */
unsigned char BgL_auxz00_4633;
{ /* Llib/unicode.scm 584 */
long BgL_l2526z00_2972;
BgL_l2526z00_2972 = 
STRING_LENGTH(BgL_strz00_57); 
if(
BOUND_CHECK(BgL_iz00_1068, BgL_l2526z00_2972))
{ /* Llib/unicode.scm 584 */
BgL_auxz00_4633 = 
STRING_REF(BgL_strz00_57, BgL_iz00_1068)
; }  else 
{ 
obj_t BgL_auxz00_4638;
BgL_auxz00_4638 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)23831)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_iz00_1068), BgL_strz00_57); 
FAILURE(BgL_auxz00_4638,BFALSE,BFALSE);} } 
BgL_cz00_1071 = 
(BgL_auxz00_4633); } 
if(
(BgL_cz00_1071<((long)194)))
{ 
long BgL_iz00_4648;long BgL_siza7eza7_4646;
BgL_siza7eza7_4646 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4648 = 
(BgL_iz00_1068+((long)1)); 
BgL_iz00_1068 = BgL_iz00_4648; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4646; 
goto BgL_zc3anonymousza32001ze3z83_1069;}  else 
{ /* Llib/unicode.scm 586 */
if(
(BgL_cz00_1071<=((long)223)))
{ 
long BgL_iz00_4654;long BgL_siza7eza7_4652;
BgL_siza7eza7_4652 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4654 = 
(BgL_iz00_1068+((long)2)); 
BgL_iz00_1068 = BgL_iz00_4654; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4652; 
goto BgL_zc3anonymousza32001ze3z83_1069;}  else 
{ /* Llib/unicode.scm 588 */
if(
(BgL_cz00_1071<=((long)239)))
{ 
long BgL_iz00_4660;long BgL_siza7eza7_4658;
BgL_siza7eza7_4658 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4660 = 
(BgL_iz00_1068+((long)3)); 
BgL_iz00_1068 = BgL_iz00_4660; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4658; 
goto BgL_zc3anonymousza32001ze3z83_1069;}  else 
{ /* Llib/unicode.scm 590 */
if(
(BgL_cz00_1071<=((long)247)))
{ 
long BgL_iz00_4666;long BgL_siza7eza7_4664;
BgL_siza7eza7_4664 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4666 = 
(BgL_iz00_1068+((long)4)); 
BgL_iz00_1068 = BgL_iz00_4666; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4664; 
goto BgL_zc3anonymousza32001ze3z83_1069;}  else 
{ /* Llib/unicode.scm 592 */
if(
(BgL_cz00_1071<=((long)251)))
{ 
long BgL_iz00_4672;long BgL_siza7eza7_4670;
BgL_siza7eza7_4670 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4672 = 
(BgL_iz00_1068+((long)5)); 
BgL_iz00_1068 = BgL_iz00_4672; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4670; 
goto BgL_zc3anonymousza32001ze3z83_1069;}  else 
{ 
long BgL_iz00_4676;long BgL_siza7eza7_4674;
BgL_siza7eza7_4674 = 
(BgL_siza7eza7_1067+((long)1)); 
BgL_iz00_4676 = 
(BgL_iz00_1068+((long)6)); 
BgL_iz00_1068 = BgL_iz00_4676; 
BgL_siza7eza7_1067 = BgL_siza7eza7_4674; 
goto BgL_zc3anonymousza32001ze3z83_1069;} } } } } } } } 
}



/* utf8-string? */
BGL_EXPORTED_DEF bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_strz00_59)
{ AN_OBJECT;
{ /* Llib/unicode.scm 602 */
{ /* Llib/unicode.scm 608 */
long BgL_lenz00_1092;
BgL_lenz00_1092 = 
STRING_LENGTH(BgL_strz00_59); 
{ 
long BgL_rz00_1094;
BgL_rz00_1094 = ((long)0); 
BgL_zc3anonymousza32023ze3z83_1095:
if(
(BgL_rz00_1094==BgL_lenz00_1092))
{ /* Llib/unicode.scm 610 */
return ((bool_t)1);}  else 
{ /* Llib/unicode.scm 612 */
long BgL_nz00_1098;
{ /* Llib/unicode.scm 613 */
unsigned char BgL_auxz00_4681;
{ /* Llib/unicode.scm 612 */
long BgL_l2530z00_2976;
BgL_l2530z00_2976 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_rz00_1094, BgL_l2530z00_2976))
{ /* Llib/unicode.scm 612 */
BgL_auxz00_4681 = 
STRING_REF(BgL_strz00_59, BgL_rz00_1094)
; }  else 
{ 
obj_t BgL_auxz00_4686;
BgL_auxz00_4686 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)24635)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_rz00_1094), BgL_strz00_59); 
FAILURE(BgL_auxz00_4686,BFALSE,BFALSE);} } 
BgL_nz00_1098 = 
(BgL_auxz00_4681); } 
{ /* Llib/unicode.scm 613 */

if(
(BgL_nz00_1098<=((long)127)))
{ 
long BgL_rz00_4694;
BgL_rz00_4694 = 
(BgL_rz00_1094+((long)1)); 
BgL_rz00_1094 = BgL_rz00_4694; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 615 */
if(
(BgL_nz00_1098<((long)194)))
{ /* Llib/unicode.scm 618 */
return ((bool_t)0);}  else 
{ /* Llib/unicode.scm 618 */
if(
(BgL_nz00_1098<=((long)223)))
{ /* Llib/unicode.scm 623 */
bool_t BgL_testz00_4700;
if(
(BgL_rz00_1094<
(BgL_lenz00_1092-((long)1))))
{ /* Llib/unicode.scm 624 */
long BgL_nz00_2250;
{ /* Llib/unicode.scm 624 */
unsigned char BgL_auxz00_4704;
{ /* Llib/unicode.scm 624 */
long BgL_i2533z00_2979;
BgL_i2533z00_2979 = 
(BgL_rz00_1094+((long)1)); 
{ /* Llib/unicode.scm 624 */
long BgL_l2534z00_2980;
BgL_l2534z00_2980 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2533z00_2979, BgL_l2534z00_2980))
{ /* Llib/unicode.scm 624 */
BgL_auxz00_4704 = 
STRING_REF(BgL_strz00_59, BgL_i2533z00_2979)
; }  else 
{ 
obj_t BgL_auxz00_4710;
BgL_auxz00_4710 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)24910)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2533z00_2979), BgL_strz00_59); 
FAILURE(BgL_auxz00_4710,BFALSE,BFALSE);} } } 
BgL_nz00_2250 = 
(BgL_auxz00_4704); } 
if(
(BgL_nz00_2250>=((long)128)))
{ /* Llib/unicode.scm 624 */
BgL_testz00_4700 = 
(BgL_nz00_2250<=((long)191))
; }  else 
{ /* Llib/unicode.scm 624 */
BgL_testz00_4700 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 623 */
BgL_testz00_4700 = ((bool_t)0)
; } 
if(BgL_testz00_4700)
{ 
long BgL_rz00_4719;
BgL_rz00_4719 = 
(BgL_rz00_1094+((long)2)); 
BgL_rz00_1094 = BgL_rz00_4719; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 623 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 621 */
if(
(BgL_nz00_1098<=((long)239)))
{ /* Llib/unicode.scm 628 */
bool_t BgL_testz00_4723;
if(
(BgL_rz00_1094<
(BgL_lenz00_1092-((long)2))))
{ /* Llib/unicode.scm 629 */
bool_t BgL_testz00_4727;
{ /* Llib/unicode.scm 629 */
long BgL_nz00_2272;
{ /* Llib/unicode.scm 629 */
unsigned char BgL_auxz00_4728;
{ /* Llib/unicode.scm 629 */
long BgL_i2537z00_2983;
BgL_i2537z00_2983 = 
(BgL_rz00_1094+((long)1)); 
{ /* Llib/unicode.scm 629 */
long BgL_l2538z00_2984;
BgL_l2538z00_2984 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2537z00_2983, BgL_l2538z00_2984))
{ /* Llib/unicode.scm 629 */
BgL_auxz00_4728 = 
STRING_REF(BgL_strz00_59, BgL_i2537z00_2983)
; }  else 
{ 
obj_t BgL_auxz00_4734;
BgL_auxz00_4734 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25081)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2537z00_2983), BgL_strz00_59); 
FAILURE(BgL_auxz00_4734,BFALSE,BFALSE);} } } 
BgL_nz00_2272 = 
(BgL_auxz00_4728); } 
if(
(BgL_nz00_2272>=((long)128)))
{ /* Llib/unicode.scm 629 */
BgL_testz00_4727 = 
(BgL_nz00_2272<=((long)191))
; }  else 
{ /* Llib/unicode.scm 629 */
BgL_testz00_4727 = ((bool_t)0)
; } } 
if(BgL_testz00_4727)
{ /* Llib/unicode.scm 630 */
long BgL_nz00_2286;
{ /* Llib/unicode.scm 630 */
unsigned char BgL_auxz00_4743;
{ /* Llib/unicode.scm 630 */
long BgL_i2541z00_2987;
BgL_i2541z00_2987 = 
(BgL_rz00_1094+((long)2)); 
{ /* Llib/unicode.scm 630 */
long BgL_l2542z00_2988;
BgL_l2542z00_2988 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2541z00_2987, BgL_l2542z00_2988))
{ /* Llib/unicode.scm 630 */
BgL_auxz00_4743 = 
STRING_REF(BgL_strz00_59, BgL_i2541z00_2987)
; }  else 
{ 
obj_t BgL_auxz00_4749;
BgL_auxz00_4749 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25140)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2541z00_2987), BgL_strz00_59); 
FAILURE(BgL_auxz00_4749,BFALSE,BFALSE);} } } 
BgL_nz00_2286 = 
(BgL_auxz00_4743); } 
if(
(BgL_nz00_2286>=((long)128)))
{ /* Llib/unicode.scm 630 */
BgL_testz00_4723 = 
(BgL_nz00_2286<=((long)191))
; }  else 
{ /* Llib/unicode.scm 630 */
BgL_testz00_4723 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 629 */
BgL_testz00_4723 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 628 */
BgL_testz00_4723 = ((bool_t)0)
; } 
if(BgL_testz00_4723)
{ 
long BgL_rz00_4758;
BgL_rz00_4758 = 
(BgL_rz00_1094+((long)3)); 
BgL_rz00_1094 = BgL_rz00_4758; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 628 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 626 */
if(
(BgL_nz00_1098==((long)240)))
{ /* Llib/unicode.scm 634 */
bool_t BgL_testz00_4762;
if(
(BgL_rz00_1094<
(BgL_lenz00_1092-((long)3))))
{ /* Llib/unicode.scm 635 */
bool_t BgL_testz00_4766;
{ /* Llib/unicode.scm 635 */
long BgL_nz00_2308;
{ /* Llib/unicode.scm 635 */
unsigned char BgL_auxz00_4767;
{ /* Llib/unicode.scm 635 */
long BgL_i2545z00_2991;
BgL_i2545z00_2991 = 
(BgL_rz00_1094+((long)1)); 
{ /* Llib/unicode.scm 635 */
long BgL_l2546z00_2992;
BgL_l2546z00_2992 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2545z00_2991, BgL_l2546z00_2992))
{ /* Llib/unicode.scm 635 */
BgL_auxz00_4767 = 
STRING_REF(BgL_strz00_59, BgL_i2545z00_2991)
; }  else 
{ 
obj_t BgL_auxz00_4773;
BgL_auxz00_4773 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25319)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2545z00_2991), BgL_strz00_59); 
FAILURE(BgL_auxz00_4773,BFALSE,BFALSE);} } } 
BgL_nz00_2308 = 
(BgL_auxz00_4767); } 
if(
(BgL_nz00_2308>=((long)144)))
{ /* Llib/unicode.scm 635 */
BgL_testz00_4766 = 
(BgL_nz00_2308<=((long)191))
; }  else 
{ /* Llib/unicode.scm 635 */
BgL_testz00_4766 = ((bool_t)0)
; } } 
if(BgL_testz00_4766)
{ /* Llib/unicode.scm 636 */
bool_t BgL_testz00_4782;
{ /* Llib/unicode.scm 636 */
long BgL_nz00_2322;
{ /* Llib/unicode.scm 636 */
unsigned char BgL_auxz00_4783;
{ /* Llib/unicode.scm 636 */
long BgL_i2549z00_2995;
BgL_i2549z00_2995 = 
(BgL_rz00_1094+((long)2)); 
{ /* Llib/unicode.scm 636 */
long BgL_l2550z00_2996;
BgL_l2550z00_2996 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2549z00_2995, BgL_l2550z00_2996))
{ /* Llib/unicode.scm 636 */
BgL_auxz00_4783 = 
STRING_REF(BgL_strz00_59, BgL_i2549z00_2995)
; }  else 
{ 
obj_t BgL_auxz00_4789;
BgL_auxz00_4789 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25378)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2549z00_2995), BgL_strz00_59); 
FAILURE(BgL_auxz00_4789,BFALSE,BFALSE);} } } 
BgL_nz00_2322 = 
(BgL_auxz00_4783); } 
if(
(BgL_nz00_2322>=((long)128)))
{ /* Llib/unicode.scm 636 */
BgL_testz00_4782 = 
(BgL_nz00_2322<=((long)191))
; }  else 
{ /* Llib/unicode.scm 636 */
BgL_testz00_4782 = ((bool_t)0)
; } } 
if(BgL_testz00_4782)
{ /* Llib/unicode.scm 637 */
long BgL_nz00_2336;
{ /* Llib/unicode.scm 637 */
unsigned char BgL_auxz00_4798;
{ /* Llib/unicode.scm 637 */
long BgL_i2553z00_2999;
BgL_i2553z00_2999 = 
(BgL_rz00_1094+((long)3)); 
{ /* Llib/unicode.scm 637 */
long BgL_l2554z00_3000;
BgL_l2554z00_3000 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2553z00_2999, BgL_l2554z00_3000))
{ /* Llib/unicode.scm 637 */
BgL_auxz00_4798 = 
STRING_REF(BgL_strz00_59, BgL_i2553z00_2999)
; }  else 
{ 
obj_t BgL_auxz00_4804;
BgL_auxz00_4804 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25437)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2553z00_2999), BgL_strz00_59); 
FAILURE(BgL_auxz00_4804,BFALSE,BFALSE);} } } 
BgL_nz00_2336 = 
(BgL_auxz00_4798); } 
if(
(BgL_nz00_2336>=((long)128)))
{ /* Llib/unicode.scm 637 */
BgL_testz00_4762 = 
(BgL_nz00_2336<=((long)191))
; }  else 
{ /* Llib/unicode.scm 637 */
BgL_testz00_4762 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 636 */
BgL_testz00_4762 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 635 */
BgL_testz00_4762 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 634 */
BgL_testz00_4762 = ((bool_t)0)
; } 
if(BgL_testz00_4762)
{ 
long BgL_rz00_4813;
BgL_rz00_4813 = 
(BgL_rz00_1094+((long)4)); 
BgL_rz00_1094 = BgL_rz00_4813; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 634 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 632 */
if(
(BgL_nz00_1098==((long)244)))
{ /* Llib/unicode.scm 641 */
bool_t BgL_testz00_4817;
if(
(BgL_rz00_1094<
(BgL_lenz00_1092-((long)3))))
{ /* Llib/unicode.scm 642 */
bool_t BgL_testz00_4821;
{ /* Llib/unicode.scm 642 */
long BgL_nz00_2358;
{ /* Llib/unicode.scm 642 */
unsigned char BgL_auxz00_4822;
{ /* Llib/unicode.scm 642 */
long BgL_i2557z00_3003;
BgL_i2557z00_3003 = 
(BgL_rz00_1094+((long)1)); 
{ /* Llib/unicode.scm 642 */
long BgL_l2558z00_3004;
BgL_l2558z00_3004 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2557z00_3003, BgL_l2558z00_3004))
{ /* Llib/unicode.scm 642 */
BgL_auxz00_4822 = 
STRING_REF(BgL_strz00_59, BgL_i2557z00_3003)
; }  else 
{ 
obj_t BgL_auxz00_4828;
BgL_auxz00_4828 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25616)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2557z00_3003), BgL_strz00_59); 
FAILURE(BgL_auxz00_4828,BFALSE,BFALSE);} } } 
BgL_nz00_2358 = 
(BgL_auxz00_4822); } 
if(
(BgL_nz00_2358>=((long)128)))
{ /* Llib/unicode.scm 642 */
BgL_testz00_4821 = 
(BgL_nz00_2358<=((long)143))
; }  else 
{ /* Llib/unicode.scm 642 */
BgL_testz00_4821 = ((bool_t)0)
; } } 
if(BgL_testz00_4821)
{ /* Llib/unicode.scm 643 */
bool_t BgL_testz00_4837;
{ /* Llib/unicode.scm 643 */
long BgL_nz00_2372;
{ /* Llib/unicode.scm 643 */
unsigned char BgL_auxz00_4838;
{ /* Llib/unicode.scm 643 */
long BgL_i2561z00_3007;
BgL_i2561z00_3007 = 
(BgL_rz00_1094+((long)2)); 
{ /* Llib/unicode.scm 643 */
long BgL_l2562z00_3008;
BgL_l2562z00_3008 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2561z00_3007, BgL_l2562z00_3008))
{ /* Llib/unicode.scm 643 */
BgL_auxz00_4838 = 
STRING_REF(BgL_strz00_59, BgL_i2561z00_3007)
; }  else 
{ 
obj_t BgL_auxz00_4844;
BgL_auxz00_4844 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25675)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2561z00_3007), BgL_strz00_59); 
FAILURE(BgL_auxz00_4844,BFALSE,BFALSE);} } } 
BgL_nz00_2372 = 
(BgL_auxz00_4838); } 
if(
(BgL_nz00_2372>=((long)128)))
{ /* Llib/unicode.scm 643 */
BgL_testz00_4837 = 
(BgL_nz00_2372<=((long)191))
; }  else 
{ /* Llib/unicode.scm 643 */
BgL_testz00_4837 = ((bool_t)0)
; } } 
if(BgL_testz00_4837)
{ /* Llib/unicode.scm 644 */
long BgL_nz00_2386;
{ /* Llib/unicode.scm 644 */
unsigned char BgL_auxz00_4853;
{ /* Llib/unicode.scm 644 */
long BgL_i2565z00_3011;
BgL_i2565z00_3011 = 
(BgL_rz00_1094+((long)3)); 
{ /* Llib/unicode.scm 644 */
long BgL_l2566z00_3012;
BgL_l2566z00_3012 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2565z00_3011, BgL_l2566z00_3012))
{ /* Llib/unicode.scm 644 */
BgL_auxz00_4853 = 
STRING_REF(BgL_strz00_59, BgL_i2565z00_3011)
; }  else 
{ 
obj_t BgL_auxz00_4859;
BgL_auxz00_4859 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25734)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2565z00_3011), BgL_strz00_59); 
FAILURE(BgL_auxz00_4859,BFALSE,BFALSE);} } } 
BgL_nz00_2386 = 
(BgL_auxz00_4853); } 
if(
(BgL_nz00_2386>=((long)128)))
{ /* Llib/unicode.scm 644 */
BgL_testz00_4817 = 
(BgL_nz00_2386<=((long)191))
; }  else 
{ /* Llib/unicode.scm 644 */
BgL_testz00_4817 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 643 */
BgL_testz00_4817 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 642 */
BgL_testz00_4817 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 641 */
BgL_testz00_4817 = ((bool_t)0)
; } 
if(BgL_testz00_4817)
{ 
long BgL_rz00_4868;
BgL_rz00_4868 = 
(BgL_rz00_1094+((long)4)); 
BgL_rz00_1094 = BgL_rz00_4868; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 641 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 639 */
if(
(BgL_nz00_1098<=((long)247)))
{ /* Llib/unicode.scm 648 */
bool_t BgL_testz00_4872;
if(
(BgL_rz00_1094<
(BgL_lenz00_1092-((long)3))))
{ /* Llib/unicode.scm 649 */
bool_t BgL_testz00_4876;
{ /* Llib/unicode.scm 649 */
long BgL_nz00_2408;
{ /* Llib/unicode.scm 649 */
unsigned char BgL_auxz00_4877;
{ /* Llib/unicode.scm 649 */
long BgL_i2569z00_3015;
BgL_i2569z00_3015 = 
(BgL_rz00_1094+((long)1)); 
{ /* Llib/unicode.scm 649 */
long BgL_l2570z00_3016;
BgL_l2570z00_3016 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2569z00_3015, BgL_l2570z00_3016))
{ /* Llib/unicode.scm 649 */
BgL_auxz00_4877 = 
STRING_REF(BgL_strz00_59, BgL_i2569z00_3015)
; }  else 
{ 
obj_t BgL_auxz00_4883;
BgL_auxz00_4883 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25905)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2569z00_3015), BgL_strz00_59); 
FAILURE(BgL_auxz00_4883,BFALSE,BFALSE);} } } 
BgL_nz00_2408 = 
(BgL_auxz00_4877); } 
if(
(BgL_nz00_2408>=((long)128)))
{ /* Llib/unicode.scm 649 */
BgL_testz00_4876 = 
(BgL_nz00_2408<=((long)191))
; }  else 
{ /* Llib/unicode.scm 649 */
BgL_testz00_4876 = ((bool_t)0)
; } } 
if(BgL_testz00_4876)
{ /* Llib/unicode.scm 650 */
bool_t BgL_testz00_4892;
{ /* Llib/unicode.scm 650 */
long BgL_nz00_2422;
{ /* Llib/unicode.scm 650 */
unsigned char BgL_auxz00_4893;
{ /* Llib/unicode.scm 650 */
long BgL_i2573z00_3019;
BgL_i2573z00_3019 = 
(BgL_rz00_1094+((long)2)); 
{ /* Llib/unicode.scm 650 */
long BgL_l2574z00_3020;
BgL_l2574z00_3020 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2573z00_3019, BgL_l2574z00_3020))
{ /* Llib/unicode.scm 650 */
BgL_auxz00_4893 = 
STRING_REF(BgL_strz00_59, BgL_i2573z00_3019)
; }  else 
{ 
obj_t BgL_auxz00_4899;
BgL_auxz00_4899 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)25964)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2573z00_3019), BgL_strz00_59); 
FAILURE(BgL_auxz00_4899,BFALSE,BFALSE);} } } 
BgL_nz00_2422 = 
(BgL_auxz00_4893); } 
if(
(BgL_nz00_2422>=((long)128)))
{ /* Llib/unicode.scm 650 */
BgL_testz00_4892 = 
(BgL_nz00_2422<=((long)191))
; }  else 
{ /* Llib/unicode.scm 650 */
BgL_testz00_4892 = ((bool_t)0)
; } } 
if(BgL_testz00_4892)
{ /* Llib/unicode.scm 651 */
long BgL_nz00_2436;
{ /* Llib/unicode.scm 651 */
unsigned char BgL_auxz00_4908;
{ /* Llib/unicode.scm 651 */
long BgL_i2577z00_3023;
BgL_i2577z00_3023 = 
(BgL_rz00_1094+((long)3)); 
{ /* Llib/unicode.scm 651 */
long BgL_l2578z00_3024;
BgL_l2578z00_3024 = 
STRING_LENGTH(BgL_strz00_59); 
if(
BOUND_CHECK(BgL_i2577z00_3023, BgL_l2578z00_3024))
{ /* Llib/unicode.scm 651 */
BgL_auxz00_4908 = 
STRING_REF(BgL_strz00_59, BgL_i2577z00_3023)
; }  else 
{ 
obj_t BgL_auxz00_4914;
BgL_auxz00_4914 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)26023)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2577z00_3023), BgL_strz00_59); 
FAILURE(BgL_auxz00_4914,BFALSE,BFALSE);} } } 
BgL_nz00_2436 = 
(BgL_auxz00_4908); } 
if(
(BgL_nz00_2436>=((long)128)))
{ /* Llib/unicode.scm 651 */
BgL_testz00_4872 = 
(BgL_nz00_2436<=((long)191))
; }  else 
{ /* Llib/unicode.scm 651 */
BgL_testz00_4872 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 650 */
BgL_testz00_4872 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 649 */
BgL_testz00_4872 = ((bool_t)0)
; } }  else 
{ /* Llib/unicode.scm 648 */
BgL_testz00_4872 = ((bool_t)0)
; } 
if(BgL_testz00_4872)
{ 
long BgL_rz00_4923;
BgL_rz00_4923 = 
(BgL_rz00_1094+((long)4)); 
BgL_rz00_1094 = BgL_rz00_4923; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 648 */
return ((bool_t)0);} }  else 
{ /* Llib/unicode.scm 646 */
if(
(BgL_nz00_1098<=((long)251)))
{ 
long BgL_rz00_4927;
BgL_rz00_4927 = 
(BgL_rz00_1094+((long)5)); 
BgL_rz00_1094 = BgL_rz00_4927; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 653 */
if(
(BgL_nz00_1098<=((long)253)))
{ 
long BgL_rz00_4931;
BgL_rz00_4931 = 
(BgL_rz00_1094+((long)6)); 
BgL_rz00_1094 = BgL_rz00_4931; 
goto BgL_zc3anonymousza32023ze3z83_1095;}  else 
{ /* Llib/unicode.scm 655 */
return ((bool_t)0);} } } } } } } } } } } } } } 
}



/* _utf8-string? */
obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_envz00_2929, obj_t BgL_strz00_2930)
{ AN_OBJECT;
{ /* Llib/unicode.scm 602 */
{ /* Llib/unicode.scm 608 */
bool_t BgL_auxz00_4933;
{ /* Llib/unicode.scm 608 */
obj_t BgL_auxz00_4934;
if(
STRINGP(BgL_strz00_2930))
{ /* Llib/unicode.scm 608 */
BgL_auxz00_4934 = BgL_strz00_2930
; }  else 
{ 
obj_t BgL_auxz00_4937;
BgL_auxz00_4937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)24535)), BGl_string2985z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2930); 
FAILURE(BgL_auxz00_4937,BFALSE,BFALSE);} 
BgL_auxz00_4933 = 
BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_4934); } 
return 
BBOOL(BgL_auxz00_4933);} } 
}



/* utf8->8bits-fill! */
obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_60, obj_t BgL_strz00_61, long BgL_lenz00_62, obj_t BgL_tablez00_63)
{ AN_OBJECT;
{ /* Llib/unicode.scm 663 */
{ 
long BgL_rz00_1250;long BgL_rz00_1240;
{ 
long BgL_rz00_1197;long BgL_wz00_1198;
BgL_rz00_1197 = ((long)0); 
BgL_wz00_1198 = ((long)0); 
BgL_zc3anonymousza32123ze3z83_1199:
if(
(BgL_rz00_1197==BgL_lenz00_62))
{ /* Llib/unicode.scm 677 */
return BgL_nstrz00_60;}  else 
{ /* Llib/unicode.scm 679 */
unsigned char BgL_cz00_1201;
{ /* Llib/unicode.scm 679 */
long BgL_l2582z00_3028;
BgL_l2582z00_3028 = 
STRING_LENGTH(BgL_strz00_61); 
if(
BOUND_CHECK(BgL_rz00_1197, BgL_l2582z00_3028))
{ /* Llib/unicode.scm 679 */
BgL_cz00_1201 = 
STRING_REF(BgL_strz00_61, BgL_rz00_1197); }  else 
{ 
obj_t BgL_auxz00_4949;
BgL_auxz00_4949 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)26854)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_rz00_1197), BgL_strz00_61); 
FAILURE(BgL_auxz00_4949,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 679 */
long BgL_nz00_1202;
BgL_nz00_1202 = 
(BgL_cz00_1201); 
{ /* Llib/unicode.scm 680 */

if(
(BgL_nz00_1202<=((long)127)))
{ /* Llib/unicode.scm 682 */
{ /* Llib/unicode.scm 683 */
long BgL_l2586z00_3032;
BgL_l2586z00_3032 = 
STRING_LENGTH(BgL_nstrz00_60); 
if(
BOUND_CHECK(BgL_wz00_1198, BgL_l2586z00_3032))
{ /* Llib/unicode.scm 683 */
STRING_SET(BgL_nstrz00_60, BgL_wz00_1198, BgL_cz00_1201); }  else 
{ 
obj_t BgL_auxz00_4961;
BgL_auxz00_4961 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)26932)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1198), BgL_nstrz00_60); 
FAILURE(BgL_auxz00_4961,BFALSE,BFALSE);} } 
{ 
long BgL_wz00_4968;long BgL_rz00_4966;
BgL_rz00_4966 = 
(BgL_rz00_1197+((long)1)); 
BgL_wz00_4968 = 
(BgL_wz00_1198+((long)1)); 
BgL_wz00_1198 = BgL_wz00_4968; 
BgL_rz00_1197 = BgL_rz00_4966; 
goto BgL_zc3anonymousza32123ze3z83_1199;} }  else 
{ /* Llib/unicode.scm 682 */
if(
(BgL_nz00_1202<((long)194)))
{ /* Llib/unicode.scm 685 */
BgL_rz00_1250 = BgL_rz00_1197; 
BgL_zc3anonymousza32159ze3z83_1251:
{ /* Llib/unicode.scm 671 */
obj_t BgL_arg2160z00_1252;obj_t BgL_arg2162z00_1254;
BgL_arg2160z00_1252 = BGl_symbol2986z00zz__unicodez00; 
{ /* Llib/unicode.scm 673 */
obj_t BgL_arg2163z00_1255;
{ /* Llib/unicode.scm 673 */
long BgL_arg2164z00_1256;
{ /* Llib/unicode.scm 673 */
long BgL_yz00_1258;
BgL_yz00_1258 = 
(BgL_rz00_1250+((long)10)); 
if(
(BgL_lenz00_62<BgL_yz00_1258))
{ /* Llib/unicode.scm 673 */
BgL_arg2164z00_1256 = BgL_lenz00_62; }  else 
{ /* Llib/unicode.scm 673 */
BgL_arg2164z00_1256 = BgL_yz00_1258; } } 
BgL_arg2163z00_1255 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_61, BgL_rz00_1250, BgL_arg2164z00_1256); } 
BgL_arg2162z00_1254 = 
string_for_read(BgL_arg2163z00_1255); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2160z00_1252, BGl_string2989z00zz__unicodez00, BgL_arg2162z00_1254);} }  else 
{ /* Llib/unicode.scm 685 */
if(
(BgL_nz00_1202<=((long)223)))
{ /* Llib/unicode.scm 687 */
if(
(BgL_rz00_1197==
(BgL_lenz00_62-((long)1))))
{ /* Llib/unicode.scm 688 */
BgL_rz00_1240 = BgL_rz00_1197; 
BgL_zc3anonymousza32152ze3z83_1241:
{ /* Llib/unicode.scm 666 */
obj_t BgL_arg2153z00_1242;obj_t BgL_arg2155z00_1244;
BgL_arg2153z00_1242 = BGl_symbol2986z00zz__unicodez00; 
{ /* Llib/unicode.scm 668 */
obj_t BgL_arg2156z00_1245;
{ /* Llib/unicode.scm 668 */
long BgL_arg2157z00_1246;
{ /* Llib/unicode.scm 668 */
long BgL_yz00_1248;
BgL_yz00_1248 = 
(BgL_rz00_1240-((long)10)); 
if(
(((long)0)>BgL_yz00_1248))
{ /* Llib/unicode.scm 668 */
BgL_arg2157z00_1246 = ((long)0); }  else 
{ /* Llib/unicode.scm 668 */
BgL_arg2157z00_1246 = BgL_yz00_1248; } } 
BgL_arg2156z00_1245 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_61, BgL_arg2157z00_1246, BgL_lenz00_62); } 
BgL_arg2155z00_1244 = 
string_for_read(BgL_arg2156z00_1245); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2153z00_1242, BGl_string2988z00zz__unicodez00, BgL_arg2155z00_1244);} }  else 
{ /* Llib/unicode.scm 690 */
unsigned char BgL_ncz00_1209;
{ /* Llib/unicode.scm 690 */
long BgL_i2589z00_3035;
BgL_i2589z00_3035 = 
(BgL_rz00_1197+((long)1)); 
{ /* Llib/unicode.scm 690 */
long BgL_l2590z00_3036;
BgL_l2590z00_3036 = 
STRING_LENGTH(BgL_strz00_61); 
if(
BOUND_CHECK(BgL_i2589z00_3035, BgL_l2590z00_3036))
{ /* Llib/unicode.scm 690 */
BgL_ncz00_1209 = 
STRING_REF(BgL_strz00_61, BgL_i2589z00_3035); }  else 
{ 
obj_t BgL_auxz00_4994;
BgL_auxz00_4994 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27109)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_i2589z00_3035), BgL_strz00_61); 
FAILURE(BgL_auxz00_4994,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 690 */
long BgL_nnz00_1210;
BgL_nnz00_1210 = 
(BgL_ncz00_1209); 
{ /* Llib/unicode.scm 691 */

{ /* Llib/unicode.scm 692 */
bool_t BgL_testz00_5000;
if(
(BgL_nnz00_1210>=((long)128)))
{ /* Llib/unicode.scm 692 */
BgL_testz00_5000 = 
(BgL_nnz00_1210<((long)192))
; }  else 
{ /* Llib/unicode.scm 692 */
BgL_testz00_5000 = ((bool_t)0)
; } 
if(BgL_testz00_5000)
{ /* Llib/unicode.scm 693 */
long BgL_mz00_1212;
BgL_mz00_1212 = 
(
(
(BgL_nz00_1202-((long)194)) << 
(int)(((long)6))) | BgL_nnz00_1210); 
{ /* Llib/unicode.scm 694 */
unsigned char BgL_arg2132z00_1213;
BgL_arg2132z00_1213 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_mz00_1212); 
{ /* Llib/unicode.scm 694 */
long BgL_l2594z00_3040;
BgL_l2594z00_3040 = 
STRING_LENGTH(BgL_nstrz00_60); 
if(
BOUND_CHECK(BgL_wz00_1198, BgL_l2594z00_3040))
{ /* Llib/unicode.scm 694 */
STRING_SET(BgL_nstrz00_60, BgL_wz00_1198, BgL_arg2132z00_1213); }  else 
{ 
obj_t BgL_auxz00_5013;
BgL_auxz00_5013 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27276)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1198), BgL_nstrz00_60); 
FAILURE(BgL_auxz00_5013,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_5020;long BgL_rz00_5018;
BgL_rz00_5018 = 
(BgL_rz00_1197+((long)2)); 
BgL_wz00_5020 = 
(BgL_wz00_1198+((long)1)); 
BgL_wz00_1198 = BgL_wz00_5020; 
BgL_rz00_1197 = BgL_rz00_5018; 
goto BgL_zc3anonymousza32123ze3z83_1199;} }  else 
{ 
long BgL_rz00_5022;
BgL_rz00_5022 = BgL_rz00_1197; 
BgL_rz00_1250 = BgL_rz00_5022; 
goto BgL_zc3anonymousza32159ze3z83_1251;} } } } } }  else 
{ /* Llib/unicode.scm 687 */
if(
CBOOL(BgL_tablez00_63))
{ /* Llib/unicode.scm 698 */
obj_t BgL_g1830z00_1222;long BgL_g1831z00_1223;
{ /* Llib/unicode.scm 698 */
obj_t BgL_auxz00_5025;
{ /* Llib/unicode.scm 698 */
bool_t BgL_testz00_5027;
if(
PAIRP(BgL_tablez00_63))
{ /* Llib/unicode.scm 698 */
BgL_testz00_5027 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 698 */
BgL_testz00_5027 = 
NULLP(BgL_tablez00_63)
; } 
if(BgL_testz00_5027)
{ /* Llib/unicode.scm 698 */
BgL_auxz00_5025 = BgL_tablez00_63
; }  else 
{ 
obj_t BgL_auxz00_5031;
BgL_auxz00_5031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27419)), BGl_string2967z00zz__unicodez00, BGl_string2966z00zz__unicodez00, BgL_tablez00_63); 
FAILURE(BgL_auxz00_5031,BFALSE,BFALSE);} } 
BgL_g1830z00_1222 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_nz00_1202), BgL_auxz00_5025); } 
BgL_g1831z00_1223 = 
(BgL_rz00_1197+((long)1)); 
{ 
obj_t BgL_subtablez00_1225;long BgL_nrz00_1226;
BgL_subtablez00_1225 = BgL_g1830z00_1222; 
BgL_nrz00_1226 = BgL_g1831z00_1223; 
BgL_zc3anonymousza32141ze3z83_1227:
if(
CBOOL(BgL_subtablez00_1225))
{ /* Llib/unicode.scm 703 */
bool_t BgL_testz00_5039;
{ /* Llib/unicode.scm 703 */
obj_t BgL_auxz00_5040;
{ /* Llib/unicode.scm 703 */
obj_t BgL_pairz00_2506;
if(
PAIRP(BgL_subtablez00_1225))
{ /* Llib/unicode.scm 703 */
BgL_pairz00_2506 = BgL_subtablez00_1225; }  else 
{ 
obj_t BgL_auxz00_5043;
BgL_auxz00_5043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27527)), BGl_string2991z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_subtablez00_1225); 
FAILURE(BgL_auxz00_5043,BFALSE,BFALSE);} 
BgL_auxz00_5040 = 
CDR(BgL_pairz00_2506); } 
BgL_testz00_5039 = 
CHARP(BgL_auxz00_5040); } 
if(BgL_testz00_5039)
{ /* Llib/unicode.scm 703 */
{ /* Llib/unicode.scm 704 */
obj_t BgL_arg2144z00_1229;
{ /* Llib/unicode.scm 704 */
obj_t BgL_pairz00_2508;
if(
PAIRP(BgL_subtablez00_1225))
{ /* Llib/unicode.scm 704 */
BgL_pairz00_2508 = BgL_subtablez00_1225; }  else 
{ 
obj_t BgL_auxz00_5051;
BgL_auxz00_5051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27566)), BGl_string2991z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_subtablez00_1225); 
FAILURE(BgL_auxz00_5051,BFALSE,BFALSE);} 
BgL_arg2144z00_1229 = 
CDR(BgL_pairz00_2508); } 
{ /* Llib/unicode.scm 704 */
unsigned char BgL_charz00_2511;
{ /* Llib/unicode.scm 704 */
obj_t BgL_auxz00_5056;
if(
CHARP(BgL_arg2144z00_1229))
{ /* Llib/unicode.scm 704 */
BgL_auxz00_5056 = BgL_arg2144z00_1229
; }  else 
{ 
obj_t BgL_auxz00_5059;
BgL_auxz00_5059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27574)), BGl_string2991z00zz__unicodez00, BGl_string2992z00zz__unicodez00, BgL_arg2144z00_1229); 
FAILURE(BgL_auxz00_5059,BFALSE,BFALSE);} 
BgL_charz00_2511 = 
CCHAR(BgL_auxz00_5056); } 
{ /* Llib/unicode.scm 704 */
long BgL_l2598z00_3044;
BgL_l2598z00_3044 = 
STRING_LENGTH(BgL_nstrz00_60); 
if(
BOUND_CHECK(BgL_wz00_1198, BgL_l2598z00_3044))
{ /* Llib/unicode.scm 704 */
STRING_SET(BgL_nstrz00_60, BgL_wz00_1198, BgL_charz00_2511); }  else 
{ 
obj_t BgL_auxz00_5068;
BgL_auxz00_5068 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27541)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1198), BgL_nstrz00_60); 
FAILURE(BgL_auxz00_5068,BFALSE,BFALSE);} } } } 
{ 
long BgL_wz00_5074;long BgL_rz00_5073;
BgL_rz00_5073 = BgL_nrz00_1226; 
BgL_wz00_5074 = 
(BgL_wz00_1198+((long)1)); 
BgL_wz00_1198 = BgL_wz00_5074; 
BgL_rz00_1197 = BgL_rz00_5073; 
goto BgL_zc3anonymousza32123ze3z83_1199;} }  else 
{ /* Llib/unicode.scm 703 */
if(
(BgL_nrz00_1226==BgL_lenz00_62))
{ 
long BgL_rz00_5078;
BgL_rz00_5078 = BgL_rz00_1197; 
BgL_rz00_1240 = BgL_rz00_5078; 
goto BgL_zc3anonymousza32152ze3z83_1241;}  else 
{ /* Llib/unicode.scm 709 */
long BgL_ncz00_1232;
{ /* Llib/unicode.scm 709 */
unsigned char BgL_auxz00_5079;
{ /* Llib/unicode.scm 709 */
long BgL_l2602z00_3048;
BgL_l2602z00_3048 = 
STRING_LENGTH(BgL_strz00_61); 
if(
BOUND_CHECK(BgL_nrz00_1226, BgL_l2602z00_3048))
{ /* Llib/unicode.scm 709 */
BgL_auxz00_5079 = 
STRING_REF(BgL_strz00_61, BgL_nrz00_1226)
; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27691)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_nrz00_1226), BgL_strz00_61); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} } 
BgL_ncz00_1232 = 
(BgL_auxz00_5079); } 
{ /* Llib/unicode.scm 710 */
obj_t BgL_arg2147z00_1233;long BgL_arg2148z00_1234;
{ /* Llib/unicode.scm 710 */
obj_t BgL_auxz00_5090;
{ /* Llib/unicode.scm 710 */
obj_t BgL_pairz00_2519;
if(
PAIRP(BgL_subtablez00_1225))
{ /* Llib/unicode.scm 710 */
BgL_pairz00_2519 = BgL_subtablez00_1225; }  else 
{ 
obj_t BgL_auxz00_5094;
BgL_auxz00_5094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27740)), BGl_string2991z00zz__unicodez00, BGl_string2964z00zz__unicodez00, BgL_subtablez00_1225); 
FAILURE(BgL_auxz00_5094,BFALSE,BFALSE);} 
{ /* Llib/unicode.scm 710 */
obj_t BgL_aux2820z00_3266;
BgL_aux2820z00_3266 = 
CDR(BgL_pairz00_2519); 
{ /* Llib/unicode.scm 710 */
bool_t BgL_testz00_5099;
if(
PAIRP(BgL_aux2820z00_3266))
{ /* Llib/unicode.scm 710 */
BgL_testz00_5099 = ((bool_t)1)
; }  else 
{ /* Llib/unicode.scm 710 */
BgL_testz00_5099 = 
NULLP(BgL_aux2820z00_3266)
; } 
if(BgL_testz00_5099)
{ /* Llib/unicode.scm 710 */
BgL_auxz00_5090 = BgL_aux2820z00_3266
; }  else 
{ 
obj_t BgL_auxz00_5103;
BgL_auxz00_5103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)27735)), BGl_string2991z00zz__unicodez00, BGl_string2966z00zz__unicodez00, BgL_aux2820z00_3266); 
FAILURE(BgL_auxz00_5103,BFALSE,BFALSE);} } } } 
BgL_arg2147z00_1233 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
BINT(BgL_ncz00_1232), BgL_auxz00_5090); } 
BgL_arg2148z00_1234 = 
(BgL_nrz00_1226+((long)1)); 
{ 
long BgL_nrz00_5110;obj_t BgL_subtablez00_5109;
BgL_subtablez00_5109 = BgL_arg2147z00_1233; 
BgL_nrz00_5110 = BgL_arg2148z00_1234; 
BgL_nrz00_1226 = BgL_nrz00_5110; 
BgL_subtablez00_1225 = BgL_subtablez00_5109; 
goto BgL_zc3anonymousza32141ze3z83_1227;} } } } }  else 
{ 
long BgL_rz00_5111;
BgL_rz00_5111 = BgL_rz00_1197; 
BgL_rz00_1250 = BgL_rz00_5111; 
goto BgL_zc3anonymousza32159ze3z83_1251;} } }  else 
{ 
long BgL_rz00_5112;
BgL_rz00_5112 = BgL_rz00_1197; 
BgL_rz00_1250 = BgL_rz00_5112; 
goto BgL_zc3anonymousza32159ze3z83_1251;} } } } } } } } } } 
}



/* utf8->8bits */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t BgL_strz00_64, obj_t BgL_tablez00_65)
{ AN_OBJECT;
{ /* Llib/unicode.scm 717 */
{ /* Llib/unicode.scm 718 */
long BgL_lenz00_1262;
BgL_lenz00_1262 = 
STRING_LENGTH(BgL_strz00_64); 
{ /* Llib/unicode.scm 718 */
long BgL_nlenz00_1263;
BgL_nlenz00_1263 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_64, BgL_lenz00_1262); 
{ /* Llib/unicode.scm 719 */

if(
(BgL_lenz00_1262==BgL_nlenz00_1263))
{ /* Llib/unicode.scm 720 */
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_64);}  else 
{ /* Llib/unicode.scm 722 */
obj_t BgL_arg2167z00_1265;
BgL_arg2167z00_1265 = 
make_string(BgL_nlenz00_1263, ((unsigned char)' ')); 
{ /* Llib/unicode.scm 722 */
obj_t BgL_aux2826z00_3272;
BgL_aux2826z00_3272 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2167z00_1265, BgL_strz00_64, BgL_lenz00_1262, BgL_tablez00_65); 
if(
STRINGP(BgL_aux2826z00_3272))
{ /* Llib/unicode.scm 722 */
return BgL_aux2826z00_3272;}  else 
{ 
obj_t BgL_auxz00_5122;
BgL_auxz00_5122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)28179)), BGl_string2987z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_aux2826z00_3272); 
FAILURE(BgL_auxz00_5122,BFALSE,BFALSE);} } } } } } } 
}



/* _utf8->8bits */
obj_t BGl__utf8zd2ze38bitsz31zz__unicodez00(obj_t BgL_envz00_2931, obj_t BgL_strz00_2932, obj_t BgL_tablez00_2933)
{ AN_OBJECT;
{ /* Llib/unicode.scm 717 */
{ /* Llib/unicode.scm 718 */
obj_t BgL_auxz00_5126;
if(
STRINGP(BgL_strz00_2932))
{ /* Llib/unicode.scm 718 */
BgL_auxz00_5126 = BgL_strz00_2932
; }  else 
{ 
obj_t BgL_auxz00_5129;
BgL_auxz00_5129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)28057)), BGl_string2993z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2932); 
FAILURE(BgL_auxz00_5129,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_auxz00_5126, BgL_tablez00_2933);} } 
}



/* utf8->8bits! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t BgL_strz00_66, obj_t BgL_tablez00_67)
{ AN_OBJECT;
{ /* Llib/unicode.scm 727 */
{ /* Llib/unicode.scm 728 */
long BgL_lenz00_1267;
BgL_lenz00_1267 = 
STRING_LENGTH(BgL_strz00_66); 
{ /* Llib/unicode.scm 728 */
long BgL_nlenz00_1268;
BgL_nlenz00_1268 = 
BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_66, BgL_lenz00_1267); 
{ /* Llib/unicode.scm 729 */

if(
(BgL_lenz00_1267==BgL_nlenz00_1268))
{ /* Llib/unicode.scm 730 */
return BgL_strz00_66;}  else 
{ /* Llib/unicode.scm 732 */
obj_t BgL_arg2170z00_1270;
BgL_arg2170z00_1270 = 
make_string(BgL_nlenz00_1268, ((unsigned char)' ')); 
{ /* Llib/unicode.scm 732 */
obj_t BgL_aux2834z00_3280;
BgL_aux2834z00_3280 = 
BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(BgL_arg2170z00_1270, BgL_strz00_66, BgL_lenz00_1267, BFALSE); 
if(
STRINGP(BgL_aux2834z00_3280))
{ /* Llib/unicode.scm 732 */
return BgL_aux2834z00_3280;}  else 
{ 
obj_t BgL_auxz00_5142;
BgL_auxz00_5142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)28602)), BGl_string2994z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_aux2834z00_3280); 
FAILURE(BgL_auxz00_5142,BFALSE,BFALSE);} } } } } } } 
}



/* _utf8->8bits! */
obj_t BGl__utf8zd2ze38bitsz12z23zz__unicodez00(obj_t BgL_envz00_2934, obj_t BgL_strz00_2935, obj_t BgL_tablez00_2936)
{ AN_OBJECT;
{ /* Llib/unicode.scm 727 */
{ /* Llib/unicode.scm 728 */
obj_t BgL_auxz00_5146;
if(
STRINGP(BgL_strz00_2935))
{ /* Llib/unicode.scm 728 */
BgL_auxz00_5146 = BgL_strz00_2935
; }  else 
{ 
obj_t BgL_auxz00_5149;
BgL_auxz00_5149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)28494)), BGl_string2995z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2935); 
FAILURE(BgL_auxz00_5149,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_auxz00_5146, BgL_tablez00_2936);} } 
}



/* utf8->iso-latin */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t BgL_strz00_68)
{ AN_OBJECT;
{ /* Llib/unicode.scm 737 */
return 
BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_strz00_68, BGl_8bitszd2invzd2zz__unicodez00);} 
}



/* _utf8->iso-latin */
obj_t BGl__utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t BgL_envz00_2937, obj_t BgL_strz00_2938)
{ AN_OBJECT;
{ /* Llib/unicode.scm 737 */
{ /* Llib/unicode.scm 738 */
obj_t BgL_auxz00_5155;
if(
STRINGP(BgL_strz00_2938))
{ /* Llib/unicode.scm 738 */
BgL_auxz00_5155 = BgL_strz00_2938
; }  else 
{ 
obj_t BgL_auxz00_5158;
BgL_auxz00_5158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)28911)), BGl_string2996z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2938); 
FAILURE(BgL_auxz00_5158,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(BgL_auxz00_5155);} } 
}



/* utf8->iso-latin! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t BgL_strz00_69)
{ AN_OBJECT;
{ /* Llib/unicode.scm 743 */
return 
BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_strz00_69, BGl_8bitszd2invzd2zz__unicodez00);} 
}



/* _utf8->iso-latin! */
obj_t BGl__utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t BgL_envz00_2939, obj_t BgL_strz00_2940)
{ AN_OBJECT;
{ /* Llib/unicode.scm 743 */
{ /* Llib/unicode.scm 744 */
obj_t BgL_auxz00_5164;
if(
STRINGP(BgL_strz00_2940))
{ /* Llib/unicode.scm 744 */
BgL_auxz00_5164 = BgL_strz00_2940
; }  else 
{ 
obj_t BgL_auxz00_5167;
BgL_auxz00_5167 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)29197)), BGl_string2997z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2940); 
FAILURE(BgL_auxz00_5167,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(BgL_auxz00_5164);} } 
}



/* utf8->cp1252 */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t BgL_strz00_70)
{ AN_OBJECT;
{ /* Llib/unicode.scm 749 */
if(
CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
{ /* Llib/unicode.scm 750 */BFALSE; }  else 
{ /* Llib/unicode.scm 750 */
BGl_cp1252zd2invzd2zz__unicodez00 = 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BGl_cp1252z00zz__unicodez00); } 
return 
BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_strz00_70, BGl_cp1252zd2invzd2zz__unicodez00);} 
}



/* _utf8->cp1252 */
obj_t BGl__utf8zd2ze3cp1252z31zz__unicodez00(obj_t BgL_envz00_2941, obj_t BgL_strz00_2942)
{ AN_OBJECT;
{ /* Llib/unicode.scm 749 */
{ /* Llib/unicode.scm 751 */
obj_t BgL_auxz00_5176;
if(
STRINGP(BgL_strz00_2942))
{ /* Llib/unicode.scm 751 */
BgL_auxz00_5176 = BgL_strz00_2942
; }  else 
{ 
obj_t BgL_auxz00_5179;
BgL_auxz00_5179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)29576)), BGl_string2998z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2942); 
FAILURE(BgL_auxz00_5179,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3cp1252z31zz__unicodez00(BgL_auxz00_5176);} } 
}



/* utf8->cp1252! */
BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t BgL_strz00_71)
{ AN_OBJECT;
{ /* Llib/unicode.scm 756 */
if(
CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
{ /* Llib/unicode.scm 757 */BFALSE; }  else 
{ /* Llib/unicode.scm 757 */
BGl_cp1252zd2invzd2zz__unicodez00 = 
BGl_inversezd2utf8zd2tablez00zz__unicodez00(BGl_cp1252z00zz__unicodez00); } 
return 
BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_strz00_71, BGl_cp1252zd2invzd2zz__unicodez00);} 
}



/* _utf8->cp1252! */
obj_t BGl__utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t BgL_envz00_2943, obj_t BgL_strz00_2944)
{ AN_OBJECT;
{ /* Llib/unicode.scm 756 */
{ /* Llib/unicode.scm 758 */
obj_t BgL_auxz00_5188;
if(
STRINGP(BgL_strz00_2944))
{ /* Llib/unicode.scm 758 */
BgL_auxz00_5188 = BgL_strz00_2944
; }  else 
{ 
obj_t BgL_auxz00_5191;
BgL_auxz00_5191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)29930)), BGl_string2999z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2944); 
FAILURE(BgL_auxz00_5191,BFALSE,BFALSE);} 
return 
BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(BgL_auxz00_5188);} } 
}



/* 8bits->utf8-length */
long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t BgL_strz00_72, long BgL_lenz00_73, obj_t BgL_tablez00_74)
{ AN_OBJECT;
{ /* Llib/unicode.scm 763 */
{ 
long BgL_cz00_1289;
{ 
long BgL_siza7eza7_1274;long BgL_iz00_1275;
BgL_siza7eza7_1274 = ((long)0); 
BgL_iz00_1275 = ((long)0); 
BgL_zc3anonymousza32172ze3z83_1276:
if(
(BgL_iz00_1275==BgL_lenz00_73))
{ /* Llib/unicode.scm 773 */
return BgL_siza7eza7_1274;}  else 
{ /* Llib/unicode.scm 775 */
long BgL_cz00_1278;
{ /* Llib/unicode.scm 775 */
unsigned char BgL_auxz00_5198;
{ /* Llib/unicode.scm 775 */
long BgL_l2610z00_3056;
BgL_l2610z00_3056 = 
STRING_LENGTH(BgL_strz00_72); 
if(
BOUND_CHECK(BgL_iz00_1275, BgL_l2610z00_3056))
{ /* Llib/unicode.scm 775 */
BgL_auxz00_5198 = 
STRING_REF(BgL_strz00_72, BgL_iz00_1275)
; }  else 
{ 
obj_t BgL_auxz00_5203;
BgL_auxz00_5203 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)30450)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_iz00_1275), BgL_strz00_72); 
FAILURE(BgL_auxz00_5203,BFALSE,BFALSE);} } 
BgL_cz00_1278 = 
(BgL_auxz00_5198); } 
if(
(BgL_cz00_1278>=((long)128)))
{ /* Llib/unicode.scm 776 */
if(
CBOOL(BgL_tablez00_74))
{ 
long BgL_iz00_5244;long BgL_siza7eza7_5213;
{ /* Llib/unicode.scm 778 */
long BgL_auxz00_5214;
BgL_cz00_1289 = BgL_cz00_1278; 
{ /* Llib/unicode.scm 766 */
long BgL_vz00_1291;
BgL_vz00_1291 = 
(BgL_cz00_1289-((long)128)); 
{ /* Llib/unicode.scm 767 */
bool_t BgL_testz00_5216;
{ /* Llib/unicode.scm 767 */
int BgL_arg2186z00_1294;
{ /* Llib/unicode.scm 767 */
obj_t BgL_vectorz00_2573;
if(
VECTORP(BgL_tablez00_74))
{ /* Llib/unicode.scm 767 */
BgL_vectorz00_2573 = BgL_tablez00_74; }  else 
{ 
obj_t BgL_auxz00_5219;
BgL_auxz00_5219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)30290)), BGl_string3000z00zz__unicodez00, BGl_string2983z00zz__unicodez00, BgL_tablez00_74); 
FAILURE(BgL_auxz00_5219,BFALSE,BFALSE);} 
BgL_arg2186z00_1294 = 
VECTOR_LENGTH(BgL_vectorz00_2573); } 
BgL_testz00_5216 = 
(BgL_vz00_1291<
(long)(BgL_arg2186z00_1294)); } 
if(BgL_testz00_5216)
{ /* Llib/unicode.scm 768 */
obj_t BgL_arg2185z00_1293;
{ /* Llib/unicode.scm 768 */
obj_t BgL_vectorz00_2576;int BgL_kz00_2577;
BgL_vectorz00_2576 = BgL_tablez00_74; 
BgL_kz00_2577 = 
(int)(BgL_vz00_1291); 
{ /* Llib/unicode.scm 768 */
int BgL_l2606z00_3052;
BgL_l2606z00_3052 = 
VECTOR_LENGTH(BgL_vectorz00_2576); 
if(
BOUND_CHECK(BgL_kz00_2577, BgL_l2606z00_3052))
{ /* Llib/unicode.scm 768 */
BgL_arg2185z00_1293 = 
VECTOR_REF(BgL_vectorz00_2576,BgL_kz00_2577); }  else 
{ 
obj_t BgL_auxz00_5231;
BgL_auxz00_5231 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)30319)), BGl_string2976z00zz__unicodez00, 
BINT(BgL_kz00_2577), BgL_vectorz00_2576); 
FAILURE(BgL_auxz00_5231,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 768 */
obj_t BgL_stringz00_2578;
if(
STRINGP(BgL_arg2185z00_1293))
{ /* Llib/unicode.scm 768 */
BgL_stringz00_2578 = BgL_arg2185z00_1293; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)30304)), BGl_string3000z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_arg2185z00_1293); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
BgL_auxz00_5214 = 
STRING_LENGTH(BgL_stringz00_2578); } }  else 
{ /* Llib/unicode.scm 767 */
BgL_auxz00_5214 = ((long)2)
; } } } 
BgL_siza7eza7_5213 = 
(BgL_siza7eza7_1274+BgL_auxz00_5214); } 
BgL_iz00_5244 = 
(BgL_iz00_1275+((long)1)); 
BgL_iz00_1275 = BgL_iz00_5244; 
BgL_siza7eza7_1274 = BgL_siza7eza7_5213; 
goto BgL_zc3anonymousza32172ze3z83_1276;}  else 
{ 
long BgL_iz00_5248;long BgL_siza7eza7_5246;
BgL_siza7eza7_5246 = 
(BgL_siza7eza7_1274+((long)2)); 
BgL_iz00_5248 = 
(BgL_iz00_1275+((long)1)); 
BgL_iz00_1275 = BgL_iz00_5248; 
BgL_siza7eza7_1274 = BgL_siza7eza7_5246; 
goto BgL_zc3anonymousza32172ze3z83_1276;} }  else 
{ 
long BgL_iz00_5252;long BgL_siza7eza7_5250;
BgL_siza7eza7_5250 = 
(BgL_siza7eza7_1274+((long)1)); 
BgL_iz00_5252 = 
(BgL_iz00_1275+((long)1)); 
BgL_iz00_1275 = BgL_iz00_5252; 
BgL_siza7eza7_1274 = BgL_siza7eza7_5250; 
goto BgL_zc3anonymousza32172ze3z83_1276;} } } } } 
}



/* 8bits->utf8-fill! */
obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_75, obj_t BgL_strz00_76, long BgL_lenz00_77, obj_t BgL_tablez00_78)
{ AN_OBJECT;
{ /* Llib/unicode.scm 785 */
{ 
long BgL_rz00_1297;long BgL_wz00_1298;
BgL_rz00_1297 = ((long)0); 
BgL_wz00_1298 = ((long)0); 
BgL_zc3anonymousza32187ze3z83_1299:
if(
(BgL_rz00_1297==BgL_lenz00_77))
{ /* Llib/unicode.scm 788 */
return BgL_nstrz00_75;}  else 
{ /* Llib/unicode.scm 790 */
long BgL_cz00_1301;
{ /* Llib/unicode.scm 790 */
unsigned char BgL_auxz00_5256;
{ /* Llib/unicode.scm 790 */
long BgL_l2614z00_3060;
BgL_l2614z00_3060 = 
STRING_LENGTH(BgL_strz00_76); 
if(
BOUND_CHECK(BgL_rz00_1297, BgL_l2614z00_3060))
{ /* Llib/unicode.scm 790 */
BgL_auxz00_5256 = 
STRING_REF(BgL_strz00_76, BgL_rz00_1297)
; }  else 
{ 
obj_t BgL_auxz00_5261;
BgL_auxz00_5261 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31002)), BGl_string2978z00zz__unicodez00, 
BINT(BgL_rz00_1297), BgL_strz00_76); 
FAILURE(BgL_auxz00_5261,BFALSE,BFALSE);} } 
BgL_cz00_1301 = 
(BgL_auxz00_5256); } 
if(
(BgL_cz00_1301>=((long)192)))
{ /* Llib/unicode.scm 792 */
{ /* Llib/unicode.scm 793 */
long BgL_l2618z00_3064;
BgL_l2618z00_3064 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_wz00_1298, BgL_l2618z00_3064))
{ /* Llib/unicode.scm 793 */
STRING_SET(BgL_nstrz00_75, BgL_wz00_1298, ((unsigned char)'Ã')); }  else 
{ 
obj_t BgL_auxz00_5273;
BgL_auxz00_5273 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31059)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1298), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5273,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 794 */
long BgL_arg2190z00_1303;unsigned char BgL_arg2191z00_1304;
BgL_arg2190z00_1303 = 
(BgL_wz00_1298+((long)1)); 
BgL_arg2191z00_1304 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(BgL_cz00_1301-((long)64))); 
{ /* Llib/unicode.scm 794 */
long BgL_l2622z00_3068;
BgL_l2622z00_3068 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_arg2190z00_1303, BgL_l2622z00_3068))
{ /* Llib/unicode.scm 794 */
STRING_SET(BgL_nstrz00_75, BgL_arg2190z00_1303, BgL_arg2191z00_1304); }  else 
{ 
obj_t BgL_auxz00_5285;
BgL_auxz00_5285 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31107)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_arg2190z00_1303), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5285,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_5292;long BgL_rz00_5290;
BgL_rz00_5290 = 
(BgL_rz00_1297+((long)1)); 
BgL_wz00_5292 = 
(BgL_wz00_1298+((long)2)); 
BgL_wz00_1298 = BgL_wz00_5292; 
BgL_rz00_1297 = BgL_rz00_5290; 
goto BgL_zc3anonymousza32187ze3z83_1299;} }  else 
{ /* Llib/unicode.scm 792 */
if(
(BgL_cz00_1301>=((long)128)))
{ /* Llib/unicode.scm 796 */
if(
CBOOL(BgL_tablez00_78))
{ /* Llib/unicode.scm 798 */
long BgL_vz00_1309;
BgL_vz00_1309 = 
(BgL_cz00_1301-((long)128)); 
{ /* Llib/unicode.scm 799 */
bool_t BgL_testz00_5299;
{ /* Llib/unicode.scm 799 */
int BgL_arg2205z00_1319;
{ /* Llib/unicode.scm 799 */
obj_t BgL_vectorz00_2604;
if(
VECTORP(BgL_tablez00_78))
{ /* Llib/unicode.scm 799 */
BgL_vectorz00_2604 = BgL_tablez00_78; }  else 
{ 
obj_t BgL_auxz00_5302;
BgL_auxz00_5302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31289)), BGl_string2967z00zz__unicodez00, BGl_string2983z00zz__unicodez00, BgL_tablez00_78); 
FAILURE(BgL_auxz00_5302,BFALSE,BFALSE);} 
BgL_arg2205z00_1319 = 
VECTOR_LENGTH(BgL_vectorz00_2604); } 
BgL_testz00_5299 = 
(BgL_vz00_1309<
(long)(BgL_arg2205z00_1319)); } 
if(BgL_testz00_5299)
{ /* Llib/unicode.scm 800 */
obj_t BgL_encz00_1311;
{ /* Llib/unicode.scm 800 */
obj_t BgL_vectorz00_2607;int BgL_kz00_2608;
BgL_vectorz00_2607 = BgL_tablez00_78; 
BgL_kz00_2608 = 
(int)(BgL_vz00_1309); 
{ /* Llib/unicode.scm 800 */
int BgL_l2626z00_3072;
BgL_l2626z00_3072 = 
VECTOR_LENGTH(BgL_vectorz00_2607); 
if(
BOUND_CHECK(BgL_kz00_2608, BgL_l2626z00_3072))
{ /* Llib/unicode.scm 800 */
BgL_encz00_1311 = 
VECTOR_REF(BgL_vectorz00_2607,BgL_kz00_2608); }  else 
{ 
obj_t BgL_auxz00_5314;
BgL_auxz00_5314 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31316)), BGl_string2976z00zz__unicodez00, 
BINT(BgL_kz00_2608), BgL_vectorz00_2607); 
FAILURE(BgL_auxz00_5314,BFALSE,BFALSE);} } } 
{ /* Llib/unicode.scm 800 */
long BgL_lenz00_1312;
{ /* Llib/unicode.scm 801 */
obj_t BgL_stringz00_2609;
if(
STRINGP(BgL_encz00_1311))
{ /* Llib/unicode.scm 801 */
BgL_stringz00_2609 = BgL_encz00_1311; }  else 
{ 
obj_t BgL_auxz00_5321;
BgL_auxz00_5321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31350)), BGl_string2967z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_encz00_1311); 
FAILURE(BgL_auxz00_5321,BFALSE,BFALSE);} 
BgL_lenz00_1312 = 
STRING_LENGTH(BgL_stringz00_2609); } 
{ /* Llib/unicode.scm 801 */

BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_encz00_1311, ((long)0), BgL_nstrz00_75, BgL_wz00_1298, BgL_lenz00_1312); 
{ 
long BgL_wz00_5329;long BgL_rz00_5327;
BgL_rz00_5327 = 
(BgL_rz00_1297+((long)1)); 
BgL_wz00_5329 = 
(BgL_wz00_1298+BgL_lenz00_1312); 
BgL_wz00_1298 = BgL_wz00_5329; 
BgL_rz00_1297 = BgL_rz00_5327; 
goto BgL_zc3anonymousza32187ze3z83_1299;} } } }  else 
{ /* Llib/unicode.scm 799 */
{ /* Llib/unicode.scm 805 */
long BgL_l2630z00_3076;
BgL_l2630z00_3076 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_wz00_1298, BgL_l2630z00_3076))
{ /* Llib/unicode.scm 805 */
STRING_SET(BgL_nstrz00_75, BgL_wz00_1298, ((unsigned char)'Â')); }  else 
{ 
obj_t BgL_auxz00_5335;
BgL_auxz00_5335 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31478)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1298), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5335,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 806 */
long BgL_arg2199z00_1315;unsigned char BgL_arg2200z00_1316;
BgL_arg2199z00_1315 = 
(BgL_wz00_1298+((long)1)); 
BgL_arg2200z00_1316 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_1301); 
{ /* Llib/unicode.scm 806 */
long BgL_l2634z00_3080;
BgL_l2634z00_3080 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_arg2199z00_1315, BgL_l2634z00_3080))
{ /* Llib/unicode.scm 806 */
STRING_SET(BgL_nstrz00_75, BgL_arg2199z00_1315, BgL_arg2200z00_1316); }  else 
{ 
obj_t BgL_auxz00_5346;
BgL_auxz00_5346 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31533)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_arg2199z00_1315), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5346,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_5353;long BgL_rz00_5351;
BgL_rz00_5351 = 
(BgL_rz00_1297+((long)1)); 
BgL_wz00_5353 = 
(BgL_wz00_1298+((long)2)); 
BgL_wz00_1298 = BgL_wz00_5353; 
BgL_rz00_1297 = BgL_rz00_5351; 
goto BgL_zc3anonymousza32187ze3z83_1299;} } } }  else 
{ /* Llib/unicode.scm 797 */
{ /* Llib/unicode.scm 809 */
long BgL_l2638z00_3084;
BgL_l2638z00_3084 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_wz00_1298, BgL_l2638z00_3084))
{ /* Llib/unicode.scm 809 */
STRING_SET(BgL_nstrz00_75, BgL_wz00_1298, ((unsigned char)'Â')); }  else 
{ 
obj_t BgL_auxz00_5359;
BgL_auxz00_5359 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31640)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1298), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5359,BFALSE,BFALSE);} } 
{ /* Llib/unicode.scm 810 */
long BgL_arg2206z00_1320;unsigned char BgL_arg2207z00_1321;
BgL_arg2206z00_1320 = 
(BgL_wz00_1298+((long)1)); 
BgL_arg2207z00_1321 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_1301); 
{ /* Llib/unicode.scm 810 */
long BgL_l2642z00_3088;
BgL_l2642z00_3088 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_arg2206z00_1320, BgL_l2642z00_3088))
{ /* Llib/unicode.scm 810 */
STRING_SET(BgL_nstrz00_75, BgL_arg2206z00_1320, BgL_arg2207z00_1321); }  else 
{ 
obj_t BgL_auxz00_5370;
BgL_auxz00_5370 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31688)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_arg2206z00_1320), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5370,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_5377;long BgL_rz00_5375;
BgL_rz00_5375 = 
(BgL_rz00_1297+((long)1)); 
BgL_wz00_5377 = 
(BgL_wz00_1298+((long)2)); 
BgL_wz00_1298 = BgL_wz00_5377; 
BgL_rz00_1297 = BgL_rz00_5375; 
goto BgL_zc3anonymousza32187ze3z83_1299;} } }  else 
{ /* Llib/unicode.scm 796 */
{ /* Llib/unicode.scm 813 */
unsigned char BgL_arg2210z00_1324;
BgL_arg2210z00_1324 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_1301); 
{ /* Llib/unicode.scm 813 */
long BgL_l2646z00_3092;
BgL_l2646z00_3092 = 
STRING_LENGTH(BgL_nstrz00_75); 
if(
BOUND_CHECK(BgL_wz00_1298, BgL_l2646z00_3092))
{ /* Llib/unicode.scm 813 */
STRING_SET(BgL_nstrz00_75, BgL_wz00_1298, BgL_arg2210z00_1324); }  else 
{ 
obj_t BgL_auxz00_5384;
BgL_auxz00_5384 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)31782)), BGl_string2990z00zz__unicodez00, 
BINT(BgL_wz00_1298), BgL_nstrz00_75); 
FAILURE(BgL_auxz00_5384,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_5391;long BgL_rz00_5389;
BgL_rz00_5389 = 
(BgL_rz00_1297+((long)1)); 
BgL_wz00_5391 = 
(BgL_wz00_1298+((long)1)); 
BgL_wz00_1298 = BgL_wz00_5391; 
BgL_rz00_1297 = BgL_rz00_5389; 
goto BgL_zc3anonymousza32187ze3z83_1299;} } } } } } 
}



/* 8bits->utf8 */
BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t BgL_strz00_79, obj_t BgL_tablez00_80)
{ AN_OBJECT;
{ /* Llib/unicode.scm 819 */
{ /* Llib/unicode.scm 820 */
long BgL_lenz00_1329;
BgL_lenz00_1329 = 
STRING_LENGTH(BgL_strz00_79); 
{ /* Llib/unicode.scm 820 */
long BgL_nlenz00_1330;
BgL_nlenz00_1330 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_79, BgL_lenz00_1329, BgL_tablez00_80); 
{ /* Llib/unicode.scm 821 */

if(
(BgL_lenz00_1329==BgL_nlenz00_1330))
{ /* Llib/unicode.scm 822 */
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_79);}  else 
{ /* Llib/unicode.scm 822 */
return 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_1330), BgL_strz00_79, BgL_lenz00_1329, BgL_tablez00_80);} } } } } 
}



/* _8bits->utf8 */
obj_t BGl__8bitszd2ze3utf8z31zz__unicodez00(obj_t BgL_envz00_2945, obj_t BgL_strz00_2946, obj_t BgL_tablez00_2947)
{ AN_OBJECT;
{ /* Llib/unicode.scm 819 */
{ /* Llib/unicode.scm 820 */
obj_t BgL_auxz00_5400;
if(
STRINGP(BgL_strz00_2946))
{ /* Llib/unicode.scm 820 */
BgL_auxz00_5400 = BgL_strz00_2946
; }  else 
{ 
obj_t BgL_auxz00_5403;
BgL_auxz00_5403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)32118)), BGl_string3001z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2946); 
FAILURE(BgL_auxz00_5403,BFALSE,BFALSE);} 
return 
BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_auxz00_5400, BgL_tablez00_2947);} } 
}



/* 8bits->utf8! */
BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t BgL_strz00_81, obj_t BgL_tablez00_82)
{ AN_OBJECT;
{ /* Llib/unicode.scm 829 */
{ /* Llib/unicode.scm 830 */
long BgL_lenz00_1333;
BgL_lenz00_1333 = 
STRING_LENGTH(BgL_strz00_81); 
{ /* Llib/unicode.scm 830 */
long BgL_nlenz00_1334;
BgL_nlenz00_1334 = 
BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_81, BgL_lenz00_1333, BgL_tablez00_82); 
{ /* Llib/unicode.scm 831 */

if(
(BgL_lenz00_1333==BgL_nlenz00_1334))
{ /* Llib/unicode.scm 832 */
return BgL_strz00_81;}  else 
{ /* Llib/unicode.scm 832 */
return 
BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(
make_string_sans_fill(BgL_nlenz00_1334), BgL_strz00_81, BgL_lenz00_1333, BgL_tablez00_82);} } } } } 
}



/* _8bits->utf8! */
obj_t BGl__8bitszd2ze3utf8z12z23zz__unicodez00(obj_t BgL_envz00_2948, obj_t BgL_strz00_2949, obj_t BgL_tablez00_2950)
{ AN_OBJECT;
{ /* Llib/unicode.scm 829 */
{ /* Llib/unicode.scm 830 */
obj_t BgL_auxz00_5414;
if(
STRINGP(BgL_strz00_2949))
{ /* Llib/unicode.scm 830 */
BgL_auxz00_5414 = BgL_strz00_2949
; }  else 
{ 
obj_t BgL_auxz00_5417;
BgL_auxz00_5417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)32570)), BGl_string3002z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2949); 
FAILURE(BgL_auxz00_5417,BFALSE,BFALSE);} 
return 
BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_5414, BgL_tablez00_2950);} } 
}



/* iso-latin->utf8 */
BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t BgL_strz00_83)
{ AN_OBJECT;
{ /* Llib/unicode.scm 839 */
return 
BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_strz00_83, BFALSE);} 
}



/* _iso-latin->utf8 */
obj_t BGl__isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t BgL_envz00_2951, obj_t BgL_strz00_2952)
{ AN_OBJECT;
{ /* Llib/unicode.scm 839 */
{ /* Llib/unicode.scm 840 */
obj_t BgL_auxz00_5423;
if(
STRINGP(BgL_strz00_2952))
{ /* Llib/unicode.scm 840 */
BgL_auxz00_5423 = BgL_strz00_2952
; }  else 
{ 
obj_t BgL_auxz00_5426;
BgL_auxz00_5426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)33005)), BGl_string3003z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2952); 
FAILURE(BgL_auxz00_5426,BFALSE,BFALSE);} 
return 
BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(BgL_auxz00_5423);} } 
}



/* iso-latin->utf8! */
BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t BgL_strz00_84)
{ AN_OBJECT;
{ /* Llib/unicode.scm 845 */
return 
BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_strz00_84, BFALSE);} 
}



/* _iso-latin->utf8! */
obj_t BGl__isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t BgL_envz00_2953, obj_t BgL_strz00_2954)
{ AN_OBJECT;
{ /* Llib/unicode.scm 845 */
{ /* Llib/unicode.scm 846 */
obj_t BgL_auxz00_5432;
if(
STRINGP(BgL_strz00_2954))
{ /* Llib/unicode.scm 846 */
BgL_auxz00_5432 = BgL_strz00_2954
; }  else 
{ 
obj_t BgL_auxz00_5435;
BgL_auxz00_5435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)33287)), BGl_string3004z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2954); 
FAILURE(BgL_auxz00_5435,BFALSE,BFALSE);} 
return 
BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(BgL_auxz00_5432);} } 
}



/* cp1252->utf8 */
BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t BgL_strz00_85)
{ AN_OBJECT;
{ /* Llib/unicode.scm 851 */
return 
BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_strz00_85, BGl_cp1252z00zz__unicodez00);} 
}



/* _cp1252->utf8 */
obj_t BGl__cp1252zd2ze3utf8z31zz__unicodez00(obj_t BgL_envz00_2955, obj_t BgL_strz00_2956)
{ AN_OBJECT;
{ /* Llib/unicode.scm 851 */
{ /* Llib/unicode.scm 852 */
obj_t BgL_auxz00_5441;
if(
STRINGP(BgL_strz00_2956))
{ /* Llib/unicode.scm 852 */
BgL_auxz00_5441 = BgL_strz00_2956
; }  else 
{ 
obj_t BgL_auxz00_5444;
BgL_auxz00_5444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)33563)), BGl_string3005z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2956); 
FAILURE(BgL_auxz00_5444,BFALSE,BFALSE);} 
return 
BGl_cp1252zd2ze3utf8z31zz__unicodez00(BgL_auxz00_5441);} } 
}



/* cp1252->utf8! */
BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t BgL_strz00_86)
{ AN_OBJECT;
{ /* Llib/unicode.scm 857 */
return 
BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_strz00_86, BGl_cp1252z00zz__unicodez00);} 
}



/* _cp1252->utf8! */
obj_t BGl__cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t BgL_envz00_2957, obj_t BgL_strz00_2958)
{ AN_OBJECT;
{ /* Llib/unicode.scm 857 */
{ /* Llib/unicode.scm 858 */
obj_t BgL_auxz00_5450;
if(
STRINGP(BgL_strz00_2958))
{ /* Llib/unicode.scm 858 */
BgL_auxz00_5450 = BgL_strz00_2958
; }  else 
{ 
obj_t BgL_auxz00_5453;
BgL_auxz00_5453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2932z00zz__unicodez00, 
BINT(((long)33846)), BGl_string3006z00zz__unicodez00, BGl_string2977z00zz__unicodez00, BgL_strz00_2958); 
FAILURE(BgL_auxz00_5453,BFALSE,BFALSE);} 
return 
BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_5450);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__unicodez00()
{ AN_OBJECT;
{ /* Llib/unicode.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__unicodez00()
{ AN_OBJECT;
{ /* Llib/unicode.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00()
{ AN_OBJECT;
{ /* Llib/unicode.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3007z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3007z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string3007z00zz__unicodez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string3007z00zz__unicodez00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string3007z00zz__unicodez00));} 
}

#ifdef __cplusplus
}
#endif
