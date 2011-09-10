/*===========================================================================*/
/*   (Ieee/output.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/output.scm -indent -o objs/obj_s/Ieee/output.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */

extern obj_t bgl_display_substring(obj_t, long, long, obj_t);
static obj_t BGl__displayzd2elongzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__writeza2za2zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
extern obj_t bgl_display_ucs2string(obj_t, obj_t);
extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
extern obj_t bgl_write_elong(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
extern obj_t bgl_display_fixnum(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl__printfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t ucs2_string_to_utf8_string(obj_t);
static obj_t BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
extern obj_t bgl_write_opaque(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long, obj_t);
static obj_t BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
BGL_EXPORTED_DECL obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00();
BGL_EXPORTED_DECL obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_display_llong(BGL_LONGLONG_T, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, long, long, obj_t);
extern obj_t bgl_write_custom(obj_t, obj_t);
extern obj_t bgl_write_mmap(obj_t, obj_t);
extern obj_t string_for_read(obj_t);
extern obj_t bgl_write_ucs2(obj_t, obj_t);
extern obj_t bgl_write_process(obj_t, obj_t);
static obj_t BGl_symbol3327z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_socket(obj_t, obj_t);
extern obj_t bgl_write_foreign(obj_t, obj_t);
static obj_t BGl_symbol3333z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__writez00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3351z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3363z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3367z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3370z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__writezd2charzd22z00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl_symbol3406z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_procedure(obj_t, obj_t);
static obj_t BGl__newlinezd21zd2zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3423z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3425z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3427z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3429z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3433z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3436z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3440z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3444z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3447z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
extern obj_t bgl_display_bignum(obj_t, obj_t);
extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
static obj_t BGl_symbol3451z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3455z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__displayza2za2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3457z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3459z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3462z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3465z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__writezd22zd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3470z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_cnst(obj_t, obj_t);
static obj_t BGl_symbol3472z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3475z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_symbol3478z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__printz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_display_elong(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_display_ucs2(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_display_obj(obj_t, obj_t);
extern obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned char, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
static obj_t BGl__formatz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
static obj_t BGl__displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_display_string(obj_t, obj_t);
static obj_t BGl__fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_ill_char_rep(unsigned char);
extern obj_t weakptr_data(obj_t);
extern obj_t bgl_write_unknown(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
extern obj_t bgl_close_output_port(obj_t);
extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl__displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_input_port(obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned char, obj_t);
static obj_t BGl__fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char);
extern obj_t bgl_write_utf8string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_bignum(obj_t, obj_t);
extern obj_t string_to_bstring(char *);
BGL_EXPORTED_DECL obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_char(obj_t, obj_t);
static obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_write_dynamic_env(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t);
static obj_t BGl__newlinez00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_seconds_to_string(long);
static obj_t BGl__writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
extern obj_t bgl_write_string(obj_t, bool_t, obj_t);
BGL_EXPORTED_DECL obj_t bgl_write_obj(obj_t, obj_t);
static obj_t BGl_list3422z00zz__r4_output_6_10_3z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_list3432z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3435z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3439z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3443z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern char * BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_list3446z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3450z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3454z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl__displayzd22zd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_list3461z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3464z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_llong(BGL_LONGLONG_T, obj_t);
static obj_t BGl_list3469z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3474z00zz__r4_output_6_10_3z00 = BUNSPEC;
static obj_t BGl_list3477z00zz__r4_output_6_10_3z00 = BUNSPEC;
extern obj_t bgl_write_output_port(obj_t, obj_t);
static obj_t BGl__tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl__displayz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bgl_write_binary_port(obj_t, obj_t);
extern obj_t real_to_string(double);
extern long bgl_date_to_seconds(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00();
BGL_EXPORTED_DECL obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_fprintfzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__fprintfza700za7za7__r3484za7, va_generic_entry, BGl__fprintfz00zz__r4_output_6_10_3z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_printzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__printza700za7za7__r4_3485za7, va_generic_entry, BGl__printz00zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_printfzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__printfza700za7za7__r43486za7, va_generic_entry, BGl__printfz00zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2bytezd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2byteza7d23487z00, opt_generic_entry, BGl__writezd2bytezd2zz__r4_output_6_10_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2stringza73488z00, BGl__writezd2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2ucs2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2ucs2str3489za7, BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayza2zd2envz70zz__r4_output_6_10_3z00, BgL_bgl__displayza7a2za7a2za7za73490z00, va_generic_entry, BGl__displayza2za2zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2strin3491za7, BGl__displayzd2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2fixnumzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2fixnu3492za7, BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_formatzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__formatza700za7za7__r43493za7, va_generic_entry, BGl__formatz00zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tprintzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__tprintza700za7za7__r43494za7, va_generic_entry, BGl__tprintz00zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2ucs2stringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2ucs2s3495za7, BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2charzd22zd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2charza7d23496z00, BGl__writezd2charzd22z00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__writeza700za7za7__r4_3497za7, va_generic_entry, BGl__writez00zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2symbolzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2symbolza73498z00, BGl__writezd2symbolzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2substringzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2subst3499za7, BGl__displayzd2substringzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string3320z00zz__r4_output_6_10_3z00, BgL_bgl_string3320za700za7za7_3500za7, "newline", 7 );
DEFINE_STRING( BGl_string3319z00zz__r4_output_6_10_3z00, BgL_bgl_string3319za700za7za7_3501za7, "tprint", 6 );
DEFINE_STRING( BGl_string3321z00zz__r4_output_6_10_3z00, BgL_bgl_string3321za700za7za7_3502za7, "wrong number of optional arguments", 34 );
DEFINE_STRING( BGl_string3322z00zz__r4_output_6_10_3z00, BgL_bgl_string3322za700za7za7_3503za7, "/tmp/bigloo/runtime/Ieee/output.scm", 35 );
DEFINE_STRING( BGl_string3323z00zz__r4_output_6_10_3z00, BgL_bgl_string3323za700za7za7_3504za7, "output-port", 11 );
DEFINE_STRING( BGl_string3324z00zz__r4_output_6_10_3z00, BgL_bgl_string3324za700za7za7_3505za7, "_newline-1", 10 );
DEFINE_STRING( BGl_string3325z00zz__r4_output_6_10_3z00, BgL_bgl_string3325za700za7za7_3506za7, "display", 7 );
DEFINE_STRING( BGl_string3326z00zz__r4_output_6_10_3z00, BgL_bgl_string3326za700za7za7_3507za7, "write", 5 );
DEFINE_STRING( BGl_string3328z00zz__r4_output_6_10_3z00, BgL_bgl_string3328za700za7za7_3508za7, "write-char", 10 );
DEFINE_STRING( BGl_string3330z00zz__r4_output_6_10_3z00, BgL_bgl_string3330za700za7za7_3509za7, "_write-char", 11 );
DEFINE_STRING( BGl_string3329z00zz__r4_output_6_10_3z00, BgL_bgl_string3329za700za7za7_3510za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string3331z00zz__r4_output_6_10_3z00, BgL_bgl_string3331za700za7za7_3511za7, "uchar", 5 );
DEFINE_STRING( BGl_string3332z00zz__r4_output_6_10_3z00, BgL_bgl_string3332za700za7za7_3512za7, "_write-char-2", 13 );
DEFINE_STRING( BGl_string3334z00zz__r4_output_6_10_3z00, BgL_bgl_string3334za700za7za7_3513za7, "write-byte", 10 );
DEFINE_STRING( BGl_string3335z00zz__r4_output_6_10_3z00, BgL_bgl_string3335za700za7za7_3514za7, "_write-byte", 11 );
DEFINE_STRING( BGl_string3336z00zz__r4_output_6_10_3z00, BgL_bgl_string3336za700za7za7_3515za7, "ubyte", 5 );
DEFINE_STRING( BGl_string3337z00zz__r4_output_6_10_3z00, BgL_bgl_string3337za700za7za7_3516za7, "_write-byte-2", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2symbolzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2symbo3517za7, BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3338z00zz__r4_output_6_10_3z00, BgL_bgl_string3338za700za7za7_3518za7, "#Newline", 8 );
DEFINE_STRING( BGl_string3340z00zz__r4_output_6_10_3z00, BgL_bgl_string3340za700za7za7_3519za7, "#Space", 6 );
DEFINE_STRING( BGl_string3339z00zz__r4_output_6_10_3z00, BgL_bgl_string3339za700za7za7_3520za7, "#Return", 7 );
DEFINE_STRING( BGl_string3341z00zz__r4_output_6_10_3z00, BgL_bgl_string3341za700za7za7_3521za7, "#Tab", 4 );
DEFINE_STRING( BGl_string3342z00zz__r4_output_6_10_3z00, BgL_bgl_string3342za700za7za7_3522za7, "_illegal-char-rep", 17 );
DEFINE_STRING( BGl_string3343z00zz__r4_output_6_10_3z00, BgL_bgl_string3343za700za7za7_3523za7, "loop", 4 );
DEFINE_STRING( BGl_string3344z00zz__r4_output_6_10_3z00, BgL_bgl_string3344za700za7za7_3524za7, "pair", 4 );
DEFINE_STRING( BGl_string3345z00zz__r4_output_6_10_3z00, BgL_bgl_string3345za700za7za7_3525za7, "_tprint", 7 );
DEFINE_STRING( BGl_string3346z00zz__r4_output_6_10_3z00, BgL_bgl_string3346za700za7za7_3526za7, "_fprint", 7 );
DEFINE_STRING( BGl_string3347z00zz__r4_output_6_10_3z00, BgL_bgl_string3347za700za7za7_3527za7, "Insufficient number of arguments", 32 );
DEFINE_STRING( BGl_string3348z00zz__r4_output_6_10_3z00, BgL_bgl_string3348za700za7za7_3528za7, "handle-tag", 10 );
DEFINE_STRING( BGl_string3350z00zz__r4_output_6_10_3z00, BgL_bgl_string3350za700za7za7_3529za7, "Illegal number", 14 );
DEFINE_STRING( BGl_string3349z00zz__r4_output_6_10_3z00, BgL_bgl_string3349za700za7za7_3530za7, "Illegal char", 12 );
DEFINE_STRING( BGl_string3352z00zz__r4_output_6_10_3z00, BgL_bgl_string3352za700za7za7_3531za7, "L", 1 );
DEFINE_STRING( BGl_string3353z00zz__r4_output_6_10_3z00, BgL_bgl_string3353za700za7za7_3532za7, "Illegal tag", 11 );
DEFINE_STRING( BGl_string3354z00zz__r4_output_6_10_3z00, BgL_bgl_string3354za700za7za7_3533za7, "0123456789", 10 );
DEFINE_STRING( BGl_string3355z00zz__r4_output_6_10_3z00, BgL_bgl_string3355za700za7za7_3534za7, "print-formatted-number", 22 );
DEFINE_STRING( BGl_string3356z00zz__r4_output_6_10_3z00, BgL_bgl_string3356za700za7za7_3535za7, "long", 4 );
DEFINE_STRING( BGl_string3357z00zz__r4_output_6_10_3z00, BgL_bgl_string3357za700za7za7_3536za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3358z00zz__r4_output_6_10_3z00, BgL_bgl_string3358za700za7za7_3537za7, "print-padded-number", 19 );
DEFINE_STRING( BGl_string3360z00zz__r4_output_6_10_3z00, BgL_bgl_string3360za700za7za7_3538za7, "Tag not allowed here", 20 );
DEFINE_STRING( BGl_string3359z00zz__r4_output_6_10_3z00, BgL_bgl_string3359za700za7za7_3539za7, "bstring", 7 );
DEFINE_STRING( BGl_string3361z00zz__r4_output_6_10_3z00, BgL_bgl_string3361za700za7za7_3540za7, " ", 1 );
DEFINE_STRING( BGl_string3362z00zz__r4_output_6_10_3z00, BgL_bgl_string3362za700za7za7_3541za7, " . ", 3 );
DEFINE_STRING( BGl_string3364z00zz__r4_output_6_10_3z00, BgL_bgl_string3364za700za7za7_3542za7, "format", 6 );
DEFINE_STRING( BGl_string3365z00zz__r4_output_6_10_3z00, BgL_bgl_string3365za700za7za7_3543za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3366z00zz__r4_output_6_10_3z00, BgL_bgl_string3366za700za7za7_3544za7, "_format", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2bytezd22zd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2byteza7d23545z00, BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3368z00zz__r4_output_6_10_3z00, BgL_bgl_string3368za700za7za7_3546za7, "printf", 6 );
DEFINE_STRING( BGl_string3369z00zz__r4_output_6_10_3z00, BgL_bgl_string3369za700za7za7_3547za7, "_printf", 7 );
DEFINE_STRING( BGl_string3371z00zz__r4_output_6_10_3z00, BgL_bgl_string3371za700za7za7_3548za7, "fprintf", 7 );
DEFINE_STRING( BGl_string3372z00zz__r4_output_6_10_3z00, BgL_bgl_string3372za700za7za7_3549za7, "_fprintf", 8 );
DEFINE_STRING( BGl_string3373z00zz__r4_output_6_10_3z00, BgL_bgl_string3373za700za7za7_3550za7, "()", 2 );
DEFINE_STRING( BGl_string3374z00zz__r4_output_6_10_3z00, BgL_bgl_string3374za700za7za7_3551za7, "#f", 2 );
DEFINE_STRING( BGl_string3375z00zz__r4_output_6_10_3z00, BgL_bgl_string3375za700za7za7_3552za7, "#t", 2 );
DEFINE_STRING( BGl_string3376z00zz__r4_output_6_10_3z00, BgL_bgl_string3376za700za7za7_3553za7, "#unspecified", 12 );
DEFINE_STRING( BGl_string3377z00zz__r4_output_6_10_3z00, BgL_bgl_string3377za700za7za7_3554za7, "#<class:", 8 );
DEFINE_STRING( BGl_string3378z00zz__r4_output_6_10_3z00, BgL_bgl_string3378za700za7za7_3555za7, ">", 1 );
DEFINE_STRING( BGl_string3380z00zz__r4_output_6_10_3z00, BgL_bgl_string3380za700za7za7_3556za7, "object", 6 );
DEFINE_STRING( BGl_string3379z00zz__r4_output_6_10_3z00, BgL_bgl_string3379za700za7za7_3557za7, "display-2", 9 );
DEFINE_STRING( BGl_string3381z00zz__r4_output_6_10_3z00, BgL_bgl_string3381za700za7za7_3558za7, "#<mutex:", 8 );
DEFINE_STRING( BGl_string3382z00zz__r4_output_6_10_3z00, BgL_bgl_string3382za700za7za7_3559za7, "mutex", 5 );
DEFINE_STRING( BGl_string3383z00zz__r4_output_6_10_3z00, BgL_bgl_string3383za700za7za7_3560za7, "#<condition-variable:", 21 );
DEFINE_STRING( BGl_string3384z00zz__r4_output_6_10_3z00, BgL_bgl_string3384za700za7za7_3561za7, "condvar", 7 );
DEFINE_STRING( BGl_string3385z00zz__r4_output_6_10_3z00, BgL_bgl_string3385za700za7za7_3562za7, "#<cell:", 7 );
DEFINE_STRING( BGl_string3386z00zz__r4_output_6_10_3z00, BgL_bgl_string3386za700za7za7_3563za7, "#eof-object", 11 );
DEFINE_STRING( BGl_string3387z00zz__r4_output_6_10_3z00, BgL_bgl_string3387za700za7za7_3564za7, "#!optional", 10 );
DEFINE_STRING( BGl_string3388z00zz__r4_output_6_10_3z00, BgL_bgl_string3388za700za7za7_3565za7, "#!rest", 6 );
DEFINE_STRING( BGl_string3400z00zz__r4_output_6_10_3z00, BgL_bgl_string3400za700za7za7_3566za7, "_write-2", 8 );
DEFINE_STRING( BGl_string3390z00zz__r4_output_6_10_3z00, BgL_bgl_string3390za700za7za7_3567za7, "#<output_string_port>", 21 );
DEFINE_STRING( BGl_string3389z00zz__r4_output_6_10_3z00, BgL_bgl_string3389za700za7za7_3568za7, "#!key", 5 );
DEFINE_STRING( BGl_string3401z00zz__r4_output_6_10_3z00, BgL_bgl_string3401za700za7za7_3569za7, "_display-symbol", 15 );
DEFINE_STRING( BGl_string3391z00zz__r4_output_6_10_3z00, BgL_bgl_string3391za700za7za7_3570za7, "#<output_procedure_port>", 24 );
DEFINE_STRING( BGl_string3402z00zz__r4_output_6_10_3z00, BgL_bgl_string3402za700za7za7_3571za7, "symbol", 6 );
DEFINE_STRING( BGl_string3392z00zz__r4_output_6_10_3z00, BgL_bgl_string3392za700za7za7_3572za7, "#<weakptr:", 10 );
DEFINE_STRING( BGl_string3403z00zz__r4_output_6_10_3z00, BgL_bgl_string3403za700za7za7_3573za7, "|", 1 );
DEFINE_STRING( BGl_string3393z00zz__r4_output_6_10_3z00, BgL_bgl_string3393za700za7za7_3574za7, "process", 7 );
DEFINE_STRING( BGl_string3404z00zz__r4_output_6_10_3z00, BgL_bgl_string3404za700za7za7_3575za7, "_write-symbol", 13 );
DEFINE_STRING( BGl_string3394z00zz__r4_output_6_10_3z00, BgL_bgl_string3394za700za7za7_3576za7, "socket", 6 );
DEFINE_STRING( BGl_string3405z00zz__r4_output_6_10_3z00, BgL_bgl_string3405za700za7za7_3577za7, "_display-string", 15 );
DEFINE_STRING( BGl_string3395z00zz__r4_output_6_10_3z00, BgL_bgl_string3395za700za7za7_3578za7, "mmap", 4 );
DEFINE_STRING( BGl_string3396z00zz__r4_output_6_10_3z00, BgL_bgl_string3396za700za7za7_3579za7, "dynamic-env", 11 );
DEFINE_STRING( BGl_string3407z00zz__r4_output_6_10_3z00, BgL_bgl_string3407za700za7za7_3580za7, "display-substring", 17 );
DEFINE_STRING( BGl_string3397z00zz__r4_output_6_10_3z00, BgL_bgl_string3397za700za7za7_3581za7, "_display-2", 10 );
DEFINE_STRING( BGl_string3408z00zz__r4_output_6_10_3z00, BgL_bgl_string3408za700za7za7_3582za7, "Illegal index, start=~a end=~a", 30 );
DEFINE_STRING( BGl_string3398z00zz__r4_output_6_10_3z00, BgL_bgl_string3398za700za7za7_3583za7, "write-2", 7 );
DEFINE_STRING( BGl_string3410z00zz__r4_output_6_10_3z00, BgL_bgl_string3410za700za7za7_3584za7, "_write-string", 13 );
DEFINE_STRING( BGl_string3409z00zz__r4_output_6_10_3z00, BgL_bgl_string3409za700za7za7_3585za7, "_display-substring", 18 );
DEFINE_STRING( BGl_string3399z00zz__r4_output_6_10_3z00, BgL_bgl_string3399za700za7za7_3586za7, "#<date:", 7 );
DEFINE_STRING( BGl_string3411z00zz__r4_output_6_10_3z00, BgL_bgl_string3411za700za7za7_3587za7, "_display-fixnum", 15 );
DEFINE_STRING( BGl_string3412z00zz__r4_output_6_10_3z00, BgL_bgl_string3412za700za7za7_3588za7, "bint", 4 );
DEFINE_STRING( BGl_string3413z00zz__r4_output_6_10_3z00, BgL_bgl_string3413za700za7za7_3589za7, "_display-elong", 14 );
DEFINE_STRING( BGl_string3414z00zz__r4_output_6_10_3z00, BgL_bgl_string3414za700za7za7_3590za7, "elong", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d22za7d2za73591za7, BGl__displayzd22zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3415z00zz__r4_output_6_10_3z00, BgL_bgl_string3415za700za7za7_3592za7, "_display-flonum", 15 );
DEFINE_STRING( BGl_string3416z00zz__r4_output_6_10_3z00, BgL_bgl_string3416za700za7za7_3593za7, "real", 4 );
DEFINE_STRING( BGl_string3417z00zz__r4_output_6_10_3z00, BgL_bgl_string3417za700za7za7_3594za7, "_display-ucs2string", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2elongzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2elong3595za7, BGl__displayzd2elongzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3418z00zz__r4_output_6_10_3z00, BgL_bgl_string3418za700za7za7_3596za7, "ucs2string", 10 );
DEFINE_STRING( BGl_string3420z00zz__r4_output_6_10_3z00, BgL_bgl_string3420za700za7za7_3597za7, "write/display-structure", 23 );
DEFINE_STRING( BGl_string3419z00zz__r4_output_6_10_3z00, BgL_bgl_string3419za700za7za7_3598za7, "_write-ucs2string", 17 );
DEFINE_STRING( BGl_string3421z00zz__r4_output_6_10_3z00, BgL_bgl_string3421za700za7za7_3599za7, "write/display-structure:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string3424z00zz__r4_output_6_10_3z00, BgL_bgl_string3424za700za7za7_3600za7, "funcall", 7 );
DEFINE_STRING( BGl_string3426z00zz__r4_output_6_10_3z00, BgL_bgl_string3426za700za7za7_3601za7, "disp", 4 );
DEFINE_STRING( BGl_string3428z00zz__r4_output_6_10_3z00, BgL_bgl_string3428za700za7za7_3602za7, "arg2256", 7 );
DEFINE_STRING( BGl_string3430z00zz__r4_output_6_10_3z00, BgL_bgl_string3430za700za7za7_3603za7, "port", 4 );
DEFINE_STRING( BGl_string3431z00zz__r4_output_6_10_3z00, BgL_bgl_string3431za700za7za7_3604za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string3434z00zz__r4_output_6_10_3z00, BgL_bgl_string3434za700za7za7_3605za7, "arg2260", 7 );
DEFINE_STRING( BGl_string3437z00zz__r4_output_6_10_3z00, BgL_bgl_string3437za700za7za7_3606za7, "arg2262", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd22zd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d22za7d2za7za7_3607z00, BGl__writezd22zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3438z00zz__r4_output_6_10_3z00, BgL_bgl_string3438za700za7za7_3608za7, "write/display-vector:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string3441z00zz__r4_output_6_10_3z00, BgL_bgl_string3441za700za7za7_3609za7, "tag", 3 );
DEFINE_STRING( BGl_string3442z00zz__r4_output_6_10_3z00, BgL_bgl_string3442za700za7za7_3610za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string3445z00zz__r4_output_6_10_3z00, BgL_bgl_string3445za700za7za7_3611za7, "arg2274", 7 );
DEFINE_STRING( BGl_string3448z00zz__r4_output_6_10_3z00, BgL_bgl_string3448za700za7za7_3612za7, "arg2275", 7 );
DEFINE_STRING( BGl_string3449z00zz__r4_output_6_10_3z00, BgL_bgl_string3449za700za7za7_3613za7, "write/display-tvector:Wrong number of arguments", 47 );
DEFINE_STRING( BGl_string3452z00zz__r4_output_6_10_3z00, BgL_bgl_string3452za700za7za7_3614za7, "id", 2 );
DEFINE_STRING( BGl_string3453z00zz__r4_output_6_10_3z00, BgL_bgl_string3453za700za7za7_3615za7, "procedure", 9 );
DEFINE_STRING( BGl_string3456z00zz__r4_output_6_10_3z00, BgL_bgl_string3456za700za7za7_3616za7, "tvector-ref", 11 );
DEFINE_STRING( BGl_string3458z00zz__r4_output_6_10_3z00, BgL_bgl_string3458za700za7za7_3617za7, "tvec", 4 );
DEFINE_STRING( BGl_string3460z00zz__r4_output_6_10_3z00, BgL_bgl_string3460za700za7za7_3618za7, "i", 1 );
DEFINE_STRING( BGl_string3463z00zz__r4_output_6_10_3z00, BgL_bgl_string3463za700za7za7_3619za7, "arg2285", 7 );
DEFINE_STRING( BGl_string3466z00zz__r4_output_6_10_3z00, BgL_bgl_string3466za700za7za7_3620za7, "arg2286", 7 );
DEFINE_STRING( BGl_string3467z00zz__r4_output_6_10_3z00, BgL_bgl_string3467za700za7za7_3621za7, "...)", 4 );
DEFINE_STRING( BGl_string3468z00zz__r4_output_6_10_3z00, BgL_bgl_string3468za700za7za7_3622za7, "write/display-hvector", 21 );
DEFINE_STRING( BGl_string3471z00zz__r4_output_6_10_3z00, BgL_bgl_string3471za700za7za7_3623za7, "vref", 4 );
DEFINE_STRING( BGl_string3473z00zz__r4_output_6_10_3z00, BgL_bgl_string3473za700za7za7_3624za7, "svec", 4 );
DEFINE_STRING( BGl_string3476z00zz__r4_output_6_10_3z00, BgL_bgl_string3476za700za7za7_3625za7, "arg2297", 7 );
DEFINE_STRING( BGl_string3480z00zz__r4_output_6_10_3z00, BgL_bgl_string3480za700za7za7_3626za7, "__r4_output_6_10_3", 18 );
DEFINE_STRING( BGl_string3479z00zz__r4_output_6_10_3z00, BgL_bgl_string3479za700za7za7_3627za7, "arg2300", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writeza2zd2envz70zz__r4_output_6_10_3z00, BgL_bgl__writeza7a2za7a2za7za7__3628z00, va_generic_entry, BGl__writeza2za2zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fprintzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__fprintza700za7za7__r43629za7, va_generic_entry, BGl__fprintz00zz__r4_output_6_10_3z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_newlinezd21zd2envz00zz__r4_output_6_10_3z00, BgL_bgl__newlineza7d21za7d2za73630za7, BGl__newlinezd21zd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_illegalzd2charzd2repzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__illegalza7d2charza73631z00, BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_writezd2charzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__writeza7d2charza7d23632z00, opt_generic_entry, BGl__writezd2charzd2zz__r4_output_6_10_3z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2flonumzd2envz00zz__r4_output_6_10_3z00, BgL_bgl__displayza7d2flonu3633za7, BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_newlinezd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__newlineza700za7za7__r3634za7, va_generic_entry, BGl__newlinez00zz__r4_output_6_10_3z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_displayzd2envzd2zz__r4_output_6_10_3z00, BgL_bgl__displayza700za7za7__r3635za7, va_generic_entry, BGl__displayz00zz__r4_output_6_10_3z00, BUNSPEC, -2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long BgL_checksumz00_4079, char * BgL_fromz00_4080)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_output_6_10_3z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00(); 
BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00()
{ AN_OBJECT;
{ /* Ieee/output.scm 24 */
BGl_symbol3327z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3328z00zz__r4_output_6_10_3z00); 
BGl_symbol3333z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3334z00zz__r4_output_6_10_3z00); 
BGl_symbol3351z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3352z00zz__r4_output_6_10_3z00); 
BGl_symbol3363z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3364z00zz__r4_output_6_10_3z00); 
BGl_symbol3367z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3368z00zz__r4_output_6_10_3z00); 
BGl_symbol3370z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3371z00zz__r4_output_6_10_3z00); 
BGl_symbol3406z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3407z00zz__r4_output_6_10_3z00); 
BGl_symbol3423z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3424z00zz__r4_output_6_10_3z00); 
BGl_symbol3425z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3426z00zz__r4_output_6_10_3z00); 
BGl_symbol3427z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3428z00zz__r4_output_6_10_3z00); 
BGl_symbol3429z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3430z00zz__r4_output_6_10_3z00); 
BGl_list3422z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3427z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3433z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3434z00zz__r4_output_6_10_3z00); 
BGl_list3432z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3433z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3436z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3437z00zz__r4_output_6_10_3z00); 
BGl_list3435z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3436z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3440z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3441z00zz__r4_output_6_10_3z00); 
BGl_list3439z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3440z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3444z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3445z00zz__r4_output_6_10_3z00); 
BGl_list3443z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3444z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3447z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3448z00zz__r4_output_6_10_3z00); 
BGl_list3446z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3447z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3451z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3452z00zz__r4_output_6_10_3z00); 
BGl_list3450z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3451z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3455z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3456z00zz__r4_output_6_10_3z00); 
BGl_symbol3457z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3458z00zz__r4_output_6_10_3z00); 
BGl_symbol3459z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3460z00zz__r4_output_6_10_3z00); 
BGl_list3454z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3455z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3455z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3457z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3459z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3462z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3463z00zz__r4_output_6_10_3z00); 
BGl_list3461z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3462z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3465z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3466z00zz__r4_output_6_10_3z00); 
BGl_list3464z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3465z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3470z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3471z00zz__r4_output_6_10_3z00); 
BGl_symbol3472z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3473z00zz__r4_output_6_10_3z00); 
BGl_list3469z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3470z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3470z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3472z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3459z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3475z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3476z00zz__r4_output_6_10_3z00); 
BGl_list3474z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3475z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))); 
BGl_symbol3478z00zz__r4_output_6_10_3z00 = 
bstring_to_symbol(BGl_string3479z00zz__r4_output_6_10_3z00); 
return ( 
BGl_list3477z00zz__r4_output_6_10_3z00 = 
MAKE_PAIR(BGl_symbol3423z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3425z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3478z00zz__r4_output_6_10_3z00, 
MAKE_PAIR(BGl_symbol3429z00zz__r4_output_6_10_3z00, BNIL))))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00()
{ AN_OBJECT;
{ /* Ieee/output.scm 24 */
return ( 
BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = 
bgl_make_mutex(BGl_string3319z00zz__r4_output_6_10_3z00), BUNSPEC) ;} 
}



/* newline */
BGL_EXPORTED_DEF obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t BgL_portz00_1)
{ AN_OBJECT;
{ /* Ieee/output.scm 236 */
{ /* Ieee/output.scm 237 */
obj_t BgL_portz00_1118;
if(
NULLP(BgL_portz00_1))
{ /* Ieee/output.scm 237 */
obj_t BgL_res2899z00_2458;
{ /* Ieee/output.scm 237 */
obj_t BgL_auxz00_4181;
BgL_auxz00_4181 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2899z00_2458 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4181); } 
BgL_portz00_1118 = BgL_res2899z00_2458; }  else 
{ /* Ieee/output.scm 237 */
if(
PAIRP(BgL_portz00_1))
{ /* Ieee/output.scm 237 */
if(
NULLP(
CDR(BgL_portz00_1)))
{ /* Ieee/output.scm 237 */
BgL_portz00_1118 = 
CAR(BgL_portz00_1); }  else 
{ /* Ieee/output.scm 237 */
BgL_portz00_1118 = 
BGl_errorz00zz__errorz00(BGl_string3320z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_1); } }  else 
{ /* Ieee/output.scm 237 */
BgL_portz00_1118 = 
BGl_errorz00zz__errorz00(BGl_string3320z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_1); } } 
{ /* Ieee/output.scm 246 */
obj_t BgL_portz00_2466;
if(
OUTPUT_PORTP(BgL_portz00_1118))
{ /* Ieee/output.scm 246 */
BgL_portz00_2466 = BgL_portz00_1118; }  else 
{ 
obj_t BgL_auxz00_4194;
BgL_auxz00_4194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)9576)), BGl_string3320z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_1118); 
FAILURE(BgL_auxz00_4194,BFALSE,BFALSE);} 
return 
bgl_display_char(((unsigned char)'\n'), BgL_portz00_2466);} } } 
}



/* _newline */
obj_t BGl__newlinez00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3546, obj_t BgL_portz00_3547)
{ AN_OBJECT;
{ /* Ieee/output.scm 236 */
return 
BGl_newlinez00zz__r4_output_6_10_3z00(BgL_portz00_3547);} 
}



/* newline-1 */
BGL_EXPORTED_DEF obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t BgL_portz00_2)
{ AN_OBJECT;
{ /* Ieee/output.scm 251 */
return 
bgl_display_char(((unsigned char)'\n'), BgL_portz00_2);} 
}



/* _newline-1 */
obj_t BGl__newlinezd21zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3548, obj_t BgL_portz00_3549)
{ AN_OBJECT;
{ /* Ieee/output.scm 251 */
{ /* Ieee/output.scm 252 */
obj_t BgL_portz00_4033;
if(
OUTPUT_PORTP(BgL_portz00_3549))
{ /* Ieee/output.scm 252 */
BgL_portz00_4033 = BgL_portz00_3549; }  else 
{ 
obj_t BgL_auxz00_4203;
BgL_auxz00_4203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)9855)), BGl_string3324z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3549); 
FAILURE(BgL_auxz00_4203,BFALSE,BFALSE);} 
return 
bgl_display_char(((unsigned char)'\n'), BgL_portz00_4033);} } 
}



/* display */
BGL_EXPORTED_DEF obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t BgL_objz00_3, obj_t BgL_portz00_4)
{ AN_OBJECT;
{ /* Ieee/output.scm 257 */
{ /* Ieee/output.scm 258 */
obj_t BgL_portz00_1127;
if(
NULLP(BgL_portz00_4))
{ /* Ieee/output.scm 258 */
obj_t BgL_res2901z00_2469;
{ /* Ieee/output.scm 258 */
obj_t BgL_auxz00_4210;
BgL_auxz00_4210 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2901z00_2469 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4210); } 
BgL_portz00_1127 = BgL_res2901z00_2469; }  else 
{ /* Ieee/output.scm 258 */
if(
PAIRP(BgL_portz00_4))
{ /* Ieee/output.scm 258 */
if(
NULLP(
CDR(BgL_portz00_4)))
{ /* Ieee/output.scm 258 */
BgL_portz00_1127 = 
CAR(BgL_portz00_4); }  else 
{ /* Ieee/output.scm 258 */
BgL_portz00_1127 = 
BGl_errorz00zz__errorz00(BGl_string3325z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_4); } }  else 
{ /* Ieee/output.scm 258 */
BgL_portz00_1127 = 
BGl_errorz00zz__errorz00(BGl_string3325z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_4); } } 
{ /* Ieee/output.scm 267 */
obj_t BgL_auxz00_4221;
if(
OUTPUT_PORTP(BgL_portz00_1127))
{ /* Ieee/output.scm 267 */
BgL_auxz00_4221 = BgL_portz00_1127
; }  else 
{ 
obj_t BgL_auxz00_4224;
BgL_auxz00_4224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)10344)), BGl_string3325z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_1127); 
FAILURE(BgL_auxz00_4224,BFALSE,BFALSE);} 
return 
bgl_display_obj(BgL_objz00_3, BgL_auxz00_4221);} } } 
}



/* _display */
obj_t BGl__displayz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3550, obj_t BgL_objz00_3551, obj_t BgL_portz00_3552)
{ AN_OBJECT;
{ /* Ieee/output.scm 257 */
return 
BGl_displayz00zz__r4_output_6_10_3z00(BgL_objz00_3551, BgL_portz00_3552);} 
}



/* write */
BGL_EXPORTED_DEF obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t BgL_objz00_5, obj_t BgL_portz00_6)
{ AN_OBJECT;
{ /* Ieee/output.scm 272 */
{ /* Ieee/output.scm 273 */
obj_t BgL_portz00_1136;
if(
NULLP(BgL_portz00_6))
{ /* Ieee/output.scm 273 */
obj_t BgL_res2903z00_2479;
{ /* Ieee/output.scm 273 */
obj_t BgL_auxz00_4232;
BgL_auxz00_4232 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2903z00_2479 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4232); } 
BgL_portz00_1136 = BgL_res2903z00_2479; }  else 
{ /* Ieee/output.scm 273 */
if(
PAIRP(BgL_portz00_6))
{ /* Ieee/output.scm 273 */
if(
NULLP(
CDR(BgL_portz00_6)))
{ /* Ieee/output.scm 273 */
BgL_portz00_1136 = 
CAR(BgL_portz00_6); }  else 
{ /* Ieee/output.scm 273 */
BgL_portz00_1136 = 
BGl_errorz00zz__errorz00(BGl_string3326z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_6); } }  else 
{ /* Ieee/output.scm 273 */
BgL_portz00_1136 = 
BGl_errorz00zz__errorz00(BGl_string3326z00zz__r4_output_6_10_3z00, BGl_string3321z00zz__r4_output_6_10_3z00, BgL_portz00_6); } } 
{ /* Ieee/output.scm 282 */
obj_t BgL_auxz00_4243;
if(
OUTPUT_PORTP(BgL_portz00_1136))
{ /* Ieee/output.scm 282 */
BgL_auxz00_4243 = BgL_portz00_1136
; }  else 
{ 
obj_t BgL_auxz00_4246;
BgL_auxz00_4246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)10803)), BGl_string3326z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_1136); 
FAILURE(BgL_auxz00_4246,BFALSE,BFALSE);} 
return 
bgl_write_obj(BgL_objz00_5, BgL_auxz00_4243);} } } 
}



/* _write */
obj_t BGl__writez00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3553, obj_t BgL_objz00_3554, obj_t BgL_portz00_3555)
{ AN_OBJECT;
{ /* Ieee/output.scm 272 */
return 
BGl_writez00zz__r4_output_6_10_3z00(BgL_objz00_3554, BgL_portz00_3555);} 
}



/* _write-char */
obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_10, obj_t BgL_optz00_9)
{ AN_OBJECT;
{ /* Ieee/output.scm 287 */
{ /* Ieee/output.scm 287 */
obj_t BgL_g1885z00_1145;
BgL_g1885z00_1145 = 
VECTOR_REF(BgL_optz00_9,
(int)(((long)0))); 
{ 

{ /* Ieee/output.scm 287 */
int BgL_aux1887z00_1147;
BgL_aux1887z00_1147 = 
VECTOR_LENGTH(BgL_optz00_9); 
switch( 
(long)(BgL_aux1887z00_1147)) { case ((long)1) : 

{ /* Ieee/output.scm 287 */
obj_t BgL_portz00_1149;
{ /* Ieee/output.scm 287 */
obj_t BgL_res2905z00_2488;
{ /* Ieee/output.scm 287 */
obj_t BgL_auxz00_4255;
BgL_auxz00_4255 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2905z00_2488 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4255); } 
BgL_portz00_1149 = BgL_res2905z00_2488; } 
{ /* Ieee/output.scm 287 */

{ /* Ieee/output.scm 287 */
obj_t BgL_arg1942z00_1150;
BgL_arg1942z00_1150 = 
VECTOR_REF(BgL_optz00_9,
(int)(((long)0))); 
{ /* Ieee/output.scm 287 */
unsigned char BgL_charz00_2489;
{ /* Ieee/output.scm 287 */
obj_t BgL_auxz00_4260;
if(
CHARP(BgL_arg1942z00_1150))
{ /* Ieee/output.scm 287 */
BgL_auxz00_4260 = BgL_arg1942z00_1150
; }  else 
{ 
obj_t BgL_auxz00_4263;
BgL_auxz00_4263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11034)), BGl_string3330z00zz__r4_output_6_10_3z00, BGl_string3331z00zz__r4_output_6_10_3z00, BgL_arg1942z00_1150); 
FAILURE(BgL_auxz00_4263,BFALSE,BFALSE);} 
BgL_charz00_2489 = 
CCHAR(BgL_auxz00_4260); } 
return 
bgl_display_char(BgL_charz00_2489, BgL_portz00_1149);} } } } break;case ((long)2) : 

{ /* Ieee/output.scm 287 */
obj_t BgL_portz00_1151;
BgL_portz00_1151 = 
VECTOR_REF(BgL_optz00_9,
(int)(((long)1))); 
{ /* Ieee/output.scm 287 */

{ /* Ieee/output.scm 287 */
obj_t BgL_arg1943z00_1152;
BgL_arg1943z00_1152 = 
VECTOR_REF(BgL_optz00_9,
(int)(((long)0))); 
{ /* Ieee/output.scm 287 */
unsigned char BgL_charz00_2493;
{ /* Ieee/output.scm 287 */
obj_t BgL_auxz00_4273;
if(
CHARP(BgL_arg1943z00_1152))
{ /* Ieee/output.scm 287 */
BgL_auxz00_4273 = BgL_arg1943z00_1152
; }  else 
{ 
obj_t BgL_auxz00_4276;
BgL_auxz00_4276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11034)), BGl_string3330z00zz__r4_output_6_10_3z00, BGl_string3331z00zz__r4_output_6_10_3z00, BgL_arg1943z00_1152); 
FAILURE(BgL_auxz00_4276,BFALSE,BFALSE);} 
BgL_charz00_2493 = 
CCHAR(BgL_auxz00_4273); } 
{ /* Ieee/output.scm 287 */
obj_t BgL_portz00_2496;
if(
OUTPUT_PORTP(BgL_portz00_1151))
{ /* Ieee/output.scm 287 */
BgL_portz00_2496 = BgL_portz00_1151; }  else 
{ 
obj_t BgL_auxz00_4283;
BgL_auxz00_4283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11034)), BGl_string3330z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_1151); 
FAILURE(BgL_auxz00_4283,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_charz00_2493, BgL_portz00_2496);} } } } } break;
default: 
{ /* Ieee/output.scm 287 */
obj_t BgL_arg1944z00_1153;int BgL_arg1946z00_1155;
BgL_arg1944z00_1153 = BGl_symbol3327z00zz__r4_output_6_10_3z00; 
BgL_arg1946z00_1155 = 
VECTOR_LENGTH(BgL_optz00_9); 
return 
BGl_errorz00zz__errorz00(BgL_arg1944z00_1153, BGl_string3329z00zz__r4_output_6_10_3z00, 
BINT(BgL_arg1946z00_1155));} } } } } } 
}



/* write-char */
BGL_EXPORTED_DEF obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned char BgL_charz00_7, obj_t BgL_portz00_8)
{ AN_OBJECT;
{ /* Ieee/output.scm 287 */
{ /* Ieee/output.scm 288 */
obj_t BgL_portz00_2498;
if(
OUTPUT_PORTP(BgL_portz00_8))
{ /* Ieee/output.scm 288 */
BgL_portz00_2498 = BgL_portz00_8; }  else 
{ 
obj_t BgL_auxz00_4295;
BgL_auxz00_4295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11122)), BGl_string3328z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_8); 
FAILURE(BgL_auxz00_4295,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_charz00_7, BgL_portz00_2498);} } 
}



/* write-char-2 */
BGL_EXPORTED_DEF obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char BgL_charz00_11, obj_t BgL_portz00_12)
{ AN_OBJECT;
{ /* Ieee/output.scm 293 */
return 
bgl_display_char(BgL_charz00_11, BgL_portz00_12);} 
}



/* _write-char-2 */
obj_t BGl__writezd2charzd22z00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3556, obj_t BgL_charz00_3557, obj_t BgL_portz00_3558)
{ AN_OBJECT;
{ /* Ieee/output.scm 293 */
{ /* Ieee/output.scm 294 */
unsigned char BgL_charz00_4034;obj_t BgL_portz00_4035;
{ /* Ieee/output.scm 294 */
obj_t BgL_auxz00_4301;
if(
CHARP(BgL_charz00_3557))
{ /* Ieee/output.scm 294 */
BgL_auxz00_4301 = BgL_charz00_3557
; }  else 
{ 
obj_t BgL_auxz00_4304;
BgL_auxz00_4304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11415)), BGl_string3332z00zz__r4_output_6_10_3z00, BGl_string3331z00zz__r4_output_6_10_3z00, BgL_charz00_3557); 
FAILURE(BgL_auxz00_4304,BFALSE,BFALSE);} 
BgL_charz00_4034 = 
CCHAR(BgL_auxz00_4301); } 
if(
OUTPUT_PORTP(BgL_portz00_3558))
{ /* Ieee/output.scm 294 */
BgL_portz00_4035 = BgL_portz00_3558; }  else 
{ 
obj_t BgL_auxz00_4311;
BgL_auxz00_4311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11415)), BGl_string3332z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3558); 
FAILURE(BgL_auxz00_4311,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_charz00_4034, BgL_portz00_4035);} } 
}



/* _write-byte */
obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_16, obj_t BgL_optz00_15)
{ AN_OBJECT;
{ /* Ieee/output.scm 299 */
{ /* Ieee/output.scm 299 */
obj_t BgL_g1888z00_1156;
BgL_g1888z00_1156 = 
VECTOR_REF(BgL_optz00_15,
(int)(((long)0))); 
{ 

{ /* Ieee/output.scm 299 */
int BgL_aux1890z00_1158;
BgL_aux1890z00_1158 = 
VECTOR_LENGTH(BgL_optz00_15); 
switch( 
(long)(BgL_aux1890z00_1158)) { case ((long)1) : 

{ /* Ieee/output.scm 299 */
obj_t BgL_portz00_1160;
{ /* Ieee/output.scm 299 */
obj_t BgL_res2906z00_2500;
{ /* Ieee/output.scm 299 */
obj_t BgL_auxz00_4319;
BgL_auxz00_4319 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2906z00_2500 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4319); } 
BgL_portz00_1160 = BgL_res2906z00_2500; } 
{ /* Ieee/output.scm 299 */

{ /* Ieee/output.scm 299 */
obj_t BgL_arg1948z00_1161;
BgL_arg1948z00_1161 = 
VECTOR_REF(BgL_optz00_15,
(int)(((long)0))); 
{ /* Ieee/output.scm 299 */
unsigned char BgL_bytez00_2501;
{ /* Ieee/output.scm 299 */
obj_t BgL_auxz00_4324;
if(
INTEGERP(BgL_arg1948z00_1161))
{ /* Ieee/output.scm 299 */
BgL_auxz00_4324 = BgL_arg1948z00_1161
; }  else 
{ 
obj_t BgL_auxz00_4327;
BgL_auxz00_4327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11666)), BGl_string3335z00zz__r4_output_6_10_3z00, BGl_string3336z00zz__r4_output_6_10_3z00, BgL_arg1948z00_1161); 
FAILURE(BgL_auxz00_4327,BFALSE,BFALSE);} 
BgL_bytez00_2501 = 
(unsigned char)CINT(BgL_auxz00_4324); } 
return 
bgl_display_char(BgL_bytez00_2501, BgL_portz00_1160);} } } } break;case ((long)2) : 

{ /* Ieee/output.scm 299 */
obj_t BgL_portz00_1162;
BgL_portz00_1162 = 
VECTOR_REF(BgL_optz00_15,
(int)(((long)1))); 
{ /* Ieee/output.scm 299 */

{ /* Ieee/output.scm 299 */
obj_t BgL_arg1949z00_1163;
BgL_arg1949z00_1163 = 
VECTOR_REF(BgL_optz00_15,
(int)(((long)0))); 
{ /* Ieee/output.scm 299 */
unsigned char BgL_bytez00_2505;
{ /* Ieee/output.scm 299 */
obj_t BgL_auxz00_4337;
if(
INTEGERP(BgL_arg1949z00_1163))
{ /* Ieee/output.scm 299 */
BgL_auxz00_4337 = BgL_arg1949z00_1163
; }  else 
{ 
obj_t BgL_auxz00_4340;
BgL_auxz00_4340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11666)), BGl_string3335z00zz__r4_output_6_10_3z00, BGl_string3336z00zz__r4_output_6_10_3z00, BgL_arg1949z00_1163); 
FAILURE(BgL_auxz00_4340,BFALSE,BFALSE);} 
BgL_bytez00_2505 = 
(unsigned char)CINT(BgL_auxz00_4337); } 
{ /* Ieee/output.scm 299 */
obj_t BgL_portz00_2508;
if(
OUTPUT_PORTP(BgL_portz00_1162))
{ /* Ieee/output.scm 299 */
BgL_portz00_2508 = BgL_portz00_1162; }  else 
{ 
obj_t BgL_auxz00_4347;
BgL_auxz00_4347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11666)), BGl_string3335z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_1162); 
FAILURE(BgL_auxz00_4347,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_bytez00_2505, BgL_portz00_2508);} } } } } break;
default: 
{ /* Ieee/output.scm 299 */
obj_t BgL_arg1950z00_1164;int BgL_arg1952z00_1166;
BgL_arg1950z00_1164 = BGl_symbol3333z00zz__r4_output_6_10_3z00; 
BgL_arg1952z00_1166 = 
VECTOR_LENGTH(BgL_optz00_15); 
return 
BGl_errorz00zz__errorz00(BgL_arg1950z00_1164, BGl_string3329z00zz__r4_output_6_10_3z00, 
BINT(BgL_arg1952z00_1166));} } } } } } 
}



/* write-byte */
BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned char BgL_bytez00_13, obj_t BgL_portz00_14)
{ AN_OBJECT;
{ /* Ieee/output.scm 299 */
{ /* Ieee/output.scm 300 */
obj_t BgL_portz00_2510;
if(
OUTPUT_PORTP(BgL_portz00_14))
{ /* Ieee/output.scm 300 */
BgL_portz00_2510 = BgL_portz00_14; }  else 
{ 
obj_t BgL_auxz00_4359;
BgL_auxz00_4359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)11754)), BGl_string3334z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_14); 
FAILURE(BgL_auxz00_4359,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_bytez00_13, BgL_portz00_2510);} } 
}



/* write-byte-2 */
BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char BgL_bytez00_17, obj_t BgL_portz00_18)
{ AN_OBJECT;
{ /* Ieee/output.scm 305 */
return 
bgl_display_char(BgL_bytez00_17, BgL_portz00_18);} 
}



/* _write-byte-2 */
obj_t BGl__writezd2bytezd22z00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3559, obj_t BgL_bytez00_3560, obj_t BgL_portz00_3561)
{ AN_OBJECT;
{ /* Ieee/output.scm 305 */
{ /* Ieee/output.scm 306 */
unsigned char BgL_bytez00_4036;obj_t BgL_portz00_4037;
{ /* Ieee/output.scm 306 */
obj_t BgL_auxz00_4365;
if(
INTEGERP(BgL_bytez00_3560))
{ /* Ieee/output.scm 306 */
BgL_auxz00_4365 = BgL_bytez00_3560
; }  else 
{ 
obj_t BgL_auxz00_4368;
BgL_auxz00_4368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)12047)), BGl_string3337z00zz__r4_output_6_10_3z00, BGl_string3336z00zz__r4_output_6_10_3z00, BgL_bytez00_3560); 
FAILURE(BgL_auxz00_4368,BFALSE,BFALSE);} 
BgL_bytez00_4036 = 
(unsigned char)CINT(BgL_auxz00_4365); } 
if(
OUTPUT_PORTP(BgL_portz00_3561))
{ /* Ieee/output.scm 306 */
BgL_portz00_4037 = BgL_portz00_3561; }  else 
{ 
obj_t BgL_auxz00_4375;
BgL_auxz00_4375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)12047)), BGl_string3337z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3561); 
FAILURE(BgL_auxz00_4375,BFALSE,BFALSE);} 
return 
bgl_display_char(BgL_bytez00_4036, BgL_portz00_4037);} } 
}



/* illegal-char-rep */
BGL_EXPORTED_DEF obj_t BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char BgL_charz00_19)
{ AN_OBJECT;
{ /* Ieee/output.scm 311 */
{ /* Ieee/output.scm 312 */
bool_t BgL_testz00_4380;
if(
isalpha(BgL_charz00_19))
{ /* Ieee/output.scm 312 */
BgL_testz00_4380 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 312 */
BgL_testz00_4380 = 
isdigit(BgL_charz00_19)
; } 
if(BgL_testz00_4380)
{ /* Ieee/output.scm 312 */
return 
BCHAR(BgL_charz00_19);}  else 
{ 

switch( BgL_charz00_19) { case ((unsigned char)'\n') : 

return BGl_string3338z00zz__r4_output_6_10_3z00;break;case ((unsigned char)'\r') : 

return BGl_string3339z00zz__r4_output_6_10_3z00;break;case ((unsigned char)' ') : 

return BGl_string3340z00zz__r4_output_6_10_3z00;break;case ((unsigned char)'\t') : 

return BGl_string3341z00zz__r4_output_6_10_3z00;break;
default: 
{ /* Ieee/output.scm 324 */
long BgL_iz00_1171;
BgL_iz00_1171 = 
(BgL_charz00_19); 
if(
(BgL_iz00_1171<((long)33)))
{ /* Ieee/output.scm 325 */
return 
bgl_ill_char_rep(BgL_charz00_19);}  else 
{ /* Ieee/output.scm 325 */
return 
BCHAR(BgL_charz00_19);} } } } } } 
}



/* _illegal-char-rep */
obj_t BGl__illegalzd2charzd2repz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3562, obj_t BgL_charz00_3563)
{ AN_OBJECT;
{ /* Ieee/output.scm 311 */
{ /* Ieee/output.scm 312 */
unsigned char BgL_auxz00_4391;
{ /* Ieee/output.scm 312 */
obj_t BgL_auxz00_4392;
if(
CHARP(BgL_charz00_3563))
{ /* Ieee/output.scm 312 */
BgL_auxz00_4392 = BgL_charz00_3563
; }  else 
{ 
obj_t BgL_auxz00_4395;
BgL_auxz00_4395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)12332)), BGl_string3342z00zz__r4_output_6_10_3z00, BGl_string3331z00zz__r4_output_6_10_3z00, BgL_charz00_3563); 
FAILURE(BgL_auxz00_4395,BFALSE,BFALSE);} 
BgL_auxz00_4391 = 
CCHAR(BgL_auxz00_4392); } 
return 
BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(BgL_auxz00_4391);} } 
}



/* print */
BGL_EXPORTED_DEF obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t BgL_objz00_20)
{ AN_OBJECT;
{ /* Ieee/output.scm 332 */
{ /* Ieee/output.scm 333 */
obj_t BgL_portz00_1174;
{ /* Ieee/output.scm 333 */
obj_t BgL_res2907z00_2517;
{ /* Ieee/output.scm 333 */
obj_t BgL_auxz00_4401;
BgL_auxz00_4401 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2907z00_2517 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4401); } 
BgL_portz00_1174 = BgL_res2907z00_2517; } 
{ 
obj_t BgL_lz00_1177;obj_t BgL_resz00_1178;
BgL_lz00_1177 = BgL_objz00_20; 
BgL_resz00_1178 = BNIL; 
BgL_zc3anonymousza31957ze3z83_1179:
if(
NULLP(BgL_lz00_1177))
{ /* Ieee/output.scm 336 */
bgl_display_char(((unsigned char)'\n'), BgL_portz00_1174); 
return BgL_resz00_1178;}  else 
{ /* Ieee/output.scm 340 */
obj_t BgL_vz00_1181;
{ /* Ieee/output.scm 340 */
obj_t BgL_pairz00_2519;
if(
PAIRP(BgL_lz00_1177))
{ /* Ieee/output.scm 340 */
BgL_pairz00_2519 = BgL_lz00_1177; }  else 
{ 
obj_t BgL_auxz00_4409;
BgL_auxz00_4409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)13072)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1177); 
FAILURE(BgL_auxz00_4409,BFALSE,BFALSE);} 
BgL_vz00_1181 = 
CAR(BgL_pairz00_2519); } 
bgl_display_obj(BgL_vz00_1181, BgL_portz00_1174); 
{ 
obj_t BgL_resz00_4417;obj_t BgL_lz00_4415;
BgL_lz00_4415 = 
CDR(BgL_lz00_1177); 
BgL_resz00_4417 = BgL_vz00_1181; 
BgL_resz00_1178 = BgL_resz00_4417; 
BgL_lz00_1177 = BgL_lz00_4415; 
goto BgL_zc3anonymousza31957ze3z83_1179;} } } } } 
}



/* _print */
obj_t BGl__printz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3564, obj_t BgL_objz00_3565)
{ AN_OBJECT;
{ /* Ieee/output.scm 332 */
return 
BGl_printz00zz__r4_output_6_10_3z00(BgL_objz00_3565);} 
}



/* display* */
BGL_EXPORTED_DEF obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t BgL_objz00_21)
{ AN_OBJECT;
{ /* Ieee/output.scm 347 */
{ /* Ieee/output.scm 348 */
obj_t BgL_portz00_1184;
{ /* Ieee/output.scm 348 */
obj_t BgL_res2908z00_2522;
{ /* Ieee/output.scm 348 */
obj_t BgL_auxz00_4419;
BgL_auxz00_4419 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2908z00_2522 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4419); } 
BgL_portz00_1184 = BgL_res2908z00_2522; } 
{ 
obj_t BgL_lz00_1186;
BgL_lz00_1186 = BgL_objz00_21; 
BgL_zc3anonymousza31960ze3z83_1187:
if(
NULLP(BgL_lz00_1186))
{ /* Ieee/output.scm 350 */
return BUNSPEC;}  else 
{ /* Ieee/output.scm 350 */
{ /* Ieee/output.scm 353 */
obj_t BgL_arg1962z00_1190;
{ /* Ieee/output.scm 353 */
obj_t BgL_pairz00_2525;
if(
PAIRP(BgL_lz00_1186))
{ /* Ieee/output.scm 353 */
BgL_pairz00_2525 = BgL_lz00_1186; }  else 
{ 
obj_t BgL_auxz00_4426;
BgL_auxz00_4426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)13511)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1186); 
FAILURE(BgL_auxz00_4426,BFALSE,BFALSE);} 
BgL_arg1962z00_1190 = 
CAR(BgL_pairz00_2525); } 
bgl_display_obj(BgL_arg1962z00_1190, BgL_portz00_1184); } 
{ 
obj_t BgL_lz00_4432;
BgL_lz00_4432 = 
CDR(BgL_lz00_1186); 
BgL_lz00_1186 = BgL_lz00_4432; 
goto BgL_zc3anonymousza31960ze3z83_1187;} } } } } 
}



/* _display* */
obj_t BGl__displayza2za2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3566, obj_t BgL_objz00_3567)
{ AN_OBJECT;
{ /* Ieee/output.scm 347 */
return 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_objz00_3567);} 
}



/* write* */
BGL_EXPORTED_DEF obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t BgL_objz00_22)
{ AN_OBJECT;
{ /* Ieee/output.scm 359 */
{ /* Ieee/output.scm 360 */
obj_t BgL_portz00_1193;
{ /* Ieee/output.scm 360 */
obj_t BgL_res2909z00_2528;
{ /* Ieee/output.scm 360 */
obj_t BgL_auxz00_4435;
BgL_auxz00_4435 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2909z00_2528 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4435); } 
BgL_portz00_1193 = BgL_res2909z00_2528; } 
{ 
obj_t BgL_lz00_1195;
BgL_lz00_1195 = BgL_objz00_22; 
BgL_zc3anonymousza31964ze3z83_1196:
if(
NULLP(BgL_lz00_1195))
{ /* Ieee/output.scm 362 */
return BUNSPEC;}  else 
{ /* Ieee/output.scm 362 */
{ /* Ieee/output.scm 365 */
obj_t BgL_arg1966z00_1199;
{ /* Ieee/output.scm 365 */
obj_t BgL_pairz00_2531;
if(
PAIRP(BgL_lz00_1195))
{ /* Ieee/output.scm 365 */
BgL_pairz00_2531 = BgL_lz00_1195; }  else 
{ 
obj_t BgL_auxz00_4442;
BgL_auxz00_4442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)13929)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1195); 
FAILURE(BgL_auxz00_4442,BFALSE,BFALSE);} 
BgL_arg1966z00_1199 = 
CAR(BgL_pairz00_2531); } 
bgl_write_obj(BgL_arg1966z00_1199, BgL_portz00_1193); } 
{ 
obj_t BgL_lz00_4448;
BgL_lz00_4448 = 
CDR(BgL_lz00_1195); 
BgL_lz00_1195 = BgL_lz00_4448; 
goto BgL_zc3anonymousza31964ze3z83_1196;} } } } } 
}



/* _write* */
obj_t BGl__writeza2za2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3568, obj_t BgL_objz00_3569)
{ AN_OBJECT;
{ /* Ieee/output.scm 359 */
return 
BGl_writeza2za2zz__r4_output_6_10_3z00(BgL_objz00_3569);} 
}



/* tprint */
BGL_EXPORTED_DEF obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_23, obj_t BgL_objz00_24)
{ AN_OBJECT;
{ /* Ieee/output.scm 376 */
{ /* Ieee/output.scm 377 */
obj_t BgL_g1917z00_1202;
BgL_g1917z00_1202 = BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1917z00_1202); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1917z00_1202, ((long)0)); } } } 
{ /* Ieee/output.scm 378 */
obj_t BgL_runner1970z00_1206;
{ /* Ieee/output.scm 378 */
obj_t BgL_list1968z00_1204;
BgL_list1968z00_1204 = 
MAKE_PAIR(BgL_objz00_24, BNIL); 
BgL_runner1970z00_1206 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_23, BgL_list1968z00_1204); } 
{ /* Ieee/output.scm 378 */
obj_t BgL_aux1969z00_1205;
{ /* Ieee/output.scm 378 */
obj_t BgL_pairz00_2538;
{ /* Ieee/output.scm 378 */
obj_t BgL_aux3027z00_3724;
BgL_aux3027z00_3724 = BgL_runner1970z00_1206; 
if(
PAIRP(BgL_aux3027z00_3724))
{ /* Ieee/output.scm 378 */
BgL_pairz00_2538 = BgL_aux3027z00_3724; }  else 
{ 
obj_t BgL_auxz00_4459;
BgL_auxz00_4459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14511)), BGl_string3319z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_aux3027z00_3724); 
FAILURE(BgL_auxz00_4459,BFALSE,BFALSE);} } 
{ /* Ieee/output.scm 378 */
obj_t BgL_aux3029z00_3726;
BgL_aux3029z00_3726 = 
CAR(BgL_pairz00_2538); 
if(
OUTPUT_PORTP(BgL_aux3029z00_3726))
{ /* Ieee/output.scm 378 */
BgL_aux1969z00_1205 = BgL_aux3029z00_3726; }  else 
{ 
obj_t BgL_auxz00_4466;
BgL_auxz00_4466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14511)), BGl_string3319z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_aux3029z00_3726); 
FAILURE(BgL_auxz00_4466,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 378 */
obj_t BgL_pairz00_2539;
{ /* Ieee/output.scm 378 */
obj_t BgL_aux3031z00_3728;
BgL_aux3031z00_3728 = BgL_runner1970z00_1206; 
if(
PAIRP(BgL_aux3031z00_3728))
{ /* Ieee/output.scm 378 */
BgL_pairz00_2539 = BgL_aux3031z00_3728; }  else 
{ 
obj_t BgL_auxz00_4472;
BgL_auxz00_4472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14511)), BGl_string3319z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_aux3031z00_3728); 
FAILURE(BgL_auxz00_4472,BFALSE,BFALSE);} } 
BgL_runner1970z00_1206 = 
CDR(BgL_pairz00_2539); } 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1969z00_1205, BgL_runner1970z00_1206); } } 
FLUSH_OUTPUT_PORT(BgL_portz00_23); 
{ /* Ieee/output.scm 380 */
obj_t BgL_mz00_2541;
BgL_mz00_2541 = BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00; 
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_2541));} } 
}



/* _tprint */
obj_t BGl__tprintz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3570, obj_t BgL_portz00_3571, obj_t BgL_objz00_3572)
{ AN_OBJECT;
{ /* Ieee/output.scm 376 */
{ /* Ieee/output.scm 380 */
obj_t BgL_auxz00_4481;
if(
OUTPUT_PORTP(BgL_portz00_3571))
{ /* Ieee/output.scm 380 */
BgL_auxz00_4481 = BgL_portz00_3571
; }  else 
{ 
obj_t BgL_auxz00_4484;
BgL_auxz00_4484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14593)), BGl_string3345z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3571); 
FAILURE(BgL_auxz00_4484,BFALSE,BFALSE);} 
return 
BGl_tprintz00zz__r4_output_6_10_3z00(BgL_auxz00_4481, BgL_objz00_3572);} } 
}



/* fprint */
BGL_EXPORTED_DEF obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_25, obj_t BgL_objz00_26)
{ AN_OBJECT;
{ /* Ieee/output.scm 385 */
{ 
obj_t BgL_lz00_1209;obj_t BgL_resz00_1210;
BgL_lz00_1209 = BgL_objz00_26; 
BgL_resz00_1210 = BNIL; 
BgL_zc3anonymousza31971ze3z83_1211:
if(
NULLP(BgL_lz00_1209))
{ /* Ieee/output.scm 388 */
bgl_display_char(((unsigned char)'\n'), BgL_portz00_25); 
return BgL_resz00_1210;}  else 
{ /* Ieee/output.scm 392 */
obj_t BgL_vz00_1213;
{ /* Ieee/output.scm 392 */
obj_t BgL_pairz00_2543;
if(
PAIRP(BgL_lz00_1209))
{ /* Ieee/output.scm 392 */
BgL_pairz00_2543 = BgL_lz00_1209; }  else 
{ 
obj_t BgL_auxz00_4494;
BgL_auxz00_4494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14982)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1209); 
FAILURE(BgL_auxz00_4494,BFALSE,BFALSE);} 
BgL_vz00_1213 = 
CAR(BgL_pairz00_2543); } 
bgl_display_obj(
CAR(BgL_lz00_1209), BgL_portz00_25); 
{ 
obj_t BgL_resz00_4503;obj_t BgL_lz00_4501;
BgL_lz00_4501 = 
CDR(BgL_lz00_1209); 
BgL_resz00_4503 = BgL_vz00_1213; 
BgL_resz00_1210 = BgL_resz00_4503; 
BgL_lz00_1209 = BgL_lz00_4501; 
goto BgL_zc3anonymousza31971ze3z83_1211;} } } } 
}



/* _fprint */
obj_t BGl__fprintz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3573, obj_t BgL_portz00_3574, obj_t BgL_objz00_3575)
{ AN_OBJECT;
{ /* Ieee/output.scm 385 */
{ /* Ieee/output.scm 388 */
obj_t BgL_auxz00_4504;
if(
OUTPUT_PORTP(BgL_portz00_3574))
{ /* Ieee/output.scm 388 */
BgL_auxz00_4504 = BgL_portz00_3574
; }  else 
{ 
obj_t BgL_auxz00_4507;
BgL_auxz00_4507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)14893)), BGl_string3346z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3574); 
FAILURE(BgL_auxz00_4507,BFALSE,BFALSE);} 
return 
BGl_fprintz00zz__r4_output_6_10_3z00(BgL_auxz00_4504, BgL_objz00_3575);} } 
}



/* xprintf */
obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t BgL_procnamez00_27, obj_t BgL_pz00_28, obj_t BgL_fmtz00_29, obj_t BgL_objsz00_30)
{ AN_OBJECT;
{ /* Ieee/output.scm 399 */
{ /* Ieee/output.scm 400 */
long BgL_lenz00_1217;
BgL_lenz00_1217 = 
STRING_LENGTH(BgL_fmtz00_29); 
{ 
obj_t BgL_iz00_1219;obj_t BgL_osz00_1220;
BgL_iz00_1219 = 
BINT(((long)0)); 
BgL_osz00_1220 = BgL_objsz00_30; 
BgL_zc3anonymousza31975ze3z83_1221:
{ 
obj_t BgL_iz00_1274;obj_t BgL_numz00_1275;long BgL_mincolz00_1276;unsigned char BgL_paddingz00_1277;long BgL_iz00_1289;obj_t BgL_numz00_1290;obj_t BgL_pz00_1291;unsigned char BgL_fz00_1308;long BgL_iz00_1309;bool_t BgL_altzf3zf3_1310;
{ /* Ieee/output.scm 520 */
bool_t BgL_testz00_4513;
{ /* Ieee/output.scm 520 */
long BgL_n1z00_2547;
{ /* Ieee/output.scm 520 */
obj_t BgL_auxz00_4514;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 520 */
BgL_auxz00_4514 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4517;
BgL_auxz00_4517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18582)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4517,BFALSE,BFALSE);} 
BgL_n1z00_2547 = 
(long)CINT(BgL_auxz00_4514); } 
BgL_testz00_4513 = 
(BgL_n1z00_2547<BgL_lenz00_1217); } 
if(BgL_testz00_4513)
{ /* Ieee/output.scm 521 */
unsigned char BgL_cz00_1229;
{ /* Ieee/output.scm 521 */
long BgL_kz00_2550;
{ /* Ieee/output.scm 521 */
obj_t BgL_auxz00_4523;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 521 */
BgL_auxz00_4523 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4526;
BgL_auxz00_4526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18620)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4526,BFALSE,BFALSE);} 
BgL_kz00_2550 = 
(long)CINT(BgL_auxz00_4523); } 
{ /* Ieee/output.scm 521 */
long BgL_l2941z00_3638;
BgL_l2941z00_3638 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_kz00_2550, BgL_l2941z00_3638))
{ /* Ieee/output.scm 521 */
BgL_cz00_1229 = 
STRING_REF(BgL_fmtz00_29, BgL_kz00_2550); }  else 
{ 
obj_t BgL_auxz00_4535;
BgL_auxz00_4535 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18604)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_kz00_2550), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_4535,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1229==((unsigned char)'~')))
{ /* Ieee/output.scm 524 */
bool_t BgL_testz00_4542;
{ /* Ieee/output.scm 524 */
long BgL_n1z00_2555;
{ /* Ieee/output.scm 524 */
obj_t BgL_auxz00_4543;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 524 */
BgL_auxz00_4543 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4546;
BgL_auxz00_4546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18673)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4546,BFALSE,BFALSE);} 
BgL_n1z00_2555 = 
(long)CINT(BgL_auxz00_4543); } 
BgL_testz00_4542 = 
(BgL_n1z00_2555==
(BgL_lenz00_1217-((long)1))); } 
if(BgL_testz00_4542)
{ /* Ieee/output.scm 525 */
obj_t BgL_arg1980z00_1233;
{ /* Ieee/output.scm 527 */
long BgL_auxz00_4553;
{ /* Ieee/output.scm 527 */
obj_t BgL_auxz00_4554;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 527 */
BgL_auxz00_4554 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4557;
BgL_auxz00_4557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18750)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4557,BFALSE,BFALSE);} 
BgL_auxz00_4553 = 
(long)CINT(BgL_auxz00_4554); } 
BgL_arg1980z00_1233 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_fmtz00_29, BgL_auxz00_4553, BgL_lenz00_1217); } 
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3360z00zz__r4_output_6_10_3z00, BgL_arg1980z00_1233);}  else 
{ /* Ieee/output.scm 528 */
bool_t BgL_testz00_4564;
{ /* Ieee/output.scm 528 */
unsigned char BgL_auxz00_4565;
{ /* Ieee/output.scm 528 */
long BgL_i2944z00_3641;
{ /* Ieee/output.scm 528 */
long BgL_za71za7_2557;
{ /* Ieee/output.scm 528 */
obj_t BgL_auxz00_4566;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 528 */
BgL_auxz00_4566 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4569;
BgL_auxz00_4569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18812)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4569,BFALSE,BFALSE);} 
BgL_za71za7_2557 = 
(long)CINT(BgL_auxz00_4566); } 
BgL_i2944z00_3641 = 
(BgL_za71za7_2557+((long)1)); } 
{ /* Ieee/output.scm 528 */
long BgL_l2945z00_3642;
BgL_l2945z00_3642 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_i2944z00_3641, BgL_l2945z00_3642))
{ /* Ieee/output.scm 528 */
BgL_auxz00_4565 = 
STRING_REF(BgL_fmtz00_29, BgL_i2944z00_3641)
; }  else 
{ 
obj_t BgL_auxz00_4579;
BgL_auxz00_4579 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18796)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_i2944z00_3641), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_4579,BFALSE,BFALSE);} } } 
BgL_testz00_4564 = 
(((unsigned char)':')==BgL_auxz00_4565); } 
if(BgL_testz00_4564)
{ /* Ieee/output.scm 529 */
bool_t BgL_testz00_4585;
{ /* Ieee/output.scm 529 */
long BgL_n1z00_2565;
{ /* Ieee/output.scm 529 */
obj_t BgL_auxz00_4586;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 529 */
BgL_auxz00_4586 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4589;
BgL_auxz00_4589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18836)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4589,BFALSE,BFALSE);} 
BgL_n1z00_2565 = 
(long)CINT(BgL_auxz00_4586); } 
BgL_testz00_4585 = 
(BgL_n1z00_2565==
(BgL_lenz00_1217-((long)2))); } 
if(BgL_testz00_4585)
{ /* Ieee/output.scm 530 */
obj_t BgL_arg1984z00_1237;
{ /* Ieee/output.scm 532 */
long BgL_auxz00_4596;
{ /* Ieee/output.scm 532 */
obj_t BgL_auxz00_4597;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 532 */
BgL_auxz00_4597 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4600;
BgL_auxz00_4600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18911)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4600,BFALSE,BFALSE);} 
BgL_auxz00_4596 = 
(long)CINT(BgL_auxz00_4597); } 
BgL_arg1984z00_1237 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_fmtz00_29, BgL_auxz00_4596, BgL_lenz00_1217); } 
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3360z00zz__r4_output_6_10_3z00, BgL_arg1984z00_1237);}  else 
{ /* Ieee/output.scm 533 */
unsigned char BgL_arg1985z00_1238;long BgL_arg1986z00_1239;
{ /* Ieee/output.scm 533 */
long BgL_i2948z00_3645;
{ /* Ieee/output.scm 533 */
long BgL_za71za7_2567;
{ /* Ieee/output.scm 533 */
obj_t BgL_auxz00_4607;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 533 */
BgL_auxz00_4607 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4610;
BgL_auxz00_4610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18969)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4610,BFALSE,BFALSE);} 
BgL_za71za7_2567 = 
(long)CINT(BgL_auxz00_4607); } 
BgL_i2948z00_3645 = 
(BgL_za71za7_2567+((long)2)); } 
{ /* Ieee/output.scm 533 */
long BgL_l2949z00_3646;
BgL_l2949z00_3646 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_i2948z00_3645, BgL_l2949z00_3646))
{ /* Ieee/output.scm 533 */
BgL_arg1985z00_1238 = 
STRING_REF(BgL_fmtz00_29, BgL_i2948z00_3645); }  else 
{ 
obj_t BgL_auxz00_4620;
BgL_auxz00_4620 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18953)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_i2948z00_3645), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_4620,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 534 */
long BgL_za71za7_2571;
{ /* Ieee/output.scm 534 */
obj_t BgL_auxz00_4625;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 534 */
BgL_auxz00_4625 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_4628;
BgL_auxz00_4628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18985)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_4628,BFALSE,BFALSE);} 
BgL_za71za7_2571 = 
(long)CINT(BgL_auxz00_4625); } 
BgL_arg1986z00_1239 = 
(BgL_za71za7_2571+((long)2)); } 
BgL_fz00_1308 = BgL_arg1985z00_1238; 
BgL_iz00_1309 = BgL_arg1986z00_1239; 
BgL_altzf3zf3_1310 = ((bool_t)1); 
BgL_zc3anonymousza32037ze3z83_1311:
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4634;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'a'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4634 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4634 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'A')))
; } 
if(BgL_testz00_4634)
{ /* Ieee/output.scm 466 */
if(BgL_altzf3zf3_1310)
{ /* Ieee/output.scm 469 */
obj_t BgL_arg2039z00_1314;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 469 */
BgL_arg2039z00_1314 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 469 */
obj_t BgL_pairz00_2641;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 469 */
BgL_pairz00_2641 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4649;
BgL_auxz00_4649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17304)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4649,BFALSE,BFALSE);} 
BgL_arg2039z00_1314 = 
CAR(BgL_pairz00_2641); } 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg2039z00_1314, BgL_pz00_28); }  else 
{ /* Ieee/output.scm 470 */
obj_t BgL_arg2040z00_1315;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 470 */
BgL_arg2040z00_1315 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 470 */
obj_t BgL_pairz00_2646;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 470 */
BgL_pairz00_2646 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4661;
BgL_auxz00_4661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17334)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4661,BFALSE,BFALSE);} 
BgL_arg2040z00_1315 = 
CAR(BgL_pairz00_2646); } 
bgl_display_obj(BgL_arg2040z00_1315, BgL_pz00_28); } 
{ /* Ieee/output.scm 471 */
long BgL_arg2041z00_1316;obj_t BgL_arg2042z00_1317;
BgL_arg2041z00_1316 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 471 */
obj_t BgL_pairz00_2649;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 471 */
BgL_pairz00_2649 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4670;
BgL_auxz00_4670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17373)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4670,BFALSE,BFALSE);} 
BgL_arg2042z00_1317 = 
CDR(BgL_pairz00_2649); } 
{ 
obj_t BgL_osz00_4677;obj_t BgL_iz00_4675;
BgL_iz00_4675 = 
BINT(BgL_arg2041z00_1316); 
BgL_osz00_4677 = BgL_arg2042z00_1317; 
BgL_osz00_1220 = BgL_osz00_4677; 
BgL_iz00_1219 = BgL_iz00_4675; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4678;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'s'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4678 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4678 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'S')))
; } 
if(BgL_testz00_4678)
{ /* Ieee/output.scm 466 */
if(BgL_altzf3zf3_1310)
{ /* Ieee/output.scm 474 */
obj_t BgL_arg2044z00_1319;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 474 */
BgL_arg2044z00_1319 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 474 */
obj_t BgL_pairz00_2658;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 474 */
BgL_pairz00_2658 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4693;
BgL_auxz00_4693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17429)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4693,BFALSE,BFALSE);} 
BgL_arg2044z00_1319 = 
CAR(BgL_pairz00_2658); } 
BGl_writezd2circlezd2zz__pp_circlez00(BgL_arg2044z00_1319, BgL_pz00_28); }  else 
{ /* Ieee/output.scm 475 */
obj_t BgL_arg2045z00_1320;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 475 */
BgL_arg2045z00_1320 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 475 */
obj_t BgL_pairz00_2663;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 475 */
BgL_pairz00_2663 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4705;
BgL_auxz00_4705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17457)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4705,BFALSE,BFALSE);} 
BgL_arg2045z00_1320 = 
CAR(BgL_pairz00_2663); } 
{ /* Ieee/output.scm 475 */
obj_t BgL_list2046z00_1321;
BgL_list2046z00_1321 = 
MAKE_PAIR(BgL_pz00_28, BNIL); 
BGl_writez00zz__r4_output_6_10_3z00(BgL_arg2045z00_1320, BgL_list2046z00_1321); } } 
{ /* Ieee/output.scm 476 */
long BgL_arg2047z00_1322;obj_t BgL_arg2048z00_1323;
BgL_arg2047z00_1322 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 476 */
obj_t BgL_pairz00_2666;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 476 */
BgL_pairz00_2666 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4715;
BgL_auxz00_4715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17496)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4715,BFALSE,BFALSE);} 
BgL_arg2048z00_1323 = 
CDR(BgL_pairz00_2666); } 
{ 
obj_t BgL_osz00_4722;obj_t BgL_iz00_4720;
BgL_iz00_4720 = 
BINT(BgL_arg2047z00_1322); 
BgL_osz00_4722 = BgL_arg2048z00_1323; 
BgL_osz00_1220 = BgL_osz00_4722; 
BgL_iz00_1219 = BgL_iz00_4720; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4723;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'v'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4723 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4723 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'V')))
; } 
if(BgL_testz00_4723)
{ /* Ieee/output.scm 466 */
if(BgL_altzf3zf3_1310)
{ /* Ieee/output.scm 479 */
obj_t BgL_arg2051z00_1325;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 479 */
BgL_arg2051z00_1325 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 479 */
obj_t BgL_pairz00_2675;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 479 */
BgL_pairz00_2675 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4738;
BgL_auxz00_4738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17554)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4738,BFALSE,BFALSE);} 
BgL_arg2051z00_1325 = 
CAR(BgL_pairz00_2675); } 
BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg2051z00_1325, BgL_pz00_28); }  else 
{ /* Ieee/output.scm 480 */
obj_t BgL_arg2052z00_1326;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 480 */
BgL_arg2052z00_1326 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 480 */
obj_t BgL_pairz00_2680;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 480 */
BgL_pairz00_2680 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4750;
BgL_auxz00_4750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17584)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4750,BFALSE,BFALSE);} 
BgL_arg2052z00_1326 = 
CAR(BgL_pairz00_2680); } 
bgl_display_obj(BgL_arg2052z00_1326, BgL_pz00_28); } 
bgl_display_char(((unsigned char)'\n'), BgL_pz00_28); 
{ /* Ieee/output.scm 482 */
long BgL_arg2053z00_1327;obj_t BgL_arg2054z00_1328;
BgL_arg2053z00_1327 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 482 */
obj_t BgL_pairz00_2684;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 482 */
BgL_pairz00_2684 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4760;
BgL_auxz00_4760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17637)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4760,BFALSE,BFALSE);} 
BgL_arg2054z00_1328 = 
CDR(BgL_pairz00_2684); } 
{ 
obj_t BgL_osz00_4767;obj_t BgL_iz00_4765;
BgL_iz00_4765 = 
BINT(BgL_arg2053z00_1327); 
BgL_osz00_4767 = BgL_arg2054z00_1328; 
BgL_osz00_1220 = BgL_osz00_4767; 
BgL_iz00_1219 = BgL_iz00_4765; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4768;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'c'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4768 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4768 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'C')))
; } 
if(BgL_testz00_4768)
{ /* Ieee/output.scm 484 */
obj_t BgL_oz00_1330;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 484 */
BgL_oz00_1330 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 484 */
obj_t BgL_pairz00_2693;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 484 */
BgL_pairz00_2693 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4782;
BgL_auxz00_4782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17673)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4782,BFALSE,BFALSE);} 
BgL_oz00_1330 = 
CAR(BgL_pairz00_2693); } 
if(
CHARP(BgL_oz00_1330))
{ /* Ieee/output.scm 485 */
{ /* Ieee/output.scm 488 */
unsigned char BgL_auxz00_4789;
BgL_auxz00_4789 = 
CCHAR(BgL_oz00_1330); 
bgl_display_char(BgL_auxz00_4789, BgL_pz00_28); } 
{ /* Ieee/output.scm 489 */
long BgL_arg2057z00_1332;obj_t BgL_arg2058z00_1333;
BgL_arg2057z00_1332 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 489 */
obj_t BgL_pairz00_2699;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 489 */
BgL_pairz00_2699 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4795;
BgL_auxz00_4795 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17819)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4795,BFALSE,BFALSE);} 
BgL_arg2058z00_1333 = 
CDR(BgL_pairz00_2699); } 
{ 
obj_t BgL_osz00_4802;obj_t BgL_iz00_4800;
BgL_iz00_4800 = 
BINT(BgL_arg2057z00_1332); 
BgL_osz00_4802 = BgL_arg2058z00_1333; 
BgL_osz00_1220 = BgL_osz00_4802; 
BgL_iz00_1219 = BgL_iz00_4800; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 485 */
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3349z00zz__r4_output_6_10_3z00, BgL_oz00_1330);} }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4804;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'d'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4804 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4804 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'D')))
; } 
if(BgL_testz00_4804)
{ /* Ieee/output.scm 466 */
{ /* Ieee/output.scm 491 */
obj_t BgL_arg2061z00_1336;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 491 */
BgL_arg2061z00_1336 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 491 */
obj_t BgL_pairz00_2708;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 491 */
BgL_pairz00_2708 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4818;
BgL_auxz00_4818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17865)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4818,BFALSE,BFALSE);} 
BgL_arg2061z00_1336 = 
CAR(BgL_pairz00_2708); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2061z00_1336))
{ /* Ieee/output.scm 491 */
char * BgL_arg2000z00_2712;
BgL_arg2000z00_2712 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2061z00_1336, 
BINT(((long)10))); 
bgl_display_obj(
string_to_bstring(BgL_arg2000z00_2712), BgL_pz00_28); }  else 
{ /* Ieee/output.scm 491 */
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3350z00zz__r4_output_6_10_3z00, BgL_arg2061z00_1336); } } 
{ /* Ieee/output.scm 492 */
long BgL_arg2062z00_1337;obj_t BgL_arg2063z00_1338;
BgL_arg2062z00_1337 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 492 */
obj_t BgL_pairz00_2715;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 492 */
BgL_pairz00_2715 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4833;
BgL_auxz00_4833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17901)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4833,BFALSE,BFALSE);} 
BgL_arg2063z00_1338 = 
CDR(BgL_pairz00_2715); } 
{ 
obj_t BgL_osz00_4840;obj_t BgL_iz00_4838;
BgL_iz00_4838 = 
BINT(BgL_arg2062z00_1337); 
BgL_osz00_4840 = BgL_arg2063z00_1338; 
BgL_osz00_1220 = BgL_osz00_4840; 
BgL_iz00_1219 = BgL_iz00_4838; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4841;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'x'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4841 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4841 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'X')))
; } 
if(BgL_testz00_4841)
{ /* Ieee/output.scm 466 */
{ /* Ieee/output.scm 494 */
obj_t BgL_arg2066z00_1341;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 494 */
BgL_arg2066z00_1341 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 494 */
obj_t BgL_pairz00_2724;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 494 */
BgL_pairz00_2724 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4855;
BgL_auxz00_4855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17944)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4855,BFALSE,BFALSE);} 
BgL_arg2066z00_1341 = 
CAR(BgL_pairz00_2724); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2066z00_1341))
{ /* Ieee/output.scm 494 */
char * BgL_arg2000z00_2728;
BgL_arg2000z00_2728 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2066z00_1341, 
BINT(((long)16))); 
bgl_display_obj(
string_to_bstring(BgL_arg2000z00_2728), BgL_pz00_28); }  else 
{ /* Ieee/output.scm 494 */
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3350z00zz__r4_output_6_10_3z00, BgL_arg2066z00_1341); } } 
{ /* Ieee/output.scm 495 */
long BgL_arg2067z00_1342;obj_t BgL_arg2068z00_1343;
BgL_arg2067z00_1342 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 495 */
obj_t BgL_pairz00_2731;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 495 */
BgL_pairz00_2731 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4870;
BgL_auxz00_4870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17980)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4870,BFALSE,BFALSE);} 
BgL_arg2068z00_1343 = 
CDR(BgL_pairz00_2731); } 
{ 
obj_t BgL_osz00_4877;obj_t BgL_iz00_4875;
BgL_iz00_4875 = 
BINT(BgL_arg2067z00_1342); 
BgL_osz00_4877 = BgL_arg2068z00_1343; 
BgL_osz00_1220 = BgL_osz00_4877; 
BgL_iz00_1219 = BgL_iz00_4875; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4878;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'o'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4878 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4878 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'O')))
; } 
if(BgL_testz00_4878)
{ /* Ieee/output.scm 466 */
{ /* Ieee/output.scm 497 */
obj_t BgL_arg2072z00_1346;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 497 */
BgL_arg2072z00_1346 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 497 */
obj_t BgL_pairz00_2740;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 497 */
BgL_pairz00_2740 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4892;
BgL_auxz00_4892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18022)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4892,BFALSE,BFALSE);} 
BgL_arg2072z00_1346 = 
CAR(BgL_pairz00_2740); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2072z00_1346))
{ /* Ieee/output.scm 497 */
char * BgL_arg2000z00_2744;
BgL_arg2000z00_2744 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2072z00_1346, 
BINT(((long)8))); 
bgl_display_obj(
string_to_bstring(BgL_arg2000z00_2744), BgL_pz00_28); }  else 
{ /* Ieee/output.scm 497 */
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3350z00zz__r4_output_6_10_3z00, BgL_arg2072z00_1346); } } 
{ /* Ieee/output.scm 498 */
long BgL_arg2073z00_1347;obj_t BgL_arg2076z00_1348;
BgL_arg2073z00_1347 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 498 */
obj_t BgL_pairz00_2747;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 498 */
BgL_pairz00_2747 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4907;
BgL_auxz00_4907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18058)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4907,BFALSE,BFALSE);} 
BgL_arg2076z00_1348 = 
CDR(BgL_pairz00_2747); } 
{ 
obj_t BgL_osz00_4914;obj_t BgL_iz00_4912;
BgL_iz00_4912 = 
BINT(BgL_arg2073z00_1347); 
BgL_osz00_4914 = BgL_arg2076z00_1348; 
BgL_osz00_1220 = BgL_osz00_4914; 
BgL_iz00_1219 = BgL_iz00_4912; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4915;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'b'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4915 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4915 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'B')))
; } 
if(BgL_testz00_4915)
{ /* Ieee/output.scm 466 */
{ /* Ieee/output.scm 500 */
obj_t BgL_arg2079z00_1351;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 500 */
BgL_arg2079z00_1351 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 500 */
obj_t BgL_pairz00_2756;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 500 */
BgL_pairz00_2756 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4929;
BgL_auxz00_4929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18100)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4929,BFALSE,BFALSE);} 
BgL_arg2079z00_1351 = 
CAR(BgL_pairz00_2756); } 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg2079z00_1351))
{ /* Ieee/output.scm 500 */
char * BgL_arg2000z00_2760;
BgL_arg2000z00_2760 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2079z00_1351, 
BINT(((long)2))); 
bgl_display_obj(
string_to_bstring(BgL_arg2000z00_2760), BgL_pz00_28); }  else 
{ /* Ieee/output.scm 500 */
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3350z00zz__r4_output_6_10_3z00, BgL_arg2079z00_1351); } } 
{ /* Ieee/output.scm 501 */
long BgL_arg2080z00_1352;obj_t BgL_arg2081z00_1353;
BgL_arg2080z00_1352 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 501 */
obj_t BgL_pairz00_2763;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 501 */
BgL_pairz00_2763 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4944;
BgL_auxz00_4944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18136)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4944,BFALSE,BFALSE);} 
BgL_arg2081z00_1353 = 
CDR(BgL_pairz00_2763); } 
{ 
obj_t BgL_osz00_4951;obj_t BgL_iz00_4949;
BgL_iz00_4949 = 
BINT(BgL_arg2080z00_1352); 
BgL_osz00_4951 = BgL_arg2081z00_1353; 
BgL_osz00_1220 = BgL_osz00_4951; 
BgL_iz00_1219 = BgL_iz00_4949; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4952;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'%'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4952 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4952 = 
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'n')))
; } 
if(BgL_testz00_4952)
{ /* Ieee/output.scm 466 */
bgl_display_char(((unsigned char)'\n'), BgL_pz00_28); 
{ /* Ieee/output.scm 504 */
long BgL_arg2083z00_1355;
BgL_arg2083z00_1355 = 
(BgL_iz00_1309+((long)1)); 
{ 
obj_t BgL_iz00_4962;
BgL_iz00_4962 = 
BINT(BgL_arg2083z00_1355); 
BgL_iz00_1219 = BgL_iz00_4962; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'r'))))
{ /* Ieee/output.scm 466 */
bgl_display_char(((unsigned char)'\r'), BgL_pz00_28); 
{ /* Ieee/output.scm 507 */
long BgL_arg2085z00_1357;
BgL_arg2085z00_1357 = 
(BgL_iz00_1309+((long)1)); 
{ 
obj_t BgL_iz00_4970;
BgL_iz00_4970 = 
BINT(BgL_arg2085z00_1357); 
BgL_iz00_1219 = BgL_iz00_4970; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
bool_t BgL_testz00_4972;
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'l'))))
{ /* Ieee/output.scm 466 */
BgL_testz00_4972 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 466 */
BgL_testz00_4972 = 
(
BCHAR(BgL_fz00_1308)==BGl_symbol3351z00zz__r4_output_6_10_3z00)
; } 
if(BgL_testz00_4972)
{ /* Ieee/output.scm 466 */
{ /* Ieee/output.scm 509 */
obj_t BgL_arg2089z00_1359;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 509 */
BgL_arg2089z00_1359 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 509 */
obj_t BgL_pairz00_2785;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 509 */
BgL_pairz00_2785 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4985;
BgL_auxz00_4985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18298)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4985,BFALSE,BFALSE);} 
BgL_arg2089z00_1359 = 
CAR(BgL_pairz00_2785); } 
BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(BgL_arg2089z00_1359, BgL_pz00_28); } 
{ /* Ieee/output.scm 510 */
long BgL_arg2090z00_1360;obj_t BgL_arg2091z00_1361;
BgL_arg2090z00_1360 = 
(BgL_iz00_1309+((long)1)); 
{ /* Ieee/output.scm 510 */
obj_t BgL_pairz00_2788;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 510 */
BgL_pairz00_2788 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_4994;
BgL_auxz00_4994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18336)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_4994,BFALSE,BFALSE);} 
BgL_arg2091z00_1361 = 
CDR(BgL_pairz00_2788); } 
{ 
obj_t BgL_osz00_5001;obj_t BgL_iz00_4999;
BgL_iz00_4999 = 
BINT(BgL_arg2090z00_1360); 
BgL_osz00_5001 = BgL_arg2091z00_1361; 
BgL_osz00_1220 = BgL_osz00_5001; 
BgL_iz00_1219 = BgL_iz00_4999; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
if(
(
BCHAR(BgL_fz00_1308)==
BCHAR(((unsigned char)'~'))))
{ /* Ieee/output.scm 466 */
bgl_display_char(((unsigned char)'~'), BgL_pz00_28); 
{ /* Ieee/output.scm 513 */
long BgL_arg2093z00_1363;
BgL_arg2093z00_1363 = 
(BgL_iz00_1309+((long)1)); 
{ 
obj_t BgL_iz00_5008;
BgL_iz00_5008 = 
BINT(BgL_arg2093z00_1363); 
BgL_iz00_1219 = BgL_iz00_5008; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 466 */
if(
isdigit(BgL_fz00_1308))
{ /* Ieee/output.scm 516 */
obj_t BgL_niz00_1365;
{ /* Ieee/output.scm 516 */
obj_t BgL_arg2096z00_1367;
if(
NULLP(BgL_osz00_1220))
{ /* Ieee/output.scm 516 */
BgL_arg2096z00_1367 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3347z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308)); }  else 
{ /* Ieee/output.scm 516 */
obj_t BgL_pairz00_2800;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 516 */
BgL_pairz00_2800 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_5018;
BgL_auxz00_5018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18481)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_5018,BFALSE,BFALSE);} 
BgL_arg2096z00_1367 = 
CAR(BgL_pairz00_2800); } 
BgL_iz00_1289 = BgL_iz00_1309; 
BgL_numz00_1290 = BgL_arg2096z00_1367; 
BgL_pz00_1291 = BgL_pz00_28; 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_numz00_1290))
{ /* Ieee/output.scm 447 */
obj_t BgL_jz00_1294;
BgL_jz00_1294 = 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_fmtz00_29, BGl_string3354z00zz__r4_output_6_10_3z00, 
BINT(BgL_iz00_1289)); 
if(
CBOOL(BgL_jz00_1294))
{ /* Ieee/output.scm 451 */
bool_t BgL_testz00_5029;
{ /* Ieee/output.scm 451 */
unsigned char BgL_auxz00_5030;
{ /* Ieee/output.scm 451 */
long BgL_kz00_2620;
{ /* Ieee/output.scm 451 */
obj_t BgL_auxz00_5031;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 451 */
BgL_auxz00_5031 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5034;
BgL_auxz00_5034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16852)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5034,BFALSE,BFALSE);} 
BgL_kz00_2620 = 
(long)CINT(BgL_auxz00_5031); } 
{ /* Ieee/output.scm 451 */
long BgL_l2929z00_3626;
BgL_l2929z00_3626 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_kz00_2620, BgL_l2929z00_3626))
{ /* Ieee/output.scm 451 */
BgL_auxz00_5030 = 
STRING_REF(BgL_fmtz00_29, BgL_kz00_2620)
; }  else 
{ 
obj_t BgL_auxz00_5043;
BgL_auxz00_5043 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16836)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_kz00_2620), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_5043,BFALSE,BFALSE);} } } 
BgL_testz00_5029 = 
(BgL_auxz00_5030==((unsigned char)',')); } 
if(BgL_testz00_5029)
{ /* Ieee/output.scm 452 */
bool_t BgL_testz00_5049;
{ /* Ieee/output.scm 452 */
long BgL_n1z00_2625;
{ /* Ieee/output.scm 452 */
obj_t BgL_auxz00_5050;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 452 */
BgL_auxz00_5050 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5053;
BgL_auxz00_5053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16878)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5053,BFALSE,BFALSE);} 
BgL_n1z00_2625 = 
(long)CINT(BgL_auxz00_5050); } 
BgL_testz00_5049 = 
(BgL_n1z00_2625==
(BgL_lenz00_1217-((long)1))); } 
if(BgL_testz00_5049)
{ /* Ieee/output.scm 452 */
BgL_niz00_1365 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3353z00zz__r4_output_6_10_3z00, BgL_fmtz00_29); }  else 
{ /* Ieee/output.scm 454 */
long BgL_arg2023z00_1297;long BgL_arg2024z00_1298;unsigned char BgL_arg2025z00_1299;
{ /* Ieee/output.scm 454 */
long BgL_za71za7_2627;
{ /* Ieee/output.scm 454 */
obj_t BgL_auxz00_5061;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 454 */
BgL_auxz00_5061 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5064;
BgL_auxz00_5064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16961)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5064,BFALSE,BFALSE);} 
BgL_za71za7_2627 = 
(long)CINT(BgL_auxz00_5061); } 
BgL_arg2023z00_1297 = 
(BgL_za71za7_2627+((long)2)); } 
{ /* Ieee/output.scm 457 */
obj_t BgL_arg2027z00_1300;
{ /* Ieee/output.scm 457 */
long BgL_auxz00_5070;
{ /* Ieee/output.scm 457 */
obj_t BgL_auxz00_5071;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 457 */
BgL_auxz00_5071 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5074;
BgL_auxz00_5074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17011)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5074,BFALSE,BFALSE);} 
BgL_auxz00_5070 = 
(long)CINT(BgL_auxz00_5071); } 
BgL_arg2027z00_1300 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_fmtz00_29, BgL_iz00_1289, BgL_auxz00_5070); } 
BgL_arg2024z00_1298 = 
BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2027z00_1300, BNIL); } 
{ /* Ieee/output.scm 458 */
long BgL_i2932z00_3629;
{ /* Ieee/output.scm 458 */
long BgL_za71za7_2629;
{ /* Ieee/output.scm 458 */
obj_t BgL_auxz00_5081;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 458 */
BgL_auxz00_5081 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5084;
BgL_auxz00_5084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17054)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5084,BFALSE,BFALSE);} 
BgL_za71za7_2629 = 
(long)CINT(BgL_auxz00_5081); } 
BgL_i2932z00_3629 = 
(BgL_za71za7_2629+((long)1)); } 
{ /* Ieee/output.scm 458 */
long BgL_l2933z00_3630;
BgL_l2933z00_3630 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_i2932z00_3629, BgL_l2933z00_3630))
{ /* Ieee/output.scm 458 */
BgL_arg2025z00_1299 = 
STRING_REF(BgL_fmtz00_29, BgL_i2932z00_3629); }  else 
{ 
obj_t BgL_auxz00_5094;
BgL_auxz00_5094 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17038)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_i2932z00_3629), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_5094,BFALSE,BFALSE);} } } 
BgL_iz00_1274 = 
BINT(BgL_arg2023z00_1297); 
BgL_numz00_1275 = BgL_numz00_1290; 
BgL_mincolz00_1276 = BgL_arg2024z00_1298; 
BgL_paddingz00_1277 = BgL_arg2025z00_1299; 
BgL_zc3anonymousza32012ze3z83_1278:
{ /* Ieee/output.scm 426 */
bool_t BgL_testz00_5099;
{ /* Ieee/output.scm 426 */
long BgL_n1z00_2601;
{ /* Ieee/output.scm 426 */
obj_t BgL_auxz00_5100;
if(
INTEGERP(BgL_iz00_1274))
{ /* Ieee/output.scm 426 */
BgL_auxz00_5100 = BgL_iz00_1274
; }  else 
{ 
obj_t BgL_auxz00_5103;
BgL_auxz00_5103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16083)), BGl_string3358z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1274); 
FAILURE(BgL_auxz00_5103,BFALSE,BFALSE);} 
BgL_n1z00_2601 = 
(long)CINT(BgL_auxz00_5100); } 
BgL_testz00_5099 = 
(BgL_n1z00_2601==BgL_lenz00_1217); } 
if(BgL_testz00_5099)
{ /* Ieee/output.scm 426 */
BgL_niz00_1365 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3353z00zz__r4_output_6_10_3z00, BgL_fmtz00_29); }  else 
{ /* Ieee/output.scm 428 */
obj_t BgL_sz00_1280;
{ /* Ieee/output.scm 428 */
unsigned char BgL_aux1831z00_1287;
{ /* Ieee/output.scm 428 */
long BgL_kz00_2604;
{ /* Ieee/output.scm 428 */
obj_t BgL_auxz00_5110;
if(
INTEGERP(BgL_iz00_1274))
{ /* Ieee/output.scm 428 */
BgL_auxz00_5110 = BgL_iz00_1274
; }  else 
{ 
obj_t BgL_auxz00_5113;
BgL_auxz00_5113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16161)), BGl_string3358z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1274); 
FAILURE(BgL_auxz00_5113,BFALSE,BFALSE);} 
BgL_kz00_2604 = 
(long)CINT(BgL_auxz00_5110); } 
{ /* Ieee/output.scm 428 */
long BgL_l2937z00_3634;
BgL_l2937z00_3634 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_kz00_2604, BgL_l2937z00_3634))
{ /* Ieee/output.scm 428 */
BgL_aux1831z00_1287 = 
STRING_REF(BgL_fmtz00_29, BgL_kz00_2604); }  else 
{ 
obj_t BgL_auxz00_5122;
BgL_auxz00_5122 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16145)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_kz00_2604), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_5122,BFALSE,BFALSE);} } } 
switch( BgL_aux1831z00_1287) { case ((unsigned char)'d') : 
case ((unsigned char)'D') : 

BgL_sz00_1280 = 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1275, 
BINT(((long)10)))); break;case ((unsigned char)'x') : 
case ((unsigned char)'X') : 

BgL_sz00_1280 = 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1275, 
BINT(((long)16)))); break;case ((unsigned char)'o') : 
case ((unsigned char)'O') : 

BgL_sz00_1280 = 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1275, 
BINT(((long)8)))); break;case ((unsigned char)'b') : 
case ((unsigned char)'B') : 

BgL_sz00_1280 = 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1275, 
BINT(((long)2)))); break;
default: 
BgL_sz00_1280 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3353z00zz__r4_output_6_10_3z00, BgL_fmtz00_29); } } 
{ /* Ieee/output.scm 428 */
long BgL_lz00_1281;
{ /* Ieee/output.scm 439 */
obj_t BgL_stringz00_2605;
if(
STRINGP(BgL_sz00_1280))
{ /* Ieee/output.scm 439 */
BgL_stringz00_2605 = BgL_sz00_1280; }  else 
{ 
obj_t BgL_auxz00_5143;
BgL_auxz00_5143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16447)), BGl_string3358z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_sz00_1280); 
FAILURE(BgL_auxz00_5143,BFALSE,BFALSE);} 
BgL_lz00_1281 = 
STRING_LENGTH(BgL_stringz00_2605); } 
{ /* Ieee/output.scm 439 */

if(
(BgL_lz00_1281<BgL_mincolz00_1276))
{ /* Ieee/output.scm 441 */
obj_t BgL_arg2015z00_1283;
{ /* Ieee/output.scm 441 */
long BgL_arg2016z00_1284;
BgL_arg2016z00_1284 = 
(BgL_mincolz00_1276-BgL_lz00_1281); 
{ /* Ieee/output.scm 441 */
obj_t BgL_list2017z00_1285;
BgL_list2017z00_1285 = 
MAKE_PAIR(
BCHAR(BgL_paddingz00_1277), BNIL); 
{ /* Ieee/output.scm 441 */
obj_t BgL_res2910z00_2616;
{ /* Ieee/output.scm 441 */
obj_t BgL_arg2465z00_2613;
BgL_arg2465z00_2613 = 
CAR(BgL_list2017z00_1285); 
{ /* Ieee/output.scm 441 */
unsigned char BgL_auxz00_5154;
{ /* Ieee/output.scm 441 */
obj_t BgL_auxz00_5155;
if(
CHARP(BgL_arg2465z00_2613))
{ /* Ieee/output.scm 441 */
BgL_auxz00_5155 = BgL_arg2465z00_2613
; }  else 
{ 
obj_t BgL_auxz00_5158;
BgL_auxz00_5158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16510)), BGl_string3358z00zz__r4_output_6_10_3z00, BGl_string3331z00zz__r4_output_6_10_3z00, BgL_arg2465z00_2613); 
FAILURE(BgL_auxz00_5158,BFALSE,BFALSE);} 
BgL_auxz00_5154 = 
CCHAR(BgL_auxz00_5155); } 
BgL_res2910z00_2616 = 
make_string(BgL_arg2016z00_1284, BgL_auxz00_5154); } } 
BgL_arg2015z00_1283 = BgL_res2910z00_2616; } } } 
bgl_display_obj(BgL_arg2015z00_1283, BgL_pz00_28); }  else 
{ /* Ieee/output.scm 440 */BFALSE; } 
bgl_display_obj(BgL_sz00_1280, BgL_pz00_28); 
{ /* Ieee/output.scm 443 */
long BgL_za71za7_2617;
{ /* Ieee/output.scm 443 */
obj_t BgL_auxz00_5166;
if(
INTEGERP(BgL_iz00_1274))
{ /* Ieee/output.scm 443 */
BgL_auxz00_5166 = BgL_iz00_1274
; }  else 
{ 
obj_t BgL_auxz00_5169;
BgL_auxz00_5169 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)16575)), BGl_string3358z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1274); 
FAILURE(BgL_auxz00_5169,BFALSE,BFALSE);} 
BgL_za71za7_2617 = 
(long)CINT(BgL_auxz00_5166); } 
BgL_niz00_1365 = 
BINT(
(BgL_za71za7_2617+((long)1))); } } } } } } }  else 
{ /* Ieee/output.scm 463 */
long BgL_arg2031z00_1304;
{ /* Ieee/output.scm 463 */
obj_t BgL_arg2033z00_1305;
{ /* Ieee/output.scm 463 */
long BgL_auxz00_5177;
{ /* Ieee/output.scm 463 */
obj_t BgL_auxz00_5178;
if(
INTEGERP(BgL_jz00_1294))
{ /* Ieee/output.scm 463 */
BgL_auxz00_5178 = BgL_jz00_1294
; }  else 
{ 
obj_t BgL_auxz00_5181;
BgL_auxz00_5181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)17163)), BGl_string3355z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_jz00_1294); 
FAILURE(BgL_auxz00_5181,BFALSE,BFALSE);} 
BgL_auxz00_5177 = 
(long)CINT(BgL_auxz00_5178); } 
BgL_arg2033z00_1305 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_fmtz00_29, BgL_iz00_1289, BgL_auxz00_5177); } 
BgL_arg2031z00_1304 = 
BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(BgL_arg2033z00_1305, BNIL); } 
{ 
unsigned char BgL_paddingz00_5191;long BgL_mincolz00_5190;obj_t BgL_numz00_5189;obj_t BgL_iz00_5188;
BgL_iz00_5188 = BgL_jz00_1294; 
BgL_numz00_5189 = BgL_numz00_1290; 
BgL_mincolz00_5190 = BgL_arg2031z00_1304; 
BgL_paddingz00_5191 = ((unsigned char)' '); 
BgL_paddingz00_1277 = BgL_paddingz00_5191; 
BgL_mincolz00_1276 = BgL_mincolz00_5190; 
BgL_numz00_1275 = BgL_numz00_5189; 
BgL_iz00_1274 = BgL_iz00_5188; 
goto BgL_zc3anonymousza32012ze3z83_1278;} } }  else 
{ /* Ieee/output.scm 449 */
BgL_niz00_1365 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3353z00zz__r4_output_6_10_3z00, BgL_fmtz00_29); } }  else 
{ /* Ieee/output.scm 445 */
BgL_niz00_1365 = 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3350z00zz__r4_output_6_10_3z00, BgL_numz00_1290); } } 
{ /* Ieee/output.scm 517 */
obj_t BgL_arg2095z00_1366;
{ /* Ieee/output.scm 517 */
obj_t BgL_pairz00_2801;
if(
PAIRP(BgL_osz00_1220))
{ /* Ieee/output.scm 517 */
BgL_pairz00_2801 = BgL_osz00_1220; }  else 
{ 
obj_t BgL_auxz00_5196;
BgL_auxz00_5196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)18521)), BGl_string3348z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_osz00_1220); 
FAILURE(BgL_auxz00_5196,BFALSE,BFALSE);} 
BgL_arg2095z00_1366 = 
CDR(BgL_pairz00_2801); } 
{ 
obj_t BgL_osz00_5202;obj_t BgL_iz00_5201;
BgL_iz00_5201 = BgL_niz00_1365; 
BgL_osz00_5202 = BgL_arg2095z00_1366; 
BgL_osz00_1220 = BgL_osz00_5202; 
BgL_iz00_1219 = BgL_iz00_5201; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } }  else 
{ /* Ieee/output.scm 515 */
return 
BGl_errorz00zz__errorz00(BgL_procnamez00_27, BGl_string3353z00zz__r4_output_6_10_3z00, 
BCHAR(BgL_fz00_1308));} } } } } } } } } } } } } } } }  else 
{ /* Ieee/output.scm 537 */
unsigned char BgL_arg1989z00_1242;long BgL_arg1990z00_1243;
{ /* Ieee/output.scm 537 */
long BgL_i2952z00_3649;
{ /* Ieee/output.scm 537 */
long BgL_za71za7_2573;
{ /* Ieee/output.scm 537 */
obj_t BgL_auxz00_5205;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 537 */
BgL_auxz00_5205 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_5208;
BgL_auxz00_5208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19052)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_5208,BFALSE,BFALSE);} 
BgL_za71za7_2573 = 
(long)CINT(BgL_auxz00_5205); } 
BgL_i2952z00_3649 = 
(BgL_za71za7_2573+((long)1)); } 
{ /* Ieee/output.scm 537 */
long BgL_l2953z00_3650;
BgL_l2953z00_3650 = 
STRING_LENGTH(BgL_fmtz00_29); 
if(
BOUND_CHECK(BgL_i2952z00_3649, BgL_l2953z00_3650))
{ /* Ieee/output.scm 537 */
BgL_arg1989z00_1242 = 
STRING_REF(BgL_fmtz00_29, BgL_i2952z00_3649); }  else 
{ 
obj_t BgL_auxz00_5218;
BgL_auxz00_5218 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19036)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_i2952z00_3649), BgL_fmtz00_29); 
FAILURE(BgL_auxz00_5218,BFALSE,BFALSE);} } } 
{ /* Ieee/output.scm 538 */
long BgL_za71za7_2577;
{ /* Ieee/output.scm 538 */
obj_t BgL_auxz00_5223;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 538 */
BgL_auxz00_5223 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_5226;
BgL_auxz00_5226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19071)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_5226,BFALSE,BFALSE);} 
BgL_za71za7_2577 = 
(long)CINT(BgL_auxz00_5223); } 
BgL_arg1990z00_1243 = 
(BgL_za71za7_2577+((long)1)); } 
{ 
bool_t BgL_altzf3zf3_5234;long BgL_iz00_5233;unsigned char BgL_fz00_5232;
BgL_fz00_5232 = BgL_arg1989z00_1242; 
BgL_iz00_5233 = BgL_arg1990z00_1243; 
BgL_altzf3zf3_5234 = ((bool_t)0); 
BgL_altzf3zf3_1310 = BgL_altzf3zf3_5234; 
BgL_iz00_1309 = BgL_iz00_5233; 
BgL_fz00_1308 = BgL_fz00_5232; 
goto BgL_zc3anonymousza32037ze3z83_1311;} } } }  else 
{ /* Ieee/output.scm 522 */
bgl_display_char(BgL_cz00_1229, BgL_pz00_28); 
{ /* Ieee/output.scm 542 */
long BgL_arg1995z00_1248;
{ /* Ieee/output.scm 542 */
long BgL_za71za7_2581;
{ /* Ieee/output.scm 542 */
obj_t BgL_auxz00_5236;
if(
INTEGERP(BgL_iz00_1219))
{ /* Ieee/output.scm 542 */
BgL_auxz00_5236 = BgL_iz00_1219
; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19149)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_iz00_1219); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} 
BgL_za71za7_2581 = 
(long)CINT(BgL_auxz00_5236); } 
BgL_arg1995z00_1248 = 
(BgL_za71za7_2581+((long)1)); } 
{ 
obj_t BgL_iz00_5245;
BgL_iz00_5245 = 
BINT(BgL_arg1995z00_1248); 
BgL_iz00_1219 = BgL_iz00_5245; 
goto BgL_zc3anonymousza31975ze3z83_1221;} } } }  else 
{ /* Ieee/output.scm 520 */
return BFALSE;} } } } } } 
}



/* print-flat-list */
obj_t BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(obj_t BgL_lz00_1258, obj_t BgL_pz00_1259)
{ AN_OBJECT;
{ /* Ieee/output.scm 424 */
BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00:
if(
PAIRP(BgL_lz00_1258))
{ 
obj_t BgL_lz00_1263;
BgL_lz00_1263 = BgL_lz00_1258; 
BgL_zc3anonymousza32003ze3z83_1264:
{ /* Ieee/output.scm 415 */
obj_t BgL_arg2004z00_1265;
{ /* Ieee/output.scm 415 */
obj_t BgL_pairz00_2589;
if(
PAIRP(BgL_lz00_1263))
{ /* Ieee/output.scm 415 */
BgL_pairz00_2589 = BgL_lz00_1263; }  else 
{ 
obj_t BgL_auxz00_5252;
BgL_auxz00_5252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)15781)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1263); 
FAILURE(BgL_auxz00_5252,BFALSE,BFALSE);} 
BgL_arg2004z00_1265 = 
CAR(BgL_pairz00_2589); } 
BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00(BgL_arg2004z00_1265, BgL_pz00_1259); } 
{ /* Ieee/output.scm 417 */
bool_t BgL_testz00_5258;
{ /* Ieee/output.scm 417 */
obj_t BgL_auxz00_5259;
BgL_auxz00_5259 = 
CDR(BgL_lz00_1263); 
BgL_testz00_5258 = 
PAIRP(BgL_auxz00_5259); } 
if(BgL_testz00_5258)
{ /* Ieee/output.scm 417 */
bgl_display_string(BGl_string3361z00zz__r4_output_6_10_3z00, BgL_pz00_1259); 
{ 
obj_t BgL_lz00_5263;
BgL_lz00_5263 = 
CDR(BgL_lz00_1263); 
BgL_lz00_1263 = BgL_lz00_5263; 
goto BgL_zc3anonymousza32003ze3z83_1264;} }  else 
{ /* Ieee/output.scm 417 */
if(
NULLP(
CDR(BgL_lz00_1263)))
{ /* Ieee/output.scm 420 */
return BFALSE;}  else 
{ /* Ieee/output.scm 420 */
bgl_display_string(BGl_string3362z00zz__r4_output_6_10_3z00, BgL_pz00_1259); 
{ 
obj_t BgL_lz00_5269;
BgL_lz00_5269 = 
CDR(BgL_lz00_1263); 
BgL_lz00_1258 = BgL_lz00_5269; 
goto BGl_printzd2flatzd2listz00zz__r4_output_6_10_3z00;} } } } }  else 
{ /* Ieee/output.scm 413 */
if(
NULLP(BgL_lz00_1258))
{ /* Ieee/output.scm 423 */
return BFALSE;}  else 
{ /* Ieee/output.scm 423 */
return 
bgl_display_obj(BgL_lz00_1258, BgL_pz00_1259);} } } 
}



/* format */
BGL_EXPORTED_DEF obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t BgL_fmtz00_31, obj_t BgL_objz00_32)
{ AN_OBJECT;
{ /* Ieee/output.scm 547 */
{ /* Ieee/output.scm 548 */
obj_t BgL_pz00_2802;
{ /* Ieee/output.scm 548 */

{ /* Ieee/output.scm 548 */

BgL_pz00_2802 = 
BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE); } } 
{ /* Ieee/output.scm 548 */
obj_t BgL_auxz00_5282;obj_t BgL_auxz00_5275;
{ /* Ieee/output.scm 548 */
bool_t BgL_testz00_5283;
if(
PAIRP(BgL_objz00_32))
{ /* Ieee/output.scm 548 */
BgL_testz00_5283 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 548 */
BgL_testz00_5283 = 
NULLP(BgL_objz00_32)
; } 
if(BgL_testz00_5283)
{ /* Ieee/output.scm 548 */
BgL_auxz00_5282 = BgL_objz00_32
; }  else 
{ 
obj_t BgL_auxz00_5287;
BgL_auxz00_5287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19436)), BGl_string3364z00zz__r4_output_6_10_3z00, BGl_string3365z00zz__r4_output_6_10_3z00, BgL_objz00_32); 
FAILURE(BgL_auxz00_5287,BFALSE,BFALSE);} } 
if(
OUTPUT_PORTP(BgL_pz00_2802))
{ /* Ieee/output.scm 548 */
BgL_auxz00_5275 = BgL_pz00_2802
; }  else 
{ 
obj_t BgL_auxz00_5278;
BgL_auxz00_5278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19436)), BGl_string3364z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_pz00_2802); 
FAILURE(BgL_auxz00_5278,BFALSE,BFALSE);} 
BGl_xprintfz00zz__r4_output_6_10_3z00(BGl_symbol3363z00zz__r4_output_6_10_3z00, BgL_auxz00_5275, BgL_fmtz00_31, BgL_auxz00_5282); } 
{ /* Ieee/output.scm 548 */
obj_t BgL_portz00_2804;
if(
OUTPUT_PORTP(BgL_pz00_2802))
{ /* Ieee/output.scm 548 */
BgL_portz00_2804 = BgL_pz00_2802; }  else 
{ 
obj_t BgL_auxz00_5294;
BgL_auxz00_5294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19436)), BGl_string3364z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_pz00_2802); 
FAILURE(BgL_auxz00_5294,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_2804);} } } 
}



/* _format */
obj_t BGl__formatz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3576, obj_t BgL_fmtz00_3577, obj_t BgL_objz00_3578)
{ AN_OBJECT;
{ /* Ieee/output.scm 547 */
{ /* Ieee/output.scm 548 */
obj_t BgL_auxz00_5299;
if(
STRINGP(BgL_fmtz00_3577))
{ /* Ieee/output.scm 548 */
BgL_auxz00_5299 = BgL_fmtz00_3577
; }  else 
{ 
obj_t BgL_auxz00_5302;
BgL_auxz00_5302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19436)), BGl_string3366z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_fmtz00_3577); 
FAILURE(BgL_auxz00_5302,BFALSE,BFALSE);} 
return 
BGl_formatz00zz__r4_output_6_10_3z00(BgL_auxz00_5299, BgL_objz00_3578);} } 
}



/* printf */
BGL_EXPORTED_DEF obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t BgL_fmtz00_33, obj_t BgL_objz00_34)
{ AN_OBJECT;
{ /* Ieee/output.scm 555 */
{ /* Ieee/output.scm 556 */
obj_t BgL_arg2107z00_2805;obj_t BgL_arg2108z00_2806;
BgL_arg2107z00_2805 = BGl_symbol3367z00zz__r4_output_6_10_3z00; 
{ /* Ieee/output.scm 556 */
obj_t BgL_res2911z00_2808;
{ /* Ieee/output.scm 556 */
obj_t BgL_auxz00_5307;
BgL_auxz00_5307 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2911z00_2808 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5307); } 
BgL_arg2108z00_2806 = BgL_res2911z00_2808; } 
{ /* Ieee/output.scm 556 */
obj_t BgL_auxz00_5310;
{ /* Ieee/output.scm 556 */
bool_t BgL_testz00_5311;
if(
PAIRP(BgL_objz00_34))
{ /* Ieee/output.scm 556 */
BgL_testz00_5311 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 556 */
BgL_testz00_5311 = 
NULLP(BgL_objz00_34)
; } 
if(BgL_testz00_5311)
{ /* Ieee/output.scm 556 */
BgL_auxz00_5310 = BgL_objz00_34
; }  else 
{ 
obj_t BgL_auxz00_5315;
BgL_auxz00_5315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19786)), BGl_string3368z00zz__r4_output_6_10_3z00, BGl_string3365z00zz__r4_output_6_10_3z00, BgL_objz00_34); 
FAILURE(BgL_auxz00_5315,BFALSE,BFALSE);} } 
return 
BGl_xprintfz00zz__r4_output_6_10_3z00(BgL_arg2107z00_2805, BgL_arg2108z00_2806, BgL_fmtz00_33, BgL_auxz00_5310);} } } 
}



/* _printf */
obj_t BGl__printfz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3579, obj_t BgL_fmtz00_3580, obj_t BgL_objz00_3581)
{ AN_OBJECT;
{ /* Ieee/output.scm 555 */
{ /* Ieee/output.scm 556 */
obj_t BgL_auxz00_5320;
if(
STRINGP(BgL_fmtz00_3580))
{ /* Ieee/output.scm 556 */
BgL_auxz00_5320 = BgL_fmtz00_3580
; }  else 
{ 
obj_t BgL_auxz00_5323;
BgL_auxz00_5323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)19786)), BGl_string3369z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_fmtz00_3580); 
FAILURE(BgL_auxz00_5323,BFALSE,BFALSE);} 
return 
BGl_printfz00zz__r4_output_6_10_3z00(BgL_auxz00_5320, BgL_objz00_3581);} } 
}



/* fprintf */
BGL_EXPORTED_DEF obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t BgL_portz00_35, obj_t BgL_fmtz00_36, obj_t BgL_objz00_37)
{ AN_OBJECT;
{ /* Ieee/output.scm 561 */
{ /* Ieee/output.scm 562 */
obj_t BgL_auxz00_5328;
{ /* Ieee/output.scm 562 */
bool_t BgL_testz00_5329;
if(
PAIRP(BgL_objz00_37))
{ /* Ieee/output.scm 562 */
BgL_testz00_5329 = ((bool_t)1)
; }  else 
{ /* Ieee/output.scm 562 */
BgL_testz00_5329 = 
NULLP(BgL_objz00_37)
; } 
if(BgL_testz00_5329)
{ /* Ieee/output.scm 562 */
BgL_auxz00_5328 = BgL_objz00_37
; }  else 
{ 
obj_t BgL_auxz00_5333;
BgL_auxz00_5333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)20111)), BGl_string3371z00zz__r4_output_6_10_3z00, BGl_string3365z00zz__r4_output_6_10_3z00, BgL_objz00_37); 
FAILURE(BgL_auxz00_5333,BFALSE,BFALSE);} } 
return 
BGl_xprintfz00zz__r4_output_6_10_3z00(BGl_symbol3370z00zz__r4_output_6_10_3z00, BgL_portz00_35, BgL_fmtz00_36, BgL_auxz00_5328);} } 
}



/* _fprintf */
obj_t BGl__fprintfz00zz__r4_output_6_10_3z00(obj_t BgL_envz00_3582, obj_t BgL_portz00_3583, obj_t BgL_fmtz00_3584, obj_t BgL_objz00_3585)
{ AN_OBJECT;
{ /* Ieee/output.scm 561 */
{ /* Ieee/output.scm 562 */
obj_t BgL_auxz00_5345;obj_t BgL_auxz00_5338;
if(
STRINGP(BgL_fmtz00_3584))
{ /* Ieee/output.scm 562 */
BgL_auxz00_5345 = BgL_fmtz00_3584
; }  else 
{ 
obj_t BgL_auxz00_5348;
BgL_auxz00_5348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)20084)), BGl_string3372z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_fmtz00_3584); 
FAILURE(BgL_auxz00_5348,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3583))
{ /* Ieee/output.scm 562 */
BgL_auxz00_5338 = BgL_portz00_3583
; }  else 
{ 
obj_t BgL_auxz00_5341;
BgL_auxz00_5341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)20084)), BGl_string3372z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3583); 
FAILURE(BgL_auxz00_5341,BFALSE,BFALSE);} 
return 
BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_auxz00_5338, BgL_auxz00_5345, BgL_objz00_3585);} } 
}



/* display-2 */
BGL_EXPORTED_DEF obj_t bgl_display_obj(obj_t BgL_objz00_38, obj_t BgL_portz00_39)
{ AN_OBJECT;
{ /* Ieee/output.scm 681 */
if(
STRINGP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
SYMBOLP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2813;
BgL_objz00_2813 = BgL_objz00_38; 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2203z00_2815;
BgL_arg2203z00_2815 = 
SYMBOL_TO_STRING(BgL_objz00_2813); 
return 
bgl_display_string(BgL_arg2203z00_2815, BgL_portz00_39);} }  else 
{ /* Ieee/output.scm 682 */
if(
INTEGERP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_fixnum(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
CHARP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
unsigned char BgL_auxz00_5365;
BgL_auxz00_5365 = 
CCHAR(BgL_objz00_38); 
return 
bgl_display_char(BgL_auxz00_5365, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
PAIRP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
NULLP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3373z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BFALSE))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3374z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BTRUE))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3375z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BUNSPEC))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3376z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
ELONGP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_elong(
BELONG_TO_LONG(BgL_objz00_38), BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
REALP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2833;
BgL_objz00_2833 = BgL_objz00_38; 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2246z00_2835;
BgL_arg2246z00_2835 = 
real_to_string(
REAL_TO_DOUBLE(BgL_objz00_2833)); 
return 
bgl_display_string(BgL_arg2246z00_2835, BgL_portz00_39);} }  else 
{ /* Ieee/output.scm 682 */
if(
KEYWORDP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2840;
BgL_objz00_2840 = BgL_objz00_38; 
bgl_display_char(((unsigned char)':'), BgL_portz00_39); 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2245z00_2842;
BgL_arg2245z00_2842 = 
KEYWORD_TO_STRING(BgL_objz00_2840); 
return 
bgl_display_string(BgL_arg2245z00_2842, BgL_portz00_39);} }  else 
{ /* Ieee/output.scm 682 */
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
bgl_display_string(BGl_string3377z00zz__r4_output_6_10_3z00, BgL_portz00_39); 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2253z00_2848;
BgL_arg2253z00_2848 = 
BGl_classzd2namezd2zz__objectz00(BgL_objz00_38); 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2203z00_2853;
BgL_arg2203z00_2853 = 
SYMBOL_TO_STRING(BgL_arg2253z00_2848); 
bgl_display_string(BgL_arg2203z00_2853, BgL_portz00_39); } } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
VECTORP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(BgL_objz00_38, BgL_portz00_39, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 682 */
if(
LLONGP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_llong(
BLLONG_TO_LLONG(BgL_objz00_38), BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
UCS2_STRINGP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_ucs2string(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
STRUCTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(BgL_objz00_38, BgL_portz00_39, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_OBJECTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_list2127z00_1407;
BgL_list2127z00_1407 = 
MAKE_PAIR(BgL_portz00_39, BNIL); 
{ /* Ieee/output.scm 682 */
BgL_objectz00_bglt BgL_auxz00_5420;
if(
BGL_OBJECTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5420 = 
(BgL_objectz00_bglt)(BgL_objz00_38)
; }  else 
{ 
obj_t BgL_auxz00_5424;
BgL_auxz00_5424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3380z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5424,BFALSE,BFALSE);} 
return 
BGl_objectzd2displayzd2zz__objectz00(BgL_auxz00_5420, BgL_list2127z00_1407);} }  else 
{ /* Ieee/output.scm 682 */
if(
BGL_DATEP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2867;
BgL_objz00_2867 = BgL_objz00_38; 
return 
bgl_display_string(
bgl_seconds_to_string(
bgl_date_to_seconds(BgL_objz00_2867)), BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_MUTEXP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
bgl_display_string(BGl_string3381z00zz__r4_output_6_10_3z00, BgL_portz00_39); 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2251z00_2880;
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2883;
if(
BGL_MUTEXP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_objz00_2883 = BgL_objz00_38; }  else 
{ 
obj_t BgL_auxz00_5439;
BgL_auxz00_5439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3382z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5439,BFALSE,BFALSE);} 
BgL_arg2251z00_2880 = 
BGL_MUTEX_NAME(BgL_objz00_2883); } 
bgl_display_obj(BgL_arg2251z00_2880, BgL_portz00_39); } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_CONDVARP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
bgl_display_string(BGl_string3383z00zz__r4_output_6_10_3z00, BgL_portz00_39); 
{ /* Ieee/output.scm 682 */
obj_t BgL_arg2252z00_2889;
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2892;
if(
BGL_CONDVARP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_objz00_2892 = BgL_objz00_38; }  else 
{ 
obj_t BgL_auxz00_5451;
BgL_auxz00_5451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3384z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5451,BFALSE,BFALSE);} 
BgL_arg2252z00_2889 = 
BGL_CONDVAR_NAME(BgL_objz00_2892); } 
bgl_display_obj(BgL_arg2252z00_2889, BgL_portz00_39); } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
UCS2P(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_ucs2(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
CELLP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_objz00_2896;
BgL_objz00_2896 = BgL_objz00_38; 
bgl_display_string(BGl_string3385z00zz__r4_output_6_10_3z00, BgL_portz00_39); 
bgl_display_obj(
CELL_REF(BgL_objz00_2896), BgL_portz00_39); 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
EOF_OBJECTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3386z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BCNST(258)))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3387z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BCNST(259)))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3388z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
(BgL_objz00_38==BCNST(262)))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3389z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
PROCEDUREP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_procedure(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
OUTPUT_PORTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
if(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3390z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_string(BGl_string3391z00zz__r4_output_6_10_3z00, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
return 
bgl_write_output_port(BgL_objz00_38, BgL_portz00_39);} } }  else 
{ /* Ieee/output.scm 682 */
if(
INPUT_PORTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_input_port(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
CNSTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_cnst(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BIGNUMP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_display_bignum(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_HVECTORP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(BgL_objz00_38, BgL_portz00_39, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 682 */
if(
TVECTORP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(BgL_objz00_38, BgL_portz00_39, BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_WEAKPTRP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_ptrz00_2926;
BgL_ptrz00_2926 = BgL_objz00_38; 
{ /* Ieee/output.scm 682 */
obj_t BgL_dataz00_2928;
BgL_dataz00_2928 = 
weakptr_data(BgL_ptrz00_2926); 
bgl_display_string(BGl_string3392z00zz__r4_output_6_10_3z00, BgL_portz00_39); 
bgl_display_obj(BgL_dataz00_2928, BgL_portz00_39); 
return 
bgl_display_char(((unsigned char)'>'), BgL_portz00_39);} }  else 
{ /* Ieee/output.scm 682 */
if(
FOREIGNP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_foreign(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
PROCESSP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_auxz00_5517;
if(
PROCESSP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5517 = BgL_objz00_38
; }  else 
{ 
obj_t BgL_auxz00_5520;
BgL_auxz00_5520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3393z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5520,BFALSE,BFALSE);} 
return 
bgl_write_process(BgL_auxz00_5517, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
SOCKETP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_auxz00_5527;
if(
SOCKETP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5527 = BgL_objz00_38
; }  else 
{ 
obj_t BgL_auxz00_5530;
BgL_auxz00_5530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3394z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5530,BFALSE,BFALSE);} 
return 
bgl_write_socket(BgL_auxz00_5527, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_MMAPP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_auxz00_5537;
if(
BGL_MMAPP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5537 = BgL_objz00_38
; }  else 
{ 
obj_t BgL_auxz00_5540;
BgL_auxz00_5540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3395z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5540,BFALSE,BFALSE);} 
return 
bgl_write_mmap(BgL_auxz00_5537, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
OPAQUEP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_opaque(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
CUSTOMP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_custom(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BINARY_PORTP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
return 
bgl_write_binary_port(BgL_objz00_38, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
if(
BGL_DYNAMIC_ENVP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
obj_t BgL_auxz00_5556;
if(
BGL_DYNAMIC_ENVP(BgL_objz00_38))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5556 = BgL_objz00_38
; }  else 
{ 
obj_t BgL_auxz00_5559;
BgL_auxz00_5559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3379z00zz__r4_output_6_10_3z00, BGl_string3396z00zz__r4_output_6_10_3z00, BgL_objz00_38); 
FAILURE(BgL_auxz00_5559,BFALSE,BFALSE);} 
return 
bgl_write_dynamic_env(BgL_auxz00_5556, BgL_portz00_39);}  else 
{ /* Ieee/output.scm 682 */
return 
bgl_write_unknown(BgL_objz00_38, BgL_portz00_39);} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 
}



/* _display-2 */
obj_t BGl__displayzd22zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3586, obj_t BgL_objz00_3587, obj_t BgL_portz00_3588)
{ AN_OBJECT;
{ /* Ieee/output.scm 681 */
{ /* Ieee/output.scm 682 */
obj_t BgL_auxz00_5565;
if(
OUTPUT_PORTP(BgL_portz00_3588))
{ /* Ieee/output.scm 682 */
BgL_auxz00_5565 = BgL_portz00_3588
; }  else 
{ 
obj_t BgL_auxz00_5568;
BgL_auxz00_5568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24262)), BGl_string3397z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3588); 
FAILURE(BgL_auxz00_5568,BFALSE,BFALSE);} 
return 
bgl_display_obj(BgL_objz00_3587, BgL_auxz00_5565);} } 
}



/* write-2 */
BGL_EXPORTED_DEF obj_t bgl_write_obj(obj_t BgL_objz00_40, obj_t BgL_portz00_41)
{ AN_OBJECT;
{ /* Ieee/output.scm 687 */
if(
STRINGP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_2939;
BgL_objz00_2939 = BgL_objz00_40; 
if(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
{ /* Ieee/output.scm 688 */
obj_t BgL_strz00_2942;
BgL_strz00_2942 = 
string_for_read(BgL_objz00_2939); 
{ /* Ieee/output.scm 688 */
obj_t BgL_escz00_2943;
{ /* Ieee/output.scm 688 */
int BgL_auxz00_5578;
BgL_auxz00_5578 = 
(int)(((long)1)); 
BgL_escz00_2943 = 
BGL_MVALUES_VAL(BgL_auxz00_5578); } 
return 
bgl_write_string(BgL_strz00_2942, 
CBOOL(BgL_escz00_2943), BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 688 */
return 
bgl_write_string(
string_for_read(BgL_objz00_2939), ((bool_t)0), BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 688 */
if(
SYMBOLP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
INTEGERP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_display_fixnum(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
CHARP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_char(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
PAIRP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezd2pairzd2zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
NULLP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3373z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BFALSE))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3374z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BTRUE))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3375z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BUNSPEC))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3376z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
ELONGP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_elong(
BELONG_TO_LONG(BgL_objz00_40), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
REALP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_2963;
BgL_objz00_2963 = BgL_objz00_40; 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2246z00_2965;
BgL_arg2246z00_2965 = 
real_to_string(
REAL_TO_DOUBLE(BgL_objz00_2963)); 
return 
bgl_display_string(BgL_arg2246z00_2965, BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 688 */
if(
KEYWORDP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_2970;
BgL_objz00_2970 = BgL_objz00_40; 
bgl_display_char(((unsigned char)':'), BgL_portz00_41); 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2245z00_2972;
BgL_arg2245z00_2972 = 
KEYWORD_TO_STRING(BgL_objz00_2970); 
return 
bgl_display_string(BgL_arg2245z00_2972, BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 688 */
if(
BGl_classzf3zf3zz__objectz00(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
bgl_display_string(BGl_string3377z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2253z00_2978;
BgL_arg2253z00_2978 = 
BGl_classzd2namezd2zz__objectz00(BgL_objz00_40); 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2203z00_2983;
BgL_arg2203z00_2983 = 
SYMBOL_TO_STRING(BgL_arg2253z00_2978); 
bgl_display_string(BgL_arg2203z00_2983, BgL_portz00_41); } } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
VECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 688 */
if(
LLONGP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_llong(
BLLONG_TO_LLONG(BgL_objz00_40), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
UCS2_STRINGP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_2992;
BgL_objz00_2992 = BgL_objz00_40; 
return 
bgl_write_utf8string(
string_for_read(
ucs2_string_to_utf8_string(BgL_objz00_2992)), BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
STRUCTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_OBJECTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_list2173z00_1453;
BgL_list2173z00_1453 = 
MAKE_PAIR(BgL_portz00_41, BNIL); 
{ /* Ieee/output.scm 688 */
BgL_objectz00_bglt BgL_auxz00_5648;
if(
BGL_OBJECTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5648 = 
(BgL_objectz00_bglt)(BgL_objz00_40)
; }  else 
{ 
obj_t BgL_auxz00_5652;
BgL_auxz00_5652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3380z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5652,BFALSE,BFALSE);} 
return 
BGl_objectzd2writezd2zz__objectz00(BgL_auxz00_5648, BgL_list2173z00_1453);} }  else 
{ /* Ieee/output.scm 688 */
if(
BGL_DATEP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_3001;
BgL_objz00_3001 = BgL_objz00_40; 
bgl_display_string(BGl_string3399z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
bgl_display_string(
bgl_seconds_to_string(
bgl_date_to_seconds(BgL_objz00_3001)), BgL_portz00_41); 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_MUTEXP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
bgl_display_string(BGl_string3381z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2251z00_3018;
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_3021;
if(
BGL_MUTEXP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_objz00_3021 = BgL_objz00_40; }  else 
{ 
obj_t BgL_auxz00_5669;
BgL_auxz00_5669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3382z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5669,BFALSE,BFALSE);} 
BgL_arg2251z00_3018 = 
BGL_MUTEX_NAME(BgL_objz00_3021); } 
bgl_display_obj(BgL_arg2251z00_3018, BgL_portz00_41); } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_CONDVARP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
bgl_display_string(BGl_string3383z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
{ /* Ieee/output.scm 688 */
obj_t BgL_arg2252z00_3027;
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_3030;
if(
BGL_CONDVARP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_objz00_3030 = BgL_objz00_40; }  else 
{ 
obj_t BgL_auxz00_5681;
BgL_auxz00_5681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3384z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5681,BFALSE,BFALSE);} 
BgL_arg2252z00_3027 = 
BGL_CONDVAR_NAME(BgL_objz00_3030); } 
bgl_display_obj(BgL_arg2252z00_3027, BgL_portz00_41); } 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
UCS2P(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_ucs2(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
CELLP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_objz00_3034;
BgL_objz00_3034 = BgL_objz00_40; 
bgl_display_string(BGl_string3385z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
bgl_write_obj(
CELL_REF(BgL_objz00_3034), BgL_portz00_41); 
return 
bgl_display_string(BGl_string3378z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
EOF_OBJECTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3386z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BCNST(258)))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3387z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BCNST(259)))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3388z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
(BgL_objz00_40==BCNST(262)))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3389z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
PROCEDUREP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_procedure(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
OUTPUT_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
if(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3390z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_display_string(BGl_string3391z00zz__r4_output_6_10_3z00, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
return 
bgl_write_output_port(BgL_objz00_40, BgL_portz00_41);} } }  else 
{ /* Ieee/output.scm 688 */
if(
INPUT_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_input_port(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
CNSTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_cnst(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BIGNUMP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_bignum(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_HVECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 688 */
if(
TVECTORP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(BgL_objz00_40, BgL_portz00_41, BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_WEAKPTRP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_ptrz00_3064;
BgL_ptrz00_3064 = BgL_objz00_40; 
{ /* Ieee/output.scm 688 */
obj_t BgL_dataz00_3066;
BgL_dataz00_3066 = 
weakptr_data(BgL_ptrz00_3064); 
bgl_display_string(BGl_string3392z00zz__r4_output_6_10_3z00, BgL_portz00_41); 
bgl_write_obj(BgL_dataz00_3066, BgL_portz00_41); 
return 
bgl_display_char(((unsigned char)'>'), BgL_portz00_41);} }  else 
{ /* Ieee/output.scm 688 */
if(
FOREIGNP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_foreign(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
PROCESSP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_auxz00_5747;
if(
PROCESSP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5747 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_5750;
BgL_auxz00_5750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3393z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5750,BFALSE,BFALSE);} 
return 
bgl_write_process(BgL_auxz00_5747, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
SOCKETP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_auxz00_5757;
if(
SOCKETP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5757 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_5760;
BgL_auxz00_5760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3394z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5760,BFALSE,BFALSE);} 
return 
bgl_write_socket(BgL_auxz00_5757, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_MMAPP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_auxz00_5767;
if(
BGL_MMAPP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5767 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_5770;
BgL_auxz00_5770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3395z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5770,BFALSE,BFALSE);} 
return 
bgl_write_mmap(BgL_auxz00_5767, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
OPAQUEP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_opaque(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
CUSTOMP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_custom(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BINARY_PORTP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
return 
bgl_write_binary_port(BgL_objz00_40, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
if(
BGL_DYNAMIC_ENVP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
obj_t BgL_auxz00_5786;
if(
BGL_DYNAMIC_ENVP(BgL_objz00_40))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5786 = BgL_objz00_40
; }  else 
{ 
obj_t BgL_auxz00_5789;
BgL_auxz00_5789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3398z00zz__r4_output_6_10_3z00, BGl_string3396z00zz__r4_output_6_10_3z00, BgL_objz00_40); 
FAILURE(BgL_auxz00_5789,BFALSE,BFALSE);} 
return 
bgl_write_dynamic_env(BgL_auxz00_5786, BgL_portz00_41);}  else 
{ /* Ieee/output.scm 688 */
return 
bgl_write_unknown(BgL_objz00_40, BgL_portz00_41);} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 
}



/* _write-2 */
obj_t BGl__writezd22zd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3589, obj_t BgL_objz00_3590, obj_t BgL_portz00_3591)
{ AN_OBJECT;
{ /* Ieee/output.scm 687 */
{ /* Ieee/output.scm 688 */
obj_t BgL_auxz00_5795;
if(
OUTPUT_PORTP(BgL_portz00_3591))
{ /* Ieee/output.scm 688 */
BgL_auxz00_5795 = BgL_portz00_3591
; }  else 
{ 
obj_t BgL_auxz00_5798;
BgL_auxz00_5798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24565)), BGl_string3400z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3591); 
FAILURE(BgL_auxz00_5798,BFALSE,BFALSE);} 
return 
bgl_write_obj(BgL_objz00_3590, BgL_auxz00_5795);} } 
}



/* display-symbol */
BGL_EXPORTED_DEF obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_42, obj_t BgL_portz00_43)
{ AN_OBJECT;
{ /* Ieee/output.scm 693 */
{ /* Ieee/output.scm 694 */
obj_t BgL_arg2203z00_3076;
BgL_arg2203z00_3076 = 
SYMBOL_TO_STRING(BgL_objz00_42); 
return 
bgl_display_string(BgL_arg2203z00_3076, BgL_portz00_43);} } 
}



/* _display-symbol */
obj_t BGl__displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3592, obj_t BgL_objz00_3593, obj_t BgL_portz00_3594)
{ AN_OBJECT;
{ /* Ieee/output.scm 693 */
{ /* Ieee/output.scm 694 */
obj_t BgL_auxz00_5812;obj_t BgL_auxz00_5805;
if(
OUTPUT_PORTP(BgL_portz00_3594))
{ /* Ieee/output.scm 694 */
BgL_auxz00_5812 = BgL_portz00_3594
; }  else 
{ 
obj_t BgL_auxz00_5815;
BgL_auxz00_5815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24876)), BGl_string3401z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3594); 
FAILURE(BgL_auxz00_5815,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_objz00_3593))
{ /* Ieee/output.scm 694 */
BgL_auxz00_5805 = BgL_objz00_3593
; }  else 
{ 
obj_t BgL_auxz00_5808;
BgL_auxz00_5808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)24876)), BGl_string3401z00zz__r4_output_6_10_3z00, BGl_string3402z00zz__r4_output_6_10_3z00, BgL_objz00_3593); 
FAILURE(BgL_auxz00_5808,BFALSE,BFALSE);} 
return 
BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_5805, BgL_auxz00_5812);} } 
}



/* write-symbol */
BGL_EXPORTED_DEF obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_44, obj_t BgL_portz00_45)
{ AN_OBJECT;
{ /* Ieee/output.scm 699 */
{ /* Ieee/output.scm 700 */
obj_t BgL_strz00_1482;
BgL_strz00_1482 = 
SYMBOL_TO_STRING(BgL_objz00_44); 
{ /* Ieee/output.scm 700 */
long BgL_lenz00_1483;
BgL_lenz00_1483 = 
STRING_LENGTH(BgL_strz00_1482); 
{ /* Ieee/output.scm 701 */
long BgL_lenzd21zd2_1484;
BgL_lenzd21zd2_1484 = 
(BgL_lenz00_1483-((long)1)); 
{ /* Ieee/output.scm 702 */

{ 

{ 
long BgL_iz00_1487;bool_t BgL_az00_1488;
BgL_iz00_1487 = ((long)0); 
BgL_az00_1488 = ((bool_t)0); 
BgL_zc3anonymousza32204ze3z83_1489:
if(
(BgL_iz00_1487==BgL_lenz00_1483))
{ /* Ieee/output.scm 709 */
if(BgL_az00_1488)
{ /* Ieee/output.scm 710 */
return 
bgl_display_string(BgL_strz00_1482, BgL_portz00_45);}  else 
{ /* Ieee/output.scm 710 */
BgL_zc3anonymousza32225ze3z83_1511:
bgl_display_string(BGl_string3403z00zz__r4_output_6_10_3z00, BgL_portz00_45); 
bgl_display_string(
string_for_read(BgL_strz00_1482), BgL_portz00_45); 
return 
bgl_display_string(BGl_string3403z00zz__r4_output_6_10_3z00, BgL_portz00_45);} }  else 
{ /* Ieee/output.scm 711 */
unsigned char BgL_cz00_1491;
{ /* Ieee/output.scm 711 */
long BgL_l2957z00_3654;
BgL_l2957z00_3654 = 
STRING_LENGTH(BgL_strz00_1482); 
if(
BOUND_CHECK(BgL_iz00_1487, BgL_l2957z00_3654))
{ /* Ieee/output.scm 711 */
BgL_cz00_1491 = 
STRING_REF(BgL_strz00_1482, BgL_iz00_1487); }  else 
{ 
obj_t BgL_auxz00_5835;
BgL_auxz00_5835 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)25486)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_iz00_1487), BgL_strz00_1482); 
FAILURE(BgL_auxz00_5835,BFALSE,BFALSE);} } 
{ 

switch( BgL_cz00_1491) { case ((unsigned char)' ') : 
case ((unsigned char)'\n') : 
case ((unsigned char)'\t') : 
case ((unsigned char)'\r') : 
case ((unsigned char)'`') : 
case ((unsigned char)'\'') : 
case ((unsigned char)'"') : 
case ((unsigned char)'#') : 
case ((unsigned char)'\\') : 
case ((unsigned char)';') : 
case ((unsigned char)'(') : 
case ((unsigned char)')') : 
case ((unsigned char)'[') : 
case ((unsigned char)']') : 
case ((unsigned char)'{') : 
case ((unsigned char)'}') : 
case ((unsigned char)',') : 

goto BgL_zc3anonymousza32225ze3z83_1511;break;case ((unsigned char)':') : 

if(
(BgL_iz00_1487==((long)0)))
{ /* Ieee/output.scm 718 */
bool_t BgL_testz00_5842;
if(
(BgL_lenzd21zd2_1484>((long)2)))
{ /* Ieee/output.scm 719 */
unsigned char BgL_auxz00_5845;
{ /* Ieee/output.scm 719 */
long BgL_i2960z00_3657;
BgL_i2960z00_3657 = 
(BgL_iz00_1487+((long)1)); 
{ /* Ieee/output.scm 719 */
long BgL_l2961z00_3658;
BgL_l2961z00_3658 = 
STRING_LENGTH(BgL_strz00_1482); 
if(
BOUND_CHECK(BgL_i2960z00_3657, BgL_l2961z00_3658))
{ /* Ieee/output.scm 719 */
BgL_auxz00_5845 = 
STRING_REF(BgL_strz00_1482, BgL_i2960z00_3657)
; }  else 
{ 
obj_t BgL_auxz00_5851;
BgL_auxz00_5851 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)25706)), BGl_string3357z00zz__r4_output_6_10_3z00, 
BINT(BgL_i2960z00_3657), BgL_strz00_1482); 
FAILURE(BgL_auxz00_5851,BFALSE,BFALSE);} } } 
BgL_testz00_5842 = 
(BgL_auxz00_5845==((unsigned char)':')); }  else 
{ /* Ieee/output.scm 718 */
BgL_testz00_5842 = ((bool_t)0)
; } 
if(BgL_testz00_5842)
{ 
long BgL_iz00_5857;
BgL_iz00_5857 = 
(BgL_iz00_1487+((long)2)); 
BgL_iz00_1487 = BgL_iz00_5857; 
goto BgL_zc3anonymousza32204ze3z83_1489;}  else 
{ /* Ieee/output.scm 718 */
goto BgL_zc3anonymousza32225ze3z83_1511;} }  else 
{ /* Ieee/output.scm 717 */
if(
(BgL_iz00_1487==BgL_lenzd21zd2_1484))
{ /* Ieee/output.scm 722 */
goto BgL_zc3anonymousza32225ze3z83_1511;}  else 
{ 
long BgL_iz00_5861;
BgL_iz00_5861 = 
(BgL_iz00_1487+((long)1)); 
BgL_iz00_1487 = BgL_iz00_5861; 
goto BgL_zc3anonymousza32204ze3z83_1489;} } break;case ((unsigned char)'.') : 

if(
(BgL_lenz00_1483==((long)1)))
{ /* Ieee/output.scm 727 */
goto BgL_zc3anonymousza32225ze3z83_1511;}  else 
{ 
long BgL_iz00_5865;
BgL_iz00_5865 = 
(BgL_iz00_1487+((long)1)); 
BgL_iz00_1487 = BgL_iz00_5865; 
goto BgL_zc3anonymousza32204ze3z83_1489;} break;
default: 
if(
(BgL_cz00_1491>=((unsigned char)'')))
{ /* Ieee/output.scm 731 */
goto BgL_zc3anonymousza32225ze3z83_1511;}  else 
{ /* Ieee/output.scm 733 */
long BgL_arg2222z00_1506;bool_t BgL_arg2223z00_1507;
BgL_arg2222z00_1506 = 
(BgL_iz00_1487+((long)1)); 
if(BgL_az00_1488)
{ /* Ieee/output.scm 733 */
BgL_arg2223z00_1507 = BgL_az00_1488; }  else 
{ /* Ieee/output.scm 733 */
if(
isdigit(BgL_cz00_1491))
{ /* Ieee/output.scm 733 */
BgL_arg2223z00_1507 = ((bool_t)0); }  else 
{ /* Ieee/output.scm 733 */
BgL_arg2223z00_1507 = ((bool_t)1); } } 
{ 
bool_t BgL_az00_5874;long BgL_iz00_5873;
BgL_iz00_5873 = BgL_arg2222z00_1506; 
BgL_az00_5874 = BgL_arg2223z00_1507; 
BgL_az00_1488 = BgL_az00_5874; 
BgL_iz00_1487 = BgL_iz00_5873; 
goto BgL_zc3anonymousza32204ze3z83_1489;} } } } } } } } } } } } 
}



/* _write-symbol */
obj_t BGl__writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3595, obj_t BgL_objz00_3596, obj_t BgL_portz00_3597)
{ AN_OBJECT;
{ /* Ieee/output.scm 699 */
{ /* Ieee/output.scm 700 */
obj_t BgL_auxz00_5883;obj_t BgL_auxz00_5876;
if(
OUTPUT_PORTP(BgL_portz00_3597))
{ /* Ieee/output.scm 700 */
BgL_auxz00_5883 = BgL_portz00_3597
; }  else 
{ 
obj_t BgL_auxz00_5886;
BgL_auxz00_5886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)25163)), BGl_string3404z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3597); 
FAILURE(BgL_auxz00_5886,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_objz00_3596))
{ /* Ieee/output.scm 700 */
BgL_auxz00_5876 = BgL_objz00_3596
; }  else 
{ 
obj_t BgL_auxz00_5879;
BgL_auxz00_5879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)25163)), BGl_string3404z00zz__r4_output_6_10_3z00, BGl_string3402z00zz__r4_output_6_10_3z00, BgL_objz00_3596); 
FAILURE(BgL_auxz00_5879,BFALSE,BFALSE);} 
return 
BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_5876, BgL_auxz00_5883);} } 
}



/* display-string */
BGL_EXPORTED_DEF obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_46, obj_t BgL_portz00_47)
{ AN_OBJECT;
{ /* Ieee/output.scm 738 */
return 
bgl_display_string(BgL_objz00_46, BgL_portz00_47);} 
}



/* _display-string */
obj_t BGl__displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3598, obj_t BgL_objz00_3599, obj_t BgL_portz00_3600)
{ AN_OBJECT;
{ /* Ieee/output.scm 738 */
{ /* Ieee/output.scm 739 */
obj_t BgL_objz00_4055;obj_t BgL_portz00_4056;
if(
STRINGP(BgL_objz00_3599))
{ /* Ieee/output.scm 739 */
BgL_objz00_4055 = BgL_objz00_3599; }  else 
{ 
obj_t BgL_auxz00_5894;
BgL_auxz00_5894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26295)), BGl_string3405z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_objz00_3599); 
FAILURE(BgL_auxz00_5894,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3600))
{ /* Ieee/output.scm 739 */
BgL_portz00_4056 = BgL_portz00_3600; }  else 
{ 
obj_t BgL_auxz00_5900;
BgL_auxz00_5900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26295)), BGl_string3405z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3600); 
FAILURE(BgL_auxz00_5900,BFALSE,BFALSE);} 
return 
bgl_display_string(BgL_objz00_4055, BgL_portz00_4056);} } 
}



/* display-substring */
BGL_EXPORTED_DEF obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_48, long BgL_startz00_49, long BgL_endz00_50, obj_t BgL_portz00_51)
{ AN_OBJECT;
{ /* Ieee/output.scm 744 */
{ /* Ieee/output.scm 745 */
bool_t BgL_testz00_5905;
if(
(BgL_endz00_50>=BgL_startz00_49))
{ /* Ieee/output.scm 745 */
bool_t BgL_testz00_5908;
{ /* Ieee/output.scm 745 */
long BgL_auxz00_5909;
BgL_auxz00_5909 = 
(
STRING_LENGTH(BgL_objz00_48)+((long)1)); 
BgL_testz00_5908 = 
BOUND_CHECK(BgL_endz00_50, BgL_auxz00_5909); } 
if(BgL_testz00_5908)
{ /* Ieee/output.scm 745 */
BgL_testz00_5905 = 
(BgL_startz00_49>=((long)0))
; }  else 
{ /* Ieee/output.scm 745 */
BgL_testz00_5905 = ((bool_t)0)
; } }  else 
{ /* Ieee/output.scm 745 */
BgL_testz00_5905 = ((bool_t)0)
; } 
if(BgL_testz00_5905)
{ /* Ieee/output.scm 745 */
return 
bgl_display_substring(BgL_objz00_48, BgL_startz00_49, BgL_endz00_50, BgL_portz00_51);}  else 
{ /* Ieee/output.scm 745 */
obj_t BgL_arg2233z00_4057;obj_t BgL_arg2234z00_4058;
BgL_arg2233z00_4057 = BGl_symbol3406z00zz__r4_output_6_10_3z00; 
{ /* Ieee/output.scm 745 */
obj_t BgL_list2235z00_4059;
{ /* Ieee/output.scm 745 */
obj_t BgL_arg2236z00_4060;
BgL_arg2236z00_4060 = 
MAKE_PAIR(
BINT(BgL_endz00_50), BNIL); 
BgL_list2235z00_4059 = 
MAKE_PAIR(
BINT(BgL_startz00_49), BgL_arg2236z00_4060); } 
BgL_arg2234z00_4058 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3408z00zz__r4_output_6_10_3z00, BgL_list2235z00_4059); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2233z00_4057, BgL_arg2234z00_4058, BgL_objz00_48);} } } 
}



/* _display-substring */
obj_t BGl__displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3601, obj_t BgL_objz00_3602, obj_t BgL_startz00_3603, obj_t BgL_endz00_3604, obj_t BgL_portz00_3605)
{ AN_OBJECT;
{ /* Ieee/output.scm 744 */
{ /* Ieee/output.scm 745 */
obj_t BgL_objz00_4061;long BgL_startz00_4062;long BgL_endz00_4063;obj_t BgL_portz00_4064;
if(
STRINGP(BgL_objz00_3602))
{ /* Ieee/output.scm 745 */
BgL_objz00_4061 = BgL_objz00_3602; }  else 
{ 
obj_t BgL_auxz00_5923;
BgL_auxz00_5923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26612)), BGl_string3409z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_objz00_3602); 
FAILURE(BgL_auxz00_5923,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 745 */
obj_t BgL_auxz00_5927;
if(
INTEGERP(BgL_startz00_3603))
{ /* Ieee/output.scm 745 */
BgL_auxz00_5927 = BgL_startz00_3603
; }  else 
{ 
obj_t BgL_auxz00_5930;
BgL_auxz00_5930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26612)), BGl_string3409z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_startz00_3603); 
FAILURE(BgL_auxz00_5930,BFALSE,BFALSE);} 
BgL_startz00_4062 = 
(long)CINT(BgL_auxz00_5927); } 
{ /* Ieee/output.scm 745 */
obj_t BgL_auxz00_5935;
if(
INTEGERP(BgL_endz00_3604))
{ /* Ieee/output.scm 745 */
BgL_auxz00_5935 = BgL_endz00_3604
; }  else 
{ 
obj_t BgL_auxz00_5938;
BgL_auxz00_5938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26612)), BGl_string3409z00zz__r4_output_6_10_3z00, BGl_string3356z00zz__r4_output_6_10_3z00, BgL_endz00_3604); 
FAILURE(BgL_auxz00_5938,BFALSE,BFALSE);} 
BgL_endz00_4063 = 
(long)CINT(BgL_auxz00_5935); } 
if(
OUTPUT_PORTP(BgL_portz00_3605))
{ /* Ieee/output.scm 745 */
BgL_portz00_4064 = BgL_portz00_3605; }  else 
{ 
obj_t BgL_auxz00_5945;
BgL_auxz00_5945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)26612)), BGl_string3409z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3605); 
FAILURE(BgL_auxz00_5945,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 745 */
bool_t BgL_testz00_5949;
if(
(BgL_endz00_4063>=BgL_startz00_4062))
{ /* Ieee/output.scm 745 */
bool_t BgL_testz00_5952;
{ /* Ieee/output.scm 745 */
long BgL_auxz00_5953;
BgL_auxz00_5953 = 
(
STRING_LENGTH(BgL_objz00_4061)+((long)1)); 
BgL_testz00_5952 = 
BOUND_CHECK(BgL_endz00_4063, BgL_auxz00_5953); } 
if(BgL_testz00_5952)
{ /* Ieee/output.scm 745 */
BgL_testz00_5949 = 
(BgL_startz00_4062>=((long)0))
; }  else 
{ /* Ieee/output.scm 745 */
BgL_testz00_5949 = ((bool_t)0)
; } }  else 
{ /* Ieee/output.scm 745 */
BgL_testz00_5949 = ((bool_t)0)
; } 
if(BgL_testz00_5949)
{ /* Ieee/output.scm 745 */
return 
bgl_display_substring(BgL_objz00_4061, BgL_startz00_4062, BgL_endz00_4063, BgL_portz00_4064);}  else 
{ /* Ieee/output.scm 745 */
obj_t BgL_arg2233z00_4065;obj_t BgL_arg2234z00_4066;
BgL_arg2233z00_4065 = BGl_symbol3406z00zz__r4_output_6_10_3z00; 
{ /* Ieee/output.scm 745 */
obj_t BgL_list2235z00_4067;
{ /* Ieee/output.scm 745 */
obj_t BgL_arg2236z00_4068;
BgL_arg2236z00_4068 = 
MAKE_PAIR(
BINT(BgL_endz00_4063), BNIL); 
BgL_list2235z00_4067 = 
MAKE_PAIR(
BINT(BgL_startz00_4062), BgL_arg2236z00_4068); } 
BgL_arg2234z00_4066 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3408z00zz__r4_output_6_10_3z00, BgL_list2235z00_4067); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2233z00_4065, BgL_arg2234z00_4066, BgL_objz00_4061);} } } } 
}



/* write-string */
BGL_EXPORTED_DEF obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_52, obj_t BgL_portz00_53)
{ AN_OBJECT;
{ /* Ieee/output.scm 756 */
if(
BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
{ /* Ieee/output.scm 757 */
obj_t BgL_strz00_3140;
BgL_strz00_3140 = 
string_for_read(BgL_objz00_52); 
{ /* Ieee/output.scm 757 */
obj_t BgL_escz00_3141;
{ /* Ieee/output.scm 757 */
int BgL_auxz00_5968;
BgL_auxz00_5968 = 
(int)(((long)1)); 
BgL_escz00_3141 = 
BGL_MVALUES_VAL(BgL_auxz00_5968); } 
return 
bgl_write_string(BgL_strz00_3140, 
CBOOL(BgL_escz00_3141), BgL_portz00_53);} }  else 
{ /* Ieee/output.scm 757 */
return 
bgl_write_string(
string_for_read(BgL_objz00_52), ((bool_t)0), BgL_portz00_53);} } 
}



/* _write-string */
obj_t BGl__writezd2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3606, obj_t BgL_objz00_3607, obj_t BgL_portz00_3608)
{ AN_OBJECT;
{ /* Ieee/output.scm 756 */
{ /* Ieee/output.scm 757 */
obj_t BgL_auxz00_5982;obj_t BgL_auxz00_5975;
if(
OUTPUT_PORTP(BgL_portz00_3608))
{ /* Ieee/output.scm 757 */
BgL_auxz00_5982 = BgL_portz00_3608
; }  else 
{ 
obj_t BgL_auxz00_5985;
BgL_auxz00_5985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)27121)), BGl_string3410z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3608); 
FAILURE(BgL_auxz00_5985,BFALSE,BFALSE);} 
if(
STRINGP(BgL_objz00_3607))
{ /* Ieee/output.scm 757 */
BgL_auxz00_5975 = BgL_objz00_3607
; }  else 
{ 
obj_t BgL_auxz00_5978;
BgL_auxz00_5978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)27121)), BGl_string3410z00zz__r4_output_6_10_3z00, BGl_string3359z00zz__r4_output_6_10_3z00, BgL_objz00_3607); 
FAILURE(BgL_auxz00_5978,BFALSE,BFALSE);} 
return 
BGl_writezd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5975, BgL_auxz00_5982);} } 
}



/* display-fixnum */
BGL_EXPORTED_DEF obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_56, obj_t BgL_portz00_57)
{ AN_OBJECT;
{ /* Ieee/output.scm 777 */
return 
bgl_display_fixnum(BgL_objz00_56, BgL_portz00_57);} 
}



/* _display-fixnum */
obj_t BGl__displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3609, obj_t BgL_objz00_3610, obj_t BgL_portz00_3611)
{ AN_OBJECT;
{ /* Ieee/output.scm 777 */
{ /* Ieee/output.scm 778 */
obj_t BgL_objz00_4069;obj_t BgL_portz00_4070;
if(
INTEGERP(BgL_objz00_3610))
{ /* Ieee/output.scm 778 */
BgL_objz00_4069 = BgL_objz00_3610; }  else 
{ 
obj_t BgL_auxz00_5993;
BgL_auxz00_5993 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28007)), BGl_string3411z00zz__r4_output_6_10_3z00, BGl_string3412z00zz__r4_output_6_10_3z00, BgL_objz00_3610); 
FAILURE(BgL_auxz00_5993,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3611))
{ /* Ieee/output.scm 778 */
BgL_portz00_4070 = BgL_portz00_3611; }  else 
{ 
obj_t BgL_auxz00_5999;
BgL_auxz00_5999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28007)), BGl_string3411z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3611); 
FAILURE(BgL_auxz00_5999,BFALSE,BFALSE);} 
return 
bgl_display_fixnum(BgL_objz00_4069, BgL_portz00_4070);} } 
}



/* display-elong */
BGL_EXPORTED_DEF obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long BgL_objz00_58, obj_t BgL_portz00_59)
{ AN_OBJECT;
{ /* Ieee/output.scm 783 */
return 
bgl_display_elong(BgL_objz00_58, BgL_portz00_59);} 
}



/* _display-elong */
obj_t BGl__displayzd2elongzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3612, obj_t BgL_objz00_3613, obj_t BgL_portz00_3614)
{ AN_OBJECT;
{ /* Ieee/output.scm 783 */
{ /* Ieee/output.scm 784 */
long BgL_objz00_4071;obj_t BgL_portz00_4072;
{ /* Ieee/output.scm 784 */
obj_t BgL_auxz00_6005;
if(
ELONGP(BgL_objz00_3613))
{ /* Ieee/output.scm 784 */
BgL_auxz00_6005 = BgL_objz00_3613
; }  else 
{ 
obj_t BgL_auxz00_6008;
BgL_auxz00_6008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28301)), BGl_string3413z00zz__r4_output_6_10_3z00, BGl_string3414z00zz__r4_output_6_10_3z00, BgL_objz00_3613); 
FAILURE(BgL_auxz00_6008,BFALSE,BFALSE);} 
BgL_objz00_4071 = 
BELONG_TO_LONG(BgL_auxz00_6005); } 
if(
OUTPUT_PORTP(BgL_portz00_3614))
{ /* Ieee/output.scm 784 */
BgL_portz00_4072 = BgL_portz00_3614; }  else 
{ 
obj_t BgL_auxz00_6015;
BgL_auxz00_6015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28301)), BGl_string3413z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3614); 
FAILURE(BgL_auxz00_6015,BFALSE,BFALSE);} 
return 
bgl_display_elong(BgL_objz00_4071, BgL_portz00_4072);} } 
}



/* display-flonum */
BGL_EXPORTED_DEF obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_60, obj_t BgL_portz00_61)
{ AN_OBJECT;
{ /* Ieee/output.scm 789 */
{ /* Ieee/output.scm 790 */
obj_t BgL_arg2246z00_4073;
BgL_arg2246z00_4073 = 
real_to_string(
REAL_TO_DOUBLE(BgL_objz00_60)); 
return 
bgl_display_string(BgL_arg2246z00_4073, BgL_portz00_61);} } 
}



/* _display-flonum */
obj_t BGl__displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3615, obj_t BgL_objz00_3616, obj_t BgL_portz00_3617)
{ AN_OBJECT;
{ /* Ieee/output.scm 789 */
{ /* Ieee/output.scm 790 */
obj_t BgL_objz00_4074;obj_t BgL_portz00_4075;
if(
REALP(BgL_objz00_3616))
{ /* Ieee/output.scm 790 */
BgL_objz00_4074 = BgL_objz00_3616; }  else 
{ 
obj_t BgL_auxz00_6025;
BgL_auxz00_6025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28611)), BGl_string3415z00zz__r4_output_6_10_3z00, BGl_string3416z00zz__r4_output_6_10_3z00, BgL_objz00_3616); 
FAILURE(BgL_auxz00_6025,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3617))
{ /* Ieee/output.scm 790 */
BgL_portz00_4075 = BgL_portz00_3617; }  else 
{ 
obj_t BgL_auxz00_6031;
BgL_auxz00_6031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28611)), BGl_string3415z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3617); 
FAILURE(BgL_auxz00_6031,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 790 */
obj_t BgL_arg2246z00_4076;
BgL_arg2246z00_4076 = 
real_to_string(
REAL_TO_DOUBLE(BgL_objz00_4074)); 
return 
bgl_display_string(BgL_arg2246z00_4076, BgL_portz00_4075);} } } 
}



/* display-ucs2string */
BGL_EXPORTED_DEF obj_t BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_62, obj_t BgL_portz00_63)
{ AN_OBJECT;
{ /* Ieee/output.scm 795 */
return 
bgl_display_ucs2string(BgL_objz00_62, BgL_portz00_63);} 
}



/* _display-ucs2string */
obj_t BGl__displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3618, obj_t BgL_objz00_3619, obj_t BgL_portz00_3620)
{ AN_OBJECT;
{ /* Ieee/output.scm 795 */
{ /* Ieee/output.scm 796 */
obj_t BgL_objz00_4077;obj_t BgL_portz00_4078;
if(
UCS2_STRINGP(BgL_objz00_3619))
{ /* Ieee/output.scm 796 */
BgL_objz00_4077 = BgL_objz00_3619; }  else 
{ 
obj_t BgL_auxz00_6041;
BgL_auxz00_6041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28901)), BGl_string3417z00zz__r4_output_6_10_3z00, BGl_string3418z00zz__r4_output_6_10_3z00, BgL_objz00_3619); 
FAILURE(BgL_auxz00_6041,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3620))
{ /* Ieee/output.scm 796 */
BgL_portz00_4078 = BgL_portz00_3620; }  else 
{ 
obj_t BgL_auxz00_6047;
BgL_auxz00_6047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)28901)), BGl_string3417z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3620); 
FAILURE(BgL_auxz00_6047,BFALSE,BFALSE);} 
return 
bgl_display_ucs2string(BgL_objz00_4077, BgL_portz00_4078);} } 
}



/* write-ucs2string */
BGL_EXPORTED_DEF obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_64, obj_t BgL_portz00_65)
{ AN_OBJECT;
{ /* Ieee/output.scm 801 */
return 
bgl_write_utf8string(
string_for_read(
ucs2_string_to_utf8_string(BgL_objz00_64)), BgL_portz00_65);} 
}



/* _write-ucs2string */
obj_t BGl__writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_envz00_3621, obj_t BgL_objz00_3622, obj_t BgL_portz00_3623)
{ AN_OBJECT;
{ /* Ieee/output.scm 801 */
{ /* Ieee/output.scm 802 */
obj_t BgL_auxz00_6062;obj_t BgL_auxz00_6055;
if(
OUTPUT_PORTP(BgL_portz00_3623))
{ /* Ieee/output.scm 802 */
BgL_auxz00_6062 = BgL_portz00_3623
; }  else 
{ 
obj_t BgL_auxz00_6065;
BgL_auxz00_6065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)29231)), BGl_string3419z00zz__r4_output_6_10_3z00, BGl_string3323z00zz__r4_output_6_10_3z00, BgL_portz00_3623); 
FAILURE(BgL_auxz00_6065,BFALSE,BFALSE);} 
if(
UCS2_STRINGP(BgL_objz00_3622))
{ /* Ieee/output.scm 802 */
BgL_auxz00_6055 = BgL_objz00_3622
; }  else 
{ 
obj_t BgL_auxz00_6058;
BgL_auxz00_6058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)29231)), BGl_string3419z00zz__r4_output_6_10_3z00, BGl_string3418z00zz__r4_output_6_10_3z00, BgL_objz00_3622); 
FAILURE(BgL_auxz00_6058,BFALSE,BFALSE);} 
return 
BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_6055, BgL_auxz00_6062);} } 
}



/* write/display-structure */
obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t BgL_objz00_79, obj_t BgL_portz00_80, obj_t BgL_dispz00_81)
{ AN_OBJECT;
{ /* Ieee/output.scm 854 */
bgl_display_char(((unsigned char)'#'), BgL_portz00_80); 
bgl_display_char(((unsigned char)'{'), BgL_portz00_80); 
{ /* Ieee/output.scm 857 */
obj_t BgL_arg2256z00_1538;
{ /* Ieee/output.scm 857 */
obj_t BgL_res2916z00_3207;
{ /* Ieee/output.scm 857 */
obj_t BgL_aux3245z00_3942;
BgL_aux3245z00_3942 = 
STRUCT_KEY(BgL_objz00_79); 
if(
SYMBOLP(BgL_aux3245z00_3942))
{ /* Ieee/output.scm 857 */
BgL_res2916z00_3207 = BgL_aux3245z00_3942; }  else 
{ 
obj_t BgL_auxz00_6075;
BgL_auxz00_6075 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)31755)), BGl_string3420z00zz__r4_output_6_10_3z00, BGl_string3402z00zz__r4_output_6_10_3z00, BgL_aux3245z00_3942); 
FAILURE(BgL_auxz00_6075,BFALSE,BFALSE);} } 
BgL_arg2256z00_1538 = BgL_res2916z00_3207; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_81, ((long)2)))
{ /* Ieee/output.scm 857 */
PROCEDURE_ENTRY(BgL_dispz00_81)(BgL_dispz00_81, BgL_arg2256z00_1538, BgL_portz00_80, BEOA); }  else 
{ /* Ieee/output.scm 857 */
FAILURE(BGl_string3421z00zz__r4_output_6_10_3z00,BGl_list3422z00zz__r4_output_6_10_3z00,BgL_dispz00_81);} } 
if(
(((long)0)==
(long)(
STRUCT_LENGTH(BgL_objz00_79))))
{ /* Ieee/output.scm 858 */
return 
bgl_display_char(((unsigned char)'}'), BgL_portz00_80);}  else 
{ /* Ieee/output.scm 860 */
long BgL_lenz00_1540;
BgL_lenz00_1540 = 
(
(long)(
STRUCT_LENGTH(BgL_objz00_79))-((long)1)); 
bgl_display_char(((unsigned char)' '), BgL_portz00_80); 
{ 
long BgL_iz00_1542;
BgL_iz00_1542 = ((long)0); 
BgL_zc3anonymousza32258ze3z83_1543:
if(
(BgL_iz00_1542==BgL_lenz00_1540))
{ /* Ieee/output.scm 864 */
{ /* Ieee/output.scm 865 */
obj_t BgL_arg2260z00_1545;
BgL_arg2260z00_1545 = 
STRUCT_REF(BgL_objz00_79, 
(int)(BgL_iz00_1542)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_81, ((long)2)))
{ /* Ieee/output.scm 865 */
PROCEDURE_ENTRY(BgL_dispz00_81)(BgL_dispz00_81, BgL_arg2260z00_1545, BgL_portz00_80, BEOA); }  else 
{ /* Ieee/output.scm 865 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3432z00zz__r4_output_6_10_3z00,BgL_dispz00_81);} } 
return 
bgl_display_char(((unsigned char)'}'), BgL_portz00_80);}  else 
{ /* Ieee/output.scm 864 */
{ /* Ieee/output.scm 868 */
obj_t BgL_arg2262z00_1546;
BgL_arg2262z00_1546 = 
STRUCT_REF(BgL_objz00_79, 
(int)(BgL_iz00_1542)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_81, ((long)2)))
{ /* Ieee/output.scm 868 */
PROCEDURE_ENTRY(BgL_dispz00_81)(BgL_dispz00_81, BgL_arg2262z00_1546, BgL_portz00_80, BEOA); }  else 
{ /* Ieee/output.scm 868 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3435z00zz__r4_output_6_10_3z00,BgL_dispz00_81);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_80); 
{ 
long BgL_iz00_6111;
BgL_iz00_6111 = 
(((long)1)+BgL_iz00_1542); 
BgL_iz00_1542 = BgL_iz00_6111; 
goto BgL_zc3anonymousza32258ze3z83_1543;} } } } } 
}



/* write/display-vector */
obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t BgL_objz00_82, obj_t BgL_portz00_83, obj_t BgL_dispz00_84)
{ AN_OBJECT;
{ /* Ieee/output.scm 875 */
bgl_display_char(((unsigned char)'#'), BgL_portz00_83); 
{ /* Ieee/output.scm 877 */
int BgL_tagz00_1553;
BgL_tagz00_1553 = 
VECTOR_TAG(BgL_objz00_82); 
if(
(
(long)(BgL_tagz00_1553)>((long)0)))
{ /* Ieee/output.scm 878 */
if(
(
(long)(BgL_tagz00_1553)>=((long)100)))
{ /* Ieee/output.scm 880 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_84, ((long)2)))
{ /* Ieee/output.scm 881 */
PROCEDURE_ENTRY(BgL_dispz00_84)(BgL_dispz00_84, 
BINT(BgL_tagz00_1553), BgL_portz00_83, BEOA); }  else 
{ /* Ieee/output.scm 881 */
FAILURE(BGl_string3438z00zz__r4_output_6_10_3z00,BGl_list3439z00zz__r4_output_6_10_3z00,BgL_dispz00_84);} }  else 
{ /* Ieee/output.scm 880 */
bgl_display_char(((unsigned char)'0'), BgL_portz00_83); 
if(
(
(long)(BgL_tagz00_1553)>=((long)10)))
{ /* Ieee/output.scm 884 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_84, ((long)2)))
{ /* Ieee/output.scm 885 */
PROCEDURE_ENTRY(BgL_dispz00_84)(BgL_dispz00_84, 
BINT(BgL_tagz00_1553), BgL_portz00_83, BEOA); }  else 
{ /* Ieee/output.scm 885 */
FAILURE(BGl_string3438z00zz__r4_output_6_10_3z00,BGl_list3439z00zz__r4_output_6_10_3z00,BgL_dispz00_84);} }  else 
{ /* Ieee/output.scm 884 */
bgl_display_char(((unsigned char)'0'), BgL_portz00_83); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_84, ((long)2)))
{ /* Ieee/output.scm 888 */
PROCEDURE_ENTRY(BgL_dispz00_84)(BgL_dispz00_84, 
BINT(BgL_tagz00_1553), BgL_portz00_83, BEOA); }  else 
{ /* Ieee/output.scm 888 */
FAILURE(BGl_string3438z00zz__r4_output_6_10_3z00,BGl_list3439z00zz__r4_output_6_10_3z00,BgL_dispz00_84);} } } }  else 
{ /* Ieee/output.scm 878 */BFALSE; } } 
bgl_display_char(((unsigned char)'('), BgL_portz00_83); 
{ /* Ieee/output.scm 890 */
bool_t BgL_testz00_6145;
{ /* Ieee/output.scm 890 */
int BgL_arg2281z00_1570;
BgL_arg2281z00_1570 = 
VECTOR_LENGTH(BgL_objz00_82); 
BgL_testz00_6145 = 
(((long)0)==
(long)(BgL_arg2281z00_1570)); } 
if(BgL_testz00_6145)
{ /* Ieee/output.scm 890 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_83);}  else 
{ /* Ieee/output.scm 892 */
long BgL_lenz00_1558;
{ /* Ieee/output.scm 892 */
int BgL_arg2278z00_1567;
BgL_arg2278z00_1567 = 
VECTOR_LENGTH(BgL_objz00_82); 
BgL_lenz00_1558 = 
(
(long)(BgL_arg2278z00_1567)-((long)1)); } 
{ 
long BgL_iz00_1560;
BgL_iz00_1560 = ((long)0); 
BgL_zc3anonymousza32272ze3z83_1561:
if(
(BgL_iz00_1560==BgL_lenz00_1558))
{ /* Ieee/output.scm 895 */
{ /* Ieee/output.scm 896 */
obj_t BgL_arg2274z00_1563;
{ /* Ieee/output.scm 896 */
int BgL_kz00_3238;
BgL_kz00_3238 = 
(int)(BgL_iz00_1560); 
{ /* Ieee/output.scm 896 */
int BgL_l2965z00_3662;
BgL_l2965z00_3662 = 
VECTOR_LENGTH(BgL_objz00_82); 
if(
BOUND_CHECK(BgL_kz00_3238, BgL_l2965z00_3662))
{ /* Ieee/output.scm 896 */
BgL_arg2274z00_1563 = 
VECTOR_REF(BgL_objz00_82,BgL_kz00_3238); }  else 
{ 
obj_t BgL_auxz00_6160;
BgL_auxz00_6160 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)32895)), BGl_string3442z00zz__r4_output_6_10_3z00, 
BINT(BgL_kz00_3238), BgL_objz00_82); 
FAILURE(BgL_auxz00_6160,BFALSE,BFALSE);} } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_84, ((long)2)))
{ /* Ieee/output.scm 896 */
PROCEDURE_ENTRY(BgL_dispz00_84)(BgL_dispz00_84, BgL_arg2274z00_1563, BgL_portz00_83, BEOA); }  else 
{ /* Ieee/output.scm 896 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3443z00zz__r4_output_6_10_3z00,BgL_dispz00_84);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_83);}  else 
{ /* Ieee/output.scm 895 */
{ /* Ieee/output.scm 899 */
obj_t BgL_arg2275z00_1564;
{ /* Ieee/output.scm 899 */
int BgL_kz00_3240;
BgL_kz00_3240 = 
(int)(BgL_iz00_1560); 
{ /* Ieee/output.scm 899 */
int BgL_l2969z00_3666;
BgL_l2969z00_3666 = 
VECTOR_LENGTH(BgL_objz00_82); 
if(
BOUND_CHECK(BgL_kz00_3240, BgL_l2969z00_3666))
{ /* Ieee/output.scm 899 */
BgL_arg2275z00_1564 = 
VECTOR_REF(BgL_objz00_82,BgL_kz00_3240); }  else 
{ 
obj_t BgL_auxz00_6176;
BgL_auxz00_6176 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)32966)), BGl_string3442z00zz__r4_output_6_10_3z00, 
BINT(BgL_kz00_3240), BgL_objz00_82); 
FAILURE(BgL_auxz00_6176,BFALSE,BFALSE);} } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_84, ((long)2)))
{ /* Ieee/output.scm 899 */
PROCEDURE_ENTRY(BgL_dispz00_84)(BgL_dispz00_84, BgL_arg2275z00_1564, BgL_portz00_83, BEOA); }  else 
{ /* Ieee/output.scm 899 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3446z00zz__r4_output_6_10_3z00,BgL_dispz00_84);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_83); 
{ 
long BgL_iz00_6187;
BgL_iz00_6187 = 
(((long)1)+BgL_iz00_1560); 
BgL_iz00_1560 = BgL_iz00_6187; 
goto BgL_zc3anonymousza32272ze3z83_1561;} } } } } } 
}



/* write/display-tvector */
obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t BgL_tvecz00_85, obj_t BgL_portz00_86, obj_t BgL_dispz00_87)
{ AN_OBJECT;
{ /* Ieee/output.scm 906 */
{ /* Ieee/output.scm 907 */
obj_t BgL_tvectorzd2refzd2_1571;obj_t BgL_idz00_1572;
BgL_tvectorzd2refzd2_1571 = 
BGl_tvectorzd2refzd2zz__tvectorz00(BgL_tvecz00_85); 
BgL_idz00_1572 = 
BGl_tvectorzd2idzd2zz__tvectorz00(BgL_tvecz00_85); 
bgl_display_char(((unsigned char)'#'), BgL_portz00_86); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_87, ((long)2)))
{ /* Ieee/output.scm 910 */
PROCEDURE_ENTRY(BgL_dispz00_87)(BgL_dispz00_87, BgL_idz00_1572, BgL_portz00_86, BEOA); }  else 
{ /* Ieee/output.scm 910 */
FAILURE(BGl_string3449z00zz__r4_output_6_10_3z00,BGl_list3450z00zz__r4_output_6_10_3z00,BgL_dispz00_87);} 
bgl_display_char(((unsigned char)'('), BgL_portz00_86); 
if(
CBOOL(BgL_tvectorzd2refzd2_1571))
{ /* Ieee/output.scm 912 */
if(
(((long)0)==
(long)(
TVECTOR_LENGTH(BgL_tvecz00_85))))
{ /* Ieee/output.scm 917 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_86);}  else 
{ /* Ieee/output.scm 919 */
long BgL_lenz00_1574;
BgL_lenz00_1574 = 
(
(long)(
TVECTOR_LENGTH(BgL_tvecz00_85))-((long)1)); 
{ 
long BgL_iz00_1576;
BgL_iz00_1576 = ((long)0); 
BgL_zc3anonymousza32283ze3z83_1577:
if(
(BgL_iz00_1576==BgL_lenz00_1574))
{ /* Ieee/output.scm 922 */
{ /* Ieee/output.scm 923 */
obj_t BgL_arg2285z00_1579;
{ /* Ieee/output.scm 923 */
obj_t BgL_funz00_3973;
if(
PROCEDUREP(BgL_tvectorzd2refzd2_1571))
{ /* Ieee/output.scm 923 */
BgL_funz00_3973 = BgL_tvectorzd2refzd2_1571; }  else 
{ 
obj_t BgL_auxz00_6212;
BgL_auxz00_6212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)33749)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3453z00zz__r4_output_6_10_3z00, BgL_tvectorzd2refzd2_1571); 
FAILURE(BgL_auxz00_6212,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3973, ((long)2)))
{ /* Ieee/output.scm 923 */
BgL_arg2285z00_1579 = 
PROCEDURE_ENTRY(BgL_funz00_3973)(BgL_tvectorzd2refzd2_1571, BgL_tvecz00_85, 
BINT(BgL_iz00_1576), BEOA); }  else 
{ /* Ieee/output.scm 923 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3454z00zz__r4_output_6_10_3z00,BgL_funz00_3973);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_87, ((long)2)))
{ /* Ieee/output.scm 923 */
PROCEDURE_ENTRY(BgL_dispz00_87)(BgL_dispz00_87, BgL_arg2285z00_1579, BgL_portz00_86, BEOA); }  else 
{ /* Ieee/output.scm 923 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3461z00zz__r4_output_6_10_3z00,BgL_dispz00_87);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_86);}  else 
{ /* Ieee/output.scm 922 */
{ /* Ieee/output.scm 926 */
obj_t BgL_arg2286z00_1580;
{ /* Ieee/output.scm 926 */
obj_t BgL_funz00_3981;
if(
PROCEDUREP(BgL_tvectorzd2refzd2_1571))
{ /* Ieee/output.scm 926 */
BgL_funz00_3981 = BgL_tvectorzd2refzd2_1571; }  else 
{ 
obj_t BgL_auxz00_6230;
BgL_auxz00_6230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)33831)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3453z00zz__r4_output_6_10_3z00, BgL_tvectorzd2refzd2_1571); 
FAILURE(BgL_auxz00_6230,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3981, ((long)2)))
{ /* Ieee/output.scm 926 */
BgL_arg2286z00_1580 = 
PROCEDURE_ENTRY(BgL_funz00_3981)(BgL_tvectorzd2refzd2_1571, BgL_tvecz00_85, 
BINT(BgL_iz00_1576), BEOA); }  else 
{ /* Ieee/output.scm 926 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3454z00zz__r4_output_6_10_3z00,BgL_funz00_3981);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_87, ((long)2)))
{ /* Ieee/output.scm 926 */
PROCEDURE_ENTRY(BgL_dispz00_87)(BgL_dispz00_87, BgL_arg2286z00_1580, BgL_portz00_86, BEOA); }  else 
{ /* Ieee/output.scm 926 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3464z00zz__r4_output_6_10_3z00,BgL_dispz00_87);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_86); 
{ 
long BgL_iz00_6246;
BgL_iz00_6246 = 
(((long)1)+BgL_iz00_1576); 
BgL_iz00_1576 = BgL_iz00_6246; 
goto BgL_zc3anonymousza32283ze3z83_1577;} } } } }  else 
{ /* Ieee/output.scm 912 */
bgl_display_string(BGl_string3467z00zz__r4_output_6_10_3z00, BgL_portz00_86); 
return BgL_tvecz00_85;} } } 
}



/* write/display-hvector */
obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t BgL_svecz00_88, obj_t BgL_portz00_89, obj_t BgL_dispz00_90)
{ AN_OBJECT;
{ /* Ieee/output.scm 933 */
{ /* Ieee/output.scm 934 */
obj_t BgL_idz00_1587;
BgL_idz00_1587 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_svecz00_88); 
{ /* Ieee/output.scm 950 */
obj_t BgL__z00_1588;obj_t BgL_vrefz00_1589;obj_t BgL__z00_1590;
{ /* Ieee/output.scm 950 */
int BgL_auxz00_6250;
BgL_auxz00_6250 = 
(int)(((long)1)); 
BgL__z00_1588 = 
BGL_MVALUES_VAL(BgL_auxz00_6250); } 
{ /* Ieee/output.scm 950 */
int BgL_auxz00_6253;
BgL_auxz00_6253 = 
(int)(((long)2)); 
BgL_vrefz00_1589 = 
BGL_MVALUES_VAL(BgL_auxz00_6253); } 
{ /* Ieee/output.scm 950 */
int BgL_auxz00_6256;
BgL_auxz00_6256 = 
(int)(((long)3)); 
BgL__z00_1590 = 
BGL_MVALUES_VAL(BgL_auxz00_6256); } 
bgl_display_char(((unsigned char)'#'), BgL_portz00_89); 
{ /* Ieee/output.scm 937 */
obj_t BgL_objz00_3258;
if(
SYMBOLP(BgL_idz00_1587))
{ /* Ieee/output.scm 937 */
BgL_objz00_3258 = BgL_idz00_1587; }  else 
{ 
obj_t BgL_auxz00_6262;
BgL_auxz00_6262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)34323)), BGl_string3468z00zz__r4_output_6_10_3z00, BGl_string3402z00zz__r4_output_6_10_3z00, BgL_idz00_1587); 
FAILURE(BgL_auxz00_6262,BFALSE,BFALSE);} 
{ /* Ieee/output.scm 937 */
obj_t BgL_arg2203z00_3260;
BgL_arg2203z00_3260 = 
SYMBOL_TO_STRING(BgL_objz00_3258); 
bgl_display_string(BgL_arg2203z00_3260, BgL_portz00_89); } } 
bgl_display_char(((unsigned char)'('), BgL_portz00_89); 
{ /* Ieee/output.scm 939 */
bool_t BgL_testz00_6269;
{ /* Ieee/output.scm 939 */
long BgL_arg2305z00_1604;
BgL_arg2305z00_1604 = 
BGL_HVECTOR_LENGTH(BgL_svecz00_88); 
BgL_testz00_6269 = 
(((long)0)==BgL_arg2305z00_1604); } 
if(BgL_testz00_6269)
{ /* Ieee/output.scm 939 */
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_89);}  else 
{ /* Ieee/output.scm 941 */
long BgL_lenz00_1592;
{ /* Ieee/output.scm 941 */
long BgL_arg2302z00_1601;
BgL_arg2302z00_1601 = 
BGL_HVECTOR_LENGTH(BgL_svecz00_88); 
BgL_lenz00_1592 = 
(BgL_arg2302z00_1601-((long)1)); } 
{ 
long BgL_iz00_1594;
BgL_iz00_1594 = ((long)0); 
BgL_zc3anonymousza32295ze3z83_1595:
if(
(BgL_iz00_1594==BgL_lenz00_1592))
{ /* Ieee/output.scm 944 */
{ /* Ieee/output.scm 945 */
obj_t BgL_arg2297z00_1597;
{ /* Ieee/output.scm 945 */
obj_t BgL_funz00_3991;
if(
PROCEDUREP(BgL_vrefz00_1589))
{ /* Ieee/output.scm 945 */
BgL_funz00_3991 = BgL_vrefz00_1589; }  else 
{ 
obj_t BgL_auxz00_6279;
BgL_auxz00_6279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)34541)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3453z00zz__r4_output_6_10_3z00, BgL_vrefz00_1589); 
FAILURE(BgL_auxz00_6279,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3991, ((long)2)))
{ /* Ieee/output.scm 945 */
BgL_arg2297z00_1597 = 
PROCEDURE_ENTRY(BgL_funz00_3991)(BgL_vrefz00_1589, BgL_svecz00_88, 
BINT(BgL_iz00_1594), BEOA); }  else 
{ /* Ieee/output.scm 945 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3469z00zz__r4_output_6_10_3z00,BgL_funz00_3991);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_90, ((long)2)))
{ /* Ieee/output.scm 945 */
PROCEDURE_ENTRY(BgL_dispz00_90)(BgL_dispz00_90, BgL_arg2297z00_1597, BgL_portz00_89, BEOA); }  else 
{ /* Ieee/output.scm 945 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3474z00zz__r4_output_6_10_3z00,BgL_dispz00_90);} } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_89);}  else 
{ /* Ieee/output.scm 944 */
{ /* Ieee/output.scm 948 */
obj_t BgL_arg2300z00_1598;
{ /* Ieee/output.scm 948 */
obj_t BgL_funz00_3999;
if(
PROCEDUREP(BgL_vrefz00_1589))
{ /* Ieee/output.scm 948 */
BgL_funz00_3999 = BgL_vrefz00_1589; }  else 
{ 
obj_t BgL_auxz00_6297;
BgL_auxz00_6297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)34616)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3453z00zz__r4_output_6_10_3z00, BgL_vrefz00_1589); 
FAILURE(BgL_auxz00_6297,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3999, ((long)2)))
{ /* Ieee/output.scm 948 */
BgL_arg2300z00_1598 = 
PROCEDURE_ENTRY(BgL_funz00_3999)(BgL_vrefz00_1589, BgL_svecz00_88, 
BINT(BgL_iz00_1594), BEOA); }  else 
{ /* Ieee/output.scm 948 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3469z00zz__r4_output_6_10_3z00,BgL_funz00_3999);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_dispz00_90, ((long)2)))
{ /* Ieee/output.scm 948 */
PROCEDURE_ENTRY(BgL_dispz00_90)(BgL_dispz00_90, BgL_arg2300z00_1598, BgL_portz00_89, BEOA); }  else 
{ /* Ieee/output.scm 948 */
FAILURE(BGl_string3431z00zz__r4_output_6_10_3z00,BGl_list3477z00zz__r4_output_6_10_3z00,BgL_dispz00_90);} } 
bgl_display_char(((unsigned char)' '), BgL_portz00_89); 
{ 
long BgL_iz00_6313;
BgL_iz00_6313 = 
(((long)1)+BgL_iz00_1594); 
BgL_iz00_1594 = BgL_iz00_6313; 
goto BgL_zc3anonymousza32295ze3z83_1595;} } } } } } } } 
}



/* display-pair */
obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_94, obj_t BgL_portz00_95)
{ AN_OBJECT;
{ /* Ieee/output.scm 987 */
bgl_display_char(((unsigned char)'('), BgL_portz00_95); 
{ 
obj_t BgL_lz00_1607;
BgL_lz00_1607 = BgL_objz00_94; 
BgL_zc3anonymousza32306ze3z83_1608:
{ /* Ieee/output.scm 988 */
bool_t BgL_testz00_6316;
{ /* Ieee/output.scm 988 */
obj_t BgL_auxz00_6317;
{ /* Ieee/output.scm 988 */
obj_t BgL_pairz00_3274;
if(
PAIRP(BgL_lz00_1607))
{ /* Ieee/output.scm 988 */
BgL_pairz00_3274 = BgL_lz00_1607; }  else 
{ 
obj_t BgL_auxz00_6320;
BgL_auxz00_6320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36135)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1607); 
FAILURE(BgL_auxz00_6320,BFALSE,BFALSE);} 
BgL_auxz00_6317 = 
CDR(BgL_pairz00_3274); } 
BgL_testz00_6316 = 
NULLP(BgL_auxz00_6317); } 
if(BgL_testz00_6316)
{ /* Ieee/output.scm 988 */
{ /* Ieee/output.scm 988 */
obj_t BgL_arg2308z00_1610;
{ /* Ieee/output.scm 988 */
obj_t BgL_pairz00_3276;
if(
PAIRP(BgL_lz00_1607))
{ /* Ieee/output.scm 988 */
BgL_pairz00_3276 = BgL_lz00_1607; }  else 
{ 
obj_t BgL_auxz00_6328;
BgL_auxz00_6328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36135)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1607); 
FAILURE(BgL_auxz00_6328,BFALSE,BFALSE);} 
BgL_arg2308z00_1610 = 
CAR(BgL_pairz00_3276); } 
bgl_display_obj(BgL_arg2308z00_1610, BgL_portz00_95); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_95);}  else 
{ /* Ieee/output.scm 988 */
bool_t BgL_testz00_6335;
{ /* Ieee/output.scm 988 */
obj_t BgL_auxz00_6336;
{ /* Ieee/output.scm 988 */
obj_t BgL_pairz00_3277;
if(
PAIRP(BgL_lz00_1607))
{ /* Ieee/output.scm 988 */
BgL_pairz00_3277 = BgL_lz00_1607; }  else 
{ 
obj_t BgL_auxz00_6339;
BgL_auxz00_6339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36135)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1607); 
FAILURE(BgL_auxz00_6339,BFALSE,BFALSE);} 
BgL_auxz00_6336 = 
CDR(BgL_pairz00_3277); } 
BgL_testz00_6335 = 
PAIRP(BgL_auxz00_6336); } 
if(BgL_testz00_6335)
{ /* Ieee/output.scm 988 */
{ /* Ieee/output.scm 988 */
obj_t BgL_arg2310z00_1612;
{ /* Ieee/output.scm 988 */
obj_t BgL_pairz00_3279;
if(
PAIRP(BgL_lz00_1607))
{ /* Ieee/output.scm 988 */
BgL_pairz00_3279 = BgL_lz00_1607; }  else 
{ 
obj_t BgL_auxz00_6347;
BgL_auxz00_6347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36135)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1607); 
FAILURE(BgL_auxz00_6347,BFALSE,BFALSE);} 
BgL_arg2310z00_1612 = 
CAR(BgL_pairz00_3279); } 
bgl_display_obj(BgL_arg2310z00_1612, BgL_portz00_95); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_95); 
{ 
obj_t BgL_lz00_6354;
BgL_lz00_6354 = 
CDR(BgL_lz00_1607); 
BgL_lz00_1607 = BgL_lz00_6354; 
goto BgL_zc3anonymousza32306ze3z83_1608;} }  else 
{ /* Ieee/output.scm 988 */
{ /* Ieee/output.scm 988 */
obj_t BgL_arg2312z00_1614;
{ /* Ieee/output.scm 988 */
obj_t BgL_pairz00_3281;
if(
PAIRP(BgL_lz00_1607))
{ /* Ieee/output.scm 988 */
BgL_pairz00_3281 = BgL_lz00_1607; }  else 
{ 
obj_t BgL_auxz00_6358;
BgL_auxz00_6358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36135)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1607); 
FAILURE(BgL_auxz00_6358,BFALSE,BFALSE);} 
BgL_arg2312z00_1614 = 
CAR(BgL_pairz00_3281); } 
bgl_display_obj(BgL_arg2312z00_1614, BgL_portz00_95); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_95); 
bgl_display_char(((unsigned char)'.'), BgL_portz00_95); 
bgl_display_char(((unsigned char)' '), BgL_portz00_95); 
bgl_display_obj(
CDR(BgL_lz00_1607), BgL_portz00_95); 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_95);} } } } } 
}



/* write-pair */
obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_96, obj_t BgL_portz00_97)
{ AN_OBJECT;
{ /* Ieee/output.scm 993 */
bgl_display_char(((unsigned char)'('), BgL_portz00_97); 
{ 
obj_t BgL_lz00_1620;
BgL_lz00_1620 = BgL_objz00_96; 
BgL_zc3anonymousza32316ze3z83_1621:
{ /* Ieee/output.scm 994 */
bool_t BgL_testz00_6371;
{ /* Ieee/output.scm 994 */
obj_t BgL_auxz00_6372;
{ /* Ieee/output.scm 994 */
obj_t BgL_pairz00_3283;
if(
PAIRP(BgL_lz00_1620))
{ /* Ieee/output.scm 994 */
BgL_pairz00_3283 = BgL_lz00_1620; }  else 
{ 
obj_t BgL_auxz00_6375;
BgL_auxz00_6375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36433)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1620); 
FAILURE(BgL_auxz00_6375,BFALSE,BFALSE);} 
BgL_auxz00_6372 = 
CDR(BgL_pairz00_3283); } 
BgL_testz00_6371 = 
NULLP(BgL_auxz00_6372); } 
if(BgL_testz00_6371)
{ /* Ieee/output.scm 994 */
{ /* Ieee/output.scm 994 */
obj_t BgL_arg2318z00_1623;
{ /* Ieee/output.scm 994 */
obj_t BgL_pairz00_3285;
if(
PAIRP(BgL_lz00_1620))
{ /* Ieee/output.scm 994 */
BgL_pairz00_3285 = BgL_lz00_1620; }  else 
{ 
obj_t BgL_auxz00_6383;
BgL_auxz00_6383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36433)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1620); 
FAILURE(BgL_auxz00_6383,BFALSE,BFALSE);} 
BgL_arg2318z00_1623 = 
CAR(BgL_pairz00_3285); } 
bgl_write_obj(BgL_arg2318z00_1623, BgL_portz00_97); } 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_97);}  else 
{ /* Ieee/output.scm 994 */
bool_t BgL_testz00_6390;
{ /* Ieee/output.scm 994 */
obj_t BgL_auxz00_6391;
{ /* Ieee/output.scm 994 */
obj_t BgL_pairz00_3286;
if(
PAIRP(BgL_lz00_1620))
{ /* Ieee/output.scm 994 */
BgL_pairz00_3286 = BgL_lz00_1620; }  else 
{ 
obj_t BgL_auxz00_6394;
BgL_auxz00_6394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36433)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1620); 
FAILURE(BgL_auxz00_6394,BFALSE,BFALSE);} 
BgL_auxz00_6391 = 
CDR(BgL_pairz00_3286); } 
BgL_testz00_6390 = 
PAIRP(BgL_auxz00_6391); } 
if(BgL_testz00_6390)
{ /* Ieee/output.scm 994 */
{ /* Ieee/output.scm 994 */
obj_t BgL_arg2320z00_1625;
{ /* Ieee/output.scm 994 */
obj_t BgL_pairz00_3288;
if(
PAIRP(BgL_lz00_1620))
{ /* Ieee/output.scm 994 */
BgL_pairz00_3288 = BgL_lz00_1620; }  else 
{ 
obj_t BgL_auxz00_6402;
BgL_auxz00_6402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36433)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1620); 
FAILURE(BgL_auxz00_6402,BFALSE,BFALSE);} 
BgL_arg2320z00_1625 = 
CAR(BgL_pairz00_3288); } 
bgl_write_obj(BgL_arg2320z00_1625, BgL_portz00_97); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
{ 
obj_t BgL_lz00_6409;
BgL_lz00_6409 = 
CDR(BgL_lz00_1620); 
BgL_lz00_1620 = BgL_lz00_6409; 
goto BgL_zc3anonymousza32316ze3z83_1621;} }  else 
{ /* Ieee/output.scm 994 */
{ /* Ieee/output.scm 994 */
obj_t BgL_arg2322z00_1627;
{ /* Ieee/output.scm 994 */
obj_t BgL_pairz00_3290;
if(
PAIRP(BgL_lz00_1620))
{ /* Ieee/output.scm 994 */
BgL_pairz00_3290 = BgL_lz00_1620; }  else 
{ 
obj_t BgL_auxz00_6413;
BgL_auxz00_6413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3322z00zz__r4_output_6_10_3z00, 
BINT(((long)36433)), BGl_string3343z00zz__r4_output_6_10_3z00, BGl_string3344z00zz__r4_output_6_10_3z00, BgL_lz00_1620); 
FAILURE(BgL_auxz00_6413,BFALSE,BFALSE);} 
BgL_arg2322z00_1627 = 
CAR(BgL_pairz00_3290); } 
bgl_write_obj(BgL_arg2322z00_1627, BgL_portz00_97); } 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
bgl_display_char(((unsigned char)'.'), BgL_portz00_97); 
bgl_display_char(((unsigned char)' '), BgL_portz00_97); 
bgl_write_obj(
CDR(BgL_lz00_1620), BgL_portz00_97); 
return 
bgl_display_char(((unsigned char)')'), BgL_portz00_97);} } } } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00()
{ AN_OBJECT;
{ /* Ieee/output.scm 24 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00()
{ AN_OBJECT;
{ /* Ieee/output.scm 24 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00()
{ AN_OBJECT;
{ /* Ieee/output.scm 24 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string3480z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string3480z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)466504979), 
BSTRING_TO_STRING(BGl_string3480z00zz__r4_output_6_10_3z00)); 
BGl_modulezd2initializa7ationz75zz__biglooz00(((long)36880833), 
BSTRING_TO_STRING(BGl_string3480z00zz__r4_output_6_10_3z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string3480z00zz__r4_output_6_10_3z00));} 
}

#ifdef __cplusplus
}
#endif
